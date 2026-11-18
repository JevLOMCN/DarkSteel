// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 20

// operator() @ 14da68720

void __thiscall
`FPVMeshBuilder::GenerateDynamicMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined1 local_b8 [160];
  int local_18;
  int local_14;
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *local_10;
  
  local_14 = **(int **)((longlong)this + 8);
  local_18 = **(int **)this;
  local_b8._8_8_ = (FScriptContainerElement *)0x0;
  local_b8._16_8_ = 0;
  local_b8._24_8_ = (FScriptContainerElement *)0x0;
  local_b8._32_8_ = 0;
  local_b8._40_8_ = (FScriptContainerElement *)0x0;
  local_b8._48_8_ = 0;
  local_b8._56_8_ = (FScriptContainerElement *)0x0;
  local_b8._64_8_ = 0;
  local_b8._72_8_ = (FScriptContainerElement *)0x0;
  local_b8._80_8_ = 0;
  local_b8._88_8_ = (FScriptContainerElement *)0x0;
  local_b8._96_8_ = 0;
  local_b8._104_8_ = (FScriptContainerElement *)0x0;
  local_b8._112_8_ = 0;
  local_b8._120_8_ = (FScriptContainerElement *)0x0;
  local_b8._128_8_ = 0;
  local_b8._136_8_ = (FScriptContainerElement *)0x0;
  local_b8._144_8_ = 0;
  local_b8[0x98] = false;
  local_b8._0_8_ = &___7FPVMeshGenerator__6B_;
  local_10 = *(TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
  FPVMeshGenerator::Generate((FPVMeshGenerator *)local_b8);
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_b8);
  local_b8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_b8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._136_8_);
  }
  if ((FScriptContainerElement *)local_b8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._120_8_);
  }
  if ((FScriptContainerElement *)local_b8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._104_8_);
  }
  if ((FScriptContainerElement *)local_b8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._88_8_);
  }
  if ((FScriptContainerElement *)local_b8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._72_8_);
  }
  if ((FScriptContainerElement *)local_b8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._56_8_);
  }
  if ((FScriptContainerElement *)local_b8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._40_8_);
  }
  if ((FScriptContainerElement *)local_b8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._24_8_);
  }
  if ((FScriptContainerElement *)local_b8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  return;
}

// operator() @ 14da68860

void __thiscall
`FPVMeshBuilder::GetLocalDynamicMeshData'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  int *piVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar8 = PV::Facades::FBranchFacade::GetPoints(*(FBranchFacade **)this,param_1);
  FVar13.Data = (FScriptContainerElement *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar11 = (pTVar8->AllocatorInstance).Data;
  pFVar1 = pFVar11 + (longlong)pTVar8->ArrayNum * 4;
  if (pFVar11 != pFVar1) {
    plVar2 = *(longlong **)((longlong)this + 8);
    pFVar14 = FVar13.Data;
    do {
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar10 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar2[8];
        }
        iVar7 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar2[9] - 1U & *(uint *)pFVar11) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*plVar2 + (longlong)iVar7 * 0xc) == *(uint *)pFVar11) goto LAB_14da689aa;
            iVar7 = *(int *)(*plVar2 + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      iVar7 = (int)pFVar14;
      if ((FVar13.Data <= pFVar11) && (pFVar11 < FVar13.Data + (longlong)local_38.ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar13.Data = local_38.AllocatorInstance.Data;
        iVar7 = local_38.ArrayNum;
      }
      if (iVar7 == local_38.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_38.AllocatorInstance,&local_38.ArrayMax);
        FVar13.Data = local_38.AllocatorInstance.Data;
      }
      local_38.ArrayNum = iVar7 + 1U;
      *(uint *)(FVar13.Data + (longlong)iVar7 * 4) = *(uint *)pFVar11;
      pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
      FVar13.Data = local_38.AllocatorInstance.Data;
LAB_14da689aa:
      pFVar11 = pFVar11 + 4;
    } while (pFVar11 != pFVar1);
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  bVar5 = TManagedArrayAccessor<int>::IsValidIndex
                    ((TManagedArrayAccessor<int> *)(lVar3 + 0x78),param_1);
  if (bVar5) {
    piVar9 = TManagedArrayAccessor<int>::operator[]
                       ((TManagedArrayAccessor<int> *)(lVar3 + 0x78),param_1);
    bVar5 = *piVar9 == 0;
  }
  else {
    bVar5 = false;
  }
  lVar3 = *(longlong *)this;
  plVar2 = *(longlong **)(lVar3 + 0x40);
  uVar12 = uVar15;
  if (((plVar2 != (longlong *)0x0) && (-1 < param_1)) &&
     (iVar7 = (**(code **)(*plVar2 + 0x60))(), param_1 < iVar7)) {
    pTVar8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                       ((TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                        (lVar3 + 0x10),param_1);
    uVar12 = pTVar8->ArrayNum;
  }
  lVar3 = *(longlong *)this;
  plVar2 = *(longlong **)(lVar3 + 400);
  if (((plVar2 == (longlong *)0x0) || (param_1 < 0)) ||
     (iVar7 = (**(code **)(*plVar2 + 0x60))(), iVar7 <= param_1)) {
    iVar7 = -1;
  }
  else {
    piVar9 = TManagedArrayAccessor<int>::operator[]
                       ((TManagedArrayAccessor<int> *)(lVar3 + 0x160),param_1);
    iVar7 = *piVar9;
  }
  plVar2 = *(longlong **)((longlong)this + 0x18);
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)((longlong)param_1 * 0x28 + 0x20 + *plVar2) = iVar7;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar15 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FPVMeshBuilder::GenerateBranchMeshData
            (bVar5,uVar12,&local_38,*(FDisplacementData **)((longlong)this + 0x20),
             *(FPVMeshBuilderParams **)((longlong)this + 0x28),
             *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30),
             *(FManagedArrayCollection **)((longlong)this + 0x38),
             (FLocalDynamicMeshData *)(*plVar2 + (longlong)param_1 * 0x28));
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14da68c20

bool __thiscall
`FPVMeshBuilder::UpdateFoliagePivotPoints'::__l4::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  
  iVar2 = *param_1;
  pfVar6 = &DefaultLengthFromRoot;
  if ((*(longlong *)((longlong)this + 0x70) != 0) && (-1 < iVar2)) {
    iVar4 = (**(code **)(**(longlong **)((longlong)this + 0x70) + 0x60))();
    if (iVar2 < iVar4) {
      pfVar5 = TManagedArrayAccessor<float>::operator[]
                         ((TManagedArrayAccessor<float> *)((longlong)this + 0x40),iVar2);
      goto LAB_14da68c7a;
    }
  }
  pfVar5 = &DefaultLengthFromRoot;
LAB_14da68c7a:
  plVar3 = *(longlong **)((longlong)this + 0x70);
  fVar1 = *pfVar5;
  iVar2 = *param_2;
  if ((plVar3 != (longlong *)0x0) && (-1 < iVar2)) {
    iVar4 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < iVar4) {
      pfVar6 = TManagedArrayAccessor<float>::operator[]
                         ((TManagedArrayAccessor<float> *)((longlong)this + 0x40),iVar2);
    }
  }
  return fVar1 < *pfVar6;
}

// operator() @ 14da68cd0

bool __thiscall
`FPVMeshBuilder::CollectHardPoints'::__l7::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  TVector<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pTVar1 = PV::Facades::FPointFacade::GetPosition((FPointFacade *)((longlong)this + 0x10),*param_1);
  fVar6 = *(float *)this - (pTVar1->field0_0x0)._s_0.X;
  fVar7 = *(float *)((longlong)this + 4) - (pTVar1->field0_0x0)._s_0.Y;
  fVar5 = *(float *)((longlong)this + 8) - (pTVar1->field0_0x0)._s_0.Z;
  pTVar1 = PV::Facades::FPointFacade::GetPosition((FPointFacade *)((longlong)this + 0x10),*param_2);
  fVar4 = *(float *)((longlong)this + 4) - (pTVar1->field0_0x0)._s_0.Y;
  fVar2 = *(float *)((longlong)this + 8) - (pTVar1->field0_0x0)._s_0.Z;
  fVar3 = *(float *)this - (pTVar1->field0_0x0)._s_0.X;
  return SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <
         SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
}

// operator() @ 14da68db0

