// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 9

// operator() @ 14e8040f0

TVector<double> * __thiscall
`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_3>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  plVar4 = *(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  uVar11 = *(int *)(*plVar3 + (longlong)param_1 * 4) + param_2;
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar4[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  lVar5 = *plVar4;
  pdVar1 = (double *)(lVar5 + (longlong)(int)uVar11 * 0x18);
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)(int)uVar11 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// AutoCluster @ 14e8055e0

void __cdecl
FFractureEngineClustering::AutoCluster
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          EFractureEngineClusterSizeMethod param_3,uint param_4,float param_5,float param_6,
          bool param_7,bool param_8,bool param_9,int param_10,int param_11,int param_12,
          float param_13,int param_14,bool param_15,float param_16)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  FFractureEngineBoneSelection local_88 [4];
  
  local_88[0].SelectedBones.ArrayNum = param_2->ArrayNum;
  lVar4 = (longlong)local_88[0].SelectedBones.ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_88[0].SelectedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88[0].GeometryCollection = param_1;
  if (local_88[0].SelectedBones.ArrayNum == 0) {
    local_88[0].SelectedBones.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_88[0].SelectedBones.ArrayNum,0,&local_88[0].SelectedBones.AllocatorInstance
               ,local_88[0].SelectedBones.ArrayNum,&local_88[0].SelectedBones.ArrayMax);
    memcpy(local_88[0].SelectedBones.AllocatorInstance.Data,pFVar1,lVar4 << 2);
  }
  FFractureEngineBoneSelection::ConvertSelectionToClusterNodes(local_88);
  iVar2 = local_88[0].SelectedBones.ArrayNum;
  uVar3 = (ulonglong)local_88[0].SelectedBones.ArrayNum;
  pFVar1 = local_88[0].SelectedBones.AllocatorInstance.Data + uVar3 * 4;
  FVar5.Data = local_88[0].SelectedBones.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar3 != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    AutoCluster(param_1,*(int *)FVar5.Data,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11,param_12,param_13,param_14,param_15,param_16);
    uVar3 = (ulonglong)(uint)local_88[0].SelectedBones.ArrayNum;
    FVar5.Data = FVar5.Data + 4;
  }
  if (local_88[0].SelectedBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].SelectedBones.AllocatorInstance.Data);
  }
  return;
}

// AutoCluster @ 14e8057e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineClustering::AutoCluster
          (FGeometryCollection *param_1,int param_2,EFractureEngineClusterSizeMethod param_3,
          uint param_4,float param_5,float param_6,bool param_7,bool param_8,bool param_9,
          int param_10,int param_11,int param_12,float param_13,int param_14,bool param_15,
          float param_16)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  ForAnyElementType FVar21;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  longlong lVar28;
  longlong lVar29;
  FString *pFVar30;
  int iVar31;
  ulong64 uVar32;
  ulonglong uVar33;
  uint *puVar34;
  uint *puVar35;
  FGeometryCollection *pFVar36;
  float fVar37;
  undefined1 auStackY_338 [32];
  uint local_2f4;
  undefined1 local_2f0;
  undefined1 local_2ef [3];
  uint local_2ec;
  int local_2e8;
  uint local_2e4;
  FGeometryCollection *local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2d8;
  FString local_2c8;
  uint local_2b8;
  FScriptContainerElement *local_2b0;
  int local_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a0;
  undefined4 local_298;
  uint uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  uint local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined4 local_260;
  int local_25c;
  FGeometryCollectionProximityUtility local_258;
  longlong local_250;
  longlong local_248;
  ulonglong local_240;
  int local_238;
  undefined4 local_234;
  int local_230;
  longlong *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_220;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  FVoronoiPartitioner local_1d8;
  FScriptContainerElement *local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  FSparseArrayAllocationInfo local_148;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_138;
  TArrayView<UE::Math::TVector<double>_const_,int> local_128;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_118;
  TBoxSphereBounds<double,double> local_108;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar12 = 0;
  local_2b8 = (uint)~param_2 >> 0x1f;
  local_2b0 = (FScriptContainerElement *)0x0;
  local_2f4 = 1;
  uVar25 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar25 = local_2b8;
  }
  local_2e8 = param_2;
  local_2e0 = param_1;
  if ((uVar25 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar36 = local_2e0;
  local_250 = (longlong)local_2e8 * 0x50;
  iVar31 = *(int *)(local_250 + 8 + param_1->_padding_) -
           *(int *)(local_250 + 0x34 + param_1->_padding_);
  uVar25 = param_4;
  if (param_3 != ByNumber) {
    if (param_3 == ByFractionOfInput) {
      fVar37 = (float)iVar31 * param_5;
      if (fVar37 <= __real_40000000) {
        fVar37 = __real_40000000;
      }
      uVar25 = (int)fVar37;
    }
    else if (param_3 == BySize) {
      pTVar14 = FGeometryCollection::GetBoundingBox(local_2e0,&local_108);
      dVar2 = (pTVar14->Origin).field0_0x0._s_0.Y;
      dVar3 = (pTVar14->Origin).field0_0x0._s_0.X;
      dVar4 = (pTVar14->Origin).field0_0x0._s_0.Z;
      fVar37 = (float)((((pTVar14->BoxExtent).field0_0x0._s_0.Y + dVar2) -
                       (dVar2 - (pTVar14->BoxExtent).field0_0x0._s_0.Y)) *
                       (((pTVar14->BoxExtent).field0_0x0._s_0.X + dVar3) -
                       (dVar3 - (pTVar14->BoxExtent).field0_0x0._s_0.X)) *
                      (((pTVar14->BoxExtent).field0_0x0._s_0.Z + dVar4) -
                      (dVar4 - (pTVar14->BoxExtent).field0_0x0._s_0.Z))) /
               (param_6 * param_6 * param_6);
      if (fVar37 <= __real_3f800000) {
        fVar37 = __real_3f800000;
      }
      uVar25 = (int)fVar37;
    }
    else {
      uVar25 = local_2f4;
      if (param_3 == ByGrid) {
        pTVar15 = GenerateGridSites(&local_138,local_2e0,local_2e8,param_10,param_11,param_12,
                                    (TBox<double> *)0x0);
        uVar12 = 0;
        if (&local_118 != pTVar15) {
          local_2b0 = (pTVar15->AllocatorInstance).Data;
          (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          uVar12 = pTVar15->ArrayNum;
          pTVar15->ArrayNum = 0;
          pTVar15->ArrayMax = 0;
        }
        uVar25 = uVar12;
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
      }
    }
  }
  local_2f4 = uVar25;
  if (param_15) {
    ConvexityBasedCluster(pFVar36,local_2e8,param_4,param_7,param_8,param_16);
    goto LAB_14e80696c;
  }
  FVoronoiPartitioner::FVoronoiPartitioner(&local_1d8,pFVar36,local_2e8);
  if ((1 < (int)local_2f4) && (1 < iVar31)) {
    if (0.0 < param_13) {
      FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)pFVar36);
    }
    uVar25 = local_2f4;
    do {
      local_158 = local_2b0;
      local_2e4 = uVar25;
      if (((int)uVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_128._12_4_ = uStack_14c;
      local_128.ArrayNum = uVar12;
      local_128.DataPtr = (TVector<double> *)local_158;
      local_1d8.PartitionCount = uVar25;
      if (uVar12 != 0) {
        local_1d8.PartitionCount = uVar12;
      }
      uStack_150 = uVar12;
      FVoronoiPartitioner::InitializePartitions(&local_1d8,&local_128);
      iVar31 = 0;
      if (0 < param_14 + 1) {
        do {
          bVar10 = FVoronoiPartitioner::Refine(&local_1d8);
          if (!bVar10) break;
          iVar31 = iVar31 + 1;
        } while (iVar31 < param_14 + 1);
      }
      if (local_1d8.PartitionCount == 0) break;
      if ((param_7) || (param_8)) {
        FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_258,pFVar36)
        ;
        FGeometryCollectionProximityUtility::UpdateProximity(&local_258,(FConvexHulls *)0x0);
        if (param_7) {
          FVoronoiPartitioner::SplitDisconnectedPartitions(&local_1d8,pFVar36);
        }
      }
      if (0.0 < param_13) {
        FVoronoiPartitioner::MergeSmallPartitions(&local_1d8,pFVar36,param_13);
      }
      iVar31 = local_1d8.PartitionSize.ArrayNum;
      if (param_8) {
        uVar19 = (ulonglong)local_1d8.PartitionSize.ArrayNum;
        iVar18 = 0;
        pFVar1 = local_1d8.PartitionSize.AllocatorInstance.Data + uVar19 * 4;
        FVar27.Data = local_1d8.PartitionSize.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar19 != iVar31) {
            local_2f0 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_2f0);
            uVar19 = (ulonglong)(uint)local_1d8.PartitionSize.ArrayNum;
          }
          if (FVar27.Data == pFVar1) break;
          iVar13 = iVar18 + 1;
          if (*(int *)FVar27.Data != 1) {
            iVar13 = iVar18;
          }
          iVar18 = iVar13;
          FVar27.Data = FVar27.Data + 4;
        }
      }
      else {
        uVar19 = (ulonglong)(uint)local_1d8.PartitionSize.ArrayNum;
        iVar18 = 0;
      }
      iVar31 = 0;
      iVar13 = (int)uVar19;
      pFVar1 = local_1d8.PartitionSize.AllocatorInstance.Data + (longlong)iVar13 * 4;
      FVar27.Data = local_1d8.PartitionSize.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar13) {
          local_2ef[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2ef);
          uVar19 = (ulonglong)(uint)local_1d8.PartitionSize.ArrayNum;
        }
        if (FVar27.Data == pFVar1) break;
        iVar9 = iVar31 + 1;
        if (*(int *)FVar27.Data != 0) {
          iVar9 = iVar31;
        }
        iVar31 = iVar9;
        FVar27.Data = FVar27.Data + 4;
      }
      iVar18 = ((int)uVar19 - iVar31) - iVar18;
      if ((((!param_9) || (uVar12 != 0)) || (iVar18 <= (int)local_2f4)) ||
         (((int)local_2e4 < 2 || (0x7ffffffe < iVar18)))) goto LAB_14e805c59;
      uVar25 = local_2e4 - 1;
      pFVar36 = local_2e0;
    } while( true );
  }
  goto LAB_14e8068e9;
LAB_14e805c59:
  iVar18 = FVoronoiPartitioner::GetNonEmptyPartitionCount(&local_1d8);
  iVar31 = local_1d8.PartitionCount;
  pFVar36 = local_2e0;
  bVar10 = 0 < iVar18;
  if ((!param_8) || (iVar18 != 1)) {
    lVar28 = (longlong)local_1d8.PartitionCount;
    uVar12 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)local_2e0,local_1d8.PartitionCount,
                        FTransformCollection::TransformGroup);
    uVar19 = (ulonglong)(int)uVar12;
    local_2e4 = 0;
    if (0 < iVar31) {
      local_268 = 0;
      local_248 = lVar28;
      local_240 = uVar19;
      do {
        uVar33 = local_240;
        lVar28 = local_268;
        uVar25 = local_2e4;
        FVoronoiPartitioner::GetPartition(&local_1d8,&local_2d8,local_2e4);
        if ((param_8) && (local_2d8.ArrayNum == 1)) {
          bVar10 = true;
          local_2d8.ArrayNum = 0;
          if ((local_2d8.ArrayMax < 0) && (local_2d8.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_2d8.AllocatorInstance,0,&local_2d8.ArrayMax);
          }
        }
        local_2ec = uVar25 + (int)uVar19;
        uVar23 = 0;
        uVar26 = uVar23;
        if ((int)local_2ec < (int)pFVar36->_padding_) {
          uVar26 = ~local_2ec >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)(pFVar36->_padding_ + (lVar28 + uVar33) * 4) = local_2e8;
        uVar26 = uVar23;
        if (local_2e8 < (int)pFVar36->_padding_) {
          uVar26 = local_2b8;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (local_250 + pFVar36->_padding_),&local_238,(bool *)&local_2ec);
        ::FString::FString(&local_2c8,"ClusterBone");
        lVar29 = (longlong)(int)local_2ec;
        if ((int)local_2ec < (int)pFVar36->_padding_) {
          uVar23 = ~local_2ec >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar30 = (FString *)(lVar29 * 0x10 + pFVar36->_padding_);
        if (pFVar30 != &local_2c8) {
          pFVar1 = (pFVar30->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (pFVar30->Data).AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
          local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar30->Data).ArrayNum = local_2c8.Data.ArrayNum;
          (pFVar30->Data).ArrayMax = local_2c8.Data.ArrayMax;
          local_2c8.Data.ArrayNum = 0;
          local_2c8.Data.ArrayMax = 0;
        }
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        iVar31 = local_2d8.ArrayNum;
        FVar27.Data = local_2d8.AllocatorInstance.Data;
        uVar32 = (ulong64)local_2d8.ArrayNum;
        if ((local_2d8.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_c8._0_8_ = (FScriptContainerElement *)0x0;
        local_c8._8_8_ = 0;
        local_a8 = (ForElementType<unsigned_int>)0x0;
        local_a0 = 0;
        local_9c = 0x80;
        local_98 = -1;
        local_94 = 0;
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = 0;
        if (iVar31 != 0) {
          if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum(uVar32);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,iVar31);
          uVar26 = 1;
          if (3 < (uint)iVar31) {
            uVar19 = (ulonglong)(((uint)iVar31 >> 1) + 7) * 2 + 1;
            lVar29 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            local_234 = (undefined4)lVar29;
            uVar26 = 1 << ((byte)lVar29 & 0x1f);
          }
          if ((local_80 == 0) || ((int)local_80 < (int)uVar26)) {
            local_80 = uVar26;
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
            }
            if (uVar26 != 0) {
              uVar23 = uVar26;
              if (uVar26 < 2) {
                if (local_88.Data != (FScriptContainerElement *)0x0) {
                  uVar23 = 0;
                  goto LAB_14e805fb1;
                }
              }
              else {
LAB_14e805fb1:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_88,0,uVar23,4);
              }
              if (0 < (int)uVar26) {
                uVar19 = 0;
                uVar33 = (ulonglong)uVar26;
                do {
                  FVar21.Data = local_90;
                  if (local_88.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_88.Data;
                  }
                  uVar16 = (longlong)(int)uVar26 - 1U & uVar19;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)(FVar21.Data + uVar16 * 4) = 0xffffffff;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
              }
            }
            if (local_80 != 0) {
              pTStack_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
              uStack_2a4 = 1;
              local_2a8 = 0;
              uStack_294 = 0;
              iStack_290 = 0;
              if (local_a0 != 0) {
                FVar20 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
                if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                  FVar20 = local_a8;
                }
                uVar26 = *(uint *)FVar20;
                iStack_290 = 0;
                local_2a8 = 0;
                while (uVar26 == 0) {
                  iStack_290 = iStack_290 + 0x20;
                  lVar29 = (longlong)local_2a8;
                  local_2a8 = local_2a8 + 1;
                  if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2a8
                     ) goto LAB_14e8060bd;
                  uVar26 = ((uint *)((longlong)FVar20 + 4))[lVar29];
                }
                uStack_2a4 = -uVar26 & uVar26;
                uVar19 = (ulonglong)uStack_2a4 * 2 + 1;
                lVar29 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                  }
                }
                local_230 = (int)lVar29;
                uStack_294 = iStack_290 + -1 + local_230;
                if ((int)local_a0 < (int)uStack_294) {
LAB_14e8060bd:
                  uStack_294 = local_a0;
                }
              }
              local_298 = 0xffffffff;
              local_228 = (longlong *)local_c8;
              local_220._padding_ = CONCAT44(uStack_2a4,local_2a8);
              local_220.CurrentBitIndex = uStack_294;
              local_220.UnvisitedBitMask = 0xffffffff;
              local_220._28_4_ = uStack_28c;
              local_220.BaseBitIndex = iStack_290;
              local_220.Array = pTStack_2a0;
              uVar26 = uStack_294;
              if ((int)uStack_294 < (int)local_a0) {
                do {
                  lVar29 = *local_228;
                  lVar17 = (longlong)(int)uVar26;
                  uVar23 = local_80 - 1 & *(uint *)(lVar29 + lVar17 * 0xc);
                  *(uint *)(lVar29 + 8 + lVar17 * 0xc) = uVar23;
                  FVar21.Data = local_90;
                  if (local_88.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_88.Data;
                  }
                  uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar23;
                  *(undefined4 *)(lVar29 + 4 + lVar17 * 0xc) =
                       *(undefined4 *)(FVar21.Data + uVar19 * 4);
                  *(uint *)(FVar21.Data + uVar19 * 4) = uVar26;
                  local_220.UnvisitedBitMask =
                       local_220.UnvisitedBitMask & ~local_220._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_220);
                  uVar26 = local_220.CurrentBitIndex;
                } while (local_220.CurrentBitIndex < (local_220.Array)->NumBits);
              }
            }
          }
        }
        pFVar1 = FVar27.Data + uVar32 * 4;
        if (FVar27.Data != pFVar1) {
          puVar35 = (uint *)0x0;
          do {
            if (local_94 == 0) {
              iVar31 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0xc,4,1,(ForAnyElementType *)local_c8,(int *)(local_c8 + 8),
                                  (int *)(local_c8 + 0xc));
              uVar25 = local_a0;
              if (local_a0 == 0) {
                iVar18 = 0;
LAB_14e80620c:
                if (local_9c < (int)(local_a0 + 1)) {
                  uVar26 = local_9c + 0x1fU >> 5;
                  uVar23 = local_a0 + 0x20 >> 5;
                  if (uVar23 < 5) {
                    local_9c = 4;
                  }
                  else {
                    uVar19 = (ulonglong)uVar23;
                    if (uVar26 < 5) {
                      uVar26 = 0;
                    }
                    if (uVar26 == 0) {
                      uVar33 = 4;
                      if (4 < uVar19) {
                        uVar33 = uVar19;
                      }
                    }
                    else {
                      uVar33 = ((ulonglong)uVar23 * 3 >> 3) + 0x10 + uVar19;
                    }
                    uVar32 = FMemory::QuantizeSize(uVar33 * 4,0);
                    local_9c = (int)(uVar32 >> 2);
                    if (local_9c < (int)uVar23) {
                      local_9c = 0x7fffffff;
                    }
                  }
                  local_9c = local_9c << 5;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),local_a0);
                }
                local_a0 = local_a0 + 1;
                uVar23 = (int)local_a0 >> 0x1f & 0x1f;
                uVar26 = local_a0 + uVar23;
                iVar13 = (uVar26 & 0x1f) - uVar23;
                if (iVar13 != 0) {
                  FVar20 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
                  if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = local_a8;
                  }
                  puVar24 = (uint *)((longlong)FVar20 + (longlong)((int)uVar26 >> 5) * 4);
                  *puVar24 = *puVar24 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
                }
              }
              else {
                iVar18 = (int)(local_a0 + ((int)local_a0 >> 0x1f & 0x1fU)) >> 5;
                if (iVar18 != (int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5)
                goto LAB_14e80620c;
                local_a0 = local_a0 + 1;
              }
              FVar20 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
              if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                FVar20 = local_a8;
              }
              puVar24 = (uint *)((longlong)FVar20 + (longlong)iVar18 * 4);
              *puVar24 = *puVar24 & ~(1 << ((byte)uVar25 & 0x1f));
              iVar18 = local_98;
            }
            else {
              iVar18 = *(int *)(local_c8._0_8_ + (longlong)local_98 * 0xc + 4);
              local_94 = local_94 + -1;
              iVar31 = local_98;
              if (local_94 != 0) {
                *(undefined4 *)(local_c8._0_8_ + (longlong)iVar18 * 0xc) = 0xffffffff;
              }
            }
            local_98 = iVar18;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_c8,&local_148,iVar31);
            puVar24 = puVar35;
            if (local_148.Pointer != (uint *)0x0) {
              *(uint *)local_148.Pointer = *(uint *)FVar27.Data;
              *(uint *)((longlong)local_148.Pointer + 4) = 0xffffffff;
              puVar24 = local_148.Pointer;
            }
            uVar25 = *puVar24;
            if ((local_c8._8_4_ - local_94 != 1) && (local_c8._8_4_ != local_94)) {
              FVar21.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_88.Data;
              }
              for (iVar31 = *(int *)(FVar21.Data + (ulonglong)(local_80 - 1 & uVar25) * 4);
                  iVar31 != -1; iVar31 = *(int *)(local_c8._0_8_ + (longlong)iVar31 * 0xc + 4)) {
                if (*(uint *)(local_c8._0_8_ + (longlong)iVar31 * 0xc) == uVar25) {
                  if (iVar31 != -1) {
                    *(uint *)(local_c8._0_8_ + (longlong)iVar31 * 0xc) = uVar25;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_c8,local_148.Index,1);
                    goto LAB_14e8066b0;
                  }
                  break;
                }
              }
            }
            uVar23 = local_c8._8_4_ - local_94;
            uVar26 = 1;
            if (3 < uVar23) {
              uVar19 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
              lVar28 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_260 = (undefined4)lVar28;
              uVar26 = 1 << ((byte)lVar28 & 0x1f);
            }
            if (((int)uVar23 < 1) || ((int)uVar26 <= (int)local_80)) {
              uVar25 = local_80 - 1 & uVar25;
              puVar24[2] = uVar25;
              FVar21.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_88.Data;
              }
              uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar25;
              puVar24[1] = *(uint *)(FVar21.Data + uVar19 * 4);
              *(int *)(FVar21.Data + uVar19 * 4) = local_148.Index;
            }
            else {
              local_80 = uVar26;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_88,0,0,4);
              }
              if (uVar26 != 0) {
                uVar25 = uVar26;
                if (uVar26 < 2) {
                  if (local_88.Data != (FScriptContainerElement *)0x0) {
                    uVar25 = 0;
                    goto LAB_14e8064b3;
                  }
                }
                else {
LAB_14e8064b3:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_88,0,uVar25,4);
                }
                if (0 < (int)uVar26) {
                  uVar19 = (ulonglong)uVar26;
                  puVar24 = puVar35;
                  do {
                    FVar21.Data = local_90;
                    if (local_88.Data != (FScriptContainerElement *)0x0) {
                      FVar21.Data = local_88.Data;
                    }
                    uVar33 = (ulonglong)puVar24 & (longlong)(int)uVar26 - 1U;
                    puVar24 = (uint *)((longlong)puVar24 + 1);
                    *(undefined4 *)(FVar21.Data + uVar33 * 4) = 0xffffffff;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
              }
              if (local_80 != 0) {
                pTStack_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
                local_288 = 0;
                uStack_284 = 1;
                uStack_274 = 0;
                uStack_270 = 0;
                puVar24 = puVar35;
                if (local_a0 != 0) {
                  FVar20 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
                  if (local_a8 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = local_a8;
                  }
                  uVar25 = *(uint *)FVar20;
                  puVar34 = puVar35;
                  while (uVar25 == 0) {
                    uStack_270 = (int)puVar34 + 0x20;
                    puVar34 = (uint *)(ulonglong)uStack_270;
                    iVar31 = (int)puVar24;
                    local_288 = iVar31 + 1;
                    puVar24 = (uint *)(ulonglong)local_288;
                    if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)local_288) goto LAB_14e8065cd;
                    uVar25 = ((uint *)((longlong)FVar20 + 4))[iVar31];
                  }
                  uStack_284 = -uVar25 & uVar25;
                  uVar19 = (ulonglong)uStack_284 * 2 + 1;
                  lVar28 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                    }
                  }
                  local_25c = (int)lVar28;
                  uStack_274 = local_25c + -1 + uStack_270;
                  puVar24 = (uint *)(ulonglong)uStack_274;
                  if ((int)local_a0 < (int)uStack_274) {
LAB_14e8065cd:
                    puVar24 = (uint *)(ulonglong)local_a0;
                    uStack_274 = local_a0;
                  }
                }
                local_278 = 0xffffffff;
                local_200 = (longlong *)local_c8;
                local_1f8._padding_ = CONCAT44(uStack_284,local_288);
                local_1f8.CurrentBitIndex = uStack_274;
                local_1f8.UnvisitedBitMask = 0xffffffff;
                local_1f8._28_4_ = uStack_26c;
                local_1f8.BaseBitIndex = uStack_270;
                local_1f8.Array = pTStack_280;
                if ((int)puVar24 < (int)local_a0) {
                  do {
                    lVar28 = *local_200;
                    lVar29 = (longlong)(int)puVar24;
                    uVar25 = local_80 - 1 & *(uint *)(lVar28 + lVar29 * 0xc);
                    *(uint *)(lVar28 + 8 + lVar29 * 0xc) = uVar25;
                    FVar21.Data = local_90;
                    if (local_88.Data != (FScriptContainerElement *)0x0) {
                      FVar21.Data = local_88.Data;
                    }
                    uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar25;
                    *(undefined4 *)(lVar28 + 4 + lVar29 * 0xc) =
                         *(undefined4 *)(FVar21.Data + uVar19 * 4);
                    *(int *)(FVar21.Data + uVar19 * 4) = (int)puVar24;
                    local_1f8.UnvisitedBitMask =
                         local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
                    puVar24 = (uint *)(ulonglong)(uint)local_1f8.CurrentBitIndex;
                  } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
                }
              }
            }
LAB_14e8066b0:
            FVar27.Data = FVar27.Data + 4;
            pFVar36 = local_2e0;
            lVar28 = local_268;
            uVar25 = local_2e4;
          } while (FVar27.Data != pFVar1);
        }
        lVar29 = (longlong)(int)local_2ec;
        uVar26 = 0;
        if ((int)local_2ec < (int)pFVar36->_padding_) {
          uVar26 = ~local_2ec >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar22 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  (lVar29 * 0x50 + pFVar36->_padding_);
        if (pTVar22 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
          Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                    (pTVar22,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8);
        }
        local_80 = 0;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_c8,0);
        if (local_a8 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_a8);
        }
        if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c8._0_8_);
        }
        lVar29 = (longlong)(int)local_2ec;
        uVar26 = 0;
        if ((int)local_2ec < *(int *)&(pFVar36->SimulationType).field_0x18) {
          uVar26 = ~local_2ec >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)&(pFVar36->SimulationType).field_0x10 + lVar29 * 4) = 2;
        _Var8 = UE::Math::TTransform<float>::Identity.Scale3D;
        _Var7 = UE::Math::TTransform<float>::Identity.Translation;
        _Var6 = UE::Math::TTransform<float>::Identity.Rotation;
        lVar29 = (longlong)(int)local_2ec;
        uVar26 = 0;
        if ((int)local_2ec < (int)pFVar36->_padding_) {
          uVar26 = ~local_2ec >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = pFVar36->_padding_;
        *(__m128 *)(lVar17 + lVar29 * 0x30) = _Var6;
        *(__m128 *)(lVar17 + 0x10 + lVar29 * 0x30) = _Var7;
        *(__m128 *)(lVar17 + 0x20 + lVar29 * 0x30) = _Var8;
        GeometryCollectionAlgo::ParentTransforms
                  ((FManagedArrayCollection *)pFVar36,local_2ec,&local_2d8);
        if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.AllocatorInstance.Data);
        }
        local_2e4 = uVar25 + 1;
        local_268 = lVar28 + 1;
        if (local_248 <= local_268) break;
        uVar19 = (ulonglong)uVar12;
      } while( true );
    }
    if (bVar10) {
      FGeometryCollectionClusteringUtility::RemoveDanglingClusters(pFVar36);
    }
    FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren(pFVar36,local_2e8);
    FGeometryCollectionClusteringUtility::RecursivelyUpdateChildBoneNames
              (local_2e8,
               (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
               &pFVar36->_padding_,(TManagedArray<FString> *)&pFVar36->_padding_,false);
    FGeometryCollectionClusteringUtility::ValidateResults(pFVar36);
  }
LAB_14e8068e9:
  if (local_1d8.Visited.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Visited.AllocatorInstance.Data);
  }
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_1d8.Connectivity.AllocatorInstance.Data,local_1d8.Connectivity.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
      local_1d8.Connectivity.AllocatorInstance.Data !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_1d8.Connectivity.AllocatorInstance.Data);
  }
  if (local_1d8.PartitionCenters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.PartitionCenters.AllocatorInstance.Data);
  }
  if (local_1d8.PartitionSize.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.PartitionSize.AllocatorInstance.Data);
  }
  if (local_1d8.Partitions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Partitions.AllocatorInstance.Data);
  }
  if (local_1d8.Centroids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Centroids.AllocatorInstance.Data);
  }
  if (local_1d8.TransformIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.TransformIndices.AllocatorInstance.Data);
  }
LAB_14e80696c:
  if (local_2b0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0);
  }
  return;
}

// ClusterMagnet @ 14e807520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FFractureEngineClustering::ClusterMagnet
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3
          )

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  FIdentityFunctor FVar8;
  TManagedArray<int> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  ForAnyElementType _Dst;
  longlong lVar16;
  undefined1 *_Src;
  uint uVar17;
  uint *puVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FClusterMagnet *pFVar23;
  byte bVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_638 [32];
  FIdentityFunctor local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_5e0;
  undefined1 local_5d0 [4];
  uint local_5cc;
  TArray<UE::Private::ClusterMagnet::FClusterMagnet,TSizedDefaultAllocator<32>_> local_5c8;
  int local_5b8;
  FScriptContainerElement *local_5b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5a8;
  int iStack_588;
  undefined4 uStack_584;
  FGeometryCollection *local_580;
  int local_578;
  int local_574;
  int local_570;
  TManagedArray<int> *local_568;
  FScriptContainerElement *local_560;
  uint uStack_558;
  uint uStack_554;
  TBitArray<FDefaultBitArrayAllocator> *local_550;
  undefined4 uStack_548;
  uint uStack_544;
  uint local_540;
  undefined4 uStack_53c;
  FScriptContainerElement *local_530;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_528;
  undefined8 uStack_508;
  undefined1 local_500 [64];
  ForAnyElementType local_4c0;
  uint local_4b8;
  FName local_4b0 [4];
  undefined4 local_48c;
  undefined4 local_46c;
  FCollectionHierarchyFacade local_468;
  FCollectionTransformSelectionFacade local_3b8;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  int local_114;
  void *local_108;
  undefined4 local_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  undefined1 local_a8 [72];
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_5b8 = param_3;
  local_580 = param_1;
  iVar12 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  bVar10 = false;
  if (iVar12 != 0) {
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
              (&local_468,(FManagedArrayCollection *)param_1);
    Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_468);
    FVar7 = FTransformCollection::TransformGroup;
    pFVar15 = ::FName::FName(local_4b0,"Level");
    local_568 = FManagedArrayCollection::GetAttribute<int>
                          ((FManagedArrayCollection *)param_1,*pFVar15,FVar7);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_3b8,(FManagedArrayCollection *)param_1);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_3b8,param_2,true);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    ConvertEmbeddedSelectionToParents(&local_3b8,param_2);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::GetClusteredSelections
              (&local_3b8,
               (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                *)local_148,param_2);
    uVar20 = local_120;
    iVar12 = 0;
    TStack_5a8.BaseBitIndex = 0;
    uVar13 = 1;
    TStack_5a8.CurrentBitIndex = 0;
    if (local_120 != 0) {
      puVar18 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar18 = local_128;
      }
      uVar17 = *puVar18;
      while (uVar17 == 0) {
        lVar16 = (longlong)iVar12;
        TStack_5a8.BaseBitIndex = TStack_5a8.BaseBitIndex + 0x20;
        iVar12 = iVar12 + 1;
        TStack_5a8.CurrentBitIndex = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14e8076a3;
        uVar17 = puVar18[lVar16 + 1];
      }
      uVar13 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar13 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_578 = (int)lVar16;
      TStack_5a8.CurrentBitIndex = TStack_5a8.BaseBitIndex + -1 + local_578;
      if ((int)local_120 < TStack_5a8.CurrentBitIndex) {
        TStack_5a8.CurrentBitIndex = local_120;
      }
    }
LAB_14e8076a3:
    local_5b0 = (FScriptContainerElement *)local_148;
    TStack_5a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    uVar17 = local_120 & 0xffffffe0;
    iStack_588 = local_148._8_4_ - local_114;
    TStack_5a8._padding_ = CONCAT44(uVar13,iVar12);
    TStack_5a8.UnvisitedBitMask = 0xffffffff;
    TStack_5a8._28_4_ = local_48c;
    TStack_528._padding_ = TStack_5a8._padding_;
    iVar12 = (int)local_120 >> 5;
    uStack_508 = CONCAT44(uStack_584,iStack_588);
    bVar24 = (byte)local_120;
    local_5cc = local_120;
    TStack_528.BaseBitIndex = TStack_5a8.BaseBitIndex;
    TStack_528._28_4_ = local_48c;
    TStack_528.UnvisitedBitMask = 0xffffffff;
    local_530 = local_5b0;
    TStack_528.Array = TStack_5a8.Array;
    TStack_528.CurrentBitIndex = TStack_5a8.CurrentBitIndex;
    if (((int)local_120 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    FVar8 = local_5e8;
    uVar6 = _UNK_150631d98;
    uVar5 = ___xmm_00000000ffffffff0000008000000000;
    if (uVar20 != local_120) {
      puVar18 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar18 = local_128;
      }
      uVar20 = -1 << (bVar24 & 0x1f) & puVar18[iVar12];
      while (uVar20 == 0) {
        lVar16 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar20 = local_120;
        local_5cc = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14e8077e0;
        uVar20 = puVar18[lVar16 + 1];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_574 = (int)lVar16;
      local_5cc = local_574 + -1 + uVar17;
      uVar20 = local_5cc;
      if ((int)local_120 < (int)local_5cc) {
        uVar20 = local_120;
        local_5cc = local_120;
      }
    }
LAB_14e8077e0:
    while( true ) {
      pFVar25 = local_530;
      if (*(int *)(local_530 + 8) - *(int *)(local_530 + 0x34) != (int)uStack_508) {
        local_5e7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5e7);
      }
      pTVar9 = local_568;
      if (((TStack_528.CurrentBitIndex == uVar20) &&
          (TStack_528.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
         (pFVar25 == (FScriptContainerElement *)local_148)) break;
      puVar18 = (uint *)((longlong)TStack_528.CurrentBitIndex * 0x20 +
                        *(longlong *)&pFVar25->field_0x0);
      uVar13 = *puVar18;
      if (uVar13 != 0xffffffff) {
        uVar17 = 0;
        iVar12 = 0;
        uVar20 = uVar17;
        if ((int)uVar13 < *(int *)&local_568->field_0x18) {
          uVar20 = ~uVar13 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        iVar14 = *(int *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar13 * 4);
        uVar20 = *puVar18;
        uVar13 = uVar17;
        if ((int)uVar20 < (int)param_1->_padding_) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        UE::Private::ClusterMagnet::InitializeConnectivity
                  ((TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)local_a8,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((longlong)(int)uVar20 * 0x50 + param_1->_padding_),param_1,iVar14 + 1);
        uVar20 = *puVar18;
        local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayNum = 0;
        local_5c8.ArrayMax = 0;
        local_f8.Elements._0_8_ = 0;
        if ((int)uVar20 < (int)param_1->_padding_) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        local_f8.Elements._8_8_ = 0;
        local_f8.Elements._32_8_ = 0;
        local_f8.Elements._40_4_ = 0;
        local_f8.Elements._44_4_ = 0x80;
        local_f8.Elements._48_4_ = 0xffffffff;
        local_f8.Elements._52_4_ = 0;
        local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_f8.HashSize = 0;
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        UE::Private::ClusterMagnet::SeparateClusterMagnets
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((longlong)(int)uVar20 * 0x50 + param_1->_padding_),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar18 + 2),
                   (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)local_a8,&local_5c8,&local_f8);
        if (0 < param_3) {
          do {
            iVar14 = local_5c8.ArrayNum;
            bVar24 = 0;
            pFVar23 = (FClusterMagnet *)
                      (local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayNum * 0xa0);
            FVar19.Data = local_5c8.AllocatorInstance.Data;
            while( true ) {
              if (local_5c8.ArrayNum != iVar14) {
                local_5e6[0] = 0;
                `TCheckedPointerIterator<UE::Private::ClusterMagnet::FClusterMagnet,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_5e6);
              }
              uVar20 = local_60;
              if ((FClusterMagnet *)FVar19.Data == pFVar23) break;
              local_500._0_8_ = 0;
              local_500._32_8_ = 0;
              local_4b8 = 0;
              lVar16 = (longlong)(int)local_60;
              local_500._8_8_ = 0;
              local_4c0.Data = (FScriptContainerElement *)0x0;
              local_500._40_8_ = uVar5;
              local_500._48_8_ = uVar6;
              if (1 < local_60) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_4c0,0,local_60,4);
              }
              _Src = local_a8 + 0x38;
              if ((undefined1 *)local_a8._64_8_ != (undefined1 *)0x0) {
                _Src = (undefined1 *)local_a8._64_8_;
              }
              _Dst.Data = (FScriptContainerElement *)(local_500 + 0x38);
              if (local_4c0.Data != (FScriptContainerElement *)0x0) {
                _Dst.Data = local_4c0.Data;
              }
              if (uVar20 != 0) {
                memcpy(_Dst.Data,_Src,lVar16 << 2);
              }
              local_4b8 = uVar20;
              TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_500,
                          (TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_a8);
              bVar10 = UE::Private::ClusterMagnet::AbsorbClusterNeighbors
                                 ((TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                   *)local_500,(FClusterMagnet *)FVar19.Data,&local_f8);
              bVar24 = bVar24 | bVar10;
              FVar19.Data = FVar19.Data + 0xa0;
            }
          } while ((bVar24 != 0) && (iVar12 = iVar12 + 1, iVar12 < local_5b8));
        }
        iVar12 = local_5c8.ArrayNum;
        pFVar25 = local_5c8.AllocatorInstance.Data + 0x20;
        pFVar22 = local_5c8.AllocatorInstance.Data + (longlong)local_5c8.ArrayNum * 0xa0;
        while( true ) {
          uVar20 = 0;
          if (local_5c8.ArrayNum != iVar12) {
            local_5e8 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<UE::Private::ClusterMagnet::FClusterMagnet,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_5e8);
          }
          pFVar1 = pFVar25 + -0x20;
          uVar13 = 0;
          if (pFVar1 == pFVar22) break;
          if (1 < *(int *)(pFVar25 + -0x18) - *(int *)(pFVar25 + 0x14)) {
            local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5e0.ArrayNum = 0;
            local_5e0.ArrayMax = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,*(int *)(pFVar25 + -0x18) - *(int *)(pFVar25 + 0x14),
                       &local_5e0.AllocatorInstance,0,&local_5e0.ArrayMax);
            uStack_554 = 1;
            uVar17 = *(uint *)(pFVar25 + 8);
            local_540 = uVar13;
            uStack_544 = uVar20;
            if (uVar17 != 0) {
              pFVar21 = *(FScriptContainerElement **)pFVar25;
              if (*(FScriptContainerElement **)pFVar25 == (FScriptContainerElement *)0x0) {
                pFVar21 = pFVar25 + -0x10;
              }
              uVar3 = *(uint *)pFVar21;
              local_540 = uVar20;
              uVar13 = uVar20;
              while (uVar3 == 0) {
                lVar16 = (longlong)(int)uVar13;
                local_540 = local_540 + 0x20;
                uVar13 = uVar13 + 1;
                uStack_544 = uVar17;
                if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
                goto LAB_14e807bee;
                uVar3 = *(uint *)(pFVar21 + lVar16 * 4 + 4);
              }
              uStack_554 = -uVar3 & uVar3;
              uVar2 = (ulonglong)uStack_554 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_570 = (int)lVar16;
              uStack_544 = (local_540 - 1) + local_570;
              if ((int)uVar17 < (int)uStack_544) {
                uStack_544 = uVar17;
              }
            }
