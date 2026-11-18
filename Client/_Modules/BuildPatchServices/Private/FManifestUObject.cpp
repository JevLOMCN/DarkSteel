// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// Init @ 143257d20

void __cdecl FManifestUObject::Init(void)

{
  UObject *pUVar1;
  
  pUVar1 = GetTransientPackageAsObject();
  NewObject<UBuildPatchManifest>(pUVar1);
  return;
}

// LoadFromMemory @ 143259480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __cdecl
FManifestUObject::LoadFromMemory
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FBuildPatchAppManifest *param_2)

{
  code *pcVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  longlong lVar8;
  size_t _Size;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStackY_278 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_238;
  uint local_228;
  undefined4 uStack_224;
  undefined1 local_220 [8];
  FArchiveState local_218;
  undefined8 local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_180;
  undefined8 local_178;
  FManifestHeader local_168;
  uchar local_140 [24];
  undefined1 local_128 [224];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_218._padding_ = 0;
  local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_218._40_8_ = 0;
  local_218.ArSerializingDefaults = 0;
  local_218.ArPortFlags = 0;
  local_218.ArMaxSerializeSize = 0;
  local_218.ArUEVer.FileVersionUE4 = 0;
  local_218.ArUEVer.FileVersionUE5 = 0;
  local_218.ArLicenseeUEVer = 0;
  local_218.ArEngineVer.Major = 0;
  local_218.ArEngineVer.Minor = 0;
  local_218.ArEngineVer.Patch = 0;
  local_218.ArEngineVer._6_2_ = 0;
  local_218.ArEngineVer.Changelist = 0;
  local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_218.SerializedProperty = (FProperty *)0x0;
  local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_218.bCustomVersionsAreReset = false;
  local_218._129_7_ = 0;
  local_218.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_218);
  local_218._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchiveState::SetIsLoading(&local_218,true);
  (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
  local_168.Version = Latest;
  local_168.HeaderSize = 0;
  local_168.DataSizeCompressed = 0;
  local_168.DataSizeUncompressed = 0;
  local_168.SHAHash.Hash[0x10] = '\0';
  local_168.SHAHash.Hash[0x11] = '\0';
  local_168.SHAHash.Hash[0x12] = '\0';
  local_168.SHAHash.Hash[0x13] = '\0';
  local_168.StoredAs = None;
  local_168.SHAHash.Hash[0] = '\0';
  local_168.SHAHash.Hash[1] = '\0';
  local_168.SHAHash.Hash[2] = '\0';
  local_168.SHAHash.Hash[3] = '\0';
  local_168.SHAHash.Hash[4] = '\0';
  local_168.SHAHash.Hash[5] = '\0';
  local_168.SHAHash.Hash[6] = '\0';
  local_168.SHAHash.Hash[7] = '\0';
  local_168.SHAHash.Hash[8] = '\0';
  local_168.SHAHash.Hash[9] = '\0';
  local_168.SHAHash.Hash[10] = '\0';
  local_168.SHAHash.Hash[0xb] = '\0';
  local_168.SHAHash.Hash[0xc] = '\0';
  local_168.SHAHash.Hash[0xd] = '\0';
  local_168.SHAHash.Hash[0xe] = '\0';
  local_168.SHAHash.Hash[0xf] = '\0';
  BuildPatchServices::operator<<((FArchive *)&local_218,&local_168);
  if (local_218.ArIsError == 0) {
    iVar6 = param_1->ArrayNum;
    lVar8 = (longlong)(int)local_168.HeaderSize;
    if ((int)local_168.HeaderSize < iVar6) {
      local_140[0x10] = '\0';
      local_140[0x11] = '\0';
      local_140[0x12] = '\0';
      local_140[0x13] = '\0';
      uVar10 = iVar6 - local_168.HeaderSize;
      uVar9 = 0;
      local_140[0] = '\0';
      local_140[1] = '\0';
      local_140[2] = '\0';
      local_140[3] = '\0';
      local_140[4] = '\0';
      local_140[5] = '\0';
      local_140[6] = '\0';
      local_140[7] = '\0';
      local_140[8] = '\0';
      local_140[9] = '\0';
      local_140[10] = '\0';
      local_140[0xb] = '\0';
      local_140[0xc] = '\0';
      local_140[0xd] = '\0';
      local_140[0xe] = '\0';
      local_140[0xf] = '\0';
      uVar12 = uVar9;
      if ((int)local_168.HeaderSize < iVar6) {
        uVar12 = ~local_168.HeaderSize >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      FSHA1::HashBuffer((param_1->AllocatorInstance).Data + lVar8,(ulonglong)uVar10,local_140);
      iVar6 = memcmp(local_140,&local_168.SHAHash,0x14);
      if (iVar6 != 0) {
        bVar4 = false;
        goto LAB_14325985f;
      }
      lVar8 = (longlong)(int)local_168.HeaderSize;
      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ArrayNum = 0;
      local_238.ArrayMax = 0;
      if (((local_168.StoredAs & Compressed) == None) ||
         (local_168.DataSizeCompressed + local_168.HeaderSize != param_1->ArrayNum)) {
        if (local_168.DataSizeUncompressed + local_168.HeaderSize != param_1->ArrayNum)
        goto LAB_1432596f3;
        if ((int)local_168.HeaderSize < param_1->ArrayNum) {
          uVar9 = ~local_168.HeaderSize >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        uVar12 = local_168.DataSizeUncompressed;
        _Size = (size_t)(int)local_168.DataSizeUncompressed;
        pFVar11 = (param_1->AllocatorInstance).Data + lVar8;
        if (((pFVar11 == (FScriptContainerElement *)0x0) && (local_168.DataSizeUncompressed != 0))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ptr != nullptr || Count == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x9c1,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar12,&local_238.AllocatorInstance,&local_238.ArrayNum,
                           &local_238.ArrayMax);
        if (uVar12 != 0) {
          memcpy(local_238.AllocatorInstance.Data + iVar6,pFVar11,_Size);
        }
LAB_1432597fe:
        FManifestReader::FManifestReader((FManifestReader *)local_128,&local_238);
        bVar4 = LoadInternal((FArchive *)local_128,param_2);
        local_40 = 0;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_128 + 0xa0));
        FArchive::~FArchive((FArchive *)local_128);
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_168.DataSizeUncompressed,&local_238.AllocatorInstance,
                   &local_238.ArrayNum,&local_238.ArrayMax);
        lVar8 = (longlong)(int)local_168.HeaderSize;
        uVar12 = param_1->ArrayNum - local_168.HeaderSize;
        if ((int)local_168.HeaderSize < param_1->ArrayNum) {
          uVar9 = ~local_168.HeaderSize >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        FVar3.Data = local_238.AllocatorInstance.Data;
        pFVar11 = (param_1->AllocatorInstance).Data;
        FVar7 = FNameEntryId::FromValidEName((EName)local_220);
        uStack_224 = 0;
        local_228 = *(uint *)CONCAT44(extraout_var,FVar7.Value);
        FVar2.Number = 0;
        FVar2.ComparisonIndex.Value = local_228;
        bVar4 = FCompression::UncompressMemory
                          (FVar2,FVar3.Data,(ulonglong)local_168._8_8_ >> 0x20,pFVar11 + lVar8,
                           (ulonglong)uVar12,COMPRESS_BiasMemory,0);
        if (bVar4) goto LAB_1432597fe;
LAB_1432596f3:
        bVar4 = false;
      }
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      goto LAB_14325985f;
    }
  }
  bVar4 = false;
LAB_14325985f:
  FArchive::~FArchive((FArchive *)&local_218);
  return bVar4;
}

