// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 120

// <lambda_1> @ 141852e30

<lambda_1> * __thiscall
`FConfigCacheIni::SetArrayInSectionOfStaticLayer'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(wchar_t **)this = param_1->Section;
  *(FName *)((longlong)this + 8) = param_1->Key;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Values).ArrayNum;
  pFVar3 = (param_1->Values).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar3,iVar2);
  }
  *(bool *)((longlong)this + 0x20) = param_1->bClearArray;
  ::FString::FString((FString *)((longlong)this + 0x28),&param_1->LayerSubstring);
  return this;
}

// FConfigCacheIni @ 141854130

FConfigCacheIni * __thiscall
FConfigCacheIni::FConfigCacheIni
          (FConfigCacheIni *this,EConfigCacheType param_1,FName param_2,bool param_3)

{
  this->bAreFileOperationsDisabled = false;
  this->bIsReadyForUse = false;
  this->_padding_ = (longlong)&___7FConfigCacheIni__6B_;
  this->bGloballyRegistered = param_3;
  this->Type = param_1;
  this->PlatformName = param_2;
  FKnownConfigFiles::FKnownConfigFiles(&this->KnownFiles);
  *(undefined8 *)&this->OtherFiles = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x8 = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x20 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x28 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherFiles).field_0x34 = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x40 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OtherFilesLock,4000);
  (this->OtherFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherFileNames).ArrayNum = 0;
  (this->OtherFileNames).ArrayMax = 0;
  (this->PendingModificationPlugins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingModificationPlugins).ArrayNum = 0;
  (this->PendingModificationPlugins).ArrayMax = 0;
  this->StagedGlobalConfigCache =
       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  *(undefined8 *)&this->StagedPluginConfigCache = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x8 = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x20 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x28 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x34 = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x40 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x48 = 0;
  (this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigBranchNamesToNeverUnload).ArrayNum = 0;
  (this->ConfigBranchNamesToNeverUnload).ArrayMax = 0;
  return this;
}

// FConfigCacheIni @ 141854240

/* WARNING: Enum "Type": Some values do not have unique names */

FConfigCacheIni * __thiscall FConfigCacheIni::FConfigCacheIni(FConfigCacheIni *this)

{
  this->_padding_ = (longlong)&___7FConfigCacheIni__6B_;
  (this->PlatformName).ComparisonIndex = 0;
  (this->PlatformName).Number = 0;
  FKnownConfigFiles::FKnownConfigFiles(&this->KnownFiles);
  *(undefined8 *)&this->OtherFiles = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x8 = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x20 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x28 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherFiles).field_0x34 = 0;
  *(undefined8 *)&(this->OtherFiles).field_0x40 = 0;
  *(undefined4 *)&(this->OtherFiles).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OtherFilesLock,4000);
  (this->OtherFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherFileNames).ArrayNum = 0;
  (this->OtherFileNames).ArrayMax = 0;
  (this->PendingModificationPlugins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingModificationPlugins).ArrayNum = 0;
  (this->PendingModificationPlugins).ArrayMax = 0;
  this->StagedGlobalConfigCache =
       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  *(undefined8 *)&this->StagedPluginConfigCache = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x8 = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x20 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x28 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x34 = 0;
  *(undefined8 *)&(this->StagedPluginConfigCache).field_0x40 = 0;
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x48 = 0;
  (this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigBranchNamesToNeverUnload).ArrayNum = 0;
  (this->ConfigBranchNamesToNeverUnload).ArrayMax = 0;
  if (GIsRetrievingVTablePtr == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  return this;
}

// ~FConfigCacheIni @ 141857130

void __thiscall FConfigCacheIni::~FConfigCacheIni(FConfigCacheIni *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FConfigCacheIni__6B_;
  ::FString::FString(&local_18,L"");
  Flush(this,true,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)(this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data,
             (this->ConfigBranchNamesToNeverUnload).ArrayNum);
  pFVar1 = (this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StagedPluginConfigCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StagedPluginConfigCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StagedPluginConfigCache);
  pFVar1 = (this->PendingModificationPlugins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->OtherFileNames).AllocatorInstance.Data,
             (this->OtherFileNames).ArrayNum);
  pFVar1 = (this->OtherFileNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OtherFilesLock);
  *(undefined4 *)&(this->OtherFiles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OtherFiles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OtherFiles);
  FKnownConfigFiles::~FKnownConfigFiles(&this->KnownFiles);
  return;
}

// operator() @ 141859f20

void __thiscall
`FConfigCacheIni::AddToSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FConfigExpansion *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *local_res8;
  FConfigValue local_28;
  
  ::FString::FString(&local_28.SavedValue,this);
  local_28.ValueType = ArrayAdd;
  local_28.bExpandOnDemand = false;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar2.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar2.Data,0);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar2.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar1 = FindNextExpansion((wchar_t *)FVar2.Data,&local_res8);
  local_28.bExpandOnDemand = pFVar1 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_2,(FName *)((longlong)this + 0x10),&local_28);
  if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141859fd0

void __thiscall
`FConfigCacheIni::AddUniqueToSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FConfigExpansion *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *local_res8;
  FConfigValue local_28;
  
  ::FString::FString(&local_28.SavedValue,this);
  local_28.ValueType = ArrayAddUnique;
  local_28.bExpandOnDemand = false;
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar2.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar2.Data,0);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar2.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar1 = FindNextExpansion((wchar_t *)FVar2.Data,&local_res8);
  local_28.bExpandOnDemand = pFVar1 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_2,(FName *)((longlong)this + 0x10),&local_28);
  if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14185a3c0

void __thiscall
`FConfigCacheIni::RemoveFromSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FName FVar1;
  uint uVar2;
  FConfigExpansion *pFVar3;
  ForAnyElementType FVar4;
  FName local_res8;
  FConfigValue local_28;
  
  FVar1 = *(FName *)this;
  local_res8 = FVar1;
  if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                         *)param_2,FVar1.Number + uVar2,&local_res8);
  }
  ::FString::FString(&local_28.SavedValue,(FString *)((longlong)this + 8));
  local_28.ValueType = Remove;
  local_28.bExpandOnDemand = false;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar4.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar4.Data,0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar4.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar3 = FindNextExpansion((wchar_t *)FVar4.Data,(wchar_t **)&local_res8);
  local_28.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_2,this,&local_28);
  if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14185a4a0

