// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 148a71470

UScriptStruct * __cdecl FRuntimePartitionStreamingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePartitionStreamingData,(UObject *)pUVar1,
                         L"RuntimePartitionStreamingData");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.OuterSingleton;
}

// ~FRuntimePartitionStreamingData @ 148a81780

void __thiscall
FRuntimePartitionStreamingData::~FRuntimePartitionStreamingData
          (FRuntimePartitionStreamingData *this)

{
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *pTVar1;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = (this->SpatialIndex2D).Ptr;
  if (pTVar1 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                 *)0x0) {
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
  }
  pTVar1 = (this->SpatialIndexForce2D).Ptr;
  if (pTVar1 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                 *)0x0) {
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
  }
  pTVar2 = (this->SpatialIndex).Ptr;
  if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                 *)0x0) {
    (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
  }
  pFVar3 = (this->NonSpatiallyLoadedCells).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SpatiallyLoadedCells).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// CreatePartitionsSpatialIndex @ 148a8c730

void __thiscall
FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex(FRuntimePartitionStreamingData *this)

{
  TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>_>
  *pTVar1;
  undefined1 *puVar2;
  TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>_>
  *pTVar3;
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar14;
  undefined8 *puVar15;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar16;
  FString *pFVar17;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar18;
  TBox<double> *pTVar19;
  TBox<double> *pTVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  double dVar24;
  double dVar25;
  FIdentityFunctor local_118;
  <lambda_1> local_117 [7];
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> local_110;
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> local_100;
  longlong local_f0;
  TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
  local_e8;
  int local_d8 [2];
  TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
  local_d0;
  TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
  local_c0;
  int *local_b0;
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pTVar1 = &this->SpatialIndex;
  if ((this->SpatialIndex).Ptr !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
       *)0x0) {
    return;
  }
  uVar6 = (this->SpatiallyLoadedCells).ArrayNum;
  pTVar18 = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
             *)0x0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayMax = 0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
  }
  uVar6 = (this->SpatiallyLoadedCells).ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (local_110.ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&local_110.AllocatorInstance,local_110.ArrayNum,&local_110.ArrayMax);
  }
  pFVar22 = (this->SpatiallyLoadedCells).AllocatorInstance.Data;
  iVar12 = (this->SpatiallyLoadedCells).ArrayNum;
  pFVar4 = pFVar22 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->SpatiallyLoadedCells).ArrayNum != iVar12) {
      local_117[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_117);
    }
    if (pFVar22 == pFVar4) break;
    local_f0 = *(longlong *)pFVar22;
    this_00 = (FObjectPtr_u_0 *)(local_f0 + 0xa8);
    if (this_00->Handle == (UObject *)0x0) {
      pFVar17 = GetTypeName<UWorldPartitionRuntimeCellDataHashSet>(&local_38);
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar23);
    }
    pUVar13 = UWorldPartitionRuntimeCellDataHashSet::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
    if ((!bVar10) || (this_00->Handle == (UObject *)0x0)) {
      pFVar17 = GetTypeName<UWorldPartitionRuntimeCellDataHashSet>(&local_58);
      pwVar23 = L"";
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      pFVar17 = GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
                          (&local_48,(UWorldPartitionRuntimeCellData *)this_00->Handle);
      if ((pFVar17->Data).ArrayNum != 0) {
        pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar23,pwVar21);
    }
    if (this_00->Handle[6].field_0x8 == '\0') {
      if (((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = local_100.ArrayNum;
      if (local_100.ArrayNum == local_100.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_100.AllocatorInstance,&local_100.ArrayMax);
      }
      pFVar22 = pFVar22 + 8;
      local_100.ArrayNum = iVar11 + 1;
      *(longlong *)(local_100.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_f0;
    }
    else {
      if (((local_110.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_110.ArrayNum == local_110.ArrayMax) {
        local_110.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
      }
      pFVar22 = pFVar22 + 8;
      *(longlong *)(local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 8) = local_f0;
      local_110.ArrayNum = local_110.ArrayNum + 1;
    }
  }
  if (local_100.ArrayNum != 0) {
    pTVar14 = ::operator_new(0x68);
    pTVar16 = pTVar18;
    if (pTVar14 !=
        (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
         *)0x0) {
      *(undefined8 *)pTVar14 = 0;
      *(undefined8 *)&pTVar14->field_0x8 = 0;
      *(undefined8 *)&pTVar14->field_0x10 = 0;
      *(undefined8 *)&pTVar14->field_0x18 = 0;
      *(undefined8 *)&pTVar14->field_0x20 = 0;
      *(undefined8 *)&pTVar14->field_0x28 = 0;
      *(undefined8 *)&pTVar14->field_0x30 = 0;
      *(undefined8 *)&pTVar14->field_0x38 = 0;
      *(undefined8 *)&pTVar14->field_0x40 = 0;
      *(undefined8 *)&pTVar14->field_0x48 = 0;
      *(undefined8 *)&pTVar14->field_0x50 = 0;
      *(undefined8 *)&pTVar14->field_0x58 = 0;
      *(undefined8 *)&pTVar14->field_0x60 = 0;
      *(undefined ***)pTVar14 =
           &
           ___7__TStaticSpatialIndexRTree_U__TObjectPtr_VUWorldPartitionRuntimeCell____V__TNodeSorterHilbert_UFSpatialIndexProfile3D_FStaticSpatialIndex___0BAAAA__FStaticSpatialIndex__UFSpatialIndexProfile3D_3___6B_
      ;
      *(TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
        **)&pTVar14->field_0x18 = pTVar14;
      pTVar16 = pTVar14;
    }
    if (pTVar1 == (TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>_>
                   *)&local_70) {
      if (pTVar16 !=
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
           *)0x0) {
        puVar15 = *(undefined8 **)pTVar16;
        goto LAB_148a8ca55;
      }
    }
    else {
      pTVar14 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar16;
      if (pTVar14 !=
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
           *)0x0) {
        puVar15 = *(undefined8 **)pTVar14;
        pTVar16 = pTVar14;
LAB_148a8ca55:
        (*(code *)*puVar15)(pTVar16,1);
      }
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    Algo::
    Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l18::<lambda_1>_>
              (&local_100,&local_e8,local_117[0]);
    pTVar16 = pTVar1->Ptr;
    puVar2 = &pTVar16->field_0x8;
    if ((TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
         *)puVar2 != &local_e8) {
      if (*(void **)puVar2 != (void *)0x0) {
        FMemory::Free(*(void **)puVar2);
      }
      *(FScriptContainerElement **)puVar2 = local_e8.AllocatorInstance.Data;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar16->field_0x10 = local_e8.ArrayNum;
      *(int *)&pTVar16->field_0x14 = local_e8.ArrayMax;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
    }
    iVar12 = *(int *)&pTVar16->field_0x10;
    pTVar19 = *(TBox<double> **)puVar2;
    pTVar20 = (TBox<double> *)((longlong)iVar12 * 0x40 + (longlong)pTVar19);
    local_78 = 0;
    while( true ) {
      if (*(int *)&pTVar16->field_0x10 != iVar12) {
        `TCheckedPointerIterator<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_118);
      }
      if (pTVar19 == pTVar20) break;
      UE::Math::TBox<double>::operator+=((TBox<double> *)&local_a8._s_0,pTVar19);
      pTVar19 = (TBox<double> *)((longlong)&pTVar19[1].Min.field0_0x0 + 8);
    }
    dVar25 = (local_88 - local_a8._s_0.Y) * __real_3fe0000000000000;
    dVar24 = (local_80 - local_a8._s_0.Z) * __real_3fe0000000000000;
    dVar9 = (local_90 - local_a8._s_0.X) * __real_3fe0000000000000;
    if (dVar25 <= dVar9) {
      dVar25 = dVar9;
    }
    if (dVar25 <= dVar24) {
      dVar25 = dVar24;
    }
    iVar11 = -((int)ROUND(__real_bfe0000000000000 - dVar25 * __real_3f00000000000000) >> 1);
    iVar12 = 1;
    if (iVar11 != 0) {
      iVar12 = iVar11;
    }
    uVar5 = (ulonglong)(iVar12 - 1) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_d8[0] = (int)lVar7 + 1;
    local_b0 = local_d8;
    AlgoImpl::
    IntroSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
              (*(TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> **)
                &pTVar16->field_0x8,*(int *)&pTVar16->field_0x10,local_118,(<lambda_2> *)&local_b0);
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::Init
              ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)&pTVar16->field_0x18
              );
    (**(code **)(*(longlong *)(this->SpatialIndex).Ptr + 0x20))();
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    pTVar14 = ::operator_new(0x58);
    pTVar16 = pTVar18;
    if (pTVar14 !=
        (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
         *)0x0) {
      *(undefined8 *)pTVar14 = 0;
      *(undefined8 *)&pTVar14->field_0x8 = 0;
      *(undefined8 *)&pTVar14->field_0x10 = 0;
      *(undefined8 *)&pTVar14->field_0x18 = 0;
      *(undefined8 *)&pTVar14->field_0x20 = 0;
      *(undefined8 *)&pTVar14->field_0x28 = 0;
      *(undefined8 *)&pTVar14->field_0x30 = 0;
      *(undefined8 *)&pTVar14->field_0x38 = 0;
      *(undefined8 *)&pTVar14->field_0x40 = 0;
      *(undefined8 *)&pTVar14->field_0x48 = 0;
      *(undefined8 *)&pTVar14->field_0x50 = 0;
      *(undefined ***)pTVar14 =
           &
           ___7__TStaticSpatialIndexRTree_U__TObjectPtr_VUWorldPartitionRuntimeCell____V__TNodeSorterHilbert_UFSpatialIndexProfile2D_FStaticSpatialIndex___0BAAAA__FStaticSpatialIndex__UFSpatialIndexProfile2D_3___6B_
      ;
      *(TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
        **)&pTVar14->field_0x18 = pTVar14;
      pTVar16 = pTVar14;
    }
    pTVar3 = &this->SpatialIndexForce2D;
    if (pTVar3 == (TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>_>
                   *)&local_68) {
      if (pTVar16 !=
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
           *)0x0) {
        puVar15 = *(undefined8 **)pTVar16;
        goto LAB_148a8cc07;
      }
    }
    else {
      pTVar14 = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                 *)pTVar3->Ptr;
      pTVar3->Ptr = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                     *)pTVar16;
      if (pTVar14 !=
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
           *)0x0) {
        puVar15 = *(undefined8 **)pTVar14;
        pTVar16 = pTVar14;
LAB_148a8cc07:
        (*(code *)*puVar15)(pTVar16,1);
      }
    }
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    Algo::
    Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l19::<lambda_2>_>
              (&local_100,&local_d0,(<lambda_2>)local_118);
    TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
    ::Init((TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
            *)pTVar3->Ptr,&local_d0);
    (**(code **)(*(longlong *)pTVar3->Ptr + 0x20))();
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  if (local_110.ArrayNum == 0) goto LAB_148a8cd07;
  pTVar16 = ::operator_new(0x58);
  if (pTVar16 !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
       *)0x0) {
    *(undefined8 *)pTVar16 = 0;
    *(undefined8 *)&pTVar16->field_0x8 = 0;
    *(undefined8 *)&pTVar16->field_0x10 = 0;
    *(undefined8 *)&pTVar16->field_0x18 = 0;
    *(undefined8 *)&pTVar16->field_0x20 = 0;
    *(undefined8 *)&pTVar16->field_0x28 = 0;
    *(undefined8 *)&pTVar16->field_0x30 = 0;
    *(undefined8 *)&pTVar16->field_0x38 = 0;
    *(undefined8 *)&pTVar16->field_0x40 = 0;
    *(undefined8 *)&pTVar16->field_0x48 = 0;
    *(undefined8 *)&pTVar16->field_0x50 = 0;
    *(TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
      **)&pTVar16->field_0x18 = pTVar16;
    *(undefined ***)pTVar16 =
         &
         ___7__TStaticSpatialIndexRTree_U__TObjectPtr_VUWorldPartitionRuntimeCell____V__TNodeSorterHilbert_UFSpatialIndexProfile2D_FStaticSpatialIndex___0BAAAA__FStaticSpatialIndex__UFSpatialIndexProfile2D_3___6B_
    ;
    pTVar18 = pTVar16;
  }
  pTVar3 = &this->SpatialIndex2D;
  if (pTVar3 == (TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>_>
                 *)&local_60) {
    if (pTVar18 !=
        (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
         *)0x0) {
      puVar15 = *(undefined8 **)pTVar18;
      goto LAB_148a8ccc1;
    }
  }
  else {
    pTVar16 = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
               *)pTVar3->Ptr;
    pTVar3->Ptr = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                   *)pTVar18;
    if (pTVar16 !=
        (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
         *)0x0) {
      puVar15 = *(undefined8 **)pTVar16;
      pTVar18 = pTVar16;
LAB_148a8ccc1:
      (*(code *)*puVar15)(pTVar18,1);
    }
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  Algo::
  Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l23::<lambda_3>_>
            (&local_110,&local_c0,(<lambda_3>)local_118);
  TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
  ::Init((TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
          *)pTVar3->Ptr,&local_c0);
  (**(code **)(*(longlong *)pTVar3->Ptr + 0x20))();
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
LAB_148a8cd07:
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return;
}

// DestroyPartitionsSpatialIndex @ 148a8d600

void __thiscall
FRuntimePartitionStreamingData::DestroyPartitionsSpatialIndex(FRuntimePartitionStreamingData *this)

{
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar1;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *pTVar2;
  
  pTVar1 = (this->SpatialIndex).Ptr;
  if (pTVar1 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                 *)0x0) {
    (this->SpatialIndex).Ptr =
         (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
          *)0x0;
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
  }
  pTVar2 = (this->SpatialIndexForce2D).Ptr;
  if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                 *)0x0) {
    (this->SpatialIndexForce2D).Ptr =
         (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
          *)0x0;
    (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
  }
  pTVar2 = (this->SpatialIndex2D).Ptr;
  if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                 *)0x0) {
    (this->SpatialIndex2D).Ptr =
         (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
          *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000148a8d65d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
    return;
  }
  return;
}

// GetLoadingRange @ 148a956e0

int __thiscall FRuntimePartitionStreamingData::GetLoadingRange(FRuntimePartitionStreamingData *this)

{
  bool bVar1;
  int local_res8 [8];
  
  bVar1 = UWorldPartitionSubsystem::GetOverrideLoadingRange(this->Name,local_res8);
  if (!bVar1) {
    local_res8[0] = this->LoadingRange;
  }
  return local_res8[0];
}

