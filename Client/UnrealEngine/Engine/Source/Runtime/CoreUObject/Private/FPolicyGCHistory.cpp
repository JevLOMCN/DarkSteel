// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FPolicyGCHistory @ 1421b1c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FPolicyGCHistory * __thiscall
UE::ReferenceChainSearch::FPolicyGCHistory::FPolicyGCHistory
          (FPolicyGCHistory *this,FGCSnapshot *param_1,
          TMap<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>_>
          *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_res8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  FGCSnapshot *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  this->Snapshot = param_1;
  uVar9 = 0;
  *(undefined8 *)&this->ObjectInfoToVertex = 0;
  *(undefined8 *)&(this->ObjectInfoToVertex).field_0x8 = 0;
  uVar3 = 1;
  *(undefined8 *)&(this->ObjectInfoToVertex).field_0x20 = 0;
  this->AllNodes = param_2;
  uVar8 = 0;
  *(undefined4 *)&(this->ObjectInfoToVertex).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectInfoToVertex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectInfoToVertex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectInfoToVertex).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectInfoToVertex).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectInfoToVertex).field_0x48 = 0;
  this->NumVertexIndices = 0;
  uVar10 = *(int *)&(this->Snapshot->ObjectToInfoMap).field_0x8 + 1;
  if (uVar10 <= (uint)(*(int *)&(this->ObjectInfoToVertex).field_0x8 -
                      *(int *)&(this->ObjectInfoToVertex).field_0x34)) goto LAB_1421b1f27;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->ObjectInfoToVertex,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar5 = *(int *)&(this->ObjectInfoToVertex).field_0x48;
  if ((iVar5 != 0) && ((int)uVar11 <= iVar5)) goto LAB_1421b1f27;
  *(uint *)&(this->ObjectInfoToVertex).field_0x48 = uVar11;
  if (*(longlong *)&(this->ObjectInfoToVertex).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ObjectInfoToVertex).field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&(this->ObjectInfoToVertex).field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_1421b1d74;
      }
    }
    else {
LAB_1421b1d74:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ObjectInfoToVertex).field_0x40,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar12 = (ulonglong)uVar11;
      uVar7 = uVar9;
      do {
        puVar1 = *(undefined1 **)&(this->ObjectInfoToVertex).field_0x40;
        puVar6 = &(this->ObjectInfoToVertex).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar4 = (longlong)(int)uVar11 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&(this->ObjectInfoToVertex).field_0x48 != 0) {
    uVar10 = *(uint *)&(this->ObjectInfoToVertex).field_0x28;
    uStack_90 = (int *)&(this->ObjectInfoToVertex).field_0x10;
    local_98._0_4_ = 0;
    local_98._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    uVar7 = uVar9;
    if (uVar10 != 0) {
      puVar13 = *(uint **)&(this->ObjectInfoToVertex).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)uStack_90;
      }
      uVar11 = *puVar13;
      uVar12 = uVar9;
      while (uVar11 == 0) {
        uStack_80 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_80;
        iVar5 = (int)uVar7;
        local_98._0_4_ = iVar5 + 1;
        uVar7 = (ulonglong)(uint)local_98;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)(uint)local_98)
        goto LAB_1421b1e69;
        uVar11 = puVar13[(longlong)iVar5 + 1];
      }
      local_98._4_4_ = -uVar11 & uVar11;
      uVar7 = (ulonglong)local_98._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_88._4_4_ = (int)lVar2 + -1 + uStack_80;
      uVar7 = (ulonglong)local_88._4_4_;
      if ((int)uVar10 < (int)local_88._4_4_) {
LAB_1421b1e69:
        uVar7 = (ulonglong)uVar10;
        local_88._4_4_ = uVar10;
      }
    }
    local_88._0_4_ = 0xffffffff;
    local_68 = (FGCSnapshot *)&this->ObjectInfoToVertex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = local_88._4_4_;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = (uint)local_98;
    TStack_60._padding_._4_4_ = local_98._4_4_;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)uStack_90;
    if ((int)uVar7 < (int)uVar10) {
      do {
        iVar5 = (int)uVar7;
        lVar2 = *(longlong *)local_68 + (longlong)iVar5 * 0x18;
        uVar7 = *(ulonglong *)(*(longlong *)local_68 + (longlong)iVar5 * 0x18);
        uVar10 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = (uVar10 >> 0x10 ^ uVar10) & *(int *)&(this->ObjectInfoToVertex).field_0x48 - 1U;
        *(uint *)(lVar2 + 0x14) = uVar10;
        puVar1 = *(undefined1 **)&(this->ObjectInfoToVertex).field_0x40;
        puVar6 = &(this->ObjectInfoToVertex).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar7 = (longlong)*(int *)&(this->ObjectInfoToVertex).field_0x48 - 1U &
                (longlong)(int)uVar10;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = iVar5;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar7 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_1421b1f27:
  local_68 = this->Snapshot;
  uVar10 = *(uint *)&(local_68->ObjectToInfoMap).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_68->ObjectToInfoMap).field_0x10;
  local_78 = 0;
  uVar7 = uVar9;
  if (uVar10 != 0) {
    puVar13 = *(uint **)&(local_68->ObjectToInfoMap).field_0x20;
    uVar7 = (ulonglong)uVar10;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar13;
    uVar12 = uVar9;
    local_78 = 0;
    uVar8 = 0;
    while (uVar11 == 0) {
      iVar5 = (int)uVar9;
      local_78 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)local_78;
      uVar8 = iVar5 + 1;
      uVar9 = (ulonglong)uVar8;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
      goto LAB_1421b1f99;
      uVar11 = puVar13[(longlong)iVar5 + 1];
    }
    uVar3 = -uVar11 & uVar11;
    uVar9 = (ulonglong)uVar3 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = (local_78 - 1) + (int)lVar2;
    if ((int)uVar10 < (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar7 = (ulonglong)uVar11;
  }
LAB_1421b1f99:
  uStack_7c = (uint)uVar7;
  uStack_90 = (int *)CONCAT44(uVar3,uVar8);
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)uStack_90;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  if ((int)uStack_7c < (int)uVar10) {
    uStack_90 = local_res8;
    uStack_74 = uStack_7c;
    TStack_60.CurrentBitIndex = uStack_7c;
    local_88 = (undefined1 *)TStack_60.Array;
    do {
      local_res8[0] = (int)uVar7;
      local_98 = *(longlong *)&local_68->ObjectToInfoMap + ((longlong)local_res8[0] * 3 + 1) * 8;
      TSet<TTuple<FGCObjectInfo_*,int>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGCObjectInfo_*_const_&,int_const_&>_>
                ((TSet<TTuple<FGCObjectInfo_*,int>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>,FDefaultSetAllocator>
                  *)&this->ObjectInfoToVertex,
                 (TPairInitializer<FGCObjectInfo_*_const_&,int_const_&> *)(local_res8 + 2),
                 (bool *)&local_98);
      iVar5 = this->NumVertexIndices;
      if (this->NumVertexIndices < local_res8[0] + 1) {
        iVar5 = local_res8[0] + 1;
      }
      this->NumVertexIndices = iVar5;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar7 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return this;
}

// GatherReferenceInfo @ 1421ccad0

/* WARNING: Removing unreachable block (ram,0x0001421cd082) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::FPolicyGCHistory::GatherReferenceInfo
          (FPolicyGCHistory *this,
          TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
          *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FGCSnapshot *this_00;
  code *pcVar4;
  longlong *plVar5;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *pTVar6;
  bool bVar7;
  TTuple<UObject_const_*,FGCObjectInfo_*> *pTVar8;
  int *piVar9;
  TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*> *pTVar10;
  FName *pFVar11;
  FString *pFVar12;
  longlong lVar13;
  FName *this_01;
  FGCObjectInfo *pFVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint *puVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1b8;
  uint local_1b4;
  FReferenceToken local_1b0;
  int local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  longlong *local_150;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  longlong *local_138;
  int iStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  int local_a0 [6];
  int local_88 [4];
  FString local_78 [2];
  undefined4 local_4c;
  
  this_00 = this->Snapshot;
  pTVar8 = TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
                   *)this_00,(UObject *)FGCObject::GGCObjectReferencer);
  if (pTVar8 == (TTuple<UObject_const_*,FGCObjectInfo_*> *)0x0) {
    pFVar14 = (FGCObjectInfo *)0x0;
  }
  else {
    pFVar14 = *(FGCObjectInfo **)&pTVar8->field_0x8;
  }
  piVar9 = TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
           ::Find((TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
                   *)&this->ObjectInfoToVertex,pFVar14);
  if (((piVar9 == (int *)0x0) || (*piVar9 < 0)) ||
     (*(int *)&(this_00->ObjectToInfoMap).field_0x8 + 1 <= *piVar9)) {
    Logging::Private::BasicFatalLog
              (&`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyGCHistory::ObjectToVertex(FGCObjectInfo*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
  }
  local_1a8 = *piVar9;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar17 = *(int *)&param_1->field_0x28;
  iStack_188 = 0;
  local_170 = 0;
  uStack_184 = 1;
  iStack_174 = 0;
  if (iVar17 != 0) {
    puVar23 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)pTVar24;
    }
    uVar18 = *puVar23;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1421ccbde;
      uVar18 = puVar23[lVar13 + 1];
    }
    uStack_184 = -uVar18 & uVar18;
    uVar26 = (ulonglong)uStack_184 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_160 = (int)lVar13;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar17 < iStack_174) {
      iStack_174 = iVar17;
    }
  }
LAB_1421ccbde:
  uVar18 = *(uint *)&param_1->field_0x28;
  uStack_16c = local_4c;
  uVar16 = uVar18 & 0xffffffe0;
  iStack_168 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_d0._padding_ = CONCAT44(uStack_184,iStack_188);
  uStack_178 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_174;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_170;
  uStack_b0 = CONCAT44(uStack_164,iStack_168);
  local_190 = param_1;
  local_180 = (undefined1 *)pTVar24;
  local_140 = pTVar24;
  local_d8 = param_1;
  TStack_d0.Array = pTVar24;
  if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = *(uint *)&param_1->field_0x28;
  local_1b4 = uVar18;
  if (uVar18 != uVar19) {
    puVar21 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)pTVar24;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar19;
      local_1b4 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1421ccd10;
      uVar18 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar26 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_15c = (int)lVar13;
    uVar18 = local_15c + -1 + uVar16;
    local_1b4 = uVar18;
    if ((int)uVar19 < (int)uVar18) {
      uVar18 = uVar19;
      local_1b4 = uVar19;
    }
  }
LAB_1421ccd10:
  do {
    pTVar6 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar18) && (TStack_d0.Array == pTVar24)) &&
       (pTVar6 == param_1)) {
      return;
    }
    piVar9 = (int *)((longlong)TStack_d0.CurrentBitIndex * 0x60 + *(longlong *)pTVar6);
    uVar26 = (ulonglong)*piVar9;
    local_1b0.EncodedBits =
         *(ulonglong *)(*(longlong *)&this->Snapshot->ObjectToInfoMap + 8 + uVar26 * 0x18) | 4;
    local_198 = uVar26;
    pTVar10 = TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                      *)&this->Snapshot->DirectReferences,&local_1b0);
    if (pTVar10 ==
        (TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*> *)0x0) {
      plVar25 = (longlong *)0x0;
    }
    else {
      plVar25 = *(longlong **)&pTVar10->field_0x8;
    }
    local_1a0 = plVar25;
    if (plVar25 != (longlong *)0x0) {
      iVar17 = piVar9[0xc];
      local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar9 + 6);
      iStack_130 = 0;
      local_150 = (longlong *)(piVar9 + 2);
      local_118 = 0;
      uStack_12c = 1;
      iStack_11c = 0;
      if (iVar17 != 0) {
        pTVar24 = local_128;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar9 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar9 + 10);
        }
        uVar18 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
        while (uVar18 == 0) {
          lVar13 = (longlong)iStack_130;
          local_118 = local_118 + 0x20;
          iStack_130 = iStack_130 + 1;
          iStack_11c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
          goto LAB_1421cce2f;
          uVar18 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_12c = -uVar18 & uVar18;
        uVar2 = (ulonglong)uStack_12c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_158 = (int)lVar13;
        iStack_11c = local_118 + -1 + local_158;
        if (iVar17 < iStack_11c) {
          iStack_11c = iVar17;
        }
      }
LAB_1421cce2f:
      iStack_114 = iStack_174;
      iStack_110 = piVar9[4] - piVar9[0xf];
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar9 + 6);
      local_1b8 = piVar9[0xc];
      TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
      uStack_120 = 0xffffffff;
      TStack_100.CurrentBitIndex = iStack_11c;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      uVar18 = local_1b8 & 0xffffffe0;
      iVar15 = (int)local_1b8 >> 5;
      TStack_100._28_4_ = iStack_174;
      TStack_100.BaseBitIndex = local_118;
      uStack_e0 = CONCAT44(uStack_10c,iStack_110);
      local_148 = pTVar24;
      local_138 = local_150;
      local_108 = local_150;
      TStack_100.Array = local_128;
      if ((((int)local_1b8 < 0) || (iVar17 < (int)local_1b8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = piVar9[0xc];
      if (local_1b8 != uVar16) {
        pTVar22 = pTVar24;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar9 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar9 + 10);
        }
        uVar19 = -1 << ((byte)local_1b8 & 0x1f) &
                 *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
        while (uVar19 == 0) {
          lVar13 = (longlong)iVar15;
          uVar18 = uVar18 + 0x20;
          iVar15 = iVar15 + 1;
          local_1b8 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_1421ccf42;
          uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_154 = (int)lVar13;
        local_1b8 = local_154 + -1 + uVar18;
        if ((int)uVar16 < (int)local_1b8) {
          local_1b8 = uVar16;
        }
      }
LAB_1421ccf42:
      local_1b0.EncodedBits = (ulong64)local_1a8;
      while( true ) {
        plVar5 = local_108;
        if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_100.CurrentBitIndex == local_1b8) && (TStack_100.Array == pTVar24)) &&
           (uVar18 = local_1b4, plVar5 == local_150)) break;
        piVar9 = (int *)(*plVar5 + (longlong)TStack_100.CurrentBitIndex * 0x40);
        uVar2 = *(ulonglong *)
                 (*(longlong *)&this->Snapshot->ObjectToInfoMap + 8 + (longlong)*piVar9 * 0x18);
        this_01 = (FName *)*plVar25;
        pFVar11 = this_01 + (longlong)(int)plVar25[1] * 2;
        if (this_01 != pFVar11) {
          do {
            if (this_01[1] == (FName)(uVar2 | 4)) {
              if ((uVar26 == local_1b0.EncodedBits) || (iVar17 = 1, *this_01 == (FName)0x0)) {
                iVar17 = 2;
              }
              pFVar12 = ::FName::ToString(this_01,local_78);
              pFVar20 = (pFVar12->Data).AllocatorInstance.Data;
              (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar15 = (pFVar12->Data).ArrayNum;
              iVar3 = (pFVar12->Data).ArrayMax;
              (pFVar12->Data).ArrayNum = 0;
              (pFVar12->Data).ArrayMax = 0;
              *(ulonglong *)(piVar9 + 2) = uVar2;
              piVar1 = piVar9 + 4;
              if (piVar1 != local_a0) {
                if (*(void **)piVar1 != (void *)0x0) {
                  FMemory::Free(*(void **)piVar1);
                }
                piVar1[0] = 0;
                piVar1[1] = 0;
                piVar9[6] = 0;
                piVar9[7] = 0;
              }
              piVar9[8] = iVar17;
              piVar1 = piVar9 + 10;
              if (piVar1 != local_88) {
                if (*(void **)piVar1 != (void *)0x0) {
                  FMemory::Free(*(void **)piVar1);
                }
                *(FScriptContainerElement **)piVar1 = pFVar20;
                pFVar20 = (FScriptContainerElement *)0x0;
                piVar9[0xc] = iVar15;
                piVar9[0xd] = iVar3;
              }
              plVar25 = local_1a0;
              uVar26 = local_198;
              if (pFVar20 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar20);
                plVar25 = local_1a0;
                uVar26 = local_198;
              }
              break;
            }
            this_01 = this_01 + 2;
          } while (this_01 != pFVar11);
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        pTVar24 = local_148;
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    pTVar24 = local_140;
  } while( true );
}

// ObjectToVertex @ 1421d65f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::ReferenceChainSearch::FPolicyGCHistory::ObjectToVertex
          (FPolicyGCHistory *this,FGCObjectInfo *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
           ::Find((TMapBase<FGCObjectInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,int,0>_>
                   *)&this->ObjectInfoToVertex,param_1);
  if (((piVar2 != (int *)0x0) && (iVar1 = *piVar2, -1 < iVar1)) &&
     (iVar1 < *(int *)&(this->Snapshot->ObjectToInfoMap).field_0x8 + 1)) {
    return iVar1;
  }
  Logging::Private::BasicFatalLog
            (&`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyGCHistory::ObjectToVertex(FGCObjectInfo*___ptr64)const___ptr64'
              ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
  return *piVar2;
}

