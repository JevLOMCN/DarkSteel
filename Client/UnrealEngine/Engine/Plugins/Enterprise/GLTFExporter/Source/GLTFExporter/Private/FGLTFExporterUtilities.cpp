// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 6

// FindCompatibleMesh @ 14e5f19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

USkeletalMesh * __cdecl FGLTFExporterUtilities::FindCompatibleMesh(USkeleton *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  UClass *pUVar12;
  USkeletalMesh *pUVar13;
  FAssetData *pFVar14;
  FString *pFVar15;
  ulonglong uVar16;
  IAssetRegistry *pIVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar18;
  FNameEntryId FVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  uint uVar22;
  FName FVar23;
  uint uVar24;
  FAssetData *pFVar25;
  FName FVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  FName FVar32;
  undefined1 auStackY_c08 [32];
  undefined1 local_bb8 [8];
  FString local_bb0;
  FAssetData *local_ba0;
  undefined8 local_b98;
  uint local_b90;
  uint uStack_b8c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b88;
  undefined4 local_b80;
  undefined8 uStack_b7c;
  undefined4 uStack_b74;
  FTopLevelAssetPath local_b70;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b58;
  FName local_b38;
  FSparseArrayAllocationInfo local_b30;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_b20;
  FString local_ac8;
  FString local_ab8;
  FName local_aa8 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a98;
  void *local_a48;
  undefined8 local_a40;
  void *local_a38;
  undefined8 local_a30;
  FSoftObjectPath *local_a28;
  undefined8 local_a20;
  void *local_a18;
  undefined8 local_a10;
  ForAnyElementType local_a08;
  undefined8 local_a00;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_9f8;
  FScriptContainerElement local_9c0 [8];
  ForAnyElementType local_9b8;
  uint local_9b0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_9a8;
  void *local_968;
  undefined4 local_960;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_958;
  void *local_918;
  undefined4 local_910;
  undefined2 local_908;
  undefined1 local_906;
  undefined8 local_904;
  FAssetData local_8f8;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c08;
  pFVar11 = ::FName::FName(&local_b38,8,L"Skeleton",FNAME_Add);
  FVar32.ComparisonIndex.Value = 0;
  FVar32.Number = 0;
  FVar23 = *pFVar11;
  local_a48 = (void *)0x0;
  local_a40 = 0;
  local_a38 = (void *)0x0;
  local_a30 = 0;
  local_a28 = (FSoftObjectPath *)0x0;
  local_a20 = 0;
  local_a18 = (void *)0x0;
  local_a10 = 0;
  local_a08.Data = (FScriptContainerElement *)0x0;
  local_a00 = 0;
  local_9f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f8.Data.ArrayNum = 0;
  local_9f8.Data.ArrayMax = 0;
  local_9f8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  iVar10 = 0;
  local_9f8.AllocationFlags.NumBits = 0;
  local_9f8.AllocationFlags.MaxBits = 0x80;
  local_9f8.FirstFreeIndex = -1;
  local_9f8.NumFreeIndices = 0;
  local_9b8.Data = (FScriptContainerElement *)0x0;
  local_9b0 = 0;
  local_9a8._0_8_ = 0;
  local_9a8._8_8_ = 0;
  local_9a8._32_8_ = 0;
  local_9a8._40_4_ = 0;
  local_9a8._44_4_ = 0x80;
  local_9a8._48_4_ = 0xffffffff;
  local_9a8._52_4_ = 0;
  local_968 = (void *)0x0;
  local_960 = 0;
  local_958._0_8_ = 0;
  local_958._8_8_ = 0;
  local_958._32_8_ = 0;
  local_958._40_4_ = 0;
  local_958._44_4_ = 0x80;
  local_958._48_4_ = 0xffffffff;
  local_958._52_4_ = 0;
  local_918 = (void *)0x0;
  local_910 = 0;
  local_908 = 0;
  local_906 = 0;
  local_904 = 0;
  pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  UStruct::GetStructPathName((UStruct *)pUVar12,&local_b70);
  if (((local_a08.Data <= &local_b70) &&
      (&local_b70 < (FTopLevelAssetPath *)(local_a08.Data + (longlong)local_a00._4_4_ * 0x10))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar13 = (USkeletalMesh *)(*pcVar3)();
    return pUVar13;
  }
  iVar6 = (int)local_a00;
  if ((int)local_a00 == local_a00._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_a08,(int *)((longlong)&local_a00 + 4));
  }
  local_a00 = CONCAT44(local_a00._4_4_,iVar6 + 1);
  *(FName *)(local_a08.Data + (longlong)iVar6 * 0x10) = local_b70.PackageName;
  ((FName *)(local_a08.Data + (longlong)iVar6 * 0x10))[1] = local_b70.AssetName;
  pFVar14 = FAssetData::FAssetData(&local_8f8,(UObject *)param_1,None);
  local_bb0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bb0.Data.ArrayNum = 0;
  local_bb0.Data.ArrayMax = 0;
  ::FString::Reset(&local_bb0,0);
  pFVar15 = FTopLevelAssetPath::ToString(&pFVar14->AssetClassPath,&local_ac8);
  iVar6 = (pFVar15->Data).ArrayNum;
  iVar29 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar29 = iVar10;
  }
  ::FString::AppendChars(&local_bb0,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,iVar29);
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&local_bb0,L'\'');
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.End = local_52;
  if ((pFVar14->PackageName != (FName)0x0) && (pFVar14->AssetName != (FName)0x0)) {
    ::FName::AppendString(&pFVar14->PackageName,&local_888);
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'.';
    local_888.CurPos = local_888.CurPos + 1;
    ::FName::AppendString(&pFVar14->AssetName,&local_888);
  }
  pFVar11 = (FName *)::FString::ConstructFromPtrSize
                               (&local_ab8,local_888.Base,
                                (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
  FVar26 = FVar32;
  uVar9 = 0;
  if (local_aa8 != pFVar11) {
    FVar26 = *pFVar11;
    pFVar11->ComparisonIndex = 0;
    pFVar11->Number = 0;
    uVar9 = pFVar11[1].ComparisonIndex.Value;
    pFVar11[1].ComparisonIndex = 0;
    pFVar11[1].Number = 0;
  }
  if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  iVar6 = uVar9 - 1;
  if (uVar9 == 0) {
    iVar6 = iVar10;
  }
  ::FString::AppendChars(&local_bb0,(wchar_t *)FVar26,iVar6);
  if (FVar26 != (FName)0x0) {
    FMemory::Free((void *)FVar26);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  ::FString::AppendChar(&local_bb0,L'\'');
  FVar26 = (FName)local_bb0.Data.AllocatorInstance;
  iVar29 = local_bb0.Data.ArrayMax;
  iVar6 = local_bb0.Data.ArrayNum;
  local_bb0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bb0.Data.ArrayNum = 0;
  local_bb0.Data.ArrayMax = 0;
  if ((iVar29 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar13 = (USkeletalMesh *)(*pcVar3)();
    return pUVar13;
  }
  if (local_9f8.NumFreeIndices == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&local_9f8,&local_9f8.Data.ArrayNum,
                       &local_9f8.Data.ArrayMax);
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_9f8.AllocationFlags,1);
    FVar30 = (ForElementType<unsigned_int>)&local_9f8.AllocationFlags;
    if (local_9f8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_9f8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar9 = iVar8 >> 0x1f & 0x1f;
    iVar8 = iVar8 + uVar9;
    puVar1 = (uint *)((longlong)FVar30 + (longlong)(iVar8 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar8 & 0x1f) - (char)uVar9 & 0x1f));
    iVar8 = local_9f8.FirstFreeIndex;
  }
  else {
    local_9f8.NumFreeIndices = local_9f8.NumFreeIndices + -1;
    iVar8 = *(int *)(local_9f8.Data.AllocatorInstance.Data +
                    (longlong)local_9f8.FirstFreeIndex * 0x20 + 4);
    iVar7 = local_9f8.FirstFreeIndex;
    if (local_9f8.NumFreeIndices != 0) {
      *(undefined4 *)(local_9f8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x20) = 0xffffffff;
    }
  }
  local_9f8.FirstFreeIndex = iVar8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_9f8,&local_b30,iVar7);
  FVar27 = FVar32;
  if ((FName)local_b30.Pointer != (FName)0x0) {
    *(FName *)local_b30.Pointer = FVar23;
    ((FName *)((longlong)local_b30.Pointer + 8))->ComparisonIndex = 0;
    ((FName *)((longlong)local_b30.Pointer + 8))->Number = 0;
    (((FName *)((longlong)local_b30.Pointer + 0x10))->ComparisonIndex).Value = 0;
    *(uint *)((longlong)local_b30.Pointer + 0x14) = 0xffffffff;
    if (iVar29 != -1) {
      *(FName *)((longlong)local_b30.Pointer + 8) = FVar26;
      *(int *)((longlong)local_b30.Pointer + 0x14) = iVar29;
      *(int *)((longlong)local_b30.Pointer + 0x10) = iVar6;
      FVar26 = FVar32;
      iVar29 = iVar10;
    }
    *(undefined4 *)((longlong)local_b30.Pointer + 0x18) = 0xffffffff;
    FVar27 = (FName)local_b30.Pointer;
  }
  uVar2 = *(undefined8 *)FVar27;
  uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar22 = local_9f8.Data.ArrayNum - local_9f8.NumFreeIndices;
  uVar24 = 1;
  if (3 < uVar22) {
    uVar31 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar24 <= (int)local_9b0)) {
    uVar9 = local_9b0 - 1 & (int)((ulonglong)uVar2 >> 0x20) + uVar9;
    *(uint *)((longlong)FVar27 + 0x1c) = uVar9;
    FVar20.Data = local_9c0;
    if (local_9b8.Data != (FScriptContainerElement *)0x0) {
      FVar20.Data = local_9b8.Data;
    }
    lVar21 = (longlong)(int)(local_9b0 - 1 & uVar9);
    *(undefined4 *)((longlong)FVar27 + 0x18) = *(undefined4 *)(FVar20.Data + lVar21 * 4);
    *(int *)(FVar20.Data + lVar21 * 4) = local_b30.Index;
    goto LAB_14e5f2193;
  }
  local_9b0 = uVar24;
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9b8,0,0,4);
  }
  if (uVar24 != 0) {
    uVar9 = uVar24;
    if (uVar24 < 2) {
      if (local_9b8.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14e5f1f7e;
      }
    }
    else {
LAB_14e5f1f7e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9b8,0,uVar9,4);
    }
    if (0 < (int)uVar24) {
      uVar31 = (ulonglong)uVar24;
      FVar23 = FVar32;
      do {
        FVar20.Data = local_9c0;
        if (local_9b8.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_9b8.Data;
        }
        uVar16 = (ulonglong)FVar23 & (longlong)(int)uVar24 - 1U;
        FVar23 = (FName)((longlong)FVar23 + 1);
        *(undefined4 *)(FVar20.Data + uVar16 * 4) = 0xffffffff;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  if (local_9b0 != 0) {
    pTStack_b88 = &local_9f8.AllocationFlags;
    local_b90 = 0;
    uStack_b8c = 1;
    uStack_b7c = 0;
    if (local_9f8.AllocationFlags.NumBits != 0) {
      FVar30 = (ForElementType<unsigned_int>)&local_9f8.AllocationFlags;
      if (local_9f8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_9f8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar30;
      FVar23 = FVar32;
      FVar27 = FVar32;
      uVar22 = 0;
      while (uVar9 == 0) {
        FVar27.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value + 0x20;
        FVar27.Number = 0;
        FVar19 = FVar23.ComparisonIndex.Value;
        FVar23.ComparisonIndex.Value = FVar19.Value + 1;
        FVar23.Number = 0;
        uStack_b7c = (ulonglong)FVar27.ComparisonIndex.Value << 0x20;
        local_b90 = FVar23.ComparisonIndex.Value;
        if ((int)(local_9f8.AllocationFlags.NumBits + -1 +
                 (local_9f8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
            (int)FVar23.ComparisonIndex.Value) {
          uStack_b7c = CONCAT44(FVar27.ComparisonIndex.Value,local_9f8.AllocationFlags.NumBits);
          goto LAB_14e5f209f;
        }
        uVar22 = FVar27.ComparisonIndex.Value;
        uVar9 = *(uint *)((uchar *)((longlong)FVar30 + 4) + (longlong)(int)FVar19.Value * 4);
      }
      uStack_b8c = ~(uVar9 - 1) & uVar9;
      uVar31 = (ulonglong)uStack_b8c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar10 = (int)lVar21 + -1 + uVar22;
      if (local_9f8.AllocationFlags.NumBits < iVar10) {
        iVar10 = local_9f8.AllocationFlags.NumBits;
      }
      uStack_b7c._4_4_ = (int)((ulonglong)uStack_b7c >> 0x20);
      uStack_b7c = CONCAT44(uStack_b7c._4_4_,iVar10);
    }
LAB_14e5f209f:
    local_b80 = 0xffffffff;
    local_b60 = &local_9f8;
    local_b58._padding_ = CONCAT44(uStack_b8c,local_b90);
    local_b58.UnvisitedBitMask = 0xffffffff;
    local_b58.CurrentBitIndex = (int)uStack_b7c;
    local_b58.BaseBitIndex = uStack_b7c._4_4_;
    local_b58._28_4_ = uStack_b74;
    local_b58.Array = pTStack_b88;
    if ((int)uStack_b7c < local_9f8.AllocationFlags.NumBits) {
      do {
        iVar10 = local_b58.CurrentBitIndex;
        pFVar28 = (local_b60->Data).AllocatorInstance.Data +
                  (longlong)local_b58.CurrentBitIndex * 0x20;
        uVar2 = *(undefined8 *)pFVar28;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar9 = local_9b0 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(pFVar28 + 0x1c) = uVar9;
        FVar20.Data = local_9c0;
        if (local_9b8.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_9b8.Data;
        }
        lVar21 = (longlong)(int)(local_9b0 - 1 & uVar9);
        *(undefined4 *)(pFVar28 + 0x18) = *(undefined4 *)(FVar20.Data + lVar21 * 4);
        *(int *)(FVar20.Data + lVar21 * 4) = iVar10;
        local_b58.UnvisitedBitMask = local_b58.UnvisitedBitMask & ~local_b58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b58);
      } while (local_b58.CurrentBitIndex < (local_b58.Array)->NumBits);
    }
  }
LAB_14e5f2193:
  if ((iVar29 != -1) && (FVar26 != (FName)0x0)) {
    FMemory::Free((void *)FVar26);
  }
  if (local_bb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb0.Data.AllocatorInstance.Data);
  }
  if (local_8f8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_8f8.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_8f8.TagsAndValues);
  local_ba0 = (FAssetData *)0x0;
  local_b98 = 0;
  pIVar17 = FAssetRegistryModule::GetRegistry();
  (**(code **)((longlong)*pIVar17 + 0x50))(pIVar17,&local_a48,&local_ba0,1);
  uVar4 = _UNK_150631d98;
  uVar2 = ___xmm_00000000ffffffff0000008000000000;
  iVar10 = (int)local_b98;
  pFVar25 = local_ba0 + (int)local_b98;
  pFVar14 = local_ba0;
  while( true ) {
    if ((int)local_b98 != iVar10) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_bb8);
    }
    FVar23 = FVar32;
    if (pFVar14 == pFVar25) break;
    local_b20.Hash.InlineData[0] = '\0';
    local_b20.Hash.InlineData[1] = '\0';
    local_b20.Hash.InlineData[2] = '\0';
    local_b20.Hash.InlineData[3] = '\0';
    local_b20.Hash._padding_ = 0;
    local_b20._72_8_ = 0;
    local_b20.Elements._0_8_ = 0;
    local_b20.Elements._16_8_ = 0;
    local_b20.Elements._24_8_ = 0;
    local_b20.Elements._8_8_ = 0;
    local_b20.Elements._32_8_ = 0;
    local_b20.Elements._40_8_ = uVar2;
    local_b20.Elements._48_8_ = uVar4;
    local_b20.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar18 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_a98,&local_b20);
    FVar23 = (FName)FAssetData::FastGetAsset(pFVar14,true,pTVar18);
    local_b20._72_8_ = local_b20._72_8_ & 0xffffffff00000000;
    if (local_b20.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b20.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b20.Elements);
    if (FVar23 != (FName)0x0) {
      pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar6 = (int)pUVar12->_padding_;
      if ((iVar6 <= *(int *)(*(longlong *)((longlong)FVar23 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar23 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar12->_padding_)) break;
    }
    pFVar14 = pFVar14 + 1;
  }
  DestructItems<FAssetData,int>(local_ba0,(int)local_b98);
  if (local_ba0 != (FAssetData *)0x0) {
    FMemory::Free(local_ba0);
  }
  local_910 = 0;
  if (local_918 != (void *)0x0) {
    FMemory::Free(local_918);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_958);
  local_960 = 0;
  if (local_968 != (void *)0x0) {
    FMemory::Free(local_968);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_9a8);
  local_9b0 = 0;
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_9f8);
  if ((FTopLevelAssetPath *)local_a08.Data != (FTopLevelAssetPath *)0x0) {
    FMemory::Free(local_a08.Data);
  }
  if (local_a18 != (void *)0x0) {
    FMemory::Free(local_a18);
  }
  DestructItems<FSoftObjectPath,int>(local_a28,(int)local_a20);
  if (local_a28 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_a28);
  }
  if (local_a38 != (void *)0x0) {
    FMemory::Free(local_a38);
  }
  if (local_a48 != (void *)0x0) {
    FMemory::Free(local_a48);
  }
  return (USkeletalMesh *)FVar23;
}

