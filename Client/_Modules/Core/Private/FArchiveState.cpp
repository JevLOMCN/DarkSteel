// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 56

// AtEnd @ 1415aeb30

bool __thiscall FArchiveState::AtEnd(FArchiveState *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (lVar1 != -1) {
    lVar2 = (**(code **)(this->_padding_ + 0x30))(this);
    if (lVar2 <= lVar1) {
      return true;
    }
  }
  return false;
}

// CountBytes @ 1415b97a0

void __thiscall FArchiveState::CountBytes(FArchiveState *this,ulong64 param_1,ulong64 param_2)

{
  return;
}

// GetArchetypeFromLoader @ 1415c4ee0

UObject * __thiscall FArchiveState::GetArchetypeFromLoader(FArchiveState *this,UObject *param_1)

{
  return (UObject *)0x0;
}

// GetInnermostState @ 1415c7360

FArchiveState * __thiscall FArchiveState::GetInnermostState(FArchiveState *this)

{
  return this;
}

// GetLinker @ 1415c73f0

FLinker * __thiscall FArchiveState::GetLinker(FArchiveState *this)

{
  return (FLinker *)0x0;
}

// GetMigrationContext @ 1415c75b0

FUObjectMigrationContext * __thiscall FArchiveState::GetMigrationContext(FArchiveState *this)

{
  return (FUObjectMigrationContext *)0x0;
}

// GetSerializeContext @ 1415c7c90

FUObjectSerializeContext * __thiscall FArchiveState::GetSerializeContext(FArchiveState *this)

{
  return (FUObjectSerializeContext *)0x0;
}

// SetDebugSerializationFlags @ 1415f24a0

void __thiscall FArchiveState::SetDebugSerializationFlags(FArchiveState *this,uint param_1)

{
  return;
}

// SetFilterEditorOnly @ 1415f24b0

void __thiscall FArchiveState::SetFilterEditorOnly(FArchiveState *this,bool param_1)

{
  this->ArIsFilterEditorOnly = '\0';
  this->field_0x2b = this->field_0x2b | param_1 << 4;
  return;
}

// SetSavingOptionalObject @ 1415f3cb0

void __thiscall FArchiveState::SetSavingOptionalObject(FArchiveState *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ArIsSaving == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                       ,0x265,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ArIsSavingOptionalObject = '\0';
  this->field_0x2b = this->field_0x2b | param_1 << 5;
  return;
}

// SetSerializeContext @ 1415f3d10

void __thiscall
FArchiveState::SetSerializeContext(FArchiveState *this,FUObjectSerializeContext *param_1)

{
  return;
}

// SetSerializedProperty @ 1415f3d20

void __thiscall FArchiveState::SetSerializedProperty(FArchiveState *this,FProperty *param_1)

{
  this->SerializedProperty = param_1;
  return;
}

// ShouldSkipProperty @ 1415f3d80

bool __thiscall FArchiveState::ShouldSkipProperty(FArchiveState *this,FProperty *param_1)

{
  return false;
}

// Tell @ 1415f7f40

long64 __thiscall FArchiveState::Tell(FArchiveState *this)

{
  return -1;
}

// TotalSize @ 141602e20

long64 __thiscall FArchiveState::TotalSize(FArchiveState *this)

{
  return -1;
}

// UseToResolveEnumerators @ 141609bc0

bool __thiscall FArchiveState::UseToResolveEnumerators(FArchiveState *this)

{
  return false;
}

// FArchiveState @ 141985ec0

FArchiveState * __thiscall FArchiveState::FArchiveState(FArchiveState *this,FArchiveState *param_1)