// LoadInternal @ 143259890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl FManifestUObject::LoadInternal(FArchive *param_1,FBuildPatchAppManifest *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FFileManifestList *pFVar3;
  FChunkDataList *pFVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UObject *pUVar13;
  UBuildPatchManifest *pUVar14;
  FUObjectItem *pFVar15;
  longlong lVar16;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  undefined1 local_a0 [8];
  FArchive *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = param_1;
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UBuildPatchManifest>(pUVar13);
  pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(pFVar15,RootSet);
  FPackageFileVersion::CreateUE4Version((int)local_a0);
  (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  else {
    (**(code **)(pUVar14->_padding_ + 200))(pUVar14,param_1);
    FBuildPatchAppManifest::DestroyData(param_2);
    pFVar1 = &pUVar14->AppName;
    (param_2->ManifestMeta).FeatureLevel = (uint)pUVar14->ManifestFileVersion;
    pFVar2 = &(param_2->ManifestMeta).AppName;
    (param_2->ManifestMeta).bIsFileData = pUVar14->bIsFileData;
    (param_2->ManifestMeta).AppID = pUVar14->AppID;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).AppName.Data.ArrayNum = (pUVar14->AppName).Data.ArrayNum;
      (param_2->ManifestMeta).AppName.Data.ArrayMax = (pUVar14->AppName).Data.ArrayMax;
      (pUVar14->AppName).Data.ArrayNum = 0;
      (pUVar14->AppName).Data.ArrayMax = 0;
    }
    pFVar1 = &pUVar14->BuildVersion;
    pFVar2 = &(param_2->ManifestMeta).BuildVersion;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).BuildVersion.Data.ArrayNum = (pUVar14->BuildVersion).Data.ArrayNum;
      (param_2->ManifestMeta).BuildVersion.Data.ArrayMax = (pUVar14->BuildVersion).Data.ArrayMax;
      (pUVar14->BuildVersion).Data.ArrayNum = 0;
      (pUVar14->BuildVersion).Data.ArrayMax = 0;
    }
    pFVar1 = &pUVar14->LaunchExe;
    pFVar2 = &(param_2->ManifestMeta).LaunchExe;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).LaunchExe.Data.ArrayNum = (pUVar14->LaunchExe).Data.ArrayNum;
      (param_2->ManifestMeta).LaunchExe.Data.ArrayMax = (pUVar14->LaunchExe).Data.ArrayMax;
      (pUVar14->LaunchExe).Data.ArrayNum = 0;
      (pUVar14->LaunchExe).Data.ArrayMax = 0;
    }
    pFVar1 = &pUVar14->LaunchCommand;
    pFVar2 = &(param_2->ManifestMeta).LaunchCommand;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).LaunchCommand.Data.ArrayNum = (pUVar14->LaunchCommand).Data.ArrayNum;
      (param_2->ManifestMeta).LaunchCommand.Data.ArrayMax = (pUVar14->LaunchCommand).Data.ArrayMax;
      (pUVar14->LaunchCommand).Data.ArrayNum = 0;
      (pUVar14->LaunchCommand).Data.ArrayMax = 0;
    }
    pTVar17 = &(param_2->ManifestMeta).PrereqIds;
    if (pTVar17 != &pUVar14->PrereqIds) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (pTVar17,&pUVar14->PrereqIds);
    }
    pFVar1 = &pUVar14->PrereqName;
    pFVar2 = &(param_2->ManifestMeta).PrereqName;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).PrereqName.Data.ArrayNum = (pUVar14->PrereqName).Data.ArrayNum;
      (param_2->ManifestMeta).PrereqName.Data.ArrayMax = (pUVar14->PrereqName).Data.ArrayMax;
      (pUVar14->PrereqName).Data.ArrayNum = 0;
      (pUVar14->PrereqName).Data.ArrayMax = 0;
    }
    pFVar1 = &pUVar14->PrereqPath;
    pFVar2 = &(param_2->ManifestMeta).PrereqPath;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).PrereqPath.Data.ArrayNum = (pUVar14->PrereqPath).Data.ArrayNum;
      (param_2->ManifestMeta).PrereqPath.Data.ArrayMax = (pUVar14->PrereqPath).Data.ArrayMax;
      (pUVar14->PrereqPath).Data.ArrayNum = 0;
      (pUVar14->PrereqPath).Data.ArrayMax = 0;
    }
    pFVar1 = &pUVar14->PrereqArgs;
    pFVar2 = &(param_2->ManifestMeta).PrereqArgs;
    if (pFVar2 != pFVar1) {
      pFVar18 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->ManifestMeta).PrereqArgs.Data.ArrayNum = (pUVar14->PrereqArgs).Data.ArrayNum;
      (param_2->ManifestMeta).PrereqArgs.Data.ArrayMax = (pUVar14->PrereqArgs).Data.ArrayMax;
      (pUVar14->PrereqArgs).Data.ArrayNum = 0;
      (pUVar14->PrereqArgs).Data.ArrayMax = 0;
    }
    uVar6 = (pUVar14->FileManifestList).ArrayNum;
    pFVar3 = &param_2->FileManifestList;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    DestructItems<BuildPatchServices::FFileManifest,int>
              ((FFileManifest *)(pFVar3->FileList).AllocatorInstance.Data,
               (param_2->FileManifestList).FileList.ArrayNum);
    piVar5 = &(param_2->FileManifestList).FileList.ArrayMax;
    (param_2->FileManifestList).FileList.ArrayNum = 0;
    if (*piVar5 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar6,(ForAnyElementType *)pFVar3,0,piVar5);
    }
    Algo::
    Transform<TArray<FFileManifestData,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>_&,BuildPatchServices::FFileManifest_(__cdecl*)(FFileManifestData_const_&)>
              (&pUVar14->FileManifestList,&pFVar3->FileList,
               ManifestUObjectHelpers::FromFileManifestData);
    uVar6 = (pUVar14->ChunkList).ArrayNum;
    pFVar4 = &param_2->ChunkDataList;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar5 = &(param_2->ChunkDataList).ChunkList.ArrayMax;
    (param_2->ChunkDataList).ChunkList.ArrayNum = 0;
    if (*piVar5 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar6,(ForAnyElementType *)pFVar4,0,piVar5);
    }
    pFVar20 = (pUVar14->ChunkList).AllocatorInstance.Data;
    iVar7 = (pUVar14->ChunkList).ArrayNum;
    pFVar19 = pFVar20 + (longlong)iVar7 * 0x40;
    pFVar18 = pFVar20 + 0x18;
    while( true ) {
      if ((pUVar14->ChunkList).ArrayNum != iVar7) {
        local_a8 = 0;
        `TCheckedPointerIterator<FChunkInfoData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_a8);
      }
      if (pFVar20 == pFVar19) break;
      local_78 = *(undefined8 *)(pFVar18 + -8);
      local_88 = *(undefined8 *)pFVar20;
      uStack_80 = *(undefined8 *)(pFVar20 + 8);
      pFVar8 = (pFVar4->ChunkList).AllocatorInstance.Data;
      uStack_60 = *(undefined4 *)(pFVar18 + 0x10);
      uStack_50 = *(undefined8 *)(pFVar18 + 0x18);
      uStack_70 = *(undefined8 *)pFVar18;
      uStack_68 = *(undefined8 *)(pFVar18 + 8);
      uStack_5c = CONCAT31(uStack_5c._1_3_,pFVar18[0x20]);
      local_58 = 0x100000;
      if (((pFVar8 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar8 + (longlong)*piVar5 * 0x40)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      iVar12 = (param_2->ChunkDataList).ChunkList.ArrayNum;
      if (iVar12 == *piVar5) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)pFVar4,piVar5);
      }
      (param_2->ChunkDataList).ChunkList.ArrayNum = iVar12 + 1;
      pFVar20 = pFVar20 + 0x40;
      pFVar8 = (pFVar4->ChunkList).AllocatorInstance.Data;
      lVar16 = (longlong)iVar12 * 0x40;
      pFVar18 = pFVar18 + 0x40;
      *(undefined8 *)(pFVar8 + lVar16) = local_88;
      *(undefined8 *)(pFVar8 + lVar16 + 8) = uStack_80;
      *(undefined8 *)(pFVar8 + lVar16 + 0x10) = local_78;
      *(undefined8 *)(pFVar8 + lVar16 + 0x10 + 8) = uStack_70;
      *(undefined8 *)(pFVar8 + lVar16 + 0x20) = uStack_68;
      *(ulonglong *)(pFVar8 + lVar16 + 0x20 + 8) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)(pFVar8 + lVar16 + 0x30) = CONCAT44(uStack_54,local_58);
      *(undefined8 *)(pFVar8 + lVar16 + 0x30 + 8) = uStack_50;
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&param_2->CustomFields,(pUVar14->CustomFields).ArrayNum);
    iVar7 = (pUVar14->CustomFields).ArrayNum;
    pFVar18 = (pUVar14->CustomFields).AllocatorInstance.Data;
    pFVar20 = pFVar18 + (longlong)iVar7 * 0x20;
    while( true ) {
      if ((pUVar14->CustomFields).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FCustomFieldData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_a7);
      }
      if (pFVar18 == pFVar20) break;
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString_const_&,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)&param_2->CustomFields,(FString *)pFVar18,(FString *)(pFVar18 + 0x10));
      pFVar18 = pFVar18 + 0x20;
    }
    if ((param_2->ManifestMeta).FeatureLevel == Invalid) {
      (param_2->ManifestMeta).FeatureLevel = StoredAsCompressedUClass;
    }
    BuildPatchServices::FFileManifestList::OnPostLoad(&param_2->FileManifestList);
    FBuildPatchAppManifest::InitLookups(param_2);
    param_1 = local_98;
  }
  pTVar17 = &pUVar14->PrereqIds;
  ::FString::Empty(&pUVar14->AppName);
  ::FString::Empty(&pUVar14->BuildVersion);
  ::FString::Empty(&pUVar14->LaunchExe);
  ::FString::Empty(&pUVar14->LaunchCommand);
  bVar10 = 1 < (pUVar14->PrereqIds).HashSize;
  if (!bVar10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar17);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&pTVar17->Elements,0,*(int *)&(pUVar14->PrereqIds).Elements.field_0x8);
  iVar7 = *(int *)&(pUVar14->PrereqIds).Elements.field_0xc;
  *(undefined4 *)&(pUVar14->PrereqIds).Elements.field_0x8 = 0;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar17,0,
               (int *)&(pUVar14->PrereqIds).Elements.field_0xc);
  }
  *(undefined4 *)&(pUVar14->PrereqIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pUVar14->PrereqIds).Elements.field_0x34 = 0;
  iVar7 = *(int *)&(pUVar14->PrereqIds).Elements.field_0x2c;
  *(undefined4 *)&(pUVar14->PrereqIds).Elements.field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(pUVar14->PrereqIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar14->PrereqIds).Elements.field_0x10,0);
  }
  if (bVar10) {
    (pUVar14->PrereqIds).HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar17);
  }
  ::FString::Empty(&pUVar14->PrereqName);
  ::FString::Empty(&pUVar14->PrereqPath);
  ::FString::Empty(&pUVar14->PrereqArgs);
  DestructItems<FFileManifestData,int>
            ((FFileManifestData *)(pUVar14->FileManifestList).AllocatorInstance.Data,
             (pUVar14->FileManifestList).ArrayNum);
  piVar5 = &(pUVar14->FileManifestList).ArrayMax;
  (pUVar14->FileManifestList).ArrayNum = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(pUVar14->FileManifestList).AllocatorInstance,0,piVar5);
  }
  (pUVar14->ChunkList).ArrayNum = 0;
  if ((pUVar14->ChunkList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(pUVar14->ChunkList).AllocatorInstance,0,&(pUVar14->ChunkList).ArrayMax);
  }
  DestructItems<FCustomFieldData,int>
            ((FCustomFieldData *)(pUVar14->CustomFields).AllocatorInstance.Data,
             (pUVar14->CustomFields).ArrayNum);
  piVar5 = &(pUVar14->CustomFields).ArrayMax;
  (pUVar14->CustomFields).ArrayNum = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pUVar14->CustomFields).AllocatorInstance,0,piVar5);
  }
  pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4))
  ;
  FUObjectItem::ClearRootFlags(pFVar15,RootSet);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

// SaveInternal @ 1432652d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432659b4) */
/* WARNING: Removing unreachable block (ram,0x0001432659c3) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl FManifestUObject::SaveInternal(FArchive *param_1,FBuildPatchAppManifest *param_2)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  TArray<FFileManifestData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FChunkInfoData,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  ForElementType<unsigned_int> FVar9;
  UBuildPatchManifest *pUVar10;
  FCustomFields *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  UObject *pUVar16;
  UBuildPatchManifest *pUVar17;
  FUObjectItem *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  TArray<FCustomFieldData,TSizedDefaultAllocator<32>_> *pTVar23;
  ForElementType<unsigned_int> FVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  FString local_160;
  FString local_150;
  ForElementType<unsigned_int> local_140;
  UBuildPatchManifest *local_138;
  int local_130;
  int local_12c;
  undefined1 local_128 [8];
  FCustomFields *local_120;
  FArchive *local_118;
  FCustomFields *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FCustomFields *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  FScriptContainerElement FStack_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_118 = param_1;
  pUVar16 = GetTransientPackageAsObject();
  pUVar17 = NewObject<UBuildPatchManifest>(pUVar16);
  local_138 = pUVar17;
  pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar17->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(pFVar18,RootSet);
  FPackageFileVersion::CreateUE4Version((int)local_128);
  (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    pUVar17->ManifestFileVersion = (char)(param_2->ManifestMeta).FeatureLevel;
    pUVar17->bIsFileData = (param_2->ManifestMeta).bIsFileData;
    pUVar17->AppID = (param_2->ManifestMeta).AppID;
    ::FString::operator=(&pUVar17->AppName,&(param_2->ManifestMeta).AppName);
    ::FString::operator=(&pUVar17->BuildVersion,&(param_2->ManifestMeta).BuildVersion);
    ::FString::operator=(&pUVar17->LaunchExe,&(param_2->ManifestMeta).LaunchExe);
    ::FString::operator=(&pUVar17->LaunchCommand,&(param_2->ManifestMeta).LaunchCommand);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&pUVar17->PrereqIds,&(param_2->ManifestMeta).PrereqIds);
    ::FString::operator=(&pUVar17->PrereqName,&(param_2->ManifestMeta).PrereqName);
    ::FString::operator=(&pUVar17->PrereqPath,&(param_2->ManifestMeta).PrereqPath);
    ::FString::operator=(&pUVar17->PrereqArgs,&(param_2->ManifestMeta).PrereqArgs);
    uVar21 = (param_2->FileManifestList).FileList.ArrayNum;
    pTVar2 = &pUVar17->FileManifestList;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    DestructItems<FFileManifestData,int>
              ((FFileManifestData *)(pTVar2->AllocatorInstance).Data,
               (pUVar17->FileManifestList).ArrayNum);
    piVar1 = &(pUVar17->FileManifestList).ArrayMax;
    (pUVar17->FileManifestList).ArrayNum = 0;
    if (*piVar1 != uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar21,&pTVar2->AllocatorInstance,0,piVar1);
    }
    Algo::
    Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TArray<FFileManifestData,TSizedDefaultAllocator<32>_>_&,FFileManifestData_(__cdecl*)(BuildPatchServices::FFileManifest_const_&)>
              (&(param_2->FileManifestList).FileList,pTVar2,
               ManifestUObjectHelpers::ToFileManifestData);
    uVar21 = (param_2->ChunkDataList).ChunkList.ArrayNum;
    pTVar3 = &pUVar17->ChunkList;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    (pUVar17->ChunkList).ArrayNum = 0;
    piVar1 = &(pUVar17->ChunkList).ArrayMax;
    if ((pUVar17->ChunkList).ArrayMax != uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar21,&pTVar3->AllocatorInstance,0,piVar1);
    }
    pFVar22 = (param_2->ChunkDataList).ChunkList.AllocatorInstance.Data;
    iVar15 = (param_2->ChunkDataList).ChunkList.ArrayNum;
    pFVar26 = pFVar22 + (longlong)iVar15 * 0x40;
    pFVar20 = pFVar22 + 0x18;
    while( true ) {
      if ((param_2->ChunkDataList).ChunkList.ArrayNum != iVar15) {
        local_168 = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_168);
      }
      pUVar10 = local_138;
      if (pFVar22 == pFVar26) break;
      local_78 = *(undefined8 *)(pFVar20 + -8);
      local_88 = *(undefined8 *)pFVar22;
      uStack_80 = *(undefined8 *)(pFVar22 + 8);
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      uStack_60 = *(undefined4 *)(pFVar20 + 0x10);
      local_58 = *(undefined8 *)(pFVar20 + 0x20);
      FStack_50 = pFVar20[0x14];
      uStack_70 = *(undefined8 *)pFVar20;
      uStack_68 = *(undefined8 *)(pFVar20 + 8);
      if (((pFVar7 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar7 + (longlong)*piVar1 * 0x40)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar14 = (pUVar17->ChunkList).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar3->AllocatorInstance,piVar1);
      }
      (pUVar17->ChunkList).ArrayNum = iVar14 + 1;
      pFVar22 = pFVar22 + 0x40;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      lVar19 = (longlong)iVar14 * 0x40;
      pFVar20 = pFVar20 + 0x40;
      *(undefined8 *)(pFVar7 + lVar19) = local_88;
      *(undefined8 *)(pFVar7 + lVar19 + 8) = uStack_80;
      *(undefined8 *)(pFVar7 + lVar19 + 0x10) = local_78;
      *(undefined8 *)(pFVar7 + lVar19 + 0x10 + 8) = uStack_70;
      *(undefined8 *)(pFVar7 + lVar19 + 0x20) = uStack_68;
      *(ulonglong *)(pFVar7 + lVar19 + 0x20 + 8) = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(pFVar7 + lVar19 + 0x30) = local_58;
      *(ulonglong *)(pFVar7 + lVar19 + 0x30 + 8) = CONCAT71(uStack_4f,FStack_50);
    }
    pTVar23 = &local_138->CustomFields;
    uVar21 = *(int *)&(param_2->CustomFields).Fields.field_0x8 -
             *(int *)&(param_2->CustomFields).Fields.field_0x34;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    DestructItems<FCustomFieldData,int>
              ((FCustomFieldData *)(pTVar23->AllocatorInstance).Data,
               (local_138->CustomFields).ArrayNum);
    piVar1 = &(pUVar10->CustomFields).ArrayMax;
    (pUVar10->CustomFields).ArrayNum = 0;
    if (*piVar1 != uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar21,&pTVar23->AllocatorInstance,0,piVar1);
    }
    local_120 = &param_2->CustomFields;
    local_140 = (ForElementType<unsigned_int>)&(param_2->CustomFields).Fields.field_0x10;
    iVar15 = *(int *)&(param_2->CustomFields).Fields.field_0x28;
    iStack_108 = 0;
    local_f0 = 0;
    uStack_104 = 1;
    iStack_f4 = 0;
    if (iVar15 != 0) {
      puVar25 = *(uint **)&(param_2->CustomFields).Fields.field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_140;
      }
      uVar21 = *puVar25;
      while (uVar21 == 0) {
        lVar19 = (longlong)iStack_108;
        local_f0 = local_f0 + 0x20;
        iStack_108 = iStack_108 + 1;
        iStack_f4 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108)
        goto LAB_1432656bd;
        uVar21 = puVar25[lVar19 + 1];
      }
      uStack_104 = -uVar21 & uVar21;
      uVar5 = (ulonglong)uStack_104 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_130 = (int)lVar19;
      iStack_f4 = local_f0 + -1 + local_130;
      if (iVar15 < iStack_f4) {
        iStack_f4 = iVar15;
      }
    }
LAB_1432656bd:
    local_110 = &param_2->CustomFields;
    uStack_ec = local_94;
    iStack_e8 = *(int *)&(param_2->CustomFields).Fields.field_0x8 -
                *(int *)&(param_2->CustomFields).Fields.field_0x34;
    uVar21 = *(uint *)&(param_2->CustomFields).Fields.field_0x28;
    uVar27 = uVar21 & 0xffffffe0;
    uStack_f8 = 0xffffffff;
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
    iVar14 = (int)uVar21 >> 5;
    TStack_d8._28_4_ = local_94;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_100 = (undefined1 *)local_140;
    local_e0 = local_110;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
    if ((((int)uVar21 < 0) || (iVar15 < (int)uVar21)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    FVar9 = local_140;
    uVar6 = *(int *)((longlong)local_140 + 0x18);
    if (uVar21 != uVar6) {
      FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_140 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_140 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_140;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar14 * 4);
      while (uVar21 == 0) {
        lVar19 = (longlong)iVar14;
        uVar27 = uVar27 + 0x20;
        iVar14 = iVar14 + 1;
        uVar21 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1432657e0;
        uVar21 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar19 * 4);
      }
      uVar5 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_12c = (int)lVar19;
      uVar21 = (uVar27 - 1) + local_12c;
      if ((int)uVar6 < (int)uVar21) {
        uVar21 = uVar6;
      }
    }
LAB_1432657e0:
    while( true ) {
      pFVar11 = local_e0;
      if (*(int *)&(local_e0->Fields).field_0x8 - *(int *)&(local_e0->Fields).field_0x34 !=
          (int)uStack_b8) {
        local_167[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
      }
      param_1 = local_118;
      pUVar17 = local_138;
      if (((TStack_d8.CurrentBitIndex == uVar21) &&
          ((ForElementType<unsigned_int>)TStack_d8.Array == FVar9)) && (pFVar11 == local_120))
      break;
      pFVar4 = (FString *)
               (*(longlong *)&pFVar11->Fields + (longlong)TStack_d8.CurrentBitIndex * 0x28);
      ::FString::FString(&local_160,L"");
      ::FString::FString(&local_150,L"");
      if (&local_160 != pFVar4) {
        iVar15 = (pFVar4->Data).ArrayNum;
        pFVar20 = (pFVar4->Data).AllocatorInstance.Data;
        local_160.Data.ArrayNum = iVar15;
        if ((iVar15 == 0) && (local_160.Data.ArrayMax == 0)) {
          local_160.Data.ArrayNum = 0;
          local_160.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,local_160.Data.ArrayMax,(ForAnyElementType *)&local_160,iVar15,
                     &local_160.Data.ArrayMax);
          if (iVar15 != 0) {
            memcpy(local_160.Data.AllocatorInstance.Data,pFVar20,(longlong)iVar15 * 2);
          }
        }
      }
      ::FString::operator=(&local_150,pFVar4 + 1);
      pFVar20 = (pTVar23->AllocatorInstance).Data;
      if (((pFVar20 <= (FScriptContainerElement *)&local_160) &&
          ((FScriptContainerElement *)&local_160 < pFVar20 + (longlong)*piVar1 * 0x20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar15 = (pUVar10->CustomFields).ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar23->AllocatorInstance,piVar1);
      }
      (pUVar10->CustomFields).ArrayNum = iVar15 + 1;
      pFVar20 = (pTVar23->AllocatorInstance).Data + (longlong)iVar15 * 0x20;
      *(undefined8 *)pFVar20 = 0;
      *(FScriptContainerElement **)pFVar20 = local_160.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 8) = local_160.Data.ArrayNum;
      *(int *)(pFVar20 + 0xc) = local_160.Data.ArrayMax;
      *(undefined8 *)(pFVar20 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar20 + 0x10) = local_150.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 0x18) = local_150.Data.ArrayNum;
      *(int *)(pFVar20 + 0x1c) = local_150.Data.ArrayMax;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    (**(code **)(local_138->_padding_ + 200))(local_138);
  }
  else {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  this = &pUVar17->PrereqIds;
  ::FString::Empty(&pUVar17->AppName);
  ::FString::Empty(&pUVar17->BuildVersion);
  ::FString::Empty(&pUVar17->LaunchExe);
  ::FString::Empty(&pUVar17->LaunchCommand);
  bVar12 = 1 < (pUVar17->PrereqIds).HashSize;
  if (!bVar12) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,0,*(int *)&(pUVar17->PrereqIds).Elements.field_0x8);
  iVar15 = *(int *)&(pUVar17->PrereqIds).Elements.field_0xc;
  *(undefined4 *)&(pUVar17->PrereqIds).Elements.field_0x8 = 0;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&(pUVar17->PrereqIds).Elements.field_0xc)
    ;
  }
  *(undefined4 *)&(pUVar17->PrereqIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pUVar17->PrereqIds).Elements.field_0x34 = 0;
  iVar15 = *(int *)&(pUVar17->PrereqIds).Elements.field_0x2c;
  *(undefined4 *)&(pUVar17->PrereqIds).Elements.field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(pUVar17->PrereqIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar17->PrereqIds).Elements.field_0x10,0);
  }
  if (bVar12) {
    (pUVar17->PrereqIds).HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this);
  }
  ::FString::Empty(&pUVar17->PrereqName);
  ::FString::Empty(&pUVar17->PrereqPath);
  ::FString::Empty(&pUVar17->PrereqArgs);
  DestructItems<FFileManifestData,int>
            ((FFileManifestData *)(pUVar17->FileManifestList).AllocatorInstance.Data,
             (pUVar17->FileManifestList).ArrayNum);
  piVar1 = &(pUVar17->FileManifestList).ArrayMax;
  (pUVar17->FileManifestList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(pUVar17->FileManifestList).AllocatorInstance,0,piVar1);
  }
  (pUVar17->ChunkList).ArrayNum = 0;
  if ((pUVar17->ChunkList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(pUVar17->ChunkList).AllocatorInstance,0,&(pUVar17->ChunkList).ArrayMax);
  }
  DestructItems<FCustomFieldData,int>
            ((FCustomFieldData *)(pUVar17->CustomFields).AllocatorInstance.Data,
             (pUVar17->CustomFields).ArrayNum);
  piVar1 = &(pUVar17->CustomFields).ArrayMax;
  (pUVar17->CustomFields).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pUVar17->CustomFields).AllocatorInstance,0,piVar1);
  }
  pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar17->_padding_ + 4))
  ;
  FUObjectItem::ClearRootFlags(pFVar18,RootSet);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

// SaveToArchive @ 143265ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FManifestUObject::SaveToArchive(FArchive *param_1,FBuildPatchAppManifest *param_2)

{
  ForAnyElementType FVar1;
  FName FVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_1c8 [32];
  uint local_188 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_180;
  uint local_170 [2];
  FManifestHeader local_168;
  undefined1 local_138 [168];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((param_1->field_0x28 & 4) == 0) {
    FArchiveState::SetError((FArchiveState *)param_1);
    bVar7 = false;
  }
  else {
    local_138._0_8_ = 0;
    local_138._8_8_ = (FFastPathLoadBuffer *)0x0;
    local_138._16_8_ = (uchar *)0x0;
    local_138._24_8_ = (uchar *)0x0;
    local_138._32_8_ = (uchar *)0x0;
    local_138._40_8_ = 0;
    local_138._48_8_ = 0;
    local_138._56_8_ = 0;
    local_138._64_4_ = 0;
    local_138._68_4_ = 0;
    local_138._72_8_ = 0;
    local_138._80_8_ = 0;
    local_138._88_8_ = (FCustomVersionContainer *)0x0;
    local_138._96_8_ = (FCustomPropertyListNode *)0x0;
    local_138._104_8_ = (FArchiveSavePackageData *)0x0;
    local_138._112_8_ = (FProperty *)0x0;
    local_138._120_8_ = (FArchiveSerializedPropertyChain *)0x0;
    local_138._128_8_ = 0;
    local_138._136_8_ = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_138);
    local_138._0_8_ = &___7FManifestWriter__6B_;
    local_138._144_8_ = 0;
    local_138._152_8_ = (FScriptContainerElement *)0x0;
    local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_80.MaxBits = _UNK_150631d94;
    uStack_60 = _UNK_150631d98;
    local_138._160_4_ = 0;
    local_138._164_4_ = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50 = (void *)0x0;
    local_48 = 0;
    FArchiveState::SetIsPersistent((FArchiveState *)local_138,false);
    (**(code **)(local_138._0_8_ + 0xd8))(local_138,1);
    bVar7 = SaveInternal((FArchive *)local_138,param_2);
    FManifestWriter::Finalize((FManifestWriter *)local_138);
    if ((bVar7) && ((local_138._40_8_ & 0x200) == 0)) {
      uVar5 = local_138._160_4_;
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.ArrayNum = 0;
      local_180.ArrayMax = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_138._160_4_,&local_180.AllocatorInstance,&local_180.ArrayNum,
                 &local_180.ArrayMax);
      uVar4 = local_138._152_8_;
      FVar1.Data = local_180.AllocatorInstance.Data;
      local_188[0] = uVar5;
      FVar8 = FNameEntryId::FromValidEName((EName)local_170);
      local_170[0] = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      local_170[1] = 0;
      FVar2.Number = 0;
      FVar2.ComparisonIndex.Value = local_170[0];
      bVar7 = FCompression::CompressMemory
                        (FVar2,FVar1.Data,(int *)local_188,(void *)uVar4,uVar5,COMPRESS_BiasMemory,0
                        );
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_180,local_188[0],Default);
      local_168.DataSizeUncompressed = uVar5;
      local_168.HeaderSize = 0;
      pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_138 + 0x98);
      FVar1.Data = (FScriptContainerElement *)local_138._152_8_;
      if (bVar7) {
        pTVar9 = &local_180;
        FVar1.Data = local_180.AllocatorInstance.Data;
      }
      local_168.StoredAs = bVar7;
      local_168.SHAHash.Hash[0x10] = '\0';
      local_168.SHAHash.Hash[0x11] = '\0';
      local_168.SHAHash.Hash[0x12] = '\0';
      local_168.SHAHash.Hash[0x13] = '\0';
      local_168.Version = (param_2->ManifestMeta).FeatureLevel;
      local_168.DataSizeCompressed = uVar5;
      if (bVar7) {
        local_168.DataSizeCompressed = local_188[0];
      }
      local_168.SHAHash.Hash[0] = '\0';
      local_168.SHAHash.Hash[1] = '\0';
      local_168.SHAHash.Hash[2] = '\0';
      local_168.SHAHash.Hash[3] = '\0';
      local_168.SHAHash.Hash[4] = '\0';
      local_168.SHAHash.Hash[5] = '\0';
      local_168.SHAHash.Hash[6] = '\0';
      local_168.SHAHash.Hash[7] = '\0';
      local_168.SHAHash.Hash[8] = '\0';
      local_168.SHAHash.Hash[9] = '\0';
      local_168.SHAHash.Hash[10] = '\0';
      local_168.SHAHash.Hash[0xb] = '\0';
      local_168.SHAHash.Hash[0xc] = '\0';
      local_168.SHAHash.Hash[0xd] = '\0';
      local_168.SHAHash.Hash[0xe] = '\0';
      local_168.SHAHash.Hash[0xf] = '\0';
      FSHA1::HashBuffer(FVar1.Data,(longlong)pTVar9->ArrayNum,local_168.SHAHash.Hash);
      BuildPatchServices::operator<<(param_1,&local_168);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
    }
    else {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    local_48 = 0;
    bVar7 = (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    uVar3 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&local_90,0,(int *)((longlong)&local_88 + 4));
    }
    iVar6 = local_80.MaxBits;
    local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
    uStack_60 = 0xffffffff;
    if (0x80 < (uint)iVar6) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    if ((FScriptContainerElement *)local_138._152_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._152_8_);
    }
    FArchive::~FArchive((FArchive *)local_138);
  }
  return bVar7;
}

