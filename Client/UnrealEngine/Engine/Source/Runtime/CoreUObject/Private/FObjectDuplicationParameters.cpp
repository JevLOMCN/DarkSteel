// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FObjectDuplicationParameters @ 142257230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FObjectDuplicationParameters * __thiscall
FObjectDuplicationParameters::FObjectDuplicationParameters
          (FObjectDuplicationParameters *this,UObject *param_1,UObject *param_2)

{
  this->SourceObject = param_1;
  this->DestOuter = param_2;
  (this->DestName).ComparisonIndex = 0;
  (this->DestName).Number = 0;
  this->DestClass = (UClass *)0x0;
  *(undefined8 *)&this->DuplicationSeed = 0;
  *(undefined8 *)&(this->DuplicationSeed).field_0x8 = 0;
  *(undefined8 *)&(this->DuplicationSeed).field_0x20 = 0;
  this->ApplyFlags = RF_NoFlags;
  this->ApplyInternalFlags = Borrowed;
  this->PortFlags = 0;
  this->DuplicateMode = Normal;
  this->FlagMask =
       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_WillBeLoaded|
       RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
       RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
       |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
       RF_NeedInitialization|RF_TagGarbageTemp|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject
       |RF_Transactional|RF_Standalone|RF_Public;
  this->InternalFlagMask =
       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
       ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
       ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0;
  this->bAssignExternalPackages = true;
  this->bSkipPostLoad = false;
  *(undefined4 *)&(this->DuplicationSeed).field_0x28 = 0;
  *(undefined4 *)&(this->DuplicationSeed).field_0x2c = 0x80;
  *(undefined4 *)&(this->DuplicationSeed).field_0x34 = 0;
  *(undefined4 *)&(this->DuplicationSeed).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DuplicationSeed).field_0x40 = 0;
  *(undefined4 *)&(this->DuplicationSeed).field_0x48 = 0;
  this->CreatedObjects =
       (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
        *)0x0;
  this->DestClass = *(UClass **)&this->SourceObject->field_0x10;
  return this;
}