{
  FArchiveSerializedPropertyChain *pFVar1;
  FArchiveSerializedPropertyChain *pFVar2;
  FArchiveSerializedPropertyChain *this_00;
  FProperty *pFVar3;
  FCustomVersionContainer *this_01;
  FArchiveSerializedPropertyChain *pFVar4;
  
  pFVar4 = (FArchiveSerializedPropertyChain *)0x0;
  this->_padding_ = (longlong)&___7FArchiveState__6B_;
  (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
  this->ActiveFPLB = &this->InlineFPLB;
  (this->ArUEVer).FileVersionUE4 = 0;
  (this->ArUEVer).FileVersionUE5 = 0;
  (this->ArEngineVer).Major = 0;
  (this->ArEngineVer).Minor = 0;
  (this->ArEngineVer).Patch = 0;
  (this->ArEngineVer).Changelist = 0;
  this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
  this->SavePackageData = (FArchiveSavePackageData *)0x0;
  this->NextProxy = (FArchiveState *)0x0;
  CopyTrivialFArchiveStatusMembers(this,param_1);
  this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  pFVar1 = param_1->SerializedPropertyChain;
  pFVar3 = param_1->SerializedProperty;
  if ((pFVar1 != (FArchiveSerializedPropertyChain *)0x0) &&
     (0 < (pFVar1->SerializedPropertyChain).ArrayNum)) {
    pFVar2 = ::operator_new(0x58);
    this_00 = pFVar4;
    if (pFVar2 != (FArchiveSerializedPropertyChain *)0x0) {
      (pFVar2->SerializedPropertyChain).AllocatorInstance.SecondaryData =
           (ForElementType<FProperty_*>)0x0;
      (pFVar2->SerializedPropertyChain).ArrayNum = 0;
      *(undefined8 *)&(pFVar2->SerializedPropertyChain).ArrayMax = 8;
      this_00 = pFVar2;
    }
    this->SerializedPropertyChain = this_00;
    FArchiveSerializedPropertyChain::operator=(this_00,pFVar1);
  }
  if (pFVar3 == (FProperty *)0x0) {
    pFVar1 = this->SerializedPropertyChain;
    if ((pFVar1 == (FArchiveSerializedPropertyChain *)0x0) ||
       ((pFVar1->SerializedPropertyChain).ArrayNum < 1)) {
      pFVar3 = (FProperty *)0x0;
    }
    else {
      pFVar3 = FArchiveSerializedPropertyChain::GetPropertyFromStack(pFVar1,0);
    }
  }
  this->SerializedProperty = pFVar3;
  this->ArIsFilterEditorOnly = '\0';
  this->bCustomVersionsAreReset = param_1->bCustomVersionsAreReset;
  if ((param_1->CustomVersionContainer != (FCustomVersionContainer *)0x0) &&
     (this_01 = ::operator_new(0x10), this_01 != (FCustomVersionContainer *)0x0)) {
    pFVar4 = (FArchiveSerializedPropertyChain *)
             FCustomVersionContainer::FCustomVersionContainer
                       (this_01,param_1->CustomVersionContainer);
  }
  this->CustomVersionContainer = (FCustomVersionContainer *)pFVar4;
  return this;
}

// FArchiveState @ 141985ff0

FArchiveState * __thiscall FArchiveState::FArchiveState(FArchiveState *this)

{
  undefined1 *puVar1;
  FArchiveSerializedPropertyChain *pFVar2;
  ForElementType<FProperty_*> FVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  FEngineVersion *pFVar9;
  
  this->_padding_ = (longlong)&___7FArchiveState__6B_;
  (this->ArUEVer).FileVersionUE4 = 0;
  (this->ArUEVer).FileVersionUE5 = 0;
  (this->ArEngineVer).Major = 0;
  (this->ArEngineVer).Minor = 0;
  (this->ArEngineVer).Patch = 0;
  (this->ArEngineVer).Changelist = 0;
  this->ActiveFPLB = &this->InlineFPLB;
  this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
  this->SavePackageData = (FArchiveSavePackageData *)0x0;
  this->NextProxy = (FArchiveState *)0x0;
  this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
  this->ArUEVer = GPackageFileUEVersion;
  this->ArLicenseeUEVer = GPackageFileLicenseeUEVersion;
  pFVar9 = FEngineVersion::Current();
  pFVar2 = this->SerializedPropertyChain;
  uVar5 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 2);
  uVar6 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 4);
  uVar7 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 6);
  (this->ArEngineVer).Major = *(undefined2 *)&pFVar9->_padding_;
  (this->ArEngineVer).Minor = uVar5;
  (this->ArEngineVer).Patch = uVar6;
  *(undefined2 *)&(this->ArEngineVer).field_0x6 = uVar7;
  lVar8 = pFVar9->_padding_;
  this->ArUseCustomPropertyList = '\0';
  this->ArPreserveArrayElements = '\0';
  this->ArMergeOverrides = '\0';
  (this->ArEngineVer).Changelist = (uint)lVar8;
  puVar1 = &this->field_0x28;
  this->ArIsLoading = '\0';
  this->ArIsNetArchive = '\0';
  this->ArIsSaveGame = '\0';
  this->ArIsSavingOptionalObject = '\0';
  this->ArIsFilterEditorOnly = '\0';
  this->ArShouldSkipBulkData = '\0';
  this->ArIsCountingMemory = '\0';
  this->ArIsModifyingWeakAndStrongReferences = '\0';
  this->ArIsObjectReferenceCollector = '\0';
  this->ArAllowLazyLoading = '\0';
  this->ArIgnoreClassRef = '\0';
  this->ArIgnoreClassGeneratedByRef = '\0';
  this->ArIgnoreOuterRef = '\0';
  this->ArNoIntraPropertyDelta = '\0';
  this->ArNoDelta = '\0';
  this->ArIgnoreArchetypeRef = '\0';
  this->ArForceByteSwapping = '\0';
  this->ArRequiresLocalizationGather = '\0';
  this->ArContainsMap = '\0';
  this->ArContainsCode = '\0';
  this->ArShouldSkipUpdateCustomVersion = '\0';
  this->ArShouldSkipCompilingAssets = '\0';
  this->ArIsCriticalError = '\0';
  this->ArIsError = '\0';
  this->ArIsPersistent = '\0';
  this->ArForceUnicode = '\0';
  this->ArUseUnversionedPropertySerialization = '\0';
  this->ArWantBinaryPropertySerialization = '\0';
  this->ArIsTextFormat = '\0';
  this->ArIsTransacting = '\0';
  this->ArIsSaving = '\0';
  this->ArIsLoadingFromCookedPackage = '\0';
  this->ArSerializingDefaults = 0;
  this->ArPortFlags = 0;
  this->ArMaxSerializeSize = 0;
  this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  this->SavePackageData = (FArchiveSavePackageData *)0x0;
  this->SerializedProperty = (FProperty *)0x0;
  if (pFVar2 != (FArchiveSerializedPropertyChain *)0x0) {
    FVar3 = (pFVar2->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FProperty_*>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    ::operator_delete(pFVar2,0x58);
  }
  this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  pcVar4 = *(code **)(this->_padding_ + 0x70);
  if (pcVar4 == ResetCustomVersions) {
    this->bCustomVersionsAreReset = true;
    return this;
  }
  (*pcVar4)(this);
  return this;
}