bool __thiscall
`FPVMeshBuilder::GetPointsIndicesToFoliageIndicesMap'::__l11::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  TVector<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pTVar1 = PV::Facades::FPointFacade::GetPosition((FPointFacade *)((longlong)this + 0x10),*param_1);
  fVar6 = *(float *)this - (pTVar1->field0_0x0)._s_0.X;
  fVar7 = *(float *)((longlong)this + 4) - (pTVar1->field0_0x0)._s_0.Y;
  fVar5 = *(float *)((longlong)this + 8) - (pTVar1->field0_0x0)._s_0.Z;
  pTVar1 = PV::Facades::FPointFacade::GetPosition((FPointFacade *)((longlong)this + 0x10),*param_2);
  fVar4 = *(float *)((longlong)this + 4) - (pTVar1->field0_0x0)._s_0.Y;
  fVar2 = *(float *)((longlong)this + 8) - (pTVar1->field0_0x0)._s_0.Z;
  fVar3 = *(float *)this - (pTVar1->field0_0x0)._s_0.X;
  return SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <
         SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
}

// CollectHardPoints @ 14da74e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __cdecl
FPVMeshBuilder::CollectHardPoints
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FBranchFacade *param_1,FPointFacade *param_2,FPlantFacade *param_3)

{
  undefined8 uVar1;
  float fVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<float> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  TVector<float> *pTVar18;
  uint *puVar19;
  ulong64 uVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  float *pfVar22;
  byte bVar23;
  ForAnyElementType FVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auStackY_aa8 [32];
  FIdentityFunctor local_a70;
  uint local_a6c;
  FBranchFacade *local_a68;
  int local_a60;
  uint local_a5c;
  uint local_a58;
  uint uStack_a54;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a50;
  undefined4 local_a48;
  uint uStack_a44;
  uint uStack_a40;
  undefined4 uStack_a3c;
  uint local_a38;
  uint uStack_a34;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a30;
  undefined4 local_a28;
  uint uStack_a24;
  uint uStack_a20;
  undefined4 uStack_a1c;
  FPlantFacade *local_a18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a10;
  undefined4 local_a08;
  int local_a04;
  undefined4 local_a00;
  int local_9fc;
  int local_9f8;
  undefined4 local_9f4;
  int local_9f0 [2];
  longlong *local_9e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9e0;
  longlong *local_9c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9b8;
  FSparseArrayAllocationInfo local_998;
  undefined8 local_988;
  float local_980;
  FPointFacade local_978;
  TVector<float>_u_0 local_548;
  FPointFacade local_538;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  uVar26 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pTVar3 = (param_1->Parents).ConstAttributeArray;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_a68 = param_1;
  local_a18 = param_3;
  local_a10 = __return_storage_ptr__;
  if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar9 = FManagedArrayCollection::NumElements
                      ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
  }
  else {
    uVar9 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
  }
  if ((uint)(local_b8._8_4_ - local_84) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8,uVar9);
    if (uVar9 < 4) {
      uVar9 = 1;
    }
    else {
      uVar29 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar31 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_a08 = (undefined4)lVar31;
      uVar9 = 1 << ((byte)lVar31 & 0x1f);
    }
    if ((local_70 == 0) || ((int)local_70 < (int)uVar9)) {
      local_70 = uVar9;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar9 != 0) {
        uVar28 = uVar9;
        if (uVar9 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar28 = 0;
            goto LAB_14da74f9b;
          }
        }
        else {
LAB_14da74f9b:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar28,4)
          ;
        }
        if (0 < (int)uVar9) {
          uVar30 = (ulonglong)uVar9;
          uVar29 = uVar26;
          do {
            FVar24.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_78.Data;
            }
            uVar14 = uVar29 & (longlong)(int)uVar9 - 1U;
            uVar29 = uVar29 + 1;
            *(undefined4 *)(FVar24.Data + uVar14 * 4) = 0xffffffff;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
      }
      if (local_70 != 0) {
        pTStack_a50 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        local_a58 = 0;
        uStack_a54 = 1;
        uStack_a44 = 0;
        uStack_a40 = 0;
        uVar29 = uVar26;
        if (local_90 != 0) {
          FVar25 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_98;
          }
          uVar9 = *(uint *)FVar25;
          uVar30 = uVar26;
          while (uVar9 == 0) {
            uStack_a40 = (int)uVar30 + 0x20;
            uVar30 = (ulonglong)uStack_a40;
            iVar10 = (int)uVar29;
            local_a58 = iVar10 + 1;
            uVar29 = (ulonglong)local_a58;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a58)
            goto LAB_14da750c3;
            uVar9 = ((uint *)((longlong)FVar25 + 4))[iVar10];
          }
          uStack_a54 = -uVar9 & uVar9;
          uVar29 = (ulonglong)uStack_a54 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_a04 = (int)lVar31;
          uStack_a44 = (uStack_a40 - 1) + local_a04;
          uVar29 = (ulonglong)uStack_a44;
          if ((int)local_90 < (int)uStack_a44) {
LAB_14da750c3:
            uVar29 = (ulonglong)local_90;
            uStack_a44 = local_90;
          }
        }
        local_a48 = 0xffffffff;
        local_9e8 = (longlong *)local_b8;
        local_9e0._padding_ = CONCAT44(uStack_a54,local_a58);
        local_9e0.CurrentBitIndex = uStack_a44;
        local_9e0.UnvisitedBitMask = 0xffffffff;
        local_9e0._28_4_ = uStack_a3c;
        local_9e0.BaseBitIndex = uStack_a40;
        local_9e0.Array = pTStack_a50;
        if ((int)uVar29 < (int)local_90) {
          do {
            lVar31 = *local_9e8;
            lVar15 = (longlong)(int)uVar29;
            uVar9 = local_70 - 1 & *(uint *)(lVar31 + lVar15 * 0xc);
            *(uint *)(lVar31 + 8 + lVar15 * 0xc) = uVar9;
            FVar24.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar24.Data = local_78.Data;
            }
            uVar30 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar9;
            *(undefined4 *)(lVar31 + 4 + lVar15 * 0xc) = *(undefined4 *)(FVar24.Data + uVar30 * 4);
            *(int *)(FVar24.Data + uVar30 * 4) = (int)uVar29;
            local_9e0.UnvisitedBitMask = local_9e0.UnvisitedBitMask & ~local_9e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9e0);
            uVar29 = (ulonglong)(uint)local_9e0.CurrentBitIndex;
          } while (local_9e0.CurrentBitIndex < (local_9e0.Array)->NumBits);
        }
      }
    }
  }
  pTVar3 = (param_1->Parents).ConstAttributeArray;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar9 = FManagedArrayCollection::NumElements
                      ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
  }
  else {
    uVar9 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
  }
  if (uVar9 <= (uint)(local_108._8_4_ - local_d4)) goto LAB_14da75460;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_108,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar29 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_a00 = (undefined4)lVar31;
    uVar9 = 1 << ((byte)lVar31 & 0x1f);
  }
  if ((local_c0 != 0) && ((int)uVar9 <= (int)local_c0)) goto LAB_14da75460;
  local_c0 = uVar9;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
  }
  if (uVar9 != 0) {
    uVar28 = uVar9;
    if (uVar9 < 2) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        uVar28 = 0;
        goto LAB_14da75270;
      }
    }
    else {
LAB_14da75270:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar28,4);
    }
    if (0 < (int)uVar9) {
      uVar30 = (ulonglong)uVar9;
      uVar29 = uVar26;
      do {
        FVar24.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_c8.Data;
        }
        uVar14 = uVar29 & (longlong)(int)uVar9 - 1U;
        uVar29 = uVar29 + 1;
        *(undefined4 *)(FVar24.Data + uVar14 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_c0 != 0) {
    pTStack_a30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
    local_a38 = 0;
    uStack_a34 = 1;
    uStack_a24 = 0;
    uStack_a20 = 0;
    uVar29 = uVar26;
    if (local_e0 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_e8;
      }
      uVar9 = *(uint *)FVar25;
      uVar30 = uVar26;
      while (uVar9 == 0) {
        uStack_a20 = (int)uVar30 + 0x20;
        uVar30 = (ulonglong)uStack_a20;
        iVar10 = (int)uVar29;
        local_a38 = iVar10 + 1;
        uVar29 = (ulonglong)local_a38;
        if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a38)
        goto LAB_14da7538f;
        uVar9 = ((uint *)((longlong)FVar25 + 4))[iVar10];
      }
      uStack_a34 = -uVar9 & uVar9;
      uVar29 = (ulonglong)uStack_a34 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_9fc = (int)lVar31;
      uStack_a24 = (uStack_a20 - 1) + local_9fc;
      uVar29 = (ulonglong)uStack_a24;
      if ((int)local_e0 < (int)uStack_a24) {
LAB_14da7538f:
        uVar29 = (ulonglong)local_e0;
        uStack_a24 = local_e0;
      }
    }
    local_a28 = 0xffffffff;
    local_9c0 = (longlong *)local_108;
    local_9b8._padding_ = CONCAT44(uStack_a34,local_a38);
    local_9b8.CurrentBitIndex = uStack_a24;
    local_9b8.UnvisitedBitMask = 0xffffffff;
    local_9b8._28_4_ = uStack_a1c;
    local_9b8.BaseBitIndex = uStack_a20;
    local_9b8.Array = pTStack_a30;
    if ((int)uVar29 < (int)local_e0) {
      do {
        lVar31 = *local_9c0;
        lVar15 = (longlong)(int)uVar29;
        uVar9 = local_c0 - 1 & *(uint *)(lVar31 + lVar15 * 0xc);
        *(uint *)(lVar31 + 8 + lVar15 * 0xc) = uVar9;
        FVar24.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_c8.Data;
        }
        uVar30 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar31 + 4 + lVar15 * 0xc) = *(undefined4 *)(FVar24.Data + uVar30 * 4);
        *(int *)(FVar24.Data + uVar30 * 4) = (int)uVar29;
        local_9b8.UnvisitedBitMask = local_9b8.UnvisitedBitMask & ~local_9b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9b8);
        uVar29 = (ulonglong)(uint)local_9b8.CurrentBitIndex;
      } while (local_9b8.CurrentBitIndex < (local_9b8.Array)->NumBits);
    }
  }
LAB_14da75460:
  do {
    pTVar3 = (param_1->Parents).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar10 = FManagedArrayCollection::NumElements
                         ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
    }
    else {
      iVar10 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    }
    iVar13 = (int)uVar26;
    if (iVar10 <= iVar13) {
      iVar10 = 0;
      do {
        uVar9 = 0;
        pTVar3 = (param_1->Parents).ConstAttributeArray;
        if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
          iVar13 = FManagedArrayCollection::NumElements
                             ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
        }
        else {
          iVar13 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
        }
        if (iVar13 <= iVar10) {
          local_c0 = 0;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_108);
          local_70 = 0;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_b8);
          return local_a10;
        }
        pTVar17 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar10);
        iVar13 = pTVar17->ArrayNum;
        if (iVar13 != 0) {
          uVar28 = 0;
          if ((int)(iVar13 - 1U) < iVar13) {
            uVar28 = ~(iVar13 - 1U) >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
            return pTVar21;
          }
          local_a5c = *(uint *)((pTVar17->AllocatorInstance).Data +
                               (longlong)pTVar17->ArrayNum * 4 + -4);
          if ((pTVar17->ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
            return pTVar21;
          }
          iVar13 = pTVar17->ArrayNum;
          uVar28 = *(uint *)(pTVar17->AllocatorInstance).Data;
          if (0 < iVar13) {
            lVar31 = 0;
LAB_14da759f0:
            uVar12 = 0;
            if ((int)uVar9 < iVar13) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
              return pTVar21;
            }
            pTVar4 = (param_2->BudNumber).ConstAttributeArray;
            uVar12 = *(uint *)((pTVar17->AllocatorInstance).Data + lVar31);
            local_a6c = uVar12;
            if (((pTVar4 == (TManagedArray<int> *)0x0) || ((int)uVar12 < 0)) ||
               (iVar13 = (**(code **)(*(longlong *)pTVar4 + 0x60))(), iVar13 <= (int)uVar12)) {
              uVar27 = 0xffffffff;
            }
            else {
              puVar19 = (uint *)TManagedArrayAccessor<int>::operator[](&param_2->BudNumber,uVar12);
              uVar27 = *puVar19;
            }
            pTVar5 = (param_2->NjordPixelIndex).ConstAttributeArray;
            if (((pTVar5 == (TManagedArray<float> *)0x0) || ((int)uVar12 < 0)) ||
               (iVar13 = (**(code **)(*(longlong *)pTVar5 + 0x60))(), iVar13 <= (int)uVar12)) {
              pfVar22 = &IndexNone;
            }
            else {
              pfVar22 = TManagedArrayAccessor<float>::operator[](&param_2->NjordPixelIndex,uVar12);
            }
            fVar2 = *pfVar22;
            bVar8 = TManagedArrayAccessor<int>::IsValidIndex(&local_a18->BranchParentNumbers,iVar10)
            ;
            if (((bVar8) &&
                (piVar16 = TManagedArrayAccessor<int>::operator[]
                                     (&local_a18->BranchParentNumbers,iVar10), *piVar16 == 0)) &&
               (uVar12 == uVar28)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            auVar32 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),1);
            if ((fVar2 == auVar32._0_4_) && (local_b8._8_4_ != local_84)) {
              FVar24.Data = local_80;
              if (local_78.Data != (FScriptContainerElement *)0x0) {
                FVar24.Data = local_78.Data;
              }
              for (iVar13 = *(int *)(FVar24.Data + (ulonglong)(local_70 - 1 & uVar27) * 4);
                  iVar13 != -1; iVar13 = *(int *)(local_b8._0_8_ + (longlong)iVar13 * 0xc + 4)) {
                if (*(uint *)(local_b8._0_8_ + (longlong)iVar13 * 0xc) == uVar27)
                goto LAB_14da75c00;
              }
            }
            if (local_108._8_4_ != local_d4) {
              FVar24.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar24.Data = local_c8.Data;
              }
              for (iVar13 = *(int *)(FVar24.Data + (ulonglong)(local_c0 - 1 & uVar12) * 4);
                  iVar13 != -1; iVar13 = *(int *)(local_108._0_8_ + (longlong)iVar13 * 0xc + 4)) {
                if (*(uint *)(local_108._0_8_ + (longlong)iVar13 * 0xc) == uVar12)
                goto LAB_14da75c00;
              }
            }
            bVar7 = false;
            goto LAB_14da75bab;
          }
        }
LAB_14da75bf3:
        iVar10 = iVar10 + 1;
        param_1 = local_a68;
      } while( true );
    }
    pTVar4 = (param_1->BranchSourceBudNumber).ConstAttributeArray;
    if (((pTVar4 == (TManagedArray<int> *)0x0) || (iVar13 < 0)) ||
       (iVar10 = (**(code **)(*(longlong *)pTVar4 + 0x60))(), iVar10 <= iVar13)) {
      local_a60 = -1;
    }
    else {
      piVar16 = TManagedArrayAccessor<int>::operator[](&param_1->BranchSourceBudNumber,iVar13);
      local_a60 = *piVar16;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_b8,&local_9f8,
               (bool *)&local_a60);
    iVar10 = PV::Facades::FBranchFacade::GetParentBranchIndex(param_1,iVar13);
    pTVar17 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar13);
    if ((iVar10 != -1) && (0 < pTVar17->ArrayNum)) {
      pTVar18 = PV::Facades::FPointFacade::GetPosition
                          (param_2,*(int *)(pTVar17->AllocatorInstance).Data);
      uVar1 = *(undefined8 *)&pTVar18->field0_0x0;
      fVar2 = (pTVar18->field0_0x0)._s_0.Z;
      pTVar17 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar10);
      local_988 = uVar1;
      local_980 = fVar2;
      PV::Facades::FPointFacade::FPointFacade(&local_978,param_2);
      local_548._0_8_ = local_988;
      local_548._s_0.Z = local_980;
      PV::Facades::FPointFacade::FPointFacade(&local_538,&local_978);
      puVar19 = (uint *)AlgoImpl::
                        MinElementBy<TArray<int,TSizedDefaultAllocator<32>_>_const_,FIdentityFunctor,_FPVMeshBuilder::CollectHardPoints_::__l7::<lambda_1>_>
                                  (pTVar17,local_a70,(<lambda_1> *)&local_548._s_0);
      if ((puVar19 != (uint *)0x0) && (uVar9 = *puVar19, uVar9 != 0xffffffff)) {
        if (local_d4 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_108,(int *)(local_108 + 8),
                              (int *)(local_108 + 0xc));
          uVar28 = local_e0;
          if ((local_e0 == 0) ||
             ((int)(local_e0 + ((int)local_e0 >> 0x1f & 0x1fU)) >> 5 !=
              (int)(((int)(local_e0 - 1) >> 0x1f & 0x1fU) + (local_e0 - 1)) >> 5)) {
            if (local_dc < (int)(local_e0 + 1)) {
              uVar12 = local_dc + 0x1fU >> 5;
              uVar27 = local_e0 + 0x20 >> 5;
              if (uVar27 < 5) {
                local_dc = 4;
              }
              else {
                uVar26 = (ulonglong)uVar27;
                if (uVar12 < 5) {
                  uVar12 = 0;
                }
                if (uVar12 == 0) {
                  uVar29 = 4;
                  if (4 < uVar26) {
                    uVar29 = uVar26;
                  }
                }
                else {
                  uVar29 = ((ulonglong)uVar27 * 3 >> 3) + 0x10 + uVar26;
                }
                uVar20 = FMemory::QuantizeSize(uVar29 * 4,0);
                local_dc = (int)(uVar20 >> 2);
                if (local_dc < (int)uVar27) {
                  local_dc = 0x7fffffff;
                }
              }
              local_dc = local_dc << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),local_e0);
            }
            local_e0 = local_e0 + 1;
            uVar27 = (int)local_e0 >> 0x1f & 0x1f;
            uVar12 = local_e0 + uVar27;
            iVar11 = (uVar12 & 0x1f) - uVar27;
            if (iVar11 != 0) {
              FVar25 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
              if (local_e8 != (ForElementType<unsigned_int>)0x0) {
                FVar25 = local_e8;
              }
              puVar19 = (uint *)((longlong)FVar25 + (longlong)((int)uVar12 >> 5) * 4);
              *puVar19 = *puVar19 & 0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
            }
          }
          else {
            local_e0 = local_e0 + 1;
          }
          FVar25 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
          if (local_e8 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_e8;
          }
          bVar23 = (byte)uVar28 & 0x1f;
          if ((int)uVar28 < 0) {
            uVar28 = uVar28 + 0x1f;
            bVar23 = bVar23 - 0x20;
          }
          puVar19 = (uint *)((longlong)FVar25 + (longlong)((int)uVar28 >> 5) * 4);
          *puVar19 = *puVar19 & ~(1 << (bVar23 & 0x1f));
          iVar11 = local_d8;
        }
        else {
          local_d4 = local_d4 + -1;
          iVar11 = *(int *)(local_108._0_8_ + (longlong)local_d8 * 0xc + 4);
          iVar10 = local_d8;
          if (local_d4 != 0) {
            *(undefined4 *)(local_108._0_8_ + (longlong)iVar11 * 0xc) = 0xffffffff;
          }
        }
        local_d8 = iVar11;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_108,&local_998,iVar10);
        if (local_998.Pointer == (uint *)0x0) {
          puVar19 = (uint *)0x0;
        }
        else {
          *(uint *)local_998.Pointer = uVar9;
          *(uint *)((longlong)local_998.Pointer + 4) = 0xffffffff;
          puVar19 = local_998.Pointer;
        }
        uVar9 = *puVar19;
        if ((local_108._8_4_ - local_d4 != 1) && (local_108._8_4_ != local_d4)) {
          FVar24.Data = local_d0;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FVar24.Data = local_c8.Data;
          }
          for (iVar10 = *(int *)(FVar24.Data + (ulonglong)(local_c0 - 1 & uVar9) * 4); iVar10 != -1;
              iVar10 = *(int *)(local_108._0_8_ + (longlong)iVar10 * 0xc + 4)) {
            if (*(uint *)(local_108._0_8_ + (longlong)iVar10 * 0xc) == uVar9) {
              if (iVar10 != -1) {
                *(uint *)(local_108._0_8_ + (longlong)iVar10 * 0xc) = uVar9;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_108,local_998.Index,1);
                param_1 = local_a68;
                goto LAB_14da758ed;
              }
              break;
            }
          }
        }
        uVar28 = local_108._8_4_ - local_d4;
        if (uVar28 < 4) {
          uVar12 = 1;
        }
        else {
          uVar26 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_9f4 = (undefined4)lVar31;
          uVar12 = 1 << ((byte)lVar31 & 0x1f);
        }
        if ((0 < (int)uVar28) && ((int)local_c0 < (int)uVar12)) {
          local_c0 = uVar12;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108);
          uVar26 = (ulonglong)(iVar13 + 1);
          param_1 = local_a68;
          goto LAB_14da75460;
        }
        uVar9 = local_c0 - 1 & uVar9;
        puVar19[2] = uVar9;
        FVar24.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_c8.Data;
        }
        uVar26 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar9;
        puVar19[1] = *(uint *)(FVar24.Data + uVar26 * 4);
        *(int *)(FVar24.Data + uVar26 * 4) = local_998.Index;
        param_1 = local_a68;
      }
    }
LAB_14da758ed:
    uVar26 = (ulonglong)(iVar13 + 1);
  } while( true );
LAB_14da75c00:
  bVar7 = true;
LAB_14da75bab:
  if ((((uVar12 == uVar28) || (uVar12 == local_a5c)) || (bVar8)) || (bVar7)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (local_a10,local_9f0,(bool *)&local_a6c);
  }
  iVar13 = pTVar17->ArrayNum;
  uVar9 = uVar9 + 1;
  lVar31 = lVar31 + 4;
  if (iVar13 <= (int)uVar9) goto LAB_14da75bf3;
  goto LAB_14da759f0;
}

// ComputeMeshDivisions @ 14da75ca0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
FPVMeshBuilder::ComputeMeshDivisions
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FBranchFacade *param_1,
          FPVMeshBuilderParams *param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          int param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  
  uVar15 = (ulonglong)(uint)param_4;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if ((param_4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_4,&__return_storage_ptr__->AllocatorInstance,0,piVar1), 0 < param_4)) {
    do {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 < (FScriptContainerElement *)0x152c6e6e5) &&
         ((&MinimumDivisions < pFVar2 + (longlong)*piVar1 * 4 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) = 3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  iVar8 = 0;
  do {
    pTVar3 = (param_1->Parents).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    }
    if (iVar9 <= iVar8) {
      return __return_storage_ptr__;
    }
    pTVar12 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar8);
    uVar14 = 0;
    iVar9 = param_2->MaxMeshDivisions;
    fVar18 = (float)param_2->MinMeshDivisions;
    iVar13 = pTVar12->ArrayNum;
    if (0 < iVar13) {
      lVar16 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar14 < iVar13) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        uVar10 = *(uint *)((pTVar12->AllocatorInstance).Data + lVar16);
        uVar11 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        fVar17 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
        if (fVar5 <= fVar17) {
          fVar17 = fVar5;
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        uVar11 = 0;
        if ((int)uVar10 < __return_storage_ptr__->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 4;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) =
             (int)ROUND((fVar17 + fVar17) * ((float)iVar9 - fVar18) + fVar18 + fVar18 + fVar6) >> 1;
        iVar13 = pTVar12->ArrayNum;
      } while ((int)uVar14 < iVar13);
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

// ComputePointGradients @ 14da762a0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __cdecl
FPVMeshBuilder::ComputePointGradients
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FPointFacade *param_1,FPVMeshBuilderParams *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,float param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ForElementType<FSetElementId> FVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  int iVar26;
  undefined1 *this;
  uint *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_158;
  float local_154;
  int local_150;
  uint uStack_14c;
  undefined1 *puStack_148;
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  FSparseArrayAllocationInfo local_100 [12];
  
  uVar22 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pTVar1 = (param_1->Positions).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    uVar7 = FManagedArrayCollection::NumElements
                      ((param_1->Positions).ConstCollection,(param_1->Positions).Group);
  }
  else {
    uVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
  }
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (param_5->ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
  }
  pTVar1 = (param_1->Positions).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    uVar7 = FManagedArrayCollection::NumElements
                      ((param_1->Positions).ConstCollection,(param_1->Positions).Group);
  }
  else {
    uVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
  }
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (param_6->ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&param_6->AllocatorInstance,param_6->ArrayNum,&param_6->ArrayMax);
  }
  do {
    fVar39 = __real_3f800000;
    pTVar1 = (param_1->Positions).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((param_1->Positions).ConstCollection,(param_1->Positions).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    uVar7 = (uint)uVar22;
    if (iVar8 <= (int)uVar7) {
      return __return_storage_ptr__;
    }
    if ((((param_1->HullGradient).ConstAttributeArray == (TManagedArray<float> *)0x0) ||
        ((int)uVar7 < 0)) ||
       (iVar8 = (**(code **)(*(longlong *)(param_1->HullGradient).ConstAttributeArray + 0x60))(),
       iVar8 <= (int)uVar7)) {
      pfVar11 = &::DefaultValue;
    }
    else {
      pfVar11 = TManagedArrayAccessor<float>::operator[](&param_1->HullGradient,uVar7);
    }
    fVar37 = *pfVar11;
    if ((((param_1->MainTrunkGradient).ConstAttributeArray == (TManagedArray<float> *)0x0) ||
        ((int)uVar7 < 0)) ||
       (iVar8 = (**(code **)(*(longlong *)(param_1->MainTrunkGradient).ConstAttributeArray + 0x60))
                          (), iVar8 <= (int)uVar7)) {
      pfVar11 = &::DefaultValue;
    }
    else {
      pfVar11 = TManagedArrayAccessor<float>::operator[](&param_1->MainTrunkGradient,uVar7);
    }
    fVar38 = *pfVar11;
    if ((((param_1->GroundGradient).ConstAttributeArray == (TManagedArray<float> *)0x0) ||
        ((int)uVar7 < 0)) ||
       (iVar8 = (**(code **)(*(longlong *)(param_1->GroundGradient).ConstAttributeArray + 0x60))(),
       iVar8 <= (int)uVar7)) {
      pfVar11 = &::DefaultValue;
    }
    else {
      pfVar11 = TManagedArrayAccessor<float>::operator[](&param_1->GroundGradient,uVar7);
    }
    fVar34 = *pfVar11;
    if ((((param_1->PointScaleGradient).ConstAttributeArray == (TManagedArray<float> *)0x0) ||
        ((int)uVar7 < 0)) ||
       (iVar8 = (**(code **)(*(longlong *)(param_1->PointScaleGradient).ConstAttributeArray + 0x60))
                          (), iVar8 <= (int)uVar7)) {
      pfVar11 = &DefaultPScale;
    }
    else {
      pfVar11 = TManagedArrayAccessor<float>::operator[](&param_1->PointScaleGradient,uVar7);
    }
    fVar35 = *pfVar11;
    fVar31 = param_2->HullRetention;
    fVar37 = fVar39 - fVar37;
    fVar28 = FRichCurve::Eval(&(param_2->HullRetentionGradient).EditorCurveData,fVar37,0.0);
    fVar38 = fVar39 - fVar38;
    fVar32 = param_2->MainTrunkRetention;
    fVar29 = FRichCurve::Eval(&(param_2->MainTrunkRetentionGradient).EditorCurveData,fVar38,0.0);
    fVar39 = fVar39 - fVar34;
    fVar34 = param_2->GroundRetention;
    fVar30 = FRichCurve::Eval(&(param_2->GroundRetentionGradient).EditorCurveData,fVar39,0.0);
    fVar36 = __real_3f800000 - fVar35;
    fVar30 = (fVar30 * fVar34 + fVar28 * fVar31 + fVar29 * fVar32 + fVar35) * param_4 *
             __real_3c23d70a;
    fVar31 = FRichCurve::Eval(&(param_2->ScaleRetentionGradient).EditorCurveData,fVar36,0.0);
    fVar32 = FRichCurve::Eval(&(param_2->HullRetentionGradient).EditorCurveData,fVar37,0.0);
    fVar28 = FRichCurve::Eval(&(param_2->MainTrunkRetentionGradient).EditorCurveData,fVar38,0.0);
    fVar29 = FRichCurve::Eval(&(param_2->GroundRetentionGradient).EditorCurveData,fVar39,0.0);
    fVar35 = __real_3f800000 - param_2->GroundRetention;
    fVar34 = __real_3f800000 - param_2->MainTrunkRetention;
    if (__real_3f800000 <= fVar35) {
      fVar35 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar34) {
      fVar34 = __real_3f800000;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    fVar33 = __real_3f800000 - param_2->HullRetention;
    if (__real_3f800000 <= fVar33) {
      fVar33 = __real_3f800000;
    }
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    local_154 = (fVar35 * (__real_3f800000 - fVar29) + fVar29) *
                (fVar33 * (__real_3f800000 - fVar32) + fVar32) *
                (fVar34 * (__real_3f800000 - fVar28) + fVar28) * fVar31;
    pFVar2 = (param_5->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_154) &&
        ((FScriptContainerElement *)&local_154 < pFVar2 + (longlong)param_5->ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar5)();
      return pTVar12;
    }
    iVar8 = param_5->ArrayNum;
    if (iVar8 == param_5->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar8 + 1;
    *(float *)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_154;
    fVar35 = FRichCurve::Eval(&(param_2->ScaleRetentionGradient).EditorCurveData,fVar36,0.0);
    fVar31 = FRichCurve::Eval(&(param_2->HullRetentionGradient).EditorCurveData,fVar37,0.0);
    fVar32 = FRichCurve::Eval(&(param_2->MainTrunkRetentionGradient).EditorCurveData,fVar38,0.0);
    fVar28 = FRichCurve::Eval(&(param_2->GroundRetentionGradient).EditorCurveData,fVar39,0.0);
    fVar39 = param_2->ScaleRetention;
    fVar37 = param_2->HullRetention;
    fVar38 = param_2->MainTrunkRetention;
    fVar34 = param_2->GroundRetention;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar17 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = FVar3;
      }
      iVar8 = *(int *)((longlong)FVar17 + (param_3->HashSize - 1 & uVar22) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar8 * 0xc) == uVar7)
          goto LAB_14da76d2a;
          iVar8 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    if ((0.0 < param_2->PointRemoval) && (fVar30 < param_2->PointRemoval)) {
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar8 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this = &(__return_storage_ptr__->Elements).field_0x10;
        iVar26 = (int)((iVar8 >> 0x1f & 0x1fU) + iVar8) >> 5;
        if ((iVar8 == 0) || (iVar26 != (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar10 < iVar8 + 1) {
            uVar23 = iVar10 + 0x1fU >> 5;
            uVar18 = iVar8 + 0x20U >> 5;
            if (uVar18 < 5) {
              iVar10 = 4;
            }
            else {
              uVar19 = (ulonglong)uVar18;
              if (uVar23 < 5) {
                uVar23 = 0;
              }
              if (uVar23 == 0) {
                uVar24 = 4;
                if (4 < uVar19) {
                  uVar24 = uVar19;
                }
              }
              else {
                uVar24 = ((ulonglong)uVar18 * 3 >> 3) + 0x10 + uVar19;
              }
              uVar13 = FMemory::QuantizeSize(uVar24 * 4,0);
              iVar10 = (int)(uVar13 >> 2);
              if (iVar10 < (int)uVar18) {
                iVar10 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar10 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar4 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar4 = *(int *)puVar4 + 1;
          iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar18 = iVar10 >> 0x1f & 0x1f;
          uVar23 = iVar10 + uVar18;
          iVar10 = (uVar23 & 0x1f) - uVar18;
          if (iVar10 != 0) {
            puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar16 = this;
            if (puVar4 != (undefined1 *)0x0) {
              puVar16 = puVar4;
            }
            *(uint *)(puVar16 + (longlong)((int)uVar23 >> 5) * 4) =
                 *(uint *)(puVar16 + (longlong)((int)uVar23 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar8 + 1;
        }
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this = puVar4;
        }
        *(uint *)(this + (longlong)iVar26 * 4) =
             *(uint *)(this + (longlong)iVar26 * 4) & ~(1 << ((byte)iVar8 & 0x1f));
      }
      else {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar8 = iVar8 + -1;
        lVar20 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar26 = *(int *)(lVar20 + 4 + (longlong)iVar9 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar26;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(lVar20 + (longlong)iVar26 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,local_100,iVar9);
      if (local_100[0].Pointer == (uint *)0x0) {
        puVar27 = (uint *)0x0;
      }
      else {
        *(uint *)local_100[0].Pointer = uVar7;
        *(uint *)((longlong)local_100[0].Pointer + 4) = 0xffffffff;
        puVar27 = local_100[0].Pointer;
      }
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar23 = *puVar27;
      if ((iVar8 - iVar9 != 1) && (iVar8 != iVar9)) {
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar17 +
                        (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar23) * 4);
        if (iVar8 != -1) {
          lVar20 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            if (*(uint *)(lVar20 + (longlong)iVar8 * 0xc) == uVar23) {
              if (iVar8 != -1) {
                *(uint *)(lVar20 + (longlong)iVar8 * 0xc) = uVar23;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_100[0].Index,1);
                goto LAB_14da76d2a;
              }
              break;
            }
            iVar8 = *(int *)(lVar20 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      uVar21 = 1;
      uVar18 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar18) {
        uVar19 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar21 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((int)uVar18 < 1) || ((int)uVar21 <= __return_storage_ptr__->HashSize)) {
        uVar23 = __return_storage_ptr__->HashSize - 1U & uVar23;
        puVar27[2] = uVar23;
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar3;
        }
        uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
        puVar27[1] = *(uint *)((longlong)FVar17 + uVar19 * 4);
        *(int *)((longlong)FVar17 + uVar19 * 4) = local_100[0].Index;
      }
      else {
        __return_storage_ptr__->HashSize = uVar21;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar21 != 0) {
          uVar23 = uVar21;
          if (uVar21 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar23 = 0;
              goto LAB_14da76b3b;
            }
          }
          else {
LAB_14da76b3b:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar23,4
                      );
          }
          if (0 < (int)uVar21) {
            uVar24 = (ulonglong)uVar21;
            uVar19 = 0;
            do {
              FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar17 = FVar3;
              }
              uVar14 = uVar19 & (longlong)(int)uVar21 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)((longlong)FVar17 + uVar14 * 4) = 0xffffffff;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_148 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_14c = 1;
          local_150 = 0;
          iStack_13c = 0;
          iStack_138 = 0;
          if (iVar8 != 0) {
            puVar27 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar25 = (uint *)puStack_148;
            if (puVar27 != (uint *)0x0) {
              puVar25 = puVar27;
            }
            uVar23 = *puVar25;
            iStack_138 = 0;
            local_150 = 0;
            while (uVar23 == 0) {
              iStack_138 = iStack_138 + 0x20;
              lVar20 = (longlong)local_150;
              local_150 = local_150 + 1;
              if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_150)
              goto LAB_14da76c53;
              uVar23 = puVar25[lVar20 + 1];
            }
            uStack_14c = -uVar23 & uVar23;
            uVar19 = (ulonglong)uStack_14c * 2 + 1;
            lVar20 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_130 = (int)lVar20;
            iStack_13c = local_130 + -1 + iStack_138;
            if (iVar8 < iStack_13c) {
LAB_14da76c53:
              iStack_13c = iVar8;
            }
          }
          local_140 = 0xffffffff;
          local_120._padding_ = CONCAT44(uStack_14c,local_150);
          local_120.CurrentBitIndex = iStack_13c;
          local_120.UnvisitedBitMask = 0xffffffff;
          local_120._28_4_ = uStack_134;
          local_120.BaseBitIndex = iStack_138;
          iVar8 = iStack_13c;
          local_128 = __return_storage_ptr__;
          local_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_148;
          if (iStack_13c < *(int *)&(__return_storage_ptr__->Elements).field_0x28) {
            do {
              lVar20 = *(longlong *)&local_128->Elements;
              lVar15 = (longlong)iVar8;
              uVar23 = __return_storage_ptr__->HashSize - 1U & *(uint *)(lVar20 + lVar15 * 0xc);
              *(uint *)(lVar20 + 8 + lVar15 * 0xc) = uVar23;
              FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar17 = FVar3;
              }
              uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar23;
              *(undefined4 *)(lVar20 + 4 + lVar15 * 0xc) =
                   *(undefined4 *)((longlong)FVar17 + uVar19 * 4);
              *(int *)((longlong)FVar17 + uVar19 * 4) = iVar8;
              local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
              iVar8 = local_120.CurrentBitIndex;
            } while (local_120.CurrentBitIndex < (local_120.Array)->NumBits);
          }
        }
      }
    }
LAB_14da76d2a:
    local_158 = 1.0;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar17 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = FVar3;
      }
      iVar8 = *(int *)((longlong)FVar17 + (param_3->HashSize - 1 & uVar22) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar8 * 0xc) == uVar7)
          goto LAB_14da76d82;
          iVar8 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    local_158 = (fVar35 * fVar39 + fVar31 * fVar37 + fVar32 * fVar38 + fVar28 * fVar34) *
                param_2->SegmentRetentionImpact;
LAB_14da76d82:
    pFVar2 = (param_6->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 < pFVar2 + (longlong)param_6->ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar5)();
      return pTVar12;
    }
    iVar8 = param_6->ArrayNum;
    if (iVar8 == param_6->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar8 + 1;
    uVar22 = (ulonglong)(uVar7 + 1);
    *(float *)((param_6->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_158;
  } while( true );
}

// ExtractDisplacementData @ 14da854c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPVMeshBuilder::ExtractDisplacementData
          (TObjectPtr<UTexture2D> *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  ::FString::FString(&local_18,"ExtractDisplacementData only works in editor builds (WITH_EDITOR).")
  ;
  if (param_3 != &local_18) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_18.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (2 < (byte)LogProceduralVegetation._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
  }
  return false;
}

// GenerateBranchMeshData @ 14da8f0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FPVMeshBuilder::GenerateBranchMeshData
          (bool param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          FDisplacementData *param_4,FPVMeshBuilderParams *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,FManagedArrayCollection *param_7,
          FLocalDynamicMeshData *param_8)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TVector2<float>_u_0 TVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar21;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar22;
  float *pfVar23;
  TVector2<float> *pTVar24;
  TVector<float> *pTVar25;
  TManagedArray<float> *pTVar26;
  longlong lVar27;
  uint uVar28;
  float *pfVar29;
  longlong lVar30;
  longlong lVar31;
  float *pfVar32;
  int iVar33;
  int *piVar34;
  TManagedArray<UE::Math::TVector<float>_> *pTVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  TArray<int,TSizedDefaultAllocator<32>_> local_750;
  undefined1 local_740 [8];
  TVector<float>_u_0 local_738;
  uint local_728;
  int local_724;
  float local_720;
  float local_71c;
  float local_718;
  int local_714;
  float local_710;
  float local_70c;
  uint local_708;
  TManagedArray<UE::Math::TVector<float>_> *local_700;
  float local_6f8;
  float fStack_6f4;
  undefined4 local_6f0;
  float local_6e8;
  float local_6e4;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  float local_6d4;
  float local_6d0;
  float local_6cc;
  float local_6c8;
  TManagedArray<float> *local_6c0;
  undefined8 local_6b8;
  longlong local_6b0;
  undefined8 local_6a8;
  float local_6a0;
  TArray<float,TSizedDefaultAllocator<32>_> local_698;
  TArray<int,TSizedDefaultAllocator<32>_> local_688;
  longlong local_678;
  int local_670;
  float local_66c;
  float local_668;
  float local_664;
  float local_660;
  float local_65c;
  float fStack_658;
  float local_654;
  float fStack_650;
  undefined4 local_64c;
  float fStack_648;
  TVector<float>_u_0 local_644;
  TVector<float>_u_0 local_638;
  float local_628;
  float fStack_624;
  float local_620;
  float local_61c;
  float fStack_618;
  float local_614;
  undefined8 local_610;
  undefined8 local_600;
  undefined8 local_5f0;
  TQuat<float> local_5d8;
  TQuat<float> local_5c8;
  undefined1 local_5b8 [16];
  FRichCurve *local_5a8;
  FName local_5a0;
  FName local_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 local_570;
  TVector<float> local_568;
  FPlantProfileFacade local_558;
  FPointFacade local_508;
  
  if (param_3->ArrayNum < 2) {
    return;
  }
  PV::Facades::FPointFacade::FPointFacade(&local_508,param_7);
  local_5a0 = PV::AttributeNames::BudDirection;
  local_598 = PV::GroupNames::PointGroup;
  pTVar21 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_7->Map,(TTuple<FName,FName> *)&local_5a0);
  pfVar32 = (float *)0x0;
  pfVar23 = (float *)&pTVar21->field_0x10;
  if (pTVar21 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pfVar23 = pfVar32;
  }
  if ((pfVar23 == (float *)0x0) || (*(char *)pfVar23 != '(')) {
    lVar30 = 0;
    local_678 = 0;
  }
  else {
    lVar30 = *(longlong *)(pfVar23 + 8);
    local_678 = lVar30;
    if ((lVar30 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x306,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  PV::Facades::FPlantProfileFacade::FPlantProfileFacade(&local_558,param_7);
  if (local_558.ProfilePointsAttribute.ConstAttributeArray ==
      (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    iVar15 = FManagedArrayCollection::NumElements
                       (local_558.ProfilePointsAttribute.ConstCollection,
                        local_558.ProfilePointsAttribute.Group);
  }
  else {
    iVar15 = (**(code **)(*(longlong *)local_558.ProfilePointsAttribute.ConstAttributeArray + 0x60))
                       ();
  }
  if (((iVar15 < 1) || ((param_5->PlantProfileOptions).ArrayNum < 1)) ||
     ((param_5->bApplyProfileToBranches == false && (!param_1)))) {
    local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_698.ArrayNum = 0;
    local_698.ArrayMax = 0;
  }
  else {
    bVar12 = true;
    local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_698.ArrayNum = 0;
    local_698.ArrayMax = 0;
    iVar15 = TArray<FString,TSizedDefaultAllocator<32>_>::Find
                       (&param_5->PlantProfileOptions,&param_5->SelectedPlantProfile);
    if (-1 < iVar15 + -1) {
      pTVar22 = PV::Facades::FPlantProfileFacade::GetProfilePoints(&local_558,iVar15 + -1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(&local_698,pTVar22);
      goto LAB_14da8f27d;
    }
  }
  bVar12 = false;
LAB_14da8f27d:
  local_700 = local_508.Positions.ConstAttributeArray;
  if ((local_508.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((lVar30 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_6c0 = local_508.PointScale.ConstAttributeArray;
  if ((local_508.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pfVar29 = *(float **)&local_6c0->field_0x10;
  iVar15 = *(int *)&local_6c0->field_0x18;
  pfVar23 = pfVar29 + iVar15;
  pTVar26 = local_6c0;
  while( true ) {
    if (*(int *)&pTVar26->field_0x18 != iVar15) {
      local_740[0] = 0;
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_740);
      pTVar26 = local_6c0;
    }
    if (pfVar29 == pfVar23) break;
    if ((pfVar32 == (float *)0x0) || (*pfVar32 <= *pfVar29 && *pfVar29 != *pfVar32)) {
      pfVar32 = pfVar29;
    }
    pfVar29 = pfVar29 + 1;
  }
  fVar40 = *pfVar32;
  fVar46 = __real_3e22f983 / fVar40;
  local_670 = 0;
  local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_750.ArrayNum = 0;
  local_750.ArrayMax = 0;
  local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.ArrayNum = 0;
  local_688.ArrayMax = 0;
  if (((((param_4->Values).ArrayNum < 1) || (param_4->TextureWidth < 1)) ||
      (param_4->TextureHeight < 1)) ||
     (bVar13 = true, param_5->DisplacementGenerationUpperLimit < param_2)) {
    bVar13 = false;
  }
  local_6a0 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  local_710 = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Z;
  local_6a8 = UE::Math::TVector<float>::ForwardVector.field0_0x0._0_8_;
  local_5f0 = UE::Math::TVector<float>::UpVector.field0_0x0._0_8_;
  local_6cc = fVar40;
  local_66c = fVar46;
  if ((param_3->ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar35 = local_700;
  uVar18 = *(uint *)(param_3->AllocatorInstance).Data;
  uVar28 = 0;
  if ((int)uVar18 < *(int *)&local_700->field_0x18) {
    uVar28 = ~uVar18 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar10 = __real_3f800000;
  lVar30 = *(longlong *)&pTVar35->field_0x10;
  iVar15 = param_3->ArrayNum;
  local_708 = 0;
  local_600 = *(undefined8 *)(lVar30 + (longlong)(int)uVar18 * 0xc);
  fVar36 = *(float *)(lVar30 + 8 + (longlong)(int)uVar18 * 0xc);
  if (0 < iVar15) {
    local_5a8 = &(param_5->PlantProfileFallOff).EditorCurveData;
    local_5b8 = ZEXT416((uint)__real_3f800000);
    local_6e0 = local_6a0;
    local_6e4 = local_6a8._4_4_;
    local_6e8 = (float)local_6a8;
    local_6b0 = 0;
    fVar41 = 0.0;
    fVar48 = __real_3f800000;
    do {
      lVar30 = local_6b0;
      uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar44 = __real_322bcc77;
      uVar28 = 0;
      if ((int)local_708 < iVar15) {
        uVar28 = ~local_708 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      iVar15 = *(int *)(pFVar2 + lVar30 * 4);
      local_718 = (float)iVar15;
      if (((local_508.TextureCoordV.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
          (iVar15 < 0)) ||
         (iVar16 = (**(code **)(*(longlong *)local_508.TextureCoordV.ConstAttributeArray + 0x60))(),
         iVar16 <= iVar15)) {
        pfVar23 = &IndexNone;
      }
      else {
        pfVar23 = TManagedArrayAccessor<float>::operator[](&local_508.TextureCoordV,iVar15);
      }
      fVar37 = *pfVar23;
      iVar15 = *(int *)(pFVar2 + lVar30 * 4);
      if (((local_508.TextureCoordUOffset.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
          (iVar15 < 0)) ||
         (iVar16 = (**(code **)(*(longlong *)local_508.TextureCoordUOffset.ConstAttributeArray +
                               0x60))(), iVar16 <= iVar15)) {
        pfVar23 = &IndexNone;
      }
      else {
        pfVar23 = TManagedArrayAccessor<float>::operator[](&local_508.TextureCoordUOffset,iVar15);
      }
      local_6d4 = *pfVar23;
      iVar15 = *(int *)(pFVar2 + lVar30 * 4);
      if (((local_508.URange.ConstAttributeArray == (TManagedArray<UE::Math::TVector2<float>_> *)0x0
           ) || (iVar15 < 0)) ||
         (iVar16 = (**(code **)(*(longlong *)local_508.URange.ConstAttributeArray + 0x60))(),
         iVar16 <= iVar15)) {
        pTVar24 = &Range;
      }
      else {
        pTVar24 = TManagedArrayAccessor<UE::Math::TVector2<float>_>::operator[]
                            (&local_508.URange,iVar15);
      }
      lVar27 = local_678;
      TVar3._s_0 = *(TVector2<float>_u_0_s_0 *)pTVar24;
      local_6b8._0_4_ = TVar3._0_4_;
      local_6b8._4_4_ = TVar3._4_4_;
      fVar39 = (float)local_6b8;
      if (local_6b8._4_4_ <= (float)local_6b8) {
        fVar39 = local_6b8._4_4_;
      }
      local_6d0 = local_6b8._4_4_;
      if ((float)local_6b8 <= local_6b8._4_4_) {
        local_6b8._0_4_ = local_6b8._4_4_;
      }
      local_71c = fVar10;
      if (fVar44 < (float)((uint)((float)local_6b8 - fVar39) & uVar18)) {
        local_71c = fVar10 / ((float)local_6b8 - fVar39);
      }
      uVar18 = *(uint *)(pFVar2 + lVar30 * 4);
      local_71c = fVar37 / local_71c;
      uVar28 = 0;
      if ((int)uVar18 < *(int *)(local_678 + 0x18)) {
        uVar28 = ~uVar18 >> 0x1f;
      }
      local_6b8 = TVar3._s_0;
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = *(longlong *)(lVar27 + 0x10);
      if ((*(int *)(lVar30 + 8 + (longlong)(int)uVar18 * 0x10) < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar27 = local_6b0;
      pfVar23 = *(float **)(lVar30 + (longlong)(int)uVar18 * 0x10);
      fVar37 = *pfVar23;
      fVar39 = pfVar23[1];
      fVar42 = pfVar23[2];
      fVar38 = fVar48 / SQRT(fVar39 * fVar39 + fVar37 * fVar37 + fVar42 * fVar42);
      local_638._s_0.X = fVar38 * fVar37;
      local_638._s_0.Y = fVar38 * fVar39;
      local_638._s_0.Z = fVar38 * fVar42;
      uVar18 = *(uint *)(pFVar2 + local_6b0 * 4);
      lVar30 = (longlong)(int)uVar18;
      uVar28 = 0;
      if ((int)uVar18 < *(int *)&pTVar35->field_0x18) {
        uVar28 = ~uVar18 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = *(uint *)(pFVar2 + lVar27 * 4);
      lVar4 = *(longlong *)&pTVar35->field_0x10;
      uVar28 = 0;
      if ((int)uVar18 < *(int *)&local_6c0->field_0x18) {
        uVar28 = ~uVar18 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar28 = local_708;
      fVar37 = (float)local_600 - *(float *)(lVar4 + lVar30 * 0xc);
      fVar39 = local_600._4_4_ - *(float *)(lVar4 + 4 + lVar30 * 0xc);
      fVar36 = fVar36 - *(float *)(lVar4 + 8 + lVar30 * 0xc);
      local_70c = *(float *)(*(longlong *)&local_6c0->field_0x10 + (longlong)(int)uVar18 * 4);
      iVar15 = param_3->ArrayNum;
      local_6c8 = fVar41 + SQRT(fVar39 * fVar39 + fVar37 * fVar37 + fVar36 * fVar36) * fVar46 *
                           (fVar40 / local_70c);
      if (local_708 == iVar15 - 1U) {
        uVar18 = 0;
        if ((int)(local_708 - 1) < iVar15) {
          uVar18 = -local_708 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = *(uint *)((param_3->AllocatorInstance).Data + lVar27 * 4 + -4);
        lVar31 = (longlong)(int)uVar18;
        uVar17 = 0;
        if ((int)uVar18 < *(int *)&local_700->field_0x18) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&local_700->field_0x10;
        local_644._s_0.X = *(float *)(lVar4 + lVar30 * 0xc) - *(float *)(lVar5 + lVar31 * 0xc);
        local_644._s_0.Y =
             *(float *)(lVar4 + 4 + lVar30 * 0xc) - *(float *)(lVar5 + 4 + lVar31 * 0xc);
        local_644._s_0.Z =
             *(float *)(lVar4 + 8 + lVar30 * 0xc) - *(float *)(lVar5 + 8 + lVar31 * 0xc);
        pTVar25 = UE::Math::TVector<float>::GetSafeNormal
                            ((TVector<float> *)&local_644._s_0,&local_568,fVar44,
                             &UE::Math::TVector<float>::ZeroVector);
        local_738._0_8_ = *(undefined8 *)&pTVar25->field0_0x0;
        local_738._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
      }
      else {
        uVar18 = 0;
        if ((int)(local_708 + 1) < iVar15) {
          uVar18 = ~(local_708 + 1) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = *(uint *)((param_3->AllocatorInstance).Data + lVar27 * 4 + 4);
        lVar31 = (longlong)(int)uVar18;
        uVar17 = 0;
        if ((int)uVar18 < *(int *)&local_700->field_0x18) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&local_700->field_0x10;
        fVar46 = *(float *)(lVar5 + lVar31 * 0xc) - *(float *)(lVar4 + lVar30 * 0xc);
        fVar36 = *(float *)(lVar5 + 4 + lVar31 * 0xc) - *(float *)(lVar4 + 4 + lVar30 * 0xc);
        fVar41 = *(float *)(lVar5 + 8 + lVar31 * 0xc) - *(float *)(lVar4 + 8 + lVar30 * 0xc);
        fVar40 = fVar36 * fVar36 + fVar46 * fVar46 + fVar41 * fVar41;
        if (fVar40 == fVar10) {
          local_738._0_8_ = CONCAT44(fVar36,fVar46);
          local_738._s_0.Z = fVar41;
        }
        else {
          local_738._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_738._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          if (fVar44 <= fVar40) {
            fVar40 = fVar48 / SQRT(fVar40);
            local_738._0_8_ = CONCAT44(fVar40 * fVar36,fVar40 * fVar46);
            local_738._s_0.Z = fVar40 * fVar41;
          }
        }
      }
      UE::Math::TQuat<float>::FindBetweenNormals
                (&local_5d8,(TVector<float> *)&local_638._s_0,(TVector<float> *)&local_738._s_0);
      lVar31 = local_678;
      uVar18 = *(uint *)(pFVar2 + lVar27 * 4);
      uVar17 = 0;
      if ((int)uVar18 < *(int *)(local_678 + 0x18)) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar27 = *(longlong *)(lVar31 + 0x10);
      if ((*(int *)(lVar27 + 8 + (longlong)(int)uVar18 * 0x10) < 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar27 = *(longlong *)(lVar27 + (longlong)(int)uVar18 * 0x10);
      fVar40 = *(float *)(lVar27 + 0x3c);
      fVar46 = *(float *)(lVar27 + 0x40);
      fVar36 = *(float *)(lVar27 + 0x44);
      fVar48 = fVar48 / SQRT(fVar46 * fVar46 + fVar40 * fVar40 + fVar36 * fVar36);
      fVar36 = fVar48 * fVar36;
      fVar46 = fVar48 * fVar46;
      fVar48 = fVar48 * fVar40;
      fVar37 = local_5d8.Y * fVar36 - local_5d8.Z * fVar46;
      fVar41 = local_5d8.Z * fVar48 - local_5d8.X * fVar36;
      fVar37 = fVar37 + fVar37;
      fVar40 = local_5d8.X * fVar46 - local_5d8.Y * fVar48;
      fVar41 = fVar41 + fVar41;
      fVar40 = fVar40 + fVar40;
      fVar44 = (local_5d8.Z * fVar37 - local_5d8.X * fVar40) + local_5d8.W * fVar41 + fVar46;
      fVar46 = (local_5d8.X * fVar41 - local_5d8.Y * fVar37) + local_5d8.W * fVar40 + fVar36;
      fVar40 = (local_5d8.Y * fVar40 - local_5d8.Z * fVar41) + local_5d8.W * fVar37 + fVar48;
      fVar36 = local_738._s_0.Z * fVar44 - local_738._s_0.Y * fVar46;
      fVar46 = local_738._s_0.X * fVar46 - local_738._s_0.Z * fVar40;
      fVar40 = local_738._s_0.Y * fVar40 - local_738._s_0.X * fVar44;
      local_6d8 = local_738._s_0.Z * fVar46 - local_738._s_0.Y * fVar40;
      local_6dc = local_738._s_0.X * fVar40 - local_738._s_0.Z * fVar36;
      fVar40 = local_738._s_0.Y * fVar36 - local_738._s_0.X * fVar46;
      uVar43 = local_738._s_0.X;
      uVar47 = local_738._s_0.Y;
      if (0 < (int)uVar28) {
        fVar46 = fVar40;
        fVar36 = local_6d8;
        fVar41 = local_6dc;
        if (local_6e8 * local_6d8 + local_6e4 * local_6dc + local_6e0 * fVar40 < 0.0) {
          fVar46 = (float)((uint)fVar40 ^ __xmm_80000000800000008000000080000000);
          fVar41 = (float)((uint)local_6dc ^ __xmm_80000000800000008000000080000000);
          fVar36 = (float)((uint)local_6d8 ^ __xmm_80000000800000008000000080000000);
        }
        fVar44 = (local_738._s_0.X - (float)local_5f0) * __real_3f000000 + (float)local_5f0;
        fVar37 = (local_738._s_0.Y - local_5f0._4_4_) * __real_3f000000 + local_5f0._4_4_;
        local_620 = (local_738._s_0.Z - local_710) * __real_3f000000 + local_710;
        fVar48 = fVar37 * fVar37 + fVar44 * fVar44 + local_620 * local_620;
        if (fVar48 == fVar10) {
          _local_6f8 = CONCAT44(fVar37,fVar44);
          local_6f0 = local_620;
        }
        else if (__real_322bcc77 <= fVar48) {
          fVar48 = (float)local_5b8._0_4_ / SQRT(fVar48);
          local_6f0 = fVar48 * local_620;
          fStack_6f4 = fVar48 * fVar37;
          local_6f8 = fVar48 * fVar44;
        }
        else {
          _local_6f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_6f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        _local_628 = CONCAT44(fVar37,fVar44);
        local_720 = fVar40;
        UE::Math::TQuat<float>::FindBetweenNormals
                  (&local_5c8,(TVector<float> *)&local_738._s_0,(TVector<float> *)&local_6f8);
        local_738._s_0.Z = (float)local_6f0;
        fVar37 = local_5c8.Y * fVar46 - local_5c8.Z * fVar41;
        local_738._0_8_ = _local_6f8;
        fVar37 = fVar37 + fVar37;
        fVar44 = local_5c8.Z * fVar36 - local_5c8.X * fVar46;
        fVar48 = local_5c8.X * fVar41 - local_5c8.Y * fVar36;
        fVar44 = fVar44 + fVar44;
        fVar48 = fVar48 + fVar48;
        fVar40 = (local_5c8.X * fVar44 - local_5c8.Y * fVar37) + local_5c8.W * fVar48 + fVar46;
        local_6dc = (local_5c8.Z * fVar37 - local_5c8.X * fVar48) + local_5c8.W * fVar44 + fVar41;
        local_6d8 = (local_5c8.Y * fVar48 - local_5c8.Z * fVar44) + local_5c8.W * fVar37 + fVar36;
        uVar43 = (float)_local_6f8;
        uVar47 = (float)((ulonglong)_local_6f8 >> 0x20);
      }
      lVar27 = local_6b0;
      iVar15 = *(int *)(pFVar2 + local_6b0 * 4);
      local_5f0 = CONCAT44(uVar47,uVar43);
      local_720 = fVar40;
      local_710 = local_738._s_0.Z;
      local_6e8 = local_6d8;
      local_6e4 = local_6dc;
      local_6e0 = fVar40;
      if (((local_508.BranchGradients.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
          (iVar15 < 0)) ||
         (iVar16 = (**(code **)(*(longlong *)local_508.BranchGradients.ConstAttributeArray + 0x60))
                             (), iVar16 <= iVar15)) {
        pfVar23 = &DefaultBranchGradient;
      }
      else {
        pfVar23 = TManagedArrayAccessor<float>::operator[](&local_508.BranchGradients,iVar15);
      }
      fVar36 = FRichCurve::Eval(local_5a8,*pfVar23,0.0);
      fVar46 = local_71c;
      local_6a8 = CONCAT44(local_6a8._4_4_,fVar36);
      if (local_70c == 0.0) {
        piVar34 = &(param_8->Vertices).ArrayMax;
        uVar18 = (param_8->Vertices).ArrayNum;
        fStack_648 = local_71c;
        local_64c = 0;
        if (uVar18 == *piVar34) {
          uVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x424,(ForAnyElementType *)param_8,piVar34);
        }
        fVar41 = local_718;
        pFVar2 = (param_8->Vertices).AllocatorInstance.Data;
        (param_8->Vertices).ArrayNum = uVar18 + 1;
        lVar31 = (longlong)(int)uVar18;
        *(undefined8 *)(pFVar2 + lVar31 * 0x24) = *(undefined8 *)(lVar4 + lVar30 * 0xc);
        *(undefined4 *)(pFVar2 + lVar31 * 0x24 + 8) = *(undefined4 *)(lVar4 + 8 + lVar30 * 0xc);
        *(undefined8 *)(pFVar2 + lVar31 * 0x24 + 0xc) = local_738._0_8_;
        *(float *)(pFVar2 + lVar31 * 0x24 + 0x14) = local_738._s_0.Z;
        *(ulonglong *)(pFVar2 + lVar31 * 0x24 + 0x18) = CONCAT44(fStack_648,local_64c);
        *(float *)(pFVar2 + lVar31 * 0x24 + 0x20) = local_718;
        local_728 = uVar18;
        if (((local_750.AllocatorInstance.Data <= (FScriptContainerElement *)&local_728) &&
            ((FScriptContainerElement *)&local_728 <
             local_750.AllocatorInstance.Data + (longlong)local_750.ArrayMax * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = local_750.ArrayNum;
        if (local_750.ArrayNum == local_750.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_750.AllocatorInstance,&local_750.ArrayMax);
        }
        local_750.ArrayNum = iVar15 + 1;
        *(uint *)(local_750.AllocatorInstance.Data + (longlong)iVar15 * 4) = local_728;
      }
      else {
        uVar18 = *(uint *)(pFVar2 + lVar27 * 4);
        uVar28 = 0;
        if ((int)uVar18 < param_6->ArrayNum) {
          uVar28 = ~uVar18 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = 0;
        iVar15 = *(int *)((param_6->AllocatorInstance).Data + (longlong)(int)uVar18 * 4);
        lVar27 = local_6b0;
        fVar46 = local_71c;
        fVar41 = local_718;
        if (0 < iVar15) {
          local_664 = fVar10 / (float)iVar15;
          local_660 = __real_40490fdb / (float)iVar15;
          local_668 = local_6d0 - (float)local_6b8;
          fVar48 = (float)local_6b8;
          do {
            fVar41 = local_660;
            fVar46 = local_668;
            fVar37 = local_664 * (float)iVar16;
            fVar44 = (fVar10 - fVar37) + local_6d4;
            if (0.0 <= fVar44) {
              if ((fVar10 < fVar44) &&
                 (fVar44 = FGenericPlatformMath::Fmod(fVar44 - fVar10,fVar10), fVar44 == 0.0)) {
                fVar44 = fVar10;
              }
            }
            else {
              fVar44 = FGenericPlatformMath::Fmod
                                 ((float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000),
                                  fVar10);
              if (fVar44 == 0.0) {
                fVar44 = 0.0;
              }
              else {
                fVar44 = fVar10 - fVar44;
              }
            }
            fVar48 = fVar46 * fVar44 + fVar48;
            fVar46 = fVar10;
            if (bVar12) {
              fVar46 = GetProfileMultiplier(&local_698,fVar37);
              fVar46 = (fVar46 * param_5->PlantProfileScale - fVar10) * fVar36 + fVar10;
            }
            fVar41 = fVar41 * (float)iVar16;
            if (fVar41 < 0.0) {
              fVar36 = fVar41 * __real_3e22f983 - __real_3f000000;
            }
            else {
              fVar36 = fVar41 * __real_3e22f983 + __real_3f000000;
            }
            fVar41 = fVar41 - (float)(longlong)fVar36 * __real_40c90fdb;
            fVar36 = __real_40490fdb;
            if ((__real_3fc90fdb < fVar41) ||
               (fVar44 = fVar10, fVar36 = __real_c0490fdb, fVar41 < __real_bfc90fdb)) {
              fVar41 = fVar36 - fVar41;
              fVar44 = __real_bf800000;
            }
            fVar36 = fVar41 * fVar41;
            fVar41 = (((((__real_3638b88e - fVar36 * __real_32cd365b) * fVar36 - __real_39500bf1) *
                        fVar36 + ___real_3c088886) * fVar36 - __real_3e2aaaab) * fVar36 + fVar10) *
                     fVar41;
            fVar42 = local_738._s_0.Y * fVar41;
            fVar39 = local_738._s_0.Z * fVar41;
            fVar41 = local_738._s_0.X * fVar41;
            fVar44 = (((((__real_37cfb4c2 - fVar36 * ___real_348bdd11) * fVar36 - ___real_3ab609aa)
                        * fVar36 + ___real_3d2aaaa3) * fVar36 - __real_3f000000) * fVar36 + fVar10)
                     * fVar44;
            fVar36 = fVar42 * fVar40 - fVar39 * local_6dc;
            fVar38 = fVar39 * local_6d8 - fVar41 * fVar40;
            fVar36 = fVar36 + fVar36;
            fVar40 = fVar41 * local_6dc - fVar42 * local_6d8;
            fVar38 = fVar38 + fVar38;
            fVar40 = fVar40 + fVar40;
            fVar45 = (fVar40 * fVar42 - fVar38 * fVar39) + fVar36 * fVar44 + local_6d8;
            local_614 = (fVar38 * fVar41 - fVar36 * fVar42) + fVar40 * fVar44 + local_720;
            fVar36 = (fVar36 * fVar39 - fVar40 * fVar41) + fVar38 * fVar44 + local_6dc;
            fVar40 = fVar36 * fVar36 + fVar45 * fVar45 + local_614 * local_614;
            if (fVar40 == fVar10) {
              fVar40 = fVar36;
              uVar43 = local_614;
              fVar41 = fVar45;
              local_610 = CONCAT44(fVar36,fVar45);
            }
            else if (__real_322bcc77 <= fVar40) {
              fVar44 = (float)local_5b8._0_4_ / SQRT(fVar40);
              fVar40 = fVar44 * fVar36;
              fVar41 = fVar44 * fVar45;
              uVar43 = fVar44 * local_614;
            }
            else {
              fVar40 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                              0x20);
              local_610 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              uVar11 = local_610;
              local_610._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              fVar41 = (float)local_610;
              local_610 = uVar11;
            }
            _local_61c = CONCAT44(fVar36,fVar45);
            fVar44 = fVar41 * local_70c * fVar46 + *(float *)(lVar4 + lVar30 * 0xc);
            fVar36 = fVar40 * local_70c * fVar46 + *(float *)(lVar4 + 4 + lVar30 * 0xc);
            fVar46 = (float)uVar43 * local_70c * fVar46 + *(float *)(lVar4 + 8 + lVar30 * 0xc);
            if (bVar13) {
              iVar1 = param_4->TextureWidth;
              iVar20 = iVar1 + -1;
              iVar33 = param_4->TextureHeight + -1;
              iVar19 = (int)ROUND(fVar37 * (param_5->DisplacementUVScale).field0_0x0._s_0.X *
                                  ((float)iVar20 + (float)iVar20) - __real_3f000000);
              iVar19 = (int)(CONCAT44(iVar19 >> 0x1f,iVar19 >> 1) % (longlong)iVar1);
              if (iVar19 < iVar20) {
                iVar20 = iVar19;
              }
              iVar19 = (int)ROUND(local_6c8 * (param_5->DisplacementUVScale).field0_0x0._s_0.Y *
                                  ((float)iVar33 + (float)iVar33) - __real_3f000000);
              iVar19 = (int)(CONCAT44(iVar19 >> 0x1f,iVar19 >> 1) % (longlong)param_4->TextureHeight
                            );
              if (iVar19 < iVar33) {
                iVar33 = iVar19;
              }
              iVar19 = 0;
              if (0 < iVar33) {
                iVar19 = iVar33;
              }
              iVar33 = 0;
              if (0 < iVar20) {
                iVar33 = iVar20;
              }
              uVar28 = iVar19 * iVar1 + iVar33;
              uVar18 = 0;
              if ((int)uVar28 < (param_4->Values).ArrayNum) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar37 = ((param_4->Values).DataPtr[(int)uVar28] - param_5->DisplacementBias) *
                       param_5->DisplacementStrength * (local_70c / local_6cc);
              fVar46 = fVar37 * (float)uVar43 + fVar46;
              fVar36 = fVar37 * fVar40 + fVar36;
              fVar44 = fVar37 * fVar41 + fVar44;
            }
            iVar20 = (param_8->Vertices).ArrayNum;
            piVar34 = &(param_8->Vertices).ArrayMax;
            fVar41 = fVar44 - *(float *)(lVar4 + lVar30 * 0xc);
            fVar37 = fVar36 - *(float *)(lVar4 + 4 + lVar30 * 0xc);
            fVar39 = fVar46 - *(float *)(lVar4 + 8 + lVar30 * 0xc);
            fVar40 = (float)local_5b8._0_4_ /
                     SQRT(fVar37 * fVar37 + fVar41 * fVar41 + fVar39 * fVar39);
            fStack_658 = local_71c;
            local_65c = fVar48;
            if (iVar20 == *piVar34) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x424,(ForAnyElementType *)param_8,piVar34);
            }
            (param_8->Vertices).ArrayNum = iVar20 + 1;
            lVar27 = (longlong)iVar20;
            pFVar2 = (param_8->Vertices).AllocatorInstance.Data;
            *(float *)(pFVar2 + lVar27 * 0x24) = fVar44;
            *(float *)(pFVar2 + lVar27 * 0x24 + 4) = fVar36;
            *(float *)(pFVar2 + lVar27 * 0x24 + 8) = fVar46;
            *(float *)(pFVar2 + lVar27 * 0x24 + 0xc) = fVar40 * fVar41;
            *(float *)(pFVar2 + lVar27 * 0x24 + 0x10) = fVar37 * fVar40;
            *(float *)(pFVar2 + lVar27 * 0x24 + 0x14) = fVar39 * fVar40;
            *(ulonglong *)(pFVar2 + lVar27 * 0x24 + 0x18) = CONCAT44(fStack_658,local_65c);
            *(float *)(pFVar2 + lVar27 * 0x24 + 0x20) = local_718;
            local_724 = iVar20;
            if (((local_750.AllocatorInstance.Data <= (FScriptContainerElement *)&local_724) &&
                ((FScriptContainerElement *)&local_724 <
                 local_750.AllocatorInstance.Data + (longlong)local_750.ArrayMax * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar20 = local_750.ArrayNum;
            if (local_750.ArrayNum == local_750.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_750.AllocatorInstance,&local_750.ArrayMax);
            }
            iVar16 = iVar16 + 1;
            local_750.ArrayNum = iVar20 + 1;
            *(int *)(local_750.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_724;
            lVar27 = local_6b0;
            fVar48 = (float)local_6b8;
            fVar46 = local_71c;
            fVar41 = local_718;
            fVar40 = local_720;
            fVar36 = (float)local_6a8;
          } while (iVar16 < iVar15);
        }
      }
      piVar34 = &(param_8->Vertices).ArrayMax;
      if ((local_750.ArrayNum < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = *(uint *)local_750.AllocatorInstance.Data;
      lVar31 = (longlong)(int)uVar18;
      uVar28 = 0;
      if ((int)uVar18 < (param_8->Vertices).ArrayNum) {
        uVar28 = ~uVar18 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_8->Vertices).AllocatorInstance.Data;
      pFVar2 = pFVar6 + lVar31 * 0x24;
      uVar43 = *(undefined4 *)pFVar2;
      uVar47 = *(undefined4 *)(pFVar2 + 4);
      uVar8 = *(undefined4 *)(pFVar2 + 8);
      uStack_584 = *(undefined4 *)(pFVar2 + 0xc);
      pFVar2 = pFVar6 + lVar31 * 0x24 + 0x10;
      uStack_580 = *(undefined4 *)pFVar2;
      uVar9 = *(undefined4 *)(pFVar2 + 4);
      uStack_578 = *(undefined4 *)(pFVar2 + 8);
      uStack_574 = *(undefined4 *)(pFVar2 + 0xc);
      local_570 = *(undefined4 *)(pFVar6 + lVar31 * 0x24 + 0x20);
      local_590 = uVar43;
      uStack_58c = uVar47;
      uStack_588 = uVar8;
      uStack_57c = uVar9;
      if (0.0 <= local_6d4) {
        fVar40 = local_6d4;
        if ((fVar10 < local_6d4) &&
           (fVar40 = FGenericPlatformMath::Fmod(local_6d4 - fVar10,fVar10), fVar40 == 0.0)) {
          fVar40 = fVar10;
        }
      }
      else {
        fVar40 = FGenericPlatformMath::Fmod
                           ((float)((uint)local_6d4 ^ __xmm_80000000800000008000000080000000),fVar10
                           );
        if (fVar40 == 0.0) {
          fVar40 = 0.0;
        }
        else {
          fVar40 = fVar10 - fVar40;
        }
      }
      iVar15 = (param_8->Vertices).ArrayNum;
      local_654 = (local_6d0 - (float)local_6b8) * fVar40 + (float)local_6b8;
      fStack_650 = fVar46;
      if (iVar15 == *piVar34) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,(ForAnyElementType *)param_8,piVar34);
      }
      (param_8->Vertices).ArrayNum = iVar15 + 1;
      lVar31 = (longlong)iVar15;
      pFVar2 = (param_8->Vertices).AllocatorInstance.Data;
      *(undefined4 *)(pFVar2 + lVar31 * 0x24) = uVar43;
      *(undefined4 *)(pFVar2 + lVar31 * 0x24 + 4) = uVar47;
      *(ulonglong *)(pFVar2 + lVar31 * 0x24 + 0xc) = CONCAT44(uStack_580,uStack_584);
      *(ulonglong *)(pFVar2 + lVar31 * 0x24 + 0x18) = CONCAT44(fStack_650,local_654);
      *(float *)(pFVar2 + lVar31 * 0x24 + 0x20) = fVar41;
      *(undefined4 *)(pFVar2 + lVar31 * 0x24 + 0x14) = uVar9;
      *(undefined4 *)(pFVar2 + lVar31 * 0x24 + 8) = uVar8;
      local_714 = iVar15;
      if (((local_750.AllocatorInstance.Data <= (FScriptContainerElement *)&local_714) &&
          ((FScriptContainerElement *)&local_714 <
           local_750.AllocatorInstance.Data + (longlong)local_750.ArrayMax * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = local_750.ArrayNum;
      if (local_750.ArrayNum == local_750.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_750.AllocatorInstance,&local_750.ArrayMax);
      }
      local_750.ArrayNum = iVar15 + 1;
      *(int *)(local_750.AllocatorInstance.Data + (longlong)iVar15 * 4) = local_714;
      local_600 = *(undefined8 *)(lVar4 + lVar30 * 0xc);
      fVar36 = *(float *)(lVar4 + 8 + lVar30 * 0xc);
      TriangulateRings(&local_688,&local_750,&local_670,param_8);
      if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.AllocatorInstance.Data);
      }
      local_688.AllocatorInstance.Data = local_750.AllocatorInstance.Data;
      local_6b0 = lVar27 + 1;
      local_708 = local_708 + 1;
      iVar15 = param_3->ArrayNum;
      local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.ArrayNum = local_750.ArrayNum;
      local_688.ArrayMax = local_750.ArrayMax;
      local_750.ArrayNum = 0;
      local_750.ArrayMax = 0;
      pTVar35 = local_700;
      fVar40 = local_6cc;
      fVar41 = local_6c8;
      fVar46 = local_66c;
      fVar48 = (float)local_5b8._0_4_;
    } while ((int)local_708 < iVar15);
  }
  if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.AllocatorInstance.Data);
  }
  if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_750.AllocatorInstance.Data);
  }
  if (local_698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.AllocatorInstance.Data);
  }
  return;
}

// GenerateDynamicMesh @ 14da90d10

void __cdecl
FPVMeshBuilder::GenerateDynamicMesh
          (FManagedArrayCollection *param_1,FPVMeshBuilderParams *param_2,
          TObjectPtr<UDynamicMesh> *param_3)

{
  TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_88 [2];
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> local_80;
  code *local_70;
  ForAnyElementType *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  int local_40;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  GetLocalDynamicMeshData(param_1,param_2,&local_80);
  iVar3 = local_80.ArrayNum;
  local_res20[0] = 0;
  local_88[0] = 0;
  pTVar1 = (TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)
           (local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x28);
  pFVar4 = local_80.AllocatorInstance.Data + 8;
  while( true ) {
    if (local_80.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FLocalDynamicMeshData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)(pFVar4 + -8) ==
        pTVar1) break;
    iVar2 = *(int *)pFVar4;
    _Src = (((TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)(pFVar4 + -8))->
           AllocatorInstance).Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = (int *)CONCAT44(local_58._4_4_,iVar2);
    if (iVar2 == 0) {
      local_58 = (int *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,iVar2,0,&local_60,iVar2,(int *)((longlong)&local_58 + 4));
      memcpy(local_60.Data,_Src,(longlong)iVar2 * 0x24);
    }
    local_48 = *(int *)(pFVar4 + 0x10);
    lVar5 = (longlong)local_48;
    _Src_00 = *(void **)(pFVar4 + 8);
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_48,0,&local_50,local_48,&local_44);
      memcpy(local_50.Data,_Src_00,lVar5 << 4);
    }
    local_40 = *(int *)(pFVar4 + 0x18);
    local_88[0] = local_88[0] + local_48;
    local_res20[0] = local_res20[0] + (int)local_58;
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    pFVar4 = pFVar4 + 0x28;
  }
  (**(code **)(((param_3->field0_0x0).DebugPtr)->_padding_ + 0x2b0))();
  local_60.Data = (FScriptContainerElement *)local_res20;
  local_58 = local_88;
  local_50.Data = (FScriptContainerElement *)&local_80;
  local_68 = &local_60;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPVMeshBuilder::GenerateDynamicMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            ((param_3->field0_0x0).DebugPtr,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,MeshChange,
             Unknown,false);
  DestructItems<FLocalDynamicMeshData,int>
            ((FLocalDynamicMeshData *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if ((FLocalDynamicMeshData *)local_80.AllocatorInstance.Data != (FLocalDynamicMeshData *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// GenerateGeometryCollection @ 14da90f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPVMeshBuilder::GenerateGeometryCollection
          (FManagedArrayCollection *param_1,FPVMeshBuilderParams *param_2,
          FGeometryCollection *param_3)

{
  TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  UObject *pUVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FLinearColor FVar11;
  FPVMeshBuilderParams *pFVar12;
  TArray<FTrunkGenerationMaterialSetup,TSizedDefaultAllocator<32>_> *pTVar13;
  TManagedArray<FString> *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FString *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  UObjectBaseUtility *this;
  undefined8 *puVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 *puVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  int *piVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  undefined1 auStackY_738 [32];
  undefined1 local_6e8;
  undefined1 local_6e7;
  undefined1 local_6e6;
  undefined1 local_6e5;
  FIdentityFunctor local_6e4 [4];
  uint local_6e0;
  ForAnyElementType local_6d8;
  undefined8 local_6d0;
  uint local_6c8;
  int local_6c4;
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> local_6c0;
  uint local_6b0;
  int local_6ac;
  int local_6a8;
  uint local_6a4;
  int local_6a0;
  longlong local_698;
  longlong local_690;
  FScriptContainerElement *local_688;
  longlong local_680;
  longlong local_678;
  FPVMeshBuilderParams *local_670;
  FString local_668;
  FLocalDynamicMeshData *local_658;
  TManagedArray<int> *local_650;
  TArray<FBranchUVData,TSizedDefaultAllocator<32>_> local_648;
  FString local_638;
  TArray<FPointUVData,TSizedDefaultAllocator<32>_> local_628;
  ForAnyElementType local_618;
  int local_610;
  int local_60c;
  ForAnyElementType local_608;
  int local_600;
  int local_5fc;
  int local_5f8;
  undefined8 local_5f0;
  undefined2 local_5e8;
  undefined2 uStack_5e6;
  int local_5e4;
  int iStack_5e0;
  int local_5dc;
  TManagedArray<UE::Math::TVector2<float>_> *local_5d8;
  undefined8 local_5d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5c8;
  int local_5b8;
  int iStack_5b4;
  int iStack_5b0;
  int iStack_5ac;
  TArray<FTrunkGenerationMaterialSetup,TSizedDefaultAllocator<32>_> *local_5a8;
  TManagedArray<FString> *local_5a0;
  FConstructionParameters local_598;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_588;
  TArray<FName,TSizedDefaultAllocator<32>_> local_578;
  FName local_568;
  FString local_560;
  FString local_550;
  FString local_540;
  undefined8 local_530 [3];
  FBoneFacade local_518;
  FBranchFacade local_358;
  int local_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_738;
  iVar28 = 0;
  local_6e0 = 0;
  local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.ArrayNum = 0;
  local_588.ArrayMax = 0;
  local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.ArrayNum = 0;
  local_578.ArrayMax = 0;
  local_670 = param_2;
  FManagedArrayCollection::CopyTo(param_1,(FManagedArrayCollection *)param_3,&local_578,&local_588);
  local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6c0.ArrayNum = 0;
  local_6c0.ArrayMax = 0;
  PV::Facades::FBoneFacade::DefineSchema((FManagedArrayCollection *)param_3);
  PV::Facades::FBoneFacade::FBoneFacade(&local_518,(FManagedArrayCollection *)param_3);
  PV::Facades::FBranchFacade::FBranchFacade(&local_358,(FManagedArrayCollection *)param_3);
  if (local_358.Parents.ConstAttributeArray ==
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    iVar16 = FManagedArrayCollection::NumElements
                       (local_358.Parents.ConstCollection,local_358.Parents.Group);
  }
  else {
    iVar16 = (**(code **)(*(longlong *)local_358.Parents.ConstAttributeArray + 0x60))();
  }
  if (iVar16 == 0) {
    if (4 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    }
  }
  else {
    SetNjordPixelID(param_3);
    local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5c8.ArrayNum = 0;
    local_5c8.ArrayMax = 0;
    local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_648.ArrayNum = 0;
    local_648.ArrayMax = 0;
    FPVMaterialSettings::SetBranchUVMaterial
              (&param_2->MaterialSettings,(FManagedArrayCollection *)param_3,&local_5c8,&local_648);
    FPVMaterialSettings::SetUVOffsetAndScale
              (&param_2->MaterialSettings,(FManagedArrayCollection *)param_3,&local_648);
    local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_628.ArrayNum = 0;
    local_628.ArrayMax = 0;
    FPVMaterialSettings::SetBaseUVs
              (&param_2->MaterialSettings,(FManagedArrayCollection *)param_3,&local_628);
    FPVMaterialSettings::FitUVs01
              (&param_2->MaterialSettings,(FManagedArrayCollection *)param_3,&local_628,&local_5c8,
               &local_648);
    FPVMaterialSettings::SetOutputUVs
              (&param_2->MaterialSettings,(FManagedArrayCollection *)param_3,&local_628,&local_648);
    if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.AllocatorInstance.Data);
    }
    if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.AllocatorInstance.Data);
    }
    if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AllocatorInstance.Data);
    }
    GetLocalDynamicMeshData((FManagedArrayCollection *)param_3,param_2,&local_6c0);
    iVar16 = local_6c0.ArrayNum;
    local_6ac = 0;
    pFVar24 = local_6c0.AllocatorInstance.Data + 8;
    pTVar1 = (TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)
             (local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayNum * 0x28);
    iVar27 = iVar28;
    while( true ) {
      if (local_6c0.ArrayNum != iVar16) {
        local_6e8 = 0;
        `TCheckedPointerIterator<FLocalDynamicMeshData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_6e8);
      }
      pFVar12 = local_670;
      if ((TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)(pFVar24 + -8) ==
          pTVar1) break;
      local_610 = *(int *)pFVar24;
      lVar21 = (longlong)local_610;
      pFVar4 = (((TArray<FLocalDynamicMeshData::FVertex,TSizedDefaultAllocator<32>_> *)
                (pFVar24 + -8))->AllocatorInstance).Data;
      local_618.Data = (FScriptContainerElement *)0x0;
      if (local_610 == 0) {
        local_60c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,local_610,0,&local_618,local_610,&local_60c);
        memcpy(local_618.Data,pFVar4,lVar21 * 0x24);
      }
      local_600 = *(int *)(pFVar24 + 0x10);
      lVar21 = (longlong)local_600;
      _Src = *(void **)(pFVar24 + 8);
      local_608.Data = (FScriptContainerElement *)0x0;
      if (local_600 == 0) {
        local_5fc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_600,0,&local_608,local_600,&local_5fc);
        memcpy(local_608.Data,_Src,lVar21 << 4);
      }
      iVar27 = iVar27 + local_610;
      iVar28 = local_6ac + local_600;
      local_5f8 = *(int *)(pFVar24 + 0x18);
      local_6ac = iVar28;
      if (local_608.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data);
      }
      if (local_618.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data);
      }
      pFVar24 = pFVar24 + 0x28;
    }
    local_650 = local_518.VertexPointIds.AttributeArray;
    local_6a8 = iVar27;
    if (((local_518.VertexPointIds.AttributeArray == (TManagedArray<int> *)0x0) ||
        (local_518.VertexPointIds.Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (local_518.VertexPointIds.AttributeArray)->field_0x8 = 1;
    FManagedArrayCollection::AddElements
              ((FManagedArrayCollection *)param_3,1,FTransformCollection::TransformGroup);
    FManagedArrayCollection::AddElements
              ((FManagedArrayCollection *)param_3,1,FGeometryCollection::GeometryGroup);
    FManagedArrayCollection::AddElements
              ((FManagedArrayCollection *)param_3,iVar28,FGeometryCollection::FacesGroup);
    iVar16 = local_6a8;
    FManagedArrayCollection::AddElements
              ((FManagedArrayCollection *)param_3,local_6a8,FGeometryCollection::VerticesGroup);
    FGeometryCollection::SetNumUVLayers(param_3,1);
    local_5d8 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                          ((FManagedArrayCollection *)param_3,
                           GeometryCollection::UV::UVLayerNames[0],
                           GeometryCollection::UV::VerticesGroupName);
    ::FName::FName(&local_568,"MaterialPath");
    uVar31 = 0;
    local_5f0 = 0;
    local_5e8._0_1_ = true;
    local_5e8._1_1_ = false;
    local_598.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_598.GroupIndexDependency.Number = 0;
    local_5d0 = 0;
    local_598.Saved = true;
    local_598.bAllowCircularDependency = false;
    local_598._10_2_ = uStack_5e6;
    local_5a0 = FManagedArrayCollection::AddAttribute<FString>
                          ((FManagedArrayCollection *)param_3,local_568,
                           FGeometryCollection::MaterialGroup,&local_598);
    local_5a8 = &(pFVar12->MaterialSettings).MaterialSetups;
    local_6a0 = -1;
    local_6c8 = 0;
    local_6d8.Data = (FScriptContainerElement *)0x0;
    local_6d0 = 0;
    MergeMaterials(local_5a8,&local_6c0);
    AlgoImpl::
    IntroSortInternal<FLocalDynamicMeshData,int,FIdentityFunctor,TDereferenceWrapper<FLocalDynamicMeshData,_FPVMeshBuilder::GenerateGeometryCollection_::__l2::<lambda_1>_>_>
              ((FLocalDynamicMeshData *)local_6c0.AllocatorInstance.Data,local_6c0.ArrayNum,
               local_6e4[0],(<lambda_1> *)local_6e4);
    local_6b0 = local_6c0.ArrayNum - 1;
    local_6c4 = -1;
    if (-1 < (int)local_6b0) {
      lVar21 = (longlong)(int)local_6b0;
      local_690 = 0;
      local_680 = 0;
      lVar29 = lVar21 * 0x28;
      iVar27 = -1;
      do {
        lVar26 = local_690;
        local_6a4 = ~local_6b0 >> 0x1f;
        uVar17 = 0;
        if ((int)local_6b0 < local_6c0.ArrayNum) {
          uVar17 = local_6a4;
        }
        local_678 = lVar21;
        local_670 = (FPVMeshBuilderParams *)lVar29;
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar13 = local_5a8;
        iVar28 = *(int *)(local_6c0.AllocatorInstance.Data + 0x20 + lVar29);
        if (iVar27 != iVar28) {
          this = (UObjectBaseUtility *)0x0;
          local_6a0 = iVar28;
          if ((iVar28 < 0) || (local_5a8->ArrayNum <= iVar28)) {
            if ((byte)LogProceduralVegetation._0_1_ < 3) goto LAB_14da914ca;
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
            ::FString::FString(&local_638,"");
LAB_14da9156e:
            if (2 < (byte)LogProceduralVegetation._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
            }
          }
          else {
            if ((iVar28 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar24 = (pTVar13->AllocatorInstance).Data + (longlong)iVar28 * 0x30;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 = *(UObject **)pFVar24, pUVar5 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            this = *(UObjectBaseUtility **)pFVar24;
LAB_14da914ca:
            ::FString::FString(&local_638,"");
            if (this == (UObjectBaseUtility *)0x0) goto LAB_14da9156e;
            pFVar18 = UObjectBaseUtility::GetPathName(this,&local_540,(UObject *)0x0);
            if (&local_638 != pFVar18) {
              if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_638.Data.AllocatorInstance.Data);
              }
              local_638.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
              (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_638.Data.ArrayNum = (pFVar18->Data).ArrayNum;
              local_638.Data.ArrayMax = (pFVar18->Data).ArrayMax;
              (pFVar18->Data).ArrayNum = 0;
              (pFVar18->Data).ArrayMax = 0;
            }
            if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_540.Data.AllocatorInstance.Data);
            }
          }
          uVar17 = FManagedArrayCollection::AddElements
                             ((FManagedArrayCollection *)param_3,1,
                              FGeometryCollection::MaterialGroup);
          if (this == (UObjectBaseUtility *)0x0) {
            uVar20 = local_6e0 | 2;
            local_6e0 = uVar20;
            pFVar18 = ::FString::FString(&local_560,L"None");
          }
          else {
            local_6e0 = local_6e0 | 1;
            pFVar18 = UE::CoreUObject::Private::GetPathName
                                (&local_550,(UObject *)this,(UObject *)0x0);
            uVar20 = local_6e0;
          }
          pFVar24 = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar16 = (pFVar18->Data).ArrayNum;
          local_698 = CONCAT44(local_698._4_4_,(pFVar18->Data).ArrayMax);
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          if (((uVar20 & 2) != 0) &&
             (uVar20 = uVar20 & 0xfffffffd, local_6e0 = uVar20,
             local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_560.Data.AllocatorInstance.Data);
          }
          if (((uVar20 & 1) != 0) &&
             (local_6e0 = uVar20 & 0xfffffffe,
             local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_550.Data.AllocatorInstance.Data);
          }
          pTVar14 = local_5a0;
          uVar20 = 0;
          if ((int)uVar17 < *(int *)&local_5a0->field_0x18) {
            uVar20 = ~uVar17 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar22 = (undefined8 *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar17 * 0x10)
          ;
          if (puVar22 != local_530) {
            if ((void *)*puVar22 != (void *)0x0) {
              FMemory::Free((void *)*puVar22);
            }
            *puVar22 = pFVar24;
            pFVar24 = (FScriptContainerElement *)0x0;
            *(int *)(puVar22 + 1) = iVar16;
            *(undefined4 *)((longlong)puVar22 + 0xc) = (undefined4)local_698;
          }
          if (pFVar24 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar24);
          }
          uStack_64 = local_6c8;
          uStack_60 = 0;
          local_58 = 0;
          local_68 = iVar28;
          uStack_5c = uVar31;
          if (((local_6d8.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               local_6d8.Data + (longlong)local_6d0._4_4_ * 0x14)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar28 = (int)local_6d0;
          if ((int)local_6d0 == local_6d0._4_4_) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&local_6d8,(int *)((longlong)&local_6d0 + 4));
          }
          local_6c4 = local_6c4 + 1;
          local_6d0 = CONCAT44(local_6d0._4_4_,iVar28 + 1);
          *(ulonglong *)(local_6d8.Data + (longlong)iVar28 * 0x14) = CONCAT44(uStack_64,local_68);
          *(ulonglong *)(local_6d8.Data + (longlong)iVar28 * 0x14 + 8) =
               CONCAT44(uStack_5c,uStack_60);
          *(undefined4 *)(local_6d8.Data + (longlong)iVar28 * 0x14 + 0x10) = local_58;
          lVar21 = local_678;
          lVar26 = local_690;
          if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_638.Data.AllocatorInstance.Data);
            lVar21 = local_678;
            lVar26 = local_690;
          }
        }
        uVar17 = 0;
        if ((int)local_6b0 < local_6c0.ArrayNum) {
          uVar17 = local_6a4;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_698 = lVar21 * 5;
        local_658 = (FLocalDynamicMeshData *)local_6c0.AllocatorInstance.Data;
        lVar29 = lVar26 * 4;
        local_6a4 = *(uint *)(local_6c0.AllocatorInstance.Data + lVar21 * 0x28 + 0x18);
        uVar19 = (ulonglong)(int)local_6a4;
        piVar30 = *(int **)(local_6c0.AllocatorInstance.Data + lVar21 * 0x28 + 0x10);
        local_688 = (FScriptContainerElement *)(piVar30 + uVar19 * 4);
        lVar26 = lVar26 * 0xc;
        while( true ) {
          pFVar24 = local_688;
          if ((&(local_658->Triangles).ArrayNum)[local_698 * 2] != (int)uVar19) {
            local_6e7 = 0;
            `TCheckedPointerIterator<UE::Math::TIntVector4<int>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_6e7);
          }
          if ((FScriptContainerElement *)piVar30 == pFVar24) break;
          iStack_5ac = piVar30[3];
          uVar20 = ~local_6c8;
          iStack_5e0 = piVar30[1] + uVar31;
          iVar28 = piVar30[2] + uVar31;
          local_5e4 = *piVar30 + uVar31;
          uVar17 = 0;
          if ((int)local_6c8 < *(int *)&(param_3->Indices).field_0x18) {
            uVar17 = uVar20 >> 0x1f;
          }
          local_5dc = iVar28;
          local_5b8 = local_5e4;
          iStack_5b4 = iStack_5e0;
          iStack_5b0 = iVar28;
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = local_6c8;
          lVar21 = *(longlong *)&(param_3->Indices).field_0x10;
          *(ulonglong *)(lVar21 + lVar26) = CONCAT44(iStack_5e0,local_5e4);
          *(int *)(lVar21 + 8 + lVar26) = iVar28;
          uVar23 = 0;
          if ((int)local_6c8 < *(int *)&(param_3->MaterialID).field_0x18) {
            uVar23 = uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_6c8 = uVar17 + 1;
          lVar26 = lVar26 + 0xc;
          local_690 = local_690 + 1;
          piVar30 = piVar30 + 4;
          *(int *)(*(longlong *)&(param_3->MaterialID).field_0x10 + lVar29) = local_6c4;
          lVar29 = lVar29 + 4;
          uVar19 = (ulonglong)local_6a4;
        }
        iVar28 = (&(local_658->Vertices).ArrayNum)[local_698 * 2];
        pFVar24 = (&(local_658->Vertices).AllocatorInstance)[local_698].Data;
        lVar21 = local_680 * 0xc;
        local_688 = pFVar24 + (longlong)iVar28 * 0x24;
        while( true ) {
          pFVar4 = local_688;
          if ((&(local_658->Vertices).ArrayNum)[local_698 * 2] != iVar28) {
            local_6e6 = 0;
            `TCheckedPointerIterator<FLocalDynamicMeshData::FVertex_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_6e6);
          }
          if (pFVar24 == pFVar4) break;
          uVar3 = *(undefined8 *)pFVar24;
          iVar16 = *(int *)(pFVar24 + 8);
          uVar20 = ~uVar31 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar31 < *(int *)&(param_3->Vertex).field_0x18) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar29 = *(longlong *)&(param_3->Vertex).field_0x10;
          *(undefined8 *)(lVar21 + lVar29) = uVar3;
          *(int *)(lVar21 + 8 + lVar29) = iVar16;
          uVar3 = *(undefined8 *)(pFVar24 + 0xc);
          iVar16 = *(int *)(pFVar24 + 0x14);
          uVar17 = 0;
          if ((int)uVar31 < *(int *)&(param_3->Normal).field_0x18) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar29 = *(longlong *)&(param_3->Normal).field_0x10;
          *(undefined8 *)(lVar29 + lVar21) = uVar3;
          *(int *)(lVar29 + 8 + lVar21) = iVar16;
          uVar3 = *(undefined8 *)(pFVar24 + 0x18);
          uVar17 = 0;
          if ((int)uVar31 < *(int *)&local_5d8->field_0x18) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined8 *)(*(longlong *)&local_5d8->field_0x10 + local_680 * 8) = uVar3;
          fVar2 = *(float *)(pFVar24 + 0x20);
          uVar17 = 0;
          if ((int)uVar31 < *(int *)&local_650->field_0x18) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar31 = uVar31 + 1;
          lVar21 = lVar21 + 0xc;
          *(int *)(*(longlong *)&local_650->field_0x10 + local_680 * 4) = (int)fVar2;
          local_680 = local_680 + 1;
          pFVar24 = pFVar24 + 0x24;
        }
        uVar17 = (int)local_6d0 - 1;
        if ((-1 < (int)uVar17) && ((int)uVar17 < (int)local_6d0)) {
          uVar23 = ~uVar17 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar17 < (int)local_6d0) {
            uVar20 = uVar23;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar21 = (longlong)(int)uVar17;
          *(uint *)(local_6d8.Data + lVar21 * 0x14 + 0x10) = uVar31;
          uVar20 = 0;
          if ((int)uVar17 < (int)local_6d0) {
            uVar20 = uVar23;
          }
          if (uVar20 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar28 = local_6c8 - *(int *)(local_6d8.Data + lVar21 * 0x14 + 4);
          uVar20 = 0;
          if ((int)uVar17 < (int)local_6d0) {
            uVar20 = uVar23;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(local_6d8.Data + lVar21 * 0x14 + 8) = iVar28;
        }
        local_6b0 = local_6b0 - 1;
        lVar21 = local_678 + -1;
        lVar29 = (longlong)local_670 + -0x28;
        iVar16 = local_6a8;
        iVar27 = local_6a0;
        iVar28 = local_6ac;
        local_678 = lVar21;
        local_670 = (FPVMeshBuilderParams *)lVar29;
      } while (-1 < (int)local_6b0);
    }
    uVar31 = 0;
    lVar21 = 0;
    if ((*(int *)&(param_3->SimulationType).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(undefined4 **)&(param_3->SimulationType).field_0x10 = 1;
    if ((*(int *)&(param_3->TransformToGeometryIndex).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(undefined4 **)&(param_3->TransformToGeometryIndex).field_0x10 = 0;
    if ((*(int *)&(param_3->TransformIndex).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(undefined4 **)&(param_3->TransformIndex).field_0x10 = 0;
    ::FString::FString(&local_668,"TreeTest");
    if (((int)param_3->_padding_ < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = (FString *)param_3->_padding_;
    if (pFVar18 != &local_668) {
      pFVar24 = (pFVar18->Data).AllocatorInstance.Data;
      if (pFVar24 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar24);
      }
      (pFVar18->Data).AllocatorInstance.Data = local_668.Data.AllocatorInstance.Data;
      local_668.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Data).ArrayNum = local_668.Data.ArrayNum;
      (pFVar18->Data).ArrayMax = local_668.Data.ArrayMax;
      local_668.Data.ArrayNum = 0;
      local_668.Data.ArrayMax = 0;
    }
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    FVar11.field0_0x0 = FLinearColor::White.field0_0x0;
    if (((int)param_3->_padding_ < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ((FLinearColor_u_0 *)param_3->_padding_)->_s_0 = (FLinearColor_u_0_s_0)FVar11.field0_0x0;
    if ((*(int *)&(param_3->FaceStart).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(undefined4 **)&(param_3->FaceStart).field_0x10 = 0;
    if ((*(int *)&(param_3->FaceCount).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(int **)&(param_3->FaceCount).field_0x10 = iVar28;
    if ((*(int *)&(param_3->VertexStart).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(undefined4 **)&(param_3->VertexStart).field_0x10 = 0;
    if ((*(int *)&(param_3->VertexCount).field_0x18 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    **(int **)&(param_3->VertexCount).field_0x10 = iVar16;
    uVar17 = uVar31;
    if (0 < *(int *)&(param_3->Visible).field_0x28) {
      do {
        if ((((int)uVar17 < 0) || (*(int *)&(param_3->Visible).field_0x28 <= (int)uVar17)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar6 = *(undefined1 **)&(param_3->Visible).field_0x20;
        puVar25 = &(param_3->Visible).field_0x10;
        if (puVar6 != (undefined1 *)0x0) {
          puVar25 = puVar6;
        }
        uVar20 = uVar17;
        if ((int)uVar17 < 0) {
          uVar20 = uVar17 + 0x1f;
        }
        uVar23 = uVar17 + 1;
        *(uint *)(puVar25 + (longlong)((int)uVar20 >> 5) * 4) =
             *(uint *)(puVar25 + (longlong)((int)uVar20 >> 5) * 4) | 1 << ((byte)uVar17 & 0x1f);
        uVar17 = uVar23;
      } while ((int)uVar23 < *(int *)&(param_3->Visible).field_0x28);
    }
    lVar29 = lVar21;
    uVar17 = uVar31;
    if (0 < *(int *)&(param_3->BoneMap).field_0x18) {
      do {
        uVar20 = uVar31;
        if ((int)uVar17 < *(int *)&(param_3->BoneMap).field_0x18) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar17 = uVar17 + 1;
        *(undefined4 *)(lVar29 + *(longlong *)&(param_3->BoneMap).field_0x10) = 0;
        lVar29 = lVar29 + 4;
      } while ((int)uVar17 < *(int *)&(param_3->BoneMap).field_0x18);
    }
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill
              ((TManagedArrayBase<UE::Math::TVector<float>_> *)&param_3->TangentU,
               &UE::Math::TVector<float>::ForwardVector);
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill
              ((TManagedArrayBase<UE::Math::TVector<float>_> *)&param_3->TangentV,
               &UE::Math::TVector<float>::RightVector);
    lVar29 = lVar21;
    uVar17 = uVar31;
    if (0 < *(int *)&(param_3->Color).field_0x18) {
      do {
        FVar11.field0_0x0 = FLinearColor::White.field0_0x0;
        uVar20 = uVar31;
        if ((int)uVar17 < *(int *)&(param_3->Color).field_0x18) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar17 = uVar17 + 1;
        ((FLinearColor_u_0 *)(*(longlong *)&(param_3->Color).field_0x10 + lVar29))->_s_0 =
             (FLinearColor_u_0_s_0)FVar11.field0_0x0;
        lVar29 = lVar29 + 0x10;
      } while ((int)uVar17 < *(int *)&(param_3->Color).field_0x18);
    }
    iVar28 = (int)local_6d0;
    uVar19 = (ulonglong)(int)local_6d0;
    local_688 = local_6d8.Data + uVar19 * 0x14;
    FVar32.Data = local_6d8.Data;
    while( true ) {
      pFVar24 = local_688;
      if ((int)uVar19 != iVar28) {
        local_6e5 = 0;
        `TCheckedPointerIterator<`FPVMeshBuilder::GenerateGeometryCollection'::__l2::FSection,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_6e5);
      }
      if (FVar32.Data == pFVar24) break;
      iVar27 = *(int *)FVar32.Data;
      iVar8 = *(int *)(FVar32.Data + 4);
      iVar9 = *(int *)(FVar32.Data + 8);
      iVar10 = *(int *)(FVar32.Data + 0xc);
      iVar16 = *(int *)(FVar32.Data + 0x10);
      uVar20 = ~uVar31 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar31 < *(int *)&(param_3->Sections).field_0x18) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(lVar21 + *(longlong *)&(param_3->Sections).field_0x10) = iVar27;
      uVar17 = 0;
      if ((int)uVar31 < *(int *)&(param_3->Sections).field_0x18) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)&(param_3->Sections).field_0x10 + 4 + lVar21) = iVar8;
      uVar17 = 0;
      if ((int)uVar31 < *(int *)&(param_3->Sections).field_0x18) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)&(param_3->Sections).field_0x10 + 8 + lVar21) = iVar9;
      uVar17 = 0;
      if ((int)uVar31 < *(int *)&(param_3->Sections).field_0x18) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)&(param_3->Sections).field_0x10 + 0xc + lVar21) = iVar10;
      uVar17 = 0;
      if ((int)uVar31 < *(int *)&(param_3->Sections).field_0x18) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar31 = uVar31 + 1;
      *(int *)(*(longlong *)&(param_3->Sections).field_0x10 + 0x10 + lVar21) = iVar16;
      lVar21 = lVar21 + 0x20;
      uVar19 = local_6d0 & 0xffffffff;
      FVar32.Data = FVar32.Data + 0x14;
    }
    FGeometryCollection::UpdateBoundingBox(param_3);
    if (local_6d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data);
    }
  }
  DestructItems<FLocalDynamicMeshData,int>
            ((FLocalDynamicMeshData *)local_6c0.AllocatorInstance.Data,local_6c0.ArrayNum);
  if ((FLocalDynamicMeshData *)local_6c0.AllocatorInstance.Data != (FLocalDynamicMeshData *)0x0) {
    FMemory::Free(local_6c0.AllocatorInstance.Data);
  }
  return;
}

// GetLocalDynamicMeshData @ 14da95f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPVMeshBuilder::GetLocalDynamicMeshData
          (FManagedArrayCollection *param_1,FPVMeshBuilderParams *param_2,
          TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *param_3)

{
  float *pfVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FManagedArrayCollection *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  undefined1 auStackY_a08 [32];
  <lambda_1> local_9c8 [8];
  FManagedArrayCollection *local_9c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_9b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_9a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_998;
  FScriptContainerElement *local_988;
  int local_980;
  int local_97c;
  undefined8 local_978;
  TArrayView<std::nullptr_t,int> local_970;
  code *local_960;
  FBranchFacade **local_958;
  FBranchFacade *local_950;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_948;
  FPlantFacade *local_940;
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *local_938;
  FScriptContainerElement **local_930;
  FPVMeshBuilderParams *local_928;
  TArray<int,TSizedDefaultAllocator<32>_> *local_920;
  FManagedArrayCollection *local_918;
  FBranchFacade local_908;
  FPlantFacade local_618;
  FPointFacade local_528;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  local_9c0 = param_1;
  PV::Facades::FBranchFacade::FBranchFacade(&local_908,param_1);
  PV::Facades::FPointFacade::FPointFacade(&local_528,param_1);
  PV::Facades::FPlantFacade::FPlantFacade(&local_618,param_1);
  if (((((local_908.Parents.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        (local_908.Children.ConstAttributeArray ==
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) ||
       (local_908.BranchPoints.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) ||
      ((local_908.BranchNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0 ||
       (local_908.BranchSourceBudNumber.ConstAttributeArray == (TManagedArray<int> *)0x0)))) ||
     ((local_908.BranchHierarchyNumber.ConstAttributeArray == (TManagedArray<int> *)0x0 ||
      ((local_908.BranchParentNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0 ||
       (local_908.PlantNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0)))))) {
    if (2 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    }
  }
  else {
    if (local_528.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pfVar10 = *(float **)&(local_528.PointScale.ConstAttributeArray)->field_0x10;
    pfVar12 = (float *)0x0;
    iVar7 = *(int *)&(local_528.PointScale.ConstAttributeArray)->field_0x18;
    pfVar1 = pfVar10 + iVar7;
    while( true ) {
      if (*(int *)&(local_528.PointScale.ConstAttributeArray)->field_0x18 != iVar7) {
        local_9c8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_9c8);
      }
      if (pfVar10 == pfVar1) break;
      if ((pfVar12 == (float *)0x0) || (*pfVar12 <= *pfVar10 && *pfVar10 != *pfVar12)) {
        pfVar12 = pfVar10;
      }
      pfVar10 = pfVar10 + 1;
    }
    fVar2 = *pfVar12;
    CollectHardPoints(&local_a8,&local_908,&local_528,&local_618);
    local_9a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9a8.ArrayNum = 0;
    local_9a8.ArrayMax = 0;
    local_9b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9b8.ArrayNum = 0;
    local_9b8.ArrayMax = 0;
    ComputePointGradients(&local_f8,&local_528,param_2,&local_a8,fVar2,&local_9a8,&local_9b8);
    PerformPathSimplification(&local_908,&local_528,param_2,fVar2,&local_a8,&local_9b8,&local_f8);
    pFVar5 = local_9c0;
    if (0 < (int)(local_f8.Elements._8_4_ - local_f8.Elements._52_4_)) {
      UpdateFoliagePivotPoints(&local_f8,local_9c0);
    }
    if (local_528.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
    {
      iVar7 = FManagedArrayCollection::NumElements
                        (local_528.Positions.ConstCollection,local_528.Positions.Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)local_528.Positions.ConstAttributeArray + 0x60))();
    }
    ComputeMeshDivisions(&local_998,&local_908,param_2,&local_9a8,iVar7);
    if (local_908.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      uVar8 = FManagedArrayCollection::NumElements
                        (local_908.Parents.ConstCollection,local_908.Parents.Group);
    }
    else {
      uVar8 = (**(code **)(*(longlong *)local_908.Parents.ConstAttributeArray + 0x60))();
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 < (int)uVar8) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,uVar8 - iVar7,&param_3->AllocatorInstance,&param_3->ArrayNum,
                         &param_3->ArrayMax);
      DefaultConstructItems<FLocalDynamicMeshData,int>
                ((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x28,uVar8 - iVar7);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar7) {
        uVar11 = iVar7 - uVar8;
        if ((int)(uVar11 | uVar8) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_3,uVar8,uVar11);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
        }
      }
    }
    iVar7 = (param_2->DisplacementValues).ArrayNum;
    pFVar3 = (param_2->DisplacementValues).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_97c = local_998.ArrayMax;
    local_948 = &local_f8;
    local_940 = &local_618;
    local_930 = &local_988;
    local_920 = &local_998;
    local_978 = 0;
    local_918 = pFVar5;
    local_988 = pFVar3;
    local_980 = iVar7;
    local_950 = &local_908;
    local_938 = param_3;
    local_928 = param_2;
    if (local_908.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        (local_908.Parents.ConstCollection,local_908.Parents.Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)local_908.Parents.ConstAttributeArray + 0x60))();
    }
    local_970.DataPtr = (void **)0x0;
    local_970.ArrayNum = 0;
    local_960 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPVMeshBuilder::GetLocalDynamicMeshData'::__l2::<lambda_1>,void,int>
                ::Call;
    local_958 = &local_950;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar7,1,(TFunctionRef<void___cdecl(int)> *)&local_960,
               local_9c8[0],None,&local_970);
    if (local_998.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.AllocatorInstance.Data);
    }
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
    if (local_9b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.AllocatorInstance.Data);
    }
    if (local_9a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.AllocatorInstance.Data);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
  }
  return;
}

// GetMaxDeltaBetweenHardPoints @ 14da965c0

float __cdecl
FPVMeshBuilder::GetMaxDeltaBetweenHardPoints
          (FBranchFacade *param_1,FPointFacade *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  TVector<float> *pTVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  uint local_e8;
  int local_e4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  TVector<double>_u_0 local_d8;
  longlong local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [4];
  
  iVar19 = 0;
  fVar22 = 0.0;
  do {
    pTVar4 = (param_1->Parents).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if (iVar9 <= iVar19) {
      return fVar22;
    }
    pTVar14 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar19);
    local_e0 = pTVar14;
    if (1 < pTVar14->ArrayNum) {
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
      local_e8 = 1;
      *(undefined4 *)(local_f8.Data + (longlong)iVar10 * 4) = 0;
      iVar9 = pTVar14->ArrayNum;
      local_f0._0_4_ = iVar10 + 1;
      if (1 < iVar9 + -1) {
        do {
          uVar17 = local_e8;
          uVar11 = 0;
          if ((int)local_e8 < iVar9) {
            uVar11 = ~local_e8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          uVar17 = *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar17 * 4);
          if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
            FVar5 = (param_3->Hash).SecondaryData;
            FVar16 = (ForElementType<FSetElementId>)&param_3->Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = FVar5;
            }
            iVar9 = *(int *)((longlong)FVar16 + (ulonglong)(param_3->HashSize - 1U & uVar17) * 4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0xc) == uVar17) {
                  if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
                      ((FScriptContainerElement *)&local_e8 <
                       local_f8.Data + (longlong)local_f0._4_4_ * 4)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    fVar22 = (float)(*pcVar6)();
                    return fVar22;
                  }
                  if ((int)local_f0 == local_f0._4_4_) {
                    local_f0._0_4_ =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
                  }
                  *(uint *)(local_f8.Data + (longlong)(int)local_f0 * 4) = local_e8;
                  local_f0._0_4_ = (int)local_f0 + 1;
                  break;
                }
                iVar9 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar9 * 0xc);
              } while (iVar9 != -1);
            }
          }
          iVar9 = pTVar14->ArrayNum;
          local_e8 = local_e8 + 1;
        } while ((int)local_e8 < iVar9 + -1);
      }
      local_e4 = iVar9 + -1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
          ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)local_f0._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        fVar22 = (float)(*pcVar6)();
        return fVar22;
      }
      iVar9 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
      *(int *)(local_f8.Data + (longlong)iVar9 * 4) = local_e4;
      if (0 < iVar9) {
        lVar20 = 0;
        uVar17 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar17 < (int)local_f0) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          uVar11 = *(uint *)(local_f8.Data + lVar20);
          uVar12 = 0;
          if ((int)uVar11 < pTVar14->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          uVar12 = uVar17 + 1;
          iVar9 = *(int *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
          uVar11 = 0;
          if ((int)uVar12 < (int)local_f0) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          local_c0 = lVar20 + 4;
          uVar11 = *(uint *)(local_f8.Data + local_c0);
          uVar13 = 0;
          if ((int)uVar11 < local_e0->ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          iVar10 = *(int *)((local_e0->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
          pTVar15 = PV::Facades::FPointFacade::GetPosition(param_2,iVar9);
          local_d8._s_0.Z = (double)(pTVar15->field0_0x0)._s_0.Z;
          local_d8._s_0.Y = (double)(pTVar15->field0_0x0)._s_0.Y;
          local_d8._s_0.X = (double)(pTVar15->field0_0x0)._s_0.X;
          pTVar15 = PV::Facades::FPointFacade::GetPosition(param_2,iVar10);
          fVar1 = (pTVar15->field0_0x0)._s_0.X;
          fVar2 = (pTVar15->field0_0x0)._s_0.Y;
          fVar3 = (pTVar15->field0_0x0)._s_0.Z;
          uVar11 = 0;
          if ((int)uVar17 < (int)local_f0) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            fVar22 = (float)(*pcVar6)();
            return fVar22;
          }
          lVar7 = local_c0;
          pTVar14 = local_e0;
          uVar18 = (ulonglong)*(int *)(local_f8.Data + lVar20);
          lVar20 = uVar18 * 4;
          while( true ) {
            uVar17 = 0;
            if ((int)uVar12 < (int)local_f0) {
              uVar17 = ~uVar12 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              fVar22 = (float)(*pcVar6)();
              return fVar22;
            }
            uVar17 = (uint)uVar18;
            if (*(int *)(local_f8.Data + lVar7) <= (int)uVar17) break;
            uVar11 = 0;
            if ((int)uVar17 < pTVar14->ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              fVar22 = (float)(*pcVar6)();
              return fVar22;
            }
            pTVar15 = PV::Facades::FPointFacade::GetPosition
                                (param_2,*(int *)((pTVar14->AllocatorInstance).Data + lVar20));
            local_a0[0]._0_8_ = (undefined8)(pTVar15->field0_0x0)._s_0.X;
            local_a0[0]._8_8_ = (undefined8)(pTVar15->field0_0x0)._s_0.Y;
            local_b8._s_0.X = (double)fVar1 - local_d8._s_0.X;
            local_b8._s_0.Y = (double)fVar2 - local_d8._s_0.Y;
            local_a0[0]._16_8_ = (undefined8)(pTVar15->field0_0x0)._s_0.Z;
            local_b8._s_0.Z = (double)fVar3 - local_d8._s_0.Z;
            fVar21 = FMath::PointDistToLine
                               ((TVector<double> *)&local_a0[0]._s_0,
                                (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_d8._s_0)
            ;
            if (fVar21 <= fVar22) {
              fVar21 = fVar22;
            }
            fVar22 = fVar21;
            uVar18 = (ulonglong)(uVar17 + 1);
            lVar20 = lVar20 + 4;
          }
          lVar20 = lVar7;
          uVar17 = uVar12;
        } while ((int)uVar12 < (int)local_f0 + -1);
      }
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    iVar19 = iVar19 + 1;
  } while( true );
}

// GetPointsIndicesToFoliageIndicesMap @ 14da98770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __cdecl FPVMeshBuilder::GetPointsIndicesToFoliageIndicesMap
                    (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     *__return_storage_ptr__,FManagedArrayCollection *param_1)

{
  int iVar1;
  code *pcVar2;
  FIdentityFunctor FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TVector<float> *pTVar9;
  FScriptContainerElement *pFVar10;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar11;
  uint *puVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar15;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar16;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar17;
  FIdentityFunctor local_res8 [8];
  int local_res18;
  uint local_res20 [2];
  int local_1278;
  int local_1274;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1270;
  uint *local_1268;
  FScriptContainerElement *local_1260;
  FFoliageFacade local_1258;
  FBranchFacade local_fd8;
  undefined8 local_ce8;
  float local_ce0;
  FPointFacade local_cd8;
  TVector<float>_u_0 local_8a8;
  FPointFacade local_898;
  FPointFacade local_468;
  
  local_468.URange.ConstAttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)0x14da98792;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  PV::Facades::FPointFacade::FPointFacade(&local_468,param_1);
  PV::Facades::FBranchFacade::FBranchFacade(&local_fd8,param_1);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_1258,param_1);
  FVar3 = local_res8[0];
  local_res18 = 0;
  pTVar15 = local_1258.FoliageIdsAttribute.ConstAttributeArray;
  pTVar16 = local_fd8.Parents.ConstAttributeArray;
  pTVar17 = local_fd8.BranchPoints.ConstAttributeArray;
  do {
    if (pTVar16 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        (local_fd8.Parents.ConstCollection,local_fd8.Parents.Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar16 + 0x60))(pTVar16);
    }
    if (iVar5 <= local_res18) {
      return __return_storage_ptr__;
    }
    if (((pTVar15 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        (local_res18 < 0)) ||
       (iVar5 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15), iVar5 <= local_res18)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      local_1270 = &::EmptyArray;
    }
    else {
      local_1270 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                             (&local_1258.FoliageIdsAttribute,local_res18);
    }
    if (((pTVar17 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        (local_res18 < 0)) ||
       (iVar5 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17), iVar5 <= local_res18)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar8 = &EmptyPoints;
    }
    else {
      pTVar8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&local_fd8.BranchPoints,local_res18);
    }
    if (pTVar8->ArrayNum != 0) {
      pFVar14 = (local_1270->AllocatorInstance).Data;
      iVar5 = local_1270->ArrayNum;
      local_1260 = pFVar14 + (longlong)iVar5 * 4;
      while( true ) {
        pFVar10 = local_1260;
        if (local_1270->ArrayNum != iVar5) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        pTVar15 = local_1258.FoliageIdsAttribute.ConstAttributeArray;
        pTVar16 = local_fd8.Parents.ConstAttributeArray;
        pTVar17 = local_fd8.BranchPoints.ConstAttributeArray;
        if (pFVar14 == pFVar10) break;
        iVar1 = *(int *)pFVar14;
        local_1278 = iVar1;
        if (((local_1258.PivotPointsAttribute.ConstAttributeArray ==
              (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar1 < 0)) ||
           (iVar6 = (**(code **)(*(longlong *)local_1258.PivotPointsAttribute.ConstAttributeArray +
                                0x60))(local_1258.PivotPointsAttribute.ConstAttributeArray),
           iVar6 <= iVar1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            DefaultPivotPoint.field0_0x0._0_8_ =
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            DefaultPivotPoint.field0_0x0._s_0.Z =
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            _Init_thread_footer(&::_TSS0);
          }
          pTVar9 = &DefaultPivotPoint;
        }
        else {
          pTVar9 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                             (&local_1258.PivotPointsAttribute,iVar1);
        }
        local_ce8 = *(undefined8 *)&pTVar9->field0_0x0;
        local_ce0 = (pTVar9->field0_0x0)._s_0.Z;
        PV::Facades::FPointFacade::FPointFacade(&local_cd8,&local_468);
        local_8a8._0_8_ = local_ce8;
        local_8a8._s_0.Z = local_ce0;
        PV::Facades::FPointFacade::FPointFacade(&local_898,&local_cd8);
        pFVar10 = (FScriptContainerElement *)
                  AlgoImpl::
                  MinElementBy<TArray<int,TSizedDefaultAllocator<32>_>_const_,FIdentityFunctor,_FPVMeshBuilder::GetPointsIndicesToFoliageIndicesMap_::__l11::<lambda_1>_>
                            (pTVar8,FVar3,(<lambda_1> *)&local_8a8._s_0);
        if (pFVar10 == (FScriptContainerElement *)0x0) {
          if ((pTVar8->ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                       *)(*pcVar2)();
            return pTVar11;
          }
          pFVar10 = (pTVar8->AllocatorInstance).Data;
        }
        local_res20[0] = *(uint *)pFVar10;
        if (*(int *)&__return_storage_ptr__->field_0x8 !=
            *(int *)&__return_storage_ptr__->field_0x34) {
          puVar13 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar7 = *(uint *)(puVar13 +
                           (ulonglong)
                           (*(int *)&__return_storage_ptr__->field_0x48 - 1U & local_res20[0]) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)__return_storage_ptr__);
              if (*puVar12 == local_res20[0]) {
                if (puVar12 != (uint *)0x0) goto LAB_14da98b60;
                break;
              }
              uVar7 = puVar12[6];
            } while (uVar7 != 0xffffffff);
          }
        }
        local_1268 = local_res20;
        TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,(uint)&local_1274,
                   (TKeyInitializer<int_const_&> *)(ulonglong)local_res20[0],(bool *)&local_1268);
        puVar12 = (uint *)((longlong)local_1274 * 0x20 + *(longlong *)__return_storage_ptr__);