LAB_14e807bee:
            TStack_5a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + -0x10);
            uStack_548 = 0xffffffff;
            uStack_53c = local_46c;
            TStack_5a8._padding_ = CONCAT44(uStack_554,uVar13);
            TStack_5a8.UnvisitedBitMask = 0xffffffff;
            TStack_5a8._28_4_ = local_46c;
            TStack_5a8.BaseBitIndex = local_540;
            local_5b0 = pFVar1;
            local_560 = pFVar1;
            uStack_558 = uVar13;
            local_550 = TStack_5a8.Array;
            TStack_5a8.CurrentBitIndex = uStack_544;
            if ((int)uStack_544 < (int)uVar17) {
              do {
                pFVar1 = (FScriptContainerElement *)
                         (*(longlong *)&local_5b0->field_0x0 +
                         (longlong)TStack_5a8.CurrentBitIndex * 0xc);
                if (((local_5e0.AllocatorInstance.Data <= pFVar1) &&
                    (pFVar1 < local_5e0.AllocatorInstance.Data + (longlong)local_5e0.ArrayMax * 4))
                   && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                iVar14 = local_5e0.ArrayNum;
                if (local_5e0.ArrayNum == local_5e0.ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_5e0.AllocatorInstance,&local_5e0.ArrayMax);
                }
                local_5e0.ArrayNum = iVar14 + 1;
                *(int *)(local_5e0.AllocatorInstance.Data + (longlong)iVar14 * 4) = *(int *)pFVar1;
                TStack_5a8.UnvisitedBitMask =
                     TStack_5a8.UnvisitedBitMask & ~TStack_5a8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5a8);
              } while (TStack_5a8.CurrentBitIndex < (TStack_5a8.Array)->NumBits);
            }
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                      ((int *)local_5e0.AllocatorInstance.Data,local_5e0.ArrayNum,FVar8,
                       (TLess<void> *)local_5d0);
            if ((local_5e0.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            FGeometryCollectionClusteringUtility::ClusterBonesUnderNewNode
                      (local_580,*(int *)local_5e0.AllocatorInstance.Data,&local_5e0,false,false);
            if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5e0.AllocatorInstance.Data);
            }
          }
          pFVar25 = pFVar25 + 0xa0;
        }
        local_f8.HashSize = 0;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_f8.Elements);
        DestructItems<UE::Private::ClusterMagnet::FClusterMagnet,int>
                  ((FClusterMagnet *)local_5c8.AllocatorInstance.Data,local_5c8.ArrayNum);
        if ((FClusterMagnet *)local_5c8.AllocatorInstance.Data != (FClusterMagnet *)0x0) {
          FMemory::Free(local_5c8.AllocatorInstance.Data);
        }
        local_60 = 0;
        if ((undefined1 *)local_a8._64_8_ != (undefined1 *)0x0) {
          FMemory::Free((void *)local_a8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        param_1 = local_580;
        param_3 = local_5b8;
        uVar20 = local_5cc;
      }
      TStack_528.UnvisitedBitMask = TStack_528.UnvisitedBitMask & ~TStack_528._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_528);
    }
    local_100 = 0;
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_148);
    bVar10 = true;
  }
  return bVar10;
}