// ~FArchiveState @ 141987c30

void __thiscall FArchiveState::~FArchiveState(FArchiveState *this)

{
  FCustomVersionContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  FArchiveSerializedPropertyChain *pFVar3;
  ForElementType<FProperty_*> FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FArchiveState__6B_;
  if (this->NextProxy != (FArchiveState *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x8c,L"Archive destroyed before its proxies");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = this->CustomVersionContainer;
  if (pFVar1 != (FCustomVersionContainer *)0x0) {
    pFVar2 = (pFVar1->Versions).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar3 = this->SerializedPropertyChain;
  if (pFVar3 != (FArchiveSerializedPropertyChain *)0x0) {
    FVar4 = (pFVar3->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FProperty_*>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    ::operator_delete(pFVar3,0x58);
  }
  return;
}

// operator= @ 141988580

FArchiveState * __thiscall FArchiveState::operator=(FArchiveState *this,FArchiveState *param_1)

{
  FScriptContainerElement *pFVar1;
  FCustomVersionContainer *pFVar2;
  FCustomVersionContainer *pFVar3;
  
  pFVar3 = (FCustomVersionContainer *)0x0;
  this->ActiveFPLB = &this->InlineFPLB;
  (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
  (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
  CopyTrivialFArchiveStatusMembers(this,param_1);
  (**(code **)(this->_padding_ + 0xa8))
            (this,param_1->SerializedPropertyChain,param_1->SerializedProperty);
  this->ArIsFilterEditorOnly = '\0';
  pFVar2 = this->CustomVersionContainer;
  this->bCustomVersionsAreReset = param_1->bCustomVersionsAreReset;
  if (param_1->CustomVersionContainer == (FCustomVersionContainer *)0x0) {
    if (pFVar2 == (FCustomVersionContainer *)0x0) {
      return this;
    }
    pFVar1 = (pFVar2->Versions).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x10);
  }
  else {
    if (pFVar2 != (FCustomVersionContainer *)0x0) {
      FCustomVersionContainer::operator=(pFVar2,param_1->CustomVersionContainer);
      return this;
    }
    pFVar2 = ::operator_new(0x10);
    if (pFVar2 != (FCustomVersionContainer *)0x0) {
      pFVar3 = FCustomVersionContainer::FCustomVersionContainer
                         (pFVar2,param_1->CustomVersionContainer);
    }
  }
  this->CustomVersionContainer = pFVar3;
  return this;
}

// operator() @ 1419891b0

void __thiscall
`FArchiveState::SetArchiveState'::__l2::<lambda_1>::operator()(void *this,FArchiveState *param_1)

{
  FArchiveState *pFVar1;
  FScriptContainerElement *pFVar2;
  FCustomVersionContainer *pFVar3;
  FCustomVersionContainer *pFVar4;
  
  pFVar1 = *(FArchiveState **)this;
  param_1->ActiveFPLB = &param_1->InlineFPLB;
  pFVar4 = (FCustomVersionContainer *)0x0;
  (param_1->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
  (param_1->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
  (param_1->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
  FArchiveState::CopyTrivialFArchiveStatusMembers(param_1,pFVar1);
  (**(code **)(param_1->_padding_ + 0xa8))
            (param_1,pFVar1->SerializedPropertyChain,pFVar1->SerializedProperty);
  param_1->ArIsFilterEditorOnly = '\0';
  pFVar3 = param_1->CustomVersionContainer;
  param_1->bCustomVersionsAreReset = pFVar1->bCustomVersionsAreReset;
  if (pFVar1->CustomVersionContainer == (FCustomVersionContainer *)0x0) {
    if (pFVar3 == (FCustomVersionContainer *)0x0) {
      return;
    }
    pFVar2 = (pFVar3->Versions).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar3,0x10);
  }
  else {
    if (pFVar3 != (FCustomVersionContainer *)0x0) {
      FCustomVersionContainer::operator=(pFVar3,pFVar1->CustomVersionContainer);
      return;
    }
    pFVar3 = ::operator_new(0x10);
    if (pFVar3 != (FCustomVersionContainer *)0x0) {
      pFVar4 = FCustomVersionContainer::FCustomVersionContainer
                         (pFVar3,pFVar1->CustomVersionContainer);
    }
  }
  param_1->CustomVersionContainer = pFVar4;
  return;
}

// ClearError @ 14198f3c0

void __thiscall FArchiveState::ClearError(FArchiveState *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) & 0xfd;
  for (lVar1 = *(longlong *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) & 0xfd;
  }
  return;
}

// CopyTrivialFArchiveStatusMembers @ 14198fce0

void __thiscall
FArchiveState::CopyTrivialFArchiveStatusMembers(FArchiveState *this,FArchiveState *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  
  this->ArUEVer = param_1->ArUEVer;
  this->ArLicenseeUEVer = param_1->ArLicenseeUEVer;
  uVar1 = (param_1->ArEngineVer).Minor;
  uVar2 = (param_1->ArEngineVer).Patch;
  uVar3 = *(undefined2 *)&(param_1->ArEngineVer).field_0x6;
  (this->ArEngineVer).Major = (param_1->ArEngineVer).Major;
  (this->ArEngineVer).Minor = uVar1;
  (this->ArEngineVer).Patch = uVar2;
  *(undefined2 *)&(this->ArEngineVer).field_0x6 = uVar3;
  (this->ArEngineVer).Changelist = (param_1->ArEngineVer).Changelist;
  bVar4 = (this->ArIsLoading ^ param_1->ArIsLoading) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 2 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 4 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 8 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x10 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x20 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x40 ^ bVar4;
  this->field_0x28 = bVar4;
  this->field_0x28 = (bVar4 ^ param_1->field_0x28) & 0x7f ^ param_1->field_0x28;
  bVar4 = (this->ArIsPersistent ^ param_1->ArIsPersistent) & 1 ^ this->field_0x29;
  this->field_0x29 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x29) & 2 ^ bVar4;
  this->field_0x29 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x29) & 4 ^ bVar4;
  this->field_0x29 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x29) & 0x20 ^ bVar4;
  this->field_0x29 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x29) & 0x40 ^ bVar4;
  this->field_0x29 = bVar4;
  bVar5 = (bVar4 ^ param_1->field_0x29) & 0x7f ^ param_1->field_0x29;
  this->field_0x29 = bVar5;
  bVar4 = (this->ArForceByteSwapping ^ param_1->ArForceByteSwapping) & 1 ^ this->field_0x2a;
  this->field_0x2a = bVar4;
  this->ArSerializingDefaults = param_1->ArSerializingDefaults;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 2 ^ bVar4;
  this->field_0x2a = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 4 ^ bVar4;
  this->field_0x2a = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 8 ^ bVar4;
  this->field_0x2a = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 0x10 ^ bVar4;
  this->field_0x2a = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 0x20 ^ bVar4;
  this->field_0x2a = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2a) & 0x40 ^ bVar4;
  this->field_0x2a = bVar4;
  this->field_0x2a = (bVar4 ^ param_1->field_0x2a) & 0x7f ^ param_1->field_0x2a;
  bVar4 = (this->ArIsObjectReferenceCollector ^ param_1->ArIsObjectReferenceCollector) & 1 ^
          this->field_0x2b;
  this->field_0x2b = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 2 ^ bVar4;
  this->field_0x2b = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 4 ^ bVar4;
  this->field_0x2b = bVar4;
  this->ArPortFlags = param_1->ArPortFlags;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 8 ^ bVar4;
  this->field_0x2b = bVar4;
  bVar5 = (bVar5 ^ param_1->field_0x29) & 8 ^ bVar5;
  this->field_0x29 = bVar5;
  this->ArMaxSerializeSize = param_1->ArMaxSerializeSize;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 0x10 ^ bVar4;
  this->field_0x2b = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 0x20 ^ bVar4;
  this->field_0x2b = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2b) & 0x40 ^ bVar4;
  this->field_0x2b = bVar4;
  this->field_0x2b = (bVar4 ^ param_1->field_0x2b) & 0x7f ^ param_1->field_0x2b;
  this->ArCustomPropertyList = param_1->ArCustomPropertyList;
  bVar4 = (this->ArUseCustomPropertyList ^ param_1->ArUseCustomPropertyList) & 1 ^ this->field_0x2c;
  this->field_0x2c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x2c) & 2 ^ bVar4;
  this->field_0x2c = bVar4;
  this->field_0x2c = (bVar4 ^ param_1->field_0x2c) & 4 ^ bVar4;
  this->field_0x29 = (bVar5 ^ param_1->field_0x29) & 0x10 ^ bVar5;
  this->SavePackageData = param_1->SavePackageData;
  this->SerializedProperty = param_1->SerializedProperty;
  return;
}

// CustomVer @ 141990dc0

int __thiscall FArchiveState::CustomVer(FArchiveState *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FCustomVersionContainer *this_00;
  FCustomVersion *pFVar4;
  FGuid local_18;
  
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))();
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar4 = FCustomVersionContainer::GetVersion(this_00,&local_18);
  if (this->ArIsLoading == 0) {
    if (pFVar4 != (FCustomVersion *)0x0) {
LAB_141990e31:
      return pFVar4->Version;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLoading() || CustomVersion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x260,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else if (pFVar4 != (FCustomVersion *)0x0) goto LAB_141990e31;
  return -1;
}

// EngineNetVer @ 141993820

uint __thiscall FArchiveState::EngineNetVer(FArchiveState *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCustomVersionContainer *this_00;
  FCustomVersion *pFVar4;
  FGuid local_18;
  
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))();
  local_18 = FEngineNetworkCustomVersion::Guid;
  pFVar4 = FCustomVersionContainer::GetVersion(this_00,&local_18);
  if (this->ArIsLoading == 0) {
    if (pFVar4 != (FCustomVersion *)0x0) {
LAB_141993889:
      return pFVar4->Version;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLoading() || CustomVersion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x260,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  else if (pFVar4 != (FCustomVersion *)0x0) goto LAB_141993889;
  return 0xffffffff;
}

// GameNetVer @ 1419946e0

uint __thiscall FArchiveState::GameNetVer(FArchiveState *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCustomVersionContainer *this_00;
  FCustomVersion *pFVar4;
  FGuid local_18;
  
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))();
  local_18 = FGameNetworkCustomVersion::Guid;
  pFVar4 = FCustomVersionContainer::GetVersion(this_00,&local_18);
  if (this->ArIsLoading == 0) {
    if (pFVar4 != (FCustomVersion *)0x0) {
LAB_141994749:
      return pFVar4->Version;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLoading() || CustomVersion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x260,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  else if (pFVar4 != (FCustomVersion *)0x0) goto LAB_141994749;
  return 0xffffffff;
}

// GetArchiveName @ 141994910

FString * __thiscall
FArchiveState::GetArchiveName(FArchiveState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchive");
  return __return_storage_ptr__;
}

// GetCustomVersions @ 141995010

FCustomVersionContainer * __thiscall FArchiveState::GetCustomVersions(FArchiveState *this)

{
  FScriptContainerElement *pFVar1;
  FCustomVersionContainer *pFVar2;
  FCustomVersionContainer *pFVar3;
  FCustomVersionContainer local_18;
  
  pFVar3 = (FCustomVersionContainer *)0x0;
  pFVar2 = this->CustomVersionContainer;
  if (this->CustomVersionContainer == (FCustomVersionContainer *)0x0) {
    pFVar2 = ::operator_new(0x10);
    if (pFVar2 != (FCustomVersionContainer *)0x0) {
      (pFVar2->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->Versions).ArrayNum = 0;
      (pFVar2->Versions).ArrayMax = 0;
      pFVar3 = pFVar2;
    }
    this->CustomVersionContainer = pFVar3;
    pFVar2 = pFVar3;
  }
  if (this->bCustomVersionsAreReset != false) {
    this->bCustomVersionsAreReset = false;
    if (this->ArIsLoading == 0) {
      FCustomVersionContainer::Empty(pFVar2);
    }
    else {
      pFVar2 = FCurrentCustomVersions::GetAll(&local_18);
      pFVar3 = this->CustomVersionContainer;
      if (pFVar3 != pFVar2) {
        pFVar1 = (pFVar3->Versions).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar3->Versions).AllocatorInstance.Data = (pFVar2->Versions).AllocatorInstance.Data;
        (pFVar2->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->Versions).ArrayNum = (pFVar2->Versions).ArrayNum;
        (pFVar3->Versions).ArrayMax = (pFVar2->Versions).ArrayMax;
        (pFVar2->Versions).ArrayNum = 0;
        (pFVar2->Versions).ArrayMax = 0;
      }
      if (local_18.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Versions.AllocatorInstance.Data);
        return this->CustomVersionContainer;
      }
    }
  }
  return this->CustomVersionContainer;
}

// GetSerializedPropertyChain @ 1419956f0

void __thiscall
FArchiveState::GetSerializedPropertyChain
          (FArchiveState *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  ForElementType<FProperty_*> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FProperty_*> FVar11;
  undefined8 local_28 [2];
  
  if (this->SerializedPropertyChain != (FArchiveSerializedPropertyChain *)0x0) {
    uVar2 = (this->SerializedPropertyChain->SerializedPropertyChain).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar10 = 0;
    if (0 < (int)uVar2) {
      do {
        FVar3 = (ForElementType<FProperty_*>)this->SerializedPropertyChain;
        uVar9 = ~uVar10 + *(int *)((longlong)FVar3 + 0x48);
        uVar7 = 0;
        if ((int)uVar9 < *(int *)((longlong)FVar3 + 0x48)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        FVar11 = FVar3;
        if (*(ForElementType<FProperty_*> *)((longlong)FVar3 + 0x40) !=
            (ForElementType<FProperty_*>)0x0) {
          FVar11 = *(ForElementType<FProperty_*> *)((longlong)FVar3 + 0x40);
        }
        local_28[0] = *(undefined8 *)
                       ((longlong)FVar11 + -8 +
                       (longlong)(int)(*(int *)((longlong)FVar3 + 0x48) - uVar10) * 8);
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar8;
        }
        uVar10 = uVar10 + 1;
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
      } while ((int)uVar10 < (int)uVar2);
    }
  }
  return;
}

// LinkProxy @ 1419a1160

void __cdecl FArchiveState::LinkProxy(FArchiveState *param_1,FArchiveState *param_2)

{
  param_2->NextProxy = param_1->NextProxy;
  param_1->NextProxy = param_2;
  return;
}

// Reset @ 1419a89c0

void __thiscall FArchiveState::Reset(FArchiveState *this)

{
  undefined1 *puVar1;
  FFastPathLoadBuffer *pFVar2;
  FArchiveSerializedPropertyChain *pFVar3;
  ForElementType<FProperty_*> FVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  FEngineVersion *pFVar9;
  
  pFVar2 = this->ActiveFPLB;
  pFVar2->StartFastPathLoadBuffer = (uchar *)0x0;
  pFVar2->EndFastPathLoadBuffer = (uchar *)0x0;
  pFVar2->OriginalFastPathLoadBuffer = (uchar *)0x0;
  this->ArUEVer = GPackageFileUEVersion;
  this->ArLicenseeUEVer = GPackageFileLicenseeUEVersion;
  pFVar9 = FEngineVersion::Current();
  pFVar3 = this->SerializedPropertyChain;
  uVar5 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 2);
  uVar6 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 4);
  uVar7 = *(undefined2 *)((longlong)&pFVar9->_padding_ + 6);
  (this->ArEngineVer).Major = *(undefined2 *)&pFVar9->_padding_;
  (this->ArEngineVer).Minor = uVar5;
  (this->ArEngineVer).Patch = uVar6;
  *(undefined2 *)&(this->ArEngineVer).field_0x6 = uVar7;
  lVar8 = pFVar9->_padding_;
  this->ArUseCustomPropertyList = '\0';
  this->ArPreserveArrayElements = '\0';
  this->ArMergeOverrides = '\0';
  (this->ArEngineVer).Changelist = (uint)lVar8;
  puVar1 = &this->field_0x28;
  this->ArIsLoading = '\0';
  this->ArIsNetArchive = '\0';
  this->ArIsSaveGame = '\0';
  this->ArIsSavingOptionalObject = '\0';
  this->ArIsFilterEditorOnly = '\0';
  this->ArShouldSkipBulkData = '\0';
  this->ArIsCountingMemory = '\0';
  this->ArIsModifyingWeakAndStrongReferences = '\0';
  this->ArIsObjectReferenceCollector = '\0';
  this->ArAllowLazyLoading = '\0';
  this->ArIgnoreClassRef = '\0';
  this->ArIgnoreClassGeneratedByRef = '\0';
  this->ArIgnoreOuterRef = '\0';
  this->ArNoIntraPropertyDelta = '\0';
  this->ArNoDelta = '\0';
  this->ArIgnoreArchetypeRef = '\0';
  this->ArForceByteSwapping = '\0';
  this->ArRequiresLocalizationGather = '\0';
  this->ArContainsMap = '\0';
  this->ArContainsCode = '\0';
  this->ArShouldSkipUpdateCustomVersion = '\0';
  this->ArShouldSkipCompilingAssets = '\0';
  this->ArIsCriticalError = '\0';
  this->ArIsError = '\0';
  this->ArIsPersistent = '\0';
  this->ArForceUnicode = '\0';
  this->ArUseUnversionedPropertySerialization = '\0';
  this->ArWantBinaryPropertySerialization = '\0';
  this->ArIsTextFormat = '\0';
  this->ArIsTransacting = '\0';
  this->ArIsSaving = '\0';
  this->ArIsLoadingFromCookedPackage = '\0';
  this->ArSerializingDefaults = 0;
  this->ArPortFlags = 0;
  this->ArMaxSerializeSize = 0;
  this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  this->SavePackageData = (FArchiveSavePackageData *)0x0;
  this->SerializedProperty = (FProperty *)0x0;
  if (pFVar3 != (FArchiveSerializedPropertyChain *)0x0) {
    FVar4 = (pFVar3->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FProperty_*>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    ::operator_delete(pFVar3,0x58);
  }
  this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001419a8a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this);
  return;
}

// ResetCustomVersions @ 1419a8b10

void __thiscall FArchiveState::ResetCustomVersions(FArchiveState *this)

{
  this->bCustomVersionsAreReset = true;
  return;
}

// SetArchiveState @ 1419aad80

void __thiscall FArchiveState::SetArchiveState(FArchiveState *this,FArchiveState *param_1)

{
  FScriptContainerElement *pFVar1;
  FArchiveState *pFVar2;
  FCustomVersionContainer *pFVar3;
  FArchiveState *local_res8;
  
  local_res8 = param_1;
  pFVar2 = (FArchiveState *)(**(code **)(this->_padding_ + 8))();
  `FArchiveState::SetArchiveState'::__l2::<lambda_1>::operator()(&local_res8,pFVar2);
  for (pFVar2 = pFVar2->NextProxy; pFVar2 != (FArchiveState *)0x0; pFVar2 = pFVar2->NextProxy) {
    pFVar2->ActiveFPLB = &pFVar2->InlineFPLB;
    (pFVar2->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar2->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar2->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    CopyTrivialFArchiveStatusMembers(pFVar2,param_1);
    (**(code **)(pFVar2->_padding_ + 0xa8))
              (pFVar2,param_1->SerializedPropertyChain,param_1->SerializedProperty);
    pFVar2->ArIsFilterEditorOnly = '\0';
    pFVar3 = pFVar2->CustomVersionContainer;
    pFVar2->bCustomVersionsAreReset = param_1->bCustomVersionsAreReset;
    if (param_1->CustomVersionContainer == (FCustomVersionContainer *)0x0) {
      if (pFVar3 != (FCustomVersionContainer *)0x0) {
        pFVar1 = (pFVar3->Versions).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::operator_delete(pFVar3,0x10);
        pFVar2->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      }
    }
    else if (pFVar3 == (FCustomVersionContainer *)0x0) {
      pFVar3 = ::operator_new(0x10);
      if (pFVar3 == (FCustomVersionContainer *)0x0) {
        pFVar2->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      }
      else {
        pFVar3 = FCustomVersionContainer::FCustomVersionContainer
                           (pFVar3,param_1->CustomVersionContainer);
        pFVar2->CustomVersionContainer = pFVar3;
      }
    }
    else {
      FCustomVersionContainer::operator=(pFVar3,param_1->CustomVersionContainer);
    }
  }
  return;
}

// SetCriticalError @ 1419aaeb0

void __thiscall FArchiveState::SetCriticalError(FArchiveState *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 6;
  for (lVar1 = *(longlong *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 6;
  }
  return;
}

// SetCustomVersion @ 1419aaef0

void __thiscall
FArchiveState::SetCustomVersion(FArchiveState *this,FGuid *param_1,int param_2,FName param_3)

{
  FCustomVersionContainer *this_00;
  FGuid local_18;
  
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))();
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  FCustomVersionContainer::SetVersion(this_00,&local_18,param_2,param_3);
  return;
}

// SetCustomVersions @ 1419aaf40

void __thiscall
FArchiveState::SetCustomVersions(FArchiveState *this,FCustomVersionContainer *param_1)

{
  FCustomVersionContainer *pFVar1;
  
  if (this->CustomVersionContainer != (FCustomVersionContainer *)0x0) {
    FCustomVersionContainer::operator=(this->CustomVersionContainer,param_1);
    this->bCustomVersionsAreReset = false;
    return;
  }
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FCustomVersionContainer *)0x0) {
    pFVar1 = FCustomVersionContainer::FCustomVersionContainer(pFVar1,param_1);
    this->CustomVersionContainer = pFVar1;
    this->bCustomVersionsAreReset = false;
    return;
  }
  this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
  this->bCustomVersionsAreReset = false;
  return;
}

// SetEngineNetVer @ 1419aafc0

void __thiscall FArchiveState::SetEngineNetVer(FArchiveState *this,uint param_1)

{
  FName FVar1;
  FCustomVersionContainer *this_00;
  FGuid local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&EngineNetworkVersionName,"EngineNetworkVersion");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = EngineNetworkVersionName;
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))(this);
  local_18 = FEngineNetworkCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(this_00,&local_18,param_1,FVar1);
  return;
}