LAB_14da98b60:
        if (((*(int **)(puVar12 + 2) <= &local_1278) &&
            (&local_1278 < *(int **)(puVar12 + 2) + (int)puVar12[5])) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     *)(*pcVar2)();
          return pTVar11;
        }
        uVar7 = puVar12[4];
        if (uVar7 == puVar12[5]) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(puVar12 + 2),(int *)(puVar12 + 5));
        }
        puVar12[4] = uVar7 + 1;
        pFVar14 = pFVar14 + 4;
        *(int *)(((ForAnyElementType *)(puVar12 + 2))->Data + (longlong)(int)uVar7 * 4) = local_1278
        ;
      }
    }
    local_res18 = local_res18 + 1;
  } while( true );
}

// GetProfileMultiplier @ 14da99eb0

float __cdecl
FPVMeshBuilder::GetProfileMultiplier
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    return __real_3f800000;
  }
  fVar9 = param_2 * __real_42c80000;
  uVar7 = iVar2 - 1;
  uVar6 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
  uVar4 = uVar7;
  if ((int)uVar6 < (int)uVar7) {
    uVar4 = uVar6;
  }
  uVar6 = -((int)ROUND(__real_bf000000 - (fVar9 + fVar9)) >> 1);
  if ((int)uVar6 < (int)uVar7) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if ((int)uVar4 < iVar2) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    fVar9 = (float)(*pcVar3)();
    return fVar9;
  }
  fVar1 = *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    fVar9 = (float)(*pcVar3)();
    return fVar9;
  }
  fVar8 = (float)(int)uVar7 - (float)(int)uVar4;
  if (__real_322bcc77 < (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar8 = (fVar9 - (float)(int)uVar4) / fVar8;
  }
  else {
    fVar8 = __real_3f800000;
    if (fVar9 < (float)(int)uVar7) {
      fVar8 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  return fVar8 * (*(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) - fVar1)
         + fVar1;
}

// PerformPathSimplification @ 14da9e540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FPVMeshBuilder::PerformPathSimplification
          (FBranchFacade *param_1,FPointFacade *param_2,FPVMeshBuilderParams *param_3,float param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_7)

{
  FScriptContainerElement *pFVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector<float> *pTVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 extraout_var [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  uint local_188 [2];
  ForAnyElementType local_180;
  undefined8 local_178;
  int local_170;
  undefined8 local_168;
  float local_160;
  int local_158;
  float local_154;
  uint local_150;
  int local_14c;
  uint local_148 [2];
  uint local_140 [2];
  longlong local_138;
  TVector<double>_u_0 local_128;
  int local_110;
  int local_10c;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [7];
  
  iVar24 = param_3->Accuracy;
  fVar30 = (param_3->SegmentReduction * param_3->SegmentReduction) / (float)iVar24;
  local_158 = iVar24;
  local_154 = fVar30;
  fVar25 = GetMaxDeltaBetweenHardPoints(param_1,param_2,param_5);
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  iVar10 = 0;
  fVar31 = __real_3c23d70a;
  do {
    uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    pTVar2 = (param_1->Parents).ConstAttributeArray;
    local_170 = iVar10;
    if (pTVar2 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_1->Parents).ConstCollection,(param_1->Parents).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    if (iVar9 <= iVar10) {
      return;
    }
    pTVar12 = PV::Facades::FBranchFacade::GetPoints(param_1,iVar10);
    uVar21 = 0;
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    pFVar1 = pFVar16 + (longlong)pTVar12->ArrayNum * 4;
    iVar10 = local_14c;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 4) {
      local_14c = iVar10;
      if (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34) {
        FVar3 = (param_7->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&param_7->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar3;
        }
        iVar10 = *(int *)((longlong)FVar15 +
                         (ulonglong)(param_7->HashSize - 1U & *(uint *)pFVar16) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar10 * 0xc) ==
                *(uint *)pFVar16) goto LAB_14da9e764;
            iVar10 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      iVar10 = (int)uVar21;
      if ((local_198.AllocatorInstance.Data <= pFVar16) &&
         (local_198.ArrayMax = (int)((ulonglong)local_198._8_8_ >> 0x20),
         lVar14 = (longlong)local_198.ArrayMax,
         pFVar16 < local_198.AllocatorInstance.Data + lVar14 * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_198.ArrayNum;
      }
      if (iVar10 == local_198.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_198.AllocatorInstance,&local_198.ArrayMax);
      }
      local_198.ArrayNum = iVar10 + 1U;
      *(uint *)(local_198.AllocatorInstance.Data + (longlong)iVar10 * 4) = *(uint *)pFVar16;
      uVar21 = (ulonglong)(iVar10 + 1U);
LAB_14da9e764:
      iVar10 = local_14c;
    }
    local_14c = 0;
    if (0 < iVar24) {
      do {
        local_14c = local_14c + 1;
        uVar19 = 1;
        lVar14 = 1;
        fVar31 = (float)local_14c * fVar30;
        if (1 < (int)uVar21 + -1) {
          fVar32 = (float)((uint)fVar25 & uVar20);
          do {
            local_150 = uVar19 - 1;
            lVar17 = lVar14 + -1;
            uVar20 = 0;
            if ((int)local_150 < (int)uVar21) {
              uVar20 = ~local_150 >> 0x1f;
            }
            iVar24 = (int)uVar21;
            local_138 = lVar17;
            if (uVar20 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar24 = local_198.ArrayNum;
            }
            iVar10 = *(int *)(local_198.AllocatorInstance.Data + lVar17 * 4);
            uVar20 = 0;
            if ((int)uVar19 < iVar24) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar24 = local_198.ArrayNum;
            }
            local_188[0] = *(uint *)(local_198.AllocatorInstance.Data + lVar14 * 4);
            uVar20 = 0;
            if ((int)(uVar19 + 1) < iVar24) {
              uVar20 = ~(uVar19 + 1) >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar24 = *(int *)(local_198.AllocatorInstance.Data + lVar14 * 4 + 4);
            pTVar13 = PV::Facades::FPointFacade::GetPosition(param_2,iVar10);
            local_128._s_0.Z = (double)(pTVar13->field0_0x0)._s_0.Z;
            local_128._s_0.Y = (double)(pTVar13->field0_0x0)._s_0.Y;
            local_128._s_0.X = (double)(pTVar13->field0_0x0)._s_0.X;
            pTVar13 = PV::Facades::FPointFacade::GetPosition(param_2,local_188[0]);
            local_f0[0]._16_8_ = (undefined8)(pTVar13->field0_0x0)._s_0.Z;
            local_f0[0]._8_8_ = (undefined8)(pTVar13->field0_0x0)._s_0.Y;
            local_f0[0]._0_8_ = (undefined8)(pTVar13->field0_0x0)._s_0.X;
            pTVar13 = PV::Facades::FPointFacade::GetPosition(param_2,iVar24);
            lVar17 = (longlong)(int)local_188[0];
            fVar30 = (pTVar13->field0_0x0)._s_0.X;
            fVar26 = (pTVar13->field0_0x0)._s_0.Y;
            fVar28 = (pTVar13->field0_0x0)._s_0.Z;
            uVar20 = 0;
            if ((int)local_188[0] < param_6->ArrayNum) {
              uVar20 = ~local_188[0] >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_108._s_0.X = (double)fVar30 - local_128._s_0.X;
            local_108._s_0.Y = (double)fVar26 - local_128._s_0.Y;
            local_108._s_0.Z = (double)fVar28 - local_128._s_0.Z;
            fVar30 = *(float *)((param_6->AllocatorInstance).Data + lVar17 * 4);
            fVar26 = FMath::PointDistToLine
                               ((TVector<double> *)&local_f0[0]._s_0,
                                (TVector<double> *)&local_108._s_0,
                                (TVector<double> *)&local_128._s_0);
            if (fVar6 < fVar32) {
              auVar27._0_4_ = fVar26 / fVar25;
              auVar27._4_12_ = extraout_var;
            }
            else if (fVar26 < fVar25) {
              auVar27 = ZEXT816(0);
            }
            else {
              auVar27 = ZEXT416((uint)fVar7);
            }
            if (fVar7 <= auVar27._0_4_) {
              auVar27._0_4_ = fVar7;
            }
            if (auVar27._0_4_ <= 0.0) {
              auVar5._12_4_ = 0;
              auVar5._0_12_ = auVar27._4_12_;
              auVar27 = auVar5 << 0x20;
            }
            if (fVar31 <= auVar27._0_4_ + fVar30) {
LAB_14da9eb97:
              uVar21 = local_198._8_8_ & 0xffffffff;
            }
            else {
              if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34)
              {
                FVar3 = (param_5->Hash).SecondaryData;
                FVar15 = (ForElementType<FSetElementId>)&param_5->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = FVar3;
                }
                iVar24 = *(int *)((longlong)FVar15 +
                                 (ulonglong)(param_5->HashSize - 1U & local_188[0]) * 4);
                if (iVar24 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&param_5->Elements + (longlong)iVar24 * 0xc) ==
                        local_188[0]) goto LAB_14da9eb97;
                    iVar24 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar24 * 0xc);
                  } while (iVar24 != -1);
                }
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (param_7,&local_110,(bool *)local_188);
              if (((local_198.AllocatorInstance.Data <= (FScriptContainerElement *)local_188) &&
                  ((FScriptContainerElement *)local_188 <
                   local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 4)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar22.Data = local_198.AllocatorInstance.Data;
              uVar21 = (ulonglong)local_198.ArrayNum;
              lVar14 = local_138;
              uVar19 = local_150;
              if (local_198.ArrayNum != 0) {
                uVar23 = 0;
                lVar14 = 0;
                bVar8 = *(uint *)local_198.AllocatorInstance.Data != local_188[0];
                uVar20 = local_188[0];
                uVar19 = 0;
                do {
                  uVar18 = uVar19;
                  do {
                    lVar14 = lVar14 + 1;
                    uVar18 = uVar18 + 1;
                    if ((longlong)uVar21 <= lVar14) break;
                  } while (bVar8 == (*(uint *)(FVar22.Data + lVar14 * 4) != uVar20));
                  if (bVar8 != false) {
                    if (uVar23 != uVar19) {
                      memmove(FVar22.Data + (longlong)(int)uVar23 * 4,
                              FVar22.Data + (longlong)(int)uVar19 * 4,
                              (longlong)(int)(uVar18 - uVar19) << 2);
                      uVar20 = local_188[0];
                    }
                    uVar23 = uVar23 + (uVar18 - uVar19);
                  }
                  bVar8 = (bool)(bVar8 ^ 1);
                  uVar19 = uVar18;
                } while (lVar14 < (longlong)uVar21);
                uVar21 = (ulonglong)uVar23;
                local_198.ArrayNum = uVar23;
                lVar14 = local_138;
                uVar19 = local_150;
              }
            }
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 1;
            fVar30 = local_154;
            iVar24 = local_158;
            uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          } while ((int)uVar19 < (int)uVar21 + -1);
        }
        fVar31 = __real_3c23d70a;
        iVar10 = local_14c;
      } while (local_14c < iVar24);
    }
    local_14c = iVar10;
    pTVar12 = PV::Facades::FBranchFacade::GetPoints(param_1,local_170);
    if (&local_198 == pTVar12) {
LAB_14da9ec4c:
      iVar10 = local_198.ArrayNum;
    }
    else {
      iVar10 = pTVar12->ArrayNum;
      pFVar1 = (pTVar12->AllocatorInstance).Data;
      local_198.ArrayNum = iVar10;
      if ((iVar10 != 0) || (local_198.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar10,local_198.ArrayMax,&local_198.AllocatorInstance,iVar10,
                   &local_198.ArrayMax);
        if (iVar10 != 0) {
          memcpy(local_198.AllocatorInstance.Data,pFVar1,(longlong)iVar10 << 2);
        }
        goto LAB_14da9ec4c;
      }
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      iVar10 = 0;
    }
    if (iVar10 == 0) {
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      return;
    }
    if ((iVar10 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar13 = PV::Facades::FPointFacade::GetPosition
                        (param_2,*(uint *)local_198.AllocatorInstance.Data);
    uVar20 = 0;
    fVar30 = 0.0;
    local_168 = *(longlong *)&pTVar13->field0_0x0;
    if (0 < local_198.ArrayNum) {
      lVar14 = 0;
      fVar32 = (pTVar13->field0_0x0)._s_0.Z;
      do {
        uVar19 = 0;
        if ((int)uVar20 < local_198.ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = *(uint *)(local_198.AllocatorInstance.Data + lVar14);
        pTVar13 = PV::Facades::FPointFacade::GetPosition(param_2,uVar19);
        iVar24 = *(int *)&(param_7->Elements).field_0x8;
        lVar17 = *(longlong *)&pTVar13->field0_0x0;
        fVar26 = (pTVar13->field0_0x0)._s_0.Z;
        fVar29 = (float)((ulonglong)lVar17 >> 0x20) - local_168._4_4_;
        fVar28 = (float)lVar17 - (float)local_168;
        fVar32 = fVar26 - fVar32;
        iVar10 = *(int *)&(param_7->Elements).field_0x34;
        if (iVar24 != iVar10) {
          FVar3 = (param_7->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&param_7->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar3;
          }
          iVar9 = *(int *)((longlong)FVar15 + (ulonglong)(param_7->HashSize - 1U & uVar19) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar9 * 0xc) == uVar19) {
                fVar30 = fVar30 + SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar32 * fVar32) * fVar31
                ;
                goto LAB_14da9edcc;
              }
              iVar9 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar9 * 0xc);
            } while (iVar9 != -1);
          }
        }
        fVar30 = 0.0;
LAB_14da9edcc:
        local_138 = lVar17;
        if (param_3->LongestSegmentLength <= fVar30 && fVar30 != param_3->LongestSegmentLength) {
          local_148[0] = uVar19;
          if (iVar24 != iVar10) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (param_7,uVar19,(int *)local_148);
          }
          fVar30 = 0.0;
        }
        uVar20 = uVar20 + 1;
        lVar14 = lVar14 + 4;
        iVar24 = local_158;
        fVar32 = fVar26;
        local_168 = lVar17;
      } while ((int)uVar20 < local_198.ArrayNum);
    }
    iVar10 = local_170;
    pTVar12 = PV::Facades::FBranchFacade::GetPoints(param_1,local_170);
    FVar22.Data = (FScriptContainerElement *)0x0;
    iVar9 = 0;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    pFVar1 = pFVar16 + (longlong)pTVar12->ArrayNum * 4;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 4) {
      if (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34) {
        FVar3 = (param_7->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&param_7->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar3;
        }
        iVar11 = *(int *)((longlong)FVar15 +
                         (ulonglong)(param_7->HashSize - 1U & *(uint *)pFVar16) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar11 * 0xc) ==
                *(uint *)pFVar16) goto LAB_14da9ef4a;
            iVar11 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = iVar9;
      if ((FVar22.Data <= pFVar16) &&
         (local_178._4_4_ = (int)((ulonglong)local_178 >> 0x20), lVar14 = (longlong)local_178._4_4_,
         pFVar16 < FVar22.Data + lVar14 * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar22.Data = local_180.Data;
        iVar11 = (int)local_178;
      }
      if (iVar11 == local_178._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_180,(int *)((longlong)&local_178 + 4));
        FVar22.Data = local_180.Data;
      }
      iVar9 = iVar11 + 1;
      local_178 = CONCAT44(local_178._4_4_,iVar9);
      *(uint *)(FVar22.Data + (longlong)iVar11 * 4) = *(uint *)pFVar16;
      FVar22.Data = local_180.Data;
LAB_14da9ef4a:
    }
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
      FVar22.Data = local_180.Data;
      iVar9 = (int)local_178;
    }
    uVar21 = (ulonglong)local_178 >> 0x20;
    local_178 = 0;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayMax = (int)uVar21;
    local_198.ArrayNum = iVar9;
    local_198.AllocatorInstance.Data = FVar22.Data;
    if ((iVar9 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar13 = PV::Facades::FPointFacade::GetPosition
                        (param_2,*(uint *)local_198.AllocatorInstance.Data);
    uVar20 = 0;
    local_168 = *(longlong *)&pTVar13->field0_0x0;
    fVar30 = (pTVar13->field0_0x0)._s_0.Z;
    local_160 = fVar30;
    if (0 < local_198.ArrayNum) {
      lVar14 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar20 < local_198.ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = *(uint *)(local_198.AllocatorInstance.Data + lVar14);
        local_140[0] = uVar19;
        pTVar13 = PV::Facades::FPointFacade::GetPosition(param_2,uVar19);
        local_138 = *(longlong *)&pTVar13->field0_0x0;
        fVar28 = (float)((ulonglong)local_138 >> 0x20) - local_168._4_4_;
        fVar26 = (float)local_138 - (float)local_168;
        fVar32 = (pTVar13->field0_0x0)._s_0.Z - fVar30;
        if (param_3->ShortestSegmentLength <=
            SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar32 * fVar32) * fVar31) {
LAB_14da9f122:
          local_168 = *(longlong *)&pTVar13->field0_0x0;
          fVar30 = (pTVar13->field0_0x0)._s_0.Z;
        }
        else {
          if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34) {
            FVar3 = (param_5->Hash).SecondaryData;
            FVar15 = (ForElementType<FSetElementId>)&param_5->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar15 = FVar3;
            }
            iVar10 = *(int *)((longlong)FVar15 + (ulonglong)(param_5->HashSize - 1U & uVar19) * 4);
            if (iVar10 != -1) {
              do {
                if (*(uint *)(*(longlong *)&param_5->Elements + (longlong)iVar10 * 0xc) == uVar19)
                goto LAB_14da9f122;
                iVar10 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar10 * 0xc);
              } while (iVar10 != -1);
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (param_7,&local_10c,(bool *)local_140);
        }
        uVar20 = uVar20 + 1;
        lVar14 = lVar14 + 4;
        iVar10 = local_170;
      } while ((int)uVar20 < local_198.ArrayNum);
    }
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    iVar10 = iVar10 + 1;
    fVar30 = local_154;
  } while( true );
}

