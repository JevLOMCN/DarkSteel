// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// FLinker @ 1420a17c0

FLinker * __thiscall FLinker::FLinker(FLinker *this,Type param_1,UPackage *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLinker *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLinker__6B_;
  this->LinkerType = param_1;
  this->LinkerRoot = param_2;
  FPackageFileSummary::FPackageFileSummary(&this->Summary);
  (this->NameMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameMap).ArrayNum = 0;
  (this->NameMap).ArrayMax = 0;
  (this->SoftObjectPathList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftObjectPathList).ArrayNum = 0;
  (this->SoftObjectPathList).ArrayMax = 0;
  (this->GatherableTextDataMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatherableTextDataMap).ArrayNum = 0;
  (this->GatherableTextDataMap).ArrayMax = 0;
  (this->DataResourceMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataResourceMap).ArrayNum = 0;
  (this->DataResourceMap).ArrayMax = 0;
  *(undefined8 *)&this->ImportTypeHierarchies = 0;
  *(undefined8 *)&(this->ImportTypeHierarchies).field_0x8 = 0;
  *(undefined8 *)&(this->ImportTypeHierarchies).field_0x20 = 0;
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x28 = 0;
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x34 = 0;
  *(undefined8 *)&(this->ImportTypeHierarchies).field_0x40 = 0;
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x48 = 0;
  this->FilterClientButNotServer = false;
  this->FilterServerButNotClient = false;
  this->ScriptSHA = (FSHA1 *)0x0;
  if (this->LinkerRoot == (UPackage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinkerRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Linker.cpp"
                       ,0xac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinker *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (((GIsClient != false) ||
      ((GIsServer != false && (this->FilterClientButNotServer = true, GIsClient != false)))) &&
     (GIsServer == false)) {
    this->FilterServerButNotClient = true;
  }
  return this;
}

// ~FLinker @ 1420a4600

void __thiscall FLinker::~FLinker(FLinker *this)

{
  FSHA1 *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this_00 = this->ScriptSHA;
  this->_padding_ = (longlong)&___7FLinker__6B_;
  if (this_00 != (FSHA1 *)0x0) {
    FSHA1::~FSHA1(this_00);
    ::operator_delete(this_00,0x88);
  }
  *(undefined4 *)&(this->ImportTypeHierarchies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImportTypeHierarchies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImportTypeHierarchies);
  pFVar2 = (this->DataResourceMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGatherableTextData,int>
            ((FGatherableTextData *)(this->GatherableTextDataMap).AllocatorInstance.Data,
             (this->GatherableTextDataMap).ArrayNum);
  pFVar2 = (this->GatherableTextDataMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->SoftObjectPathList).AllocatorInstance.Data,
             (this->SoftObjectPathList).ArrayNum);
  pFVar2 = (this->SoftObjectPathList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NameMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPackageFileSummary::~FPackageFileSummary(&this->Summary);
  FLinkerTables::~FLinkerTables((FLinkerTables *)&this->_padding_);
  return;
}

// GetDebugName @ 1420c65b0

FString * __thiscall FLinker::GetDebugName(FLinker *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UnexpectedCallToBaseClassGetDebugName");
  return __return_storage_ptr__;
}

// GetExportFullName @ 1420c6830

FString * __thiscall
FLinker::GetExportFullName
          (FLinker *this,FString *__return_storage_ptr__,int param_1,wchar_t *param_2,bool param_3)

{
  FPackageIndex FVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  FString *pFVar5;
  undefined4 extraout_var;
  FObjectResource *pFVar6;
  FString *pFVar7;
  uint uVar8;
  bool bVar9;
  FName local_res8;
  undefined4 local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar9 = param_2 == (wchar_t *)0x0;
  local_res18[0] = 0;
  if (bVar9) {
    pFVar5 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this->LinkerRoot,&local_48,(UObject *)0x0);
  }
  else {
    pFVar5 = ::FString::FString(&local_38,param_2);
    param_3 = false;
  }
  uVar8 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  FVar1.Index = *(int *)((longlong)param_1 * 0x68 + 0xc + this->_padding_);
  if (FVar1.Index == 0) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    local_res8.Number = 0;
    local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  }
  else {
    pFVar6 = FLinkerTables::ImpExp((FLinkerTables *)&this->_padding_,FVar1);
    local_res8 = pFVar6->ObjectName;
  }
  pFVar5 = FLinkerTables::GetExportPathName
                     ((FLinkerTables *)&this->_padding_,&local_58,pFVar5,param_1,param_3);
  pFVar7 = ::FName::ToString(&local_res8,&local_68);
  ::FString::ConcatFC(&local_78,pFVar7,L" ");
  ::FString::ConcatFF(__return_storage_ptr__,&local_78,pFVar5);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExportPathName @ 1420c6c10

FString * __thiscall
FLinker::GetExportPathName
          (FLinker *this,FString *__return_storage_ptr__,int param_1,wchar_t *param_2,bool param_3)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  if (param_2 == (wchar_t *)0x0) {
    pFVar1 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this->LinkerRoot,&local_18,(UObject *)0x0);
    FLinkerTables::GetExportPathName
              ((FLinkerTables *)&this->_padding_,__return_storage_ptr__,pFVar1,param_1,param_3);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = ::FString::FString(&local_28,param_2);
    FLinkerTables::GetExportPathName
              ((FLinkerTables *)&this->_padding_,__return_storage_ptr__,pFVar1,param_1,false);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFullImpExpName @ 1420c74f0

FString * __thiscall
FLinker::GetFullImpExpName(FLinker *this,FString *__return_storage_ptr__,FPackageIndex param_1)

{
  if (param_1.Index < 0) {
    FLinkerTables::GetImportFullName
              ((FLinkerTables *)&this->_padding_,__return_storage_ptr__,~param_1.Index);
    return __return_storage_ptr__;
  }
  if (0 < param_1.Index) {
    GetExportFullName(this,__return_storage_ptr__,param_1.Index + -1,(wchar_t *)0x0,false);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPathName @ 1420c8450

FString * __thiscall
FLinker::GetPathName(FLinker *this,FString *__return_storage_ptr__,FPackageIndex param_1)

{
  FString *pFVar1;
  FString local_18;
  
  if (param_1.Index < 0) {
    FLinkerTables::GetImportPathName
              ((FLinkerTables *)&this->_padding_,__return_storage_ptr__,~param_1.Index);
    return __return_storage_ptr__;
  }
  if (param_1.Index < 1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pFVar1 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this->LinkerRoot,&local_18,(UObject *)0x0);
    FLinkerTables::GetExportPathName
              ((FLinkerTables *)&this->_padding_,__return_storage_ptr__,pFVar1,param_1.Index + -1,
               false);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetScriptSHAKey @ 1420c8700

void __thiscall FLinker::GetScriptSHAKey(FLinker *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ScriptSHA == (FSHA1 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptSHA",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Linker.cpp"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSHA1::Final(this->ScriptSHA);
  FSHA1::GetHash(this->ScriptSHA,param_1);
  return;
}

// Serialize @ 1420d6520

void __thiscall FLinker::Serialize(FLinker *this,FArchive *param_1)

{
  if ((param_1->field_0x2b & 4) != 0) {
    TArrayPrivateFriend::Serialize<FObjectImport,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    TArrayPrivateFriend::Serialize<FObjectExport,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    TArrayPrivateFriend::
    Serialize<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)&this->_padding_);
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    TArrayPrivateFriend::Serialize<FGatherableTextData,TSizedDefaultAllocator<32>_>
              (param_1,&this->GatherableTextDataMap);
    TSetPrivateFriend::
    Serialize<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->_padding_);
    TSetPrivateFriend::
    Serialize<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy,0>,FDefaultSetAllocator>
                        *)&this->ImportTypeHierarchies);
  }
  return;
}

// StartScriptSHAGeneration @ 1420db290

void __thiscall FLinker::StartScriptSHAGeneration(FLinker *this)

{
  FSHA1 *this_00;
  FSHA1 *this_01;
  
  this_01 = this->ScriptSHA;
  if (this_01 == (FSHA1 *)0x0) {
    this_00 = ::operator_new(0x88);
    this_01 = (FSHA1 *)0x0;
    if (this_00 != (FSHA1 *)0x0) {
      this_01 = FSHA1::FSHA1(this_00);
    }
    this->ScriptSHA = this_01;
  }
  FSHA1::Reset(this_01);
  return;
}

// UpdateScriptSHAKey @ 1420ddeb0

void __thiscall
FLinker::UpdateScriptSHAKey
          (FLinker *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((this->ScriptSHA != (FSHA1 *)0x0) && (param_1->ArrayNum != 0)) {
    FSHA1::Update(this->ScriptSHA,(uchar *)(param_1->AllocatorInstance).Data,
                  (longlong)param_1->ArrayNum);
    return;
  }
  return;
}

