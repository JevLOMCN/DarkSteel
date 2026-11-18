// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FindOrAddSorted @ 141e9d390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e9d489) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSetElementId __thiscall
UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
          (FChunkArrayRegistry *this,
          TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  ForElementType<int> FVar2;
  bool bVar3;
  int iVar4;
  FSetElementId FVar5;
  undefined4 extraout_var;
  ForElementType<int> FVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  ForElementType<int> in_R8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_64 [4];
  FChunkArrayRegistryEntry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar4 = *(int *)((longlong)in_R8 + 0x10);
  FVar7 = in_R8;
  if (*(ForElementType<int> *)((longlong)in_R8 + 8) != (ForElementType<int>)0x0) {
    FVar7 = *(ForElementType<int> *)((longlong)in_R8 + 8);
  }
  if (1 < iVar4) {
    FVar6 = FVar7;
    FVar2 = FVar7;
    while (FVar2 = (ForElementType<int>)((longlong)FVar2 + 4),
          FVar2 != (ForElementType<int>)((longlong)FVar7 + (longlong)iVar4 * 4)) {
      if ((*(int *)FVar6 != *(int *)FVar2) &&
         (FVar6 = (ForElementType<int>)((longlong)FVar6 + 4), FVar6 != FVar2)) {
        *(int *)FVar6 = *(int *)FVar2;
      }
    }
    iVar4 = (int)(((longlong)FVar6 - (longlong)FVar7) + 4 >> 2);
  }
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
            ((TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)in_R8,iVar4,
             Default);
  (param_1->AllocatorInstance).InlineData[0] = 0xff;
  (param_1->AllocatorInstance).InlineData[1] = 0xff;
  (param_1->AllocatorInstance).InlineData[2] = 0xff;
  (param_1->AllocatorInstance).InlineData[3] = 0xff;
  local_60.ChunkArray.ArrayNum = *(int *)((longlong)in_R8 + 0x10);
  if (local_60.ChunkArray.ArrayNum != 0) {
    FVar7 = *(ForElementType<int> *)((longlong)in_R8 + 8);
    if (FVar7 == (ForElementType<int>)0x0) {
      local_60.ChunkArray.AllocatorInstance.InlineData = *(uchar (*) [8])in_R8;
    }
    *(undefined8 *)((longlong)in_R8 + 8) = 0;
    uVar8 = 0;
    local_60.ChunkArray.AllocatorInstance.SecondaryData = FVar7;
    local_60.ChunkArray.ArrayMax = *(int *)((longlong)in_R8 + 0x14);
    *(undefined4 *)((longlong)in_R8 + 0x10) = 0;
    *(undefined4 *)((longlong)in_R8 + 0x14) = 2;
    if (FVar7 == (ForElementType<int>)0x0) {
      FVar7 = (ForElementType<int>)&local_60;
    }
    FVar2 = (ForElementType<int>)((longlong)FVar7 + (longlong)local_60.ChunkArray.ArrayNum * 4);
    for (; FVar7 != FVar2; FVar7 = (ForElementType<int>)((longlong)FVar7 + 4)) {
      uVar8 = uVar8 ^ uVar8 * 0x40 + -0x61c88647 + (uVar8 >> 2) + *(int *)FVar7;
    }
    SRWLock = &this->Lock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FSetElementId)iVar4;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    iVar4 = TSet<UE::AssetRegistry::FChunkArrayRegistryEntry,DefaultKeyFuncs<UE::AssetRegistry::FChunkArrayRegistryEntry,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::AssetRegistry::FChunkArrayRegistryEntry>
                      (&this->ChunkArrays,uVar8,&local_60);
    *(int *)(param_1->AllocatorInstance).InlineData = iVar4;
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if (*(int *)(param_1->AllocatorInstance).InlineData == -1) {
      if ((SRWLock == (FPlatformRWLock *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return (FSetElementId)iVar4;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      iVar4 = TSet<UE::AssetRegistry::FChunkArrayRegistryEntry,DefaultKeyFuncs<UE::AssetRegistry::FChunkArrayRegistryEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UE::AssetRegistry::FChunkArrayRegistryEntry>
                        (&this->ChunkArrays,uVar8,&local_60);
      *(int *)(param_1->AllocatorInstance).InlineData = iVar4;
      if (iVar4 == -1) {
        local_78 = 0;
        FVar5 = TSet<UE::AssetRegistry::FChunkArrayRegistryEntry,DefaultKeyFuncs<UE::AssetRegistry::FChunkArrayRegistryEntry,0>,FDefaultSetAllocator>
                ::EmplaceByHash<UE::AssetRegistry::FChunkArrayRegistryEntry>
                          (&this->ChunkArrays,(uint)local_64,
                           (FChunkArrayRegistryEntry *)(ulonglong)uVar8,(bool *)&local_60);
        *(undefined4 *)(param_1->AllocatorInstance).InlineData =
             *(undefined4 *)CONCAT44(extraout_var,FVar5.Index);
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
    }
    if (local_60.ChunkArray.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_60.ChunkArray.AllocatorInstance.SecondaryData);
    }
  }
  return (FSetElementId)(int)param_1;
}

// GetAllocatedSize @ 141e9f200

ulong64 __thiscall
UE::AssetRegistry::FChunkArrayRegistry::GetAllocatedSize(FChunkArrayRegistry *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulong64 uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar6 = (this->ChunkArrays).HashSize;
  if (uVar6 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)(int)uVar6 << 2;
  }
  puVar1 = &(this->ChunkArrays).Elements.field_0x10;
  iVar3 = *(int *)&(this->ChunkArrays).Elements.field_0x28;
  iVar12 = 0;
  iVar13 = 0;
  uVar6 = 1;
  uVar15 = (ulonglong)((*(int *)&(this->ChunkArrays).Elements.field_0x2c + 0x1fU >> 5) << 2) + lVar9
           + (longlong)*(int *)&(this->ChunkArrays).Elements.field_0xc * 0x20 + 0x58;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChunkArrays).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_141e9f2ce;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_141e9f2ce:
  uVar11 = *(uint *)&(this->ChunkArrays).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChunkArrays).Elements.field_0x8 -
                       *(int *)&(this->ChunkArrays).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return uVar15;
  }
  uVar6 = *(uint *)&(this->ChunkArrays).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar8 = *(undefined1 **)&(this->ChunkArrays).Elements.field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar8 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_141e9f3d0;
      uVar11 = *(uint *)(puVar8 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_141e9f3d0:
  while( true ) {
    if (*(int *)&(this->ChunkArrays).Elements.field_0x8 -
        *(int *)&(this->ChunkArrays).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UE::AssetRegistry::FChunkArrayRegistryEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar6 = *(uint *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 +
                     *(longlong *)&(this->ChunkArrays).Elements);
    if (uVar6 < 3) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)(int)uVar6 << 2;
    }
    uVar15 = uVar15 + lVar9;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar15;
}