// SetNjordPixelID @ 14daa7e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPVMeshBuilder::SetNjordPixelID(FGeometryCollection *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  TManagedArray<float> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  int *piVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  TKeyInitializer<int_const_&> *pTVar20;
  uint uVar21;
  float fVar22;
  undefined1 auStack_5c8 [32];
  int *local_5a8;
  int *local_5a0;
  longlong local_598;
  longlong local_590;
  undefined8 local_588;
  undefined1 local_578;
  undefined1 local_577 [3];
  int local_574;
  uint local_570;
  int local_56c;
  int local_568 [2];
  TManagedArray<float> *local_560;
  int local_558;
  int local_554;
  int *local_550;
  longlong *local_548;
  uint uStack_540;
  uint uStack_53c;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined4 uStack_530;
  uint uStack_52c;
  uint local_528;
  undefined4 uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  longlong *local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_510;
  undefined8 uStack_4f0;
  undefined4 local_4cc;
  FPointFacade local_4c8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  PV::Facades::FPointFacade::FPointFacade(&local_4c8,(FManagedArrayCollection *)param_1);
  local_560 = local_4c8.NjordPixelIndex.AttributeArray;
  if (((local_4c8.NjordPixelIndex.AttributeArray == (TManagedArray<float> *)0x0) ||
      (local_4c8.NjordPixelIndex.Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (local_4c8.NjordPixelIndex.AttributeArray)->field_0x8 = 1;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_574 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  while( true ) {
    if (local_4c8.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
    {
      iVar11 = FManagedArrayCollection::NumElements
                         (local_4c8.Positions.ConstCollection,local_4c8.Positions.Group);
    }
    else {
      iVar11 = (**(code **)(*(longlong *)local_4c8.Positions.ConstAttributeArray + 0x60))
                         (local_4c8.Positions.ConstAttributeArray);
    }
    uVar21 = local_70;
    iVar2 = local_574;
    if (iVar11 <= local_574) break;
    if (((local_4c8.BudNumber.ConstAttributeArray == (TManagedArray<int> *)0x0) || (local_574 < 0))
       || (iVar11 = (**(code **)(*(longlong *)local_4c8.BudNumber.ConstAttributeArray + 0x60))
                              (local_4c8.BudNumber.ConstAttributeArray), iVar11 <= iVar2)) {
      pTVar20 = (TKeyInitializer<int_const_&> *)&DAT_ffffffff;
    }
    else {
      puVar12 = (uint *)TManagedArrayAccessor<int>::operator[](&local_4c8.BudNumber,iVar2);
      pTVar20 = (TKeyInitializer<int_const_&> *)(ulonglong)*puVar12;
    }
    local_56c = (int)pTVar20;
    if (local_98._8_4_ != local_64) {
      FVar16 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_58;
      }
      iVar11 = *(int *)((longlong)FVar16 + ((ulonglong)(local_50 - 1) & (ulonglong)pTVar20) * 4);
      while (iVar11 != -1) {
        piVar14 = (int *)((longlong)iVar11 * 0x20 + local_98._0_8_);
        if (*piVar14 == local_56c) {
          if (piVar14 != (int *)0x0) goto LAB_14daa7fe3;
          break;
        }
        iVar11 = piVar14[6];
      }
    }
    local_550 = &local_56c;
    local_5a8 = (int *)0x0;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_568,pTVar20,(bool *)&local_550);
    piVar14 = (int *)((longlong)local_568[0] * 0x20 + local_98._0_8_);
LAB_14daa7fe3:
    piVar6 = *(int **)(piVar14 + 2);
    if ((piVar6 <= &local_574) && (&local_574 < piVar6 + piVar14[5])) {
      local_590 = (longlong)piVar14[4];
      local_588 = 4;
      local_5a8 = &local_574;
      local_5a0 = piVar6;
      local_598 = (longlong)piVar14[5];
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = piVar14[4];
    if (iVar11 == piVar14[5]) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(piVar14 + 2),piVar14 + 5);
    }
    piVar14[4] = iVar11 + 1;
    *(int *)(((ForAnyElementType *)(piVar14 + 2))->Data + (longlong)iVar11 * 4) = local_574;
    local_574 = local_574 + 1;
  }
  uStack_53c = 1;
  local_528 = 0;
  uStack_52c = local_528;
  if (local_70 != 0) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar18 = *puVar12;
    local_528 = 0;
    uVar19 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)(int)uVar19;
      local_528 = local_528 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_52c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14daa8121;
      uVar18 = (puVar12 + 1)[lVar15];
    }
    uStack_53c = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_53c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_558 = (int)lVar15;
    uStack_52c = (local_528 - 1) + local_558;
    if ((int)local_70 < (int)uStack_52c) {
      uStack_52c = local_70;
    }
  }