// SetEngineVer @ 1419ab080

void __thiscall FArchiveState::SetEngineVer(FArchiveState *this,FEngineVersionBase *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  uVar1 = param_1->Minor;
  uVar2 = param_1->Patch;
  uVar3 = *(undefined2 *)&param_1->field_0x6;
  (this->ArEngineVer).Major = param_1->Major;
  (this->ArEngineVer).Minor = uVar1;
  (this->ArEngineVer).Patch = uVar2;
  *(undefined2 *)&(this->ArEngineVer).field_0x6 = uVar3;
  (this->ArEngineVer).Changelist = param_1->Changelist;
  return;
}

// SetError @ 1419ab0a0

void __thiscall FArchiveState::SetError(FArchiveState *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 2;
  for (lVar1 = *(longlong *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 2;
  }
  return;
}

// SetForceUnicode @ 1419ab0e0

void __thiscall FArchiveState::SetForceUnicode(FArchiveState *this,bool param_1)

{
  this->ArForceUnicode = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 7;
  return;
}

// SetGameNetVer @ 1419ab100

void __thiscall FArchiveState::SetGameNetVer(FArchiveState *this,uint param_1)

{
  FName FVar1;
  FCustomVersionContainer *this_00;
  FGuid local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&GameNetworkVersionName,"GameNetworkVersion");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = GameNetworkVersionName;
  this_00 = (FCustomVersionContainer *)(**(code **)(this->_padding_ + 0x60))(this);
  local_18 = FGameNetworkCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(this_00,&local_18,param_1,FVar1);
  return;
}

