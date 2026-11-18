// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 3

// StaticStruct @ 146b33a90

UScriptStruct * __cdecl FLocalizationTargetSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizationTargetSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FLocalizationTargetSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationTargetSettings,(UObject *)pUVar1,
                         L"LocalizationTargetSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizationTargetSettings.OuterSingleton;
}

// FLocalizationTargetSettings @ 146b431e0

FLocalizationTargetSettings * __thiscall
FLocalizationTargetSettings::FLocalizationTargetSettings(FLocalizationTargetSettings *this)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  FGuid::NewGuid(&this->Guid);
  this->ConflictStatus = Unknown;
  (this->TargetDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDependencies).ArrayNum = 0;
  (this->TargetDependencies).ArrayMax = 0;
  (this->AdditionalManifestDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalManifestDependencies).ArrayNum = 0;
  (this->AdditionalManifestDependencies).ArrayMax = 0;
  (this->RequiredModuleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredModuleNames).ArrayNum = 0;
  (this->RequiredModuleNames).ArrayMax = 0;
  FGatherTextFromTextFilesConfiguration::FGatherTextFromTextFilesConfiguration
            (&this->GatherFromTextFiles);
  FGatherTextFromPackagesConfiguration::FGatherTextFromPackagesConfiguration
            (&this->GatherFromPackages);
  (this->GatherFromMetaData).IsEnabled = false;
  (this->GatherFromMetaData).IncludePathWildcards.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).IncludePathWildcards.ArrayNum = 0;
  (this->GatherFromMetaData).IncludePathWildcards.ArrayMax = 0;
  (this->GatherFromMetaData).ExcludePathWildcards.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).ExcludePathWildcards.ArrayNum = 0;
  (this->GatherFromMetaData).ExcludePathWildcards.ArrayMax = 0;
  (this->GatherFromMetaData).KeySpecifications.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).KeySpecifications.ArrayNum = 0;
  (this->GatherFromMetaData).KeySpecifications.ArrayMax = 0;
  (this->GatherFromMetaData).FieldTypesToInclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).FieldTypesToInclude.ArrayNum = 0;
  (this->GatherFromMetaData).FieldTypesToInclude.ArrayMax = 0;
  (this->GatherFromMetaData).FieldTypesToExclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).FieldTypesToExclude.ArrayNum = 0;
  (this->GatherFromMetaData).FieldTypesToExclude.ArrayMax = 0;
  (this->GatherFromMetaData).FieldOwnerTypesToInclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).FieldOwnerTypesToInclude.ArrayNum = 0;
  (this->GatherFromMetaData).FieldOwnerTypesToInclude.ArrayMax = 0;
  (this->GatherFromMetaData).FieldOwnerTypesToExclude.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GatherFromMetaData).FieldOwnerTypesToExclude.ArrayNum = 0;
  (this->GatherFromMetaData).FieldOwnerTypesToExclude.ArrayMax = 0;
  (this->GatherFromMetaData).ShouldGatherFromEditorOnlyData = false;
  (this->ExportSettings).CollapseMode = IdenticalTextIdAndSource;
  (this->ExportSettings).POFormat = Unreal;
  (this->ExportSettings).ShouldPersistCommentsOnExport = false;
  (this->ExportSettings).ShouldAddSourceLocationsAsComments = true;
  (this->CompileSettings).SkipSourceCheck = false;
  (this->CompileSettings).ValidateFormatPatterns = true;
  (this->CompileSettings).ValidateSafeWhitespace = false;
  (this->CompileSettings).ValidateRichTextTags = false;
  (this->ImportDialogueSettings).RawAudioPath.Path.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ImportDialogueSettings).RawAudioPath.Path.Data.ArrayNum = 0;
  (this->ImportDialogueSettings).RawAudioPath.Path.Data.ArrayMax = 0;
  ::FString::FString(&(this->ImportDialogueSettings).ImportedDialogueFolder,L"ImportedDialogue");
  (this->ImportDialogueSettings).bImportNativeAsSource = false;
  this->NativeCultureIndex = -1;
  (this->SupportedCulturesStatistics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedCulturesStatistics).ArrayNum = 0;
  (this->SupportedCulturesStatistics).ArrayMax = 0;
  return this;
}

// ~FLocalizationTargetSettings @ 146b44a60

void __thiscall
FLocalizationTargetSettings::~FLocalizationTargetSettings(FLocalizationTargetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCultureStatistics,int>
            ((FCultureStatistics *)(this->SupportedCulturesStatistics).AllocatorInstance.Data,
             (this->SupportedCulturesStatistics).ArrayNum);
  pFVar1 = (this->SupportedCulturesStatistics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportDialogueSettings).ImportedDialogueFolder.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportDialogueSettings).RawAudioPath.Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGatherTextFromMetaDataConfiguration::~FGatherTextFromMetaDataConfiguration
            (&this->GatherFromMetaData);
  FGatherTextFromPackagesConfiguration::~FGatherTextFromPackagesConfiguration
            (&this->GatherFromPackages);
  FGatherTextFromTextFilesConfiguration::~FGatherTextFromTextFilesConfiguration
            (&this->GatherFromTextFiles);
  DestructItems<FString,int>
            ((FString *)(this->RequiredModuleNames).AllocatorInstance.Data,
             (this->RequiredModuleNames).ArrayNum);
  pFVar1 = (this->RequiredModuleNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFilePath,int>
            ((FFilePath *)(this->AdditionalManifestDependencies).AllocatorInstance.Data,
             (this->AdditionalManifestDependencies).ArrayNum);
  pFVar1 = (this->AdditionalManifestDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