LAB_14daa8121:
  local_548 = (longlong *)local_98;
  uStack_524 = local_4cc;
  local_538 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_520 = local_98._8_4_ - local_64;
  uVar18 = local_70 & 0xffffffe0;
  uStack_530 = 0xffffffff;
  TStack_510.CurrentBitIndex = uStack_52c;
  TStack_510.UnvisitedBitMask = 0xffffffff;
  TStack_510._padding_ = CONCAT44(uStack_53c,uVar19);
  iVar11 = (int)local_70 >> 5;
  TStack_510._28_4_ = local_4cc;
  TStack_510.BaseBitIndex = local_528;
  uStack_4f0 = CONCAT44(uStack_51c,iStack_520);
  bVar13 = (byte)local_70;
  local_570 = local_70;
  uStack_540 = uVar19;
  local_518 = local_548;
  TStack_510.Array = local_538;
  if (((int)local_70 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar21 != local_70) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar19 = -1 << (bVar13 & 0x1f) & puVar12[iVar11];
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar11;
      uVar18 = uVar18 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) {
        local_570 = local_70;
        uVar21 = local_70;
        goto LAB_14daa8250;
      }
      uVar19 = (puVar12 + 1)[lVar15];
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_554 = (int)lVar15;
    uVar21 = local_554 + -1 + uVar18;
    local_570 = uVar21;
    if ((int)local_70 < (int)uVar21) {
      uVar21 = local_70;
      local_570 = local_70;
    }
  }
