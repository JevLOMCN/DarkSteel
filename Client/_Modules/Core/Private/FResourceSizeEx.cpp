// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FResourceSizeEx @ 141986c50

FResourceSizeEx * __thiscall FResourceSizeEx::FResourceSizeEx(FResourceSizeEx *this,Type param_1)

{
  this->ResourceSizeMode = param_1;
  *(undefined8 *)&this->DedicatedSystemMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->DedicatedVideoMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->UnknownMemoryBytesMap = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  return this;
}

// FResourceSizeEx @ 141986d00

FResourceSizeEx * __thiscall
FResourceSizeEx::FResourceSizeEx(FResourceSizeEx *this,Type param_1,ulong64 param_2,ulong64 param_3)

{
  FName local_res8;
  TPairInitializer<FName_&&,unsigned___int64_const_&> local_res10;
  ulong64 local_res20;
  FName *local_28;
  ulong64 **local_20;
  
  this->ResourceSizeMode = param_1;
  *(undefined8 *)&this->DedicatedSystemMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->DedicatedVideoMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->UnknownMemoryBytesMap = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  local_res10.Value = (ulong64 *)param_2;
  local_res20 = param_3;
  ::FName::FName(&local_res8,L"Untracked Memory");
  local_28 = &local_res8;
  local_20 = &local_res10.Value;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->DedicatedSystemMemoryBytesMap,&local_res10,(bool *)&local_28);
  ::FName::FName(&local_res8,L"Untracked Memory");
  local_28 = &local_res8;
  local_20 = (ulong64 **)&local_res20;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->DedicatedVideoMemoryBytesMap,&local_res10,(bool *)&local_28);
  return this;
}

// FResourceSizeEx @ 141986e50

FResourceSizeEx * __thiscall
FResourceSizeEx::FResourceSizeEx(FResourceSizeEx *this,Type param_1,ulong64 param_2)

{
  FName local_res8;
  TPairInitializer<FName_&&,unsigned___int64_const_&> local_res10;
  FName *local_18;
  ulong64 **local_10;
  
  this->ResourceSizeMode = param_1;
  *(undefined8 *)&this->DedicatedSystemMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->DedicatedVideoMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x0 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x34 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  local_res10.Value = (ulong64 *)param_2;
  ::FName::FName(&local_res8,L"Untracked Memory");
  local_18 = &local_res8;
  local_10 = &local_res10.Value;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->UnknownMemoryBytesMap,&local_res10,(bool *)&local_18);
  return this;
}

// FResourceSizeEx @ 141986f50

FResourceSizeEx * __thiscall FResourceSizeEx::FResourceSizeEx(FResourceSizeEx *this)

{
  this->ResourceSizeMode = Exclusive;
  *(undefined8 *)&this->DedicatedSystemMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DedicatedSystemMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->DedicatedVideoMemoryBytesMap = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DedicatedVideoMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  *(undefined8 *)&this->UnknownMemoryBytesMap = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x34 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnknownMemoryBytesMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  return this;
}

// ~FResourceSizeEx @ 141988190

void __thiscall FResourceSizeEx::~FResourceSizeEx(FResourceSizeEx *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UnknownMemoryBytesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnknownMemoryBytesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UnknownMemoryBytesMap);
  *(undefined4 *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DedicatedVideoMemoryBytesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DedicatedVideoMemoryBytesMap);
  *(undefined4 *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DedicatedSystemMemoryBytesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DedicatedSystemMemoryBytesMap);
  return;
}

// operator+= @ 141989490

FResourceSizeEx * __thiscall
FResourceSizeEx::operator+=(FResourceSizeEx *this,FResourceSizeEx *param_1)