void __thiscall
`FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FName FVar1;
  uint uVar2;
  FConfigExpansion *pFVar3;
  ForAnyElementType FVar4;
  FName local_res8;
  FConfigValue local_28;
  
  FVar1 = *(FName *)this;
  local_res8 = FVar1;
  if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                         *)param_2,FVar1.Number + uVar2,&local_res8);
  }
  ::FString::FString(&local_28.SavedValue,L"__Clear__");
  local_28.ValueType = Clear;
  local_28.bExpandOnDemand = false;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar4.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar4.Data,0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.SavedValue.Data.ArrayNum != 0) {
    FVar4.Data = local_28.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar3 = FindNextExpansion((wchar_t *)FVar4.Data,(wchar_t **)&local_res8);
  local_28.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_2,this,&local_28);
  if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14185abb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FConfigCacheIni::SetArrayInSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  FConfigCommandStreamSection *this_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  FConfigExpansion *pFVar10;
  ulonglong uVar11;
  TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *pTVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_01;
  longlong lVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FString *pFVar21;
  bool bVar22;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268;
  undefined1 local_267 [3];
  uint local_264;
  ForAnyElementType local_260;
  undefined8 local_258;
  TArray<FConfigValue_const_*,TSizedDefaultAllocator<32>_> local_250;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e [6];
  FString *local_238;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  ForAnyElementType local_220;
  int local_218;
  int local_214;
  uint local_210;
  FString local_208;
  FScriptContainerElement *local_1f8;
  void *local_1f0;
  FConfigValue local_1e8;
  FConfigValue local_1d0;
  FConfigValue local_1b8;
  FConfigValue local_1a0;
  FString local_188;
  FName local_178;
  FScriptContainerElement *local_170;
  FConfigCommandStreamSection *local_168;
  FName *local_160;
  wchar_t *local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  wchar_t *local_140;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar1 = (FName *)((longlong)this + 8);
  local_264 = 0;
  FVar3 = *pFVar1;
  uVar18 = 0;
  local_1f0 = this;
  local_178 = FVar3;
  local_168 = param_2;
  local_160 = pFVar1;
  if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
    uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                         *)param_2,FVar3.Number + uVar7,&local_178);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    FConfigFile::FConfigFile(&local_138);
    FConfigBranch::MergeStaticLayersUpTo(param_1,(FString *)((longlong)this + 0x28),&local_138);
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    ::FString::FString(&local_188,*(wchar_t **)this);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar8 = local_188.Data.ArrayNum + -1;
    FVar17.Data = local_188.Data.AllocatorInstance.Data;
    if (local_188.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar17.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar17.Data);
    iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)&local_138,uVar7,&local_188);
    pTVar12 = (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *)0x0;
    if (iVar8 != -1) {
      pTVar12 = (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)((longlong)iVar8 * 0x110 + local_138._padding_);
    }
    this_01 = (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *)&pTVar12->field_0x10;
    if (pTVar12 ==
        (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         *)0x0) {
      this_01 = (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (this_01 !=
        (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         *)0x0) {
      TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::MultiFindPointer<TSizedDefaultAllocator<32>_>(this_01,*pFVar1,&local_250,true);
    }
    local_210 = *(uint *)((longlong)this + 0x18);
    uVar11 = (ulonglong)(int)local_210;
    pFVar20 = *(FScriptContainerElement **)((longlong)this + 0x10);
    local_170 = pFVar20 + uVar11 * 0x10;
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258 = 0;
    while( true ) {
      pFVar4 = local_170;
      local_1f8 = pFVar20;
      if (*(int *)((longlong)this + 0x18) != (int)uVar11) {
        local_268 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_268);
      }
      pFVar1 = local_160;
      this_00 = local_168;
      iVar8 = local_250.ArrayNum;
      pFVar2 = local_250.AllocatorInstance.Data + (longlong)local_250.ArrayNum * 8;
      FVar17.Data = local_250.AllocatorInstance.Data;
      if (pFVar20 == pFVar4) break;
      while( true ) {
        if (local_250.ArrayNum != iVar8) {
          local_267[0] = 0;
          `TCheckedPointerIterator<FConfigValue_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_267);
        }
        if (FVar17.Data == pFVar2) {
          if (((local_260.Data <= pFVar20) &&
              (pFVar20 < local_260.Data + (longlong)local_258._4_4_ * 0x10)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_258;
          if ((int)local_258 == local_258._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_260,(int *)((longlong)&local_258 + 4));
          }
          local_258 = CONCAT44(local_258._4_4_,iVar8 + 1);
          ::FString::FString((FString *)(local_260.Data + (longlong)iVar8 * 0x10),(FString *)pFVar20
                            );
          goto LAB_14185b1e3;
        }
        local_238 = *(FString **)FVar17.Data;
        if (*(char *)((longlong)&local_238[1].Data.AllocatorInstance.Data + 5) == '\0') {
          iVar19 = (local_238->Data).ArrayNum;
          uVar18 = uVar18 | 2;
          pFVar4 = (local_238->Data).AllocatorInstance.Data;
          local_220.Data = (FScriptContainerElement *)0x0;
          local_264 = uVar18;
          local_218 = iVar19;
          if (iVar19 == 0) {
            local_214 = 0;
            FVar14.Data = local_220.Data;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar19,0,&local_220,iVar19,&local_214);
            memcpy(local_220.Data,pFVar4,(longlong)iVar19 * 2);
            FVar14.Data = local_220.Data;
            iVar19 = local_218;
          }
        }
        else {
          uVar18 = uVar18 | 1;
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Data.ArrayNum = 0;
          local_208.Data.ArrayMax = 0;
          local_264 = uVar18;
          FConfigValue::ExpandValue(local_238,&local_208);
          FVar14.Data = local_208.Data.AllocatorInstance.Data;
          iVar19 = local_208.Data.ArrayNum;
        }
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228 = iVar19;
        if (iVar19 == 0) {
          local_224 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar19,0,&local_230,iVar19,&local_224);
          memcpy(local_230.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
        iVar19 = 0;
        if (((uVar18 & 2) != 0) &&
           (uVar18 = uVar18 & 0xfffffffd, local_264 = uVar18,
           local_220.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_220.Data);
        }
        if (((uVar18 & 1) != 0) &&
           (uVar18 = uVar18 & 0xfffffffe, local_264 = uVar18,
           local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_228 == *(int *)(pFVar20 + 8)) {
          if (local_228 < 2) {
            bVar22 = true;
          }
          else {
            iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_230.Data,*(wchar_t **)pFVar20)
            ;
            bVar22 = iVar9 == 0;
          }
        }
        else {
          bVar22 = *(int *)(pFVar20 + 8) + local_228 == 1;
        }
        if (local_230.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data);
        }
        if (bVar22) break;
        FVar17.Data = FVar17.Data + 8;
      }
      if (((local_250.AllocatorInstance.Data <= (FScriptContainerElement *)&local_238) &&
          ((FScriptContainerElement *)&local_238 <
           local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 8)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17.Data = local_250.AllocatorInstance.Data;
      lVar13 = (longlong)local_250.ArrayNum;
      if (local_250.ArrayNum != 0) {
        lVar15 = 0;
        bVar22 = *(FString **)local_250.AllocatorInstance.Data != local_238;
        iVar8 = iVar19;
        do {
          iVar9 = iVar8;
          do {
            lVar15 = lVar15 + 1;
            iVar9 = iVar9 + 1;
            if (lVar13 <= lVar15) break;
          } while (bVar22 == (*(FString **)(FVar17.Data + lVar15 * 8) != local_238));
          if (bVar22 != false) {
            if (iVar19 != iVar8) {
              memmove(FVar17.Data + (longlong)iVar19 * 8,FVar17.Data + (longlong)iVar8 * 8,
                      (longlong)(iVar9 - iVar8) << 3);
            }
            iVar19 = iVar19 + (iVar9 - iVar8);
          }
          bVar22 = (bool)(bVar22 ^ 1);
          iVar8 = iVar9;
        } while (lVar15 < lVar13);
        local_250.ArrayNum = iVar19;
        pFVar20 = local_1f8;
        uVar18 = local_264;
      }
LAB_14185b1e3:
      pFVar20 = pFVar20 + 0x10;
      uVar11 = (ulonglong)local_210;
      this = local_1f0;
    }
    while( true ) {
      if (local_250.ArrayNum != iVar8) {
        `TCheckedPointerIterator<FConfigValue_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_23f);
      }
      if (FVar17.Data == pFVar2) break;
      ::FString::FString(&local_1b8.SavedValue,*(FString **)FVar17.Data);
      iVar19 = local_1b8.SavedValue.Data.ArrayNum;
      local_1b8.ValueType = Remove;
      local_1b8.bExpandOnDemand = false;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_1b8.SavedValue.Data.ArrayNum != 0) {
        FVar14.Data = local_1b8.SavedValue.Data.AllocatorInstance.Data;
      }
      local_1b8.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar14.Data,0);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (iVar19 != 0) {
        FVar14.Data = local_1b8.SavedValue.Data.AllocatorInstance.Data;
      }
      pFVar10 = FindNextExpansion((wchar_t *)FVar14.Data,&local_148);
      local_1b8.bExpandOnDemand = pFVar10 != (FConfigExpansion *)0x0;
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)this_00,pFVar1,&local_1b8);
      if (local_1b8.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.SavedValue.Data.AllocatorInstance.Data);
      }
      FVar17.Data = FVar17.Data + 8;
    }
    iVar8 = (int)local_258;
    pFVar20 = local_260.Data + (longlong)(int)local_258 * 0x10;
    FVar17.Data = local_260.Data;
    while( true ) {
      if ((int)local_258 != iVar8) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_23e);
      }
      if (FVar17.Data == pFVar20) break;
      ::FString::FString(&local_1a0.SavedValue,(FString *)FVar17.Data);
      iVar19 = local_1a0.SavedValue.Data.ArrayNum;
      local_1a0.ValueType = ArrayAddUnique;
      local_1a0.bExpandOnDemand = false;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_1a0.SavedValue.Data.ArrayNum != 0) {
        FVar14.Data = local_1a0.SavedValue.Data.AllocatorInstance.Data;
      }
      local_1a0.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar14.Data,0);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (iVar19 != 0) {
        FVar14.Data = local_1a0.SavedValue.Data.AllocatorInstance.Data;
      }
      pFVar10 = FindNextExpansion((wchar_t *)FVar14.Data,&local_140);
      local_1a0.bExpandOnDemand = pFVar10 != (FConfigExpansion *)0x0;
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)this_00,pFVar1,&local_1a0);
      if (local_1a0.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.SavedValue.Data.AllocatorInstance.Data);
      }
      FVar17.Data = FVar17.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_260.Data,(int)local_258);
    if (local_260.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data);
    }
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    FConfigFile::~FConfigFile(&local_138);
  }
  else {
    ::FString::FString(&local_1e8.SavedValue,L"___Clear___");
    local_1e8.ValueType = Clear;
    local_1e8.bExpandOnDemand = false;
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1e8.SavedValue.Data.ArrayNum != 0) {
      FVar17.Data = local_1e8.SavedValue.Data.AllocatorInstance.Data;
    }
    local_1e8.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar17.Data,0);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1e8.SavedValue.Data.ArrayNum != 0) {
      FVar17.Data = local_1e8.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar10 = FindNextExpansion((wchar_t *)FVar17.Data,&local_158);
    local_1e8.bExpandOnDemand = pFVar10 != (FConfigExpansion *)0x0;
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)param_2,pFVar1,&local_1e8);
    if (local_1e8.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SavedValue.Data.AllocatorInstance.Data);
    }
    pvVar6 = local_1f0;
    iVar8 = *(int *)((longlong)this + 0x18);
    pFVar16 = *(FString **)((longlong)this + 0x10);
    pFVar21 = pFVar16 + iVar8;
    while( true ) {
      if (*(int *)((longlong)pvVar6 + 0x18) != iVar8) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_240);
      }
      if (pFVar16 == pFVar21) break;
      ::FString::FString(&local_1d0.SavedValue,pFVar16);
      iVar19 = local_1d0.SavedValue.Data.ArrayNum;
      local_1d0.ValueType = ArrayAddUnique;
      local_1d0.bExpandOnDemand = false;
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1d0.SavedValue.Data.ArrayNum != 0) {
        FVar17.Data = local_1d0.SavedValue.Data.AllocatorInstance.Data;
      }
      local_1d0.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar17.Data,0);
      FVar17.Data = (FScriptContainerElement *)L"";
      if (iVar19 != 0) {
        FVar17.Data = local_1d0.SavedValue.Data.AllocatorInstance.Data;
      }
      pFVar10 = FindNextExpansion((wchar_t *)FVar17.Data,&local_150);
      local_1d0.bExpandOnDemand = pFVar10 != (FConfigExpansion *)0x0;
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)param_2,(FName *)((longlong)pvVar6 + 8),&local_1d0);
      if (local_1d0.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.SavedValue.Data.AllocatorInstance.Data);
      }
      pFVar16 = pFVar16 + 1;
    }
  }
  return;
}

// operator() @ 14185b390

void __thiscall
`FConfigCacheIni::SetInSectionOfStaticLayer'::__l2::<lambda_1>::operator()
          (void *this,FConfigBranch *param_1,FConfigCommandStreamSection *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FConfigExpansion *pFVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  wchar_t *local_res20;
  wchar_t *local_78;
  TArray<FConfigValue_*,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  uint local_50;
  undefined2 local_4c;
  FConfigValue local_48;
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>
            ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_2,*(FName *)((longlong)this + 0x10),&local_70,false);
  if (local_70.ArrayNum == 1) {
    ::FString::FString(&local_60,this);
    iVar5 = local_60.Data.ArrayNum;
    local_4c = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar9.Data = local_60.Data.AllocatorInstance.Data;
    }
    local_50 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      FVar9.Data = local_60.Data.AllocatorInstance.Data;
    }
    pFVar8 = FindNextExpansion((wchar_t *)FVar9.Data,&local_res20);
    local_4c = CONCAT11(pFVar8 != (FConfigExpansion *)0x0,(undefined1)local_4c);
    if (local_70.ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar1 = *(FString **)local_70.AllocatorInstance.Data;
    if (pFVar1 != &local_60) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->Data).ArrayNum = local_60.Data.ArrayNum;
      (pFVar1->Data).ArrayMax = local_60.Data.ArrayMax;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
    }
    *(uint *)&pFVar1[1].Data.AllocatorInstance.Data = local_50;
    *(undefined1 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4) = (undefined1)local_4c;
    *(undefined1 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 5) = local_4c._1_1_;
    local_48.SavedValue.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
  }
  else {
    FVar3 = *(FName *)((longlong)this + 0x10);
    local_res8 = FVar3;
    if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
      uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                           *)param_2,FVar3.Number + uVar7,&local_res8);
    }
    ::FString::FString(&local_48.SavedValue,this);
    local_48.ValueType = Set;
    local_48.bExpandOnDemand = false;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.SavedValue.Data.ArrayNum != 0) {
      FVar9.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
    }
    local_48.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.SavedValue.Data.ArrayNum != 0) {
      FVar9.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar8 = FindNextExpansion((wchar_t *)FVar9.Data,&local_78);
    local_48.bExpandOnDemand = pFVar8 != (FConfigExpansion *)0x0;
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)param_2,(FName *)((longlong)this + 0x10),&local_48);
  }
  if (local_48.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SavedValue.Data.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14185ba20

void __thiscall
`FConfigCacheIni::AddPluginsToBranches'::__l64::<lambda_1>::operator()
          (void *this,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  
  uVar6 = ((uint)(*(ulonglong *)((longlong)this + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)this + 8) >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pTVar5 = TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FConfigBranch_*_const_&>
                     (*(TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
                        **)this,uVar6 >> 0x10 ^ uVar6,(FConfigBranch **)((longlong)this + 8));
  if (pTVar5 == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
    ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
              ((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x20,
               (FDynamicLayerInfo *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// Add @ 14185c6c0

FConfigFile * __thiscall
FConfigCacheIni::Add(FConfigCacheIni *this,FString *param_1,FConfigFile *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FConfigBranch *pFVar8;
  FConfigBranch *pFVar9;
  FConfigFile *pFVar10;
  FConfigBranch **ppFVar11;
  wchar_t *pwVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  
  pFVar8 = ::operator_new(0x628);
  pFVar9 = (FConfigBranch *)0x0;
  if (pFVar8 != (FConfigBranch *)0x0) {
    pFVar9 = FConfigBranch::FConfigBranch(pFVar8,param_2);
  }
  pFVar9->IniName = param_2->Name;
  ::FString::operator=(&pFVar9->IniPath,param_1);
  lpCriticalSection = &this->OtherFilesLock;
  pwVar12 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FConfigFile *)(*pcVar4)();
    return pFVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar11 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
             ::Find((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                     *)&this->OtherFiles,param_1);
  if (ppFVar11 == (FConfigBranch **)0x0) {
    pTVar13 = &this->OtherFileNames;
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) &&
        (param_1 < pFVar3 + (longlong)(this->OtherFileNames).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FConfigFile *)(*pcVar4)();
      return pFVar10;
    }
    iVar6 = (this->OtherFileNames).ArrayNum;
    piVar1 = &(this->OtherFileNames).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->OtherFileNames).ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       param_1);
  }
  iVar2 = (param_1->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar12);
  ppFVar11 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                         *)&this->OtherFiles,uVar7,param_1);
  pFVar8 = *ppFVar11;
  if (pFVar8 != (FConfigBranch *)0x0) {
    FConfigBranch::~FConfigBranch(pFVar8);
    ::operator_delete(pFVar8,0x628);
  }
  *ppFVar11 = pFVar9;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return &pFVar9->InMemoryFile;
}

// AddMultiplePluginsToAllBranches @ 14185ed50

void __cdecl
FConfigCacheIni::AddMultiplePluginsToAllBranches
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,FConfigModificationTracker *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  AddPluginsToBranches(GConfig,param_1,param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
  iVar10 = 0;
  uVar4 = 1;
  iVar11 = 0;
  uVar12 = ConfigForPlatform._40_4_;
  uVar5 = 0;
  if (uVar12 != 0) {
    puVar13 = (uint *)&ConfigForPlatform.field_0x10;
    if (ConfigForPlatform._32_8_ != 0) {
      puVar13 = (uint *)ConfigForPlatform._32_8_;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar5 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14185ee1d;
      uVar5 = puVar13[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar14 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    uVar5 = iVar11 + -1 + local_res20;
    if ((int)uVar12 < (int)uVar5) {
      uVar5 = uVar12;
    }
  }
LAB_14185ee1d:
  bVar2 = ConfigForPlatform._40_1_;
  uVar8 = uVar12 & 0xffffffe0;
  uVar14 = ConfigForPlatform._40_8_ & 0xffffffff;
  TStack_68._padding_ = CONCAT44(uVar4,iVar10);
  TStack_68.CurrentBitIndex = uVar5;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_68._28_4_ = uVar5;
  TStack_68.BaseBitIndex = iVar11;
  uStack_48 = CONCAT44(uStack_74,ConfigForPlatform._8_4_ - ConfigForPlatform._52_4_);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ConfigForPlatform.field_0x10;
  if (((int)uVar12 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = ConfigForPlatform._40_4_;
  if (uVar12 != uVar5) {
    uVar14 = ConfigForPlatform._40_8_ & 0xffffffff;
    lVar6 = 0x154b7d880;
    if (ConfigForPlatform._32_8_ != 0) {
      lVar6 = ConfigForPlatform._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar10 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar10;
      uVar8 = uVar8 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14185ef30;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar14 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar14 = (ulonglong)uVar8;
  }
LAB_14185ef30:
  while( true ) {
    if (ConfigForPlatform._8_4_ - ConfigForPlatform._52_4_ != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FConfigCacheIni_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == (int)uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ConfigForPlatform.field_0x10))
    break;
    lVar6 = *(longlong *)(ConfigForPlatform._0_8_ + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x3e30);
    if ((pTVar9 == param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar10 = param_1->ArrayNum;
    if (iVar10 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,iVar10,(ForAnyElementType *)pTVar9,(int *)(lVar6 + 0x3e38),
                          (int *)(lVar6 + 0x3e3c));
      memcpy((pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 8,
             (param_1->AllocatorInstance).Data,(longlong)iVar10 << 3);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x00014185f021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
  return;
}

// AddNewBranch @ 14185f030

FConfigBranch * __thiscall FConfigCacheIni::AddNewBranch(FConfigCacheIni *this,FString *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FConfigBranch *pFVar7;
  FConfigBranch *pFVar8;
  FString *pFVar9;
  FConfigBranch **ppFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  int iVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  FName local_res8;
  FString local_38;
  
  pFVar7 = ::operator_new(0x628);
  pFVar8 = (FConfigBranch *)0x0;
  if (pFVar7 != (FConfigBranch *)0x0) {
    pFVar8 = FConfigBranch::FConfigBranch(pFVar7);
  }
  pFVar9 = FPaths::GetBaseFilename(&local_38,param_1,true);
  pwVar12 = L"";
  iVar13 = 0;
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar11);
  pFVar8->IniName = local_res8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&pFVar8->IniPath,param_1);
  lpCriticalSection = &this->OtherFilesLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConfigBranch *)(*pcVar3)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar10 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
             ::Find((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                     *)&this->OtherFiles,param_1);
  if (ppFVar10 == (FConfigBranch **)0x0) {
    pTVar14 = &this->OtherFileNames;
    pFVar2 = (pTVar14->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) &&
        (param_1 < pFVar2 + (longlong)(this->OtherFileNames).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FConfigBranch *)(*pcVar3)();
      return pFVar7;
    }
    iVar5 = (this->OtherFileNames).ArrayNum;
    piVar1 = &(this->OtherFileNames).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar14->AllocatorInstance,piVar1);
    }
    (this->OtherFileNames).ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)((pTVar14->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       param_1);
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 != 0) {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar13 = iVar5 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar12);
  ppFVar10 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                         *)&this->OtherFiles,uVar6,param_1);
  pFVar7 = *ppFVar10;
  if (pFVar7 != (FConfigBranch *)0x0) {
    FConfigBranch::~FConfigBranch(pFVar7);
    ::operator_delete(pFVar7,0x628);
  }
  *ppFVar10 = pFVar8;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar8;
}

// AddPluginToAllBranches @ 14185f230

void __cdecl
FConfigCacheIni::AddPluginToAllBranches(FName param_1,FConfigModificationTracker *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = param_1;
  AddMultiplePluginsToAllBranches(&local_18,param_2);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AddPluginsToBranches @ 14185f2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConfigCacheIni::AddPluginsToBranches
          (FConfigCacheIni *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FConfigModificationTracker *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  FDynamicLayerInfo *pFVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName FVar15;
  FConfigModificationTracker *pFVar16;
  FConfigCacheIni *pFVar17;
  FName *pFVar18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  TTuple<FName,FConfigCacheIni::FPluginInfo_*> *pTVar27;
  IFileManager *pIVar28;
  size_t sVar29;
  ulonglong uVar30;
  FString *pFVar31;
  FString *pFVar32;
  FConfigBranch *pFVar33;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar34;
  byte bVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ForAnyElementType FVar38;
  longlong lVar39;
  ForElementType<FSetElementId> FVar40;
  uint uVar41;
  int iVar42;
  wchar_t *pwVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  FName *pFVar47;
  FString *pFVar48;
  undefined1 *puVar49;
  FScriptContainerElement *pFVar50;
  ulonglong uVar51;
  uint *puVar52;
  longlong lVar53;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar54;
  ulong64 uVar55;
  undefined1 *puVar56;
  undefined1 auStackY_838 [32];
  undefined1 local_7f3;
  undefined1 local_7f2;
  undefined1 local_7f1;
  undefined1 local_7f0;
  undefined1 local_7ef [7];
  ForAnyElementType local_7e8;
  int local_7e0;
  int local_7dc;
  FScriptContainerElement *local_7d8;
  FName local_7d0;
  FName local_7c8;
  FString *local_7c0;
  undefined8 local_7b8;
  FLLMScope local_7b0 [2];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_7a8;
  undefined8 uStack_7a0;
  TBitArray<FDefaultBitArrayAllocator> *local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  int iStack_780;
  undefined4 uStack_77c;
  FConfigModificationTracker *local_778;
  ForAnyElementType local_770;
  int local_768;
  int local_764;
  FString local_760;
  int local_750;
  uint uStack_74c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_748;
  uint local_740;
  uint uStack_73c;
  uint uStack_738;
  undefined4 uStack_734;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_730;
  uint local_728;
  FString local_720;
  FScriptContainerElement *local_710;
  FConfigCacheIni *local_708;
  FConfigBranch *local_700;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_6f8;
  FName *local_6e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_6e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6d8;
  undefined8 uStack_6b8;
  FString local_6b0;
  FString local_6a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_690;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_670;
  FName local_650;
  FName local_648;
  FName local_640;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_638;
  FMemScope local_630;
  FName *local_628;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  undefined4 local_5e0;
  undefined1 local_5dc [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5c8;
  int local_5a8;
  int local_5a4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_598;
  undefined8 uStack_578;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  undefined8 uStack_548;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_540;
  longlong lStack_538;
  TBitArray<FDefaultBitArrayAllocator> *local_530;
  uint uStack_528;
  uint uStack_524;
  uint uStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  FString local_510;
  TStringView<wchar_t> local_500;
  wchar_t *local_4f0;
  undefined4 local_4e8;
  TStringView<wchar_t> local_4e0;
  FScriptContainerElement *local_4d0;
  int local_4c8;
  TStringView<wchar_t> local_4c0;
  FScriptContainerElement *local_4b0;
  int local_4a8;
  TStringView<wchar_t> local_4a0;
  wchar_t *local_490;
  undefined4 local_488;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420 [2];
  undefined4 local_3f4;
  undefined4 local_3d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d0;
  undefined1 local_3a8 [448];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1b8 [32];
  ForElementType<unsigned_int> local_198;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  FScriptContainerElement local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  undefined1 local_168 [32];
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  code *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_838;
  bVar14 = false;
  bVar13 = false;
  bVar11 = false;
  bVar10 = false;
  local_778 = param_2;
  local_708 = this;
  local_638 = param_1;
  FLLMScope::FLLMScope(local_7b0,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_630,ConfigSystem,true);
  local_728 = param_1->ArrayNum;
  uVar36 = (ulonglong)(int)local_728;
  pFVar47 = (FName *)(param_1->AllocatorInstance).Data;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_148 = 0;
  local_628 = pFVar47 + uVar36;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (ForElementType<FSetElementId>)0x0;
  local_120 = 0;
  while( true ) {
    pFVar18 = local_628;
    local_6e8 = pFVar47;
    if (param_1->ArrayNum != (int)uVar36) {
      local_7f3 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_7f3);
    }
    if (pFVar47 == pFVar18) break;
    local_7c8 = *pFVar47;
    EnterCriticalSection((LPCRITICAL_SECTION)&RegisteredPluginsLock);
    pTVar27 = TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
                      *)&RegisteredPlugins,local_7c8);
    if ((pTVar27 == (TTuple<FName,FConfigCacheIni::FPluginInfo_*> *)0x0) ||
       (pFVar50 = *(FScriptContainerElement **)&pTVar27->field_0x8, local_710 = pFVar50,
       pFVar50 == (FScriptContainerElement *)0x0)) {
      if (2 < (byte)LogConfig._0_1_) {
        ::FName::ToString(&local_7c8,&local_480);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&RegisteredPluginsLock);
      goto LAB_141860729;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&RegisteredPluginsLock);
    local_500.DataPtr = *(wchar_t **)pFVar50;
    local_4f0 = L"Config";
    local_4e8 = 6;
    local_500.Size = *(int *)(pFVar50 + 8) + -1;
    if (*(int *)(pFVar50 + 8) == 0) {
      local_500.Size = 0;
    }
    FPaths::CombineInternal(&local_720,&local_500,2);
    ::FName::ToString(&this->PlatformName,&local_760);
    FVar15 = local_7c8;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_648 = local_7c8;
    uVar24 = ::GetTypeHash(local_7c8.ComparisonIndex.Value);
    iVar25 = TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FName>
                       ((TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                         *)&this->StagedPluginConfigCache,FVar15.Number + uVar24,&local_648);
    if (iVar25 == -1) {
LAB_14185f510:
      local_730 = &local_98;
      local_4e0.DataPtr = (wchar_t *)local_720.Data.AllocatorInstance.Data;
      bVar12 = false;
      local_4e0.Size = local_720.Data.ArrayNum + -1;
      if (local_720.Data.ArrayNum == 0) {
        local_4e0.Size = 0;
      }
      local_4d0 = local_760.Data.AllocatorInstance.Data;
      local_4c8 = local_760.Data.ArrayNum + -1;
      if (local_760.Data.ArrayNum == 0) {
        local_4c8 = 0;
      }
      FPaths::CombineInternal(&local_600,&local_4e0,2);
      local_7c0 = (FString *)0x0;
      local_7b8 = 0;
      pIVar28 = IFileManager::Get();
      FVar38.Data = (FScriptContainerElement *)L"";
      if (local_720.Data.ArrayNum != 0) {
        FVar38.Data = local_720.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar28 + 0x78))(pIVar28,&local_7c0,FVar38.Data,L"ini");
      pIVar28 = IFileManager::Get();
      FVar38.Data = (FScriptContainerElement *)L"";
      if (local_600.Data.ArrayNum != 0) {
        FVar38.Data = local_600.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar28 + 0x78))(pIVar28,&local_7c0,FVar38.Data,L"ini");
      pFVar45 = local_710;
      local_7d8 = local_710;
      iVar25 = *(int *)(local_710 + 0x18);
      pFVar31 = *(FString **)(local_710 + 0x10);
      pFVar32 = pFVar31 + iVar25;
      while( true ) {
        uVar36 = 0;
        if (*(int *)(pFVar45 + 0x18) != iVar25) {
          local_7f2 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_7f2);
        }
        pTVar54 = local_730;
        pFVar48 = local_7c0;
        pFVar50 = local_7d8;
        if (pFVar31 == pFVar32) break;
        ::FString::PrintfImpl(&local_620,L"/%s/");
        if (local_620.Data.ArrayNum == 0) {
          pwVar43 = L"";
LAB_14185f65c:
          sVar29 = wcslen(pwVar43);
          iVar26 = ::FString::Find(pFVar31,pwVar43,(int)sVar29,IgnoreCase,FromStart,-1);
        }
        else {
          pwVar43 = (wchar_t *)local_620.Data.AllocatorInstance.Data;
          if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14185f65c;
          iVar26 = -1;
        }
        if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_620.Data.AllocatorInstance.Data);
        }
        if (iVar26 == -1) {
LAB_14185f73f:
          pFVar31 = pFVar31 + 1;
        }
        else {
          local_4a0.DataPtr = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
          iVar26 = (pFVar31->Data).ArrayNum;
          local_488 = 6;
          local_4a0.Size = iVar26 + -1;
          if (iVar26 == 0) {
            local_4a0.Size = 0;
          }
          local_490 = L"Config";
          FPaths::CombineInternal(&local_610,&local_4a0,2);
          pIVar28 = IFileManager::Get();
          FVar38.Data = (FScriptContainerElement *)L"";
          if (local_610.Data.ArrayNum != 0) {
            FVar38.Data = local_610.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar28 + 0x78))(pIVar28,&local_7c0,FVar38.Data,L"ini");
          if (local_610.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_14185f73f;
          FMemory::Free(local_610.Data.AllocatorInstance.Data);
          pFVar31 = pFVar31 + 1;
        }
      }
      uVar24 = (uint)local_7b8;
      uVar55 = (ulong64)(int)(uint)local_7b8;
      if ((int)(uint)local_7b8 < 0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar23) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_1b8._0_8_ = (FScriptContainerElement *)0x0;
      local_1b8._8_8_ = 0;
      local_198 = (ForElementType<unsigned_int>)0x0;
      local_190 = 0;
      local_18c = 0x80;
      local_188 = -1;
      local_184 = 0;
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum(uVar55);
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_1b8,uVar24);
        uVar41 = 1;
        if (3 < uVar24) {
          uVar51 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
          lVar53 = 0x3f;
          if (uVar51 != 0) {
            for (; uVar51 >> lVar53 == 0; lVar53 = lVar53 + -1) {
            }
          }
          local_5e0 = (undefined4)lVar53;
          uVar41 = 1 << ((byte)lVar53 & 0x1f);
        }
        if ((local_170 == 0) || ((int)local_170 < (int)uVar41)) {
          local_170 = uVar41;
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
          }
          if (uVar41 != 0) {
            uVar24 = uVar41;
            if (uVar41 < 2) {
              if (local_178.Data != (FScriptContainerElement *)0x0) {
                uVar24 = 0;
                goto LAB_14185f86b;
              }
            }
            else {
LAB_14185f86b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_178,0,uVar24,4);
            }
            if (0 < (int)uVar41) {
              uVar51 = (ulonglong)uVar41;
              do {
                FVar38.Data = local_180;
                if (local_178.Data != (FScriptContainerElement *)0x0) {
                  FVar38.Data = local_178.Data;
                }
                uVar30 = uVar36 & (longlong)(int)uVar41 - 1U;
                uVar36 = uVar36 + 1;
                *(undefined4 *)(FVar38.Data + uVar30 * 4) = 0xffffffff;
                uVar51 = uVar51 - 1;
              } while (uVar51 != 0);
            }
          }
          if (local_170 != 0) {
            local_690.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
            local_690._padding_._0_4_ = 0;
            local_690._padding_._4_4_ = 1;
            local_690.UnvisitedBitMask = 0xffffffff;
            local_690.CurrentBitIndex = 0;
            local_690.BaseBitIndex = 0;
            if (local_190 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_690);
            }
            local_5dc._12_8_ = local_1b8;
            local_5c8._padding_ =
                 CONCAT44(local_690._padding_._4_4_,(undefined4)local_690._padding_);
            local_5c8.Array = local_690.Array;
            local_5c8.UnvisitedBitMask = local_690.UnvisitedBitMask;
            local_5c8.CurrentBitIndex = local_690.CurrentBitIndex;
            local_5c8.BaseBitIndex = local_690.BaseBitIndex;
            local_5c8._28_4_ = local_690._28_4_;
            if (local_690.CurrentBitIndex < (local_690.Array)->NumBits) {
              do {
                iVar26 = local_5c8.CurrentBitIndex;
                puVar1 = (undefined8 *)
                         (*(longlong *)local_5dc._12_8_ + (longlong)local_5c8.CurrentBitIndex * 0x18
                         );
                iVar25 = *(int *)(*(longlong *)local_5dc._12_8_ + 8 +
                                 (longlong)local_5c8.CurrentBitIndex * 0x18);
                if (iVar25 == 0) {
                  pwVar43 = L"";
                  iVar25 = 0;
                }
                else {
                  pwVar43 = (wchar_t *)*puVar1;
                  iVar25 = iVar25 + -1;
                }
                uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,pwVar43);
                uVar24 = local_170 - 1 & uVar24;
                *(uint *)((longlong)puVar1 + 0x14) = uVar24;
                FVar38.Data = local_180;
                if (local_178.Data != (FScriptContainerElement *)0x0) {
                  FVar38.Data = local_178.Data;
                }
                uVar36 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar24;
                *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar38.Data + uVar36 * 4);
                *(int *)(FVar38.Data + uVar36 * 4) = iVar26;
                local_5c8.UnvisitedBitMask = local_5c8.UnvisitedBitMask & ~local_5c8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5c8);
                pFVar50 = local_7d8;
              } while (local_5c8.CurrentBitIndex < (local_5c8.Array)->NumBits);
            }
          }
        }
      }
      pFVar31 = pFVar48 + uVar55;
      for (; pFVar48 != pFVar31; pFVar48 = pFVar48 + 1) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1b8,
                   (FString *)local_5dc,(bool *)pFVar48);
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (&local_98,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1b8);
      local_170 = 0;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1b8);
      DestructItems<FString,int>(local_7c0,(uint)local_7b8);
      if (local_7c0 != (FString *)0x0) {
        FMemory::Free(local_7c0);
      }
      if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar12 = true;
      lVar53 = (longlong)iVar25 * 0x60 + *(longlong *)&(this->StagedPluginConfigCache).field_0x0;
      pTVar54 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar53 + 8);
      if (lVar53 == 0) {
        pTVar54 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
      }
      if (pTVar54 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0)
      goto LAB_14185f510;
    }
    iVar26 = 0;
    iVar25 = *(int *)&(pTVar54->Elements).field_0x28;
    puVar56 = &(pTVar54->Elements).field_0x10;
    uVar24 = 1;
    uStack_790._4_4_ = iVar26;
    local_788._0_4_ = iVar26;
    if (iVar25 != 0) {
      puVar2 = *(uint **)&(pTVar54->Elements).field_0x20;
      puVar52 = (uint *)puVar56;
      if (puVar2 != (uint *)0x0) {
        puVar52 = puVar2;
      }
      uVar41 = *puVar52;
      while (uVar41 == 0) {
        lVar53 = (longlong)iVar26;
        local_788._0_4_ = (int)local_788 + 0x20;
        iVar26 = iVar26 + 1;
        uStack_790._4_4_ = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14185fb40;
        uVar41 = puVar52[lVar53 + 1];
      }
      uVar24 = -uVar41 & uVar41;
      uVar36 = (ulonglong)uVar24 * 2 + 1;
      lVar53 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar53 == 0; lVar53 = lVar53 + -1) {
        }
      }
      local_5dc._4_4_ = (undefined4)lVar53;
      uStack_790._4_4_ = local_5dc._4_4_ + -1 + (int)local_788;
      if (iVar25 < uStack_790._4_4_) {
        uStack_790._4_4_ = iVar25;
      }
    }
LAB_14185fb40:
    uVar41 = *(uint *)&(pTVar54->Elements).field_0x28;
    uVar44 = uVar41 & 0xffffffe0;
    iStack_780 = *(int *)&(pTVar54->Elements).field_0x8 - *(int *)&(pTVar54->Elements).field_0x34;
    uStack_7a0 = CONCAT44(uVar24,iVar26);
    uStack_790._0_4_ = 0xffffffff;
    local_788._4_4_ = local_3f4;
    TStack_598._padding_ = uStack_7a0;
    iVar26 = (int)uVar41 >> 5;
    uStack_578 = CONCAT44(uStack_77c,iStack_780);
    TStack_598.UnvisitedBitMask = 0xffffffff;
    TStack_598.CurrentBitIndex = uStack_790._4_4_;
    TStack_598.BaseBitIndex = (int)local_788;
    TStack_598._28_4_ = local_3f4;
    local_7a8 = pTVar54;
    local_798 = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    local_5a0 = pTVar54;
    TStack_598.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    if (((int)uVar41 < 0) || (iVar25 < (int)uVar41)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar23) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar24 = *(uint *)&(pTVar54->Elements).field_0x28;
    if (uVar41 != uVar24) {
      puVar3 = *(undefined1 **)&(pTVar54->Elements).field_0x20;
      puVar49 = puVar56;
      if (puVar3 != (undefined1 *)0x0) {
        puVar49 = puVar3;
      }
      uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar49 + (longlong)iVar26 * 4);
      while (uVar41 == 0) {
        lVar53 = (longlong)iVar26;
        uVar44 = uVar44 + 0x20;
        iVar26 = iVar26 + 1;
        uVar41 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_14185fc60;
        uVar41 = *(uint *)(puVar49 + lVar53 * 4 + 4);
      }
      uVar36 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
      lVar53 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar53 == 0; lVar53 = lVar53 + -1) {
        }
      }
      local_5dc._8_4_ = (undefined4)lVar53;
      uVar41 = (uVar44 - 1) + local_5dc._8_4_;
      if ((int)uVar24 < (int)uVar41) {
        uVar41 = uVar24;
      }
    }
LAB_14185fc60:
    while( true ) {
      pTVar19 = local_5a0;
      if (*(int *)&(local_5a0->Elements).field_0x8 - *(int *)&(local_5a0->Elements).field_0x34 !=
          (int)uStack_578) {
        local_7f1 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7f1);
      }
      if (((TStack_598.CurrentBitIndex == uVar41) &&
          (TStack_598.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar56)) &&
         (pTVar19 == pTVar54)) break;
      if (5 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      TStack_598.UnvisitedBitMask = TStack_598.UnvisitedBitMask & ~TStack_598._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_598);
    }
    iVar25 = 0;
    FConfigContext::FConfigContext
              ((FConfigContext *)local_3a8,local_708,true,&local_760,(FConfigFile *)0x0);
    local_3a8[0x188] = true;
    local_3a8._396_2_ = *(DynamicLayerPriority *)(pFVar50 + 0x20);
    local_3a8[0x189] = (byte)pFVar50[0x22] & 1;
    local_3a8._224_8_ = local_778;
    if (((byte)pFVar50[0x22] & 1) == 0) {
      bVar10 = true;
      local_510.Data.ArrayNum = 0;
      pFVar31 = &local_510;
      local_7d8 = (FScriptContainerElement *)0x0;
    }
    else {
      bVar11 = true;
      pFVar31 = ::FName::ToString(&local_7c8,&local_470);
      local_7d8 = (pFVar31->Data).AllocatorInstance.Data;
    }
    (pFVar31->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_730 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                CONCAT44(local_730._4_4_,(pFVar31->Data).ArrayNum);
    (pFVar31->Data).ArrayNum = 0;
    (pFVar31->Data).ArrayMax = 0;
    if ((bVar10) &&
       (bVar10 = false, local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
    if ((bVar11) &&
       (bVar11 = false, local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    ::FName::FName(&local_640,"Windows");
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    uVar24 = 1;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_788._0_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    iVar26 = *(int *)&(pTVar54->Elements).field_0x28;
    uStack_790._4_4_ = iVar25;
    if (iVar26 != 0) {
      puVar2 = *(uint **)&(pTVar54->Elements).field_0x20;
      puVar52 = (uint *)puVar56;
      if (puVar2 != (uint *)0x0) {
        puVar52 = puVar2;
      }
      uVar41 = *puVar52;
      iVar25 = 0;
      while (uVar41 == 0) {
        lVar53 = (longlong)iVar25;
        local_788._0_4_ = (int)local_788 + 0x20;
        iVar25 = iVar25 + 1;
        uStack_790._4_4_ = iVar26;
        if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14185feb0;
        uVar41 = puVar52[lVar53 + 1];
      }
      uVar24 = -uVar41 & uVar41;
      uVar36 = (ulonglong)uVar24 * 2 + 1;
      lVar53 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar53 == 0; lVar53 = lVar53 + -1) {
        }
      }
      local_5a8 = (int)lVar53;
      uStack_790._4_4_ = (int)local_788 + -1 + local_5a8;
      if (iVar26 < uStack_790._4_4_) {
        uStack_790._4_4_ = iVar26;
      }
    }
LAB_14185feb0:
    uVar41 = *(uint *)&(pTVar54->Elements).field_0x28;
    bVar35 = (byte)uVar41 & 0x1f;
    iStack_780 = *(int *)&(pTVar54->Elements).field_0x8 - *(int *)&(pTVar54->Elements).field_0x34;
    uVar46 = uVar41 & 0xffffffe0;
    uStack_74c = 1 << bVar35;
    iVar42 = (int)uVar41 >> 5;
    uVar44 = -1 << bVar35;
    uStack_7a0 = CONCAT44(uVar24,iVar25);
    uStack_790._0_4_ = 0xffffffff;
    local_788._4_4_ = local_3d4;
    TStack_6d8._padding_ = uStack_7a0;
    uStack_6b8 = CONCAT44(uStack_77c,iStack_780);
    TStack_6d8.UnvisitedBitMask = 0xffffffff;
    TStack_6d8.CurrentBitIndex = uStack_790._4_4_;
    TStack_6d8.BaseBitIndex = (int)local_788;
    TStack_6d8._28_4_ = local_3d4;
    local_750 = iVar42;
    pTStack_748 = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    local_740 = uVar44;
    uStack_73c = uVar41;
    uStack_738 = uVar46;
    local_6e0 = pTVar54;
    TStack_6d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
    if (((int)uVar41 < 0) || (iVar26 < (int)uVar41)) {
      local_7a8 = pTVar54;
      local_798 = (TBitArray<FDefaultBitArrayAllocator> *)puVar56;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar23) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar6 = pTStack_748;
    uVar24 = *(uint *)&(pTVar54->Elements).field_0x28;
    if (uVar41 != uVar24) {
      puVar3 = *(undefined1 **)&(pTVar54->Elements).field_0x20;
      if (puVar3 != (undefined1 *)0x0) {
        puVar56 = puVar3;
      }
      uVar44 = uVar44 & *(uint *)(puVar56 + (longlong)iVar42 * 4);
      while (uVar44 == 0) {
        uStack_738 = uVar46 + 0x20;
        local_750 = iVar42 + 1;
        uStack_73c = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < local_750)
        goto LAB_14185fff1;
        uVar44 = *(uint *)(puVar56 + (longlong)iVar42 * 4 + 4);
        local_740 = 0xffffffff;
        uVar46 = uStack_738;
        iVar42 = local_750;
      }
      uStack_74c = -uVar44 & uVar44;
      uVar36 = (ulonglong)uStack_74c * 2 + 1;
      lVar53 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar53 == 0; lVar53 = lVar53 + -1) {
        }
      }
      local_5a4 = (int)lVar53;
      uStack_73c = (uVar46 - 1) + local_5a4;
      if ((int)uVar24 < (int)uStack_73c) {
        uStack_73c = uVar24;
      }
    }
LAB_14185fff1:
    uVar24 = uStack_73c;
    uStack_7a0 = CONCAT44(uStack_74c,local_750);
    uStack_790 = CONCAT44(uStack_73c,local_740);
    local_788 = CONCAT44(uStack_734,uStack_738);
    iStack_780 = *(int *)&(pTVar54->Elements).field_0x8 - *(int *)&(pTVar54->Elements).field_0x34;
    local_798 = pTStack_748;
    uStack_518 = CONCAT44(uStack_77c,iStack_780);
    local_530 = pTStack_748;
    uStack_528 = local_740;
    uStack_524 = uStack_73c;
    uStack_520 = uStack_738;
    uStack_51c = uStack_734;
    local_7a8 = pTVar54;
    local_540 = pTVar54;
    lStack_538 = uStack_7a0;
    while( true ) {
      pTVar54 = local_6e0;
      if (*(int *)&(local_6e0->Elements).field_0x8 - *(int *)&(local_6e0->Elements).field_0x34 !=
          (int)uStack_6b8) {
        local_7f0 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_7f0);
      }
      if (((TStack_6d8.CurrentBitIndex == uVar24) && (TStack_6d8.Array == pTVar6)) &&
         (pTVar54 == local_540)) break;
      pFVar31 = (FString *)
                (*(longlong *)&pTVar54->Elements + (longlong)TStack_6d8.CurrentBitIndex * 0x18);
      pFVar32 = FPaths::GetBaseFilename(&local_440,pFVar31,true);
      pFVar50 = (FScriptContainerElement *)L"";
      if ((int)local_730 != 0) {
        pFVar50 = local_7d8;
      }
      pFVar32 = ::FString::Replace(pFVar32,&local_450,(wchar_t *)pFVar50,L"",IgnoreCase);
      FVar38.Data = (FScriptContainerElement *)L"";
      if (local_760.Data.ArrayNum != 0) {
        FVar38.Data = local_760.Data.AllocatorInstance.Data;
      }
      pFVar32 = ::FString::Replace(pFVar32,&local_460,(wchar_t *)FVar38.Data,L"",IgnoreCase);
      if ((pFVar32->Data).ArrayNum == 0) {
        pwVar43 = L"";
      }
      else {
        pwVar43 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_7d0,pwVar43);
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      FVar15 = local_7d0;
      uVar41 = ::GetTypeHash(local_7d0.ComparisonIndex.Value);
      if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
        FVar40 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar40 = local_e8.Hash.SecondaryData;
        }
        for (iVar25 = *(int *)((longlong)FVar40 +
                              (ulonglong)(local_e8.HashSize - 1U & FVar15.Number + uVar41) * 4);
            iVar25 != -1; iVar25 = *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)iVar25 * 0x10))
        {
          if (*(FName *)(local_e8.Elements._0_8_ + (longlong)iVar25 * 0x10) == FVar15)
          goto LAB_141860615;
        }
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&local_e8,&local_650,(bool *)&local_7d0);
      if ((local_778 != (FConfigModificationTracker *)0x0) &&
         (local_778->bTrackLoadedFiles != false)) {
        if (bVar12) {
          local_768 = (pFVar31->Data).ArrayNum;
          lVar53 = (longlong)local_768;
          bVar14 = true;
          pFVar50 = (pFVar31->Data).AllocatorInstance.Data;
          local_770.Data = (FScriptContainerElement *)0x0;
          if (local_768 == 0) {
            local_764 = 0;
            FVar38.Data = (FScriptContainerElement *)0x0;
            iVar25 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_768,0,&local_770,local_768,&local_764);
            memcpy(local_770.Data,pFVar50,lVar53 * 2);
            FVar38.Data = local_770.Data;
            iVar25 = local_768;
          }
        }
        else {
          bVar13 = true;
          local_4c0.DataPtr = (wchar_t *)local_720.Data.AllocatorInstance.Data;
          local_4c0.Size = local_720.Data.ArrayNum + -1;
          local_4b0 = (pFVar31->Data).AllocatorInstance.Data;
          if (local_720.Data.ArrayNum == 0) {
            local_4c0.Size = 0;
          }
          iVar25 = (pFVar31->Data).ArrayNum;
          local_4a8 = iVar25 + -1;
          if (iVar25 == 0) {
            local_4a8 = 0;
          }
          FPaths::CombineInternal(&local_5f0,&local_4c0,2);
          FVar38.Data = local_5f0.Data.AllocatorInstance.Data;
          iVar25 = local_5f0.Data.ArrayNum;
        }
        local_7e8.Data = (FScriptContainerElement *)0x0;
        local_7e0 = iVar25;
        if (iVar25 == 0) {
          local_7dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar25,0,&local_7e8,iVar25,&local_7dc);
          memcpy(local_7e8.Data,FVar38.Data,(longlong)iVar25 * 2);
        }
        if ((bVar13) &&
           (bVar13 = false, local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
        }
        if ((bVar14) && (bVar14 = false, local_770.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_770.Data);
        }
        pFVar50 = (local_778->LoadedFiles).AllocatorInstance.Data;
        pFVar45 = pFVar50 + (longlong)(local_778->LoadedFiles).ArrayNum * 0x10;
        FVar38.Data = local_7e8.Data;
        iVar25 = local_7e0;
        for (; pFVar50 != pFVar45; pFVar50 = pFVar50 + 0x10) {
          iVar26 = *(int *)(pFVar50 + 8);
          if (iVar26 == iVar25) {
            if (1 < iVar26) {
              iVar25 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar50,(wchar_t *)FVar38.Data)
              ;
              bVar23 = iVar25 == 0;
              FVar38.Data = local_7e8.Data;
              iVar25 = local_7e0;
              goto LAB_1418603ad;
            }
LAB_14186043c:
            if (5 < (byte)LogConfig._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
              FVar38.Data = local_7e8.Data;
            }
            goto LAB_14186060b;
          }
          bVar23 = iVar26 + iVar25 == 1;
LAB_1418603ad:
          if (bVar23) goto LAB_14186043c;
        }
        if (FVar38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar38.Data);
        }
      }
      pFVar17 = local_708;
      local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Data.ArrayNum = 0;
      local_6a0.Data.ArrayMax = 0;
      pFVar33 = FindBranch(local_708,local_7d0,&local_6a0);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
      if (pFVar33 == (FConfigBranch *)0x0) {
        if ((5 < (byte)LogConfig._0_1_) && (pFVar17->PlatformName == local_640)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        }
      }
      else {
        puVar56 = puStack_1e0;
        if (5 < (byte)LogConfig._0_1_) {
          ::FName::ToString(&local_7d0,&local_430);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          puVar56 = puStack_1e0;
          if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data.AllocatorInstance.Data);
            puVar56 = puStack_1e0;
          }
        }
        uVar22 = uStack_1e4;
        uVar21 = local_1e8;
        uVar20 = local_3a8._440_8_;
        local_118 = (code *)local_3a8._432_8_;
        uVar9 = CONCAT44(uStack_1d4,local_1d8);
        plStack_f0 = (longlong *)CONCAT44(uStack_1cc,uStack_1d0);
        local_3a8._232_4_ = local_7c8.ComparisonIndex.Value;
        local_3a8._236_4_ = local_7c8.Number;
        puStack_1e0 = local_168;
        local_3a8._432_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FConfigCacheIni::AddPluginsToBranches'::__l64::<lambda_1>,void,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_const_&>
             ::Call;
        local_3a8._440_8_ = uStack_110;
        local_f8._0_4_ = SUB84(pFVar33,0);
        local_f8._4_4_ = (undefined4)((ulonglong)pFVar33 >> 0x20);
        local_1d8 = (undefined4)local_f8;
        uStack_1d4 = local_f8._4_4_;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        local_1e8 = 0x5069f4c8;
        uStack_1e4 = 1;
        uStack_110 = uVar20;
        local_108 = CONCAT44(uVar22,uVar21);
        puStack_100 = puVar56;
        local_f8 = uVar9;
        if (local_118 != (code *)0x0) {
          plVar37 = &local_108;
          if (plStack_f0 != (longlong *)0x0) {
            plVar37 = plStack_f0;
          }
          (**(code **)(*plVar37 + 0x10))();
        }
        pFVar31 = ::FName::ToString(&local_7d0,local_420);
        if ((pFVar31->Data).ArrayNum == 0) {
          pwVar43 = L"";
        }
        else {
          pwVar43 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
        local_6b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6b0.Data.ArrayNum = 0;
        local_6b0.Data.ArrayMax = 0;
        FConfigContext::Load((FConfigContext *)local_3a8,pwVar43,&local_6b0);
        FVar38.Data = local_420[0].Data.AllocatorInstance.Data;
        if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
          FVar38.Data = local_420[0].Data.AllocatorInstance.Data;
        }
LAB_14186060b:
        if (FVar38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar38.Data);
        }
      }
LAB_141860615:
      TStack_6d8.UnvisitedBitMask = TStack_6d8.UnvisitedBitMask & ~TStack_6d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6d8);
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    if (local_7d8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8);
    }
    FConfigContext::~FConfigContext((FConfigContext *)local_3a8);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_760.Data.AllocatorInstance.Data);
    }
    if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_720.Data.AllocatorInstance.Data);
    }
    pFVar47 = local_6e8 + 1;
    uVar36 = (ulonglong)local_728;
    this = local_708;
    param_1 = local_638;
  }
  local_670.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
  local_670._padding_._0_4_ = 0;
  local_670._padding_._4_4_ = 1;
  local_670.UnvisitedBitMask = 0xffffffff;
  local_670.CurrentBitIndex = 0;
  local_670.BaseBitIndex = 0;
  if (local_140 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_670);
  }
  TStack_6d8._padding_ = CONCAT44(local_670._padding_._4_4_,(undefined4)local_670._padding_);
  local_6e0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_168;
  TStack_6d8.CurrentBitIndex = local_670.CurrentBitIndex;
  TStack_6d8.UnvisitedBitMask = local_670.UnvisitedBitMask;
  TStack_6d8._28_4_ = local_670._28_4_;
  TStack_6d8.BaseBitIndex = local_670.BaseBitIndex;
  TStack_6d8.Array = local_670.Array;
  uStack_6b8 = CONCAT44(uStack_6b8._4_4_,local_168._8_4_ - local_134);
  TStack_568.Array = local_670.Array;
  uStack_548 = uStack_6b8;
  local_570 = local_6e0;
  TStack_568._padding_ = TStack_6d8._padding_;
  TStack_568._16_8_ = TStack_6d8._16_8_;
  TStack_568._24_8_ = TStack_6d8._24_8_;
  pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_3d0,(TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),
                       local_140);
  pFVar16 = local_778;
  lStack_538 = pTVar34->_padding_;
  pTVar6 = pTVar34->Array;
  uVar7 = pTVar34->UnvisitedBitMask;
  uVar8 = pTVar34->CurrentBitIndex;
  uStack_520 = (uint)*(undefined8 *)&pTVar34->BaseBitIndex;
  uStack_51c = (undefined4)((ulonglong)*(undefined8 *)&pTVar34->BaseBitIndex >> 0x20);
  local_530 = pTVar6;
  uStack_528 = uVar7;
  uStack_524 = uVar8;
  while( true ) {
    pTVar54 = local_570;
    if (*(int *)&(local_570->Elements).field_0x8 - *(int *)&(local_570->Elements).field_0x34 !=
        (int)uStack_548) {
      `TSparseArray<TSparseSetElement<TTuple<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_7ef);
    }
    if (((TStack_568.CurrentBitIndex == uVar8) && (TStack_568.Array == pTVar6)) &&
       (pTVar54 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_168))
    break;
    lVar53 = *(longlong *)&pTVar54->Elements;
    lVar39 = (longlong)TStack_568.CurrentBitIndex * 0x20;
    local_700 = *(FConfigBranch **)(lVar39 + lVar53);
    local_6f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar25 = *(int *)(lVar39 + 0x10 + lVar53);
    pFVar4 = *(FDynamicLayerInfo **)(lVar39 + 8 + lVar53);
    local_6f8.ArrayNum = iVar25;
    if (iVar25 == 0) {
      local_6f8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar25,0,&local_6f8.AllocatorInstance,iVar25,&local_6f8.ArrayMax);
      ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
                (local_6f8.AllocatorInstance.Data,pFVar4,iVar25);
    }
    FConfigBranch::AddDynamicLayersToHierarchy
              (local_700,&local_6f8,pFVar16,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,false);
    DestructItems<FDynamicLayerInfo,int>
              ((FDynamicLayerInfo *)local_6f8.AllocatorInstance.Data,local_6f8.ArrayNum);
    if ((FDynamicLayerInfo *)local_6f8.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
      FMemory::Free(local_6f8.AllocatorInstance.Data);
    }
    TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
  }