// ClusterSelected @ 14e807e90

bool __cdecl
FFractureEngineClustering::ClusterSelected
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FCollectionHierarchyFacade local_328;
  FCollectionTransformSelectionFacade local_278;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  if (iVar1 != 0) {
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_278,(FManagedArrayCollection *)param_1);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes
              (&local_278,param_2);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_278,param_2,true);
    if (1 < param_2->ArrayNum) {
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                (&local_328,(FManagedArrayCollection *)param_1);
      iVar1 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
      iVar2 = FGeometryCollectionClusteringUtility::FindLowestCommonAncestor
                        ((FManagedArrayCollection *)param_1,param_2);
      if (iVar2 != -1) {
        FGeometryCollectionClusteringUtility::ClusterBonesUnderNewNodeWithParent
                  (param_1,iVar2,param_2,true,true);
        GeometryCollection::GenerateTemporaryGuids((FManagedArrayCollection *)param_1,iVar1,true);
        FGeometryCollectionClusteringUtility::RemoveDanglingClusters(param_1);
        Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_328);
        return true;
      }
    }
  }
  return false;
}

// ConvexityBasedCluster @ 14e80bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineClustering::ConvexityBasedCluster
          (FGeometryCollection *param_1,int param_2,uint param_3,bool param_4,bool param_5,
          float param_6)

