// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FChunkEvictionPolicy @ 14327e590

FChunkEvictionPolicy * __thiscall
BuildPatchServices::FChunkEvictionPolicy::FChunkEvictionPolicy
          (FChunkEvictionPolicy *this,IChunkReferenceTracker *param_1)

{
  this->ChunkReferenceTracker = param_1;
  this->_padding_ = (longlong)&___7FChunkEvictionPolicy_BuildPatchServices__6B_;
  return this;
}

// ~FChunkEvictionPolicy @ 143287810

void __thiscall
BuildPatchServices::FChunkEvictionPolicy::~FChunkEvictionPolicy(FChunkEvictionPolicy *this)

{
  this->_padding_ = (longlong)&___7IChunkEvictionPolicy_BuildPatchServices__6B_;
  return;
}

// Query @ 1432e30d0

void __thiscall
BuildPatchServices::FChunkEvictionPolicy::Query
          (FChunkEvictionPolicy *this,
          TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
          *param_1,int param_2,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  *pTVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  int iVar11;
  bool *pbVar12;
  uint uVar13;
  FGuid *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint local_res18;
  undefined1 local_167;
  undefined1 local_166 [6];
  ForAnyElementType local_160;
  undefined8 local_158;
  int local_150;
  ulonglong local_148;
  TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [16];
  TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId34,"Eviction_Query",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkEvictionPolicy.cpp"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
  }
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_138 = 0;
  local_148 = 1;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uStack_134 = *puVar16;
    while (uStack_134 == 0) {
      lVar10 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_134 = 1;
      iStack_124 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_1432e31cd;
      uStack_134 = puVar16[lVar10 + 1];
    }
    uStack_134 = -uStack_134 & uStack_134;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar8 < iStack_124) {
      iStack_124 = iVar8;
    }
  }
LAB_1432e31cd:
  uVar13 = *(uint *)&param_1->field_0x28;
  uStack_11c = local_4c;
  iStack_118 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_140 = param_1;
  local_130 = puVar1;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar17 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar17) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar18 = uVar18 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1432e32f0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_10c = (int)lVar10;
    uVar13 = local_10c + -1 + uVar18;
    if ((int)uVar17 < (int)uVar13) {
      uVar13 = uVar17;
    }
  }
LAB_1432e32f0:
  while( true ) {
    pTVar5 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_167 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_167);
    }
    if (((TStack_c0.CurrentBitIndex == uVar13) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    pbVar12 = (bool *)(*(longlong *)pTVar5 + (longlong)TStack_c0.CurrentBitIndex * 0x20);
    iVar8 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x10))
                      (this->ChunkReferenceTracker,pbVar12);
    if (iVar8 == 0) {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (param_3,(FGuid *)local_108,pbVar12);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_150 = (((*(int *)&(param_3->Elements).field_0x34 - *(int *)&(param_3->Elements).field_0x8) -
               *(int *)&param_1->field_0x34) - param_2) + *(int *)&param_1->field_0x8;
  if (0 < local_150) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId45,"Eviction_BootSort",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\ChunkEvictionPolicy.cpp"
                 ,0x2d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
    }
    iStack_f0 = 0;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    local_d8 = 0;
    iVar8 = *(int *)&param_1->field_0x28;
    iStack_dc = local_d8;
    if (iVar8 != 0) {
      puVar16 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      local_d8 = iStack_f0;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_1432e3461;
        uVar13 = puVar16[lVar10 + 1];
      }
      local_148 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = local_148 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_108._4_4_ = (undefined4)lVar10;
      iStack_dc = local_d8 + -1 + local_108._4_4_;
      if (iVar8 < iStack_dc) {
        iStack_dc = iVar8;
      }
    }
LAB_1432e3461:
    uStack_ec = (undefined4)local_148;
    iStack_d4 = iStack_124;
    iStack_d0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    local_res18 = *(uint *)&param_1->field_0x28;
    uStack_e0 = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uStack_ec,iStack_f0);
    uVar13 = local_res18 & 0xffffffe0;
    TStack_90.CurrentBitIndex = iStack_dc;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar8 = (int)local_res18 >> 5;
    TStack_90._28_4_ = iStack_124;
    TStack_90.BaseBitIndex = local_d8;
    uStack_70 = CONCAT44(uStack_cc,iStack_d0);
    local_f8 = param_1;
    local_e8 = puVar1;
    local_98 = param_1;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)local_res18 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar18 = *(uint *)&param_1->field_0x28;
    if (local_res18 != uVar18) {
      puVar15 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar17 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar8 * 4);
      while (uVar17 == 0) {
        lVar10 = (longlong)iVar8;
        uVar13 = uVar13 + 0x20;
        iVar8 = iVar8 + 1;
        local_res18 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_1432e3590;
        uVar17 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_108._8_4_ = (undefined4)lVar10;
      local_res18 = (local_108._8_4_ - 1) + uVar13;
      if ((int)uVar18 < (int)local_res18) {
        local_res18 = uVar18;
      }
    }
LAB_1432e3590:
    while( true ) {
      pTVar5 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_166[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_166);
      }
      if (((TStack_90.CurrentBitIndex == local_res18) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar5 == param_1)) break;
      pFVar14 = (FGuid *)(*(longlong *)pTVar5 + (longlong)TStack_90.CurrentBitIndex * 0x20);
      uVar9 = CityHash64((char *)pFVar14,0x10);
      iVar8 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (param_3,(uint)uVar9,pFVar14);
      if (iVar8 == -1) {
        if (((local_160.Data <= pFVar14) &&
            (pFVar14 < (FGuid *)(local_160.Data + (longlong)local_158._4_4_ * 0x10))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (int)local_158;
        if ((int)local_158 == local_158._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&local_160,(int *)((longlong)&local_158 + 4));
        }
        local_158 = CONCAT44(local_158._4_4_,iVar8 + 1);
        uVar4 = *(undefined8 *)&pFVar14->C;
        *(undefined8 *)(local_160.Data + (longlong)iVar8 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_160.Data + (longlong)iVar8 * 0x10 + 8) = uVar4;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    (**(code **)((longlong)*this->ChunkReferenceTracker + 0x18))
              (this->ChunkReferenceTracker,&local_160,1);
    uVar13 = 0;
    iVar8 = local_150;
    if (0 < (int)local_158) {
      do {
        if (iVar8 < 1) break;
        uVar18 = 0;
        if ((int)uVar13 < (int)local_158) {
          uVar18 = ~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (param_4,(FGuid *)(local_108 + 0xc),
                   (bool *)(local_160.Data + (longlong)(int)uVar13 * 0x10));
        uVar13 = uVar13 + 1;
        iVar8 = iVar8 + -1;
      } while ((int)uVar13 < (int)local_158);
    }
    if ((FGuid *)local_160.Data != (FGuid *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

