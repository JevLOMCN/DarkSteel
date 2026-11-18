// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 2

// StaticStruct @ 146c44770

UScriptStruct * __cdecl FLevelSequenceObjectReferenceMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap,
                         (UObject *)pUVar1,L"LevelSequenceObjectReferenceMap");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.OuterSingleton;
}

// Serialize @ 146c59f70

bool __thiscall
FLevelSequenceObjectReferenceMap::Serialize
          (FLevelSequenceObjectReferenceMap *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FLevelSequenceObjectReferenceMap *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  FGuid *pFVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<FGuid_const_&,FLevelSequenceLegacyObjectReference_const_&> local_res18;
  FGuid local_e8;
  FGuid local_d8;
  FString local_c8;
  FLevelSequenceObjectReferenceMap *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FLevelSequenceObjectReferenceMap *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FGuid *local_58;
  FGuid *local_50;
  
  local_res10[0] = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) {
      iVar3 = *(int *)&(this->Map).field_0x28;
      iStack_b0 = 0;
      uStack_ac = 1;
      puVar1 = &(this->Map).field_0x10;
      local_98 = 0;
      iStack_9c = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(this->Map).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)puVar1;
        }
        uVar13 = *puVar15;
        while (uVar13 == 0) {
          lVar10 = (longlong)iStack_b0;
          local_98 = local_98 + 0x20;
          iStack_b0 = iStack_b0 + 1;
          iStack_9c = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_146c5a11d;
          uVar13 = puVar15[lVar10 + 1];
        }
        uStack_ac = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_ac * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res18.Value._0_4_ = (int)lVar10;
        iStack_9c = local_98 + -1 + (int)local_res18.Value;
        if (iVar3 < iStack_9c) {
          iStack_9c = iVar3;
        }
      }
LAB_146c5a11d:
      uVar13 = *(uint *)&(this->Map).field_0x28;
      uVar16 = uVar13 & 0xffffffe0;
      iStack_90 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      uStack_a0 = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
      TStack_80.CurrentBitIndex = iStack_9c;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar13 >> 5;
      TStack_80._28_4_ = iStack_9c;
      TStack_80.BaseBitIndex = local_98;
      uStack_60 = CONCAT44(uStack_8c,iStack_90);
      local_b8 = this;
      local_a8 = puVar1;
      iStack_94 = iStack_9c;
      local_88 = this;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar4 = *(uint *)&(this->Map).field_0x28;
      if (uVar13 != uVar4) {
        puVar14 = *(undefined1 **)&(this->Map).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar11;
          uVar16 = uVar16 + 0x20;
          iVar11 = iVar11 + 1;
          uVar13 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_146c5a230;
          uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar13 = (int)lVar10 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar13) {
          uVar13 = uVar4;
        }
      }
LAB_146c5a230:
      while( true ) {
        pFVar7 = local_88;
        if (*(int *)&(local_88->Map).field_0x8 - *(int *)&(local_88->Map).field_0x34 !=
            (int)uStack_60) {
          `TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_80.CurrentBitIndex == uVar13) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this)
           ) break;
        pFVar12 = (FGuid *)(*(longlong *)&pFVar7->Map + (longlong)TStack_80.CurrentBitIndex * 0x38);
        ::operator<<(param_1,pFVar12);
        ::operator<<(param_1,pFVar12 + 1);
        ::operator<<(param_1,(FString *)(pFVar12 + 2));
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
  }
  else if (0 < (int)local_res10[0]) {
    local_58 = &local_e8;
    local_50 = &local_d8;
    do {
      local_res10[0] = local_res10[0] - 1;
      local_e8.A = 0;
      local_e8.B = 0;
      local_e8.C = 0;
      local_e8.D = 0;
      ::operator<<(param_1,&local_e8);
      local_d8.A = 0;
      local_d8.B = 0;
      local_d8.C = 0;
      local_d8.D = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_d8);
      ::operator<<(param_1,&local_c8);
      TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FLevelSequenceLegacyObjectReference_const_&>_>
                ((TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
                  *)this,&local_res18,(bool *)&local_58);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    } while (0 < (int)local_res10[0]);
  }
  return true;
}