{
  char cVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  FName FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  TManagedArray<int> *pTVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined ***pppuVar22;
  ForElementType<unsigned_int> FVar23;
  ForAnyElementType FVar24;
  undefined ***pppuVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  ForAnyElementType FVar31;
  FScriptContainerElement *pFVar32;
  FString *pFVar33;
  uint uVar34;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar35;
  ulong64 uVar36;
  int iVar37;
  ulonglong uVar38;
  uint *puVar39;
  longlong lVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  TBitArray<FDefaultBitArrayAllocator> *pTVar44;
  uint uVar45;
  bool bVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined1 auVar60 [16];
  double dVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStackY_9e8 [32];
  ForAnyElementType local_990;
  undefined8 local_988;
  undefined1 local_980 [4];
  uint local_97c;
  TArray<int,TSizedDefaultAllocator<32>_> local_978;
  uint local_968 [2];
  ForAnyElementType local_960;
  uint local_958;
  uint uStack_954;
  longlong local_950;
  undefined4 local_948;
  undefined4 local_944;
  uint local_940;
  uint local_93c;
  TArray<int,TSizedDefaultAllocator<32>_> local_938;
  uint local_928 [2];
  ulonglong local_920;
  FGeometryCollection *local_918;
  ForAnyElementType local_910;
  undefined8 local_908;
  FSizedDisjointSet local_900;
  int local_8e0;
  ForAnyElementType local_8d8;
  undefined8 local_8d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_8c8;
  undefined1 local_8b8 [16];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8a8;
  longlong lStack_8a0;
  longlong lStack_898;
  int local_890;
  undefined4 uStack_88c;
  FString local_888;
  uint local_878;
  uint local_874;
  int local_870;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_868;
  TArray<int,TSizedDefaultAllocator<32>_> local_860;
  uint local_850;
  uint uStack_84c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_848;
  undefined4 local_840;
  uint uStack_83c;
  uint uStack_838;
  undefined4 uStack_834;
  int local_830;
  uint uStack_82c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_828;
  undefined4 local_820;
  uint uStack_81c;
  int iStack_818;
  undefined4 uStack_814;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_810;
  TArray<int,TSizedDefaultAllocator<32>_> local_800;
  TArray<int,TSizedDefaultAllocator<32>_> local_7f0;
  double local_7e0;
  double dStack_7d8;
  double local_7d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_788;
  TPairInitializer<int_const_&,int_const_&> local_768;
  undefined4 local_758;
  int local_754;
  FGeometryCollectionProximityUtility local_750;
  longlong local_748;
  TArray<int,TSizedDefaultAllocator<32>_> *local_740;
  longlong local_738;
  ForAnyElementType *local_730;
  longlong *local_728;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_720;
  longlong *local_700;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f8;
  undefined1 local_6d8 [12];
  uint uStack_6cc;
  TBitArray<FDefaultBitArrayAllocator> *local_6c8;
  undefined8 uStack_6c0;
  longlong local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [12];
  uint uStack_69c;
  TBitArray<FDefaultBitArrayAllocator> *local_698;
  undefined8 uStack_690;
  longlong local_688;
  undefined8 uStack_680;
  undefined1 local_678 [12];
  uint uStack_66c;
  TBitArray<FDefaultBitArrayAllocator> *local_668;
  undefined8 uStack_660;
  longlong local_658;
  undefined8 uStack_650;
  FScriptContainerElement *local_648;
  int iStack_640;
  undefined4 uStack_63c;
  FScriptContainerElement *local_638;
  uint *local_630;
  ForAnyElementType *local_628;
  TArray<int,TSizedDefaultAllocator<32>_> *local_620;
  TTuple<int,int> *local_618;
  int iStack_610;
  undefined4 uStack_60c;
  code *local_608;
  ForAnyElementType **local_600;
  code *local_5f8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_5f0;
  code *local_5e8;
  ForAnyElementType **local_5e0;
  FSparseArrayAllocationInfo local_5d8;
  undefined1 local_5c8 [24];
  longlong lStack_5b0;
  longlong lStack_5a8;
  int local_5a0;
  undefined4 uStack_59c;
  undefined1 local_598 [24];
  longlong lStack_580;
  longlong lStack_578;
  int local_570;
  undefined4 uStack_56c;
  FName local_568;
  FName local_560;
  TArrayView<TTuple<int,int>_const_,int> local_558;
  TArrayView<UE::Math::TVector<double>_const_,int> local_548;
  TRangedForIterator local_538;
  TRangedForConstIterator local_508;
  TRangedForIterator local_4d8;
  undefined1 local_4a8 [16];
  double local_498;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  FCollectionHierarchyFacade local_468;
  undefined1 local_3b8 [32];
  ForElementType<unsigned_int> local_398;
  uint local_390;
  int local_38c;
  int local_388;
  int local_384;
  FScriptContainerElement local_380 [8];
  ForAnyElementType local_378;
  uint local_370;
  longlong local_368;
  undefined8 uStack_360;
  undefined **local_358 [3];
  undefined ***pppuStack_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined **local_328 [3];
  undefined ***pppuStack_310;
  undefined1 local_308 [64];
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined **local_2b8;
  FSizedDisjointSet *pFStack_2b0;
  undefined8 local_2a8;
  undefined ***pppuStack_2a0;
  code *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined **local_288;
  double dStack_280;
  double local_278;
  undefined ***pppuStack_270;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_268;
  undefined1 local_218 [40];
  int local_1f0;
  int local_1e4;
  void *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [192];
  undefined1 local_108 [64];
  void *local_c8;
  undefined4 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  local_93c = param_3;
  local_918 = param_1;
  local_8e0 = param_2;
  FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)param_1);
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_750,param_1);
  FGeometryCollectionProximityUtility::UpdateProximity(&local_750,(FConvexHulls *)0x0);
  FVar9 = FTransformCollection::TransformGroup;
  pFVar15 = ::FName::FName(&local_568,"Volume");
  FManagedArrayCollection::GetAttribute<float>((FManagedArrayCollection *)param_1,*pFVar15,FVar9);
  local_1c8._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
  local_1c8._8_8_ = _UNK_150afcb08;
  dVar4 = 0.0;
  local_1c8._32_8_ = ___xmm_4065400000000000403e000000000000;
  local_1c8._40_8_ = _UNK_150b37cc8;
  local_1c8._48_8_ = __real_3fb999999999999a;
  uVar42 = (uint)~param_2 >> 0x1f;
  local_1c8._96_8_ = 0.0;
  local_1c8._104_8_ = 0.0;
  local_1c8._80_8_ = (FScriptContainerElement *)0x0;
  local_1c8._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
  local_1c8._24_8_ = _UNK_150b37cb8;
  local_1c8._128_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1c8._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1c8._112_8_ = ___xmm_3ff00000000000000000000000000000;
  local_1c8._120_8_ = _UNK_15061cbc8;
  local_1c8._88_4_ = 0;
  local_1c8._92_4_ = 0;
  local_1c8._176_8_ = (FScriptContainerElement *)0x0;
  local_1c8._184_4_ = 0;
  local_1c8._188_4_ = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._52_4_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  uVar43 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar43 = uVar42;
  }
  local_1c8._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1c8._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_1c8._64_8_ = 0.0;
  local_1c8._56_4_ = 0x32;
  local_1c8[0x3c] = true;
  local_1c8[0x3d] = true;
  local_1c8._72_4_ = -1;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  local_1c8._152_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_1c8._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_874 = uVar42;
  if ((uVar43 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_738 = (longlong)param_2 * 0x50;
  pTVar35 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            (param_1->_padding_ + local_738);
  local_868 = pTVar35;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(pTVar35,&local_938);
  local_900.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_900.Parents.ArrayNum = 0;
  local_900.Parents.ArrayMax = 0;
  local_900.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_900.Sizes.ArrayNum = 0;
  local_900.Sizes.ArrayMax = 0;
  UE::Geometry::FSizedDisjointSet::Init(&local_900,local_938.ArrayNum);
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_468,(FManagedArrayCollection *)param_1);
  Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_468);
  FVar9 = FTransformCollection::TransformGroup;
  pFVar15 = ::FName::FName(&local_560,"Level");
  pTVar16 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)param_1,*pFVar15,FVar9);
  uVar43 = 0;
  if (param_2 < *(int *)&pTVar16->field_0x18) {
    uVar43 = uVar42;
  }
  if ((uVar43 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar14 = *(int *)(*(longlong *)&pTVar16->field_0x10 + (longlong)param_2 * 4);
  local_860.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_860.ArrayNum = 0;
  local_860.ArrayMax = 0;
  local_8c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.ArrayNum = 0;
  local_8c8.ArrayMax = 0;
  local_870 = iVar14;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_860,local_938.ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_8c8,local_938.ArrayNum,Default);
  iVar37 = local_938.ArrayNum;
  local_910.Data = (FScriptContainerElement *)0x0;
  local_908 = 0;
  if (local_938.ArrayNum < 1) {
    if (local_938.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_938.ArrayNum);
    }
  }
  else {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,local_938.ArrayNum,&local_910,(int *)&local_908,
                        (int *)((longlong)&local_908 + 4));
    memset(local_910.Data + (longlong)iVar13 * 8,0,(longlong)iVar37 << 3);
  }
  local_960.Data = (FScriptContainerElement *)0x0;
  local_958 = 0;
  uStack_954 = 0;
  local_990.Data = (FScriptContainerElement *)0x0;
  local_988 = 0;
  local_810.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_810.ArrayNum = 0;
  local_810.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&param_1->_padding_,
             (TManagedArray<int> *)&param_1->_padding_,&local_810);
  local_97c = 0;
  if (0 < local_938.ArrayNum) {
    local_920 = 0;
    local_950 = 0;
    do {
      uVar21 = local_920;
      lVar40 = local_950;
      uVar26 = local_958;
      uVar42 = local_97c;
      uVar43 = ~local_97c >> 0x1f;
      uVar28 = 0;
      if ((int)local_97c < local_8c8.ArrayNum) {
        uVar28 = uVar43;
      }
      local_878 = uVar43;
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(local_8c8.AllocatorInstance.Data + uVar21) = uVar26;
      uVar28 = 0;
      uVar26 = uVar28;
      if ((int)uVar42 < local_938.ArrayNum) {
        uVar26 = uVar43;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar30 = local_988;
      local_948 = *(undefined4 *)(local_938.AllocatorInstance.Data + uVar21);
      uVar26 = local_988._4_4_;
      local_988 = (ulonglong)local_988._4_4_ << 0x20;
      if ((lVar30 < 0) && (uVar26 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_990,0,(int *)((longlong)&local_988 + 4));
        uVar28 = (uint)local_988;
        uVar26 = local_988._4_4_;
      }
      if ((local_990.Data <= (FScriptContainerElement *)&local_948) &&
         ((FScriptContainerElement *)&local_948 < local_990.Data + (longlong)(int)uVar26 * 4)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar28 = (uint)local_988;
        uVar26 = local_988._4_4_;
      }
      if (uVar28 == uVar26) {
        uVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_990,(int *)((longlong)&local_988 + 4));
      }
      local_988 = CONCAT44(local_988._4_4_,uVar28 + 1);
      *(undefined4 *)(local_990.Data + (longlong)(int)uVar28 * 4) = local_948;
      iVar14 = uVar28 + 1;
      while (iVar14 != 0) {
        if (((int)(uint)local_988 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar14 = (uint)local_988 + -1;
        uVar26 = *(uint *)(local_990.Data + (longlong)iVar14 * 4);
        lVar40 = (longlong)(int)uVar26;
        iVar37 = ((uint)local_988 - iVar14) + -1;
        if (iVar37 != 0) {
          memmove(local_990.Data + (longlong)iVar14 * 4,local_990.Data + (longlong)iVar14 * 4 + 4,
                  (longlong)iVar37 << 2);
        }
        local_988 = CONCAT44(local_988._4_4_,(uint)local_988 + -1);
        uVar45 = ~uVar26 >> 0x1f;
        uVar34 = 0;
        uVar28 = uVar34;
        if ((int)uVar26 < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar28 = uVar45;
        }
        if ((uVar28 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar1 = *(char *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar40 * 4);
        if (cVar1 == '\x02') {
          if ((int)uVar26 < (int)param_1->_padding_) {
            uVar34 = uVar45;
          }
          if ((uVar34 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_788._padding_._4_4_ = 1;
          local_788._padding_._0_4_ = 0;
          plVar29 = (longlong *)(lVar40 * 0x50 + param_1->_padding_);
          local_788.UnvisitedBitMask = 0xffffffff;
          local_788.CurrentBitIndex = 0;
          local_788.BaseBitIndex = 0;
          pTVar44 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar29 + 2);
          local_788.Array = pTVar44;
          if ((int)plVar29[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_788);
          }
          unique0x10001ce3 = CONCAT44(local_788._padding_._4_4_,(undefined4)local_788._padding_);
          lStack_8a0 = CONCAT44(local_788.CurrentBitIndex,local_788.UnvisitedBitMask);
          lStack_898 = CONCAT44(local_788._28_4_,local_788.BaseBitIndex);
          local_890 = (int)plVar29[1] - *(int *)((longlong)plVar29 + 0x34);
          pTStack_8a8 = local_788.Array;
          uStack_6b0._4_4_ = uStack_88c;
          uStack_6b0._0_4_ = local_890;
          local_6c8 = local_788.Array;
          local_6d8._0_8_ = plVar29;
          uStack_6c0 = lStack_8a0;
          local_6b8 = lStack_898;
          local_8b8._0_8_ = plVar29;
          local_8b8._8_8_ = unique0x10001ce3;
          pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_490,pTVar44,(int)plVar29[5]);
          local_538._padding_ = pTVar17->_padding_;
          pTStack_8a8 = pTVar17->Array;
          lStack_8a0._0_4_ = pTVar17->UnvisitedBitMask;
          lStack_8a0._4_4_ = pTVar17->CurrentBitIndex;
          lStack_898 = *(longlong *)&pTVar17->BaseBitIndex;
          local_890 = (int)plVar29[1] - *(int *)((longlong)plVar29 + 0x34);
          local_8b8._8_8_ = local_538._padding_;
          local_8b8._0_8_ = plVar29;
          local_538._44_4_ = uStack_88c;
          local_538.InitialNum = local_890;
          local_538._padding_ = (longlong)plVar29;
          local_538._padding_ = (longlong)pTStack_8a8;
          local_538._padding_ = lStack_8a0;
          local_538._padding_ = lStack_898;
          bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_6d8,&local_538);
          if (bVar12) {
            do {
              local_944 = *(undefined4 *)
                           (*(longlong *)local_6d8._0_8_ + (longlong)uStack_6c0._4_4_ * 0xc);
              if (((local_990.Data <= (FScriptContainerElement *)&local_944) &&
                  ((FScriptContainerElement *)&local_944 <
                   local_990.Data + (longlong)(int)local_988._4_4_ * 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar14 = (uint)local_988;
              if ((uint)local_988 == local_988._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_990,(int *)((longlong)&local_988 + 4));
              }
              local_988 = CONCAT44(local_988._4_4_,iVar14 + 1);
              *(undefined4 *)(local_990.Data + (longlong)iVar14 * 4) = local_944;
              uStack_6c0 = CONCAT44(uStack_6c0._4_4_,(uint)uStack_6c0 & ~uStack_6cc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_6d8 + 8));
              bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_6d8,&local_538);
            } while (bVar12);
          }
        }
        else if (cVar1 == '\x01') {
          uVar42 = uVar34;
          if ((int)uVar26 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
            uVar42 = uVar45;
          }
          if ((uVar42 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar28 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                            lVar40 * 4);
          uVar42 = local_97c;
          if (uVar28 != 0xffffffff) {
            if ((int)uVar28 < *(int *)&(param_1->VertexStart).field_0x18) {
              uVar34 = ~uVar28 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = *(int *)(*(longlong *)&(local_918->VertexStart).field_0x10 +
                             (longlong)(int)uVar28 * 4);
            uVar21 = (ulonglong)iVar14;
            uVar43 = 0;
            if ((int)uVar28 < *(int *)&(local_918->VertexCount).field_0x18) {
              uVar43 = ~uVar28 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_940 = local_958;
            lVar30 = (longlong)
                     (*(int *)(*(longlong *)&(local_918->VertexCount).field_0x10 +
                              (longlong)(int)uVar28 * 4) + iVar14);
            if ((longlong)uVar21 < lVar30) {
              local_748 = lVar40 * 0x60;
              lVar40 = uVar21 * 0xc;
              lVar30 = lVar30 - uVar21;
              do {
                uVar43 = 0;
                if ((int)uVar26 < local_810.ArrayNum) {
                  uVar43 = uVar45;
                }
                if ((uVar43 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FVar31.Data = local_810.AllocatorInstance.Data;
                uVar42 = (uint)uVar21;
                uVar43 = 0;
                if ((int)uVar42 < *(int *)&(local_918->Vertex).field_0x18) {
                  uVar43 = ~uVar42 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar20 = *(longlong *)&(local_918->Vertex).field_0x10;
                local_8b8 = *(undefined1 (*) [16])(FVar31.Data + local_748);
                auVar50 = *(undefined1 (*) [16])(FVar31.Data + local_748);
                dVar5 = *(double *)(FVar31.Data + local_748 + 0x18);
                local_498 = (double)*(float *)(lVar20 + 8 + lVar40);
                dVar51 = (double)*(float *)(lVar20 + 4 + lVar40);
                dVar3 = local_498 * *(double *)(FVar31.Data + local_748 + 0x50);
                dVar59 = *(double *)(FVar31.Data + local_748 + 0x50 + 8) * 0.0;
                auVar58 = *(undefined1 (*) [16])(FVar31.Data + local_748 + 0x10);
                dVar52 = auVar58._0_8_;
                auVar53 = blendpd(local_8b8,auVar58,2);
                local_4a8._8_4_ = SUB84(dVar51,0);
                local_4a8._0_8_ = (double)*(float *)(lVar20 + lVar40);
                local_4a8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                dVar47 = (double)*(float *)(lVar20 + lVar40) *
                         *(double *)(FVar31.Data + local_748 + 0x40);
                dVar51 = dVar51 * *(double *)(FVar31.Data + local_748 + 0x40 + 8);
                uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
                auVar63._8_4_ = SUB84(dVar51,0);
                auVar63._0_8_ = dVar47;
                auVar63._12_4_ = uVar62;
                auVar64._0_8_ = auVar63._8_8_ * local_8b8._0_8_ - local_8b8._8_8_ * dVar47;
                auVar64._8_8_ = dVar3 * local_8b8._8_8_ - dVar52 * dVar51;
                auVar55._8_4_ = SUB84(dVar51,0);
                auVar55._0_8_ = dVar47;
                auVar55._12_4_ = uVar62;
                auVar48._8_4_ = SUB84(dVar59,0);
                auVar48._0_8_ = dVar3;
                auVar48._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
                auVar48 = blendpd(auVar55,auVar48,2);
                auVar60._8_4_ = SUB84(auVar64._8_8_,0);
                auVar60._0_8_ = auVar64._0_8_;
                auVar60._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
                auVar49._0_8_ = auVar48._0_8_ * dVar52 - auVar53._0_8_ * dVar3;
                auVar49._8_8_ = auVar48._8_8_ * auVar58._8_8_ - auVar53._8_8_ * dVar59;
                auVar48 = blendpd(auVar64,auVar49,2);
                dVar59 = auVar60._8_8_ + auVar60._8_8_;
                dVar61 = auVar49._0_8_ + auVar49._0_8_;
                auVar65._0_8_ = auVar48._0_8_ + auVar48._0_8_;
                auVar65._8_8_ = auVar48._8_8_ + auVar48._8_8_;
                auVar56._8_4_ = SUB84(dVar61,0);
                auVar56._0_8_ = dVar59;
                uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
                auVar56._12_4_ = uVar62;
                auVar53._8_4_ = SUB84(dVar61,0);
                auVar53._0_8_ = dVar59;
                auVar53._12_4_ = uVar62;
                auVar48 = blendpd(auVar53,auVar65,2);
                auVar57._0_8_ = auVar56._8_8_ * auVar50._0_8_ - auVar50._8_8_ * dVar59;
                auVar57._8_8_ = auVar65._0_8_ * auVar50._8_8_ - dVar52 * dVar61;
                auVar55 = blendpd(auVar50,auVar58,2);
                auVar50._8_4_ = SUB84(auVar57._8_8_,0);
                auVar50._0_8_ = auVar57._0_8_;
                auVar50._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
                auVar54._0_8_ = auVar48._0_8_ * dVar52 - auVar55._0_8_ * auVar65._0_8_;
                auVar54._8_8_ = auVar48._8_8_ * auVar58._8_8_ - auVar55._8_8_ * auVar65._8_8_;
                auVar58 = blendpd(auVar57,auVar54,2);
                local_7e0 = dVar59 * dVar5 + dVar47 + auVar50._8_8_ +
                            *(double *)(FVar31.Data + local_748 + 0x20);
                dStack_7d8 = dVar61 * dVar5 + dVar51 + auVar54._0_8_ +
                             *(double *)(FVar31.Data + local_748 + 0x20 + 8);
                local_7d0 = auVar65._0_8_ * dVar5 + dVar3 + auVar58._0_8_ +
                            *(double *)(FVar31.Data + local_748 + 0x30);
                if (((local_960.Data <= (FScriptContainerElement *)&local_7e0) &&
                    ((FScriptContainerElement *)&local_7e0 <
                     local_960.Data + (longlong)(int)uStack_954 * 0x18)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (local_958 == uStack_954) {
                  local_958 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x818,&local_960,(int *)&uStack_954);
                }
                lVar20 = (longlong)(int)local_958;
                uVar21 = (ulonglong)(uVar42 + 1);
                lVar40 = lVar40 + 0xc;
                local_958 = local_958 + 1;
                *(double *)(local_960.Data + lVar20 * 0x18) = local_7e0;
                *(double *)(local_960.Data + lVar20 * 0x18 + 8) = dStack_7d8;
                *(double *)(local_960.Data + lVar20 * 0x18 + 0x10) = local_7d0;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            uVar43 = local_940;
            iVar14 = local_958 - local_940;
            uVar42 = 0;
            if ((int)local_940 < (int)local_958) {
              uVar42 = ~local_940 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_648 = local_960.Data + (longlong)(int)uVar43 * 0x18;
            iStack_640 = iVar14;
            if ((iVar14 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_548._12_4_ = uStack_63c;
            local_548.ArrayNum = iStack_640;
            local_548.DataPtr = (TVector<double> *)local_648;
            dVar47 = UE::Geometry::TConvexHull3<double>::ComputeVolume(&local_548);
            uVar43 = local_878;
            uVar42 = local_97c;
            uVar26 = 0;
            if ((int)local_97c < (int)local_908) {
              uVar26 = local_878;
            }
            if ((uVar26 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(double *)(local_910.Data + local_950) =
                 dVar47 + *(double *)(local_910.Data + local_950);
            param_1 = local_918;
          }
        }
        lVar40 = local_950;
        uVar21 = local_920;
        iVar14 = (uint)local_988;
      }
      uVar26 = 0;
      if ((int)uVar42 < local_8c8.ArrayNum) {
        uVar26 = uVar43;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar26 = local_958;
      iVar14 = *(int *)(local_8c8.AllocatorInstance.Data + uVar21);
      uVar28 = 0;
      if ((int)uVar42 < local_860.ArrayNum) {
        uVar28 = uVar43;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_97c = uVar42 + 1;
      local_950 = lVar40 + 8;
      *(uint *)(local_860.AllocatorInstance.Data + uVar21) = uVar26 - iVar14;
      local_920 = uVar21 + 4;
      pTVar35 = local_868;
      param_3 = local_93c;
      iVar14 = local_870;
    } while ((int)local_97c < local_938.ArrayNum);
  }
  local_8d8.Data = (FScriptContainerElement *)0x0;
  local_8d0 = 0;
  iStack_610 = 0;
  if (param_4) {
    UE::Private::ClusterMagnet::InitializeConnectivity
              ((TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                *)local_218,pTVar35,param_1,iVar14 + 1);
    local_268.Elements._0_8_ = 0;
    local_268.Elements._8_8_ = 0;
    local_268.Elements._32_8_ = 0;
    local_268.Elements._40_4_ = 0;
    local_268.Elements._44_4_ = 0x80;
    local_268.Elements._48_4_ = 0xffffffff;
    local_268.Elements._52_4_ = 0;
    local_268.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_268.HashSize = 0;
    local_928[0] = 0;
    if (0 < local_938.ArrayNum) {
      do {
        uVar43 = local_928[0];
        uVar42 = 0;
        if ((int)local_928[0] < local_938.ArrayNum) {
          uVar42 = ~local_928[0] >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_638 = local_938.AllocatorInstance.Data + (longlong)(int)uVar43 * 4;
        local_630 = local_928;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_268,&local_768,(bool *)&local_638);
        local_928[0] = local_928[0] + 1;
      } while ((int)local_928[0] < local_938.ArrayNum);
    }
    local_7a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10);
    local_7a8._padding_._0_4_ = 0;
    local_7a8._padding_._4_4_ = 1;
    local_7a8.UnvisitedBitMask = 0xffffffff;
    local_7a8.CurrentBitIndex = 0;
    local_7a8.BaseBitIndex = 0;
    if (local_1f0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7a8);
    }
    unique0x10001cc3 =
         (TBitArray<FDefaultBitArrayAllocator> *)
         CONCAT44(local_7a8._padding_._4_4_,(undefined4)local_7a8._padding_);
    local_678._0_8_ = local_218;
    uStack_660 = CONCAT44(local_7a8.CurrentBitIndex,local_7a8.UnvisitedBitMask);
    local_658 = CONCAT44(local_7a8._28_4_,local_7a8.BaseBitIndex);
    local_570 = local_218._8_4_ - local_1e4;
    local_598._16_8_ = local_7a8.Array;
    uStack_650._4_4_ = uStack_56c;
    uStack_650._0_4_ = local_570;
    local_668 = local_7a8.Array;
    local_598._0_8_ = local_678._0_8_;
    local_598._8_8_ = unique0x10001cc3;
    lStack_580 = uStack_660;
    lStack_578 = local_658;
    pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_598,
                         (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10),local_1f0);
    local_4d8._padding_ = (longlong)local_218;
    local_4d8._padding_ = pTVar17->_padding_;
    pTStack_8a8 = pTVar17->Array;
    lStack_8a0._0_4_ = pTVar17->UnvisitedBitMask;
    lStack_8a0._4_4_ = pTVar17->CurrentBitIndex;
    lStack_898 = *(longlong *)&pTVar17->BaseBitIndex;
    local_890 = local_218._8_4_ - local_1e4;
    local_8b8._8_8_ = local_4d8._padding_;
    local_8b8._0_8_ = local_4d8._padding_;
    local_4d8._44_4_ = uStack_88c;
    local_4d8.InitialNum = local_890;
    local_4d8._padding_ = (longlong)pTStack_8a8;
    local_4d8._padding_ = lStack_8a0;
    local_4d8._padding_ = lStack_898;
    bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_678,&local_4d8);
    if (bVar12) {
      do {
        lVar30 = (longlong)uStack_660._4_4_ * 0x60;
        lVar40 = *(longlong *)local_678._0_8_;
        piVar18 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)&local_268,*(int *)(lVar30 + lVar40));
        local_7c8._padding_._0_4_ = 0;
        local_7c8._padding_._4_4_ = 1;
        pTVar44 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar40 + 0x18 + lVar30);
        local_7c8.UnvisitedBitMask = 0xffffffff;
        iVar14 = *piVar18;
        plVar29 = (longlong *)(lVar40 + 8 + lVar30);
        local_7c8.CurrentBitIndex = 0;
        local_7c8.BaseBitIndex = 0;
        local_7c8.Array = pTVar44;
        if (*(int *)(lVar30 + 0x30 + lVar40) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7c8);
        }
        unique0x10001ca3 =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_7c8._padding_._4_4_,(undefined4)local_7c8._padding_);
        uStack_690 = CONCAT44(local_7c8.CurrentBitIndex,local_7c8.UnvisitedBitMask);
        local_688 = CONCAT44(local_7c8._28_4_,local_7c8.BaseBitIndex);
        local_5a0 = *(int *)(lVar30 + 0x10 + lVar40) - *(int *)(lVar30 + 0x3c + lVar40);
        local_5c8._16_8_ = local_7c8.Array;
        uStack_680._4_4_ = uStack_59c;
        uStack_680._0_4_ = local_5a0;
        local_698 = local_7c8.Array;
        local_6a8._0_8_ = plVar29;
        local_5c8._0_8_ = plVar29;
        local_5c8._8_8_ = unique0x10001ca3;
        lStack_5b0 = uStack_690;
        lStack_5a8 = local_688;
        pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_5c8,pTVar44,
                             *(int *)(lVar30 + 0x30 + lVar40));
        local_508._padding_ = pTVar17->_padding_;
        pTStack_8a8 = pTVar17->Array;
        lStack_8a0._0_4_ = pTVar17->UnvisitedBitMask;
        lStack_8a0._4_4_ = pTVar17->CurrentBitIndex;
        lStack_898 = *(longlong *)&pTVar17->BaseBitIndex;
        local_890 = *(int *)(lVar30 + 0x10 + lVar40) - *(int *)(lVar30 + 0x3c + lVar40);
        local_8b8._8_8_ = local_508._padding_;
        local_8b8._0_8_ = plVar29;
        local_508._44_4_ = uStack_88c;
        local_508.InitialNum = local_890;
        local_508._padding_ = (longlong)plVar29;
        local_508._padding_ = (longlong)pTStack_8a8;
        local_508._padding_ = lStack_8a0;
        local_508._padding_ = lStack_898;
        bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_6a8,&local_508);
        if (bVar12) {
          do {
            piVar18 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                     *)&local_268,
                                    *(int *)(*(longlong *)local_6a8._0_8_ +
                                            (longlong)uStack_690._4_4_ * 0xc));
            iVar37 = *piVar18;
            iVar13 = (int)local_8d0;
            if ((int)local_8d0 == local_8d0._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_8d8,(int *)((longlong)&local_8d0 + 4));
            }
            local_8d0 = CONCAT44(local_8d0._4_4_,iVar13 + 1);
            *(int *)(local_8d8.Data + (longlong)iVar13 * 8) = iVar14;
            *(int *)(local_8d8.Data + (longlong)iVar13 * 8 + 4) = iVar37;
            uStack_690 = CONCAT44(uStack_690._4_4_,(uint)uStack_690 & ~uStack_69c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_6a8 + 8));
            bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_6a8,&local_508);
          } while (bVar12);
        }
        uStack_660 = CONCAT44(uStack_660._4_4_,(uint)uStack_660 & ~uStack_66c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_678 + 8));
        bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_678,&local_4d8);
      } while (bVar12);
    }
    local_268.HashSize = 0;
    if (local_268.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_268.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_268.Elements);
    local_1d0 = 0;
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_218);
    iStack_610 = (int)local_8d0;
  }
  local_618 = (TTuple<int,int> *)local_8d8.Data;
  if ((iStack_610 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_628 = &local_960;
  local_620 = &local_8c8;
  local_558._12_4_ = uStack_60c;
  local_558.ArrayNum = iStack_610;
  local_600 = &local_628;
  local_558.DataPtr = local_618;
  local_608 = UE::Core::Private::Function::
              TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_3>,UE::Math::TVector<double>,int,int>
              ::Call;
  local_740 = &local_860;
  local_5f0 = &local_740;
  local_5f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_2>,int,int>
              ::Call;
  local_730 = &local_910;
  local_5e0 = &local_730;
  local_5e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_1>,double,int>
              ::Call;
  UE::Geometry::FConvexDecomposition3::InitializeFromHulls
            ((FConvexDecomposition3 *)local_1c8,local_938.ArrayNum,
             (TFunctionRef<double___cdecl(int)> *)&local_5e8,
             (TFunctionRef<int___cdecl(int)> *)&local_5f8,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *)&local_608,&local_558);
  dVar47 = __real_3ff0000000000000;
  if (!param_4) {
    UE::Geometry::FConvexDecomposition3::InitializeProximityFromDecompositionBoundingBoxOverlaps
              ((FConvexDecomposition3 *)local_1c8,__real_3ff0000000000000,__real_3fe0000000000000,
               __real_3ff0000000000000);
  }
  iVar14 = (int)local_908;
  uVar21 = (ulonglong)(int)local_908;
  local_308._8_8_ = 0.0;
  local_308._24_8_ = 0.0;
  local_308[0x10] = true;
  pFVar32 = local_910.Data + uVar21 * 8;
  local_308._20_4_ = -1;
  local_308[0x20] = true;
  local_308[0x21] = false;
  local_308._40_8_ = (FSphereCovering *)0x0;
  local_308._48_8_ = (TTransform<double> *)0x0;
  local_2c8 = 0;
  pppuStack_2a0 = (undefined ***)0x0;
  local_298 = (code *)0x0;
  pppuStack_270 = (undefined ***)0x0;
  local_308._0_4_ = param_3;
  FVar31.Data = local_910.Data;
  while( true ) {
    if ((int)uVar21 != iVar14) {
      local_980[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_980);
      uVar21 = local_908 & 0xffffffff;
    }
    pppuVar25 = pppuStack_270;
    local_368 = (longlong)local_298;
    if (FVar31.Data == pFVar32) break;
    dVar4 = dVar4 + *(double *)FVar31.Data;
    FVar31.Data = FVar31.Data + 8;
  }
  local_308[0x10] = false;
  local_308._8_8_ = (double)param_6;
  local_358[0] = local_288;
  local_358[1] = (undefined **)dStack_280;
  local_298 = UE::Core::Private::Function::
              TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,bool,UE::Geometry::FConvexDecomposition3::FConvexPart_const_&,UE::Geometry::FConvexDecomposition3::FConvexPart_const_&>
              ::Call;
  uStack_290 = (undefined4)uStack_360;
  uStack_28c = uStack_360._4_4_;
  local_288 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_4>,0,0>
               ::_vftable_;
  dStack_280 = (dVar47 / (double)param_3) * dVar4;
  local_358[2] = (undefined **)local_278;
  pppuStack_340 = pppuStack_270;
  local_278 = dVar4 * __real_3fc999999999999a * (dVar47 / (double)param_3);
  pppuStack_270 = (undefined ***)0x0;
  if (local_368 != 0) {
    pppuVar22 = local_358;
    if (pppuVar25 != (undefined ***)0x0) {
      pppuVar22 = pppuVar25;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  pppuStack_310 = pppuStack_2a0;
  uVar11 = local_2a8;
  local_328[1] = (undefined **)pFStack_2b0;
  local_328[0] = local_2b8;
  uVar10 = uStack_2c0;
  local_338 = local_2c8;
  local_2c8 = (longlong)
              UE::Core::Private::Function::
              TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,void,int,int>
              ::Call;
  uStack_2c0 = uStack_330;
  local_2a8 = local_328[2];
  pppuStack_2a0 = (undefined ***)0x0;
  local_2b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_5>,0,0>
               ::_vftable_;
  pFStack_2b0 = &local_900;
  uStack_330 = uVar10;
  local_328[2] = (undefined **)uVar11;
  if (local_338 != 0) {
    pppuVar25 = local_328;
    if (pppuStack_310 != (undefined ***)0x0) {
      pppuVar25 = pppuStack_310;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  UE::Geometry::FConvexDecomposition3::MergeBest
            ((FConvexDecomposition3 *)local_1c8,(FMergeSettings *)local_308);
  local_800.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_800.ArrayNum = 0;
  local_800.ArrayMax = 0;
  local_7f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f0.ArrayNum = 0;
  local_7f0.ArrayMax = 0;
  iVar14 = UE::Geometry::FSizedDisjointSet::CompactedGroupIndexToGroupID
                     (&local_900,&local_800,&local_7f0,1);
  local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.ArrayNum = 0;
  local_978.ArrayMax = 0;
  local_940 = FManagedArrayCollection::AddElements
                        ((FManagedArrayCollection *)param_1,iVar14,
                         FTransformCollection::TransformGroup);
  uVar21 = (ulonglong)(int)local_940;
  bVar12 = false;
  local_97c = 0;
  if (0 < iVar14) {
    local_950 = 0;
    local_920 = uVar21;
    local_868 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(longlong)iVar14;
    do {
      uVar38 = local_920;
      lVar40 = local_950;
      uVar42 = local_97c;
      uVar43 = 0;
      bVar46 = (longlong)local_978._8_8_ < 0;
      local_978._8_8_ = local_978._8_8_ & 0xffffffff00000000;
      if (bVar46) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_978.AllocatorInstance,0,&local_978.ArrayMax);
      }
      uVar26 = 0;
      if ((int)uVar42 < local_800.ArrayNum) {
        uVar26 = ~uVar42 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_93c = *(uint *)(local_800.AllocatorInstance.Data + lVar40 * 4);
      uVar26 = (uint)uVar21;
      if (0 < local_938.ArrayNum) {
        uVar21 = local_900.Parents._8_8_ & 0xffffffff;
        lVar30 = 0;
        uVar28 = uVar43;
        do {
          while( true ) {
            uVar34 = ~uVar43 >> 0x1f;
            uVar26 = 0;
            uVar42 = uVar26;
            if ((int)uVar43 < (int)uVar21) {
              uVar42 = uVar34;
            }
            if (uVar42 == 0) {
              bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar46) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar21 = local_900.Parents._8_8_ & 0xffffffff;
            }
            lVar40 = (longlong)(int)uVar43;
            if (*(uint *)(local_900.Parents.AllocatorInstance.Data + lVar40 * 4) == uVar43) break;
            if ((int)uVar43 < (int)uVar21) {
              uVar26 = uVar34;
            }
            iVar14 = (int)uVar21;
            if (uVar26 == 0) {
              bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar46) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar14 = local_900.Parents.ArrayNum;
            }
            uVar42 = *(uint *)(local_900.Parents.AllocatorInstance.Data + lVar40 * 4);
            uVar26 = 0;
            if ((int)uVar42 < iVar14) {
              uVar26 = ~uVar42 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar46) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar14 = local_900.Parents.ArrayNum;
            }
            uVar62 = *(undefined4 *)
                      (local_900.Parents.AllocatorInstance.Data + (longlong)(int)uVar42 * 4);
            uVar42 = 0;
            if ((int)uVar43 < iVar14) {
              uVar42 = uVar34;
            }
            if ((uVar42 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(local_900.Parents.AllocatorInstance.Data + lVar40 * 4) = uVar62;
            uVar21 = (ulonglong)local_900.Parents.ArrayNum;
            uVar42 = 0;
            if ((int)uVar43 < local_900.Parents.ArrayNum) {
              uVar42 = uVar34;
            }
            if (uVar42 == 0) {
              bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar46) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar21 = local_900.Parents._8_8_ & 0xffffffff;
            }
            uVar43 = *(uint *)(local_900.Parents.AllocatorInstance.Data + lVar40 * 4);
          }
          if (uVar43 == local_93c) {
            if ((int)uVar28 < local_938.ArrayNum) {
              uVar26 = ~uVar28 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar32 = local_938.AllocatorInstance.Data + lVar30;
            if (((local_978.AllocatorInstance.Data <= pFVar32) &&
                (pFVar32 < local_978.AllocatorInstance.Data + (longlong)local_978.ArrayMax * 4)) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar46)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = local_978.ArrayNum;
            if (local_978.ArrayNum == local_978.ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_978.AllocatorInstance,&local_978.ArrayMax);
            }
            local_978.ArrayNum = iVar14 + 1;
            *(uint *)(local_978.AllocatorInstance.Data + (longlong)iVar14 * 4) = *(uint *)pFVar32;
            uVar21 = local_900.Parents._8_8_ & 0xffffffff;
          }
          uVar43 = uVar28 + 1;
          lVar30 = lVar30 + 4;
          uVar38 = local_920;
          lVar40 = local_950;
          uVar26 = local_940;
          uVar42 = local_97c;
          uVar28 = uVar43;
        } while ((int)uVar43 < local_938.ArrayNum);
      }
      if ((param_5) && (local_978.ArrayNum == 1)) {
        iVar14 = local_978.ArrayMax;
        bVar12 = true;
        if ((longlong)local_978._8_8_ < 0) {
          local_978._8_8_ = (ulonglong)(uint)local_978.ArrayMax << 0x20;
          if (iVar14 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_978.AllocatorInstance,0,&local_978.ArrayMax);
          }
        }
        else {
          local_978._8_8_ = (ulonglong)(uint)local_978.ArrayMax << 0x20;
        }
      }
      local_968[0] = uVar42 + uVar26;
      uVar43 = 0;
      if ((int)local_968[0] < (int)param_1->_padding_) {
        uVar43 = ~local_968[0] >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int *)(param_1->_padding_ + (lVar40 + uVar38) * 4) = local_8e0;
      uVar43 = 0;
      if (local_8e0 < (int)param_1->_padding_) {
        uVar43 = local_874;
      }
      if ((uVar43 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 (local_738 + param_1->_padding_),(int *)((longlong)&local_768.Key + 4),
                 (bool *)local_968);
      ::FString::FString(&local_888,"ClusterBone");
      lVar30 = (longlong)(int)local_968[0];
      uVar43 = 0;
      if ((int)local_968[0] < (int)param_1->_padding_) {
        uVar43 = ~local_968[0] >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar33 = (FString *)(lVar30 * 0x10 + param_1->_padding_);
      if (pFVar33 != &local_888) {
        pFVar32 = (pFVar33->Data).AllocatorInstance.Data;
        if (pFVar32 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar32);
        }
        (pFVar33->Data).AllocatorInstance.Data = local_888.Data.AllocatorInstance.Data;
        local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar33->Data).ArrayNum = local_888.Data.ArrayNum;
        (pFVar33->Data).ArrayMax = local_888.Data.ArrayMax;
        local_888.Data.ArrayNum = 0;
        local_888.Data.ArrayMax = 0;
      }
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
      FVar31.Data = local_978.AllocatorInstance.Data;
      iVar14 = local_978.ArrayNum;
      uVar36 = (ulong64)local_978.ArrayNum;
      if ((local_978.ArrayNum < 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_3b8._0_8_ = (FScriptContainerElement *)0x0;
      local_3b8._8_8_ = 0;
      local_398 = (ForElementType<unsigned_int>)0x0;
      local_390 = 0;
      local_38c = 0x80;
      local_388 = -1;
      local_384 = 0;
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = 0;
      if (iVar14 != 0) {
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum(uVar36);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_3b8,iVar14);
        uVar43 = 1;
        if (3 < (uint)iVar14) {
          uVar21 = (ulonglong)(((uint)iVar14 >> 1) + 7) * 2 + 1;
          lVar30 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_768.Value._0_4_ = (undefined4)lVar30;
          uVar43 = 1 << ((byte)lVar30 & 0x1f);
        }
        if ((local_370 == 0) || ((int)local_370 < (int)uVar43)) {
          local_370 = uVar43;
          if (local_378.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_378,0,0,4);
          }
          if (uVar43 != 0) {
            uVar26 = uVar43;
            if (uVar43 < 2) {
              if (local_378.Data != (FScriptContainerElement *)0x0) {
                uVar26 = 0;
                goto LAB_14e80d989;
              }
            }
            else {
LAB_14e80d989:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_378,0,uVar26,4);
            }
            if (0 < (int)uVar43) {
              uVar21 = 0;
              uVar38 = (ulonglong)uVar43;
              do {
                FVar24.Data = local_380;
                if (local_378.Data != (FScriptContainerElement *)0x0) {
                  FVar24.Data = local_378.Data;
                }
                uVar19 = (longlong)(int)uVar43 - 1U & uVar21;
                uVar21 = uVar21 + 1;
                *(undefined4 *)(FVar24.Data + uVar19 * 4) = 0xffffffff;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          if (local_370 != 0) {
            pTStack_828 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3b8 + 0x10);
            uStack_82c = 1;
            local_830 = 0;
            uStack_81c = 0;
            iStack_818 = 0;
            if (local_390 != 0) {
              FVar23 = (ForElementType<unsigned_int>)((longlong)local_3b8 + 0x10);
              if (local_398 != (ForElementType<unsigned_int>)0x0) {
                FVar23 = local_398;
              }
              uVar43 = *(uint *)FVar23;
              iStack_818 = 0;
              local_830 = 0;
              while (uVar43 == 0) {
                iStack_818 = iStack_818 + 0x20;
                lVar30 = (longlong)local_830;
                local_830 = local_830 + 1;
                if ((int)((local_390 - 1) + ((int)(local_390 - 1) >> 0x1f & 0x1fU)) >> 5 < local_830
                   ) goto LAB_14e80dabf;
                uVar43 = ((uint *)((longlong)FVar23 + 4))[lVar30];
              }
              uStack_82c = -uVar43 & uVar43;
              uVar21 = (ulonglong)uStack_82c * 2 + 1;
              lVar30 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              local_768.Value._4_4_ = (int)lVar30;
              uStack_81c = iStack_818 + -1 + local_768.Value._4_4_;
              if ((int)local_390 < (int)uStack_81c) {
LAB_14e80dabf:
                uStack_81c = local_390;
              }
            }
            local_820 = 0xffffffff;
            local_728 = (longlong *)local_3b8;
            local_720._padding_ = CONCAT44(uStack_82c,local_830);
            local_720.CurrentBitIndex = uStack_81c;
            local_720.UnvisitedBitMask = 0xffffffff;
            local_720._28_4_ = uStack_814;
            local_720.BaseBitIndex = iStack_818;
            local_720.Array = pTStack_828;
            uVar43 = uStack_81c;
            if ((int)uStack_81c < (int)local_390) {
              do {
                lVar30 = *local_728;
                lVar20 = (longlong)(int)uVar43;
                uVar26 = local_370 - 1 & *(uint *)(lVar30 + lVar20 * 0xc);
                *(uint *)(lVar30 + 8 + lVar20 * 0xc) = uVar26;
                FVar24.Data = local_380;
                if (local_378.Data != (FScriptContainerElement *)0x0) {
                  FVar24.Data = local_378.Data;
                }
                uVar21 = (longlong)(int)local_370 - 1U & (longlong)(int)uVar26;
                *(undefined4 *)(lVar30 + 4 + lVar20 * 0xc) =
                     *(undefined4 *)(FVar24.Data + uVar21 * 4);
                *(uint *)(FVar24.Data + uVar21 * 4) = uVar43;
                local_720.UnvisitedBitMask = local_720.UnvisitedBitMask & ~local_720._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_720);
                uVar43 = local_720.CurrentBitIndex;
              } while (local_720.CurrentBitIndex < (local_720.Array)->NumBits);
            }
          }
        }
      }
      pFVar32 = FVar31.Data + uVar36 * 4;
      if (FVar31.Data != pFVar32) {
        puVar41 = (uint *)0x0;
        do {
          if (local_384 == 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)local_3b8,(int *)(local_3b8 + 8),
                                (int *)(local_3b8 + 0xc));
            uVar43 = local_390;
            if (local_390 == 0) {
              iVar37 = 0;
LAB_14e80dc39:
              if (local_38c < (int)(local_390 + 1)) {
                uVar42 = local_38c + 0x1fU >> 5;
                uVar26 = local_390 + 0x20 >> 5;
                if (uVar26 < 5) {
                  local_38c = 4;
                }
                else {
                  uVar21 = (ulonglong)uVar26;
                  if (uVar42 < 5) {
                    uVar42 = 0;
                  }
                  if (uVar42 == 0) {
                    uVar38 = 4;
                    if (4 < uVar21) {
                      uVar38 = uVar21;
                    }
                  }
                  else {
                    uVar38 = ((ulonglong)uVar26 * 3 >> 3) + 0x10 + uVar21;
                  }
                  uVar36 = FMemory::QuantizeSize(uVar38 * 4,0);
                  local_38c = (int)(uVar36 >> 2);
                  if (local_38c < (int)uVar26) {
                    local_38c = 0x7fffffff;
                  }
                }
                local_38c = local_38c << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_3b8 + 0x10),local_390);
              }
              local_390 = local_390 + 1;
              uVar26 = (int)local_390 >> 0x1f & 0x1f;
              uVar42 = local_390 + uVar26;
              iVar13 = (uVar42 & 0x1f) - uVar26;
              if (iVar13 != 0) {
                FVar23 = (ForElementType<unsigned_int>)((longlong)local_3b8 + 0x10);
                if (local_398 != (ForElementType<unsigned_int>)0x0) {
                  FVar23 = local_398;
                }
                puVar27 = (uint *)((longlong)FVar23 + (longlong)((int)uVar42 >> 5) * 4);
                *puVar27 = *puVar27 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
              }
            }
            else {
              iVar37 = (int)(local_390 + ((int)local_390 >> 0x1f & 0x1fU)) >> 5;
              if (iVar37 != (int)(((int)(local_390 - 1) >> 0x1f & 0x1fU) + (local_390 - 1)) >> 5)
              goto LAB_14e80dc39;
              local_390 = local_390 + 1;
            }
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_3b8 + 0x10);
            if (local_398 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_398;
            }
            puVar27 = (uint *)((longlong)FVar23 + (longlong)iVar37 * 4);
            *puVar27 = *puVar27 & ~(1 << ((byte)uVar43 & 0x1f));
            iVar37 = local_388;
          }
          else {
            local_384 = local_384 + -1;
            iVar37 = *(int *)(local_3b8._0_8_ + (longlong)local_388 * 0xc + 4);
            iVar14 = local_388;
            if (local_384 != 0) {
              *(undefined4 *)(local_3b8._0_8_ + (longlong)iVar37 * 0xc) = 0xffffffff;
            }
          }
          local_388 = iVar37;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_3b8,&local_5d8,iVar14);
          puVar27 = puVar41;
          if (local_5d8.Pointer != (uint *)0x0) {
            *(uint *)local_5d8.Pointer = *(uint *)FVar31.Data;
            *(uint *)((longlong)local_5d8.Pointer + 4) = 0xffffffff;
            puVar27 = local_5d8.Pointer;
          }
          uVar43 = *puVar27;
          if ((local_3b8._8_4_ - local_384 != 1) && (local_3b8._8_4_ != local_384)) {
            FVar24.Data = local_380;
            if (local_378.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_378.Data;
            }
            for (iVar14 = *(int *)(FVar24.Data + (ulonglong)(local_370 - 1 & uVar43) * 4);
                iVar14 != -1; iVar14 = *(int *)(local_3b8._0_8_ + (longlong)iVar14 * 0xc + 4)) {
              if (*(uint *)(local_3b8._0_8_ + (longlong)iVar14 * 0xc) == uVar43) {
                if (iVar14 != -1) {
                  *(uint *)(local_3b8._0_8_ + (longlong)iVar14 * 0xc) = uVar43;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_3b8,local_5d8.Index,1);
                  goto LAB_14e80e124;
                }
                break;
              }
            }
          }
          uVar26 = local_3b8._8_4_ - local_384;
          uVar42 = 1;
          if (3 < uVar26) {
            uVar21 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
            lVar40 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            local_758 = (undefined4)lVar40;
            uVar42 = 1 << ((byte)lVar40 & 0x1f);
          }
          if (((int)uVar26 < 1) || ((int)uVar42 <= (int)local_370)) {
            uVar43 = local_370 - 1 & uVar43;
            puVar27[2] = uVar43;
            FVar24.Data = local_380;
            if (local_378.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_378.Data;
            }
            uVar21 = (longlong)(int)local_370 - 1U & (longlong)(int)uVar43;
            puVar27[1] = *(uint *)(FVar24.Data + uVar21 * 4);
            *(int *)(FVar24.Data + uVar21 * 4) = local_5d8.Index;
          }
          else {
            local_370 = uVar42;
            if (local_378.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_378,0,0,4)
              ;
            }
            if (uVar42 != 0) {
              uVar43 = uVar42;
              if (uVar42 < 2) {
                if (local_378.Data != (FScriptContainerElement *)0x0) {
                  uVar43 = 0;
                  goto LAB_14e80dee3;
                }
              }
              else {
LAB_14e80dee3:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_378,0,uVar43,4);
              }
              if (0 < (int)uVar42) {
                uVar21 = (ulonglong)uVar42;
                puVar27 = puVar41;
                do {
                  FVar24.Data = local_380;
                  if (local_378.Data != (FScriptContainerElement *)0x0) {
                    FVar24.Data = local_378.Data;
                  }
                  uVar38 = (longlong)(int)uVar42 - 1U & (ulonglong)puVar27;
                  puVar27 = (uint *)((longlong)puVar27 + 1);
                  *(undefined4 *)(FVar24.Data + uVar38 * 4) = 0xffffffff;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
            }
            if (local_370 != 0) {
              pTStack_848 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3b8 + 0x10);
              local_850 = 0;
              uStack_84c = 1;
              uStack_83c = 0;
              uStack_838 = 0;
              puVar27 = puVar41;
              if (local_390 != 0) {
                FVar23 = (ForElementType<unsigned_int>)((longlong)local_3b8 + 0x10);
                if (local_398 != (ForElementType<unsigned_int>)0x0) {
                  FVar23 = local_398;
                }
                uVar43 = *(uint *)FVar23;
                puVar39 = puVar41;
                while (uVar43 == 0) {
                  uStack_838 = (int)puVar39 + 0x20;
                  puVar39 = (uint *)(ulonglong)uStack_838;
                  iVar14 = (int)puVar27;
                  local_850 = iVar14 + 1;
                  puVar27 = (uint *)(ulonglong)local_850;
                  if ((int)((local_390 - 1) + ((int)(local_390 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_850) goto LAB_14e80e01f;
                  uVar43 = ((uint *)((longlong)FVar23 + 4))[iVar14];
                }
                uStack_84c = -uVar43 & uVar43;
                uVar21 = (ulonglong)uStack_84c * 2 + 1;
                lVar40 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                  }
                }
                local_754 = (int)lVar40;
                uStack_83c = local_754 + -1 + uStack_838;
                puVar27 = (uint *)(ulonglong)uStack_83c;
                if ((int)local_390 < (int)uStack_83c) {
LAB_14e80e01f:
                  puVar27 = (uint *)(ulonglong)local_390;
                  uStack_83c = local_390;
                }
              }
              local_840 = 0xffffffff;
              local_700 = (longlong *)local_3b8;
              local_6f8._padding_ = CONCAT44(uStack_84c,local_850);
              local_6f8.CurrentBitIndex = uStack_83c;
              local_6f8.UnvisitedBitMask = 0xffffffff;
              local_6f8._28_4_ = uStack_834;
              local_6f8.BaseBitIndex = uStack_838;
              local_6f8.Array = pTStack_848;
              if ((int)puVar27 < (int)local_390) {
                do {
                  lVar40 = *local_700;
                  lVar30 = (longlong)(int)puVar27;
                  uVar43 = local_370 - 1 & *(uint *)(lVar40 + lVar30 * 0xc);
                  *(uint *)(lVar40 + 8 + lVar30 * 0xc) = uVar43;
                  FVar24.Data = local_380;
                  if (local_378.Data != (FScriptContainerElement *)0x0) {
                    FVar24.Data = local_378.Data;
                  }
                  uVar21 = (longlong)(int)local_370 - 1U & (longlong)(int)uVar43;
                  *(undefined4 *)(lVar40 + 4 + lVar30 * 0xc) =
                       *(undefined4 *)(FVar24.Data + uVar21 * 4);
                  *(int *)(FVar24.Data + uVar21 * 4) = (int)puVar27;
                  local_6f8.UnvisitedBitMask =
                       local_6f8.UnvisitedBitMask & ~local_6f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f8);
                  puVar27 = (uint *)(ulonglong)(uint)local_6f8.CurrentBitIndex;
                } while (local_6f8.CurrentBitIndex < (local_6f8.Array)->NumBits);
              }
            }
          }