LAB_141860729:
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  FMemScope::~FMemScope(&local_630);
  FLLMScope::~FLLMScope(local_7b0);
  return;
}

// AddToSection @ 1418616f0

bool __thiscall
FConfigCacheIni::AddToSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_4->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigFile *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = FConfigFile::AddToSection(this_00,param_1,param_2,param_3);
  }
  return bVar1;
}

// AddToSectionOfStaticLayer @ 141861970

bool __thiscall
FConfigCacheIni::AddToSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          FString *param_5,bool param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  FString local_68;
  FString local_58;
  FName local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  ::FString::FString(&local_58,param_3);
  local_38[0] = (code *)0x0;
  local_48 = param_2;
  puVar2 = FMemory::Malloc(0x20,8);
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FConfigCacheIni::AddToSectionOfStaticLayer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  local_10 = puVar2;
  ::FString::FString((FString *)(puVar2 + 1),&local_58);
  *(FName *)(puVar2 + 3) = local_48;
  if ((FString *)(puVar2 + 1) != (FString *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConfigCacheIni::AddToSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                  ::Call;
  }
  ::FString::FString(&local_68,param_1);
  bVar1 = ModifyAndWriteLayer(this,&local_68,param_2,param_4,param_5,param_6,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddUniqueToSection @ 141861b40

bool __thiscall
FConfigCacheIni::AddUniqueToSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_4->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigFile *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = FConfigFile::AddUniqueToSection(this_00,param_1,param_2,param_3);
  }
  return bVar1;
}

// AddUniqueToSectionOfStaticLayer @ 141861e40

bool __thiscall
FConfigCacheIni::AddUniqueToSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          FString *param_5,bool param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  FString local_68;
  FString local_58;
  FName local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  ::FString::FString(&local_58,param_3);
  local_38[0] = (code *)0x0;
  local_48 = param_2;
  puVar2 = FMemory::Malloc(0x20,8);
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FConfigCacheIni::AddUniqueToSectionOfStaticLayer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  local_10 = puVar2;
  ::FString::FString((FString *)(puVar2 + 1),&local_58);
  *(FName *)(puVar2 + 3) = local_48;
  if ((FString *)(puVar2 + 1) != (FString *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConfigCacheIni::AddUniqueToSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                  ::Call;
  }
  ::FString::FString(&local_68,param_1);
  bVar1 = ModifyAndWriteLayer(this,&local_68,param_2,param_4,param_5,param_6,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AreFileOperationsDisabled @ 141863990

bool __thiscall FConfigCacheIni::AreFileOperationsDisabled(FConfigCacheIni *this)

{
  return this->bAreFileOperationsDisabled;
}

// ClearOtherPlatformConfigs @ 141866bb0

void __cdecl FConfigCacheIni::ClearOtherPlatformConfigs(void)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
  bVar1 = 1 < (int)ConfigForPlatform._72_4_;
  if (!bVar1) {
    TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
                      *)&ConfigForPlatform);
  }
  ConfigForPlatform._8_4_ = 0;
  if (ConfigForPlatform._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&ConfigForPlatform,0,
               (int *)&ConfigForPlatform.field_0xc);
  }
  ConfigForPlatform._48_4_ = 0xffffffff;
  ConfigForPlatform._52_4_ = 0;
  ConfigForPlatform._40_4_ = 0;
  if (0x80 < (uint)ConfigForPlatform._44_4_) {
    ConfigForPlatform._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&ConfigForPlatform.field_0x10,0);
  }
  if (bVar1) {
    ConfigForPlatform._72_4_ = 1;
    TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
              *)&ConfigForPlatform);
  }
                    /* WARNING: Could not recover jumptable at 0x000141866c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
  return;
}

// ContainsConfigFile @ 141867750

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FConfigCacheIni::ContainsConfigFile(FConfigCacheIni *this,FConfigFile *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FKnownConfigFiles *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lpCriticalSection = &this->OtherFilesLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar13 = 0;
  puVar1 = &(this->OtherFiles).field_0x10;
  iVar3 = *(int *)&(this->OtherFiles).field_0x28;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OtherFiles).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14186783f;
      uVar12 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar15 + -1 + local_res20;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14186783f:
  uVar12 = *(uint *)&(this->OtherFiles).field_0x28;
  TStack_88._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar12 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iVar9;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar15;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->OtherFiles).field_0x8 -
                       *(int *)&(this->OtherFiles).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar4 = *(uint *)&(this->OtherFiles).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(this->OtherFiles).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141867950;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_141867950:
  while( true ) {
    if (*(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34 !=
        (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_88.CurrentBitIndex == uVar12) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (param_1 ==
        (FConfigFile *)
        (*(longlong *)
          ((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->OtherFiles) +
        0x470)) {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return true;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar10 = &this->KnownFiles;
  while( true ) {
    if ((TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
         *)pFVar10 == &this->OtherFiles) {
      return false;
    }
    if (param_1 == &pFVar10->Branches[0].InMemoryFile) break;
    pFVar10 = (FKnownConfigFiles *)(pFVar10->Branches + 1);
  }
  return true;
}

// CreateGConfigFromSaved @ 1418685c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FConfigCacheIni::CreateGConfigFromSaved(wchar_t *param_1)

{
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uchar *puVar7;
  FConfigCacheIni *this;
  FConfigCacheIni *this_00;
  FString *pFVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *pTVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  FName *this_01;
  bool bVar15;
  undefined1 auStackY_3b8 [32];
  long64 local_378;
  FString local_370;
  char *local_360;
  FString local_358;
  FLargeMemoryReader local_348;
  TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_288;
  FConfigCacheIni *local_238;
  undefined1 local_230;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6277,"FConfigCacheIni::CreateGConfigFromSaved",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
               ,0x1885);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6277);
  }
  local_360 = "FConfigCacheIni::CreateGConfigFromSaved";
  if (5 < (byte)LogInit._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
              ((FLogCategoryBase *)&LogInit,&::LOG_Static,&local_360);
  }
  puVar7 = FPreLoadFile::TakeOwnershipOfLoadedData(&GPreLoadConfigBin,&local_378);
  if (puVar7 == (uchar *)0x0) {
    bVar13 = false;
  }
  else {
    this_00 = (FConfigCacheIni *)0x0;
    FLargeMemoryReader::FLargeMemoryReader(&local_348,puVar7,local_378,None,(FName)0x0);
    (**(code **)(local_348._padding_ + 0x108))(&local_348,1);
    this = ::operator_new(0x3ea8);
    if (this != (FConfigCacheIni *)0x0) {
      this_00 = FConfigCacheIni(this,Temporary,(FName)0x0,true);
    }
    local_288.Elements._0_8_ = 0;
    local_288.Elements._8_8_ = 0;
    local_288.Elements._32_8_ = 0;
    local_288.Elements._40_4_ = 0;
    local_288.Elements._44_4_ = 0x80;
    local_288.Elements._48_4_ = 0xffffffff;
    local_288.Elements._52_4_ = 0;
    local_288.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_288.HashSize = 0;
    local_230 = 0;
    GConfig = this_00;
    local_238 = this_00;
    Serialize(this_00,(FArchive *)&local_348);
    local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.Data.ArrayNum = 0;
    local_370.Data.ArrayMax = 0;
    GConfig->Type = DiskBacked;
    FConfigContext::FConfigContext(&local_228,GConfig,true,&local_370,(FConfigFile *)0x0);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    local_228.bIsFixingUpAfterBinaryConfig = true;
    local_228.bForceReload = true;
    pTVar1 = &GConfig->OtherFiles;
    for (this_01 = (FName *)&GConfig->KnownFiles;
        (TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
         *)this_01 != pTVar1; this_01 = this_01 + 0xc5) {
      pFVar8 = ::FName::ToString(this_01,&local_358);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FConfigContext::Load(&local_228,pwVar11,(FString *)(this_01 + 1));
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
    }
    TSetPrivateFriend::
    Serialize<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ((FArchive *)&local_348,&local_288);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSAccessExtraBinaryConfigData'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&::Singleton);
    bVar13 = false;
    iVar10 = ::Singleton._60_4_ + 1;
    uVar14 = ::Singleton._48_4_ - 1;
    ::Singleton._60_4_ = iVar10;
    if (-1 < (int)uVar14) {
      lVar12 = (longlong)(int)uVar14 << 4;
      bVar13 = false;
      do {
        uVar6 = 0;
        if ((int)uVar14 < (int)::Singleton._48_4_) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (((*(int *)(lVar12 + 8 + ::Singleton._40_8_) == 0) ||
            (*(longlong **)(lVar12 + ::Singleton._40_8_) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(lVar12 + ::Singleton._40_8_) + 0x68))(),
           cVar5 == '\0')) {
          bVar13 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
      iVar10 = ::Singleton._60_4_;
    }
    ::Singleton._60_4_ = iVar10 + -1;
    if (bVar13) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&::Singleton,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Singleton);
    if (CpuChannel->Enabled < 0) {
      pTVar9 = FCoreDelegates::TSConfigReadyForUse();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar9);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6313,"ConfigReadyForUseBroadcast",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                 ,0x18a9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6313);
      pTVar9 = FCoreDelegates::TSConfigReadyForUse();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar9);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    FMemory::Free(puVar7);
    bVar13 = true;
    FConfigContext::~FConfigContext(&local_228);
    local_288.HashSize = 0;
    if (local_288.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_288.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_288.Elements);
    FLargeMemoryReader::~FLargeMemoryReader(&local_348);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// Detach @ 141869ee0

void __thiscall FConfigCacheIni::Detach(FConfigCacheIni *this,FString *param_1)

{
  FConfigFile *pFVar1;
  
  pFVar1 = Find(this,param_1);
  if (pFVar1 != (FConfigFile *)0x0) {
    pFVar1->NoSave = true;
  }
  return;
}

// DisableFileOperations @ 141869f00

void __thiscall FConfigCacheIni::DisableFileOperations(FConfigCacheIni *this)

{
  this->bAreFileOperationsDisabled = true;
  return;
}

// DoesSectionExist @ 14186a230

bool __thiscall
FConfigCacheIni::DoesSectionExist(FConfigCacheIni *this,wchar_t *param_1,FString *param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  longlong lVar4;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_02;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  bool bVar8;
  longlong lVar9;
  FString local_38;
  
  this_00 = FRemoteConfig::Get();
  pwVar7 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar5);
  this_01 = Find(this,param_2);
  lVar9 = 0;
  if (this_01 != (FConfigFile *)0x0) {
    ::FString::FString(&local_38,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar3 = local_38.Data.ArrayNum + -1;
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_01,uVar2,&local_38);
    if (iVar3 == -1) {
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      lVar9 = 1;
    }
    else {
      lVar6 = (longlong)iVar3 * 0x110 + this_01->_padding_;
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      lVar9 = 1;
      lVar4 = lVar6 + 0x10;
      if (lVar6 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        bVar8 = true;
        goto LAB_14186a320;
      }
    }
  }
  bVar8 = false;
LAB_14186a320:
  if ((lVar9 != 0) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar8 != false) {
    this_02 = FCoreDelegates::TSOnConfigSectionNameRead();
    if ((param_2->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>::
    Broadcast(this_02,pwVar7,param_1);
  }
  return bVar8;
}

// Dump @ 14186a740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConfigCacheIni::Dump(FConfigCacheIni *this,FOutputDevice *param_1,wchar_t *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FConfigBranch **ppFVar6;
  wchar_t *pwVar7;
  FConfigBranch *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 auStack_6d8 [32];
  FIdentityFunctor local_6b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_6b0;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_6a0;
  LPCRITICAL_SECTION local_698;
  FString local_690;
  undefined1 local_678 [136];
  void *local_5f0;
  undefined4 local_5e8;
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_5d8;
  void *local_598;
  undefined4 local_590;
  TDoubleLinkedList<FConfigCommandStream_*> local_588;
  FConfigCommandStream local_568;
  FConfigFile local_4a0;
  FConfigFile local_3b8;
  FConfigCommandStream local_2d0;
  FConfigFile local_208;
  FConfigCommandStream local_120;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_6d8;
  bVar9 = false;
  local_6a0 = (TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
               *)((ulonglong)local_6a0 & 0xffffffff00000000);
  for (pFVar8 = (this->KnownFiles).Branches; pFVar8 != (FConfigBranch *)&this->OtherFiles;
      pFVar8 = pFVar8 + 1) {
    if ((param_2 == (wchar_t *)0x0) || (bVar3 = ::FName::Equals(pFVar8->IniName,param_2), bVar3)) {
      DumpBranch(param_1,pFVar8);
    }
  }
  lpCriticalSection = &this->OtherFilesLock;
  local_698 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_6a0 = &this->OtherFiles;
  local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b0.ArrayNum = 0;
  local_6b0.ArrayMax = 0;
  TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
              *)local_6a0,&local_6b0);
  AlgoImpl::IntroSortInternal<FString,int,FIdentityFunctor,TLess<void>_>
            ((FString *)local_6b0.AllocatorInstance.Data,local_6b0.ArrayNum,local_6b8[0],
             (TLess<void>)local_6b8[0]);
  iVar2 = local_6b0.ArrayNum;
  pFVar10 = local_6b0.AllocatorInstance.Data + (longlong)local_6b0.ArrayNum * 0x10;
  FVar11.Data = local_6b0.AllocatorInstance.Data;
  do {
    if (local_6b0.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_6b8);
    }
    if (FVar11.Data == pFVar10) {
      DestructItems<FString,int>((FString *)local_6b0.AllocatorInstance.Data,local_6b0.ArrayNum);
      lpCriticalSection_00 = local_698;
      if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.AllocatorInstance.Data);
      }
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection_00);
      }
      return;
    }
    if (param_2 == (wchar_t *)0x0) {
LAB_14186a8a4:
      bVar3 = true;
    }
    else {
      bVar9 = true;
      pFVar5 = FPaths::GetBaseFilename(&local_690,(FString *)FVar11.Data,true);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,param_2);
      if (iVar4 == 0) goto LAB_14186a8a4;
      bVar3 = false;
    }
    if ((bVar9) &&
       (bVar9 = false, local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_690.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      ppFVar6 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                ::FindChecked((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                               *)local_6a0,(FString *)FVar11.Data);
      FConfigBranch::FConfigBranch((FConfigBranch *)local_678,&(*ppFVar6)->InMemoryFile);
      DumpBranch(param_1,(FConfigBranch *)local_678);
      FConfigCommandStream::~FConfigCommandStream(&local_120);
      FConfigFile::~FConfigFile(&local_208);
      FConfigCommandStream::~FConfigCommandStream(&local_2d0);
      FConfigFile::~FConfigFile(&local_3b8);
      FConfigFile::~FConfigFile(&local_4a0);
      FConfigCommandStream::~FConfigCommandStream(&local_568);
      TDoubleLinkedList<FConfigCommandStream_*>::~TDoubleLinkedList<FConfigCommandStream_*>
                (&local_588);
      local_590 = 0;
      if (local_598 != (void *)0x0) {
        FMemory::Free(local_598);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_5d8);
      local_5e8 = 0;
      if (local_5f0 != (void *)0x0) {
        FMemory::Free(local_5f0);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_678 + 0x48));
      if ((FScriptContainerElement *)local_678._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_678._48_8_);
      }
      if ((FScriptContainerElement *)local_678._32_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_678._32_8_);
      }
      if ((FScriptContainerElement *)local_678._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_678._8_8_);
      }
    }
    FVar11.Data = FVar11.Data + 0x10;
  } while( true );
}

// EmptySection @ 14186c260

bool __thiscall
FConfigCacheIni::EmptySection(FConfigCacheIni *this,wchar_t *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  FConfigFile *this_00;
  longlong lVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FString local_28;
  
  this_00 = Find(this,param_2);
  if (this_00 != (FConfigFile *)0x0) {
    ::FString::FString(&local_28,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    pwVar6 = L"";
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar4.Data);
    iVar2 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar1,&local_28);
    lVar3 = 0;
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x110 + this_00->_padding_;
    }
    lVar5 = lVar3 + 0x10;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (lVar5 != 0) {
      ::FString::FString(&local_28,param_1);
      AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if ((int)this_00->_padding_ != *(int *)((longlong)&this_00->_padding_ + 4)) {
        iVar2 = local_28.Data.ArrayNum + -1;
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
        if (local_28.Data.ArrayNum == 0) {
          iVar2 = 0;
          FVar4.Data = (FScriptContainerElement *)L"";
        }
        uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar4.Data);
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                    *)this_00,uVar1,&local_28);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (this->bAreFileOperationsDisabled == false) {
        iVar2 = FConfigFile::Num(this_00);
        if (iVar2 != 0) {
          this_00->Dirty = true;
          Flush(this,false,param_2);
          return true;
        }
        if ((param_2->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        DeleteConfigFileWrapper(pwVar6);
      }
      return true;
    }
  }
  return false;
}

// EmptySectionsMatchingString @ 14186c410

bool __thiscall
FConfigCacheIni::EmptySectionsMatchingString
          (FConfigCacheIni *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  FConfigFile *this_00;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  FString local_c8;
  FString local_b8;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_80;
  FConfigFile *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar14 = false;
  local_78 = Find(this,param_2);
  if (local_78 != (FConfigFile *)0x0) {
    bVar1 = this->bAreFileOperationsDisabled;
    this->bAreFileOperationsDisabled = true;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)local_78);
    local_70 = 0;
    stack0xffffffffffffff68 = local_68._16_16_;
    local_a8 = (longlong *)local_68._0_8_;
    auStack_a0._0_8_ = local_68._8_8_;
    local_88 = local_48;
    pTStack_80 = pTStack_40;
    uVar8 = local_68._24_8_ >> 0x20;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      iVar15 = 1;
      do {
        plVar2 = local_a8;
        lVar13 = *local_a8;
        if (param_1 != (wchar_t *)0x0) {
          sVar6 = wcslen(param_1);
          lVar12 = (longlong)(int)uVar8 * 0x110;
          lVar9 = 0;
          iVar7 = 0;
          iVar4 = ::FString::Find((FString *)(lVar13 + lVar12),param_1,(int)sVar6,IgnoreCase,
                                  FromStart,-1);
          if (iVar4 != -1) {
            if (*(int *)(*plVar2 + 8 + lVar12) == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = *(wchar_t **)(*plVar2 + lVar12);
            }
            this_00 = Find(this,param_2);
            if (this_00 == (FConfigFile *)0x0) {
LAB_14186c689:
              bVar3 = 0;
            }
            else {
              ::FString::FString(&local_c8,pwVar11);
              AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              if (local_c8.Data.ArrayNum == 0) {
                pwVar10 = L"";
              }
              else {
                iVar7 = local_c8.Data.ArrayNum + -1;
                pwVar10 = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
              }
              uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
              iVar4 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>
                                ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                                  *)this_00,uVar5,&local_c8);
              if (iVar4 != -1) {
                lVar9 = (longlong)iVar4 * 0x110 + this_00->_padding_;
              }
              lVar13 = lVar9 + 0x10;
              if (lVar9 == 0) {
                lVar13 = 0;
              }
              ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (lVar13 == 0) goto LAB_14186c689;
              ::FString::FString(&local_b8,pwVar11);
              AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              if ((int)this_00->_padding_ != *(int *)((longlong)&this_00->_padding_ + 4)) {
                if (local_b8.Data.ArrayNum == 0) {
                  pwVar11 = L"";
                  iVar4 = 0;
                }
                else {
                  iVar4 = local_b8.Data.ArrayNum + -1;
                  pwVar11 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
                }
                uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar11);
                TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                ::RemoveImpl<FString>
                          ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                            *)this_00,uVar5,&local_b8);
              }
              ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (this->bAreFileOperationsDisabled == false) {
                iVar4 = FConfigFile::Num(this_00);
                if (iVar4 == 0) {
                  if ((param_2->Data).ArrayNum == 0) {
                    DeleteConfigFileWrapper(L"");
                    goto LAB_14186c683;
                  }
                  DeleteConfigFileWrapper((wchar_t *)(param_2->Data).AllocatorInstance.Data);
                  bVar3 = 1;
                }
                else {
                  this_00->Dirty = true;
                  Flush(this,false,param_2);
                  bVar3 = 1;
                }
              }
              else {
LAB_14186c683:
                bVar3 = 1;
              }
            }
            bVar14 = (bool)(bVar14 | bVar3);
          }
        }
        uStack_90 = uStack_90 & ~auStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
        uVar8 = (ulonglong)uStack_8c;
      } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        uVar5 = (int)local_78->_padding_ - *(int *)((longlong)&local_78->_padding_ + 4);
        if (3 < uVar5) {
          uVar8 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar13 & 0x1f);
        }
        if (((0 < (int)uVar5) && ((int)local_78->_padding_ < iVar15)) ||
           (iVar15 < (int)local_78->_padding_)) {
          *(int *)&local_78->_padding_ = iVar15;
          TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                    *)local_78);
        }
      }
    }
    this->bAreFileOperationsDisabled = bVar1;
  }
  return bVar14;
}

// EnableFileOperations @ 14186c740

void __thiscall FConfigCacheIni::EnableFileOperations(FConfigCacheIni *this)

{
  this->bAreFileOperationsDisabled = false;
  return;
}

// Exit @ 14186cbd0

void __thiscall FConfigCacheIni::Exit(FConfigCacheIni *this)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  Flush(this,true,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Find @ 14186d5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FConfigFile * __thiscall FConfigCacheIni::Find(FConfigCacheIni *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  FConfigFile *pFVar3;
  FString *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_158 [32];
  FString local_138;
  FString local_128;
  FConfigFile local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    pFVar3 = (FConfigFile *)0x0;
  }
  else {
    pFVar3 = FindConfigFile(this,param_1);
    if ((pFVar3 == (FConfigFile *)0x0) && (this->bAreFileOperationsDisabled == false)) {
      pFVar4 = FPaths::RemoveDuplicateSlashes(&local_128,param_1);
      FPaths::CreateStandardFilename(&local_138,pFVar4);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      pFVar3 = FindConfigFile(this,&local_138);
      if (pFVar3 == (FConfigFile *)0x0) {
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_138.Data.ArrayNum != 0) {
          FVar6.Data = local_138.Data.AllocatorInstance.Data;
        }
        bVar2 = DoesConfigFileExistWrapper
                          ((wchar_t *)FVar6.Data,
                           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
        if (bVar2) {
          pFVar3 = FConfigFile::FConfigFile(&local_118);
          pFVar3 = Add(this,&local_138,pFVar3);
          FConfigFile::~FConfigFile(&local_118);
          if (5 < (byte)LogConfig._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          }
          pFVar3->NoSave = true;
          FillFileFromDisk<FConfigFile>(pFVar3,&local_138,false);
          if (5 < (byte)LogConfig._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          }
        }
      }
      else if (2 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  return pFVar3;
}

// FindBranch @ 14186d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

FConfigBranch * __thiscall
FConfigCacheIni::FindBranch(FConfigCacheIni *this,FName param_1,FString *param_2)

{
  FConfigBranch *this_00;
  LARGE_INTEGER local_res20;
  FString local_18;
  
  this_00 = FindBranchWithNoReload(this,param_1,param_2);
  if (this_00 != (FConfigBranch *)0x0) {
    if (this_00->bIsSafeUnloaded != false) {
      FConfigBranch::SafeReload(this_00);
    }
    if ((0.0 < this_00->InactiveTimer || this_00->InactiveTimer == 0.0) && (0 < GTimeToUnloadConfig)
       ) {
      QueryPerformanceCounter(&local_res20);
      this_00->InactiveTimer =
           (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      if (5 < (byte)LogConfig._0_1_) {
        ::FName::ToString(&this_00->IniName,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return this_00;
}

// FindBranchWithNoReload @ 14186d870

FConfigBranch * __thiscall
FConfigCacheIni::FindBranchWithNoReload(FConfigCacheIni *this,FName param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar6;
  bool bVar7;
  FName *pFVar8;
  FConfigBranch *pFVar9;
  FConfigBranch *pFVar10;
  longlong lVar11;
  int iVar12;
  wchar_t *pwVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  FString *local_res18;
  int local_res20;
  FString local_e8;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78 [4];
  undefined4 local_54;
  
  local_res10 = 0;
  for (pFVar9 = (this->KnownFiles).Branches; local_res18 = param_2,
      pFVar9 != (FConfigBranch *)&this->OtherFiles; pFVar9 = pFVar9 + 1) {
    if (pFVar9->IniName == param_1) {
      if (pFVar9 != (FConfigBranch *)0x0) goto LAB_14186dbad;
      break;
    }
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(local_78,pwVar13);
  for (pFVar9 = (this->KnownFiles).Branches; pFVar9 != (FConfigBranch *)&this->OtherFiles;
      pFVar9 = pFVar9 + 1) {
    if (pFVar9->IniName == *pFVar8) {
      if (pFVar9 != (FConfigBranch *)0x0) goto LAB_14186dbad;
      break;
    }
  }
  lpCriticalSection = &this->OtherFilesLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FConfigBranch *)(*pcVar4)();
    return pFVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->OtherFiles;
  pFVar10 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
            ::FindRef((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                       *)this_00,param_2);
  pFVar9 = pFVar10;
  if (pFVar10 == (FConfigBranch *)0x0) {
    puVar1 = &(this->OtherFiles).field_0x10;
    iStack_d0 = 0;
    iVar17 = *(int *)&(this->OtherFiles).field_0x28;
    local_b8 = 0;
    uStack_cc = 1;
    iVar12 = 0;
    iStack_bc = 0;
    if (iVar17 != 0) {
      puVar15 = *(uint **)&(this->OtherFiles).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar18 = *puVar15;
      while (uVar18 == 0) {
        lVar11 = (longlong)iStack_d0;
        local_b8 = local_b8 + 0x20;
        iStack_d0 = iStack_d0 + 1;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) {
          iVar12 = *(int *)&(this->OtherFiles).field_0x28;
          iStack_bc = iVar17;
          goto LAB_14186d9f7;
        }
        uVar18 = puVar15[lVar11 + 1];
      }
      iVar12 = *(int *)&(this->OtherFiles).field_0x28;
      uStack_cc = -uVar18 & uVar18;
      uVar2 = (ulonglong)uStack_cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iStack_bc = local_b8 + -1 + local_res20;
      if (iVar12 < iStack_bc) {
        iStack_bc = iVar17;
      }
    }
LAB_14186d9f7:
    uStack_b4 = local_54;
    iStack_b0 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
    uVar18 = *(uint *)&(this->OtherFiles).field_0x28;
    uStack_c0 = 0xffffffff;
    uVar16 = uVar18 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
    TStack_a0.CurrentBitIndex = iStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_a0._28_4_ = local_54;
    TStack_a0.BaseBitIndex = local_b8;
    uStack_80 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = this_00;
    local_c8 = puVar1;
    local_a8 = this_00;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FConfigBranch *)(*pcVar4)();
      return pFVar9;
    }
    uVar3 = *(uint *)&(this->OtherFiles).field_0x28;
    if (uVar18 != uVar3) {
      puVar14 = *(undefined1 **)&(this->OtherFiles).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
      while (uVar18 == 0) {
        lVar11 = (longlong)iVar17;
        uVar16 = uVar16 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14186db20;
        uVar18 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar18 = (int)lVar11 + -1 + uVar16;
      if ((int)uVar3 < (int)uVar18) {
        uVar18 = uVar3;
      }
    }
LAB_14186db20:
    while( true ) {
      pTVar6 = local_a8;
      if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      param_2 = local_res18;
      if ((((TStack_a0.CurrentBitIndex == uVar18) &&
           (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
          (pFVar9 = pFVar10, pTVar6 == this_00)) ||
         (pFVar9 = *(FConfigBranch **)
                    ((longlong)TStack_a0.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar6),
         pFVar9->IniName == param_1)) break;
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  uVar18 = local_res10;
  if (pFVar9 == (FConfigBranch *)0x0) goto LAB_14186dc4c;
LAB_14186dbad:
  iVar12 = (pFVar9->IniPath).Data.ArrayNum;
  iVar17 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar17 = 0;
  }
  if (iVar17 < 1) {
LAB_14186dc41:
    uVar18 = 0;
  }
  else {
    iVar12 = (param_2->Data).ArrayNum;
    iVar17 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar17 = 0;
    }
    if (iVar17 < 1) goto LAB_14186dc41;
    ::FString::FString(&local_e8,".ini");
    uVar18 = 1;
    iVar17 = local_e8.Data.ArrayNum + -1;
    FVar5.Data = local_e8.Data.AllocatorInstance.Data;
    if (local_e8.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    bVar7 = ::FString::EndsWith(param_2,(wchar_t *)FVar5.Data,iVar17,IgnoreCase);
    if (bVar7) {
      iVar17 = (pFVar9->IniPath).Data.ArrayNum;
      iVar12 = (param_2->Data).ArrayNum;
      if (iVar17 == iVar12) {
        if (iVar17 < 2) goto LAB_14186dc4c;
        iVar17 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar9->IniPath).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar7 = iVar17 == 0;
      }
      else {
        bVar7 = iVar17 + iVar12 == 1;
      }
      if (!bVar7) {
        bVar7 = true;
        goto LAB_14186dc4e;
      }
    }
  }
LAB_14186dc4c:
  bVar7 = false;
LAB_14186dc4e:
  if (((uVar18 & 1) != 0) &&
     (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pFVar9 = (FConfigBranch *)0x0;
  }
  return pFVar9;
}

// FindConfigFile @ 14186dd30

/* WARNING: Enum "Type": Some values do not have unique names */

