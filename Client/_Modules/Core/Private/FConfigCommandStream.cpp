// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FConfigCommandStream @ 141854370

FConfigCommandStream * __thiscall
FConfigCommandStream::FConfigCommandStream(FConfigCommandStream *this,FConfigCommandStream *param_1)

{
  ushort uVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      *)param_1);
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x0 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
              *)&this->PerObjectConfigArrayOfStructKeys,
             (TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
              *)&param_1->PerObjectConfigArrayOfStructKeys);
  this->Branch = param_1->Branch;
  this->Tag = param_1->Tag;
  this->Dirty = param_1->Dirty;
  this->bPythonConfigParserMode = param_1->bPythonConfigParserMode;
  this->bIsSavedConfigFile = param_1->bIsSavedConfigFile;
  this->bNeverSafeUnload = param_1->bNeverSafeUnload;
  uVar1 = param_1->Priority;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Priority = uVar1;
  (this->Filename).Data.AllocatorInstance.Data = (param_1->Filename).Data.AllocatorInstance.Data;
  (param_1->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
  (param_1->Filename).Data.ArrayNum = 0;
  (param_1->Filename).Data.ArrayMax = 0;
  return this;
}

// FConfigCommandStream @ 1418544a0

FConfigCommandStream * __thiscall
FConfigCommandStream::FConfigCommandStream(FConfigCommandStream *this,FConfigCommandStream *param_1)

{
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  this_00 = &this->PerObjectConfigArrayOfStructKeys;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  puVar1 = &(this->PerObjectConfigArrayOfStructKeys).field_0x48;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->PerObjectConfigArrayOfStructKeys) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PerObjectConfigArrayOfStructKeys).field_0x38
               ,(int *)puVar1,
               (ForElementType<FSetElementId> *)
               &(param_1->PerObjectConfigArrayOfStructKeys).field_0x38,
               *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->PerObjectConfigArrayOfStructKeys);
  }
  this->Branch = param_1->Branch;
  this->Tag = param_1->Tag;
  this->Dirty = param_1->Dirty;
  this->bPythonConfigParserMode = param_1->bPythonConfigParserMode;
  this->bIsSavedConfigFile = param_1->bIsSavedConfigFile;
  this->bNeverSafeUnload = param_1->bNeverSafeUnload;
  this->Priority = param_1->Priority;
  ::FString::FString(&this->Filename,&param_1->Filename);
  return this;
}

// FConfigCommandStream @ 141854600

FConfigCommandStream * __thiscall
FConfigCommandStream::FConfigCommandStream(FConfigCommandStream *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  this->Branch = (FConfigBranch *)0x0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  this->bPythonConfigParserMode = '\0';
  this->bIsSavedConfigFile = '\0';
  this->bNeverSafeUnload = '\0';
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  return this;
}

// ~FConfigCommandStream @ 141857250

void __thiscall FConfigCommandStream::~FConfigCommandStream(FConfigCommandStream *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerObjectConfigArrayOfStructKeys).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerObjectConfigArrayOfStructKeys);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 141858840

FConfigCommandStream * __thiscall
FConfigCommandStream::operator=(FConfigCommandStream *this,FConfigCommandStream *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                *)this,(TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)param_1);
  }
  if (&this->PerObjectConfigArrayOfStructKeys != &param_1->PerObjectConfigArrayOfStructKeys) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)&this->PerObjectConfigArrayOfStructKeys,
               (TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)&param_1->PerObjectConfigArrayOfStructKeys);
  }
  pFVar1 = &this->Filename;
  this->Branch = param_1->Branch;
  this->Tag = param_1->Tag;
  this->Dirty = param_1->Dirty;
  this->bPythonConfigParserMode = param_1->bPythonConfigParserMode;
  this->bIsSavedConfigFile = param_1->bIsSavedConfigFile;
  this->bNeverSafeUnload = param_1->bNeverSafeUnload;
  pFVar3 = &param_1->Filename;
  this->Priority = param_1->Priority;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
    (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
    (param_1->Filename).Data.ArrayNum = 0;
    (param_1->Filename).Data.ArrayMax = 0;
  }
  return this;
}

// FillFileFromDisk @ 14186d1a0