LAB_14e80e124:
          FVar31.Data = FVar31.Data + 4;
          param_1 = local_918;
          lVar40 = local_950;
          uVar42 = local_97c;
        } while (FVar31.Data != pFVar32);
      }
      lVar30 = (longlong)(int)local_968[0];
      uVar26 = 0;
      uVar43 = uVar26;
      if ((int)local_968[0] < (int)param_1->_padding_) {
        uVar43 = ~local_968[0] >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar35 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (lVar30 * 0x50 + param_1->_padding_);
      if (pTVar35 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3b8) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  (pTVar35,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3b8);
      }
      local_370 = 0;
      if (local_378.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3b8);
      lVar30 = (longlong)(int)local_968[0];
      uVar43 = uVar26;
      if ((int)local_968[0] < *(int *)&(param_1->SimulationType).field_0x18) {
        uVar43 = ~local_968[0] >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar30 * 4) = 2;
      _Var8 = UE::Math::TTransform<float>::Identity.Scale3D;
      _Var7 = UE::Math::TTransform<float>::Identity.Translation;
      _Var6 = UE::Math::TTransform<float>::Identity.Rotation;
      lVar30 = (longlong)(int)local_968[0];
      if ((int)local_968[0] < (int)param_1->_padding_) {
        uVar26 = ~local_968[0] >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar20 = param_1->_padding_;
      *(__m128 *)(lVar20 + lVar30 * 0x30) = _Var6;
      *(__m128 *)(lVar20 + 0x10 + lVar30 * 0x30) = _Var7;
      *(__m128 *)(lVar20 + 0x20 + lVar30 * 0x30) = _Var8;
      GeometryCollectionAlgo::ParentTransforms
                ((FManagedArrayCollection *)param_1,local_968[0],&local_978);
      local_97c = uVar42 + 1;
      local_950 = lVar40 + 1;
      if ((longlong)local_868 <= local_950) goto LAB_14e80e2eb;
      uVar21 = (ulonglong)local_940;
    } while( true );
  }