// SetIsLoading @ 1419ab1c0

void __thiscall FArchiveState::SetIsLoading(FArchiveState *this,bool param_1)

{
  this->ArIsLoading = '\0';
  this->field_0x28 = this->field_0x28 | param_1;
  return;
}

// SetIsLoadingFromCookedPackage @ 1419ab1d0

void __thiscall FArchiveState::SetIsLoadingFromCookedPackage(FArchiveState *this,bool param_1)

{
  this->ArIsLoadingFromCookedPackage = '\0';
  this->field_0x28 = this->field_0x28 | param_1 * '\x02';
  return;
}

// SetIsPersistent @ 1419ab1e0

void __thiscall FArchiveState::SetIsPersistent(FArchiveState *this,bool param_1)

{
  this->ArIsPersistent = '\0';
  this->field_0x29 = this->field_0x29 | param_1;
  return;
}

// SetIsSaving @ 1419ab1f0

void __thiscall FArchiveState::SetIsSaving(FArchiveState *this,bool param_1)

{
  this->ArIsSaving = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 2;
  return;
}

// SetIsTextFormat @ 1419ab210

void __thiscall FArchiveState::SetIsTextFormat(FArchiveState *this,bool param_1)

{
  this->ArIsTextFormat = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 4;
  return;
}