FConfigFile * __thiscall FConfigCacheIni::FindConfigFile(FConfigCacheIni *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FConfigFile *pFVar4;
  FConfigBranch *this_00;
  wchar_t *pwVar5;
  double dVar6;
  FName local_res18;
  FString local_18;
  
  bVar2 = ::FString::EndsWith(param_1,L".ini",4,IgnoreCase);
  if (bVar2) {
    lpCriticalSection = &this->OtherFilesLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConfigFile *)(*pcVar1)();
      return pFVar4;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
              ::FindRef((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                         *)&this->OtherFiles,param_1);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    this_00 = (this->KnownFiles).Branches;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_res18,pwVar5);
    for (; this_00 != (FConfigBranch *)&this->OtherFiles; this_00 = this_00 + 1) {
      if (((FConfigBranch *)&this_00->IniName)->IniName == *pFVar3) goto LAB_14186de2d;
    }
    this_00 = (FConfigBranch *)0x0;
  }
LAB_14186de2d:
  if (this_00 == (FConfigBranch *)0x0) {
    return (FConfigFile *)0x0;
  }
  if (this_00->bIsSafeUnloaded != false) {
    FConfigBranch::SafeReload(this_00);
  }
  if ((0.0 < this_00->InactiveTimer || this_00->InactiveTimer == 0.0) && (0 < GTimeToUnloadConfig))
  {
    dVar6 = FWindowsPlatformTime::Seconds();
    this_00->InactiveTimer = dVar6;
    if (6 < (byte)LogConfig._0_1_) {
      ::FName::ToString(&this_00->IniName,&local_18);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return &this_00->InMemoryFile;
}

// FindConfigFileWithBaseName @ 14186dee0

/* WARNING: Enum "Type": Some values do not have unique names */

FConfigFile * __thiscall
FConfigCacheIni::FindConfigFileWithBaseName(FConfigCacheIni *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  FConfigFile *pFVar7;
  longlong lVar8;
  FConfigBranch *pFVar9;
  FConfigBranch *pFVar10;
  FConfigBranch *pFVar11;
  ForElementType<unsigned_int> FVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<unsigned_int> local_res18;
  ulonglong local_res20;
  LARGE_INTEGER local_e0;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar11 = (FConfigBranch *)0x0;
  uVar15 = 0;
  for (pFVar10 = (this->KnownFiles).Branches; pFVar9 = pFVar11,
      pFVar10 != (FConfigBranch *)&this->OtherFiles; pFVar10 = pFVar10 + 1) {
    if (((FConfigBranch *)&pFVar10->IniName)->IniName == param_1) {
      pFVar9 = pFVar10;
      if (pFVar10 != (FConfigBranch *)0x0) goto LAB_14186e1d0;
      break;
    }
  }
  lpCriticalSection = &this->OtherFilesLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConfigFile *)(*pcVar3)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18 = (ForElementType<unsigned_int>)&(this->OtherFiles).field_0x10;
  local_res20 = CONCAT44(local_res20._4_4_,1);
  uVar17 = *(uint *)&(this->OtherFiles).field_0x28;
  pTVar1 = &this->OtherFiles;
  local_b8 = 0;
  uStack_bc = uVar15;
  if (uVar17 != 0) {
    puVar13 = *(uint **)&(this->OtherFiles).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_res18;
    }
    uVar6 = *puVar13;
    pFVar10 = pFVar11;
    local_b8 = 0;
    uVar15 = 0;
    while (uVar6 == 0) {
      iVar16 = (int)pFVar10;
      local_b8 = (int)pFVar11 + 0x20;
      pFVar11 = (FConfigBranch *)(ulonglong)local_b8;
      uVar15 = iVar16 + 1;
      pFVar10 = (FConfigBranch *)(ulonglong)uVar15;
      uStack_bc = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14186e011;
      uVar6 = puVar13[(longlong)iVar16 + 1];
    }
    local_res20 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = local_res20 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    uStack_bc = (local_b8 - 1) + local_res10;
    if ((int)uVar17 < (int)uStack_bc) {
      uStack_bc = uVar17;
    }
  }
LAB_14186e011:
  uStack_cc = (undefined4)local_res20;
  uStack_b4 = local_4c;
  iStack_b0 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
  uVar6 = *(uint *)&(this->OtherFiles).field_0x28;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uVar15);
  uStack_c0 = 0xffffffff;
  uVar14 = uVar6 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar6 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = pTVar1;
  uStack_d0 = uVar15;
  local_c8 = (undefined1 *)local_res18;
  local_a8 = pTVar1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res18;
  if ((((int)uVar6 < 0) || ((int)uVar17 < (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConfigFile *)(*pcVar3)();
    return pFVar7;
  }
  uVar15 = *(int *)((longlong)local_res18 + 0x18);
  if (uVar6 != uVar15) {
    FVar12 = *(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_res18;
    }
    uVar17 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar8 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar6 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14186e140;
      uVar17 = *(uint *)((undefined1 *)((longlong)FVar12 + 4) + lVar8 * 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar15 < (int)uVar6) {
      uVar6 = uVar15;
    }
  }
LAB_14186e140:
  while( true ) {
    pTVar4 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((((TStack_a0.CurrentBitIndex == uVar6) &&
         ((ForElementType<unsigned_int>)TStack_a0.Array == local_res18)) &&
        (pFVar10 = pFVar9, pTVar4 == pTVar1)) ||
       (pFVar10 = *(FConfigBranch **)
                   ((longlong)TStack_a0.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar4),
       ((FConfigBranch *)&pFVar10->IniName)->IniName == param_1)) break;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (pFVar10 == (FConfigBranch *)0x0) {
    return (FConfigFile *)0x0;
  }
LAB_14186e1d0:
  if (pFVar10->bIsSafeUnloaded != false) {
    FConfigBranch::SafeReload(pFVar10);
  }
  if ((0.0 < pFVar10->InactiveTimer || pFVar10->InactiveTimer == 0.0) && (0 < GTimeToUnloadConfig))
  {
    QueryPerformanceCounter(&local_e0);
    pFVar10->InactiveTimer =
         (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    if (5 < (byte)LogConfig._0_1_) {
      ::FName::ToString(&pFVar10->IniName,local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return &pFVar10->InMemoryFile;
}

// FindOrLoadPlatformConfig @ 14186e9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConfigFile * __cdecl
FConfigCacheIni::FindOrLoadPlatformConfig(FConfigFile *param_1,wchar_t *param_2,wchar_t *param_3)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  FConfigCacheIni *this;
  FConfigFile *pFVar4;
  bool bVar5;
  undefined1 auStackY_278 [32];
  FString local_248;
  FString local_238;
  undefined1 local_228 [496];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar5 = false;
  local_238.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data & 0xffffffff00000000
  ;
  if (param_3 == (wchar_t *)0x0) {
LAB_14186ea2d:
    bVar1 = false;
  }
  else {
    bVar5 = true;
    local_228._256_8_ = (FScriptContainerElement *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_228,"Windows",7,Yes);
    iVar2 = FGenericPlatformStricmp::Stricmp(param_3,(wchar_t *)local_228._264_8_);
    if (iVar2 == 0) goto LAB_14186ea2d;
    bVar1 = true;
  }
  if ((bVar5) && ((FScriptContainerElement *)local_228._256_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_228._256_8_);
  }
  if (bVar1) {
    pFVar3 = ::FName::FName((FName *)&local_238,param_3);
    this = ForPlatform(*pFVar3);
    ::FString::FString(&local_248,param_2);
  }
  else {
    if (GConfig == (FConfigCacheIni *)0x0) {
      pFVar4 = (FConfigFile *)0x0;
      goto LAB_14186eab4;
    }
    ::FString::FString(&local_248,param_2);
    this = GConfig;
  }
  pFVar4 = FindConfigFile(this,&local_248);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
LAB_14186eab4:
  if (pFVar4 == (FConfigFile *)0x0) {
    ::FString::FString(&local_248,param_3);
    FConfigContext::FConfigContext
              ((FConfigContext *)local_228,(FConfigCacheIni *)0x0,true,&local_248,param_1);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    FConfigContext::Load((FConfigContext *)local_228,param_2,&local_238);
    if ((FName)local_238.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    FConfigContext::~FConfigContext((FConfigContext *)local_228);
    pFVar4 = param_1;
  }
  return pFVar4;
}

// FindPlatformConfig @ 14186ec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConfigFile * __cdecl FConfigCacheIni::FindPlatformConfig(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  FConfigCacheIni *this;
  FConfigFile *pFVar4;
  bool bVar5;
  undefined1 auStack_188 [32];
  FString local_168;
  FName local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar5 = false;
  local_158[0].ComparisonIndex.Value = 0;
  if (param_2 != (wchar_t *)0x0) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    bVar5 = true;
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,local_148.Ptr);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_14186ec78;
    }
  }
  bVar1 = false;
LAB_14186ec78:
  if ((bVar5) && ((void *)local_148._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_148._padding_);
  }
  if (bVar1) {
    pFVar3 = ::FName::FName(local_158,param_2);
    this = ForPlatform(*pFVar3);
    ::FString::FString(&local_168,param_1);
  }
  else {
    if (GConfig == (FConfigCacheIni *)0x0) {
      return (FConfigFile *)0x0;
    }
    ::FString::FString(&local_168,param_1);
    this = GConfig;
  }
  pFVar4 = FindConfigFile(this,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return pFVar4;
}

// Flush @ 14186fec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConfigCacheIni::Flush(FConfigCacheIni *this,bool param_1,FString *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  undefined1 *puVar2;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar8;
  bool bVar9;
  FName *pFVar10;
  FConfigBranch *pFVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res20 [8];
  undefined1 local_148 [8];
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_100;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98 [4];
  undefined4 local_74;
  undefined4 local_54;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4389,"FConfigCacheIni::Flush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
               ,0x1125);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4389);
  }
  if ((this->Type != Temporary) && (this->bAreFileOperationsDisabled == false)) {
    iVar14 = (param_2->Data).ArrayNum;
    iVar16 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar16 = 0;
    }
    if (iVar16 < 1) {
      pFVar1 = &this->OtherFilesLock;
      if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      local_100 = &this->OtherFiles;
      local_120 = 0;
      puVar2 = &(this->OtherFiles).field_0x10;
      iVar16 = *(int *)&(this->OtherFiles).field_0x28;
      iStack_138 = 0;
      uStack_134 = 1;
      iStack_124 = 0;
      if (iVar16 != 0) {
        puVar19 = *(uint **)&(this->OtherFiles).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)puVar2;
        }
        uVar18 = *puVar19;
        while (uVar18 == 0) {
          lVar12 = (longlong)iStack_138;
          local_120 = local_120 + 0x20;
          iStack_138 = iStack_138 + 1;
          iStack_124 = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
          goto LAB_141870081;
          uVar18 = puVar19[lVar12 + 1];
        }
        uStack_134 = -uVar18 & uVar18;
        uVar5 = (ulonglong)uStack_134 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_110 = (int)lVar12;
        iStack_124 = local_120 + -1 + local_110;
        if (iVar16 < iStack_124) {
          iStack_124 = iVar16;
        }
      }
LAB_141870081:
      local_140 = &this->OtherFiles;
      uStack_11c = local_74;
      iStack_118 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
      uVar18 = *(uint *)&(this->OtherFiles).field_0x28;
      uStack_128 = 0xffffffff;
      TStack_f0._padding_ = CONCAT44(uStack_134,iStack_138);
      uVar20 = uVar18 & 0xffffffe0;
      TStack_f0.CurrentBitIndex = iStack_124;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar18 >> 5;
      TStack_f0._28_4_ = local_74;
      TStack_f0.BaseBitIndex = local_120;
      uStack_d0 = CONCAT44(uStack_114,iStack_118);
      local_130 = puVar2;
      local_f8 = local_140;
      TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar3 = local_100;
      uVar6 = *(uint *)&(this->OtherFiles).field_0x28;
      if (uVar18 != uVar6) {
        puVar17 = *(undefined1 **)&(this->OtherFiles).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar18 == 0) {
          lVar12 = (longlong)iVar14;
          uVar20 = uVar20 + 0x20;
          iVar14 = iVar14 + 1;
          uVar18 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1418701b0;
          uVar18 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_10c = (int)lVar12;
        uVar18 = local_10c + -1 + uVar20;
        if ((int)uVar6 < (int)uVar18) {
          uVar18 = uVar6;
        }
      }