LAB_14e80e2fa:
  FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren(param_1,local_8e0);
  FGeometryCollectionClusteringUtility::RecursivelyUpdateChildBoneNames
            (local_8e0,
             (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
             &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
  FGeometryCollectionClusteringUtility::ValidateResults(param_1);
  if (local_978.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.AllocatorInstance.Data);
  }
  if (local_7f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.AllocatorInstance.Data);
  }
  if (local_800.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.AllocatorInstance.Data);
  }
  if (local_298 != (code *)0x0) {
    pppuVar25 = &local_288;
    if (pppuStack_270 != (undefined ***)0x0) {
      pppuVar25 = pppuStack_270;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if ((code *)local_2c8 != (code *)0x0) {
    pppuVar25 = &local_2b8;
    if (pppuStack_2a0 != (undefined ***)0x0) {
      pppuVar25 = pppuStack_2a0;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (local_8d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data);
  }
  if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.AllocatorInstance.Data);
  }
  if (local_990.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.Data);
  }
  if (local_960.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data);
  }
  if (local_910.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_910.Data);
  }
  if (local_8c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.AllocatorInstance.Data);
  }
  if (local_860.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.AllocatorInstance.Data);
  }
  if (local_900.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Sizes.AllocatorInstance.Data);
  }
  if (local_900.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Parents.AllocatorInstance.Data);
  }
  if (local_938.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_c0 = 0;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  if ((FScriptContainerElement *)local_1c8._176_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._176_8_);
  }
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
              *)(local_1c8 + 0x50));
  return;
