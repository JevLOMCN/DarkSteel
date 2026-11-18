// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 19

// FDeltaChunkEnumeration @ 143221ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDeltaChunkEnumeration * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::FDeltaChunkEnumeration
          (FDeltaChunkEnumeration *this,IManifestBuildStreamer *param_1,FStatsCollector *param_2,
          FBuildPatchAppManifest *param_3,uint param_4)

{
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FNumberFormattingOptions *pFVar12;
  FDeltaChunkEnumeration *pFVar13;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  undefined1 *puVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint uVar23;
  char *pcVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  undefined1 auStackY_258 [32];
  undefined1 local_228 [16];
  FGuid local_218;
  uint local_208;
  uint local_204;
  ulong64 local_200;
  undefined1 local_1f8 [24];
  undefined4 local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a0;
  undefined1 local_190 [8];
  uint local_188;
  uint local_184;
  undefined1 local_180 [8];
  FDeltaChunkEnumeration *local_178;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  initializer_list<unsigned_int> local_148;
  FGuid *local_138;
  undefined1 *local_130;
  FSparseArrayAllocationInfo local_128;
  FGuid *local_118;
  undefined1 *local_110;
  FNumberFormattingOptions local_108;
  undefined1 local_e8 [32];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  bool local_78 [40];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this->Streamer = param_1;
  this->_padding_ = (longlong)&___7FDeltaChunkEnumeration_BuildPatchServices__6B_;
  this->StatsCollector = param_2;
  local_178 = this;
  FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>(&this->ChunkSearcher,param_3);
  pFVar12 = FNumberFormattingOptions::FNumberFormattingOptions(&local_108);
  uVar28 = 1;
  pFVar12->MaximumFractionalDigits = 1;
  pFVar12->MinimumFractionalDigits = 1;
  pFVar12->RoundingMode = ToZero;
  bVar9 = pFVar12->UseGrouping;
  bVar4 = pFVar12->IndicateNearlyInteger;
  uVar5 = pFVar12->field_0x3;
  EVar6 = pFVar12->RoundingMode;
  iVar10 = pFVar12->MinimumIntegralDigits;
  iVar11 = pFVar12->MaximumIntegralDigits;
  (this->PercentFormat).AlwaysSign = pFVar12->AlwaysSign;
  (this->PercentFormat).UseGrouping = bVar9;
  (this->PercentFormat).IndicateNearlyInteger = bVar4;
  (this->PercentFormat).field_0x3 = uVar5;
  (this->PercentFormat).RoundingMode = EVar6;
  (this->PercentFormat).MinimumIntegralDigits = iVar10;
  (this->PercentFormat).MaximumIntegralDigits = iVar11;
  iVar10 = pFVar12->MinimumFractionalDigits;
  iVar11 = pFVar12->MaximumFractionalDigits;
  this->WindowSize = param_4;
  local_208 = param_4;
  local_148._First = &local_208;
  local_148._Last = &local_204;
  (this->PercentFormat).MinimumFractionalDigits = iVar10;
  (this->PercentFormat).MaximumFractionalDigits = iVar11;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
            (&this->UniqueWindowSizes,&local_148);
  *(undefined8 *)&(this->FilenameTable).Elements = 0;
  *(undefined8 *)&(this->FilenameTable).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FilenameTable).Elements.field_0x20 = 0;
  this_00 = &this->ChunkShaHashes;
  *(undefined4 *)&(this->FilenameTable).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FilenameTable).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FilenameTable).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilenameTable).Elements.field_0x34 = 0;
  (this->FilenameTable).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FilenameTable).HashSize = 0;
  *(undefined8 *)&(this->ShaTable).Elements = 0;
  *(undefined8 *)&(this->ShaTable).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ShaTable).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ShaTable).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ShaTable).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaTable).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaTable).Elements.field_0x34 = 0;
  (this->ShaTable).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ShaTable).HashSize = 0;
  this->bHasRan = false;
  *(undefined8 *)&this->ChunkInventory = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInventory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInventory).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkInventory).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInventory).field_0x48 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x0 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkShaHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkShaHashes).field_0x48 = 0;
  *(undefined8 *)&this->ChunkBuildReferences = 0;
  *(undefined8 *)&(this->ChunkBuildReferences).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkBuildReferences).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkBuildReferences).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x48 = 0;
  *(undefined8 *)&this->IdenticalChunks = 0;
  *(undefined8 *)&(this->IdenticalChunks).field_0x8 = 0;
  *(undefined8 *)&(this->IdenticalChunks).field_0x20 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x28 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdenticalChunks).field_0x34 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IdenticalChunks).field_0x40 = 0;
  *(undefined4 *)&(this->IdenticalChunks).field_0x48 = 0;
  uVar23 = this->WindowSize;
  local_218.C = 0;
  local_218.D = 0;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  local_218.A = 1;
  local_218.B = 0;
  local_78[0] = false;
  local_78[1] = false;
  local_78[2] = false;
  local_78[3] = false;
  local_78[4] = false;
  local_78[5] = false;
  local_78[6] = false;
  local_78[7] = false;
  local_78[8] = false;
  local_78[9] = false;
  local_78[10] = false;
  local_78[0xb] = false;
  local_78[0xc] = false;
  local_78[0xd] = false;
  local_78[0xe] = false;
  local_78[0xf] = false;
  local_78[0x10] = false;
  local_78[0x11] = false;
  local_78[0x12] = false;
  local_78[0x13] = false;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1d0,uVar23,Default);
  memset(local_1d0.AllocatorInstance.Data,0,(ulonglong)uVar23);
  FSHA1::HashBuffer(local_1d0.AllocatorInstance.Data,(ulonglong)uVar23,local_78);
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
            (&this->ShaTable,(FSHAHash *)local_228,local_78);
  uVar23 = this->WindowSize;
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1c0,uVar23,Default);
  memset(local_1c0.AllocatorInstance.Data,0,(ulonglong)uVar23);
  local_228._8_8_ =
       FRollingHash::GetHashForDataSet((uchar *)local_1c0.AllocatorInstance.Data,uVar23);
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  uVar8 = local_218._8_8_;
  uVar7 = local_218._0_8_;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_e8._16_4_ = 0xffffffff;
  local_e8._24_8_ = 0;
  uStack_98 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = ___xmm_00000000ffffffff0000008000000000;
  local_a0 = _UNK_150631d98;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x418,(ForAnyElementType *)local_e8,(int *)(local_e8 + 0xc));
  local_e8._8_4_ = iVar10 + 1;
  pFVar1 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)iVar10 * 0x18);
  uVar23 = 1;
  DefaultConstructItems<BuildPatchServices::FChunkPart,int>(pFVar1,1);
  *(undefined8 *)pFVar1 = uVar7;
  *(undefined8 *)(pFVar1 + 8) = uVar8;
  if (((int)local_e8._8_4_ < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FDeltaChunkEnumeration *)(*pcVar3)();
    return pFVar13;
  }
  *(undefined4 *)(local_e8._0_8_ + 0x10) = 0;
  uVar18 = this->WindowSize;
  if (((int)local_e8._8_4_ < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FDeltaChunkEnumeration *)(*pcVar3)();
    return pFVar13;
  }
  *(uint *)(local_e8._0_8_ + 0x14) = uVar18;
  local_80 = 0;
  pTVar14 = TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ChunkInventory,
                       SUB84(local_228._8_8_,4) * 0x17 + (int)local_228._8_8_,
                       (ulong64 *)(local_228 + 8));
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (pTVar14,(FGuid *)local_190,(bool *)&local_218);
  local_138 = &local_218;
  local_130 = local_228 + 8;
  TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->ChunkHashes,
             (TPairInitializer<FGuid_const_&,unsigned___int64_const_&> *)(local_190 + 4),
             (bool *)&local_138);
  iVar10 = *(int *)&(this->ChunkShaHashes).field_0x34;
  puVar22 = &(this->ChunkShaHashes).field_0x8;
  if (iVar10 == 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1c,4,1,(ForAnyElementType *)this_00,(int *)puVar22,
                        (int *)&(this->ChunkShaHashes).field_0xc);
    puVar17 = &(this->ChunkShaHashes).field_0x10;
    iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)puVar17,1);
    puVar26 = *(undefined1 **)&(this->ChunkShaHashes).field_0x20;
    uVar18 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar18;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar17;
    }
    *(uint *)(puVar26 + (longlong)(iVar10 >> 5) * 4) =
         *(uint *)(puVar26 + (longlong)(iVar10 >> 5) * 4) &
         ~(1 << (((byte)iVar10 & 0x1f) - (char)uVar18 & 0x1f));
  }
  else {
    iVar11 = *(int *)&(this->ChunkShaHashes).field_0x30;
    iVar10 = iVar10 + -1;
    iVar2 = *(int *)((longlong)iVar11 * 0x1c + 4 + *(longlong *)&this_00->field_0x0);
    *(int *)&(this->ChunkShaHashes).field_0x30 = iVar2;
    *(int *)&(this->ChunkShaHashes).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_128,iVar11);
  if (local_128.Pointer != (int *)0x0) {
    *(undefined8 *)local_128.Pointer = local_218._0_8_;
    *(undefined8 *)((longlong)local_128.Pointer + 8) = local_218._8_8_;
    *(undefined4 *)((longlong)local_128.Pointer + 0x10) = local_228._0_4_;
    *(int *)((longlong)local_128.Pointer + 0x14) = -1;
  }
  local_200 = CityHash64(local_128.Pointer,0x10);
  iVar10 = *(int *)puVar22;
  iVar11 = *(int *)&(this->ChunkShaHashes).field_0x34;
  pFVar13 = this;
  if ((iVar10 - iVar11 != 1) && (iVar10 != iVar11)) {
    puVar22 = *(undefined1 **)&(this->ChunkShaHashes).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->ChunkShaHashes).field_0x38;
    }
    iVar10 = *(int *)(puVar22 +
                     ((ulonglong)(*(int *)&(this->ChunkShaHashes).field_0x48 - 1) &
                     local_200 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      do {
        piVar19 = (int *)((longlong)iVar10 * 0x1c + *(longlong *)&this_00->field_0x0);
        if (((*(int *)((longlong)local_128.Pointer + 0xc) == piVar19[3] &&
             *(int *)((longlong)local_128.Pointer + 8) == piVar19[2]) &&
            *(int *)((longlong)local_128.Pointer + 4) == piVar19[1]) &&
            *(int *)local_128.Pointer == *piVar19) {
          if (iVar10 != -1) {
            memmove((void *)((longlong)iVar10 * 0x1c + *(longlong *)&this_00->field_0x0),
                    local_128.Pointer,0x14);
            TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_128.Index,1);
            goto LAB_14322236c;
          }
          break;
        }
        iVar10 = piVar19[5];
      } while (iVar10 != -1);
    }
  }
  uVar18 = *(int *)&(this->ChunkShaHashes).field_0x8 - *(int *)&(this->ChunkShaHashes).field_0x34;
  if (3 < uVar18) {
    uVar20 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_188 = (uint)lVar21;
    uVar23 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar23 <= *(int *)&(this->ChunkShaHashes).field_0x48)) {
    uVar23 = *(int *)&(this->ChunkShaHashes).field_0x48 - 1U & (uint)local_200;
    *(uint *)((longlong)local_128.Pointer + 0x18) = uVar23;
    puVar22 = *(undefined1 **)&(this->ChunkShaHashes).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->ChunkShaHashes).field_0x38;
    }
    uVar20 = (longlong)*(int *)&(this->ChunkShaHashes).field_0x48 - 1U & (longlong)(int)uVar23;
    *(int *)((longlong)local_128.Pointer + 0x14) = *(int *)(puVar22 + uVar20 * 4);
    *(int *)(puVar22 + uVar20 * 4) = local_128.Index;
    goto LAB_14322236c;
  }
  *(uint *)&(this->ChunkShaHashes).field_0x48 = uVar23;
  if (*(longlong *)&(this->ChunkShaHashes).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ChunkShaHashes).field_0x40,0,0,4);
  }
  if (uVar23 != 0) {
    uVar18 = uVar23;
    if (uVar23 < 2) {
      if (*(longlong *)&(this->ChunkShaHashes).field_0x40 != 0) {
        uVar18 = 0;
        goto LAB_143222183;
      }
    }
    else {
LAB_143222183:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ChunkShaHashes).field_0x40,0,uVar18,4);
    }
    if (0 < (int)uVar23) {
      uVar25 = (ulonglong)uVar23;
      uVar20 = 0;
      do {
        puVar22 = *(undefined1 **)&(this->ChunkShaHashes).field_0x40;
        puVar17 = &(this->ChunkShaHashes).field_0x38;
        if (puVar22 != (undefined1 *)0x0) {
          puVar17 = puVar22;
        }
        uVar15 = uVar20 & (longlong)(int)uVar23 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(puVar17 + uVar15 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (*(int *)&(this->ChunkShaHashes).field_0x48 != 0) {
    iVar10 = *(int *)&(this->ChunkShaHashes).field_0x28;
    local_1f8._16_8_ = &(this->ChunkShaHashes).field_0x10;
    local_1f8._12_4_ = 1;
    local_1f8._8_4_ = 0;
    iStack_1dc = 0;
    iStack_1d8 = 0;
    if (iVar10 != 0) {
      puVar27 = *(uint **)&(this->ChunkShaHashes).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)local_1f8._16_8_;
      }
      uVar23 = *puVar27;
      iStack_1d8 = 0;
      local_1f8._8_4_ = 0;
      while (uVar23 == 0) {
        iStack_1d8 = iStack_1d8 + 0x20;
        lVar21 = (longlong)(int)local_1f8._8_4_;
        local_1f8._8_4_ = local_1f8._8_4_ + 1;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1f8._8_4_)
        goto LAB_143222281;
        uVar23 = puVar27[lVar21 + 1];
      }
      local_1f8._12_4_ = -uVar23 & uVar23;
      uVar20 = (ulonglong)(uint)local_1f8._12_4_ * 2 + 1;
      lVar21 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_184 = (uint)lVar21;
      iStack_1dc = (local_184 - 1) + iStack_1d8;
      if (iVar10 < iStack_1dc) {
LAB_143222281:
        iStack_1dc = iVar10;
      }
    }
    local_1e0 = 0xffffffff;
    local_168._padding_ = CONCAT44(local_1f8._12_4_,local_1f8._8_4_);
    local_168.CurrentBitIndex = iStack_1dc;
    local_168.UnvisitedBitMask = 0xffffffff;
    local_168._28_4_ = uStack_1d4;
    local_168.BaseBitIndex = iStack_1d8;
    local_170 = this_00;
    local_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8._16_8_;
    if (iStack_1dc < iVar10) {
      iVar10 = iStack_1dc;
      do {
        pcVar24 = (char *)((longlong)iVar10 * 0x1c + *(longlong *)&local_170->field_0x0);
        uVar16 = CityHash64(pcVar24,0x10);
        uVar23 = *(int *)&(this->ChunkShaHashes).field_0x48 - 1U & (uint)uVar16;
        *(uint *)(pcVar24 + 0x18) = uVar23;
        puVar22 = *(undefined1 **)&(this->ChunkShaHashes).field_0x40;
        puVar17 = &(this->ChunkShaHashes).field_0x38;
        if (puVar22 != (undefined1 *)0x0) {
          puVar17 = puVar22;
        }
        uVar20 = (longlong)*(int *)&(this->ChunkShaHashes).field_0x48 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(pcVar24 + 0x14) = *(undefined4 *)(puVar17 + uVar20 * 4);
        *(int *)(puVar17 + uVar20 * 4) = iVar10;
        local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
        pFVar13 = local_178;
        iVar10 = local_168.CurrentBitIndex;
      } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
    }
  }
