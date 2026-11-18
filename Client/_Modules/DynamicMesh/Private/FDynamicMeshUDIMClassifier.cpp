// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// FDynamicMeshUDIMClassifier @ 14c8969a0

FDynamicMeshUDIMClassifier * __thiscall
UE::Geometry::FDynamicMeshUDIMClassifier::FDynamicMeshUDIMClassifier
          (FDynamicMeshUDIMClassifier *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicMeshUDIMClassifier *pFVar7;
  
  pTVar1 = &this->Selection;
  (this->Selection).field0_0x0.TypedValue.ArrayMax = -1;
  (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selection).field0_0x0.TypedValue.ArrayNum = 0;
  *(undefined8 *)&this->UDIMs = 0;
  *(undefined8 *)&(this->UDIMs).field_0x8 = 0;
  *(undefined8 *)&(this->UDIMs).field_0x20 = 0;
  *(undefined4 *)&(this->UDIMs).field_0x28 = 0;
  *(undefined4 *)&(this->UDIMs).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDIMs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDIMs).field_0x34 = 0;
  *(undefined8 *)&(this->UDIMs).field_0x40 = 0;
  piVar2 = &(this->Selection).field0_0x0.TypedValue.ArrayMax;
  *(undefined4 *)&(this->UDIMs).field_0x48 = 0;
  this->UVOverlay = param_1;
  if (param_2 != pTVar1) {
    if ((param_2->field0_0x0).TypedValue.ArrayMax == -1) {
      if (*piVar2 != -1) {
        pFVar4 = (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->Selection).field0_0x0.TypedValue.ArrayNum = 0;
        *piVar2 = -1;
      }
    }
    else {
      pFVar4 = (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (param_2->field0_0x0).TypedValue.ArrayNum;
      pFVar4 = (param_2->field0_0x0).TypedValue.AllocatorInstance.Data;
      (this->Selection).field0_0x0.TypedValue.ArrayNum = iVar3;
      if (iVar3 == 0) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        memcpy((pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
      }
      if (*piVar2 == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FDynamicMeshUDIMClassifier *)(*pcVar5)();
          return pFVar7;
        }
      }
    }
  }
  ClassifyUDIMs(this);
  if (((param_2->field0_0x0).TypedValue.ArrayMax != -1) &&
     (pFVar4 = (param_2->field0_0x0).TypedValue.AllocatorInstance.Data,
     pFVar4 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// ActiveTiles @ 14c8b6c90

TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDynamicMeshUDIMClassifier::ActiveTiles
          (FDynamicMeshUDIMClassifier *this,
          TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)&this->UDIMs,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClassifyBoundingBoxToUDIM @ 14c8c6120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FVector2i __cdecl
UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyBoundingBoxToUDIM
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TAxisAlignedBox2<double> *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *in_R8;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  
  dVar3 = in_R8[1];
  dVar6 = 0.0;
  dVar4 = *in_R8;
  iVar12 = (int)ROUND(((float)dVar3 + (float)dVar3) - __real_3f000000) >> 1;
  iVar11 = (int)ROUND(((float)dVar4 + (float)dVar4) - __real_3f000000) >> 1;
  *(ulonglong *)param_1 = CONCAT44(iVar12,iVar11);
  dVar9 = _UNK_150a9e6d8;
  dVar8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dVar7 = __real_ffefffffffffffff;
  iVar1 = iVar11 + 1;
  if (iVar11 <= iVar1) {
    uVar24 = (undefined4)__real_7fefffffffffffff;
    uVar25 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    iVar13 = iVar1;
    do {
      if (iVar12 <= iVar12 + 1) {
        dVar5 = in_R8[3];
        auVar23._0_8_ = (double)iVar11;
        auVar23._8_8_ = 0;
        dVar22 = (double)iVar13;
        if (in_R8[2] <= (double)iVar13) {
          dVar22 = in_R8[2];
        }
        iVar10 = iVar12;
        if (auVar23._0_8_ <= dVar4) {
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar4;
        }
        do {
          iVar2 = iVar10 + 1;
          dVar16 = (double)iVar2;
          if (dVar5 <= (double)iVar2) {
            dVar16 = dVar5;
          }
          dVar18 = (double)iVar10;
          if ((double)iVar10 <= dVar3) {
            dVar18 = dVar3;
          }
          dVar14 = dVar16 - dVar18;
          if (dVar14 <= 0.0) {
            dVar14 = 0.0;
          }
          dVar15 = dVar9;
          uVar20 = uVar24;
          uVar21 = uVar25;
          dVar19 = dVar8;
          dVar17 = dVar7;
          if (0.0 < dVar14) {
            dVar14 = dVar22 - auVar23._0_8_;
            if (dVar14 <= 0.0) {
              dVar14 = 0.0;
            }
            if (0.0 < dVar14) {
              dVar15 = dVar22;
              uVar20 = auVar23._0_4_;
              uVar21 = auVar23._4_4_;
              dVar19 = dVar18;
              dVar17 = dVar16;
            }
          }
          dVar15 = dVar15 - (double)CONCAT44(uVar21,uVar20);
          dVar17 = dVar17 - dVar19;
          if (dVar15 <= 0.0) {
            dVar15 = 0.0;
          }
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          if (dVar6 < dVar15 * dVar17) {
            *(ulonglong *)param_1 = CONCAT44(iVar10,iVar11);
            dVar6 = dVar15 * dVar17;
          }
          iVar10 = iVar2;
        } while (iVar2 <= iVar12 + 1);
      }
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar11 <= iVar1);
  }
  return (FVector2i)(FVector2i_u_0)param_1;
}

// ClassifyPointToUDIM @ 14c8c6310

FVector2i __cdecl
UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyPointToUDIM(TVector2<float> *param_1)

{
  float fVar1;
  float *in_RDX;
  
  fVar1 = in_RDX[1];
  (param_1->field0_0x0)._s_0.X = (float)((int)ROUND((*in_RDX + *in_RDX) - __real_3f000000) >> 1);
  (param_1->field0_0x0)._s_0.Y = (float)((int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1);
  return (FVector2i)(FVector2i_u_0)param_1;
}

// ClassifyTrianglesToUDIM @ 14c8c6350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVector2i __cdecl
UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyTrianglesToUDIM
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FVector2i_u_0 FVar9;
  int *piVar10;
  longlong *plVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  FVector2i FVar15;
  byte bVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *in_R8;
  uint uVar22;
  int *piVar23;
  float fVar24;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_198;
  undefined1 local_197 [7];
  undefined8 local_190;
  undefined4 local_188;
  int local_184;
  int local_180;
  int iStack_17c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_178;
  undefined8 *local_170;
  FVector2i_u_0 local_168;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined4 *local_e8;
  undefined1 local_d8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  fVar8 = __real_3f2aaaab;
  fVar7 = __real_3eaaaaab;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  piVar23 = (int *)*in_R8;
  iVar19 = *(int *)(in_R8 + 1);
  local_128 = piVar23 + iVar19;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_178 = param_2;
  local_170 = in_R8;
  local_168 = (FVector2i_u_0)param_1;
  while( true ) {
    piVar10 = local_128;
    uVar13 = 0;
    if (*(int *)(in_R8 + 1) != iVar19) {
      local_198 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_198);
    }
    uVar20 = local_b0;
    FVar9 = local_168;
    if (piVar23 == piVar10) break;
    lVar14 = *(longlong *)&local_178[4].ArrayNum;
    lVar3 = *(longlong *)&local_178[7].ArrayNum;
    uVar22 = *piVar23 * 3;
    uVar13 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar22 >> 9) * 8) +
                      (ulonglong)(uVar22 & 0x1ff) * 4);
    uVar20 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                      (ulonglong)(uVar22 + 1 & 0x1ff) * 4);
    uVar22 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar22 + 2 >> 9) * 8) +
                      (ulonglong)(uVar22 + 2 & 0x1ff) * 4);
    local_188 = 0;
    fVar24 = fVar5 - (*(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar20 * 2 + 1 & 0x1ff) * 4) +
                      *(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4) +
                     *(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar22 * 2 + 1 & 0x1ff) * 4)) * fVar7;
    local_180 = (int)ROUND((*(float *)(*(longlong *)
                                        (lVar14 + (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar20 * 2 & 0x1ff) * 4) +
                            *(float *)(*(longlong *)
                                        (lVar14 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar13 * 2 & 0x1ff) * 4) +
                           *(float *)(*(longlong *)
                                       (lVar14 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                     (ulonglong)(uVar22 * 2 & 0x1ff) * 4)) * fVar8 - fVar6) >> 1;
    iStack_17c = (int)ROUND((fVar24 + fVar24) - fVar6) >> 1;
    local_190 = CONCAT44(iStack_17c,local_180);
    uVar13 = FCrc::MemCrc_DEPRECATED(&local_190,8,0);
    if (local_d8._8_4_ != local_a4) {
      FVar18 = (ForElementType<FSetElementId>)local_a0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_98;
      }
      iVar21 = *(int *)((longlong)FVar18 + (ulonglong)(local_90 - 1U & uVar13) * 4);
      if (iVar21 != -1) {
        do {
          lVar14 = local_d8._0_8_ + (longlong)iVar21 * 0x14;
          if ((*(int *)(local_d8._0_8_ + (longlong)iVar21 * 0x14) == (int)local_190) &&
             (*(int *)(lVar14 + 4) == local_190._4_4_)) {
            if ((iVar21 != -1) && (lVar14 != 0)) goto LAB_14c8c661a;
            break;
          }
          iVar21 = *(int *)(lVar14 + 0xc);
        } while (iVar21 != -1);
      }
    }
    local_f0 = &local_190;
    local_1a8 = 0;
    local_e8 = &local_188;
    TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<UE::Geometry::FVector2i_const_&,int_&&>_>
              ((TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,0>,FDefaultSetAllocator>
                *)local_d8,(uint)&local_184,
               (TPairInitializer<UE::Geometry::FVector2i_const_&,int_&&> *)(ulonglong)uVar13,
               (bool *)&local_f0);
    lVar14 = local_d8._0_8_ + (longlong)local_184 * 0x14;
LAB_14c8c661a:
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    piVar23 = piVar23 + 1;
  }
  uStack_14c = 1;
  *(undefined8 *)local_168 = 0;
  uStack_13c = uVar13;
  uStack_150 = uVar13;
  local_138 = uVar13;
  if (local_b0 != 0) {
    pTVar17 = pTVar1;
    if (local_b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = local_b8;
    }
    uVar22 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    while (uVar22 == 0) {
      lVar14 = (longlong)(int)uStack_150;
      local_138 = local_138 + 0x20;
      uStack_150 = uStack_150 + 1;
      uStack_13c = local_b0;
      if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < (int)uStack_150)
      goto LAB_14c8c66c1;
      uVar22 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uStack_14c = -uVar22 & uVar22;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_180 = (int)lVar14;
    uStack_13c = local_180 + -1 + local_138;
    if ((int)local_b0 < (int)uStack_13c) {
      uStack_13c = local_b0;
    }
  }