LAB_14e80e2eb:
  if (bVar12) {
    FGeometryCollectionClusteringUtility::RemoveDanglingClusters(param_1);
  }
  goto LAB_14e80e2fa;
}

// GenerateGridSites @ 14e811920

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
FFractureEngineClustering::GenerateGridSites
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  FFractureEngineBoneSelection local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.SelectedBones.ArrayNum = param_2->ArrayNum;
  lVar9 = (longlong)local_48.SelectedBones.ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.SelectedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GeometryCollection = param_1;
  if (local_48.SelectedBones.ArrayNum == 0) {
    local_48.SelectedBones.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_48.SelectedBones.ArrayNum,0,&local_48.SelectedBones.AllocatorInstance,
               local_48.SelectedBones.ArrayNum,&local_48.SelectedBones.ArrayMax);
    memcpy(local_48.SelectedBones.AllocatorInstance.Data,pFVar2,lVar9 << 2);
  }
  FFractureEngineBoneSelection::ConvertSelectionToClusterNodes(&local_48);
  iVar4 = local_48.SelectedBones.ArrayNum;
  uVar8 = (ulonglong)local_48.SelectedBones.ArrayNum;
  pFVar2 = local_48.SelectedBones.AllocatorInstance.Data + uVar8 * 4;
  FVar10.Data = local_48.SelectedBones.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar8 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar2) break;
    pTVar7 = GenerateGridSites(&local_58,param_1,*(int *)FVar10.Data,param_3,param_4,param_5,
                               (TBox<double> *)0x0);
    if ((__return_storage_ptr__ == pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    iVar1 = pTVar7->ArrayNum;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x18,
              (pTVar7->AllocatorInstance).Data,(longlong)iVar1 * 0x18);
      pTVar7->ArrayNum = 0;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    uVar8 = (ulonglong)(uint)local_48.SelectedBones.ArrayNum;
    FVar10.Data = FVar10.Data + 4;
  }
  if (local_48.SelectedBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SelectedBones.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateGridSites @ 14e811af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
FFractureEngineClustering::GenerateGridSites
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryCollection *param_1,int param_2,int param_3,int param_4,int param_5,
          TBox<double> *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_168 [32];
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  FVoronoiPartitioner::GenerateBounds((TBox<double> *)&local_128._s_0,param_1,param_2);
  if (param_6 != (TBox<double> *)0x0) {
    (param_6->Min).field0_0x0._s_0.X = local_128._s_0.X;
    *(double *)((longlong)&(param_6->Min).field0_0x0 + 8) = local_128._s_0.Y;
    (param_6->Min).field0_0x0._s_0.Z = local_128._s_0.Z;
    (param_6->Max).field0_0x0._s_0.X = dStack_110;
    (param_6->Max).field0_0x0._s_0.Y = local_108;
    (param_6->Max).field0_0x0._s_0.Z = dStack_100;
    param_6->IsValid = (undefined1)local_f8;
    param_6->Pad[0] = local_f8._1_1_;
    param_6->Pad[1] = local_f8._2_1_;
    param_6->Pad[2] = local_f8._3_1_;
    param_6->Pad[3] = local_f8._4_1_;
    param_6->Pad[4] = local_f8._5_1_;
    param_6->Pad[5] = local_f8._6_1_;
    param_6->Pad[6] = local_f8._7_1_;
  }
  if (param_3 < 1) {
    param_3 = 1;
  }
  if (param_4 < 1) {
    param_4 = 1;
  }
  if (param_5 < 1) {
    param_5 = 1;
  }
  uVar11 = param_5 * param_4 * param_3;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar11,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  dVar6 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  iVar12 = 0;
  if (0 < param_3) {
    uVar14 = SUB84(local_128._s_0.Y,0);
    uVar15 = (undefined4)((ulonglong)local_128._8_8_ >> 0x20);
    dVar16 = __real_3ff0000000000000 / (double)param_3;
    dVar13 = dStack_110 - local_128._s_0.X;
    uVar17 = local_128._s_0.X;
    do {
      iVar9 = 0;
      dVar19 = ((double)iVar12 + dVar6) * dVar16 * dVar13 + (double)uVar17;
      if (0 < param_4) {
        dVar4 = local_108 - (double)CONCAT44(uVar15,uVar14);
        do {
          iVar10 = 0;
          if (0 < param_5) {
            dVar3 = dStack_100 - local_128._s_0.Z;
            do {
              iVar7 = __return_storage_ptr__->ArrayNum;
              dVar18 = (double)iVar10;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&__return_storage_ptr__->AllocatorInstance,piVar1);
              }
              iVar10 = iVar10 + 1;
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              lVar8 = (longlong)iVar7;
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              *(double *)(pFVar2 + lVar8 * 0x18) = dVar19;
              *(double *)(pFVar2 + lVar8 * 0x18 + 8) =
                   ((double)iVar9 + dVar6) * (dVar5 / (double)param_4) * dVar4 +
                   (double)CONCAT44(uVar15,uVar14);
              *(double *)(pFVar2 + lVar8 * 0x18 + 0x10) =
                   (dVar18 + dVar6) * (dVar5 / (double)param_5) * dVar3 + local_128._s_0.Z;
            } while (iVar10 < param_5);
            uVar14 = SUB84(local_128._s_0.Y,0);
            uVar15 = (undefined4)((ulonglong)local_128._8_8_ >> 0x20);
          }
          iVar9 = iVar9 + 1;
          uVar17 = local_128._s_0.X;
        } while (iVar9 < param_4);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_3);
  }
  return __return_storage_ptr__;
}