LAB_14322236c:
  TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
  ::
  Emplace<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
            ((TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
              *)&pFVar13->ChunkBuildReferences,&local_218,
             (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
              *)local_e8);
  while( true ) {
    uVar23 = pFVar13->WindowSize;
    local_218._8_8_ = CONCAT44(uVar28,local_218.C) & 0xffffffffff;
    local_78[0x24] = false;
    local_78[0x25] = false;
    local_78[0x26] = false;
    local_78[0x27] = false;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0x14] = false;
    local_78[0x15] = false;
    local_78[0x16] = false;
    local_78[0x17] = false;
    local_78[0x18] = false;
    local_78[0x19] = false;
    local_78[0x1a] = false;
    local_78[0x1b] = false;
    local_78[0x1c] = false;
    local_78[0x1d] = false;
    local_78[0x1e] = false;
    local_78[0x1f] = false;
    local_78[0x20] = false;
    local_78[0x21] = false;
    local_78[0x22] = false;
    local_78[0x23] = false;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1b0,uVar23,Default);
    memset(local_1b0.AllocatorInstance.Data,uVar28 & 0xff,(ulonglong)uVar23);
    FSHA1::HashBuffer(local_1b0.AllocatorInstance.Data,(ulonglong)uVar23,local_78 + 0x14);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
              (&pFVar13->ShaTable,(FSHAHash *)local_1f8,local_78 + 0x14);
    uVar23 = pFVar13->WindowSize;
    local_228._0_4_ = local_1f8._0_4_;
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1a0,uVar23,Default);
    memset(local_1a0.AllocatorInstance.Data,uVar28 & 0xff,(ulonglong)uVar23);
    uVar16 = FRollingHash::GetHashForDataSet((uchar *)local_1a0.AllocatorInstance.Data,uVar23);
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    uVar8 = local_218._8_8_;
    uVar7 = local_218._0_8_;
    local_228._8_8_ = uVar16;
    if (((int)local_e8._8_4_ < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    *(undefined8 *)local_e8._0_8_ = uVar7;
    *(undefined8 *)(local_e8._0_8_ + 8) = uVar8;
    pTVar14 = TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<unsigned___int64_const_&>
                        ((TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                          *)&pFVar13->ChunkInventory,
                         SUB84(local_228._8_8_,4) * 0x17 + (int)local_228._8_8_,
                         (ulong64 *)(local_228 + 8));
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (pTVar14,(FGuid *)local_180,(bool *)&local_218);
    local_118 = &local_218;
    local_110 = local_228 + 8;
    TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,unsigned___int64_const_&>_>
              ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
                *)&pFVar13->ChunkHashes,
               (TPairInitializer<FGuid_const_&,unsigned___int64_const_&> *)(local_180 + 4),
               (bool *)&local_118);
    TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
    ::Emplace<FGuid_const_&,FSetElementId_const_&>
              ((TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
                *)&pFVar13->ChunkShaHashes,&local_218,(FSetElementId *)local_228);
    TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
    ::
    Emplace<FGuid_const_&,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_const_&>
              ((TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
                *)&pFVar13->ChunkBuildReferences,&local_218,
               (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
                *)local_e8);
    uVar28 = uVar28 + 1;
    if (0xff < uVar28) {
      uStack_88 = uStack_88 & 0xffffffff00000000;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_e8 + 0x18));
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      return pFVar13;
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar13 = (FDeltaChunkEnumeration *)(*pcVar3)();
  return pFVar13;
}