LAB_1418701b0:
      while( true ) {
        pTVar8 = local_f8;
        if (*(int *)(&local_f8->field_0x0 + 8) - *(int *)(&local_f8->field_0x0 + 0x34) !=
            (int)uStack_d0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_f0.CurrentBitIndex == uVar18) &&
            (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar8 == pTVar3)) break;
        SaveBranch(*(FConfigBranch **)
                    ((longlong)TStack_f0.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&pTVar8->field_0x0));
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
      for (pFVar11 = (this->KnownFiles).Branches; pFVar11 != (FConfigBranch *)&this->OtherFiles;
          pFVar11 = pFVar11 + 1) {
        SaveBranch(pFVar11);
      }
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
    }
    else {
      if (iVar14 == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pFVar10 = ::FName::FName(local_98,pwVar13);
      pFVar11 = FindBranch(this,*pFVar10,param_2);
      if (pFVar11 != (FConfigBranch *)0x0) {
        SaveBranch(pFVar11);
      }
    }
  }
  iVar16 = 0;
  if (param_1) {
    if (this->bAreFileOperationsDisabled == false) {
      iVar15 = (param_2->Data).ArrayNum;
      iVar14 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar14 = 0;
      }
      if (iVar14 == 0) {
        pFVar1 = &this->OtherFilesLock;
        if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        puVar2 = &(this->OtherFiles).field_0x10;
        local_120 = 0;
        iVar14 = *(int *)&(this->OtherFiles).field_0x28;
        pTVar3 = &this->OtherFiles;
        uStack_134 = 1;
        iStack_124 = iVar16;
        if (iVar14 != 0) {
          puVar19 = *(uint **)&(this->OtherFiles).field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar2;
          }
          uVar18 = *puVar19;
          iVar16 = 0;
          while (uVar18 == 0) {
            lVar12 = (longlong)iVar16;
            local_120 = local_120 + 0x20;
            iVar16 = iVar16 + 1;
            iStack_124 = iVar14;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_141870371;
            uVar18 = puVar19[lVar12 + 1];
          }
          uStack_134 = -uVar18 & uVar18;
          uVar5 = (ulonglong)uStack_134 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_108 = (int)lVar12;
          iStack_124 = local_120 + -1 + local_108;
          if (iVar14 < iStack_124) {
            iStack_124 = iVar14;
          }
        }
LAB_141870371:
        uStack_11c = local_54;
        iStack_118 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
        uVar18 = *(uint *)&(this->OtherFiles).field_0x28;
        uStack_128 = 0xffffffff;
        uVar20 = uVar18 & 0xffffffe0;
        TStack_c0._padding_ = CONCAT44(uStack_134,iVar16);
        TStack_c0.CurrentBitIndex = iStack_124;
        TStack_c0.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar18 >> 5;
        TStack_c0._28_4_ = local_54;
        TStack_c0.BaseBitIndex = local_120;
        uStack_a0 = CONCAT44(uStack_114,iStack_118);
        local_140 = pTVar3;
        iStack_138 = iVar16;
        local_130 = puVar2;
        local_c8 = pTVar3;
        TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar6 = *(uint *)&(this->OtherFiles).field_0x28;
        if (uVar18 != uVar6) {
          puVar17 = *(undefined1 **)&(this->OtherFiles).field_0x20;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = puVar2;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
          while (uVar18 == 0) {
            lVar12 = (longlong)iVar15;
            uVar20 = uVar20 + 0x20;
            iVar15 = iVar15 + 1;
            uVar18 = uVar6;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_141870490;
            uVar18 = *(uint *)(puVar17 + lVar12 * 4 + 4);
          }
          uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar18 = (int)lVar12 + -1 + uVar20;
          if ((int)uVar6 < (int)uVar18) {
            uVar18 = uVar6;
          }
        }
LAB_141870490:
        while( true ) {
          pTVar8 = local_c8;
          if (*(int *)(&local_c8->field_0x0 + 8) - *(int *)(&local_c8->field_0x0 + 0x34) !=
              (int)uStack_a0) {
            `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
          }
          if (((TStack_c0.CurrentBitIndex == uVar18) &&
              (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar8 == pTVar3)) break;
          pFVar11 = *(FConfigBranch **)
                     ((longlong)TStack_c0.CurrentBitIndex * 0x20 + 0x10 +
                     *(longlong *)&pTVar8->field_0x0);
          if (pFVar11 != (FConfigBranch *)0x0) {
            FConfigBranch::~FConfigBranch(pFVar11);
            ::operator_delete(pFVar11,0x628);
          }
          TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
        }
        bVar9 = 1 < *(int *)&(this->OtherFiles).field_0x48;
        if (!bVar9) {
          TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
                            *)pTVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)pTVar3,0,*(int *)&(this->OtherFiles).field_0x8);
        puVar2 = &(this->OtherFiles).field_0xc;
        *(undefined4 *)&(this->OtherFiles).field_0x8 = 0;
        if (*(int *)puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
        }
        *(undefined4 *)&(this->OtherFiles).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->OtherFiles).field_0x34 = 0;
        iVar16 = *(int *)&(this->OtherFiles).field_0x2c;
        *(undefined4 *)&(this->OtherFiles).field_0x28 = 0;
        if ((iVar16 < 0) || (0x80 < iVar16)) {
          *(undefined4 *)&(this->OtherFiles).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OtherFiles).field_0x10,0);
        }
        if (bVar9) {
          *(undefined4 *)&(this->OtherFiles).field_0x48 = 1;
          TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
                    *)pTVar3);
        }
        DestructItems<FString,int>
                  ((FString *)(this->OtherFileNames).AllocatorInstance.Data,
                   (this->OtherFileNames).ArrayNum);
        piVar4 = &(this->OtherFileNames).ArrayMax;
        (this->OtherFileNames).ArrayNum = 0;
        if (*piVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->OtherFileNames).AllocatorInstance,0,piVar4);
        }
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
      }
      else {
        Remove(this,param_2);
      }
    }
    else if (2 < (byte)LogConfig._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachEntry @ 141870a50

bool __thiscall
FConfigCacheIni::ForEachEntry
          (FConfigCacheIni *this,
          TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
          *param_1,wchar_t *param_2,FString *param_3)

{
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FConfigFile *this_00;
  FString *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  FString local_c8;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined4 local_40;
  FString local_38;
  
  plVar15 = (longlong *)0x0;
  local_40 = 0;
  this_00 = Find(this,param_3);
  if (this_00 != (FConfigFile *)0x0) {
    ::FString::FString(&local_c8,param_2);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar4 = local_c8.Data.ArrayNum + -1;
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_c8.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar8.Data);
    iVar4 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar3,&local_c8);
    plVar6 = plVar15;
    if (iVar4 != -1) {
      plVar6 = (longlong *)((longlong)iVar4 * 0x110 + this_00->_padding_);
    }
    plVar7 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar7 = plVar15;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (plVar7 != (longlong *)0x0) {
      local_88 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar7 + 2);
      uVar3 = *(uint *)(plVar7 + 5);
      uStack_8c = 1;
      local_78 = 0;
      plVar11 = plVar15;
      plVar6 = plVar15;
      if (uVar3 != 0) {
        plVar11 = (longlong *)(ulonglong)uVar3;
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = local_88;
        }
        uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
        plVar13 = plVar15;
        local_78 = 0;
        while (uVar12 == 0) {
          iVar4 = (int)plVar6;
          local_78 = (int)plVar13 + 0x20;
          plVar13 = (longlong *)(ulonglong)local_78;
          uVar12 = iVar4 + 1;
          plVar6 = (longlong *)(ulonglong)uVar12;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
          goto LAB_141870bad;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar4 * 4 + 4);
        }
        uStack_8c = -uVar12 & uVar12;
        uVar1 = (ulonglong)uStack_8c * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar12 = (local_78 - 1) + (int)lVar2;
        if ((int)uVar3 < (int)uVar12) {
          uVar12 = uVar3;
        }
        plVar11 = (longlong *)(ulonglong)uVar12;
      }
LAB_141870bad:
      uStack_7c = (uint)plVar11;
      uStack_90 = SUB84(plVar6,0);
      uStack_80 = 0xffffffff;
      TStack_60._padding_ = CONCAT44(uStack_8c,uStack_90);
      TStack_60.UnvisitedBitMask = 0xffffffff;
      TStack_60._28_4_ = uStack_7c;
      TStack_60.BaseBitIndex = local_78;
      plVar6 = plVar15;
      local_98 = plVar7;
      uStack_74 = uStack_7c;
      local_68 = plVar7;
      TStack_60.Array = local_88;
      TStack_60.CurrentBitIndex = uStack_7c;
      if ((int)uStack_7c < (int)uVar3) {
        do {
          iVar4 = TStack_60.CurrentBitIndex;
          plVar7 = local_68;
          lVar2 = *local_68 + (longlong)(int)plVar11 * 0x28;
          if (*(char *)(*local_68 + 0x1d + (longlong)(int)plVar11 * 0x28) == '\0') {
            iVar9 = *(int *)(lVar2 + 0x10);
            uVar3 = (uint)plVar6 | 2;
            _Src = *(void **)(lVar2 + 8);
            local_b8.Data = (FScriptContainerElement *)0x0;
            local_b0 = iVar9;
            if (iVar9 == 0) {
              local_ac = 0;
              FVar8.Data = local_b8.Data;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,0,&local_b8,iVar9,&local_ac);
              memcpy(local_b8.Data,_Src,(longlong)iVar9 * 2);
              FVar8.Data = local_b8.Data;
              iVar9 = local_b0;
            }
          }
          else {
            uVar3 = (uint)plVar6 | 1;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            FConfigValue::ExpandValue((FString *)(lVar2 + 8),&local_c8);
            FVar8.Data = local_c8.Data.AllocatorInstance.Data;
            iVar9 = local_c8.Data.ArrayNum;
          }
          plVar6 = (longlong *)(ulonglong)uVar3;
          local_a8.Data = (FScriptContainerElement *)0x0;
          local_a0 = iVar9;
          if (iVar9 == 0) {
            local_9c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,0,&local_a8,iVar9,&local_9c);
            memcpy(local_a8.Data,FVar8.Data,(longlong)iVar9 * 2);
          }
          if (((uVar3 & 2) != 0) &&
             (plVar6 = (longlong *)(ulonglong)(uVar3 & 0xfffffffd),
             local_b8.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_b8.Data);
          }
          if ((((ulonglong)plVar6 & 1) != 0) &&
             (plVar6 = (longlong *)(ulonglong)((uint)plVar6 & 0xfffffffe),
             local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_a0 != 0) {
            FVar8.Data = local_a8.Data;
          }
          pFVar5 = ::FName::GetPlainNameString
                             ((FName *)(*plVar7 + (longlong)iVar4 * 0x28),&local_38);
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
                     (FReadAccessScope *)&local_98);
          plVar7 = plVar15;
          if (*(int *)&param_1->field_0x10 != 0) {
            plVar7 = *(longlong **)&param_1->field_0x8;
          }
          (**(code **)(*plVar7 + 0x60))(plVar7,pwVar10,FVar8.Data);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_98);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data);
          }
          TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
          plVar11 = (longlong *)(ulonglong)(uint)TStack_60.CurrentBitIndex;
        } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
      }
      return true;
    }
  }
  return false;
}

// ForPlatform @ 141870e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FConfigCacheIni * __cdecl FConfigCacheIni::ForPlatform(FName param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FConfigCacheIni *pFVar5;
  TTuple<FName,FConfigCacheIni_*> *pTVar6;
  FConfigCacheIni *pFVar7;
  FString *pFVar8;
  FName local_res8;
  undefined1 auStackY_2b8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_288;
  TPairInitializer<FName_const_&,FConfigCacheIni_*_&&> local_278;
  FConfigCacheIni *local_268;
  LARGE_INTEGER local_260;
  FName *local_258;
  FConfigCacheIni **local_250;
  FString local_248;
  FString local_238;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_res8 = param_1;
  if (((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig != nullptr && GConfig->bIsReadyForUse",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                         ,0x1bd9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FConfigCacheIni *)(*pcVar3)();
    return pFVar5;
  }
  pFVar5 = GConfig;
  if (local_res8 != (FName)0x0) {
    pFVar7 = (FConfigCacheIni *)0x0;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 0;
    local_288.ArrayMax = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
    pTVar6 = TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
                     *)&ConfigForPlatform,local_res8);
    pFVar5 = pFVar7;
    if (pTVar6 != (TTuple<FName,FConfigCacheIni_*> *)0x0) {
      pFVar5 = *(FConfigCacheIni **)&pTVar6->field_0x8;
    }
    if (pFVar5 == (FConfigCacheIni *)0x0) {
      QueryPerformanceCounter((LARGE_INTEGER *)&local_278.Value);
      pFVar5 = ::operator_new(0x3ea8);
      if (pFVar5 != (FConfigCacheIni *)0x0) {
        pFVar7 = FConfigCacheIni(pFVar5,Temporary,local_res8,true);
      }
      local_258 = &local_res8;
      local_250 = &local_268;
      local_268 = pFVar7;
      TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FConfigCacheIni_*_&&>_>
                ((TSet<TTuple<FName,FConfigCacheIni_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni_*,0>,FDefaultSetAllocator>
                  *)&ConfigForPlatform,&local_278,(bool *)&local_258);
      pFVar5 = *(FConfigCacheIni **)
                (ConfigForPlatform._0_8_ + 8 + (longlong)(int)local_278.Key * 0x18);
      pFVar8 = ::FName::ToString(&local_res8,&local_248);
      FConfigContext::FConfigContext(&local_228,pFVar5,true,pFVar8,(FConfigFile *)0x0);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      InitializeKnownConfigFiles(&local_228);
      if (3 < (byte)LogConfig._0_1_) {
        QueryPerformanceCounter(&local_260);
        ::FName::ToString(&local_res8,&local_238);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      FConfigContext::~FConfigContext(&local_228);
    }
    pTVar2 = &pFVar5->PendingModificationPlugins;
    piVar1 = &(pFVar5->PendingModificationPlugins).ArrayMax;
    if (&local_288 != pTVar2) {
      local_288.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_288.ArrayNum = (pFVar5->PendingModificationPlugins).ArrayNum;
      local_288.ArrayMax = (pFVar5->PendingModificationPlugins).ArrayMax;
      *piVar1 = 0;
      (pFVar5->PendingModificationPlugins).ArrayNum = 0;
    }
    (pFVar5->PendingModificationPlugins).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    AddPluginsToBranches(pFVar5,&local_288,(FConfigModificationTracker *)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&ConfigForPlatformLock);
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
  }
  return pFVar5;
}

// GetArray @ 141872620

int __thiscall
FConfigCacheIni::GetArray
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4)

{
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_02;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  this_00 = FRemoteConfig::Get();
  pwVar2 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar1);
  DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  this_01 = Find(this,param_4);
  if (this_01 != (FConfigFile *)0x0) {
    FConfigFile::GetArray(this_01,param_1,param_2,param_3);
  }
  if (param_3->ArrayNum != 0) {
    this_02 = FCoreDelegates::TSOnConfigValueRead();
    if ((param_4->Data).ArrayNum != 0) {
      pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
    ::Broadcast(this_02,pwVar2,param_1,param_2);
  }
  return param_3->ArrayNum;
}

// GetBool @ 1418729c0

bool __thiscall
FConfigCacheIni::GetBool
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,bool *param_3,FString *param_4)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)FVar2.Data);
    *param_3 = bVar1;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetColor @ 141872b80

bool __thiscall
FConfigCacheIni::GetColor
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FColor *param_3,FString *param_4)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    bVar1 = FColor::InitFromString(param_3,&local_18);
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetConfigFilename @ 141872c30

FString * __thiscall
FConfigCacheIni::GetConfigFilename
          (FConfigCacheIni *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FString local_18;
  
  pFVar1 = ::FName::FName(&local_res8,param_1,FNAME_Find);
  pFVar2 = (FName *)&this->KnownFiles;
  do {
    if ((TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
         *)pFVar2 == &this->OtherFiles) {
LAB_141872c80:
      pFVar3 = FPaths::GeneratedConfigDir(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      GetDestIniFilename(__return_storage_ptr__,param_1,(wchar_t *)0x0,pwVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (*pFVar2 == *pFVar1) {
      pFVar1 = pFVar2 + 0x8e;
      if (pFVar2 == (FName *)0x0) {
        pFVar1 = (FName *)0x0;
      }
      if (pFVar1 != (FName *)0x0) {
        ::FString::FString(__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      goto LAB_141872c80;
    }
    pFVar2 = pFVar2 + 0xc5;
  } while( true );
}

// GetConfigFilenames @ 141872d10

void __thiscall
FConfigCacheIni::GetConfigFilenames
          (FConfigCacheIni *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = GetFilenames(this,&local_18);
  if (param_1 != pTVar2) {
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar2->ArrayNum;
    param_1->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetCustomConfigString @ 141872e00

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl FConfigCacheIni::GetCustomConfigString(void)

{
  wchar_t (*pawVar1) [15];
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FConfigCacheIni::GetCustomConfigString'::__l2::
           _dynamic_atexit_destructor_for__CustomConfigString__);
    _Init_thread_footer(&::_TSS0);
  }
  if (::bInitialized == false) {
    ::bInitialized = true;
    ::FString::operator=(&CustomConfigString,L"");
    pawVar1 = CommandlineOverrideSpecifiers::CustomConfigIdentifier;
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar3,*pawVar1,&CustomConfigString,true,(wchar_t **)0x0);
    if (bVar2) {
      if (4 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        return &CustomConfigString;
      }
    }
    else if ((1 < CustomConfigString.Data.ArrayNum) && (4 < (byte)LogConfig._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
  }
  return &CustomConfigString;
}

// GetDestIniFilename @ 141872fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FConfigCacheIni::GetDestIniFilename
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  size_t sVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_218 [32];
  FString local_1e8;
  FString local_1d8;
  undefined4 local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  ::FString::PrintfImpl(&local_1c0,L"%sINI=");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar9.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar6,(wchar_t *)FVar9.Data,__return_storage_ptr__,true,(wchar_t **)0x0);
  if (bVar3) goto LAB_14187320e;
  if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"Windows",7,Yes);
    ::FString::FString(&local_1d8,local_178.Ptr);
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
  }
  else {
    ::FString::FString(&local_1d8,(wchar_t *)local_1d8.Data.AllocatorInstance.Data);
  }
  bVar2 = false;
  bVar3 = false;
  pFVar7 = ::FString::FString(&local_190,param_1);
  if (param_3 == (wchar_t *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar8 = wcslen(param_3);
    iVar5 = (int)sVar8;
  }
  bVar4 = ::FString::StartsWith(pFVar7,param_3,iVar5,IgnoreCase);
  if (bVar4) {
    ::FString::FString(&local_1b0,param_1);
    bVar2 = true;
    bVar3 = true;
    pFVar7 = FPaths::GetExtension(&local_1a0,&local_1b0,false);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar6,L"ini");
    if (iVar5 != 0) goto LAB_14187313f;
    bVar4 = true;
  }
  else {
LAB_14187313f:
    bVar4 = false;
  }
  if ((bVar3) && (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    ::FString::operator=(__return_storage_ptr__,param_1);
  }
  else {
    ::FString::PrintfImpl(&local_1e8,L"%s%s/%s.ini");
    if (__return_storage_ptr__ != &local_1e8) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_1e8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_1e8.Data.ArrayMax;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
LAB_14187320e:
  FPaths::MakeStandardFilename(__return_storage_ptr__);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDouble @ 141873260

bool __thiscall
FConfigCacheIni::GetDouble
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,double *param_3,FString *param_4)

{
  bool bVar1;
  ForAnyElementType _Str;
  double dVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    dVar2 = wcstod((wchar_t *)_Str.Data,(wchar_t **)0x0);
    *param_3 = dVar2;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetFilenames @ 1418735a0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FConfigCacheIni::GetFilenames
          (FConfigCacheIni *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName *this_00;
  FString local_28;
  
  lpCriticalSection = &this->OtherFilesLock;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (__return_storage_ptr__,&this->OtherFileNames);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  this_00 = (FName *)&this->KnownFiles;
  while( true ) {
    if ((TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
         *)this_00 == &this->OtherFiles) {
      return __return_storage_ptr__;
    }
    pFVar5 = (FScriptContainerElement *)::FName::ToString(this_00,&local_28);
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar5) && (pFVar5 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)
        ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) break;
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = *(int *)&pFVar5[8].field_0x0;
    *(int *)(pFVar6 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
    *(undefined8 *)&pFVar5[8].field_0x0 = 0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 0xc5;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// GetFloat @ 141873750

bool __thiscall
FConfigCacheIni::GetFloat
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,float *param_3,FString *param_4)

{
  bool bVar1;
  ForAnyElementType _Str;
  double dVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    dVar2 = _wtof((wchar_t *)_Str.Data);
    *param_3 = (float)dVar2;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetInt64 @ 141873b90

bool __thiscall
FConfigCacheIni::GetInt64
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,long64 *param_3,FString *param_4)

{
  bool bVar1;
  longlong lVar2;
  ForAnyElementType _Str;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    lVar2 = _wtoi64((wchar_t *)_Str.Data);
    *param_3 = lVar2;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetInt @ 141873cc0

bool __thiscall
FConfigCacheIni::GetInt
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,int *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetString(this,param_1,param_2,&local_18,param_4);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    *param_3 = iVar2;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetMaxMemoryUsage @ 141873eb0

ulong64 __thiscall FConfigCacheIni::GetMaxMemoryUsage(FConfigCacheIni *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  ForAnyElementType FVar5;
  ForAnyElementType _Src_00;
  LPCRITICAL_SECTION lpCriticalSection_00;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong64 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res10 [8];
  ForAnyElementType local_res18;
  int local_res20;
  int local_348;
  int iStack_344;
  int local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  int local_2c8;
  LPCRITICAL_SECTION local_2b8;
  ulong64 local_2b0;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  int iStack_28c;
  int local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  FArchiveState local_248;
  FScriptContainerElement *local_1b8;
  ForAnyElementType local_1b0;
  FArchiveState local_1a8;
  ForAnyElementType local_118;
  ForAnyElementType local_110;
  FArchiveState local_108;
  longlong local_78;
  ulong64 local_70;
  undefined4 local_4c;
  
  lpCriticalSection = &this->OtherFilesLock;
  local_2b8 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FArchiveState::FArchiveState(&local_108);
  lVar21 = (longlong)*(int *)&(this->OtherFiles).field_0x48;
  uVar14 = *(uint *)&(this->OtherFiles).field_0x28;
  puVar1 = &(this->OtherFiles).field_0x10;
  iStack_280 = *(int *)&(this->OtherFiles).field_0x8;
  uStack_29c = 1;
  local_108.ArIsCountingMemory = '\x01';
  local_108._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
  local_res18.Data._0_4_ = uVar14;
  local_78 = ((ulonglong)(uVar14 + 0x1f >> 5) + lVar21 +
             ((longlong)(this->OtherFileNames).ArrayNum + (longlong)iStack_280 * 2) * 4) * 4;
  local_2b0 = ((ulonglong)(*(int *)&(this->OtherFiles).field_0x2c + 0x1fU >> 5) + lVar21 +
              ((longlong)(this->OtherFileNames).ArrayMax +
              (longlong)*(int *)&(this->OtherFiles).field_0xc * 2) * 4) * 4;
  iStack_2a0 = 0;
  local_288 = 0;
  local_348 = 0;
  iStack_344 = 0;
  local_340 = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  iVar10 = *(int *)&(this->OtherFiles).field_0x28;
  iStack_28c = local_288;
  if (iVar10 != 0) {
    puVar23 = *(uint **)&(this->OtherFiles).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar24 = *puVar23;
    local_288 = 0;
    iStack_2a0 = 0;
    while (uVar24 == 0) {
      lVar21 = (longlong)iStack_2a0;
      local_288 = local_288 + 0x20;
      iStack_2a0 = iStack_2a0 + 1;
      iStack_28c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0) goto LAB_141874041;
      uVar24 = puVar23[lVar21 + 1];
    }
    uStack_29c = -uVar24 & uVar24;
    uVar17 = (ulonglong)uStack_29c * 2 + 1;
    lVar21 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_res20 = (int)lVar21;
    iStack_28c = local_288 + -1 + local_res20;
    if (iVar10 < iStack_28c) {
      iStack_28c = iVar10;
    }
  }
LAB_141874041:
  uStack_290 = 0xffffffff;
  iStack_280 = iStack_280 - *(int *)&(this->OtherFiles).field_0x34;
  local_2a8 = &this->OtherFiles;
  uVar24 = uVar14 & 0xffffffe0;
  TStack_270._padding_ = CONCAT44(uStack_29c,iStack_2a0);
  TStack_270.CurrentBitIndex = iStack_28c;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  uStack_284 = local_4c;
  TStack_270._28_4_ = local_4c;
  TStack_270.BaseBitIndex = local_288;
  uStack_250 = CONCAT44(uStack_27c,iStack_280);
  iVar18 = (int)uVar14 >> 5;
  local_298 = puVar1;
  local_278 = local_2a8;
  TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_70 = local_2b0;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  uVar3 = *(uint *)&(this->OtherFiles).field_0x28;
  if (uVar14 != uVar3) {
    puVar22 = *(undefined1 **)&(this->OtherFiles).field_0x20;
    local_res18.Data._0_4_ = uVar3;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar21 = (longlong)iVar18;
      uVar24 = uVar24 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_141874152;
      uVar14 = *(uint *)(puVar22 + lVar21 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_2c8 = (int)lVar21;
    local_res18.Data._0_4_ = local_2c8 + -1 + uVar24;
    if ((int)uVar3 < (int)(uint)local_res18.Data) {
      local_res18.Data._0_4_ = uVar3;
    }
  }
LAB_141874152:
  iVar10 = (uint)local_res18.Data;
  while( true ) {
    pTVar6 = local_278;
    if (*(int *)&local_278->field_0x8 - *(int *)&local_278->field_0x34 != (int)uStack_250) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_270.CurrentBitIndex == iVar10) &&
        (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->OtherFiles)) break;
    puVar15 = (undefined8 *)((longlong)TStack_270.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
    local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.Data.ArrayNum = *(int *)(puVar15 + 1);
    lVar21 = (longlong)local_328.Data.ArrayNum;
    _Src = (void *)*puVar15;
    if (local_328.Data.ArrayNum == 0) {
      local_328.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_328,
                 local_328.Data.ArrayNum,&local_328.Data.ArrayMax);
      memcpy(local_328.Data.AllocatorInstance.Data,_Src,lVar21 * 2);
    }
    lVar21 = puVar15[2];
    FArchiveState::FArchiveState(&local_248);
    local_248.ArIsCountingMemory = '\x01';
    local_248._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
    local_1b8 = (FScriptContainerElement *)0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_248,&local_328);
    ::operator<<((FArchive *)&local_248,(FConfigFile *)(lVar21 + 0x470));
    FVar7.Data = local_1b0.Data;
    local_res18.Data = local_1b8;
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar18 = local_328.Data.ArrayNum + -1;
    if (local_328.Data.ArrayNum == 0) {
      iVar18 = 0;
    }
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    if (iVar18 < local_348) {
      iVar18 = local_348;
    }
    ::FString::AppendInt(&local_318,(int)local_1b8);
    iVar12 = local_318.Data.ArrayNum + -1;
    if (local_318.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    if (iVar12 < iStack_344) {
      iVar12 = iStack_344;
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Data.ArrayNum = 0;
    local_308.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_308,(int)FVar7.Data);
    iVar13 = local_308.Data.ArrayNum + -1;
    if (local_308.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    if (iVar13 < local_340) {
      iVar13 = local_340;
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    iVar9 = (int)local_330;
    if ((int)local_330 == local_330._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_338,(int *)((longlong)&local_330 + 4));
    }
    FVar5.Data = local_328.Data.AllocatorInstance.Data;
    lVar21 = (longlong)iVar9 * 0x20;
    local_330 = CONCAT44(local_330._4_4_,iVar9 + 1);
    *(undefined8 *)&local_338.Data[lVar21].field_0x0 = 0;
    lVar16 = (longlong)local_328.Data.ArrayNum;
    *(int *)(local_338.Data + lVar21 + 8) = local_328.Data.ArrayNum;
    pFVar19 = local_338.Data + lVar21;
    pFVar2 = local_338.Data + lVar21;
    if (local_328.Data.ArrayNum == 0) {
      *(int *)(pFVar2 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)pFVar19,local_328.Data.ArrayNum,
                 (int *)(pFVar2 + 0xc));
      memcpy(*(void **)&pFVar2->field_0x0,FVar5.Data,lVar16 * 2);
    }
    *(FScriptContainerElement **)(pFVar19 + 0x10) = local_res18.Data;
    *(FScriptContainerElement **)(pFVar19 + 0x18) = FVar7.Data;
    FArchive::~FArchive((FArchive *)&local_248);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
    local_340 = iVar13;
    local_348 = iVar18;
    iStack_344 = iVar12;
  }
  FArchiveState::FArchiveState(&local_1a8);
  local_1a8.ArIsCountingMemory = '\x01';
  local_1a8._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  ::operator<<((FArchive *)&local_1a8,&this->KnownFiles);
  ::FString::FString(&local_2d8,L"KnownFiles");
  FVar5.Data = local_110.Data;
  FVar7.Data = local_118.Data;
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = 0;
  local_2f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2f8,(int)local_118.Data);
  uVar11 = local_2b0;
  lpCriticalSection_00 = local_2b8;
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2e8,(int)FVar5.Data);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  iVar10 = (int)local_330;
  if ((int)local_330 == local_330._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_338,(int *)((longlong)&local_330 + 4));
  }
  _Src_00.Data = local_2d8.Data.AllocatorInstance.Data;
  pFVar19 = local_338.Data + (longlong)iVar10 * 0x20;
  local_330 = CONCAT44(local_330._4_4_,iVar10 + 1);
  *(FScriptContainerElement **)&pFVar19->field_0x0 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar19 + 8) = local_2d8.Data.ArrayNum;
  if (local_2d8.Data.ArrayNum == 0) {
    *(int *)(pFVar19 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar19,local_2d8.Data.ArrayNum,
               (int *)(pFVar19 + 0xc));
    memcpy(*(FScriptContainerElement **)&pFVar19->field_0x0,_Src_00.Data,
           (longlong)local_2d8.Data.ArrayNum * 2);
  }
  uVar17 = 0;
  *(FScriptContainerElement **)(pFVar19 + 0x10) = FVar7.Data;
  *(FScriptContainerElement **)(pFVar19 + 0x18) = FVar5.Data;
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  uVar20 = uVar17;
  iVar10 = (int)local_330;
  if (0 < (int)local_330) {
    do {
      uVar24 = (uint)uVar20;
      uVar14 = 0;
      if ((int)uVar24 < iVar10) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return uVar11;
        }
        iVar10 = (int)local_330;
      }
      uVar11 = uVar11 + *(longlong *)(local_338.Data + uVar17 + 0x18);
      uVar17 = uVar17 + 0x20;
      uVar20 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < iVar10);
  }
  DestructItems<FConfigFileMemoryData,int>((FConfigFileMemoryData *)local_338.Data,iVar10);
  if ((FConfigFileMemoryData *)local_338.Data != (FConfigFileMemoryData *)0x0) {
    FMemory::Free(local_338.Data);
  }
  FArchive::~FArchive((FArchive *)&local_108);
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return uVar11;
}

// GetPerObjectConfigSections @ 141874ce0

bool __thiscall
FConfigCacheIni::GetPerObjectConfigSections
          (FConfigCacheIni *this,FString *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FConfigFile *pFVar9;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_00;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *this_01;
  uint uVar12;
  wchar_t *pwVar13;
  int iVar14;
  bool bVar15;
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  FConfigFile *local_38;
  undefined2 local_30;
  
  bVar5 = false;
  if (param_4 < 0) {
    param_4 = 0;
  }
  pFVar9 = Find(this,param_1);
  if (pFVar9 == (FConfigFile *)0x0) {
    bVar5 = false;
  }
  else {
    DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_98,
               (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)pFVar9);
    local_30 = 0;
    stack0xffffffffffffffa8 = local_98._16_16_;
    local_68 = (longlong *)local_98._0_8_;
    auStack_60._0_8_ = local_98._8_8_;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    uVar10 = local_98._24_8_ >> 0x20;
    if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
      iVar14 = 1;
      local_38 = pFVar9;
      do {
        if (param_4 <= param_3->ArrayNum) break;
        this_01 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x110 + *local_68);
        iVar7 = ::FString::Find((FString *)this_01,L" ",1,IgnoreCase,FromStart,-1);
        if (iVar7 != -1) {
          ::FString::RightChop((FString *)this_01,&local_a8,iVar7 + 1);
          iVar7 = (param_2->Data).ArrayNum;
          iVar8 = local_a8.Data.ArrayNum;
          if (iVar8 == iVar7) {
            if (iVar8 < 2) {
              bVar15 = true;
            }
            else {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_2->Data).AllocatorInstance.Data);
              bVar15 = iVar7 == 0;
            }
          }
          else {
            bVar15 = iVar8 + iVar7 == 1;
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            pFVar2 = (param_3->AllocatorInstance).Data;
            if (((pFVar2 <= this_01) && (this_01 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar7 = param_3->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,piVar1);
            }
            pFVar2 = (param_3->AllocatorInstance).Data;
            param_3->ArrayNum = iVar7 + 1;
            memmove(pFVar2 + 0x10,pFVar2,(longlong)iVar7 << 4);
            ::FString::FString((FString *)(param_3->AllocatorInstance).Data,(FString *)this_01);
            bVar5 = true;
            this_00 = FCoreDelegates::TSOnConfigSectionNameRead();
            if (*(int *)&this_01[8].field_0x0 == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)
                        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_01->field_0x0)->
                        AllocatorInstance).Data;
            }
            if ((param_1->Data).ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
            ::Broadcast(this_00,pwVar11,pwVar13);
          }
        }
        uStack_50 = uStack_50 & ~auStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
        uVar10 = (ulonglong)uStack_4c;
      } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
      if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
        uVar12 = (int)local_38->_padding_ - *(int *)((longlong)&local_38->_padding_ + 4);
        if (3 < uVar12) {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar14 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar12) && ((int)local_38->_padding_ < iVar14)) ||
           (iVar14 < (int)local_38->_padding_)) {
          *(int *)&local_38->_padding_ = iVar14;
          TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                    *)local_38);
        }
      }
    }
  }
  return bVar5;
}

// GetRotator @ 141875520

bool __thiscall
FConfigCacheIni::GetRotator
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TRotator<double> *param_3,
          FString *param_4)

{
  ForAnyElementType FVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = GetString(this,param_1,param_2,&local_18,param_4);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (bVar2) {
    param_3->Roll = 0.0;
    param_3->Yaw = 0.0;
    param_3->Pitch = 0.0;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"P=",&param_3->Pitch);
    if (bVar2) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = FVar1.Data;
      }
      bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"Y=",&param_3->Yaw);
      if (bVar2) {
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar3.Data = FVar1.Data;
        }
        bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"R=",&param_3->Roll);
        if (bVar2) {
          bVar4 = true;
          goto LAB_1418755ea;
        }
      }
    }
    bVar4 = false;
  }
LAB_1418755ea:
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return bVar4;
}

// GetSection @ 141875610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConfigSection * __thiscall
FConfigCacheIni::GetSection(FConfigCacheIni *this,wchar_t *param_1,bool param_2,FString *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_02;
  int iVar4;
  FConfigSection *pFVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FConfigSection *pFVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  undefined1 local_170 [16];
  FString local_160;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = FRemoteConfig::Get();
  pwVar9 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar6);
  this_01 = Find(this,param_3);
  if (this_01 == (FConfigFile *)0x0) {
    return (FConfigSection *)0x0;
  }
  ::FString::FString((FString *)local_170,param_1);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  iVar3 = (int)local_170._8_8_;
  pFVar7 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar7 = (FScriptContainerElement *)local_170._0_8_;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pFVar7);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this_01,uVar2,(FString *)local_170);
  pFVar5 = (FConfigSection *)0x0;
  if (iVar3 != -1) {
    pFVar5 = (FConfigSection *)((longlong)iVar3 * 0x110 + this_01->_padding_);
  }
  pFVar8 = (FConfigSection *)&pFVar5->_padding_;
  if (pFVar5 == (FConfigSection *)0x0) {
    pFVar8 = (FConfigSection *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((FScriptContainerElement *)local_170._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_170._0_8_);
  }
  if (pFVar8 == (FConfigSection *)0x0) {
    if (!param_2) {
      return (FConfigSection *)0x0;
    }
    local_148._0_8_ = (FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 1;
    ::FString::FString(&local_160,param_1);
    AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    local_170._0_8_ = &local_160;
    local_170._8_8_ = local_148;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>
              ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)this_01,(TPairInitializer<FString_&&,FConfigSection_&&> *)local_178,
               (bool *)local_170);
    pFVar8 = (FConfigSection *)(this_01->_padding_ + (longlong)(int)local_178._0_4_ * 0x110 + 0x10);
    ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    uVar1 = local_a0 >> 0x20;
    local_a0 = local_a0 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_98.NumBits = 0;
    if (0x80 < (uint)local_98.MaxBits) {
      local_98.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,0,local_f8._8_4_);
    iVar3 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    local_100 = 0;
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_148,0,local_148._8_4_);
    iVar3 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    this_01->Dirty = true;
    if (pFVar8 == (FConfigSection *)0x0) {
      return (FConfigSection *)0x0;
    }
  }
  this_02 = FCoreDelegates::TSOnConfigSectionRead();
  if ((param_3->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>::
  Broadcast(this_02,pwVar9,param_1);
  return pFVar8;
}

// GetSection @ 141875a30

/* WARNING: Removing unreachable block (ram,0x000141875ec9) */

bool __thiscall
FConfigCacheIni::GetSection
          (FConfigCacheIni *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_02;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  FString local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FString local_c8;
  FString local_b8;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  TBitArray<FDefaultBitArrayAllocator> *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  FString local_50;
  
  uVar14 = 0;
  this_00 = FRemoteConfig::Get();
  if ((param_3->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar9);
  piVar1 = &param_2->ArrayMax;
  pFVar10 = (param_2->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar10,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar10,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  this_01 = Find(this,param_3);
  if (this_01 != (FConfigFile *)0x0) {
    ::FString::FString(&local_b8,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar6 = local_b8.Data.ArrayNum + -1;
    FVar13.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar13.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar13.Data);
    iVar6 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_01,uVar5,&local_b8);
    uVar7 = uVar14;
    if (iVar6 != -1) {
      uVar7 = (longlong)iVar6 * 0x110 + this_01->_padding_;
    }
    plVar12 = (longlong *)(uVar7 + 0x10);
    if (uVar7 == 0) {
      plVar12 = (longlong *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (plVar12 != (longlong *)0x0) {
      uVar5 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (*piVar1 < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar5,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      }
      iVar6 = (int)plVar12[5];
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar12 + 2);
      uStack_74 = 1;
      iStack_78 = 0;
      local_60 = iStack_78;
      iStack_64 = 0;
      if (iVar6 != 0) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar12[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar12[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = TStack_a0.Array;
        }
        uVar5 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        local_60 = 0;
        iStack_78 = 0;
        while (uVar5 == 0) {
          lVar8 = (longlong)iStack_78;
          local_60 = local_60 + 0x20;
          iStack_78 = iStack_78 + 1;
          iStack_64 = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_141875c32;
          uVar5 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uStack_74 = -uVar5 & uVar5;
        uVar7 = (ulonglong)uStack_74 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iStack_64 = local_60 + -1 + (int)lVar8;
        if (iVar6 < iStack_64) {
          iStack_64 = iVar6;
        }
      }
LAB_141875c32:
      uStack_68 = 0xffffffff;
      TStack_a0._padding_ = CONCAT44(uStack_74,iStack_78);
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      TStack_a0._28_4_ = iStack_64;
      TStack_a0.BaseBitIndex = local_60;
      local_a8 = plVar12;
      local_80 = plVar12;
      local_70 = TStack_a0.Array;
      iStack_5c = iStack_64;
      TStack_a0.CurrentBitIndex = iStack_64;
      if (iStack_64 < iVar6) {
        do {
          iVar6 = TStack_a0.CurrentBitIndex;
          plVar12 = local_a8;
          lVar8 = *local_a8 + (longlong)TStack_a0.CurrentBitIndex * 0x28;
          if (*(char *)(*local_a8 + 0x1d + (longlong)TStack_a0.CurrentBitIndex * 0x28) == '\0') {
            iVar11 = *(int *)(lVar8 + 0x10);
            uVar5 = (uint)uVar14 | 2;
            _Src = *(void **)(lVar8 + 8);
            local_e8.Data = (FScriptContainerElement *)0x0;
            local_e0 = iVar11;
            if (iVar11 == 0) {
              local_dc = 0;
              FVar13.Data = local_e8.Data;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar11,0,&local_e8,iVar11,&local_dc);
              memcpy(local_e8.Data,_Src,(longlong)iVar11 * 2);
              FVar13.Data = local_e8.Data;
              iVar11 = local_e0;
            }
          }
          else {
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            uVar5 = (uint)uVar14 | 1;
            FConfigValue::ExpandValue((FString *)(lVar8 + 8),&local_c8);
            FVar13.Data = local_c8.Data.AllocatorInstance.Data;
            iVar11 = local_c8.Data.ArrayNum;
          }
          uVar14 = (ulonglong)uVar5;
          local_d8.Data = (FScriptContainerElement *)0x0;
          local_d0 = iVar11;
          if (iVar11 == 0) {
            local_cc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,&local_d8,iVar11,&local_cc);
            memcpy(local_d8.Data,FVar13.Data,(longlong)iVar11 * 2);
          }
          if (((uVar5 & 2) != 0) &&
             (uVar14 = (ulonglong)(uVar5 & 0xfffffffd),
             local_e8.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_e8.Data);
          }
          if (((uVar14 & 1) != 0) &&
             (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffe),
             local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          ::FName::ToString((FName *)(*plVar12 + (longlong)iVar6 * 0x28),&local_50);
          ::FString::PrintfImpl(&local_f8,L"%s=%s");
          pFVar10 = (param_2->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar6 + 1;
          pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar10 = 0;
          *(FScriptContainerElement **)pFVar10 = local_f8.Data.AllocatorInstance.Data;
          *(int *)(pFVar10 + 8) = local_f8.Data.ArrayNum;
          *(int *)(pFVar10 + 0xc) = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data);
          }
          TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
      }
      pwVar9 = L"";
      this_02 = FCoreDelegates::TSOnConfigSectionRead();
      if ((param_3->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
      ::Broadcast(this_02,pwVar9,param_1);
      return true;
    }
  }
  return false;
}

// GetSectionNames @ 141875f70

bool __thiscall
FConfigCacheIni::GetSectionNames
          (FConfigCacheIni *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  FConfigFile *pFVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  FConfigFile *local_38;
  undefined2 local_30;
  
  bVar4 = false;
  pFVar10 = Find(this,param_1);
  if (pFVar10 != (FConfigFile *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    uVar12 = (int)pFVar10->_padding_ - *(int *)((longlong)&pFVar10->_padding_ + 4);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar12,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_98,
               (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)pFVar10);
    local_30 = 0;
    stack0xffffffffffffffa8 = local_98._16_16_;
    local_68 = (longlong *)local_98._0_8_;
    auStack_60._0_8_ = local_98._8_8_;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    uVar11 = local_98._24_8_ >> 0x20;
    local_38 = pFVar10;
    if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
      do {
        plVar2 = local_68;
        piVar14 = &param_2->ArrayMax;
        pFVar1 = (param_2->AllocatorInstance).Data;
        pFVar13 = (FScriptContainerElement *)((longlong)(int)uVar11 * 0x110 + *local_68);
        if (((pFVar1 <= pFVar13) && (pFVar13 < pFVar1 + (longlong)*piVar14 * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,piVar14);
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        param_2->ArrayNum = iVar8 + 1;
        ::FString::FString((FString *)(pFVar1 + (longlong)iVar8 * 0x10),(FString *)pFVar13);
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  FCoreDelegates::TSOnConfigSectionNameRead();
        if (*(int *)((longlong)(int)uStack_4c * 0x110 + 8 + *plVar2) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)((longlong)(int)uStack_4c * 0x110 + *plVar2);
        }
        if ((param_1->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
        bVar4 = false;
        uVar12 = (this_00->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar12) {
          lVar15 = (longlong)(int)uVar12 << 4;
          bVar4 = false;
          do {
            uVar9 = 0;
            if ((int)uVar12 < (this_00->InvocationList).ArrayNum) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar1 + lVar15 + 8) == 0) ||
                (plVar2 = *(longlong **)(pFVar1 + lVar15), plVar2 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,pwVar16,pwVar17), cVar7 == '\0')) {
              bVar4 = true;
            }
            lVar15 = lVar15 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
        uStack_50 = uStack_50 & ~auStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
        uVar11 = (ulonglong)uStack_4c;
      } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
      if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
        uVar12 = (int)local_38->_padding_ - *(int *)((longlong)&local_38->_padding_ + 4);
        if (uVar12 < 4) {
          iVar8 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((0 < (int)uVar12) && ((int)local_38->_padding_ < iVar8)) ||
           (iVar8 < (int)local_38->_padding_)) {
          *(int *)&local_38->_padding_ = iVar8;
          TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                    *)local_38);
        }
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// GetSingleLineArray @ 141876350

int __thiscall
FConfigCacheIni::GetSingleLineArray
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *local_38;
  FString local_30;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  bVar2 = GetString(this,param_1,param_2,&local_20,param_4);
  FVar6.Data = local_20.Data.AllocatorInstance.Data;
  local_38 = (FScriptContainerElement *)L"";
  if (local_20.Data.ArrayNum != 0) {
    local_38 = local_20.Data.AllocatorInstance.Data;
  }
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  bVar3 = FParse::Token((wchar_t **)&local_38,&local_30,false,L'\0');
  if (bVar3) {
    do {
      pFVar5 = (param_3->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 < pFVar5 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = param_3->ArrayNum;
      if (iVar4 == param_3->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar4 + 1;
      pFVar5 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar5 = 0;
      *(FScriptContainerElement **)pFVar5 = local_30.Data.AllocatorInstance.Data;
      local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 8) = local_30.Data.ArrayNum;
      *(int *)(pFVar5 + 0xc) = local_30.Data.ArrayMax;
      local_30.Data.ArrayNum = 0;
      local_30.Data.ArrayMax = 0;
      bVar3 = FParse::Token((wchar_t **)&local_38,&local_30,false,L'\0');
      FVar6.Data = local_20.Data.AllocatorInstance.Data;
    } while (bVar3);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return (uint)bVar2;
}

// GetStagedGlobalConfigCache @ 141876a90

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FConfigCacheIni::GetStagedGlobalConfigCache(FConfigCacheIni *this)

{
  return this->StagedGlobalConfigCache;
}

// GetStagedPluginConfigCache @ 141876aa0

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FConfigCacheIni::GetStagedPluginConfigCache(FConfigCacheIni *this,FName param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                   *)&this->StagedPluginConfigCache,param_1);
  return pTVar1;
}

// GetStr @ 141876d30

FString * __thiscall
FConfigCacheIni::GetStr
          (FConfigCacheIni *this,FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,
          FString *param_3)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GetString(this,param_1,param_2,__return_storage_ptr__,param_3);
  return __return_storage_ptr__;
}

// GetString @ 141876d70

bool __thiscall
FConfigCacheIni::GetString
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FString *param_3,FString *param_4
          )

{
  FString *pFVar1;
  uint uVar2;
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  FName *pFVar3;
  FConfigValue *this_02;
  FString *pFVar4;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_03;
  int iVar5;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_04;
  FString local_28;
  
  this_00 = FRemoteConfig::Get();
  pFVar1 = param_4;
  pwVar9 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar7);
  this_01 = Find(this,pFVar1);
  if (this_01 != (FConfigFile *)0x0) {
    ::FString::FString(&local_28,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar8.Data);
    iVar5 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_01,uVar2,&local_28);
    pTVar6 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)0x0;
    if (iVar5 != -1) {
      pTVar6 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)((longlong)iVar5 * 0x110 + this_01->_padding_);
    }
    this_04 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *)&(pTVar6->Pairs).Elements.field_0x10;
    if (pTVar6 == (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)0x0) {
      this_04 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (this_04 !=
        (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         *)0x0) {
      pFVar3 = ::FName::FName((FName *)&param_4,param_2);
      this_02 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::Find(this_04,*pFVar3);
      if (this_02 != (FConfigValue *)0x0) {
        pFVar4 = FConfigValue::GetValue(this_02,&local_28);
        ::FString::operator=(param_3,pFVar4);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        this_03 = FCoreDelegates::TSOnConfigValueRead();
        if ((pFVar1->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
        ::Broadcast(this_03,pwVar9,param_1,param_2);
        return true;
      }
    }
  }
  return false;
}

// GetText @ 141876ff0

bool __thiscall
FConfigCacheIni::GetText
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FText *param_3,FString *param_4)

{
  FString *pFVar1;
  uint uVar2;
  FRemoteConfig *this_00;
  FConfigFile *this_01;
  FName *pFVar3;
  FConfigValue *this_02;
  FString *pFVar4;
  wchar_t *pwVar5;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_03;
  int iVar6;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *pTVar7;
  ForAnyElementType FVar8;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_04;
  wchar_t *pwVar9;
  FString local_28;
  
  this_00 = FRemoteConfig::Get();
  pFVar1 = param_4;
  pwVar9 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  FRemoteConfig::FinishRead(this_00,pwVar5);
  this_01 = Find(this,pFVar1);
  if (this_01 != (FConfigFile *)0x0) {
    ::FString::FString(&local_28,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar8.Data);
    iVar6 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_01,uVar2,&local_28);
    pTVar7 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)0x0;
    if (iVar6 != -1) {
      pTVar7 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)((longlong)iVar6 * 0x110 + this_01->_padding_);
    }
    this_04 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *)&(pTVar7->Pairs).Elements.field_0x10;
    if (pTVar7 == (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)0x0) {
      this_04 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (this_04 !=
        (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         *)0x0) {
      pFVar3 = ::FName::FName((FName *)&param_4,param_2);
      this_02 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::Find(this_04,*pFVar3);
      if (this_02 != (FConfigValue *)0x0) {
        pFVar4 = FConfigValue::GetValue(this_02,&local_28);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pwVar5 = FTextStringHelper::ReadFromBuffer(pwVar5,param_3,param_1,(wchar_t *)0x0,false);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (pwVar5 != (wchar_t *)0x0) {
          this_03 = FCoreDelegates::TSOnConfigValueRead();
          if ((pFVar1->Data).ArrayNum != 0) {
            pwVar9 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
          }
          TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
          ::Broadcast(this_03,pwVar9,param_1,param_2);
          return true;
        }
      }
    }
  }
  return false;
}

// GetVector2D @ 141877570

bool __thiscall
FConfigCacheIni::GetVector2D
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector2<double> *param_3,
          FString *param_4)

{
  ForAnyElementType FVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = GetString(this,param_1,param_2,&local_18,param_4);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (bVar2) {
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.X = 0.0;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"X=",(double *)param_3);
    if (bVar2) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = FVar1.Data;
      }
      bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"Y=",&(param_3->field0_0x0)._s_0.Y);
      if (bVar2) {
        bVar4 = true;
        goto LAB_141877608;
      }
    }
    bVar4 = false;
  }
LAB_141877608:
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return bVar4;
}

// GetVector4 @ 141877630

bool __thiscall
FConfigCacheIni::GetVector4
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector4<double> *param_3,
          FString *param_4)

{
  double *pdVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar4 = GetString(this,param_1,param_2,&local_28,param_4);
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (!bVar4) {
    bVar4 = false;
    goto LAB_141877737;
  }
  iVar3 = local_28.Data.ArrayNum;
  (param_3->field0_0x0)._s_0.Z = 0.0;
  pdVar1 = &(param_3->field0_0x0)._s_0.W;
  (param_3->field0_0x0)._s_0.Y = 0.0;
  (param_3->field0_0x0)._s_0.X = 0.0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  *pdVar1 = 1.0;
  bVar4 = FParse::Value((wchar_t *)FVar5.Data,L"X=",(double *)param_3);
  if (bVar4) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (iVar3 != 0) {
      FVar5.Data = FVar2.Data;
    }
    bVar4 = FParse::Value((wchar_t *)FVar5.Data,L"Y=",&(param_3->field0_0x0)._s_0.Y);
    if (!bVar4) goto LAB_141877705;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (iVar3 != 0) {
      FVar5.Data = FVar2.Data;
    }
    bVar4 = FParse::Value((wchar_t *)FVar5.Data,L"Z=",&(param_3->field0_0x0)._s_0.Z);
    if (!bVar4) goto LAB_141877705;
    bVar4 = true;
  }
  else {
LAB_141877705:
    bVar4 = false;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    FVar5.Data = FVar2.Data;
  }
  FParse::Value((wchar_t *)FVar5.Data,L"W=",pdVar1);
LAB_141877737:
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return bVar4;
}

// GetVector @ 141877760

bool __thiscall
FConfigCacheIni::GetVector
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector<double> *param_3,
          FString *param_4)

{
  ForAnyElementType FVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = GetString(this,param_1,param_2,&local_18,param_4);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (bVar2) {
    (param_3->field0_0x0)._s_0.Z = 0.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.X = 0.0;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"X=",(double *)param_3);
    if (bVar2) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = FVar1.Data;
      }
      bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"Y=",&(param_3->field0_0x0)._s_0.Y);
      if (bVar2) {
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar3.Data = FVar1.Data;
        }
        bVar2 = FParse::Value((wchar_t *)FVar3.Data,L"Z=",&(param_3->field0_0x0)._s_0.Z);
        if (bVar2) {
          bVar4 = true;
          goto LAB_14187782a;
        }
      }
    }
    bVar4 = false;
  }
LAB_14187782a:
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return bVar4;
}

// InitializeConfigSystem @ 141879700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FConfigCacheIni::InitializeConfigSystem(void)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  wchar_t (*_Str) [10];
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  FConfigCacheIni *pFVar11;
  FConfigCacheIni *this;
  FName *pFVar12;
  IFileManager *pIVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *pTVar16;
  wchar_t wVar17;
  ForAnyElementType FVar18;
  undefined7 uVar19;
  undefined1 auStackY_718 [32];
  FString local_6d8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_6c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6b8;
  undefined8 local_6a8;
  FString local_6a0;
  FString local_690;
  undefined1 local_680 [8];
  FText local_678;
  FText local_668;
  FText local_658;
  FTextFormat local_648;
  FFormatArgumentValue local_638;
  undefined1 local_618 [8];
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  void *local_510 [2];
  FString local_500;
  FText local_4f0;
  FName local_4e0;
  FArchiveState local_4d8;
  undefined8 local_448;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_440;
  undefined8 local_438;
  FTextFormat local_428;
  FConfigContext local_418;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_718;
  GConfigLayers[0].bHasCheckedExist = '\x01';
  pFVar7 = ::FString::FString(&local_5f0,GConfigLayers[0].Path);
  pFVar8 = FPaths::EngineDir(&local_600);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::Replace(pFVar7,&local_610,L"{ENGINE}/",pwVar9,IgnoreCase);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  GConfigLayers[0].bExists =
       DoesConfigFileExistWrapper
                 (pwVar9,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                  (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                  (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
  if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data.AllocatorInstance.Data);
  }
  if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data.AllocatorInstance.Data);
  }
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  GPluginLayers[0].bHasCheckedExist = '\x01';
  pFVar7 = ::FString::FString(&local_5c0,GPluginLayers[0].Path);
  pFVar8 = FPaths::EngineDir(&local_5d0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::Replace(pFVar7,&local_5e0,L"{ENGINE}/",pwVar9,IgnoreCase);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  GPluginLayers[0].bExists =
       DoesConfigFileExistWrapper
                 (pwVar9,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                  (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                  (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
  if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_5b0,"Engine");
  this = (FConfigCacheIni *)0x0;
  if (pFVar7 != &GEngineIni) {
    if (GEngineIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GEngineIni.Data.AllocatorInstance.Data);
    }
    GEngineIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GEngineIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GEngineIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_5a0,"Game");
  if (pFVar7 != &GGameIni) {
    if (GGameIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GGameIni.Data.AllocatorInstance.Data);
    }
    GGameIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GGameIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GGameIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_590,"Input");
  if (pFVar7 != &GInputIni) {
    if (GInputIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GInputIni.Data.AllocatorInstance.Data);
    }
    GInputIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GInputIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GInputIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_580,"DeviceProfiles");
  if (pFVar7 != &GDeviceProfilesIni) {
    if (GDeviceProfilesIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GDeviceProfilesIni.Data.AllocatorInstance.Data);
    }
    GDeviceProfilesIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GDeviceProfilesIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GDeviceProfilesIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_570,"GameUserSettings");
  if (pFVar7 != &GGameUserSettingsIni) {
    if (GGameUserSettingsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GGameUserSettingsIni.Data.AllocatorInstance.Data);
    }
    GGameUserSettingsIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GGameUserSettingsIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GGameUserSettingsIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_560,"Scalability");
  if (pFVar7 != &GScalabilityIni) {
    if (GScalabilityIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GScalabilityIni.Data.AllocatorInstance.Data);
    }
    GScalabilityIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GScalabilityIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GScalabilityIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_550,"RuntimeOptions");
  if (pFVar7 != &GRuntimeOptionsIni) {
    if (GRuntimeOptionsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GRuntimeOptionsIni.Data.AllocatorInstance.Data);
    }
    GRuntimeOptionsIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GRuntimeOptionsIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GRuntimeOptionsIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_540,"InstallBundle");
  if (pFVar7 != &GInstallBundleIni) {
    if (GInstallBundleIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GInstallBundleIni.Data.AllocatorInstance.Data);
    }
    GInstallBundleIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GInstallBundleIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GInstallBundleIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_530,"Hardware");
  if (pFVar7 != &GHardwareIni) {
    if (GHardwareIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GHardwareIni.Data.AllocatorInstance.Data);
    }
    GHardwareIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GHardwareIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GHardwareIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_520,"GameplayTags");
  if (pFVar7 != &GGameplayTagsIni) {
    if (GGameplayTagsIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GGameplayTagsIni.Data.AllocatorInstance.Data);
    }
    GGameplayTagsIni.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GGameplayTagsIni.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    GGameplayTagsIni.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  InitializeConfigRemap();
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"textconfig");
  _Str = CommandlineOverrideSpecifiers::IniFileOverrideIdentifier;
  if (!bVar4) {
    pwVar9 = FCommandLine::Get();
    if ((_Str != (wchar_t (*) [10])0x0) && (pwVar9 != (wchar_t *)0x0)) {
      wVar1 = (*_Str)[0];
      wVar17 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
      if (wVar1 == wVar17) goto LAB_141879d93;
      sVar10 = wcslen(*_Str);
      wVar2 = *pwVar9;
      while (wVar2 != L'\0') {
        pwVar9 = pwVar9 + 1;
        if (((wchar_t)(wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20)) ==
             (wchar_t)(wVar1 - wVar17)) &&
           (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar9,*_Str + 1,(longlong)((int)sVar10 + -1))
           , iVar6 == 0)) {
          if (pwVar9 != (wchar_t *)&DAT_00000002) goto LAB_141879d93;
          break;
        }
        wVar2 = *pwVar9;
      }
    }
    bVar4 = CreateGConfigFromSaved((wchar_t *)0x0);
    if (bVar4) {
      local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Data.ArrayNum = 0;
      local_6a0.Data.ArrayMax = 0;
      FConfigContext::FConfigContext(&local_228,GConfig,true,&local_6a0,(FConfigFile *)0x0);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
      LoadRemainingConfigFiles(&local_228);
      FConfigContext::~FConfigContext(&local_228);
      goto LAB_14187a33b;
    }
  }
LAB_141879d93:
  local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.Data.ArrayNum = 0;
  local_6d8.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar9,L"IniBootstrap=",&local_6d8,true,(wchar_t **)0x0);
  if (bVar4) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6449,"IniBootstrap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                 ,0x1931);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6449);
    }
    local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_6d8.Data.ArrayNum != 0) {
      FVar18.Data = local_6d8.Data.AllocatorInstance.Data;
    }
    local_6b8.ArrayNum = 0;
    local_6b8.ArrayMax = 0;
    bVar5 = FFileHelper::LoadFileToArray(&local_6b8,(wchar_t *)FVar18.Data,2);
    if (bVar5) {
      local_4d8._padding_ = 0;
      local_4d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_4d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_4d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_4d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_4d8._40_8_ = 0;
      local_4d8.ArSerializingDefaults = 0;
      local_4d8.ArPortFlags = 0;
      local_4d8.ArMaxSerializeSize = 0;
      local_4d8.ArUEVer.FileVersionUE4 = 0;
      local_4d8.ArUEVer.FileVersionUE5 = 0;
      local_4d8.ArLicenseeUEVer = 0;
      local_4d8.ArEngineVer.Major = 0;
      local_4d8.ArEngineVer.Minor = 0;
      local_4d8.ArEngineVer.Patch = 0;
      local_4d8.ArEngineVer._6_2_ = 0;
      local_4d8.ArEngineVer.Changelist = 0;
      local_4d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_4d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_4d8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_4d8.SerializedProperty = (FProperty *)0x0;
      local_4d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_4d8.bCustomVersionsAreReset = false;
      local_4d8._129_7_ = 0;
      local_4d8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_4d8);
      local_448 = 0;
      local_4d8._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_440 = &local_6b8;
      uVar19 = (undefined7)((ulonglong)FVar18.Data >> 8);
      local_438 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_4d8,true);
      (**(code **)(local_4d8._padding_ + 0x108))(&local_4d8,CONCAT71(uVar19,1));
      pFVar11 = ::operator_new(0x3ea8);
      if (pFVar11 != (FConfigCacheIni *)0x0) {
        local_6a8 = 0;
        this = FConfigCacheIni(pFVar11,Temporary,(FName)0x0,true);
      }
      GConfig = this;
      SerializeStateForBootstrap_Impl(this,(FArchive *)&local_4d8);
      GConfig->bIsReadyForUse = true;
      if (CpuChannel->Enabled < 0) {
        pTVar16 = FCoreDelegates::TSConfigReadyForUse();
        TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar16);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId6457,"ConfigReadyForUseBroadcast",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                   ,0x1939);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6457);
        pTVar16 = FCoreDelegates::TSConfigReadyForUse();
        TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar16);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FArchive::~FArchive((FArchive *)&local_4d8);
      if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.AllocatorInstance.Data);
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_6d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
      return;
    }
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"Unable to bootstrap from archive %s, will fallback on normal initialization\n");
    if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.AllocatorInstance.Data);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FConfigManifest::UpgradeFromPreviousVersions();
  pFVar11 = ::operator_new(0x3ea8);
  if (pFVar11 != (FConfigCacheIni *)0x0) {
    pFVar12 = ::FName::FName(&local_4e0,"Windows");
    this = FConfigCacheIni(pFVar11,DiskBacked,*pFVar12,true);
  }
  local_690.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.Data.ArrayNum = 0;
  local_690.Data.ArrayMax = 0;
  GConfig = this;
  FConfigContext::FConfigContext(&local_418,this,true,&local_690,(FConfigFile *)0x0);
  if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data.AllocatorInstance.Data);
  }
  bVar4 = InitializeKnownConfigFiles(&local_418);
  if ((((GInternalProjectName[0] != L'\0') &&
       (iVar6 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar6 != 0)) &&
      (GIsGameAgnosticExe != false)) && (!bVar4)) {
    pIVar13 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar13 + 0x100);
    pFVar7 = FPaths::GetPath(&local_500,&GEngineIni);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = (FString *)(*pcVar3)(pIVar13,local_510,pwVar9);
    FText::FromString(&local_678,pFVar7);
    if (local_510[0] != (void *)0x0) {
      FMemory::Free(local_510[0]);
    }
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
    }
    local_668.TextData.Reference = local_678.TextData.Reference;
    if (local_678.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_678.TextData.Reference + 8))
                (local_678.TextData.Reference,local_680);
    }
    local_668.Flags = local_678.Flags;
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_4f0,L"Core",L"FirstCmdArgMustBeGameName",
                         L"\'{0}\' must exist and contain a DefaultEngine.ini.");
    pFVar15 = FTextFormat::FTextFormat(&local_428,pFVar14,Default);
    local_638.Type = Text;
    FText::FText((FText *)&local_638.TextValue,&local_668);
    if ((local_638.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_6c8.AllocatorInstance,1,&local_6c8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_6c8.AllocatorInstance.Data,&local_638,1);
    local_648.TextFormatData.Object = (pFVar15->TextFormatData).Object;
    local_648.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_648.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_648.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_648.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_658,&local_648,&local_6c8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_6c8.AllocatorInstance.Data,local_6c8.ArrayNum);
    if ((FFormatArgumentValue *)local_6c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_6c8.AllocatorInstance.Data);
    }
    if (local_638.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_638.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_668.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_668.TextData.Reference + 0x10))();
    }
    if (local_4f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
    }
    if (GIsBuildMachine == false) {
      FMessageDialog::Open(Ok,&local_658);
    }
    wcsncpy(GInternalProjectName,L"",0x3f);
    GInternalProjectName[0x3f] = L'\0';
    if (GIsBuildMachine == false) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    FText::ToString(&local_658);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_658.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
    }
    if (local_678.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
    }
  }
  LoadRemainingConfigFiles(&local_418);
  FConfigContext::~FConfigContext(&local_418);
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
LAB_14187a33b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
    ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
    ::Singleton._56_8_ = _UNK_150631d48;
    ::Singleton._40_8_ = 0;
    atexit(`FCoreDelegates::TSOnConfigSectionsChanged'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&::_TSS0);
  }
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                 *)&::Singleton,
                (_func___cdecl_void_FString_ptr_TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_ptr
                 *)local_618);
  GConfig->bIsReadyForUse = true;
  if (CpuChannel->Enabled < 0) {
    pTVar16 = FCoreDelegates::TSConfigReadyForUse();
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar16);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6517,"ConfigReadyForUseBroadcast",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
               ,0x1975);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6517);
    pTVar16 = FCoreDelegates::TSConfigReadyForUse();
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar16);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializeKnownConfigFiles @ 14187a480

