// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FMeshWeldingWrapper @ 14c7b3260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMeshWeldingWrapper * __thiscall
UE::Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper
          (FMeshWeldingWrapper *this,FDynamicMesh3 *param_1,double param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  void *pvVar2;
  undefined4 uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  byte bVar7;
  atomic<unsigned_char> aVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FMeshWeldingWrapper *pFVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  int *piVar24;
  ForElementType<unsigned_int> FVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  undefined1 auStackY_208 [32];
  uint local_1b8;
  undefined1 local_1b4 [4];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FMeshWeldingWrapper *local_1a0;
  int local_198;
  int local_194;
  uint local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  undefined4 local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  TArray<int,TSizedDefaultAllocator<32>_> *local_170;
  undefined4 local_168;
  int local_164;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  FScriptContainerElement *local_130;
  ForAnyElementType *local_128;
  code *local_120;
  undefined1 *local_118;
  code *local_110;
  FScriptContainerElement **local_108;
  FVector3i *local_100;
  int *local_f8;
  FVector3i local_f0;
  TTuple<int,double> local_e0;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  FMutex local_78 [8];
  TWrapAroundGridIndexer3<double> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this->OriginalMesh = param_1;
  pTVar26 = &this->TriIds;
  uVar20 = 0;
  (this->OriginalToMerged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->OriginalIndexes;
  (this->OriginalToMerged).ArrayNum = 0;
  (this->OriginalToMerged).ArrayMax = 0;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OriginalIndexes).ArrayNum = 0;
  (this->OriginalIndexes).ArrayMax = 0;
  (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TriIds).ArrayNum = 0;
  (this->TriIds).ArrayMax = 0;
  pFVar4 = this->OriginalMesh;
  local_198 = -1;
  uVar11 = (pFVar4->VertexRefCounts).UsedCount;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_1a0 = this;
  local_170 = pTVar26;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->OriginalToMerged,&local_198,
             (pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed);
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_70.CellSize = param_2 * __real_3ff8000000000000;
  if (param_2 * __real_3ff8000000000000 <= __real_3eff751040000000) {
    local_70.CellSize = __real_3eff751040000000;
  }
  local_98 = -1;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if (local_70.CellSize <= __real_3e45798ee2308c3a) {
    local_70.CellSize = __real_3e45798ee2308c3a;
  }
  local_78[0].State = (atomic<unsigned_char>)0x0;
  if ((local_70.CellSize < __real_3e45798ee2308c3a) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2954325157570674611>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                          ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
    return pFVar14;
  }
  local_68 = -1;
  if (uVar11 <= (uint)(local_c8._8_4_ - local_94)) goto LAB_14c7b35e2;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_c8,uVar11);
  uVar18 = 1;
  if (3 < uVar11) {
    uVar17 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_168 = (undefined4)lVar21;
    uVar18 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_80 != 0) && ((int)uVar18 <= (int)local_80)) goto LAB_14c7b35e2;
  local_80 = uVar18;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
  }
  if (uVar18 != 0) {
    uVar11 = uVar18;
    if (uVar18 < 2) {
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14c7b3437;
      }
    }
    else {
LAB_14c7b3437:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar11,4);
    }
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      uVar17 = uVar20;
      do {
        FVar16.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_88.Data;
        }
        uVar15 = (longlong)(int)uVar18 - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(FVar16.Data + uVar15 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_80 != 0) {
    pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
    uStack_18c = 1;
    local_190 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uVar17 = uVar20;
    if (local_a0 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
      if (local_a8 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_a8;
      }
      uVar11 = *(uint *)FVar25;
      uVar23 = uVar20;
      while (uVar11 == 0) {
        uStack_178 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_178;
        iVar13 = (int)uVar17;
        local_190 = iVar13 + 1;
        uVar17 = (ulonglong)local_190;
        if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_190)
        goto LAB_14c7b353d;
        uVar11 = ((uint *)((longlong)FVar25 + 4))[iVar13];
      }
      uStack_18c = -uVar11 & uVar11;
      uVar17 = (ulonglong)uStack_18c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_164 = (int)lVar21;
      uStack_17c = local_164 + -1 + uStack_178;
      uVar17 = (ulonglong)uStack_17c;
      if ((int)local_a0 < (int)uStack_17c) {
LAB_14c7b353d:
        uVar17 = (ulonglong)local_a0;
        uStack_17c = local_a0;
      }
    }
    local_180 = 0xffffffff;
    local_160.Value = (int *)local_c8;
    local_150._padding_ = CONCAT44(uStack_18c,local_190);
    local_150.CurrentBitIndex = uStack_17c;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_174;
    local_150.BaseBitIndex = uStack_178;
    local_150.Array = pTStack_188;
    if ((int)uVar17 < (int)local_a0) {
      do {
        pvVar2 = (void *)(*(longlong *)local_160.Value + (longlong)(int)uVar17 * 0x18);
        uVar11 = FCrc::MemCrc_DEPRECATED(pvVar2,0xc,0);
        uVar11 = local_80 - 1 & uVar11;
        *(uint *)((longlong)pvVar2 + 0x14) = uVar11;
        FVar16.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_88.Data;
        }
        uVar23 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)((longlong)pvVar2 + 0x10) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
        *(int *)(FVar16.Data + uVar23 * 4) = (int)uVar17;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        uVar17 = (ulonglong)(uint)local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_14c7b35e2:
  pFVar4 = this->OriginalMesh;
  uVar11 = (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar11 != 0) &&
     (pFVar5 = (pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar20 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar20 = 1;
    uVar17 = 1;
    if (1 < (int)uVar11) {
      do {
        uVar20 = uVar17;
        uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
        lVar21 = *(longlong *)(pFVar5 + (uVar20 >> 9) * 8);
        if ((*(short *)(lVar21 + uVar17 * 2) != 0) && (*(short *)(lVar21 + uVar17 * 2) != -1))
        break;
        uVar18 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        uVar17 = uVar20;
      } while ((int)uVar18 < (int)uVar11);
    }
  }
  uVar18 = (uint)uVar20;
  pFVar14 = this;
joined_r0x00014c7b365a:
  if (uVar18 != uVar11) {
    while( true ) {
      uVar18 = (uint)uVar20;
      local_120 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper'::__l6::<lambda_2>,bool,int_const_&>
                  ::Call;
      local_110 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper'::__l6::<lambda_1>,double,int_const_&>
                  ::Call;
      pFVar5 = (FScriptContainerElement *)
               (*(longlong *)
                 ((pFVar14->OriginalMesh->Vertices).Blocks.AllocatorInstance.Data +
                 (uVar20 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 0x18);
      local_128 = &local_1b0;
      local_118 = local_1b4;
      local_108 = &local_130;
      local_1b8 = uVar18;
      local_130 = pFVar5;
      TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                ((TPointHashGrid3<int,double> *)local_c8,&local_e0,(TVector<double> *)pFVar5,param_2
                 ,(TFunctionRef<double___cdecl(int_const_&)> *)&local_110,
                 (TFunctionRef<bool___cdecl(int_const_&)> *)&local_120);
      lVar21 = (longlong)(int)local_e0._0_4_;
      if (local_e0._0_4_ == 0xffffffff) {
        if (((local_1b0.Data <= pFVar5) &&
            (pFVar5 < local_1b0.Data + (longlong)local_1a8._4_4_ * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
          return pFVar14;
        }
        iVar13 = (int)local_1a8;
        if ((int)local_1a8 == local_1a8._4_4_) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_1b0,(int *)((longlong)&local_1a8 + 4));
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar13 + 1);
        uVar9 = *(undefined8 *)(pFVar5 + 8);
        *(undefined8 *)(local_1b0.Data + (longlong)iVar13 * 0x18) = *(undefined8 *)pFVar5;
        *(undefined8 *)(local_1b0.Data + (longlong)iVar13 * 0x18 + 8) = uVar9;
        *(undefined8 *)(local_1b0.Data + (longlong)iVar13 * 0x18 + 0x10) =
             *(undefined8 *)(pFVar5 + 0x10);
        local_194 = iVar13;
        TWrapAroundGridIndexer3<double>::ToGrid(&local_70,&local_f0,(TVector<double> *)pFVar5);
        LOCK();
        bVar10 = local_78[0].State == (atomic<unsigned_char>)0x0;
        if (bVar10) {
          local_78[0].State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar10) {
          FMutex::LockSlow(local_78);
        }
        local_100 = &local_f0;
        local_f8 = &local_194;
        TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                  ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                    *)local_c8,&local_160,(bool *)&local_100);
        LOCK();
        aVar8 = local_78[0].State - 1;
        UNLOCK();
        bVar7 = (byte)local_78[0].State & 2;
        local_78[0].State = aVar8;
        if (bVar7 != 0) {
          FMutex::WakeWaitingThread(local_78);
        }
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 <
             pFVar5 + (longlong)(this->OriginalIndexes).ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
          return pFVar14;
        }
        iVar13 = (this->OriginalIndexes).ArrayNum;
        if (iVar13 == (this->OriginalIndexes).ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,&(this->OriginalIndexes).ArrayMax);
        }
        pFVar14 = local_1a0;
        uVar19 = local_1b8;
        (this->OriginalIndexes).ArrayNum = iVar13 + 1;
        *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_1b8;
        lVar21 = (longlong)(int)local_1b8;
        uVar12 = 0;
        if ((int)local_1b8 < (local_1a0->OriginalToMerged).ArrayNum) {
          uVar12 = ~local_1b8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
          return pFVar14;
        }
        *(uint *)((pFVar14->OriginalToMerged).AllocatorInstance.Data + lVar21 * 4) = uVar19;
      }
      else {
        uVar19 = 0;
        if ((int)local_e0._0_4_ < (this->OriginalIndexes).ArrayNum) {
          uVar19 = (uint)~local_e0._0_4_ >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
          return pFVar14;
        }
        lVar22 = (longlong)(int)local_1b8;
        uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar21 * 4);
        uVar19 = 0;
        if ((int)local_1b8 < (local_1a0->OriginalToMerged).ArrayNum) {
          uVar19 = ~local_1b8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FMeshWeldingWrapper *)(*pcVar6)();
          return pFVar14;
        }
        *(undefined4 *)((local_1a0->OriginalToMerged).AllocatorInstance.Data + lVar22 * 4) = uVar3;
        pFVar14 = local_1a0;
      }
      uVar18 = uVar18 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)uVar11 <= (int)uVar18) break;
      while( true ) {
        uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
        lVar21 = *(longlong *)
                  ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar20 >> 9) * 8);
        if ((*(short *)(lVar21 + uVar17 * 2) != 0) && (*(short *)(lVar21 + uVar17 * 2) != -1))
        break;
        uVar18 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        if ((int)uVar11 <= (int)uVar18) goto joined_r0x00014c7b365a;
      }
    }
    goto joined_r0x00014c7b365a;
  }
  uVar11 = (pFVar14->OriginalMesh->TriangleRefCounts).UsedCount;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if ((this->TriIds).ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&pTVar26->AllocatorInstance,(this->TriIds).ArrayNum,
               &(this->TriIds).ArrayMax);
  }
  piVar24 = &(this->TriIds).ArrayMax;
  pFVar4 = pFVar14->OriginalMesh;
  uVar18 = (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar11 = 0;
  if ((uVar18 != 0) &&
     (pFVar5 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar19 = 1;
    uVar11 = 1;
    if (1 < (int)uVar18) {
      do {
        lVar21 = *(longlong *)(pFVar5 + (ulonglong)(uVar19 >> 9) * 8);
        pTVar26 = local_170;
        if ((*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
           (uVar11 = uVar19, *(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
        uVar19 = uVar19 + 1;
        uVar11 = uVar19;
      } while ((int)uVar19 < (int)uVar18);
    }
  }
joined_r0x00014c7b3adc:
  do {
    if (uVar11 == uVar18) {
      local_80 = 0;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      return local_1a0;
    }
    while( true ) {
      iVar13 = pTVar26->ArrayNum;
      if (iVar13 == *piVar24) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar26->AllocatorInstance,piVar24);
        piVar24 = &pTVar26->ArrayMax;
      }
      pTVar26->ArrayNum = iVar13 + 1;
      *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar13 * 4) = uVar11;
      uVar11 = uVar11 + 1;
      if ((int)uVar18 <= (int)uVar11) break;
      while( true ) {
        lVar21 = *(longlong *)
                  ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar11 >> 9) * 8);
        if ((*(short *)(lVar21 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar21 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
        uVar11 = uVar11 + 1;
        if ((int)uVar18 <= (int)uVar11) goto joined_r0x00014c7b3adc;
      }
    }
  } while( true );
}

// operator() @ 14c7c3310

double __thiscall
`UE::Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper'::__l6::<lambda_1>::operator()
          (void *this,int *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar1 = *param_1;
  lVar8 = (longlong)(int)uVar1;
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar9 = (double)(*pcVar5)();
      return dVar9;
    }
  }
  lVar3 = *plVar2;
  pdVar4 = *(double **)this;
  dVar9 = *(double *)(lVar3 + 8 + lVar8 * 0x18) - pdVar4[1];
  dVar11 = *(double *)(lVar3 + lVar8 * 0x18) - *pdVar4;
  dVar10 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18) - pdVar4[2];
  return dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
}

// GetTri @ 14c811890

bool __thiscall
UE::Geometry::Private::FMeshWeldingWrapper::GetTri
          (FMeshWeldingWrapper *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  pFVar3 = this->OriginalMesh;
  if ((-1 < param_1) &&
     (param_1 < (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + uVar8 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)((pFVar3->Triangles).Blocks.AllocatorInstance.Data + lVar1);
      uVar2 = *(uint *)(lVar1 + uVar8 * 0xc);
      lVar1 = lVar1 + uVar8 * 0xc;
      uVar7 = 0;
      if ((int)uVar2 < (this->OriginalToMerged).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      *param_2 = *(int *)((this->OriginalToMerged).AllocatorInstance.Data + (longlong)(int)uVar2 * 4
                         );
      uVar2 = *(uint *)(lVar1 + 4);
      uVar7 = 0;
      if ((int)uVar2 < (this->OriginalToMerged).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      *param_3 = *(int *)((this->OriginalToMerged).AllocatorInstance.Data + (longlong)(int)uVar2 * 4
                         );
      uVar2 = *(uint *)(lVar1 + 8);
      uVar7 = 0;
      if ((int)uVar2 < (this->OriginalToMerged).ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      *param_4 = *(int *)((this->OriginalToMerged).AllocatorInstance.Data + (longlong)(int)uVar2 * 4
                         );
      return true;
    }
  }
  return false;
}