// ~FDeltaChunkEnumeration @ 1432281b0

void __thiscall
BuildPatchServices::FDeltaChunkEnumeration::~FDeltaChunkEnumeration(FDeltaChunkEnumeration *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7FDeltaChunkEnumeration_BuildPatchServices__6B_;
  *(undefined4 *)&(this->IdenticalChunks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IdenticalChunks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdenticalChunks);
  *(undefined4 *)&(this->ChunkBuildReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkBuildReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkBuildReferences);
  *(undefined4 *)&(this->ChunkShaHashes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkShaHashes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FSetElementId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FSetElementId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FSetElementId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkShaHashes);
  *(undefined4 *)&(this->ChunkHashes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkHashes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkHashes);
  *(undefined4 *)&(this->ChunkInventory).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkInventory).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInventory);
  (this->ShaTable).HashSize = 0;
  FVar2 = (this->ShaTable).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ShaTable).Elements);
  (this->FilenameTable).HashSize = 0;
  FVar2 = (this->FilenameTable).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FilenameTable).Elements);
  (this->UniqueWindowSizes).HashSize = 0;
  FVar2 = (this->UniqueWindowSizes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UniqueWindowSizes).Elements);
  TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::
  ~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>
            (&(this->ChunkSearcher).FileLinkedList);
  this->_padding_ = (longlong)&___7IDeltaChunkEnumeration_BuildPatchServices__6B_;
  return;
}

// operator() @ 14322cfb0