bool __cdecl FConfigCacheIni::InitializeKnownConfigFiles(FConfigContext *param_1)

{
  FConfigCacheIni *pFVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  byte bVar5;
  ulonglong uVar6;
  bool bVar7;
  FString local_18;
  
  uVar6 = 0;
  bVar7 = false;
  do {
    while( true ) {
      pFVar1 = param_1->ConfigSystem;
      pFVar3 = ::FName::ToString(&(pFVar1->KnownFiles).Branches[uVar6].IniName,&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      bVar2 = FConfigContext::Load(param_1,pwVar4,&(pFVar1->KnownFiles).Branches[uVar6].IniPath);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if ((char)uVar6 != '\0') break;
      uVar6 = 1;
      bVar7 = bVar2;
    }
    bVar5 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar5;
  } while (bVar5 < 10);
  if (param_1->ConfigSystem != GConfig) {
    param_1->ConfigSystem->bIsReadyForUse = true;
  }
  return bVar7;
}

// IsConfigBranchNameInNeverUnloadList @ 14187ab50

bool __thiscall
FConfigCacheIni::IsConfigBranchNameInNeverUnloadList(FConfigCacheIni *this,FName *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  FString local_18;
  
  iVar4 = GConfigBranchesToNeverUnload.Data.ArrayNum + -1;
  if (GConfigBranchesToNeverUnload.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    if ((this->ConfigBranchNamesToNeverUnload).ArrayNum == 0) {
      ::FString::ParseIntoArray
                (&GConfigBranchesToNeverUnload,&this->ConfigBranchNamesToNeverUnload,L",",true);
    }
    if ((this->ConfigBranchNamesToNeverUnload).ArrayNum != 0) {
      ::FName::ToString(param_1,&local_18);
      pFVar2 = (this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (longlong)(this->ConfigBranchNamesToNeverUnload).ArrayNum * 0x10;
      uVar1 = local_18.Data._8_8_;
      do {
        if (pFVar2 == pFVar3) {
          bVar5 = false;
LAB_14187ac11:
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return bVar5;
        }
        iVar4 = *(int *)(pFVar2 + 8);
        if (iVar4 == (int)uVar1) {
          if (1 < iVar4) {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data);
            bVar5 = iVar4 == 0;
            uVar1 = local_18.Data._8_8_;
            goto LAB_14187abff;
          }
LAB_14187ac33:
          bVar5 = true;
          goto LAB_14187ac11;
        }
        bVar5 = iVar4 + (int)uVar1 == 1;
LAB_14187abff:
        if (bVar5) goto LAB_14187ac33;
        pFVar2 = pFVar2 + 0x10;
      } while( true );
    }
  }
  return false;
}

// IsKnownConfigName @ 14187acf0

bool __thiscall FConfigCacheIni::IsKnownConfigName(FConfigCacheIni *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  for (pFVar2 = (FName *)&this->KnownFiles;
      (pFVar1 = (FName *)0x0,
      (TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
       *)pFVar2 != &this->OtherFiles && (pFVar1 = pFVar2, *pFVar2 != param_1));
      pFVar2 = pFVar2 + 0xc5) {
  }
  pFVar2 = pFVar1 + 0x8e;
  if (pFVar1 == (FName *)0x0) {
    pFVar2 = (FName *)0x0;
  }
  return pFVar2 != (FName *)0x0;
}

// LoadConsoleVariablesFromINI @ 14187bb70

void __cdecl FConfigCacheIni::LoadConsoleVariablesFromINI(void)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  FString *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_38,"Windows");
  ::FString::PrintfImpl(&local_48,L"Startup_%s");
  pFVar3 = FPaths::EngineDir(&local_28);
  ::FString::ConcatFC(&local_58,pFVar3,L"Config/ConsoleVariables.ini");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  UE::ConfigUtilities::ApplyCVarSettingsFromIni
            (L"Startup",(wchar_t *)FVar6.Data,0xa000000,true,(FName)0x0);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  UE::ConfigUtilities::ApplyCVarSettingsFromIni
            ((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data,0xa000000,true,(FName)0x0);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  FParse::Value(pwVar4,L"-cvarsini=",&local_68,true,(wchar_t **)0x0);
  if (1 < local_68.Data.ArrayNum) {
    bVar2 = FPaths::FileExists(&local_68);
    if (!bVar2) {
      local_70 = &local_68;
      `FConfigCacheIni::LoadConsoleVariablesFromINI'::__l7::<lambda_1>::operator()(&local_70);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    UE::ConfigUtilities::ApplyCVarSettingsFromIni
              (L"Startup",(wchar_t *)FVar6.Data,0xa000000,true,(FName)0x0);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    UE::ConfigUtilities::ApplyCVarSettingsFromIni
              ((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data,0xa000000,true,(FName)0x0);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pwVar4 = L"";
  if (GEngineIni.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)GEngineIni.Data.AllocatorInstance.Data;
  }
  UE::ConfigUtilities::ApplyCVarSettingsFromIni
            (L"ConsoleVariables",pwVar4,0x5000000,false,(FName)0x0);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014187bdb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  return;
}

// LoadExternalIniFile @ 14187bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FConfigCacheIni::LoadExternalIniFile
          (FConfigFile *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,bool param_5,
          wchar_t *param_6,bool param_7,bool param_8,bool param_9,wchar_t *param_10)

{
  bool bVar1;
  FConfigContext *this;
  FString *this_00;
  undefined1 auStackY_698 [32];
  undefined4 local_668 [2];
  FString local_660;
  wchar_t *local_650;
  wchar_t *local_648;
  FMemScope local_640;
  FString local_638;
  FString local_628;
  FConfigContext local_618;
  FConfigContext local_428;
  FConfigContext local_238;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_10;
  local_668[0] = 0;
  local_650 = param_3;
  local_648 = param_4;
  FLLMScope::FLLMScope((FLLMScope *)local_668,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_640,ConfigSystem,true);
  this = &local_428;
  this_00 = &local_638;
  if (param_5) {
    this_00 = &local_628;
  }
  bVar1 = !param_5;
  if (!bVar1) {
    this = &local_238;
  }
  ::FString::FString(this_00,param_6);
  FConfigContext::FConfigContext(this,(FConfigCacheIni *)0x0,param_5,this_00,param_1);
  FConfigContext::FConfigContext(&local_618,this);
  if ((bVar1) &&
     (FConfigContext::~FConfigContext(&local_428),
     local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) &&
     (FConfigContext::~FConfigContext(&local_238),
     local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&local_618.EngineConfigDir,local_650);
  ::FString::operator=(&local_618.ProjectConfigDir,local_648);
  local_618.bForceReload = param_7;
  local_618.bAllowGeneratedIniWhenCooked = param_9;
  ::FString::operator=
            (&local_618.GeneratedConfigDir,(wchar_t *)local_660.Data.AllocatorInstance.Data);
  local_618.bWriteDestIni = param_8;
  local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_660.Data.ArrayNum = 0;
  local_660.Data.ArrayMax = 0;
  bVar1 = FConfigContext::Load(&local_618,param_2,&local_660);
  if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data.AllocatorInstance.Data);
  }
  FConfigContext::~FConfigContext(&local_618);
  FMemScope::~FMemScope(&local_640);
  FLLMScope::~FLLMScope((FLLMScope *)local_668);
  return bVar1;
}

// LoadFile @ 14187bff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConfigCacheIni::LoadFile
          (FConfigCacheIni *this,FString *param_1,FConfigFile *param_2,wchar_t *param_3)

{
  bool bVar1;
  FConfigFile *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStack_158 [32];
  FString local_128;
  FConfigFile local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = IsUsingLocalIniFile(pwVar4,(wchar_t *)0x0);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = DoesConfigFileExistWrapper
                      (pwVar4,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
    if (!bVar1) {
      if (param_2 == (FConfigFile *)0x0) {
        if ((byte)LogConfig._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        return;
      }
      if ((param_1->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_128,pwVar4);
      Add(this,&local_128,param_2);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if ((byte)LogConfig._0_1_ < 6) {
        return;
      }
      pFVar3 = &::LOG_Static;
      goto LAB_14187c14c;
    }
  }
  pFVar2 = FConfigFile::FConfigFile(&local_118);
  pFVar2 = Add(this,param_1,pFVar2);
  FConfigFile::~FConfigFile(&local_118);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ProcessIniContents(pwVar4,pwVar4,pFVar2,false,false);
  if ((byte)LogConfig._0_1_ < 6) {
    return;
  }
  pFVar3 = &::LOG_Static;
LAB_14187c14c:
  UE::Logging::Private::BasicLog<6>(pFVar3,(FLogCategoryBase *)&LogConfig);
  return;
}

// LoadGlobalIniFile @ 14187c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FConfigCacheIni::LoadGlobalIniFile
          (FString *param_1,wchar_t *param_2,wchar_t *param_3,bool param_4,bool param_5,bool param_6
          ,bool param_7,wchar_t *param_8,FConfigCacheIni *param_9)

{
  bool bVar1;
  undefined1 auStackY_268 [32];
  FString local_238;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  ::FString::FString(&local_238,param_3);
  FConfigContext::FConfigContext(&local_228,param_9,true,&local_238,(FConfigFile *)0x0);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (param_8 != (wchar_t *)0x0) {
    ::FString::operator=(&local_228.GeneratedConfigDir,param_8);
  }
  local_228.bAllowGeneratedIniWhenCooked = param_6;
  local_228.bAllowRemoteConfig = param_7;
  local_228.bForceReload = param_4;
  bVar1 = FConfigContext::Load(&local_228,param_2,param_1);
  FConfigContext::~FConfigContext(&local_228);
  return bVar1;
}

// LoadLocalIniFile @ 14187cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FConfigCacheIni::LoadLocalIniFile
          (FConfigFile *param_1,wchar_t *param_2,bool param_3,wchar_t *param_4,bool param_5)

{
  bool bVar1;
  FConfigContext *this;
  FString *this_00;
  undefined1 auStackY_668 [32];
  FString local_638;
  undefined4 local_628;
  FString local_620;
  FConfigContext local_608;
  FConfigContext local_418;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_628 = 0;
  this_00 = &local_638;
  if (param_3) {
    this_00 = &local_620;
  }
  this = &local_418;
  bVar1 = !param_3;
  if (!bVar1) {
    this = &local_228;
  }
  ::FString::FString(this_00,param_4);
  FConfigContext::FConfigContext(this,(FConfigCacheIni *)0x0,param_3,this_00,param_1);
  FConfigContext::FConfigContext(&local_608,this);
  if ((bVar1) &&
     (FConfigContext::~FConfigContext(&local_418),
     local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) &&
     (FConfigContext::~FConfigContext(&local_228),
     local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_620.Data.AllocatorInstance.Data);
  }
  local_608.bForceReload = param_5;
  local_638.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_638.Data.ArrayNum = 0;
  local_638.Data.ArrayMax = 0;
  bVar1 = FConfigContext::Load(&local_608,param_2,&local_638);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  FConfigContext::~FConfigContext(&local_608);
  return bVar1;
}

// NormalizeConfigIniPath @ 14187f150

FString * __cdecl
FConfigCacheIni::NormalizeConfigIniPath(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FPaths::RemoveDuplicateSlashes(&local_18,param_1);
  FPaths::CreateStandardFilename(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Parse1ToNSectionOfNames @ 141881fc0

void __thiscall
FConfigCacheIni::Parse1ToNSectionOfNames
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,FString *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FConfigFile *this_00;
  FString *pFVar12;
  size_t sVar13;
  FName *pFVar14;
  ForAnyElementType *pFVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  ForAnyElementType *pFVar19;
  ForAnyElementType *pFVar20;
  ForAnyElementType *pFVar21;
  ForAnyElementType *pFVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&> local_118;
  FString local_108;
  void *local_f8;
  undefined8 local_f0;
  int local_e8;
  ForAnyElementType *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  ForAnyElementType *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_88;
  void **local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar19 = (ForAnyElementType *)0x0;
  local_118.Key._0_4_ = 0;
  this_00 = Find(this,param_5);
  if (this_00 != (FConfigFile *)0x0) {
    ::FString::FString(&local_108,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar10 = local_108.Data.ArrayNum + -1;
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
    if (local_108.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar6.Data);
    iVar10 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_108);
    pFVar15 = pFVar19;
    if (iVar10 != -1) {
      pFVar15 = (ForAnyElementType *)((longlong)iVar10 * 0x110 + this_00->_padding_);
    }
    pFVar20 = pFVar15 + 2;
    if (pFVar15 == (ForAnyElementType *)0x0) {
      pFVar20 = pFVar19;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pFVar20 != (ForAnyElementType *)0x0) {
      local_d0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar20 + 2);
      uStack_d8 = 0;
      uStack_d4 = 1;
      uVar9 = *(uint *)&pFVar20[5].Data;
      pFVar15 = pFVar19;
      local_c0 = uStack_d8;
      if (uVar9 != 0) {
        pFVar15 = (ForAnyElementType *)(ulonglong)uVar9;
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar20[4].Data;
        if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar20[4].Data ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = local_d0;
        }
        uVar11 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        pFVar21 = pFVar19;
        pFVar22 = pFVar19;
        local_c0 = 0;
        uStack_d8 = 0;
        while (uVar11 == 0) {
          iVar10 = (int)pFVar21;
          local_c0 = (int)pFVar22 + 0x20;
          pFVar22 = (ForAnyElementType *)(ulonglong)local_c0;
          uStack_d8 = iVar10 + 1;
          pFVar21 = (ForAnyElementType *)(ulonglong)uStack_d8;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_d8)
          goto LAB_141882130;
          uVar11 = *(uint *)((undefined1 *)((longlong)(pTVar23->AllocatorInstance).InlineData + 4) +
                            (longlong)iVar10 * 4);
        }
        uStack_d4 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uStack_d4 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_e8 = (int)lVar4;
        uVar11 = (local_c0 - 1) + local_e8;
        if ((int)uVar9 < (int)uVar11) {
          uVar11 = uVar9;
        }
        pFVar15 = (ForAnyElementType *)(ulonglong)uVar11;
      }
LAB_141882130:
      uStack_c4 = (uint)pFVar15;
      uStack_c8 = 0xffffffff;
      TStack_a8._padding_ = CONCAT44(uStack_d4,uStack_d8);
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      TStack_a8._28_4_ = uStack_c4;
      TStack_a8.BaseBitIndex = local_c0;
      local_e0 = pFVar20;
      uStack_bc = uStack_c4;
      local_b0 = pFVar20;
      TStack_a8.Array = local_d0;
      TStack_a8.CurrentBitIndex = uStack_c4;
      if ((int)uStack_c4 < (int)uVar9) {
        do {
          pFVar20 = local_b0;
          lVar4 = (longlong)(int)pFVar15 * 0x28;
          pFVar12 = ::FName::ToString((FName *)(local_b0->Data + lVar4),&local_70);
          iVar10 = 0;
          if (param_2 != (wchar_t *)0x0) {
            sVar13 = wcslen(param_2);
            iVar10 = (int)sVar13;
          }
          bVar8 = ::FString::StartsWith(pFVar12,param_2,iVar10,IgnoreCase);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          pFVar3 = pFVar20->Data;
          if (bVar8) {
            pFVar12 = FConfigValue::GetValue((FConfigValue *)(pFVar3 + 8 + lVar4),&local_60);
            if ((pFVar12->Data).ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
            ::FName::FName((FName *)&local_118.Value,pwVar17);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            pTVar7 = local_118.Value;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)local_118.Value);
            if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
              puVar18 = &param_4->field_0x38;
              if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
                puVar18 = *(undefined1 **)&param_4->field_0x40;
              }
              iVar10 = *(int *)(puVar18 +
                               (ulonglong)
                               (*(int *)&param_4->field_0x48 - 1U &
                               (int)((ulonglong)pTVar7 >> 0x20) + uVar9) * 4);
              if (iVar10 != -1) {
                do {
                  plVar16 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)param_4);
                  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)*plVar16 == pTVar7) {
                    pFVar19 = (ForAnyElementType *)(plVar16 + 1);
                    if (plVar16 == (longlong *)0x0) {
                      pFVar19 = (ForAnyElementType *)0x0;
                    }
                    if (pFVar19 != (ForAnyElementType *)0x0) goto LAB_141882430;
                    break;
                  }
                  iVar10 = (int)plVar16[3];
                } while (iVar10 != -1);
              }
            }
            local_88 = &local_118.Value;
            local_80 = &local_f8;
            local_f8 = (void *)0x0;
            local_f0 = 0;
            TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&>_>
                      ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)param_4,&local_118,(bool *)&local_88);
            pFVar19 = (ForAnyElementType *)
                      (*(longlong *)param_4 + (longlong)(int)local_118.Key * 0x20 + 8);
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
          }
          else {
            pFVar12 = ::FName::ToString((FName *)(pFVar3 + lVar4),&local_50);
            if (param_3 == (wchar_t *)0x0) {
              iVar10 = 0;
            }
            else {
              sVar13 = wcslen(param_3);
              iVar10 = (int)sVar13;
            }
            bVar8 = ::FString::StartsWith(pFVar12,param_3,iVar10,IgnoreCase);
            if ((bVar8) && (pFVar19 != (ForAnyElementType *)0x0)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pFVar12 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar20->Data + 8 + lVar4),&local_40);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar17 = L"";
              }
              else {
                pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              pFVar14 = ::FName::FName(&local_78,pwVar17);
              if ((((FName *)pFVar19->Data <= pFVar14) &&
                  (pFVar14 < (FName *)pFVar19->Data + *(int *)((longlong)&pFVar19[1].Data + 4))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar10 = *(int *)&pFVar19[1].Data;
              piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,pFVar19,piVar1);
              }
              *(int *)&pFVar19[1].Data = iVar10 + 1;
              *(FName *)(pFVar19->Data + (longlong)iVar10 * 8) = *pFVar14;
              if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_40.Data.AllocatorInstance.Data);
              }
            }
            else {
              pFVar19 = (ForAnyElementType *)0x0;
            }
          }
LAB_141882430:
          TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
          pFVar15 = (ForAnyElementType *)(ulonglong)(uint)TStack_a8.CurrentBitIndex;
        } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
      }
    }
  }
  return;
}

// Parse1ToNSectionOfStrings @ 141882490

void __thiscall
FConfigCacheIni::Parse1ToNSectionOfStrings
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,FString *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FConfigFile *this_00;
  FString *pFVar11;
  size_t sVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType *pFVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  ForAnyElementType *pFVar19;
  ForAnyElementType *pFVar20;
  ForAnyElementType *pFVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&> local_118;
  undefined8 local_108;
  FString local_100;
  int local_f0;
  ForAnyElementType *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  ForAnyElementType *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FString *local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar18 = (ForAnyElementType *)0x0;
  local_118.Key._0_4_ = 0;
  this_00 = Find(this,param_5);
  if (this_00 != (FConfigFile *)0x0) {
    ::FString::FString(&local_100,param_1);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar9 = local_100.Data.ArrayNum + -1;
    FVar6.Data = local_100.Data.AllocatorInstance.Data;
    if (local_100.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar6.Data);
    iVar9 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar8,&local_100);
    pFVar14 = pFVar18;
    if (iVar9 != -1) {
      pFVar14 = (ForAnyElementType *)((longlong)iVar9 * 0x110 + this_00->_padding_);
    }
    pFVar19 = pFVar14 + 2;
    if (pFVar14 == (ForAnyElementType *)0x0) {
      pFVar19 = pFVar18;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (pFVar19 != (ForAnyElementType *)0x0) {
      local_d8 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 2);
      uStack_e0 = 0;
      uStack_dc = 1;
      uVar8 = *(uint *)&pFVar19[5].Data;
      pFVar14 = pFVar18;
      local_c8 = uStack_e0;
      if (uVar8 != 0) {
        pFVar14 = (ForAnyElementType *)(ulonglong)uVar8;
        pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar19[4].Data;
        if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar19[4].Data ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = local_d8;
        }
        uVar10 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
        pFVar20 = pFVar18;
        pFVar21 = pFVar18;
        local_c8 = 0;
        uStack_e0 = 0;
        while (uVar10 == 0) {
          iVar9 = (int)pFVar20;
          local_c8 = (int)pFVar21 + 0x20;
          pFVar21 = (ForAnyElementType *)(ulonglong)local_c8;
          uStack_e0 = iVar9 + 1;
          pFVar20 = (ForAnyElementType *)(ulonglong)uStack_e0;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e0)
          goto LAB_141882601;
          uVar10 = *(uint *)((longlong)(pTVar22->AllocatorInstance).InlineData +
                            (longlong)iVar9 * 4 + 4);
        }
        uStack_dc = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_dc * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_f0 = (int)lVar4;
        uVar10 = (local_c8 - 1) + local_f0;
        if ((int)uVar8 < (int)uVar10) {
          uVar10 = uVar8;
        }
        pFVar14 = (ForAnyElementType *)(ulonglong)uVar10;
      }
LAB_141882601:
      uStack_cc = (uint)pFVar14;
      uStack_d0 = 0xffffffff;
      TStack_b0._padding_ = CONCAT44(uStack_dc,uStack_e0);
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      TStack_b0._28_4_ = uStack_cc;
      TStack_b0.BaseBitIndex = local_c8;
      local_e8 = pFVar19;
      uStack_c4 = uStack_cc;
      local_b8 = pFVar19;
      TStack_b0.Array = local_d8;
      TStack_b0.CurrentBitIndex = uStack_cc;
      if ((int)uStack_cc < (int)uVar8) {
        do {
          pFVar19 = local_b8;
          lVar4 = (longlong)(int)pFVar14 * 0x28;
          pFVar11 = ::FName::ToString((FName *)(local_b8->Data + lVar4),&local_80);
          iVar9 = 0;
          if (param_2 != (wchar_t *)0x0) {
            sVar12 = wcslen(param_2);
            iVar9 = (int)sVar12;
          }
          bVar7 = ::FString::StartsWith(pFVar11,param_2,iVar9,IgnoreCase);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pFVar11 = FConfigValue::GetValue((FConfigValue *)(pFVar19->Data + lVar4 + 8),&local_70);
            iVar3 = (pFVar11->Data).ArrayNum;
            iVar9 = iVar3 + -1;
            if (iVar3 == 0) {
              pwVar15 = L"";
              iVar9 = 0;
            }
            else {
              pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
            iVar9 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)param_4,uVar8,pFVar11);
            if (iVar9 == -1) {
              lVar16 = 0;
            }
            else {
              lVar16 = *(longlong *)param_4 + (longlong)iVar9 * 0x28;
            }
            pFVar18 = (ForAnyElementType *)(lVar16 + 0x10);
            if (lVar16 == 0) {
              pFVar18 = (ForAnyElementType *)0x0;
            }
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (pFVar18 == (ForAnyElementType *)0x0) {
              local_118.Value = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
              local_108 = 0;
              local_90 = FConfigValue::GetValue
                                   ((FConfigValue *)(pFVar19->Data + lVar4 + 8),&local_60);
              local_88 = &local_118.Value;
              TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                        ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)param_4,&local_118,(bool *)&local_90);
              pFVar18 = (ForAnyElementType *)
                        (*(longlong *)param_4 + ((longlong)(int)local_118.Key * 5 + 2) * 8);
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>((FString *)local_118.Value,(int)local_108);
              if (local_118.Value != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_118.Value);
              }
            }
          }
          else {
            pFVar11 = ::FName::ToString((FName *)(pFVar19->Data + lVar4),&local_50);
            if (param_3 == (wchar_t *)0x0) {
              iVar9 = 0;
            }
            else {
              sVar12 = wcslen(param_3);
              iVar9 = (int)sVar12;
            }
            bVar7 = ::FString::StartsWith(pFVar11,param_3,iVar9,IgnoreCase);
            if ((bVar7) && (pFVar18 != (ForAnyElementType *)0x0)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              pFVar13 = (FScriptContainerElement *)
                        FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar19->Data + lVar4 + 8),&local_40);
              if (((pFVar18->Data <= pFVar13) &&
                  (pFVar13 < pFVar18->Data +
                             (longlong)*(int *)((longlong)&pFVar18[1].Data + 4) * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = *(int *)&pFVar18[1].Data;
              piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,pFVar18,piVar1);
              }
              *(int *)&pFVar18[1].Data = iVar9 + 1;
              pFVar17 = pFVar18->Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar17 = 0;
              *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
              *(undefined8 *)pFVar13 = 0;
              *(int *)(pFVar17 + 8) = *(int *)(pFVar13 + 8);
              *(int *)(pFVar17 + 0xc) = *(int *)(pFVar13 + 0xc);
              *(undefined8 *)(pFVar13 + 8) = 0;
              if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_40.Data.AllocatorInstance.Data);
              }
            }
            else {
              pFVar18 = (ForAnyElementType *)0x0;
            }
          }
          TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
          pFVar14 = (ForAnyElementType *)(ulonglong)(uint)TStack_b0.CurrentBitIndex;
        } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
      }
    }
  }
  return;
}

// PreInitializePlatformPlugins @ 1418857c0

void __cdecl FConfigCacheIni::PreInitializePlatformPlugins(void)

{
  return;
}

// RegisterPlugin @ 141887be0

void __cdecl
FConfigCacheIni::RegisterPlugin
          (FName param_1,FString *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          DynamicLayerPriority param_4,bool param_5)

{
  FName local_res8;
  FString *local_28;
  FName *local_20;
  FString **local_18;
  
  local_res8 = param_1;
  local_28 = ::operator_new(0x28);
  if (local_28 != (FString *)0x0) {
    local_28[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_28->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_28->Data).ArrayNum = 0;
    (local_28->Data).ArrayMax = 0;
    local_28[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28[1].Data.ArrayNum = 0;
    local_28[1].Data.ArrayMax = 0;
  }
  ::FString::operator=(local_28,param_2);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(local_28 + 1),param_3);
  *(DynamicLayerPriority *)&local_28[2].Data.AllocatorInstance.Data = param_4;
  *(byte *)((longlong)&local_28[2].Data.AllocatorInstance.Data + 2) =
       *(byte *)((longlong)&local_28[2].Data.AllocatorInstance.Data + 2) & 0xfe | param_5;
  EnterCriticalSection((LPCRITICAL_SECTION)&RegisteredPluginsLock);
  local_20 = &local_res8;
  local_18 = &local_28;
  TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FConfigCacheIni::FPluginInfo_*_const_&>_>
            ((TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
              *)&RegisteredPlugins,
             (TPairInitializer<FName_const_&,FConfigCacheIni::FPluginInfo_*_const_&> *)
             &stack0x00000020,(bool *)&local_20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&RegisteredPluginsLock);
  return;
}

// Remove @ 14188a1b0

int __thiscall FConfigCacheIni::Remove(FConfigCacheIni *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FConfigBranch *this_00;
  wchar_t *pwVar6;
  
  lpCriticalSection = &this->OtherFilesLock;
  pwVar6 = L"";
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TArray<FString,TSizedDefaultAllocator<32>_>::Remove(&this->OtherFileNames,param_1);
  this_00 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
            ::FindRef((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                       *)&this->OtherFiles,param_1);
  if (this_00 != (FConfigBranch *)0x0) {
    FConfigBranch::~FConfigBranch(this_00);
    ::operator_delete(this_00,0x628);
  }
  if (*(int *)&(this->OtherFiles).field_0x8 == *(int *)&(this->OtherFiles).field_0x34) {
    iVar4 = 0;
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    iVar4 = TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
                        *)&this->OtherFiles,uVar5,param_1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar4;
}

// RemoveFromSection @ 14188af60

bool __thiscall
FConfigCacheIni::RemoveFromSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_4->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigFile *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = FConfigFile::RemoveFromSection(this_00,param_1,param_2,param_3);
  }
  return bVar1;
}

// RemoveFromSectionOfStaticLayer @ 14188b230

bool __thiscall
FConfigCacheIni::RemoveFromSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          FString *param_5,bool param_6)

{
  FName *pFVar1;
  bool bVar2;
  FString local_68;
  FName local_58;
  FString local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_58 = param_2;
  ::FString::FString(&local_50,param_3);
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FConfigCacheIni::RemoveFromSectionOfStaticLayer'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  pFVar1 = (FName *)(local_10 + 1);
  *pFVar1 = local_58;
  ::FString::FString((FString *)(local_10 + 2),&local_50);
  if (pFVar1 != (FName *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConfigCacheIni::RemoveFromSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                  ::Call;
  }
  ::FString::FString(&local_68,param_1);
  bVar2 = ModifyAndWriteLayer(this,&local_68,param_2,param_4,param_5,param_6,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// RemoveKey @ 14188b350

bool __thiscall
FConfigCacheIni::RemoveKey(FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  bool bVar1;
  FConfigFile *this_00;
  FName *pFVar2;
  FName local_18 [2];
  
  this_00 = Find(this,param_3);
  if (this_00 != (FConfigFile *)0x0) {
    pFVar2 = ::FName::FName(local_18,param_2);
    bVar1 = FConfigFile::RemoveKeyFromSection(this_00,param_1,*pFVar2);
    if (bVar1) {
      this_00->Dirty = true;
      return true;
    }
  }
  return false;
}

// RemoveKeyFromSection @ 14188b3d0

bool __thiscall
FConfigCacheIni::RemoveKeyFromSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FConfigFile *)0x0) {
    bVar1 = FConfigFile::RemoveKeyFromSection(this_00,param_1,param_2);
    return bVar1;
  }
  return false;
}

// RemoveKeyFromSectionOfStaticLayer @ 14188b6e0

bool __thiscall
FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          bool param_5)

{
  bool bVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConfigCacheIni::RemoveKeyFromSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                ::Call;
  local_20 = param_2;
  ::FString::FString(&local_48,param_1);
  bVar1 = ModifyAndWriteLayer(this,&local_48,param_2,param_3,param_4,param_5,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// RemoveMultipleTagsFromAllBranches @ 14188b790

void __cdecl
FConfigCacheIni::RemoveMultipleTagsFromAllBranches
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,FConfigModificationTracker *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  RemoveTagsFromBranches(GConfig,param_1,param_2);
  iVar11 = 0;
  uVar5 = 1;
  iVar12 = 0;
  uVar10 = ConfigForPlatform._40_4_;
  uVar6 = 0;
  if (uVar10 != 0) {
    puVar13 = (uint *)&ConfigForPlatform.field_0x10;
    if (ConfigForPlatform._32_8_ != 0) {
      puVar13 = (uint *)ConfigForPlatform._32_8_;
    }
    uVar6 = *puVar13;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14188b84d;
      uVar6 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uVar6 = local_res20 + -1 + iVar12;
    if ((int)uVar10 < (int)uVar6) {
      uVar6 = uVar10;
    }
  }
LAB_14188b84d:
  bVar3 = ConfigForPlatform._40_1_;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,ConfigForPlatform._8_4_ - ConfigForPlatform._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ConfigForPlatform.field_0x10;
  uVar6 = uVar10;
  if ((int)uVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = ConfigForPlatform._40_4_;
  }
  if (uVar10 != uVar6) {
    lVar7 = 0x154b7d880;
    if (ConfigForPlatform._32_8_ != 0) {
      lVar7 = ConfigForPlatform._32_8_;
    }
    uVar10 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14188b960;
      uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14188b960:
  while( true ) {
    if (ConfigForPlatform._8_4_ - ConfigForPlatform._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FConfigCacheIni_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ConfigForPlatform.field_0x10))
    break;
    RemoveTagsFromBranches
              (*(FConfigCacheIni **)
                (ConfigForPlatform._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18),param_1,
               param_2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveSectionFromBranch @ 14188be90

bool __thiscall
FConfigCacheIni::RemoveSectionFromBranch(FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FConfigBranch *this_00;
  FName local_res20;
  FString local_18;
  
  ::FString::FString(&local_18,param_2);
  pFVar2 = ::FName::FName(&local_res20,param_2);
  this_00 = FindBranchWithNoReload(this,*pFVar2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FConfigBranch *)0x0) {
    bVar1 = FConfigBranch::RemoveSection(this_00,param_1);
    return bVar1;
  }
  return false;
}

// RemoveTagFromAllBranches @ 14188bf80

void __cdecl
FConfigCacheIni::RemoveTagFromAllBranches(FName param_1,FConfigModificationTracker *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = param_1;
  RemoveMultipleTagsFromAllBranches(&local_18,param_2);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RemoveTagsFromBranches @ 14188c010

void __thiscall
FConfigCacheIni::RemoveTagsFromBranches
          (FConfigCacheIni *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FConfigModificationTracker *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FConfigBranch *this_00;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this_00 = (this->KnownFiles).Branches;
  lVar10 = 10;
  do {
    FConfigBranch::RemoveTagsFromHierarchy(this_00,param_1,param_2);
    this_00 = this_00 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar11 = 0;
  puVar1 = &(this->OtherFiles).field_0x10;
  iVar3 = *(int *)&(this->OtherFiles).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->OtherFiles).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14188c0ee;
      uVar9 = puVar14[lVar10 + 1];
    }
    uVar7 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14188c0ee:
  uVar9 = *(uint *)&(this->OtherFiles).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar7,iVar11);
  uVar7 = uVar9 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar13;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->OtherFiles).field_0x8 -
                       *(int *)&(this->OtherFiles).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->OtherFiles).field_0x28;
  if (uVar9 != uVar4) {
    puVar12 = *(undefined1 **)&(this->OtherFiles).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar10 = (longlong)iVar11;
      uVar7 = uVar7 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14188c1f0;
      uVar9 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (int)lVar10 + -1 + uVar7;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14188c1f0:
  while( true ) {
    if (*(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar9) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FConfigBranch::RemoveTagsFromHierarchy
              (*(FConfigBranch **)
                ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->OtherFiles)
               ,param_1,param_2);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// ResetKeyInSection @ 14188c980

bool __thiscall
FConfigCacheIni::ResetKeyInSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FConfigFile *)0x0) {
    bVar1 = FConfigFile::ResetKeyInSection(this_00,param_1,param_2);
    return bVar1;
  }
  return false;
}

// ResetKeyInSectionOfStaticLayer @ 14188cc50

bool __thiscall
FConfigCacheIni::ResetKeyInSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          bool param_5)

{
  bool bVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FConfigCacheIni::ResetKeyInSectionOfStaticLayer'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FConfigCacheIni::ResetKeyInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                ::Call;
  local_20 = param_2;
  ::FString::FString(&local_48,param_1);
  bVar1 = ModifyAndWriteLayer(this,&local_48,param_2,param_3,param_4,param_5,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SafeUnloadBranch @ 14188da70

bool __thiscall FConfigCacheIni::SafeUnloadBranch(FConfigCacheIni *this,wchar_t *param_1)

{
  FName *pFVar1;
  FConfigBranch *this_00;
  FName local_res18 [2];
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  pFVar1 = ::FName::FName(local_res18,param_1);
  this_00 = FindBranchWithNoReload(this,*pFVar1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FConfigBranch *)0x0) {
    FConfigBranch::SafeUnload(this_00);
    return true;
  }
  return false;
}

// SaveCurrentStateForBootstrap @ 14188e310

void __thiscall
FConfigCacheIni::SaveCurrentStateForBootstrap(FConfigCacheIni *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  undefined7 uVar5;
  uchar *local_e8;
  undefined8 local_e0;
  TArrayView<unsigned_char_const_,__int64> local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  uchar **local_30;
  undefined8 local_28;
  
  local_e8 = (uchar *)0x0;
  local_e0 = 0;
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  pwVar4 = param_1;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_30 = &local_e8;
  uVar5 = (undefined7)((ulonglong)pwVar4 >> 8);
  local_28 = 0;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar5,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  SerializeStateForBootstrap_Impl(this,(FArchive *)&local_c8);
  FArchive::~FArchive((FArchive *)&local_c8);
  pIVar3 = IFileManager::Get();
  local_d8.DataPtr = local_e8;
  local_d8.ArrayNum = (long64)(int)local_e0;
  if ((int)local_e0 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFileHelper::SaveArrayToFile(&local_d8,param_1,pIVar3,0);
  if (local_e8 != (uchar *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// Serialize @ 14188e910

void __thiscall FConfigCacheIni::Serialize(FConfigCacheIni *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  EConfigCacheType *pEVar5;
  ulonglong *puVar6;
  code *pcVar7;
  ForAnyElementType _Src;
  TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
  *pTVar8;
  FConfigBranch **ppFVar9;
  bool bVar10;
  int iVar11;
  FConfigBranch *this_00;
  FConfigBranch *pFVar12;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar13;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar14;
  int iVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  FString *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar23;
  uint uVar24;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_e8 [2];
  FString local_e0;
  TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
  *local_d0;
  FConfigBranch *local_c8;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TPairInitializer<FString_const_&,FConfigBranch_*_const_&> local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  FConfigBranch **local_50;
  FConfigBranch *pFVar22;
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_e8[0] = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_e8);
      }
    }
    else {
      local_e8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    puVar1 = &(this->OtherFiles).field_0x10;
    iVar11 = *(int *)&(this->OtherFiles).field_0x28;
    local_d0 = (TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
                *)&this->OtherFiles;
    iStack_b8 = 0;
    uStack_b4 = 1;
    local_a0 = 0;
    iStack_a4 = iStack_b8;
    if (iVar11 != 0) {
      puVar20 = *(uint **)&(this->OtherFiles).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar21 = *puVar20;
      local_a0 = 0;
      iStack_b8 = 0;
      while (uVar21 == 0) {
        lVar23 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14188ec80;
        uVar21 = puVar20[lVar23 + 1];
      }
      uStack_b4 = -uVar21 & uVar21;
      uVar2 = (ulonglong)uStack_b4 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_90.Key._4_4_ = (int)lVar23;
      iStack_a4 = local_a0 + -1 + local_90.Key._4_4_;
      if (iVar11 < iStack_a4) {
        iStack_a4 = iVar11;
      }
    }
LAB_14188ec80:
    uVar21 = *(uint *)&(this->OtherFiles).field_0x28;
    iStack_98 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
    uVar24 = uVar21 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_a4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar21 >> 5;
    TStack_80._28_4_ = iStack_a4;
    TStack_80.BaseBitIndex = local_a0;
    uStack_60 = CONCAT44(uStack_94,iStack_98);
    local_c0 = (TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                *)local_d0;
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_90.Value = (FConfigBranch **)local_d0;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = local_d0;
    uVar3 = *(uint *)&(this->OtherFiles).field_0x28;
    if (uVar21 != uVar3) {
      puVar19 = *(undefined1 **)&(this->OtherFiles).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar21 == 0) {
        lVar23 = (longlong)iVar15;
        uVar24 = uVar24 + 0x20;
        iVar15 = iVar15 + 1;
        uVar21 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14188eda0;
        uVar21 = *(uint *)(puVar19 + lVar23 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar21 = (int)lVar23 + -1 + uVar24;
      if ((int)uVar3 < (int)uVar21) {
        uVar21 = uVar3;
      }
    }
LAB_14188eda0:
    while( true ) {
      ppFVar9 = local_90.Value;
      if (*(int *)&((TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90.Value)->field_0x8 -
          *(int *)&((TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90.Value)->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar21) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         ((TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
           *)ppFVar9 == pTVar8)) break;
      pFVar18 = (FString *)
                (*(longlong *)
                  (TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)ppFVar9 + (longlong)TStack_80.CurrentBitIndex * 0x20);
      ::operator<<(param_1,pFVar18);
      ::operator<<(param_1,(FConfigBranch *)pFVar18[1].Data.AllocatorInstance.Data);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  else {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (0 < (int)local_res18[0]) {
      local_d0 = (TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
                  *)&this->OtherFiles;
      pTVar25 = &this->OtherFileNames;
      pFVar22 = (FConfigBranch *)0x0;
      do {
        pTVar8 = local_d0;
        piVar16 = &(this->OtherFileNames).ArrayMax;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        this_00 = ::operator_new(0x628);
        pFVar12 = (FConfigBranch *)0x0;
        if (this_00 != (FConfigBranch *)0x0) {
          pFVar12 = FConfigBranch::FConfigBranch(this_00);
        }
        local_c8 = pFVar12;
        ::operator<<(param_1,&local_e0);
        ::operator<<(param_1,local_c8);
        local_58 = &local_e0;
        local_50 = &local_c8;
        TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FConfigBranch_*_const_&>_>
                  (pTVar8,&local_90,(bool *)&local_58);
        pFVar17 = (pTVar25->AllocatorInstance).Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < pFVar17 + (longlong)*piVar16 * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->OtherFileNames).ArrayNum;
        if (iVar11 == *piVar16) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar25->AllocatorInstance,piVar16);
        }
        _Src.Data = local_e0.Data.AllocatorInstance.Data;
        pFVar17 = (pTVar25->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        (this->OtherFileNames).ArrayNum = iVar11 + 1;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        lVar23 = (longlong)local_e0.Data.ArrayNum;
        *(int *)&pFVar17[8].field_0x0 = local_e0.Data.ArrayNum;
        if (local_e0.Data.ArrayNum == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_e0.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                     local_e0.Data.ArrayNum,(int *)(pFVar17 + 0xc));
          memcpy(*(void **)&pFVar17->field_0x0,_Src.Data,lVar23 * 2);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        uVar21 = (int)pFVar22 + 1;
        pFVar22 = (FConfigBranch *)(ulonglong)uVar21;
      } while ((int)uVar21 < (int)local_res18[0]);
    }
  }
  pTVar14 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  ::operator<<(param_1,&this->KnownFiles);
  ::operator<<(param_1,&this->bAreFileOperationsDisabled);
  ::operator<<(param_1,&this->bIsReadyForUse);
  pEVar5 = (EConfigCacheType *)**(undefined8 **)&param_1->field_0x8;
  if ((EConfigCacheType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
  }
  else {
    this->Type = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PlatformName);
  TSetPrivateFriend::
  Serialize<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->StagedPluginConfigCache);
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = this->StagedGlobalConfigCache !=
           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  puVar20 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar20) {
    local_res20[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res20[0] =
           (uint)(this->StagedGlobalConfigCache !=
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar21 = local_res20[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14188eea6;
  }
  else {
    uVar21 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar20;
  }
  bVar10 = uVar21 != 0;
LAB_14188eea6:
  if (bVar10) {
    if ((param_1->field_0x28 & 1) != 0) {
      pTVar13 = ::operator_new(0x50);
      if (pTVar13 != (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
        *(undefined8 *)&(pTVar13->Elements).field_0x10 = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x18 = 0;
        (pTVar13->Hash).InlineData[0] = '\0';
        (pTVar13->Hash).InlineData[1] = '\0';
        (pTVar13->Hash).InlineData[2] = '\0';
        (pTVar13->Hash).InlineData[3] = '\0';
        (pTVar13->Hash)._padding_ = 0;
        *(undefined8 *)&pTVar13->HashSize = 0;
        *(undefined8 *)&pTVar13->Elements = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x8 = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x20 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x28 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(pTVar13->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar13->Elements).field_0x34 = 0;
        (pTVar13->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        pTVar14 = pTVar13;
      }
      this->StagedGlobalConfigCache = pTVar14;
    }
    if (this->StagedGlobalConfigCache !=
        (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
      TSetPrivateFriend::Serialize<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                (param_1,this->StagedGlobalConfigCache);
    }
  }
  return;
}

// SerializeStateForBootstrap_Impl @ 14188ef40

void __thiscall
FConfigCacheIni::SerializeStateForBootstrap_Impl(FConfigCacheIni *this,FArchive *param_1)

{
  Serialize(this,param_1);
  ::operator<<(param_1,&GEditorIni);
  ::operator<<(param_1,&GEditorKeyBindingsIni);
  ::operator<<(param_1,&GEditorLayoutIni);
  ::operator<<(param_1,&GEditorSettingsIni);
  ::operator<<(param_1,&GEditorPerProjectIni);
  ::operator<<(param_1,&GCompatIni);
  ::operator<<(param_1,&GLightmassIni);
  ::operator<<(param_1,&GScalabilityIni);
  ::operator<<(param_1,&GHardwareIni);
  ::operator<<(param_1,&GInputIni);
  ::operator<<(param_1,&GGameIni);
  ::operator<<(param_1,&GGameUserSettingsIni);
  ::operator<<(param_1,&GRuntimeOptionsIni);
  ::operator<<(param_1,&GEngineIni);
  return;
}

// SetArray @ 14188f030

void __thiscall
FConfigCacheIni::SetArray
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4)

{
  FConfigFile *this_00;
  
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetArray(this_00,param_1,param_2,param_3);
  }
  return;
}

// SetArrayInSectionOfStaticLayer @ 14188f490

bool __thiscall
FConfigCacheIni::SetArrayInSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,bool param_4,FString *param_5,
          FString *param_6,bool param_7)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined8 *puVar6;
  FString local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  wchar_t *local_68;
  FName local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  bool local_48;
  FString local_40;
  
  iVar2 = param_3->ArrayNum;
  pFVar3 = (param_3->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_68 = param_1;
  local_60 = param_2;
  local_50 = iVar2;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_58,iVar2,&local_4c);
    ConstructItems<FString,FString,int>(local_58.Data,(FString *)pFVar3,iVar2);
  }
  local_48 = param_4;
  ::FString::FString(&local_40,param_6);
  local_98[0] = (code *)0x0;
  puVar6 = FMemory::Malloc(0x40,8);
  iVar2 = local_50;
  FVar4.Data = local_58.Data;
  pFVar1 = (ForAnyElementType *)(puVar6 + 3);
  *puVar6 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FConfigCacheIni::SetArrayInSectionOfStaticLayer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar6[1] = local_68;
  *(FName *)(puVar6 + 2) = local_60;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar6 + 4) = local_50;
  local_70 = puVar6;
  if (local_50 == 0) {
    *(int *)((longlong)puVar6 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_50,0,pFVar1,local_50,(int *)((longlong)puVar6 + 0x24));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)FVar4.Data,iVar2);
  }
  *(bool *)(puVar6 + 5) = local_48;
  ::FString::FString((FString *)(puVar6 + 6),&local_40);
  if (puVar6 + 1 != (undefined8 *)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConfigCacheIni::SetArrayInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                  ::Call;
  }
  ::FString::FString(&local_a8,param_1);
  bVar5 = ModifyAndWriteLayer(this,&local_a8,param_2,param_5,param_6,param_7,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return bVar5;
}

// SetBool @ 14188f680

void __thiscall
FConfigCacheIni::SetBool
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,bool param_3,FString *param_4)

{
  FConfigFile *this_00;
  wchar_t *pwVar1;
  
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    pwVar1 = L"False";
    if (param_3) {
      pwVar1 = L"True";
    }
    FConfigFile::SetString(this_00,param_1,param_2,pwVar1);
  }
  return;
}

// SetColor @ 14188f720

void __thiscall
FConfigCacheIni::SetColor
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FColor param_3,FString *param_4)

{
  FString *pFVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FColor_u_0 local_res20 [2];
  FString local_18;
  
  local_res20[0] = param_3.field0_0x0;
  pFVar1 = FColor::ToString((FColor *)&local_res20[0]._s_0,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,pwVar2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDouble @ 14188fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigCacheIni::SetDouble
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,double param_3,FString *param_4)

{
  FConfigFile *this_00;
  undefined1 auStack_858 [32];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_858;
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    TCString<wchar_t>::SprintfImpl(local_838,L"%.*g");
    FConfigFile::SetString(this_00,param_1,param_2,local_838);
  }
  return;
}

// SetFile @ 14188fd30

void __thiscall
FConfigCacheIni::SetFile(FConfigCacheIni *this,FString *param_1,FConfigFile *param_2)

{
  FName *pFVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FName *pFVar3;
  FName local_res8;
  
  pFVar3 = (FName *)&this->KnownFiles;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2,FNAME_Find);
  do {
    if ((TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
         *)pFVar3 == &this->OtherFiles) {
LAB_14188fd91:
      Add(this,param_1,param_2);
      return;
    }
    if (*pFVar3 == *pFVar1) {
      this_00 = (FConfigFile *)(pFVar3 + 0x8e);
      if (pFVar3 == (FName *)0x0) {
        this_00 = (FConfigFile *)0x0;
      }
      if (this_00 != (FConfigFile *)0x0) {
        FConfigFile::operator=(this_00,param_2);
        return;
      }
      goto LAB_14188fd91;
    }
    pFVar3 = pFVar3 + 0xc5;
  } while( true );
}

// SetFloat @ 14188fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigCacheIni::SetFloat
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,float param_3,FString *param_4)

{
  FConfigFile *this_00;
  undefined1 auStack_858 [32];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_858;
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    TCString<wchar_t>::SprintfImpl(local_838,L"%.*g");
    FConfigFile::SetString(this_00,param_1,param_2,local_838);
  }
  return;
}

// SetInSection @ 14188ffc0

bool __thiscall
FConfigCacheIni::SetInSection
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FConfigFile *this_00;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_4->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  this_00 = Find(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigFile *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = FConfigFile::SetInSection(this_00,param_1,param_2,param_3);
  }
  return bVar1;
}

// SetInSectionOfStaticLayer @ 141890290

bool __thiscall
FConfigCacheIni::SetInSectionOfStaticLayer
          (FConfigCacheIni *this,wchar_t *param_1,FName param_2,FString *param_3,FString *param_4,
          FString *param_5,bool param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  FString local_68;
  FString local_58;
  FName local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  ::FString::FString(&local_58,param_3);
  local_38[0] = (code *)0x0;
  local_48 = param_2;
  puVar2 = FMemory::Malloc(0x20,8);
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FConfigCacheIni::SetInSectionOfStaticLayer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  local_10 = puVar2;
  ::FString::FString((FString *)(puVar2 + 1),&local_58);
  *(FName *)(puVar2 + 3) = local_48;
  if ((FString *)(puVar2 + 1) != (FString *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FConfigCacheIni::SetInSectionOfStaticLayer'::__l2::<lambda_1>,void,FConfigBranch_const_*,FConfigCommandStreamSection_*>
                  ::Call;
  }
  ::FString::FString(&local_68,param_1);
  bVar1 = ModifyAndWriteLayer(this,&local_68,param_2,param_4,param_5,param_6,
                              (TFunction<void___cdecl(FConfigBranch_const_*,FConfigCommandStreamSection_*)>
                               *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetInt @ 141890420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigCacheIni::SetInt
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,int param_3,FString *param_4)

{
  FConfigFile *this_00;
  undefined1 auStack_858 [32];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_858;
  TCString<wchar_t>::SprintfImpl(local_838,L"%i");
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,local_838);
  }
  return;
}

// SetRotator @ 1418909d0

void __thiscall
FConfigCacheIni::SetRotator
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TRotator<double> *param_3,
          FString *param_4)

{
  FConfigFile *this_00;
  ForAnyElementType FVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,(wchar_t *)FVar1.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetSingleLineArray @ 141890a80

void __thiscall
FConfigCacheIni::SetSingleLineArray
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConfigFile *this_00;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  int iVar10;
  FString local_28;
  
  iVar10 = param_3->ArrayNum;
  uVar7 = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  uVar9 = uVar7;
  if (0 < iVar10) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < iVar10) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      iVar1 = *(int *)(pFVar2 + uVar9 + 8);
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_28,*(wchar_t **)(pFVar2 + uVar9),iVar10);
      ::FString::AppendChars(&local_28,L" ",1);
      iVar10 = param_3->ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 0x10;
    } while ((int)(uVar6 + 1) < iVar10);
    pwVar8 = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum != 0) goto LAB_141890b7b;
  }
  pwVar8 = L"";
LAB_141890b7b:
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,pwVar8);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetString @ 141890be0

void __thiscall
FConfigCacheIni::SetString
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,FString *param_4
          )

{
  FConfigFile *this_00;
  
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,param_3);
  }
  return;
}

// SetText @ 141890db0

void __thiscall
FConfigCacheIni::SetText
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,FText *param_3,FString *param_4)

{
  int iVar1;
  FConfigFile *this_00;
  FConfigSection *this_01;
  FName *pFVar2;
  FConfigValue *this_02;
  FConfigExpansion *pFVar3;
  ForAnyElementType _Str2;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FName local_68;
  FName local_60;
  wchar_t *local_58;
  FString local_50;
  FString local_40;
  FConfigValue local_30;
  
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    ::FString::FString(&local_40,param_1);
    this_01 = FConfigFile::FindOrAddSectionInternal(this_00,&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    FTextStringHelper::WriteToBuffer(&local_50,param_3,false,false);
    pFVar2 = ::FName::FName(&local_68,param_2);
    this_02 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)this_01,*pFVar2);
    FVar5.Data = local_50.Data.AllocatorInstance.Data;
    if (this_02 == (FConfigValue *)0x0) {
      ::FName::FName(&local_60,param_2);
      pwVar4 = (wchar_t *)local_50.Data.AllocatorInstance.Data;
      iVar1 = local_50.Data.ArrayNum;
      local_30.SavedValue.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.SavedValue.Data.ArrayNum = local_50.Data.ArrayNum;
      local_30.SavedValue.Data.ArrayMax = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      local_30.ValueType = Combined;
      if (iVar1 == 0) {
        pwVar4 = L"";
      }
      local_30.SavedValueHash = FCrc::StrCrc32<wchar_t>(pwVar4,0);
      pFVar3 = FindNextExpansion(pwVar4,&local_58);
      local_30.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
      ::FName::FName(&local_68,param_2);
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)this_01,&local_68,&local_30);
      if (local_30.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.SavedValue.Data.AllocatorInstance.Data);
      }
      this_00->Dirty = true;
      FVar5.Data = local_50.Data.AllocatorInstance.Data;
    }
    else {
      pwVar4 = L"";
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        _Str2.Data = local_50.Data.AllocatorInstance.Data;
      }
      if ((this_02->SavedValue).Data.ArrayNum != 0) {
        pwVar4 = (wchar_t *)(this_02->SavedValue).Data.AllocatorInstance.Data;
      }
      iVar1 = wcscmp(pwVar4,(wchar_t *)_Str2.Data);
      if (iVar1 != 0) {
        this_00->Dirty = true;
        FConfigValue::operator=(this_02,&local_50);
        FVar5.Data = local_50.Data.AllocatorInstance.Data;
      }
    }
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
    }
  }
  return;
}

// SetVector2D @ 141891230

void __thiscall
FConfigCacheIni::SetVector2D
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector2<double> *param_3,
          FString *param_4)

{
  FConfigFile *this_00;
  ForAnyElementType FVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,(wchar_t *)FVar1.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVector4 @ 1418912e0

void __thiscall
FConfigCacheIni::SetVector4
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector4<double> *param_3,
          FString *param_4)

{
  FConfigFile *this_00;
  ForAnyElementType FVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,(wchar_t *)FVar1.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVector @ 141891390

void __thiscall
FConfigCacheIni::SetVector
          (FConfigCacheIni *this,wchar_t *param_1,wchar_t *param_2,TVector<double> *param_3,
          FString *param_4)

{
  FConfigFile *this_00;
  ForAnyElementType FVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  this_00 = Find(this,param_4);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::SetString(this_00,param_1,param_2,(wchar_t *)FVar1.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ShowMemoryUsage @ 141891530

void __thiscall FConfigCacheIni::ShowMemoryUsage(FConfigCacheIni *this,FOutputDevice *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  FConfigBranch *pFVar4;
  code *pcVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *pTVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_358;
  int iStack_354;
  int local_350;
  ForAnyElementType local_348;
  undefined8 local_340;
  uint local_338;
  FString local_330;
  LPCRITICAL_SECTION local_320;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  int local_2c8;
  int local_2c4;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_2c0;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_2b0;
  int iStack_2a8;
  uint uStack_2a4;
  undefined1 *local_2a0;
  undefined4 uStack_298;
  int iStack_294;
  int local_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  TMap<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
  *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  FArchiveState local_248;
  ForAnyElementType local_1b8;
  ForAnyElementType local_1b0;
  FArchiveState local_1a8;
  ForAnyElementType local_118;
  ForAnyElementType local_110;
  FArchiveState local_108;
  longlong local_78;
  longlong local_70;
  undefined4 local_4c;
  
  lpCriticalSection = &this->OtherFilesLock;
  local_320 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->OtherFiles).field_0x10;
  local_358 = 0;
  iStack_354 = 0;
  local_2c0 = &this->OtherFiles;
  iStack_2a8 = 0;
  local_350 = 0;
  local_348.Data = (FScriptContainerElement *)0x0;
  uStack_2a4 = 1;
  local_340 = 0;
  local_290 = 0;
  iVar13 = *(int *)&(this->OtherFiles).field_0x28;
  iStack_294 = local_290;
  if (iVar13 != 0) {
    puVar22 = *(uint **)&(this->OtherFiles).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar23;
    }
    uVar16 = *puVar22;
    local_290 = 0;
    iStack_2a8 = 0;
    while (uVar16 == 0) {
      lVar15 = (longlong)iStack_2a8;
      local_290 = local_290 + 0x20;
      iStack_2a8 = iStack_2a8 + 1;
      iStack_294 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a8) goto LAB_14189163e;
      uVar16 = puVar22[lVar15 + 1];
    }
    uStack_2a4 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_2a4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2c8 = (int)lVar15;
    iStack_294 = local_290 + -1 + local_2c8;
    if (iVar13 < iStack_294) {
      iStack_294 = iVar13;
    }
  }
LAB_14189163e:
  uVar16 = *(uint *)&(this->OtherFiles).field_0x28;
  uStack_28c = local_4c;
  iStack_288 = *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34;
  uVar24 = uVar16 & 0xffffffe0;
  uStack_298 = 0xffffffff;
  TStack_278._padding_ = CONCAT44(uStack_2a4,iStack_2a8);
  TStack_278.CurrentBitIndex = iStack_294;
  TStack_278.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_278._28_4_ = local_4c;
  TStack_278.BaseBitIndex = local_290;
  uStack_258 = CONCAT44(uStack_284,iStack_288);
  local_338 = uVar16;
  local_2b8 = pTVar23;
  local_2b0 = local_2c0;
  local_2a0 = (undefined1 *)pTVar23;
  local_280 = local_2c0;
  TStack_278.Array = pTVar23;
  if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->OtherFiles).field_0x28;
  uVar6 = local_338;
  if (uVar16 != uVar3) {
    puVar21 = *(undefined1 **)&(this->OtherFiles).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)pTVar23;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar19;
      uVar24 = uVar24 + 0x20;
      iVar19 = iVar19 + 1;
      local_338 = uVar3;
      uVar6 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_141891754;
      uVar16 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2c4 = (int)lVar15;
    local_338 = local_2c4 + -1 + uVar24;
    uVar6 = local_338;
    if ((int)uVar3 < (int)local_338) {
      local_338 = uVar3;
      uVar6 = uVar3;
    }
  }
LAB_141891754:
  while( true ) {
    pTVar8 = local_280;
    if (*(int *)&local_280->field_0x8 - *(int *)&local_280->field_0x34 != (int)uStack_258) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigBranch_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_278.CurrentBitIndex == uVar6) && (TStack_278.Array == pTVar23)) &&
       (pTVar8 == local_2c0)) break;
    puVar17 = (undefined8 *)((longlong)TStack_278.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.Data.ArrayNum = *(int *)(puVar17 + 1);
    lVar15 = (longlong)local_330.Data.ArrayNum;
    _Src = (void *)*puVar17;
    if (local_330.Data.ArrayNum == 0) {
      local_330.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_330.Data.ArrayNum,0,(ForAnyElementType *)&local_330,
                 local_330.Data.ArrayNum,&local_330.Data.ArrayMax);
      memcpy(local_330.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
    }
    pFVar4 = (FConfigBranch *)puVar17[2];
    FArchiveState::FArchiveState(&local_248);
    local_248.ArIsCountingMemory = '\x01';
    local_248._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_248,&local_330);
    ::operator<<((FArchive *)&local_248,pFVar4);
    FVar10.Data = local_1b0.Data;
    FVar9.Data = local_1b8.Data;
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    iVar13 = local_330.Data.ArrayNum + -1;
    if (local_330.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    if (iVar13 < local_358) {
      iVar13 = local_358;
    }
    ::FString::AppendInt(&local_318,(int)local_1b8.Data);
    iVar19 = local_318.Data.ArrayNum + -1;
    if (local_318.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    if (iVar19 < iStack_354) {
      iVar19 = iStack_354;
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Data.ArrayNum = 0;
    local_308.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_308,(int)FVar10.Data);
    iVar14 = local_308.Data.ArrayNum + -1;
    if (local_308.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    if (iVar14 < local_350) {
      iVar14 = local_350;
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    iVar12 = (int)local_340;
    if ((int)local_340 == local_340._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_348,(int *)((longlong)&local_340 + 4));
    }
    FVar7.Data = local_330.Data.AllocatorInstance.Data;
    lVar15 = (longlong)iVar12 * 0x20;
    local_340 = CONCAT44(local_340._4_4_,iVar12 + 1);
    *(undefined8 *)&local_348.Data[lVar15].field_0x0 = 0;
    lVar18 = (longlong)local_330.Data.ArrayNum;
    *(int *)(local_348.Data + lVar15 + 8) = local_330.Data.ArrayNum;
    pFVar20 = local_348.Data + lVar15;
    pFVar1 = local_348.Data + lVar15;
    if (local_330.Data.ArrayNum == 0) {
      *(int *)(pFVar1 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_330.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,local_330.Data.ArrayNum,
                 (int *)(pFVar1 + 0xc));
      memcpy(*(void **)&pFVar1->field_0x0,FVar7.Data,lVar18 * 2);
    }
    *(FScriptContainerElement **)(pFVar20 + 0x10) = FVar9.Data;
    *(FScriptContainerElement **)(pFVar20 + 0x18) = FVar10.Data;
    FArchive::~FArchive((FArchive *)&local_248);
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
    pTVar23 = local_2b8;
    local_350 = iVar14;
    local_358 = iVar13;
    iStack_354 = iVar19;
  }
  FArchiveState::FArchiveState(&local_1a8);
  local_1a8.ArIsCountingMemory = '\x01';
  local_1a8._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  ::operator<<((FArchive *)&local_1a8,&this->KnownFiles);
  ::FString::FString(&local_2d8,L"KnownFiles");
  FVar10.Data = local_110.Data;
  FVar9.Data = local_118.Data;
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = 0;
  local_2f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2f8,(int)local_118.Data);
  lpCriticalSection_00 = local_320;
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2e8,(int)FVar10.Data);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  iVar13 = (int)local_340;
  if ((int)local_340 == local_340._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_348,(int *)((longlong)&local_340 + 4));
  }
  FVar7.Data = local_2d8.Data.AllocatorInstance.Data;
  pFVar20 = local_348.Data + (longlong)iVar13 * 0x20;
  local_340 = CONCAT44(local_340._4_4_,iVar13 + 1);
  *(FScriptContainerElement **)&pFVar20->field_0x0 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_2d8.Data.ArrayNum;
  if (local_2d8.Data.ArrayNum == 0) {
    *(int *)(pFVar20 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,local_2d8.Data.ArrayNum,
               (int *)(pFVar20 + 0xc));
    memcpy(*(FScriptContainerElement **)&pFVar20->field_0x0,FVar7.Data,
           (longlong)local_2d8.Data.ArrayNum * 2);
  }
  uVar16 = 0;
  *(FScriptContainerElement **)(pFVar20 + 0x10) = FVar9.Data;
  *(FScriptContainerElement **)(pFVar20 + 0x18) = FVar10.Data;
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  FArchiveState::FArchiveState(&local_108);
  lVar15 = (longlong)*(int *)&(this->OtherFiles).field_0x48;
  local_108.ArIsCountingMemory = '\x01';
  local_108._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
  local_78 = ((ulonglong)(*(int *)&(this->OtherFiles).field_0x28 + 0x1fU >> 5) + lVar15 +
             ((longlong)(this->OtherFileNames).ArrayNum +
             (longlong)*(int *)&(this->OtherFiles).field_0x8 * 2) * 4) * 4;
  local_70 = ((ulonglong)(*(int *)&(this->OtherFiles).field_0x2c + 0x1fU >> 5) + lVar15 +
             ((longlong)(this->OtherFileNames).ArrayMax +
             (longlong)*(int *)&(this->OtherFiles).field_0xc * 2) * 4) * 4;
  FOutputDevice::Log(param_1,L"Config cache memory usage:");
  FOutputDevice::LogfImpl(param_1,L"%*s %*s %*s");
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FConfigFileMemoryData,int,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,_FConfigMemoryData::SortBySize_::__l2::FCompareFConfigFileMemoryData>_>
            ((FConfigFileMemoryData *)local_348.Data,(int)local_340,local_res8,
             (FCompareFConfigFileMemoryData *)local_res20);
  if (0 < (int)local_340) {
    do {
      uVar24 = 0;
      if ((int)uVar16 < (int)local_340) {
        uVar24 = ~uVar16 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FOutputDevice::LogfImpl(param_1,L"%*s %*u %*u");
      uVar16 = uVar16 + 1;
      lpCriticalSection_00 = local_320;
    } while ((int)uVar16 < (int)local_340);
  }
  FOutputDevice::LogfImpl(param_1,L"%*s %*u %*u");
  FArchive::~FArchive((FArchive *)&local_108);
  DestructItems<FConfigFileMemoryData,int>((FConfigFileMemoryData *)local_348.Data,(int)local_340);
  if ((FConfigFileMemoryData *)local_348.Data != (FConfigFileMemoryData *)0x0) {
    FMemory::Free(local_348.Data);
  }
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return;
}

// Tick @ 141893720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConfigCacheIni::Tick(FConfigCacheIni *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  FConfigBranch *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  FConfigBranch **ppFVar11;
  uint uVar12;
  LARGE_INTEGER local_res18;
  FString local_58;
  FConfigBranch *local_48;
  FConfigBranch *local_40;
  FConfigBranch *local_38 [4];
  
  if (GTimeToUnloadConfig != 0) {
    uVar12 = 0;
    uVar10 = KnownFileToCheckForUnload;
    if (9 < KnownFileToCheckForUnload) {
      uVar10 = uVar12;
    }
    KnownFileToCheckForUnload = uVar10 + 1;
    local_48 = (this->KnownFiles).Branches + (int)uVar10;
    if ((this->OtherFileNames).ArrayNum <= OtherFileToCheckForUnload) {
      OtherFileToCheckForUnload = 0;
    }
    lpCriticalSection = &this->OtherFilesLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar9 = (longlong)OtherFileToCheckForUnload;
    iVar5 = OtherFileToCheckForUnload + 1;
    uVar10 = uVar12;
    if (OtherFileToCheckForUnload < (this->OtherFileNames).ArrayNum) {
      uVar10 = (uint)~OtherFileToCheckForUnload >> 0x1f;
    }
    OtherFileToCheckForUnload = iVar5;
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_40 = TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
               ::FindRef((TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
                          *)&this->OtherFiles,
                         (FString *)((this->OtherFileNames).AllocatorInstance.Data + lVar9 * 0x10));
    if (((this->OtherFileNames).ArrayNum !=
         *(int *)&(this->OtherFiles).field_0x8 - *(int *)&(this->OtherFiles).field_0x34) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OtherFileNames.Num() == OtherFiles.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                           ,0xfe5,
                           L"OtherFiles and OtherFileNames are out of sync! %d other files, %d other file names!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    QueryPerformanceCounter(&local_res18);
    ppFVar11 = &local_48;
    dVar3 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    do {
      this_00 = *ppFVar11;
      if (((this_00 != (FConfigBranch *)0x0) && (this_00->bIsSafeUnloaded == false)) &&
         (this_00->bAllowedToRemove != false)) {
        uVar10 = GConfigBranchesToNeverUnload.Data.ArrayNum - 1;
        if (GConfigBranchesToNeverUnload.Data.ArrayNum == 0) {
          uVar10 = uVar12;
        }
        if ((uVar10 != 0) &&
           (((this->ConfigBranchNamesToNeverUnload).ArrayNum != 0 ||
            (::FString::ParseIntoArray
                       (&GConfigBranchesToNeverUnload,&this->ConfigBranchNamesToNeverUnload,L",",
                        true), (this->ConfigBranchNamesToNeverUnload).ArrayNum != 0)))) {
          ::FName::ToString(&this_00->IniName,&local_58);
          pFVar7 = (this->ConfigBranchNamesToNeverUnload).AllocatorInstance.Data;
          pFVar8 = pFVar7 + (longlong)(this->ConfigBranchNamesToNeverUnload).ArrayNum * 0x10;
          uVar6 = local_58.Data._8_8_;
          for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
            iVar5 = *(int *)(pFVar7 + 8);
            if (iVar5 == (int)uVar6) {
              if (1 < iVar5) {
                iVar5 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)pFVar7,
                                   (wchar_t *)local_58.Data.AllocatorInstance.Data);
                bVar4 = iVar5 == 0;
                uVar6 = local_58.Data._8_8_;
                goto LAB_14189399e;
              }
LAB_1418939c9:
              bVar4 = true;
              goto LAB_1418939b0;
            }
            bVar4 = iVar5 + (int)uVar6 == 1;
LAB_14189399e:
            if (bVar4) goto LAB_1418939c9;
          }
          bVar4 = false;
LAB_1418939b0:
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            this_00->bAllowedToRemove = false;
            goto LAB_141893a3e;
          }
        }
        dVar1 = this_00->InactiveTimer;
        if (0.0 <= dVar1) {
          if ((0.0 < dVar1) && ((double)GTimeToUnloadConfig < dVar3 - dVar1)) {
            if (5 < (byte)LogConfig._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
            }
            FConfigBranch::SafeUnload(this_00);
            this_00->InactiveTimer = 0.0;
          }
        }
        else {
          this_00->InactiveTimer = dVar3;
        }
      }
LAB_141893a3e:
      ppFVar11 = ppFVar11 + 1;
    } while (ppFVar11 != local_38);
  }
  return;
}

// UnloadFile @ 141896200

void __thiscall FConfigCacheIni::UnloadFile(FConfigCacheIni *this,FString *param_1)

{
  FConfigFile *pFVar1;
  
  pFVar1 = Find(this,param_1);
  if (pFVar1 != (FConfigFile *)0x0) {
    Remove(this,param_1);
  }
  return;
}

// operator() @ 15047e080

bool __thiscall
`FConfigCacheIni::LoadConsoleVariablesFromINI'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6619939745952700926>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<6619939745952700926>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

