// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// operator() @ 14c89e8e0

void __thiscall
`UE::Geometry::FMeshMultiResampleImageBaker::BakeMaterial'::__l2::<lambda_1>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  TVector4<float> *pTVar6;
  longlong *plVar7;
  double local_48;
  undefined8 uStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar2 = param_2->DetailTriID;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144)))
  {
    lVar1 = (ulonglong)(uVar2 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x148) + lVar1) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x20) + lVar1) +
                (ulonglong)(uVar2 & 0x1ff) * 4) == *(int *)((longlong)this + 0x18))) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::GetTriBaryInterpolate<double>
                (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x40),uVar2,
                 (double *)&param_2->DetailBaryCoords,&local_48);
      lVar3 = *(longlong *)this;
      local_38 = local_48;
      uStack_30 = uStack_40;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x10));
      pcVar4 = *(code **)(lVar3 + 0x10);
      plVar7 = (longlong *)(lVar3 + 0x20);
      if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar3 + 0x38);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(&local_28,uVar5,&local_38);
      pTVar6 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                         ((TDenseGrid2<UE::Math::TVector4<float>_> *)
                          (*(int **)(*(longlong *)this + 0x60) + 2),
                          (longlong)(param_1->field0_0x0)._s_0.Y *
                          (longlong)**(int **)(*(longlong *)this + 0x60) +
                          (longlong)(param_1->field0_0x0)._s_0.X);
      *(undefined8 *)&pTVar6->field0_0x0 = local_28;
      *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 8) = uStack_20;
    }
  }
  return;
}

// Bake @ 14c8be6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FMeshMultiResampleImageBaker::Bake(FMeshMultiResampleImageBaker *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TMap<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,0>_>
  *pTVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  TMap<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,0>_>
  *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined8 local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar10 = *(longlong *)&this->field_0x8;
  puVar9 = ::operator_new(0x30);
  puVar16 = (undefined8 *)0x0;
  puVar14 = puVar16;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar14 = puVar9;
  }
  puVar1 = &this->field_0x60;
  if ((undefined8 *)puVar1 == local_78) {
    if (puVar14 == (undefined8 *)0x0) goto LAB_14c8be785;
    puVar9 = puVar14;
    if ((void *)puVar14[1] != (void *)0x0) {
      FMemory::Free((void *)puVar14[1]);
    }
  }
  else {
    puVar9 = *(undefined8 **)puVar1;
    *(undefined8 **)puVar1 = puVar14;
    if (puVar9 == (undefined8 *)0x0) goto LAB_14c8be785;
    if ((void *)puVar9[1] != (void *)0x0) {
      FMemory::Free((void *)puVar9[1]);
    }
  }
  ::operator_delete(puVar9,0x30);
LAB_14c8be785:
  TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions
            (*(TImageBuilder<UE::Math::TVector4<float>_> **)puVar1,
             *(FImageDimensions *)(lVar10 + 0x48));
  TImageBuilder<UE::Math::TVector4<float>_>::Clear
            (*(TImageBuilder<UE::Math::TVector4<float>_> **)puVar1,
             (TVector4<float> *)&this->field_0x50);
  puVar1 = &(this->MultiTextures).field_0x10;
  uStack_e8 = 0;
  uVar3 = *(uint *)&(this->MultiTextures).field_0x28;
  local_f0 = &this->MultiTextures;
  uStack_e4 = 1;
  local_d0 = 0;
  uStack_d4 = uStack_e8;
  if (uVar3 != 0) {
    puVar18 = *(uint **)&(this->MultiTextures).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    puVar14 = puVar16;
    local_d0 = 0;
    uStack_e8 = 0;
    while (uVar15 == 0) {
      iVar13 = (int)puVar16;
      local_d0 = (int)puVar14 + 0x20;
      puVar14 = (undefined8 *)(ulonglong)local_d0;
      uStack_e8 = iVar13 + 1;
      puVar16 = (undefined8 *)(ulonglong)uStack_e8;
      uStack_d4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e8)
      goto LAB_14c8be81d;
      uVar15 = puVar18[(longlong)iVar13 + 1];
    }
    uStack_e4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_e4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_c0 = (int)lVar10;
    uStack_d4 = local_c0 + -1 + local_d0;
    if ((int)uVar3 < (int)uStack_d4) {
      uStack_d4 = uVar3;
    }
  }
LAB_14c8be81d:
  uVar15 = *(uint *)&(this->MultiTextures).field_0x28;
  iStack_c8 = *(int *)&(this->MultiTextures).field_0x8 - *(int *)&(this->MultiTextures).field_0x34;
  uVar19 = uVar15 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_e4,uStack_e8);
  uStack_d8 = 0xffffffff;
  TStack_a0.CurrentBitIndex = uStack_d4;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = uStack_d4;
  TStack_a0.BaseBitIndex = local_d0;
  uStack_80 = CONCAT44(uStack_c4,iStack_c8);
  local_e0 = puVar1;
  uStack_cc = uStack_d4;
  local_a8 = local_f0;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || ((int)uVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->MultiTextures).field_0x28;
  if (uVar15 != uVar3) {
    puVar17 = *(undefined1 **)&(this->MultiTextures).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14c8be91c;
      uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14c8be91c:
  while( true ) {
    pTVar7 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->MultiTextures)) break;
    piVar12 = (int *)((longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    local_b8 = *(undefined8 *)(piVar12 + 2);
    iVar13 = *piVar12;
    local_b0 = *(TReferenceControllerBase<1> **)(piVar12 + 4);
    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = *(longlong *)&this->field_0x10;
    uVar6 = *(undefined8 *)&this->field_0x18;
    local_58 = *(longlong *)&this->field_0x20;
    uStack_50 = *(undefined8 *)&this->field_0x28;
    uVar5 = *(undefined8 *)&this->field_0x30;
    plStack_40 = *(longlong **)&this->field_0x38;
    *(code **)&this->field_0x10 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FMeshMultiResampleImageBaker::Bake'::__l6::<lambda_1>,UE::Math::TVector4<float>,UE::Math::TVector2<double>_>
         ::Call;
    *(undefined8 *)&this->field_0x18 = uStack_60;
    *(undefined4 *)&this->field_0x20 = 0x528cffe8;
    *(undefined4 *)&this->field_0x24 = 1;
    *(undefined8 **)&this->field_0x28 = &local_b8;
    *(undefined4 *)&this->field_0x30 = (undefined4)local_48;
    *(undefined4 *)&this->field_0x34 = local_48._4_4_;
    *(undefined4 *)&this->field_0x38 = 0;
    *(undefined4 *)&this->field_0x3c = 0;
    local_48 = uVar5;
    uStack_60 = uVar6;
    if (local_68 != 0) {
      plVar11 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar11 = plStack_40;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    BakeMaterial(this,iVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  return;
}

// BakeMaterial @ 14c8c0c60

void __thiscall
UE::Geometry::FMeshMultiResampleImageBaker::BakeMaterial
          (FMeshMultiResampleImageBaker *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FMeshImageBakingCache *this_00;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FImageOccupancyMap *pFVar7;
  TVector4<float> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  code *local_58;
  FMeshMultiResampleImageBaker **local_50;
  long64 local_48;
  long64 lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  FMeshMultiResampleImageBaker *local_28;
  FDynamicMesh3 *local_20;
  TDynamicMeshScalarTriangleAttribute<int> *local_18;
  int local_10;
  
  this_00 = *(FMeshImageBakingCache **)&this->field_0x8;
  if (this_00 == (FMeshImageBakingCache *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6385202805220573250>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                       ,0x42,"BakeCache");
    if (!bVar4) {
      return;
    }
  }
  else {
    local_20 = this_00->DetailMesh;
    if (local_20 == (FDynamicMesh3 *)0x0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6385202805220573255>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                         ,0x47,"DetailMesh");
      if (!bVar4) {
        return;
      }
    }
    else {
      pFVar2 = (local_20->AttributeSet).Ptr;
      pFVar6 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar6 = pFVar2;
      }
      local_18 = (pFVar6->MaterialIDAttrib).Ptr;
      if (local_18 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        if (*(longlong *)&this->field_0x40 == 0) {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6385202805220573264>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                             ,0x50,"DetailUVOverlay");
          if (bVar4) goto code_r0x00014c8c0d8f;
        }
        else {
          local_50 = &local_28;
          local_58 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FMeshMultiResampleImageBaker::BakeMaterial'::__l2::<lambda_1>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
                     ::Call;
          local_28 = this;
          local_10 = param_1;
          FMeshImageBakingCache::EvaluateSamples
                    (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
                              *)&local_58,true);
          pFVar7 = FMeshImageBakingCache::GetOccupancyMap(this_00);
          lVar11 = 0;
          lVar9 = (pFVar7->GutterTexels).ArrayNum;
          if (0 < lVar9) {
            lVar10 = 0;
            do {
              uVar5 = 0;
              if (lVar11 < lVar9) {
                uVar5 = (uint)((ulonglong)lVar11 >> 0x3f) ^ 1;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar9 = *(longlong *)&this->field_0x60;
              pFVar1 = (pFVar7->GutterTexels).AllocatorInstance.Data + lVar10;
              local_48 = *(long64 *)pFVar1;
              lStack_40 = *(long64 *)(pFVar1 + 8);
              pTVar8 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                 ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar9 + 8),lStack_40);
              local_38 = *(undefined8 *)&pTVar8->field0_0x0;
              uStack_30 = *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 8);
              pTVar8 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                 ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar9 + 8),local_48);
              lVar11 = lVar11 + 1;
              lVar10 = lVar10 + 0x10;
              *(undefined8 *)&pTVar8->field0_0x0 = local_38;
              *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 8) = uStack_30;
              lVar9 = (pFVar7->GutterTexels).ArrayNum;
            } while (lVar11 < lVar9);
          }
        }
        return;
      }
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6385202805220573260>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshResampleImageBaker.cpp"
                         ,0x4c,"DetailMaterialIDAttrib");
      if (!bVar4) {
        return;
      }
    }
  }
code_r0x00014c8c0d8f:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// InitResult @ 14c8fbbd0

void __thiscall
UE::Geometry::FMeshMultiResampleImageBaker::InitResult(FMeshMultiResampleImageBaker *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)&this->field_0x8;
  puVar3 = ::operator_new(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  puVar1 = &this->field_0x60;
  if ((undefined8 *)puVar1 == local_18) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_14c8fbc6d;
    puVar4 = puVar3;
    if ((void *)puVar3[1] != (void *)0x0) {
      FMemory::Free((void *)puVar3[1]);
    }
  }
  else {
    puVar4 = *(undefined8 **)puVar1;
    *(undefined8 **)puVar1 = puVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14c8fbc6d;
    if ((void *)puVar4[1] != (void *)0x0) {
      FMemory::Free((void *)puVar4[1]);
    }
  }
  ::operator_delete(puVar4,0x30);
LAB_14c8fbc6d:
  TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions
            (*(TImageBuilder<UE::Math::TVector4<float>_> **)puVar1,
             *(FImageDimensions *)(lVar2 + 0x48));
  TImageBuilder<UE::Math::TVector4<float>_>::Clear
            (*(TImageBuilder<UE::Math::TVector4<float>_> **)puVar1,
             (TVector4<float> *)&this->field_0x50);
  return;
}