void __thiscall
`BuildPatchServices::FDeltaChunkEnumeration::MakeChunk'::__l5::<lambda_1>::operator()
          (void *this,FBlockRange *param_1,TDoubleLinkedListNode *param_2,
          TDoubleLinkedListNode *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ulong64 uVar15;
  undefined4 *puVar16;
  TArrayView<FString_const_,int> *pTVar17;
  longlong lVar18;
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
  *pTVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  TArrayView<FString_const_,int> local_48;
  TArrayView<FString_const_,int> local_38;
  
  pFVar4 = *(FGuid **)((longlong)this + 8);
  lVar20 = *(longlong *)this;
  uVar15 = CityHash64((char *)pFVar4,0x10);
  iVar13 = TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     ((TSet<TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>,FDefaultSetAllocator>
                       *)(lVar20 + 0x250),(uint)uVar15,pFVar4);
  if ((iVar13 == -1) ||
     (lVar18 = (longlong)iVar13 * 0x88 + *(longlong *)(lVar20 + 0x250), lVar18 == 0)) {
    pTVar19 = TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
              ::EmplaceByHash<FGuid_const_&>
                        ((TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
                          *)(lVar20 + 0x250),(uint)uVar15,pFVar4);
  }
  else {
    pTVar19 = (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
               *)(lVar18 + 0x10);
  }
  if (param_1->Size == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Size > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                        ,0x11,L"Using GetFirst for a 0 size range is invalid.");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar15 = param_1->First;
  if ((param_3->Value).BuildRange.Size == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Size > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                        ,0x11,L"Using GetFirst for a 0 size range is invalid.");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar20 = uVar15 - (param_3->Value).BuildRange.First;
  if ((param_3->Value).BuildRange.Size == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Size > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                        ,0x17,L"Using GetLast for a 0 size range is invalid.");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar15 = (param_3->Value).BuildRange.First;
  uVar5 = (param_3->Value).BuildRange.Size;
  if (param_1->Size == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Size > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                        ,0x17,L"Using GetLast for a 0 size range is invalid.");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar6 = param_1->Size;
  uVar7 = param_1->First;
  iVar13 = (int)lVar20;
  if (*(int *)&pTVar19->field_0x8 == 0) {
    puVar16 = (undefined4 *)
              (**(code **)(**(longlong **)this + 0x48))
                        (*(longlong **)this,local_res8,(param_2->Value).Manifest);
    *(undefined4 *)&pTVar19->field_0x10 = *puVar16;
    pTVar17 = TArrayView<FString_const_,int>::
              TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                        (&local_38,&((param_2->Value).Manifest)->InstallTags);
    local_48.DataPtr = pTVar17->DataPtr;
    local_48.ArrayNum = pTVar17->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar17->field_0xc;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&pTVar19->field_0x18
               ,&local_48);
    if ((param_3->Value).BuildRange.Size == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid.");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar8 = (param_3->Value).BuildRange.First;
    if ((param_2->Value).BuildRange.Size == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid.");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(ulong64 *)&pTVar19->field_0x68 = (uVar8 - (param_2->Value).BuildRange.First) + lVar20;
  }
  uVar2 = (param_3->Value).ChunkPart.Size;
  iVar14 = *(int *)&pTVar19->field_0x8;
  uVar3 = (param_3->Value).ChunkPart.Offset;
  if (iVar14 == *(int *)&pTVar19->field_0xc) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pTVar19,(int *)&pTVar19->field_0xc);
  }
  lVar18 = (longlong)iVar14;
  *(int *)&pTVar19->field_0x8 = iVar14 + 1;
  uVar10 = *(undefined8 *)&(param_3->Value).ChunkPart.Guid;
  uVar11 = *(undefined8 *)&(param_3->Value).ChunkPart.Guid.C;
  lVar20 = *(longlong *)pTVar19;
  *(uint *)(lVar20 + 0x14 + lVar18 * 0x18) =
       uVar2 - (iVar13 + ((((int)uVar15 + (int)uVar5) - (int)uVar6) - (int)uVar7));
  puVar1 = (undefined8 *)(lVar20 + lVar18 * 0x18);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  *(uint *)(lVar20 + 0x10 + lVar18 * 0x18) = uVar3 + iVar13;
  return;
}

// GetChunkBuildReferences @ 1432546e0

TMap<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
* __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetChunkBuildReferences(FDeltaChunkEnumeration *this)

{
  return &this->ChunkBuildReferences;
}

// GetChunkHash @ 143254aa0

ulong64 * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetChunkHash
          (FDeltaChunkEnumeration *this,FGuid *param_1)

{
  ulong64 *puVar1;
  
  puVar1 = TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
           ::FindChecked((TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
                          *)&this->ChunkHashes,param_1);
  return puVar1;
}

// GetChunkInventory @ 143254b10

TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
* __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetChunkInventory(FDeltaChunkEnumeration *this)

{
  return &this->ChunkInventory;
}

// GetChunkShaHash @ 1432552d0

FSHAHash * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetChunkShaHash
          (FDeltaChunkEnumeration *this,FGuid *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FSetElementId *pFVar1;
  FSHAHash *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x70);
  pFVar1 = TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
           ::FindChecked((TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
                          *)&this->ChunkShaHashes,param_1);
                    /* WARNING: Could not recover jumptable at 0x000143255303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FSHAHash *)(*UNRECOVERED_JUMPTABLE)(this,pFVar1);
  return pFVar2;
}

// GetChunkShaHashes @ 143255370

TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_> *
__thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetChunkShaHashes(FDeltaChunkEnumeration *this)

{
  return &this->ChunkShaHashes;
}

// GetFilename @ 1432568d0

FString * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetFilename
          (FDeltaChunkEnumeration *this,FSetElementId *param_1)

{
  return (FString *)(*(longlong *)&(this->FilenameTable).Elements + (longlong)param_1->Index * 0x18)
  ;
}

// GetFilenameId @ 1432568f0

FSetElementId __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetFilenameId
          (FDeltaChunkEnumeration *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *in_R8;
  
  iVar1 = (in_R8->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->FilenameTable,uVar2,in_R8);
  *(int *)&(param_1->Data).AllocatorInstance.Data = iVar3;
  return (FSetElementId)(int)param_1;
}

// GetIdenticalChunks @ 143256fb0

TMap<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
* __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetIdenticalChunks(FDeltaChunkEnumeration *this)

{
  return &this->IdenticalChunks;
}

// GetSha @ 143257440

FSHAHash * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetSha
          (FDeltaChunkEnumeration *this,FSetElementId *param_1)

{
  return (FSHAHash *)((longlong)param_1->Index * 0x1c + *(longlong *)&(this->ShaTable).Elements);
}

// GetShaForDataSet @ 1432574e0

FSHAHash * __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetShaForDataSet
          (FDeltaChunkEnumeration *this,FSHAHash *__return_storage_ptr__,uchar *param_1,uint param_2
          )

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  FSHA1::HashBuffer(param_1,(ulonglong)param_2,__return_storage_ptr__->Hash);
  return __return_storage_ptr__;
}

// GetShaId @ 1432575f0

FSetElementId __thiscall
BuildPatchServices::FDeltaChunkEnumeration::GetShaId(FDeltaChunkEnumeration *this,FSHAHash *param_1)

{
  int iVar1;
  FSHAHash *in_R8;
  
  iVar1 = TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::FindIndexByHash<FSHAHash>
                    (&this->ShaTable,*(uint *)in_R8->Hash,in_R8);
  *(int *)param_1->Hash = iVar1;
  return (FSetElementId)(int)param_1;
}

// IsComplete @ 143258c60

bool __thiscall BuildPatchServices::FDeltaChunkEnumeration::IsComplete(FDeltaChunkEnumeration *this)

{
  return this->bHasRan;
}

// MakeChunk @ 14325a870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FDeltaChunkEnumeration::MakeChunk
          (FDeltaChunkEnumeration *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,FBlockStructure *param_3)

{
  FChunkSearcher *this_00;
  uint uVar1;
  uint uVar2;
  ulong64 uVar3;
  TDoubleLinkedListNode *pTVar4;
  code *pcVar5;
  FDeltaChunkEnumeration *pFVar6;
  bool bVar7;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_01;
  FSetElementId *pFVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  TDoubleLinkedListNode *pTVar11;
  TDoubleLinkedListNode *pTVar12;
  void *this_02;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  TDoubleLinkedListNode *pTVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  FBlockEntry *pFVar27;
  longlong lVar28;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  FBlockRange local_128;
  ulonglong *local_118;
  ulonglong *local_110;
  ulong64 local_108;
  TDoubleLinkedListNode *local_100;
  TDoubleLinkedListNode *local_f8;
  FGuid local_f0;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  FDeltaChunkEnumeration *local_b8;
  FGuid *local_b0;
  ulong64 *local_a8;
  FBlockRange local_a0;
  code *local_88;
  undefined **local_78;
  FDeltaChunkEnumeration *local_70;
  FGuid *local_68;
  undefined ***local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar1 = *param_2;
  uVar2 = this->WindowSize;
  uVar13 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar13 = ~uVar1 >> 0x1f;
  }
  local_b8 = this;
  if ((uVar13 == 0) &&
     (local_138 = (longlong)(int)uVar1, local_130 = (longlong)param_1->ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_108 = FRollingHash::GetHashForDataSet
                        ((uchar *)((param_1->AllocatorInstance).Data + (int)uVar1),uVar2);
  if (local_108 != 0) {
    FGuid::NewGuid(&local_f0);
    this_01 = TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<unsigned___int64_const_&>
                        ((TMapBase<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                          *)&this->ChunkInventory,(int)(local_108 >> 0x20) * 0x17 + (int)local_108,
                         &local_108);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (this_01,(FGuid *)local_e0,(bool *)&local_f0);
    local_b0 = &local_f0;
    local_a8 = &local_108;
    TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,unsigned___int64_const_&>_>
              ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
                *)&this->ChunkHashes,
               (TPairInitializer<FGuid_const_&,unsigned___int64_const_&> *)(local_e0 + 4),
               (bool *)&local_b0);
    uVar1 = *param_2;
    uVar2 = this->WindowSize;
    pcVar5 = *(code **)(this->_padding_ + 0x50);
    uVar13 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_138 = (longlong)(int)uVar1, local_130 = (longlong)param_1->ArrayNum,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FSHA1::HashBuffer((param_1->AllocatorInstance).Data + (int)uVar1,(ulonglong)uVar2,
                      (uchar *)&local_58);
    pFVar8 = (FSetElementId *)(*pcVar5)(this,local_d8,&local_58);
    TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
    ::Emplace<FGuid_const_&,FSetElementId>
              ((TMapBase<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
                *)&this->ChunkShaHashes,&local_f0,pFVar8);
    uVar24 = (ulonglong)this->WindowSize;
    puVar10 = (ulonglong *)0x0;
    pFVar27 = param_3->Head;
    uVar23 = (ulonglong)*param_2;
    uVar25 = 0;
    puVar26 = (ulonglong *)0x0;
    local_118 = (ulonglong *)0x0;
    local_110 = (ulonglong *)0x0;
    uVar9 = 0;
    local_c8 = uVar23;
    local_c0 = uVar24;
    if (pFVar27 != (FBlockEntry *)0x0) {
LAB_14325aa50:
      puVar22 = local_110;
      if (uVar25 < uVar24) {
        uVar19 = pFVar27->Size;
        local_d0 = uVar9 + uVar19;
        if (uVar23 < local_d0) {
          puVar15 = (ulonglong *)0x0;
          puVar14 = puVar15;
          if (local_110 < uVar23) {
            puVar14 = (ulonglong *)(uVar23 - (longlong)local_110);
          }
          uVar23 = pFVar27->Offset + (longlong)puVar14;
          uVar9 = uVar24 - uVar25;
          if (uVar19 - (longlong)puVar14 < uVar24 - uVar25) {
            uVar9 = uVar19 - (longlong)puVar14;
          }
          local_110 = puVar22;
          if (uVar9 != 0) {
            if (puVar10 == (ulonglong *)0x0) {
              local_118 = ::operator_new(0x20);
              if (local_118 == (ulonglong *)0x0) {
                local_118 = (ulonglong *)0x0;
              }
              else {
                *local_118 = uVar23;
                local_118[1] = uVar9;
                local_118[2] = 0;
                local_118[3] = 0;
              }
              uVar19 = pFVar27->Size;
              local_110 = puVar22;
              puVar10 = local_118;
              puVar26 = local_118;
            }
            else {
              puVar22 = puVar26;
              if (puVar26 != (ulonglong *)0x0) {
                do {
                  uVar24 = *puVar22;
                  uVar18 = puVar22[1] + uVar24;
                  if (uVar18 < uVar23) {
                    puVar10 = ::operator_new(0x20);
                    if (puVar10 != (ulonglong *)0x0) {
                      *puVar10 = uVar23;
                      puVar10[1] = uVar9;
                      puVar10[3] = 0;
                      puVar15 = puVar10;
                    }
                    puVar15[2] = (ulonglong)puVar22;
                    puVar15[3] = puVar22[3];
                    puVar14 = puVar15;
                    if (puVar22[3] != 0) {
                      *(ulonglong **)(puVar22[3] + 0x10) = puVar15;
                      puVar14 = puVar26;
                    }
                    puVar22[3] = (ulonglong)puVar15;
                    puVar10 = local_118;
                    puVar26 = puVar14;
                    goto LAB_14325ac5a;
                  }
                  puVar14 = (ulonglong *)puVar22[2];
                  uVar16 = uVar9 + uVar23;
                  if (uVar24 <= uVar16) {
                    if (uVar24 < uVar23) {
                      uVar23 = uVar24;
                    }
                    *puVar22 = uVar23;
                    if (uVar18 < uVar16) {
                      uVar18 = uVar16;
                    }
                    puVar22[1] = uVar18 - uVar23;
                    if (puVar14 != (ulonglong *)0x0) goto LAB_14325ab80;
                    goto LAB_14325ac5a;
                  }
                  puVar22 = puVar14;
                } while (puVar14 != (ulonglong *)0x0);
                puVar10 = ::operator_new(0x20);
                if (puVar10 != (ulonglong *)0x0) {
                  *puVar10 = uVar23;
                  puVar10[1] = uVar9;
                  puVar10[2] = 0;
                  puVar10[3] = 0;
                  puVar15 = puVar10;
                }
                puVar10 = local_118 + 2;
                puVar15[2] = local_118[2];
                puVar15[3] = (ulonglong)local_118;
                if (*puVar10 == 0) {
                  *puVar10 = (ulonglong)puVar15;
                  uVar19 = pFVar27->Size;
                  puVar10 = puVar15;
                  local_118 = puVar15;
                }
                else {
                  *(ulonglong **)(*puVar10 + 0x18) = puVar15;
                  *puVar10 = (ulonglong)puVar15;
                  uVar19 = pFVar27->Size;
                  puVar10 = local_118;
                }
              }
            }
          }
          goto LAB_14325ac9c;
        }
        goto LAB_14325acab;
      }
    }
LAB_14325acc0:
    pFVar6 = local_b8;
    if ((uVar25 != local_b8->WindowSize) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkStructureSize == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaEnumeration.cpp"
                           ,0x120,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`BuildPatchServices::FDeltaChunkEnumeration::MakeChunk'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    this_00 = &pFVar6->ChunkSearcher;
    local_70 = pFVar6;
    local_68 = &local_f0;
    local_110 = local_118;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`BuildPatchServices::FDeltaChunkEnumeration::MakeChunk'::__l5::<lambda_1>,void,BuildPatchServices::FBlockRange_const_&,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode_*,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode_*>
               ::Call;
    local_60 = (undefined ***)0x0;
    puVar10 = local_118;
    if (local_118 != (ulonglong *)0x0) {
      do {
        uVar9 = puVar10[1];
        uVar23 = *puVar10;
        local_128.First = uVar23;
        local_128.Size = uVar9;
        local_110 = puVar10;
        if (uVar9 != 0) {
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((uVar23 - 1) + uVar9 < uVar23) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x2f,L"Byte range has uint64 overflow."), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pTVar20 = (pFVar6->ChunkSearcher).CurrFile;
        if ((pTVar20 == (TDoubleLinkedListNode *)0x0) ||
           ((pFVar6->ChunkSearcher).CurrChunk == (TDoubleLinkedListNode *)0x0)) {
          pTVar20 = (pFVar6->ChunkSearcher).FileLinkedList.HeadNode;
          (pFVar6->ChunkSearcher).CurrFile = pTVar20;
          (pFVar6->ChunkSearcher).CurrChunk = (pTVar20->Value).ChunkParts.HeadNode;
        }
        pTVar11 = FChunkSearcher::
                  FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode>
                            (this_00,&this_00->FileLinkedList,pTVar20,&local_128);
        pTVar20 = (pFVar6->ChunkSearcher).CurrFile;
        if (pTVar20 != pTVar11) {
          (pFVar6->ChunkSearcher).CurrFile = pTVar11;
          (pFVar6->ChunkSearcher).CurrChunk = (pTVar11->Value).ChunkParts.HeadNode;
          pTVar20 = pTVar11;
        }
        if ((((pTVar20->Value).BuildRange.Size == 0) || (uVar9 == 0)) ||
           ((uVar23 - 1) + uVar9 < (pTVar20->Value).BuildRange.First)) {
LAB_14325ae6d:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrFile->GetValue().BuildRange.Overlaps(BlockRange)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                             ,0x9d,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar19 = (pTVar20->Value).BuildRange.Size;
          uVar3 = (pTVar20->Value).BuildRange.First;
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((uVar19 - 1) + uVar3 < uVar23) goto LAB_14325ae6d;
        }
        pTVar12 = FChunkSearcher::
                  FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode>
                            (this_00,&(((pFVar6->ChunkSearcher).CurrFile)->Value).ChunkParts,
                             (pFVar6->ChunkSearcher).CurrChunk,&local_128);
        (pFVar6->ChunkSearcher).CurrChunk = pTVar12;
        if ((((pTVar12->Value).BuildRange.Size == 0) || (uVar9 == 0)) ||
           ((uVar23 - 1) + uVar9 < (pTVar12->Value).BuildRange.First)) {
LAB_14325af16:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrChunk->GetValue().BuildRange.Overlaps(BlockRange)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                             ,0xa1,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar19 = (pTVar12->Value).BuildRange.Size;
          uVar3 = (pTVar12->Value).BuildRange.First;
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((uVar19 - 1) + uVar3 < uVar23) goto LAB_14325af16;
        }
        pTVar20 = (pFVar6->ChunkSearcher).CurrFile;
        if (pTVar20 != (TDoubleLinkedListNode *)0x0) {
          while ((((puVar10 = local_110,
                   (pFVar6->ChunkSearcher).CurrChunk != (TDoubleLinkedListNode *)0x0 &&
                   ((pTVar20->Value).BuildRange.Size != 0)) && (uVar9 != 0)) &&
                 ((pTVar20->Value).BuildRange.First <= (uVar23 - 1) + uVar9))) {
            uVar19 = (pTVar20->Value).BuildRange.First;
            uVar3 = (pTVar20->Value).BuildRange.Size;
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7))
            {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar10 = local_110;
            if ((((uVar19 - 1) + uVar3 < uVar23) ||
                (pTVar12 = (pFVar6->ChunkSearcher).CurrChunk, (pTVar12->Value).BuildRange.Size == 0)
                ) || ((uVar9 == 0 || ((uVar23 - 1) + uVar9 < (pTVar12->Value).BuildRange.First))))
            break;
            uVar19 = (pTVar12->Value).BuildRange.Size;
            uVar3 = (pTVar12->Value).BuildRange.First;
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7))
            {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar10 = local_110;
            if ((uVar19 - 1) + uVar3 < uVar23) break;
            pTVar12 = (pFVar6->ChunkSearcher).CurrChunk;
            pTVar4 = pTVar12->NextNode;
            if ((((pTVar12->Value).BuildRange.Size == 0) || (uVar9 == 0)) ||
               ((uVar23 - 1) + uVar9 < (pTVar12->Value).BuildRange.First)) {
LAB_14325b0a0:
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("RangeA.Overlaps(RangeB)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x3b,L"Invalid args, ranges must overlap.");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              uVar19 = (pTVar12->Value).BuildRange.First;
              uVar3 = (pTVar12->Value).BuildRange.Size;
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)
                 ) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((uVar19 - 1) + uVar3 < uVar23) goto LAB_14325b0a0;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((pTVar12->Value).BuildRange.Size == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = (pTVar12->Value).BuildRange.Size + (pTVar12->Value).BuildRange.First;
            lVar28 = uVar9 + uVar23;
            if (lVar21 - 1U < (uVar9 + uVar23) - 1) {
              lVar28 = lVar21;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7))
            {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((pTVar12->Value).BuildRange.Size == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7))
            {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar24 = uVar23;
            if (uVar23 < (pTVar12->Value).BuildRange.First) {
              uVar24 = (pTVar12->Value).BuildRange.First;
            }
            FBlockRange::FromFirstAndLast(&local_a0,uVar24,lVar28 - 1);
            local_100 = (pFVar6->ChunkSearcher).CurrChunk;
            local_f8 = (pFVar6->ChunkSearcher).CurrFile;
            UE::Core::Private::Function::CheckCallable(local_88);
            pcVar5 = local_88;
            pppuVar17 = &local_78;
            if (local_60 != (undefined ***)0x0) {
              pppuVar17 = local_60;
            }
            this_02 = (void *)(*(code *)(*pppuVar17)[1])();
            if (pcVar5 == UE::Core::Private::Function::
                          TFunctionRefCaller<`BuildPatchServices::FDeltaChunkEnumeration::MakeChunk'::__l5::<lambda_1>,void,BuildPatchServices::FBlockRange_const_&,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode_*,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode_*>
                          ::Call) {
              `BuildPatchServices::FDeltaChunkEnumeration::MakeChunk'::__l5::<lambda_1>::operator()
                        (this_02,&local_a0,local_f8,local_100);
            }
            else {
              (*pcVar5)(this_02,&local_a0,&local_f8,&local_100);
            }
            (pFVar6->ChunkSearcher).CurrChunk = pTVar4;
            if (pTVar4 == (TDoubleLinkedListNode *)0x0) {
              pTVar12 = (TDoubleLinkedListNode *)0x0;
              do {
                pTVar20 = (pFVar6->ChunkSearcher).CurrFile;
                if (pTVar20 == (TDoubleLinkedListNode *)0x0) break;
                pTVar20 = pTVar20->NextNode;
                (pFVar6->ChunkSearcher).CurrFile = pTVar20;
                if (pTVar20 != (TDoubleLinkedListNode *)0x0) {
                  pTVar12 = (pTVar20->Value).ChunkParts.HeadNode;
                  (pFVar6->ChunkSearcher).CurrChunk = pTVar12;
                }
              } while (pTVar12 == (TDoubleLinkedListNode *)0x0);
            }
            pTVar20 = (pFVar6->ChunkSearcher).CurrFile;
            puVar10 = local_110;
            if (pTVar20 == (TDoubleLinkedListNode *)0x0) break;
          }
        }
        puVar10 = (ulonglong *)puVar10[3];
      } while (puVar10 != (ulonglong *)0x0);
      local_110 = (ulonglong *)0x0;
    }
    puVar10 = local_118;
    if (local_88 != (code *)0x0) {
      pppuVar17 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar17 = local_60;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    while (puVar10 != (ulonglong *)0x0) {
      puVar26 = (ulonglong *)puVar10[3];
      puVar10[2] = 0;
      puVar10[3] = 0;
      ::operator_delete(puVar10,0x20);
      puVar10 = puVar26;
    }
  }
  return;
  while( true ) {
    if (uVar24 < uVar23) {
      uVar23 = uVar24;
    }
    *puVar22 = uVar23;
    uVar16 = uVar24 + puVar22[1];
    if (uVar24 + puVar22[1] < uVar18) {
      uVar16 = uVar18;
    }
    puVar22[1] = uVar16 - uVar23;
    puVar10 = (ulonglong *)puVar14[3];
    if (puVar14[2] != 0) {
      *(ulonglong **)(puVar14[2] + 0x18) = (ulonglong *)puVar14[3];
      puVar10 = local_118;
    }
    local_118 = puVar10;
    puVar10 = (ulonglong *)puVar14[2];
    if (puVar14[3] != 0) {
      *(ulonglong **)(puVar14[3] + 0x10) = puVar10;
      puVar10 = puVar26;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    ::operator_delete(puVar14,0x20);
    puVar14 = (ulonglong *)puVar22[2];
    puVar26 = puVar10;
    if (puVar14 == (ulonglong *)0x0) break;
LAB_14325ab80:
    uVar23 = *puVar14;
    uVar24 = *puVar22;
    uVar18 = puVar14[1] + uVar23;
    puVar10 = local_118;
    if (uVar18 < uVar24) goto LAB_14325ac5a;
  }
  uVar19 = pFVar27->Size;
  puVar10 = local_118;
LAB_14325ac9c:
  uVar25 = uVar25 + uVar9;
  uVar23 = local_c8;
  uVar24 = local_c0;
LAB_14325acab:
  pFVar27 = pFVar27->Next;
  local_110 = (ulonglong *)((longlong)local_110 + uVar19);
  uVar9 = local_d0;
  if (pFVar27 == (FBlockEntry *)0x0) goto LAB_14325acc0;
  goto LAB_14325aa50;
LAB_14325ac5a:
  uVar19 = pFVar27->Size;
  goto LAB_14325ac9c;
}

// MakeFilenameId @ 14325b340

FSetElementId __thiscall
BuildPatchServices::FDeltaChunkEnumeration::MakeFilenameId
          (FDeltaChunkEnumeration *this,FString *param_1)

{
  bool *in_R8;
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->FilenameTable,param_1,in_R8);
  return (FSetElementId)(int)param_1;
}

// MakeShaId @ 14325b840

FSetElementId __thiscall
BuildPatchServices::FDeltaChunkEnumeration::MakeShaId
          (FDeltaChunkEnumeration *this,FSHAHash *param_1)

{
  bool *in_R8;
  
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
            (&this->ShaTable,param_1,in_R8);
  return (FSetElementId)(int)param_1;
}

// Run @ 143263070

void __thiscall BuildPatchServices::FDeltaChunkEnumeration::Run(FDeltaChunkEnumeration *this)

{
  undefined1 *puVar1;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *pTVar2;
  FStatsCollector *pFVar3;
  code *pcVar4;
  FBlockEntry *pFVar5;
  undefined8 uVar6;
  double dVar7;
  ForAnyElementType _Dst;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *pTVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  ulong64 uVar16;
  FBlockEntry *pFVar17;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  bool *pbVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  int local_res20 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_188;
  ulonglong local_178;
  undefined8 local_170;
  LARGE_INTEGER local_168;
  FBlockStructure local_160;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  undefined1 local_13c [4];
  LARGE_INTEGER local_138;
  FBlockStructure *local_130;
  ulonglong *local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  FString local_88 [2];
  undefined4 local_5c;
  ulonglong uVar25;
  
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString(&local_a8,L"BuildA: Chunked data size");
  puVar14 = (ulonglong *)(*pcVar4)(pFVar3,&local_a8,1,0);
  local_128 = puVar14;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString(&local_98,L"BuildA: Chunking time");
  local_148 = (longlong *)(*pcVar4)(pFVar3,&local_98,0,0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar3 = this->StatsCollector;
  pcVar4 = *(code **)((longlong)*pFVar3 + 8);
  ::FString::FString(local_88,L"BuildA: Progress");
  plVar15 = (longlong *)(*pcVar4)(pFVar3,local_88,3,0);
  local_150 = plVar15;
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  local_130 = (FBlockStructure *)(**(code **)((longlong)*this->Streamer + 0x18))();
  uVar25 = 0;
  uVar29 = 0;
  uVar28 = uVar25;
  for (pFVar17 = local_130->Head; pFVar17 != (FBlockEntry *)0x0; pFVar17 = pFVar17->Next) {
    uVar28 = uVar28 + pFVar17->Size;
  }
  iVar30 = this->WindowSize * 0x20;
  local_178 = 0;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar24 = this->WindowSize * 0x21;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  local_res18 = iVar30;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  local_170 = 1;
  if (0 < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar24,&local_188.AllocatorInstance,0,&local_188.ArrayMax);
  }
  QueryPerformanceCounter(&local_138);
  local_168 = local_138;
  cVar9 = (**(code **)((longlong)*this->Streamer + 0x10))();
  dVar7 = __real_40c3880000000000;
  uVar24 = 0;
  uVar6 = 1;
  while (uVar13 = (uint)uVar6, cVar9 == '\0') {
    iVar18 = local_188.ArrayNum;
    uVar22 = local_188._8_8_ & 0xffffffff;
    uVar20 = iVar30 + local_188.ArrayNum;
    if (local_188.ArrayNum < (int)uVar20) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (uVar13,uVar13,iVar30,&local_188.AllocatorInstance,&local_188.ArrayNum,
                 &local_188.ArrayMax);
    }
    else {
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if ((int)uVar20 < local_188.ArrayNum) {
        uVar13 = local_188.ArrayNum - uVar20;
        if (((int)(uVar13 | uVar20) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar13 != 0) {
          iVar11 = (local_188.ArrayNum - uVar13) - uVar20;
          if (iVar11 != 0) {
            memmove(local_188.AllocatorInstance.Data + (int)uVar20,
                    local_188.AllocatorInstance.Data + (int)uVar20 + (int)uVar13,(longlong)iVar11);
          }
          local_188.ArrayNum = local_188.ArrayNum - uVar13;
        }
        uVar13 = (uint)local_170;
      }
    }
    iVar30 = (**(code **)((longlong)*this->Streamer + 8))
                       (this->Streamer,local_188.AllocatorInstance.Data + uVar22,iVar30,1);
    uVar20 = iVar18 + iVar30;
    if (local_188.ArrayNum < (int)uVar20) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (uVar13,uVar13,uVar20 - local_188.ArrayNum,&local_188.AllocatorInstance,
                 &local_188.ArrayNum,&local_188.ArrayMax);
      iVar18 = local_188.ArrayNum;
    }
    else {
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      iVar18 = local_188.ArrayNum;
      if ((int)uVar20 < local_188.ArrayNum) {
        uVar13 = local_188.ArrayNum - uVar20;
        if ((int)(uVar13 | uVar20) < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar18 = local_188.ArrayNum;
        }
        if (uVar13 != 0) {
          iVar11 = (iVar18 - uVar13) - uVar20;
          if (iVar11 != 0) {
            memmove(local_188.AllocatorInstance.Data + (int)uVar20,
                    local_188.AllocatorInstance.Data + (int)uVar20 + (int)uVar13,(longlong)iVar11);
            iVar18 = local_188.ArrayNum;
          }
          iVar18 = iVar18 - uVar13;
          local_188.ArrayNum = iVar18;
        }
      }
    }
    local_160.Head = (FBlockEntry *)0x0;
    local_160.Tail = (FBlockEntry *)0x0;
    uVar16 = FBlockStructure::SelectSerialBytes(local_130,local_178,(longlong)iVar18,&local_160);
    if (((iVar30 != local_res18) &&
        (cVar9 = (**(code **)((longlong)*this->Streamer + 0x10))(), cVar9 == '\0')) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SizeRead == StreamBufferReadSize || Streamer->IsEndOfData()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaEnumeration.cpp"
                            ,0xa7,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uVar16 != (longlong)local_188.ArrayNum) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StreamStructureSize == StreamBuffer.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaEnumeration.cpp"
                            ,0xa8,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar30 = local_188.ArrayNum - this->WindowSize;
    local_res10[0] = 0;
    if (-1 < iVar30) {
      do {
        MakeChunk(this,&local_188,(int *)local_res10,&local_160);
        local_res10[0] = this->WindowSize + local_res10[0];
      } while ((int)local_res10[0] <= iVar30);
    }
    uVar13 = local_res10[0];
    cVar9 = (**(code **)((longlong)*this->Streamer + 0x10))();
    if (cVar9 == '\0') {
LAB_1432634d6:
      uVar20 = local_188.ArrayNum;
      if (local_188.ArrayNum < (int)uVar13) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StreamBufferPosition <= StreamBuffer.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaEnumeration.cpp"
                            ,0xbf,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = local_188.ArrayNum;
      }
    }
    else {
      uVar13 = local_188.ArrayNum;
      local_res10[0] = local_188.ArrayNum;
      uVar20 = local_188.ArrayNum;
      if ((int)this->WindowSize <= local_188.ArrayNum) {
        local_res20[0] = local_188.ArrayNum - this->WindowSize;
        MakeChunk(this,&local_188,local_res20,&local_160);
        goto LAB_1432634d6;
      }
    }
    _Dst.Data = local_188.AllocatorInstance.Data;
    uVar23 = uVar20 - uVar13;
    local_178 = local_178 + (longlong)(int)uVar20;
    if (0 < (int)uVar23) {
      uVar12 = uVar24;
      if ((int)uVar13 < (int)uVar20) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(_Dst.Data,local_188.AllocatorInstance.Data + (int)uVar13,(longlong)(int)uVar23);
      uVar20 = local_188.ArrayNum;
    }
    uVar22 = local_178;
    if ((int)uVar20 < (int)uVar23) {
      iVar30 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         ((uint)local_170,(uint)local_170,uVar23 - uVar20,
                          &local_188.AllocatorInstance,&local_188.ArrayNum,&local_188.ArrayMax);
      memset(local_188.AllocatorInstance.Data + iVar30,0,(longlong)(int)(uVar23 - uVar20));
      uVar20 = local_188.ArrayNum;
    }
    else {
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if ((int)uVar23 < (int)uVar20) {
        uVar13 = uVar20 - uVar23;
        if ((int)(uVar13 | uVar23) < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar20 = local_188.ArrayNum;
        }
        if (uVar13 != 0) {
          iVar30 = (uVar20 - uVar23) - uVar13;
          if (iVar30 != 0) {
            memmove(local_188.AllocatorInstance.Data + (int)uVar23,
                    local_188.AllocatorInstance.Data + (int)uVar23 + (int)uVar13,(longlong)iVar30);
            uVar20 = local_188.ArrayNum;
          }
          uVar20 = uVar20 - uVar13;
          local_188.ArrayNum = uVar20;
        }
      }
    }
    puVar14 = local_128;
    plVar15 = local_150;
    local_178 = uVar22 - (longlong)(int)uVar20;
    LOCK();
    *local_150 = (longlong)(((double)local_178 / (double)uVar28) * dVar7);
    UNLOCK();
    LOCK();
    *local_128 = local_178;
    UNLOCK();
    QueryPerformanceCounter(&local_120);
    LOCK();
    *local_148 = *local_148 + (local_120.QuadPart - (longlong)local_168);
    UNLOCK();
    QueryPerformanceCounter(&local_118);
    local_168 = local_118;
    pFVar17 = local_160.Head;
    if (local_160.Head != (FBlockEntry *)0x0) {
      do {
        pFVar5 = pFVar17->Next;
        pFVar17->Prev = (FBlockEntry *)0x0;
        pFVar17->Next = (FBlockEntry *)0x0;
        local_160.Tail = pFVar5;
        ::operator_delete(pFVar17,0x20);
        pFVar17 = pFVar5;
      } while (pFVar5 != (FBlockEntry *)0x0);
      local_160.Head = (FBlockEntry *)0x0;
      plVar15 = local_150;
    }
    cVar9 = (**(code **)((longlong)*this->Streamer + 0x10))();
    iVar30 = local_res18;
    uVar6 = local_170;
  }
  puVar1 = &(this->ChunkShaHashes).field_0x10;
  LOCK();
  *plVar15 = 10000;
  UNLOCK();
  LOCK();
  *puVar14 = uVar28;
  UNLOCK();
  uVar20 = *(uint *)&(this->ChunkShaHashes).field_0x28;
  pTVar2 = &this->ChunkShaHashes;
  uStack_ec = uVar24;
  if (uVar20 != 0) {
    puVar27 = *(uint **)&(this->ChunkShaHashes).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar23 = *puVar27;
    uVar28 = uVar25;
    uVar24 = 0;
    uVar29 = 0;
    while (uVar23 == 0) {
      iVar30 = (int)uVar28;
      uVar24 = (int)uVar25 + 0x20;
      uVar25 = (ulonglong)uVar24;
      uVar29 = iVar30 + 1;
      uVar28 = (ulonglong)uVar29;
      uStack_ec = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
      goto LAB_1432637ef;
      uVar23 = puVar27[(longlong)iVar30 + 1];
    }
    uVar13 = -uVar23 & uVar23;
    uVar28 = (ulonglong)uVar13 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_140 = (int)lVar19;
    uStack_ec = local_140 + -1 + uVar24;
    if ((int)uVar20 < (int)uStack_ec) {
      uStack_ec = uVar20;
    }
  }
LAB_1432637ef:
  iStack_e0 = *(int *)&(this->ChunkShaHashes).field_0x8 - *(int *)&(this->ChunkShaHashes).field_0x34
  ;
  uVar20 = *(uint *)&(this->ChunkShaHashes).field_0x28;
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uVar13,uVar29);
  uVar23 = uVar20 & 0xffffffe0;
  TStack_d0.CurrentBitIndex = uStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar30 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_5c;
  TStack_d0.BaseBitIndex = uVar24;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = pTVar2;
  uStack_100 = uVar29;
  uStack_fc = uVar13;
  local_f8 = puVar1;
  local_e8 = uVar24;
  local_d8 = pTVar2;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar20 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar29 = *(uint *)&(this->ChunkShaHashes).field_0x28;
  if (uVar20 != uVar29) {
    puVar26 = *(undefined1 **)&(this->ChunkShaHashes).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    uVar24 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar30 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar30;
      uVar23 = uVar23 + 0x20;
      iVar30 = iVar30 + 1;
      uVar20 = uVar29;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
      goto LAB_1432638f0;
      uVar24 = *(uint *)(puVar26 + lVar19 * 4 + 4);
    }
    uVar28 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar20 = (int)lVar19 + -1 + uVar23;
    if ((int)uVar29 < (int)uVar20) {
      uVar20 = uVar29;
    }
  }
LAB_1432638f0:
  while( true ) {
    pTVar8 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FSetElementId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pbVar21 = (bool *)(*(longlong *)pTVar8 + (longlong)TStack_d0.CurrentBitIndex * 0x1c);
    this_00 = TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<FSetElementId_const_&>
                        ((TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                          *)&this->IdenticalChunks,*(uint *)(pbVar21 + 0x10),
                         (FSetElementId *)(pbVar21 + 0x10));
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (this_00,(FGuid *)local_13c,pbVar21);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  QueryPerformanceCounter(&local_110);
  LOCK();
  *local_148 = *local_148 + (local_110.QuadPart - (longlong)local_168);
  UNLOCK();
  this->bHasRan = true;
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return;
}

