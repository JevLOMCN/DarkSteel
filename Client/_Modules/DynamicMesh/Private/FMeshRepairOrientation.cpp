// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// operator() @ 14c7cb430

void __thiscall
`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double local_res8;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  TVector<double>_u_0 local_90 [5];
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = *(int *)(*plVar3 + (longlong)param_1 * 4);
  UE::Geometry::FDynamicMesh3::GetTriInfo
            (*(FDynamicMesh3 **)(*(longlong *)this + 8),iVar2,(TVector<double> *)&local_108._s_0,
             &local_res8,(TVector<double> *)&local_f0._s_0);
  if (__real_3eb0c6f7a0000000 <= local_res8) {
    uVar8 = (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar1 = **(double **)((longlong)this + 0x28);
    plVar3 = (longlong *)**(undefined8 **)((longlong)this + 8);
    dVar11 = dVar1 * local_108._s_0.X;
    dVar10 = dVar1 * local_108._s_0.Y;
    pcVar4 = *(code **)(*plVar3 + 0x40);
    dVar1 = dVar1 * local_108._s_0.Z;
    local_c0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_108._16_8_ >> 0x20) ^ uVar9,
                          SUB84(local_108._s_0.Z,0) ^ uVar8);
    local_d0 = dVar10 + local_f0._s_0.Y;
    local_c8 = dVar1 + local_f0._s_0.Z;
    local_c0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)local_108._0_8_ >> 0x20) ^ uVar9,
                          SUB84(local_108._s_0.X,0) ^ uVar8);
    local_d8 = dVar11 + local_f0._s_0.X;
    local_c0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)local_108._8_8_ >> 0x20) ^ uVar9,
                          SUB84(local_108._s_0.Y,0) ^ uVar8);
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_c0._s_0,__real_3e45798ee0000000);
    iVar6 = (*pcVar4)(plVar3,&local_d8,*(undefined8 *)((longlong)this + 0x10));
    plVar3 = (longlong *)**(undefined8 **)((longlong)this + 8);
    pcVar4 = *(code **)(*plVar3 + 0x40);
    local_90[0]._s_0.X = local_108._s_0.X;
    local_90[0]._s_0.Y = local_108._s_0.Y;
    local_90[0]._s_0.Z = local_108._s_0.Z;
    local_a8 = local_f0._s_0.X - dVar11;
    local_a0 = local_f0._s_0.Y - dVar10;
    local_98 = local_f0._s_0.Z - dVar1;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&local_90[0]._s_0,__real_3e45798ee0000000);
    iVar7 = (*pcVar4)(plVar3,&local_a8,*(undefined8 *)((longlong)this + 0x10));
    if (iVar6 == iVar2) {
      if (iVar7 == iVar2) {
        return;
      }
    }
    else if (iVar7 != iVar2) {
      return;
    }
    lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (iVar7 == iVar2) {
      *(double *)(*(longlong *)((longlong)this + 0x20) + 0x18) =
           local_res8 + *(double *)(*(longlong *)((longlong)this + 0x20) + 0x18);
    }
    else if (iVar6 == iVar2) {
      *(double *)(*(longlong *)((longlong)this + 0x20) + 0x10) =
           local_res8 + *(double *)(*(longlong *)((longlong)this + 0x20) + 0x10);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// ComputeComponentStatistics @ 14c7eee60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics
          (FMeshRepairOrientation *this,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1,
          Component *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TAxisAlignedBox3<double> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  FFunctionStorage *pFVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_res10 [2];
  undefined1 auStackY_298 [32];
  uint local_268;
  uint uStack_264;
  uint uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  uint local_248;
  uint uStack_244;
  uint uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  double local_218;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  FSparseArrayAllocationInfo local_1c0;
  code *local_1b0;
  FMeshRepairOrientation **local_1a8;
  code *local_198;
  undefined **local_188;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_180;
  undefined ***local_170;
  FMeshRepairOrientation *local_168;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_160;
  undefined8 *local_158;
  _RTL_CRITICAL_SECTION *local_150;
  Component *local_148;
  double *local_140;
  TAxisAlignedBox3<double> local_138;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  undefined8 local_b8 [2];
  code *local_a8;
  FFunctionStorage local_98;
  undefined1 local_78;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar14 = 0;
  param_2->OutFacing = 0.0;
  param_2->InFacing = 0.0;
  local_res10[0] = param_1;
  pTVar9 = FDynamicMesh3::GetBounds(this->Mesh,&local_138,true);
  iVar7 = (param_2->Triangles).ArrayNum;
  pFVar24 = (param_2->Triangles).AllocatorInstance.Data;
  dVar5 = (pTVar9->Max).field0_0x0._s_0.Y - (pTVar9->Min).field0_0x0._s_0.Y;
  dVar25 = (pTVar9->Max).field0_0x0._s_0.X - (pTVar9->Min).field0_0x0._s_0.X;
  dVar28 = (pTVar9->Max).field0_0x0._s_0.Z - (pTVar9->Min).field0_0x0._s_0.Z;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  auVar26._0_8_ = dVar25 * dVar25;
  auVar26._8_8_ = 0;
  local_108.AllocationFlags.NumBits = 0;
  local_108.AllocationFlags.MaxBits = 0x80;
  local_108.FirstFreeIndex = -1;
  local_108.NumFreeIndices = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar5 * dVar5 + auVar26._0_8_ + dVar28 * dVar28;
  auVar27 = sqrtpd(auVar26,auVar27);
  local_218 = auVar27._0_8_ + auVar27._0_8_;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar17 = (local_108.Data.ArrayNum - local_108.NumFreeIndices) + iVar7;
  if (uVar17 <= (uint)(local_108.Data.ArrayNum - local_108.NumFreeIndices)) goto LAB_14c7ef1e2;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_108,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar21 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_c0 != 0) && ((int)uVar17 <= (int)local_c0)) goto LAB_14c7ef1e2;
  local_c0 = uVar17;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14c7ef013;
      }
    }
    else {
LAB_14c7ef013:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar23 = (ulonglong)uVar17;
      uVar21 = uVar14;
      do {
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        uVar10 = (longlong)(int)uVar17 - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_c0 != 0) {
    local_208.Array = &local_108.AllocationFlags;
    local_268 = 0;
    uStack_264 = 1;
    uStack_254 = 0;
    uStack_250 = 0;
    if (local_108.AllocationFlags.NumBits != 0) {
      FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar17 = *(uint *)FVar22;
      uVar21 = uVar14;
      while (uVar17 == 0) {
        uStack_250 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_250;
        iVar8 = (int)uVar14;
        local_268 = iVar8 + 1;
        uVar14 = (ulonglong)local_268;
        if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                 ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_268) goto LAB_14c7ef13f;
        uVar17 = *(uint *)((uchar *)((longlong)FVar22 + 4) + (longlong)iVar8 * 4);
      }
      uStack_264 = -uVar17 & uVar17;
      uVar14 = (ulonglong)uStack_264 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uStack_254 = (uStack_250 - 1) + (int)lVar11;
      uVar14 = (ulonglong)uStack_254;
      if (local_108.AllocationFlags.NumBits < (int)uStack_254) {
LAB_14c7ef13f:
        uVar14 = (ulonglong)(uint)local_108.AllocationFlags.NumBits;
        uStack_254 = local_108.AllocationFlags.NumBits;
      }
    }
    local_210 = &local_108;
    local_208._padding_ = CONCAT44(uStack_264,local_268);
    local_208.CurrentBitIndex = uStack_254;
    local_208.UnvisitedBitMask = 0xffffffff;
    local_208._28_4_ = uStack_24c;
    local_208.BaseBitIndex = uStack_250;
    if ((int)uVar14 < local_108.AllocationFlags.NumBits) {
      do {
        pFVar2 = (local_210->Data).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar14;
        uVar17 = local_c0 - 1 & *(uint *)(pFVar2 + lVar11 * 0xc);
        *(uint *)(pFVar2 + lVar11 * 0xc + 8) = uVar17;
        FVar13.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_c8.Data;
        }
        uVar21 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(pFVar2 + lVar11 * 0xc + 4) = *(undefined4 *)(FVar13.Data + uVar21 * 4);
        *(int *)(FVar13.Data + uVar21 * 4) = (int)uVar14;
        local_208.UnvisitedBitMask = local_208.UnvisitedBitMask & ~local_208._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
        uVar14 = (ulonglong)(uint)local_208.CurrentBitIndex;
      } while (local_208.CurrentBitIndex < (local_208.Array)->NumBits);
    }
  }
LAB_14c7ef1e2:
  pFVar2 = pFVar24 + (longlong)iVar7 * 4;
  iVar7 = local_108.FirstFreeIndex;
  do {
    local_108.FirstFreeIndex = iVar7;
    if (pFVar24 == pFVar2) {
      local_188 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::`2'::<lambda_1>,0,0>
                   ::_vftable_;
      local_180 = &local_108;
      local_170 = (undefined ***)0x0;
      local_198 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::__l2::<lambda_1>,bool,int>
                  ::Call;
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::__l2::<lambda_1>,bool,int>
                 ::Call;
      local_98.HeapAllocation = (FFunctionStorage *)0x0;
      local_b8[0] = __real_7fefffffffffffff;
      Core::Private::Function::
      TFunction_OwnedObject<`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::__l2::<lambda_1>,0,0>
      ::CloneToEmptyStorage(&local_188,&local_98);
      local_78 = 0;
      if (local_198 != (code *)0x0) {
        pppuVar15 = &local_188;
        if (local_170 != (undefined ***)0x0) {
          pppuVar15 = local_170;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      InitializeCriticalSectionAndSpinCount(&local_68,4000);
      local_160 = local_res10;
      local_158 = local_b8;
      local_150 = &local_68;
      local_140 = &local_218;
      local_1a8 = &local_168;
      local_1b0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshRepairOrientation::ComputeComponentStatistics'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_168 = this;
      local_148 = param_2;
      ParallelFor((param_2->Triangles).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_1b0,false,
                  false);
      DeleteCriticalSection(&local_68);
      if (local_a8 != (code *)0x0) {
        pFVar16 = &local_98;
        if (local_98.HeapAllocation != (FFunctionStorage *)0x0) {
          pFVar16 = local_98.HeapAllocation;
        }
        (**(code **)(*(longlong *)pFVar16->InlineAllocation + 0x10))();
      }
      local_c0 = 0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      bVar6 = local_108.Data.ArrayMax != 0;
      local_108.Data._8_8_ = (ulonglong)(uint)local_108.Data.ArrayMax << 0x20;
      if (bVar6) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&local_108,0,&local_108.Data.ArrayMax);
      }
      local_108.FirstFreeIndex = -1;
      local_108.NumFreeIndices = 0;
      local_108.AllocationFlags.NumBits = 0;
      if (0x80 < (uint)local_108.AllocationFlags.MaxBits) {
        local_108.AllocationFlags.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108.AllocationFlags,0);
      }
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108.AllocationFlags.AllocatorInstance.SecondaryData);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      return;
    }
    puVar19 = (uint *)0x0;
    if (local_108.NumFreeIndices == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&local_108,&local_108.Data.ArrayNum,
                         &local_108.Data.ArrayMax);
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108.AllocationFlags,1);
      FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
      if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar12 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar12 = bVar12 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar8 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar12 & 0x1f));
    }
    else {
      local_108.FirstFreeIndex =
           *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc + 4);
      local_108.NumFreeIndices = local_108.NumFreeIndices + -1;
      if (local_108.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_108.Data.AllocatorInstance.Data + (longlong)local_108.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_108,&local_1c0,iVar7);
    if (local_1c0.Pointer != (uint *)0x0) {
      *(uint *)local_1c0.Pointer = *(uint *)pFVar24;
      *(uint *)((longlong)local_1c0.Pointer + 4) = 0xffffffff;
      puVar19 = local_1c0.Pointer;
    }
    uVar17 = *puVar19;
    if ((local_108.Data.ArrayNum - local_108.NumFreeIndices != 1) &&
       (local_108.Data.ArrayNum != local_108.NumFreeIndices)) {
      FVar13.Data = local_d0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_c8.Data;
      }
      for (iVar7 = *(int *)(FVar13.Data + (ulonglong)(local_c0 - 1 & uVar17) * 4); iVar7 != -1;
          iVar7 = *(int *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc + 4)) {
        if (*(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc) == uVar17) {
          if (iVar7 != -1) {
            *(uint *)(local_108.Data.AllocatorInstance.Data + (longlong)iVar7 * 0xc) = uVar17;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_108,local_1c0.Index,1);
            goto LAB_14c7ef61f;
          }
          break;
        }
      }
    }
    uVar14 = 0;
    uVar20 = local_108.Data.ArrayNum - local_108.NumFreeIndices;
    uVar18 = 1;
    if (3 < uVar20) {
      uVar21 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar20 < 1) || ((int)uVar18 <= (int)local_c0)) {
      uVar17 = local_c0 - 1 & uVar17;
      puVar19[2] = uVar17;
      FVar13.Data = local_d0;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_c8.Data;
      }
      uVar14 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
      puVar19[1] = *(uint *)(FVar13.Data + uVar14 * 4);
      *(int *)(FVar13.Data + uVar14 * 4) = local_1c0.Index;
    }
    else {
      local_c0 = uVar18;
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
      }
      if (uVar18 != 0) {
        uVar17 = uVar18;
        if (uVar18 < 2) {
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_14c7ef414;
          }
        }
        else {
LAB_14c7ef414:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar23 = (ulonglong)uVar18;
          uVar21 = uVar14;
          do {
            FVar13.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_c8.Data;
            }
            uVar10 = uVar21 & (longlong)(int)uVar18 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_c0 != 0) {
        local_1e0.Array = &local_108.AllocationFlags;
        local_248 = 0;
        uStack_244 = 1;
        uStack_234 = 0;
        uStack_230 = 0;
        if (local_108.AllocationFlags.NumBits != 0) {
          FVar22 = (ForElementType<unsigned_int>)&local_108.AllocationFlags;
          if (local_108.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_108.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar17 = *(uint *)FVar22;
          uVar21 = uVar14;
          while (uVar17 == 0) {
            uStack_230 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uStack_230;
            iVar7 = (int)uVar14;
            local_248 = iVar7 + 1;
            uVar14 = (ulonglong)local_248;
            if ((int)((local_108.AllocationFlags.NumBits - 1U) +
                     ((int)(local_108.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_248) goto LAB_14c7ef53f;
            uVar17 = *(uint *)((uchar *)((longlong)FVar22 + 4) + (longlong)iVar7 * 4);
          }
          uStack_244 = -uVar17 & uVar17;
          uVar14 = (ulonglong)uStack_244 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uStack_234 = (int)uVar21 + -1 + (int)lVar11;
          uVar14 = (ulonglong)uStack_234;
          if (local_108.AllocationFlags.NumBits < (int)uStack_234) {
LAB_14c7ef53f:
            uVar14 = (ulonglong)(uint)local_108.AllocationFlags.NumBits;
            uStack_234 = local_108.AllocationFlags.NumBits;
          }
        }
        local_1e8 = &local_108;
        local_1e0._padding_ = CONCAT44(uStack_244,local_248);
        local_1e0.CurrentBitIndex = uStack_234;
        local_1e0.UnvisitedBitMask = 0xffffffff;
        local_1e0._28_4_ = uStack_22c;
        local_1e0.BaseBitIndex = uStack_230;
        if ((int)uVar14 < local_108.AllocationFlags.NumBits) {
          do {
            pFVar3 = (local_1e8->Data).AllocatorInstance.Data;
            lVar11 = (longlong)(int)uVar14;
            uVar17 = local_c0 - 1 & *(uint *)(pFVar3 + lVar11 * 0xc);
            *(uint *)(pFVar3 + lVar11 * 0xc + 8) = uVar17;
            FVar13.Data = local_d0;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_c8.Data;
            }
            uVar21 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(pFVar3 + lVar11 * 0xc + 4) = *(undefined4 *)(FVar13.Data + uVar21 * 4);
            *(int *)(FVar13.Data + uVar21 * 4) = (int)uVar14;
            local_1e0.UnvisitedBitMask = local_1e0.UnvisitedBitMask & ~local_1e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
            uVar14 = (ulonglong)(uint)local_1e0.CurrentBitIndex;
          } while (local_1e0.CurrentBitIndex < (local_1e0.Array)->NumBits);
        }
      }
    }
LAB_14c7ef61f:
    pFVar24 = pFVar24 + 4;
    iVar7 = local_108.FirstFreeIndex;
  } while( true );
}

// ComputeStatistics @ 14c7f2700

void __thiscall
UE::Geometry::FMeshRepairOrientation::ComputeStatistics
          (FMeshRepairOrientation *this,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1)

{
  int iVar1;
  Component *pCVar2;
  Component *pCVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Components).ArrayNum;
  pCVar2 = (Component *)(this->Components).AllocatorInstance.Data;
  pCVar3 = pCVar2 + iVar1;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FMeshRepairOrientation::Component,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pCVar2 == pCVar3) break;
    ComputeComponentStatistics(this,param_1,pCVar2);
    pCVar2 = pCVar2 + 1;
  }
  return;
}

// OrientComponents @ 14c81ebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FMeshRepairOrientation::OrientComponents(FMeshRepairOrientation *this)

{
  Component *pCVar1;
  FDynamicMesh3 *pFVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  EMeshResult EVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<unsigned_int> FVar21;
  bool bVar22;
  undefined1 auStackY_198 [32];
  uint local_148 [2];
  ForAnyElementType local_140;
  undefined8 local_138;
  uint local_130;
  int local_12c;
  uint local_128 [2];
  uint local_120 [2];
  uint local_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_110;
  undefined4 local_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FIndex3i local_a0 [2];
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar13 = &(this->Components).ArrayMax;
  pCVar1 = (Component *)(this->Components).AllocatorInstance.Data;
  iVar5 = (this->Components).ArrayNum;
  if ((this->Components).ArrayMax < 0) {
    DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>(pCVar1,iVar5);
    (this->Components).ArrayNum = 0;
    if (*piVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Components).AllocatorInstance,0,piVar13);
    }
  }
  else {
    DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>(pCVar1,iVar5);
    (this->Components).ArrayNum = 0;
  }
  uVar17 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar15 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if (uVar15 != 0) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88,uVar15);
    if (uVar15 < 4) {
      uVar15 = 1;
    }
    else {
      uVar12 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_e8 = (int)lVar14;
      uVar15 = 1 << ((byte)lVar14 & 0x1f);
    }
    if ((local_40 == 0) || ((int)local_40 < (int)uVar15)) {
      local_40 = uVar15;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
      }
      if (uVar15 != 0) {
        uVar16 = uVar15;
        if (uVar15 < 2) {
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_14c81ed0e;
          }
        }
        else {
LAB_14c81ed0e:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar19 = (ulonglong)uVar15;
          uVar12 = uVar17;
          do {
            FVar10.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_48.Data;
            }
            uVar8 = uVar12 & (longlong)(int)uVar15 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_40 != 0) {
        pTStack_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_118 = 0;
        uStack_114 = 1;
        uStack_104 = 0;
        uStack_100 = 0;
        uVar12 = uVar17;
        if (local_60 != 0) {
          FVar21 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar21 = local_68;
          }
          uVar15 = *(uint *)FVar21;
          uVar19 = uVar17;
          while (uVar15 == 0) {
            uStack_100 = (int)uVar19 + 0x20;
            uVar19 = (ulonglong)uStack_100;
            iVar5 = (int)uVar12;
            local_118 = iVar5 + 1;
            uVar12 = (ulonglong)local_118;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
            goto LAB_14c81ee0d;
            uVar15 = ((uint *)((longlong)FVar21 + 4))[iVar5];
          }
          uStack_114 = -uVar15 & uVar15;
          uVar12 = (ulonglong)uStack_114 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uStack_104 = (int)uVar19 + -1 + (int)lVar14;
          uVar12 = (ulonglong)uStack_104;
          local_e4 = (int)lVar14;
          if ((int)local_60 < (int)uStack_104) {
LAB_14c81ee0d:
            uVar12 = (ulonglong)local_60;
            uStack_104 = local_60;
          }
        }
        local_108 = 0xffffffff;
        local_c8 = (longlong *)local_88;
        local_c0._padding_ = CONCAT44(uStack_114,local_118);
        local_c0.Array = pTStack_110;
        local_c0.UnvisitedBitMask = 0xffffffff;
        local_c0.CurrentBitIndex = uStack_104;
        local_c0.BaseBitIndex = uStack_100;
        local_c0._28_4_ = uStack_fc;
        if ((int)uVar12 < (int)local_60) {
          do {
            iVar5 = (int)uVar12;
            uVar15 = local_40 - 1 & *(uint *)(*local_c8 + (longlong)iVar5 * 0xc);
            lVar14 = *local_c8 + (longlong)iVar5 * 0xc;
            *(uint *)(lVar14 + 8) = uVar15;
            FVar10.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_48.Data;
            }
            uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
            *(int *)(FVar10.Data + uVar12 * 4) = iVar5;
            local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
            uVar12 = (ulonglong)(uint)local_c0.CurrentBitIndex;
          } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
        }
      }
    }
  }
  pFVar2 = this->Mesh;
  uVar15 = (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar15 != 0) &&
     (pFVar18 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar18 - 1U))) {
    uVar17 = 1;
    uVar16 = 1;
    if ((int)uVar15 < 2) goto joined_r0x00014c81ef27;
    do {
      lVar14 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar14 + *(longlong *)(pFVar18 + (uVar17 >> 9) * 8)) != 0) &&
         (*(short *)(lVar14 + *(longlong *)(pFVar18 + (uVar17 >> 9) * 8)) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar15);
  }
  uVar16 = (uint)uVar17;
joined_r0x00014c81ef27:
  do {
    if (uVar16 == uVar15) {
      iVar5 = local_88._8_4_ - local_54;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      do {
        if (iVar5 < 1) {
          if (local_140.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data);
          }
          local_40 = 0;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88);
          return;
        }
        iVar9 = 0;
        piVar13 = &(this->Components).ArrayMax;
        iVar5 = (this->Components).ArrayNum;
        if (iVar5 == *piVar13) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&(this->Components).AllocatorInstance,piVar13);
        }
        (this->Components).ArrayNum = iVar5 + 1;
        pFVar18 = (this->Components).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
        *(undefined8 *)&pFVar18[0x10].field_0x0 = 0;
        *(undefined8 *)&pFVar18[0x18].field_0x0 = 0;
        *(undefined8 *)&pFVar18->field_0x0 = 0;
        *(undefined8 *)&pFVar18[8].field_0x0 = 0;
        bVar22 = local_138._4_4_ != 0;
        uVar15 = 0;
        local_138 = (ulonglong)local_138._4_4_ << 0x20;
        if (bVar22) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_140,0,(int *)((longlong)&local_138 + 4));
        }
        uVar16 = uVar15;
        if (local_60 != 0) {
          FVar21 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar21 = local_68;
          }
          uVar16 = *(uint *)FVar21;
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar9;
            uVar15 = uVar15 + 0x20;
            iVar9 = iVar9 + 1;
            uVar16 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
            goto LAB_14c81f0af;
            uVar16 = ((uint *)((longlong)FVar21 + 4))[lVar14];
          }
          uVar17 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar16 = (uVar15 - 1) + (int)lVar14;
          local_dc = (int)lVar14;
          if ((int)local_60 < (int)uVar16) {
            uVar16 = local_60;
          }
        }
LAB_14c81f0af:
        uVar15 = *(uint *)(local_88._0_8_ + (longlong)(int)uVar16 * 0xc);
        local_128[0] = uVar15;
        if (local_88._8_4_ != local_54) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,uVar15,
                     (int *)local_128);
        }
        local_130 = uVar15;
        if (((*(uint **)&pFVar18->field_0x0 <= &local_130) &&
            (&local_130 < *(uint **)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar5 = *(int *)&pFVar18[8].field_0x0;
        if (iVar5 == *(int *)(pFVar18 + 0xc)) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
        }
        *(int *)&pFVar18[8].field_0x0 = iVar5 + 1;
        *(uint *)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar5 * 4) = local_130;
        if (((local_140.Data <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 <
             local_140.Data + (longlong)(int)local_138._4_4_ * 4)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar5 = (int)local_138;
        if ((int)local_138 == local_138._4_4_) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_140,(int *)((longlong)&local_138 + 4));
        }
        local_138 = CONCAT44(local_138._4_4_,iVar5 + 1);
        *(uint *)(local_140.Data + (longlong)iVar5 * 4) = local_130;
        iVar5 = iVar5 + 1;
        while (0 < iVar5) {
          lVar14 = 0;
          iVar11 = iVar5 + -1;
          uVar15 = *(uint *)(local_140.Data + (longlong)iVar11 * 4);
          iVar9 = (iVar5 - iVar11) + -1;
          if (iVar9 != 0) {
            memmove(local_140.Data + (longlong)iVar11 * 4,local_140.Data + (longlong)iVar11 * 4 + 4,
                    (longlong)iVar9 << 2);
            iVar5 = (int)local_138;
          }
          local_138 = CONCAT44(local_138._4_4_,iVar5 + -1);
          lVar3 = *(longlong *)
                   ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar15 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar3 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
          local_f0 = *(undefined4 *)(lVar3 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
          FDynamicMesh3::GetTriNeighbourTris(this->Mesh,local_a0,uVar15);
          iVar5 = 1;
          pFVar20 = (FScriptContainerElement *)local_88._0_8_;
          do {
            local_148[0] = *(uint *)((longlong)&local_a0[0].field0_0x0 + lVar14);
            if (local_88._8_4_ != local_54) {
              FVar10.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_48.Data;
              }
              for (iVar9 = *(int *)(FVar10.Data + (ulonglong)(local_40 - 1 & local_148[0]) * 4);
                  iVar9 != -1; iVar9 = *(int *)(pFVar20 + (longlong)iVar9 * 0xc + 4)) {
                if (*(uint *)(pFVar20 + (longlong)iVar9 * 0xc) == local_148[0]) {
                  iVar9 = *(int *)((longlong)&local_f8 + lVar14);
                  iVar11 = *(int *)((longlong)&local_f8 +
                                   (longlong)
                                   (iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                            (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) &
                                                  0xffffffffU) >> 0x1f)) * -3) * 4);
                  lVar3 = *(longlong *)
                           ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                           (ulonglong)(local_148[0] >> 9) * 8);
                  local_d8 = *(undefined8 *)(lVar3 + (ulonglong)(local_148[0] & 0x1ff) * 0xc);
                  local_d0 = *(int *)(lVar3 + 8 + (ulonglong)(local_148[0] & 0x1ff) * 0xc);
                  iVar6 = (int)((ulonglong)local_d8 >> 0x20);
                  if ((((int)local_d8 != iVar11) || (iVar6 != iVar9)) &&
                     (((iVar6 != iVar11 || (local_d0 != iVar9)) &&
                      ((((local_d0 != iVar11 || ((int)local_d8 != iVar9)) &&
                        (EVar7 = FDynamicMesh3::ReverseTriOrientation(this->Mesh,local_148[0]),
                        EVar7 != Ok)) &&
                       (bVar22 = Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<694323489653391425>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RepairOrientation.cpp"
                                            ,0x41,
                                            "Mesh->ReverseTriOrientation(nbr) == EMeshResult::Ok"),
                       bVar22)))))) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (((local_140.Data <= (FScriptContainerElement *)local_148) &&
                      ((FScriptContainerElement *)local_148 <
                       local_140.Data + (longlong)(int)local_138._4_4_ * 4)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar9 = (int)local_138;
                  if ((int)local_138 == local_138._4_4_) {
                    iVar9 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_140,(int *)((longlong)&local_138 + 4));
                  }
                  local_138 = CONCAT44(local_138._4_4_,iVar9 + 1);
                  *(uint *)(local_140.Data + (longlong)iVar9 * 4) = local_148[0];
                  local_120[0] = local_148[0];
                  if (local_88._8_4_ != local_54) {
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                               local_148[0],(int *)local_120);
                  }
                  if (((*(uint **)&pFVar18->field_0x0 <= local_148) &&
                      (local_148 < *(uint **)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar9 = *(int *)&pFVar18[8].field_0x0;
                  if (iVar9 == *(int *)(pFVar18 + 0xc)) {
                    iVar9 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
                  }
                  *(int *)&pFVar18[8].field_0x0 = iVar9 + 1;
                  *(uint *)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar9 * 4) = local_148[0];
                  pFVar20 = (FScriptContainerElement *)local_88._0_8_;
                  break;
                }
              }
            }
            iVar5 = iVar5 + 1;
            lVar14 = lVar14 + 4;
          } while (lVar14 < 0xc);
          iVar5 = (int)local_138;
        }
        iVar5 = local_88._8_4_ - local_54;
      } while( true );
    }
    while( true ) {
      local_12c = (int)uVar17;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,&local_e0,
                 (bool *)&local_12c);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)uVar15 <= (int)uVar16) break;
      pFVar18 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar14 = (uVar17 >> 9) * 8;
        lVar3 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar18 + lVar14)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar18 + lVar14)) != -1)) break;
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        if ((int)uVar15 <= (int)uVar16) goto joined_r0x00014c81ef27;
      }
    }
  } while( true );
}

// SolveGlobalOrientation @ 14c834b20

void __thiscall
UE::Geometry::FMeshRepairOrientation::SolveGlobalOrientation
          (FMeshRepairOrientation *this,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  Component *pCVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  Component *pCVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FDynamicMeshEditor local_res18 [2];
  
  if (param_1->Mesh != this->Mesh) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree->GetMesh() == Mesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RepairOrientation.cpp"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->Components).ArrayNum;
  pCVar4 = (Component *)(this->Components).AllocatorInstance.Data;
  pCVar6 = pCVar4 + iVar1;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FMeshRepairOrientation::Component,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pCVar4 == pCVar6) break;
    ComputeComponentStatistics(this,param_1,pCVar4);
    pCVar4 = pCVar4 + 1;
  }
  iVar1 = (this->Components).ArrayNum;
  local_res18[0].Mesh = this->Mesh;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->Components).AllocatorInstance.Data;
  pTVar7 = pTVar5 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FMeshRepairOrientation::Component,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pTVar5 == pTVar7) break;
    if ((double)pTVar5[1].AllocatorInstance.Data < *(double *)&pTVar5[1].ArrayNum) {
      FDynamicMeshEditor::ReverseTriangleOrientations(local_res18,pTVar5,true);
    }
    pTVar5 = pTVar5 + 2;
  }
  return;
}