LAB_14c8c66c1:
  local_158 = (longlong *)local_d8;
  uVar22 = local_b0 & 0xffffffe0;
  iStack_130 = local_d8._8_4_ - local_a4;
  uStack_140 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_13c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_14c,uStack_150);
  iVar19 = (int)local_b0 >> 5;
  TStack_118._28_4_ = uStack_13c;
  TStack_118.BaseBitIndex = local_138;
  uStack_f8 = CONCAT44(uStack_12c,iStack_130);
  bVar16 = (byte)local_b0;
  local_148 = pTVar1;
  uStack_134 = uStack_13c;
  local_120 = local_158;
  TStack_118.Array = pTVar1;
  if (((int)local_b0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    FVar15.field0_0x0 = (FVector2i_u_0)(*pcVar4)();
    return (FVector2i)FVar15.field0_0x0;
  }
  if (uVar20 != local_b0) {
    pTVar17 = pTVar1;
    if (local_b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = local_b8;
    }
    uVar20 = -1 << (bVar16 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar20 = local_b0;
      if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar19)
      goto LAB_14c8c67c0;
      uVar20 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (int)lVar14 + -1 + uVar22;
    if ((int)local_b0 < (int)uVar20) {
      uVar20 = local_b0;
    }
  }
LAB_14c8c67c0:
  while( true ) {
    plVar11 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
    }
    if (((TStack_118.CurrentBitIndex == uVar20) && (TStack_118.Array == pTVar1)) &&
       (plVar11 == (longlong *)local_d8)) break;
    lVar14 = *plVar11;
    local_168 = *(FVector2i_u_0 *)(lVar14 + (longlong)TStack_118.CurrentBitIndex * 0x14);
    uVar22 = *(uint *)(lVar14 + 8 + (longlong)TStack_118.CurrentBitIndex * 0x14);
    if ((int)uVar13 < (int)uVar22) {
      *(FVector2i_u_0 *)FVar9 = local_168;
      uVar13 = uVar22;
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  if ((void *)*local_170 != (void *)0x0) {
    FMemory::Free((void *)*local_170);
  }
  return (FVector2i)FVar9;
}

// ClassifyUDIMs @ 14c8c68b0

void __thiscall
UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyUDIMs(FDynamicMeshUDIMClassifier *this)

{
  int iVar1;
  void *_Src;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  FVector2i local_res8;
  FMeshConnectedComponents local_b8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94 [3];
  code *local_88 [2];
  undefined **local_78;
  FDynamicMeshUDIMClassifier *local_70;
  undefined8 local_60;
  code *local_58 [2];
  undefined **local_48;
  FDynamicMeshUDIMClassifier *local_40;
  undefined8 local_30;
  
  uVar9 = 0;
  local_b8.Mesh = *(FDynamicMesh3 **)this->UVOverlay;
  local_b8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Components.Array.ArrayNum = 0;
  local_b8.Components.Array.ArrayMax = 0;
  if ((this->Selection).field0_0x0.TypedValue.ArrayMax == -1) {
    local_48 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyUDIMs'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyUDIMs'::__l2::<lambda_1>,bool,int,int>
                  ::Call;
    local_40 = this;
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_b8,(TFunction<bool___cdecl(int,int)> *)local_58);
  }
  else {
    local_78 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyUDIMs'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_88[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshUDIMClassifier::ClassifyUDIMs'::__l2::<lambda_1>,bool,int,int>
                  ::Call;
    local_60 = 0;
    local_70 = this;
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_b8,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->Selection,
               (TFunction<bool___cdecl(int,int)> *)local_88);
  }
  uVar11 = uVar9;
  if (0 < local_b8.Components.Array.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < local_b8.Components.Array.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = *(int *)(*(undefined8 **)
                           (local_b8.Components.Array.AllocatorInstance.Data + uVar11) + 1);
      lVar10 = (longlong)local_98;
      _Src = (void *)**(undefined8 **)(local_b8.Components.Array.AllocatorInstance.Data + uVar11);
      if (local_98 == 0) {
        local_94[0] = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_98,0,&local_a0,local_98,local_94);
        memcpy(local_a0.Data,_Src,lVar10 << 2);
      }
      ClassifyTrianglesToUDIM
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)&local_res8,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)this->UVOverlay);
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_res8,8,0);
      pTVar7 = TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<UE::Geometry::FVector2i_const_&>
                         ((TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->UDIMs,uVar5,&local_res8);
      uVar5 = 0;
      if ((int)uVar8 < local_b8.Components.Array.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                (local_b8.Components.Array.AllocatorInstance.Data + uVar11);
      if ((pTVar7 == pTVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pTVar2->ArrayNum;
      if (iVar1 != 0) {
        iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar1,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,&pTVar7->ArrayMax)
        ;
        memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 4,
               (pTVar2->AllocatorInstance).Data,(longlong)iVar1 << 2);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < local_b8.Components.Array.ArrayNum);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_b8.Components);
  return;
}

