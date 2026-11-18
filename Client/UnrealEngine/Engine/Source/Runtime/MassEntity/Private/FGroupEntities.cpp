// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FGroupEntities @ 1471d62d0

FGroupEntities * __thiscall UE::Mass::Command::FGroupEntities::FGroupEntities(FGroupEntities *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"GroupEntities");
  *(FName *)((longlong)&this->_padding_ + 4) = *pFVar1;
  *(undefined2 *)&this->_padding_ = 0x400;
  this->_padding_ = (longlong)&___7FGroupEntities_Command_Mass_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  return this;
}

// Run @ 14724a600

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Command::FGroupEntities::Run(FGroupEntities *this,FMassEntityManager *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FArchetypeGroupHandle _Src;
  code *pcVar5;
  TMap<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  TMap<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  FArchetypeGroupHandle *pFVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_108;
  FArchetypeGroupHandle local_f8;
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  TMap<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  TMap<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FMassEntityHandle *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  FMassArchetypeEntityCollection *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_48;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_UE::Mass::Command::FGroupEntities::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId38,"MassCommandGroupEntities_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeGroupCommands.h"
               ,0x26);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_UE::Mass::Command::FGroupEntities::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId38);
  }
  iVar3 = *(int *)&(this->Groups).field_0x28;
  puVar1 = &(this->Groups).field_0x10;
  iStack_d8 = 0;
  local_e0 = &this->Groups;
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Groups).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14724a6ef;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_d4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_c4 = local_c0 + -1 + (int)lVar9;
    if (iVar3 < iStack_c4) {
      iStack_c4 = iVar3;
    }
  }
LAB_14724a6ef:
  iStack_b8 = *(int *)&(this->Groups).field_0x8 - *(int *)&(this->Groups).field_0x34;
  uVar11 = *(uint *)&(this->Groups).field_0x28;
  uStack_c8 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uVar15 = uVar11 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = iStack_c4;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_a0._28_4_ = iStack_c4;
  TStack_a0.BaseBitIndex = local_c0;
  uStack_80 = CONCAT44(uStack_b4,iStack_b8);
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_b0 = local_e0;
  local_a8 = local_e0;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_b0;
  uVar4 = *(uint *)&(this->Groups).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Groups).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14724a800;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14724a800:
  while( true ) {
    pTVar7 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar11) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    pFVar10 = (FArchetypeGroupHandle *)
              ((longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    local_f8 = *pFVar10;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = pFVar10[2].GroupType.Identifier;
    lVar9 = (longlong)(int)local_e8;
    _Src = pFVar10[1];
    if (local_e8 == 0) {
      local_e4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_e8,0,&local_f0,local_e8,&local_e4);
      memcpy(local_f0.Data,(void *)_Src,lVar9 << 3);
    }
    uVar15 = local_e8;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_78 = (FMassEntityHandle *)local_f0.Data;
    if (((int)local_e8 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58._12_4_ = uStack_6c;
    local_58.ArrayNum = uVar15;
    local_58.DataPtr = local_78;
    uStack_70 = uVar15;
    Utils::CreateEntityCollections(param_1,&local_58,FoldDuplicates,&local_108);
    iVar3 = local_108.ArrayNum;
    local_68 = (FMassArchetypeEntityCollection *)local_108.AllocatorInstance.Data;
    if ((local_108.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_60 = iVar3;
    local_48._12_4_ = uStack_5c;
    local_48.ArrayNum = iVar3;
    local_48.DataPtr = local_68;
    FMassEntityManager::BatchGroupEntities(param_1,local_f8,&local_48);
    DestructItems<FMassArchetypeEntityCollection,int>
              ((FMassArchetypeEntityCollection *)local_108.AllocatorInstance.Data,local_108.ArrayNum
              );
    if ((FMassArchetypeEntityCollection *)local_108.AllocatorInstance.Data !=
        (FMassArchetypeEntityCollection *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