{
  undefined1 *puVar1;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar2;
  FName *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  FName FVar8;
  code *pcVar9;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar10;
  bool bVar11;
  FResourceSizeEx *pFVar12;
  ulong64 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  ulonglong local_1a0;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_198;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if (this->ResourceSizeMode != param_1->ResourceSizeMode) {
    local_res18[0] = 0;
    `FResourceSizeEx::operator+='::__l2::<lambda_1>::operator()(local_res18);
  }
  iVar5 = *(int *)&(param_1->DedicatedSystemMemoryBytesMap).field_0x28;
  puVar1 = &(param_1->DedicatedSystemMemoryBytesMap).field_0x10;
  local_198 = &param_1->DedicatedSystemMemoryBytesMap;
  local_1a0 = 1;
  iStack_158 = 0;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(param_1->DedicatedSystemMemoryBytesMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uStack_154 = *puVar19;
    local_140 = 0;
    while (uStack_154 == 0) {
      lVar14 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_154 = 1;
      iStack_144 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14198955e;
      uStack_154 = puVar19[lVar14 + 1];
    }
    uStack_154 = -uStack_154 & uStack_154;
    uVar4 = (ulonglong)uStack_154 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_130 = (int)lVar14;
    iStack_144 = local_140 + -1 + local_130;
    if (iVar5 < iStack_144) {
      iStack_144 = iVar5;
    }
  }
LAB_14198955e:
  uStack_13c = local_6c;
  iStack_138 = *(int *)&(param_1->DedicatedSystemMemoryBytesMap).field_0x8 -
               *(int *)&(param_1->DedicatedSystemMemoryBytesMap).field_0x34;
  uVar17 = *(uint *)&(param_1->DedicatedSystemMemoryBytesMap).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_110._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_110.CurrentBitIndex = iStack_144;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_110._28_4_ = local_6c;
  TStack_110.BaseBitIndex = local_140;
  uStack_f0 = CONCAT44(uStack_134,iStack_138);
  local_160 = local_198;
  local_150 = puVar1;
  local_118 = local_198;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar12 = (FResourceSizeEx *)(*pcVar9)();
    return pFVar12;
  }
  pTVar2 = local_198;
  uVar6 = *(uint *)&(param_1->DedicatedSystemMemoryBytesMap).field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&(param_1->DedicatedSystemMemoryBytesMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141989670;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_12c = (int)lVar14;
    uVar17 = local_12c + -1 + uVar16;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_141989670:
  while( true ) {
    pTVar10 = local_118;
    if (*(int *)&local_118->field_0x8 - *(int *)&local_118->field_0x34 != (int)uStack_f0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_110.CurrentBitIndex == uVar17) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) break;
    lVar14 = *(longlong *)pTVar10;
    uVar7 = *(undefined8 *)(lVar14 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    pFVar3 = (FName *)(lVar14 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    FVar8 = pFVar3[1];
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    puVar13 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                          *)&this->DedicatedSystemMemoryBytesMap,
                         uVar16 + (int)((ulonglong)uVar7 >> 0x20),pFVar3);
    *puVar13 = *puVar13 + (longlong)FVar8;
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  iStack_188 = 0;
  local_170 = 0;
  puVar1 = &(param_1->DedicatedVideoMemoryBytesMap).field_0x10;
  iVar5 = *(int *)&(param_1->DedicatedVideoMemoryBytesMap).field_0x28;
  local_198 = &param_1->DedicatedVideoMemoryBytesMap;
  uStack_184 = (uint)local_1a0;
  iStack_174 = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(param_1->DedicatedVideoMemoryBytesMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    local_170 = 0;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_14198977d;
      uVar17 = puVar19[lVar14 + 1];
    }
    uStack_184 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_184 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_128 = (int)lVar14;
    iStack_174 = local_170 + -1 + local_128;
    if (iVar5 < iStack_174) {
      iStack_174 = iVar5;
    }
  }
LAB_14198977d:
  iStack_16c = local_4c;
  iStack_168 = *(int *)&(param_1->DedicatedVideoMemoryBytesMap).field_0x8 -
               *(int *)&(param_1->DedicatedVideoMemoryBytesMap).field_0x34;
  uVar17 = *(uint *)&(param_1->DedicatedVideoMemoryBytesMap).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_184,iStack_188);
  uStack_178 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_174;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_e0._28_4_ = local_4c;
  TStack_e0.BaseBitIndex = local_170;
  uStack_c0 = CONCAT44(uStack_164,iStack_168);
  local_190 = local_198;
  local_180 = puVar1;
  local_e8 = local_198;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar12 = (FResourceSizeEx *)(*pcVar9)();
    return pFVar12;
  }
  pTVar2 = local_198;
  uVar6 = *(uint *)&(param_1->DedicatedVideoMemoryBytesMap).field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&(param_1->DedicatedVideoMemoryBytesMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1419898a0;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_124 = (int)lVar14;
    uVar17 = local_124 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_1419898a0:
  while( true ) {
    pTVar10 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    if (((TStack_e0.CurrentBitIndex == uVar17) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    break;
    lVar14 = *(longlong *)pTVar10;
    uVar7 = *(undefined8 *)(lVar14 + (longlong)TStack_e0.CurrentBitIndex * 0x18);
    pFVar3 = (FName *)(lVar14 + (longlong)TStack_e0.CurrentBitIndex * 0x18);
    FVar8 = pFVar3[1];
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    puVar13 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                          *)&this->DedicatedVideoMemoryBytesMap,
                         uVar16 + (int)((ulonglong)uVar7 >> 0x20),pFVar3);
    *puVar13 = *puVar13 + (longlong)FVar8;
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  iStack_188 = 0;
  local_170 = 0;
  puVar1 = &(param_1->UnknownMemoryBytesMap).field_0x10;
  iVar5 = *(int *)&(param_1->UnknownMemoryBytesMap).field_0x28;
  pTVar2 = &param_1->UnknownMemoryBytesMap;
  iStack_174 = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(param_1->UnknownMemoryBytesMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1419899a0;
      uVar17 = puVar19[lVar14 + 1];
    }
    local_1a0 = (ulonglong)(-uVar17 & uVar17);
    uVar4 = local_1a0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_120 = (int)lVar14;
    iStack_174 = local_170 + -1 + local_120;
    if (iVar5 < iStack_174) {
      iStack_174 = iVar5;
    }
  }
LAB_1419899a0:
  uStack_184 = (uint)local_1a0;
  iStack_16c = iStack_144;
  iStack_168 = *(int *)&(param_1->UnknownMemoryBytesMap).field_0x8 -
               *(int *)&(param_1->UnknownMemoryBytesMap).field_0x34;
  uVar17 = *(uint *)&(param_1->UnknownMemoryBytesMap).field_0x28;
  uStack_178 = 0xffffffff;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_b0.CurrentBitIndex = iStack_174;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_b0._28_4_ = iStack_144;
  TStack_b0.BaseBitIndex = local_170;
  uStack_90 = CONCAT44(uStack_164,iStack_168);
  local_190 = pTVar2;
  local_180 = puVar1;
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar12 = (FResourceSizeEx *)(*pcVar9)();
    return pFVar12;
  }
  uVar6 = *(uint *)&(param_1->UnknownMemoryBytesMap).field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&(param_1->UnknownMemoryBytesMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141989ad0;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_141989ad0:
  while( true ) {
    pTVar10 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
    }
    if (((TStack_b0.CurrentBitIndex == uVar17) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    break;
    lVar14 = *(longlong *)pTVar10;
    uVar7 = *(undefined8 *)(lVar14 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    pFVar3 = (FName *)(lVar14 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    FVar8 = pFVar3[1];
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    puVar13 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                          *)&this->UnknownMemoryBytesMap,uVar16 + (int)((ulonglong)uVar7 >> 0x20),
                         pFVar3);
    *puVar13 = *puVar13 + (longlong)FVar8;
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return this;
}

// AddDedicatedSystemMemoryBytes @ 14198a730

FResourceSizeEx * __thiscall
FResourceSizeEx::AddDedicatedSystemMemoryBytes(FResourceSizeEx *this,FName *param_1,ulong64 param_2)

{
  FName FVar1;
  uint uVar2;
  ulong64 *puVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  puVar3 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)&this->DedicatedSystemMemoryBytesMap,uVar2 + FVar1.Number,param_1);
  *puVar3 = *puVar3 + param_2;
  return this;
}

// AddDedicatedSystemMemoryBytes @ 14198a790

FResourceSizeEx * __thiscall
FResourceSizeEx::AddDedicatedSystemMemoryBytes(FResourceSizeEx *this,ulong64 param_1)

{
  FName FVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_res8 [2];
  FName local_res10;
  FName *local_res18;
  
  ::FName::FName(&local_res10,L"Untracked Memory");
  FVar1 = local_res10;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 !=
      *(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DedicatedSystemMemoryBytesMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DedicatedSystemMemoryBytesMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x48 - 1U &
                              uVar2) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)&this->DedicatedSystemMemoryBytesMap + (longlong)iVar5 * 0x18;
        if (*(FName *)(*(longlong *)&this->DedicatedSystemMemoryBytesMap + (longlong)iVar5 * 0x18)
            == local_res10) {
          if (lVar3 != 0) goto LAB_14198a85c;
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->DedicatedSystemMemoryBytesMap,(uint)local_res8,
             (TKeyInitializer<FName_&&> *)(ulonglong)uVar2,(bool *)&local_res18);
  lVar3 = *(longlong *)&this->DedicatedSystemMemoryBytesMap + (longlong)local_res8[0] * 0x18;
LAB_14198a85c:
  *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + param_1;
  return this;
}

// AddDedicatedVideoMemoryBytes @ 14198a880

FResourceSizeEx * __thiscall
FResourceSizeEx::AddDedicatedVideoMemoryBytes(FResourceSizeEx *this,FName *param_1,ulong64 param_2)

{
  FName FVar1;
  uint uVar2;
  ulong64 *puVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  puVar3 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)&this->DedicatedVideoMemoryBytesMap,uVar2 + FVar1.Number,param_1);
  *puVar3 = *puVar3 + param_2;
  return this;
}

// AddDedicatedVideoMemoryBytes @ 14198a8e0

FResourceSizeEx * __thiscall
FResourceSizeEx::AddDedicatedVideoMemoryBytes(FResourceSizeEx *this,ulong64 param_1)

{
  FName FVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_res8 [2];
  FName local_res10;
  FName *local_res18;
  
  ::FName::FName(&local_res10,L"Untracked Memory");
  FVar1 = local_res10;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 !=
      *(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DedicatedVideoMemoryBytesMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DedicatedVideoMemoryBytesMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x48 - 1U & uVar2
                              ) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)&this->DedicatedVideoMemoryBytesMap + (longlong)iVar5 * 0x18;
        if (*(FName *)(*(longlong *)&this->DedicatedVideoMemoryBytesMap + (longlong)iVar5 * 0x18) ==
            local_res10) {
          if (lVar3 != 0) goto LAB_14198a9bc;
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->DedicatedVideoMemoryBytesMap,(uint)local_res8,
             (TKeyInitializer<FName_&&> *)(ulonglong)uVar2,(bool *)&local_res18);
  lVar3 = *(longlong *)&this->DedicatedVideoMemoryBytesMap + (longlong)local_res8[0] * 0x18;
LAB_14198a9bc:
  *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + param_1;
  return this;
}

// AddUnknownMemoryBytes @ 14198b240

FResourceSizeEx * __thiscall
FResourceSizeEx::AddUnknownMemoryBytes(FResourceSizeEx *this,FName *param_1,ulong64 param_2)

{
  FName FVar1;
  uint uVar2;
  ulong64 *puVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  puVar3 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)&this->UnknownMemoryBytesMap,uVar2 + FVar1.Number,param_1);
  *puVar3 = *puVar3 + param_2;
  return this;
}

// AddUnknownMemoryBytes @ 14198b2a0

FResourceSizeEx * __thiscall
FResourceSizeEx::AddUnknownMemoryBytes(FResourceSizeEx *this,ulong64 param_1)

{
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_res8 [2];
  FName local_res10;
  FName *local_res18;
  
  this_00 = &this->UnknownMemoryBytesMap;
  ::FName::FName(&local_res10,L"Untracked Memory");
  FVar1 = local_res10;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(this->UnknownMemoryBytesMap).field_0x8 !=
      *(int *)&(this->UnknownMemoryBytesMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->UnknownMemoryBytesMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->UnknownMemoryBytesMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->UnknownMemoryBytesMap).field_0x48 - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == local_res10) {
          if (lVar3 != 0) goto LAB_14198b37a;
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar2,
             (bool *)&local_res18);
  lVar3 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_14198b37a:
  *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + param_1;
  return this;
}

// GetDedicatedSystemMemoryBytes @ 141995110

ulong64 __thiscall FResourceSizeEx::GetDedicatedSystemMemoryBytes(FResourceSizeEx *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  uVar5 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->DedicatedSystemMemoryBytesMap,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_18._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    uVar5 = uVar5 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar5;
}

// GetDedicatedVideoMemoryBytes @ 1419951a0

ulong64 __thiscall FResourceSizeEx::GetDedicatedVideoMemoryBytes(FResourceSizeEx *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  uVar5 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->DedicatedVideoMemoryBytesMap,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_18._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    uVar5 = uVar5 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar5;
}

// GetResourceSizeMode @ 141995630

Type __thiscall FResourceSizeEx::GetResourceSizeMode(FResourceSizeEx *this)

{
  return this->ResourceSizeMode;
}

// GetTotalMemoryBytes @ 141995b40

ulong64 __thiscall FResourceSizeEx::GetTotalMemoryBytes(FResourceSizeEx *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_38;
  
  lVar6 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->DedicatedSystemMemoryBytesMap,&local_38);
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_38.AllocatorInstance.Data;
  lVar7 = lVar6;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_38._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    lVar7 = lVar7 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->DedicatedVideoMemoryBytesMap,&local_38);
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_38.AllocatorInstance.Data;
  lVar5 = lVar6;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_38._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    lVar5 = lVar5 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->UnknownMemoryBytesMap,&local_38);
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_38._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    lVar6 = lVar6 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return lVar6 + lVar5 + lVar7;
}

// GetUnknownMemoryBytes @ 141995dd0

ulong64 __thiscall FResourceSizeEx::GetUnknownMemoryBytes(FResourceSizeEx *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  uVar5 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
              *)&this->UnknownMemoryBytesMap,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar3 = local_18._8_8_ & 0xffffffff;
    }
    if (FVar4.Data == pFVar1) break;
    uVar5 = uVar5 + *(longlong *)FVar4.Data;
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar5;
}

// LogSummary @ 1419a1480

void __thiscall FResourceSizeEx::LogSummary(FResourceSizeEx *this,FOutputDevice *param_1)

{
  undefined1 *puVar1;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1f8 [8];
  ulonglong local_1f0;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  
  iVar4 = *(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x28;
  puVar1 = &(this->DedicatedSystemMemoryBytesMap).field_0x10;
  local_1f0 = 1;
  pTVar2 = &this->DedicatedSystemMemoryBytesMap;
  iStack_1b0 = 0;
  local_198 = 0;
  uStack_1ac = 1;
  iStack_19c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->DedicatedSystemMemoryBytesMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uStack_1ac = *puVar14;
    local_198 = 0;
    while (uStack_1ac == 0) {
      lVar9 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      uStack_1ac = 1;
      iStack_19c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_1419a153d;
      uStack_1ac = puVar14[lVar9 + 1];
    }
    uStack_1ac = -uStack_1ac & uStack_1ac;
    uVar3 = (ulonglong)uStack_1ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_188 = (int)lVar9;
    iStack_19c = local_198 + -1 + local_188;
    if (iVar4 < iStack_19c) {
      iStack_19c = iVar4;
    }
  }
LAB_1419a153d:
  uVar12 = *(uint *)&(this->DedicatedSystemMemoryBytesMap).field_0x28;
  iStack_190 = *(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x8 -
               *(int *)&(this->DedicatedSystemMemoryBytesMap).field_0x34;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_168._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  uStack_1a0 = 0xffffffff;
  TStack_168.CurrentBitIndex = iStack_19c;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_168._28_4_ = local_94;
  TStack_168.BaseBitIndex = local_198;
  uStack_148 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = pTVar2;
  local_1a8 = puVar1;
  local_170 = pTVar2;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->DedicatedSystemMemoryBytesMap).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->DedicatedSystemMemoryBytesMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1419a1660;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_184 = (int)lVar9;
    uVar12 = local_184 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_1419a1660:
  while( true ) {
    pTVar7 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_168.CurrentBitIndex == uVar12) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar7 + (longlong)TStack_168.CurrentBitIndex * 0x18),
                      &local_e0);
    FOutputDevice::LogfImpl(param_1,L"%140s %15.2f");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  iStack_1e0 = 0;
  local_1c8 = 0;
  puVar1 = &(this->DedicatedVideoMemoryBytesMap).field_0x10;
  iVar4 = *(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x28;
  pTVar2 = &this->DedicatedVideoMemoryBytesMap;
  uStack_1dc = (uint)local_1f0;
  iStack_1cc = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->DedicatedVideoMemoryBytesMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_1e0;
      local_1c8 = local_1c8 + 0x20;
      iStack_1e0 = iStack_1e0 + 1;
      iStack_1cc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e0) goto LAB_1419a17bd;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_1dc = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_1dc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_180 = (int)lVar9;
    iStack_1cc = local_1c8 + -1 + local_180;
    if (iVar4 < iStack_1cc) {
      iStack_1cc = iVar4;
    }
  }
LAB_1419a17bd:
  iStack_1c4 = local_74;
  iStack_1c0 = *(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x8 -
               *(int *)&(this->DedicatedVideoMemoryBytesMap).field_0x34;
  uVar12 = *(uint *)&(this->DedicatedVideoMemoryBytesMap).field_0x28;
  uStack_1d0 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
  TStack_138.CurrentBitIndex = iStack_1cc;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_138._28_4_ = local_74;
  TStack_138.BaseBitIndex = local_1c8;
  uStack_118 = CONCAT44(uStack_1bc,iStack_1c0);
  local_1e8 = pTVar2;
  local_1d8 = puVar1;
  local_140 = pTVar2;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->DedicatedVideoMemoryBytesMap).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->DedicatedVideoMemoryBytesMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1419a18e0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_17c = (int)lVar9;
    uVar12 = local_17c + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_1419a18e0:
  while( true ) {
    pTVar7 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_138.CurrentBitIndex == uVar12) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar7 + (longlong)TStack_138.CurrentBitIndex * 0x18),
                      &local_d0);
    FOutputDevice::LogfImpl(param_1,L"%140s %15.2f");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  iStack_1e0 = 0;
  local_1c8 = 0;
  puVar1 = &(this->UnknownMemoryBytesMap).field_0x10;
  iVar4 = *(int *)&(this->UnknownMemoryBytesMap).field_0x28;
  pTVar2 = &this->UnknownMemoryBytesMap;
  iStack_1cc = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->UnknownMemoryBytesMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_1e0;
      local_1c8 = local_1c8 + 0x20;
      iStack_1e0 = iStack_1e0 + 1;
      iStack_1cc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e0) goto LAB_1419a1a42;
      uVar12 = puVar14[lVar9 + 1];
    }
    local_1f0 = (ulonglong)(-uVar12 & uVar12);
    uVar3 = local_1f0 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_178 = (int)lVar9;
    iStack_1cc = local_1c8 + -1 + local_178;
    if (iVar4 < iStack_1cc) {
      iStack_1cc = iVar4;
    }
  }
LAB_1419a1a42:
  uVar12 = *(uint *)&(this->UnknownMemoryBytesMap).field_0x28;
  uStack_1dc = (uint)local_1f0;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_1c4 = iStack_19c;
  iStack_1c0 = *(int *)&(this->UnknownMemoryBytesMap).field_0x8 -
               *(int *)&(this->UnknownMemoryBytesMap).field_0x34;
  uStack_1d0 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
  TStack_108.CurrentBitIndex = iStack_1cc;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_108._28_4_ = iStack_19c;
  TStack_108.BaseBitIndex = local_1c8;
  uStack_e8 = CONCAT44(uStack_1bc,iStack_1c0);
  local_1e8 = pTVar2;
  local_1d8 = puVar1;
  local_110 = pTVar2;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->UnknownMemoryBytesMap).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->UnknownMemoryBytesMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1419a1b60;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_1419a1b60:
  while( true ) {
    pTVar7 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (((TStack_108.CurrentBitIndex == uVar12) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    ::FName::ToString((FName *)(*(longlong *)pTVar7 + (longlong)TStack_108.CurrentBitIndex * 0x18),
                      local_c0);
    FOutputDevice::LogfImpl(param_1,L"%140s %15.2f");
    if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  return;
}

// operator() @ 15047f250

bool __thiscall `FResourceSizeEx::operator+='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4743665746343624564>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4743665746343624564>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

