// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCopyPropertiesForUnrelatedObjectsParams @ 148b1d200

FCopyPropertiesForUnrelatedObjectsParams * __thiscall
UEngine::FCopyPropertiesForUnrelatedObjectsParams::FCopyPropertiesForUnrelatedObjectsParams
          (FCopyPropertiesForUnrelatedObjectsParams *this,
          FCopyPropertiesForUnrelatedObjectsParams *param_1)

{
  this->bAggressiveDefaultSubobjectReplacement = param_1->bAggressiveDefaultSubobjectReplacement;
  this->bDoDelta = param_1->bDoDelta;
  this->bReplaceObjectClassReferences = param_1->bReplaceObjectClassReferences;
  this->bCopyDeprecatedProperties = param_1->bCopyDeprecatedProperties;
  this->bPreserveRootComponent = param_1->bPreserveRootComponent;
  this->bPerformDuplication = param_1->bPerformDuplication;
  this->bOnlyHandleDirectSubObjects = param_1->bOnlyHandleDirectSubObjects;
  this->bSkipCompilerGeneratedDefaults = param_1->bSkipCompilerGeneratedDefaults;
  this->bNotifyObjectReplacement = param_1->bNotifyObjectReplacement;
  this->bClearReferences = param_1->bClearReferences;
  this->bDontClearReferenceIfNewerClassExists = param_1->bDontClearReferenceIfNewerClassExists;
  this->bReplaceInternalReferenceUponRead = param_1->bReplaceInternalReferenceUponRead;
  this->SourceObjectArchetype = param_1->SourceObjectArchetype;
  this->OptionalReplacementMappings = param_1->OptionalReplacementMappings;
  this->OptionalOldToNewClassMappings = param_1->OptionalOldToNewClassMappings;
  return this;
}

// FCopyPropertiesForUnrelatedObjectsParams @ 148b1d280

FCopyPropertiesForUnrelatedObjectsParams * __thiscall
UEngine::FCopyPropertiesForUnrelatedObjectsParams::FCopyPropertiesForUnrelatedObjectsParams
          (FCopyPropertiesForUnrelatedObjectsParams *this)

{
  this->bAggressiveDefaultSubobjectReplacement = false;
  this->bDoDelta = true;
  this->bReplaceObjectClassReferences = true;
  this->bCopyDeprecatedProperties = false;
  this->SourceObjectArchetype = (UObject *)0x0;
  this->OptionalReplacementMappings =
       (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
        *)0x0;
  this->OptionalOldToNewClassMappings =
       (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
        *)0x0;
  this->bPreserveRootComponent = true;
  this->bPerformDuplication = false;
  this->bOnlyHandleDirectSubObjects = false;
  this->bSkipCompilerGeneratedDefaults = false;
  this->bNotifyObjectReplacement = false;
  this->bClearReferences = true;
  this->bDontClearReferenceIfNewerClassExists = false;
  this->bReplaceInternalReferenceUponRead = false;
  return this;
}

