// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Init @ 148e73a70

void __thiscall
FVariadicParameterGPUScriptInfo::Init
          (FVariadicParameterGPUScriptInfo *this,FNDIDataChannelCompiledData *param_1,
          FNiagaraDataSetCompiledData *param_2)

{
  int *piVar1;
  FNiagaraCompileHash *this_00;
  FNiagaraVariableBase *pFVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>_>
  *pTVar6;
  bool bVar7;
  uint *puVar8;
  FNiagaraVariableLayoutInfo *pFVar9;
  uint *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  FNiagaraVariableBase *pFVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  FNiagaraDataSetCompiledData *local_res18;
  undefined1 local_res20 [8];
  uint local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  TMap<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>_>
  *local_e8;
  TMap<FNiagaraCompileHash,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>_>
  *local_e0;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  TMap<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_e0 = &this->GPUScriptParameterTableOffsets;
  this->bDirty = true;
  local_res18 = param_2;
  TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
           *)local_e0);
  plVar16 = &(this->GPUScriptParameterOffsetTable)._padding_;
  uVar21 = param_1->TotalParams * 3;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  iVar3 = *(int *)((longlong)&(this->GPUScriptParameterOffsetTable)._padding_ + 4);
  piVar1 = (int *)((longlong)&(this->GPUScriptParameterOffsetTable)._padding_ + 4);
  iVar17 = 0;
  *(undefined4 *)&(this->GPUScriptParameterOffsetTable)._padding_ = 0;
  if (iVar3 < (int)uVar21) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar21,(ForAnyElementType *)plVar16,0,piVar1);
  }
  iVar3 = *(int *)&(param_1->GPUScriptParameterInfos).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->GPUScriptParameterInfos).field_0x10;
  local_e8 = &param_1->GPUScriptParameterInfos;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)&(param_1->GPUScriptParameterInfos).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)pTVar20;
    }
    uVar21 = *puVar8;
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar17;
      local_b0 = local_b0 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_b4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148e73b92;
      uVar21 = puVar8[lVar12 + 1];
    }
    uStack_c4 = -uVar21 & uVar21;
    uVar14 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f4 = (int)lVar12;
    iStack_b4 = local_f4 + -1 + local_b0;
    if (iVar3 < iStack_b4) {
      iStack_b4 = iVar3;
    }
  }
LAB_148e73b92:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(param_1->GPUScriptParameterInfos).field_0x8 -
              *(int *)&(param_1->GPUScriptParameterInfos).field_0x34;
  uVar21 = *(uint *)&(param_1->GPUScriptParameterInfos).field_0x28;
  TStack_98._padding_ = CONCAT44(uStack_c4,iVar17);
  uStack_b8 = 0xffffffff;
  uVar23 = uVar21 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar21 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_f8 = uVar21;
  local_d8 = pTVar20;
  local_d0 = local_e8;
  iStack_c8 = iVar17;
  local_c0 = (undefined1 *)pTVar20;
  local_a0 = local_e8;
  TStack_98.Array = pTVar20;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->GPUScriptParameterInfos).field_0x28;
  if (uVar21 != uVar4) {
    puVar19 = *(undefined1 **)&(param_1->GPUScriptParameterInfos).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)pTVar20;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar4;
      local_f8 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148e73cb0;
      uVar21 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f0 = (int)lVar12;
    uVar21 = local_f0 + -1 + uVar23;
    local_f8 = uVar21;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
      local_f8 = uVar4;
    }
  }