// GetAssociatedWorlds @ 14e5f3df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UWorld_*,TSizedDefaultAllocator<32>_> * __cdecl
FGLTFExporterUtilities::GetAssociatedWorlds
          (TArray<UWorld_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UPackage *this;
  FString *pFVar6;
  TArray<UWorld_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  UClass *pUVar10;
  wchar_t *pwVar11;
  FName *this_00;
  FName *pFVar12;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  FName *local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  FName local_e8;
  UWorld *local_e0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FName local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined2 local_58;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  size_t sVar9;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_100 = (FName *)0x0;
  local_f8 = 0;
  this = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_88,(UObject *)0x0);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_e8,pwVar11);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TArray<UWorld_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar7;
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_b8 = local_e8;
  local_a8 = 0;
  local_58 = 0;
  local_f0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  (**(code **)((longlong)*pIVar2 + 0xd8))(pIVar2,&local_b8,&local_100,7);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar3 = (int)local_f8;
  uVar8 = (ulonglong)(int)local_f8;
  pFVar12 = local_100 + uVar8 * 4;
  this_00 = local_100;
  do {
    if ((int)uVar8 != iVar3) {
      `TCheckedPointerIterator<FAssetIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (this_00 == pFVar12) {
      if (local_100 != (FName *)0x0) {
        FMemory::Free(local_100);
      }
      return __return_storage_ptr__;
    }
    ::FName::ToString(this_00,&local_c8);
    local_98 = (wchar_t *)0x0;
    iStack_90 = 0;
    if (local_c8.Data.ArrayNum == 0) {
      local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e5f3f71:
      sVar9 = wcslen((wchar_t *)local_d8);
      iVar5 = (int)sVar9;
    }
    else {
      local_d8 = local_c8.Data.AllocatorInstance.Data;
      iVar5 = 0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14e5f3f71;
    }
    iStack_d0 = iVar5;
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    local_78._12_4_ = uStack_8c;
    local_78.Size = iStack_90;
    local_68._12_4_ = uStack_cc;
    local_68.Size = iStack_d0;
    local_78.DataPtr = local_98;
    local_68.DataPtr = (wchar_t *)local_d8;
    local_e0 = (UWorld *)
               StaticLoadObject(pUVar10,(UObject *)0x0,&local_68,&local_78,2,(UPackageMap *)0x0,true
                                ,(FLinkerInstancingContext *)0x0);
    if (local_e0 != (UWorld *)0x0) {
      TArray<UWorld_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UWorld_*_const_&>
                (__return_storage_ptr__,&local_e0);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar8 = local_f8 & 0xffffffff;
    this_00 = this_00 + 4;
  } while( true );
}

// GetPreviewMesh @ 14e5fc150

USkeletalMesh * __cdecl FGLTFExporterUtilities::GetPreviewMesh(UAnimSequence *param_1)

{
  USkeleton *pUVar1;
  USkeletalMesh *pUVar2;
  
  pUVar2 = (USkeletalMesh *)(**(code **)(param_1->_padding_ + 0x20))(&param_1->_padding_);
  if ((pUVar2 == (USkeletalMesh *)0x0) &&
     (pUVar1 = (USkeleton *)param_1->_padding_, pUVar1 != (USkeleton *)0x0)) {
    pUVar2 = (USkeletalMesh *)(**(code **)(pUVar1->_padding_ + 0x20))(&pUVar1->_padding_);
    if (pUVar2 == (USkeletalMesh *)0x0) {
      pUVar2 = FindCompatibleMesh(pUVar1);
      return pUVar2;
    }
  }
  return pUVar2;
}

// GetPreviewMesh @ 14e5fc1a0

UStaticMesh * __cdecl FGLTFExporterUtilities::GetPreviewMesh(UMaterialInterface *param_1)

{
  UClass *pUVar1;
  UStaticMesh *pUVar2;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.DataPtr = L"/Engine/EditorMeshes/EditorSphere.EditorSphere";
      local_28.Size = 0;
      local_28._12_4_ = 0;
      local_28.DataPtr = (wchar_t *)0x0;
      local_18.Size = 0x2e;
      pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
      pUVar2 = (UStaticMesh *)
               StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                                (FLinkerInstancingContext *)0x0);
      if (pUVar2 == (UStaticMesh *)0x0) {
        local_28.Size = 0;
        local_28._12_4_ = 0;
        local_18.DataPtr = L"/Engine/BasicShapes/Sphere.Sphere";
        local_28.DataPtr = (wchar_t *)0x0;
        local_18.Size = 0x21;
        pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
        pUVar2 = (UStaticMesh *)
                 StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,
                                  true,(FLinkerInstancingContext *)0x0);
        if (pUVar2 == (UStaticMesh *)0x0) {
          local_28.Size = 0;
          local_28._12_4_ = 0;
          local_18.DataPtr = L"/Engine/EngineMeshes/Sphere.Sphere";
          local_28.DataPtr = (wchar_t *)0x0;
          local_18.Size = 0x22;
          pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
          pUVar2 = (UStaticMesh *)
                   StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,
                                    true,(FLinkerInstancingContext *)0x0);
        }
      }
      DefaultPreviewMesh = pUVar2;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return DefaultPreviewMesh;
}

// GetSelectedActors @ 14e5fe180

void __cdecl
FGLTFExporterUtilities::GetSelectedActors
          (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// GetSphereMesh @ 14e5fe570

UStaticMesh * __cdecl FGLTFExporterUtilities::GetSphereMesh(void)

{
  UClass *pUVar1;
  UStaticMesh *pUVar2;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x2e;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.DataPtr = L"/Engine/EditorMeshes/EditorSphere.EditorSphere";
  pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
  pUVar2 = (UStaticMesh *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar2 == (UStaticMesh *)0x0) {
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/Engine/BasicShapes/Sphere.Sphere";
    local_28.DataPtr = (wchar_t *)0x0;
    local_18.Size = 0x21;
    pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
    pUVar2 = (UStaticMesh *)
             StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if (pUVar2 == (UStaticMesh *)0x0) {
      local_28.Size = 0;
      local_28._12_4_ = 0;
      local_18.DataPtr = L"/Engine/EngineMeshes/Sphere.Sphere";
      local_28.DataPtr = (wchar_t *)0x0;
      local_18.Size = 0x22;
      pUVar1 = Z_Construct_UClass_UStaticMesh_NoRegister();
      pUVar2 = (UStaticMesh *)
               StaticLoadObject(pUVar1,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                                (FLinkerInstancingContext *)0x0);
    }
  }
  return pUVar2;
}

