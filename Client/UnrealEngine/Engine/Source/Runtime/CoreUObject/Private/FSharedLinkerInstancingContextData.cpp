// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FSharedLinkerInstancingContextData @ 1420a4e00

void __thiscall
FLinkerInstancingContext::FSharedLinkerInstancingContextData::~FSharedLinkerInstancingContextData
          (FSharedLinkerInstancingContextData *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  longlong *plVar8;
  
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  *(undefined4 *)&(this->PathMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PathMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PathMapping);
  if (*(longlong *)&this->InstancedPackageMapFunc != 0) {
    plVar3 = *(longlong **)&(this->InstancedPackageMapFunc).field_0x28;
    plVar8 = (longlong *)&(this->InstancedPackageMapFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->InstancedPackageMap).InstancedPackageSuffix.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InstancedPackageMap).InstancedPackagePrefix.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InstancedPackageMap).GeneratedPackagesFolder.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->InstancedPackageMap).InstancedPackageMapping.field_0x48 = 0;
  pvVar2 = *(void **)&(this->InstancedPackageMap).InstancedPackageMapping.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstancedPackageMap);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001420a4ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// RemapPath @ 1420d0a80

FSoftObjectPath * __thiscall
FLinkerInstancingContext::FSharedLinkerInstancingContextData::RemapPath
          (FSharedLinkerInstancingContextData *this,FSoftObjectPath *__return_storage_ptr__,
          FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftObjectPath *pFVar3;
  FTopLevelAssetPath *pFVar4;
  FString *pFVar5;
  FUtf8String *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TStringOverload<FUtf8String> local_88;
  FTopLevelAssetPath local_78;
  FString local_68;
  FUtf8String local_58;
  FTopLevelAssetPath local_48;
  FString local_38;
  FUtf8String local_28;
  
  if (this == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  local_78.PackageName = (param_1->AssetPath).PackageName;
  local_78.AssetName = (param_1->AssetPath).AssetName;
  pFVar4 = TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
           ::Find((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                   *)&this->PathMapping,&local_78);
  if (pFVar4 == (FTopLevelAssetPath *)0x0) {
    FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,param_1);
  }
  else {
    iVar11 = (param_1->SubPathString).Data.ArrayNum;
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    pFVar5 = ::FString::ConstructFromPtrSize
                       (&local_68,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,
                        iVar9);
    iVar9 = 0;
    pFVar8 = pFVar7;
    iVar11 = iVar9;
    if (&local_38 != pFVar5) {
      pFVar8 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar5->Data).ArrayNum;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_48.PackageName = pFVar4->PackageName;
    local_48.AssetName = pFVar4->AssetName;
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    iVar10 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar10 = 0;
    }
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    pFVar6 = FUtf8String::ConstructFromPtrSize(&local_58,(wchar_t *)pFVar8,iVar10);
    local_88.String.Data.ArrayMax = iVar9;
    if (&local_28 != pFVar6) {
      pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar6->Data).ArrayNum;
      local_88.String.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_88.String.Data.AllocatorInstance.Data = pFVar7;
    local_88.String.Data.ArrayNum = iVar9;
    FSoftObjectPath::SetPath(__return_storage_ptr__,&local_48,&local_88);
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  if (this != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return __return_storage_ptr__;
}