// SetIsTransacting @ 1419ab230

void __thiscall FArchiveState::SetIsTransacting(FArchiveState *this,bool param_1)

{
  this->ArIsTransacting = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 3;
  return;
}

// SetLicenseeUEVer @ 1419ab250

void __thiscall FArchiveState::SetLicenseeUEVer(FArchiveState *this,int param_1)

{
  this->ArLicenseeUEVer = param_1;
  return;
}

// SetMigratingRemoteObjects @ 1419ab260

void __thiscall FArchiveState::SetMigratingRemoteObjects(FArchiveState *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                     ,0x26f,
                     L"SetMigratingRemoteObjects() can only be used in a build with remote object handles enabled"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetSerializedPropertyChain @ 1419ab3f0

void __thiscall
FArchiveState::SetSerializedPropertyChain
          (FArchiveState *this,FArchiveSerializedPropertyChain *param_1,FProperty *param_2)

{
  ForElementType<FProperty_*> FVar1;
  FArchiveSerializedPropertyChain *pFVar2;
  FProperty *pFVar3;
  
  if ((param_1 == (FArchiveSerializedPropertyChain *)0x0) ||
     ((param_1->SerializedPropertyChain).ArrayNum < 1)) {
    pFVar2 = this->SerializedPropertyChain;
    if (pFVar2 != (FArchiveSerializedPropertyChain *)0x0) {
      FVar1 = (pFVar2->SerializedPropertyChain).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<FProperty_*>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(pFVar2,0x58);
    }
    this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  }
  else {
    pFVar2 = this->SerializedPropertyChain;
    if (this->SerializedPropertyChain == (FArchiveSerializedPropertyChain *)0x0) {
      pFVar2 = ::operator_new(0x58);
      if (pFVar2 != (FArchiveSerializedPropertyChain *)0x0) {
        (pFVar2->SerializedPropertyChain).AllocatorInstance.SecondaryData =
             (ForElementType<FProperty_*>)0x0;
        (pFVar2->SerializedPropertyChain).ArrayNum = 0;
        *(undefined8 *)&(pFVar2->SerializedPropertyChain).ArrayMax = 8;
        this->SerializedPropertyChain = pFVar2;
        FArchiveSerializedPropertyChain::operator=(pFVar2,param_1);
        goto LAB_1419ab490;
      }
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      pFVar2 = (FArchiveSerializedPropertyChain *)0x0;
    }
    FArchiveSerializedPropertyChain::operator=(pFVar2,param_1);
  }
LAB_1419ab490:
  if (param_2 != (FProperty *)0x0) {
    this->SerializedProperty = param_2;
    return;
  }
  pFVar2 = this->SerializedPropertyChain;
  if ((pFVar2 != (FArchiveSerializedPropertyChain *)0x0) &&
     (0 < (pFVar2->SerializedPropertyChain).ArrayNum)) {
    pFVar3 = FArchiveSerializedPropertyChain::GetPropertyFromStack(pFVar2,0);
    this->SerializedProperty = pFVar3;
    return;
  }
  this->SerializedProperty = (FProperty *)0x0;
  return;
}

// SetShouldSkipUpdateCustomVersion @ 1419ab500

void __thiscall FArchiveState::SetShouldSkipUpdateCustomVersion(FArchiveState *this,bool param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) & 0xef;
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | param_1 << 4;
  for (lVar1 = *(longlong *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) & 0xef;
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | param_1 << 4;
  }
  return;
}