LAB_14daa8250:
  while( true ) {
    plVar9 = local_518;
    iVar11 = 0;
    if ((int)local_518[1] - *(int *)((longlong)local_518 + 0x34) != (int)uStack_4f0) {
      local_578 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_578);
    }
    pTVar8 = local_560;
    if (((TStack_510.CurrentBitIndex == uVar21) &&
        (TStack_510.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar9 == (longlong *)local_98)) break;
    piVar14 = (int *)((longlong)TStack_510.CurrentBitIndex * 0x20 + *plVar9);
    puVar17 = *(uint **)(piVar14 + 2);
    iVar2 = piVar14[4];
    puVar12 = puVar17 + iVar2;
    while( true ) {
      if (piVar14[4] != iVar2) {
        local_577[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_577);
      }
      if (puVar17 == puVar12) break;
      uVar19 = *puVar17;
      iVar3 = piVar14[4];
      iVar4 = *piVar14;
      iVar5 = *(int *)&pTVar8->field_0x18;
      fVar22 = (float)iVar11;
      uVar21 = 0;
      if ((int)uVar19 < iVar5) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_5a8 = (int *)(longlong)(int)uVar19, local_5a0 = (int *)(longlong)iVar5,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = iVar11 + 1;
      puVar17 = puVar17 + 1;
      *(float *)(*(longlong *)&pTVar8->field_0x10 + (longlong)(int)uVar19 * 4) =
           fVar22 / (float)iVar3 + (float)iVar4;
    }
    TStack_510.UnvisitedBitMask = TStack_510.UnvisitedBitMask & ~TStack_510._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_510);
    uVar21 = local_570;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// TriangulateRings @ 14daa9fb0

