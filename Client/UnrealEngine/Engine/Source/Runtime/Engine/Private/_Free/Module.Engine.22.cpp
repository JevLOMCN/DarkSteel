// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 614

// Attribute'' @ 1410dc070

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimSync::Attribute__(void)

{
  ::FName::FName(&UE::Anim::FAnimSync::Attribute,"Sync");
  return;
}

// CopyRecords'' @ 1410dc090

void __cdecl `dynamic_initializer_for_'FExposedValueHandler::CopyRecords__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FExposedValueHandler::CopyRecords__);
  return;
}

// DefaultBinding'' @ 1410dc0b0

void __cdecl `dynamic_initializer_for_'ICurveSourceInterface::DefaultBinding__(void)

{
  ::FName::FName(&ICurveSourceInterface::DefaultBinding,"Default");
  return;
}

// InterpolatableTypes'' @ 1410dc0d0

void __cdecl `dynamic_initializer_for_'UE::Anim::AttributeTypes::InterpolatableTypes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::InterpolatableTypes__);
  return;
}

// OnAttributeTypesChangedDelegate'' @ 1410dc0f0

void __cdecl
`dynamic_initializer_for_'UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate__
        );
  return;
}

// Operators'' @ 1410dc110

void __cdecl `dynamic_initializer_for_'UE::Anim::AttributeTypes::Operators__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::Operators__);
  return;
}

// RegisteredTypes'' @ 1410dc130

void __cdecl `dynamic_initializer_for_'UE::Anim::AttributeTypes::RegisteredTypes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::RegisteredTypes__);
  return;
}

// TypeName'' @ 1410dc150

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimSyncGroupScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimSyncGroupScope::TypeName,L"UE::Anim::FAnimSyncGroupScope");
  return;
}

// `dynamic_initializer_for_'AnimationChannelReg'' @ 1410dc170

void __cdecl _dynamic_initializer_for__AnimationChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&AnimationChannelObject,"AnimationChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'CVarAnimBonePoseISPCEnabled'' @ 1410dc1a0

void __cdecl _dynamic_initializer_for__CVarAnimBonePoseISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimBonePoseISPCEnabled,L"a.BonePose.ISPC",&bAnim_BonePose_ISPC_Enabled,
             L"Whether to use ISPC optimizations in bone pose calculations",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimBonePoseISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChunkSizeSeconds'' @ 1410dc1f0

void __cdecl _dynamic_initializer_for__CVarChunkSizeSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChunkSizeSeconds,ChunkSizeSecondsCVarName,&GChunkSizeSeconds,
             L"Size of streaming animation chunk in seconds, 0 or negative signifies only have 1 chunk"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChunkSizeSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarMarkLayerAsGarbageOnUninitialize'' @ 1410dc240

void __cdecl
SharedLinkedAnimLayersConsoleCommands::
_dynamic_initializer_for__CVarMarkLayerAsGarbageOnUninitialize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMarkLayerAsGarbageOnUninitialize,L"a.MarkLayerAsGarbageOnUninitialize",
             &MarkLayerAsGarbageOnUninitialize,
             L"Whether to mark the layers as garbage after uinitializing them.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMarkLayerAsGarbageOnUninitialize__);
  return;
}

// `dynamic_initializer_for_'CVarRecordExternalMorphTargets'' @ 1410dc290

void __cdecl _dynamic_initializer_for__CVarRecordExternalMorphTargets__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarRecordExternalMorphTargets,L"a.RecordExternalMorphTargets",false,
             L"Record the external morph target weights inside animation insights. On default this is disabled, because it can slow down recording."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordExternalMorphTargets__);
  return;
}

// `dynamic_initializer_for_'DefaultBlendSpaceExtractionContext'' @ 1410dc2d0

void __cdecl _dynamic_initializer_for__DefaultBlendSpaceExtractionContext__(void)

{
  DefaultBlendSpaceExtractionContext.DeltaTimeRecord.bPreviousIsValid = false;
  DefaultBlendSpaceExtractionContext.DeltaTimeRecord._9_3_ = 0;
  DefaultBlendSpaceExtractionContext.DeltaTimeRecord.Delta = 0.0;
  DefaultBlendSpaceExtractionContext.DeltaTimeRecord.Previous = 0.0;
  atexit(_dynamic_atexit_destructor_for__DefaultBlendSpaceExtractionContext__);
  return;
}

// `dynamic_initializer_for_'DelayedBuiltInTypesInitializationHelper'' @ 1410dc310

void __cdecl UE::Anim::_dynamic_initializer_for__DelayedBuiltInTypesInitializationHelper__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedBuiltInTypesInitializationHelper,PreObjectSystemReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedUserDefinedStructTypesInitializationHelper'' @ 1410dc370

void __cdecl
UE::Anim::_dynamic_initializer_for__DelayedUserDefinedStructTypesInitializationHelper__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_26>::<lambda_invoker_cdecl>;
  local_38[0] = Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedUserDefinedStructTypesInitializationHelper,EndOfEngineInit,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DummyContainer'' @ 1410dc3d0

void __cdecl UE::Anim::Private::_dynamic_initializer_for__DummyContainer__(void)

{
  FBoneContainer::FBoneContainer(&DummyContainer);
  atexit(_dynamic_atexit_destructor_for__DummyContainer__);
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance'' @ 1410dc400

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingConstantKeyLerpGetPoseRotations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance,&local_18,
             false);
  FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingConstantKeyLerpGetPoseRotations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance'' @ 1410dc460

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingConstantKeyLerpGetPoseScales");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance,&local_18,
             false);
  FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingConstantKeyLerpGetPoseScales__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance'' @ 1410dc4c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance,
             &local_18,false);
  FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance'' @ 1410dc520

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance,
             &local_18,false);
  FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance'' @ 1410dc580

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingPerTrackCompressionGetPoseScales");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance,&local_18,
             false);
  FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingPerTrackCompressionGetPoseScales__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance'' @ 1410dc5e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance,
             &local_18,false);
  FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance'' @ 1410dc640

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance,&local_18,
             false);
  FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance'' @ 1410dc6a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingVariableKeyLerpGetPoseScales");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance,&local_18,
             false);
  FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingVariableKeyLerpGetPoseScales__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance'' @ 1410dc700

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslations");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance,
             &local_18,false);
  FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance._0_8_ =
       &___7FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslations__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'GAnimTraceNameCriticalSection'' @ 1410dc760

void __cdecl _dynamic_initializer_for__GAnimTraceNameCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GAnimTraceNameCriticalSection,4000);
  atexit(_dynamic_atexit_destructor_for__GAnimTraceNameCriticalSection__);
  return;
}

// `dynamic_initializer_for_'GAnimTraceNames'' @ 1410dc790

void __cdecl _dynamic_initializer_for__GAnimTraceNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAnimTraceNames__);
  return;
}

// `dynamic_initializer_for_'GSkeletalMeshTraceAnnotations'' @ 1410dc7b0

void __cdecl _dynamic_initializer_for__GSkeletalMeshTraceAnnotations__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSkeletalMeshTraceAnnotations__);
  return;
}

// `dynamic_initializer_for_'LogAnimMarkerSync'' @ 1410dc7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimMarkerSync__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimMarkerSync,L"LogAnimMarkerSync",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimMarkerSync__);
  return;
}

// `dynamic_initializer_for_'NAME_UCurveSourceInterface_GetBindingName'' @ 1410dc810

void __cdecl _dynamic_initializer_for__NAME_UCurveSourceInterface_GetBindingName__(void)

{
  FName::FName(&NAME_UCurveSourceInterface_GetBindingName,L"GetBindingName");
  return;
}

// `dynamic_initializer_for_'NAME_UCurveSourceInterface_GetCurveValue'' @ 1410dc830

void __cdecl _dynamic_initializer_for__NAME_UCurveSourceInterface_GetCurveValue__(void)

{
  FName::FName(&NAME_UCurveSourceInterface_GetCurveValue,L"GetCurveValue");
  return;
}

// `dynamic_initializer_for_'NAME_UCurveSourceInterface_GetCurves'' @ 1410dc850

void __cdecl _dynamic_initializer_for__NAME_UCurveSourceInterface_GetCurves__(void)

{
  FName::FName(&NAME_UCurveSourceInterface_GetCurves,L"GetCurves");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimStreamable_GetAnimationPose'' @ 1410dc870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimStreamable_GetAnimationPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimStreamable_GetAnimationPose ==
      (FThreadSafeStaticStat<FStat_STAT_AnimStreamable_GetAnimationPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimStreamable_GetAnimationPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStreamable_GetAnimationPose,*pFVar1,
               L"AnimStreamable GetAnimationPose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlendSpace_GetAnimPose'' @ 1410dc900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlendSpace_GetAnimPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlendSpace_GetAnimPose ==
      (FThreadSafeStaticStat<FStat_STAT_BlendSpace_GetAnimPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlendSpace_GetAnimPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendSpace_GetAnimPose,*pFVar1,
               L"BlendSpace GetAnimPose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h__Script_Engine_1927235506'' @ 1410dc990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h__Script_Engine_1927235506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h__Script_Engine_2164519584'' @ 1410dc9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h__Script_Engine_2164519584__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h__Script_Engine_3006298910'' @ 1410dca30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h__Script_Engine_3006298910__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h__Script_Engine_40035874'' @ 1410dca80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h__Script_Engine_40035874__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h__Script_Engine_455016538'' @ 1410dcad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h__Script_Engine_455016538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h__Script_Engine_1217210553'' @ 1410dcb20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h__Script_Engine_1217210553__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h__Script_Engine_3093073226'' @ 1410dcb60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h__Script_Engine_3093073226__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h__Script_Engine_3677666966'' @ 1410dcbb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h__Script_Engine_3677666966__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h__Script_Engine_2967735420'' @ 1410dcbf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h__Script_Engine_2967735420__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h__Script_Engine_1989094419'' @ 1410dcc40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h__Script_Engine_1989094419__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h__Script_Engine_3179421825'' @ 1410dcc90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h__Script_Engine_3179421825__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h__Script_Engine_1352058546'' @ 1410dccd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h__Script_Engine_1352058546__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h__Script_Engine_Statics
             ::ScriptStructInfo,0xc,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h__Script_Engine_3536651609'' @ 1410dcd20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h__Script_Engine_3536651609__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h__Script_Engine_2499800186'' @ 1410dcd70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h__Script_Engine_2499800186__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h__Script_Engine_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h__Script_Engine_2300032136'' @ 1410dcdc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h__Script_Engine_2300032136__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h__Script_Engine_3049170421'' @ 1410dce00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h__Script_Engine_3049170421__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h__Script_Engine_3680482099'' @ 1410dce40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h__Script_Engine_3680482099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h__Script_Engine_1021600327'' @ 1410dce80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h__Script_Engine_1021600327__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h__Script_Engine_4219862073'' @ 1410dced0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h__Script_Engine_4219862073__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_SharedLinkedAnimLayers_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h__Script_Engine_1721037328'' @ 1410dcf10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h__Script_Engine_1721037328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h__Script_Engine_4141633754'' @ 1410dcf50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h__Script_Engine_4141633754__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h__Script_Engine_Statics
             ::EnumInfo,10);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneReference_h__Script_Engine_3701729772'' @ 1410dcfa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneReference_h__Script_Engine_3701729772__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneReference_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h__Script_Engine_2264275102'' @ 1410dcfe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h__Script_Engine_2264275102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h__Script_Engine_4272834689'' @ 1410dd020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h__Script_Engine_4272834689__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h__Script_Engine_471038242'' @ 1410dd060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h__Script_Engine_471038242__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h__Script_Engine_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h__Script_Engine_1859426710'' @ 1410dd0a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h__Script_Engine_1859426710__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// NewStructOps @ 1475066f0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeExposedValueHandler_PropertyAccess,&UE::CoreUObject::Private::Construct<FAnimNodeExposedValueHandler_PropertyAccess>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeExposedValueHandler_PropertyAccess>,&UE::CoreUObject::Private::Destruct<FAnimNodeExposedValueHandler_PropertyAccess>,&UE::CoreUObject::Private::Copy<FAnimNodeExposedValueHandler_PropertyAccess>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147506730

void * __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::_scalar_deleting_destructor_
          (FAnimSubsystem_SharedLinkedAnimLayers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PersistentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLinkedAnimLayerClassData,int>
            ((FLinkedAnimLayerClassData *)(this->ClassesData).AllocatorInstance.Data,
             (this->ClassesData).ArrayNum);
  pFVar1 = (this->ClassesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimSubsystemInstance__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475067a0

void * __thiscall
FAnimSubsystemInstance_NodeRelevancy::_scalar_deleting_destructor_
          (FAnimSubsystemInstance_NodeRelevancy *this,uint param_1)

{
  ~FAnimSubsystemInstance_NodeRelevancy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// NewProp_bSnapToGrid_SetBit @ 1475067e0

void __cdecl
Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 1475067f0

void * __cdecl
Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSubsystemInstance_NodeRelevancy,&UE::CoreUObject::Private::Construct<FAnimSubsystemInstance_NodeRelevancy>,&UE::CoreUObject::Private::ConstructForTests<FAnimSubsystemInstance_NodeRelevancy>,&UE::CoreUObject::Private::Destruct<FAnimSubsystemInstance_NodeRelevancy>,&UE::CoreUObject::Private::Copy<FAnimSubsystemInstance_NodeRelevancy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWrapInput_SetBit @ 147506830

void __cdecl
Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewStructOps @ 147506840

void * __cdecl Z_Construct_UScriptStruct_FBlendParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendParameter,&UE::CoreUObject::Private::Construct<FBlendParameter>,&UE::CoreUObject::Private::ConstructForTests<FBlendParameter>,&UE::CoreUObject::Private::Destruct<FBlendParameter>,&UE::CoreUObject::Private::Copy<FBlendParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147506b90

void * __thiscall
UE::Anim::TAttributeBlendOperator<FQuaternionAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FQuaternionAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FQuaternionAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bUseSingleFrameForBlending_SetBit @ 147506d50

void __cdecl
Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bUseSingleFrameForBlending_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 1475088e0

void * __cdecl Z_Construct_UScriptStruct_FBlendSample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSample,&UE::CoreUObject::Private::Construct<FBlendSample>,&UE::CoreUObject::Private::ConstructForTests<FBlendSample>,&UE::CoreUObject::Private::Destruct<FBlendSample>,&UE::CoreUObject::Private::Copy<FBlendSample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147508950

void * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UScriptStruct_FLinkedAnimLayerClassData @ 147508b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLinkedAnimLayerClassData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData @ 147508bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLinkedAnimLayerInstanceData.InnerSingleton;
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

// NewStructOps @ 147508cb0

void * __cdecl Z_Construct_UScriptStruct_FLinkedAnimLayerInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLinkedAnimLayerInstanceData,&UE::CoreUObject::Private::Construct<FLinkedAnimLayerInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FLinkedAnimLayerInstanceData>,&UE::CoreUObject::Private::Destruct<FLinkedAnimLayerInstanceData>,&UE::CoreUObject::Private::Copy<FLinkedAnimLayerInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147508ed0

void * __cdecl Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSpaceSegment,&UE::CoreUObject::Private::Construct<FBlendSpaceSegment>,&UE::CoreUObject::Private::ConstructForTests<FBlendSpaceSegment>,&UE::CoreUObject::Private::Destruct<FBlendSpaceSegment>,&UE::CoreUObject::Private::Copy<FBlendSpaceSegment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750aab0

void * __cdecl Z_Construct_UScriptStruct_FLinkedAnimLayerClassData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLinkedAnimLayerClassData,&UE::CoreUObject::Private::Construct<FLinkedAnimLayerClassData>,&UE::CoreUObject::Private::ConstructForTests<FLinkedAnimLayerClassData>,&UE::CoreUObject::Private::Destruct<FLinkedAnimLayerClassData>,&UE::CoreUObject::Private::Copy<FLinkedAnimLayerClassData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14750aaf0

void * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 14750ab30

void * __cdecl Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSpaceTriangleEdgeInfo,&UE::CoreUObject::Private::Construct<FBlendSpaceTriangleEdgeInfo>,&UE::CoreUObject::Private::ConstructForTests<FBlendSpaceTriangleEdgeInfo>,&UE::CoreUObject::Private::Destruct<FBlendSpaceTriangleEdgeInfo>,&UE::CoreUObject::Private::Copy<FBlendSpaceTriangleEdgeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FInputRange @ 14750aba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputRange.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputRange.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputRange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputRange.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputRange.InnerSingleton;
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

// NewStructOps @ 14750ac20

void * __cdecl
Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSubsystem_SharedLinkedAnimLayers,&UE::CoreUObject::Private::Construct<FAnimSubsystem_SharedLinkedAnimLayers>,&UE::CoreUObject::Private::ConstructForTests<FAnimSubsystem_SharedLinkedAnimLayers>,&UE::CoreUObject::Private::Destruct<FAnimSubsystem_SharedLinkedAnimLayers>,&UE::CoreUObject::Private::Copy<FAnimSubsystem_SharedLinkedAnimLayers>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750ac60

void * __cdecl Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputScaleBias,&UE::CoreUObject::Private::Construct<FInputScaleBias>,&UE::CoreUObject::Private::ConstructForTests<FInputScaleBias>,&UE::CoreUObject::Private::Destruct<FInputScaleBias>,&UE::CoreUObject::Private::Copy<FInputScaleBias>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750ae20

void * __cdecl Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSpaceTriangle,&UE::CoreUObject::Private::Construct<FBlendSpaceTriangle>,&UE::CoreUObject::Private::ConstructForTests<FBlendSpaceTriangle>,&UE::CoreUObject::Private::Destruct<FBlendSpaceTriangle>,&UE::CoreUObject::Private::Copy<FBlendSpaceTriangle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14750c860

void * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 14750c9a0

void * __cdecl Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputRange,&UE::CoreUObject::Private::Construct<FInputRange>,&UE::CoreUObject::Private::ConstructForTests<FInputRange>,&UE::CoreUObject::Private::Destruct<FInputRange>,&UE::CoreUObject::Private::Copy<FInputRange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750cbb0

void * __cdecl Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWeightedBlendSample,&UE::CoreUObject::Private::Construct<FWeightedBlendSample>,&UE::CoreUObject::Private::ConstructForTests<FWeightedBlendSample>,&UE::CoreUObject::Private::Destruct<FWeightedBlendSample>,&UE::CoreUObject::Private::Copy<FWeightedBlendSample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMapRange_SetBit @ 14750cce0

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bClampResult_SetBit @ 14750ccf0

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bInterpResult_SetBit @ 14750cd00

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 14750cd10

void * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputScaleBiasClamp,&UE::CoreUObject::Private::Construct<FInputScaleBiasClamp>,&UE::CoreUObject::Private::ConstructForTests<FInputScaleBiasClamp>,&UE::CoreUObject::Private::Destruct<FInputScaleBiasClamp>,&UE::CoreUObject::Private::Copy<FInputScaleBiasClamp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750cd50

void * __cdecl Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSpaceData,&UE::CoreUObject::Private::Construct<FBlendSpaceData>,&UE::CoreUObject::Private::ConstructForTests<FBlendSpaceData>,&UE::CoreUObject::Private::Destruct<FBlendSpaceData>,&UE::CoreUObject::Private::Copy<FBlendSpaceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750cd90

void * __cdecl Z_Construct_UScriptStruct_FBoneReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneReference,&UE::CoreUObject::Private::Construct<FBoneReference>,&UE::CoreUObject::Private::ConstructForTests<FBoneReference>,&UE::CoreUObject::Private::Destruct<FBoneReference>,&UE::CoreUObject::Private::Copy<FBoneReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750cdd0

void * __cdecl Z_Construct_UScriptStruct_FEditorElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditorElement,&UE::CoreUObject::Private::Construct<FEditorElement>,&UE::CoreUObject::Private::ConstructForTests<FEditorElement>,&UE::CoreUObject::Private::Destruct<FEditorElement>,&UE::CoreUObject::Private::Copy<FEditorElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bClampResult_SetBit @ 14750ce10

void __cdecl
Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bInterpResult_SetBit @ 14750ce20

void __cdecl
Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14750ce30

void * __cdecl Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputClampConstants,&UE::CoreUObject::Private::Construct<FInputClampConstants>,&UE::CoreUObject::Private::ConstructForTests<FInputClampConstants>,&UE::CoreUObject::Private::Destruct<FInputClampConstants>,&UE::CoreUObject::Private::Copy<FInputClampConstants>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750cff0

void * __cdecl Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGridBlendSample,&UE::CoreUObject::Private::Construct<FGridBlendSample>,&UE::CoreUObject::Private::ConstructForTests<FGridBlendSample>,&UE::CoreUObject::Private::Destruct<FGridBlendSample>,&UE::CoreUObject::Private::Copy<FGridBlendSample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750d030

void * __cdecl Z_Construct_UScriptStruct_FInputClampState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputClampState,&UE::CoreUObject::Private::Construct<FInputClampState>,&UE::CoreUObject::Private::ConstructForTests<FInputClampState>,&UE::CoreUObject::Private::Destruct<FInputClampState>,&UE::CoreUObject::Private::Copy<FInputClampState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750d1b0

void * __cdecl Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerBoneInterpolation,&UE::CoreUObject::Private::Construct<FPerBoneInterpolation>,&UE::CoreUObject::Private::ConstructForTests<FPerBoneInterpolation>,&UE::CoreUObject::Private::Destruct<FPerBoneInterpolation>,&UE::CoreUObject::Private::Copy<FPerBoneInterpolation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMapRange_SetBit @ 14750d240

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bClampResult_SetBit @ 14750d260

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bInterpResult_SetBit @ 14750d270

void __cdecl
Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 14750d280

void * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputScaleBiasClampConstants,&UE::CoreUObject::Private::Construct<FInputScaleBiasClampConstants>,&UE::CoreUObject::Private::ConstructForTests<FInputScaleBiasClampConstants>,&UE::CoreUObject::Private::Destruct<FInputScaleBiasClampConstants>,&UE::CoreUObject::Private::Copy<FInputScaleBiasClampConstants>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ENotifyTriggerMode_StaticEnum @ 14750d380

UEnum * __cdecl ENotifyTriggerMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyTriggerMode,(UObject *)pUVar1,
                       L"ENotifyTriggerMode");
  }
  return Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton;
}

// Z_Construct_UClass_UAnimationAttributeIdentifierExtensions @ 14750d3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationAttributeIdentifierExtensions(void)

{
  if (Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton,
               &Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimationAttributeIdentifier @ 14750d400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationAttributeIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.InnerSingleton;
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

// NewStructOps @ 14750d480

void * __cdecl Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationAttributeIdentifier,&UE::CoreUObject::Private::Construct<FAnimationAttributeIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FAnimationAttributeIdentifier>,&UE::CoreUObject::Private::Destruct<FAnimationAttributeIdentifier>,&UE::CoreUObject::Private::SerializeArchive<FAnimationAttributeIdentifier>,&UE::CoreUObject::Private::Copy<FAnimationAttributeIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FAnimationAttributeIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FSocketReference @ 14750d4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSocketReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSocketReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSocketReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FSocketReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSocketReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSocketReference.InnerSingleton;
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

// NewStructOps @ 14750d540

void * __cdecl Z_Construct_UScriptStruct_FSocketReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSocketReference,&UE::CoreUObject::Private::Construct<FSocketReference>,&UE::CoreUObject::Private::ConstructForTests<FSocketReference>,&UE::CoreUObject::Private::Destruct<FSocketReference>,&UE::CoreUObject::Private::Copy<FSocketReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bContainsRotationOffsetMeshSpaceSamples_SetBit @ 14750d580

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bTargetWeightInterpolationEaseInOut_SetBit @ 14750d590

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bAllowMeshSpaceBlending_SetBit @ 14750d5a0

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// NewProp_bLoop_SetBit @ 14750d5b0

void __cdecl Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
  return;
}

// NewProp_bAllowMarkerBasedSync_SetBit @ 14750d5c0

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMarkerBasedSync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc3) = 1;
  return;
}

// NewProp_bShouldMatchSyncPhases_SetBit @ 14750d5d0

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bShouldMatchSyncPhases_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  return;
}

// NewStructOps @ 14750d5f0

void * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputScaleBiasClampState,&UE::CoreUObject::Private::Construct<FInputScaleBiasClampState>,&UE::CoreUObject::Private::ConstructForTests<FInputScaleBiasClampState>,&UE::CoreUObject::Private::Destruct<FInputScaleBiasClampState>,&UE::CoreUObject::Private::Copy<FInputScaleBiasClampState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInterpolateUsingGrid_SetBit @ 14750d630

void __cdecl
Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  return;
}

// Z_Construct_UClass_UAnimStreamable @ 14750d640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimStreamable(void)

{
  if (Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton,
               &Z_Construct_UClass_UAnimStreamable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAnimInterpolationType @ 14750d680

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimInterpolationType(void)

{
  if (Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRawAnimSequenceTrack @ 14750d6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRawAnimSequenceTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRawAnimSequenceTrack.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRawAnimSequenceTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRawAnimSequenceTrack.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRawAnimSequenceTrack.InnerSingleton;
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

// NewStructOps @ 14750d740

void * __cdecl
Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationAttributeIdentifierArray,&UE::CoreUObject::Private::Construct<FAnimationAttributeIdentifierArray>,&UE::CoreUObject::Private::ConstructForTests<FAnimationAttributeIdentifierArray>,&UE::CoreUObject::Private::Destruct<FAnimationAttributeIdentifierArray>,&UE::CoreUObject::Private::Copy<FAnimationAttributeIdentifierArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableRootMotion_SetBit @ 14750d780

void __cdecl
Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bForceRootLock_SetBit @ 14750d790

void __cdecl
Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf2) = 1;
  return;
}

// NewProp_bUseNormalizedRootMotionScale_SetBit @ 14750d7a0

void __cdecl
Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf3) = 1;
  return;
}

// NewProp_bUseSocket_SetBit @ 14750d7c0

void __cdecl
Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14750d7f0

void * __cdecl Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneSocketTarget,&UE::CoreUObject::Private::Construct<FBoneSocketTarget>,&UE::CoreUObject::Private::ConstructForTests<FBoneSocketTarget>,&UE::CoreUObject::Private::Destruct<FBoneSocketTarget>,&UE::CoreUObject::Private::Copy<FBoneSocketTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EAnimAlphaInputType_StaticEnum @ 14750d830

UEnum * __cdecl EAnimAlphaInputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType,(UObject *)pUVar1,
                       L"EAnimAlphaInputType");
  }
  return Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14750d8a0

void __cdecl
Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bInitialized_SetBit @ 14750d8b0

void __cdecl
Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 14750d8c0

void * __cdecl Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputAlphaBoolBlend,&UE::CoreUObject::Private::Construct<FInputAlphaBoolBlend>,&UE::CoreUObject::Private::ConstructForTests<FInputAlphaBoolBlend>,&UE::CoreUObject::Private::Destruct<FInputAlphaBoolBlend>,&UE::CoreUObject::Private::Copy<FInputAlphaBoolBlend>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid @ 14750d900

UFunction * __cdecl Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationAttributeIdentifierExtensions_IsValid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14750de50

void * __thiscall
FAnimSubsystem_Tag::_scalar_deleting_destructor_(FAnimSubsystem_Tag *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->NodeIndices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeIndices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeIndices);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// NewStructOps @ 14750deb0

void * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSubsystem_Tag,&UE::CoreUObject::Private::Construct<FAnimSubsystem_Tag>,&UE::CoreUObject::Private::ConstructForTests<FAnimSubsystem_Tag>,&UE::CoreUObject::Private::Destruct<FAnimSubsystem_Tag>,&UE::CoreUObject::Private::Copy<FAnimSubsystem_Tag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlendProfileProviderInterface_NoRegister @ 14750e050

UClass * __cdecl Z_Construct_UClass_UBlendProfileProviderInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfileProviderInterface",
               &Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton,
               UBlendProfileProviderInterface::StaticRegisterNativesUBlendProfileProviderInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendProfileProviderInterface>,
               InternalVTableHelperCtorCaller<UBlendProfileProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfileProviderInterface.InnerSingleton;
}

// Z_Construct_UClass_UBlendProfile_NoRegister @ 14750e110

UClass * __cdecl Z_Construct_UClass_UBlendProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfile",
               &Z_Registration_Info_UClass_UBlendProfile.InnerSingleton,
               UBlendProfile::StaticRegisterNativesUBlendProfile,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendProfile>,
               InternalVTableHelperCtorCaller<UBlendProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfile.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData @ 14750e9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedAnimAssetPlayerData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedAnimRelevancyData @ 14750ea30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedAnimRelevancyData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedAnimRelevancyData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedAnimStateArray @ 14750eab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedAnimStateArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedAnimStateData @ 14750eb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedAnimStateData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedAnimStateData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCachedAnimStateData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedAnimTransitionData @ 14750ebb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedAnimTransitionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedAnimTransitionData.InnerSingleton;
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

// NewStructOps @ 14750ec30

void * __cdecl Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedAnimStateData,&UE::CoreUObject::Private::Construct<FCachedAnimStateData>,&UE::CoreUObject::Private::ConstructForTests<FCachedAnimStateData>,&UE::CoreUObject::Private::Destruct<FCachedAnimStateData>,&UE::CoreUObject::Private::Copy<FCachedAnimStateData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750f0a0

void * __cdecl Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedAnimStateArray,&UE::CoreUObject::Private::Construct<FCachedAnimStateArray>,&UE::CoreUObject::Private::ConstructForTests<FCachedAnimStateArray>,&UE::CoreUObject::Private::Destruct<FCachedAnimStateArray>,&UE::CoreUObject::Private::Copy<FCachedAnimStateArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750f470

void * __cdecl Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedAnimAssetPlayerData,&UE::CoreUObject::Private::Construct<FCachedAnimAssetPlayerData>,&UE::CoreUObject::Private::ConstructForTests<FCachedAnimAssetPlayerData>,&UE::CoreUObject::Private::Destruct<FCachedAnimAssetPlayerData>,&UE::CoreUObject::Private::Copy<FCachedAnimAssetPlayerData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14750f510

void * __cdecl Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedAnimRelevancyData,&UE::CoreUObject::Private::Construct<FCachedAnimRelevancyData>,&UE::CoreUObject::Private::ConstructForTests<FCachedAnimRelevancyData>,&UE::CoreUObject::Private::Destruct<FCachedAnimRelevancyData>,&UE::CoreUObject::Private::Copy<FCachedAnimRelevancyData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14750f5c0

void * __thiscall
FAnimSingleNodeInstanceProxy::_scalar_deleting_destructor_
          (FAnimSingleNodeInstanceProxy *this,uint param_1)

{
  ~FAnimSingleNodeInstanceProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x910);
  }
  return this;
}

// NewStructOps @ 14750f620

void * __cdecl Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedAnimTransitionData,&UE::CoreUObject::Private::Construct<FCachedAnimTransitionData>,&UE::CoreUObject::Private::ConstructForTests<FCachedAnimTransitionData>,&UE::CoreUObject::Private::Destruct<FCachedAnimTransitionData>,&UE::CoreUObject::Private::Copy<FCachedAnimTransitionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlendProfile @ 14750f660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendProfile(void)

{
  if (Z_Registration_Info_UClass_UBlendProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendProfile.OuterSingleton,
               &Z_Construct_UClass_UBlendProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendProfile.OuterSingleton;
}

// Z_Construct_UClass_UBlendProfileProviderInterface @ 14750f6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendProfileProviderInterface(void)

{
  if (Z_Registration_Info_UClass_UBlendProfileProviderInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendProfileProviderInterface.OuterSingleton,
               &Z_Construct_UClass_UBlendProfileProviderInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendProfileProviderInterface.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EBlendProfileMode @ 14750f6e0

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlendProfileMode(void)

{
  if (Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBlendProfileBoneEntry @ 14750f720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendProfileBoneEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendProfileBoneEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendProfileBoneEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendProfileBoneEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendProfileBoneEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBoneReference @ 14750f7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneReference.InnerSingleton;
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

// EBlendProfileMode_StaticEnum @ 14750f820

UEnum * __cdecl EBlendProfileMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendProfileMode,(UObject *)pUVar1,
                       L"EBlendProfileMode");
  }
  return Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton;
}

// Z_Construct_UClass_UAnimSingleNodeInstance @ 14750f8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSingleNodeInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimSingleNodeInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature @ 14750f8f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14750f930

void * __cdecl Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendProfileBoneEntry,&UE::CoreUObject::Private::Construct<FBlendProfileBoneEntry>,&UE::CoreUObject::Private::ConstructForTests<FBlendProfileBoneEntry>,&UE::CoreUObject::Private::Destruct<FBlendProfileBoneEntry>,&UE::CoreUObject::Private::Copy<FBlendProfileBoneEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset @ 14750f9d0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength @ 14750fc80

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable @ 14750ffa0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bIsLooping_SetBit @ 147510060

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsSkeletonBlendProfile_SetBit @ 1475100c0

void __cdecl
Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper_Statics::
NewProp_bIsSkeletonBlendProfile_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147510110

void * __cdecl Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendProfileInterfaceWrapper,&UE::CoreUObject::Private::Construct<FBlendProfileInterfaceWrapper>,&UE::CoreUObject::Private::ConstructForTests<FBlendProfileInterfaceWrapper>,&UE::CoreUObject::Private::Destruct<FBlendProfileInterfaceWrapper>,&UE::CoreUObject::Private::Copy<FBlendProfileInterfaceWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim @ 147510150

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsLooping_SetBit @ 147510290

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UBlendSpace1D @ 147510320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendSpace1D(void)

{
  if (Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton,
               &Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset @ 1475103a0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bScaleAnimation_SetBit @ 1475103e0

void __cdecl Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 1;
  return;
}

// `scalar_deleting_destructor' @ 1475103f0

void * __thiscall
FAnimSubsystem_Base::_scalar_deleting_destructor_(FAnimSubsystem_Base *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExposedValueHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ValueHandlersCriticalSection);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 147510480

void * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSubsystem_Base,&UE::CoreUObject::Private::Construct<FAnimSubsystem_Base>,&UE::CoreUObject::Private::ConstructForTests<FAnimSubsystem_Base>,&UE::CoreUObject::Private::Destruct<FAnimSubsystem_Base>,&UE::CoreUObject::Private::Copy<FAnimSubsystem_Base>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition @ 147510500

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsLooping_SetBit @ 147510540

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping @ 147510550

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URawAnimSequenceTrackExtensions @ 147510590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URawAnimSequenceTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EMontageNotifyTickType @ 1475105d0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMontageNotifyTickType(void)

{
  if (Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENotifyFilterType @ 147510610

UEnum * __cdecl Z_Construct_UEnum_Engine_ENotifyFilterType(void)

{
  if (Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimSyncMarker @ 147510650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSyncMarker(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSyncMarker.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSyncMarker.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSyncMarker.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSyncMarker.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPerBoneBlendWeight @ 1475106d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerBoneBlendWeight(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerBoneBlendWeight.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerBoneBlendWeight.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerBoneBlendWeight.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPerBoneBlendWeight.InnerSingleton;
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

// EBoneAxis_StaticEnum @ 147510750

UEnum * __cdecl EBoneAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneAxis,(UObject *)pUVar1,L"EBoneAxis");
  }
  return Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton;
}

// NewStructOps @ 147510790

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SingleNode,&UE::CoreUObject::Private::Construct<FAnimNode_SingleNode>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SingleNode>,&UE::CoreUObject::Private::Destruct<FAnimNode_SingleNode>,&UE::CoreUObject::Private::Copy<FAnimNode_SingleNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable @ 1475107d0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// EBoneControlSpace_StaticEnum @ 147510860

UEnum * __cdecl EBoneControlSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneControlSpace,(UObject *)pUVar1,
                       L"EBoneControlSpace");
  }
  return Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton;
}

// NewProp_bIsPlaying_SetBit @ 1475108a0

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying @ 147510960

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EBoneRotationSource_StaticEnum @ 1475109a0

UEnum * __cdecl EBoneRotationSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneRotationSource,(UObject *)pUVar1,
                       L"EBoneRotationSource");
  }
  return Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton;
}

// EMontageNotifyTickType_StaticEnum @ 147510b60

UEnum * __cdecl EMontageNotifyTickType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageNotifyTickType,(UObject *)pUVar1,
                       L"EMontageNotifyTickType");
  }
  return Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate @ 147510ba0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFireNotifies_SetBit @ 147510c10

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ENotifyFilterType_StaticEnum @ 147510c20

UEnum * __cdecl ENotifyFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyFilterType,(UObject *)pUVar1,
                       L"ENotifyFilterType");
  }
  return Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton;
}

// NewStructOps @ 147510c60

void * __cdecl Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x910;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSingleNodeInstanceProxy,&UE::CoreUObject::Private::Construct<FAnimSingleNodeInstanceProxy>,&UE::CoreUObject::Private::ConstructForTests<FAnimSingleNodeInstanceProxy>,&UE::CoreUObject::Private::Destruct<FAnimSingleNodeInstanceProxy>,&UE::CoreUObject::Private::Copy<FAnimSingleNodeInstanceProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition @ 147510ce0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147510e10

void * __cdecl Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerBoneBlendWeight,&UE::CoreUObject::Private::Construct<FPerBoneBlendWeight>,&UE::CoreUObject::Private::ConstructForTests<FPerBoneBlendWeight>,&UE::CoreUObject::Private::Destruct<FPerBoneBlendWeight>,&UE::CoreUObject::Private::Copy<FPerBoneBlendWeight>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bFireNotifies_SetBit @ 147510e50

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::
NewProp_bFireNotifies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime @ 147510e60

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemoveIfZero_SetBit @ 147510eb0

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::
NewProp_bRemoveIfZero_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 147510ff0

void * __cdecl Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerBoneBlendWeights,&UE::CoreUObject::Private::Construct<FPerBoneBlendWeights>,&UE::CoreUObject::Private::ConstructForTests<FPerBoneBlendWeights>,&UE::CoreUObject::Private::Destruct<FPerBoneBlendWeights>,&UE::CoreUObject::Private::Copy<FPerBoneBlendWeights>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride @ 147511030

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147511130

void * __thiscall
FAnimSubsystem_PropertyAccess::_scalar_deleting_destructor_
          (FAnimSubsystem_PropertyAccess *this,uint param_1)

{
  FPropertyAccessLibrary::~FPropertyAccessLibrary(&this->Library);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// EAnimPropertyAccessCallSite_StaticEnum @ 1475111b0

UEnum * __cdecl EAnimPropertyAccessCallSite_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite,(UObject *)pUVar1,
                       L"EAnimPropertyAccessCallSite");
  }
  return Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton;
}

// NewProp_bInReverse_SetBit @ 1475111f0

void __cdecl
Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse @ 1475112c0

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147511300

void * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSubsystem_PropertyAccess,&UE::CoreUObject::Private::Construct<FAnimSubsystem_PropertyAccess>,&UE::CoreUObject::Private::ConstructForTests<FAnimSubsystem_PropertyAccess>,&UE::CoreUObject::Private::Destruct<FAnimSubsystem_PropertyAccess>,&UE::CoreUObject::Private::Copy<FAnimSubsystem_PropertyAccess>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim @ 147511340

UFunction * __cdecl Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bConvertedFromBranchingPoint_SetBit @ 147511380

void __cdecl
Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UClass_UCachedAnimDataLibrary @ 147511390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCachedAnimDataLibrary(void)

{
  if (Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton,
               &Z_Construct_UClass_UCachedAnimDataLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton;
}

// NewProp_bCanBeFilteredViaRequest_SetBit @ 1475113d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bCanBeFilteredViaRequest_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bTriggerOnDedicatedServer_SetBit @ 1475113e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// NewProp_bTriggerOnFollower_SetBit @ 1475113f0

void __cdecl
Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  return;
}

// NewStructOps @ 147511410

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyEvent,&UE::CoreUObject::Private::Construct<FAnimNotifyEvent>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyEvent>,&UE::CoreUObject::Private::Destruct<FAnimNotifyEvent>,&UE::CoreUObject::Private::Copy<FAnimNotifyEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime @ 1475114b0

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio @ 147511670

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration @ 147511760

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight @ 1475117a0

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1475117e0

void * __cdecl Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSyncMarker,&UE::CoreUObject::Private::Construct<FAnimSyncMarker>,&UE::CoreUObject::Private::ConstructForTests<FAnimSyncMarker>,&UE::CoreUObject::Private::Destruct<FAnimSyncMarker>,&UE::CoreUObject::Private::Copy<FAnimSyncMarker>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight @ 147511820

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimSequenceBase @ 147511860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSequenceBase(void)

{
  if (Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton,
               &Z_Construct_UClass_UAnimSequenceBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimNotifyEvent @ 1475118b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.InnerSingleton;
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

// ETypeAdvanceAnim_StaticEnum @ 147511950

UEnum * __cdecl ETypeAdvanceAnim_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETypeAdvanceAnim,(UObject *)pUVar1,
                       L"ETypeAdvanceAnim");
  }
  return Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton;
}

// NewStructOps @ 147511990

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyTrack,&UE::CoreUObject::Private::Construct<FAnimNotifyTrack>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyTrack>,&UE::CoreUObject::Private::Destruct<FAnimNotifyTrack>,&UE::CoreUObject::Private::Copy<FAnimNotifyTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime @ 1475119d0

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining @ 147511af0

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLoop_SetBit @ 147511b30

void __cdecl Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  return;
}

// EAdditiveAnimationType_StaticEnum @ 147511b40

UEnum * __cdecl EAdditiveAnimationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveAnimationType,(UObject *)pUVar1,
                       L"EAdditiveAnimationType");
  }
  return Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction @ 147511b80

UFunction * __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ECurveBlendOption_StaticEnum @ 147511c40

UEnum * __cdecl ECurveBlendOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECurveBlendOption,(UObject *)pUVar1,
                       L"ECurveBlendOption");
  }
  return Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight @ 147511d00

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147511e20

void * __cdecl Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMarkerSyncData,&UE::CoreUObject::Private::Construct<FMarkerSyncData>,&UE::CoreUObject::Private::ConstructForTests<FMarkerSyncData>,&UE::CoreUObject::Private::Destruct<FMarkerSyncData>,&UE::CoreUObject::Private::Copy<FMarkerSyncData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147511fb0

void __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UClass_UAnimStateMachineTypes @ 147511fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimStateMachineTypes(void)

{
  if (Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton,
               &Z_Construct_UClass_UAnimStateMachineTypes_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETransitionLogicType @ 147512000

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransitionLogicType(void)

{
  if (Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimationStateBase @ 147512040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationStateBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationStateBase.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationStateBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationStateBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationStateBase.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimationStateBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates @ 1475120c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationTransitionBetweenStates.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationTransitionBetweenStates.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationTransitionBetweenStates.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationTransitionBetweenStates.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationTransitionRule @ 147512140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationTransitionRule(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationTransitionRule.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationTransitionRule.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationTransitionRule.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationTransitionRule.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBakedAnimationState @ 1475121c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBakedAnimationState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBakedAnimationState.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBakedAnimationState.InnerSingleton,
               &Z_Construct_UScriptStruct_FBakedAnimationState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBakedAnimationState.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBakedAnimationState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBakedStateExitTransition @ 147512250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBakedStateExitTransition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBakedStateExitTransition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBakedStateExitTransition.InnerSingleton,
               &Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBakedStateExitTransition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBakedStateExitTransition.InnerSingleton;
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

// ETransitionRequestQueueMode_StaticEnum @ 1475122d0

UEnum * __cdecl ETransitionRequestQueueMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode,(UObject *)pUVar1,
                       L"ETransitionRequestQueueMode");
  }
  return Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight @ 147512310

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ETransitionRequestOverwriteMode_StaticEnum @ 147512390

UEnum * __cdecl ETransitionRequestOverwriteMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode,(UObject *)pUVar1,
                       L"ETransitionRequestOverwriteMode");
  }
  return Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1475123d0

void __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// EAnimInterpolationType_StaticEnum @ 1475123e0

UEnum * __cdecl EAnimInterpolationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInterpolationType,(UObject *)pUVar1,
                       L"EAnimInterpolationType");
  }
  return Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant @ 147512420

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ETransitionBlendMode_StaticEnum @ 147512460

UEnum * __cdecl ETransitionBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionBlendMode,(UObject *)pUVar1,
                       L"ETransitionBlendMode");
  }
  return Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton;
}

// EAxisOption_StaticEnum @ 1475124a0

UEnum * __cdecl EAxisOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAxisOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAxisOption,(UObject *)pUVar1,L"EAxisOption");
  }
  return Z_Registration_Info_UEnum_EAxisOption.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1475124e0

void __cdecl
Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// ETransitionLogicType_StaticEnum @ 1475124f0

UEnum * __cdecl ETransitionLogicType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionLogicType,(UObject *)pUVar1,
                       L"ETransitionLogicType");
  }
  return Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton;
}

// Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant @ 1475125f0

UFunction * __cdecl Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EComponentType_StaticEnum @ 147512630

UEnum * __cdecl EComponentType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EComponentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EComponentType,(UObject *)pUVar1,L"EComponentType");
  }
  return Z_Registration_Info_UEnum_EComponentType.OuterSingleton;
}

// NewProp_TransitionReturnVal_SetBit @ 147512670

void __cdecl
Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 147512680

void * __cdecl Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationTransitionRule,&UE::CoreUObject::Private::Construct<FAnimationTransitionRule>,&UE::CoreUObject::Private::ConstructForTests<FAnimationTransitionRule>,&UE::CoreUObject::Private::Destruct<FAnimationTransitionRule>,&UE::CoreUObject::Private::Copy<FAnimationTransitionRule>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147512780

void * __cdecl Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackToSkeletonMap,&UE::CoreUObject::Private::Construct<FTrackToSkeletonMap>,&UE::CoreUObject::Private::ConstructForTests<FTrackToSkeletonMap>,&UE::CoreUObject::Private::Destruct<FTrackToSkeletonMap>,&UE::CoreUObject::Private::Copy<FTrackToSkeletonMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147512ab0

void * __cdecl Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationStateBase,&UE::CoreUObject::Private::Construct<FAnimationStateBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimationStateBase>,&UE::CoreUObject::Private::Destruct<FAnimationStateBase>,&UE::CoreUObject::Private::Copy<FAnimationStateBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147512af0

void * __cdecl Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRawAnimSequenceTrack,&UE::CoreUObject::Private::Construct<FRawAnimSequenceTrack>,&UE::CoreUObject::Private::ConstructForTests<FRawAnimSequenceTrack>,&UE::CoreUObject::Private::Destruct<FRawAnimSequenceTrack>,&UE::CoreUObject::Private::SerializeArchive<FRawAnimSequenceTrack>,&UE::CoreUObject::Private::Copy<FRawAnimSequenceTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147512b80

void * __cdecl Z_Construct_UScriptStruct_FAnimationState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationState,&UE::CoreUObject::Private::Construct<FAnimationState>,&UE::CoreUObject::Private::ConstructForTests<FAnimationState>,&UE::CoreUObject::Private::Destruct<FAnimationState>,&UE::CoreUObject::Private::Copy<FAnimationState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys @ 147512cb0

UFunction * __cdecl Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimationCurveIdentifierExtensions @ 147512cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationCurveIdentifierExtensions(void)

{
  if (Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton,
               &Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETransformCurveChannel @ 147512d30

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransformCurveChannel(void)

{
  if (Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransformCurveChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransformCurveChannel.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EVectorCurveChannel @ 147512d70

UEnum * __cdecl Z_Construct_UEnum_Engine_EVectorCurveChannel(void)

{
  if (Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVectorCurveChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVectorCurveChannel.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimationCurveIdentifier @ 147512db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationCurveIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.InnerSingleton;
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

// ETransformCurveChannel_StaticEnum @ 147512e30

UEnum * __cdecl ETransformCurveChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransformCurveChannel,(UObject *)pUVar1,
                       L"ETransformCurveChannel");
  }
  return Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton;
}

// Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys @ 147512e70

UFunction * __cdecl Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EVectorCurveChannel_StaticEnum @ 147512eb0

UEnum * __cdecl EVectorCurveChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVectorCurveChannel,(UObject *)pUVar1,
                       L"EVectorCurveChannel");
  }
  return Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton;
}

// NewProp_bAllowInertializationForSelfTransitions_SetBit @ 147512ef0

void __cdecl
Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::
NewProp_bAllowInertializationForSelfTransitions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x36) = *(byte *)((longlong)param_1 + 0x36) | 1;
  return;
}

// NewStructOps @ 147512f00

void * __cdecl
Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationTransitionBetweenStates,&UE::CoreUObject::Private::Construct<FAnimationTransitionBetweenStates>,&UE::CoreUObject::Private::ConstructForTests<FAnimationTransitionBetweenStates>,&UE::CoreUObject::Private::Destruct<FAnimationTransitionBetweenStates>,&UE::CoreUObject::Private::Copy<FAnimationTransitionBetweenStates>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1475130e0

void * __cdecl Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationCurveIdentifier,&UE::CoreUObject::Private::Construct<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::Destruct<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::PostSerialize<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::Copy<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::Identical<FAnimationCurveIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FAnimationCurveIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys @ 147513120

UFunction * __cdecl Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName @ 147513460

UFunction * __cdecl Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDesiredTransitionReturnValue_SetBit @ 1475134a0

void __cdecl
Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::
NewProp_bDesiredTransitionReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bAutomaticRemainingTimeRule_SetBit @ 1475134b0

void __cdecl
Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::
NewProp_bAutomaticRemainingTimeRule_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 147513570

void * __cdecl Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBakedStateExitTransition,&UE::CoreUObject::Private::Construct<FBakedStateExitTransition>,&UE::CoreUObject::Private::ConstructForTests<FBakedStateExitTransition>,&UE::CoreUObject::Private::Destruct<FBakedStateExitTransition>,&UE::CoreUObject::Private::Copy<FBakedStateExitTransition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType @ 147513720

UFunction * __cdecl Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_GetType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1475137b0

void __cdecl
Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid @ 147513950

UFunction * __cdecl Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationCurveIdentifierExtensions_IsValid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAlwaysResetOnEntry_SetBit @ 147513a40

void __cdecl
Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bIsAConduit_SetBit @ 147513a50

void __cdecl
Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  return;
}

// NewStructOps @ 147513a80

void * __cdecl Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBakedAnimationState,&UE::CoreUObject::Private::Construct<FBakedAnimationState>,&UE::CoreUObject::Private::ConstructForTests<FBakedAnimationState>,&UE::CoreUObject::Private::Destruct<FBakedAnimationState>,&UE::CoreUObject::Private::Copy<FBakedAnimationState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147515a10

void * __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseRotations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseRotations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 147515bb0

void * __cdecl Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBakedAnimationStateMachine,&UE::CoreUObject::Private::Construct<FBakedAnimationStateMachine>,&UE::CoreUObject::Private::ConstructForTests<FBakedAnimationStateMachine>,&UE::CoreUObject::Private::Destruct<FBakedAnimationStateMachine>,&UE::CoreUObject::Private::Copy<FBakedAnimationStateMachine>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCurveSourceInterface @ 147515cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCurveSourceInterface(void)

{
  if (Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton,
               &Z_Construct_UClass_UCurveSourceInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCurveSourceInterface.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNamedCurveValue @ 147515cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedCurveValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedCurveValue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedCurveValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedCurveValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedCurveValue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamedCurveValue.InnerSingleton;
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

// NewStructOps @ 147515d90

void * __cdecl Z_Construct_UScriptStruct_FNamedCurveValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedCurveValue,&UE::CoreUObject::Private::Construct<FNamedCurveValue>,&UE::CoreUObject::Private::ConstructForTests<FNamedCurveValue>,&UE::CoreUObject::Private::Destruct<FNamedCurveValue>,&UE::CoreUObject::Private::Copy<FNamedCurveValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147515dd0

void * __thiscall
FAnimNodeExposedValueHandler::_scalar_deleting_destructor_
          (FAnimNodeExposedValueHandler *this,uint param_1)

{
  *this = (FAnimNodeExposedValueHandler)&___7FAnimNodeExposedValueHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147516020

void * __thiscall
FAnimNodeExposedValueHandler_Base::_scalar_deleting_destructor_
          (FAnimNodeExposedValueHandler_Base *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNodeExposedValueHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UBoneMaskFilter @ 147516520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBoneMaskFilter(void)

{
  if (Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton,
               &Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBranchFilter @ 147516560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBranchFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBranchFilter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBranchFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FBranchFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBranchFilter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBranchFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputBlendPose @ 1475165e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputBlendPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputBlendPose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputBlendPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputBlendPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputBlendPose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputBlendPose.InnerSingleton;
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

// NewStructOps @ 147516660

void * __cdecl Z_Construct_UScriptStruct_FBranchFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBranchFilter,&UE::CoreUObject::Private::Construct<FBranchFilter>,&UE::CoreUObject::Private::ConstructForTests<FBranchFilter>,&UE::CoreUObject::Private::Destruct<FBranchFilter>,&UE::CoreUObject::Private::Copy<FBranchFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCurveSourceInterface_GetBindingName @ 147516830

UFunction * __cdecl Z_Construct_UFunction_UCurveSourceInterface_GetBindingName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveSourceInterface_GetBindingName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147516a40

void * __cdecl Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputBlendPose,&UE::CoreUObject::Private::Construct<FInputBlendPose>,&UE::CoreUObject::Private::ConstructForTests<FInputBlendPose>,&UE::CoreUObject::Private::Destruct<FInputBlendPose>,&UE::CoreUObject::Private::Copy<FInputBlendPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147516df0

void * __thiscall
UE::Anim::TAttributeBlendOperator<FFloatAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FFloatAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FFloatAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147516e30

void * __thiscall
FAnimNodeExposedValueHandler_PropertyAccess::_scalar_deleting_destructor_
          (FAnimNodeExposedValueHandler_PropertyAccess *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CopyRecords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNodeExposedValueHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_UAssetMappingTable @ 1475172b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetMappingTable(void)

{
  if (Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton,
               &Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAssetMapping @ 147517330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetMapping.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetMapping.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetMapping.InnerSingleton;
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

// NewStructOps @ 147517510

void * __cdecl Z_Construct_UScriptStruct_FAssetMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetMapping,&UE::CoreUObject::Private::Construct<FAssetMapping>,&UE::CoreUObject::Private::ConstructForTests<FAssetMapping>,&UE::CoreUObject::Private::Destruct<FAssetMapping>,&UE::CoreUObject::Private::Copy<FAssetMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1475191b0

void * __thiscall
UE::Anim::TAttributeBlendOperator<FIntegerAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FIntegerAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FIntegerAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475191f0

void * __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UCurveSourceInterface_GetCurves @ 147519320

UFunction * __cdecl Z_Construct_UFunction_UCurveSourceInterface_GetCurves(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveSourceInterface_GetCurves_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14751afd0

void * __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseScales::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseScales *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue @ 14751b240

UFunction * __cdecl Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCurveSourceInterface_GetCurveValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14751b460

void * __thiscall
UE::Anim::TAttributeBlendOperator<FStringAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FStringAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FStringAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_Engine_EPostCopyOperation @ 14751b680

UEnum * __cdecl Z_Construct_UEnum_Engine_EPostCopyOperation(void)

{
  if (Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler @ 14751b6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base @ 14751b740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_Base.InnerSingleton;
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

// Z_Construct_UScriptStruct_FExposedValueCopyRecord @ 14751b7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExposedValueCopyRecord(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExposedValueCopyRecord.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExposedValueCopyRecord.InnerSingleton,
               &Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExposedValueCopyRecord.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FExposedValueCopyRecord.InnerSingleton;
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

// EPostCopyOperation_StaticEnum @ 14751b850

UEnum * __cdecl EPostCopyOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPostCopyOperation,(UObject *)pUVar1,
                       L"EPostCopyOperation");
  }
  return Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14751d580

void * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_bOnlyUpdateWhenActive_SetBit @ 14751d5c0

void __cdecl
Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_bOnlyUpdateWhenActive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewStructOps @ 14751d5d0

void * __cdecl Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FExposedValueCopyRecord,&UE::CoreUObject::Private::Construct<FExposedValueCopyRecord>,&UE::CoreUObject::Private::ConstructForTests<FExposedValueCopyRecord>,&UE::CoreUObject::Private::Destruct<FExposedValueCopyRecord>,&UE::CoreUObject::Private::Copy<FExposedValueCopyRecord>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnalysisProperties @ 14751d8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnalysisProperties(void)

{
  if (Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton,
               &Z_Construct_UClass_UAnalysisProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton;
}

// Z_Construct_UClass_UBlendSpace @ 14751d8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendSpace(void)

{
  if (Z_Registration_Info_UClass_UBlendSpace.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendSpace.OuterSingleton,
               &Z_Construct_UClass_UBlendSpace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendSpace.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EBlendSpaceAxis @ 14751d930

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlendSpaceAxis(void)

{
  if (Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode @ 14751d970

UEnum * __cdecl Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode(void)

{
  if (Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENotifyTriggerMode @ 14751d9b0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENotifyTriggerMode(void)

{
  if (Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPreferredTriangulationDirection @ 14751d9f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EPreferredTriangulationDirection(void)

{
  if (Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBlendParameter @ 14751da30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendParameter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendParameter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSample @ 14751dab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSample.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSample.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSample.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSample.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSpaceBlendProfile @ 14751db30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSpaceBlendProfile(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceBlendProfile.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSpaceBlendProfile.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceBlendProfile.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSpaceBlendProfile.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSpaceData @ 14751dbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSpaceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSpaceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSpaceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSpaceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSpaceSegment @ 14751dc30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSpaceSegment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceSegment.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSpaceSegment.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceSegment.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSpaceSegment.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSpaceTriangle @ 14751dcb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSpaceTriangle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceTriangle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSpaceTriangle.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceTriangle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBlendSpaceTriangle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo @ 14751dd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEditorElement @ 14751ddb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditorElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditorElement.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditorElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditorElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditorElement.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEditorElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterpolationParameter @ 14751de30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpolationParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterpolationParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterpolationParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterpolationParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterpolationParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterpolationParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPerBoneInterpolation @ 14751deb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerBoneInterpolation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerBoneInterpolation.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerBoneInterpolation.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerBoneInterpolation.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPerBoneInterpolation.InnerSingleton;
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

// `scalar_deleting_destructor' @ 14751df30

void * __thiscall
UE::Anim::TAttributeBlendOperator<FTransformAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FTransformAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FTransformAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14751e050

void * __cdecl Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FExposedValueHandler,&UE::CoreUObject::Private::Construct<FExposedValueHandler>,&UE::CoreUObject::Private::ConstructForTests<FExposedValueHandler>,&UE::CoreUObject::Private::Destruct<FExposedValueHandler>,&UE::CoreUObject::Private::Copy<FExposedValueHandler>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EBlendSpaceAxis_StaticEnum @ 14751e1a0

UEnum * __cdecl EBlendSpaceAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpaceAxis,(UObject *)pUVar1,L"EBlendSpaceAxis"
                      );
  }
  return Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton;
}

// Z_Construct_UClass_UAnimSet @ 14751e320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSet(void)

{
  if (Z_Registration_Info_UClass_UAnimSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSet.OuterSingleton,
               &Z_Construct_UClass_UAnimSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSet.OuterSingleton;
}

// EPreferredTriangulationDirection_StaticEnum @ 14751e540

UEnum * __cdecl EPreferredTriangulationDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection,(UObject *)pUVar1,
                       L"EPreferredTriangulationDirection");
  }
  return Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimSetMeshLinkup @ 14751e580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSetMeshLinkup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.InnerSingleton;
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

// NewStructOps @ 147520030

void * __cdecl Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSetMeshLinkup,&UE::CoreUObject::Private::Construct<FAnimSetMeshLinkup>,&UE::CoreUObject::Private::ConstructForTests<FAnimSetMeshLinkup>,&UE::CoreUObject::Private::Destruct<FAnimSetMeshLinkup>,&UE::CoreUObject::Private::Copy<FAnimSetMeshLinkup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147520070

void * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 147520100

void * __cdecl Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeExposedValueHandler,&UE::CoreUObject::Private::Construct<FAnimNodeExposedValueHandler>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeExposedValueHandler>,&UE::CoreUObject::Private::Destruct<FAnimNodeExposedValueHandler>,&UE::CoreUObject::Private::Copy<FAnimNodeExposedValueHandler>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EBlendSpacePerBoneBlendMode_StaticEnum @ 147520280

UEnum * __cdecl EBlendSpacePerBoneBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode,(UObject *)pUVar1,
                       L"EBlendSpacePerBoneBlendMode");
  }
  return Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton;
}

// NewStructOps @ 147520300

void * __cdecl Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSpaceBlendProfile,&UE::CoreUObject::Private::Construct<FBlendSpaceBlendProfile>,&UE::CoreUObject::Private::ConstructForTests<FBlendSpaceBlendProfile>,&UE::CoreUObject::Private::Destruct<FBlendSpaceBlendProfile>,&UE::CoreUObject::Private::Copy<FBlendSpaceBlendProfile>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147520650

void * __cdecl
Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeExposedValueHandler_Base,&UE::CoreUObject::Private::Construct<FAnimNodeExposedValueHandler_Base>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeExposedValueHandler_Base>,&UE::CoreUObject::Private::Destruct<FAnimNodeExposedValueHandler_Base>,&UE::CoreUObject::Private::Copy<FAnimNodeExposedValueHandler_Base>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1475207f0

void * __thiscall
UE::Anim::TAttributeBlendOperator<FVectorAnimationAttribute>::_scalar_deleting_destructor_
          (TAttributeBlendOperator<FVectorAnimationAttribute> *this,uint param_1)

{
  *this = (TAttributeBlendOperator<FVectorAnimationAttribute>)
          &___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bAnimRotationOnly_SetBit @ 147522380

void __cdecl Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// `scalar_deleting_destructor' @ 147522390

void * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::_scalar_deleting_destructor_
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 1475223d0

void * __cdecl Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterpolationParameter,&UE::CoreUObject::Private::Construct<FInterpolationParameter>,&UE::CoreUObject::Private::ConstructForTests<FInterpolationParameter>,&UE::CoreUObject::Private::Destruct<FInterpolationParameter>,&UE::CoreUObject::Private::Copy<FInterpolationParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// BuildPoseFromRawDataInternal<1> @ 1475228d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
BuildPoseFromRawDataInternal<1>
          (TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2,FCompactPose *param_3,
          int param_4,int param_5,float param_6,float param_7,
          TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
          *param_8)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  code *pcVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  VectorRegister4Double *pVVar15;
  __m128 _Var16;
  FBoneContainer *pFVar17;
  FTlsAutoCleanup FVar18;
  ForElementType<unsigned_char> FVar19;
  TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *pTVar20;
  FTlsAutoCleanup *pFVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  FTlsAutoCleanup *pFVar27;
  undefined8 *puVar28;
  TTransform<double> *pTVar29;
  undefined1 *puVar30;
  longlong lVar31;
  FTlsAutoCleanup FVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  FCompactPoseBoneIndex *pFVar37;
  undefined8 *puVar38;
  uint uVar39;
  FRawAnimSequenceTrack *pFVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar81;
  double dVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar83;
  undefined1 auVar80 [16];
  uint uVar92;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar93;
  uint uVar94;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar95;
  undefined1 auVar96 [16];
  double dVar98;
  undefined4 uVar99;
  undefined1 auVar97 [16];
  double dVar100;
  double dVar101;
  undefined1 auVar102 [16];
  double dVar104;
  undefined4 uVar106;
  double dVar105;
  undefined1 auVar103 [16];
  double dVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  double dVar121;
  float fVar122;
  undefined1 auStackY_758 [32];
  uint local_708;
  undefined1 local_704 [4];
  uint local_700;
  undefined8 *local_6f8;
  undefined1 local_6f0 [16];
  FBoneContainer *local_6e0;
  undefined1 local_6d8;
  undefined1 local_6d7 [3];
  int local_6d4;
  int local_6d0;
  uint local_6cc;
  int iStack_6c8;
  longlong local_6c0;
  FTlsAutoCleanup local_6b8;
  undefined1 local_6a8 [24];
  ForElementType<unsigned_char> FStack_690;
  undefined8 local_688;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> local_680;
  ForElementType<FCompactPoseBoneIndex> local_670;
  undefined8 local_668;
  longlong local_658;
  TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *local_650;
  TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
  *local_648;
  FTlsAutoCleanup *local_640;
  longlong local_638;
  double local_628;
  double dStack_620;
  FCSPose<FCompactPose> local_618;
  code *local_5c8;
  undefined1 *local_5c0;
  code *local_5b8;
  undefined1 *local_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double local_590;
  double dStack_588;
  double local_580;
  double local_578;
  double dStack_570;
  double local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_758;
  uVar23 = param_1->ArrayNum;
  local_648 = param_8;
  local_6d0 = param_5;
  local_658 = *(longlong *)&param_3->field_0x10;
  local_5c0 = &local_6d8;
  local_5c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_6d4 = param_4;
  local_6b8 = (FTlsAutoCleanup)param_2;
  local_650 = param_1;
  pFVar27 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_5c8,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  local_640 = pFVar27 + 2;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  iVar26 = *(int *)&pFVar27[3].field_0x4;
  *(undefined4 *)(pFVar27 + 3) = 0;
  if (iVar26 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar23,(ForAnyElementType *)local_640,0,(int *)&pFVar27[3].field_0x4);
  }
  local_5b0 = local_6d7;
  local_5b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar27 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_5b8,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  lVar35 = local_658;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *)(pFVar27 + 4),
             (TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *)(local_658 + 0xa0));
  local_6f0._0_8_ = (TTransform<double> *)0x0;
  local_6e0 = (FBoneContainer *)0x0;
  local_6f0._8_8_ = 0;
  if ((FCompactPose *)local_6f0 != param_3) {
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_6f0,
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_3);
    local_6e0 = *(FBoneContainer **)&param_3->field_0x10;
  }
  local_708 = 0;
  fVar122 = __real_3f800000;
  local_638 = (longlong)(int)uVar23;
  if (0 < (int)uVar23) {
    local_6c0 = 0;
    do {
      lVar34 = local_6c0;
      local_6f8 = (undefined8 *)CONCAT44(local_6f8._4_4_,~local_708 >> 0x1f);
      uVar23 = 0;
      if ((int)local_708 < (int)*(uint *)((longlong)param_2 + 8)) {
        uVar23 = ~local_708 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_700 = *(uint *)(*(longlong *)param_2 + lVar34 * 4);
      uVar41 = (ulonglong)(int)local_700;
      if ((local_700 != 0xffffffff) && ((int)local_700 < 0x10000)) {
        if (((int)local_700 < 0) || (*(int *)(lVar35 + 0x88) <= (int)local_700)) {
          bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8192494858347217512>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                              ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          uVar23 = 0;
          if ((int)local_700 < *(int *)(lVar35 + 0x88)) {
            uVar23 = ~local_700 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar22 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar43 = 0;
          uVar23 = *(uint *)(*(longlong *)(lVar35 + 0x80) + uVar41 * 4);
          lVar31 = (longlong)(int)uVar23;
          if (uVar23 != 0xffffffff) {
            iVar26 = *(int *)(pFVar27 + 5);
            uVar44 = uVar43;
            if (0 < iVar26) {
              do {
                uVar36 = (uint)uVar43;
                uVar33 = ~uVar36 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar36 < iVar26) {
                  uVar24 = uVar33;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar26 = *(int *)(pFVar27 + 5);
                if (uVar23 == *(uint *)(uVar44 + (longlong)pFVar27[4])) {
                  uVar24 = 0;
                  if ((int)uVar36 < iVar26) {
                    uVar24 = uVar33;
                  }
                  if ((uVar24 == 0) &&
                     (bVar22 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar26 = *(int *)(pFVar27 + 5) + ~uVar36;
                  if (1 < iVar26) {
                    iVar26 = 1;
                  }
                  if (iVar26 != 0) {
                    memmove((void *)((longlong)pFVar27[4] + (longlong)(int)uVar36 * 0xc),
                            (void *)((longlong)pFVar27[4] +
                                    (longlong)(*(int *)(pFVar27 + 5) - iVar26) * 0xc),
                            (longlong)iVar26 * 0xc);
                  }
                  *(int *)(pFVar27 + 5) = *(int *)(pFVar27 + 5) + -1;
                  break;
                }
                uVar43 = (ulonglong)(uVar36 + 1);
                uVar44 = uVar44 + 0xc;
              } while ((int)(uVar36 + 1) < iVar26);
              uVar41 = (ulonglong)local_700;
              lVar34 = local_6c0;
            }
            pTVar20 = local_650;
            iVar26 = 0;
            if ((int)local_708 < local_650->ArrayNum) {
              iVar26 = (int)local_6f8;
            }
            if ((iVar26 == 0) &&
               (bVar22 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar38 = (undefined8 *)0x0;
            pFVar40 = (FRawAnimSequenceTrack *)((pTVar20->AllocatorInstance).Data + lVar34 * 0x30);
            iVar26 = (int)uVar41;
            if (local_648 ==
                (TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
                 *)0x0) {
              local_6f8 = (undefined8 *)0x0;
            }
            else {
              puVar28 = puVar38;
              if (*(int *)&local_648->field_0x8 != *(int *)&local_648->field_0x34) {
                puVar30 = &local_648->field_0x38;
                if (*(undefined1 **)&local_648->field_0x40 != (undefined1 *)0x0) {
                  puVar30 = *(undefined1 **)&local_648->field_0x40;
                }
                iVar25 = *(int *)(puVar30 +
                                 ((ulonglong)(*(int *)&local_648->field_0x48 - 1) &
                                 uVar41 & 0xffffffff) * 4);
                if (iVar25 != -1) {
                  do {
                    puVar28 = (undefined8 *)(*(longlong *)local_648 + (longlong)iVar25 * 0x18);
                    if (*(int *)(*(longlong *)local_648 + (longlong)iVar25 * 0x18) == iVar26) break;
                    iVar25 = *(int *)(puVar28 + 2);
                    puVar28 = puVar38;
                  } while (iVar25 != -1);
                }
              }
              local_6f8 = puVar28 + 1;
              if (puVar28 == (undefined8 *)0x0) {
                local_6f8 = puVar38;
              }
            }
            if (((pFVar40->PosKeys).ArrayNum == 0) || ((pFVar40->RotKeys).ArrayNum == 0)) {
              uVar24 = 0;
              if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                uVar24 = ~uVar23 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              _Var16 = GlobalVectorConstants::Float0001;
              lVar35 = *(longlong *)param_3;
              lVar34 = lVar31 * 0x60;
              fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
              *(double *)(lVar35 + lVar34) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              ((double *)(lVar35 + lVar34))[1] = (double)fVar7;
              pdVar2 = (double *)(lVar35 + 0x10 + lVar34);
              *pdVar2 = (double)_Var16.m128_f32[2];
              pdVar2[1] = (double)_Var16.m128_f32[3];
              _Var16 = GlobalVectorConstants::FloatZero;
              fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
              pdVar2 = (double *)(lVar35 + 0x20 + lVar34);
              *pdVar2 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              pdVar2[1] = (double)fVar7;
              pdVar2 = (double *)(lVar35 + 0x30 + lVar34);
              *pdVar2 = (double)_Var16.m128_f32[2];
              pdVar2[1] = (double)_Var16.m128_f32[3];
              _Var16 = GlobalVectorConstants::Float1110;
              fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
              pdVar2 = (double *)(lVar35 + 0x40 + lVar34);
              *pdVar2 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
              pdVar2[1] = (double)fVar7;
              pdVar2 = (double *)(lVar35 + 0x50 + lVar34);
              *pdVar2 = (double)_Var16.m128_f32[2];
              pdVar2[1] = (double)_Var16.m128_f32[3];
              uVar24 = 0;
              if ((int)uVar23 < (int)local_6f0._8_4_) {
                uVar24 = ~uVar23 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              _Var16 = GlobalVectorConstants::Float0001;
              fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).XY.m128d_f64[0]
                   = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).XY.m128d_f64[1]
                   = (double)fVar7;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).ZW.m128d_f64[0]
                   = (double)_Var16.m128_f32[2];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).ZW.m128d_f64[1]
                   = (double)_Var16.m128_f32[3];
              _Var16 = GlobalVectorConstants::FloatZero;
              fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.m128d_f64
              [0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.m128d_f64
              [1] = (double)fVar7;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.m128d_f64
              [0] = (double)_Var16.m128_f32[2];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.m128d_f64
              [1] = (double)_Var16.m128_f32[3];
              _Var16 = GlobalVectorConstants::Float1110;
              fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[1] =
                   (double)fVar7;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[0] =
                   (double)_Var16.m128_f32[2];
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[1] =
                   (double)_Var16.m128_f32[3];
            }
            else {
              pTVar29 = ExtractTransformForKey(&local_4b8,local_6d4,pFVar40);
              local_700 = ~uVar23 >> 0x1f;
              dVar100 = (pTVar29->Rotation).XY.m128d_f64[0];
              dVar83 = (pTVar29->Rotation).XY.m128d_f64[1];
              dVar67 = (pTVar29->Rotation).ZW.m128d_f64[0];
              dVar82 = (pTVar29->Rotation).ZW.m128d_f64[1];
              dVar101 = (pTVar29->Translation).XY.m128d_f64[0];
              dVar105 = (pTVar29->Translation).XY.m128d_f64[1];
              dVar107 = (pTVar29->Translation).ZW.m128d_f64[0];
              dVar111 = (pTVar29->Translation).ZW.m128d_f64[1];
              dVar81 = (pTVar29->Scale3D).XY.m128d_f64[0];
              dVar104 = (pTVar29->Scale3D).XY.m128d_f64[1];
              dVar93 = (pTVar29->Scale3D).ZW.m128d_f64[0];
              dVar95 = (pTVar29->Scale3D).ZW.m128d_f64[1];
              uVar24 = 0;
              if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                uVar24 = local_700;
              }
              if ((uVar24 == 0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar35 = *(longlong *)param_3;
              lVar34 = lVar31 * 0x60;
              *(double *)(lVar35 + lVar34) = dVar100;
              ((double *)(lVar35 + lVar34))[1] = dVar83;
              pdVar2 = (double *)(lVar35 + 0x10 + lVar34);
              *pdVar2 = dVar67;
              pdVar2[1] = dVar82;
              pdVar2 = (double *)(lVar35 + 0x20 + lVar34);
              *pdVar2 = dVar101;
              pdVar2[1] = dVar105;
              pdVar2 = (double *)(lVar35 + 0x30 + lVar34);
              *pdVar2 = dVar107;
              pdVar2[1] = dVar111;
              pdVar2 = (double *)(lVar35 + 0x40 + lVar34);
              *pdVar2 = dVar81;
              pdVar2[1] = dVar104;
              pdVar2 = (double *)(lVar35 + 0x50 + lVar34);
              *pdVar2 = dVar93;
              pdVar2[1] = dVar95;
              pTVar29 = ExtractTransformForKey(&local_458,local_6d0,pFVar40);
              auVar69 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
              dVar67 = (pTVar29->Rotation).ZW.m128d_f64[0];
              dVar82 = (pTVar29->Rotation).ZW.m128d_f64[1];
              dVar101 = (pTVar29->Translation).XY.m128d_f64[0];
              dVar105 = (pTVar29->Translation).XY.m128d_f64[1];
              dVar107 = (pTVar29->Translation).ZW.m128d_f64[0];
              dVar111 = (pTVar29->Translation).ZW.m128d_f64[1];
              dVar81 = (pTVar29->Scale3D).XY.m128d_f64[0];
              dVar104 = (pTVar29->Scale3D).XY.m128d_f64[1];
              dVar100 = (pTVar29->Scale3D).ZW.m128d_f64[0];
              dVar83 = (pTVar29->Scale3D).ZW.m128d_f64[1];
              uVar24 = 0;
              if ((int)uVar23 < (int)local_6f0._8_4_) {
                uVar24 = local_700;
              }
              if ((uVar24 == 0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined1 (*) [16])
               (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).XY.m128d_f64 =
                   auVar69;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).ZW.m128d_f64[0]
                   = dVar67;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).ZW.m128d_f64[1]
                   = dVar82;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.m128d_f64
              [0] = dVar101;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.m128d_f64
              [1] = dVar105;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.m128d_f64
              [0] = dVar107;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.m128d_f64
              [1] = dVar111;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[0] =
                   dVar81;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[1] =
                   dVar104;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[0] =
                   dVar100;
              (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[1] =
                   dVar83;
              if (local_6f8 != (undefined8 *)0x0) {
                FTransformCurve::Evaluate
                          ((FTransformCurve *)*local_6f8,&local_3f8,(float)local_6d4 * param_7,
                           fVar122);
                uVar24 = local_700;
                uVar33 = 0;
                if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                  uVar33 = local_700;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar35 = *(longlong *)param_3;
                pdVar2 = (double *)(lVar34 + 0x30 + lVar35);
                local_628 = *pdVar2;
                dStack_620 = pdVar2[1];
                auVar69 = *(undefined1 (*) [16])(lVar34 + lVar35);
                auVar118 = *(undefined1 (*) [16])(lVar34 + 0x10 + lVar35);
                pdVar2 = (double *)(lVar34 + 0x20 + lVar35);
                dVar83 = *pdVar2;
                dVar67 = pdVar2[1];
                pdVar2 = (double *)(lVar34 + 0x40 + lVar35);
                dVar82 = *pdVar2;
                dVar101 = pdVar2[1];
                pdVar2 = (double *)(lVar34 + 0x50 + lVar35);
                dVar105 = *pdVar2;
                dVar100 = pdVar2[1];
                uVar33 = 0;
                if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar35 = *(longlong *)param_3;
                dVar10 = auVar69._0_8_;
                auVar84._8_4_ = auVar69._0_4_;
                auVar84._0_8_ = dVar10;
                auVar84._12_4_ = auVar69._4_4_;
                dVar12 = auVar118._8_8_;
                dVar121 = auVar118._0_8_;
                dVar107 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar104 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                auVar48._8_4_ = auVar118._0_4_;
                auVar48._0_8_ = dVar121;
                auVar48._12_4_ = auVar118._4_4_;
                dVar11 = auVar69._8_8_;
                dVar111 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar93 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                dVar81 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar95 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                dVar98 = dVar10 * local_3f8.Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         local_3f8.Rotation.XY.m128d_f64[1] * dVar12 +
                         local_3f8.Rotation.ZW.m128d_f64[1] * dVar11 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         dVar121 * local_3f8.Rotation.XY.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                auVar108._8_4_ = SUB84(dVar98,0);
                auVar108._0_8_ =
                     dVar10 * local_3f8.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_3f8.Rotation.XY.m128d_f64[0] * dVar12 +
                     local_3f8.Rotation.ZW.m128d_f64[0] * dVar11 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar121 * local_3f8.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                auVar108._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
                *(undefined1 (*) [16])(lVar31 * 0x60 + lVar35) = auVar108;
                pdVar2 = (double *)(lVar31 * 0x60 + 0x10 + lVar35);
                *pdVar2 = dVar10 * local_3f8.Rotation.XY.m128d_f64[1] * dVar107 +
                          local_3f8.Rotation.ZW.m128d_f64[0] * dVar12 +
                          local_3f8.Rotation.XY.m128d_f64[0] * dVar11 * dVar111 +
                          dVar121 * local_3f8.Rotation.ZW.m128d_f64[1] * dVar81;
                pdVar2[1] = auVar84._8_8_ * local_3f8.Rotation.XY.m128d_f64[0] * dVar104 +
                            local_3f8.Rotation.ZW.m128d_f64[1] * dVar12 +
                            local_3f8.Rotation.XY.m128d_f64[1] * dVar11 * dVar93 +
                            auVar48._8_8_ * local_3f8.Rotation.ZW.m128d_f64[0] * dVar95;
                uVar33 = 0;
                if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar35 = *(longlong *)param_3;
                local_4d8 = local_3f8.Translation.ZW.m128d_f64[0];
                auVar49._8_4_ = auVar118._0_4_;
                auVar49._0_8_ = dVar11;
                auVar49._12_4_ = auVar118._4_4_;
                dVar107 = local_3f8.Translation.ZW.m128d_f64[0] * dVar105;
                dVar100 = dVar100 * 0.0;
                local_4e8 = local_3f8.Translation.XY.m128d_f64[0];
                dStack_4e0 = local_3f8.Translation.XY.m128d_f64[1];
                dVar111 = local_3f8.Translation.XY.m128d_f64[0] * dVar82;
                dVar81 = local_3f8.Translation.XY.m128d_f64[1] * dVar101;
                uVar99 = (undefined4)((ulonglong)dVar81 >> 0x20);
                auVar108 = blendpd(auVar69,auVar118,2);
                auVar112._8_4_ = SUB84(dVar81,0);
                auVar112._0_8_ = dVar111;
                auVar112._12_4_ = uVar99;
                auVar68._8_4_ = SUB84(dVar81,0);
                auVar68._0_8_ = dVar111;
                auVar68._12_4_ = uVar99;
                auVar69._8_4_ = SUB84(dVar100,0);
                auVar69._0_8_ = dVar107;
                auVar69._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
                auVar69 = blendpd(auVar68,auVar69,2);
                auVar113._0_8_ = auVar112._8_8_ * dVar10 - dVar11 * dVar111;
                auVar113._8_8_ = dVar107 * dVar11 - auVar49._8_8_ * dVar81;
                auVar102._8_4_ = SUB84(auVar113._8_8_,0);
                auVar102._0_8_ = auVar113._0_8_;
                auVar102._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
                auVar70._0_8_ = auVar69._0_8_ * dVar121 - auVar108._0_8_ * dVar107;
                auVar70._8_8_ = auVar69._8_8_ * dVar12 - auVar108._8_8_ * dVar100;
                auVar69 = blendpd(auVar113,auVar70,2);
                dVar100 = auVar102._8_8_ + auVar102._8_8_;
                dVar104 = auVar70._0_8_ + auVar70._0_8_;
                auVar114._0_8_ = auVar69._0_8_ + auVar69._0_8_;
                auVar114._8_8_ = auVar69._8_8_ + auVar69._8_8_;
                uVar99 = SUB84(dVar104,0);
                auVar85._8_4_ = uVar99;
                auVar85._0_8_ = dVar100;
                uVar106 = (undefined4)((ulonglong)dVar104 >> 0x20);
                auVar85._12_4_ = uVar106;
                auVar50._8_4_ = uVar99;
                auVar50._0_8_ = dVar100;
                auVar50._12_4_ = uVar106;
                auVar96._8_4_ = auVar118._8_4_;
                auVar96._0_8_ = dVar12;
                auVar96._12_4_ = auVar118._12_4_;
                auVar86._0_8_ = auVar85._8_8_ * dVar10 - dVar100 * dVar11;
                auVar86._8_8_ = auVar114._0_8_ * dVar11 - auVar50._8_8_ * dVar121;
                auVar71._8_4_ = uVar99;
                auVar71._0_8_ = dVar100;
                auVar71._12_4_ = uVar106;
                auVar118._8_4_ = SUB84(auVar114._8_8_,0);
                auVar118._0_8_ = auVar114._0_8_;
                auVar118._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
                auVar69 = blendpd(auVar71,auVar114,2);
                auVar72._0_8_ = auVar69._0_8_ * dVar121 - auVar114._0_8_ * auVar108._0_8_;
                auVar72._8_8_ = auVar69._8_8_ * dVar12 - auVar118._8_8_ * auVar108._8_8_;
                auVar51._8_4_ = SUB84(auVar86._8_8_,0);
                auVar51._0_8_ = auVar86._0_8_;
                auVar51._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
                auVar69 = blendpd(auVar86,auVar72,2);
                local_4c0 = dVar12 * auVar114._0_8_ + dVar107 + auVar69._0_8_ + local_628;
                local_4d0 = dVar12 * dVar100 + dVar111 + auVar51._8_8_ + dVar83;
                dStack_4c8 = auVar96._8_8_ * dVar104 + dVar81 + auVar72._0_8_ + dVar67;
                pdVar2 = (double *)(lVar31 * 0x60 + 0x20 + lVar35);
                *pdVar2 = local_4d0;
                pdVar2[1] = dStack_4c8;
                pdVar2 = (double *)(lVar31 * 0x60 + 0x30 + lVar35);
                *pdVar2 = local_4c0;
                pdVar2[1] = 0.0;
                uVar33 = 0;
                if ((int)uVar23 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar35 = *(longlong *)param_3;
                local_578 = dVar82 * local_3f8.Scale3D.XY.m128d_f64[0];
                local_590 = local_3f8.Scale3D.XY.m128d_f64[0];
                dStack_588 = local_3f8.Scale3D.XY.m128d_f64[1];
                local_580 = local_3f8.Scale3D.ZW.m128d_f64[0];
                local_568 = dVar105 * local_3f8.Scale3D.ZW.m128d_f64[0];
                dStack_570 = dVar101 * local_3f8.Scale3D.XY.m128d_f64[1];
                pdVar2 = (double *)(lVar31 * 0x60 + 0x40 + lVar35);
                *pdVar2 = local_578;
                pdVar2[1] = dStack_570;
                pdVar2 = (double *)(lVar31 * 0x60 + 0x50 + lVar35);
                *pdVar2 = local_568;
                pdVar2[1] = 0.0;
                local_5a8 = dVar82;
                dStack_5a0 = dVar101;
                local_598 = dVar105;
                FTransformCurve::Evaluate
                          ((FTransformCurve *)*local_6f8,&local_398,(float)local_6d0 * param_7,
                           __real_3f800000);
                uVar33 = 0;
                if ((int)uVar23 < (int)local_6f0._8_4_) {
                  uVar33 = uVar24;
                }
                if (uVar33 == 0) {
                  bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar22) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                uVar13 = local_6f0._0_8_;
                local_628 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation)
                            .ZW.m128d_f64[0];
                dStack_620 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation
                             ).ZW.m128d_f64[1];
                auVar69 = *(undefined1 (*) [16])
                           (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).XY.
                           m128d_f64;
                auVar118 = *(undefined1 (*) [16])
                            (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Rotation).ZW
                            .m128d_f64;
                dVar83 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY
                         .m128d_f64[0];
                dVar67 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY
                         .m128d_f64[1];
                dVar82 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.
                         m128d_f64[0];
                dVar101 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.
                          m128d_f64[1];
                dVar105 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.
                          m128d_f64[0];
                dVar100 = (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.
                          m128d_f64[1];
                uVar33 = 0;
                if ((int)uVar23 < (int)local_6f0._8_4_) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                dVar10 = auVar69._0_8_;
                auVar87._8_4_ = auVar69._0_4_;
                auVar87._0_8_ = dVar10;
                auVar87._12_4_ = auVar69._4_4_;
                dVar121 = auVar118._8_8_;
                dVar107 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar104 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                dVar11 = auVar69._8_8_;
                auVar52._8_4_ = auVar118._8_4_;
                auVar52._0_8_ = dVar121;
                auVar52._12_4_ = auVar118._12_4_;
                auVar73._8_4_ = auVar69._8_4_;
                auVar73._0_8_ = dVar11;
                auVar73._12_4_ = auVar69._12_4_;
                dVar12 = auVar118._0_8_;
                auVar53._8_4_ = auVar118._0_4_;
                auVar53._0_8_ = dVar12;
                auVar53._12_4_ = auVar118._4_4_;
                dVar111 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar93 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                dVar81 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar95 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                auVar54._8_4_ = auVar118._8_4_;
                auVar54._0_8_ = dVar121;
                auVar54._12_4_ = auVar118._12_4_;
                dVar98 = dVar10 * local_398.Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         auVar54._8_8_ * local_398.Rotation.XY.m128d_f64[1] +
                         dVar11 * local_398.Rotation.ZW.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         dVar12 * local_398.Rotation.XY.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                auVar9._8_4_ = SUB84(dVar98,0);
                auVar9._0_8_ = dVar10 * local_398.Rotation.ZW.m128d_f64[1] *
                               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                               dVar121 * local_398.Rotation.XY.m128d_f64[0] +
                               dVar11 * local_398.Rotation.ZW.m128d_f64[0] *
                               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                               dVar12 * local_398.Rotation.XY.m128d_f64[1] *
                               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                auVar9._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
                *(undefined1 (*) [16])
                 (((TTransform<double> *)(uVar13 + lVar31 * 0x60))->Rotation).XY.m128d_f64 = auVar9;
                pVVar15 = &((TTransform<double> *)(uVar13 + lVar31 * 0x60))->Rotation;
                (pVVar15->ZW).m128d_f64[0] =
                     dVar10 * local_398.Rotation.XY.m128d_f64[1] * dVar107 +
                     dVar121 * local_398.Rotation.ZW.m128d_f64[0] +
                     dVar11 * local_398.Rotation.XY.m128d_f64[0] * dVar81 +
                     dVar12 * local_398.Rotation.ZW.m128d_f64[1] * dVar111;
                (pVVar15->ZW).m128d_f64[1] =
                     auVar87._8_8_ * local_398.Rotation.XY.m128d_f64[0] * dVar104 +
                     auVar52._8_8_ * local_398.Rotation.ZW.m128d_f64[1] +
                     auVar73._8_8_ * local_398.Rotation.XY.m128d_f64[1] * dVar95 +
                     auVar53._8_8_ * local_398.Rotation.ZW.m128d_f64[0] * dVar93;
                uVar33 = 0;
                if ((int)uVar23 < (int)local_6f0._8_4_) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_550 = local_398.Translation.ZW.m128d_f64[0];
                dVar107 = local_398.Translation.ZW.m128d_f64[0] * dVar105;
                dVar100 = dVar100 * 0.0;
                local_560 = local_398.Translation.XY.m128d_f64[0];
                dStack_558 = local_398.Translation.XY.m128d_f64[1];
                dVar111 = local_398.Translation.XY.m128d_f64[0] * dVar82;
                dVar81 = local_398.Translation.XY.m128d_f64[1] * dVar101;
                uVar99 = (undefined4)((ulonglong)dVar81 >> 0x20);
                auVar108 = blendpd(auVar69,auVar118,2);
                auVar115._8_4_ = SUB84(dVar81,0);
                auVar115._0_8_ = dVar111;
                auVar115._12_4_ = uVar99;
                auVar55._8_4_ = auVar118._0_4_;
                auVar55._0_8_ = dVar11;
                auVar55._12_4_ = auVar118._4_4_;
                auVar74._8_4_ = SUB84(dVar81,0);
                auVar74._0_8_ = dVar111;
                auVar74._12_4_ = uVar99;
                auVar8._8_4_ = SUB84(dVar100,0);
                auVar8._0_8_ = dVar107;
                auVar8._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
                auVar69 = blendpd(auVar74,auVar8,2);
                auVar116._0_8_ = auVar115._8_8_ * dVar10 - dVar11 * dVar111;
                auVar116._8_8_ = dVar107 * dVar11 - auVar55._8_8_ * dVar81;
                auVar109._8_4_ = SUB84(auVar116._8_8_,0);
                auVar109._0_8_ = auVar116._0_8_;
                auVar109._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
                auVar75._0_8_ = auVar69._0_8_ * dVar12 - auVar108._0_8_ * dVar107;
                auVar75._8_8_ = auVar69._8_8_ * dVar121 - auVar108._8_8_ * dVar100;
                auVar69 = blendpd(auVar116,auVar75,2);
                dVar100 = auVar109._8_8_ + auVar109._8_8_;
                dVar104 = auVar75._0_8_ + auVar75._0_8_;
                auVar117._0_8_ = auVar69._0_8_ + auVar69._0_8_;
                auVar117._8_8_ = auVar69._8_8_ + auVar69._8_8_;
                uVar99 = SUB84(dVar104,0);
                auVar88._8_4_ = uVar99;
                auVar88._0_8_ = dVar100;
                uVar106 = (undefined4)((ulonglong)dVar104 >> 0x20);
                auVar88._12_4_ = uVar106;
                auVar56._8_4_ = uVar99;
                auVar56._0_8_ = dVar100;
                auVar56._12_4_ = uVar106;
                auVar76._8_4_ = uVar99;
                auVar76._0_8_ = dVar100;
                auVar76._12_4_ = uVar106;
                auVar69 = blendpd(auVar76,auVar117,2);
                auVar89._0_8_ = auVar88._8_8_ * dVar10 - dVar100 * dVar11;
                auVar89._8_8_ = auVar117._0_8_ * dVar11 - auVar56._8_8_ * dVar12;
                auVar57._8_4_ = SUB84(auVar117._8_8_,0);
                auVar57._0_8_ = auVar117._0_8_;
                auVar57._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
                auVar77._0_8_ = auVar69._0_8_ * dVar12 - auVar117._0_8_ * auVar108._0_8_;
                auVar77._8_8_ = auVar69._8_8_ * dVar121 - auVar57._8_8_ * auVar108._8_8_;
                auVar58._8_4_ = SUB84(auVar89._8_8_,0);
                auVar58._0_8_ = auVar89._0_8_;
                auVar58._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
                auVar69 = blendpd(auVar89,auVar77,2);
                local_538 = auVar117._0_8_ * dVar121 + dVar107 + auVar69._0_8_ + local_628;
                local_548 = dVar100 * dVar121 + dVar111 + auVar58._8_8_ + dVar83;
                dStack_540 = dVar104 * dVar121 + dVar81 + auVar77._0_8_ + dVar67;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.
                m128d_f64[0] = local_548;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).XY.
                m128d_f64[1] = dStack_540;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.
                m128d_f64[0] = local_538;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Translation).ZW.
                m128d_f64[1] = 0.0;
                uVar33 = 0;
                if ((int)uVar23 < (int)local_6f0._8_4_) {
                  uVar33 = uVar24;
                }
                if ((uVar33 == 0) &&
                   (bVar22 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_518 = local_398.Scale3D.XY.m128d_f64[0];
                dStack_510 = local_398.Scale3D.XY.m128d_f64[1];
                local_508 = local_398.Scale3D.ZW.m128d_f64[0];
                local_500 = dVar82 * local_398.Scale3D.XY.m128d_f64[0];
                local_4f0 = dVar105 * local_398.Scale3D.ZW.m128d_f64[0];
                dStack_4f8 = dVar101 * local_398.Scale3D.XY.m128d_f64[1];
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[0]
                     = local_500;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).XY.m128d_f64[1]
                     = dStack_4f8;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[0]
                     = local_4f0;
                (((TTransform<double> *)(local_6f0._0_8_ + lVar31 * 0x60))->Scale3D).ZW.m128d_f64[1]
                     = 0.0;
                fVar122 = __real_3f800000;
                local_530 = dVar82;
                dStack_528 = dVar101;
                local_520 = dVar105;
              }
            }
            pFVar21 = local_640;
            puVar30 = &local_640[1].field_0x4;
            local_6cc = uVar23;
            iStack_6c8 = iVar26;
            if ((((ulonglong)*local_640 <= &local_6cc) &&
                (&local_6cc < (uint *)((longlong)*local_640 + (longlong)*(int *)puVar30 * 8))) &&
               (bVar22 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar26 = *(int *)(pFVar21 + 1);
            if (iVar26 == *(int *)puVar30) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)pFVar21,(int *)puVar30);
            }
            *(int *)(pFVar21 + 1) = iVar26 + 1;
            *(ulonglong *)((longlong)*pFVar21 + (longlong)iVar26 * 8) =
                 CONCAT44(iStack_6c8,local_6cc);
            lVar34 = local_6c0;
            lVar35 = local_658;
          }
        }
      }
      local_708 = local_708 + 1;
      local_6c0 = lVar34 + 1;
      param_2 = (TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *)local_6b8;
    } while (local_6c0 < local_638);
  }
  pFVar17 = local_6e0;
  if (0 < *(int *)(pFVar27 + 5)) {
    local_618.Pose._0_8_ = 0;
    local_618.Pose._16_8_ = 0;
    local_618.ComponentSpaceFlags._0_8_ = 0;
    local_618.Pose._8_8_ = 0;
    local_618.ComponentSpaceFlags._8_8_ = 0;
    local_618.BoneMask._0_8_ = 0;
    local_618.BoneMask._8_8_ = 0;
    local_618.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
    local_618.BonesToConvert.ArrayNum = 0;
    local_618.BonesToConvert.ArrayMax = 0;
    FCSPose<FCompactPose>::InitPose(&local_618,param_3);
    local_6a8._0_8_ = (TTransform<double> *)0x0;
    local_6a8._16_8_ = (FBoneContainer *)0x0;
    FStack_690.Data = (uchar *)0x0;
    local_6a8._8_8_ = 0;
    local_688 = 0;
    local_680._0_8_ = 0;
    local_680._8_8_ = 0;
    local_670.Data = (FCompactPoseBoneIndex *)0x0;
    local_668._0_4_ = 0;
    local_668._4_4_ = 0;
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)local_6a8,pFVar17);
    uVar99 = local_6f0._8_4_;
    local_6a8._8_4_ = local_6f0._8_4_;
    if ((local_6f0._8_4_ == 0) && (local_6a8._12_4_ == 0)) {
      local_6a8._8_8_ = local_6f0._8_8_ & 0xffffffff;
      uVar23 = 0;
    }
    else {
      lVar35 = (longlong)(int)local_6f0._8_4_;
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,local_6f0._8_4_,local_6a8._12_4_,
                 (ForElementType<UE::Math::TTransform<double>_> *)local_6a8,local_6f0._8_4_,
                 (int *)(local_6a8 + 0xc));
      if (uVar99 != 0) {
        memcpy((void *)local_6a8._0_8_,(void *)local_6f0._0_8_,lVar35 * 0x60);
      }
      uVar23 = local_6a8._8_4_;
    }
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    uVar41 = local_688 >> 0x20;
    local_688 = local_688 & 0xffffffff00000000;
    if ((uint)uVar41 != uVar23) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,uVar23,&FStack_690,0,(int *)((longlong)&local_688 + 4));
      uVar23 = local_6a8._8_4_;
    }
    iVar26 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                       (1,1,uVar23,&FStack_690,(int *)&local_688,(int *)((longlong)&local_688 + 4));
    FVar19.Data = FStack_690.Data;
    memset(FStack_690.Data + iVar26,0,(longlong)(int)uVar23);
    if (((int)local_688 < 1) &&
       (bVar22 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *FVar19.Data = '\x01';
    FVar32 = pFVar27[4];
    iVar26 = *(int *)(pFVar27 + 5);
    pFVar37 = (FCompactPoseBoneIndex *)((longlong)FVar32 + 8);
    local_6b8 = (FTlsAutoCleanup)((longlong)FVar32 + (longlong)iVar26 * 0xc);
    while( true ) {
      FVar18 = local_6b8;
      if (*(int *)(pFVar27 + 5) != iVar26) {
        local_704[0] = 0;
        `TCheckedPointerIterator<FVirtualBoneCompactPoseData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_704);
      }
      if (FVar32 == FVar18) break;
      pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_618,pFVar37[-1]);
      local_338.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_338.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      local_338.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_338.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_338.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
      local_338.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
      local_338.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
      local_338.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      local_338.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
      local_338.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_338.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_338.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
      pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_618,*pFVar37);
      local_2d8.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_2d8.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      local_2d8.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_2d8.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_2d8.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
      local_2d8.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
      local_2d8.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
      local_2d8.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      local_2d8.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
      local_2d8.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_2d8.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
      pTVar29 = UE::Math::TTransform<double>::GetRelativeTransform(&local_2d8,&local_1b8,&local_338)
      ;
      uVar23 = *(uint *)FVar32;
      dVar100 = (pTVar29->Rotation).XY.m128d_f64[0];
      dVar83 = (pTVar29->Rotation).XY.m128d_f64[1];
      dVar67 = (pTVar29->Rotation).ZW.m128d_f64[0];
      dVar82 = (pTVar29->Rotation).ZW.m128d_f64[1];
      dVar101 = (pTVar29->Translation).XY.m128d_f64[0];
      dVar105 = (pTVar29->Translation).XY.m128d_f64[1];
      dVar107 = (pTVar29->Translation).ZW.m128d_f64[0];
      dVar111 = (pTVar29->Translation).ZW.m128d_f64[1];
      dVar81 = (pTVar29->Scale3D).XY.m128d_f64[0];
      dVar104 = (pTVar29->Scale3D).XY.m128d_f64[1];
      dVar93 = (pTVar29->Scale3D).ZW.m128d_f64[0];
      dVar95 = (pTVar29->Scale3D).ZW.m128d_f64[1];
      uVar24 = 0;
      if ((int)uVar23 < *(int *)&param_3->field_0x8) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar35 = *(longlong *)param_3;
      lVar34 = (longlong)(int)uVar23 * 0x60;
      *(double *)(lVar34 + lVar35) = dVar100;
      ((double *)(lVar34 + lVar35))[1] = dVar83;
      pdVar2 = (double *)(lVar34 + 0x10 + lVar35);
      *pdVar2 = dVar67;
      pdVar2[1] = dVar82;
      pdVar2 = (double *)(lVar34 + 0x20 + lVar35);
      *pdVar2 = dVar101;
      pdVar2[1] = dVar105;
      pdVar2 = (double *)(lVar34 + 0x30 + lVar35);
      *pdVar2 = dVar107;
      pdVar2[1] = dVar111;
      pdVar2 = (double *)(lVar34 + 0x40 + lVar35);
      *pdVar2 = dVar81;
      pdVar2[1] = dVar104;
      pdVar2 = (double *)(lVar34 + 0x50 + lVar35);
      *pdVar2 = dVar93;
      pdVar2[1] = dVar95;
      pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)local_6a8,pFVar37[-1]);
      local_278.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_278.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      local_278.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_278.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_278.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
      local_278.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
      local_278.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
      local_278.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      local_278.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
      local_278.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_278.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_278.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
      pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)local_6a8,*pFVar37);
      local_218.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_218.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      local_218.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_218.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_218.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
      local_218.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
      local_218.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
      local_218.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      local_218.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
      local_218.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_218.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_218.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
      pTVar29 = UE::Math::TTransform<double>::GetRelativeTransform(&local_218,&local_158,&local_278)
      ;
      uVar23 = *(uint *)FVar32;
      auVar69 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
      dVar100 = (pTVar29->Rotation).ZW.m128d_f64[0];
      dVar83 = (pTVar29->Rotation).ZW.m128d_f64[1];
      dVar67 = (pTVar29->Translation).XY.m128d_f64[0];
      dVar82 = (pTVar29->Translation).XY.m128d_f64[1];
      dVar101 = (pTVar29->Translation).ZW.m128d_f64[0];
      dVar105 = (pTVar29->Translation).ZW.m128d_f64[1];
      dVar107 = (pTVar29->Scale3D).XY.m128d_f64[0];
      dVar111 = (pTVar29->Scale3D).XY.m128d_f64[1];
      dVar81 = (pTVar29->Scale3D).ZW.m128d_f64[0];
      dVar104 = (pTVar29->Scale3D).ZW.m128d_f64[1];
      uVar24 = 0;
      if ((int)uVar23 < (int)local_6f0._8_4_) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar32 = (FTlsAutoCleanup)((longlong)FVar32 + 0xc);
      pFVar37 = pFVar37 + 3;
      *(undefined1 (*) [16])
       (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Rotation).XY.
       m128d_f64 = auVar69;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Rotation).ZW.
      m128d_f64[0] = dVar100;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Rotation).ZW.
      m128d_f64[1] = dVar83;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Translation).XY.
      m128d_f64[0] = dVar67;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Translation).XY.
      m128d_f64[1] = dVar82;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Translation).ZW.
      m128d_f64[0] = dVar101;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Translation).ZW.
      m128d_f64[1] = dVar105;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Scale3D).XY.
      m128d_f64[0] = dVar107;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Scale3D).XY.
      m128d_f64[1] = dVar111;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Scale3D).ZW.
      m128d_f64[0] = dVar81;
      (((TTransform<double> *)(local_6f0._0_8_ + (longlong)(int)uVar23 * 0x60))->Scale3D).ZW.
      m128d_f64[1] = dVar104;
    }
  }
  uVar24 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3727c5ac;
  uVar23 = *(uint *)&param_3->field_0x8;
  uVar33 = 0;
  if (uVar23 != 0) {
    fVar120 = (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    local_6f8 = (undefined8 *)0x0;
    lVar35 = 0;
    do {
      uVar39 = ~uVar33 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar33 < *(int *)&param_3->field_0x8) {
        uVar36 = uVar39;
      }
      if ((uVar36 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar34 = *(longlong *)param_3;
      uVar36 = 0;
      if ((int)uVar33 < (int)local_6f0._8_4_) {
        uVar36 = uVar39;
      }
      if ((uVar36 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = local_6f0._0_8_;
      uVar36 = 0;
      if ((int)uVar33 < *(int *)&param_3->field_0x8) {
        uVar36 = uVar39;
      }
      if ((uVar36 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar31 = *(longlong *)param_3;
      if (fVar7 < fVar120) {
        if (fVar7 < (float)((uint)(param_6 - fVar122) & uVar24)) {
          dVar104 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar95 = (double)param_6;
          dVar98 = (double)param_6;
          dVar100 = (double)param_6;
          dVar83 = (double)param_6;
          uVar106 = (undefined4)((ulonglong)dVar83 >> 0x20);
          dVar81 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
          dVar93 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
          pdVar2 = (double *)(lVar35 + 0x20 + lVar31);
          dVar67 = pdVar2[1];
          pdVar3 = (double *)(lVar35 + 0x30 + lVar31);
          dVar82 = *pdVar3;
          dVar101 = pdVar3[1];
          auVar59._8_4_ = SUB84(dVar83,0);
          auVar59._0_8_ = dVar100;
          auVar59._12_4_ = uVar106;
          pdVar3 = (double *)
                   ((longlong)(((VectorRegister4Double *)(uVar13 + 0x20))->ZW).m128d_f64 + lVar35);
          dVar105 = *pdVar3;
          dVar107 = pdVar3[1];
          auVar60._8_4_ = SUB84(dVar98,0);
          auVar60._0_8_ = dVar95;
          uVar99 = (undefined4)((ulonglong)dVar98 >> 0x20);
          auVar60._12_4_ = uVar99;
          pdVar3 = (double *)
                   ((longlong)(((VectorRegister4Double *)(uVar13 + 0x20))->XY).m128d_f64 + lVar35);
          dVar111 = pdVar3[1];
          auVar61._8_4_ = SUB84(dVar83,0);
          auVar61._0_8_ = dVar100;
          auVar61._12_4_ = uVar106;
          pdVar4 = (double *)(lVar34 + 0x20 + lVar35);
          *pdVar4 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar95) * *pdVar2 +
                    dVar95 * *pdVar3;
          pdVar4[1] = (dVar81 - dVar98) * dVar67 + auVar60._8_8_ * dVar111;
          pdVar2 = (double *)(lVar34 + 0x30 + lVar35);
          *pdVar2 = (dVar104 - dVar100) * dVar82 + dVar100 * dVar105;
          pdVar2[1] = (dVar93 - dVar83) * dVar101 + auVar59._8_8_ * dVar107;
          pdVar2 = (double *)
                   ((longlong)(((VectorRegister4Double *)(uVar13 + 0x40))->ZW).m128d_f64 + lVar35);
          dVar67 = *pdVar2;
          dVar82 = pdVar2[1];
          dVar104 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar81 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
          dVar93 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
          pdVar2 = (double *)(lVar35 + 0x40 + lVar31);
          dVar101 = pdVar2[1];
          pdVar3 = (double *)(lVar35 + 0x50 + lVar31);
          dVar105 = *pdVar3;
          dVar107 = pdVar3[1];
          auVar62._8_4_ = SUB84(dVar98,0);
          auVar62._0_8_ = dVar95;
          auVar62._12_4_ = uVar99;
          pdVar3 = (double *)
                   ((longlong)(((VectorRegister4Double *)(uVar13 + 0x40))->XY).m128d_f64 + lVar35);
          dVar111 = pdVar3[1];
          pdVar4 = (double *)(lVar34 + 0x40 + lVar35);
          *pdVar4 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar95) * *pdVar2 +
                    dVar95 * *pdVar3;
          pdVar4[1] = (dVar81 - dVar98) * dVar101 + auVar62._8_8_ * dVar111;
          pdVar2 = (double *)(lVar34 + 0x50 + lVar35);
          *pdVar2 = (dVar104 - dVar100) * dVar105 + dVar100 * dVar67;
          pdVar2[1] = (dVar93 - dVar83) * dVar107 + auVar61._8_8_ * dVar82;
          pdVar2 = (double *)((longlong)(((VectorRegister4Double *)uVar13)->XY).m128d_f64 + lVar35);
          pdVar3 = (double *)(lVar35 + 0x10 + lVar31);
          pdVar4 = (double *)((longlong)(((VectorRegister4Double *)uVar13)->ZW).m128d_f64 + lVar35);
          pdVar5 = (double *)(lVar35 + 0x10 + lVar31);
          dVar101 = 0.0 - *pdVar5;
          dVar105 = 0.0 - pdVar5[1];
          dVar67 = *pdVar3 * *pdVar4 + *(double *)(lVar35 + lVar31) * *pdVar2;
          dVar82 = pdVar3[1] * pdVar4[1] + ((double *)(lVar35 + lVar31))[1] * pdVar2[1];
          auVar63._8_4_ = SUB84(dVar82,0);
          auVar63._0_8_ = dVar67;
          auVar63._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
          lVar42 = -(ulonglong)(0.0 <= auVar63._8_8_ + dVar67);
          lVar45 = -(ulonglong)(0.0 <= dVar67 + dVar82);
          uVar36 = (uint)lVar42;
          uVar39 = (uint)((ulonglong)lVar42 >> 0x20);
          uVar92 = (uint)lVar45;
          uVar94 = (uint)((ulonglong)lVar45 >> 0x20);
          dVar67 = 0.0 - *(double *)(lVar35 + lVar31);
          dVar82 = 0.0 - ((double *)(lVar35 + lVar31))[1];
          puVar1 = (uint *)(lVar35 + lVar31);
          auVar78._0_4_ = uVar36 & *puVar1;
          auVar78._4_4_ = uVar39 & puVar1[1];
          auVar78._8_4_ = uVar92 & puVar1[2];
          auVar78._12_4_ = uVar94 & puVar1[3];
          auVar110._0_4_ = ~uVar36 & SUB84(dVar67,0);
          auVar110._4_4_ = ~uVar39 & (uint)((ulonglong)dVar67 >> 0x20);
          auVar110._8_4_ = ~uVar92 & SUB84(dVar82,0);
          auVar110._12_4_ = ~uVar94 & (uint)((ulonglong)dVar82 >> 0x20);
          pdVar2 = (double *)((longlong)(((VectorRegister4Double *)uVar13)->XY).m128d_f64 + lVar35);
          dVar107 = SUB168(auVar110 | auVar78,0) *
                    (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar95) + dVar95 * *pdVar2;
          dVar111 = SUB168(auVar110 | auVar78,8) *
                    (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar98) + dVar98 * pdVar2[1]
          ;
          puVar1 = (uint *)(lVar35 + 0x10 + lVar31);
          auVar90._0_4_ = uVar36 & *puVar1;
          auVar90._4_4_ = uVar39 & puVar1[1];
          auVar90._8_4_ = uVar92 & puVar1[2];
          auVar90._12_4_ = uVar94 & puVar1[3];
          auVar97._0_4_ = ~uVar36 & SUB84(dVar101,0);
          auVar97._4_4_ = ~uVar39 & (uint)((ulonglong)dVar101 >> 0x20);
          auVar97._8_4_ = ~uVar92 & SUB84(dVar105,0);
          auVar97._12_4_ = ~uVar94 & (uint)((ulonglong)dVar105 >> 0x20);
          auVar79._8_4_ = SUB84(dVar111,0);
          auVar79._0_8_ = dVar107;
          auVar79._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
          pdVar2 = (double *)((longlong)(((VectorRegister4Double *)uVar13)->ZW).m128d_f64 + lVar35);
          dVar67 = SUB168(auVar97 | auVar90,0) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar100) + dVar100 * *pdVar2;
          dVar82 = SUB168(auVar97 | auVar90,8) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar83) + dVar83 * pdVar2[1];
          auVar64._8_4_ = SUB84(dVar82,0);
          auVar64._0_8_ = dVar67;
          auVar64._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
          dVar100 = dVar107 * dVar107 + dVar67 * dVar67;
          dVar83 = auVar79._8_8_ * dVar111 + auVar64._8_8_ * dVar82;
          auVar65._8_4_ = SUB84(dVar83,0);
          auVar65._0_8_ = dVar100;
          auVar65._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
          auVar66._0_8_ = auVar65._8_8_ + dVar100;
          auVar66._8_8_ = dVar100 + dVar83;
          uVar43 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar66._0_8_);
          uVar46 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar66._8_8_);
          uVar44 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar66._0_8_);
          uVar47 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar66._8_8_);
          auVar69 = sqrtpd(auVar66,auVar66);
          auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar69);
          auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar69);
          auVar119._0_8_ = uVar43 & (ulonglong)(auVar118._0_8_ * dVar107);
          uVar41 = uVar46 & (ulonglong)(auVar118._8_8_ * dVar111);
          auVar119._8_4_ = (undefined4)uVar41;
          auVar119._12_4_ = (undefined4)(uVar41 >> 0x20);
          auVar91._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar91._4_4_ =
               ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar91._8_4_ = ~(uint)uVar46 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar91._12_4_ =
               ~(uint)(uVar46 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar103._0_8_ = uVar44 & (ulonglong)(auVar69._0_8_ * dVar67);
          uVar41 = uVar47 & (ulonglong)(auVar69._8_8_ * dVar82);
          auVar103._8_4_ = (undefined4)uVar41;
          auVar103._12_4_ = (undefined4)(uVar41 >> 0x20);
          auVar80._0_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar80._4_4_ =
               ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar80._8_4_ = ~(uint)uVar47 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar80._12_4_ =
               ~(uint)(uVar47 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(lVar34 + lVar35) = auVar119 | auVar91;
          *(undefined1 (*) [16])(lVar34 + 0x10 + lVar35) = auVar103 | auVar80;
        }
        else {
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)uVar13)->XY).m128d_f64 + lVar35);
          uVar14 = puVar38[1];
          *(undefined8 *)(lVar34 + lVar35) = *puVar38;
          ((undefined8 *)(lVar34 + lVar35))[1] = uVar14;
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)uVar13)->ZW).m128d_f64 + lVar35);
          uVar14 = puVar38[1];
          puVar28 = (undefined8 *)(lVar34 + 0x10 + lVar35);
          *puVar28 = *puVar38;
          puVar28[1] = uVar14;
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)(uVar13 + 0x20))->XY).m128d_f64 + lVar35);
          uVar14 = puVar38[1];
          puVar28 = (undefined8 *)(lVar34 + 0x20 + lVar35);
          *puVar28 = *puVar38;
          puVar28[1] = uVar14;
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)(uVar13 + 0x20))->ZW).m128d_f64 + lVar35);
          uVar14 = puVar38[1];
          puVar28 = (undefined8 *)(lVar34 + 0x30 + lVar35);
          *puVar28 = *puVar38;
          puVar28[1] = uVar14;
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)(uVar13 + 0x40))->XY).m128d_f64 + lVar35);
          uVar14 = puVar38[1];
          puVar28 = (undefined8 *)(lVar34 + 0x40 + lVar35);
          *puVar28 = *puVar38;
          puVar28[1] = uVar14;
          puVar38 = (undefined8 *)
                    ((longlong)(((VectorRegister4Double *)(uVar13 + 0x40))->ZW).m128d_f64 + lVar35);
          uVar13 = puVar38[1];
          puVar28 = (undefined8 *)(lVar34 + 0x50 + lVar35);
          *puVar28 = *puVar38;
          puVar28[1] = uVar13;
        }
      }
      else {
        uVar13 = ((undefined8 *)(lVar35 + lVar31))[1];
        *(undefined8 *)(lVar34 + lVar35) = *(undefined8 *)(lVar35 + lVar31);
        ((undefined8 *)(lVar34 + lVar35))[1] = uVar13;
        puVar38 = (undefined8 *)(lVar35 + 0x10 + lVar31);
        uVar13 = puVar38[1];
        puVar28 = (undefined8 *)(lVar34 + 0x10 + lVar35);
        *puVar28 = *puVar38;
        puVar28[1] = uVar13;
        puVar38 = (undefined8 *)(lVar35 + 0x20 + lVar31);
        uVar13 = puVar38[1];
        puVar28 = (undefined8 *)(lVar34 + 0x20 + lVar35);
        *puVar28 = *puVar38;
        puVar28[1] = uVar13;
        puVar38 = (undefined8 *)(lVar35 + 0x30 + lVar31);
        uVar13 = puVar38[1];
        puVar28 = (undefined8 *)(lVar34 + 0x30 + lVar35);
        *puVar28 = *puVar38;
        puVar28[1] = uVar13;
        puVar38 = (undefined8 *)(lVar35 + 0x40 + lVar31);
        uVar13 = puVar38[1];
        puVar28 = (undefined8 *)(lVar34 + 0x40 + lVar35);
        *puVar28 = *puVar38;
        puVar28[1] = uVar13;
        puVar38 = (undefined8 *)(lVar35 + 0x50 + lVar31);
        uVar13 = puVar38[1];
        puVar28 = (undefined8 *)(lVar34 + 0x50 + lVar35);
        *puVar28 = *puVar38;
        puVar28[1] = uVar13;
      }
      uVar33 = uVar33 + 1;
      local_6f8 = (undefined8 *)((longlong)local_6f8 + 1);
      lVar35 = lVar35 + 0x60;
    } while (uVar33 != uVar23);
  }
  return;
}

// BuildPoseFromRawDataInternal<0> @ 1475241b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
BuildPoseFromRawDataInternal<0>
          (TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2,FCompactPose *param_3,
          int param_4,int param_5,float param_6,float param_7,
          TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
          *param_8)

{
  FTlsAutoCleanup FVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  __m128 _Var26;
  TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *pTVar28;
  FTlsAutoCleanup *pFVar29;
  bool bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  FTlsAutoCleanup *pFVar35;
  undefined8 *puVar36;
  TTransform<double> *pTVar37;
  undefined1 *puVar38;
  longlong lVar39;
  longlong lVar40;
  FTlsAutoCleanup FVar41;
  uint uVar42;
  FCompactPoseBoneIndex *pFVar43;
  uint uVar44;
  ulonglong uVar45;
  longlong lVar46;
  FRawAnimSequenceTrack *pFVar47;
  undefined8 *puVar48;
  ulonglong uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auStackY_488 [32];
  undefined1 local_438 [4];
  uint local_434;
  longlong local_430;
  undefined1 local_428;
  undefined1 local_427 [3];
  int local_424;
  uint local_420;
  uint uStack_41c;
  TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
  *local_418;
  longlong local_410;
  undefined8 *local_408;
  undefined8 uStack_400;
  FCompactPose *local_3f8;
  longlong local_3f0;
  TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *local_3e8;
  TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *local_3e0;
  FTlsAutoCleanup *local_3d8;
  longlong local_3d0;
  FCSPose<FCompactPose> local_3c8;
  code *local_378;
  undefined1 *local_370;
  code *local_368;
  undefined1 *local_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined1 local_340 [16];
  double local_330;
  double local_328;
  double dStack_320;
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  uVar33 = param_1->ArrayNum;
  local_410 = *(longlong *)&param_3->field_0x10;
  local_370 = &local_428;
  local_418 = param_8;
  local_378 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_424 = param_4;
  local_3f8 = param_3;
  local_3e8 = param_2;
  local_3e0 = param_1;
  pFVar35 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_378,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  local_3d8 = pFVar35 + 2;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  iVar34 = *(int *)&pFVar35[3].field_0x4;
  *(undefined4 *)(pFVar35 + 3) = 0;
  if (iVar34 < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar33,(ForAnyElementType *)local_3d8,0,(int *)&pFVar35[3].field_0x4);
  }
  local_360 = local_427;
  local_368 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar35 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_368,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  lVar40 = local_410;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *)(pFVar35 + 4),
             (TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *)(local_410 + 0xa0));
  local_434 = 0;
  local_3d0 = (longlong)(int)uVar33;
  if (0 < (int)uVar33) {
    local_3f0 = 0;
    local_430 = 0;
    fVar68 = __real_3f800000;
    do {
      pTVar27 = local_3e8;
      lVar46 = local_3f0;
      uVar33 = local_434;
      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,~local_434 >> 0x1f);
      uVar31 = 0;
      if ((int)local_434 < local_3e8->ArrayNum) {
        uVar31 = ~local_434 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar30 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar31 = *(uint *)((pTVar27->AllocatorInstance).Data + lVar46 * 4);
      if ((uVar31 != 0xffffffff) && ((int)uVar31 < 0x10000)) {
        if (((int)uVar31 < 0) || (*(int *)(lVar40 + 0x88) <= (int)uVar31)) {
          bVar30 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8192494858347217512>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                              ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar30) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          uVar32 = 0;
          if ((int)uVar31 < *(int *)(lVar40 + 0x88)) {
            uVar32 = ~uVar31 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar30 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar45 = 0;
          uVar32 = *(uint *)(*(longlong *)(lVar40 + 0x80) + (longlong)(int)uVar31 * 4);
          lVar39 = (longlong)(int)uVar32;
          lVar40 = local_410;
          if (uVar32 != 0xffffffff) {
            iVar34 = *(int *)(pFVar35 + 5);
            uVar49 = uVar45;
            if (0 < iVar34) {
              do {
                uVar44 = (uint)uVar45;
                uVar42 = ~uVar44 >> 0x1f;
                uVar33 = 0;
                if ((int)uVar44 < iVar34) {
                  uVar33 = uVar42;
                }
                if ((uVar33 == 0) &&
                   (bVar30 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar34 = *(int *)(pFVar35 + 5);
                if (uVar32 == *(uint *)(uVar49 + (longlong)pFVar35[4])) {
                  uVar33 = 0;
                  if ((int)uVar44 < iVar34) {
                    uVar33 = uVar42;
                  }
                  if ((uVar33 == 0) &&
                     (bVar30 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar30)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar34 = ~uVar44 + *(int *)(pFVar35 + 5);
                  if (1 < iVar34) {
                    iVar34 = 1;
                  }
                  if (iVar34 != 0) {
                    memmove((void *)((longlong)pFVar35[4] + (longlong)(int)uVar44 * 0xc),
                            (void *)((longlong)pFVar35[4] +
                                    (longlong)(*(int *)(pFVar35 + 5) - iVar34) * 0xc),
                            (longlong)iVar34 * 0xc);
                  }
                  *(int *)(pFVar35 + 5) = *(int *)(pFVar35 + 5) + -1;
                  param_8 = local_418;
                  param_3 = local_3f8;
                  break;
                }
                uVar45 = (ulonglong)(uVar44 + 1);
                param_8 = local_418;
                param_3 = local_3f8;
                uVar49 = uVar49 + 0xc;
              } while ((int)(uVar44 + 1) < iVar34);
            }
            pTVar28 = local_3e0;
            uVar33 = local_434;
            iVar34 = 0;
            if ((int)local_434 < local_3e0->ArrayNum) {
              iVar34 = (int)local_408;
            }
            if ((iVar34 == 0) &&
               (bVar30 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar48 = (undefined8 *)0x0;
            pFVar47 = (FRawAnimSequenceTrack *)((pTVar28->AllocatorInstance).Data + local_430);
            if (param_8 ==
                (TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
                 *)0x0) {
              local_408 = (undefined8 *)0x0;
            }
            else {
              puVar36 = puVar48;
              if (*(int *)&param_8->field_0x8 != *(int *)&param_8->field_0x34) {
                puVar38 = &param_8->field_0x38;
                if (*(undefined1 **)&param_8->field_0x40 != (undefined1 *)0x0) {
                  puVar38 = *(undefined1 **)&param_8->field_0x40;
                }
                iVar34 = *(int *)(puVar38 +
                                 (ulonglong)(*(int *)&param_8->field_0x48 - 1U & uVar31) * 4);
                if (iVar34 != -1) {
                  do {
                    puVar36 = (undefined8 *)(*(longlong *)param_8 + (longlong)iVar34 * 0x18);
                    if (*(uint *)(*(longlong *)param_8 + (longlong)iVar34 * 0x18) == uVar31) break;
                    iVar34 = *(int *)(puVar36 + 2);
                    puVar36 = puVar48;
                  } while (iVar34 != -1);
                }
              }
              local_408 = puVar36 + 1;
              if (puVar36 == (undefined8 *)0x0) {
                local_408 = puVar48;
              }
            }
            if (((pFVar47->PosKeys).ArrayNum == 0) || ((pFVar47->RotKeys).ArrayNum == 0)) {
              uVar42 = 0;
              if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                uVar42 = ~uVar32 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar30 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              _Var26 = GlobalVectorConstants::Float0001;
              lVar40 = *(longlong *)param_3;
              lVar39 = lVar39 * 0x60;
              auVar52._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              auVar52._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              auVar52._12_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              *(undefined1 (*) [16])(lVar39 + lVar40) = auVar52;
              dVar12 = (double)_Var26.m128_f32[3];
              auVar64._8_4_ = SUB84(dVar12,0);
              auVar64._0_8_ = (double)_Var26.m128_f32[2];
              auVar64._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x10 + lVar40) = auVar64;
              _Var26 = GlobalVectorConstants::FloatZero;
              auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              auVar7._12_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x20 + lVar40) = auVar7;
              dVar12 = (double)_Var26.m128_f32[3];
              auVar8._8_4_ = SUB84(dVar12,0);
              auVar8._0_8_ = (double)_Var26.m128_f32[2];
              auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x30 + lVar40) = auVar8;
              _Var26 = GlobalVectorConstants::Float1110;
              auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
              auVar9._12_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x40 + lVar40) = auVar9;
              dVar12 = (double)_Var26.m128_f32[3];
              auVar10._8_4_ = SUB84(dVar12,0);
              auVar10._0_8_ = (double)_Var26.m128_f32[2];
              auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(lVar39 + 0x50 + lVar40) = auVar10;
            }
            else {
              pTVar37 = ExtractTransformForKey(&local_2d8,local_424,pFVar47);
              uVar42 = ~uVar32 >> 0x1f;
              auVar52 = *(undefined1 (*) [16])(pTVar37->Rotation).XY.m128d_f64;
              dVar12 = (pTVar37->Rotation).ZW.m128d_f64[0];
              dVar13 = (pTVar37->Rotation).ZW.m128d_f64[1];
              dVar61 = (pTVar37->Translation).XY.m128d_f64[0];
              dVar23 = (pTVar37->Translation).XY.m128d_f64[1];
              dVar24 = (pTVar37->Translation).ZW.m128d_f64[0];
              dVar25 = (pTVar37->Translation).ZW.m128d_f64[1];
              dVar15 = (pTVar37->Scale3D).XY.m128d_f64[0];
              dVar16 = (pTVar37->Scale3D).XY.m128d_f64[1];
              dVar17 = (pTVar37->Scale3D).ZW.m128d_f64[0];
              dVar63 = (pTVar37->Scale3D).ZW.m128d_f64[1];
              uVar33 = 0;
              if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                uVar33 = uVar42;
              }
              if ((uVar33 == 0) &&
                 (bVar30 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar40 = *(longlong *)param_3;
              lVar46 = lVar39 * 0x60;
              *(undefined1 (*) [16])(lVar40 + lVar46) = auVar52;
              pdVar2 = (double *)(lVar40 + 0x10 + lVar46);
              *pdVar2 = dVar12;
              pdVar2[1] = dVar13;
              pdVar2 = (double *)(lVar40 + 0x20 + lVar46);
              *pdVar2 = dVar61;
              pdVar2[1] = dVar23;
              pdVar2 = (double *)(lVar40 + 0x30 + lVar46);
              *pdVar2 = dVar24;
              pdVar2[1] = dVar25;
              pdVar2 = (double *)(lVar40 + 0x40 + lVar46);
              *pdVar2 = dVar15;
              pdVar2[1] = dVar16;
              pdVar2 = (double *)(lVar40 + 0x50 + lVar46);
              *pdVar2 = dVar17;
              pdVar2[1] = dVar63;
              param_8 = local_418;
              uVar33 = local_434;
              if (local_408 != (undefined8 *)0x0) {
                FTransformCurve::Evaluate
                          ((FTransformCurve *)*local_408,&local_278,(float)local_424 * param_7,
                           fVar68);
                uVar33 = 0;
                if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar42;
                }
                if ((uVar33 == 0) &&
                   (bVar30 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar40 = *(longlong *)param_3;
                puVar48 = (undefined8 *)(lVar46 + 0x30 + lVar40);
                local_408 = (undefined8 *)*puVar48;
                uStack_400 = puVar48[1];
                auVar52 = *(undefined1 (*) [16])(lVar46 + lVar40);
                auVar64 = *(undefined1 (*) [16])(lVar46 + 0x10 + lVar40);
                pdVar2 = (double *)(lVar46 + 0x20 + lVar40);
                dVar12 = *pdVar2;
                dVar13 = pdVar2[1];
                pdVar2 = (double *)(lVar46 + 0x40 + lVar40);
                dVar23 = *pdVar2;
                dVar24 = pdVar2[1];
                pdVar2 = (double *)(lVar46 + 0x50 + lVar40);
                dVar25 = *pdVar2;
                dVar61 = pdVar2[1];
                uVar33 = 0;
                if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar42;
                }
                if ((uVar33 == 0) &&
                   (bVar30 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar40 = *(longlong *)param_3;
                dVar20 = auVar52._0_8_;
                dVar62 = auVar52._8_8_;
                auVar56._8_4_ = auVar52._0_4_;
                auVar56._0_8_ = dVar20;
                auVar56._12_4_ = auVar52._4_4_;
                auVar50._8_4_ = auVar52._8_4_;
                auVar50._0_8_ = dVar62;
                auVar50._12_4_ = auVar52._12_4_;
                dVar22 = auVar64._8_8_;
                dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar63 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                dVar21 = auVar64._0_8_;
                dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                dVar19 = dVar20 * local_278.Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         dVar22 * local_278.Rotation.XY.m128d_f64[1] +
                         dVar62 * local_278.Rotation.ZW.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         dVar21 * local_278.Rotation.XY.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                auVar18._8_4_ = SUB84(dVar19,0);
                auVar18._0_8_ =
                     dVar20 * local_278.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar22 * local_278.Rotation.XY.m128d_f64[0] +
                     dVar62 * local_278.Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar21 * local_278.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
                *(undefined1 (*) [16])(lVar46 + lVar40) = auVar18;
                pdVar2 = (double *)(lVar46 + 0x10 + lVar40);
                *pdVar2 = dVar20 * local_278.Rotation.XY.m128d_f64[1] * dVar15 +
                          dVar22 * local_278.Rotation.ZW.m128d_f64[0] +
                          dVar62 * local_278.Rotation.XY.m128d_f64[0] * dVar16 +
                          dVar21 * local_278.Rotation.ZW.m128d_f64[1] * dVar17;
                pdVar2[1] = auVar56._8_8_ * local_278.Rotation.XY.m128d_f64[0] * dVar63 +
                            dVar22 * local_278.Rotation.ZW.m128d_f64[1] +
                            auVar50._8_8_ * local_278.Rotation.XY.m128d_f64[1] * dVar4 +
                            dVar21 * local_278.Rotation.ZW.m128d_f64[0] * dVar5;
                uVar33 = 0;
                if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar42;
                }
                if ((uVar33 == 0) &&
                   (bVar30 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar40 = *(longlong *)param_3;
                local_348 = local_278.Translation.ZW.m128d_f64[0];
                dVar15 = local_278.Translation.ZW.m128d_f64[0] * dVar25;
                dVar61 = dVar61 * 0.0;
                local_358 = local_278.Translation.XY.m128d_f64[0];
                dStack_350 = local_278.Translation.XY.m128d_f64[1];
                dVar16 = local_278.Translation.XY.m128d_f64[0] * dVar23;
                dVar17 = local_278.Translation.XY.m128d_f64[1] * dVar24;
                uVar59 = (undefined4)((ulonglong)dVar17 >> 0x20);
                auVar64 = blendpd(auVar52,auVar64,2);
                auVar65._8_4_ = SUB84(dVar17,0);
                auVar65._0_8_ = dVar16;
                auVar65._12_4_ = uVar59;
                auVar51._8_4_ = SUB84(dVar17,0);
                auVar51._0_8_ = dVar16;
                auVar51._12_4_ = uVar59;
                auVar14._8_4_ = SUB84(dVar61,0);
                auVar14._0_8_ = dVar15;
                auVar14._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
                auVar52 = blendpd(auVar51,auVar14,2);
                auVar66._0_8_ = auVar65._8_8_ * dVar20 - dVar62 * dVar16;
                auVar66._8_8_ = dVar15 * dVar62 - dVar21 * dVar17;
                auVar53._0_8_ = auVar52._0_8_ * dVar21 - auVar64._0_8_ * dVar15;
                auVar53._8_8_ = auVar52._8_8_ * dVar22 - auVar64._8_8_ * dVar61;
                auVar52 = blendpd(auVar66,auVar53,2);
                dVar61 = auVar66._8_8_ + auVar66._8_8_;
                dVar63 = auVar53._0_8_ + auVar53._0_8_;
                auVar67._0_8_ = auVar52._0_8_ + auVar52._0_8_;
                auVar67._8_8_ = auVar52._8_8_ + auVar52._8_8_;
                auVar57._8_4_ = SUB84(dVar63,0);
                auVar57._0_8_ = dVar61;
                uVar59 = (undefined4)((ulonglong)dVar63 >> 0x20);
                auVar57._12_4_ = uVar59;
                auVar58._0_8_ = auVar57._8_8_ * dVar20 - dVar61 * dVar62;
                auVar58._8_8_ = auVar67._0_8_ * dVar62 - dVar63 * dVar21;
                auVar54._8_4_ = SUB84(dVar63,0);
                auVar54._0_8_ = dVar61;
                auVar54._12_4_ = uVar59;
                auVar52 = blendpd(auVar54,auVar67,2);
                auVar55._0_8_ = auVar52._0_8_ * dVar21 - auVar67._0_8_ * auVar64._0_8_;
                auVar55._8_8_ = auVar52._8_8_ * dVar22 - auVar67._8_8_ * auVar64._8_8_;
                auVar52 = blendpd(auVar58,auVar55,2);
                local_330 = dVar22 * auVar67._0_8_ + dVar15 + auVar52._0_8_ + (double)local_408;
                dVar12 = dVar22 * dVar61 + dVar16 + auVar58._8_8_ + dVar12;
                dVar13 = dVar22 * dVar63 + dVar17 + auVar55._0_8_ + dVar13;
                uVar59 = SUB84(dVar13,0);
                uVar60 = (undefined4)((ulonglong)dVar13 >> 0x20);
                local_340._8_4_ = uVar59;
                local_340._0_8_ = dVar12;
                local_340._12_4_ = uVar60;
                auVar11._8_4_ = uVar59;
                auVar11._0_8_ = dVar12;
                auVar11._12_4_ = uVar60;
                *(undefined1 (*) [16])(lVar39 * 0x60 + 0x20 + lVar40) = auVar11;
                pdVar2 = (double *)(lVar39 * 0x60 + 0x30 + lVar40);
                *pdVar2 = local_330;
                pdVar2[1] = 0.0;
                uVar33 = 0;
                if ((int)uVar32 < *(int *)&param_3->field_0x8) {
                  uVar33 = uVar42;
                }
                if ((uVar33 == 0) &&
                   (bVar30 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar40 = *(longlong *)param_3;
                local_310 = local_278.Scale3D.XY.m128d_f64[0];
                dStack_308 = local_278.Scale3D.XY.m128d_f64[1];
                local_300 = local_278.Scale3D.ZW.m128d_f64[0];
                local_2e8 = dVar25 * local_278.Scale3D.ZW.m128d_f64[0];
                uVar59 = SUB84(dVar24 * local_278.Scale3D.XY.m128d_f64[1],0);
                uVar60 = (undefined4)
                         ((ulonglong)(dVar24 * local_278.Scale3D.XY.m128d_f64[1]) >> 0x20);
                local_2f8._8_4_ = uVar59;
                local_2f8._0_8_ = dVar23 * local_278.Scale3D.XY.m128d_f64[0];
                local_2f8._12_4_ = uVar60;
                auVar6._8_4_ = uVar59;
                auVar6._0_8_ = dVar23 * local_278.Scale3D.XY.m128d_f64[0];
                auVar6._12_4_ = uVar60;
                *(undefined1 (*) [16])(lVar39 * 0x60 + 0x40 + lVar40) = auVar6;
                pdVar2 = (double *)(lVar39 * 0x60 + 0x50 + lVar40);
                *pdVar2 = local_2e8;
                pdVar2[1] = 0.0;
                param_8 = local_418;
                fVar68 = __real_3f800000;
                uVar33 = local_434;
                local_328 = dVar23;
                dStack_320 = dVar24;
                local_318 = dVar25;
              }
            }
            pFVar29 = local_3d8;
            puVar38 = &local_3d8[1].field_0x4;
            local_420 = uVar32;
            uStack_41c = uVar31;
            if ((((ulonglong)*local_3d8 <= &local_420) &&
                (&local_420 < (uint *)((longlong)*local_3d8 + (longlong)*(int *)puVar38 * 8))) &&
               (bVar30 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar34 = *(int *)(pFVar29 + 1);
            if (iVar34 == *(int *)puVar38) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)pFVar29,(int *)puVar38);
            }
            *(int *)(pFVar29 + 1) = iVar34 + 1;
            *(ulonglong *)((longlong)*pFVar29 + (longlong)iVar34 * 8) =
                 CONCAT44(uStack_41c,local_420);
            lVar40 = local_410;
            lVar46 = local_3f0;
          }
        }
      }
      local_434 = uVar33 + 1;
      local_3f0 = lVar46 + 1;
      local_430 = local_430 + 0x30;
    } while (local_3f0 < local_3d0);
  }
  if (0 < *(int *)(pFVar35 + 5)) {
    local_3c8.Pose._0_8_ = 0;
    local_3c8.Pose._16_8_ = 0;
    local_3c8.ComponentSpaceFlags._0_8_ = 0;
    local_3c8.Pose._8_8_ = 0;
    local_3c8.ComponentSpaceFlags._8_8_ = 0;
    local_3c8.BoneMask._0_8_ = 0;
    local_3c8.BoneMask._8_8_ = 0;
    local_3c8.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
    local_3c8.BonesToConvert.ArrayNum = 0;
    local_3c8.BonesToConvert.ArrayMax = 0;
    FCSPose<FCompactPose>::InitPose(&local_3c8,param_3);
    FVar41 = pFVar35[4];
    iVar34 = *(int *)(pFVar35 + 5);
    pFVar43 = (FCompactPoseBoneIndex *)((longlong)FVar41 + 8);
    FVar1 = (FTlsAutoCleanup)((longlong)FVar41 + (longlong)iVar34 * 0xc);
    while( true ) {
      if (*(int *)(pFVar35 + 5) != iVar34) {
        local_438[0] = 0;
        `TCheckedPointerIterator<FVirtualBoneCompactPoseData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_438);
      }
      if (FVar41 == FVar1) break;
      pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_3c8,pFVar43[-1]);
      local_218.Rotation.XY.m128d_f64[0] = (pTVar37->Rotation).XY.m128d_f64[0];
      local_218.Rotation.XY.m128d_f64[1] = (pTVar37->Rotation).XY.m128d_f64[1];
      local_218.Rotation.ZW.m128d_f64[0] = (pTVar37->Rotation).ZW.m128d_f64[0];
      local_218.Rotation.ZW.m128d_f64[1] = (pTVar37->Rotation).ZW.m128d_f64[1];
      local_218.Translation.XY.m128d_f64[0] = (pTVar37->Translation).XY.m128d_f64[0];
      local_218.Translation.XY.m128d_f64[1] = (pTVar37->Translation).XY.m128d_f64[1];
      local_218.Translation.ZW.m128d_f64[0] = (pTVar37->Translation).ZW.m128d_f64[0];
      local_218.Translation.ZW.m128d_f64[1] = (pTVar37->Translation).ZW.m128d_f64[1];
      local_218.Scale3D.XY.m128d_f64[0] = (pTVar37->Scale3D).XY.m128d_f64[0];
      local_218.Scale3D.XY.m128d_f64[1] = (pTVar37->Scale3D).XY.m128d_f64[1];
      local_218.Scale3D.ZW.m128d_f64[0] = (pTVar37->Scale3D).ZW.m128d_f64[0];
      local_218.Scale3D.ZW.m128d_f64[1] = (pTVar37->Scale3D).ZW.m128d_f64[1];
      pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_3c8,*pFVar43);
      local_1b8.Rotation.XY.m128d_f64[0] = (pTVar37->Rotation).XY.m128d_f64[0];
      local_1b8.Rotation.XY.m128d_f64[1] = (pTVar37->Rotation).XY.m128d_f64[1];
      local_1b8.Rotation.ZW.m128d_f64[0] = (pTVar37->Rotation).ZW.m128d_f64[0];
      local_1b8.Rotation.ZW.m128d_f64[1] = (pTVar37->Rotation).ZW.m128d_f64[1];
      local_1b8.Translation.XY.m128d_f64[0] = (pTVar37->Translation).XY.m128d_f64[0];
      local_1b8.Translation.XY.m128d_f64[1] = (pTVar37->Translation).XY.m128d_f64[1];
      local_1b8.Translation.ZW.m128d_f64[0] = (pTVar37->Translation).ZW.m128d_f64[0];
      local_1b8.Translation.ZW.m128d_f64[1] = (pTVar37->Translation).ZW.m128d_f64[1];
      local_1b8.Scale3D.XY.m128d_f64[0] = (pTVar37->Scale3D).XY.m128d_f64[0];
      local_1b8.Scale3D.XY.m128d_f64[1] = (pTVar37->Scale3D).XY.m128d_f64[1];
      local_1b8.Scale3D.ZW.m128d_f64[0] = (pTVar37->Scale3D).ZW.m128d_f64[0];
      local_1b8.Scale3D.ZW.m128d_f64[1] = (pTVar37->Scale3D).ZW.m128d_f64[1];
      pTVar37 = UE::Math::TTransform<double>::GetRelativeTransform(&local_1b8,&local_158,&local_218)
      ;
      uVar33 = *(uint *)FVar41;
      dVar12 = (pTVar37->Rotation).XY.m128d_f64[0];
      dVar13 = (pTVar37->Rotation).XY.m128d_f64[1];
      dVar61 = (pTVar37->Rotation).ZW.m128d_f64[0];
      dVar23 = (pTVar37->Rotation).ZW.m128d_f64[1];
      dVar24 = (pTVar37->Translation).XY.m128d_f64[0];
      dVar25 = (pTVar37->Translation).XY.m128d_f64[1];
      dVar15 = (pTVar37->Translation).ZW.m128d_f64[0];
      dVar16 = (pTVar37->Translation).ZW.m128d_f64[1];
      dVar17 = (pTVar37->Scale3D).XY.m128d_f64[0];
      dVar63 = (pTVar37->Scale3D).XY.m128d_f64[1];
      dVar4 = (pTVar37->Scale3D).ZW.m128d_f64[0];
      dVar5 = (pTVar37->Scale3D).ZW.m128d_f64[1];
      uVar31 = 0;
      if ((int)uVar33 < *(int *)&param_3->field_0x8) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar30 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar40 = *(longlong *)param_3;
      lVar46 = (longlong)(int)uVar33 * 0x60;
      FVar41 = (FTlsAutoCleanup)((longlong)FVar41 + 0xc);
      pFVar43 = pFVar43 + 3;
      *(double *)(lVar46 + lVar40) = dVar12;
      ((double *)(lVar46 + lVar40))[1] = dVar13;
      pdVar2 = (double *)(lVar46 + 0x10 + lVar40);
      *pdVar2 = dVar61;
      pdVar2[1] = dVar23;
      pdVar2 = (double *)(lVar46 + 0x20 + lVar40);
      *pdVar2 = dVar24;
      pdVar2[1] = dVar25;
      pdVar2 = (double *)(lVar46 + 0x30 + lVar40);
      *pdVar2 = dVar15;
      pdVar2[1] = dVar16;
      pdVar2 = (double *)(lVar46 + 0x40 + lVar40);
      *pdVar2 = dVar17;
      pdVar2[1] = dVar63;
      pdVar2 = (double *)(lVar46 + 0x50 + lVar40);
      *pdVar2 = dVar4;
      pdVar2[1] = dVar5;
    }
  }
  return;
}

// CastChecked<UAnimInstance,UObject_const_> @ 147524ec0

UAnimInstance * __cdecl CastChecked<UAnimInstance,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimInstance>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimInstance *)param_1;
  }
  pFVar3 = GetTypeName<UAnimInstance>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UAnimSingleNodeInstance,UAnimInstance> @ 147524f80

UAnimSingleNodeInstance * __cdecl
CastChecked<UAnimSingleNodeInstance,UAnimInstance>(UAnimInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UAnimInstance *)0x0) {
    pFVar3 = GetTypeName<UAnimSingleNodeInstance>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UAnimSingleNodeInstance::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimSingleNodeInstance *)param_1;
  }
  pFVar3 = GetTypeName<UAnimSingleNodeInstance>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAnimInstance>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USkeletalMeshComponent,USkeletalMeshComponent> @ 147525040

USkeletalMeshComponent * __cdecl
CastChecked<USkeletalMeshComponent,USkeletalMeshComponent>(USkeletalMeshComponent *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<USkeletalMeshComponent>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ConstructItems<FAnimationAttributeIdentifier,FAnimationAttributeIdentifier,int> @ 147525080

void __cdecl
ConstructItems<FAnimationAttributeIdentifier,FAnimationAttributeIdentifier,int>
          (void *param_1,FAnimationAttributeIdentifier *param_2,int param_3)

{
  FName *pFVar1;
  uint uVar2;
  FName FVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  FName *pFVar5;
  
  if (param_3 != 0) {
    piVar4 = &param_2->BoneIndex;
    pFVar5 = (FName *)((longlong)param_1 + 8);
    do {
      *(FName *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)piVar4) =
           ((FAnimationAttributeIdentifier *)(piVar4 + -4))->Name;
      *pFVar5 = *(FName *)(piVar4 + -2);
      pFVar5[1].ComparisonIndex.Value = *piVar4;
      FVar3 = *(FName *)(piVar4 + 2);
      pFVar5[2] = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      FVar3 = *(FName *)(piVar4 + 6);
      pFVar1 = pFVar5 + 5;
      pFVar5[3] = *(FName *)(piVar4 + 4);
      pFVar5[4] = FVar3;
      pFVar1->ComparisonIndex = 0;
      pFVar1->Number = 0;
      uVar2 = piVar4[10];
      _Src = (((FUtf8String *)(piVar4 + 8))->Data).AllocatorInstance.Data;
      pFVar5[6].ComparisonIndex.Value = uVar2;
      if (uVar2 == 0) {
        pFVar5[6].Number = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar2,0,(ForAnyElementType *)pFVar1,uVar2,(int *)&pFVar5[6].Number);
        memcpy((void *)*pFVar1,_Src,(longlong)(int)uVar2);
      }
      pFVar5 = pFVar5 + 8;
      piVar4 = piVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimationTransitionBetweenStates,FAnimationTransitionBetweenStates,int> @ 147525190

void __cdecl
ConstructItems<FAnimationTransitionBetweenStates,FAnimationTransitionBetweenStates,int>
          (void *param_1,FAnimationTransitionBetweenStates *param_2,int param_3)

{
  byte *pbVar1;
  UBlendProfile *pUVar2;
  TObjectPtr<UBlendProfile> TVar3;
  TObjectPtr<UBlendProfile>_u_0 *pTVar4;
  TObjectPtr<UBlendProfile>_u_0 *pTVar5;
  
  if (param_3 != 0) {
    pTVar4 = &(param_2->BlendProfile).field0_0x0;
    pTVar5 = (TObjectPtr<UBlendProfile>_u_0 *)((longlong)param_1 + 0x10);
    do {
      *(TObjectPtr<UBlendProfile>_u_0 *)
       ((longlong)pTVar4 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = pTVar4[-2];
      pUVar2 = pTVar4[-1].DebugPtr;
      pTVar5[-1].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UBlendProfile *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      TVar3.field0_0x0 = (TObjectPtr<UBlendProfile>_u_0)pTVar4->DebugPtr;
      pTVar5->DebugPtr = (UBlendProfile *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      *(undefined4 *)(pTVar5 + 1) = *(undefined4 *)(pTVar4 + 1);
      *(undefined4 *)((longlong)pTVar5 + 0xc) = *(undefined4 *)((longlong)pTVar4 + 0xc);
      *(undefined4 *)(pTVar5 + 2) = *(undefined4 *)(pTVar4 + 2);
      *(undefined4 *)((longlong)pTVar5 + 0x14) = *(undefined4 *)((longlong)pTVar4 + 0x14);
      *(undefined4 *)(pTVar5 + 3) = *(undefined4 *)(pTVar4 + 3);
      *(undefined4 *)((longlong)pTVar5 + 0x1c) = *(undefined4 *)((longlong)pTVar4 + 0x1c);
      *(undefined4 *)(pTVar5 + 4) = *(undefined4 *)(pTVar4 + 4);
      *(undefined1 *)((longlong)pTVar5 + 0x24) = *(undefined1 *)((longlong)pTVar4 + 0x24);
      *(undefined1 *)((longlong)pTVar5 + 0x25) = *(undefined1 *)((longlong)pTVar4 + 0x25);
      pbVar1 = (byte *)((longlong)pTVar4 + 0x26);
      pTVar4 = pTVar4 + 7;
      *(byte *)((longlong)pTVar5 + 0x26) =
           *(byte *)((longlong)pTVar5 + 0x26) ^ (*(byte *)((longlong)pTVar5 + 0x26) ^ *pbVar1) & 1;
      pTVar5 = pTVar5 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBakedAnimationState,FBakedAnimationState,int> @ 147525270

void __cdecl
ConstructItems<FBakedAnimationState,FBakedAnimationState,int>
          (void *param_1,FBakedAnimationState *param_2,int param_3)

{
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *pvVar4;
  FBakedStateExitTransition *pFVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x28);
    piVar8 = &(param_2->Transitions).ArrayNum;
    lVar7 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar8 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar8 + lVar7);
      iVar3 = piVar8[-8];
      pvVar4 = *(void **)(piVar8 + -10);
      piVar6[-8] = iVar3;
      if (iVar3 == 0) {
        piVar6[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar2,iVar3,piVar6 + -7);
        memcpy(pFVar2->Data,pvVar4,(longlong)iVar3 << 2);
      }
      piVar6[-6] = 0;
      piVar6[-5] = 0;
      iVar3 = piVar8[-4];
      pvVar4 = *(void **)(piVar8 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar6 + -6),iVar3,piVar6 + -3);
        memcpy(((ForAnyElementType *)(piVar6 + -6))->Data,pvVar4,(longlong)iVar3 << 2);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar8;
      pFVar5 = (FBakedStateExitTransition *)
               (((TArray<FBakedStateExitTransition,TSizedDefaultAllocator<32>_> *)(piVar8 + -2))->
               AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        ConstructItems<FBakedStateExitTransition,FBakedStateExitTransition,int>
                  (((ForAnyElementType *)(piVar6 + -2))->Data,pFVar5,iVar3);
      }
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar8 + 2);
      piVar6[4] = piVar8[4];
      piVar6[5] = piVar8[5];
      piVar6[6] = piVar8[6];
      piVar6[7] = piVar8[7];
      piVar6[8] = piVar8[8];
      *(char *)(piVar6 + 9) = (char)piVar8[9];
      puVar1 = (undefined1 *)((longlong)piVar8 + 0x25);
      piVar8 = piVar8 + 0x14;
      *(undefined1 *)((longlong)piVar6 + 0x25) = *puVar1;
      piVar6 = piVar6 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBakedStateExitTransition,FBakedStateExitTransition,int> @ 147525430

void __cdecl
ConstructItems<FBakedStateExitTransition,FBakedStateExitTransition,int>
          (void *param_1,FBakedStateExitTransition *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = &param_2->CustomResultNodeIndex;
    piVar4 = (int *)((longlong)param_1 + 4);
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + 7);
      *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)piVar3) =
           ((FBakedStateExitTransition *)(piVar3 + -1))->CanTakeDelegateIndex;
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      *(bool *)(piVar4 + 2) = *(bool *)(piVar3 + 2);
      *(bool *)((longlong)piVar4 + 9) = *(bool *)((longlong)piVar3 + 9);
      piVar4[3] = piVar3[3];
      *(FName *)(piVar4 + 4) = *(FName *)(piVar3 + 4);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar3[9];
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar3 + 7))->AllocatorInstance).Data;
      piVar4[9] = iVar2;
      if (iVar2 == 0) {
        piVar4[10] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar4 + 10);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar4 = piVar4 + 0xc;
      piVar3 = piVar3 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FLinkedAnimLayerClassData,FLinkedAnimLayerClassData,int> @ 147525530

void __cdecl
ConstructItems<FLinkedAnimLayerClassData,FLinkedAnimLayerClassData,int>
          (void *param_1,FLinkedAnimLayerClassData *param_2,int param_3)

{
  int *piVar1;
  bool *pbVar2;
  int iVar3;
  UObject *pUVar4;
  FLinkedAnimLayerInstanceData *pFVar5;
  TArray<FLinkedAnimLayerInstanceData,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pTVar6 = &param_2->InstancesData;
    pFVar7 = (ForAnyElementType *)((longlong)param_1 + 8);
    do {
      pUVar4 = *(UObject **)((longlong)(pTVar6 + -1) + 8);
      *(UObject **)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar6) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar7->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      iVar3 = pTVar6->ArrayNum;
      pFVar5 = (FLinkedAnimLayerInstanceData *)(pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar7[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,iVar3,0,pFVar7,iVar3,piVar1);
        ConstructItems<FLinkedAnimLayerInstanceData,FLinkedAnimLayerInstanceData,int>
                  (pFVar7->Data,pFVar5,iVar3);
      }
      pbVar2 = (bool *)(pTVar6 + 1);
      pTVar6 = pTVar6 + 2;
      *(bool *)&pFVar7[2].Data = *pbVar2;
      pFVar7 = pFVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FLinkedAnimLayerInstanceData,FLinkedAnimLayerInstanceData,int> @ 147525620

void __cdecl
ConstructItems<FLinkedAnimLayerInstanceData,FLinkedAnimLayerInstanceData,int>
          (void *param_1,FLinkedAnimLayerInstanceData *param_2,int param_3)

{
  bool bVar1;
  UAnimInstance *pUVar2;
  longlong lVar3;
  bool *pbVar4;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 + 0x14;
    pbVar4 = &param_2->bIsPersistent;
    do {
      pUVar2 = (((FLinkedAnimLayerInstanceData *)(pbVar4 + -0x58))->Instance).field0_0x0.DebugPtr;
      *(UAnimInstance **)(pbVar4 + (longlong)param_1 + (-0x58 - (longlong)param_2)) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimInstance *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      *(undefined4 *)(lVar3 + 0x20) = 0x80;
      *(undefined4 *)(lVar3 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x34) = 0;
      *(undefined4 *)(lVar3 + 0x3c) = 0;
      TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)(lVar3 + -0xc),
                  (TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)(pbVar4 + -0x50));
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 0x60;
      *(bool *)(lVar3 + 0x44) = bVar1;
      lVar3 = lVar3 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<UAnimInstance>,TSubclassOf<UAnimInstance>,int> @ 1475256f0

void __cdecl
ConstructItems<TSubclassOf<UAnimInstance>,TSubclassOf<UAnimInstance>,int>
          (void *param_1,TSubclassOf<UAnimInstance> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimTickRecord,int> @ 147525750

void __cdecl DefaultConstructItems<FAnimTickRecord,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0x3f800000;
      puVar1[1] = 0x3f800000;
      *(undefined2 *)(puVar1 + 2) = 0x100;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 100) = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FEditorElement,int> @ 1475257b0

void __cdecl DefaultConstructItems<FEditorElement,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FExposedValueHandler,int> @ 1475257f0

void __cdecl DefaultConstructItems<FExposedValueHandler,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FFIRFilterTimeBased,int> @ 147525820

void __cdecl DefaultConstructItems<FFIRFilterTimeBased,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimStreamableChunk,int> @ 147525850

void __cdecl DefaultConstructItems<FAnimStreamableChunk,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x15) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0x19) = 0xff;
      puVar1[4] = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)(puVar1 + 5) = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 8;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimSetMeshLinkup,int> @ 1475258b0

void __cdecl DestructItems<FAnimSetMeshLinkup,int>(FAnimSetMeshLinkup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->BoneToTrackTable).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAnimationAttributeIdentifier,int> @ 1475258f0

void __cdecl
DestructItems<FAnimationAttributeIdentifier,int>(FAnimationAttributeIdentifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ScriptStructPath).SubPathString;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLinkedAnimLayerClassData,int> @ 147525930

void __cdecl
DestructItems<FLinkedAnimLayerClassData,int>(FLinkedAnimLayerClassData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FLinkedAnimLayerInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InstancesData;
    do {
      DestructItems<FLinkedAnimLayerInstanceData,int>
                ((FLinkedAnimLayerInstanceData *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLinkedAnimLayerInstanceData,int> @ 147525980

void __cdecl
DestructItems<FLinkedAnimLayerInstanceData,int>(FLinkedAnimLayerInstanceData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->LinkedFunctions).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPropertyAccessCopyBatch,int> @ 1475259e0

void __cdecl
DestructItems<FPropertyAccessCopyBatch,int>(FPropertyAccessCopyBatch *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Copies).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPropertyAccessIndirection,int> @ 147525a20

void __cdecl
DestructItems<FPropertyAccessIndirection,int>(FPropertyAccessIndirection *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Property).field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPropertyAccessIndirectionChain,int> @ 147525a60

void __cdecl
DestructItems<FPropertyAccessIndirectionChain,int>
          (FPropertyAccessIndirectionChain *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Property).field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPropertyAccessSegment,int> @ 147525aa0

void __cdecl DestructItems<FPropertyAccessSegment,int>(FPropertyAccessSegment *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Property).field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVertex,int> @ 147525ae0

void __cdecl DestructItems<FVertex,int>(FVertex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Triangles;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::Anim::IAttributeBlendOperator,TDefaultDelete<UE::Anim::IAttributeBlendOperator>_>,int> @ 147525b20

void __cdecl
DestructItems<TUniquePtr<UE::Anim::IAttributeBlendOperator,TDefaultDelete<UE::Anim::IAttributeBlendOperator>_>,int>
          (TUniquePtr<UE::Anim::IAttributeBlendOperator,TDefaultDelete<UE::Anim::IAttributeBlendOperator>_>
           *param_1,int param_2)

{
  IAttributeBlendOperator *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IAttributeBlendOperator *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAnimStreamableChunk,int> @ 147525b60

void __cdecl DestructItems<FAnimStreamableChunk,int>(FAnimStreamableChunk *param_1,int param_2)

{
  FCompressedAnimSequence *pFVar1;
  ICompressedAnimData *pIVar2;
  FScriptContainerElement *pFVar3;
  FCompressedAnimSequence **ppFVar4;
  
  if (param_2 != 0) {
    ppFVar4 = &param_1->CompressedAnimSequence;
    do {
      pFVar1 = *ppFVar4;
      if (pFVar1 != (FCompressedAnimSequence *)0x0) {
        pIVar2 = (pFVar1->CompressedDataStructure).Ptr;
        if (pIVar2 != (ICompressedAnimData *)0x0) {
          (**(code **)pIVar2->_padding_)(pIVar2,1);
        }
        pFVar3 = (pFVar1->CompressedCurveByteStream).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        TMaybeMappedAllocator<0>::ForAnyElementType::~ForAnyElementType
                  ((ForAnyElementType *)&pFVar1->CompressedByteStream);
        pFVar3 = (pFVar1->IndexedCurveNames).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar1->CompressedCurveNames).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar1->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        operator_delete(pFVar1,0x80);
        *ppFVar4 = (FCompressedAnimSequence *)0x0;
      }
      FBulkData::~FBulkData((FBulkData *)(ppFVar4 + 1));
      ppFVar4 = ppFVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UAnimInstance> @ 147527f70

FString * __cdecl
GetFullNameForCastLogError<UAnimInstance>(FString *__return_storage_ptr__,UAnimInstance *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<USkeletalMeshComponent> @ 147527fa0

FString * __cdecl
GetFullNameForCastLogError<USkeletalMeshComponent>
          (FString *__return_storage_ptr__,USkeletalMeshComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UAnimSingleNodeInstance> @ 1475280e0

FString * __cdecl GetTypeName<UAnimSingleNodeInstance>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UAnimSingleNodeInstance::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FAnimNotifyEvent,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>_> @ 147528120

void __cdecl
AlgoImpl::
HeapSiftDown<FAnimNotifyEvent,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>_>
          (FAnimNotifyEvent *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_> *param_5)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  TObjectPtr<UAnimNotify>_u_0 TVar10;
  TObjectPtr<UAnimNotifyState>_u_0 TVar11;
  longlong lVar12;
  TObjectPtr<UAnimMontage>_u_0 TVar13;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar14;
  FName FVar15;
  longlong lVar16;
  TObjectPtr<UAnimNotify>_u_0 TVar17;
  TObjectPtr<UAnimMontage>_u_0 TVar18;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar19;
  FName FVar20;
  float fVar21;
  float fVar22;
  FNameEntryId FVar23;
  undefined4 uVar24;
  TEnumAsByte<EAnimLinkMethod::Type> TVar25;
  TEnumAsByte<EAnimLinkMethod::Type> TVar26;
  undefined2 uVar27;
  TEnumAsByte<EMontageNotifyTickType::Type> TVar28;
  TEnumAsByte<ENotifyFilterType::Type> TVar29;
  undefined3 uVar30;
  bool bVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  FNameEntryId FVar36;
  float fVar37;
  undefined4 uVar38;
  int iVar39;
  int iVar40;
  TEnumAsByte<EAnimLinkMethod::Type> TVar41;
  TEnumAsByte<EAnimLinkMethod::Type> TVar42;
  undefined2 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  bool bVar47;
  TEnumAsByte<EMontageNotifyTickType::Type> TVar48;
  undefined2 uVar49;
  float fVar50;
  TEnumAsByte<ENotifyFilterType::Type> TVar51;
  undefined3 uVar52;
  int iVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  undefined1 uVar57;
  int iVar58;
  bool bVar59;
  int iVar60;
  FAnimNotifyEvent *this;
  FAnimNotifyEvent *pFVar61;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar60 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      bVar59 = FAnimNotifyEvent::operator<(param_1 + (iVar2 + 2),param_1 + iVar60);
      if (bVar59) {
        iVar60 = iVar2;
      }
      iVar60 = iVar60 + 1;
    }
    pFVar61 = param_1 + iVar60;
    this = param_1 + param_2;
    bVar59 = FAnimNotifyEvent::operator<(this,pFVar61);
    if (!bVar59) break;
    lVar3 = this->_padding_;
    lVar4 = this->_padding_;
    FVar1 = this->CachedNotifyEventBaseName;
    lVar5 = this->_padding_;
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    fVar33 = this->TriggerTimeOffset;
    fVar34 = this->EndTriggerTimeOffset;
    fVar35 = this->TriggerWeightThreshold;
    FVar36.Value = (this->NotifyName).ComparisonIndex.Value;
    uVar9 = *(undefined8 *)&(this->NotifyName).Number;
    TVar10 = (this->Notify).field0_0x0;
    TVar11 = (this->NotifyStateClass).field0_0x0;
    fVar37 = this->Duration;
    uVar38 = *(undefined4 *)&this->field_0x5c;
    lVar12 = (this->EndLink)._padding_;
    TVar13 = (this->EndLink).LinkedMontage.field0_0x0;
    iVar39 = (this->EndLink).SlotIndex;
    iVar40 = (this->EndLink).SegmentIndex;
    TVar41.Value = (this->EndLink).LinkMethod.Value;
    TVar42.Value = (this->EndLink).CachedLinkMethod.Value;
    uVar43 = *(undefined2 *)&(this->EndLink).field_0x1a;
    fVar44 = (this->EndLink).SegmentBeginTime;
    fVar45 = (this->EndLink).SegmentLength;
    fVar46 = (this->EndLink).LinkValue;
    TVar14 = (this->EndLink).LinkedSequence.field0_0x0;
    bVar47 = this->bConvertedFromBranchingPoint;
    TVar48.Value = (this->MontageTickType).Value;
    uVar49 = *(undefined2 *)&this->field_0x92;
    fVar50 = this->NotifyTriggerChance;
    TVar51.Value = (this->NotifyFilterType).Value;
    uVar52 = *(undefined3 *)&this->field_0x99;
    iVar53 = this->NotifyFilterLOD;
    bVar54 = this->bCanBeFilteredViaRequest;
    bVar55 = this->bTriggerOnDedicatedServer;
    bVar56 = this->bTriggerOnFollower;
    uVar57 = this->field_0xa3;
    iVar58 = this->TrackIndex;
    FVar15 = this->CachedNotifyEventName;
    lVar16 = pFVar61->_padding_;
    this->_padding_ = pFVar61->_padding_;
    this->_padding_ = lVar16;
    lVar16 = pFVar61->_padding_;
    this->_padding_ = pFVar61->_padding_;
    this->_padding_ = lVar16;
    lVar16 = pFVar61->_padding_;
    this->_padding_ = pFVar61->_padding_;
    this->_padding_ = lVar16;
    fVar21 = pFVar61->EndTriggerTimeOffset;
    fVar22 = pFVar61->TriggerWeightThreshold;
    FVar23.Value = (pFVar61->NotifyName).ComparisonIndex.Value;
    this->TriggerTimeOffset = pFVar61->TriggerTimeOffset;
    this->EndTriggerTimeOffset = fVar21;
    this->TriggerWeightThreshold = fVar22;
    (this->NotifyName).ComparisonIndex = (FNameEntryId)FVar23.Value;
    TVar17 = (pFVar61->Notify).field0_0x0;
    *(undefined8 *)&(this->NotifyName).Number = *(undefined8 *)&(pFVar61->NotifyName).Number;
    (this->Notify).field0_0x0 = TVar17;
    fVar21 = pFVar61->Duration;
    uVar24 = *(undefined4 *)&pFVar61->field_0x5c;
    (this->NotifyStateClass).field0_0x0 = (pFVar61->NotifyStateClass).field0_0x0;
    this->Duration = fVar21;
    *(undefined4 *)&this->field_0x5c = uVar24;
    TVar18 = (pFVar61->EndLink).LinkedMontage.field0_0x0;
    (this->EndLink)._padding_ = (pFVar61->EndLink)._padding_;
    (this->EndLink).LinkedMontage.field0_0x0 = TVar18;
    iVar2 = (pFVar61->EndLink).SegmentIndex;
    TVar25.Value = (pFVar61->EndLink).LinkMethod.Value;
    TVar26.Value = (pFVar61->EndLink).CachedLinkMethod.Value;
    uVar27 = *(undefined2 *)&(pFVar61->EndLink).field_0x1a;
    fVar21 = (pFVar61->EndLink).SegmentBeginTime;
    (this->EndLink).SlotIndex = (pFVar61->EndLink).SlotIndex;
    (this->EndLink).SegmentIndex = iVar2;
    (this->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar25.Value;
    (this->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar26.Value;
    *(undefined2 *)&(this->EndLink).field_0x1a = uVar27;
    (this->EndLink).SegmentBeginTime = fVar21;
    fVar21 = (pFVar61->EndLink).LinkValue;
    TVar19 = (pFVar61->EndLink).LinkedSequence.field0_0x0;
    (this->EndLink).SegmentLength = (pFVar61->EndLink).SegmentLength;
    (this->EndLink).LinkValue = fVar21;
    (this->EndLink).LinkedSequence.field0_0x0 = TVar19;
    TVar28.Value = (pFVar61->MontageTickType).Value;
    uVar27 = *(undefined2 *)&pFVar61->field_0x92;
    fVar21 = pFVar61->NotifyTriggerChance;
    TVar29.Value = (pFVar61->NotifyFilterType).Value;
    uVar30 = *(undefined3 *)&pFVar61->field_0x99;
    iVar2 = pFVar61->NotifyFilterLOD;
    this->bConvertedFromBranchingPoint = pFVar61->bConvertedFromBranchingPoint;
    this->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar28.Value;
    *(undefined2 *)&this->field_0x92 = uVar27;
    this->NotifyTriggerChance = fVar21;
    this->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar29.Value;
    *(undefined3 *)&this->field_0x99 = uVar30;
    this->NotifyFilterLOD = iVar2;
    bVar59 = pFVar61->bTriggerOnDedicatedServer;
    bVar31 = pFVar61->bTriggerOnFollower;
    uVar32 = pFVar61->field_0xa3;
    iVar2 = pFVar61->TrackIndex;
    FVar20 = pFVar61->CachedNotifyEventName;
    this->bCanBeFilteredViaRequest = pFVar61->bCanBeFilteredViaRequest;
    this->bTriggerOnDedicatedServer = bVar59;
    this->bTriggerOnFollower = bVar31;
    this->field_0xa3 = uVar32;
    this->TrackIndex = iVar2;
    this->CachedNotifyEventName = FVar20;
    this->CachedNotifyEventBaseName = pFVar61->CachedNotifyEventBaseName;
    pFVar61->_padding_ = lVar3;
    pFVar61->_padding_ = lVar4;
    pFVar61->_padding_ = lVar5;
    pFVar61->_padding_ = lVar6;
    pFVar61->_padding_ = lVar7;
    pFVar61->_padding_ = lVar8;
    pFVar61->TriggerTimeOffset = fVar33;
    pFVar61->EndTriggerTimeOffset = fVar34;
    pFVar61->TriggerWeightThreshold = fVar35;
    (pFVar61->NotifyName).ComparisonIndex = (FNameEntryId)FVar36.Value;
    *(undefined8 *)&(pFVar61->NotifyName).Number = uVar9;
    (pFVar61->Notify).field0_0x0 = TVar10;
    (pFVar61->NotifyStateClass).field0_0x0 = TVar11;
    pFVar61->Duration = fVar37;
    *(undefined4 *)&pFVar61->field_0x5c = uVar38;
    (pFVar61->EndLink)._padding_ = lVar12;
    (pFVar61->EndLink).LinkedMontage.field0_0x0 = TVar13;
    (pFVar61->EndLink).SlotIndex = iVar39;
    (pFVar61->EndLink).SegmentIndex = iVar40;
    (pFVar61->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar41.Value;
    (pFVar61->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar42.Value;
    *(undefined2 *)&(pFVar61->EndLink).field_0x1a = uVar43;
    (pFVar61->EndLink).SegmentBeginTime = fVar44;
    (pFVar61->EndLink).SegmentLength = fVar45;
    (pFVar61->EndLink).LinkValue = fVar46;
    (pFVar61->EndLink).LinkedSequence.field0_0x0 = TVar14;
    pFVar61->bConvertedFromBranchingPoint = bVar47;
    pFVar61->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar48.Value;
    *(undefined2 *)&pFVar61->field_0x92 = uVar49;
    pFVar61->NotifyTriggerChance = fVar50;
    pFVar61->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar51.Value;
    *(undefined3 *)&pFVar61->field_0x99 = uVar52;
    pFVar61->NotifyFilterLOD = iVar53;
    pFVar61->bCanBeFilteredViaRequest = bVar54;
    pFVar61->bTriggerOnDedicatedServer = bVar55;
    pFVar61->bTriggerOnFollower = bVar56;
    pFVar61->field_0xa3 = uVar57;
    pFVar61->TrackIndex = iVar58;
    pFVar61->CachedNotifyEventName = FVar15;
    pFVar61->CachedNotifyEventBaseName = FVar1;
    param_2 = iVar60;
  }
  return;
}

// HeapSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_> @ 147528370

void __cdecl
AlgoImpl::
HeapSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>
          (FAnimNotifyEvent *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_> param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  TObjectPtr<UAnimNotify>_u_0 TVar4;
  TObjectPtr<UAnimMontage>_u_0 TVar5;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar6;
  FName FVar7;
  float fVar8;
  float fVar9;
  FNameEntryId FVar10;
  undefined4 uVar11;
  TEnumAsByte<EAnimLinkMethod::Type> TVar12;
  TEnumAsByte<EAnimLinkMethod::Type> TVar13;
  undefined2 uVar14;
  TEnumAsByte<EMontageNotifyTickType::Type> TVar15;
  TEnumAsByte<ENotifyFilterType::Type> TVar16;
  undefined3 uVar17;
  bool bVar18;
  undefined1 uVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FAnimNotifyEvent *this;
  FAnimNotifyEvent *pFVar23;
  longlong lVar24;
  FAnimNotifyEvent *pFVar25;
  int iVar26;
  FIdentityFunctor local_res10 [16];
  TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_> local_res20;
  TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_> local_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TObjectPtr<UAnimNotify>_u_0 TStack_a8;
  TObjectPtr<UAnimNotifyState>_u_0 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  TObjectPtr<UAnimMontage>_u_0 TStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  TObjectPtr<UAnimSequenceBase>_u_0 TStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  FName FStack_48;
  FName local_40;
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar20) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_f8.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar20)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar21 = (param_2 + -2) / 2;
  HeapSiftDown<FAnimNotifyEvent,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>_>
            (param_1,iVar21,param_2,local_res10,&local_f8);
  while (iVar21 != 0) {
    iVar21 = iVar21 + -1;
    HeapSiftDown<FAnimNotifyEvent,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>_>
              (param_1,iVar21,param_2,local_res10,&local_f8);
  }
  iVar21 = param_2 + -1;
  lVar24 = (longlong)iVar21;
  if (0 < iVar21) {
    pFVar25 = param_1 + lVar24;
    do {
      local_f0 = param_1->_padding_;
      lStack_e8 = param_1->_padding_;
      local_40 = param_1->CachedNotifyEventBaseName;
      local_e0 = param_1->_padding_;
      lStack_d8 = param_1->_padding_;
      local_d0 = param_1->_padding_;
      lStack_c8 = param_1->_padding_;
      local_c0._0_4_ = param_1->TriggerTimeOffset;
      local_c0._4_4_ = param_1->EndTriggerTimeOffset;
      uStack_b8._0_4_ = param_1->TriggerWeightThreshold;
      uStack_b8._4_4_ = (param_1->NotifyName).ComparisonIndex;
      local_b0 = *(undefined8 *)&(param_1->NotifyName).Number;
      TStack_a8 = (param_1->Notify).field0_0x0;
      local_a0 = (param_1->NotifyStateClass).field0_0x0;
      uStack_98 = *(undefined8 *)&param_1->Duration;
      local_90 = (param_1->EndLink)._padding_;
      TStack_88 = (param_1->EndLink).LinkedMontage.field0_0x0;
      local_80._0_4_ = (param_1->EndLink).SlotIndex;
      local_80._4_4_ = (param_1->EndLink).SegmentIndex;
      uStack_78._0_1_ = (param_1->EndLink).LinkMethod;
      uStack_78._1_1_ = (param_1->EndLink).CachedLinkMethod;
      uStack_78._2_2_ = *(undefined2 *)&(param_1->EndLink).field_0x1a;
      uStack_78._4_4_ = (param_1->EndLink).SegmentBeginTime;
      local_70._0_4_ = (param_1->EndLink).SegmentLength;
      local_70._4_4_ = (param_1->EndLink).LinkValue;
      TStack_68 = (param_1->EndLink).LinkedSequence.field0_0x0;
      local_60._0_1_ = param_1->bConvertedFromBranchingPoint;
      local_60._1_1_ = param_1->MontageTickType;
      local_60._2_2_ = *(undefined2 *)&param_1->field_0x92;
      local_60._4_4_ = param_1->NotifyTriggerChance;
      uStack_58._0_1_ = param_1->NotifyFilterType;
      uStack_58._1_3_ = *(undefined3 *)&param_1->field_0x99;
      uStack_58._4_4_ = param_1->NotifyFilterLOD;
      local_50._0_1_ = param_1->bCanBeFilteredViaRequest;
      local_50._1_1_ = param_1->bTriggerOnDedicatedServer;
      local_50._2_1_ = param_1->bTriggerOnFollower;
      local_50._3_1_ = param_1->field_0xa3;
      local_50._4_4_ = param_1->TrackIndex;
      FStack_48 = param_1->CachedNotifyEventName;
      lVar3 = pFVar25->_padding_;
      param_1->_padding_ = pFVar25->_padding_;
      param_1->_padding_ = lVar3;
      lVar3 = pFVar25->_padding_;
      param_1->_padding_ = pFVar25->_padding_;
      param_1->_padding_ = lVar3;
      lVar3 = pFVar25->_padding_;
      param_1->_padding_ = pFVar25->_padding_;
      param_1->_padding_ = lVar3;
      fVar8 = pFVar25->EndTriggerTimeOffset;
      fVar9 = pFVar25->TriggerWeightThreshold;
      FVar10.Value = (pFVar25->NotifyName).ComparisonIndex.Value;
      param_1->TriggerTimeOffset = pFVar25->TriggerTimeOffset;
      param_1->EndTriggerTimeOffset = fVar8;
      param_1->TriggerWeightThreshold = fVar9;
      (param_1->NotifyName).ComparisonIndex = (FNameEntryId)FVar10.Value;
      TVar4 = (pFVar25->Notify).field0_0x0;
      *(undefined8 *)&(param_1->NotifyName).Number = *(undefined8 *)&(pFVar25->NotifyName).Number;
      (param_1->Notify).field0_0x0 = TVar4;
      fVar8 = pFVar25->Duration;
      uVar11 = *(undefined4 *)&pFVar25->field_0x5c;
      (param_1->NotifyStateClass).field0_0x0 = (pFVar25->NotifyStateClass).field0_0x0;
      param_1->Duration = fVar8;
      *(undefined4 *)&param_1->field_0x5c = uVar11;
      TVar5 = (pFVar25->EndLink).LinkedMontage.field0_0x0;
      (param_1->EndLink)._padding_ = (pFVar25->EndLink)._padding_;
      (param_1->EndLink).LinkedMontage.field0_0x0 = TVar5;
      iVar26 = (pFVar25->EndLink).SegmentIndex;
      TVar12.Value = (pFVar25->EndLink).LinkMethod.Value;
      TVar13.Value = (pFVar25->EndLink).CachedLinkMethod.Value;
      uVar14 = *(undefined2 *)&(pFVar25->EndLink).field_0x1a;
      fVar8 = (pFVar25->EndLink).SegmentBeginTime;
      (param_1->EndLink).SlotIndex = (pFVar25->EndLink).SlotIndex;
      (param_1->EndLink).SegmentIndex = iVar26;
      (param_1->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar12.Value;
      (param_1->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar13.Value;
      *(undefined2 *)&(param_1->EndLink).field_0x1a = uVar14;
      (param_1->EndLink).SegmentBeginTime = fVar8;
      fVar8 = (pFVar25->EndLink).LinkValue;
      TVar6 = (pFVar25->EndLink).LinkedSequence.field0_0x0;
      (param_1->EndLink).SegmentLength = (pFVar25->EndLink).SegmentLength;
      (param_1->EndLink).LinkValue = fVar8;
      (param_1->EndLink).LinkedSequence.field0_0x0 = TVar6;
      TVar15.Value = (pFVar25->MontageTickType).Value;
      uVar14 = *(undefined2 *)&pFVar25->field_0x92;
      fVar8 = pFVar25->NotifyTriggerChance;
      TVar16.Value = (pFVar25->NotifyFilterType).Value;
      uVar17 = *(undefined3 *)&pFVar25->field_0x99;
      iVar26 = pFVar25->NotifyFilterLOD;
      param_1->bConvertedFromBranchingPoint = pFVar25->bConvertedFromBranchingPoint;
      param_1->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar15.Value;
      *(undefined2 *)&param_1->field_0x92 = uVar14;
      param_1->NotifyTriggerChance = fVar8;
      param_1->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar16.Value;
      *(undefined3 *)&param_1->field_0x99 = uVar17;
      param_1->NotifyFilterLOD = iVar26;
      bVar20 = pFVar25->bTriggerOnDedicatedServer;
      bVar18 = pFVar25->bTriggerOnFollower;
      uVar19 = pFVar25->field_0xa3;
      iVar26 = pFVar25->TrackIndex;
      FVar7 = pFVar25->CachedNotifyEventName;
      param_1->bCanBeFilteredViaRequest = pFVar25->bCanBeFilteredViaRequest;
      param_1->bTriggerOnDedicatedServer = bVar20;
      param_1->bTriggerOnFollower = bVar18;
      param_1->field_0xa3 = uVar19;
      param_1->TrackIndex = iVar26;
      param_1->CachedNotifyEventName = FVar7;
      param_1->CachedNotifyEventBaseName = pFVar25->CachedNotifyEventBaseName;
      pFVar25->_padding_ = local_f0;
      pFVar25->_padding_ = lStack_e8;
      pFVar25->_padding_ = local_e0;
      pFVar25->_padding_ = lStack_d8;
      pFVar25->_padding_ = local_d0;
      pFVar25->_padding_ = lStack_c8;
      pFVar25->TriggerTimeOffset = (float)(undefined4)local_c0;
      pFVar25->EndTriggerTimeOffset = (float)local_c0._4_4_;
      pFVar25->TriggerWeightThreshold = (float)(undefined4)uStack_b8;
      (pFVar25->NotifyName).ComparisonIndex = (FNameEntryId)uStack_b8._4_4_;
      *(undefined8 *)&(pFVar25->NotifyName).Number = local_b0;
      (pFVar25->Notify).field0_0x0 = TStack_a8;
      (pFVar25->NotifyStateClass).field0_0x0 = local_a0;
      *(undefined8 *)&pFVar25->Duration = uStack_98;
      (pFVar25->EndLink)._padding_ = local_90;
      (pFVar25->EndLink).LinkedMontage.field0_0x0 = TStack_88;
      (pFVar25->EndLink).SlotIndex = (undefined4)local_80;
      (pFVar25->EndLink).SegmentIndex = local_80._4_4_;
      (pFVar25->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_78;
      (pFVar25->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_78._1_1_;
      *(undefined2 *)&(pFVar25->EndLink).field_0x1a = uStack_78._2_2_;
      (pFVar25->EndLink).SegmentBeginTime = (float)uStack_78._4_4_;
      (pFVar25->EndLink).SegmentLength = (float)(undefined4)local_70;
      (pFVar25->EndLink).LinkValue = (float)local_70._4_4_;
      (pFVar25->EndLink).LinkedSequence.field0_0x0 = TStack_68;
      pFVar25->bConvertedFromBranchingPoint = (bool)(undefined1)local_60;
      pFVar25->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_60._1_1_;
      *(undefined2 *)&pFVar25->field_0x92 = local_60._2_2_;
      pFVar25->NotifyTriggerChance = (float)local_60._4_4_;
      pFVar25->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_58;
      *(undefined3 *)&pFVar25->field_0x99 = uStack_58._1_3_;
      pFVar25->NotifyFilterLOD = uStack_58._4_4_;
      pFVar25->bCanBeFilteredViaRequest = (bool)(undefined1)local_50;
      pFVar25->bTriggerOnDedicatedServer = (bool)local_50._1_1_;
      pFVar25->bTriggerOnFollower = (bool)local_50._2_1_;
      pFVar25->field_0xa3 = local_50._3_1_;
      pFVar25->TrackIndex = local_50._4_4_;
      pFVar25->CachedNotifyEventName = FStack_48;
      pFVar25->CachedNotifyEventBaseName = local_40;
      iVar26 = 0;
      if (1 < iVar21) {
        do {
          iVar2 = iVar26 * 2;
          iVar22 = iVar2 + 1;
          if (iVar2 + 2 < iVar21) {
            bVar20 = FAnimNotifyEvent::operator<(param_1 + (iVar2 + 2),param_1 + iVar22);
            if (bVar20) {
              iVar22 = iVar2;
            }
            iVar22 = iVar22 + 1;
          }
          pFVar23 = param_1 + iVar22;
          this = param_1 + iVar26;
          bVar20 = FAnimNotifyEvent::operator<(this,pFVar23);
          if (!bVar20) break;
          local_f0 = this->_padding_;
          lStack_e8 = this->_padding_;
          local_40 = this->CachedNotifyEventBaseName;
          local_e0 = this->_padding_;
          lStack_d8 = this->_padding_;
          local_d0 = this->_padding_;
          lStack_c8 = this->_padding_;
          local_c0._0_4_ = this->TriggerTimeOffset;
          local_c0._4_4_ = this->EndTriggerTimeOffset;
          uStack_b8._0_4_ = this->TriggerWeightThreshold;
          uStack_b8._4_4_ = (this->NotifyName).ComparisonIndex;
          local_b0 = *(undefined8 *)&(this->NotifyName).Number;
          TStack_a8 = (this->Notify).field0_0x0;
          local_a0 = (this->NotifyStateClass).field0_0x0;
          uStack_98 = *(undefined8 *)&this->Duration;
          local_90 = (this->EndLink)._padding_;
          TStack_88 = (this->EndLink).LinkedMontage.field0_0x0;
          local_80._0_4_ = (this->EndLink).SlotIndex;
          local_80._4_4_ = (this->EndLink).SegmentIndex;
          uStack_78._0_1_ = (this->EndLink).LinkMethod;
          uStack_78._1_1_ = (this->EndLink).CachedLinkMethod;
          uStack_78._2_2_ = *(undefined2 *)&(this->EndLink).field_0x1a;
          uStack_78._4_4_ = (this->EndLink).SegmentBeginTime;
          local_70._0_4_ = (this->EndLink).SegmentLength;
          local_70._4_4_ = (this->EndLink).LinkValue;
          TStack_68 = (this->EndLink).LinkedSequence.field0_0x0;
          local_60._0_1_ = this->bConvertedFromBranchingPoint;
          local_60._1_1_ = this->MontageTickType;
          local_60._2_2_ = *(undefined2 *)&this->field_0x92;
          local_60._4_4_ = this->NotifyTriggerChance;
          uStack_58._0_1_ = this->NotifyFilterType;
          uStack_58._1_3_ = *(undefined3 *)&this->field_0x99;
          uStack_58._4_4_ = this->NotifyFilterLOD;
          local_50._0_1_ = this->bCanBeFilteredViaRequest;
          local_50._1_1_ = this->bTriggerOnDedicatedServer;
          local_50._2_1_ = this->bTriggerOnFollower;
          local_50._3_1_ = this->field_0xa3;
          local_50._4_4_ = this->TrackIndex;
          FStack_48 = this->CachedNotifyEventName;
          lVar3 = pFVar23->_padding_;
          this->_padding_ = pFVar23->_padding_;
          this->_padding_ = lVar3;
          lVar3 = pFVar23->_padding_;
          this->_padding_ = pFVar23->_padding_;
          this->_padding_ = lVar3;
          lVar3 = pFVar23->_padding_;
          this->_padding_ = pFVar23->_padding_;
          this->_padding_ = lVar3;
          fVar8 = pFVar23->EndTriggerTimeOffset;
          fVar9 = pFVar23->TriggerWeightThreshold;
          FVar10.Value = (pFVar23->NotifyName).ComparisonIndex.Value;
          this->TriggerTimeOffset = pFVar23->TriggerTimeOffset;
          this->EndTriggerTimeOffset = fVar8;
          this->TriggerWeightThreshold = fVar9;
          (this->NotifyName).ComparisonIndex = (FNameEntryId)FVar10.Value;
          TVar4 = (pFVar23->Notify).field0_0x0;
          *(undefined8 *)&(this->NotifyName).Number = *(undefined8 *)&(pFVar23->NotifyName).Number;
          (this->Notify).field0_0x0 = TVar4;
          fVar8 = pFVar23->Duration;
          uVar11 = *(undefined4 *)&pFVar23->field_0x5c;
          (this->NotifyStateClass).field0_0x0 = (pFVar23->NotifyStateClass).field0_0x0;
          this->Duration = fVar8;
          *(undefined4 *)&this->field_0x5c = uVar11;
          TVar5 = (pFVar23->EndLink).LinkedMontage.field0_0x0;
          (this->EndLink)._padding_ = (pFVar23->EndLink)._padding_;
          (this->EndLink).LinkedMontage.field0_0x0 = TVar5;
          iVar26 = (pFVar23->EndLink).SegmentIndex;
          TVar12.Value = (pFVar23->EndLink).LinkMethod.Value;
          TVar13.Value = (pFVar23->EndLink).CachedLinkMethod.Value;
          uVar14 = *(undefined2 *)&(pFVar23->EndLink).field_0x1a;
          fVar8 = (pFVar23->EndLink).SegmentBeginTime;
          (this->EndLink).SlotIndex = (pFVar23->EndLink).SlotIndex;
          (this->EndLink).SegmentIndex = iVar26;
          (this->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar12.Value;
          (this->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar13.Value;
          *(undefined2 *)&(this->EndLink).field_0x1a = uVar14;
          (this->EndLink).SegmentBeginTime = fVar8;
          fVar8 = (pFVar23->EndLink).LinkValue;
          TVar6 = (pFVar23->EndLink).LinkedSequence.field0_0x0;
          (this->EndLink).SegmentLength = (pFVar23->EndLink).SegmentLength;
          (this->EndLink).LinkValue = fVar8;
          (this->EndLink).LinkedSequence.field0_0x0 = TVar6;
          TVar15.Value = (pFVar23->MontageTickType).Value;
          uVar14 = *(undefined2 *)&pFVar23->field_0x92;
          fVar8 = pFVar23->NotifyTriggerChance;
          TVar16.Value = (pFVar23->NotifyFilterType).Value;
          uVar17 = *(undefined3 *)&pFVar23->field_0x99;
          iVar26 = pFVar23->NotifyFilterLOD;
          this->bConvertedFromBranchingPoint = pFVar23->bConvertedFromBranchingPoint;
          this->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar15.Value;
          *(undefined2 *)&this->field_0x92 = uVar14;
          this->NotifyTriggerChance = fVar8;
          this->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar16.Value;
          *(undefined3 *)&this->field_0x99 = uVar17;
          this->NotifyFilterLOD = iVar26;
          bVar20 = pFVar23->bTriggerOnDedicatedServer;
          bVar18 = pFVar23->bTriggerOnFollower;
          uVar19 = pFVar23->field_0xa3;
          iVar26 = pFVar23->TrackIndex;
          FVar7 = pFVar23->CachedNotifyEventName;
          this->bCanBeFilteredViaRequest = pFVar23->bCanBeFilteredViaRequest;
          this->bTriggerOnDedicatedServer = bVar20;
          this->bTriggerOnFollower = bVar18;
          this->field_0xa3 = uVar19;
          this->TrackIndex = iVar26;
          this->CachedNotifyEventName = FVar7;
          this->CachedNotifyEventBaseName = pFVar23->CachedNotifyEventBaseName;
          pFVar23->_padding_ = local_f0;
          pFVar23->_padding_ = lStack_e8;
          pFVar23->_padding_ = local_e0;
          pFVar23->_padding_ = lStack_d8;
          pFVar23->_padding_ = local_d0;
          pFVar23->_padding_ = lStack_c8;
          pFVar23->TriggerTimeOffset = (float)(undefined4)local_c0;
          pFVar23->EndTriggerTimeOffset = (float)local_c0._4_4_;
          pFVar23->TriggerWeightThreshold = (float)(undefined4)uStack_b8;
          (pFVar23->NotifyName).ComparisonIndex = (FNameEntryId)uStack_b8._4_4_;
          *(undefined8 *)&(pFVar23->NotifyName).Number = local_b0;
          (pFVar23->Notify).field0_0x0 = TStack_a8;
          (pFVar23->NotifyStateClass).field0_0x0 = local_a0;
          *(undefined8 *)&pFVar23->Duration = uStack_98;
          (pFVar23->EndLink)._padding_ = local_90;
          (pFVar23->EndLink).LinkedMontage.field0_0x0 = TStack_88;
          (pFVar23->EndLink).SlotIndex = (undefined4)local_80;
          (pFVar23->EndLink).SegmentIndex = local_80._4_4_;
          (pFVar23->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_78;
          (pFVar23->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_78._1_1_;
          *(undefined2 *)&(pFVar23->EndLink).field_0x1a = uStack_78._2_2_;
          (pFVar23->EndLink).SegmentBeginTime = (float)uStack_78._4_4_;
          (pFVar23->EndLink).SegmentLength = (float)(undefined4)local_70;
          (pFVar23->EndLink).LinkValue = (float)local_70._4_4_;
          (pFVar23->EndLink).LinkedSequence.field0_0x0 = TStack_68;
          pFVar23->bConvertedFromBranchingPoint = (bool)(undefined1)local_60;
          pFVar23->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_60._1_1_;
          *(undefined2 *)&pFVar23->field_0x92 = local_60._2_2_;
          pFVar23->NotifyTriggerChance = (float)local_60._4_4_;
          pFVar23->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_58;
          *(undefined3 *)&pFVar23->field_0x99 = uStack_58._1_3_;
          pFVar23->NotifyFilterLOD = uStack_58._4_4_;
          pFVar23->bCanBeFilteredViaRequest = (bool)(undefined1)local_50;
          pFVar23->bTriggerOnDedicatedServer = (bool)local_50._1_1_;
          pFVar23->bTriggerOnFollower = (bool)local_50._2_1_;
          pFVar23->field_0xa3 = local_50._3_1_;
          pFVar23->TrackIndex = local_50._4_4_;
          pFVar23->CachedNotifyEventName = FStack_48;
          pFVar23->CachedNotifyEventBaseName = local_40;
          iVar26 = iVar22;
        } while (iVar22 * 2 + 1 < iVar21);
      }
      iVar21 = iVar21 + -1;
      lVar24 = lVar24 + -1;
      pFVar25 = pFVar25 + -1;
    } while (0 < lVar24);
  }
  return;
}

// HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,`UBlendSpace::GetSamplesFromBlendInput'::__l2::<lambda_1>_>_> @ 147528880

void __cdecl
AlgoImpl::
HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_UBlendSpace::GetSamplesFromBlendInput_::__l2::<lambda_1>_>_>
          (FBlendSampleData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBlendSampleData,_public:_bool___cdecl_UBlendSpace::GetSamplesFromBlendInput(UE::Math::TVector<double>_const_&,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>_&,int_&,bool)const_::_2_::<lambda_1>_>
          param_4)

{
  FBlendSampleData *pFVar1;
  FBlendSampleData *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  TObjectPtr<UAnimSequence>_u_0 TVar6;
  TObjectPtr<UAnimSequence>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FMarkerPair FVar10;
  FMarkerPair FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  FMarkerPair FVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined3 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  bool bVar35;
  undefined3 uVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  FBlendSampleData *pFVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  
  if (param_2 < 0) {
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar37) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar37) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar38 = (param_2 + -2) / 2;
  iVar39 = iVar38 * 2 + 1;
  iVar43 = iVar39;
  iVar44 = iVar38;
  do {
    while (param_2 <= iVar39) {
LAB_147528a09:
      if (iVar44 == 0) {
        iVar39 = param_2 + -1;
        lVar40 = (longlong)iVar39;
        if (0 < iVar39) {
          pFVar41 = param_1 + lVar40;
          do {
            iVar43 = pFVar41->_padding_;
            TVar6 = (pFVar41->Animation).field0_0x0;
            iVar44 = param_1->SampleDataIndex;
            iVar42 = param_1->_padding_;
            TVar7 = (param_1->Animation).field0_0x0;
            fVar23 = param_1->TotalWeight;
            fVar24 = param_1->WeightRate;
            fVar30 = param_1->Time;
            fVar31 = param_1->PreviousTime;
            fVar32 = param_1->SamplePlayRate;
            fVar33 = (param_1->DeltaTimeRecord).Delta;
            fVar34 = (param_1->DeltaTimeRecord).Previous;
            bVar35 = (param_1->DeltaTimeRecord).bPreviousIsValid;
            uVar36 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
            FVar10 = (param_1->MarkerTickRecord).PreviousMarker;
            FVar11 = (param_1->MarkerTickRecord).NextMarker;
            pFVar12 = (param_1->PerBoneBlendData).AllocatorInstance.Data;
            iVar16 = (param_1->PerBoneBlendData).ArrayNum;
            iVar18 = (param_1->PerBoneBlendData).ArrayMax;
            pFVar13 = (param_1->PerBoneWeightRate).AllocatorInstance.Data;
            iVar19 = (param_1->PerBoneWeightRate).ArrayNum;
            iVar20 = (param_1->PerBoneWeightRate).ArrayMax;
            param_1->SampleDataIndex = pFVar41->SampleDataIndex;
            param_1->_padding_ = iVar43;
            (param_1->Animation).field0_0x0 = TVar6;
            fVar17 = pFVar41->WeightRate;
            fVar21 = pFVar41->Time;
            fVar22 = pFVar41->PreviousTime;
            param_1->TotalWeight = pFVar41->TotalWeight;
            param_1->WeightRate = fVar17;
            param_1->Time = fVar21;
            param_1->PreviousTime = fVar22;
            fVar17 = (pFVar41->DeltaTimeRecord).Delta;
            fVar21 = (pFVar41->DeltaTimeRecord).Previous;
            bVar37 = (pFVar41->DeltaTimeRecord).bPreviousIsValid;
            uVar29 = *(undefined3 *)&(pFVar41->DeltaTimeRecord).field_0x9;
            param_1->SamplePlayRate = pFVar41->SamplePlayRate;
            (param_1->DeltaTimeRecord).Delta = fVar17;
            (param_1->DeltaTimeRecord).Previous = fVar21;
            (param_1->DeltaTimeRecord).bPreviousIsValid = bVar37;
            *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9 = uVar29;
            FVar15 = (pFVar41->MarkerTickRecord).NextMarker;
            (param_1->MarkerTickRecord).PreviousMarker = (pFVar41->MarkerTickRecord).PreviousMarker;
            (param_1->MarkerTickRecord).NextMarker = FVar15;
            iVar43 = (pFVar41->PerBoneBlendData).ArrayNum;
            iVar38 = (pFVar41->PerBoneBlendData).ArrayMax;
            (param_1->PerBoneBlendData).AllocatorInstance.Data =
                 (pFVar41->PerBoneBlendData).AllocatorInstance.Data;
            (param_1->PerBoneBlendData).ArrayNum = iVar43;
            (param_1->PerBoneBlendData).ArrayMax = iVar38;
            iVar43 = (pFVar41->PerBoneWeightRate).ArrayNum;
            iVar38 = (pFVar41->PerBoneWeightRate).ArrayMax;
            (param_1->PerBoneWeightRate).AllocatorInstance.Data =
                 (pFVar41->PerBoneWeightRate).AllocatorInstance.Data;
            (param_1->PerBoneWeightRate).ArrayNum = iVar43;
            (param_1->PerBoneWeightRate).ArrayMax = iVar38;
            pFVar41->SampleDataIndex = iVar44;
            pFVar41->_padding_ = iVar42;
            (pFVar41->Animation).field0_0x0 = TVar7;
            pFVar41->TotalWeight = fVar23;
            pFVar41->WeightRate = fVar24;
            pFVar41->Time = fVar30;
            pFVar41->PreviousTime = fVar31;
            pFVar41->SamplePlayRate = fVar32;
            (pFVar41->DeltaTimeRecord).Delta = fVar33;
            (pFVar41->DeltaTimeRecord).Previous = fVar34;
            (pFVar41->DeltaTimeRecord).bPreviousIsValid = bVar35;
            *(undefined3 *)&(pFVar41->DeltaTimeRecord).field_0x9 = uVar36;
            (pFVar41->MarkerTickRecord).PreviousMarker = FVar10;
            (pFVar41->MarkerTickRecord).NextMarker = FVar11;
            (pFVar41->PerBoneBlendData).AllocatorInstance.Data = pFVar12;
            (pFVar41->PerBoneBlendData).ArrayNum = iVar16;
            (pFVar41->PerBoneBlendData).ArrayMax = iVar18;
            (pFVar41->PerBoneWeightRate).AllocatorInstance.Data = pFVar13;
            (pFVar41->PerBoneWeightRate).ArrayNum = iVar19;
            (pFVar41->PerBoneWeightRate).ArrayMax = iVar20;
            iVar43 = 0;
            if (1 < iVar39) {
              do {
                iVar44 = iVar43 * 2;
                iVar38 = iVar44 + 1;
                if (iVar44 + 2 < iVar39) {
                  if (param_1[iVar38].TotalWeight <= param_1[(longlong)iVar44 + 2].TotalWeight &&
                      param_1[(longlong)iVar44 + 2].TotalWeight != param_1[iVar38].TotalWeight) {
                    iVar38 = iVar44;
                  }
                  iVar38 = iVar38 + 1;
                }
                if (param_1[iVar43].TotalWeight < param_1[iVar38].TotalWeight ||
                    param_1[iVar43].TotalWeight == param_1[iVar38].TotalWeight) break;
                pFVar1 = param_1 + iVar38;
                iVar44 = pFVar1->_padding_;
                TVar6 = (pFVar1->Animation).field0_0x0;
                pFVar2 = param_1 + iVar43;
                iVar16 = pFVar2->SampleDataIndex;
                iVar18 = pFVar2->_padding_;
                TVar7 = (pFVar2->Animation).field0_0x0;
                pFVar2 = param_1 + iVar43;
                fVar21 = pFVar2->TotalWeight;
                fVar22 = pFVar2->WeightRate;
                uVar8 = *(undefined8 *)(&pFVar2->TotalWeight + 2);
                pFVar2 = param_1 + iVar43;
                fVar23 = pFVar2->SamplePlayRate;
                fVar24 = (pFVar2->DeltaTimeRecord).Delta;
                uVar9 = *(undefined8 *)(&pFVar2->SamplePlayRate + 2);
                FVar10 = param_1[iVar43].MarkerTickRecord.PreviousMarker;
                FVar11 = param_1[iVar43].MarkerTickRecord.NextMarker;
                pTVar3 = &param_1[iVar43].PerBoneBlendData;
                pFVar12 = (pTVar3->AllocatorInstance).Data;
                iVar19 = pTVar3->ArrayNum;
                iVar20 = pTVar3->ArrayMax;
                pTVar3 = &param_1[iVar43].PerBoneWeightRate;
                pFVar13 = (pTVar3->AllocatorInstance).Data;
                iVar25 = pTVar3->ArrayNum;
                iVar26 = pTVar3->ArrayMax;
                pFVar2 = param_1 + iVar43;
                pFVar2->SampleDataIndex = pFVar1->SampleDataIndex;
                pFVar2->_padding_ = iVar44;
                (pFVar2->Animation).field0_0x0 = TVar6;
                pFVar1 = param_1 + iVar38;
                fVar17 = pFVar1->WeightRate;
                uVar14 = *(undefined8 *)(&pFVar1->TotalWeight + 2);
                pFVar2 = param_1 + iVar43;
                pFVar2->TotalWeight = pFVar1->TotalWeight;
                pFVar2->WeightRate = fVar17;
                *(undefined8 *)(&pFVar2->TotalWeight + 2) = uVar14;
                pFVar1 = param_1 + iVar38;
                fVar17 = (pFVar1->DeltaTimeRecord).Delta;
                uVar14 = *(undefined8 *)(&pFVar1->SamplePlayRate + 2);
                pFVar2 = param_1 + iVar43;
                pFVar2->SamplePlayRate = pFVar1->SamplePlayRate;
                (pFVar2->DeltaTimeRecord).Delta = fVar17;
                *(undefined8 *)(&pFVar2->SamplePlayRate + 2) = uVar14;
                FVar15 = param_1[iVar38].MarkerTickRecord.NextMarker;
                param_1[iVar43].MarkerTickRecord.PreviousMarker =
                     param_1[iVar38].MarkerTickRecord.PreviousMarker;
                param_1[iVar43].MarkerTickRecord.NextMarker = FVar15;
                pTVar3 = &param_1[iVar38].PerBoneBlendData;
                iVar44 = pTVar3->ArrayNum;
                iVar42 = pTVar3->ArrayMax;
                pTVar4 = &param_1[iVar43].PerBoneBlendData;
                (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
                pTVar4->ArrayNum = iVar44;
                pTVar4->ArrayMax = iVar42;
                pTVar3 = &param_1[iVar38].PerBoneWeightRate;
                iVar44 = pTVar3->ArrayNum;
                iVar42 = pTVar3->ArrayMax;
                pTVar4 = &param_1[iVar43].PerBoneWeightRate;
                (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
                pTVar4->ArrayNum = iVar44;
                pTVar4->ArrayMax = iVar42;
                pFVar1 = param_1 + iVar38;
                pFVar1->SampleDataIndex = iVar16;
                pFVar1->_padding_ = iVar18;
                (pFVar1->Animation).field0_0x0 = TVar7;
                pFVar1 = param_1 + iVar38;
                pFVar1->TotalWeight = fVar21;
                pFVar1->WeightRate = fVar22;
                *(undefined8 *)(&pFVar1->TotalWeight + 2) = uVar8;
                pFVar1 = param_1 + iVar38;
                pFVar1->SamplePlayRate = fVar23;
                (pFVar1->DeltaTimeRecord).Delta = fVar24;
                *(undefined8 *)(&pFVar1->SamplePlayRate + 2) = uVar9;
                param_1[iVar38].MarkerTickRecord.PreviousMarker = FVar10;
                param_1[iVar38].MarkerTickRecord.NextMarker = FVar11;
                pTVar3 = &param_1[iVar38].PerBoneBlendData;
                (pTVar3->AllocatorInstance).Data = pFVar12;
                pTVar3->ArrayNum = iVar19;
                pTVar3->ArrayMax = iVar20;
                pTVar3 = &param_1[iVar38].PerBoneWeightRate;
                (pTVar3->AllocatorInstance).Data = pFVar13;
                pTVar3->ArrayNum = iVar25;
                pTVar3->ArrayMax = iVar26;
                iVar43 = iVar38;
              } while (iVar38 * 2 + 1 < iVar39);
            }
            iVar39 = iVar39 + -1;
            lVar40 = lVar40 + -1;
            pFVar41 = pFVar41 + -1;
          } while (0 < lVar40);
        }
        return;
      }
      iVar38 = iVar44 + -1;
      iVar39 = iVar43 + -2;
      iVar43 = iVar39;
      iVar44 = iVar38;
    }
    iVar39 = iVar38 * 2;
    iVar42 = iVar39 + 1;
    if (iVar39 + 2 < param_2) {
      if (param_1[iVar42].TotalWeight <= param_1[(longlong)iVar39 + 2].TotalWeight &&
          param_1[(longlong)iVar39 + 2].TotalWeight != param_1[iVar42].TotalWeight) {
        iVar42 = iVar39;
      }
      iVar42 = iVar42 + 1;
    }
    if (param_1[iVar38].TotalWeight < param_1[iVar42].TotalWeight ||
        param_1[iVar38].TotalWeight == param_1[iVar42].TotalWeight) goto LAB_147528a09;
    pFVar41 = param_1 + iVar42;
    iVar16 = pFVar41->_padding_;
    TVar6 = (pFVar41->Animation).field0_0x0;
    iVar39 = iVar42 * 2 + 1;
    pFVar1 = param_1 + iVar38;
    iVar19 = pFVar1->SampleDataIndex;
    iVar20 = pFVar1->_padding_;
    TVar7 = (pFVar1->Animation).field0_0x0;
    pFVar1 = param_1 + iVar38;
    fVar21 = pFVar1->TotalWeight;
    fVar22 = pFVar1->WeightRate;
    uVar8 = *(undefined8 *)(&pFVar1->TotalWeight + 2);
    pFVar1 = param_1 + iVar38;
    fVar23 = pFVar1->SamplePlayRate;
    fVar24 = (pFVar1->DeltaTimeRecord).Delta;
    uVar9 = *(undefined8 *)(&pFVar1->SamplePlayRate + 2);
    FVar10 = param_1[iVar38].MarkerTickRecord.PreviousMarker;
    FVar11 = param_1[iVar38].MarkerTickRecord.NextMarker;
    pTVar3 = &param_1[iVar38].PerBoneBlendData;
    pFVar12 = (pTVar3->AllocatorInstance).Data;
    iVar25 = pTVar3->ArrayNum;
    iVar26 = pTVar3->ArrayMax;
    pTVar3 = &param_1[iVar38].PerBoneWeightRate;
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    iVar27 = pTVar3->ArrayNum;
    iVar28 = pTVar3->ArrayMax;
    pFVar1 = param_1 + iVar38;
    pFVar1->SampleDataIndex = pFVar41->SampleDataIndex;
    pFVar1->_padding_ = iVar16;
    (pFVar1->Animation).field0_0x0 = TVar6;
    pFVar41 = param_1 + iVar42;
    fVar17 = pFVar41->WeightRate;
    uVar14 = *(undefined8 *)(&pFVar41->TotalWeight + 2);
    pFVar1 = param_1 + iVar38;
    pFVar1->TotalWeight = pFVar41->TotalWeight;
    pFVar1->WeightRate = fVar17;
    *(undefined8 *)(&pFVar1->TotalWeight + 2) = uVar14;
    pFVar41 = param_1 + iVar42;
    fVar17 = (pFVar41->DeltaTimeRecord).Delta;
    uVar14 = *(undefined8 *)(&pFVar41->SamplePlayRate + 2);
    pFVar1 = param_1 + iVar38;
    pFVar1->SamplePlayRate = pFVar41->SamplePlayRate;
    (pFVar1->DeltaTimeRecord).Delta = fVar17;
    *(undefined8 *)(&pFVar1->SamplePlayRate + 2) = uVar14;
    FVar15 = param_1[iVar42].MarkerTickRecord.NextMarker;
    param_1[iVar38].MarkerTickRecord.PreviousMarker =
         param_1[iVar42].MarkerTickRecord.PreviousMarker;
    param_1[iVar38].MarkerTickRecord.NextMarker = FVar15;
    pTVar3 = &param_1[iVar42].PerBoneBlendData;
    iVar16 = pTVar3->ArrayNum;
    iVar18 = pTVar3->ArrayMax;
    pTVar4 = &param_1[iVar38].PerBoneBlendData;
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    pTVar4->ArrayNum = iVar16;
    pTVar4->ArrayMax = iVar18;
    pTVar3 = &param_1[iVar42].PerBoneWeightRate;
    iVar16 = pTVar3->ArrayNum;
    iVar18 = pTVar3->ArrayMax;
    pTVar4 = &param_1[iVar38].PerBoneWeightRate;
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    pTVar4->ArrayNum = iVar16;
    pTVar4->ArrayMax = iVar18;
    pFVar41 = param_1 + iVar42;
    pFVar41->SampleDataIndex = iVar19;
    pFVar41->_padding_ = iVar20;
    (pFVar41->Animation).field0_0x0 = TVar7;
    pFVar41 = param_1 + iVar42;
    pFVar41->TotalWeight = fVar21;
    pFVar41->WeightRate = fVar22;
    *(undefined8 *)(&pFVar41->TotalWeight + 2) = uVar8;
    pFVar41 = param_1 + iVar42;
    pFVar41->SamplePlayRate = fVar23;
    (pFVar41->DeltaTimeRecord).Delta = fVar24;
    *(undefined8 *)(&pFVar41->SamplePlayRate + 2) = uVar9;
    param_1[iVar42].MarkerTickRecord.PreviousMarker = FVar10;
    param_1[iVar42].MarkerTickRecord.NextMarker = FVar11;
    pTVar3 = &param_1[iVar42].PerBoneBlendData;
    (pTVar3->AllocatorInstance).Data = pFVar12;
    pTVar3->ArrayNum = iVar25;
    pTVar3->ArrayMax = iVar26;
    pTVar3 = &param_1[iVar42].PerBoneWeightRate;
    (pTVar3->AllocatorInstance).Data = pFVar13;
    pTVar3->ArrayNum = iVar27;
    pTVar3->ArrayMax = iVar28;
    iVar38 = iVar42;
  } while( true );
}

// HeapSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,`FBlendSpaceGrid::FindTriangleThisPointBelongsTo'::__l2::<lambda_1>_>_> @ 147528bd0

void __cdecl
AlgoImpl::
HeapSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,_FBlendSpaceGrid::FindTriangleThisPointBelongsTo_::__l2::<lambda_1>_>_>
          (FIndexAndDistance *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FIndexAndDistance,_public:_bool___cdecl_FBlendSpaceGrid::FindTriangleThisPointBelongsTo(UE::Math::TVector2<double>_const_&,UE::Math::TVector<double>_&,FTriangle_*_&,TArray<FTriangle_*,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FIndexAndDistance *pFVar1;
  FIndexAndDistance *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  FIndexAndDistance *pFVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar13 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_147528cc5:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar14;
          do {
            uVar6 = *(undefined4 *)&pFVar16->field_0x4;
            dVar4 = pFVar16->Distance;
            iVar10 = 0;
            iVar13 = param_1->Index;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            dVar5 = param_1->Distance;
            param_1->Index = pFVar16->Index;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            param_1->Distance = dVar4;
            pFVar16->Index = iVar13;
            *(undefined4 *)&pFVar16->field_0x4 = uVar8;
            pFVar16->Distance = dVar5;
            if (1 < iVar11) {
              do {
                iVar15 = iVar10 * 2;
                iVar13 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].Distance <= param_1[iVar13].Distance &&
                      param_1[iVar13].Distance != param_1[(longlong)iVar15 + 2].Distance) {
                    iVar13 = iVar15;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Distance < param_1[iVar10].Distance ||
                    param_1[iVar13].Distance == param_1[iVar10].Distance) break;
                pFVar1 = param_1 + iVar10;
                iVar15 = pFVar1->Index;
                uVar8 = *(undefined4 *)&pFVar1->field_0x4;
                dVar4 = pFVar1->Distance;
                pFVar1 = param_1 + iVar13;
                uVar6 = *(undefined4 *)&pFVar1->field_0x4;
                dVar5 = pFVar1->Distance;
                pFVar2 = param_1 + iVar10;
                pFVar2->Index = pFVar1->Index;
                *(undefined4 *)&pFVar2->field_0x4 = uVar6;
                pFVar2->Distance = dVar5;
                pFVar1 = param_1 + iVar13;
                pFVar1->Index = iVar15;
                *(undefined4 *)&pFVar1->field_0x4 = uVar8;
                pFVar1->Distance = dVar4;
                iVar10 = iVar13;
              } while (iVar13 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar13 + -2;
      iVar13 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Distance <= param_1[iVar12].Distance &&
          param_1[iVar12].Distance != param_1[(longlong)iVar11 + 2].Distance) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].Distance < param_1[iVar10].Distance ||
        param_1[iVar12].Distance == param_1[iVar10].Distance) goto LAB_147528cc5;
    pFVar16 = param_1 + iVar10;
    iVar7 = pFVar16->Index;
    uVar8 = *(undefined4 *)&pFVar16->field_0x4;
    dVar4 = pFVar16->Distance;
    pFVar16 = param_1 + iVar12;
    uVar6 = *(undefined4 *)&pFVar16->field_0x4;
    dVar5 = pFVar16->Distance;
    pFVar1 = param_1 + iVar10;
    pFVar1->Index = pFVar16->Index;
    *(undefined4 *)&pFVar1->field_0x4 = uVar6;
    pFVar1->Distance = dVar5;
    iVar11 = iVar12 * 2 + 1;
    pFVar16 = param_1 + iVar12;
    pFVar16->Index = iVar7;
    *(undefined4 *)&pFVar16->field_0x4 = uVar8;
    pFVar16->Distance = dVar4;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,`FLineElementGenerator::Process'::__l5::<lambda_1>_>_> @ 147528da0

void __cdecl
AlgoImpl::
HeapSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,_FLineElementGenerator::Process_::__l5::<lambda_1>_>_>
          (FLineVertex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLineVertex,_public:_void___cdecl_FLineElementGenerator::Process(void)_::_5_::<lambda_1>_>
          param_4)

{
  FLineVertex FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
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
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_147528e86:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].Position <= param_1[iVar4].Position &&
                      param_1[iVar4].Position != param_1[(longlong)iVar8 + 2].Position) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].Position < param_1[iVar7].Position ||
                    param_1[iVar4].Position == param_1[iVar7].Position) break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].Position <= param_1[iVar6].Position &&
          param_1[iVar6].Position != param_1[(longlong)iVar5 + 2].Position) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].Position < param_1[iVar4].Position ||
        param_1[iVar6].Position == param_1[iVar4].Position) goto LAB_147528e86;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,`UBlendSpace::GetPerBoneInterpolationData'::__l2::<lambda_1>_>_> @ 147528f50

void __cdecl
AlgoImpl::
HeapSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,_UBlendSpace::GetPerBoneInterpolationData_::__l2::<lambda_1>_>_>
          (FSortedPerBoneInterpolation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSortedPerBoneInterpolation,_public:_virtual_class_TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1>___cdecl_UBlendSpace::GetPerBoneInterpolationData(USkeleton_const_*)const_::_2_::<lambda_1>_>
          param_4)

{
  FSortedPerBoneInterpolation *pFVar1;
  FSortedPerBoneInterpolation *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  FName FVar5;
  undefined4 uVar6;
  FCompactPoseBoneIndex FVar7;
  undefined4 uVar8;
  FCompactPoseBoneIndex FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FSortedPerBoneInterpolation *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar17 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14752906f:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar15 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar14 = param_1 + lVar15;
          do {
            uVar6 = *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8;
            FVar7 = (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
            uVar3 = *(undefined8 *)&(param_1->PerBoneBlend).InterpolationSpeedPerSec;
            FVar5 = (param_1->PerBoneBlend).BoneReference.BoneName;
            uVar8 = *(undefined4 *)&(param_1->PerBoneBlend).BoneReference.field_0x8;
            FVar9 = (param_1->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
            (param_1->PerBoneBlend).BoneReference.BoneName =
                 (pFVar14->PerBoneBlend).BoneReference.BoneName;
            *(undefined4 *)&(param_1->PerBoneBlend).BoneReference.field_0x8 = uVar6;
            (param_1->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar7;
            *(undefined8 *)&(param_1->PerBoneBlend).InterpolationSpeedPerSec =
                 *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec;
            (pFVar14->PerBoneBlend).BoneReference.BoneName = FVar5;
            *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8 = uVar8;
            (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar9;
            *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec = uVar3;
            iVar17 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar17 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)&param_1[iVar13].PerBoneBlend.BoneReference.field_0x8 * 2 <
                      *(int *)&param_1[(longlong)iVar11 + 2].PerBoneBlend.BoneReference.field_0x8 *
                      2) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar17;
                pFVar2 = param_1 + iVar13;
                if (*(int *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8 * 2 <=
                    *(int *)&(pFVar2->PerBoneBlend).BoneReference.field_0x8 * 2) break;
                uVar6 = *(undefined4 *)&(pFVar2->PerBoneBlend).BoneReference.field_0x8;
                FVar7 = (pFVar2->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
                uVar3 = *(undefined8 *)&(pFVar1->PerBoneBlend).InterpolationSpeedPerSec;
                FVar5 = (pFVar1->PerBoneBlend).BoneReference.BoneName;
                uVar8 = *(undefined4 *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8;
                FVar9 = (pFVar1->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
                (pFVar1->PerBoneBlend).BoneReference.BoneName =
                     (pFVar2->PerBoneBlend).BoneReference.BoneName;
                *(undefined4 *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8 = uVar6;
                (pFVar1->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar7;
                *(undefined8 *)&(pFVar1->PerBoneBlend).InterpolationSpeedPerSec =
                     *(undefined8 *)&(pFVar2->PerBoneBlend).InterpolationSpeedPerSec;
                (pFVar2->PerBoneBlend).BoneReference.BoneName = FVar5;
                *(undefined4 *)&(pFVar2->PerBoneBlend).BoneReference.field_0x8 = uVar8;
                (pFVar2->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar9;
                *(undefined8 *)&(pFVar2->PerBoneBlend).InterpolationSpeedPerSec = uVar3;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar15 = lVar15 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar17 + -2;
      iVar17 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)&param_1[iVar16].PerBoneBlend.BoneReference.field_0x8 * 2 <
          *(int *)&param_1[(longlong)iVar12 + 2].PerBoneBlend.BoneReference.field_0x8 * 2) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar14 = param_1 + iVar11;
    pFVar1 = param_1 + iVar16;
    if (*(int *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8 * 2 <=
        *(int *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8 * 2) goto LAB_14752906f;
    uVar6 = *(undefined4 *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8;
    FVar7 = (pFVar1->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec;
    FVar5 = (pFVar14->PerBoneBlend).BoneReference.BoneName;
    uVar8 = *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8;
    FVar9 = (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
    (pFVar14->PerBoneBlend).BoneReference.BoneName = (pFVar1->PerBoneBlend).BoneReference.BoneName;
    *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8 = uVar6;
    (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar7;
    *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec =
         *(undefined8 *)&(pFVar1->PerBoneBlend).InterpolationSpeedPerSec;
    (pFVar1->PerBoneBlend).BoneReference.BoneName = FVar5;
    *(undefined4 *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8 = uVar8;
    (pFVar1->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar9;
    *(undefined8 *)&(pFVar1->PerBoneBlend).InterpolationSpeedPerSec = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,`FDelaunayTriangleGenerator::SortSamples'::__l2::FComparePoints>_> @ 147529190

void __cdecl
AlgoImpl::
HeapSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,_FDelaunayTriangleGenerator::SortSamples_::__l2::FComparePoints>_>
          (FVertex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVertex,_private:_void___cdecl_FDelaunayTriangleGenerator::SortSamples(void)_::_2_::FComparePoints>
          param_4)

{
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FVertex *pFVar20;
  int iVar21;
  int iVar22;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar21 = iVar17;
  iVar22 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_1475292fe:
      if (iVar22 == 0) {
        iVar17 = param_2 + -1;
        lVar19 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar20 = param_1 + lVar19;
          do {
            dVar3 = (pFVar20->Position).field0_0x0._s_0.Y;
            iVar8 = param_1->SampleIndex;
            uVar14 = *(undefined4 *)&param_1->field_0x24;
            dVar4 = (param_1->Position).field0_0x0._s_0.X;
            dVar6 = (param_1->Position).field0_0x0._s_0.Y;
            pFVar7 = (param_1->Triangles).AllocatorInstance.Data;
            iVar22 = (param_1->Triangles).ArrayNum;
            iVar18 = (param_1->Triangles).ArrayMax;
            (param_1->Position).field0_0x0._s_0.X = (pFVar20->Position).field0_0x0._s_0.X;
            (param_1->Position).field0_0x0._s_0.Y = dVar3;
            iVar21 = (pFVar20->Triangles).ArrayNum;
            iVar16 = (pFVar20->Triangles).ArrayMax;
            (param_1->Triangles).AllocatorInstance.Data =
                 (pFVar20->Triangles).AllocatorInstance.Data;
            (param_1->Triangles).ArrayNum = iVar21;
            (param_1->Triangles).ArrayMax = iVar16;
            uVar10 = *(undefined4 *)&pFVar20->field_0x24;
            param_1->SampleIndex = pFVar20->SampleIndex;
            *(undefined4 *)&param_1->field_0x24 = uVar10;
            (pFVar20->Position).field0_0x0._s_0.X = dVar4;
            (pFVar20->Position).field0_0x0._s_0.Y = dVar6;
            (pFVar20->Triangles).AllocatorInstance.Data = pFVar7;
            (pFVar20->Triangles).ArrayNum = iVar22;
            (pFVar20->Triangles).ArrayMax = iVar18;
            pFVar20->SampleIndex = iVar8;
            *(undefined4 *)&pFVar20->field_0x24 = uVar14;
            iVar21 = 0;
            if (1 < iVar17) {
              do {
                iVar22 = iVar21 * 2;
                iVar16 = iVar22 + 1;
                if (iVar22 + 2 < iVar17) {
                  dVar3 = param_1[(longlong)iVar22 + 2].Position.field0_0x0._s_0.Y;
                  dVar4 = param_1[(longlong)iVar22 + 1].Position.field0_0x0._s_0.Y;
                  if (dVar3 == dVar4) {
                    bVar15 = param_1[(longlong)iVar22 + 2].Position.field0_0x0._s_0.X <
                             param_1[(longlong)iVar22 + 1].Position.field0_0x0._s_0.X;
                  }
                  else {
                    bVar15 = dVar3 < dVar4;
                  }
                  if (bVar15) {
                    iVar16 = iVar22;
                  }
                  iVar16 = iVar16 + 1;
                }
                dVar3 = param_1[iVar16].Position.field0_0x0._s_0.Y;
                dVar4 = param_1[iVar21].Position.field0_0x0._s_0.Y;
                if (dVar4 == dVar3) {
                  bVar15 = param_1[iVar21].Position.field0_0x0._s_0.X <
                           param_1[iVar16].Position.field0_0x0._s_0.X;
                }
                else {
                  bVar15 = dVar4 < dVar3;
                }
                if (!bVar15) break;
                dVar3 = param_1[iVar16].Position.field0_0x0._s_0.Y;
                iVar11 = param_1[iVar21].SampleIndex;
                uVar14 = *(undefined4 *)&param_1[iVar21].field_0x24;
                dVar4 = param_1[iVar21].Position.field0_0x0._s_0.X;
                dVar6 = param_1[iVar21].Position.field0_0x0._s_0.Y;
                pTVar1 = &param_1[iVar21].Triangles;
                pFVar7 = (pTVar1->AllocatorInstance).Data;
                iVar8 = pTVar1->ArrayNum;
                iVar9 = pTVar1->ArrayMax;
                param_1[iVar21].Position.field0_0x0._s_0.X =
                     param_1[iVar16].Position.field0_0x0._s_0.X;
                param_1[iVar21].Position.field0_0x0._s_0.Y = dVar3;
                pTVar1 = &param_1[iVar16].Triangles;
                iVar22 = pTVar1->ArrayNum;
                iVar18 = pTVar1->ArrayMax;
                pTVar2 = &param_1[iVar21].Triangles;
                (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
                pTVar2->ArrayNum = iVar22;
                pTVar2->ArrayMax = iVar18;
                uVar10 = *(undefined4 *)&param_1[iVar16].field_0x24;
                param_1[iVar21].SampleIndex = param_1[iVar16].SampleIndex;
                *(undefined4 *)&param_1[iVar21].field_0x24 = uVar10;
                param_1[iVar16].Position.field0_0x0._s_0.X = dVar4;
                param_1[iVar16].Position.field0_0x0._s_0.Y = dVar6;
                pTVar1 = &param_1[iVar16].Triangles;
                (pTVar1->AllocatorInstance).Data = pFVar7;
                pTVar1->ArrayNum = iVar8;
                pTVar1->ArrayMax = iVar9;
                param_1[iVar16].SampleIndex = iVar11;
                *(undefined4 *)&param_1[iVar16].field_0x24 = uVar14;
                iVar21 = iVar16;
              } while (iVar16 * 2 + 1 < iVar17);
            }
            iVar17 = iVar17 + -1;
            lVar19 = lVar19 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar16 = iVar22 + -1;
      iVar17 = iVar21 + -2;
      iVar21 = iVar17;
      iVar22 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar18 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      dVar3 = param_1[(longlong)iVar17 + 2].Position.field0_0x0._s_0.Y;
      dVar4 = param_1[(longlong)iVar17 + 1].Position.field0_0x0._s_0.Y;
      if (dVar3 == dVar4) {
        bVar15 = param_1[(longlong)iVar17 + 2].Position.field0_0x0._s_0.X <
                 param_1[(longlong)iVar17 + 1].Position.field0_0x0._s_0.X;
      }
      else {
        bVar15 = dVar3 < dVar4;
      }
      if (bVar15) {
        iVar18 = iVar17;
      }
      iVar18 = iVar18 + 1;
    }
    dVar3 = param_1[iVar18].Position.field0_0x0._s_0.Y;
    dVar4 = param_1[iVar16].Position.field0_0x0._s_0.Y;
    if (dVar4 == dVar3) {
      bVar15 = param_1[iVar16].Position.field0_0x0._s_0.X <
               param_1[iVar18].Position.field0_0x0._s_0.X;
    }
    else {
      bVar15 = dVar4 < dVar3;
    }
    if (!bVar15) goto LAB_1475292fe;
    dVar3 = param_1[iVar18].Position.field0_0x0._s_0.Y;
    iVar17 = iVar18 * 2 + 1;
    iVar13 = param_1[iVar16].SampleIndex;
    uVar14 = *(undefined4 *)&param_1[iVar16].field_0x24;
    dVar4 = param_1[iVar16].Position.field0_0x0._s_0.X;
    dVar6 = param_1[iVar16].Position.field0_0x0._s_0.Y;
    pTVar1 = &param_1[iVar16].Triangles;
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    iVar11 = pTVar1->ArrayNum;
    iVar12 = pTVar1->ArrayMax;
    param_1[iVar16].Position.field0_0x0._s_0.X = param_1[iVar18].Position.field0_0x0._s_0.X;
    param_1[iVar16].Position.field0_0x0._s_0.Y = dVar3;
    pTVar1 = &param_1[iVar18].Triangles;
    iVar8 = pTVar1->ArrayNum;
    iVar9 = pTVar1->ArrayMax;
    pTVar2 = &param_1[iVar16].Triangles;
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar8;
    pTVar2->ArrayMax = iVar9;
    uVar10 = *(undefined4 *)&param_1[iVar18].field_0x24;
    param_1[iVar16].SampleIndex = param_1[iVar18].SampleIndex;
    *(undefined4 *)&param_1[iVar16].field_0x24 = uVar10;
    param_1[iVar18].Position.field0_0x0._s_0.X = dVar4;
    param_1[iVar18].Position.field0_0x0._s_0.Y = dVar6;
    pTVar1 = &param_1[iVar18].Triangles;
    (pTVar1->AllocatorInstance).Data = pFVar7;
    pTVar1->ArrayNum = iVar11;
    pTVar1->ArrayMax = iVar12;
    param_1[iVar18].SampleIndex = iVar13;
    *(undefined4 *)&param_1[iVar18].field_0x24 = uVar14;
    iVar16 = iVar18;
  } while( true );
}

// InternalConstructor<UAnalysisProperties> @ 147529bb0

void __cdecl InternalConstructor<UAnalysisProperties>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnalysisProperties__6B_;
    FString::FString((FString *)(this + 1),L"None");
    return;
  }
  return;
}

// InternalConstructor<UAnimSequenceBase> @ 147529c00

void __cdecl InternalConstructor<UAnimSequenceBase>(FObjectInitializer *param_1)

{
  if ((UAnimSequenceBase *)param_1->Obj != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimSet> @ 147529c20

void __cdecl InternalConstructor<UAnimSet>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimSet__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
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
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x4 = 0x80;
    *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[5].field_0xc = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UAnimSingleNodeInstance> @ 147529ce0

void __cdecl InternalConstructor<UAnimSingleNodeInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  
  this = (UAnimInstance *)param_1->Obj;
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSingleNodeInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UAnimStateMachineTypes> @ 147529d30

void __cdecl InternalConstructor<UAnimStateMachineTypes>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimStateMachineTypes__6B_;
  }
  return;
}

// InternalConstructor<UAnimStreamable> @ 147529d60

void __cdecl InternalConstructor<UAnimStreamable>(FObjectInitializer *param_1)

{
  UAnimationAsset *this;
  
  this = (UAnimationAsset *)param_1->Obj;
  if (this != (UAnimationAsset *)0x0) {
    UAnimationAsset::UAnimationAsset(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
    this[1].SkeletonGuid.A = 60000;
    this[1].SkeletonGuid.B = 1;
    this[1].SkeletonGuid.C = 0;
    this[1].SkeletonGuid.D = 0;
    this[1].SkeletonVirtualBoneGuid.A = 0;
    this[1].SkeletonVirtualBoneGuid.B = 0;
    this[1].SkeletonVirtualBoneGuid.C = 0;
    this[1].SkeletonVirtualBoneGuid.D = 0;
    this[1].MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MetaData.ArrayNum = 0;
    this[1].MetaData.ArrayMax = 0;
    *(undefined1 *)((longlong)&this[1].AssetUserData.AllocatorInstance.Data + 4) = 1;
  }
  return;
}

// InternalConstructor<UAnimationAttributeIdentifierExtensions> @ 147529e20

void __cdecl
InternalConstructor<UAnimationAttributeIdentifierExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimationAttributeIdentifierExtensions__6B_;
  }
  return;
}

// InternalConstructor<UAnimationCurveIdentifierExtensions> @ 147529e50

void __cdecl InternalConstructor<UAnimationCurveIdentifierExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimationCurveIdentifierExtensions__6B_;
  }
  return;
}

// InternalConstructor<UAssetMappingTable> @ 147529e80

void __cdecl InternalConstructor<UAssetMappingTable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAssetMappingTable__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UBlendProfile> @ 147529ec0

void __cdecl InternalConstructor<UBlendProfile>(FObjectInitializer *param_1)

{
  int iVar1;
  UBlendProfile *this;
  USkeleton *pUVar2;
  UClass *pUVar3;
  
  this = (UBlendProfile *)param_1->Obj;
  if (this != (UBlendProfile *)0x0) {
    UObject::UObject((UObject *)this);
    pUVar2 = (USkeleton *)this->_padding_;
    this->_padding_ = (longlong)&UBlendProfile::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBlendProfile::_vftable__for__IBlendProfileInterface__;
    (this->OwningSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
    (this->ProfileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ProfileEntries).ArrayNum = 0;
    (this->ProfileEntries).ArrayMax = 0;
    this->Mode = WeightFactor;
    if (pUVar2 != (USkeleton *)0x0) {
      pUVar3 = Z_Construct_UClass_USkeleton_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        UBlendProfile::SetSkeleton(this,pUVar2);
      }
    }
  }
  return;
}

// InternalConstructor<UBlendProfileProviderInterface> @ 147529f50

void __cdecl InternalConstructor<UBlendProfileProviderInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UBlendProfileProviderInterface__6B_;
  }
  return;
}

// InternalConstructor<UBlendSpace1D> @ 147529f80

void __cdecl InternalConstructor<UBlendSpace1D>(FObjectInitializer *param_1)

{
  UBlendSpace *this;
  int local_res8 [8];
  
  this = (UBlendSpace *)param_1->Obj;
  if (this != (UBlendSpace *)0x0) {
    UBlendSpace::UBlendSpace(this,param_1);
    local_res8[0] = 0;
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&this->DimensionIndices,local_res8,1,(this->DimensionIndices).ArrayMax);
  }
  return;
}

// InternalConstructor<UBlendSpace> @ 14752a000

void __cdecl InternalConstructor<UBlendSpace>(FObjectInitializer *param_1)

{
  if ((UBlendSpace *)param_1->Obj != (UBlendSpace *)0x0) {
    UBlendSpace::UBlendSpace((UBlendSpace *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UBoneMaskFilter> @ 14752a020

void __cdecl InternalConstructor<UBoneMaskFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBoneMaskFilter__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCachedAnimDataLibrary> @ 14752a060

void __cdecl InternalConstructor<UCachedAnimDataLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UCachedAnimDataLibrary__6B_;
  }
  return;
}

// InternalConstructor<UCurveSourceInterface> @ 14752a090

void __cdecl InternalConstructor<UCurveSourceInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UCurveSourceInterface__6B_;
  }
  return;
}

// InternalConstructor<URawAnimSequenceTrackExtensions> @ 14752a0c0

void __cdecl InternalConstructor<URawAnimSequenceTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7URawAnimSequenceTrackExtensions__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnalysisProperties> @ 14752a0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnalysisProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnalysisProperties::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnalysisProperties__6B_;
    FString::FString((FString *)(pUVar1 + 1),L"None");
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSequenceBase> @ 14752a1b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSequenceBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimationAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSequenceBase::GetPrivateStaticClass();
  this = (UAnimationAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimationAsset *)0x0) {
    UAnimationAsset::UAnimationAsset(this,param_1);
    this->_padding_ = (longlong)&UAnimSequenceBase::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimSequenceBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimSequenceBase::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSet> @ 14752a290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSet::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimSet__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
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
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSingleNodeInstance> @ 14752a3d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSingleNodeInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSingleNodeInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSingleNodeInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimStateMachineTypes> @ 14752a4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimStateMachineTypes>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimStateMachineTypes::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimStateMachineTypes__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimStreamable> @ 14752a550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimStreamable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimationAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimStreamable::GetPrivateStaticClass();
  this = (UAnimationAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimationAsset *)0x0) {
    UAnimationAsset::UAnimationAsset(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimStreamable::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
    this[1].SkeletonGuid.A = 60000;
    this[1].SkeletonGuid.B = 1;
    this[1].SkeletonGuid.C = 0;
    this[1].SkeletonGuid.D = 0;
    this[1].SkeletonVirtualBoneGuid.A = 0;
    this[1].SkeletonVirtualBoneGuid.B = 0;
    this[1].SkeletonVirtualBoneGuid.C = 0;
    this[1].SkeletonVirtualBoneGuid.D = 0;
    this[1].MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MetaData.ArrayNum = 0;
    this[1].MetaData.ArrayMax = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationAttributeIdentifierExtensions> @ 14752a670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimationAttributeIdentifierExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationAttributeIdentifierExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationAttributeIdentifierExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationCurveIdentifierExtensions> @ 14752a720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimationCurveIdentifierExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationCurveIdentifierExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationCurveIdentifierExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAssetMappingTable> @ 14752a7d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetMappingTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetMappingTable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAssetMappingTable__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendProfile> @ 14752a890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendProfile::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UBlendProfile::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UBlendProfile::_vftable__for__IBlendProfileInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendProfileProviderInterface> @ 14752a960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlendProfileProviderInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendProfileProviderInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlendProfileProviderInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendSpace1D> @ 14752aa10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendSpace1D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlendSpace *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendSpace1D::GetPrivateStaticClass();
  this = (UBlendSpace *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlendSpace *)0x0) {
    UBlendSpace::UBlendSpace(this,param_1);
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UBlendSpace1D::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendSpace> @ 14752aae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendSpace>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlendSpace *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendSpace::GetPrivateStaticClass();
  pUVar3 = (UBlendSpace *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UBlendSpace *)0x0) {
    pUVar3 = UBlendSpace::UBlendSpace(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBoneMaskFilter> @ 14752ab80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBoneMaskFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBoneMaskFilter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBoneMaskFilter__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCachedAnimDataLibrary> @ 14752ac40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCachedAnimDataLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCachedAnimDataLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCachedAnimDataLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCurveSourceInterface> @ 14752acf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCurveSourceInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCurveSourceInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCurveSourceInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URawAnimSequenceTrackExtensions> @ 14752ada0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URawAnimSequenceTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URawAnimSequenceTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URawAnimSequenceTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_> @ 14752ae50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>
          (FAnimNotifyEvent *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_> param_4)

{
  TObjectPtr<UAnimNotify>_u_0 TVar1;
  TObjectPtr<UAnimMontage>_u_0 TVar2;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar3;
  FName FVar4;
  float fVar5;
  FNameEntryId FVar6;
  undefined4 uVar7;
  TEnumAsByte<EAnimLinkMethod::Type> TVar8;
  TEnumAsByte<EAnimLinkMethod::Type> TVar9;
  undefined2 uVar10;
  TEnumAsByte<EMontageNotifyTickType::Type> TVar11;
  TEnumAsByte<ENotifyFilterType::Type> TVar12;
  undefined3 uVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  FAnimNotifyEvent *pFVar20;
  FAnimNotifyEvent *pFVar21;
  FAnimNotifyEvent *pFVar22;
  FAnimNotifyEvent **ppFVar23;
  int iVar24;
  FAnimNotifyEvent *this;
  FAnimNotifyEvent *pFVar25;
  FAnimNotifyEvent *pFVar26;
  float fVar27;
  undefined1 auStack_438 [48];
  FAnimNotifyEvent *local_408;
  longlong local_400;
  longlong lStack_3f8;
  longlong local_3f0;
  longlong lStack_3e8;
  longlong local_3e0;
  longlong lStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  TObjectPtr<UAnimNotify>_u_0 TStack_3b8;
  TObjectPtr<UAnimNotifyState>_u_0 local_3b0;
  undefined8 uStack_3a8;
  longlong local_3a0;
  TObjectPtr<UAnimMontage>_u_0 TStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  TObjectPtr<UAnimSequenceBase>_u_0 TStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  FName FStack_358;
  FName local_350;
  FAnimNotifyEvent *local_348;
  FAnimNotifyEvent *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar27 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar27;
    memset(local_330,0,0x2e8);
    ppFVar23 = &local_348;
    do {
      pFVar26 = ppFVar23[1];
      pFVar25 = *ppFVar23;
      local_408 = ppFVar23[2];
      lVar18 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar26 - (longlong)pFVar25),
                      8) + ((longlong)pFVar26 - (longlong)pFVar25);
      iVar17 = ((int)(lVar18 >> 7) - (int)(lVar18 >> 0x3f)) + 1;
      this = pFVar25;
      iVar24 = (int)local_408;
      if ((int)local_408 != 0) {
LAB_14752af43:
        if (8 < iVar17) {
          pFVar25 = this + iVar17 / 2;
          local_400 = pFVar25->_padding_;
          lStack_3f8 = pFVar25->_padding_;
          local_350 = pFVar25->CachedNotifyEventBaseName;
          local_3f0 = pFVar25->_padding_;
          lStack_3e8 = pFVar25->_padding_;
          local_3e0 = pFVar25->_padding_;
          lStack_3d8 = pFVar25->_padding_;
          local_3d0._0_4_ = pFVar25->TriggerTimeOffset;
          local_3d0._4_4_ = pFVar25->EndTriggerTimeOffset;
          uStack_3c8._0_4_ = pFVar25->TriggerWeightThreshold;
          uStack_3c8._4_4_ = (pFVar25->NotifyName).ComparisonIndex;
          local_3c0 = *(undefined8 *)&(pFVar25->NotifyName).Number;
          TStack_3b8 = (pFVar25->Notify).field0_0x0;
          local_3b0 = (pFVar25->NotifyStateClass).field0_0x0;
          uStack_3a8 = *(undefined8 *)&pFVar25->Duration;
          local_3a0 = (pFVar25->EndLink)._padding_;
          TStack_398 = (pFVar25->EndLink).LinkedMontage.field0_0x0;
          local_390._0_4_ = (pFVar25->EndLink).SlotIndex;
          local_390._4_4_ = (pFVar25->EndLink).SegmentIndex;
          uStack_388._0_1_ = (pFVar25->EndLink).LinkMethod;
          uStack_388._1_1_ = (pFVar25->EndLink).CachedLinkMethod;
          uStack_388._2_2_ = *(undefined2 *)&(pFVar25->EndLink).field_0x1a;
          uStack_388._4_4_ = (pFVar25->EndLink).SegmentBeginTime;
          local_380._0_4_ = (pFVar25->EndLink).SegmentLength;
          local_380._4_4_ = (pFVar25->EndLink).LinkValue;
          TStack_378 = (pFVar25->EndLink).LinkedSequence.field0_0x0;
          local_370._0_1_ = pFVar25->bConvertedFromBranchingPoint;
          local_370._1_1_ = pFVar25->MontageTickType;
          local_370._2_2_ = *(undefined2 *)&pFVar25->field_0x92;
          local_370._4_4_ = pFVar25->NotifyTriggerChance;
          uStack_368._0_1_ = pFVar25->NotifyFilterType;
          uStack_368._1_3_ = *(undefined3 *)&pFVar25->field_0x99;
          uStack_368._4_4_ = pFVar25->NotifyFilterLOD;
          local_360._0_1_ = pFVar25->bCanBeFilteredViaRequest;
          local_360._1_1_ = pFVar25->bTriggerOnDedicatedServer;
          local_360._2_1_ = pFVar25->bTriggerOnFollower;
          local_360._3_1_ = pFVar25->field_0xa3;
          local_360._4_4_ = pFVar25->TrackIndex;
          FStack_358 = pFVar25->CachedNotifyEventName;
          lVar18 = this->_padding_;
          pFVar25->_padding_ = this->_padding_;
          pFVar25->_padding_ = lVar18;
          lVar18 = this->_padding_;
          pFVar25->_padding_ = this->_padding_;
          pFVar25->_padding_ = lVar18;
          lVar18 = this->_padding_;
          pFVar25->_padding_ = this->_padding_;
          pFVar25->_padding_ = lVar18;
          fVar27 = this->EndTriggerTimeOffset;
          fVar5 = this->TriggerWeightThreshold;
          FVar6.Value = (this->NotifyName).ComparisonIndex.Value;
          pFVar25->TriggerTimeOffset = this->TriggerTimeOffset;
          pFVar25->EndTriggerTimeOffset = fVar27;
          pFVar25->TriggerWeightThreshold = fVar5;
          (pFVar25->NotifyName).ComparisonIndex = (FNameEntryId)FVar6.Value;
          TVar1 = (this->Notify).field0_0x0;
          *(undefined8 *)&(pFVar25->NotifyName).Number = *(undefined8 *)&(this->NotifyName).Number;
          (pFVar25->Notify).field0_0x0 = TVar1;
          fVar27 = this->Duration;
          uVar7 = *(undefined4 *)&this->field_0x5c;
          (pFVar25->NotifyStateClass).field0_0x0 = (this->NotifyStateClass).field0_0x0;
          pFVar25->Duration = fVar27;
          *(undefined4 *)&pFVar25->field_0x5c = uVar7;
          TVar2 = (this->EndLink).LinkedMontage.field0_0x0;
          (pFVar25->EndLink)._padding_ = (this->EndLink)._padding_;
          (pFVar25->EndLink).LinkedMontage.field0_0x0 = TVar2;
          iVar17 = (this->EndLink).SegmentIndex;
          TVar8.Value = (this->EndLink).LinkMethod.Value;
          TVar9.Value = (this->EndLink).CachedLinkMethod.Value;
          uVar10 = *(undefined2 *)&(this->EndLink).field_0x1a;
          fVar27 = (this->EndLink).SegmentBeginTime;
          (pFVar25->EndLink).SlotIndex = (this->EndLink).SlotIndex;
          (pFVar25->EndLink).SegmentIndex = iVar17;
          (pFVar25->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar8.Value;
          (pFVar25->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar9.Value;
          *(undefined2 *)&(pFVar25->EndLink).field_0x1a = uVar10;
          (pFVar25->EndLink).SegmentBeginTime = fVar27;
          fVar27 = (this->EndLink).LinkValue;
          TVar3 = (this->EndLink).LinkedSequence.field0_0x0;
          (pFVar25->EndLink).SegmentLength = (this->EndLink).SegmentLength;
          (pFVar25->EndLink).LinkValue = fVar27;
          (pFVar25->EndLink).LinkedSequence.field0_0x0 = TVar3;
          TVar11.Value = (this->MontageTickType).Value;
          uVar10 = *(undefined2 *)&this->field_0x92;
          fVar27 = this->NotifyTriggerChance;
          TVar12.Value = (this->NotifyFilterType).Value;
          uVar13 = *(undefined3 *)&this->field_0x99;
          iVar17 = this->NotifyFilterLOD;
          pFVar25->bConvertedFromBranchingPoint = this->bConvertedFromBranchingPoint;
          pFVar25->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar11.Value;
          *(undefined2 *)&pFVar25->field_0x92 = uVar10;
          pFVar25->NotifyTriggerChance = fVar27;
          pFVar25->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar12.Value;
          *(undefined3 *)&pFVar25->field_0x99 = uVar13;
          pFVar25->NotifyFilterLOD = iVar17;
          bVar16 = this->bTriggerOnDedicatedServer;
          bVar14 = this->bTriggerOnFollower;
          uVar15 = this->field_0xa3;
          iVar17 = this->TrackIndex;
          FVar4 = this->CachedNotifyEventName;
          pFVar25->bCanBeFilteredViaRequest = this->bCanBeFilteredViaRequest;
          pFVar25->bTriggerOnDedicatedServer = bVar16;
          pFVar25->bTriggerOnFollower = bVar14;
          pFVar25->field_0xa3 = uVar15;
          pFVar25->TrackIndex = iVar17;
          pFVar25->CachedNotifyEventName = FVar4;
          pFVar25->CachedNotifyEventBaseName = this->CachedNotifyEventBaseName;
          this->_padding_ = local_400;
          this->_padding_ = lStack_3f8;
          this->_padding_ = local_3f0;
          this->_padding_ = lStack_3e8;
          this->_padding_ = local_3e0;
          this->_padding_ = lStack_3d8;
          this->TriggerTimeOffset = (float)(undefined4)local_3d0;
          this->EndTriggerTimeOffset = (float)local_3d0._4_4_;
          this->TriggerWeightThreshold = (float)(undefined4)uStack_3c8;
          (this->NotifyName).ComparisonIndex = (FNameEntryId)uStack_3c8._4_4_;
          *(undefined8 *)&(this->NotifyName).Number = local_3c0;
          (this->Notify).field0_0x0 = TStack_3b8;
          (this->NotifyStateClass).field0_0x0 = local_3b0;
          *(undefined8 *)&this->Duration = uStack_3a8;
          (this->EndLink)._padding_ = local_3a0;
          (this->EndLink).LinkedMontage.field0_0x0 = TStack_398;
          (this->EndLink).SlotIndex = (undefined4)local_390;
          (this->EndLink).SegmentIndex = local_390._4_4_;
          (this->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_388;
          (this->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_388._1_1_;
          *(undefined2 *)&(this->EndLink).field_0x1a = uStack_388._2_2_;
          (this->EndLink).SegmentBeginTime = (float)uStack_388._4_4_;
          (this->EndLink).SegmentLength = (float)(undefined4)local_380;
          (this->EndLink).LinkValue = (float)local_380._4_4_;
          (this->EndLink).LinkedSequence.field0_0x0 = TStack_378;
          this->bConvertedFromBranchingPoint = (bool)(undefined1)local_370;
          this->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_370._1_1_;
          *(undefined2 *)&this->field_0x92 = local_370._2_2_;
          this->NotifyTriggerChance = (float)local_370._4_4_;
          this->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_368;
          *(undefined3 *)&this->field_0x99 = uStack_368._1_3_;
          this->NotifyFilterLOD = uStack_368._4_4_;
          this->bCanBeFilteredViaRequest = (bool)(undefined1)local_360;
          this->bTriggerOnDedicatedServer = (bool)local_360._1_1_;
          this->bTriggerOnFollower = (bool)local_360._2_1_;
          this->field_0xa3 = local_360._3_1_;
          this->TrackIndex = local_360._4_4_;
          this->CachedNotifyEventName = FStack_358;
          this->CachedNotifyEventBaseName = local_350;
          pFVar20 = pFVar26 + 1;
          pFVar25 = this;
LAB_14752b0f0:
          pFVar22 = pFVar25;
          pFVar25 = pFVar22 + 1;
          if (pFVar25 <= pFVar26) goto code_r0x00014752b0fc;
          goto LAB_14752b110;
        }
        for (; pFVar20 = this, pFVar25 = this, this < pFVar26; pFVar26 = pFVar26 + -1) {
          while (pFVar22 = pFVar20, pFVar25 = pFVar25 + 1, pFVar25 <= pFVar26) {
            bVar16 = FAnimNotifyEvent::operator<(pFVar22,pFVar25);
            pFVar20 = pFVar25;
            if (!bVar16) {
              pFVar20 = pFVar22;
            }
          }
          local_400 = pFVar22->_padding_;
          lStack_3f8 = pFVar22->_padding_;
          local_350 = pFVar22->CachedNotifyEventBaseName;
          local_3f0 = pFVar22->_padding_;
          lStack_3e8 = pFVar22->_padding_;
          local_3e0 = pFVar22->_padding_;
          lStack_3d8 = pFVar22->_padding_;
          local_3d0._0_4_ = pFVar22->TriggerTimeOffset;
          local_3d0._4_4_ = pFVar22->EndTriggerTimeOffset;
          uStack_3c8._0_4_ = pFVar22->TriggerWeightThreshold;
          uStack_3c8._4_4_ = (pFVar22->NotifyName).ComparisonIndex;
          local_3c0 = *(undefined8 *)&(pFVar22->NotifyName).Number;
          TStack_3b8 = (pFVar22->Notify).field0_0x0;
          local_3b0 = (pFVar22->NotifyStateClass).field0_0x0;
          uStack_3a8 = *(undefined8 *)&pFVar22->Duration;
          local_3a0 = (pFVar22->EndLink)._padding_;
          TStack_398 = (pFVar22->EndLink).LinkedMontage.field0_0x0;
          local_390._0_4_ = (pFVar22->EndLink).SlotIndex;
          local_390._4_4_ = (pFVar22->EndLink).SegmentIndex;
          uStack_388._0_1_ = (pFVar22->EndLink).LinkMethod;
          uStack_388._1_1_ = (pFVar22->EndLink).CachedLinkMethod;
          uStack_388._2_2_ = *(undefined2 *)&(pFVar22->EndLink).field_0x1a;
          uStack_388._4_4_ = (pFVar22->EndLink).SegmentBeginTime;
          local_380._0_4_ = (pFVar22->EndLink).SegmentLength;
          local_380._4_4_ = (pFVar22->EndLink).LinkValue;
          TStack_378 = (pFVar22->EndLink).LinkedSequence.field0_0x0;
          local_370._0_1_ = pFVar22->bConvertedFromBranchingPoint;
          local_370._1_1_ = pFVar22->MontageTickType;
          local_370._2_2_ = *(undefined2 *)&pFVar22->field_0x92;
          local_370._4_4_ = pFVar22->NotifyTriggerChance;
          uStack_368._0_1_ = pFVar22->NotifyFilterType;
          uStack_368._1_3_ = *(undefined3 *)&pFVar22->field_0x99;
          uStack_368._4_4_ = pFVar22->NotifyFilterLOD;
          local_360._0_1_ = pFVar22->bCanBeFilteredViaRequest;
          local_360._1_1_ = pFVar22->bTriggerOnDedicatedServer;
          local_360._2_1_ = pFVar22->bTriggerOnFollower;
          local_360._3_1_ = pFVar22->field_0xa3;
          local_360._4_4_ = pFVar22->TrackIndex;
          FStack_358 = pFVar22->CachedNotifyEventName;
          lVar18 = pFVar26->_padding_;
          pFVar22->_padding_ = pFVar26->_padding_;
          pFVar22->_padding_ = lVar18;
          lVar18 = pFVar26->_padding_;
          pFVar22->_padding_ = pFVar26->_padding_;
          pFVar22->_padding_ = lVar18;
          lVar18 = pFVar26->_padding_;
          pFVar22->_padding_ = pFVar26->_padding_;
          pFVar22->_padding_ = lVar18;
          fVar27 = pFVar26->EndTriggerTimeOffset;
          fVar5 = pFVar26->TriggerWeightThreshold;
          FVar6.Value = (pFVar26->NotifyName).ComparisonIndex.Value;
          pFVar22->TriggerTimeOffset = pFVar26->TriggerTimeOffset;
          pFVar22->EndTriggerTimeOffset = fVar27;
          pFVar22->TriggerWeightThreshold = fVar5;
          (pFVar22->NotifyName).ComparisonIndex = (FNameEntryId)FVar6.Value;
          TVar1 = (pFVar26->Notify).field0_0x0;
          *(undefined8 *)&(pFVar22->NotifyName).Number =
               *(undefined8 *)&(pFVar26->NotifyName).Number;
          (pFVar22->Notify).field0_0x0 = TVar1;
          fVar27 = pFVar26->Duration;
          uVar7 = *(undefined4 *)&pFVar26->field_0x5c;
          (pFVar22->NotifyStateClass).field0_0x0 = (pFVar26->NotifyStateClass).field0_0x0;
          pFVar22->Duration = fVar27;
          *(undefined4 *)&pFVar22->field_0x5c = uVar7;
          TVar2 = (pFVar26->EndLink).LinkedMontage.field0_0x0;
          (pFVar22->EndLink)._padding_ = (pFVar26->EndLink)._padding_;
          (pFVar22->EndLink).LinkedMontage.field0_0x0 = TVar2;
          iVar24 = (pFVar26->EndLink).SegmentIndex;
          TVar8.Value = (pFVar26->EndLink).LinkMethod.Value;
          TVar9.Value = (pFVar26->EndLink).CachedLinkMethod.Value;
          uVar10 = *(undefined2 *)&(pFVar26->EndLink).field_0x1a;
          fVar27 = (pFVar26->EndLink).SegmentBeginTime;
          (pFVar22->EndLink).SlotIndex = (pFVar26->EndLink).SlotIndex;
          (pFVar22->EndLink).SegmentIndex = iVar24;
          (pFVar22->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar8.Value;
          (pFVar22->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar9.Value;
          *(undefined2 *)&(pFVar22->EndLink).field_0x1a = uVar10;
          (pFVar22->EndLink).SegmentBeginTime = fVar27;
          fVar27 = (pFVar26->EndLink).LinkValue;
          TVar3 = (pFVar26->EndLink).LinkedSequence.field0_0x0;
          (pFVar22->EndLink).SegmentLength = (pFVar26->EndLink).SegmentLength;
          (pFVar22->EndLink).LinkValue = fVar27;
          (pFVar22->EndLink).LinkedSequence.field0_0x0 = TVar3;
          TVar11.Value = (pFVar26->MontageTickType).Value;
          uVar10 = *(undefined2 *)&pFVar26->field_0x92;
          fVar27 = pFVar26->NotifyTriggerChance;
          TVar12.Value = (pFVar26->NotifyFilterType).Value;
          uVar13 = *(undefined3 *)&pFVar26->field_0x99;
          iVar24 = pFVar26->NotifyFilterLOD;
          pFVar22->bConvertedFromBranchingPoint = pFVar26->bConvertedFromBranchingPoint;
          pFVar22->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar11.Value;
          *(undefined2 *)&pFVar22->field_0x92 = uVar10;
          pFVar22->NotifyTriggerChance = fVar27;
          pFVar22->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar12.Value;
          *(undefined3 *)&pFVar22->field_0x99 = uVar13;
          pFVar22->NotifyFilterLOD = iVar24;
          bVar16 = pFVar26->bTriggerOnDedicatedServer;
          bVar14 = pFVar26->bTriggerOnFollower;
          uVar15 = pFVar26->field_0xa3;
          iVar24 = pFVar26->TrackIndex;
          FVar4 = pFVar26->CachedNotifyEventName;
          pFVar22->bCanBeFilteredViaRequest = pFVar26->bCanBeFilteredViaRequest;
          pFVar22->bTriggerOnDedicatedServer = bVar16;
          pFVar22->bTriggerOnFollower = bVar14;
          pFVar22->field_0xa3 = uVar15;
          pFVar22->TrackIndex = iVar24;
          pFVar22->CachedNotifyEventName = FVar4;
          pFVar22->CachedNotifyEventBaseName = pFVar26->CachedNotifyEventBaseName;
          pFVar26->_padding_ = local_400;
          pFVar26->_padding_ = lStack_3f8;
          pFVar26->_padding_ = local_3f0;
          pFVar26->_padding_ = lStack_3e8;
          pFVar26->_padding_ = local_3e0;
          pFVar26->_padding_ = lStack_3d8;
          pFVar26->TriggerTimeOffset = (float)(undefined4)local_3d0;
          pFVar26->EndTriggerTimeOffset = (float)local_3d0._4_4_;
          pFVar26->TriggerWeightThreshold = (float)(undefined4)uStack_3c8;
          (pFVar26->NotifyName).ComparisonIndex = (FNameEntryId)uStack_3c8._4_4_;
          *(undefined8 *)&(pFVar26->NotifyName).Number = local_3c0;
          (pFVar26->Notify).field0_0x0 = TStack_3b8;
          (pFVar26->NotifyStateClass).field0_0x0 = local_3b0;
          *(undefined8 *)&pFVar26->Duration = uStack_3a8;
          (pFVar26->EndLink)._padding_ = local_3a0;
          (pFVar26->EndLink).LinkedMontage.field0_0x0 = TStack_398;
          (pFVar26->EndLink).SlotIndex = (undefined4)local_390;
          (pFVar26->EndLink).SegmentIndex = local_390._4_4_;
          (pFVar26->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_388
          ;
          (pFVar26->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_388._1_1_
          ;
          *(undefined2 *)&(pFVar26->EndLink).field_0x1a = uStack_388._2_2_;
          (pFVar26->EndLink).SegmentBeginTime = (float)uStack_388._4_4_;
          (pFVar26->EndLink).SegmentLength = (float)(undefined4)local_380;
          (pFVar26->EndLink).LinkValue = (float)local_380._4_4_;
          (pFVar26->EndLink).LinkedSequence.field0_0x0 = TStack_378;
          pFVar26->bConvertedFromBranchingPoint = (bool)(undefined1)local_370;
          pFVar26->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_370._1_1_;
          *(undefined2 *)&pFVar26->field_0x92 = local_370._2_2_;
          pFVar26->NotifyTriggerChance = (float)local_370._4_4_;
          pFVar26->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_368;
          *(undefined3 *)&pFVar26->field_0x99 = uStack_368._1_3_;
          pFVar26->NotifyFilterLOD = uStack_368._4_4_;
          pFVar26->bCanBeFilteredViaRequest = (bool)(undefined1)local_360;
          pFVar26->bTriggerOnDedicatedServer = (bool)local_360._1_1_;
          pFVar26->bTriggerOnFollower = (bool)local_360._2_1_;
          pFVar26->field_0xa3 = local_360._3_1_;
          pFVar26->TrackIndex = local_360._4_4_;
          pFVar26->CachedNotifyEventName = FStack_358;
          pFVar26->CachedNotifyEventBaseName = local_350;
        }
        goto LAB_14752b514;
      }
LAB_14752b4fb:
      HeapSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>
                (pFVar25,iVar17,param_3,param_4);
LAB_14752b514:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_348 <= ppFVar23);
  }
  return;
code_r0x00014752b0fc:
  bVar16 = FAnimNotifyEvent::operator<(this,pFVar25);
  if (!bVar16) goto LAB_14752b0f0;
LAB_14752b110:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= this) break;
    bVar16 = FAnimNotifyEvent::operator<(pFVar20,this);
  } while (!bVar16);
  if (pFVar25 <= pFVar20) {
    local_400 = pFVar25->_padding_;
    lStack_3f8 = pFVar22[1]._padding_;
    local_350 = pFVar22[1].CachedNotifyEventBaseName;
    local_3f0 = pFVar22[1]._padding_;
    lStack_3e8 = pFVar22[1]._padding_;
    local_3e0 = pFVar22[1]._padding_;
    lStack_3d8 = pFVar22[1]._padding_;
    local_3d0._0_4_ = pFVar22[1].TriggerTimeOffset;
    local_3d0._4_4_ = pFVar22[1].EndTriggerTimeOffset;
    uStack_3c8._0_4_ = pFVar22[1].TriggerWeightThreshold;
    uStack_3c8._4_4_ = pFVar22[1].NotifyName.ComparisonIndex;
    local_3c0 = *(undefined8 *)&pFVar22[1].NotifyName.Number;
    TStack_3b8 = pFVar22[1].Notify.field0_0x0;
    local_3b0 = pFVar22[1].NotifyStateClass.field0_0x0;
    uStack_3a8 = *(undefined8 *)&pFVar22[1].Duration;
    local_3a0 = pFVar22[1].EndLink._padding_;
    TStack_398 = pFVar22[1].EndLink.LinkedMontage.field0_0x0;
    local_390._0_4_ = pFVar22[1].EndLink.SlotIndex;
    local_390._4_4_ = pFVar22[1].EndLink.SegmentIndex;
    uStack_388._0_1_ = pFVar22[1].EndLink.LinkMethod;
    uStack_388._1_1_ = pFVar22[1].EndLink.CachedLinkMethod;
    uStack_388._2_2_ = *(undefined2 *)&pFVar22[1].EndLink.field_0x1a;
    uStack_388._4_4_ = pFVar22[1].EndLink.SegmentBeginTime;
    local_380._0_4_ = pFVar22[1].EndLink.SegmentLength;
    local_380._4_4_ = pFVar22[1].EndLink.LinkValue;
    TStack_378 = pFVar22[1].EndLink.LinkedSequence.field0_0x0;
    local_370._0_1_ = pFVar22[1].bConvertedFromBranchingPoint;
    local_370._1_1_ = pFVar22[1].MontageTickType;
    local_370._2_2_ = *(undefined2 *)&pFVar22[1].field_0x92;
    local_370._4_4_ = pFVar22[1].NotifyTriggerChance;
    uStack_368._0_1_ = pFVar22[1].NotifyFilterType;
    uStack_368._1_3_ = *(undefined3 *)&pFVar22[1].field_0x99;
    uStack_368._4_4_ = pFVar22[1].NotifyFilterLOD;
    local_360._0_1_ = pFVar22[1].bCanBeFilteredViaRequest;
    local_360._1_1_ = pFVar22[1].bTriggerOnDedicatedServer;
    local_360._2_1_ = pFVar22[1].bTriggerOnFollower;
    local_360._3_1_ = pFVar22[1].field_0xa3;
    local_360._4_4_ = pFVar22[1].TrackIndex;
    FStack_358 = pFVar22[1].CachedNotifyEventName;
    lVar18 = pFVar21[-1]._padding_;
    pFVar25->_padding_ = pFVar20->_padding_;
    pFVar22[1]._padding_ = lVar18;
    lVar18 = pFVar21[-1]._padding_;
    pFVar22[1]._padding_ = pFVar21[-1]._padding_;
    pFVar22[1]._padding_ = lVar18;
    lVar18 = pFVar21[-1]._padding_;
    pFVar22[1]._padding_ = pFVar21[-1]._padding_;
    pFVar22[1]._padding_ = lVar18;
    fVar27 = pFVar21[-1].EndTriggerTimeOffset;
    fVar5 = pFVar21[-1].TriggerWeightThreshold;
    FVar6.Value = pFVar21[-1].NotifyName.ComparisonIndex.Value;
    pFVar22[1].TriggerTimeOffset = pFVar21[-1].TriggerTimeOffset;
    pFVar22[1].EndTriggerTimeOffset = fVar27;
    pFVar22[1].TriggerWeightThreshold = fVar5;
    pFVar22[1].NotifyName.ComparisonIndex = (FNameEntryId)FVar6.Value;
    TVar1 = pFVar21[-1].Notify.field0_0x0;
    *(undefined8 *)&pFVar22[1].NotifyName.Number = *(undefined8 *)&pFVar21[-1].NotifyName.Number;
    pFVar22[1].Notify.field0_0x0 = TVar1;
    fVar27 = pFVar21[-1].Duration;
    uVar7 = *(undefined4 *)&pFVar21[-1].field_0x5c;
    pFVar22[1].NotifyStateClass.field0_0x0 = pFVar21[-1].NotifyStateClass.field0_0x0;
    pFVar22[1].Duration = fVar27;
    *(undefined4 *)&pFVar22[1].field_0x5c = uVar7;
    TVar2 = pFVar21[-1].EndLink.LinkedMontage.field0_0x0;
    pFVar22[1].EndLink._padding_ = pFVar21[-1].EndLink._padding_;
    pFVar22[1].EndLink.LinkedMontage.field0_0x0 = TVar2;
    iVar17 = pFVar21[-1].EndLink.SegmentIndex;
    TVar8.Value = pFVar21[-1].EndLink.LinkMethod.Value;
    TVar9.Value = pFVar21[-1].EndLink.CachedLinkMethod.Value;
    uVar10 = *(undefined2 *)&pFVar21[-1].EndLink.field_0x1a;
    fVar27 = pFVar21[-1].EndLink.SegmentBeginTime;
    pFVar22[1].EndLink.SlotIndex = pFVar21[-1].EndLink.SlotIndex;
    pFVar22[1].EndLink.SegmentIndex = iVar17;
    pFVar22[1].EndLink.LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar8.Value;
    pFVar22[1].EndLink.CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar9.Value;
    *(undefined2 *)&pFVar22[1].EndLink.field_0x1a = uVar10;
    pFVar22[1].EndLink.SegmentBeginTime = fVar27;
    fVar27 = pFVar21[-1].EndLink.LinkValue;
    TVar3 = pFVar21[-1].EndLink.LinkedSequence.field0_0x0;
    pFVar22[1].EndLink.SegmentLength = pFVar21[-1].EndLink.SegmentLength;
    pFVar22[1].EndLink.LinkValue = fVar27;
    pFVar22[1].EndLink.LinkedSequence.field0_0x0 = TVar3;
    TVar11.Value = pFVar21[-1].MontageTickType.Value;
    uVar10 = *(undefined2 *)&pFVar21[-1].field_0x92;
    fVar27 = pFVar21[-1].NotifyTriggerChance;
    TVar12.Value = pFVar21[-1].NotifyFilterType.Value;
    uVar13 = *(undefined3 *)&pFVar21[-1].field_0x99;
    iVar17 = pFVar21[-1].NotifyFilterLOD;
    pFVar22[1].bConvertedFromBranchingPoint = pFVar21[-1].bConvertedFromBranchingPoint;
    pFVar22[1].MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar11.Value;
    *(undefined2 *)&pFVar22[1].field_0x92 = uVar10;
    pFVar22[1].NotifyTriggerChance = fVar27;
    pFVar22[1].NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar12.Value;
    *(undefined3 *)&pFVar22[1].field_0x99 = uVar13;
    pFVar22[1].NotifyFilterLOD = iVar17;
    bVar16 = pFVar21[-1].bTriggerOnDedicatedServer;
    bVar14 = pFVar21[-1].bTriggerOnFollower;
    uVar15 = pFVar21[-1].field_0xa3;
    iVar17 = pFVar21[-1].TrackIndex;
    FVar4 = pFVar21[-1].CachedNotifyEventName;
    pFVar22[1].bCanBeFilteredViaRequest = pFVar21[-1].bCanBeFilteredViaRequest;
    pFVar22[1].bTriggerOnDedicatedServer = bVar16;
    pFVar22[1].bTriggerOnFollower = bVar14;
    pFVar22[1].field_0xa3 = uVar15;
    pFVar22[1].TrackIndex = iVar17;
    pFVar22[1].CachedNotifyEventName = FVar4;
    pFVar22[1].CachedNotifyEventBaseName = pFVar21[-1].CachedNotifyEventBaseName;
    pFVar20->_padding_ = local_400;
    pFVar21[-1]._padding_ = lStack_3f8;
    pFVar21[-1]._padding_ = local_3f0;
    pFVar21[-1]._padding_ = lStack_3e8;
    pFVar21[-1]._padding_ = local_3e0;
    pFVar21[-1]._padding_ = lStack_3d8;
    pFVar21[-1].TriggerTimeOffset = (float)(undefined4)local_3d0;
    pFVar21[-1].EndTriggerTimeOffset = (float)local_3d0._4_4_;
    pFVar21[-1].TriggerWeightThreshold = (float)(undefined4)uStack_3c8;
    pFVar21[-1].NotifyName.ComparisonIndex = (FNameEntryId)uStack_3c8._4_4_;
    *(undefined8 *)&pFVar21[-1].NotifyName.Number = local_3c0;
    pFVar21[-1].Notify.field0_0x0 = TStack_3b8;
    pFVar21[-1].NotifyStateClass.field0_0x0 = local_3b0;
    *(undefined8 *)&pFVar21[-1].Duration = uStack_3a8;
    pFVar21[-1].EndLink._padding_ = local_3a0;
    pFVar21[-1].EndLink.LinkedMontage.field0_0x0 = TStack_398;
    pFVar21[-1].EndLink.SlotIndex = (undefined4)local_390;
    pFVar21[-1].EndLink.SegmentIndex = local_390._4_4_;
    pFVar21[-1].EndLink.LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_388;
    pFVar21[-1].EndLink.CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_388._1_1_;
    *(undefined2 *)&pFVar21[-1].EndLink.field_0x1a = uStack_388._2_2_;
    pFVar21[-1].EndLink.SegmentBeginTime = (float)uStack_388._4_4_;
    pFVar21[-1].EndLink.SegmentLength = (float)(undefined4)local_380;
    pFVar21[-1].EndLink.LinkValue = (float)local_380._4_4_;
    pFVar21[-1].EndLink.LinkedSequence.field0_0x0 = TStack_378;
    pFVar21[-1].bConvertedFromBranchingPoint = (bool)(undefined1)local_370;
    pFVar21[-1].MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_370._1_1_;
    *(undefined2 *)&pFVar21[-1].field_0x92 = local_370._2_2_;
    pFVar21[-1].NotifyTriggerChance = (float)local_370._4_4_;
    pFVar21[-1].NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_368;
    *(undefined3 *)&pFVar21[-1].field_0x99 = uStack_368._1_3_;
    pFVar21[-1].NotifyFilterLOD = uStack_368._4_4_;
    pFVar21[-1].bCanBeFilteredViaRequest = (bool)(undefined1)local_360;
    pFVar21[-1].bTriggerOnDedicatedServer = (bool)local_360._1_1_;
    pFVar21[-1].bTriggerOnFollower = (bool)local_360._2_1_;
    pFVar21[-1].field_0xa3 = local_360._3_1_;
    pFVar21[-1].TrackIndex = local_360._4_4_;
    pFVar21[-1].CachedNotifyEventName = FStack_358;
    pFVar21[-1].CachedNotifyEventBaseName = local_350;
    goto LAB_14752b0f0;
  }
  local_400 = this->_padding_;
  lStack_3f8 = this->_padding_;
  local_350 = this->CachedNotifyEventBaseName;
  local_3f0 = this->_padding_;
  lStack_3e8 = this->_padding_;
  iVar24 = iVar24 + -1;
  local_3e0 = this->_padding_;
  lStack_3d8 = this->_padding_;
  local_3d0._0_4_ = this->TriggerTimeOffset;
  local_3d0._4_4_ = this->EndTriggerTimeOffset;
  uStack_3c8._0_4_ = this->TriggerWeightThreshold;
  uStack_3c8._4_4_ = (this->NotifyName).ComparisonIndex;
  local_3c0 = *(undefined8 *)&(this->NotifyName).Number;
  TStack_3b8 = (this->Notify).field0_0x0;
  local_3b0 = (this->NotifyStateClass).field0_0x0;
  uStack_3a8 = *(undefined8 *)&this->Duration;
  local_3a0 = (this->EndLink)._padding_;
  TStack_398 = (this->EndLink).LinkedMontage.field0_0x0;
  local_390._0_4_ = (this->EndLink).SlotIndex;
  local_390._4_4_ = (this->EndLink).SegmentIndex;
  uStack_388._0_1_ = (this->EndLink).LinkMethod;
  uStack_388._1_1_ = (this->EndLink).CachedLinkMethod;
  uStack_388._2_2_ = *(undefined2 *)&(this->EndLink).field_0x1a;
  uStack_388._4_4_ = (this->EndLink).SegmentBeginTime;
  local_380._0_4_ = (this->EndLink).SegmentLength;
  local_380._4_4_ = (this->EndLink).LinkValue;
  TStack_378 = (this->EndLink).LinkedSequence.field0_0x0;
  local_370._0_1_ = this->bConvertedFromBranchingPoint;
  local_370._1_1_ = this->MontageTickType;
  local_370._2_2_ = *(undefined2 *)&this->field_0x92;
  local_370._4_4_ = this->NotifyTriggerChance;
  uStack_368._0_1_ = this->NotifyFilterType;
  uStack_368._1_3_ = *(undefined3 *)&this->field_0x99;
  uStack_368._4_4_ = this->NotifyFilterLOD;
  local_360._0_1_ = this->bCanBeFilteredViaRequest;
  local_360._1_1_ = this->bTriggerOnDedicatedServer;
  local_360._2_1_ = this->bTriggerOnFollower;
  local_360._3_1_ = this->field_0xa3;
  local_360._4_4_ = this->TrackIndex;
  FStack_358 = this->CachedNotifyEventName;
  lVar19 = pFVar21[-1]._padding_;
  lVar18 = (longlong)pFVar20 + (-0xb8 - (longlong)this);
  this->_padding_ = pFVar20->_padding_;
  this->_padding_ = lVar19;
  lVar19 = pFVar21[-1]._padding_;
  this->_padding_ = pFVar21[-1]._padding_;
  this->_padding_ = lVar19;
  lVar19 = pFVar21[-1]._padding_;
  this->_padding_ = pFVar21[-1]._padding_;
  this->_padding_ = lVar19;
  fVar27 = pFVar21[-1].EndTriggerTimeOffset;
  fVar5 = pFVar21[-1].TriggerWeightThreshold;
  FVar6.Value = pFVar21[-1].NotifyName.ComparisonIndex.Value;
  this->TriggerTimeOffset = pFVar21[-1].TriggerTimeOffset;
  this->EndTriggerTimeOffset = fVar27;
  this->TriggerWeightThreshold = fVar5;
  (this->NotifyName).ComparisonIndex = (FNameEntryId)FVar6.Value;
  TVar1 = pFVar21[-1].Notify.field0_0x0;
  *(undefined8 *)&(this->NotifyName).Number = *(undefined8 *)&pFVar21[-1].NotifyName.Number;
  (this->Notify).field0_0x0 = TVar1;
  fVar27 = pFVar21[-1].Duration;
  uVar7 = *(undefined4 *)&pFVar21[-1].field_0x5c;
  (this->NotifyStateClass).field0_0x0 = pFVar21[-1].NotifyStateClass.field0_0x0;
  this->Duration = fVar27;
  *(undefined4 *)&this->field_0x5c = uVar7;
  TVar2 = pFVar21[-1].EndLink.LinkedMontage.field0_0x0;
  (this->EndLink)._padding_ = pFVar21[-1].EndLink._padding_;
  (this->EndLink).LinkedMontage.field0_0x0 = TVar2;
  iVar17 = pFVar21[-1].EndLink.SegmentIndex;
  TVar8.Value = pFVar21[-1].EndLink.LinkMethod.Value;
  TVar9.Value = pFVar21[-1].EndLink.CachedLinkMethod.Value;
  uVar10 = *(undefined2 *)&pFVar21[-1].EndLink.field_0x1a;
  fVar27 = pFVar21[-1].EndLink.SegmentBeginTime;
  (this->EndLink).SlotIndex = pFVar21[-1].EndLink.SlotIndex;
  (this->EndLink).SegmentIndex = iVar17;
  (this->EndLink).LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar8.Value;
  (this->EndLink).CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)TVar9.Value;
  *(undefined2 *)&(this->EndLink).field_0x1a = uVar10;
  (this->EndLink).SegmentBeginTime = fVar27;
  fVar27 = pFVar21[-1].EndLink.LinkValue;
  TVar3 = pFVar21[-1].EndLink.LinkedSequence.field0_0x0;
  (this->EndLink).SegmentLength = pFVar21[-1].EndLink.SegmentLength;
  (this->EndLink).LinkValue = fVar27;
  (this->EndLink).LinkedSequence.field0_0x0 = TVar3;
  TVar11.Value = pFVar21[-1].MontageTickType.Value;
  uVar10 = *(undefined2 *)&pFVar21[-1].field_0x92;
  fVar27 = pFVar21[-1].NotifyTriggerChance;
  TVar12.Value = pFVar21[-1].NotifyFilterType.Value;
  uVar13 = *(undefined3 *)&pFVar21[-1].field_0x99;
  iVar17 = pFVar21[-1].NotifyFilterLOD;
  this->bConvertedFromBranchingPoint = pFVar21[-1].bConvertedFromBranchingPoint;
  this->MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)TVar11.Value;
  *(undefined2 *)&this->field_0x92 = uVar10;
  this->NotifyTriggerChance = fVar27;
  this->NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)TVar12.Value;
  *(undefined3 *)&this->field_0x99 = uVar13;
  this->NotifyFilterLOD = iVar17;
  bVar16 = pFVar21[-1].bTriggerOnDedicatedServer;
  bVar14 = pFVar21[-1].bTriggerOnFollower;
  uVar15 = pFVar21[-1].field_0xa3;
  iVar17 = pFVar21[-1].TrackIndex;
  FVar4 = pFVar21[-1].CachedNotifyEventName;
  this->bCanBeFilteredViaRequest = pFVar21[-1].bCanBeFilteredViaRequest;
  this->bTriggerOnDedicatedServer = bVar16;
  this->bTriggerOnFollower = bVar14;
  this->field_0xa3 = uVar15;
  this->TrackIndex = iVar17;
  this->CachedNotifyEventName = FVar4;
  this->CachedNotifyEventBaseName = pFVar21[-1].CachedNotifyEventBaseName;
  pFVar20->_padding_ = local_400;
  pFVar21[-1]._padding_ = lStack_3f8;
  pFVar21[-1]._padding_ = local_3f0;
  pFVar21[-1]._padding_ = lStack_3e8;
  pFVar21[-1]._padding_ = local_3e0;
  pFVar21[-1]._padding_ = lStack_3d8;
  pFVar21[-1].TriggerTimeOffset = (float)(undefined4)local_3d0;
  pFVar21[-1].EndTriggerTimeOffset = (float)local_3d0._4_4_;
  pFVar21[-1].TriggerWeightThreshold = (float)(undefined4)uStack_3c8;
  pFVar21[-1].NotifyName.ComparisonIndex = (FNameEntryId)uStack_3c8._4_4_;
  *(undefined8 *)&pFVar21[-1].NotifyName.Number = local_3c0;
  pFVar21[-1].Notify.field0_0x0 = TStack_3b8;
  pFVar21[-1].NotifyStateClass.field0_0x0 = local_3b0;
  *(undefined8 *)&pFVar21[-1].Duration = uStack_3a8;
  pFVar21[-1].EndLink._padding_ = local_3a0;
  pFVar21[-1].EndLink.LinkedMontage.field0_0x0 = TStack_398;
  pFVar21[-1].EndLink.SlotIndex = (undefined4)local_390;
  pFVar21[-1].EndLink.SegmentIndex = local_390._4_4_;
  pFVar21[-1].EndLink.LinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)(undefined1)uStack_388;
  pFVar21[-1].EndLink.CachedLinkMethod = (TEnumAsByte<EAnimLinkMethod::Type>)uStack_388._1_1_;
  *(undefined2 *)&pFVar21[-1].EndLink.field_0x1a = uStack_388._2_2_;
  pFVar21[-1].EndLink.SegmentBeginTime = (float)uStack_388._4_4_;
  pFVar21[-1].EndLink.SegmentLength = (float)(undefined4)local_380;
  pFVar21[-1].EndLink.LinkValue = (float)local_380._4_4_;
  pFVar21[-1].EndLink.LinkedSequence.field0_0x0 = TStack_378;
  pFVar21[-1].bConvertedFromBranchingPoint = (bool)(undefined1)local_370;
  pFVar21[-1].MontageTickType = (TEnumAsByte<EMontageNotifyTickType::Type>)local_370._1_1_;
  *(undefined2 *)&pFVar21[-1].field_0x92 = local_370._2_2_;
  pFVar21[-1].NotifyTriggerChance = (float)local_370._4_4_;
  pFVar21[-1].NotifyFilterType = (TEnumAsByte<ENotifyFilterType::Type>)(undefined1)uStack_368;
  *(undefined3 *)&pFVar21[-1].field_0x99 = uStack_368._1_3_;
  pFVar21[-1].NotifyFilterLOD = uStack_368._4_4_;
  pFVar21[-1].bCanBeFilteredViaRequest = (bool)(undefined1)local_360;
  pFVar21[-1].bTriggerOnDedicatedServer = (bool)local_360._1_1_;
  pFVar21[-1].bTriggerOnFollower = (bool)local_360._2_1_;
  pFVar21[-1].field_0xa3 = local_360._3_1_;
  pFVar21[-1].TrackIndex = local_360._4_4_;
  pFVar21[-1].CachedNotifyEventName = FStack_358;
  pFVar21[-1].CachedNotifyEventBaseName = local_350;
  lVar18 = lVar18 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar18),8);
  lVar19 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar26 - (longlong)pFVar25),8) +
           ((longlong)pFVar26 - (longlong)pFVar25);
  if ((lVar18 >> 7) - (lVar18 >> 0x3f) < (lVar19 >> 7) - (lVar19 >> 0x3f)) {
    if (pFVar25 < pFVar26) {
      *ppFVar23 = pFVar25;
      ppFVar23[1] = pFVar26;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar20 <= this + 1) goto LAB_14752b514;
    pFVar26 = pFVar21 + -2;
    pFVar25 = this;
  }
  else {
    if (this + 1 < pFVar20) {
      *ppFVar23 = this;
      ppFVar23[1] = pFVar21 + -2;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar26 <= pFVar25) goto LAB_14752b514;
  }
  lVar18 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar26 - (longlong)pFVar25),8) +
           ((longlong)pFVar26 - (longlong)pFVar25);
  iVar17 = ((int)(lVar18 >> 7) - (int)(lVar18 >> 0x3f)) + 1;
  this = pFVar25;
  if (iVar24 == 0) goto LAB_14752b4fb;
  goto LAB_14752af43;
}

// IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,`UBlendSpace::GetSamplesFromBlendInput'::__l2::<lambda_1>_>_> @ 14752b740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_UBlendSpace::GetSamplesFromBlendInput_::__l2::<lambda_1>_>_>
          (FBlendSampleData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBlendSampleData,_public:_bool___cdecl_UBlendSpace::GetSamplesFromBlendInput(UE::Math::TVector<double>_const_&,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>_&,int_&,bool)const_::_2_::<lambda_1>_>
          param_4)

{
  FBlendSampleData *pFVar1;
  TObjectPtr<UAnimSequence>_u_0 TVar2;
  TObjectPtr<UAnimSequence>_u_0 TVar3;
  FMarkerPair FVar4;
  FMarkerPair FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FMarkerPair FVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined3 uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  undefined3 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  FBlendSampleData *pFVar32;
  int iVar33;
  FBlendSampleData *pFVar34;
  FBlendSampleData *pFVar35;
  FBlendSampleData *pFVar36;
  FBlendSampleData *pFVar37;
  FBlendSampleData *pFVar38;
  FBlendSampleData **ppFVar39;
  float fVar40;
  undefined1 auStack_398 [48];
  FBlendSampleData *local_368;
  FBlendSampleData *local_358;
  FBlendSampleData *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar40;
    memset(local_340,0,0x2e8);
    ppFVar39 = &local_358;
    do {
      pFVar35 = ppFVar39[1];
      pFVar32 = *ppFVar39;
      pFVar1 = ppFVar39[2];
      local_368._0_4_ = (int)pFVar1;
      iVar33 = (int)(((longlong)pFVar35 - (longlong)pFVar32) / 0x60) + 1;
      pFVar38 = pFVar32;
      if ((int)local_368 != 0) {
LAB_14752b820:
        if (8 < iVar33) {
          iVar11 = pFVar38->_padding_;
          TVar2 = (pFVar38->Animation).field0_0x0;
          pFVar34 = pFVar35 + 1;
          pFVar32 = pFVar38 + iVar33 / 2;
          iVar16 = pFVar32->SampleDataIndex;
          iVar17 = pFVar32->_padding_;
          TVar3 = (pFVar32->Animation).field0_0x0;
          fVar18 = pFVar32->TotalWeight;
          fVar19 = pFVar32->WeightRate;
          fVar20 = pFVar32->Time;
          fVar21 = pFVar32->PreviousTime;
          fVar22 = pFVar32->SamplePlayRate;
          fVar23 = (pFVar32->DeltaTimeRecord).Delta;
          fVar24 = (pFVar32->DeltaTimeRecord).Previous;
          bVar25 = (pFVar32->DeltaTimeRecord).bPreviousIsValid;
          uVar26 = *(undefined3 *)&(pFVar32->DeltaTimeRecord).field_0x9;
          FVar4 = (pFVar32->MarkerTickRecord).PreviousMarker;
          FVar5 = (pFVar32->MarkerTickRecord).NextMarker;
          pFVar6 = (pFVar32->PerBoneBlendData).AllocatorInstance.Data;
          iVar27 = (pFVar32->PerBoneBlendData).ArrayNum;
          iVar28 = (pFVar32->PerBoneBlendData).ArrayMax;
          pFVar7 = (pFVar32->PerBoneWeightRate).AllocatorInstance.Data;
          iVar29 = (pFVar32->PerBoneWeightRate).ArrayNum;
          iVar30 = (pFVar32->PerBoneWeightRate).ArrayMax;
          pFVar32->SampleDataIndex = pFVar38->SampleDataIndex;
          pFVar32->_padding_ = iVar11;
          (pFVar32->Animation).field0_0x0 = TVar2;
          fVar40 = pFVar38->WeightRate;
          fVar12 = pFVar38->Time;
          fVar13 = pFVar38->PreviousTime;
          pFVar32->TotalWeight = pFVar38->TotalWeight;
          pFVar32->WeightRate = fVar40;
          pFVar32->Time = fVar12;
          pFVar32->PreviousTime = fVar13;
          fVar40 = (pFVar38->DeltaTimeRecord).Delta;
          fVar12 = (pFVar38->DeltaTimeRecord).Previous;
          bVar14 = (pFVar38->DeltaTimeRecord).bPreviousIsValid;
          uVar15 = *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9;
          pFVar32->SamplePlayRate = pFVar38->SamplePlayRate;
          (pFVar32->DeltaTimeRecord).Delta = fVar40;
          (pFVar32->DeltaTimeRecord).Previous = fVar12;
          (pFVar32->DeltaTimeRecord).bPreviousIsValid = bVar14;
          *(undefined3 *)&(pFVar32->DeltaTimeRecord).field_0x9 = uVar15;
          FVar8 = (pFVar38->MarkerTickRecord).NextMarker;
          (pFVar32->MarkerTickRecord).PreviousMarker = (pFVar38->MarkerTickRecord).PreviousMarker;
          (pFVar32->MarkerTickRecord).NextMarker = FVar8;
          iVar33 = (pFVar38->PerBoneBlendData).ArrayNum;
          iVar11 = (pFVar38->PerBoneBlendData).ArrayMax;
          (pFVar32->PerBoneBlendData).AllocatorInstance.Data =
               (pFVar38->PerBoneBlendData).AllocatorInstance.Data;
          (pFVar32->PerBoneBlendData).ArrayNum = iVar33;
          (pFVar32->PerBoneBlendData).ArrayMax = iVar11;
          iVar33 = (pFVar38->PerBoneWeightRate).ArrayNum;
          iVar11 = (pFVar38->PerBoneWeightRate).ArrayMax;
          (pFVar32->PerBoneWeightRate).AllocatorInstance.Data =
               (pFVar38->PerBoneWeightRate).AllocatorInstance.Data;
          (pFVar32->PerBoneWeightRate).ArrayNum = iVar33;
          (pFVar32->PerBoneWeightRate).ArrayMax = iVar11;
          pFVar38->SampleDataIndex = iVar16;
          pFVar38->_padding_ = iVar17;
          (pFVar38->Animation).field0_0x0 = TVar3;
          pFVar38->TotalWeight = fVar18;
          pFVar38->WeightRate = fVar19;
          pFVar38->Time = fVar20;
          pFVar38->PreviousTime = fVar21;
          pFVar38->SamplePlayRate = fVar22;
          (pFVar38->DeltaTimeRecord).Delta = fVar23;
          (pFVar38->DeltaTimeRecord).Previous = fVar24;
          (pFVar38->DeltaTimeRecord).bPreviousIsValid = bVar25;
          *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9 = uVar26;
          (pFVar38->MarkerTickRecord).PreviousMarker = FVar4;
          (pFVar38->MarkerTickRecord).NextMarker = FVar5;
          (pFVar38->PerBoneBlendData).AllocatorInstance.Data = pFVar6;
          (pFVar38->PerBoneBlendData).ArrayNum = iVar27;
          (pFVar38->PerBoneBlendData).ArrayMax = iVar28;
          (pFVar38->PerBoneWeightRate).AllocatorInstance.Data = pFVar7;
          (pFVar38->PerBoneWeightRate).ArrayNum = iVar29;
          (pFVar38->PerBoneWeightRate).ArrayMax = iVar30;
          pFVar32 = pFVar38;
LAB_14752b8b0:
          pFVar36 = pFVar32;
          pFVar32 = pFVar36 + 1;
          if (pFVar32 <= pFVar35) goto code_r0x00014752b8b9;
          goto LAB_14752b8c6;
        }
        if (pFVar38 < pFVar35) {
          pFVar1 = pFVar38 + 1;
          do {
            pFVar32 = pFVar38;
            if (pFVar1 <= pFVar35) {
              pFVar34 = pFVar1;
              if (0x17f < (ulonglong)((longlong)pFVar35 + (0x60 - (longlong)pFVar1))) {
                do {
                  if (pFVar34->TotalWeight < pFVar32->TotalWeight) {
                    pFVar32 = pFVar34;
                  }
                  if (pFVar34[1].TotalWeight <= pFVar32->TotalWeight &&
                      pFVar32->TotalWeight != pFVar34[1].TotalWeight) {
                    pFVar32 = pFVar34 + 1;
                  }
                  if (pFVar34[2].TotalWeight <= pFVar32->TotalWeight &&
                      pFVar32->TotalWeight != pFVar34[2].TotalWeight) {
                    pFVar32 = pFVar34 + 2;
                  }
                  if (pFVar34[3].TotalWeight <= pFVar32->TotalWeight &&
                      pFVar32->TotalWeight != pFVar34[3].TotalWeight) {
                    pFVar32 = pFVar34 + 3;
                  }
                  pFVar34 = pFVar34 + 4;
                } while (pFVar34 <= pFVar35 + -3);
              }
              for (; pFVar34 <= pFVar35; pFVar34 = pFVar34 + 1) {
                if (pFVar34->TotalWeight < pFVar32->TotalWeight) {
                  pFVar32 = pFVar34;
                }
              }
            }
            iVar16 = pFVar32->SampleDataIndex;
            iVar17 = pFVar32->_padding_;
            TVar2 = (pFVar32->Animation).field0_0x0;
            pFVar34 = pFVar35 + -1;
            fVar18 = pFVar32->TotalWeight;
            fVar19 = pFVar32->WeightRate;
            fVar20 = pFVar32->Time;
            fVar21 = pFVar32->PreviousTime;
            fVar22 = pFVar32->SamplePlayRate;
            fVar23 = (pFVar32->DeltaTimeRecord).Delta;
            fVar24 = (pFVar32->DeltaTimeRecord).Previous;
            bVar25 = (pFVar32->DeltaTimeRecord).bPreviousIsValid;
            uVar26 = *(undefined3 *)&(pFVar32->DeltaTimeRecord).field_0x9;
            iVar33 = pFVar35->_padding_;
            TVar3 = (pFVar35->Animation).field0_0x0;
            FVar4 = (pFVar32->MarkerTickRecord).PreviousMarker;
            FVar5 = (pFVar32->MarkerTickRecord).NextMarker;
            pFVar6 = (pFVar32->PerBoneBlendData).AllocatorInstance.Data;
            iVar27 = (pFVar32->PerBoneBlendData).ArrayNum;
            iVar28 = (pFVar32->PerBoneBlendData).ArrayMax;
            pFVar7 = (pFVar32->PerBoneWeightRate).AllocatorInstance.Data;
            iVar29 = (pFVar32->PerBoneWeightRate).ArrayNum;
            iVar30 = (pFVar32->PerBoneWeightRate).ArrayMax;
            pFVar32->SampleDataIndex = pFVar35->SampleDataIndex;
            pFVar32->_padding_ = iVar33;
            (pFVar32->Animation).field0_0x0 = TVar3;
            fVar40 = pFVar35->WeightRate;
            fVar12 = pFVar35->Time;
            fVar13 = pFVar35->PreviousTime;
            pFVar32->TotalWeight = pFVar35->TotalWeight;
            pFVar32->WeightRate = fVar40;
            pFVar32->Time = fVar12;
            pFVar32->PreviousTime = fVar13;
            fVar40 = (pFVar35->DeltaTimeRecord).Delta;
            fVar12 = (pFVar35->DeltaTimeRecord).Previous;
            bVar14 = (pFVar35->DeltaTimeRecord).bPreviousIsValid;
            uVar15 = *(undefined3 *)&(pFVar35->DeltaTimeRecord).field_0x9;
            pFVar32->SamplePlayRate = pFVar35->SamplePlayRate;
            (pFVar32->DeltaTimeRecord).Delta = fVar40;
            (pFVar32->DeltaTimeRecord).Previous = fVar12;
            (pFVar32->DeltaTimeRecord).bPreviousIsValid = bVar14;
            *(undefined3 *)&(pFVar32->DeltaTimeRecord).field_0x9 = uVar15;
            FVar8 = (pFVar35->MarkerTickRecord).NextMarker;
            (pFVar32->MarkerTickRecord).PreviousMarker = (pFVar35->MarkerTickRecord).PreviousMarker;
            (pFVar32->MarkerTickRecord).NextMarker = FVar8;
            iVar33 = (pFVar35->PerBoneBlendData).ArrayNum;
            iVar11 = (pFVar35->PerBoneBlendData).ArrayMax;
            (pFVar32->PerBoneBlendData).AllocatorInstance.Data =
                 (pFVar35->PerBoneBlendData).AllocatorInstance.Data;
            (pFVar32->PerBoneBlendData).ArrayNum = iVar33;
            (pFVar32->PerBoneBlendData).ArrayMax = iVar11;
            iVar33 = (pFVar35->PerBoneWeightRate).ArrayNum;
            iVar11 = (pFVar35->PerBoneWeightRate).ArrayMax;
            (pFVar32->PerBoneWeightRate).AllocatorInstance.Data =
                 (pFVar35->PerBoneWeightRate).AllocatorInstance.Data;
            (pFVar32->PerBoneWeightRate).ArrayNum = iVar33;
            (pFVar32->PerBoneWeightRate).ArrayMax = iVar11;
            pFVar35->SampleDataIndex = iVar16;
            pFVar35->_padding_ = iVar17;
            (pFVar35->Animation).field0_0x0 = TVar2;
            pFVar35->TotalWeight = fVar18;
            pFVar35->WeightRate = fVar19;
            pFVar35->Time = fVar20;
            pFVar35->PreviousTime = fVar21;
            pFVar35->SamplePlayRate = fVar22;
            (pFVar35->DeltaTimeRecord).Delta = fVar23;
            (pFVar35->DeltaTimeRecord).Previous = fVar24;
            (pFVar35->DeltaTimeRecord).bPreviousIsValid = bVar25;
            *(undefined3 *)&(pFVar35->DeltaTimeRecord).field_0x9 = uVar26;
            (pFVar35->MarkerTickRecord).PreviousMarker = FVar4;
            (pFVar35->MarkerTickRecord).NextMarker = FVar5;
            (pFVar35->PerBoneBlendData).AllocatorInstance.Data = pFVar6;
            (pFVar35->PerBoneBlendData).ArrayNum = iVar27;
            (pFVar35->PerBoneBlendData).ArrayMax = iVar28;
            (pFVar35->PerBoneWeightRate).AllocatorInstance.Data = pFVar7;
            (pFVar35->PerBoneWeightRate).ArrayNum = iVar29;
            (pFVar35->PerBoneWeightRate).ArrayMax = iVar30;
            pFVar35 = pFVar34;
          } while (pFVar38 < pFVar34);
        }
        goto LAB_14752ba86;
      }
LAB_14752ba77:
      local_368 = pFVar1;
      HeapSortInternal<FBlendSampleData,int,FIdentityFunctor,TDereferenceWrapper<FBlendSampleData,_UBlendSpace::GetSamplesFromBlendInput_::__l2::<lambda_1>_>_>
                (pFVar32,iVar33,param_3,param_4);
LAB_14752ba86:
      ppFVar39 = ppFVar39 + -3;
    } while (&local_358 <= ppFVar39);
  }
  return;
code_r0x00014752b8b9:
  if (pFVar38->TotalWeight < pFVar36[1].TotalWeight ||
      pFVar38->TotalWeight == pFVar36[1].TotalWeight) goto LAB_14752b8b0;
LAB_14752b8c6:
  do {
    pFVar37 = pFVar34;
    pFVar34 = pFVar37 + -1;
    if (pFVar34 <= pFVar38) break;
  } while (pFVar37[-1].TotalWeight < pFVar38->TotalWeight ||
           pFVar37[-1].TotalWeight == pFVar38->TotalWeight);
  uVar9 = pFVar34->SampleDataIndex;
  uVar10 = pFVar34->_padding_;
  TVar2 = pFVar37[-1].Animation.field0_0x0;
  if (pFVar32 <= pFVar34) {
    iVar16 = pFVar32->SampleDataIndex;
    iVar17 = pFVar32->_padding_;
    TVar3 = pFVar36[1].Animation.field0_0x0;
    fVar18 = pFVar36[1].TotalWeight;
    fVar19 = pFVar36[1].WeightRate;
    fVar20 = pFVar36[1].Time;
    fVar21 = pFVar36[1].PreviousTime;
    fVar22 = pFVar36[1].SamplePlayRate;
    fVar23 = pFVar36[1].DeltaTimeRecord.Delta;
    fVar24 = pFVar36[1].DeltaTimeRecord.Previous;
    bVar25 = pFVar36[1].DeltaTimeRecord.bPreviousIsValid;
    uVar26 = *(undefined3 *)&pFVar36[1].DeltaTimeRecord.field_0x9;
    FVar4 = pFVar36[1].MarkerTickRecord.PreviousMarker;
    FVar5 = pFVar36[1].MarkerTickRecord.NextMarker;
    pFVar6 = pFVar36[1].PerBoneBlendData.AllocatorInstance.Data;
    iVar27 = pFVar36[1].PerBoneBlendData.ArrayNum;
    iVar28 = pFVar36[1].PerBoneBlendData.ArrayMax;
    pFVar7 = pFVar36[1].PerBoneWeightRate.AllocatorInstance.Data;
    iVar29 = pFVar36[1].PerBoneWeightRate.ArrayNum;
    iVar30 = pFVar36[1].PerBoneWeightRate.ArrayMax;
    pFVar32->SampleDataIndex = uVar9;
    pFVar32->_padding_ = uVar10;
    pFVar36[1].Animation.field0_0x0 = TVar2;
    fVar40 = pFVar37[-1].WeightRate;
    fVar12 = pFVar37[-1].Time;
    fVar13 = pFVar37[-1].PreviousTime;
    pFVar36[1].TotalWeight = pFVar37[-1].TotalWeight;
    pFVar36[1].WeightRate = fVar40;
    pFVar36[1].Time = fVar12;
    pFVar36[1].PreviousTime = fVar13;
    fVar40 = pFVar37[-1].DeltaTimeRecord.Delta;
    fVar12 = pFVar37[-1].DeltaTimeRecord.Previous;
    bVar14 = pFVar37[-1].DeltaTimeRecord.bPreviousIsValid;
    uVar15 = *(undefined3 *)&pFVar37[-1].DeltaTimeRecord.field_0x9;
    pFVar36[1].SamplePlayRate = pFVar37[-1].SamplePlayRate;
    pFVar36[1].DeltaTimeRecord.Delta = fVar40;
    pFVar36[1].DeltaTimeRecord.Previous = fVar12;
    pFVar36[1].DeltaTimeRecord.bPreviousIsValid = bVar14;
    *(undefined3 *)&pFVar36[1].DeltaTimeRecord.field_0x9 = uVar15;
    FVar8 = pFVar37[-1].MarkerTickRecord.NextMarker;
    pFVar36[1].MarkerTickRecord.PreviousMarker = pFVar37[-1].MarkerTickRecord.PreviousMarker;
    pFVar36[1].MarkerTickRecord.NextMarker = FVar8;
    iVar33 = pFVar37[-1].PerBoneBlendData.ArrayNum;
    iVar11 = pFVar37[-1].PerBoneBlendData.ArrayMax;
    pFVar36[1].PerBoneBlendData.AllocatorInstance.Data =
         pFVar37[-1].PerBoneBlendData.AllocatorInstance.Data;
    pFVar36[1].PerBoneBlendData.ArrayNum = iVar33;
    pFVar36[1].PerBoneBlendData.ArrayMax = iVar11;
    iVar33 = pFVar37[-1].PerBoneWeightRate.ArrayNum;
    iVar11 = pFVar37[-1].PerBoneWeightRate.ArrayMax;
    pFVar36[1].PerBoneWeightRate.AllocatorInstance.Data =
         pFVar37[-1].PerBoneWeightRate.AllocatorInstance.Data;
    pFVar36[1].PerBoneWeightRate.ArrayNum = iVar33;
    pFVar36[1].PerBoneWeightRate.ArrayMax = iVar11;
    pFVar34->SampleDataIndex = iVar16;
    pFVar34->_padding_ = iVar17;
    pFVar37[-1].Animation.field0_0x0 = TVar3;
    pFVar37[-1].TotalWeight = fVar18;
    pFVar37[-1].WeightRate = fVar19;
    pFVar37[-1].Time = fVar20;
    pFVar37[-1].PreviousTime = fVar21;
    pFVar37[-1].SamplePlayRate = fVar22;
    pFVar37[-1].DeltaTimeRecord.Delta = fVar23;
    pFVar37[-1].DeltaTimeRecord.Previous = fVar24;
    pFVar37[-1].DeltaTimeRecord.bPreviousIsValid = bVar25;
    *(undefined3 *)&pFVar37[-1].DeltaTimeRecord.field_0x9 = uVar26;
    pFVar37[-1].MarkerTickRecord.PreviousMarker = FVar4;
    pFVar37[-1].MarkerTickRecord.NextMarker = FVar5;
    pFVar37[-1].PerBoneBlendData.AllocatorInstance.Data = pFVar6;
    pFVar37[-1].PerBoneBlendData.ArrayNum = iVar27;
    pFVar37[-1].PerBoneBlendData.ArrayMax = iVar28;
    pFVar37[-1].PerBoneWeightRate.AllocatorInstance.Data = pFVar7;
    pFVar37[-1].PerBoneWeightRate.ArrayNum = iVar29;
    pFVar37[-1].PerBoneWeightRate.ArrayMax = iVar30;
    goto LAB_14752b8b0;
  }
  iVar16 = pFVar38->SampleDataIndex;
  iVar17 = pFVar38->_padding_;
  TVar3 = (pFVar38->Animation).field0_0x0;
  fVar18 = pFVar38->TotalWeight;
  fVar19 = pFVar38->WeightRate;
  fVar20 = pFVar38->Time;
  fVar21 = pFVar38->PreviousTime;
  local_368._0_4_ = (int)local_368 + -1;
  fVar22 = pFVar38->SamplePlayRate;
  fVar23 = (pFVar38->DeltaTimeRecord).Delta;
  fVar24 = (pFVar38->DeltaTimeRecord).Previous;
  bVar25 = (pFVar38->DeltaTimeRecord).bPreviousIsValid;
  uVar26 = *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9;
  lVar31 = (longlong)pFVar34 + (-0x60 - (longlong)pFVar38);
  FVar4 = (pFVar38->MarkerTickRecord).PreviousMarker;
  FVar5 = (pFVar38->MarkerTickRecord).NextMarker;
  pFVar6 = (pFVar38->PerBoneBlendData).AllocatorInstance.Data;
  iVar27 = (pFVar38->PerBoneBlendData).ArrayNum;
  iVar28 = (pFVar38->PerBoneBlendData).ArrayMax;
  pFVar7 = (pFVar38->PerBoneWeightRate).AllocatorInstance.Data;
  iVar29 = (pFVar38->PerBoneWeightRate).ArrayNum;
  iVar30 = (pFVar38->PerBoneWeightRate).ArrayMax;
  pFVar38->SampleDataIndex = uVar9;
  pFVar38->_padding_ = uVar10;
  (pFVar38->Animation).field0_0x0 = TVar2;
  fVar40 = pFVar37[-1].WeightRate;
  fVar12 = pFVar37[-1].Time;
  fVar13 = pFVar37[-1].PreviousTime;
  lVar31 = lVar31 / 6 + (lVar31 >> 0x3f);
  pFVar38->TotalWeight = pFVar37[-1].TotalWeight;
  pFVar38->WeightRate = fVar40;
  pFVar38->Time = fVar12;
  pFVar38->PreviousTime = fVar13;
  fVar40 = pFVar37[-1].DeltaTimeRecord.Delta;
  fVar12 = pFVar37[-1].DeltaTimeRecord.Previous;
  bVar14 = pFVar37[-1].DeltaTimeRecord.bPreviousIsValid;
  uVar15 = *(undefined3 *)&pFVar37[-1].DeltaTimeRecord.field_0x9;
  pFVar38->SamplePlayRate = pFVar37[-1].SamplePlayRate;
  (pFVar38->DeltaTimeRecord).Delta = fVar40;
  (pFVar38->DeltaTimeRecord).Previous = fVar12;
  (pFVar38->DeltaTimeRecord).bPreviousIsValid = bVar14;
  *(undefined3 *)&(pFVar38->DeltaTimeRecord).field_0x9 = uVar15;
  FVar8 = pFVar37[-1].MarkerTickRecord.NextMarker;
  (pFVar38->MarkerTickRecord).PreviousMarker = pFVar37[-1].MarkerTickRecord.PreviousMarker;
  (pFVar38->MarkerTickRecord).NextMarker = FVar8;
  iVar33 = pFVar37[-1].PerBoneBlendData.ArrayNum;
  iVar11 = pFVar37[-1].PerBoneBlendData.ArrayMax;
  (pFVar38->PerBoneBlendData).AllocatorInstance.Data =
       pFVar37[-1].PerBoneBlendData.AllocatorInstance.Data;
  (pFVar38->PerBoneBlendData).ArrayNum = iVar33;
  (pFVar38->PerBoneBlendData).ArrayMax = iVar11;
  iVar33 = pFVar37[-1].PerBoneWeightRate.ArrayNum;
  iVar11 = pFVar37[-1].PerBoneWeightRate.ArrayMax;
  (pFVar38->PerBoneWeightRate).AllocatorInstance.Data =
       pFVar37[-1].PerBoneWeightRate.AllocatorInstance.Data;
  (pFVar38->PerBoneWeightRate).ArrayNum = iVar33;
  (pFVar38->PerBoneWeightRate).ArrayMax = iVar11;
  pFVar34->SampleDataIndex = iVar16;
  pFVar34->_padding_ = iVar17;
  pFVar37[-1].Animation.field0_0x0 = TVar3;
  pFVar37[-1].TotalWeight = fVar18;
  pFVar37[-1].WeightRate = fVar19;
  pFVar37[-1].Time = fVar20;
  pFVar37[-1].PreviousTime = fVar21;
  pFVar37[-1].SamplePlayRate = fVar22;
  pFVar37[-1].DeltaTimeRecord.Delta = fVar23;
  pFVar37[-1].DeltaTimeRecord.Previous = fVar24;
  pFVar37[-1].DeltaTimeRecord.bPreviousIsValid = bVar25;
  *(undefined3 *)&pFVar37[-1].DeltaTimeRecord.field_0x9 = uVar26;
  pFVar37[-1].MarkerTickRecord.PreviousMarker = FVar4;
  pFVar37[-1].MarkerTickRecord.NextMarker = FVar5;
  pFVar37[-1].PerBoneBlendData.AllocatorInstance.Data = pFVar6;
  pFVar37[-1].PerBoneBlendData.ArrayNum = iVar27;
  pFVar37[-1].PerBoneBlendData.ArrayMax = iVar28;
  pFVar37[-1].PerBoneWeightRate.AllocatorInstance.Data = pFVar7;
  pFVar37[-1].PerBoneWeightRate.ArrayNum = iVar29;
  pFVar37[-1].PerBoneWeightRate.ArrayMax = iVar30;
  if ((lVar31 >> 4) - (lVar31 >> 0x3f) < ((longlong)pFVar35 - (longlong)pFVar32) / 0x60) {
    if (pFVar32 < pFVar35) {
      *ppFVar39 = pFVar32;
      ppFVar39[1] = pFVar35;
      *(int *)(ppFVar39 + 2) = (int)local_368;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar34 <= pFVar38 + 1) goto LAB_14752ba86;
    pFVar35 = pFVar37 + -2;
    pFVar32 = pFVar38;
  }
  else {
    if (pFVar38 + 1 < pFVar34) {
      *ppFVar39 = pFVar38;
      ppFVar39[1] = pFVar37 + -2;
      *(int *)(ppFVar39 + 2) = (int)local_368;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar35 <= pFVar32) goto LAB_14752ba86;
  }
  iVar33 = (int)(((longlong)pFVar35 - (longlong)pFVar32) / 0x60) + 1;
  pFVar38 = pFVar32;
  if ((int)local_368 == 0) goto LAB_14752ba77;
  goto LAB_14752b820;
}

// IntroSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,`FBlendSpaceGrid::FindTriangleThisPointBelongsTo'::__l2::<lambda_1>_>_> @ 14752bc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,_FBlendSpaceGrid::FindTriangleThisPointBelongsTo_::__l2::<lambda_1>_>_>
          (FIndexAndDistance *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FIndexAndDistance,_public:_bool___cdecl_FBlendSpaceGrid::FindTriangleThisPointBelongsTo(UE::Math::TVector2<double>_const_&,UE::Math::TVector<double>_&,FTriangle_*_&,TArray<FTriangle_*,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FIndexAndDistance *pFVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  FIndexAndDistance *pFVar8;
  FIndexAndDistance *pFVar9;
  FIndexAndDistance *pFVar10;
  FIndexAndDistance **ppFVar11;
  FIndexAndDistance *pFVar12;
  FIndexAndDistance *pFVar13;
  FIndexAndDistance *pFVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  FIndexAndDistance *local_338;
  FIndexAndDistance *local_328;
  FIndexAndDistance *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar13 = ppFVar11[1];
      pFVar10 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar7 = (int)((longlong)pFVar13 - (longlong)pFVar10 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar14 = pFVar10;
      if ((int)local_338 != 0) {
LAB_14752bcb0:
        if (8 < iVar7) {
          uVar4 = *(undefined4 *)&pFVar14->field_0x4;
          dVar2 = pFVar14->Distance;
          pFVar8 = pFVar13 + 1;
          pFVar10 = pFVar14 + iVar7 / 2;
          iVar5 = pFVar10->Index;
          uVar6 = *(undefined4 *)&pFVar10->field_0x4;
          dVar3 = pFVar10->Distance;
          pFVar10 = pFVar14 + iVar7 / 2;
          pFVar10->Index = pFVar14->Index;
          *(undefined4 *)&pFVar10->field_0x4 = uVar4;
          pFVar10->Distance = dVar2;
          pFVar14->Index = iVar5;
          *(undefined4 *)&pFVar14->field_0x4 = uVar6;
          pFVar14->Distance = dVar3;
          pFVar10 = pFVar14;
LAB_14752bce0:
          pFVar9 = pFVar10;
          pFVar10 = pFVar9 + 1;
          if (pFVar10 <= pFVar13) goto code_r0x00014752bce9;
          goto LAB_14752bcf6;
        }
        if (pFVar14 < pFVar13) {
          pFVar1 = pFVar14 + 1;
          do {
            pFVar10 = pFVar14;
            if (pFVar1 <= pFVar13) {
              pFVar8 = pFVar1;
              if (0x3f < ((longlong)pFVar13 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar10->Distance < pFVar8->Distance) {
                    pFVar10 = pFVar8;
                  }
                  if (pFVar10->Distance <= pFVar8[1].Distance &&
                      pFVar8[1].Distance != pFVar10->Distance) {
                    pFVar10 = pFVar8 + 1;
                  }
                  if (pFVar10->Distance <= pFVar8[2].Distance &&
                      pFVar8[2].Distance != pFVar10->Distance) {
                    pFVar10 = pFVar8 + 2;
                  }
                  if (pFVar10->Distance <= pFVar8[3].Distance &&
                      pFVar8[3].Distance != pFVar10->Distance) {
                    pFVar10 = pFVar8 + 3;
                  }
                  pFVar8 = pFVar8 + 4;
                } while (pFVar8 <= pFVar13 + -3);
              }
              for (; pFVar8 <= pFVar13; pFVar8 = pFVar8 + 1) {
                if (pFVar10->Distance < pFVar8->Distance) {
                  pFVar10 = pFVar8;
                }
              }
            }
            iVar7 = pFVar10->Index;
            uVar6 = *(undefined4 *)&pFVar10->field_0x4;
            dVar2 = pFVar10->Distance;
            pFVar8 = pFVar13 + -1;
            uVar4 = *(undefined4 *)&pFVar13->field_0x4;
            dVar3 = pFVar13->Distance;
            pFVar10->Index = pFVar13->Index;
            *(undefined4 *)&pFVar10->field_0x4 = uVar4;
            pFVar10->Distance = dVar3;
            pFVar13->Index = iVar7;
            *(undefined4 *)&pFVar13->field_0x4 = uVar6;
            pFVar13->Distance = dVar2;
            pFVar13 = pFVar8;
          } while (pFVar14 < pFVar8);
        }
        goto LAB_14752bdbb;
      }
LAB_14752bdaa:
      local_338 = pFVar1;
      HeapSortInternal<FIndexAndDistance,int,FIdentityFunctor,TDereferenceWrapper<FIndexAndDistance,_FBlendSpaceGrid::FindTriangleThisPointBelongsTo_::__l2::<lambda_1>_>_>
                (pFVar10,iVar7,param_3,param_4);
LAB_14752bdbb:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014752bce9:
  if (pFVar9[1].Distance < pFVar14->Distance || pFVar9[1].Distance == pFVar14->Distance)
  goto LAB_14752bce0;
LAB_14752bcf6:
  do {
    pFVar12 = pFVar8;
    pFVar8 = pFVar12 + -1;
    if (pFVar8 <= pFVar14) break;
  } while (pFVar14->Distance < pFVar12[-1].Distance || pFVar14->Distance == pFVar12[-1].Distance);
  dVar2 = pFVar12[-1].Distance;
  if (pFVar10 <= pFVar8) {
    uVar4 = *(undefined4 *)&pFVar10->field_0x4;
    dVar3 = pFVar9[1].Distance;
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar8;
    pFVar9[1].Distance = dVar2;
    pFVar8->Index = pFVar10->Index;
    *(undefined4 *)&pFVar8->field_0x4 = uVar4;
    pFVar12[-1].Distance = dVar3;
    goto LAB_14752bce0;
  }
  uVar4 = *(undefined4 *)&pFVar14->field_0x4;
  dVar3 = pFVar14->Distance;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pFVar14 = *(undefined8 *)pFVar8;
  pFVar14->Distance = dVar2;
  pFVar8->Index = pFVar14->Index;
  *(undefined4 *)&pFVar8->field_0x4 = uVar4;
  pFVar12[-1].Distance = dVar3;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar13 - (longlong)pFVar10 & 0xfffffffffffffff0U)) {
    if (pFVar10 < pFVar13) {
      *ppFVar11 = pFVar10;
      ppFVar11[1] = pFVar13;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar8 <= pFVar14 + 1) goto LAB_14752bdbb;
    pFVar13 = pFVar12 + -2;
    pFVar10 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar8) {
      *ppFVar11 = pFVar14;
      ppFVar11[1] = pFVar12 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar13 <= pFVar10) goto LAB_14752bdbb;
  }
  iVar7 = (int)((longlong)pFVar13 - (longlong)pFVar10 >> 4) + 1;
  pFVar14 = pFVar10;
  if ((int)local_338 == 0) goto LAB_14752bdaa;
  goto LAB_14752bcb0;
}

// IntroSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,`FLineElementGenerator::Process'::__l5::<lambda_1>_>_> @ 14752beb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,_FLineElementGenerator::Process_::__l5::<lambda_1>_>_>
          (FLineVertex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLineVertex,_public:_void___cdecl_FLineElementGenerator::Process(void)_::_5_::<lambda_1>_>
          param_4)

{
  FLineVertex *pFVar1;
  FLineVertex FVar2;
  int iVar3;
  FLineVertex *pFVar4;
  FLineVertex *pFVar5;
  FLineVertex **ppFVar6;
  FLineVertex *pFVar7;
  FLineVertex *pFVar8;
  FLineVertex *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FLineVertex *local_338;
  FLineVertex *local_328;
  FLineVertex *local_320;
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
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_14752bf60:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_14752bf90:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x00014752bf99;
          goto LAB_14752bfa3;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->Position;
                  if (pFVar5->Position < pFVar4->Position) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->Position;
                  }
                  if (fVar10 < pFVar4[1].Position) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->Position;
                  if (pFVar5->Position < pFVar4[2].Position) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].Position;
                  }
                  if (fVar10 < pFVar4[3].Position) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->Position < pFVar4->Position) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14752c060;
      }
LAB_14752c04f:
      local_338 = pFVar1;
      HeapSortInternal<FLineVertex,int,FIdentityFunctor,TDereferenceWrapper<FLineVertex,_FLineElementGenerator::Process_::__l5::<lambda_1>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14752c060:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x00014752bf99:
  if (pFVar5->Position < pFVar9->Position || pFVar5->Position == pFVar9->Position)
  goto LAB_14752bf90;
LAB_14752bfa3:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->Position < pFVar4->Position || pFVar9->Position == pFVar4->Position);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_14752bf90;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14752c060;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_14752c060;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14752c04f;
  goto LAB_14752bf60;
}

// IntroSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,`UBlendSpace::GetPerBoneInterpolationData'::__l2::<lambda_1>_>_> @ 14752c150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,_UBlendSpace::GetPerBoneInterpolationData_::__l2::<lambda_1>_>_>
          (FSortedPerBoneInterpolation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSortedPerBoneInterpolation,_public:_virtual_class_TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1>___cdecl_UBlendSpace::GetPerBoneInterpolationData(USkeleton_const_*)const_::_2_::<lambda_1>_>
          param_4)

{
  FSortedPerBoneInterpolation *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FName FVar4;
  FName FVar5;
  undefined4 uVar6;
  FCompactPoseBoneIndex FVar7;
  undefined4 uVar8;
  FCompactPoseBoneIndex FVar9;
  longlong lVar10;
  int iVar11;
  FSortedPerBoneInterpolation *pFVar12;
  FSortedPerBoneInterpolation *pFVar13;
  FSortedPerBoneInterpolation *pFVar14;
  FSortedPerBoneInterpolation *pFVar15;
  FSortedPerBoneInterpolation *pFVar16;
  FSortedPerBoneInterpolation *pFVar17;
  FSortedPerBoneInterpolation **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FSortedPerBoneInterpolation *local_348;
  FSortedPerBoneInterpolation *local_338;
  FSortedPerBoneInterpolation *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_14752c220:
        if (8 < iVar11) {
          uVar6 = *(undefined4 *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8;
          FVar7 = (pFVar16->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
          pFVar14 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          FVar4 = (pFVar17->PerBoneBlend).BoneReference.BoneName;
          uVar8 = *(undefined4 *)&(pFVar17->PerBoneBlend).BoneReference.field_0x8;
          FVar9 = (pFVar17->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
          uVar2 = *(undefined8 *)&pFVar16[iVar11].PerBoneBlend.InterpolationSpeedPerSec;
          pFVar17 = pFVar16 + iVar11;
          (pFVar17->PerBoneBlend).BoneReference.BoneName =
               (pFVar16->PerBoneBlend).BoneReference.BoneName;
          *(undefined4 *)&(pFVar17->PerBoneBlend).BoneReference.field_0x8 = uVar6;
          (pFVar17->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar7;
          *(undefined8 *)&pFVar16[iVar11].PerBoneBlend.InterpolationSpeedPerSec =
               *(undefined8 *)&(pFVar16->PerBoneBlend).InterpolationSpeedPerSec;
          (pFVar16->PerBoneBlend).BoneReference.BoneName = FVar4;
          *(undefined4 *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8 = uVar8;
          (pFVar16->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar9;
          *(undefined8 *)&(pFVar16->PerBoneBlend).InterpolationSpeedPerSec = uVar2;
          pFVar17 = pFVar16;
LAB_14752c270:
          pFVar13 = pFVar17;
          pFVar17 = pFVar13 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x00014752c279;
          goto LAB_14752c290;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar14 = pFVar17, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            pFVar17 = pFVar1;
            if (*(int *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8 * 2 <=
                *(int *)&(pFVar1->PerBoneBlend).BoneReference.field_0x8 * 2) {
              pFVar17 = pFVar14;
            }
          }
          FVar4 = (pFVar14->PerBoneBlend).BoneReference.BoneName;
          uVar8 = *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8;
          FVar9 = (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
          uVar2 = *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec;
          uVar6 = *(undefined4 *)&(pFVar12->PerBoneBlend).BoneReference.field_0x8;
          FVar7 = (pFVar12->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
          (pFVar14->PerBoneBlend).BoneReference.BoneName =
               (pFVar12->PerBoneBlend).BoneReference.BoneName;
          *(undefined4 *)&(pFVar14->PerBoneBlend).BoneReference.field_0x8 = uVar6;
          (pFVar14->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar7;
          *(undefined8 *)&(pFVar14->PerBoneBlend).InterpolationSpeedPerSec =
               *(undefined8 *)&(pFVar12->PerBoneBlend).InterpolationSpeedPerSec;
          (pFVar12->PerBoneBlend).BoneReference.BoneName = FVar4;
          *(undefined4 *)&(pFVar12->PerBoneBlend).BoneReference.field_0x8 = uVar8;
          (pFVar12->PerBoneBlend).BoneReference.CachedCompactPoseIndex = FVar9;
          *(undefined8 *)&(pFVar12->PerBoneBlend).InterpolationSpeedPerSec = uVar2;
        }
        goto LAB_14752c3b8;
      }
LAB_14752c3a9:
      local_348 = pFVar1;
      HeapSortInternal<FSortedPerBoneInterpolation,int,FIdentityFunctor,TDereferenceWrapper<FSortedPerBoneInterpolation,_UBlendSpace::GetPerBoneInterpolationData_::__l2::<lambda_1>_>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_14752c3b8:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x00014752c279:
  if (*(int *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8 * 2 <=
      *(int *)&pFVar13[1].PerBoneBlend.BoneReference.field_0x8 * 2) goto LAB_14752c270;
LAB_14752c290:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar16) break;
  } while (*(int *)&pFVar15[-1].PerBoneBlend.BoneReference.field_0x8 * 2 <=
           *(int *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8 * 2);
  FVar4 = (pFVar14->PerBoneBlend).BoneReference.BoneName;
  uVar2 = *(undefined8 *)&pFVar15[-1].PerBoneBlend.BoneReference.field_0x8;
  if (pFVar17 <= pFVar14) {
    FVar5 = (pFVar17->PerBoneBlend).BoneReference.BoneName;
    uVar6 = *(undefined4 *)&pFVar13[1].PerBoneBlend.BoneReference.field_0x8;
    FVar7 = pFVar13[1].PerBoneBlend.BoneReference.CachedCompactPoseIndex;
    uVar3 = *(undefined8 *)&pFVar13[1].PerBoneBlend.InterpolationSpeedPerSec;
    (pFVar17->PerBoneBlend).BoneReference.BoneName = FVar4;
    *(undefined8 *)&pFVar13[1].PerBoneBlend.BoneReference.field_0x8 = uVar2;
    *(undefined8 *)&pFVar13[1].PerBoneBlend.InterpolationSpeedPerSec =
         *(undefined8 *)&pFVar15[-1].PerBoneBlend.InterpolationSpeedPerSec;
    (pFVar14->PerBoneBlend).BoneReference.BoneName = FVar5;
    *(undefined4 *)&pFVar15[-1].PerBoneBlend.BoneReference.field_0x8 = uVar6;
    pFVar15[-1].PerBoneBlend.BoneReference.CachedCompactPoseIndex = FVar7;
    *(undefined8 *)&pFVar15[-1].PerBoneBlend.InterpolationSpeedPerSec = uVar3;
    goto LAB_14752c270;
  }
  FVar5 = (pFVar16->PerBoneBlend).BoneReference.BoneName;
  uVar6 = *(undefined4 *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8;
  FVar7 = (pFVar16->PerBoneBlend).BoneReference.CachedCompactPoseIndex;
  uVar3 = *(undefined8 *)&(pFVar16->PerBoneBlend).InterpolationSpeedPerSec;
  lVar10 = (longlong)pFVar14 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  (pFVar16->PerBoneBlend).BoneReference.BoneName = FVar4;
  *(undefined8 *)&(pFVar16->PerBoneBlend).BoneReference.field_0x8 = uVar2;
  *(undefined8 *)&(pFVar16->PerBoneBlend).InterpolationSpeedPerSec =
       *(undefined8 *)&pFVar15[-1].PerBoneBlend.InterpolationSpeedPerSec;
  (pFVar14->PerBoneBlend).BoneReference.BoneName = FVar5;
  *(undefined4 *)&pFVar15[-1].PerBoneBlend.BoneReference.field_0x8 = uVar6;
  pFVar15[-1].PerBoneBlend.BoneReference.CachedCompactPoseIndex = FVar7;
  *(undefined8 *)&pFVar15[-1].PerBoneBlend.InterpolationSpeedPerSec = uVar3;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar14 <= pFVar16 + 1) goto LAB_14752c3b8;
    pFVar12 = pFVar15 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar14) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar15 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_14752c3b8;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_14752c3a9;
  goto LAB_14752c220;
}

// IntroSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,`FDelaunayTriangleGenerator::SortSamples'::__l2::FComparePoints>_> @ 14752c480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,_FDelaunayTriangleGenerator::SortSamples_::__l2::FComparePoints>_>
          (FVertex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVertex,_private:_void___cdecl_FDelaunayTriangleGenerator::SortSamples(void)_::_2_::FComparePoints>
          param_4)

{
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FVertex *pFVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  FVertex *pFVar16;
  FVertex *pFVar17;
  int iVar18;
  FVertex *pFVar19;
  FVertex *pFVar20;
  FVertex *pFVar21;
  FVertex *pFVar22;
  FVertex **ppFVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  FVertex *local_348;
  FVertex *local_338;
  FVertex *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppFVar23 = &local_338;
    do {
      pFVar20 = ppFVar23[1];
      pFVar19 = *ppFVar23;
      pFVar2 = ppFVar23[2];
      local_348._0_4_ = (int)pFVar2;
      iVar18 = (int)(((longlong)pFVar20 - (longlong)pFVar19) / 0x28) + 1;
      pFVar22 = pFVar19;
      if ((int)local_348 != 0) {
LAB_14752c550:
        if (8 < iVar18) {
          dVar3 = (pFVar22->Position).field0_0x0._s_0.Y;
          pFVar17 = pFVar20 + 1;
          iVar18 = iVar18 / 2;
          dVar4 = pFVar22[iVar18].Position.field0_0x0._s_0.X;
          dVar6 = pFVar22[iVar18].Position.field0_0x0._s_0.Y;
          pTVar1 = &pFVar22[iVar18].Triangles;
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          iVar12 = pTVar1->ArrayNum;
          iVar13 = pTVar1->ArrayMax;
          iVar14 = pFVar22[iVar18].SampleIndex;
          uVar15 = *(undefined4 *)&pFVar22[iVar18].field_0x24;
          pFVar22[iVar18].Position.field0_0x0._s_0.X = (pFVar22->Position).field0_0x0._s_0.X;
          pFVar22[iVar18].Position.field0_0x0._s_0.Y = dVar3;
          iVar9 = (pFVar22->Triangles).ArrayNum;
          iVar10 = (pFVar22->Triangles).ArrayMax;
          pTVar1 = &pFVar22[iVar18].Triangles;
          (pTVar1->AllocatorInstance).Data = (pFVar22->Triangles).AllocatorInstance.Data;
          pTVar1->ArrayNum = iVar9;
          pTVar1->ArrayMax = iVar10;
          uVar11 = *(undefined4 *)&pFVar22->field_0x24;
          pFVar22[iVar18].SampleIndex = pFVar22->SampleIndex;
          *(undefined4 *)&pFVar22[iVar18].field_0x24 = uVar11;
          (pFVar22->Position).field0_0x0._s_0.X = dVar4;
          (pFVar22->Position).field0_0x0._s_0.Y = dVar6;
          (pFVar22->Triangles).AllocatorInstance.Data = pFVar7;
          (pFVar22->Triangles).ArrayNum = iVar12;
          (pFVar22->Triangles).ArrayMax = iVar13;
          pFVar22->SampleIndex = iVar14;
          *(undefined4 *)&pFVar22->field_0x24 = uVar15;
          pFVar19 = pFVar22;
LAB_14752c5b0:
          pFVar16 = pFVar19;
          pFVar19 = pFVar16 + 1;
          if (pFVar19 <= pFVar20) goto code_r0x00014752c5b9;
          goto LAB_14752c5e5;
        }
        if (pFVar22 < pFVar20) {
          pFVar2 = pFVar22 + 1;
          do {
            pFVar19 = pFVar22;
            if (pFVar2 <= pFVar20) {
              pFVar17 = pFVar2;
              if (0x9f < (ulonglong)((longlong)pFVar20 + (0x28 - (longlong)pFVar2))) {
                do {
                  dVar3 = (pFVar17->Position).field0_0x0._s_0.Y;
                  dVar4 = (pFVar19->Position).field0_0x0._s_0.Y;
                  if (dVar4 == dVar3) {
                    bVar5 = (pFVar19->Position).field0_0x0._s_0.X <
                            (pFVar17->Position).field0_0x0._s_0.X;
                  }
                  else {
                    bVar5 = dVar4 < dVar3;
                  }
                  dVar3 = pFVar17[1].Position.field0_0x0._s_0.Y;
                  pFVar16 = pFVar17;
                  if (!bVar5) {
                    pFVar16 = pFVar19;
                  }
                  dVar4 = (pFVar16->Position).field0_0x0._s_0.Y;
                  if (dVar4 == dVar3) {
                    bVar5 = (pFVar16->Position).field0_0x0._s_0.X <
                            pFVar17[1].Position.field0_0x0._s_0.X;
                  }
                  else {
                    bVar5 = dVar4 < dVar3;
                  }
                  dVar3 = pFVar17[2].Position.field0_0x0._s_0.Y;
                  pFVar19 = pFVar17 + 1;
                  if (!bVar5) {
                    pFVar19 = pFVar16;
                  }
                  dVar4 = (pFVar19->Position).field0_0x0._s_0.Y;
                  if (dVar4 == dVar3) {
                    bVar5 = (pFVar19->Position).field0_0x0._s_0.X <
                            pFVar17[2].Position.field0_0x0._s_0.X;
                  }
                  else {
                    bVar5 = dVar4 < dVar3;
                  }
                  dVar3 = pFVar17[3].Position.field0_0x0._s_0.Y;
                  pFVar16 = pFVar17 + 2;
                  if (!bVar5) {
                    pFVar16 = pFVar19;
                  }
                  dVar4 = (pFVar16->Position).field0_0x0._s_0.Y;
                  if (dVar4 == dVar3) {
                    bVar5 = (pFVar16->Position).field0_0x0._s_0.X <
                            pFVar17[3].Position.field0_0x0._s_0.X;
                  }
                  else {
                    bVar5 = dVar4 < dVar3;
                  }
                  pFVar19 = pFVar17 + 3;
                  if (!bVar5) {
                    pFVar19 = pFVar16;
                  }
                  pFVar17 = pFVar17 + 4;
                } while (pFVar17 <= pFVar20 + -3);
              }
              for (; pFVar17 <= pFVar20; pFVar17 = pFVar17 + 1) {
                dVar3 = (pFVar17->Position).field0_0x0._s_0.Y;
                dVar4 = (pFVar19->Position).field0_0x0._s_0.Y;
                if (dVar4 == dVar3) {
                  bVar5 = (pFVar19->Position).field0_0x0._s_0.X <
                          (pFVar17->Position).field0_0x0._s_0.X;
                }
                else {
                  bVar5 = dVar4 < dVar3;
                }
                pFVar16 = pFVar17;
                if (!bVar5) {
                  pFVar16 = pFVar19;
                }
                pFVar19 = pFVar16;
              }
            }
            dVar3 = (pFVar19->Position).field0_0x0._s_0.X;
            dVar4 = (pFVar19->Position).field0_0x0._s_0.Y;
            pFVar17 = pFVar20 + -1;
            iVar13 = pFVar19->SampleIndex;
            uVar15 = *(undefined4 *)&pFVar19->field_0x24;
            pFVar7 = (pFVar19->Triangles).AllocatorInstance.Data;
            iVar10 = (pFVar19->Triangles).ArrayNum;
            iVar12 = (pFVar19->Triangles).ArrayMax;
            dVar6 = (pFVar20->Position).field0_0x0._s_0.Y;
            (pFVar19->Position).field0_0x0._s_0.X = (pFVar20->Position).field0_0x0._s_0.X;
            (pFVar19->Position).field0_0x0._s_0.Y = dVar6;
            iVar18 = (pFVar20->Triangles).ArrayNum;
            iVar9 = (pFVar20->Triangles).ArrayMax;
            (pFVar19->Triangles).AllocatorInstance.Data =
                 (pFVar20->Triangles).AllocatorInstance.Data;
            (pFVar19->Triangles).ArrayNum = iVar18;
            (pFVar19->Triangles).ArrayMax = iVar9;
            uVar11 = *(undefined4 *)&pFVar20->field_0x24;
            pFVar19->SampleIndex = pFVar20->SampleIndex;
            *(undefined4 *)&pFVar19->field_0x24 = uVar11;
            (pFVar20->Position).field0_0x0._s_0.X = dVar3;
            (pFVar20->Position).field0_0x0._s_0.Y = dVar4;
            (pFVar20->Triangles).AllocatorInstance.Data = pFVar7;
            (pFVar20->Triangles).ArrayNum = iVar10;
            (pFVar20->Triangles).ArrayMax = iVar12;
            pFVar20->SampleIndex = iVar13;
            *(undefined4 *)&pFVar20->field_0x24 = uVar15;
            pFVar20 = pFVar17;
          } while (pFVar22 < pFVar17);
        }
        goto LAB_14752c754;
      }
LAB_14752c745:
      local_348 = pFVar2;
      HeapSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,_FDelaunayTriangleGenerator::SortSamples_::__l2::FComparePoints>_>
                (pFVar19,iVar18,param_3,param_4);
LAB_14752c754:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_338 <= ppFVar23);
  }
  return;
code_r0x00014752c5b9:
  dVar3 = pFVar16[1].Position.field0_0x0._s_0.Y;
  dVar4 = (pFVar22->Position).field0_0x0._s_0.Y;
  if (dVar4 == dVar3) {
    bVar5 = (pFVar22->Position).field0_0x0._s_0.X < (pFVar19->Position).field0_0x0._s_0.X;
  }
  else {
    bVar5 = dVar4 < dVar3;
  }
  if (!bVar5) goto LAB_14752c5b0;
LAB_14752c5e5:
  do {
    pFVar21 = pFVar17;
    pFVar17 = pFVar21 + -1;
    if (pFVar17 <= pFVar22) break;
    dVar3 = (pFVar22->Position).field0_0x0._s_0.Y;
    dVar4 = pFVar21[-1].Position.field0_0x0._s_0.Y;
    if (dVar4 == dVar3) {
      bVar5 = (pFVar17->Position).field0_0x0._s_0.X < (pFVar22->Position).field0_0x0._s_0.X;
    }
    else {
      bVar5 = dVar4 < dVar3;
    }
  } while (!bVar5);
  dVar3 = (pFVar17->Position).field0_0x0._s_0.X;
  dVar4 = pFVar21[-1].Position.field0_0x0._s_0.Y;
  if (pFVar19 <= pFVar17) {
    dVar6 = (pFVar19->Position).field0_0x0._s_0.X;
    dVar8 = pFVar16[1].Position.field0_0x0._s_0.Y;
    pFVar7 = pFVar16[1].Triangles.AllocatorInstance.Data;
    iVar10 = pFVar16[1].Triangles.ArrayNum;
    iVar12 = pFVar16[1].Triangles.ArrayMax;
    iVar13 = pFVar16[1].SampleIndex;
    uVar15 = *(undefined4 *)&pFVar16[1].field_0x24;
    (pFVar19->Position).field0_0x0._s_0.X = dVar3;
    pFVar16[1].Position.field0_0x0._s_0.Y = dVar4;
    iVar18 = pFVar21[-1].Triangles.ArrayNum;
    iVar9 = pFVar21[-1].Triangles.ArrayMax;
    pFVar16[1].Triangles.AllocatorInstance.Data = pFVar21[-1].Triangles.AllocatorInstance.Data;
    pFVar16[1].Triangles.ArrayNum = iVar18;
    pFVar16[1].Triangles.ArrayMax = iVar9;
    uVar11 = *(undefined4 *)&pFVar21[-1].field_0x24;
    pFVar16[1].SampleIndex = pFVar21[-1].SampleIndex;
    *(undefined4 *)&pFVar16[1].field_0x24 = uVar11;
    (pFVar17->Position).field0_0x0._s_0.X = dVar6;
    pFVar21[-1].Position.field0_0x0._s_0.Y = dVar8;
    pFVar21[-1].Triangles.AllocatorInstance.Data = pFVar7;
    pFVar21[-1].Triangles.ArrayNum = iVar10;
    pFVar21[-1].Triangles.ArrayMax = iVar12;
    pFVar21[-1].SampleIndex = iVar13;
    *(undefined4 *)&pFVar21[-1].field_0x24 = uVar15;
    goto LAB_14752c5b0;
  }
  dVar6 = (pFVar22->Position).field0_0x0._s_0.X;
  dVar8 = (pFVar22->Position).field0_0x0._s_0.Y;
  pFVar7 = (pFVar22->Triangles).AllocatorInstance.Data;
  iVar10 = (pFVar22->Triangles).ArrayNum;
  iVar12 = (pFVar22->Triangles).ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  iVar13 = pFVar22->SampleIndex;
  uVar15 = *(undefined4 *)&pFVar22->field_0x24;
  (pFVar22->Position).field0_0x0._s_0.X = dVar3;
  (pFVar22->Position).field0_0x0._s_0.Y = dVar4;
  iVar18 = pFVar21[-1].Triangles.ArrayNum;
  iVar9 = pFVar21[-1].Triangles.ArrayMax;
  (pFVar22->Triangles).AllocatorInstance.Data = pFVar21[-1].Triangles.AllocatorInstance.Data;
  (pFVar22->Triangles).ArrayNum = iVar18;
  (pFVar22->Triangles).ArrayMax = iVar9;
  uVar11 = *(undefined4 *)&pFVar21[-1].field_0x24;
  pFVar22->SampleIndex = pFVar21[-1].SampleIndex;
  *(undefined4 *)&pFVar22->field_0x24 = uVar11;
  (pFVar17->Position).field0_0x0._s_0.X = dVar6;
  pFVar21[-1].Position.field0_0x0._s_0.Y = dVar8;
  pFVar21[-1].Triangles.AllocatorInstance.Data = pFVar7;
  pFVar21[-1].Triangles.ArrayNum = iVar10;
  pFVar21[-1].Triangles.ArrayMax = iVar12;
  pFVar21[-1].SampleIndex = iVar13;
  *(undefined4 *)&pFVar21[-1].field_0x24 = uVar15;
  if (((longlong)pFVar17 + (-0x28 - (longlong)pFVar22)) / 0x28 <
      ((longlong)pFVar20 - (longlong)pFVar19) / 0x28) {
    if (pFVar19 < pFVar20) {
      *ppFVar23 = pFVar19;
      ppFVar23[1] = pFVar20;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar17 <= pFVar22 + 1) goto LAB_14752c754;
    pFVar20 = pFVar21 + -2;
    pFVar19 = pFVar22;
  }
  else {
    if (pFVar22 + 1 < pFVar17) {
      *ppFVar23 = pFVar22;
      ppFVar23[1] = pFVar21 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar20 <= pFVar19) goto LAB_14752c754;
  }
  iVar18 = (int)(((longlong)pFVar20 - (longlong)pFVar19) / 0x28) + 1;
  pFVar22 = pFVar19;
  if ((int)local_348 == 0) goto LAB_14752c745;
  goto LAB_14752c550;
}

// IsObjectPtrEqual<UAnimInstance,UAnimInstance_*,0> @ 14752c9f0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimInstance,UAnimInstance_*,0>
          (TObjectPtr<UAnimInstance> *param_1,UAnimInstance **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimInstance *)0x0) {
    return *param_2 == (UAnimInstance *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UAnimInstance,UAnimInstance_const_*,0> @ 14752ca10

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimInstance,UAnimInstance_const_*,0>
          (TObjectPtr<UAnimInstance> *param_1,UAnimInstance **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimInstance *)0x0) {
    return *param_2 == (UAnimInstance *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UAnimMontage,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>,0> @ 14752ca30

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimMontage,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>,0>
          (TObjectPtr<UAnimMontage> *param_1,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr> *param_2)

{
  UAnimMontage *pUVar1;
  
  pUVar1 = (UAnimMontage *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (UAnimMontage *)0x0) {
    return pUVar1 == (UAnimMontage *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pUVar1;
}

// IsObjectPtrEqual<UAnimationAsset,UAnimationAsset_*,0> @ 14752ca70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimationAsset,UAnimationAsset_*,0>
          (TObjectPtr<UAnimationAsset> *param_1,UAnimationAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimationAsset *)0x0) {
    return *param_2 == (UAnimationAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UAnimationAsset,UAnimMontage_*,0> @ 14752ca90

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimationAsset,UAnimMontage_*,0>
          (TObjectPtr<UAnimationAsset> *param_1,UAnimMontage **param_2)

{
  if ((UAnimMontage *)(param_1->field0_0x0).DebugPtr == (UAnimMontage *)0x0) {
    return *param_2 == (UAnimMontage *)0x0;
  }
  return (UAnimMontage *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UAnimationAsset,UAnimationAsset_const_*,0> @ 14752cab0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAnimationAsset,UAnimationAsset_const_*,0>
          (TObjectPtr<UAnimationAsset> *param_1,UAnimationAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAnimationAsset *)0x0) {
    return *param_2 == (UAnimationAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCurveFloat,UCurveFloat_*,0> @ 14752cad0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCurveFloat,UCurveFloat_*,0>
          (TObjectPtr<UCurveFloat> *param_1,UCurveFloat **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCurveFloat *)0x0) {
    return *param_2 == (UCurveFloat *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UBlendProfile> @ 14752cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlendProfile * __cdecl NewObject<UBlendProfile>(UObject *param_1)

{
  UClass *pUVar1;
  UBlendProfile *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBlendProfile::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBlendProfile *)
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

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<`UE::Anim::Attributes::MirrorAttributes'::__l2::FMirrorSet>_> @ 14752ced0

/* WARNING: Removing unreachable block (ram,0x00014752cf17) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<_UE::Anim::Attributes::MirrorAttributes_::__l2::FMirrorSet>_>
          (ushort param_1,
          ForElementType<_public:_static_void___cdecl_UE::Anim::Attributes::MirrorAttributes(UE::Anim::FStackAttributeContainer_&,UMirrorDataTable_const_&,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FMirrorSet>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::
    ForElementType<`UE::Anim::Attributes::MirrorAttributes'::__l2::FMirrorSet>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<`UE::Anim::Attributes::MirrorAttributes'::__l2::FMirrorSet>_> @ 14752d300

void __cdecl
UE::Core::Private::
ReallocTo<0,TMemStackAllocator<0>::ForElementType<_UE::Anim::Attributes::MirrorAttributes_::__l2::FMirrorSet>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_public:_static_void___cdecl_UE::Anim::Attributes::MirrorAttributes(UE::Anim::FStackAttributeContainer_&,UMirrorDataTable_const_&,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FMirrorSet>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::
    ForElementType<`UE::Anim::Attributes::MirrorAttributes'::__l2::FMirrorSet>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// StaticEnum<enum_EAdditiveAnimationType> @ 14752e590

UEnum * __cdecl StaticEnum<enum_EAdditiveAnimationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveAnimationType,(UObject *)pUVar1,
                       L"EAdditiveAnimationType");
  }
  return Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton;
}

// StaticEnum<enum_EAnimAlphaInputType> @ 14752e5d0

UEnum * __cdecl StaticEnum<enum_EAnimAlphaInputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType,(UObject *)pUVar1,
                       L"EAnimAlphaInputType");
  }
  return Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton;
}

// StaticEnum<enum_EAnimInterpolationType> @ 14752e610

UEnum * __cdecl StaticEnum<enum_EAnimInterpolationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInterpolationType,(UObject *)pUVar1,
                       L"EAnimInterpolationType");
  }
  return Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton;
}

// StaticEnum<enum_EAnimPropertyAccessCallSite> @ 14752e650

UEnum * __cdecl StaticEnum<enum_EAnimPropertyAccessCallSite>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite,(UObject *)pUVar1,
                       L"EAnimPropertyAccessCallSite");
  }
  return Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.OuterSingleton;
}

// StaticEnum<enum_EBlendProfileMode> @ 14752e690

UEnum * __cdecl StaticEnum<enum_EBlendProfileMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendProfileMode,(UObject *)pUVar1,
                       L"EBlendProfileMode");
  }
  return Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton;
}

// StaticEnum<enum_EBlendSpaceAxis> @ 14752e6d0

UEnum * __cdecl StaticEnum<enum_EBlendSpaceAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpaceAxis,(UObject *)pUVar1,L"EBlendSpaceAxis"
                      );
  }
  return Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton;
}

// StaticEnum<enum_EBlendSpacePerBoneBlendMode> @ 14752e710

UEnum * __cdecl StaticEnum<enum_EBlendSpacePerBoneBlendMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode,(UObject *)pUVar1,
                       L"EBlendSpacePerBoneBlendMode");
  }
  return Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton;
}

// StaticEnum<enum_EBoneAxis> @ 14752e750

UEnum * __cdecl StaticEnum<enum_EBoneAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneAxis,(UObject *)pUVar1,L"EBoneAxis");
  }
  return Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton;
}

// StaticEnum<enum_EBoneControlSpace> @ 14752e790

UEnum * __cdecl StaticEnum<enum_EBoneControlSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneControlSpace,(UObject *)pUVar1,
                       L"EBoneControlSpace");
  }
  return Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton;
}

// StaticEnum<enum_EBoneRotationSource> @ 14752e7d0

UEnum * __cdecl StaticEnum<enum_EBoneRotationSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneRotationSource,(UObject *)pUVar1,
                       L"EBoneRotationSource");
  }
  return Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton;
}

// StaticEnum<enum_EPostCopyOperation> @ 14752e810

UEnum * __cdecl StaticEnum<enum_EPostCopyOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPostCopyOperation,(UObject *)pUVar1,
                       L"EPostCopyOperation");
  }
  return Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton;
}

// StaticEnum<enum_EPreferredTriangulationDirection> @ 14752e850

UEnum * __cdecl StaticEnum<enum_EPreferredTriangulationDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection,(UObject *)pUVar1,
                       L"EPreferredTriangulationDirection");
  }
  return Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton;
}

// StaticEnum<enum_ETransformCurveChannel> @ 14752e890

UEnum * __cdecl StaticEnum<enum_ETransformCurveChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransformCurveChannel,(UObject *)pUVar1,
                       L"ETransformCurveChannel");
  }
  return Z_Registration_Info_UEnum_ETransformCurveChannel.OuterSingleton;
}

// StaticEnum<enum_ETransitionRequestOverwriteMode> @ 14752e8d0

UEnum * __cdecl StaticEnum<enum_ETransitionRequestOverwriteMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode,(UObject *)pUVar1,
                       L"ETransitionRequestOverwriteMode");
  }
  return Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton;
}

// StaticEnum<enum_ETransitionRequestQueueMode> @ 14752e910

UEnum * __cdecl StaticEnum<enum_ETransitionRequestQueueMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode,(UObject *)pUVar1,
                       L"ETransitionRequestQueueMode");
  }
  return Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton;
}

// StaticEnum<enum_ETypeAdvanceAnim> @ 14752e950

UEnum * __cdecl StaticEnum<enum_ETypeAdvanceAnim>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETypeAdvanceAnim,(UObject *)pUVar1,
                       L"ETypeAdvanceAnim");
  }
  return Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton;
}

// StaticEnum<enum_EVectorCurveChannel> @ 14752e990

UEnum * __cdecl StaticEnum<enum_EVectorCurveChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVectorCurveChannel,(UObject *)pUVar1,
                       L"EVectorCurveChannel");
  }
  return Z_Registration_Info_UEnum_EVectorCurveChannel.OuterSingleton;
}

// StaticEnum<enum_EAxisOption::Type> @ 14752e9d0

UEnum * __cdecl StaticEnum<enum_EAxisOption::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAxisOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAxisOption,(UObject *)pUVar1,L"EAxisOption");
  }
  return Z_Registration_Info_UEnum_EAxisOption.OuterSingleton;
}

// StaticEnum<enum_EComponentType::Type> @ 14752ea10

UEnum * __cdecl StaticEnum<enum_EComponentType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EComponentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EComponentType,(UObject *)pUVar1,L"EComponentType");
  }
  return Z_Registration_Info_UEnum_EComponentType.OuterSingleton;
}

// StaticEnum<enum_ECurveBlendOption::Type> @ 14752ea50

UEnum * __cdecl StaticEnum<enum_ECurveBlendOption::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ECurveBlendOption,(UObject *)pUVar1,
                       L"ECurveBlendOption");
  }
  return Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton;
}

// StaticEnum<enum_EMontageNotifyTickType::Type> @ 14752ea90

UEnum * __cdecl StaticEnum<enum_EMontageNotifyTickType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageNotifyTickType,(UObject *)pUVar1,
                       L"EMontageNotifyTickType");
  }
  return Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton;
}

// StaticEnum<enum_ENotifyFilterType::Type> @ 14752ead0

UEnum * __cdecl StaticEnum<enum_ENotifyFilterType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyFilterType,(UObject *)pUVar1,
                       L"ENotifyFilterType");
  }
  return Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton;
}

// StaticEnum<enum_ENotifyTriggerMode::Type> @ 14752eb10

UEnum * __cdecl StaticEnum<enum_ENotifyTriggerMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyTriggerMode,(UObject *)pUVar1,
                       L"ENotifyTriggerMode");
  }
  return Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton;
}

// StaticEnum<enum_ETransitionBlendMode::Type> @ 14752eb50

UEnum * __cdecl StaticEnum<enum_ETransitionBlendMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionBlendMode,(UObject *)pUVar1,
                       L"ETransitionBlendMode");
  }
  return Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton;
}

// StaticEnum<enum_ETransitionLogicType::Type> @ 14752eb90

UEnum * __cdecl StaticEnum<enum_ETransitionLogicType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionLogicType,(UObject *)pUVar1,
                       L"ETransitionLogicType");
  }
  return Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton;
}

// Transform<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,`URawAnimSequenceTrackExtensions::GetRotationalKeys'::__l2::<lambda_1>_> @ 14752ebd0

void __cdecl
Algo::
Transform<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_&,_URawAnimSequenceTrackExtensions::GetRotationalKeys_::__l2::<lambda_1>_>
          (longlong *param_1,ForAnyElementType *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 local_res8 [8];
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  lVar4 = param_1[1];
  pfVar8 = (float *)*param_1;
  pfVar7 = pfVar8 + (longlong)(int)lVar4 * 4;
  while( true ) {
    if ((int)param_1[1] != (int)lVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TQuat<float>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pfVar8 == pfVar7) break;
    local_38 = (double)*pfVar8;
    dStack_30 = (double)pfVar8[1];
    local_28 = (double)pfVar8[2];
    dStack_20 = (double)pfVar8[3];
    if ((param_2->Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        param_2->Data + (longlong)*(int *)((longlong)&param_2[1].Data + 4) * 0x20)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)&param_2[1].Data;
    if (iVar6 == *(int *)((longlong)&param_2[1].Data + 4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,param_2,(int *)((longlong)&param_2[1].Data + 4));
      *(int *)&param_2[1].Data = iVar6;
    }
    *(int *)&param_2[1].Data = iVar6 + 1;
    pFVar2 = param_2->Data;
    pfVar8 = pfVar8 + 4;
    pFVar1 = pFVar2 + (longlong)iVar6 * 0x20;
    *(double *)pFVar1 = local_38;
    *(double *)(pFVar1 + 8) = dStack_30;
    pFVar2 = pFVar2 + (longlong)iVar6 * 0x20 + 0x10;
    *(double *)pFVar2 = local_28;
    *(double *)(pFVar2 + 8) = dStack_20;
  }
  return;
}

// Transform<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,`URawAnimSequenceTrackExtensions::GetPositionalKeys'::__l2::<lambda_1>_> @ 14752ed50

void __cdecl
Algo::
Transform<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,_URawAnimSequenceTrackExtensions::GetPositionalKeys_::__l2::<lambda_1>_>
          (undefined8 *param_1,ForAnyElementType *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  double local_38;
  double dStack_30;
  double local_28;
  
  iVar3 = *(int *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)iVar3 * 0xc);
  while( true ) {
    if (*(int *)(param_1 + 1) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar8 == puVar1) break;
    local_38 = (double)(float)*puVar8;
    dStack_30 = (double)(float)((ulonglong)*puVar8 >> 0x20);
    local_28 = (double)*(float *)(puVar8 + 1);
    if ((param_2->Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        param_2->Data + (longlong)*(int *)((longlong)&param_2[1].Data + 4) * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&param_2[1].Data;
    if (iVar7 == *(int *)((longlong)&param_2[1].Data + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,param_2,(int *)((longlong)&param_2[1].Data + 4));
      *(int *)&param_2[1].Data = iVar7;
    }
    puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    *(int *)&param_2[1].Data = iVar7 + 1;
    pFVar4 = param_2->Data;
    pFVar2 = pFVar4 + (longlong)iVar7 * 0x18;
    *(double *)pFVar2 = local_38;
    *(double *)(pFVar2 + 8) = dStack_30;
    *(double *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_28;
  }
  return;
}

// Transform<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,`URawAnimSequenceTrackExtensions::GetScaleKeys'::__l2::<lambda_1>_> @ 14752eec0

void __cdecl
Algo::
Transform<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,_URawAnimSequenceTrackExtensions::GetScaleKeys_::__l2::<lambda_1>_>
          (undefined8 *param_1,ForAnyElementType *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  double local_38;
  double dStack_30;
  double local_28;
  
  iVar3 = *(int *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)iVar3 * 0xc);
  while( true ) {
    if (*(int *)(param_1 + 1) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar8 == puVar1) break;
    local_38 = (double)(float)*puVar8;
    dStack_30 = (double)(float)((ulonglong)*puVar8 >> 0x20);
    local_28 = (double)*(float *)(puVar8 + 1);
    if ((param_2->Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        param_2->Data + (longlong)*(int *)((longlong)&param_2[1].Data + 4) * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&param_2[1].Data;
    if (iVar7 == *(int *)((longlong)&param_2[1].Data + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,param_2,(int *)((longlong)&param_2[1].Data + 4));
      *(int *)&param_2[1].Data = iVar7;
    }
    puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    *(int *)&param_2[1].Data = iVar7 + 1;
    pFVar4 = param_2->Data;
    pFVar2 = pFVar4 + (longlong)iVar7 * 0x18;
    *(double *)pFVar2 = local_38;
    *(double *)(pFVar2 + 8) = dStack_30;
    *(double *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_28;
  }
  return;
}

// operator<< @ 147534120

FArchive * __cdecl operator<<(FArchive *param_1,FBoneReference *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x178))();
  return param_1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1475404fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimSequenceBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimSequenceBase::_vector_deleting_destructor__adjustor_40__(UAnimSequenceBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimSequenceBase *)&this[-1].Notifies.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14754050c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimSequenceBase::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimSequenceBase::_vector_deleting_destructor__adjustor_48__(UAnimSequenceBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimSequenceBase *)&this[-1].Notifies,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14754051c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimStreamable::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimStreamable::_vector_deleting_destructor__adjustor_40__(UAnimStreamable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimStreamable *)&this[-1].RunningAnimPlatformData.Chunks.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14754052c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimStreamable::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimStreamable::_vector_deleting_destructor__adjustor_48__(UAnimStreamable *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimStreamable *)&this[-1].RunningAnimPlatformData,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14754053c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendProfile::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendProfile::_vector_deleting_destructor__adjustor_40__(UBlendProfile *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendProfile *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14754054c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendSpace1D::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendSpace1D::_vector_deleting_destructor__adjustor_40__(UBlendSpace1D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendSpace1D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14754055c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendSpace1D::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UBlendSpace1D::_vector_deleting_destructor__adjustor_48__(UBlendSpace1D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendSpace1D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14754056c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendSpace::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendSpace::_vector_deleting_destructor__adjustor_40__(UBlendSpace *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendSpace *)&this[-1].BlendParameters[2].Min,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14754057c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendSpace::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UBlendSpace::_vector_deleting_destructor__adjustor_48__(UBlendSpace *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBlendSpace *)&this[-1].BlendParameters[2].DisplayName.Data.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147540590

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSortedPerBoneInterpolationData,SharedPointerInternals::DefaultDeleter<FSortedPerBoneInterpolationData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSortedPerBoneInterpolationData,SharedPointerInternals::DefaultDeleter<FSortedPerBoneInterpolationData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475405d0

void * __thiscall
TThreadSingleton<FAnimTraceScratchBuffers>::_scalar_deleting_destructor_
          (TThreadSingleton<FAnimTraceScratchBuffers> *this,uint param_1)

{
  ~TThreadSingleton<FAnimTraceScratchBuffers>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540610

void * __thiscall
TThreadSingleton<FBlendSpaceScratchData>::_scalar_deleting_destructor_
          (TThreadSingleton<FBlendSpaceScratchData> *this,uint param_1)

{
  ~TThreadSingleton<FBlendSpaceScratchData>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540650

void * __thiscall
TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540690

void * __thiscall
TThreadSingleton<FSuspendCounter>::_scalar_deleting_destructor_
          (TThreadSingleton<FSuspendCounter> *this,uint param_1)

{
  ~TThreadSingleton<FSuspendCounter>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475406d0

void * __thiscall
FAnimNode_SingleNode::_scalar_deleting_destructor_(FAnimNode_SingleNode *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540710

void * __thiscall
UE::Anim::FAnimSyncGroupScope::_scalar_deleting_destructor_(FAnimSyncGroupScope *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540740

void * __thiscall
FAnimTraceScratchBuffers::_scalar_deleting_destructor_(FAnimTraceScratchBuffers *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ParentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalMorphTargetWeightCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalMorphTargetWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<FAnimTraceScratchBuffers>::~TThreadSingleton<FAnimTraceScratchBuffers>
            ((TThreadSingleton<FAnimTraceScratchBuffers> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475407d0

void * __thiscall
FBlendSpaceScratchData::_scalar_deleting_destructor_(FBlendSpaceScratchData *this,uint param_1)

{
  ForElementType<FGridBlendSample> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->RawGridSamples).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FGridBlendSample>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)(this->NewSampleDataList).AllocatorInstance.Data,
             (this->NewSampleDataList).ArrayNum);
  pFVar2 = (this->NewSampleDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)(this->OldSampleDataList).AllocatorInstance.Data,
             (this->OldSampleDataList).ArrayNum);
  pFVar2 = (this->OldSampleDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TThreadSingleton<FBlendSpaceScratchData>::~TThreadSingleton<FBlendSpaceScratchData>
            ((TThreadSingleton<FBlendSpaceScratchData> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540860

void * __thiscall
UE::Anim::FBuildRawPoseScratchArea::_scalar_deleting_destructor_
          (FBuildRawPoseScratchArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VirtualBoneCompactPoseData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RetargetTracking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::
  ~TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>
            ((TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475408c0

void * __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::_scalar_deleting_destructor_
          (FNonBlendableAttributeBlendOperator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540900

void * __thiscall
IInterpolationIndexProvider::FPerBoneInterpolationData::_scalar_deleting_destructor_
          (FPerBoneInterpolationData *this,uint param_1)

{
  *this = (FPerBoneInterpolationData)&___7FPerBoneInterpolationData_IInterpolationIndexProvider__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540940

void * __thiscall
FSortedPerBoneInterpolationData::_scalar_deleting_destructor_
          (FSortedPerBoneInterpolationData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPerBoneInterpolationData_IInterpolationIndexProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540990

void * __thiscall FSuspendCounter::_scalar_deleting_destructor_(FSuspendCounter *this,uint param_1)

{
  TThreadSingleton<FSuspendCounter>::~TThreadSingleton<FSuspendCounter>
            ((TThreadSingleton<FSuspendCounter> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475409d0

void * __thiscall
FUECompressedAnimDataMutable::_scalar_deleting_destructor_
          (FUECompressedAnimDataMutable *this,uint param_1)

{
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7ICompressedAnimData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540a40

void * __thiscall
UE::Anim::IAttributeBlendOperator::_scalar_deleting_destructor_
          (IAttributeBlendOperator *this,uint param_1)

{
  *this = (IAttributeBlendOperator)&___7IAttributeBlendOperator_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540a80

void * __thiscall
IBlendProfileInterface::_scalar_deleting_destructor_(IBlendProfileInterface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540ab0

void * __thiscall
UAnalysisProperties::_scalar_deleting_destructor_(UAnalysisProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnalysisProperties__6B_;
  pFVar1 = (this->Function).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 147540b20

void * __thiscall
UAnimSequenceBase::_scalar_deleting_destructor_(UAnimSequenceBase *this,uint param_1)

{
  ~UAnimSequenceBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540b80

void * __thiscall UAnimSet::_scalar_deleting_destructor_(UAnimSet *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAnimSet__6B_;
  *(undefined4 *)&(this->SkelMesh2LinkupCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkelMesh2LinkupCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkelMesh2LinkupCache);
  pFVar2 = (this->ForceMeshTranslationBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UseTranslationBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForceUseMeshTranslation).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneUseAnimTranslation).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAnimSetMeshLinkup,int>
            ((FAnimSetMeshLinkup *)(this->LinkupCache).AllocatorInstance.Data,
             (this->LinkupCache).ArrayNum);
  pFVar2 = (this->LinkupCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrackBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540c80

void * __thiscall
UAnimSingleNodeInstance::_scalar_deleting_destructor_(UAnimSingleNodeInstance *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimSingleNodeInstance__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostEvaluateAnimEvent);
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540cf0

void * __thiscall
UAnimStateMachineTypes::_scalar_deleting_destructor_(UAnimStateMachineTypes *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimStateMachineTypes__6B_;
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

// `scalar_deleting_destructor' @ 147540d50

void * __thiscall UAnimStreamable::_scalar_deleting_destructor_(UAnimStreamable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  DestructItems<FAnimStreamableChunk,int>
            ((FAnimStreamableChunk *)(this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data,
             (this->RunningAnimPlatformData).Chunks.ArrayNum);
  pFVar1 = (this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147540df0

void * __thiscall
UAnimationAttributeIdentifierExtensions::_scalar_deleting_destructor_
          (UAnimationAttributeIdentifierExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimationAttributeIdentifierExtensions__6B_;
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

// `scalar_deleting_destructor' @ 147540e50

void * __thiscall
UAnimationCurveIdentifierExtensions::_scalar_deleting_destructor_
          (UAnimationCurveIdentifierExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimationCurveIdentifierExtensions__6B_;
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

// `scalar_deleting_destructor' @ 147540eb0

void * __thiscall
UAssetMappingTable::_scalar_deleting_destructor_(UAssetMappingTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAssetMappingTable__6B_;
  pFVar1 = (this->MappedAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 147540f20

void * __thiscall UBlendProfile::_scalar_deleting_destructor_(UBlendProfile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendProfileInterface__;
  pFVar1 = (this->ProfileEntries).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 147540fa0

void * __thiscall
UBlendProfileProviderInterface::_scalar_deleting_destructor_
          (UBlendProfileProviderInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 147541000

void * __thiscall UBlendSpace1D::_scalar_deleting_destructor_(UBlendSpace1D *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UBlendSpace1D__6B_;
  UBlendSpace::~UBlendSpace((UBlendSpace *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147541090

void * __thiscall UBlendSpace::_scalar_deleting_destructor_(UBlendSpace *this,uint param_1)

{
  ~UBlendSpace(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475410f0

void * __thiscall UBoneMaskFilter::_scalar_deleting_destructor_(UBoneMaskFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBoneMaskFilter__6B_;
  DestructItems<FInputBlendPose,int>
            ((FInputBlendPose *)(this->BlendPoses).AllocatorInstance.Data,
             (this->BlendPoses).ArrayNum);
  pFVar1 = (this->BlendPoses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 147541170

void * __thiscall
UCachedAnimDataLibrary::_scalar_deleting_destructor_(UCachedAnimDataLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UCachedAnimDataLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1475411d0

void * __thiscall
UCurveSourceInterface::_scalar_deleting_destructor_(UCurveSourceInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 147541230

void * __thiscall
URawAnimSequenceTrackExtensions::_scalar_deleting_destructor_
          (URawAnimSequenceTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7URawAnimSequenceTrackExtensions__6B_;
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

// AddNewTrack @ 147542c00

/* WARNING: Removing unreachable block (ram,0x000147542d6e) */
/* WARNING: Removing unreachable block (ram,0x000147542d7c) */

FAnimNotifyTrack * __cdecl
AddNewTrack(TArray<FAnimNotifyTrack,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FAnimNotifyTrack *pFVar7;
  ForAnyElementType FVar8;
  FName *pFVar9;
  uint uVar10;
  FName local_res8;
  FString local_78;
  undefined1 local_68 [16];
  FName local_58;
  FName local_50;
  FName FStack_48;
  FName local_40;
  undefined8 local_38;
  FName local_30;
  undefined8 local_28;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68 = (undefined1  [16])FLinearColor::White.field0_0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FString::AppendInt(&local_78,param_1->ArrayNum + 1);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar8.Data = local_78.Data.AllocatorInstance.Data;
  }
  pFVar6 = FName::FName(&local_res8,(wchar_t *)FVar8.Data);
  auVar3 = local_68;
  pFVar9 = (FName *)(param_1->AllocatorInstance).Data;
  local_58 = *pFVar6;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  local_38 = 0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28 = 0;
  local_50.ComparisonIndex.Value = local_68._0_4_;
  local_50.Number = local_68._4_4_;
  FStack_48.ComparisonIndex.Value = local_68._8_4_;
  FStack_48.Number = local_68._12_4_;
  local_68 = auVar3;
  if (((pFVar9 <= &local_58) && (&local_58 < pFVar9 + (longlong)param_1->ArrayMax * 7)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FAnimNotifyTrack *)(*pcVar2)();
    return pFVar7;
  }
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  pFVar9 = (FName *)(pFVar1 + (longlong)(int)uVar5 * 0x38);
  *pFVar9 = local_58;
  pFVar9[1] = local_50;
  pFVar9[2] = FStack_48;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = local_40;
  pFVar9[4].ComparisonIndex.Value = (uint)local_38;
  pFVar9[4].Number = local_38._4_4_;
  pFVar9[5].ComparisonIndex = 0;
  pFVar9[5].Number = 0;
  pFVar9[5] = local_30;
  pFVar9[6].ComparisonIndex.Value = (uint)local_28;
  pFVar9[6].Number = local_28._4_4_;
  local_28 = 0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_38 = 0;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  uVar10 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FAnimNotifyTrack *)(*pcVar2)();
    return pFVar7;
  }
  return (FAnimNotifyTrack *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x38);
}

// BuildPoseFromRawData @ 14754af10

void __cdecl
BuildPoseFromRawData
          (TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2,FCompactPose *param_3,
          float param_4,EAnimInterpolationType param_5,int param_6,float param_7,FName param_8,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_9,
          TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
          *param_10)

{
  FTlsAutoCleanup FVar1;
  int iVar2;
  uint uVar3;
  FBoneContainer *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FTlsAutoCleanup *pFVar9;
  USkeleton *pUVar10;
  int iVar11;
  FTlsAutoCleanup FVar12;
  int local_res18 [2];
  int local_res20 [2];
  code *local_60;
  float *local_58;
  
  fVar6 = param_7;
  iVar2 = param_6;
  FAnimationRuntime::GetKeyIndicesFromTime
            (local_res20,local_res18,(float *)&param_6,(double)param_4,param_6,(double)param_7,
             __real_bff0000000000000);
  if (param_5 == Step) {
    param_6 = 0;
  }
  if (__real_38d1b717 <= (float)param_6) {
    if ((float)param_6 <= __real_3f7ff972) {
      iVar2 = iVar2 + -1;
      iVar11 = 1;
      if (1 < iVar2) {
        iVar11 = iVar2;
      }
      BuildPoseFromRawDataInternal<1>
                (param_1,param_2,param_3,local_res20[0],local_res18[0],(float)param_6,
                 fVar6 / (float)iVar11,param_10);
      goto LAB_14754b053;
    }
    local_res20[0] = local_res18[0];
  }
  else {
    param_6 = 0;
  }
  iVar2 = iVar2 + -1;
  iVar11 = 1;
  if (1 < iVar2) {
    iVar11 = iVar2;
  }
  BuildPoseFromRawDataInternal<0>
            (param_1,param_2,param_3,local_res20[0],local_res18[0],(float)param_6,
             fVar6 / (float)iVar11,param_10);
LAB_14754b053:
  pFVar4 = *(FBoneContainer **)&param_3->field_0x10;
  if (pFVar4->bDisableRetargeting == false) {
    local_58 = &param_7;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,
                        &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<UE::Anim::FBuildRawPoseScratchArea>::GetTlsSlot(void)'
                         ::__l2::TlsSlot);
    pUVar10 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar4->AssetSkeleton).WeakPtr);
    FVar12 = pFVar9[2];
    iVar2 = *(int *)(pFVar9 + 3);
    FVar1 = (FTlsAutoCleanup)((longlong)FVar12 + (longlong)iVar2 * 8);
    while( true ) {
      if (*(int *)(pFVar9 + 3) != iVar2) {
        param_5 = Linear;
        `TCheckedPointerIterator<UE::Anim::Retargeting::FRetargetTracking_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&param_5);
      }
      if (FVar12 == FVar1) break;
      uVar3 = *(uint *)FVar12;
      iVar11 = *(int *)((longlong)FVar12 + 4);
      uVar8 = 0;
      if ((int)uVar3 < *(int *)&param_3->field_0x8) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FAnimationRuntime::RetargetBoneTransform
                (pUVar10,&param_8,param_9,
                 (TTransform<double> *)((longlong)(int)uVar3 * 0x60 + *(longlong *)param_3),iVar11,
                 (FCompactPoseBoneIndex *)FVar12,pFVar4,false);
      FVar12 = (FTlsAutoCleanup)((longlong)FVar12 + 8);
    }
  }
  return;
}

// BuildPoseFromRawData @ 14754b1b0

void __cdecl
BuildPoseFromRawData
          (TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2,FCompactPose *param_3,
          float param_4,EAnimInterpolationType param_5,int param_6,float param_7,FName param_8,
          TMap<int,FTransformCurve_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransformCurve_const_*,0>_>
          *param_9)

{
  USkeleton *this;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  this = (USkeleton *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_3->field_0x10 + 0x40));
  if (this != (USkeleton *)0x0) {
    pTVar1 = USkeleton::GetRefLocalPoses(this,param_8);
    BuildPoseFromRawData
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pTVar1,param_9);
  }
  return;
}

// CanNotifyUseTrack @ 14754d1a0

bool __cdecl CanNotifyUseTrack(FAnimNotifyTrack *param_1,FAnimNotifyEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimLinkableElement *this;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_322bcc77;
  pFVar5 = (param_1->Notifies).AllocatorInstance.Data;
  iVar2 = (param_1->Notifies).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Notifies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimNotifyEvent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this = *(FAnimLinkableElement **)pFVar5;
    fVar6 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)param_2,Absolute);
    fVar7 = FAnimLinkableElement::GetTime(this,Absolute);
    if ((float)((uint)(fVar7 - fVar6) & uVar4) <= fVar3) {
      return false;
    }
    pFVar5 = pFVar5 + 8;
  }
  return true;
}

// EmptyLinkFunctionForGeneratedCodeAnimSequenceBase @ 147550bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSequenceBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSet @ 147550bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstance @ 147550be0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy @ 147550bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimStateMachineTypes @ 147550c00

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimStateMachineTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimStreamable @ 147550c10

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimStreamable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Base @ 147550c20

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Base(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSubsystem_NodeRelevancy @ 147550c30

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSubsystem_NodeRelevancy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSubsystem_PropertyAccess @ 147550c40

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSubsystem_PropertyAccess(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSubsystem_SharedLinkedAnimLayers @ 147550c50

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSubsystem_SharedLinkedAnimLayers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Tag @ 147550c60

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Tag(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimTypes @ 147550c70

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetMappingTable @ 147550c80

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetMappingTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAttributeIdentifier @ 147550c90

void __cdecl EmptyLinkFunctionForGeneratedCodeAttributeIdentifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendProfile @ 147550ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendSpace1D @ 147550cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendSpace1D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendSpace @ 147550cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendSpace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBoneMaskFilter @ 147550cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeBoneMaskFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBoneReference @ 147550ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeBoneReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBoneSocketReference @ 147550cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeBoneSocketReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCachedAnimData @ 147550d00

void __cdecl EmptyLinkFunctionForGeneratedCodeCachedAnimData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCachedAnimDataLibrary @ 147550d10

void __cdecl EmptyLinkFunctionForGeneratedCodeCachedAnimDataLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveIdentifier @ 147550d20

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveIdentifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCurveSourceInterface @ 147550d30

void __cdecl EmptyLinkFunctionForGeneratedCodeCurveSourceInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExposedValueHandler @ 147550d40

void __cdecl EmptyLinkFunctionForGeneratedCodeExposedValueHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputScaleBias @ 147550d50

void __cdecl EmptyLinkFunctionForGeneratedCodeInputScaleBias(void)

{
  return;
}

// ExtractTransformForKey @ 147553010

TTransform<double> * __cdecl
ExtractTransformForKey
          (TTransform<double> *__return_storage_ptr__,int param_1,FRawAnimSequenceTrack *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  uint uVar24;
  TTransform<double> *pTVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  uVar22 = DefaultScale3D.field0_0x0._s_0.Z;
  uVar21 = DefaultScale3D.field0_0x0._s_0.Y;
  uVar7 = DefaultScale3D.field0_0x0._s_0.X;
  iVar9 = (param_2->PosKeys).ArrayNum;
  iVar10 = (param_2->ScaleKeys).ArrayNum;
  uVar28 = iVar9 - 1;
  if (param_1 < (int)uVar28) {
    uVar28 = param_1;
  }
  uVar29 = (param_2->RotKeys).ArrayNum - 1;
  if (param_1 < (int)uVar29) {
    uVar29 = param_1;
  }
  if (iVar10 < 1) {
    uVar24 = 0;
    if ((int)uVar28 < iVar9) {
      uVar24 = ~uVar28 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar23 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar12 = (code *)swi(3);
        pTVar25 = (TTransform<double> *)(*pcVar12)();
        return pTVar25;
      }
    }
    lVar26 = (longlong)(int)uVar28;
    pFVar11 = (param_2->PosKeys).AllocatorInstance.Data;
    fVar1 = *(float *)(pFVar11 + lVar26 * 0xc);
    fVar2 = *(float *)(pFVar11 + lVar26 * 0xc + 4);
    fVar3 = *(float *)(pFVar11 + lVar26 * 0xc + 8);
    uVar28 = 0;
    if ((int)uVar29 < (param_2->RotKeys).ArrayNum) {
      uVar28 = ~uVar29 >> 0x1f;
    }
    if (uVar28 == 0) {
      bVar23 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar12 = (code *)swi(3);
        pTVar25 = (TTransform<double> *)(*pcVar12)();
        return pTVar25;
      }
    }
    pFVar11 = (param_2->RotKeys).AllocatorInstance.Data;
    lVar26 = (longlong)(int)uVar29;
    uVar8 = *(undefined8 *)(pFVar11 + lVar26 * 0x10 + 8);
    dVar20 = (double)(float)((ulonglong)uVar8 >> 0x20);
    auVar14._8_4_ = SUB84((double)*(float *)(pFVar11 + lVar26 * 0x10 + 4),0);
    auVar14._0_8_ = (double)*(float *)(pFVar11 + lVar26 * 0x10);
    auVar14._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar11 + lVar26 * 0x10 + 4) >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar14;
    auVar19._8_4_ = SUB84(dVar20,0);
    auVar19._0_8_ = (double)(float)uVar8;
    auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar19;
    auVar17._8_4_ = SUB84((double)fVar2,0);
    auVar17._0_8_ = (double)fVar1;
    auVar17._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar17;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)uVar7;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)uVar21;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)uVar22;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else {
    uVar24 = iVar10 - 1U;
    if (param_1 < (int)(iVar10 - 1U)) {
      uVar24 = param_1;
    }
    uVar27 = 0;
    if ((int)uVar24 < iVar10) {
      uVar27 = ~uVar24 >> 0x1f;
    }
    if (uVar27 == 0) {
      bVar23 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar12 = (code *)swi(3);
        pTVar25 = (TTransform<double> *)(*pcVar12)();
        return pTVar25;
      }
    }
    lVar26 = (longlong)(int)uVar24;
    pFVar11 = (param_2->ScaleKeys).AllocatorInstance.Data;
    fVar1 = *(float *)(pFVar11 + lVar26 * 0xc);
    fVar2 = *(float *)(pFVar11 + lVar26 * 0xc + 4);
    fVar3 = *(float *)(pFVar11 + lVar26 * 0xc + 8);
    uVar24 = 0;
    if ((int)uVar28 < (param_2->PosKeys).ArrayNum) {
      uVar24 = ~uVar28 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar23 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar12 = (code *)swi(3);
        pTVar25 = (TTransform<double> *)(*pcVar12)();
        return pTVar25;
      }
    }
    lVar26 = (longlong)(int)uVar28;
    pFVar11 = (param_2->PosKeys).AllocatorInstance.Data;
    fVar4 = *(float *)(pFVar11 + lVar26 * 0xc);
    fVar5 = *(float *)(pFVar11 + lVar26 * 0xc + 4);
    fVar6 = *(float *)(pFVar11 + lVar26 * 0xc + 8);
    uVar28 = 0;
    if ((int)uVar29 < (param_2->RotKeys).ArrayNum) {
      uVar28 = ~uVar29 >> 0x1f;
    }
    if (uVar28 == 0) {
      bVar23 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar12 = (code *)swi(3);
        pTVar25 = (TTransform<double> *)(*pcVar12)();
        return pTVar25;
      }
    }
    pFVar11 = (param_2->RotKeys).AllocatorInstance.Data;
    lVar26 = (longlong)(int)uVar29;
    uVar7 = *(undefined8 *)(pFVar11 + lVar26 * 0x10 + 8);
    dVar20 = (double)(float)((ulonglong)uVar7 >> 0x20);
    auVar13._8_4_ = SUB84((double)*(float *)(pFVar11 + lVar26 * 0x10 + 4),0);
    auVar13._0_8_ = (double)*(float *)(pFVar11 + lVar26 * 0x10);
    auVar13._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar11 + lVar26 * 0x10 + 4) >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar13;
    auVar18._8_4_ = SUB84(dVar20,0);
    auVar18._0_8_ = (double)(float)uVar7;
    auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar18;
    auVar15._8_4_ = SUB84((double)fVar5,0);
    auVar15._0_8_ = (double)fVar4;
    auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar15;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar6;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    auVar16._8_4_ = SUB84((double)fVar2,0);
    auVar16._0_8_ = (double)fVar1;
    auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar16;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return __return_storage_ptr__;
}

// FPostEvaluateAnimEvent_DelegateWrapper @ 1475533c0

void __cdecl
FPostEvaluateAnimEvent_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *this;
  UFunction *pUVar3;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar3 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,0);
  return;
}

// GetCandidateEdgeIndex @ 14755ad40

int __cdecl GetCandidateEdgeIndex(FTriangle *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FVertex *pFVar4;
  FVertex *pFVar5;
  FVertex *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  
  pFVar4 = param_1->Vertices[0];
  bVar7 = false;
  pFVar5 = param_1->Vertices[1];
  bVar8 = false;
  bVar9 = false;
  dVar1 = (pFVar4->Position).field0_0x0._s_0.X;
  dVar2 = (pFVar5->Position).field0_0x0._s_0.X;
  if (dVar1 == dVar2) {
    bVar7 = true;
  }
  else if ((pFVar5->Position).field0_0x0._s_0.Y == (pFVar4->Position).field0_0x0._s_0.Y) {
    bVar8 = true;
  }
  else {
    bVar9 = true;
  }
  pFVar6 = param_1->Vertices[2];
  dVar3 = (pFVar6->Position).field0_0x0._s_0.X;
  if (dVar2 == dVar3) {
    bVar7 = true;
    iVar11 = 0;
  }
  else if ((pFVar6->Position).field0_0x0._s_0.Y == (pFVar5->Position).field0_0x0._s_0.Y) {
    bVar8 = true;
    iVar11 = 0;
  }
  else {
    bVar9 = true;
    iVar11 = 1;
  }
  if (dVar3 != dVar1) {
    if ((pFVar4->Position).field0_0x0._s_0.Y == (pFVar6->Position).field0_0x0._s_0.Y) {
      bVar8 = true;
    }
    else {
      bVar9 = true;
      iVar11 = 2;
    }
    if (!bVar7) {
      return -1;
    }
  }
  if (!bVar8) {
    return -1;
  }
  iVar10 = -1;
  if (bVar9) {
    iVar10 = iVar11;
  }
  return iVar10;
}

// GetTriggerTimeOffsetForType @ 147563480

float __cdecl GetTriggerTimeOffsetForType(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == OffsetBefore) {
    return __real_b8d1b717;
  }
  if (param_1 != OffsetAfter) {
    if (param_1 != NoOffset) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTypes.cpp"
                         ,0x21,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    return 0.0;
  }
  return __real_38d1b717;
}

// GetTypeHash @ 1475634e0

uint __cdecl GetTypeHash(FAnimationAttributeIdentifier *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->Name;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  uVar4 = param_1->BoneIndex - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 1475635a0

uint __cdecl GetTypeHash(FAnimationCurveIdentifier *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = param_1->CurveName;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  iVar3 = (uint)param_1->Channel - (uint)param_1->Axis;
  uVar5 = 0x9e3779b9 - param_1->Channel ^ iVar3 * 0x100;
  uVar6 = (param_1->Axis - uVar5) - iVar3 ^ uVar5 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar4 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  iVar3 = uVar4 - param_1->CurveType;
  uVar5 = 0x9e3779b9 - uVar4 ^ iVar3 * 0x100;
  uVar6 = (param_1->CurveType - uVar5) - iVar3 ^ uVar5 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar5 = ((uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar5 ^ uVar5 << 8;
  uVar6 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar2 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar4 << 10;
  return (uVar6 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// SmoothWeight @ 14757a530

void __cdecl
SmoothWeight(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,bool param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_34000000;
  if (param_7 <= 0.0) {
    *param_1 = param_5;
    return;
  }
  if (param_8) {
    *param_1 = param_3;
    *param_2 = param_4;
    if ((fVar1 < param_7) && (__real_38d1b717 < __real_3ebc5ab2 / param_7)) {
      fVar3 = __real_40000000 / (__real_3ebc5ab2 / param_7);
      fVar1 = fVar3 * param_6;
      fVar2 = __real_3f800000 /
              (((fVar1 * __real_3e83b5ca + __real_3ee6ad0d) * fVar1 + __real_3f80f478) * fVar1 +
              __real_3f800000);
      fVar1 = ((*param_1 - param_5) * fVar3 + param_4) * param_6;
      *param_1 = (fVar1 + (*param_1 - param_5)) * fVar2 + param_5;
      *param_2 = (*param_2 - fVar1 * fVar3) * fVar2;
      return;
    }
    if (0.0 < param_6) {
      *param_2 = (param_5 - *param_1) / param_6;
      *param_1 = param_5;
      return;
    }
    *param_1 = param_5;
    *param_2 = 0.0;
    return;
  }
  fVar1 = param_5 - param_3;
  if (__real_322bcc77 <= fVar1 * fVar1) {
    fVar3 = param_6 * param_7;
    fVar2 = fVar3;
    if (fVar1 <= fVar3) {
      fVar2 = fVar1;
    }
    if (fVar2 <= (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000)) {
      fVar2 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    }
    param_5 = fVar2 + param_3;
  }
  *param_1 = param_5;
  return;
}

// Z_Construct_UClass_UAnalysisProperties_NoRegister @ 147582d90

UClass * __cdecl Z_Construct_UClass_UAnalysisProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnalysisProperties",
               &Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton,
               UAnalysisProperties::StaticRegisterNativesUAnalysisProperties,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnalysisProperties>,
               InternalVTableHelperCtorCaller<UAnalysisProperties>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton;
}

// Z_Construct_UClass_UAnimSequenceBase_NoRegister @ 147582e40

UClass * __cdecl Z_Construct_UClass_UAnimSequenceBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequenceBase",
               &Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton,
               UAnimSequenceBase::StaticRegisterNativesUAnimSequenceBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequenceBase>,
               InternalVTableHelperCtorCaller<UAnimSequenceBase>,local_res8,
               UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton;
}

// Z_Construct_UClass_UAnimSet_NoRegister @ 147582f00

UClass * __cdecl Z_Construct_UClass_UAnimSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSet",&Z_Registration_Info_UClass_UAnimSet.InnerSingleton,
               UAnimSet::StaticRegisterNativesUAnimSet,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimSet>,InternalVTableHelperCtorCaller<UAnimSet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSet.InnerSingleton;
}

// Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister @ 147582fb0

UClass * __cdecl Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSingleNodeInstance",
               &Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton,
               UAnimSingleNodeInstance::StaticRegisterNativesUAnimSingleNodeInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSingleNodeInstance>,
               InternalVTableHelperCtorCaller<UAnimSingleNodeInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSingleNodeInstance.InnerSingleton;
}

// Z_Construct_UClass_UAnimStateMachineTypes_NoRegister @ 147583070

UClass * __cdecl Z_Construct_UClass_UAnimStateMachineTypes_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStateMachineTypes",
               &Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton,
               UAnimStateMachineTypes::StaticRegisterNativesUAnimStateMachineTypes,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAnimStateMachineTypes>,
               InternalVTableHelperCtorCaller<UAnimStateMachineTypes>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStateMachineTypes.InnerSingleton;
}

// Z_Construct_UClass_UAnimStreamable_NoRegister @ 147583120

UClass * __cdecl Z_Construct_UClass_UAnimStreamable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStreamable",
               &Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton,
               UAnimStreamable::StaticRegisterNativesUAnimStreamable,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimStreamable>,
               InternalVTableHelperCtorCaller<UAnimStreamable>,local_res8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton;
}

// Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister @ 1475831e0

UClass * __cdecl Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAttributeIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton,
               UAnimationAttributeIdentifierExtensions::
               StaticRegisterNativesUAnimationAttributeIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationAttributeIdentifierExtensions>
               ,InternalVTableHelperCtorCaller<UAnimationAttributeIdentifierExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton;
}

// Z_Construct_UClass_UAnimationCurveIdentifierExtensions_NoRegister @ 1475831f0

UClass * __cdecl Z_Construct_UClass_UAnimationCurveIdentifierExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationCurveIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton,
               UAnimationCurveIdentifierExtensions::
               StaticRegisterNativesUAnimationCurveIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationCurveIdentifierExtensions>,
               InternalVTableHelperCtorCaller<UAnimationCurveIdentifierExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton;
}

// Z_Construct_UClass_UAssetMappingTable_NoRegister @ 147583200

UClass * __cdecl Z_Construct_UClass_UAssetMappingTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetMappingTable",
               &Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton,
               UAssetMappingTable::StaticRegisterNativesUAssetMappingTable,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetMappingTable>,
               InternalVTableHelperCtorCaller<UAssetMappingTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetMappingTable.InnerSingleton;
}

// Z_Construct_UClass_UBlendSpace1D_NoRegister @ 1475832b0

UClass * __cdecl Z_Construct_UClass_UBlendSpace1D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace1D",
               &Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton,
               UBlendSpace1D::StaticRegisterNativesUBlendSpace1D,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendSpace1D>,
               InternalVTableHelperCtorCaller<UBlendSpace1D>,local_res8,UBlendSpace::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace1D.InnerSingleton;
}

// Z_Construct_UClass_UBlendSpace_NoRegister @ 147583370

UClass * __cdecl Z_Construct_UClass_UBlendSpace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendSpace",
               &Z_Registration_Info_UClass_UBlendSpace.InnerSingleton,
               UBlendSpace::StaticRegisterNativesUBlendSpace,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendSpace>,
               InternalVTableHelperCtorCaller<UBlendSpace>,local_res8,UAnimationAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpace.InnerSingleton;
}

// Z_Construct_UClass_UBoneMaskFilter_NoRegister @ 147583430

UClass * __cdecl Z_Construct_UClass_UBoneMaskFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoneMaskFilter",
               &Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton,
               UBoneMaskFilter::StaticRegisterNativesUBoneMaskFilter,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoneMaskFilter>,
               InternalVTableHelperCtorCaller<UBoneMaskFilter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton;
}

// Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister @ 1475834e0

UClass * __cdecl Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CachedAnimDataLibrary",
               &Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton,
               UCachedAnimDataLibrary::StaticRegisterNativesUCachedAnimDataLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCachedAnimDataLibrary>,
               InternalVTableHelperCtorCaller<UCachedAnimDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCachedAnimDataLibrary.InnerSingleton;
}

// Z_Construct_UClass_UCurveSourceInterface_NoRegister @ 1475835a0

UClass * __cdecl Z_Construct_UClass_UCurveSourceInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveSourceInterface",
               &Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton,
               UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveSourceInterface>,
               InternalVTableHelperCtorCaller<UCurveSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton;
}

// Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister @ 147583660

UClass * __cdecl Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RawAnimSequenceTrackExtensions",
               &Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton,
               URawAnimSequenceTrackExtensions::StaticRegisterNativesURawAnimSequenceTrackExtensions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URawAnimSequenceTrackExtensions>,
               InternalVTableHelperCtorCaller<URawAnimSequenceTrackExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAdditiveAnimationType @ 147583670

UEnum * __cdecl Z_Construct_UEnum_Engine_EAdditiveAnimationType(void)

{
  if (Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimAlphaInputType @ 1475836b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimAlphaInputType(void)

{
  if (Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite @ 1475836f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite(void)

{
  if (Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimPropertyAccessCallSite_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimPropertyAccessCallSite.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAxisOption @ 147583730

UEnum * __cdecl Z_Construct_UEnum_Engine_EAxisOption(void)

{
  if (Z_Registration_Info_UEnum_EAxisOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAxisOption.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAxisOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAxisOption.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBoneAxis @ 147583770

UEnum * __cdecl Z_Construct_UEnum_Engine_EBoneAxis(void)

{
  if (Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBoneAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBoneControlSpace @ 1475837b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EBoneControlSpace(void)

{
  if (Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBoneRotationSource @ 1475837f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EBoneRotationSource(void)

{
  if (Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EComponentType @ 147583830

UEnum * __cdecl Z_Construct_UEnum_Engine_EComponentType(void)

{
  if (Z_Registration_Info_UEnum_EComponentType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComponentType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EComponentType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComponentType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ECurveBlendOption @ 147583870

UEnum * __cdecl Z_Construct_UEnum_Engine_ECurveBlendOption(void)

{
  if (Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton,
               &Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETransitionBlendMode @ 1475838b0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransitionBlendMode(void)

{
  if (Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode @ 1475838f0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode(void)

{
  if (Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETransitionRequestQueueMode @ 147583930

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransitionRequestQueueMode(void)

{
  if (Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETypeAdvanceAnim @ 147583970

UEnum * __cdecl Z_Construct_UEnum_Engine_ETypeAdvanceAnim(void)

{
  if (Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess @ 1475839b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.
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

// Z_Construct_UScriptStruct_FAnimNode_SingleNode @ 147583a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SingleNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNotifyTrack @ 147583ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy @ 147583b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy @ 147583bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSubsystem_Base @ 147583c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_Base(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimSubsystem_Base.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess @ 147583cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers @ 147583d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSubsystem_Tag @ 147583db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSubsystem_Tag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSubsystem_Tag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray @ 147583e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationState @ 147583eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationState.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBakedAnimationStateMachine @ 147583f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBakedAnimationStateMachine(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.InnerSingleton,
               &Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper @ 147583fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendProfileInterfaceWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBoneSocketTarget @ 147584030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneSocketTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneSocketTarget.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneSocketTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneSocketTarget.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneSocketTarget.InnerSingleton;
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

// Z_Construct_UScriptStruct_FExposedValueHandler @ 1475840b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExposedValueHandler(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExposedValueHandler.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExposedValueHandler.InnerSingleton,
               &Z_Construct_UScriptStruct_FExposedValueHandler_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExposedValueHandler.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FExposedValueHandler.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGridBlendSample @ 147584130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGridBlendSample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGridBlendSample.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGridBlendSample.InnerSingleton,
               &Z_Construct_UScriptStruct_FGridBlendSample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGridBlendSample.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGridBlendSample.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputAlphaBoolBlend @ 1475841b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputAlphaBoolBlend(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputClampConstants @ 147584230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputClampConstants(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputClampConstants.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputClampConstants.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputClampConstants_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputClampConstants.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInputClampConstants.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputClampState @ 1475842b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputClampState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputClampState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputClampState.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputClampState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputClampState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputClampState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputScaleBias @ 147584330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputScaleBias(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBias.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputScaleBias.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputScaleBias_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputScaleBias.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputScaleBias.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputScaleBiasClamp @ 1475843b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClamp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputScaleBiasClampConstants @ 147584430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClampConstants(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClampConstants.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputScaleBiasClampConstants.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClampConstants.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputScaleBiasClampConstants.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInputScaleBiasClampState @ 1475844b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputScaleBiasClampState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMarkerSyncData @ 147584530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMarkerSyncData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMarkerSyncData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMarkerSyncData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMarkerSyncData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPerBoneBlendWeights @ 1475845b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerBoneBlendWeights(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerBoneBlendWeights.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerBoneBlendWeights.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerBoneBlendWeights.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPerBoneBlendWeights.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTrackToSkeletonMap @ 147584630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackToSkeletonMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackToSkeletonMap.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackToSkeletonMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackToSkeletonMap.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTrackToSkeletonMap.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWeightedBlendSample @ 1475846b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWeightedBlendSample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWeightedBlendSample.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWeightedBlendSample.InnerSingleton,
               &Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWeightedBlendSample.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWeightedBlendSample.InnerSingleton;
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

// CopyRecords'' @ 1503e7110

void __cdecl `dynamic_atexit_destructor_for_'FExposedValueHandler::CopyRecords__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FExposedValueHandler::CopyRecords.AllocatorInstance.Data;
  if (FExposedValueHandler::CopyRecords.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FExposedValueHandler::CopyRecords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// InterpolatableTypes'' @ 1503e7130

void __cdecl `dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::InterpolatableTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Anim::AttributeTypes::InterpolatableTypes.AllocatorInstance.Data;
  if (UE::Anim::AttributeTypes::InterpolatableTypes.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Anim::AttributeTypes::InterpolatableTypes.AllocatorInstance.Data !=
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

// OnAttributeTypesChangedDelegate'' @ 1503e7150

void __cdecl
`dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate._8_8_,
             UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate._16_4_);
  if (UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate);
  return;
}

// Operators'' @ 1503e7190

void __cdecl `dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::Operators__(void)

{
  DestructItems<TUniquePtr<UE::Anim::IAttributeBlendOperator,TDefaultDelete<UE::Anim::IAttributeBlendOperator>_>,int>
            ((TUniquePtr<UE::Anim::IAttributeBlendOperator,TDefaultDelete<UE::Anim::IAttributeBlendOperator>_>
              *)UE::Anim::AttributeTypes::Operators.AllocatorInstance.Data,
             UE::Anim::AttributeTypes::Operators.ArrayNum);
  if (UE::Anim::AttributeTypes::Operators.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(UE::Anim::AttributeTypes::Operators.AllocatorInstance.Data);
    return;
  }
  return;
}

// RegisteredTypes'' @ 1503e71d0

void __cdecl `dynamic_atexit_destructor_for_'UE::Anim::AttributeTypes::RegisteredTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data;
  if (UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarAnimBonePoseISPCEnabled'' @ 1503e71f0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimBonePoseISPCEnabled__(void)

{
  CVarAnimBonePoseISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimBonePoseISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChunkSizeSeconds'' @ 1503e7210

void __cdecl _dynamic_atexit_destructor_for__CVarChunkSizeSeconds__(void)

{
  CVarChunkSizeSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChunkSizeSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMarkLayerAsGarbageOnUninitialize'' @ 1503e7230

void __cdecl
SharedLinkedAnimLayersConsoleCommands::
_dynamic_atexit_destructor_for__CVarMarkLayerAsGarbageOnUninitialize__(void)

{
  CVarMarkLayerAsGarbageOnUninitialize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMarkLayerAsGarbageOnUninitialize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordExternalMorphTargets'' @ 1503e7250

void __cdecl _dynamic_atexit_destructor_for__CVarRecordExternalMorphTargets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordExternalMorphTargets);
  return;
}

// `dynamic_atexit_destructor_for_'CompactPoseMirrorBones'' @ 1503e7270

void __cdecl
`UE::Anim::Attributes::MirrorAttributes'::__l2::
_dynamic_atexit_destructor_for__CompactPoseMirrorBones__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CompactPoseMirrorBones.AllocatorInstance.Data;
  if (CompactPoseMirrorBones.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CompactPoseMirrorBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultBlendSpaceExtractionContext'' @ 1503e7290

void __cdecl _dynamic_atexit_destructor_for__DefaultBlendSpaceExtractionContext__(void)

{
  if (DefaultBlendSpaceExtractionContext.BonesRequired.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultBlendSpaceExtractionContext.BonesRequired.AllocatorInstance.Data);
  }
  if (DefaultBlendSpaceExtractionContext.PoseCurves.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultBlendSpaceExtractionContext.PoseCurves.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DummyContainer'' @ 1503e72d0

void __cdecl UE::Anim::Private::_dynamic_atexit_destructor_for__DummyContainer__(void)

{
  DummyContainer.RetargetSourceCachedDataLUT._72_4_ = 0;
  if (DummyContainer.RetargetSourceCachedDataLUT._64_8_ != 0) {
    FMemory::Free((void *)DummyContainer.RetargetSourceCachedDataLUT._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DummyContainer.RetargetSourceCachedDataLUT);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (DummyContainer.RefPoseOverride.SharedReferenceCount.ReferenceController);
  if (DummyContainer.CurveFlags._0_8_ != 0) {
    FMemory::Free((void *)DummyContainer.CurveFlags._0_8_);
  }
  if (DummyContainer.CurveFilter._padding_ != 0) {
    FMemory::Free((void *)DummyContainer.CurveFilter._padding_);
  }
  if (DummyContainer.VirtualBoneCompactPoseData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DummyContainer.VirtualBoneCompactPoseData.AllocatorInstance.Data);
  }
  if (DummyContainer.CompactPoseParentBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(DummyContainer.CompactPoseParentBones.AllocatorInstance.Data);
  }
  if (DummyContainer.SkeletonToCompactPose.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(DummyContainer.SkeletonToCompactPose.AllocatorInstance.Data);
  }
  if (DummyContainer.CompactPoseToSkeletonIndex.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DummyContainer.CompactPoseToSkeletonIndex.AllocatorInstance.Data);
  }
  if (DummyContainer.PoseToSkeletonBoneIndexArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DummyContainer.PoseToSkeletonBoneIndexArray.AllocatorInstance.Data);
  }
  if (DummyContainer.SkeletonToPoseBoneIndexArray.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DummyContainer.SkeletonToPoseBoneIndexArray.AllocatorInstance.Data);
  }
  if (DummyContainer.BoneSwitchArray.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)DummyContainer.BoneSwitchArray.AllocatorInstance.SecondaryData);
  }
  if (DummyContainer.BoneIndicesArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DummyContainer.BoneIndicesArray.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance'' @ 1503e73c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseRotationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance'' @ 1503e73e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseScalesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance'' @ 1503e7400

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance'' @ 1503e7420

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseRotationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance'' @ 1503e7440

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseScalesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance'' @ 1503e7460

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance'' @ 1503e7480

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseRotationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance'' @ 1503e74a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseScalesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance'' @ 1503e74c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIspcTestAnimEncodingVariableKeyLerpGetPoseTranslationsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GAnimTraceNameCriticalSection'' @ 1503e74e0

void __cdecl _dynamic_atexit_destructor_for__GAnimTraceNameCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e74e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GAnimTraceNameCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'GAnimTraceNames'' @ 1503e7500

void __cdecl _dynamic_atexit_destructor_for__GAnimTraceNames__(void)

{
  GAnimTraceNames._72_4_ = 0;
  if (GAnimTraceNames._64_8_ != 0) {
    FMemory::Free((void *)GAnimTraceNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GAnimTraceNames);
  return;
}

// `dynamic_atexit_destructor_for_'GSkeletalMeshTraceAnnotations'' @ 1503e7540

void __cdecl _dynamic_atexit_destructor_for__GSkeletalMeshTraceAnnotations__(void)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&GSkeletalMeshTraceAnnotations);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimMarkerSync'' @ 1503e7560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimMarkerSync__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimMarkerSync);
  return;
}