bool __thiscall
FConfigCommandStream::FillFileFromDisk(FConfigCommandStream *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FString FStack_58;
  FString FStack_48;
  FScriptContainerElement *pFStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> TStack_28;
  
  FStack_58.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)FStack_58.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FStack_58.Data.ArrayNum == 0) {
    FStack_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_58.Data.ArrayNum,0,(ForAnyElementType *)&FStack_58,FStack_58.Data.ArrayNum
               ,&FStack_58.Data.ArrayMax);
    memcpy(FStack_58.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  bVar2 = OverrideFileFromCommandline(&FStack_58);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (FStack_58.Data.ArrayNum != 0) {
    FVar5.Data = FStack_58.Data.AllocatorInstance.Data;
  }
  bVar3 = LoadConfigFileWrapper((wchar_t *)FVar5.Data,&FStack_48,bVar2);
  if (bVar3) {
    pFStack_38 = FStack_48.Data.AllocatorInstance.Data;
    iStack_30 = FStack_48.Data.ArrayNum + -1;
    if (FStack_48.Data.ArrayNum == 0) {
      iStack_30 = 0;
    }
    TStack_28._12_4_ = uStack_2c;
    TStack_28.Size = iStack_30;
    TStack_28.DataPtr = (wchar_t *)FStack_48.Data.AllocatorInstance.Data;
    FillFileFromBuffer<FConfigCommandStream>(this,&TStack_28,param_2,param_1);
    bVar2 = true;
  }
  else {
    if ((bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bFoundOverride",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                           ,0x837,L"Failed to Load config override %s"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar2 = false;
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// FindOrAddSectionInternal @ 14186e620

FConfigCommandStreamSection * __thiscall
FConfigCommandStream::FindOrAddSectionInternal(FConfigCommandStream *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FConfigCommandStreamSection *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  pFVar3 = TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                       *)this,uVar2,param_1);
  return pFVar3;
}

// ProcessCommand @ 141885d30

void __thiscall
FConfigCommandStream::ProcessCommand
          (FConfigCommandStream *this,FConfigCommandStreamSection *param_1,
          TStringView<wchar_t> *param_2,EValueType param_3,FName param_4,FString *param_5)

{
  FConfigExpansion *pFVar1;
  wchar_t *pwVar2;
  FConfigValue local_28;
  
  local_28.SavedValue.Data.AllocatorInstance.Data = (param_5->Data).AllocatorInstance.Data;
  (param_5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SavedValue.Data.ArrayNum = (param_5->Data).ArrayNum;
  local_28.SavedValue.Data.ArrayMax = (param_5->Data).ArrayMax;
  (param_5->Data).ArrayNum = 0;
  (param_5->Data).ArrayMax = 0;
  pwVar2 = (wchar_t *)local_28.SavedValue.Data.AllocatorInstance.Data;
  if (local_28.SavedValue.Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  local_28.ValueType = param_3;
  local_28.SavedValueHash = FCrc::StrCrc32<wchar_t>(pwVar2,0);
  pFVar1 = FindNextExpansion(pwVar2,(wchar_t **)&param_5);
  local_28.bExpandOnDemand = pFVar1 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)param_1,&param_4,&local_28);
  if (local_28.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// Shrink @ 141892490

void __thiscall FConfigCommandStream::Shrink(FConfigCommandStream *this)

{
  longlong *plVar1;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this_00;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FConfigCommandStream *pFVar6;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_148;
  undefined4 uStack_114;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FConfigCommandStream *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  bVar8 = IsInGameThread();
  if (bVar8) {
    QueryPerformanceCounter(&local_108);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (__real_c170000000000000 -
         (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            *)this);
  iVar4 = (int)this->_padding_;
  plVar1 = &this->_padding_;
  iVar13 = 0;
  local_148 = 1;
  iVar14 = 0;
  iVar17 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    plVar15 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar15 = plVar1;
    }
    uVar9 = (uint)*plVar15;
    iVar17 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141892592;
      uVar9 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar17 + -1 + local_res20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_141892592:
  uVar12 = (uint)this->_padding_;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_c0.CurrentBitIndex = iVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar17;
  uStack_a0 = CONCAT44(uStack_114,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  local_c8 = this;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = (uint)this->_padding_;
  if (uVar12 != uVar9) {
    plVar15 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar15 = plVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1418926b0;
      uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_1418926b0:
  while( true ) {
    pFVar6 = local_c8;
    if ((int)local_c8->_padding_ - *(int *)((longlong)&local_c8->_padding_ + 4) != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar12) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (pFVar6 == this))
    break;
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)((longlong)TStack_c0.CurrentBitIndex * 0xb8 + pFVar6->_padding_ + 0x10));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  this_00 = &this->PerObjectConfigArrayOfStructKeys;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            *)this_00);
  iVar4 = *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  puVar2 = &(this->PerObjectConfigArrayOfStructKeys).field_0x10;
  local_d8 = 0;
  iStack_dc = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar9 = *puVar18;
    local_d8 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar13;
      local_d8 = local_d8 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141892791;
      uVar9 = puVar18[lVar11 + 1];
    }
    local_148 = -uVar9 & uVar9;
    uVar3 = (ulonglong)local_148 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_dc = local_d8 + -1 + (int)lVar11;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_141892791:
  uStack_ec = local_148;
  iStack_d0 = *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 -
              *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34;
  uVar9 = *(uint *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  uStack_e0 = 0xffffffff;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_148,iVar13);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar9 >> 5;
  TStack_90._28_4_ = iVar10;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = this_00;
  iStack_f0 = iVar13;
  local_e8 = puVar2;
  iStack_d4 = iVar10;
  local_98 = this_00;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  if (uVar9 != uVar19) {
    puVar16 = *(undefined1 **)&(this->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141892890;
      uVar9 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar9 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar19 < (int)uVar9) {
      uVar9 = uVar19;
    }
  }
LAB_141892890:
  while( true ) {
    pTVar7 = local_98;
    if (*(int *)(&local_98->field_0x0 + 8) - *(int *)(&local_98->field_0x0 + 0x34) != (int)uStack_70
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar9) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == this_00))
    break;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Shrink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)((longlong)TStack_90.CurrentBitIndex * 0x68 + *(longlong *)&pTVar7->field_0x0 + 0x10))
    ;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar8 = IsInGameThread();
  if (bVar8) {
    QueryPerformanceCounter(&local_100);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

