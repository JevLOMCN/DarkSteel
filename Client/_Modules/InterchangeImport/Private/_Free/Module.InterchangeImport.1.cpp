// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 310

// PositionCurve'' @ 141425110

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 141425130

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 141425150

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'BakeMeshes'' @ 141425170

void __cdecl UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__BakeMeshes__(void)

{
  ::FString::FString(&BakeMeshes,L"__Payload__BakeMeshes");
  atexit(_dynamic_atexit_destructor_for__BakeMeshes__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableAIFFImport'' @ 1414251a0

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableAIFFImport__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.AIFF");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_AIFF'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableAIFFImport,pwVar1,&GInterchangeEnableAIFFImport,
             L"Whether AIFF support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableAIFFImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableAIFImport'' @ 141425260

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableAIFImport__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.AIF");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_AIF'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableAIFImport,pwVar1,&GInterchangeEnableAIFImport,
             L"Whether AIF support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableAIFImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableFBXImport'' @ 141425320

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableFBXImport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableFBXImport,L"Interchange.FeatureFlags.Import.FBX",
             &GInterchangeEnableFBXImport,L"Whether FBX support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableFBXImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableFBXLevelImport'' @ 141425370

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableFBXLevelImport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableFBXLevelImport,L"Interchange.FeatureFlags.Import.FBX.ToLevel",
             &GInterchangeEnableFBXLevelImport,L"Whether support for FBX level import is enabled.",0
            );
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableFBXLevelImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableFLACImport'' @ 1414253c0

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableFLACImport__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.FLAC");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_FLAC'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableFLACImport,pwVar1,&GInterchangeEnableFLACImport,
             L"Whether FLAC support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableFLACImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableMP3Import'' @ 141425480

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableMP3Import__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.MP3");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_MP3'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableMP3Import,pwVar1,&GInterchangeEnableMP3Import,
             L"Whether MP3 support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableMP3Import__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableOGGImport'' @ 141425540

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableOGGImport__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.OGG");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_OGG'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableOGGImport,pwVar1,&GInterchangeEnableOGGImport,
             L"Whether OGG support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableOGGImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableOPUSImport'' @ 141425600

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableOPUSImport__(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&AudioFormatCVarName,L"Interchange.FeatureFlags.Import.Audio.OPUS");
      atexit(`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_OPUS'::__l2::
             _dynamic_atexit_destructor_for__AudioFormatCVarName__);
      _Init_thread_footer(&_TSS0);
    }
  }
  pwVar1 = L"";
  if (AudioFormatCVarName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)AudioFormatCVarName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableOPUSImport,pwVar1,&GInterchangeEnableOPUSImport,
             L"Whether OPUS support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableOPUSImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeEnableWAVImport'' @ 1414256c0

void __cdecl _dynamic_initializer_for__CCvarInterchangeEnableWAVImport__(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  
  pFVar1 = UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_WAV();
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeEnableWAVImport,pwVar2,&GInterchangeEnableWAVImport,
             L"Whether WAV support is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeEnableWAVImport__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeFBXTranslatorUseWorker'' @ 141425720

void __cdecl _dynamic_initializer_for__CCvarInterchangeFBXTranslatorUseWorker__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeFBXTranslatorUseWorker,
             L"Interchange.FeatureFlags.Translator.UseWorker.FBX",
             &GInterchangeFBXTranslatorUseWorker,
             L"Whether FBX translator can be execute in parallel using the InterchangeWorker process."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeFBXTranslatorUseWorker__);
  return;
}

// `dynamic_initializer_for_'DensityGridName'' @ 141425770

void __cdecl UE::Interchange::Volume::_dynamic_initializer_for__DensityGridName__(void)

{
  ::FString::FString(&DensityGridName,L"density");
  atexit(_dynamic_atexit_destructor_for__DensityGridName__);
  return;
}

// `dynamic_initializer_for_'FBXAnalyticsIdentifier'' @ 1414257a0

void __cdecl UE::Interchange::Private::_dynamic_initializer_for__FBXAnalyticsIdentifier__(void)

{
  ::FString::FString(&FBXAnalyticsIdentifier,L"Interchange.Usage.Import.FBX");
  atexit(_dynamic_atexit_destructor_for__FBXAnalyticsIdentifier__);
  return;
}

// `dynamic_initializer_for_'GlobalOffsetTransform'' @ 1414257d0

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__GlobalOffsetTransform__(void)

{
  ::FString::FString(&GlobalOffsetTransform,L"__Payload__GlobalOffsetTransform");
  atexit(_dynamic_atexit_destructor_for__GlobalOffsetTransform__);
  return;
}

// `dynamic_initializer_for_'GridNameAndComponentIndexSeparator'' @ 141425800

void __cdecl
UE::Interchange::Volume::_dynamic_initializer_for__GridNameAndComponentIndexSeparator__(void)

{
  ::FString::FString(&GridNameAndComponentIndexSeparator,L"_");
  atexit(_dynamic_atexit_destructor_for__GridNameAndComponentIndexSeparator__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 141425830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'MeshGlobalTransform'' @ 141425870

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__MeshGlobalTransform__(void)

{
  ::FString::FString(&MeshGlobalTransform,L"__Payload__MeshGlobalTransform");
  atexit(_dynamic_atexit_destructor_for__MeshGlobalTransform__);
  return;
}

// `dynamic_initializer_for_'RootJointGlobalTransform'' @ 1414258a0

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_initializer_for__RootJointGlobalTransform__(void)

{
  ::FString::FString(&RootJointGlobalTransform,L"__Payload__RootJointGlobalTransform");
  atexit(_dynamic_atexit_destructor_for__RootJointGlobalTransform__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1414258d0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 141425960

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1414259f0

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

// `dynamic_initializer_for_'VolumetricMaterial'' @ 141425a80

void __cdecl UE::Interchange::Volume::_dynamic_initializer_for__VolumetricMaterial__(void)

{
  ::FString::FString(&VolumetricMaterial,L"Volumetric_Material");
  atexit(_dynamic_atexit_destructor_for__VolumetricMaterial__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h__Script_InterchangeImport_2859461811'' @ 141425ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h__Script_InterchangeImport_2859461811__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h__Script_InterchangeImport_216051465'' @ 141425af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h__Script_InterchangeImport_216051465__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h__Script_InterchangeImport_3386553133'' @ 141425b30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h__Script_InterchangeImport_3386553133__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeLevelSequenceFactory_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslatorBase_h__Script_InterchangeImport_1652052309'' @ 141425b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslatorBase_h__Script_InterchangeImport_1652052309__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslatorBase_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIFF_h__Script_InterchangeImport_1812675728'' @ 141425bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIFF_h__Script_InterchangeImport_1812675728__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIFF_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIF_h__Script_InterchangeImport_4184515630'' @ 141425bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIF_h__Script_InterchangeImport_4184515630__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_AIF_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_FLAC_h__Script_InterchangeImport_2753750473'' @ 141425c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_FLAC_h__Script_InterchangeImport_2753750473__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_FLAC_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_MP3_h__Script_InterchangeImport_1563527867'' @ 141425c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_MP3_h__Script_InterchangeImport_1563527867__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_MP3_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OGG_h__Script_InterchangeImport_4124236107'' @ 141425cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OGG_h__Script_InterchangeImport_4124236107__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OGG_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OPUS_h__Script_InterchangeImport_1007129101'' @ 141425cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OPUS_h__Script_InterchangeImport_1007129101__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_OPUS_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h__Script_InterchangeImport_1953527026'' @ 141425d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h__Script_InterchangeImport_1953527026__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h__Script_InterchangeImport_1983451194'' @ 141425d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h__Script_InterchangeImport_1983451194__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h__Script_InterchangeImport_679613209'' @ 141425db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h__Script_InterchangeImport_679613209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h__Script_InterchangeImport_3382269647'' @ 141425df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h__Script_InterchangeImport_3382269647__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h__Script_InterchangeImport_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h__Script_InterchangeImport_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h__Script_InterchangeImport_1017222659'' @ 141425e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h__Script_InterchangeImport_1017222659__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h__Script_InterchangeImport_4206490957'' @ 141425e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h__Script_InterchangeImport_4206490957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_InterchangeAssetUserData_h__Script_InterchangeImport_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h__Script_InterchangeImport_1313496265'' @ 141425ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h__Script_InterchangeImport_1313496265__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h__Script_InterchangeImport_3283111555'' @ 141425f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h__Script_InterchangeImport_3283111555__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h__Script_InterchangeImport_2326273905'' @ 141425f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h__Script_InterchangeImport_2326273905__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h__Script_InterchangeImport_3205891996'' @ 141425f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h__Script_InterchangeImport_3205891996__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h__Script_InterchangeImport_2784589612'' @ 141425fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h__Script_InterchangeImport_2784589612__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h__Script_InterchangeImport_787013582'' @ 141426000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h__Script_InterchangeImport_787013582__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h__Script_InterchangeImport_1454444606'' @ 141426040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h__Script_InterchangeImport_1454444606__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h__Script_InterchangeImport_2789579852'' @ 141426080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h__Script_InterchangeImport_2789579852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeImport",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h__Script_InterchangeImport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_InterchangeImport'' @ 1414260c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_InterchangeImport__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x46a011ba;
  local_res8[0].DeclarationsHash = 0x281cf0b4;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_InterchangeImport,L"/Script/InterchangeImport",
             &Z_Registration_Info_UPackage__Script_InterchangeImport,local_res8);
  return;
}

// Z_Construct_UClass_UInterchangeAnimationPayloadInterface @ 14e673d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAnimationPayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton;
}

// Z_Construct_UPackage__Script_InterchangeImport @ 14e673d70

UPackage * __cdecl Z_Construct_UPackage__Script_InterchangeImport(void)

{
  if (Z_Registration_Info_UPackage__Script_InterchangeImport.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_InterchangeImport.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_InterchangeImport.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister @ 14e673f30

UClass * __cdecl Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton,
               UInterchangeFbxTranslatorSettings::
               StaticRegisterNativesUInterchangeFbxTranslatorSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFbxTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAssetUserData @ 14e6740b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetUserData.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeLevelAssetUserData @ 14e6740f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeLevelAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UInterchangeLevelAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAnimSequenceFactory @ 14e6741f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAnimSequenceFactory(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeFbxTranslator @ 14e674240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeFbxTranslator(void)

{
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton,
               &Z_Construct_UClass_UInterchangeFbxTranslator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeFbxTranslatorSettings @ 14e674280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeFbxTranslatorSettings(void)

{
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton,
               &Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton;
}

// Z_Construct_UEnum_InterchangeImport_EInterchangeCoordinateSystemPolicy @ 14e6742c0

UEnum * __cdecl Z_Construct_UEnum_InterchangeImport_EInterchangeCoordinateSystemPolicy(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.InnerSingleton,
               &Z_Construct_UEnum_InterchangeImport_EInterchangeCoordinateSystemPolicy_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.InnerSingleton;
}

// EInterchangeCoordinateSystemPolicy_StaticEnum @ 14e674310

UEnum * __cdecl EInterchangeCoordinateSystemPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeImport();
    Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeImport_EInterchangeCoordinateSystemPolicy,
                       (UObject *)pUVar1,L"EInterchangeCoordinateSystemPolicy");
  }
  return Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton;
}

// NewProp_bConvertScene_SetBit @ 14e674350

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertScene_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bForceFrontXAxis_SetBit @ 14e674360

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bForceFrontXAxis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bConvertSceneUnit_SetBit @ 14e674370

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertSceneUnit_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewProp_bKeepFbxNamespace_SetBit @ 14e674380

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bKeepFbxNamespace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bUseUfbxParser_SetBit @ 14e674390

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bUseUfbxParser_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bUsingLUFCoordinateSystem_SetBit @ 14e6743a0

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::
NewProp_bUsingLUFCoordinateSystem_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bDisplayUfbxParser_SetBit @ 14e6743b0

void __cdecl
Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bDisplayUfbxParser_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeAudioPayloadInterface @ 14e6743c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioPayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioPayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeMeshPayloadInterface @ 14e674400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeMeshPayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeLevelSequenceFactory @ 14e674440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeLevelSequenceFactory(void)

{
  if (Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton,
               &Z_Construct_UClass_UInterchangeLevelSequenceFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface @ 14e674540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface @ 14e674640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.
                OuterSingleton,
               &Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface @ 14e674750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton
               ,&Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeTexturePayloadInterface @ 14e674790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeTexturePayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioSoundWaveFactory @ 14e6747d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioSoundWaveFactory(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeGroomPayloadInterface @ 14e6748d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeGroomPayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeGroomPayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeVolumePayloadInterface @ 14e674a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeVolumePayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeVolumePayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeVariantSetPayloadInterface @ 14e674b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeVariantSetPayloadInterface(void)

{
  if (Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton,
               &Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslatorBase @ 14e674c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslatorBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslatorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_AIF @ 14e674d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_AIF(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_AIF_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_AIFF @ 14e674f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_AIFF(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_AIFF_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_FLAC @ 14e675050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_FLAC(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_FLAC_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_MP3 @ 14e675150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_MP3(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_MP3_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_OGG @ 14e675250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_OGG(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_OGG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_OPUS @ 14e675350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_OPUS(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_OPUS_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_WAV @ 14e675510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_WAV(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAudioTranslator_WAV_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeVolumeTranslatorSettings @ 14e675550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeVolumeTranslatorSettings(void)

{
  if (Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.OuterSingleton,
               &Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.OuterSingleton;
}

// NewProp_bTranslateAdjacentNumberedFiles_SetBit @ 14e675590

void __cdecl
Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_Statics::
NewProp_bTranslateAdjacentNumberedFiles_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// operator<<<FInterchangeCurve,TSizedDefaultAllocator<32>_> @ 14e6759c0

FArchive * __cdecl
operator<<<FInterchangeCurve,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FInterchangeCurve,int>
                ((FInterchangeCurve *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              FInterchangeCurve::Serialize
                        ((FInterchangeCurve *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
              DefaultConstructItems<FInterchangeCurve,int>(this,1);
              FInterchangeCurve::Serialize((FInterchangeCurve *)this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> @ 14e6759d0

FArchive * __cdecl
operator<<<FInterchangeStepCurve,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FInterchangeStepCurve *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x60);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FInterchangeStepCurve,int>
                ((FInterchangeStepCurve *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2aaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FInterchangeStepCurve::Serialize
                        ((FInterchangeStepCurve *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x60),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x860,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FInterchangeStepCurve *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60);
              DefaultConstructItems<FInterchangeStepCurve,int>(this,1);
              FInterchangeStepCurve::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int> @ 14e6761c0

void __cdecl
ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
          (void *param_1,FAnimationPayloadQuery *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int *piVar3;
  FString *this;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x10);
    piVar3 = (int *)((longlong)&(param_2->HashStringCache).field0_0x0 + 0xc);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x4c - (longlong)param_2) + (longlong)piVar3),
                       (FString *)(piVar3 + -0x13));
      FString::FString(this,(FString *)(piVar3 + -0xf));
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)piVar3[-0xb];
      iVar2 = piVar3[-8];
      pFVar1 = *(FScriptContainerElement **)(piVar3 + -7);
      this[1].Data.ArrayNum = piVar3[-9];
      this[1].Data.ArrayMax = iVar2;
      this[2].Data.AllocatorInstance.Data = pFVar1;
      iVar2 = piVar3[-4];
      this[2].Data.ArrayNum = piVar3[-5];
      this[2].Data.ArrayMax = iVar2;
      this[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this[3].Data.ArrayNum = 0;
      this[3].Data.ArrayMax = -1;
      if (*piVar3 != -1) {
        FString::FString(this + 3,(FString *)(piVar3 + -3));
      }
      this = this + 5;
      piVar3 = piVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInterchangeStepCurve,FInterchangeStepCurve,int> @ 14e676280

void __cdecl
ConstructItems<FInterchangeStepCurve,FInterchangeStepCurve,int>
          (void *param_1,FInterchangeStepCurve *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  FString *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x1c);
    lVar7 = (longlong)param_1 + (-0x18 - (longlong)param_2);
    piVar6 = &(param_2->FloatKeyValues).field0_0x0.TypedValue.ArrayNum;
    do {
      *(undefined8 *)(lVar7 + (longlong)piVar6) = 0;
      pFVar1 = (ForAnyElementType *)(lVar7 + (longlong)piVar6);
      iVar2 = piVar6[-4];
      pvVar3 = *(void **)(piVar6 + -6);
      piVar5[-5] = iVar2;
      if (iVar2 == 0) {
        piVar5[-4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar5 + -4);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 2);
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + -3);
      piVar5[-1] = 0;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      *piVar5 = -1;
      if (piVar6[1] != -1) {
        iVar2 = *piVar6;
        _Src = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->AllocatorInstance).
               Data;
        piVar5[-1] = iVar2;
        if (iVar2 == 0) {
          *piVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,0,pFVar1,iVar2,piVar5);
          memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
        }
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + 1);
      piVar5[4] = -1;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      piVar5[3] = 0;
      if (piVar6[5] != -1) {
        iVar2 = piVar6[4];
        pvVar3 = *(void **)(piVar6 + 2);
        piVar5[3] = iVar2;
        if (iVar2 == 0) {
          piVar5[4] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,0,pFVar1,iVar2,piVar5 + 4);
          memcpy(pFVar1->Data,pvVar3,(longlong)iVar2);
        }
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + 5);
      piVar5[8] = -1;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      piVar5[7] = 0;
      if (piVar6[9] != -1) {
        iVar2 = piVar6[8];
        pvVar3 = *(void **)(piVar6 + 6);
        piVar5[7] = iVar2;
        if (iVar2 == 0) {
          piVar5[8] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,0,pFVar1,iVar2,piVar5 + 8);
          memcpy(pFVar1->Data,pvVar3,(longlong)iVar2);
        }
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + 9);
      piVar5[0xc] = -1;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      piVar5[0xb] = 0;
      if (piVar6[0xd] != -1) {
        iVar2 = piVar6[0xc];
        pvVar3 = *(void **)(piVar6 + 10);
        piVar5[0xb] = iVar2;
        if (iVar2 == 0) {
          piVar5[0xc] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,0,pFVar1,iVar2,piVar5 + 0xc);
          memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 2);
        }
      }
      pFVar1 = (ForAnyElementType *)(piVar5 + 0xd);
      piVar5[0x10] = -1;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      piVar5[0xf] = 0;
      if (piVar6[0x11] != -1) {
        iVar2 = piVar6[0x10];
        pFVar4 = *(FString **)(piVar6 + 0xe);
        piVar5[0xf] = iVar2;
        if (iVar2 == 0) {
          piVar5[0x10] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar2,0,pFVar1,iVar2,piVar5 + 0x10);
          ConstructItems<FString,FString,int>(pFVar1->Data,pFVar4,iVar2);
        }
      }
      piVar5 = piVar5 + 0x18;
      piVar6 = piVar6 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWaveCue,FWaveCue,int> @ 14e676540

void __cdecl ConstructItems<FWaveCue,FWaveCue,int>(void *param_1,FWaveCue *param_2,int param_3)

{
  uint *puVar1;
  FString *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 8);
    pFVar2 = &param_2->Label;
    do {
      this[-1].Data.ArrayNum =
           *(int *)((longlong)this + (longlong)param_2 + (-8 - (longlong)param_1));
      this[-1].Data.ArrayMax = *(int *)((longlong)(pFVar2 + -1) + 0xc);
      FString::FString(this,pFVar2);
      puVar1 = (uint *)(pFVar2 + 1);
      pFVar2 = pFVar2 + 2;
      *(uint *)&this[1].Data.AllocatorInstance.Data = *puVar1;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FInterchangeCurve,int> @ 14e6765c0

void __cdecl DefaultConstructItems<FInterchangeCurve,int>(void *param_1,int param_2)

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

// DestructItems<TTuple<FString,FInterchangeAnimationPayLoadKey>,int> @ 14e6765f0

void __cdecl
DestructItems<TTuple<FString,FInterchangeAnimationPayLoadKey>,int>
          (TTuple<FString,FInterchangeAnimationPayLoadKey> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)&param_1->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x10);
    }
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Interchange::FAnimationPayloadData,int> @ 14e676640

void __cdecl
DestructItems<UE::Interchange::FAnimationPayloadData,int>
          (FAnimationPayloadData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Transforms;
    do {
      pFVar1 = (((FInterchangeAnimationPayLoadKey *)(pTVar2 + 1))->UniqueId).Data.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FInterchangeStepCurve,int>
                (*(FInterchangeStepCurve **)((longlong)(pTVar2 + -3) + 8),*(int *)(pTVar2 + -2));
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      DestructItems<FString,int>(*(FString **)((longlong)(pTVar2 + -5) + 8),*(int *)(pTVar2 + -4));
      if (*(void **)((longlong)(pTVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -5) + 8));
      }
      DestructItems<FRichCurve,int>
                (*(FRichCurve **)((longlong)(pTVar2 + -6) + 8),*(int *)(pTVar2 + -5));
      if (*(void **)((longlong)(pTVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -7) + 8));
      }
      pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 9) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Interchange::FAnimationPayloadQuery,int> @ 14e676710

void __cdecl
DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
          (FAnimationPayloadQuery *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TOptional<FString> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->HashStringCache;
    do {
      if ((*(int *)((longlong)&pTVar2->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FInterchangeAnimationPayLoadKey *)(pTVar2 + -3))->UniqueId).Data.AllocatorInstance
               .Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAnimationPayloadQuery *)(pTVar2 + -4))->SceneNodeUniqueID).Data.AllocatorInstance
               .Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInterchangeCurve,int> @ 14e676770

void __cdecl DestructItems<FInterchangeCurve,int>(FInterchangeCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FInterchangeStepCurve,int> @ 14e6767b0

void __cdecl DestructItems<FInterchangeStepCurve,int>(FInterchangeStepCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = &(param_1->StringKeyValues).field0_0x0.TypedValue.ArrayNum;
    do {
      if (piVar2[1] != -1) {
        DestructItems<FString,int>
                  ((FString *)
                   (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar2 + -2))->
                   AllocatorInstance).Data,*piVar2);
        pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar2 + -2))->AllocatorInstance)
                 .Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
      }
      if ((piVar2[-3] != -1) && (*(void **)(piVar2 + -6) != (void *)0x0)) {
        FMemory::Free(*(void **)(piVar2 + -6));
      }
      if ((piVar2[-7] != -1) && (*(void **)(piVar2 + -10) != (void *)0x0)) {
        FMemory::Free(*(void **)(piVar2 + -10));
      }
      if ((piVar2[-0xb] != -1) && (*(void **)(piVar2 + -0xe) != (void *)0x0)) {
        FMemory::Free(*(void **)(piVar2 + -0xe));
      }
      if ((piVar2[-0xf] != -1) && (*(void **)(piVar2 + -0x12) != (void *)0x0)) {
        FMemory::Free(*(void **)(piVar2 + -0x12));
      }
      if (*(void **)(piVar2 + -0x16) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar2 + -0x16));
      }
      piVar2 = piVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_>,int> @ 14e676870

void __cdecl
DestructItems<TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_>,int>
          (TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>,int> @ 14e6768b0

void __cdecl
DestructItems<TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>,int>
          (TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> *param_1,
          int param_2)

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

// DuplicateObject<UInterchangeFbxTranslatorSettings> @ 14e6768f0

UInterchangeFbxTranslatorSettings * __cdecl
DuplicateObject<UInterchangeFbxTranslatorSettings>
          (UInterchangeFbxTranslatorSettings *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UInterchangeFbxTranslatorSettings *pUVar2;
  
  pUVar1 = UInterchangeFbxTranslatorSettings::StaticClass();
  pUVar2 = (UInterchangeFbxTranslatorSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// InternalConstructor<UInterchangeAnimSequenceFactory> @ 14e677e50

void __cdecl InternalConstructor<UInterchangeAnimSequenceFactory>(FObjectInitializer *param_1)

{
  UInterchangeFactoryBase *this;
  
  this = (UInterchangeFactoryBase *)param_1->Obj;
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[2].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5].Results.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[5].Results.field0_0x0 + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    this[9]._padding_ = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UInterchangeAnimationPayloadInterface> @ 14e677fd0

void __cdecl InternalConstructor<UInterchangeAnimationPayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeAnimationPayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeAssetUserData> @ 14e678000

void __cdecl InternalConstructor<UInterchangeAssetUserData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UInterchangeAssetUserData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeAudioPayloadInterface> @ 14e678060

void __cdecl InternalConstructor<UInterchangeAudioPayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeAudioPayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeAudioSoundWaveFactory> @ 14e678090

void __cdecl InternalConstructor<UInterchangeAudioSoundWaveFactory>(FObjectInitializer *param_1)

{
  UInterchangeFactoryBase *this;
  
  this = (UInterchangeFactoryBase *)param_1->Obj;
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslatorBase> @ 14e6780d0

void __cdecl InternalConstructor<UInterchangeAudioTranslatorBase>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslatorBase::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_AIF> @ 14e678110

void __cdecl InternalConstructor<UInterchangeAudioTranslator_AIF>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_AIF::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_AIF::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_AIFF> @ 14e678150

void __cdecl InternalConstructor<UInterchangeAudioTranslator_AIFF>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_AIFF::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_AIFF::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_FLAC> @ 14e678190

void __cdecl InternalConstructor<UInterchangeAudioTranslator_FLAC>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_FLAC::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_FLAC::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_MP3> @ 14e6781d0

void __cdecl InternalConstructor<UInterchangeAudioTranslator_MP3>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_MP3::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_MP3::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_OGG> @ 14e678210

void __cdecl InternalConstructor<UInterchangeAudioTranslator_OGG>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_OGG::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_OGG::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_OPUS> @ 14e678250

void __cdecl InternalConstructor<UInterchangeAudioTranslator_OPUS>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_OPUS::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_OPUS::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeAudioTranslator_WAV> @ 14e678290

void __cdecl InternalConstructor<UInterchangeAudioTranslator_WAV>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorBase *this;
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_WAV::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_WAV::_vftable__for__IInterchangeAudioPayloadInterface__;
  }
  return;
}

// InternalConstructor<UInterchangeBlockedTexturePayloadInterface> @ 14e6782d0

void __cdecl
InternalConstructor<UInterchangeBlockedTexturePayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeBlockedTexturePayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeFbxTranslator> @ 14e678300

void __cdecl InternalConstructor<UInterchangeFbxTranslator>(FObjectInitializer *param_1)

{
  TObjectPtr<UInterchangeSourceData_const_> *pTVar1;
  longlong *plVar2;
  UInterchangeTranslatorBase *this;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FObjectInitializer *pFVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  FString *pFVar8;
  FInterchangeDispatcher *pFVar9;
  FInterchangeDispatcher *pFVar10;
  undefined8 *puVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  TObjectPtr<UInterchangeSourceData_const_>_u_0 TStack_b8;
  undefined8 uStack_b0;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FGuid FStack_78;
  TStringView<wchar_t> TStack_68;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  TStringView<wchar_t> TStack_48;
  FScriptContainerElement *pFStack_38;
  int iStack_30;
  undefined1 auStack_28 [16];
  
  this = (UInterchangeTranslatorBase *)param_1->Obj;
  if (this == (UInterchangeTranslatorBase *)0x0) {
    return;
  }
  pFVar6 = FObjectInitializer::Get();
  UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,pFVar6);
  pFVar10 = (FInterchangeDispatcher *)0x0;
  iVar15 = 0;
  this->_padding_ =
       (longlong)&UInterchangeFbxTranslator::_vftable__for__UInterchangeTranslatorBase__;
  pTVar1 = &this[1].SourceData;
  this[1]._padding_ = 0;
  this[1]._padding_ =
       (longlong)&UInterchangeFbxTranslator::_vftable__for__IInterchangeTexturePayloadInterface__;
  this[1]._padding_ =
       (longlong)&UInterchangeFbxTranslator::_vftable__for__IInterchangeMeshPayloadInterface__;
  this[1]._padding_ =
       (longlong)&UInterchangeFbxTranslator::_vftable__for__IInterchangeAnimationPayloadInterface__;
  (pTVar1->field0_0x0).DebugPtr = (UInterchangeSourceData *)0x0;
  this[1].AnalyticsHelper.Object = (FAnalyticsHelper *)0x0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined1 *)&this[1].Results.field0_0x0 = 0;
  this[1].AnalyticsHelper.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  if ((this->_padding_ & 0x30) != 0) {
    return;
  }
  FStack_78.A = 0;
  FStack_78.B = 0;
  FStack_78.C = 0;
  FStack_78.D = 0;
  FWindowsPlatformMisc::CreateGuid(&FStack_78);
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  pFVar8 = FPaths::ProjectSavedDir();
  FPaths::ConvertRelativePathToFull(&FStack_98,pFVar8);
  FStack_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_88.Data.ArrayNum = 0;
  FStack_88.Data.ArrayMax = 0;
  FGuid::AppendString(&FStack_78,&FStack_88,Base36Encoded);
  pwVar14 = L"";
  FVar12.Data = (FScriptContainerElement *)L"";
  if (FStack_98.Data.ArrayNum != 0) {
    FVar12.Data = FStack_98.Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,FVar12.Data);
  if (cVar4 == '\0') {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (FStack_98.Data.ArrayNum != 0) {
      FVar12.Data = FStack_98.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar7 + 0x120))(pIVar7,FVar12.Data);
  }
  TStack_68.DataPtr = (wchar_t *)FStack_98.Data.AllocatorInstance.Data;
  uStack_50 = 0xf;
  TStack_68.Size = FStack_98.Data.ArrayNum + -1;
  if (FStack_98.Data.ArrayNum == 0) {
    TStack_68.Size = iVar15;
  }
  pwStack_58 = L"Interchange/Fbx";
  FPaths::CombineInternal(&FStack_a8,&TStack_68,2);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (FStack_a8.Data.ArrayNum != 0) {
    FVar12.Data = FStack_a8.Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,FVar12.Data);
  if (cVar4 == '\0') {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (FStack_a8.Data.ArrayNum != 0) {
      FVar12.Data = FStack_a8.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar7 + 0x120))(pIVar7,FVar12.Data);
  }
  TStack_48.DataPtr = (wchar_t *)FStack_a8.Data.AllocatorInstance.Data;
  TStack_48.Size = FStack_a8.Data.ArrayNum + -1;
  if (FStack_a8.Data.ArrayNum == 0) {
    TStack_48.Size = iVar15;
  }
  pFStack_38 = FStack_88.Data.AllocatorInstance.Data;
  iStack_30 = FStack_88.Data.ArrayNum + -1;
  if (FStack_88.Data.ArrayNum == 0) {
    iStack_30 = iVar15;
  }
  FPaths::CombineInternal((FString *)&TStack_b8.ObjectPtr,&TStack_48,2);
  if (&pTVar1->field0_0x0 != &TStack_b8) {
    if ((pTVar1->field0_0x0).DebugPtr != (UInterchangeSourceData *)0x0) {
      FMemory::Free((pTVar1->field0_0x0).DebugPtr);
    }
    (pTVar1->field0_0x0).DebugPtr = (UInterchangeSourceData *)TStack_b8;
    *(undefined4 *)&this[1].AnalyticsHelper.Object = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)&this[1].AnalyticsHelper.Object + 4) = uStack_b0._4_4_;
    uStack_b0 = 0;
    TStack_b8.DebugPtr = (UInterchangeSourceData *)0x0;
  }
  if (TStack_b8.DebugPtr != (UInterchangeSourceData *)0x0) {
    FMemory::Free(TStack_b8.DebugPtr);
  }
  if (*(int *)&this[1].AnalyticsHelper.Object == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pTVar1->field0_0x0).DebugPtr;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,pwVar13);
  if (cVar4 == '\0') {
    if (*(int *)&this[1].AnalyticsHelper.Object != 0) {
      pwVar14 = (wchar_t *)this[1].SourceData.field0_0x0.DebugPtr;
    }
    (**(code **)((longlong)*pIVar7 + 0x120))(pIVar7,pwVar14);
  }
  if (GInterchangeFBXTranslatorUseWorker == false) goto LAB_14e690e12;
  pFVar9 = operator_new(0x90);
  if (pFVar9 != (FInterchangeDispatcher *)0x0) {
    pFVar10 = UE::Interchange::FInterchangeDispatcher::FInterchangeDispatcher
                        (pFVar9,(FString *)&this[1].SourceData,1);
  }
  plVar2 = &this[1]._padding_;
  if (plVar2 == (longlong *)auStack_28) {
    if (pFVar10 != (FInterchangeDispatcher *)0x0) {
      puVar11 = (undefined8 *)pFVar10->_padding_;
      goto LAB_14e690da4;
    }
  }
  else {
    pFVar9 = (FInterchangeDispatcher *)*plVar2;
    *plVar2 = (longlong)pFVar10;
    if (pFVar9 != (FInterchangeDispatcher *)0x0) {
      puVar11 = (undefined8 *)pFVar9->_padding_;
      pFVar10 = pFVar9;
LAB_14e690da4:
      (*(code *)*puVar11)(pFVar10);
    }
  }
  if ((FInterchangeDispatcher *)this[1]._padding_ == (FInterchangeDispatcher *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4205677812134183124>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                       ,0xd4,"Dispatcher.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::Interchange::FInterchangeDispatcher::StartProcess
              ((FInterchangeDispatcher *)this[1]._padding_);
  }
  bVar5 = UE::Interchange::FInterchangeDispatcher::IsValid
                    ((FInterchangeDispatcher *)this[1]._padding_);
  if (bVar5) {
    *(undefined1 *)&this[1].Results.field0_0x0 = 1;
  }
  else {
    puVar11 = (undefined8 *)this[1]._padding_;
    if (puVar11 != (undefined8 *)0x0) {
      this[1]._padding_ = 0;
      (**(code **)*puVar11)(puVar11,1);
    }
  }
LAB_14e690e12:
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<UInterchangeFbxTranslatorSettings> @ 14e678320

void __cdecl InternalConstructor<UInterchangeFbxTranslatorSettings>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorSettings *this;
  
  this = (UInterchangeTranslatorSettings *)param_1->Obj;
  if (this != (UInterchangeTranslatorSettings *)0x0) {
    UInterchangeTranslatorSettings::UInterchangeTranslatorSettings(this,param_1);
    *(undefined4 *)(this + 1) = 0x1000100;
    *(undefined ***)this = &___7UInterchangeFbxTranslatorSettings__6B_;
    *(undefined2 *)&this[1].field_0x4 = 0;
    this[1].field_0x7 = 1;
  }
  return;
}

// InternalConstructor<UInterchangeGroomPayloadInterface> @ 14e678360

void __cdecl InternalConstructor<UInterchangeGroomPayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeGroomPayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeLevelAssetUserData> @ 14e678390

void __cdecl InternalConstructor<UInterchangeLevelAssetUserData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UInterchangeLevelAssetUserData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeLevelSequenceFactory> @ 14e6783d0

void __cdecl InternalConstructor<UInterchangeLevelSequenceFactory>(FObjectInitializer *param_1)

{
  UInterchangeFactoryBase *this;
  
  this = (UInterchangeFactoryBase *)param_1->Obj;
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeMeshPayloadInterface> @ 14e678410

void __cdecl InternalConstructor<UInterchangeMeshPayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeMeshPayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeSlicedTexturePayloadInterface> @ 14e678440

void __cdecl
InternalConstructor<UInterchangeSlicedTexturePayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeSlicedTexturePayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeTextureLightProfilePayloadInterface> @ 14e678470

void __cdecl
InternalConstructor<UInterchangeTextureLightProfilePayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeTextureLightProfilePayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeTexturePayloadInterface> @ 14e6784a0

void __cdecl InternalConstructor<UInterchangeTexturePayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeTexturePayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeVariantSetPayloadInterface> @ 14e6784d0

void __cdecl
InternalConstructor<UInterchangeVariantSetPayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeVariantSetPayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeVolumePayloadInterface> @ 14e678500

void __cdecl InternalConstructor<UInterchangeVolumePayloadInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UInterchangeVolumePayloadInterface__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeVolumeTranslatorSettings> @ 14e678530

void __cdecl InternalConstructor<UInterchangeVolumeTranslatorSettings>(FObjectInitializer *param_1)

{
  UInterchangeTranslatorSettings *this;
  
  this = (UInterchangeTranslatorSettings *)param_1->Obj;
  if (this != (UInterchangeTranslatorSettings *)0x0) {
    UInterchangeTranslatorSettings::UInterchangeTranslatorSettings(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UInterchangeVolumeTranslatorSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactory> @ 14e678570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeFactoryBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAnimSequenceFactory::GetPrivateStaticClass();
  this = (UInterchangeFactoryBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[2].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5].Results.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[5].Results.field0_0x0 + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    *(undefined4 *)&this[9]._padding_ = 0;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
    this[9]._padding_ = 0;
    *(undefined4 *)&this[9]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAnimationPayloadInterface> @ 14e678770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAnimationPayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAnimationPayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeAnimationPayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAssetUserData> @ 14e678820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeAssetUserData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioPayloadInterface> @ 14e678900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioPayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioPayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeAudioPayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactory> @ 14e6789b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeFactoryBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioSoundWaveFactory::GetPrivateStaticClass();
  this = (UInterchangeFactoryBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslatorBase> @ 14e678a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslatorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslatorBase::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslatorBase::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIF> @ 14e678b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIF>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_AIF::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_AIF::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_AIF::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIFF> @ 14e678bf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIFF>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_AIFF::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_AIFF::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_AIFF::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_FLAC> @ 14e678cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_FLAC>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_FLAC::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_FLAC::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_FLAC::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_MP3> @ 14e678d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_MP3>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_MP3::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_MP3::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_MP3::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OGG> @ 14e678e30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OGG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_OGG::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_OGG::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_OGG::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OPUS> @ 14e678ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OPUS>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_OPUS::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_OPUS::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_OPUS::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_WAV> @ 14e678fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_WAV>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAudioTranslator_WAV::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this->_padding_ =
         (longlong)&UInterchangeAudioTranslator_WAV::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeAudioTranslator_WAV::_vftable__for__IInterchangeAudioPayloadInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeBlockedTexturePayloadInterface> @ 14e679070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeBlockedTexturePayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeBlockedTexturePayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeBlockedTexturePayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeFbxTranslator> @ 14e679120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeFbxTranslator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeTranslatorBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeFbxTranslator::GetPrivateStaticClass();
  this = (UInterchangeTranslatorBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeTranslatorBase *)0x0) {
    UInterchangeTranslatorBase::UInterchangeTranslatorBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UInterchangeFbxTranslator::_vftable__for__UInterchangeTranslatorBase__;
    this[1]._padding_ =
         (longlong)&UInterchangeFbxTranslator::_vftable__for__IInterchangeTexturePayloadInterface__;
    this[1]._padding_ =
         (longlong)&UInterchangeFbxTranslator::_vftable__for__IInterchangeMeshPayloadInterface__;
    this[1]._padding_ =
         (longlong)
         &UInterchangeFbxTranslator::_vftable__for__IInterchangeAnimationPayloadInterface__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].Results.field0_0x0 = 0;
    this[1].SourceData.field0_0x0.DebugPtr = (UInterchangeSourceData *)0x0;
    this[1].AnalyticsHelper.Object = (FAnalyticsHelper *)0x0;
    this[1].AnalyticsHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].Results.field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeFbxTranslatorSettings> @ 14e679240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeFbxTranslatorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeFbxTranslatorSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
              ((UInterchangeTranslatorSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x1000100;
    *(undefined ***)pUVar1 = &___7UInterchangeFbxTranslatorSettings__6B_;
    *(undefined2 *)&pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x7 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeGroomPayloadInterface> @ 14e679300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeGroomPayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeGroomPayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeGroomPayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeLevelAssetUserData> @ 14e6793b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeLevelAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeLevelAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeLevelAssetUserData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeLevelSequenceFactory> @ 14e679470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeLevelSequenceFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeFactoryBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeLevelSequenceFactory::GetPrivateStaticClass();
  this = (UInterchangeFactoryBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangeFactoryBase *)0x0) {
    UInterchangeFactoryBase::UInterchangeFactoryBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeMeshPayloadInterface> @ 14e679520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeMeshPayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeMeshPayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeMeshPayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeSlicedTexturePayloadInterface> @ 14e6795d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeSlicedTexturePayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeSlicedTexturePayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeSlicedTexturePayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeTextureLightProfilePayloadInterface> @ 14e679680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeTextureLightProfilePayloadInterface>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeTextureLightProfilePayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeTextureLightProfilePayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeTexturePayloadInterface> @ 14e679730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeTexturePayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeTexturePayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeTexturePayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeVariantSetPayloadInterface> @ 14e6797e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeVariantSetPayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeVariantSetPayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeVariantSetPayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeVolumePayloadInterface> @ 14e679890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeVolumePayloadInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeVolumePayloadInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeVolumePayloadInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeVolumeTranslatorSettings> @ 14e679940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeVolumeTranslatorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeVolumeTranslatorSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
              ((UInterchangeTranslatorSettings *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UInterchangeVolumeTranslatorSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UInterchangeAnimationTrackSetNode> @ 14e67ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAnimationTrackSetNode * __cdecl
NewObject<UInterchangeAnimationTrackSetNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeAnimationTrackSetNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeAnimationTrackSetNode *)
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

// NewObject<UInterchangeSkeletalAnimationTrackNode> @ 14e67aec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletalAnimationTrackNode * __cdecl
NewObject<UInterchangeSkeletalAnimationTrackNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeSkeletalAnimationTrackNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeSkeletalAnimationTrackNode *)
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

// NewObject<UInterchangeTransformAnimationTrackNode> @ 14e67af60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTransformAnimationTrackNode * __cdecl
NewObject<UInterchangeTransformAnimationTrackNode>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeTransformAnimationTrackNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeTransformAnimationTrackNode *)
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

// NewObject<USoundWave> @ 14e67b000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundWave * __cdecl
NewObject<USoundWave>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USoundWave *pUVar2;
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
  pUVar1 = Z_Construct_UClass_USoundWave_NoRegister();
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
  pUVar2 = (USoundWave *)
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

// StaticEnum<enum_EInterchangeCoordinateSystemPolicy> @ 14e67b590

UEnum * __cdecl StaticEnum<enum_EInterchangeCoordinateSystemPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeImport();
    Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeImport_EInterchangeCoordinateSystemPolicy,
                       (UObject *)pUVar1,L"EInterchangeCoordinateSystemPolicy");
  }
  return Z_Registration_Info_UEnum_EInterchangeCoordinateSystemPolicy.OuterSingleton;
}

// TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_> @ 14e67b650

TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_public:_virtual_struct_TOptional<UE::Interchange::FMeshPayloadData>___cdecl_UInterchangeFbxTranslator::GetMeshPayloadData(FInterchangeMeshPayLoadKey_const_&,UE::Interchange::FAttributeStorage_const_&)const_::_7_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetMeshPayloadData_::__l7::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_public:_virtual_struct_TOptional<UE::Interchange::FMeshPayloadData>___cdecl_UInterchangeFbxTranslator::GetMeshPayloadData(FInterchangeMeshPayLoadKey_const_&,UE::Interchange::FAttributeStorage_const_&)const_::_7_::<lambda_2>_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::`7'::<lambda_2>_>
        ::_vftable_;
  *(UInterchangeFbxTranslator **)((longlong)this + 0x18) = (param_1->Functor).__this;
  *(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 0x20) =
       (param_1->Functor).Promise.Object;
  pTVar1 = (param_1->Functor).Promise.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x28) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x30),&(param_1->Functor).PayLoadKey.UniqueId);
  *(EInterchangeMeshPayLoadType *)((longlong)this + 0x40) = (param_1->Functor).PayLoadKey.Type;
  *(int *)((longlong)this + 0x44) = (param_1->Functor).PayLoadKey.FrameNumber;
  *(UInterchangeFbxTranslator **)((longlong)this + 0x48) =
       (param_1->Functor).OnPayloadReadyClosure.__this;
  *(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 0x50) =
       (param_1->Functor).OnPayloadReadyClosure.Promise.Object;
  pTVar1 = (param_1->Functor).OnPayloadReadyClosure.Promise.SharedReferenceCount.ReferenceController
  ;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x58) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x60),
                     &(param_1->Functor).OnPayloadReadyClosure.PayLoadKey.UniqueId);
  *(EInterchangeMeshPayLoadType *)((longlong)this + 0x70) =
       (param_1->Functor).OnPayloadReadyClosure.PayLoadKey.Type;
  *(int *)((longlong)this + 0x74) = (param_1->Functor).OnPayloadReadyClosure.PayLoadKey.FrameNumber;
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_> @ 14e67b720

TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_public:_virtual_class_TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>___cdecl_UInterchangeFbxTranslator::GetAnimationPayloadData(TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_UInterchangeFbxTranslator::GetAnimationPayloadData_::__l18::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,_public:_virtual_class_TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>___cdecl_UInterchangeFbxTranslator::GetAnimationPayloadData(TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_2>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FAnimationPayloadQuery *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`18'::<lambda_2>_>
        ::_vftable_;
  *(UInterchangeFbxTranslator **)((longlong)this + 0x18) = (param_1->Functor).__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).PayloadQueries.ArrayNum;
  pFVar3 = (FAnimationPayloadQuery *)(param_1->Functor).PayloadQueries.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x2c));
    ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  *(TArray<TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>,TSizedDefaultAllocator<32>_>
    **)((longlong)this + 0x38) = (param_1->Functor).AnimationPayloadDataPromises;
  return this;
}

// ~TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1> @ 14e691300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData_::__l9::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0> @ 14e691320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UInterchangeAnimSequenceFactory::CreatePayloadTasks_::__l14::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1> @ 14e691340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1>
::
~TFunction_OwnedObject<_UInterchangeAnimSequenceFactory::CreatePayloadTasks_::__l24::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`24'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0> @ 14e691380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData_::__l12::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`12'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0> @ 14e6913a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData_::__l13::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`13'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694c90

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslatorBase::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslatorBase::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslatorBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslatorBase *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694ca0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_AIF::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_AIF::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_AIF *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_AIF *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694cb0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_AIFF::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_AIFF::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_AIFF *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_AIFF *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694cc0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_FLAC::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_FLAC::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_FLAC *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_FLAC *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694cd0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_MP3::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_MP3::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_MP3 *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_MP3 *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694ce0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_OGG::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_OGG::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_OGG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_OGG *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694cf0

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_OPUS::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_OPUS::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_OPUS *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_OPUS *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694d00

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeAudioTranslator_WAV::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeAudioTranslator_WAV::_vector_deleting_destructor__adjustor_72__
          (UInterchangeAudioTranslator_WAV *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeAudioTranslator_WAV *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14e694d10

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeFbxTranslator::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeFbxTranslator::_vector_deleting_destructor__adjustor_72__
          (UInterchangeFbxTranslator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UInterchangeFbxTranslator *)&this[-1].ResultFolder,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 14e694d20

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeFbxTranslator::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeFbxTranslator::_vector_deleting_destructor__adjustor_80__
          (UInterchangeFbxTranslator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeFbxTranslator *)&this[-1].bUseWorkerImport,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{88}' @ 14e694d30

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeFbxTranslator::`vector deleting
   destructor'`adjustor{88}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeFbxTranslator::_vector_deleting_destructor__adjustor_88__
          (UInterchangeFbxTranslator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeFbxTranslator *)&this[-1].CacheFbxTranslatorSettings,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e694d40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x58));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694db0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            (*(FAnimationPayloadQuery **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694e00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((*(int *)((longlong)this + 0x6c) != -1) && (*(void **)((longlong)this + 0x60) != (void *)0x0))
  {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__PEBM_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`24'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`12'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e694fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`13'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695010

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695050

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695090

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6950d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695110

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FInterchangeTaskLambda,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FInterchangeTaskLambda,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695150

void * __thiscall
UE::Interchange::FInterchangeTaskLambda::_scalar_deleting_destructor_
          (FInterchangeTaskLambda *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->ExecuteLambda != 0) {
    plVar1 = *(longlong **)&(this->ExecuteLambda).field_0x28;
    plVar2 = (longlong *)&(this->ExecuteLambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6951b0

void * __thiscall
UE::Interchange::FJsonFBXLoadSourceCmd::_scalar_deleting_destructor_
          (FJsonFBXLoadSourceCmd *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695210

void * __thiscall
UE::Interchange::FJsonFetchAnimationQueriesCmd::_scalar_deleting_destructor_
          (FJsonFetchAnimationQueriesCmd *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->QueriesJsonString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695270

void * __thiscall
UE::Interchange::FJsonFetchMeshPayloadCmd::_scalar_deleting_destructor_
          (FJsonFetchMeshPayloadCmd *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6952d0

void * __thiscall
UE::Interchange::FJsonFetchPayloadCmd::_scalar_deleting_destructor_
          (FJsonFetchPayloadCmd *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PayloadKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TranslatorID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695330

void * __thiscall
UE::Interchange::FJsonLoadSourceCmd::_scalar_deleting_destructor_
          (FJsonLoadSourceCmd *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SourceFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TranslatorID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695390

void * __thiscall
IInterchangeAnimationPayloadInterface::_scalar_deleting_destructor_
          (IInterchangeAnimationPayloadInterface *this,uint param_1)

{
  *this = (IInterchangeAnimationPayloadInterface)&___7IInterchangeAnimationPayloadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6953d0

void * __thiscall
IInterchangeAudioPayloadInterface::_scalar_deleting_destructor_
          (IInterchangeAudioPayloadInterface *this,uint param_1)

{
  *this = (IInterchangeAudioPayloadInterface)&___7IInterchangeAudioPayloadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695410

void * __thiscall
IInterchangeMeshPayloadInterface::_scalar_deleting_destructor_
          (IInterchangeMeshPayloadInterface *this,uint param_1)

{
  *this = (IInterchangeMeshPayloadInterface)&___7IInterchangeMeshPayloadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695450

void * __thiscall
IInterchangeTexturePayloadInterface::_scalar_deleting_destructor_
          (IInterchangeTexturePayloadInterface *this,uint param_1)

{
  *this = (IInterchangeTexturePayloadInterface)&___7IInterchangeTexturePayloadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695490

void * __thiscall
UE::Interchange::IJsonCmdBase::_scalar_deleting_destructor_(IJsonCmdBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6954c0

void * __thiscall
UInterchangeAnimSequenceFactory::_scalar_deleting_destructor_
          (UInterchangeAnimSequenceFactory *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneAnimationPayloadResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneAnimationPayloadResults);
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneAnimationPayloadQueries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneAnimationPayloadQueries);
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey);
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MorphTargetData).CurvesPayloads.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MorphTargetData);
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneTrackData);
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1d8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6955e0

void * __thiscall
UInterchangeAnimationPayloadInterface::_scalar_deleting_destructor_
          (UInterchangeAnimationPayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695640

void * __thiscall
UInterchangeAssetUserData::_scalar_deleting_destructor_
          (UInterchangeAssetUserData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAssetUserData__6B_;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6956d0

void * __thiscall
UInterchangeAudioPayloadInterface::_scalar_deleting_destructor_
          (UInterchangeAudioPayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695730

void * __thiscall
UInterchangeAudioSoundWaveFactory::_scalar_deleting_destructor_
          (UInterchangeAudioSoundWaveFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAudioSoundWaveFactory__6B_;
  pFVar1 = (this->ComponentsToRestart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6957a0

void * __thiscall
UInterchangeAudioTranslatorBase::_scalar_deleting_destructor_
          (UInterchangeAudioTranslatorBase *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695810

void * __thiscall
UInterchangeAudioTranslator_AIF::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_AIF *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695880

void * __thiscall
UInterchangeAudioTranslator_AIFF::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_AIFF *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6958f0

void * __thiscall
UInterchangeAudioTranslator_FLAC::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_FLAC *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695960

void * __thiscall
UInterchangeAudioTranslator_MP3::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_MP3 *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6959d0

void * __thiscall
UInterchangeAudioTranslator_OGG::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_OGG *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695a40

void * __thiscall
UInterchangeAudioTranslator_OPUS::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_OPUS *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695ab0

void * __thiscall
UInterchangeAudioTranslator_WAV::_scalar_deleting_destructor_
          (UInterchangeAudioTranslator_WAV *this,uint param_1)

{
  *(undefined ***)this =
       &UInterchangeAudioTranslatorBase::_vftable__for__UInterchangeTranslatorBase__;
  *(undefined ***)&this->field_0x48 = &___7IInterchangeAudioPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695b20

void * __thiscall
UInterchangeBlockedTexturePayloadInterface::_scalar_deleting_destructor_
          (UInterchangeBlockedTexturePayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695b80

void * __thiscall
UInterchangeFbxTranslator::_scalar_deleting_destructor_
          (UInterchangeFbxTranslator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FInterchangeDispatcher *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResultFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Dispatcher).Ptr;
  if (pFVar2 != (FInterchangeDispatcher *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7IInterchangeAnimationPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeMeshPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695c60

void * __thiscall
UInterchangeFbxTranslatorSettings::_scalar_deleting_destructor_
          (UInterchangeFbxTranslatorSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInterchangeFbxTranslatorSettings__6B_;
  UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695cc0

void * __thiscall
UInterchangeGroomPayloadInterface::_scalar_deleting_destructor_
          (UInterchangeGroomPayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695d20

void * __thiscall
UInterchangeLevelAssetUserData::_scalar_deleting_destructor_
          (UInterchangeLevelAssetUserData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeLevelAssetUserData__6B_;
  DestructItems<FString,int>
            ((FString *)(this->SceneImportPaths).AllocatorInstance.Data,
             (this->SceneImportPaths).ArrayNum);
  pFVar1 = (this->SceneImportPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695da0

void * __thiscall
UInterchangeLevelSequenceFactory::_scalar_deleting_destructor_
          (UInterchangeLevelSequenceFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e695e00

void * __thiscall
UInterchangeMeshPayloadInterface::_scalar_deleting_destructor_
          (UInterchangeMeshPayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695e60

void * __thiscall
UInterchangeSlicedTexturePayloadInterface::_scalar_deleting_destructor_
          (UInterchangeSlicedTexturePayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695ec0

void * __thiscall
UInterchangeTextureLightProfilePayloadInterface::_scalar_deleting_destructor_
          (UInterchangeTextureLightProfilePayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695f20

void * __thiscall
UInterchangeTexturePayloadInterface::_scalar_deleting_destructor_
          (UInterchangeTexturePayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695f80

void * __thiscall
UInterchangeVariantSetPayloadInterface::_scalar_deleting_destructor_
          (UInterchangeVariantSetPayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e695fe0

void * __thiscall
UInterchangeVolumePayloadInterface::_scalar_deleting_destructor_
          (UInterchangeVolumePayloadInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e696040

void * __thiscall
UInterchangeVolumeTranslatorSettings::_scalar_deleting_destructor_
          (UInterchangeVolumeTranslatorSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeVolumeTranslatorSettings__6B_;
  pFVar1 = (this->AnimationID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactory @ 14e69aea0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAnimationPayloadInterface @ 14e69aeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAnimationPayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAssetUserData @ 14e69aec0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioPayloadInterface @ 14e69aed0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioPayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioSoundWaveFactory @ 14e69aee0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioSoundWaveFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslatorBase @ 14e69aef0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslatorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_AIF @ 14e69af00

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_AIF(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_AIFF @ 14e69af10

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_AIFF(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_FLAC @ 14e69af20

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_FLAC(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_MP3 @ 14e69af30

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_MP3(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_OGG @ 14e69af40

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_OGG(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_OPUS @ 14e69af50

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_OPUS(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_WAV @ 14e69af60

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAudioTranslator_WAV(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeBlockedTexturePayloadInterface @ 14e69af70

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeBlockedTexturePayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeFbxTranslator @ 14e69af80

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeFbxTranslator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeGroomPayloadInterface @ 14e69af90

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeGroomPayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeImport_init @ 14e69afa0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeImport_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeLevelSequenceFactory @ 14e69afb0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeLevelSequenceFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeMeshPayloadInterface @ 14e69afc0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeMeshPayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeSlicedTexturePayloadInterface @ 14e69afd0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeSlicedTexturePayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfilePayloadInterface @ 14e69afe0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfilePayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeTexturePayloadInterface @ 14e69aff0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeTexturePayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeVariantSetPayloadInterface @ 14e69b000

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeVariantSetPayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeVolumePayloadInterface @ 14e69b010

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeVolumePayloadInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTranslatorSettings @ 14e69b020

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTranslatorSettings(void)

{
  return;
}

// Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister @ 14e6a99a0

UClass * __cdecl Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton,
               UInterchangeAnimSequenceFactory::StaticRegisterNativesUInterchangeAnimSequenceFactory
               ,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister @ 14e6a9a60

UClass * __cdecl Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimationPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton,
               UInterchangeAnimationPayloadInterface::
               StaticRegisterNativesUInterchangeAnimationPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimationPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAssetUserData_NoRegister @ 14e6a9b20

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton,
               UInterchangeAssetUserData::StaticRegisterNativesUInterchangeAssetUserData,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister @ 14e6a9be0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton,
               UInterchangeAudioPayloadInterface::
               StaticRegisterNativesUInterchangeAudioPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAudioPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioPayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister @ 14e6a9ca0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioSoundWaveFactory",
               &Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton,
               UInterchangeAudioSoundWaveFactory::
               StaticRegisterNativesUInterchangeAudioSoundWaveFactory,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioSoundWaveFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAudioSoundWaveFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioSoundWaveFactory.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslatorBase_NoRegister @ 14e6a9d60

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslatorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslatorBase",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton,
               UInterchangeAudioTranslatorBase::StaticRegisterNativesUInterchangeAudioTranslatorBase
               ,0x50,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslatorBase>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslatorBase>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslatorBase.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_AIFF_NoRegister @ 14e6a9e20

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_AIFF_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIFF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton,
               UInterchangeAudioTranslator_AIFF::
               StaticRegisterNativesUInterchangeAudioTranslator_AIFF,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_AIFF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIFF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIFF.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_AIF_NoRegister @ 14e6a9ee0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_AIF_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_AIF",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton,
               UInterchangeAudioTranslator_AIF::StaticRegisterNativesUInterchangeAudioTranslator_AIF
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslator_AIF>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_AIF>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_AIF.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_FLAC_NoRegister @ 14e6a9fa0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_FLAC_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_FLAC",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton,
               UInterchangeAudioTranslator_FLAC::
               StaticRegisterNativesUInterchangeAudioTranslator_FLAC,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_FLAC>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_FLAC>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_FLAC.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_MP3_NoRegister @ 14e6aa060

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_MP3_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_MP3",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton,
               UInterchangeAudioTranslator_MP3::StaticRegisterNativesUInterchangeAudioTranslator_MP3
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslator_MP3>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_MP3>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_MP3.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_OGG_NoRegister @ 14e6aa120

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_OGG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OGG",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton,
               UInterchangeAudioTranslator_OGG::StaticRegisterNativesUInterchangeAudioTranslator_OGG
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslator_OGG>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OGG>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OGG.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_OPUS_NoRegister @ 14e6aa1e0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_OPUS_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_OPUS",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton,
               UInterchangeAudioTranslator_OPUS::
               StaticRegisterNativesUInterchangeAudioTranslator_OPUS,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAudioTranslator_OPUS>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_OPUS>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_OPUS.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister @ 14e6aa2a0

UClass * __cdecl Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAudioTranslator_WAV",
               &Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton,
               UInterchangeAudioTranslator_WAV::StaticRegisterNativesUInterchangeAudioTranslator_WAV
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAudioTranslator_WAV>,
               InternalVTableHelperCtorCaller<UInterchangeAudioTranslator_WAV>,local_res8,
               UInterchangeAudioTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAudioTranslator_WAV.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister @ 14e6aa360

UClass * __cdecl Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeBlockedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton
               ,UInterchangeBlockedTexturePayloadInterface::
                StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlockedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeBlockedTexturePayloadInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlockedTexturePayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister @ 14e6aa420

UClass * __cdecl Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslator",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton,
               UInterchangeFbxTranslator::StaticRegisterNativesUInterchangeFbxTranslator,0xc0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeFbxTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister @ 14e6aa4e0

UClass * __cdecl Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGroomPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton,
               UInterchangeGroomPayloadInterface::
               StaticRegisterNativesUInterchangeGroomPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGroomPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeGroomPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGroomPayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeLevelAssetUserData_NoRegister @ 14e6aa5a0

UClass * __cdecl Z_Construct_UClass_UInterchangeLevelAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton,
               UInterchangeLevelAssetUserData::StaticRegisterNativesUInterchangeLevelAssetUserData,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeLevelAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeLevelAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeLevelSequenceFactory_NoRegister @ 14e6aa660

UClass * __cdecl Z_Construct_UClass_UInterchangeLevelSequenceFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton,
               UInterchangeLevelSequenceFactory::
               StaticRegisterNativesUInterchangeLevelSequenceFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister @ 14e6aa720

UClass * __cdecl Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeMeshPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton,
               UInterchangeMeshPayloadInterface::
               StaticRegisterNativesUInterchangeMeshPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeMeshPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshPayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister @ 14e6aa7e0

UClass * __cdecl Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSlicedTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton,
               UInterchangeSlicedTexturePayloadInterface::
               StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSlicedTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeSlicedTexturePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister @ 14e6aa8a0

UClass * __cdecl Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTextureLightProfilePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.
                InnerSingleton,
               UInterchangeTextureLightProfilePayloadInterface::
               StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTextureLightProfilePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfilePayloadInterface>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfilePayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister @ 14e6aa960

UClass * __cdecl Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeTexturePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton,
               UInterchangeTexturePayloadInterface::
               StaticRegisterNativesUInterchangeTexturePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTexturePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeTexturePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister @ 14e6aaa20

UClass * __cdecl Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVariantSetPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton,
               UInterchangeVariantSetPayloadInterface::
               StaticRegisterNativesUInterchangeVariantSetPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVariantSetPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVariantSetPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVariantSetPayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister @ 14e6aaae0

UClass * __cdecl Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumePayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton,
               UInterchangeVolumePayloadInterface::
               StaticRegisterNativesUInterchangeVolumePayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeVolumePayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeVolumePayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumePayloadInterface.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_NoRegister @ 14e6aaba0

UClass * __cdecl Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumeTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton,
               UInterchangeVolumeTranslatorSettings::
               StaticRegisterNativesUInterchangeVolumeTranslatorSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton;
}

// PositionCurve'' @ 150467e70

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 150467e90

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 150467eb0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467ed0

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_AIF'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467ef0

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_AIFF'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467f10

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_FLAC'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467f30

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_MP3'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467f50

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_OGG'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467f70

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_OPUS'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AudioFormatCVarName'' @ 150467f90

void __cdecl
`UE::Interchange::Audio::FAudioFormatCVarNames::GetAudioFormatCVarName_WAV'::__l2::
_dynamic_atexit_destructor_for__AudioFormatCVarName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AudioFormatCVarName.Data.AllocatorInstance.Data;
  if (AudioFormatCVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AudioFormatCVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'BakeMeshes'' @ 150467fb0

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__BakeMeshes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BakeMeshes.Data.AllocatorInstance.Data;
  if (BakeMeshes.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BakeMeshes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableAIFFImport'' @ 150467fd0

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableAIFFImport__(void)

{
  CCvarInterchangeEnableAIFFImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableAIFFImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableAIFImport'' @ 150467ff0

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableAIFImport__(void)

{
  CCvarInterchangeEnableAIFImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableAIFImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableFBXImport'' @ 150468010

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableFBXImport__(void)

{
  CCvarInterchangeEnableFBXImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableFBXImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableFBXLevelImport'' @ 150468030

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableFBXLevelImport__(void)

{
  CCvarInterchangeEnableFBXLevelImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CCvarInterchangeEnableFBXLevelImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableFLACImport'' @ 150468050

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableFLACImport__(void)

{
  CCvarInterchangeEnableFLACImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableFLACImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableMP3Import'' @ 150468070

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableMP3Import__(void)

{
  CCvarInterchangeEnableMP3Import._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableMP3Import);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableOGGImport'' @ 150468090

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableOGGImport__(void)

{
  CCvarInterchangeEnableOGGImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableOGGImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableOPUSImport'' @ 1504680b0

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableOPUSImport__(void)

{
  CCvarInterchangeEnableOPUSImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableOPUSImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeEnableWAVImport'' @ 1504680d0

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeEnableWAVImport__(void)

{
  CCvarInterchangeEnableWAVImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeEnableWAVImport);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeFBXTranslatorUseWorker'' @ 1504680f0

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeFBXTranslatorUseWorker__(void)

{
  CCvarInterchangeFBXTranslatorUseWorker._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CCvarInterchangeFBXTranslatorUseWorker);
  return;
}

// `dynamic_atexit_destructor_for_'DensityGridName'' @ 150468110

void __cdecl UE::Interchange::Volume::_dynamic_atexit_destructor_for__DensityGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DensityGridName.Data.AllocatorInstance.Data;
  if (DensityGridName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DensityGridName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FBXAnalyticsIdentifier'' @ 150468130

void __cdecl
UE::Interchange::Private::_dynamic_atexit_destructor_for__FBXAnalyticsIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBXAnalyticsIdentifier.Data.AllocatorInstance.Data;
  if (FBXAnalyticsIdentifier.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBXAnalyticsIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GlobalOffsetTransform'' @ 150468150

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__GlobalOffsetTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GlobalOffsetTransform.Data.AllocatorInstance.Data;
  if (GlobalOffsetTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GlobalOffsetTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GridNameAndComponentIndexSeparator'' @ 150468170

void __cdecl
UE::Interchange::Volume::_dynamic_atexit_destructor_for__GridNameAndComponentIndexSeparator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data;
  if (GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GridNameAndComponentIndexSeparator.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'Instance'' @ 150468190

void __cdecl
`UE::Interchange::Private::FInterchangePropertyTracksHelper::GetInstance'::__l2::
_dynamic_atexit_destructor_for__Instance__(void)

{
  ::Instance.PropertyTracks._72_4_ = 0;
  if (::Instance.PropertyTracks._64_8_ != 0) {
    FMemory::Free((void *)::Instance.PropertyTracks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LoadString'' @ 1504681d0

void __cdecl
`UE::Interchange::FJsonFetchPayloadCmd::GetAction'::__l2::
_dynamic_atexit_destructor_for__LoadString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
               ::__l2::LoadString.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
      ::__l2::LoadString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
      ::__l2::LoadString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LoadString'' @ 1504681f0

void __cdecl
`UE::Interchange::FJsonLoadSourceCmd::GetAction'::__l2::_dynamic_atexit_destructor_for__LoadString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetAction(void)const___ptr64'
               ::__l2::LoadString.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetAction(void)const___ptr64'
      ::__l2::LoadString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetAction(void)const___ptr64'
      ::__l2::LoadString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150468210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'MeshGlobalTransform'' @ 150468230

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__MeshGlobalTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MeshGlobalTransform.Data.AllocatorInstance.Data;
  if (MeshGlobalTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MeshGlobalTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RootJointGlobalTransform'' @ 150468250

void __cdecl
UE::Interchange::MeshPayload::Attributes::_dynamic_atexit_destructor_for__RootJointGlobalTransform__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RootJointGlobalTransform.Data.AllocatorInstance.Data;
  if (RootJointGlobalTransform.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RootJointGlobalTransform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'VolumetricMaterial'' @ 150468270

void __cdecl UE::Interchange::Volume::_dynamic_atexit_destructor_for__VolumetricMaterial__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VolumetricMaterial.Data.AllocatorInstance.Data;
  if (VolumetricMaterial.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VolumetricMaterial.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