void __cdecl
FPVMeshBuilder::TriangulateRings
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          FLocalDynamicMeshData *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar4 = __real_3f000000;
  iVar9 = param_1->ArrayNum;
  if (iVar9 != 0) {
    iVar13 = param_2->ArrayNum;
    fVar19 = __real_3f800000;
    if (iVar9 < iVar13) {
      fVar19 = (float)iVar9 / (float)iVar13;
    }
    fVar18 = __real_3f800000;
    if (iVar13 < iVar9) {
      fVar18 = (float)iVar13 / (float)iVar9;
    }
    fVar17 = 0.0;
    fVar15 = 0.0;
    if ((int)ROUND(fVar19 + fVar19 + __real_3f000000) >> 1 <= iVar9) {
      do {
        fVar16 = fVar15 + fVar18;
        iVar13 = (int)ROUND(fVar16 + fVar16 + fVar4);
        iVar14 = iVar13 >> 1;
        if (param_2->ArrayNum < iVar14) {
          return;
        }
        iVar6 = (int)ROUND(fVar17 + fVar17 + fVar4);
        uVar10 = (uint)(CONCAT44(iVar6 >> 0x1f,iVar6 >> 1) % (longlong)iVar9);
        uVar7 = 0;
        if ((int)uVar10 < iVar9) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
        iVar6 = (int)ROUND(fVar15 + fVar15 + fVar4);
        uVar10 = (uint)(CONCAT44(iVar6 >> 0x1f,iVar6 >> 1) % (longlong)param_2->ArrayNum);
        uVar7 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar17 = fVar17 + fVar19;
        iVar6 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
        iVar8 = (int)ROUND(fVar17 + fVar17 + fVar4);
        uVar10 = (uint)(CONCAT44(iVar8 >> 0x1f,iVar8 >> 1) % (longlong)param_1->ArrayNum);
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
        uVar10 = (uint)(CONCAT44(iVar13 >> 0x1f,iVar14) % (longlong)param_2->ArrayNum);
        uVar7 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar13 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
        pTVar12 = &param_4->Triangles;
        if (iVar9 != iVar8) {
          iVar14 = (param_4->Triangles).ArrayNum;
          piVar1 = &(param_4->Triangles).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar12->AllocatorInstance,piVar1);
          }
          lVar11 = (longlong)iVar14;
          (param_4->Triangles).ArrayNum = iVar14 + 1;
          pFVar2 = (pTVar12->AllocatorInstance).Data;
          iVar14 = *param_3;
          *(int *)(pFVar2 + lVar11 * 0x10) = iVar9;
          *(int *)(pFVar2 + lVar11 * 0x10 + 4) = iVar6;
          *(int *)(pFVar2 + lVar11 * 0x10 + 8) = iVar8;
          *(int *)(pFVar2 + lVar11 * 0x10 + 0xc) = iVar14;
        }
        if (iVar6 != iVar13) {
          iVar9 = (param_4->Triangles).ArrayNum;
          piVar1 = &(param_4->Triangles).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&pTVar12->AllocatorInstance,piVar1);
            (param_4->Triangles).ArrayNum = iVar9;
          }
          lVar11 = (longlong)iVar9;
          (param_4->Triangles).ArrayNum = iVar9 + 1;
          pFVar2 = (pTVar12->AllocatorInstance).Data;
          iVar9 = *param_3;
          *(int *)(pFVar2 + lVar11 * 0x10) = iVar6;
          *(int *)(pFVar2 + lVar11 * 0x10 + 4) = iVar13;
          *(int *)(pFVar2 + lVar11 * 0x10 + 8) = iVar8;
          *(int *)(pFVar2 + lVar11 * 0x10 + 0xc) = iVar9;
        }
        *param_3 = *param_3 + 1;
        iVar9 = param_1->ArrayNum;
        fVar15 = fVar16;
      } while ((int)ROUND(fVar17 + fVar17 + fVar19 + fVar19 + fVar4) >> 1 <= iVar9);
    }
  }
  return;
}