LAB_148e73cb0:
  do {
    pTVar6 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar21) && (TStack_98.Array == pTVar20)) &&
       (pTVar6 == local_e8)) {
      return;
    }
    this_00 = (FNiagaraCompileHash *)
              (*(longlong *)pTVar6 + (longlong)TStack_98.CurrentBitIndex * 0x28);
    lVar12 = (this->GPUScriptParameterOffsetTable)._padding_;
    uVar21 = FNiagaraCompileHash::GetTypeHash(this_00);
    puVar8 = TMapBase<FNiagaraCompileHash,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>_>
             ::FindOrAddImpl<FNiagaraCompileHash_const_&>
                       ((TMapBase<FNiagaraCompileHash,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>_>
                         *)local_e0,uVar21,this_00);
    *puVar8 = (uint)lVar12;
    iVar3 = this_00[1].DataHash.ArrayNum;
    pFVar22 = (FNiagaraVariableBase *)this_00[1].DataHash.AllocatorInstance.Data;
    pFVar2 = pFVar22 + iVar3;
    while( true ) {
      if (this_00[1].DataHash.ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar22 == pFVar2) break;
      pFVar9 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo(local_res18,pFVar22);
      if (pFVar9 == (FNiagaraVariableLayoutInfo *)0x0) {
        puVar11 = (undefined4 *)*plVar16;
        local_100 = 0xffffffff;
        puVar15 = puVar11;
        if (((ulonglong)puVar11 & 1) != 0) {
          puVar15 = (undefined4 *)((longlong)plVar16 + ((longlong)puVar11 >> 0x18));
        }
        if (puVar15 <= &local_100) {
          if (((ulonglong)puVar11 & 1) != 0) {
            puVar11 = (undefined4 *)((longlong)plVar16 + ((longlong)puVar11 >> 0x18));
          }
          if ((&local_100 < puVar11 + *piVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar17 = (int)(this->GPUScriptParameterOffsetTable)._padding_;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)plVar16,piVar1);
        }
        *(int *)&(this->GPUScriptParameterOffsetTable)._padding_ = iVar17 + 1;
        uVar14 = *plVar16;
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)plVar16 + ((longlong)uVar14 >> 0x18);
        }
        local_fc = 0xffffffff;
        *(undefined4 *)(uVar14 + (longlong)iVar17 * 4) = local_100;
        puVar11 = (undefined4 *)*plVar16;
        puVar15 = puVar11;
        if (((ulonglong)puVar11 & 1) != 0) {
          puVar15 = (undefined4 *)((longlong)plVar16 + ((longlong)puVar11 >> 0x18));
        }
        if (puVar15 <= &local_fc) {
          if (((ulonglong)puVar11 & 1) != 0) {
            puVar11 = (undefined4 *)((longlong)plVar16 + ((longlong)puVar11 >> 0x18));
          }
          if ((&local_fc < puVar11 + *piVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar17 = (int)(this->GPUScriptParameterOffsetTable)._padding_;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)plVar16,piVar1);
        }
        *(int *)&(this->GPUScriptParameterOffsetTable)._padding_ = iVar17 + 1;
        uVar14 = *plVar16;
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)plVar16 + ((longlong)uVar14 >> 0x18);
        }
        pFVar22 = pFVar22 + 1;
        *(undefined4 *)(uVar14 + (longlong)iVar17 * 4) = local_fc;
      }
      else {
        if ((pFVar9->LayoutInfo).NumFloatComponents == 0) {
          local_108 = 0xffffffff;
        }
        else {
          local_108 = (uint)pFVar9->FloatComponentStart;
        }
        puVar8 = (uint *)*plVar16;
        puVar10 = (uint *)((longlong)plVar16 + ((longlong)puVar8 >> 0x18));
        if (((ulonglong)puVar8 & 1) == 0) {
          puVar10 = puVar8;
        }
        if (puVar10 <= &local_108) {
          if (((ulonglong)puVar8 & 1) != 0) {
            puVar8 = (uint *)((longlong)plVar16 + ((longlong)puVar8 >> 0x18));
          }
          if ((&local_108 < puVar8 + *piVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar17 = (int)(this->GPUScriptParameterOffsetTable)._padding_;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)plVar16,piVar1);
        }
        *(int *)&(this->GPUScriptParameterOffsetTable)._padding_ = iVar17 + 1;
        uVar14 = *plVar16;
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)plVar16 + ((longlong)uVar14 >> 0x18);
        }
        *(uint *)(uVar14 + (longlong)iVar17 * 4) = local_108;
        if ((pFVar9->LayoutInfo).NumInt32Components == 0) {
          local_104 = 0xffffffff;
        }
        else {
          local_104 = (uint)pFVar9->Int32ComponentStart;
        }
        puVar8 = (uint *)*plVar16;
        puVar13 = (uint *)((longlong)plVar16 + ((longlong)puVar8 >> 0x18));
        puVar10 = puVar8;
        if (((ulonglong)puVar8 & 1) != 0) {
          puVar10 = puVar13;
        }
        if (puVar10 <= &local_104) {
          if (((ulonglong)puVar8 & 1) != 0) {
            puVar8 = puVar13;
          }
          if ((&local_104 < puVar8 + *piVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar17 = (int)(this->GPUScriptParameterOffsetTable)._padding_;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)plVar16,piVar1);
        }
        *(int *)&(this->GPUScriptParameterOffsetTable)._padding_ = iVar17 + 1;
        uVar14 = *plVar16;
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)plVar16 + ((longlong)uVar14 >> 0x18);
        }
        pFVar22 = pFVar22 + 1;
        *(uint *)(uVar14 + (longlong)iVar17 * 4) = local_104;
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    pTVar20 = local_d8;
    uVar21 = local_f8;
  } while( true );
}