// SetUEVer @ 1419ab5e0

void __thiscall FArchiveState::SetUEVer(FArchiveState *this,FPackageFileVersion param_1)

{
  this->ArUEVer = param_1;
  return;
}

// SetUseUnversionedPropertySerialization @ 1419ab5f0

void __thiscall
FArchiveState::SetUseUnversionedPropertySerialization(FArchiveState *this,bool param_1)

{
  this->ArUseUnversionedPropertySerialization = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 6;
  return;
}

// SetWantBinaryPropertySerialization @ 1419ab610

void __thiscall FArchiveState::SetWantBinaryPropertySerialization(FArchiveState *this,bool param_1)

{
  this->ArWantBinaryPropertySerialization = '\0';
  this->field_0x28 = this->field_0x28 | param_1 << 5;
  return;
}

// ThisRequiresLocalizationGather @ 1419acbc0

void __thiscall FArchiveState::ThisRequiresLocalizationGather(FArchiveState *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 0x80;
  for (lVar1 = *(longlong *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 0x80;
  }
  return;
}

// UnlinkProxy @ 1419b10b0

void __cdecl FArchiveState::UnlinkProxy(FArchiveState *param_1,FArchiveState *param_2)

{
  FArchiveState *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = param_1->NextProxy;
  while( true ) {
    if (pFVar1 == param_2) {
      param_1->NextProxy = param_2->NextProxy;
      param_2->NextProxy = (FArchiveState *)0x0;
      return;
    }
    param_1 = param_1->NextProxy;
    if ((param_1 == (FArchiveState *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Prev",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                           ,0x122,L"Proxy link not found - likely  lifetime violation"), bVar3))
    break;
    pFVar1 = param_1->NextProxy;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