// TidsForTile @ 14c91e7c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDynamicMeshUDIMClassifier::TidsForTile
          (FDynamicMeshUDIMClassifier *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FVector2i param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  FVector2i_u_0 local_res18 [2];
  
  local_res18[0] = param_1.field0_0x0;
  uVar4 = FCrc::MemCrc_DEPRECATED(local_res18,8,0);
  if (*(int *)&(this->UDIMs).field_0x8 != *(int *)&(this->UDIMs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->UDIMs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->UDIMs).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->UDIMs).field_0x48 - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->UDIMs;
      do {
        lVar6 = (longlong)iVar8 * 0x20;
        if ((*(int *)(lVar6 + lVar1) == local_res18[0]._s_0.X) &&
           (*(int *)(lVar6 + 4 + lVar1) == local_res18[0]._s_0.Y)) {
          if (iVar8 != -1) {
            pTVar5 = TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     ::Find((TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->UDIMs,(FVector2i *)&local_res18[0]._s_0);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar8 = pTVar5->ArrayNum;
            _Src = (pTVar5->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar8;
            if (iVar8 == 0) {
              __return_storage_ptr__->ArrayMax = 0;
              return __return_storage_ptr__;
            }
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,0,&__return_storage_ptr__->AllocatorInstance,iVar8,
                       &__return_storage_ptr__->ArrayMax);
            memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar8 << 2);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3600678110250401759>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshUDIMClassifier.cpp"
                     ,0x21,"UDIMs.Contains(TileIndexIn)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