// MergeSelectedClusters @ 14e8162a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FFractureEngineClustering::MergeSelectedClusters
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_388;
  uint local_378 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_370;
  FCollectionHierarchyFacade local_358;
  FCollectionTransformSelectionFacade local_2a8;
  
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_358,(FManagedArrayCollection *)param_1);
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  if (iVar6 < param_2->ArrayNum) {
    return false;
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_2a8,(FManagedArrayCollection *)param_1);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  ConvertEmbeddedSelectionToParents(&local_2a8,param_2);
  local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.ArrayNum = 0;
  local_388.ArrayMax = 0;
  local_res18 = FManagedArrayCollection::NumElements
                          ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  if ((int)local_res18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18);
  }
  if (local_388.ArrayMax < (int)local_res18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res18,&local_388.AllocatorInstance,local_388.ArrayNum,&local_388.ArrayMax);
  }
  pFVar12 = (param_2->AllocatorInstance).Data;
  bVar5 = false;
  iVar6 = param_2->ArrayNum;
  local_res20 = pFVar12 + (longlong)iVar6 * 4;
LAB_14e816397:
  do {
    pFVar2 = local_res20;
    if (param_2->ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    uVar7 = local_res18;
    if (pFVar12 == pFVar2) {
      if (bVar5) {
        iVar6 = FGeometryCollectionClusteringUtility::PickBestNodeToMergeTo
                          ((FManagedArrayCollection *)param_1,param_2);
        if (iVar6 < 0) goto LAB_14e816695;
        FGeometryCollectionClusteringUtility::ClusterBonesUnderExistingNode
                  (param_1,iVar6,&local_388);
      }
      else {
        iVar6 = FGeometryCollectionClusteringUtility::FindLowestCommonAncestor
                          ((FManagedArrayCollection *)param_1,param_2);
        if (iVar6 == -1) {
LAB_14e816695:
          bVar5 = false;
          goto LAB_14e816697;
        }
        FGeometryCollectionClusteringUtility::ClusterBonesUnderNewNodeWithParent
                  (param_1,iVar6,param_2,true,true);
        GeometryCollection::GenerateTemporaryGuids((FManagedArrayCollection *)param_1,uVar7,true);
      }
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,1,Default);
      if ((param_2->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      *(int *)(param_2->AllocatorInstance).Data = iVar6;
      bVar5 = FGeometryCollectionClusteringUtility::RemoveDanglingClusters(param_1);
      if (bVar5) {
        param_2->ArrayNum = 0;
        if (param_2->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
        }
      }
      Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_358);
      bVar5 = true;
LAB_14e816697:
      if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
      return bVar5;
    }
    local_378[0] = *(uint *)pFVar12;
    lVar11 = (longlong)(int)local_378[0];
    uVar7 = 0;
    if ((int)local_378[0] < *(int *)&(param_1->SimulationType).field_0x18) {
      uVar7 = ~local_378[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar11 * 4) != 2) {
      if (((local_388.AllocatorInstance.Data <= (FScriptContainerElement *)local_378) &&
          ((FScriptContainerElement *)local_378 <
           local_388.AllocatorInstance.Data + (longlong)local_388.ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar9 = local_388.ArrayNum;
      if (local_388.ArrayNum == local_388.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_388.AllocatorInstance,&local_388.ArrayMax);
      }
      local_388.ArrayNum = iVar9 + 1;
      *(uint *)(local_388.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_378[0];
LAB_14e816582:
      pFVar12 = pFVar12 + 4;
      goto LAB_14e816397;
    }
    bVar5 = true;
    pTVar10 = Chaos::Facades::FCollectionHierarchyFacade::GetChildrenAsArray
                        (&local_358,&local_370,local_378[0]);
    if ((&local_388 == pTVar10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar9 = pTVar10->ArrayNum;
    if (iVar9 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar9,&local_388.AllocatorInstance,&local_388.ArrayNum,
                         &local_388.ArrayMax);
      memmove(local_388.AllocatorInstance.Data + (longlong)iVar8 * 4,
              (pTVar10->AllocatorInstance).Data,(longlong)iVar9 << 2);
      pTVar10->ArrayNum = 0;
    }
    if (local_370.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e816582;
    FMemory::Free(local_370.AllocatorInstance.Data);
    pFVar12 = pFVar12 + 4;
  } while( true );
}