// UpdateFoliagePivotPoints @ 14daabd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPVMeshBuilder::UpdateFoliagePivotPoints
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          FManagedArrayCollection *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FScriptContainerElement *_Src;
  ForElementType<FSetElementId> FVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  TManagedArray<float> *pTVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  float *pfVar24;
  TVector<float> *pTVar25;
  TVector<float> *pTVar26;
  TVector<float> *pTVar27;
  ForElementType<FSetElementId> FVar28;
  undefined1 *puVar29;
  FIdentityFunctor FVar30;
  uint *puVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  int *piVar35;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar36;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_f68 [32];
  FIdentityFunctor local_f28 [8];
  ForAnyElementType local_f20;
  int local_f18;
  int local_f14;
  uint local_f10;
  int local_f0c;
  longlong local_f08;
  TVector<float>_u_0 local_f00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_ef0;
  FFoliageFacade local_ed8;
  FBranchFacade local_c58;
  FPointFacade local_968;
  FPointFacade local_538;
  undefined1 local_108 [72];
  int local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_f68;
  local_ef0 = param_1;
  PV::Facades::FBranchFacade::FBranchFacade(&local_c58,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_968,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_ed8,param_2,0);
  GetPointsIndicesToFoliageIndicesMap
            ((TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)local_108,param_2);
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar13 = __real_3f800000;
  fVar12 = __real_322bcc77;
  iVar33 = 0;
  pTVar36 = local_c58.BranchPoints.ConstAttributeArray;
  pTVar37 = local_c58.Parents.ConstAttributeArray;
  FVar30 = local_f28[0];
  do {
    local_f0c = iVar33;
    if (pTVar37 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar18 = FManagedArrayCollection::NumElements
                         (local_c58.Parents.ConstCollection,local_c58.Parents.Group);
    }
    else {
      iVar18 = (**(code **)(*(longlong *)pTVar37 + 0x60))(pTVar37);
    }
    if (iVar18 <= iVar33) {
      local_c0 = 0;
      if ((undefined1 *)local_108._64_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_108._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_108);
      return;
    }
    if (((pTVar36 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar33 < 0)
        ) || (iVar18 = (**(code **)(*(longlong *)pTVar36 + 0x60))(pTVar36), iVar18 <= iVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &EmptyPoints;
    }
    else {
      pTVar23 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_c58.BranchPoints,iVar33);
    }
    if (pTVar23->ArrayNum != 0) {
      local_f20.Data = (FScriptContainerElement *)0x0;
      local_f18 = pTVar23->ArrayNum;
      lVar34 = (longlong)local_f18;
      _Src = (pTVar23->AllocatorInstance).Data;
      if (local_f18 == 0) {
        local_f14 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_f18,0,&local_f20,local_f18,&local_f14);
        memcpy(local_f20.Data,_Src,lVar34 << 2);
      }
      iVar33 = local_f18;
      FVar15.Data = local_f20.Data;
      PV::Facades::FPointFacade::FPointFacade(&local_538,&local_968);
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPVMeshBuilder::UpdateFoliagePivotPoints_::__l4::<lambda_1>_>_>
                ((int *)FVar15.Data,iVar33,FVar30,(<lambda_1> *)&local_538);
      local_f10 = 0;
      local_f08 = 0;
      iVar33 = local_f18;
      if (0 < local_f18) {
LAB_14daabf30:
        lVar34 = local_f08;
        uVar32 = local_f10;
        uVar19 = 0;
        if ((int)local_f10 < iVar33) {
          uVar19 = ~local_f10 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar33 = local_f18, bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar19 = *(uint *)(local_f20.Data + lVar34 * 4);
        if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
          FVar10 = (param_1->Hash).SecondaryData;
          FVar28 = (ForElementType<FSetElementId>)&param_1->Hash;
          if (FVar10 != (ForElementType<FSetElementId>)0x0) {
            FVar28 = FVar10;
          }
          iVar18 = *(int *)((longlong)FVar28 + (ulonglong)(param_1->HashSize - 1U & uVar19) * 4);
          if (iVar18 != -1) {
            do {
              if (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar18 * 0xc) == uVar19) {
                if (((0 < (int)uVar32) && ((int)uVar32 < iVar33 + -1)) &&
                   (local_108._8_4_ != local_108._52_4_)) {
                  puVar29 = local_108 + 0x38;
                  if ((undefined1 *)local_108._64_8_ != (undefined1 *)0x0) {
                    puVar29 = (undefined1 *)local_108._64_8_;
                  }
                  iVar18 = *(int *)(puVar29 + (ulonglong)(local_c0 - 1U & uVar19) * 4);
                  goto joined_r0x00014daac026;
                }
                break;
              }
              iVar18 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar18 * 0xc);
            } while (iVar18 != -1);
          }
        }
        goto LAB_14daac5e1;
      }
LAB_14daac60b:
      iVar33 = local_f0c;
      if (local_f20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f20.Data);
        iVar33 = local_f0c;
      }
    }
    iVar33 = iVar33 + 1;
  } while( true );
joined_r0x00014daac026:
  if (iVar18 == -1) goto LAB_14daac5e1;
  uVar21 = uVar32;
  if (*(uint *)((longlong)iVar18 * 0x20 + local_108._0_8_) == uVar19) goto joined_r0x00014daac059;
  iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + local_108._0_8_);
  goto joined_r0x00014daac026;
joined_r0x00014daac059:
  uVar21 = uVar21 - 1;
  lVar34 = lVar34 + -1;
  if ((int)uVar21 < 1) goto LAB_14daac114;
  uVar20 = 0;
  if ((int)uVar21 < iVar33) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar33 = local_f18, bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34)
  goto LAB_14daac114;
  FVar10 = (param_1->Hash).SecondaryData;
  FVar28 = (ForElementType<FSetElementId>)&param_1->Hash;
  if (FVar10 != (ForElementType<FSetElementId>)0x0) {
    FVar28 = FVar10;
  }
  iVar18 = *(int *)((longlong)FVar28 +
                   (ulonglong)(param_1->HashSize - 1U & *(uint *)(local_f20.Data + lVar34 * 4)) * 4)
  ;
  if (iVar18 == -1) goto LAB_14daac114;
  while (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar18 * 0xc) !=
         *(uint *)(local_f20.Data + lVar34 * 4)) {
    iVar18 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar18 * 0xc);
    if (iVar18 == -1) goto LAB_14daac114;
  }
  goto joined_r0x00014daac059;
LAB_14daac114:
  uVar20 = 0;
  if ((int)uVar21 < iVar33) {
    uVar20 = ~uVar21 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar33 = local_f18, bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar32 = uVar32 + 1;
  iVar18 = *(int *)(local_f20.Data + lVar34 * 4);
  lVar34 = local_f08 + 1;
  if ((int)uVar32 < iVar33 + -1) {
    while( true ) {
      uVar21 = 0;
      if ((int)uVar32 < iVar33) {
        uVar21 = ~uVar32 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar33 = local_f18, bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34) break;
      FVar10 = (param_1->Hash).SecondaryData;
      FVar28 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar10 != (ForElementType<FSetElementId>)0x0) {
        FVar28 = FVar10;
      }
      iVar22 = *(int *)((longlong)FVar28 +
                       (ulonglong)(param_1->HashSize - 1U & *(uint *)(local_f20.Data + lVar34 * 4))
                       * 4);
      if (iVar22 == -1) break;
      while (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar22 * 0xc) !=
             *(uint *)(local_f20.Data + lVar34 * 4)) {
        iVar22 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar22 * 0xc);
        if (iVar22 == -1) goto LAB_14daac238;
      }
      uVar32 = uVar32 + 1;
      lVar34 = lVar34 + 1;
      if (iVar33 + -1 <= (int)uVar32) break;
    }
  }
LAB_14daac238:
  uVar21 = 0;
  if ((int)uVar32 < iVar33) {
    uVar21 = ~uVar32 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar16 = local_968.LengthFromRoot.ConstAttributeArray;
  iVar33 = *(int *)(local_f20.Data + lVar34 * 4);
  if (((local_968.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) || (iVar18 < 0)
      ) || (iVar22 = (**(code **)(*(longlong *)local_968.LengthFromRoot.ConstAttributeArray + 0x60))
                               (local_968.LengthFromRoot.ConstAttributeArray), iVar22 <= iVar18)) {
    pfVar24 = &DefaultLengthFromRoot;
  }
  else {
    pfVar24 = TManagedArrayAccessor<float>::operator[](&local_968.LengthFromRoot,iVar18);
  }
  fVar39 = *pfVar24;
  if (((pTVar16 == (TManagedArray<float> *)0x0) || ((int)uVar19 < 0)) ||
     (iVar22 = (**(code **)(*(longlong *)pTVar16 + 0x60))(pTVar16), iVar22 <= (int)uVar19)) {
    pfVar24 = &DefaultLengthFromRoot;
  }
  else {
    pfVar24 = TManagedArrayAccessor<float>::operator[](&local_968.LengthFromRoot,uVar19);
  }
  fVar2 = *pfVar24;
  if (((pTVar16 == (TManagedArray<float> *)0x0) || (iVar33 < 0)) ||
     (iVar22 = (**(code **)(*(longlong *)pTVar16 + 0x60))(pTVar16), iVar22 <= iVar33)) {
    pfVar24 = &DefaultLengthFromRoot;
  }
  else {
    pfVar24 = TManagedArrayAccessor<float>::operator[](&local_968.LengthFromRoot,iVar33);
  }
  fVar38 = *pfVar24 - fVar39;
  if (fVar12 < (float)((uint)fVar38 & uVar14)) {
    fVar39 = (fVar2 - fVar39) / fVar38;
  }
  else {
    fVar39 = fVar13;
    if (fVar2 < *pfVar24) {
      fVar39 = 0.0;
    }
  }
  if (fVar13 <= fVar39) {
    fVar39 = fVar13;
  }
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  pTVar25 = PV::Facades::FPointFacade::GetPosition(&local_968,uVar19);
  pTVar26 = PV::Facades::FPointFacade::GetPosition(&local_968,iVar18);
  pTVar27 = PV::Facades::FPointFacade::GetPosition(&local_968,iVar33);
  fVar2 = (pTVar27->field0_0x0)._s_0.X;
  fVar38 = (pTVar27->field0_0x0)._s_0.Y;
  fVar3 = (pTVar27->field0_0x0)._s_0.Z;
  fVar4 = (pTVar26->field0_0x0)._s_0.X;
  fVar5 = (pTVar26->field0_0x0)._s_0.Y;
  fVar6 = (pTVar26->field0_0x0)._s_0.Z;
  fVar7 = (pTVar26->field0_0x0)._s_0.X;
  fVar8 = (pTVar26->field0_0x0)._s_0.Y;
  fVar9 = (pTVar26->field0_0x0)._s_0.Z;
  if (local_108._8_4_ != local_108._52_4_) {
    puVar29 = local_108 + 0x38;
    if ((undefined1 *)local_108._64_8_ != (undefined1 *)0x0) {
      puVar29 = (undefined1 *)local_108._64_8_;
    }
    uVar32 = *(uint *)(puVar29 + (ulonglong)(local_c0 - 1U & uVar19) * 4);
    while (uVar32 != 0xffffffff) {
      puVar31 = (uint *)((longlong)(int)uVar32 * 0x20 + local_108._0_8_);
      if (*puVar31 == uVar19) {
        if (puVar31 == (uint *)0x0) goto LAB_14daac42d;
        goto LAB_14daac453;
      }
      uVar32 = puVar31[6];
    }
  }
  puVar31 = (uint *)0x0;
LAB_14daac42d:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14daac453:
  piVar35 = *(int **)(puVar31 + 2);
  uVar19 = puVar31[4];
  piVar1 = piVar35 + (int)uVar19;
  while( true ) {
    if (puVar31[4] != uVar19) {
      local_f28[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f28);
    }
    lVar34 = local_f08;
    param_1 = local_ef0;
    iVar33 = local_f18;
    uVar32 = local_f10;
    if (piVar35 == piVar1) break;
    iVar33 = *piVar35;
    if (((local_ed8.PivotPointsAttribute.ConstAttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0) || (iVar33 < 0)) ||
       (iVar18 = (**(code **)(*(longlong *)local_ed8.PivotPointsAttribute.ConstAttributeArray + 0x60
                             ))(), iVar18 <= iVar33)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        DefaultPivotPoint.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        DefaultPivotPoint.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
        ;
        _Init_thread_footer(&::_TSS0);
      }
      pTVar26 = &DefaultPivotPoint;
    }
    else {
      pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                          (&local_ed8.PivotPointsAttribute,iVar33);
    }
    local_f00._s_0.X =
         ((pTVar26->field0_0x0)._s_0.X - (pTVar25->field0_0x0)._s_0.X) +
         (fVar2 - fVar4) * fVar39 + fVar7;
    local_f00._s_0.Y =
         ((pTVar26->field0_0x0)._s_0.Y - (pTVar25->field0_0x0)._s_0.Y) +
         (fVar38 - fVar5) * fVar39 + fVar8;
    local_f00._s_0.Z =
         ((pTVar26->field0_0x0)._s_0.Z - (pTVar25->field0_0x0)._s_0.Z) +
         (fVar3 - fVar6) * fVar39 + fVar9;
    if ((local_ed8.Collection == (FManagedArrayCollection *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                            ,0x129,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((((((local_ed8.NamesAttribute.ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
            (local_ed8.NameIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
           (local_ed8.BranchIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
          ((local_ed8.PivotPointsAttribute.ConstAttributeArray !=
            (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
           (local_ed8.UpVectorsAttribute.ConstAttributeArray !=
            (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
         ((local_ed8.NormalVectorsAttribute.ConstAttributeArray !=
           (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
          ((local_ed8.ScalesAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0 &&
           (local_ed8.LengthFromRootAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0))))
         )) && (local_ed8.FoliageIdsAttribute.ConstAttributeArray !=
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((local_ed8.ParentBoneIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (bVar17 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                            (&local_ed8.PivotPointsAttribute,iVar33), bVar17)))) {
      TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                (&local_ed8.PivotPointsAttribute,iVar33,(TVector<float> *)&local_f00._s_0);
    }
    piVar35 = piVar35 + 1;
  }
LAB_14daac5e1:
  local_f10 = uVar32 + 1;
  local_f08 = lVar34 + 1;
  pTVar36 = local_c58.BranchPoints.ConstAttributeArray;
  pTVar37 = local_c58.Parents.ConstAttributeArray;
  FVar30 = local_f28[0];
  if (iVar33 <= (int)local_f10) goto LAB_14daac60b;
  goto LAB_14daabf30;
}

