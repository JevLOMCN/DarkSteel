// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 215

// `dynamic_initializer_for_'ModuleRegistrantDynamicMesh'' @ 1413ae5f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantDynamicMesh__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DynamicMesh";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DynamicMesh",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDynamicMeshModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14c6bce80

void * __thiscall
FDynamicMeshModule::_scalar_deleting_destructor_(FDynamicMeshModule *this,uint param_1)

{
  *this = (FDynamicMeshModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CalculateAverageUVScale<`UE::Geometry::FJoinMeshLoops::Apply'::__l2::<lambda_1>_> @ 14c6c1de0

double __cdecl
CalculateAverageUVScale<_UE::Geometry::FJoinMeshLoops::Apply_::__l2::<lambda_1>_>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,int param_2,
          <lambda_1> *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  FJoinMeshLoops *pFVar7;
  FDynamicMesh3 *this;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  int local_148;
  double local_140;
  
  if (param_1 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    lVar6 = *(longlong *)param_1;
    local_148 = 0;
    local_140 = 0.0;
    if (0 < param_2) {
      lVar24 = 0;
      uVar19 = 0;
      do {
        uVar17 = uVar19 + 1;
        pFVar7 = param_3->__this;
        uVar23 = (int)uVar17 % *param_3->NV;
        uVar18 = 0;
        if ((int)uVar23 < (pFVar7->LoopA).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar14 = (code *)swi(3);
          dVar31 = (double)(*pcVar14)();
          return dVar31;
        }
        iVar5 = *(int *)((pFVar7->LoopA).AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
        pFVar7 = param_3->__this;
        uVar18 = 0;
        if ((int)uVar19 < (pFVar7->LoopA).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar14 = (code *)swi(3);
          dVar31 = (double)(*pcVar14)();
          return dVar31;
        }
        this = param_3->__this->Mesh;
        uVar19 = UE::Geometry::FDynamicMesh3::FindEdge
                           (this,*(int *)((pFVar7->LoopA).AllocatorInstance.Data + lVar24),iVar5);
        if (((uVar19 != 0xffffffff) &&
            (uVar19 = *(uint *)(*(longlong *)
                                 ((this->Edges).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar19 >> 9) * 8) + 8 +
                               (ulonglong)(uVar19 & 0x1ff) * 0x10), -1 < (int)uVar19)) &&
           ((int)uVar19 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
          uVar21 = (ulonglong)(uVar19 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar6 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                                 uVar21 * 2) - 1U) < 0xfffe) {
            lVar8 = *(longlong *)(lVar6 + 0x10);
            lVar9 = *(longlong *)&param_1->field_0x78;
            uVar23 = uVar19 * 3;
            lVar10 = *(longlong *)&param_1->field_0x48;
            lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
            uVar19 = *(uint *)(lVar11 + uVar21 * 0xc);
            uVar18 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
            uVar20 = (ulonglong)(uVar19 & 0x1ff);
            lVar12 = *(longlong *)(lVar8 + (ulonglong)(uVar19 >> 9) * 8);
            uVar22 = (ulonglong)(uVar18 & 0x1ff);
            dVar31 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
            pdVar1 = (double *)(lVar12 + uVar20 * 0x18);
            dVar15 = pdVar1[1];
            lVar13 = *(longlong *)(lVar8 + (ulonglong)(uVar18 >> 9) * 8);
            pdVar2 = (double *)(lVar13 + uVar22 * 0x18);
            dVar35 = *pdVar2;
            dVar33 = pdVar2[1];
            dVar30 = *(double *)(lVar13 + 0x10 + uVar22 * 0x18);
            uVar19 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
            uVar21 = (ulonglong)(uVar19 & 0x1ff);
            lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar19 >> 9) * 8);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 >> 9) * 8) +
                              (ulonglong)(uVar23 & 0x1ff) * 4);
            fVar37 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            fVar36 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                              (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
            fVar28 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            fVar26 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                              (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
            dVar29 = dVar30 - dVar31;
            fVar25 = fVar26 - fVar36;
            dVar34 = dVar35 - *pdVar1;
            fVar27 = fVar28 - fVar37;
            fVar3 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            dVar32 = dVar33 - dVar15;
            fVar4 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            fVar28 = fVar3 - fVar28;
            dVar29 = SQRT(dVar32 * dVar32 + dVar34 * dVar34 + dVar29 * dVar29);
            if (dVar29 <= __real_3eb0c6f7a0000000) {
              dVar29 = __real_3eb0c6f7a0000000;
            }
            pdVar1 = (double *)(lVar8 + uVar21 * 0x18);
            dVar34 = pdVar1[1];
            dVar35 = *pdVar1 - dVar35;
            fVar26 = fVar4 - fVar26;
            dVar33 = dVar34 - dVar33;
            dVar32 = *(double *)(lVar8 + 0x10 + uVar21 * 0x18);
            dVar30 = dVar32 - dVar30;
            dVar30 = SQRT(dVar33 * dVar33 + dVar35 * dVar35 + dVar30 * dVar30);
            if (dVar30 <= __real_3eb0c6f7a0000000) {
              dVar30 = __real_3eb0c6f7a0000000;
            }
            fVar36 = fVar36 - fVar4;
            dVar35 = *(double *)(lVar12 + uVar20 * 0x18) - *(double *)(lVar8 + uVar21 * 0x18);
            dVar15 = dVar15 - dVar34;
            fVar37 = fVar37 - fVar3;
            local_148 = local_148 + 3;
            dVar31 = dVar31 - dVar32;
            dVar31 = SQRT(dVar15 * dVar15 + dVar35 * dVar35 + dVar31 * dVar31);
            if (dVar31 <= __real_3eb0c6f7a0000000) {
              dVar31 = __real_3eb0c6f7a0000000;
            }
            local_140 = local_140 + (double)SQRT(fVar25 * fVar25 + fVar27 * fVar27) / dVar29 +
                        (double)SQRT(fVar28 * fVar28 + fVar26 * fVar26) / dVar30 +
                        (double)SQRT(fVar36 * fVar36 + fVar37 * fVar37) / dVar31;
          }
        }
        lVar24 = lVar24 + 4;
        uVar19 = uVar17;
      } while ((int)uVar17 < param_2);
      if ((__real_3eb0c6f7a0000000 <= local_140) && (local_148 != 0)) {
        return local_140 / (double)local_148;
      }
    }
  }
  return __real_3ff0000000000000;
}

// CalculateAverageUVScale<`UE::Geometry::FJoinMeshLoops::Apply'::__l2::<lambda_2>_> @ 14c6c23e0

double __cdecl
CalculateAverageUVScale<_UE::Geometry::FJoinMeshLoops::Apply_::__l2::<lambda_2>_>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,int param_2,
          <lambda_2> *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  FJoinMeshLoops *pFVar7;
  FDynamicMesh3 *this;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  int local_148;
  double local_140;
  
  if (param_1 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    lVar6 = *(longlong *)param_1;
    local_148 = 0;
    local_140 = 0.0;
    if (0 < param_2) {
      lVar24 = 0;
      uVar19 = 0;
      do {
        uVar17 = uVar19 + 1;
        pFVar7 = param_3->__this;
        uVar23 = (int)uVar17 % *param_3->NV;
        uVar18 = 0;
        if ((int)uVar23 < (pFVar7->LoopB).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar14 = (code *)swi(3);
          dVar31 = (double)(*pcVar14)();
          return dVar31;
        }
        iVar5 = *(int *)((pFVar7->LoopB).AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
        pFVar7 = param_3->__this;
        uVar18 = 0;
        if ((int)uVar19 < (pFVar7->LoopB).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar14 = (code *)swi(3);
          dVar31 = (double)(*pcVar14)();
          return dVar31;
        }
        this = param_3->__this->Mesh;
        uVar19 = UE::Geometry::FDynamicMesh3::FindEdge
                           (this,*(int *)((pFVar7->LoopB).AllocatorInstance.Data + lVar24),iVar5);
        if (((uVar19 != 0xffffffff) &&
            (uVar19 = *(uint *)(*(longlong *)
                                 ((this->Edges).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar19 >> 9) * 8) + 8 +
                               (ulonglong)(uVar19 & 0x1ff) * 0x10), -1 < (int)uVar19)) &&
           ((int)uVar19 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
          uVar21 = (ulonglong)(uVar19 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar6 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                                 uVar21 * 2) - 1U) < 0xfffe) {
            lVar8 = *(longlong *)(lVar6 + 0x10);
            lVar9 = *(longlong *)&param_1->field_0x78;
            uVar23 = uVar19 * 3;
            lVar10 = *(longlong *)&param_1->field_0x48;
            lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
            uVar19 = *(uint *)(lVar11 + uVar21 * 0xc);
            uVar18 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
            uVar20 = (ulonglong)(uVar19 & 0x1ff);
            lVar12 = *(longlong *)(lVar8 + (ulonglong)(uVar19 >> 9) * 8);
            uVar22 = (ulonglong)(uVar18 & 0x1ff);
            dVar31 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
            pdVar1 = (double *)(lVar12 + uVar20 * 0x18);
            dVar15 = pdVar1[1];
            lVar13 = *(longlong *)(lVar8 + (ulonglong)(uVar18 >> 9) * 8);
            pdVar2 = (double *)(lVar13 + uVar22 * 0x18);
            dVar35 = *pdVar2;
            dVar33 = pdVar2[1];
            dVar30 = *(double *)(lVar13 + 0x10 + uVar22 * 0x18);
            uVar19 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
            uVar21 = (ulonglong)(uVar19 & 0x1ff);
            lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar19 >> 9) * 8);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 >> 9) * 8) +
                              (ulonglong)(uVar23 & 0x1ff) * 4);
            fVar37 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            fVar36 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                              (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
            fVar28 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            fVar26 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            uVar19 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                              (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
            dVar29 = dVar30 - dVar31;
            fVar25 = fVar26 - fVar36;
            dVar34 = dVar35 - *pdVar1;
            fVar27 = fVar28 - fVar37;
            fVar3 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
            dVar32 = dVar33 - dVar15;
            fVar4 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
            fVar28 = fVar3 - fVar28;
            dVar29 = SQRT(dVar32 * dVar32 + dVar34 * dVar34 + dVar29 * dVar29);
            if (dVar29 <= __real_3eb0c6f7a0000000) {
              dVar29 = __real_3eb0c6f7a0000000;
            }
            pdVar1 = (double *)(lVar8 + uVar21 * 0x18);
            dVar34 = pdVar1[1];
            dVar35 = *pdVar1 - dVar35;
            fVar26 = fVar4 - fVar26;
            dVar33 = dVar34 - dVar33;
            dVar32 = *(double *)(lVar8 + 0x10 + uVar21 * 0x18);
            dVar30 = dVar32 - dVar30;
            dVar30 = SQRT(dVar33 * dVar33 + dVar35 * dVar35 + dVar30 * dVar30);
            if (dVar30 <= __real_3eb0c6f7a0000000) {
              dVar30 = __real_3eb0c6f7a0000000;
            }
            fVar36 = fVar36 - fVar4;
            dVar35 = *(double *)(lVar12 + uVar20 * 0x18) - *(double *)(lVar8 + uVar21 * 0x18);
            dVar15 = dVar15 - dVar34;
            fVar37 = fVar37 - fVar3;
            local_148 = local_148 + 3;
            dVar31 = dVar31 - dVar32;
            dVar31 = SQRT(dVar15 * dVar15 + dVar35 * dVar35 + dVar31 * dVar31);
            if (dVar31 <= __real_3eb0c6f7a0000000) {
              dVar31 = __real_3eb0c6f7a0000000;
            }
            local_140 = local_140 + (double)SQRT(fVar25 * fVar25 + fVar27 * fVar27) / dVar29 +
                        (double)SQRT(fVar28 * fVar28 + fVar26 * fVar26) / dVar30 +
                        (double)SQRT(fVar36 * fVar36 + fVar37 * fVar37) / dVar31;
          }
        }
        lVar24 = lVar24 + 4;
        uVar19 = uVar17;
      } while ((int)uVar17 < param_2);
      if ((__real_3eb0c6f7a0000000 <= local_140) && (local_148 != 0)) {
        return local_140 / (double)local_148;
      }
    }
  }
  return __real_3ff0000000000000;
}

// ConstructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int> @ 14c6c5710

void __cdecl
ConstructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int>
          (void *param_1,FBevelVertex_InteriorVertex *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FBevelVertex_InteriorVertex *pFVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar4 = &pFVar3->BorderFrameWeight;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar4) =
           *(undefined4 *)((longlong)(pTVar4 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,pFVar5,iVar2,piVar1);
        memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 0x18);
      }
      pFVar3 = (FBevelVertex_InteriorVertex *)(pTVar4 + 1);
      pFVar5 = pFVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int> @ 14c6c57e0

void __cdecl
ConstructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
          (void *param_1,FDynamicMeshInstance *param_2,int param_3)

{
  int iVar1;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *_Dst;
  int *piVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> _Src;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar3;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 0xb4);
    pFVar3 = &(param_2->Transforms).Transforms.AllocatorInstance.SecondaryData;
    do {
      *(undefined8 *)(piVar2 + -0x2d) =
           *(undefined8 *)((longlong)piVar2 + (longlong)param_2 + (-0xb4 - (longlong)param_1));
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      _Src = *pFVar3;
      iVar1 = *(int *)(pFVar3 + 1);
      piVar2[-1] = iVar1;
      if (_Src == (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
        _Src = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)(pFVar3 + -0x14);
      }
      if (iVar1 == 0) {
        *piVar2 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                  (0x50,8,iVar1,0,
                   (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(piVar2 + -0x2b),iVar1,
                   piVar2);
        _Dst = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(piVar2 + -3);
        if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(piVar2 + -3) ==
            (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
          _Dst = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(piVar2 + -0x2b);
        }
        memcpy(_Dst,(void *)_Src,(longlong)iVar1 * 0x50);
      }
      piVar2 = piVar2 + 0x2e;
      pFVar3 = pFVar3 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,UE::Geometry::FGroupTopology::FGroupBoundary,int> @ 14c6c5900

void __cdecl
ConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,UE::Geometry::FGroupTopology::FGroupBoundary,int>
          (void *param_1,FGroupBoundary *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    piVar5 = &(param_2->GroupEdges).ArrayNum;
    lVar6 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)piVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)piVar5);
      iVar3 = *piVar5;
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->AllocatorInstance).Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 2);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar3 = piVar5[4];
      _Src_00 = *(void **)(piVar5 + 2);
      piVar4[3] = iVar3;
      if (iVar3 == 0) {
        piVar4[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar4 + 1),iVar3,piVar4 + 4);
        memcpy(((ForAnyElementType *)(piVar4 + 1))->Data,_Src_00,(longlong)iVar3 << 2);
      }
      piVar1 = piVar5 + 6;
      piVar5 = piVar5 + 10;
      *(char *)(piVar4 + 5) = (char)*piVar1;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Geometry::FMeshBevel::FOneRingWedge,UE::Geometry::FMeshBevel::FOneRingWedge,int> @ 14c6c5a40

void __cdecl
ConstructItems<UE::Geometry::FMeshBevel::FOneRingWedge,UE::Geometry::FMeshBevel::FOneRingWedge,int>
          (void *param_1,FOneRingWedge *param_2,int param_3)

{
  FIndex2i_u_0 *pFVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FIndex2i_u_0 FVar4;
  int *piVar5;
  longlong lVar6;
  FIndex2i_u_0 *pFVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    pFVar7 = &(param_2->BorderEdges).field0_0x0;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)pFVar7 + lVar6) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)pFVar7 + lVar6);
      iVar3 = pFVar7[-1]._s_0.A;
      FVar4 = pFVar7[-2];
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar2,iVar3,piVar5);
        memcpy(pFVar2->Data,(void *)FVar4,(longlong)iVar3 << 2);
      }
      *(FIndex2i_u_0 *)(piVar5 + 1) = *pFVar7;
      *(FIndex2i_u_0 *)(piVar5 + 3) = pFVar7[1];
      piVar5[5] = pFVar7[2]._s_0.A;
      FVar4 = pFVar7[4];
      *(FIndex2i_u_0 *)(piVar5 + 7) = pFVar7[3];
      *(FIndex2i_u_0 *)(piVar5 + 9) = FVar4;
      *(FIndex2i_u_0 *)(piVar5 + 0xb) = pFVar7[5];
      pFVar1 = pFVar7 + 6;
      pFVar7 = pFVar7 + 9;
      *(undefined1 *)(piVar5 + 0xd) = *(undefined1 *)pFVar1;
      piVar5 = piVar5 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int> @ 14c6c5b50

void __cdecl
ConstructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 3);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_> @ 14c6c6480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge_::__l2::<lambda_1>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FDynamicMesh3 *param_4,
          FIntrinsicEdgeFlipMesh *param_5,double param_6,<lambda_1> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FDynamicMesh3 *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FDynamicMesh3 *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FDynamicMesh3 *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FDynamicMesh3 *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FDynamicMesh3 *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)
              ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)
              ((param_4->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8
              );
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    pFVar31 = (local_240->Vertices).Blocks.AllocatorInstance.Data;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(pFVar31 + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(pFVar31 + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar26->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)
                      ((pFVar26->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                      ) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c6acf;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c6acf:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c6b32;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c6b32:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c6d89;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c6d89:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_> @ 14c6c6e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge_::__l2::<lambda_1>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FDynamicMesh3 *param_4,
          FIntrinsicEdgeFlipMesh *param_5,double param_6,<lambda_1> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FDynamicMesh3 *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FDynamicMesh3 *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FDynamicMesh3 *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FDynamicMesh3 *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FDynamicMesh3 *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)
              ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)
              ((param_4->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8
              );
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    pFVar31 = (local_240->Vertices).Blocks.AllocatorInstance.Data;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(pFVar31 + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(pFVar31 + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar26->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)
                      ((pFVar26->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                      ) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c74bf;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c74bf:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c7522;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c7522:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c7779;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c7779:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_> @ 14c6c7860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l2::<lambda_2>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FDynamicMesh3 *param_4,
          FIntrinsicEdgeFlipMesh *param_5,double param_6,<lambda_2> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FDynamicMesh3 *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FDynamicMesh3 *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FDynamicMesh3 *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FDynamicMesh3 *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FDynamicMesh3 *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)
              ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)
              ((param_4->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8
              );
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    pFVar31 = (local_240->Vertices).Blocks.AllocatorInstance.Data;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(pFVar31 + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(pFVar31 + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar26->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)
                      ((pFVar26->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                      ) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c7eaf;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c7eaf:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c7f12;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c7f12:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c8169;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c8169:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_> @ 14c6c8250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge_::__l2::<lambda_1>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FDynamicMesh3 *param_4,
          FIntrinsicMesh *param_5,double param_6,<lambda_1> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FDynamicMesh3 *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FDynamicMesh3 *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FDynamicMesh3 *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FDynamicMesh3 *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FDynamicMesh3 *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)
              ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)
              ((param_4->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8
              );
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    pFVar31 = (local_240->Vertices).Blocks.AllocatorInstance.Data;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(pFVar31 + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(pFVar31 + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar26->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)
                      ((pFVar26->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                      ) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c889f;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c889f:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c8902;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c8902:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c8b59;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c8b59:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_> @ 14c6c8c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>_::__l2::<lambda_2>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FDynamicMesh3 *param_4,
          FIntrinsicMesh *param_5,double param_6,<lambda_2> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FDynamicMesh3 *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FDynamicMesh3 *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FDynamicMesh3 *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FDynamicMesh3 *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FDynamicMesh3 *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)
              ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)
              ((param_4->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8
              );
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    pFVar31 = (local_240->Vertices).Blocks.AllocatorInstance.Data;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(pFVar31 + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(pFVar31 + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar26->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)
                      ((pFVar26->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8
                      ) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c928f;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c928f:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c92f2;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c92f2:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c9549;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c9549:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_> @ 14c6c9630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,_UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge_::__l15::<lambda_2>_>
          (FSurfacePoint *param_1,FSurfacePoint *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FIntrinsicMesh *param_4,
          FDynamicMesh3 *param_5,double param_6,<lambda_2> *param_7,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *param_8)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  ForElementType<FSetElementId> FVar25;
  FIntrinsicMesh *pFVar26;
  int iVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247 [7];
  FIntrinsicMesh *local_240;
  uint local_238 [3];
  undefined4 local_22c;
  FSurfacePoint *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  undefined8 local_1d0;
  double local_1c0;
  undefined1 local_1b8 [8];
  FIntrinsicMesh *local_1b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1a0;
  FIntrinsicMesh *local_198;
  uint *local_190;
  uint *local_188;
  uint *local_180;
  longlong local_178;
  TVector2<double>_u_0 local_170;
  FSurfacePoint *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FIntrinsicMesh *local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = param_8;
  if (param_3->ArrayNum != 0) {
    uVar30 = param_3->ArrayNum + 3;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_240 = param_4;
    local_228 = param_2;
    local_220 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_1a8 = &local_148;
    local_1b0 = param_4;
    local_160 = param_1;
    local_158 = param_3;
    local_150 = param_4;
    uVar30 = `FNormalCoordSurfaceTraceImpl::
             ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
             ::__l2::<lambda_3>::operator()(&local_160);
    uVar23 = (ulonglong)(uVar30 & 0x1ff);
    lVar20 = *(longlong *)(param_4->_padding_ + (ulonglong)(uVar30 >> 9) * 8);
    local_1f8 = *(undefined4 *)(lVar20 + 8 + uVar23 * 0xc);
    local_200 = *(undefined8 *)(lVar20 + uVar23 * 0xc);
    lVar20 = *(longlong *)(param_4->_padding_ + (ulonglong)(uVar30 >> 9) * 8);
    iVar15 = *(int *)(lVar20 + 8 + uVar23 * 0xc);
    local_1d0 = (FScriptContainerElement *)*(undefined8 *)(lVar20 + uVar23 * 0xc);
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
    dVar12 = __real_3e45798ee2308c3a;
    iVar19 = *(int *)(param_3->AllocatorInstance).Data;
    if ((int)local_1d0 == iVar19) {
      iVar27 = 0;
    }
    else if (local_1d0._4_4_ == iVar19) {
      iVar27 = 1;
    }
    else {
      iVar27 = -1;
      if (iVar15 == iVar19) {
        iVar27 = 2;
      }
    }
    iVar15 = iVar27 + 2;
    local_238[0] = *(uint *)((longlong)&local_200 +
                            (longlong)
                            (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                      (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    local_238[2] = *(uint *)((longlong)&local_200 + (longlong)iVar27 * 4);
    lVar20 = *(longlong *)(local_240->_padding_ + (ulonglong)(local_238[0] >> 9) * 8);
    pdVar1 = (double *)(lVar20 + (ulonglong)(local_238[0] & 0x1ff) * 0x18);
    lVar4 = *(longlong *)(local_240->_padding_ + (ulonglong)(local_238[2] >> 9) * 8);
    pdVar2 = (double *)(lVar4 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    local_1c0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_238[2] & 0x1ff) * 0x18);
    uStack_208 = 0.0;
    dVar33 = *pdVar1 - *pdVar2;
    dVar34 = *(double *)(lVar20 + 0x10 + (ulonglong)(local_238[0] & 0x1ff) * 0x18) - local_1c0;
    dVar35 = pdVar1[1] - pdVar2[1];
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_210 = dVar35 * dVar35 + dVar33 * dVar33 + dVar34 * dVar34;
    if (local_210 <= __real_3e45798ee2308c3a) {
      local_210 = __real_3e45798ee2308c3a;
    }
    local_210 = SQRT(local_210);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_238[1] = 0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10) = local_1f0;
    *(undefined8 *)(local_f8.Data + (longlong)iVar15 * 0x10 + 8) = uStack_1e8;
    local_190 = local_238;
    local_188 = local_238 + 1;
    local_f0._0_4_ = iVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)local_1b8,(bool *)&local_190);
    if (((local_f8.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_22c = 1;
    lVar20 = (longlong)(int)local_f0;
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    *(double *)(local_f8.Data + lVar20 * 0x10) = local_210;
    *(double *)(local_f8.Data + lVar20 * 0x10 + 8) = uStack_208;
    local_180 = local_238 + 2;
    local_178 = (longlong)&local_22c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              (&local_148,(TPairInitializer<int_const_&,int_&&> *)(local_1b8 + 4),(bool *)&local_180
              );
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
    ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
    pTVar21 = local_220;
    pFVar26 = local_240;
    pFVar29 = (param_3->AllocatorInstance).Data;
    iVar15 = param_3->ArrayNum;
    pFVar31 = pFVar29 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar21->ArrayNum != iVar15) {
        local_248 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_248);
      }
      if (pFVar29 == pFVar31) break;
      uVar5 = *(undefined8 *)
               (*(longlong *)(pFVar26->_padding_ + (ulonglong)(*(uint *)pFVar29 >> 9) * 8) + 8 +
               (ulonglong)(*(uint *)pFVar29 & 0x1ff) * 0x10);
      uVar22 = (uint)uVar5;
      bVar14 = uVar22 == uVar30;
      uVar30 = uVar22;
      if (bVar14) {
        uVar30 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      `FNormalCoordSurfaceTraceImpl::
      ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
      ::__l2::<lambda_2>::operator()(&local_1b0,uVar30);
      pFVar29 = pFVar29 + 4;
    }
    local_1a0 = &local_148;
    local_198 = pFVar26;
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_170._s_0,param_1);
    `FNormalCoordSurfaceTraceImpl::
    ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
    ::__l2::<lambda_4>::operator()(&local_1a0,(TVector2<double> *)&local_1e0._s_0,local_228);
    pTVar13 = local_218;
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar35 = __real_3ff0000000000000;
    uVar23 = (ulonglong)pTVar21->ArrayNum;
    pFVar31 = (pTVar21->AllocatorInstance).Data;
    dVar33 = local_1e0._s_0.X - local_170._s_0.X;
    dVar34 = local_1e0._s_0.Y - local_170._s_0.Y;
    local_1d0 = pFVar31 + uVar23 * 4;
    local_228 = (FSurfacePoint *)CONCAT44(local_228._4_4_,pTVar21->ArrayNum);
    while( true ) {
      pFVar29 = local_1d0;
      puVar32 = (uint *)0x0;
      if (pTVar21->ArrayNum != (int)uVar23) {
        local_247[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_247);
      }
      if (pFVar31 == pFVar29) break;
      uVar18 = *(uint *)pFVar31;
      pTVar6 = *(TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 **)(*(longlong *)(pFVar26->_padding_ + (ulonglong)(uVar18 >> 9) * 8) +
                    (ulonglong)(uVar18 & 0x1ff) * 0x10);
      local_218._4_4_ = (uint)((ulonglong)pTVar6 >> 0x20);
      uVar28 = local_218._4_4_;
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          ((ulonglong)(local_148.HashSize - 1) & (ulonglong)pTVar6 & 0xffffffff) * 4
                          );
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == (uint)pTVar6) {
            puVar32 = puVar24 + 1;
            if (puVar24 == (uint *)0x0) {
              puVar32 = (uint *)0x0;
            }
            goto LAB_14c6c9c7f;
          }
          uVar17 = puVar24[2];
        }
      }
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
LAB_14c6c9c7f:
        FVar25 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_148.Hash.SecondaryData;
        }
        uVar17 = *(uint *)((longlong)FVar25 +
                          (ulonglong)(local_148.HashSize - 1U & local_218._4_4_) * 4);
        while (uVar17 != 0xffffffff) {
          puVar24 = (uint *)((longlong)(int)uVar17 * 0x10 + local_148.Elements._0_8_);
          if (*puVar24 == local_218._4_4_) goto LAB_14c6c9ce2;
          uVar17 = puVar24[2];
        }
      }
      puVar24 = (uint *)0x0;
LAB_14c6c9ce2:
      uVar17 = *puVar32;
      puVar32 = puVar24 + 1;
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      uVar3 = *puVar32;
      uVar16 = 0;
      if ((int)uVar17 < (int)local_f0) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_218 = pTVar6;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar8 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10);
      dVar9 = *(double *)(local_f8.Data + (longlong)(int)uVar17 * 0x10 + 8);
      uVar17 = 0;
      if ((int)uVar3 < (int)local_f0) {
        uVar17 = ~uVar3 >> 0x1f;
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
      dVar10 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10);
      dVar11 = *(double *)(local_f8.Data + (longlong)(int)uVar3 * 0x10 + 8);
      dVar36 = (dVar8 - dVar10) * dVar34 - (dVar9 - dVar11) * dVar33;
      if (dVar12 <= (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar22,
                                     SUB84(dVar36,0) & uVar30)) {
        dVar36 = ((local_1e0._s_0.X - dVar10) * dVar34 - (local_1e0._s_0.Y - dVar11) * dVar33) /
                 dVar36;
        if (dVar35 <= dVar36) {
          dVar36 = dVar35;
        }
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
      }
      else {
        dVar36 = dVar35;
        if (dVar8 * dVar8 + dVar9 * dVar9 <= dVar10 * dVar10 + dVar11 * dVar11) {
          dVar36 = 0.0;
        }
      }
      if ((dVar36 < param_6) || (uVar28 = (uint)pTVar6, dVar35 - dVar36 < param_6)) {
        iVar15 = pTVar13->ArrayNum;
        iVar19 = 0;
        if (iVar15 != 0) {
          uVar18 = 0;
          if ((int)(iVar15 - 1U) < iVar15) {
            uVar18 = ~(iVar15 - 1U) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar19 = pTVar13->ArrayNum;
          pFVar29 = (pTVar13->AllocatorInstance).Data;
          if ((*(int *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x28) == 0) &&
             (*(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + -0x20) == uVar28)) goto LAB_14c6c9f39;
        }
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        pTVar13->ArrayNum = iVar19 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(undefined4 *)(pFVar29 + (longlong)iVar19 * 0x28) = 0;
        *(uint *)(pFVar29 + (longlong)iVar19 * 0x28 + 8) = uVar28;
      }
      else {
        iVar15 = pTVar13->ArrayNum;
        if (iVar15 == pTVar13->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        lVar20 = (longlong)iVar15;
        pTVar13->ArrayNum = iVar15 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar29 + lVar20 * 0x28 + 0x10) = dVar36;
        *(undefined4 *)(pFVar29 + lVar20 * 0x28) = 1;
        *(uint *)(pFVar29 + lVar20 * 0x28 + 8) = uVar18;
      }
LAB_14c6c9f39:
      pFVar31 = pFVar31 + 4;
      uVar23 = (ulonglong)local_228 & 0xffffffff;
      pTVar21 = local_220;
      pFVar26 = local_240;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TQuadricError<double>,int> @ 14c6ca2b0

void __cdecl
DefaultConstructItems<UE::Geometry::TQuadricError<double>,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x40);
    do {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      puVar1[-4] = 0;
      puVar1[-5] = 0;
      puVar1[-6] = 0;
      puVar1[-7] = 0;
      puVar1[-8] = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int> @ 14c6ca300

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UE::Geometry::FMeshBevel::DisplaceVertices'::__l2::FEdgePathInsetLines,int> @ 14c6ca330

void __cdecl
DefaultConstructItems<_UE::Geometry::FMeshBevel::DisplaceVertices_::__l2::FEdgePathInsetLines,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeVertexEncoding,int> @ 14c6ca360

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeVertexEncoding,int>
          (void *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    param_1 = (undefined8 *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FFFDLattice::FEmbedding,int> @ 14c6ca3a0

void __cdecl
DefaultConstructItems<UE::Geometry::FFFDLattice::FEmbedding,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int> @ 14c6ca3e0

void __cdecl
DefaultConstructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[2] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
      *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0;
      UE::Geometry::FIndexFlagSet::InitManual((FIndexFlagSet *)(puVar1 + 2),true,-1);
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0xffffffff;
      puVar1[0x12] = 0;
      *(undefined4 *)(puVar1 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x9c) = 0xffffffff;
      puVar1[0x16] = 0;
      *(undefined4 *)(puVar1 + 0x17) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x80;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
      puVar1[0x1a] = 0;
      *(undefined4 *)(puVar1 + 0x1b) = 0;
      UE::Geometry::FIndexFlagSet::InitManual((FIndexFlagSet *)(puVar1 + 0xf),true,-1);
      puVar1[0x1c] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x20] = 0;
      puVar1[0x21] = 0;
      puVar1[0x22] = 0;
      puVar1[0x23] = 0;
      puVar1[0x26] = 0;
      *(undefined4 *)(puVar1 + 0x27) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x13c) = 0x80;
      *(undefined4 *)(puVar1 + 0x28) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x144) = 0;
      puVar1[0x2a] = 0;
      *(undefined4 *)(puVar1 + 0x2b) = 0;
      puVar1[0x2c] = 0;
      puVar1[0x2d] = 0;
      puVar1[0x2e] = 0;
      puVar1[0x2f] = 0;
      puVar1[0x30] = 0;
      puVar1[0x31] = 0;
      puVar1[0x32] = 0;
      puVar1[0x33] = 0;
      puVar1[0x34] = 0;
      puVar1[0x35] = 0;
      puVar1 = puVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int> @ 14c6ca5b0

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int> @ 14c6ca5e0

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TSampleSetStatistics<double>::FFixedCountData,int> @ 14c6ca610

void __cdecl
DefaultConstructItems<UE::Geometry::TSampleSetStatistics<double>::FFixedCountData,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int> @ 14c6ca620

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int> @ 14c6ca650

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-2] = 0x7fefffffffffffff;
      puVar1[-1] = 0x7fefffffffffffff;
      *puVar1 = 0x7fefffffffffffff;
      puVar1[1] = 0xffefffffffffffff;
      puVar1[2] = 0xffefffffffffffff;
      puVar1[3] = 0xffefffffffffffff;
      puVar1[7] = 0xffffffffffffffff;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int> @ 14c6ca6b0

void __cdecl
DefaultConstructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FMeshBevel::FOneRingWedge,int> @ 14c6ca700

void __cdecl
DefaultConstructItems<UE::Geometry::FMeshBevel::FOneRingWedge,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
      *(undefined1 *)(lVar1 + 0x34) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int> @ 14c6ca740

void __cdecl
DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FMeshVertexCurvatureCache::FVertexCurvature,int> @ 14c6ca770

void __cdecl
DefaultConstructItems<UE::Geometry::FMeshVertexCurvatureCache::FVertexCurvature,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UELocal::FVertexSplit,int> @ 14c6ca7a0

void __cdecl DefaultConstructItems<UELocal::FVertexSplit,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge,int> @ 14c6ca7d0

void __cdecl
DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::QEdge,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x48);
    do {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      puVar1[-4] = 0;
      puVar1[-5] = 0;
      puVar1[-6] = 0;
      puVar1[-7] = 0;
      puVar1[-8] = 0;
      *(undefined4 *)(puVar1 + -9) = 0;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge,int> @ 14c6ca820

void __cdecl
DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::QEdge,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Geometry::TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
              ((TAttrBasedQuadricError<double> *)((longlong)param_1 + 8));
    *(undefined4 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x100);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge,int> @ 14c6ca870

void __cdecl
DefaultConstructItems<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::QEdge,int>
          (void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x48);
    do {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      puVar2[-4] = 0;
      puVar2[-5] = 0;
      puVar2[-6] = 0;
      puVar2[-7] = 0;
      puVar2[-8] = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[3] = uVar1;
      puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + -9) = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x12;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TAttrBasedQuadricError<double>,int> @ 14c6ca8e0

void __cdecl
DefaultConstructItems<UE::Geometry::TAttrBasedQuadricError<double>,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x40);
    do {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      puVar2[-4] = 0;
      puVar2[-5] = 0;
      puVar2[-6] = 0;
      puVar2[-7] = 0;
      puVar2[-8] = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[3] = uVar1;
      puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0x3ff0000000000000;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[8] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[9] = uVar1;
      puVar2[10] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[0xb] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[0xc] = uVar1;
      puVar2[0xd] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[0xe] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[0xf] = uVar1;
      puVar2[0x10] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x1c;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TVolPresQuadricError<double>,int> @ 14c6ca9d0

void __cdecl
DefaultConstructItems<UE::Geometry::TVolPresQuadricError<double>,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x40);
    do {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      puVar2[-4] = 0;
      puVar2[-5] = 0;
      puVar2[-6] = 0;
      puVar2[-7] = 0;
      puVar2[-8] = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[3] = uVar1;
      puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[5] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int> @ 14c6caa40

void __cdecl
DestructItems<UE::Geometry::FMeshBevel::FBevelVertex_InteriorVertex,int>
          (FBevelVertex_InteriorVertex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->BorderFrameWeight).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FBevelVertex_InteriorVertex *)(&param_1->BorderFrameWeight + 1);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopology::FCorner,int> @ 14c6caa80

void __cdecl DestructItems<UE::Geometry::FGroupTopology::FCorner,int>(FCorner *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NeighbourGroupIDs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FCorner *)(&param_1->NeighbourGroupIDs + 1);
  }
  return;
}

// DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int> @ 14c6caac0

void __cdecl
DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
          (FDynamicMeshInstance *param_1,int param_2)

{
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Transforms).Transforms.AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int> @ 14c6cab10

void __cdecl
DestructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
          (FEdgeEncoding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`UE::Geometry::FMeshBevel::DisplaceVertices'::__l2::FEdgePathInsetLines,int> @ 14c6cab50

void __cdecl
DestructItems<_UE::Geometry::FMeshBevel::DisplaceVertices_::__l2::FEdgePathInsetLines,int>
          (FEdgePathInsetLines *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->InsetLines1).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->InsetLines0).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int> @ 14c6caba0

void __cdecl
DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>(FExtrusionInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->InitialToOffsetMapV).field_0x40;
    do {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar1[10],*(int *)(puVar1 + 0xb));
      if ((void *)puVar1[10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[10]);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar1[8],*(int *)(puVar1 + 9));
      if ((void *)puVar1[8] != (void *)0x0) {
        FMemory::Free((void *)puVar1[8]);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)puVar1[6],*(int *)(puVar1 + 7));
      if ((void *)puVar1[6] != (void *)0x0) {
        FMemory::Free((void *)puVar1[6]);
      }
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      UE::Geometry::FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops
                ((FMeshRegionBoundaryLoops *)(puVar1 + -0x2c));
      puVar1 = puVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int> @ 14c6caca0

void __cdecl
DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
          (FFaceEncoding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int>
              ((FFaceVertexEncoding *)(param_1->Vertices).AllocatorInstance.Data,
               (param_1->Vertices).ArrayNum);
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int> @ 14c6cacf0

void __cdecl
DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int>
          (FFaceVertexEncoding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Deltas).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Weights).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopology::FGroup,int> @ 14c6cad40

void __cdecl DestructItems<UE::Geometry::FGroupTopology::FGroup,int>(FGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Boundaries;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>
                ((FGroupBoundary *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int> @ 14c6cadb0

void __cdecl
DestructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>(FGroupBoundary *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NeighbourGroupIDs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->GroupEdges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int> @ 14c6cae00

void __cdecl
DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int>(FGroupEdge *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Span).Edges;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int> @ 14c6cae60

void __cdecl
DestructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int>
          (FGroupInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TriangleIDs;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int> @ 14c6caea0

void __cdecl
DestructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int>(FInsetInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->StitchPolygonIDs;
    do {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)pTVar2[-1].AllocatorInstance.Data,
                 pTVar2[-1].ArrayNum);
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)
                 (((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
                 AllocatorInstance).Data,
                 ((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
                 ArrayNum);
      pFVar1 = (((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)
                 (((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 AllocatorInstance).Data,
                 ((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 ArrayNum);
      pFVar1 = (((TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FInsetInfo *)(pTVar2 + -4))->InitialTriangles).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FMeshBevel::FOneRingWedge,int> @ 14c6caf50

void __cdecl
DestructItems<UE::Geometry::FMeshBevel::FOneRingWedge,int>(FOneRingWedge *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Triangles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIEdge,int> @ 14c6caf90

void __cdecl
DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIEdge,int>(FROIEdge *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Span).Edges;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int> @ 14c6caff0

void __cdecl
DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>(FROIFace *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->InteriorVerts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BoundaryVerts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UELocal::FVertexSplit,int> @ 14c6cb040

void __cdecl DestructItems<UELocal::FVertexSplit,int>(FVertexSplit *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FVertexSplit *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1 = param_1 + 1;
    lVar2 = 2;
    pFVar3 = param_1;
    do {
      pFVar1 = pFVar3[-1].TriSets[1].AllocatorInstance.Data;
      pFVar3 = (FVertexSplit *)(pFVar3[-1].TriSets + 1);
      lVar2 = lVar2 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar2 != 0);
  }
  return;
}

// DestructItems<TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>,int> @ 14c6cb0b0

void __cdecl
DestructItems<TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TTuple<int,TTuple<signed_char,signed_char>_>,TSizedDefaultAllocator<32>_> *param_1
          ,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int> @ 14c6cb0f0

void __cdecl
DestructItems<TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>,int>
          (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int> @ 14c6cb130

void __cdecl
DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
          (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int> @ 14c6cb190

void __cdecl
DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
          (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Emplace<TPairInitializer<int_const_&,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence_const_&>_> @ 14c6cbc20

FSetElementId __thiscall
TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence_const_&>_>
          (void *this,
          TPairInitializer<int_const_&,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence_const_&>
          *param_1,bool *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  char *in_R9;
  int iVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_38);
  if (local_38.Pointer != (uint *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    uVar2 = puVar1[1];
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar1;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar2;
    uVar2 = puVar1[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = puVar1[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = uVar2;
    uVar2 = puVar1[5];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = puVar1[4];
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = uVar2;
    uVar2 = puVar1[7];
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = puVar1[6];
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = uVar2;
    uVar2 = puVar1[9];
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = puVar1[8];
    *(undefined8 *)((longlong)local_38.Pointer + 0x50) = uVar2;
    *(uint *)((longlong)local_38.Pointer + 0x58) = 0xffffffff;
  }
  bVar9 = false;
  iVar8 = 1;
  uVar7 = *(uint *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)this;
      do {
        if (*(uint *)((longlong)iVar6 * 0x60 + lVar5) == uVar7) {
          bVar9 = iVar6 != -1;
          if (bVar9) {
            memmove((void *)((longlong)iVar6 * 0x60 + lVar5),local_38.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + 0x58 + lVar5);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    uVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar4) {
      uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x5c) = uVar7;
      lVar5 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar5 = (longlong)this + 0x38;
      }
      uVar3 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x58) = *(uint *)(lVar5 + uVar3 * 4);
      *(int *)(lVar5 + uVar3 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// FlipToDelaunayImpl<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6ccce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
`anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,int param_3,double param_4)

{
  uint *puVar1;
  TNode *pTVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FIntrinsicEdgeFlipMesh *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  EMeshResult EVar13;
  int iVar14;
  int iVar15;
  TNode *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  TBitArray<FDefaultBitArrayAllocator> *this;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  double dVar24;
  undefined1 auStackY_138 [32];
  int local_108;
  undefined8 local_100;
  uint local_f8;
  FIntrinsicEdgeFlipMesh *local_f0;
  FIntrinsicEdgeFlipMesh *local_e8;
  double local_e0;
  undefined4 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  code *local_c8;
  FIntrinsicEdgeFlipMesh **local_c0;
  FSparseArrayAllocationInfo local_b8;
  FEdgeFlipInfo local_a8;
  FIndexFIFO local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar10 = 1 < param_2->HashSize;
  local_f0 = param_1;
  local_d0 = param_2;
  if (!bVar10) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  piVar23 = (int *)&(param_2->Elements).field_0xc;
  piVar20 = (int *)&(param_2->Elements).field_0x8;
  *piVar20 = 0;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,piVar23);
  }
  this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar11 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this,0);
  }
  if (bVar10) {
    param_2->HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  local_c0 = &local_e8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_e8 = param_1;
  local_e0 = param_4;
  _anon_D86B23C6::FIndexFIFO::FIndexFIFO
            (&local_88,(IndexEnumerable)&param_1->_padding_,
             (TFunctionRef<bool___cdecl(int)> *)&local_c8);
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_108 = 0;
  iVar11 = 0;
  while (pTVar16 = local_88.IDs.Tail, pTVar2 = (local_88.IDs.Tail)->NextNode, pTVar2 != (TNode *)0x0
        ) {
    uVar21 = pTVar2->Item;
    pTVar2->Item = 0;
    local_88.IDs.Tail = pTVar2;
    ::operator_delete(pTVar16,0x10);
    if ((((int)uVar21 < 0) || (local_88.IsEnqueued.NumBits <= (int)uVar21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar17 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
    }
    uVar12 = uVar21;
    if ((int)uVar21 < 0) {
      uVar12 = uVar21 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar21 & 0x1f));
    pTVar16 = local_88.IDs.Tail;
    if (param_3 <= iVar11) break;
    if ((-1 < (int)uVar21) &&
       ((int)uVar21 <
        (int)local_e8->_padding_ * 0x200 + *(int *)((longlong)&local_e8->_padding_ + 4))) {
      if (((ushort)(*(short *)(*(longlong *)(local_e8->_padding_ + (ulonglong)(uVar21 >> 9) * 8) +
                              (ulonglong)(uVar21 & 0x1ff) * 2) - 1U) < 0xfffe) &&
         ((*(int *)(*(longlong *)(local_e8->_padding_ + (ulonglong)(uVar21 >> 9) * 8) + 0xc +
                   (ulonglong)(uVar21 & 0x1ff) * 0x10) != -1 &&
          (dVar24 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight
                              ((FSimpleIntrinsicEdgeFlipMesh *)local_e8,uVar21), dVar24 < local_e0))
         )) {
        local_a8._20_8_ = 0xffffffffffffffff;
        local_a8.bHadSameOrientations = true;
        local_a8._4_8_ = uVar6;
        local_a8._12_8_ = uVar7;
        EVar13 = UE::Geometry::FIntrinsicEdgeFlipMesh::FlipEdge(param_1,uVar21,&local_a8);
        pFVar9 = local_f0;
        if (EVar13 == Ok) {
          local_108 = iVar11 + 1;
          lVar22 = 0;
          do {
            uVar12 = *(uint *)(local_88.IsEnqueued.AllocatorInstance.InlineData + lVar22 * 4 + -0xc)
            ;
            uVar18 = (ulonglong)(uVar12 & 0x1ff);
            lVar3 = *(longlong *)(pFVar9->_padding_ + (ulonglong)(uVar12 >> 9) * 8);
            local_100 = *(undefined8 *)(lVar3 + uVar18 * 0xc);
            local_f8 = *(uint *)(lVar3 + 8 + uVar18 * 0xc);
            uVar8 = local_100;
            if ((uint)local_100 == uVar21) {
              iVar11 = 0;
            }
            else if ((uint)((ulonglong)local_100 >> 0x20) == uVar21) {
              iVar11 = 1;
            }
            else {
              iVar11 = -1;
              if (local_f8 == uVar21) {
                iVar11 = 2;
              }
            }
            iVar15 = iVar11 + 1;
            iVar15 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            local_100 = uVar8;
            if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar15 & 0x1f);
            iVar14 = iVar15;
            if (iVar15 < 0) {
              iVar14 = iVar15 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar15;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            iVar11 = iVar11 + 2;
            iVar11 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar11 & 0x1f);
            iVar15 = iVar11;
            if (iVar11 < 0) {
              iVar15 = iVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar11;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < 2);
          piVar20 = (int *)&(local_d0->Elements).field_0x8;
          param_1 = local_f0;
          param_2 = local_d0;
        }
        else {
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          if (iVar11 == 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)param_2,piVar20,piVar23);
            TBitArray<FDefaultBitArrayAllocator>::Add(this,false);
          }
          else {
            iVar15 = *(int *)&(param_2->Elements).field_0x30;
            iVar11 = iVar11 + -1;
            lVar22 = *(longlong *)&param_2->Elements;
            iVar14 = *(int *)(lVar22 + 4 + (longlong)iVar15 * 0xc);
            *(int *)&(param_2->Elements).field_0x30 = iVar14;
            *(int *)&(param_2->Elements).field_0x34 = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(lVar22 + (longlong)iVar14 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)param_2,&local_b8,iVar15);
          if (local_b8.Pointer != (uint *)0x0) {
            *(uint *)local_b8.Pointer = uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
          }
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          uVar21 = *(uint *)local_b8.Pointer;
          piVar23 = piVar20;
          if ((*piVar20 - iVar11 != 1) && (*piVar20 != iVar11)) {
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            iVar11 = *(int *)((longlong)FVar19 + (ulonglong)(param_2->HashSize - 1U & uVar21) * 4);
            if (iVar11 != -1) {
              lVar22 = *(longlong *)&param_2->Elements;
              do {
                if (*(uint *)(lVar22 + (longlong)iVar11 * 0xc) == uVar21) {
                  piVar20 = (int *)&(param_2->Elements).field_0x8;
                  piVar23 = (int *)&(param_2->Elements).field_0x8;
                  if (iVar11 != -1) {
                    *(uint *)(lVar22 + (longlong)iVar11 * 0xc) = uVar21;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)param_2,local_b8.Index,1);
                    goto LAB_14c6cce00;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar22 + 4 + (longlong)iVar11 * 0xc);
              } while (iVar11 != -1);
            }
          }
          piVar20 = piVar23;
          uVar12 = *piVar20 - *(int *)&(param_2->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar11 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_d8 = (undefined4)lVar22;
            iVar11 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar12 < 1) || (iVar11 <= param_2->HashSize)) {
            uVar21 = param_2->HashSize - 1U & uVar21;
            *(uint *)((longlong)local_b8.Pointer + 8) = uVar21;
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            uVar18 = (longlong)param_2->HashSize - 1U & (longlong)(int)uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = *(uint *)((longlong)FVar19 + uVar18 * 4);
            *(int *)((longlong)FVar19 + uVar18 * 4) = local_b8.Index;
          }
          else {
            param_2->HashSize = iVar11;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
          }
        }
LAB_14c6cce00:
        piVar23 = (int *)&(param_2->Elements).field_0xc;
        this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
        iVar11 = local_108;
      }
    }
  }
  while (pTVar16 != (TNode *)0x0) {
    local_88.IDs.Tail = pTVar16->NextNode;
    ::operator_delete(pTVar16,0x10);
    pTVar16 = local_88.IDs.Tail;
  }
  if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    local_88.IDs.Tail = pTVar16;
    FMemory::Free((void *)local_88.IsEnqueued.AllocatorInstance.SecondaryData);
  }
  return iVar11;
}

// FlipToDelaunayImpl<UE::Geometry::FIntrinsicMesh> @ 14c6cd3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
`anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          int param_3,double param_4)

{
  uint *puVar1;
  TNode *pTVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FIntrinsicMesh *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  EMeshResult EVar13;
  int iVar14;
  int iVar15;
  TNode *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  TBitArray<FDefaultBitArrayAllocator> *this;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  double dVar24;
  undefined1 auStackY_138 [32];
  int local_108;
  undefined8 local_100;
  uint local_f8;
  FIntrinsicMesh *local_f0;
  FIntrinsicMesh *local_e8;
  double local_e0;
  undefined4 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  code *local_c8;
  FIntrinsicMesh **local_c0;
  FSparseArrayAllocationInfo local_b8;
  FEdgeFlipInfo local_a8;
  FIndexFIFO local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar10 = 1 < param_2->HashSize;
  local_f0 = param_1;
  local_d0 = param_2;
  if (!bVar10) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  piVar23 = (int *)&(param_2->Elements).field_0xc;
  piVar20 = (int *)&(param_2->Elements).field_0x8;
  *piVar20 = 0;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,piVar23);
  }
  this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar11 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this,0);
  }
  if (bVar10) {
    param_2->HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  local_c0 = &local_e8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_e8 = param_1;
  local_e0 = param_4;
  _anon_D86B23C6::FIndexFIFO::FIndexFIFO
            (&local_88,(IndexEnumerable)&param_1->_padding_,
             (TFunctionRef<bool___cdecl(int)> *)&local_c8);
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_108 = 0;
  iVar11 = 0;
  while (pTVar16 = local_88.IDs.Tail, pTVar2 = (local_88.IDs.Tail)->NextNode, pTVar2 != (TNode *)0x0
        ) {
    uVar21 = pTVar2->Item;
    pTVar2->Item = 0;
    local_88.IDs.Tail = pTVar2;
    ::operator_delete(pTVar16,0x10);
    if ((((int)uVar21 < 0) || (local_88.IsEnqueued.NumBits <= (int)uVar21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar17 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
    }
    uVar12 = uVar21;
    if ((int)uVar21 < 0) {
      uVar12 = uVar21 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar21 & 0x1f));
    pTVar16 = local_88.IDs.Tail;
    if (param_3 <= iVar11) break;
    if ((-1 < (int)uVar21) &&
       ((int)uVar21 <
        (int)local_e8->_padding_ * 0x200 + *(int *)((longlong)&local_e8->_padding_ + 4))) {
      if (((ushort)(*(short *)(*(longlong *)(local_e8->_padding_ + (ulonglong)(uVar21 >> 9) * 8) +
                              (ulonglong)(uVar21 & 0x1ff) * 2) - 1U) < 0xfffe) &&
         ((*(int *)(*(longlong *)(local_e8->_padding_ + (ulonglong)(uVar21 >> 9) * 8) + 0xc +
                   (ulonglong)(uVar21 & 0x1ff) * 0x10) != -1 &&
          (dVar24 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight
                              ((FSimpleIntrinsicEdgeFlipMesh *)local_e8,uVar21), dVar24 < local_e0))
         )) {
        local_a8._20_8_ = 0xffffffffffffffff;
        local_a8.bHadSameOrientations = true;
        local_a8._4_8_ = uVar6;
        local_a8._12_8_ = uVar7;
        EVar13 = UE::Geometry::FIntrinsicMesh::FlipEdge(param_1,uVar21,&local_a8);
        pFVar9 = local_f0;
        if (EVar13 == Ok) {
          local_108 = iVar11 + 1;
          lVar22 = 0;
          do {
            uVar12 = *(uint *)(local_88.IsEnqueued.AllocatorInstance.InlineData + lVar22 * 4 + -0xc)
            ;
            uVar18 = (ulonglong)(uVar12 & 0x1ff);
            lVar3 = *(longlong *)(pFVar9->_padding_ + (ulonglong)(uVar12 >> 9) * 8);
            local_100 = *(undefined8 *)(lVar3 + uVar18 * 0xc);
            local_f8 = *(uint *)(lVar3 + 8 + uVar18 * 0xc);
            uVar8 = local_100;
            if ((uint)local_100 == uVar21) {
              iVar11 = 0;
            }
            else if ((uint)((ulonglong)local_100 >> 0x20) == uVar21) {
              iVar11 = 1;
            }
            else {
              iVar11 = -1;
              if (local_f8 == uVar21) {
                iVar11 = 2;
              }
            }
            iVar15 = iVar11 + 1;
            iVar15 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            local_100 = uVar8;
            if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar15 & 0x1f);
            iVar14 = iVar15;
            if (iVar15 < 0) {
              iVar14 = iVar15 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar15;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            iVar11 = iVar11 + 2;
            iVar11 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar11 & 0x1f);
            iVar15 = iVar11;
            if (iVar11 < 0) {
              iVar15 = iVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar11;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < 2);
          piVar20 = (int *)&(local_d0->Elements).field_0x8;
          param_1 = local_f0;
          param_2 = local_d0;
        }
        else {
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          if (iVar11 == 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)param_2,piVar20,piVar23);
            TBitArray<FDefaultBitArrayAllocator>::Add(this,false);
          }
          else {
            iVar15 = *(int *)&(param_2->Elements).field_0x30;
            iVar11 = iVar11 + -1;
            lVar22 = *(longlong *)&param_2->Elements;
            iVar14 = *(int *)(lVar22 + 4 + (longlong)iVar15 * 0xc);
            *(int *)&(param_2->Elements).field_0x30 = iVar14;
            *(int *)&(param_2->Elements).field_0x34 = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(lVar22 + (longlong)iVar14 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)param_2,&local_b8,iVar15);
          if (local_b8.Pointer != (uint *)0x0) {
            *(uint *)local_b8.Pointer = uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
          }
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          uVar21 = *(uint *)local_b8.Pointer;
          piVar23 = piVar20;
          if ((*piVar20 - iVar11 != 1) && (*piVar20 != iVar11)) {
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            iVar11 = *(int *)((longlong)FVar19 + (ulonglong)(param_2->HashSize - 1U & uVar21) * 4);
            if (iVar11 != -1) {
              lVar22 = *(longlong *)&param_2->Elements;
              do {
                if (*(uint *)(lVar22 + (longlong)iVar11 * 0xc) == uVar21) {
                  piVar20 = (int *)&(param_2->Elements).field_0x8;
                  piVar23 = (int *)&(param_2->Elements).field_0x8;
                  if (iVar11 != -1) {
                    *(uint *)(lVar22 + (longlong)iVar11 * 0xc) = uVar21;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)param_2,local_b8.Index,1);
                    goto LAB_14c6cd4e0;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar22 + 4 + (longlong)iVar11 * 0xc);
              } while (iVar11 != -1);
            }
          }
          piVar20 = piVar23;
          uVar12 = *piVar20 - *(int *)&(param_2->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar11 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_d8 = (undefined4)lVar22;
            iVar11 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar12 < 1) || (iVar11 <= param_2->HashSize)) {
            uVar21 = param_2->HashSize - 1U & uVar21;
            *(uint *)((longlong)local_b8.Pointer + 8) = uVar21;
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            uVar18 = (longlong)param_2->HashSize - 1U & (longlong)(int)uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = *(uint *)((longlong)FVar19 + uVar18 * 4);
            *(int *)((longlong)FVar19 + uVar18 * 4) = local_b8.Index;
          }
          else {
            param_2->HashSize = iVar11;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
          }
        }
LAB_14c6cd4e0:
        piVar23 = (int *)&(param_2->Elements).field_0xc;
        this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
        iVar11 = local_108;
      }
    }
  }
  while (pTVar16 != (TNode *)0x0) {
    local_88.IDs.Tail = pTVar16->NextNode;
    ::operator_delete(pTVar16,0x10);
    pTVar16 = local_88.IDs.Tail;
  }
  if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    local_88.IDs.Tail = pTVar16;
    FMemory::Free((void *)local_88.IsEnqueued.AllocatorInstance.SecondaryData);
  }
  return iVar11;
}

// FlipToDelaunayImpl<UE::Geometry::FIntrinsicTriangulation> @ 14c6cdaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
`anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicTriangulation>
          (FIntrinsicTriangulation *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,int param_3,double param_4)

{
  uint *puVar1;
  TNode *pTVar2;
  FIndex2i_u_0_s_0 FVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FIndex2i FVar7;
  undefined8 uVar8;
  FIndex2i_u_0 FVar9;
  undefined8 uVar10;
  FIntrinsicTriangulation *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  EMeshResult EVar15;
  int iVar16;
  int iVar17;
  TNode *pTVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  longlong lVar24;
  int *piVar25;
  double dVar26;
  undefined1 auStackY_168 [32];
  int local_128;
  undefined8 local_120;
  uint local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  FIntrinsicTriangulation *local_108;
  undefined8 local_100;
  uint local_f8;
  undefined8 local_f4;
  uint local_ec;
  FIntrinsicTriangulation *local_e8;
  double local_e0;
  undefined4 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  FEdgeFlipInfo local_c8;
  code *local_a8;
  FIntrinsicTriangulation **local_a0;
  FSparseArrayAllocationInfo local_98;
  FIndexFIFO local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar12 = 1 < param_2->HashSize;
  local_108 = param_1;
  local_d0 = param_2;
  if (!bVar12) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  piVar25 = (int *)&(param_2->Elements).field_0x8;
  *piVar25 = 0;
  if (*(int *)&(param_2->Elements).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,(int *)&(param_2->Elements).field_0xc);
  }
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar13 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,0);
  }
  if (bVar12) {
    param_2->HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  local_a0 = &local_e8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicTriangulation>'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_e8 = param_1;
  local_e0 = param_4;
  _anon_D86B23C6::FIndexFIFO::FIndexFIFO
            (&local_88,(IndexEnumerable)&param_1->_padding_,
             (TFunctionRef<bool___cdecl(int)> *)&local_a8);
  FVar9 = _UNK_15060db28;
  uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_128 = 0;
LAB_14c6cdbe0:
  do {
    do {
      pTVar18 = local_88.IDs.Tail;
      pTVar2 = (local_88.IDs.Tail)->NextNode;
      if (pTVar2 == (TNode *)0x0) {
joined_r0x00014c6ce26a:
        while (pTVar18 != (TNode *)0x0) {
          local_88.IDs.Tail = pTVar18->NextNode;
          ::operator_delete(pTVar18,0x10);
          pTVar18 = local_88.IDs.Tail;
        }
        if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
           ) {
          local_88.IDs.Tail = pTVar18;
          FMemory::Free((void *)local_88.IsEnqueued.AllocatorInstance.SecondaryData);
        }
        return local_128;
      }
      uVar23 = pTVar2->Item;
      pTVar2->Item = 0;
      local_88.IDs.Tail = pTVar2;
      ::operator_delete(pTVar18,0x10);
      if ((((int)uVar23 < 0) || (local_88.IsEnqueued.NumBits <= (int)uVar23)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        iVar13 = (*pcVar6)();
        return iVar13;
      }
      FVar20 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
      {
        FVar20 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
      }
      uVar14 = uVar23;
      if ((int)uVar23 < 0) {
        uVar14 = uVar23 + 0x1f;
      }
      puVar1 = (uint *)((longlong)FVar20 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar23 & 0x1f));
      pTVar18 = local_88.IDs.Tail;
      if (param_3 <= local_128) goto joined_r0x00014c6ce26a;
    } while (((int)uVar23 < 0) ||
            ((int)local_e8->_padding_ * 0x200 + *(int *)((longlong)&local_e8->_padding_ + 4) <=
             (int)uVar23));
    uVar19 = (ulonglong)(uVar23 >> 9);
    uVar21 = (ulonglong)(uVar23 & 0x1ff);
  } while ((0xfffd < (ushort)(*(short *)(*(longlong *)(local_e8->_padding_ + uVar19 * 8) +
                                        uVar21 * 2) - 1U)) ||
          ((*(int *)(*(longlong *)(local_e8->_padding_ + uVar19 * 8) + 0xc + uVar21 * 0x10) == -1 ||
           (dVar26 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight
                               ((FSimpleIntrinsicEdgeFlipMesh *)local_e8,uVar23), local_e0 <= dVar26
           ))));
  local_c8._4_8_ = uVar8;
  local_c8._12_8_ = FVar9;
  local_c8._20_8_ = 0xffffffffffffffff;
  local_c8.bHadSameOrientations = true;
  lVar24 = *(longlong *)(param_1->_padding_ + uVar19 * 8);
  if (*(int *)(lVar24 + 0xc + uVar21 * 0x10) != -1) {
    FVar3 = ((FIndex2i_u_0 *)(lVar24 + 8 + uVar21 * 0x10))->_s_0;
    uVar21 = (ulonglong)(FVar3.B & 0x1ff);
    lVar24 = *(longlong *)(param_1->_padding_ + ((ulonglong)FVar3 >> 0x29) * 8);
    local_100 = *(undefined8 *)(lVar24 + uVar21 * 0xc);
    local_f8 = *(uint *)(lVar24 + 8 + uVar21 * 0xc);
    if ((uint)local_100 == uVar23) {
      uStack_10c = 0;
    }
    else if ((uint)((ulonglong)local_100 >> 0x20) == uVar23) {
      uStack_10c = 1;
    }
    else {
      uStack_10c = 0xffffffff;
      if (local_f8 == uVar23) {
        uStack_10c = 2;
      }
    }
    uVar19 = (ulonglong)(FVar3.A & 0x1ff);
    lVar24 = *(longlong *)(param_1->_padding_ + (((ulonglong)FVar3 & 0xffffffff) >> 9) * 8);
    local_f4 = *(undefined8 *)(lVar24 + uVar19 * 0xc);
    local_ec = *(uint *)(lVar24 + 8 + uVar19 * 0xc);
    if ((uint)local_f4 == uVar23) {
      local_110 = 0;
    }
    else if ((uint)((ulonglong)local_f4 >> 0x20) == uVar23) {
      local_110 = 1;
    }
    else {
      local_110 = 0xffffffff;
      if (local_ec == uVar23) {
        local_110 = 2;
      }
    }
    EVar15 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FlipEdge
                       ((FSimpleIntrinsicEdgeFlipMesh *)param_1,uVar23,&local_c8);
    pFVar11 = local_108;
    if (EVar15 == Ok) {
      FVar7.field0_0x0._s_0.B = uStack_10c;
      FVar7.field0_0x0._s_0.A = local_110;
      UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::OnFlipEdge
                (&local_108->SignpostData,uVar23,(FIndex2i)FVar3,(FIndex2i)local_c8._12_8_,FVar7,
                 *(double *)
                  (*(longlong *)(local_108->_padding_ + ((ulonglong)FVar3 >> 0x29) * 8) + 8 +
                  uVar21 * 0x18),
                 *(double *)
                  (*(longlong *)(local_108->_padding_ + (((ulonglong)FVar3 & 0xffffffff) >> 9) * 8)
                   + 8 + (ulonglong)(FVar3.A & 0x1ff) * 0x18));
      local_128 = local_128 + 1;
      lVar24 = 0;
      do {
        uVar14 = *(uint *)((longlong)&local_c8._padding_ + lVar24 * 4 + 4);
        uVar21 = (ulonglong)(uVar14 & 0x1ff);
        lVar4 = *(longlong *)(pFVar11->_padding_ + (ulonglong)(uVar14 >> 9) * 8);
        local_120 = *(undefined8 *)(lVar4 + uVar21 * 0xc);
        local_118 = *(uint *)(lVar4 + 8 + uVar21 * 0xc);
        uVar10 = local_120;
        if ((uint)local_120 == uVar23) {
          iVar13 = 0;
        }
        else if ((uint)((ulonglong)local_120 >> 0x20) == uVar23) {
          iVar13 = 1;
        }
        else {
          iVar13 = -1;
          if (local_118 == uVar23) {
            iVar13 = 2;
          }
        }
        iVar17 = iVar13 + 1;
        iVar17 = *(int *)((longlong)&local_120 +
                         (longlong)
                         (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                                   (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3) * 4);
        local_120 = uVar10;
        if (((iVar17 < 0) || (local_88.IsEnqueued.NumBits <= iVar17)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          iVar13 = (*pcVar6)();
          return iVar13;
        }
        FVar20 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
           ) {
          FVar20 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
        }
        uVar14 = 1 << ((byte)iVar17 & 0x1f);
        iVar16 = iVar17;
        if (iVar17 < 0) {
          iVar16 = iVar17 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar20 + (longlong)(iVar16 >> 5) * 4) & uVar14) == 0) {
          pTVar18 = ::operator_new(0x10);
          pTVar2 = local_88.IDs.Head;
          if (pTVar18 != (TNode *)0x0) {
            pTVar18->NextNode = (TNode *)0x0;
            pTVar18->Item = iVar17;
            local_88.IDs.Head = pTVar18;
            pTVar2->NextNode = pTVar18;
          }
          if (((iVar17 < 0) || (local_88.IsEnqueued.NumBits <= iVar17)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          FVar20 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar20 + (longlong)(iVar16 >> 5) * 4);
          *puVar1 = *puVar1 | uVar14;
        }
        iVar13 = iVar13 + 2;
        iVar13 = *(int *)((longlong)&local_120 +
                         (longlong)
                         (iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                                   (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3) * 4);
        if (((iVar13 < 0) || (local_88.IsEnqueued.NumBits <= iVar13)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          iVar13 = (*pcVar6)();
          return iVar13;
        }
        FVar20 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
           ) {
          FVar20 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
        }
        uVar14 = 1 << ((byte)iVar13 & 0x1f);
        iVar17 = iVar13;
        if (iVar13 < 0) {
          iVar17 = iVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar20 + (longlong)(iVar17 >> 5) * 4) & uVar14) == 0) {
          pTVar18 = ::operator_new(0x10);
          pTVar2 = local_88.IDs.Head;
          if (pTVar18 != (TNode *)0x0) {
            pTVar18->NextNode = (TNode *)0x0;
            pTVar18->Item = iVar13;
            local_88.IDs.Head = pTVar18;
            pTVar2->NextNode = pTVar18;
          }
          if (((iVar13 < 0) || (local_88.IsEnqueued.NumBits <= iVar13)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          FVar20 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar20 + (longlong)(iVar17 >> 5) * 4);
          *puVar1 = *puVar1 | uVar14;
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < 2);
      piVar25 = (int *)&(local_d0->Elements).field_0x8;
      param_2 = local_d0;
      param_1 = local_108;
      goto LAB_14c6cdbe0;
    }
  }
  iVar13 = *(int *)&(param_2->Elements).field_0x34;
  if (iVar13 == 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)param_2,piVar25,
                        (int *)&(param_2->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,false);
  }
  else {
    iVar17 = *(int *)&(param_2->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar24 = *(longlong *)&param_2->Elements;
    iVar16 = *(int *)(lVar24 + 4 + (longlong)iVar17 * 0xc);
    *(int *)&(param_2->Elements).field_0x30 = iVar16;
    *(int *)&(param_2->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar24 + (longlong)iVar16 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)param_2,&local_98,iVar17);
  if (local_98.Pointer != (uint *)0x0) {
    *(uint *)local_98.Pointer = uVar23;
    *(uint *)((longlong)local_98.Pointer + 4) = 0xffffffff;
  }
  iVar13 = *(int *)&(param_2->Elements).field_0x34;
  uVar23 = *(uint *)local_98.Pointer;
  if ((*piVar25 - iVar13 != 1) && (*piVar25 != iVar13)) {
    FVar5 = (param_2->Hash).SecondaryData;
    FVar22 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FVar22 = FVar5;
    }
    iVar13 = *(int *)((longlong)FVar22 + (ulonglong)(param_2->HashSize - 1U & uVar23) * 4);
    if (iVar13 != -1) {
      lVar24 = *(longlong *)&param_2->Elements;
      do {
        if (*(uint *)(lVar24 + (longlong)iVar13 * 0xc) == uVar23) {
          piVar25 = (int *)&(param_2->Elements).field_0x8;
          if (iVar13 != -1) {
            *(uint *)(lVar24 + (longlong)iVar13 * 0xc) = uVar23;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)param_2,local_98.Index,1);
            piVar25 = (int *)&(param_2->Elements).field_0x8;
            goto LAB_14c6cdbe0;
          }
          break;
        }
        iVar13 = *(int *)(lVar24 + 4 + (longlong)iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  uVar14 = *piVar25 - *(int *)&(param_2->Elements).field_0x34;
  if (uVar14 < 4) {
    iVar13 = 1;
  }
  else {
    uVar21 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_d8 = (undefined4)lVar24;
    iVar13 = 1 << ((byte)lVar24 & 0x1f);
  }
  if (((int)uVar14 < 1) || (iVar13 <= param_2->HashSize)) {
    uVar23 = param_2->HashSize - 1U & uVar23;
    *(uint *)((longlong)local_98.Pointer + 8) = uVar23;
    FVar5 = (param_2->Hash).SecondaryData;
    FVar22 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FVar22 = FVar5;
    }
    uVar21 = (longlong)param_2->HashSize - 1U & (longlong)(int)uVar23;
    *(uint *)((longlong)local_98.Pointer + 4) = *(uint *)((longlong)FVar22 + uVar21 * 4);
    *(int *)((longlong)FVar22 + uVar21 * 4) = local_98.Index;
  }
  else {
    param_2->HashSize = iVar13;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  goto LAB_14c6cdbe0;
}

// FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicEdgeFlipMesh> @ 14c6ce2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
`anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicEdgeFlipMesh>
          (FSimpleIntrinsicEdgeFlipMesh *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,int param_3,double param_4)

{
  uint *puVar1;
  TNode *pTVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FSimpleIntrinsicEdgeFlipMesh *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  EMeshResult EVar13;
  int iVar14;
  int iVar15;
  TNode *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  TBitArray<FDefaultBitArrayAllocator> *this;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  double dVar24;
  undefined1 auStackY_138 [32];
  int local_108;
  undefined8 local_100;
  uint local_f8;
  FSimpleIntrinsicEdgeFlipMesh *local_f0;
  FSimpleIntrinsicEdgeFlipMesh *local_e8;
  double local_e0;
  undefined4 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  code *local_c8;
  FSimpleIntrinsicEdgeFlipMesh **local_c0;
  FSparseArrayAllocationInfo local_b8;
  FEdgeFlipInfo local_a8;
  FIndexFIFO local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar10 = 1 < param_2->HashSize;
  local_f0 = param_1;
  local_d0 = param_2;
  if (!bVar10) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  piVar23 = (int *)&(param_2->Elements).field_0xc;
  piVar20 = (int *)&(param_2->Elements).field_0x8;
  *piVar20 = 0;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,piVar23);
  }
  this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar11 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this,0);
  }
  if (bVar10) {
    param_2->HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  local_c0 = &local_e8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicEdgeFlipMesh>'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_e8 = param_1;
  local_e0 = param_4;
  _anon_D86B23C6::FIndexFIFO::FIndexFIFO
            (&local_88,(IndexEnumerable)&param_1->EdgeRefCounts,
             (TFunctionRef<bool___cdecl(int)> *)&local_c8);
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_108 = 0;
  iVar11 = 0;
  while (pTVar16 = local_88.IDs.Tail, pTVar2 = (local_88.IDs.Tail)->NextNode, pTVar2 != (TNode *)0x0
        ) {
    uVar21 = pTVar2->Item;
    pTVar2->Item = 0;
    local_88.IDs.Tail = pTVar2;
    ::operator_delete(pTVar16,0x10);
    if ((((int)uVar21 < 0) || (local_88.IsEnqueued.NumBits <= (int)uVar21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar17 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
    }
    uVar12 = uVar21;
    if ((int)uVar21 < 0) {
      uVar12 = uVar21 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar21 & 0x1f));
    pTVar16 = local_88.IDs.Tail;
    if (param_3 <= iVar11) break;
    if ((-1 < (int)uVar21) &&
       ((int)uVar21 <
        (int)((local_e8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (local_e8->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if (((ushort)(*(short *)(*(longlong *)
                                ((local_e8->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2) -
                   1U) < 0xfffe) &&
         ((*(int *)(*(longlong *)
                     ((local_e8->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
                     ) + 0xc + (ulonglong)(uVar21 & 0x1ff) * 0x10) != -1 &&
          (dVar24 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(local_e8,uVar21),
          dVar24 < local_e0)))) {
        local_a8._20_8_ = 0xffffffffffffffff;
        local_a8.bHadSameOrientations = true;
        local_a8._4_8_ = uVar6;
        local_a8._12_8_ = uVar7;
        EVar13 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FlipEdge(param_1,uVar21,&local_a8);
        pFVar9 = local_f0;
        if (EVar13 == Ok) {
          local_108 = iVar11 + 1;
          lVar22 = 0;
          do {
            uVar12 = *(uint *)(local_88.IsEnqueued.AllocatorInstance.InlineData + lVar22 * 4 + -0xc)
            ;
            uVar18 = (ulonglong)(uVar12 & 0x1ff);
            lVar3 = *(longlong *)
                     ((pFVar9->TriangleEdges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar12 >> 9) * 8);
            local_100 = *(undefined8 *)(lVar3 + uVar18 * 0xc);
            local_f8 = *(uint *)(lVar3 + 8 + uVar18 * 0xc);
            uVar8 = local_100;
            if ((uint)local_100 == uVar21) {
              iVar11 = 0;
            }
            else if ((uint)((ulonglong)local_100 >> 0x20) == uVar21) {
              iVar11 = 1;
            }
            else {
              iVar11 = -1;
              if (local_f8 == uVar21) {
                iVar11 = 2;
              }
            }
            iVar15 = iVar11 + 1;
            iVar15 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            local_100 = uVar8;
            if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar15 & 0x1f);
            iVar14 = iVar15;
            if (iVar15 < 0) {
              iVar14 = iVar15 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar15;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            iVar11 = iVar11 + 2;
            iVar11 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar11 & 0x1f);
            iVar15 = iVar11;
            if (iVar11 < 0) {
              iVar15 = iVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar11;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < 2);
          piVar20 = (int *)&(local_d0->Elements).field_0x8;
          param_1 = local_f0;
          param_2 = local_d0;
        }
        else {
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          if (iVar11 == 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)param_2,piVar20,piVar23);
            TBitArray<FDefaultBitArrayAllocator>::Add(this,false);
          }
          else {
            iVar15 = *(int *)&(param_2->Elements).field_0x30;
            iVar11 = iVar11 + -1;
            lVar22 = *(longlong *)&param_2->Elements;
            iVar14 = *(int *)(lVar22 + 4 + (longlong)iVar15 * 0xc);
            *(int *)&(param_2->Elements).field_0x30 = iVar14;
            *(int *)&(param_2->Elements).field_0x34 = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(lVar22 + (longlong)iVar14 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)param_2,&local_b8,iVar15);
          if (local_b8.Pointer != (uint *)0x0) {
            *(uint *)local_b8.Pointer = uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
          }
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          uVar21 = *(uint *)local_b8.Pointer;
          piVar23 = piVar20;
          if ((*piVar20 - iVar11 != 1) && (*piVar20 != iVar11)) {
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            iVar11 = *(int *)((longlong)FVar19 + (ulonglong)(param_2->HashSize - 1U & uVar21) * 4);
            if (iVar11 != -1) {
              lVar22 = *(longlong *)&param_2->Elements;
              do {
                if (*(uint *)(lVar22 + (longlong)iVar11 * 0xc) == uVar21) {
                  piVar20 = (int *)&(param_2->Elements).field_0x8;
                  piVar23 = (int *)&(param_2->Elements).field_0x8;
                  if (iVar11 != -1) {
                    *(uint *)(lVar22 + (longlong)iVar11 * 0xc) = uVar21;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)param_2,local_b8.Index,1);
                    goto LAB_14c6ce3f0;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar22 + 4 + (longlong)iVar11 * 0xc);
              } while (iVar11 != -1);
            }
          }
          piVar20 = piVar23;
          uVar12 = *piVar20 - *(int *)&(param_2->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar11 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_d8 = (undefined4)lVar22;
            iVar11 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar12 < 1) || (iVar11 <= param_2->HashSize)) {
            uVar21 = param_2->HashSize - 1U & uVar21;
            *(uint *)((longlong)local_b8.Pointer + 8) = uVar21;
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            uVar18 = (longlong)param_2->HashSize - 1U & (longlong)(int)uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = *(uint *)((longlong)FVar19 + uVar18 * 4);
            *(int *)((longlong)FVar19 + uVar18 * 4) = local_b8.Index;
          }
          else {
            param_2->HashSize = iVar11;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
          }
        }
LAB_14c6ce3f0:
        piVar23 = (int *)&(param_2->Elements).field_0xc;
        this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
        iVar11 = local_108;
      }
    }
  }
  while (pTVar16 != (TNode *)0x0) {
    local_88.IDs.Tail = pTVar16->NextNode;
    ::operator_delete(pTVar16,0x10);
    pTVar16 = local_88.IDs.Tail;
  }
  if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    local_88.IDs.Tail = pTVar16;
    FMemory::Free((void *)local_88.IsEnqueued.AllocatorInstance.SecondaryData);
  }
  return iVar11;
}

// FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicMesh> @ 14c6ce9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
`anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicMesh>
          (FSimpleIntrinsicMesh *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,int param_3,double param_4)

{
  uint *puVar1;
  TNode *pTVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FSimpleIntrinsicEdgeFlipMesh *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  EMeshResult EVar13;
  int iVar14;
  int iVar15;
  TNode *pTVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  TBitArray<FDefaultBitArrayAllocator> *this;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  double dVar24;
  undefined1 auStackY_138 [32];
  int local_108;
  undefined8 local_100;
  uint local_f8;
  FSimpleIntrinsicEdgeFlipMesh *local_f0;
  FSimpleIntrinsicEdgeFlipMesh *local_e8;
  double local_e0;
  undefined4 local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  code *local_c8;
  FSimpleIntrinsicEdgeFlipMesh **local_c0;
  FSparseArrayAllocationInfo local_b8;
  FEdgeFlipInfo local_a8;
  FIndexFIFO local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar10 = 1 < param_2->HashSize;
  local_f0 = (FSimpleIntrinsicEdgeFlipMesh *)param_1;
  local_d0 = param_2;
  if (!bVar10) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(param_2);
  }
  piVar23 = (int *)&(param_2->Elements).field_0xc;
  piVar20 = (int *)&(param_2->Elements).field_0x8;
  *piVar20 = 0;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,piVar23);
  }
  this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar11 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this,0);
  }
  if (bVar10) {
    param_2->HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  local_c0 = &local_e8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicMesh>'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_e8 = (FSimpleIntrinsicEdgeFlipMesh *)param_1;
  local_e0 = param_4;
  _anon_D86B23C6::FIndexFIFO::FIndexFIFO
            (&local_88,(IndexEnumerable)&param_1->field_0x158,
             (TFunctionRef<bool___cdecl(int)> *)&local_c8);
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_108 = 0;
  iVar11 = 0;
  while (pTVar16 = local_88.IDs.Tail, pTVar2 = (local_88.IDs.Tail)->NextNode, pTVar2 != (TNode *)0x0
        ) {
    uVar21 = pTVar2->Item;
    pTVar2->Item = 0;
    local_88.IDs.Tail = pTVar2;
    ::operator_delete(pTVar16,0x10);
    if ((((int)uVar21 < 0) || (local_88.IsEnqueued.NumBits <= (int)uVar21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar17 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
    }
    uVar12 = uVar21;
    if ((int)uVar21 < 0) {
      uVar12 = uVar21 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar21 & 0x1f));
    pTVar16 = local_88.IDs.Tail;
    if (param_3 <= iVar11) break;
    if ((-1 < (int)uVar21) &&
       ((int)uVar21 <
        (int)((local_e8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (local_e8->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if (((ushort)(*(short *)(*(longlong *)
                                ((local_e8->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2) -
                   1U) < 0xfffe) &&
         ((*(int *)(*(longlong *)
                     ((local_e8->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8
                     ) + 0xc + (ulonglong)(uVar21 & 0x1ff) * 0x10) != -1 &&
          (dVar24 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(local_e8,uVar21),
          dVar24 < local_e0)))) {
        local_a8._20_8_ = 0xffffffffffffffff;
        local_a8.bHadSameOrientations = true;
        local_a8._4_8_ = uVar6;
        local_a8._12_8_ = uVar7;
        EVar13 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FlipEdge
                           ((FSimpleIntrinsicEdgeFlipMesh *)param_1,uVar21,&local_a8);
        pFVar9 = local_f0;
        if (EVar13 == Ok) {
          local_108 = iVar11 + 1;
          lVar22 = 0;
          do {
            uVar12 = *(uint *)(local_88.IsEnqueued.AllocatorInstance.InlineData + lVar22 * 4 + -0xc)
            ;
            uVar18 = (ulonglong)(uVar12 & 0x1ff);
            lVar3 = *(longlong *)
                     ((pFVar9->TriangleEdges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar12 >> 9) * 8);
            local_100 = *(undefined8 *)(lVar3 + uVar18 * 0xc);
            local_f8 = *(uint *)(lVar3 + 8 + uVar18 * 0xc);
            uVar8 = local_100;
            if ((uint)local_100 == uVar21) {
              iVar11 = 0;
            }
            else if ((uint)((ulonglong)local_100 >> 0x20) == uVar21) {
              iVar11 = 1;
            }
            else {
              iVar11 = -1;
              if (local_f8 == uVar21) {
                iVar11 = 2;
              }
            }
            iVar15 = iVar11 + 1;
            iVar15 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            local_100 = uVar8;
            if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar15 & 0x1f);
            iVar14 = iVar15;
            if (iVar15 < 0) {
              iVar14 = iVar15 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar15;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar15 < 0) || (local_88.IsEnqueued.NumBits <= iVar15)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            iVar11 = iVar11 + 2;
            iVar11 = *(int *)((longlong)&local_100 +
                             (longlong)
                             (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
            }
            uVar12 = 1 << ((byte)iVar11 & 0x1f);
            iVar15 = iVar11;
            if (iVar11 < 0) {
              iVar15 = iVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4) & uVar12) == 0) {
              pTVar16 = ::operator_new(0x10);
              pTVar2 = local_88.IDs.Head;
              if (pTVar16 != (TNode *)0x0) {
                pTVar16->NextNode = (TNode *)0x0;
                pTVar16->Item = iVar11;
                local_88.IDs.Head = pTVar16;
                pTVar2->NextNode = pTVar16;
              }
              if (((iVar11 < 0) || (local_88.IsEnqueued.NumBits <= iVar11)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                iVar11 = (*pcVar5)();
                return iVar11;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_88;
              if (local_88.IsEnqueued.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_88.IsEnqueued.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar15 >> 5) * 4);
              *puVar1 = *puVar1 | uVar12;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < 2);
          piVar20 = (int *)&(local_d0->Elements).field_0x8;
          param_1 = (FSimpleIntrinsicMesh *)local_f0;
          param_2 = local_d0;
        }
        else {
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          if (iVar11 == 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)param_2,piVar20,piVar23);
            TBitArray<FDefaultBitArrayAllocator>::Add(this,false);
          }
          else {
            iVar15 = *(int *)&(param_2->Elements).field_0x30;
            iVar11 = iVar11 + -1;
            lVar22 = *(longlong *)&param_2->Elements;
            iVar14 = *(int *)(lVar22 + 4 + (longlong)iVar15 * 0xc);
            *(int *)&(param_2->Elements).field_0x30 = iVar14;
            *(int *)&(param_2->Elements).field_0x34 = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(lVar22 + (longlong)iVar14 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)param_2,&local_b8,iVar15);
          if (local_b8.Pointer != (uint *)0x0) {
            *(uint *)local_b8.Pointer = uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
          }
          iVar11 = *(int *)&(param_2->Elements).field_0x34;
          uVar21 = *(uint *)local_b8.Pointer;
          piVar23 = piVar20;
          if ((*piVar20 - iVar11 != 1) && (*piVar20 != iVar11)) {
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            iVar11 = *(int *)((longlong)FVar19 + (ulonglong)(param_2->HashSize - 1U & uVar21) * 4);
            if (iVar11 != -1) {
              lVar22 = *(longlong *)&param_2->Elements;
              do {
                if (*(uint *)(lVar22 + (longlong)iVar11 * 0xc) == uVar21) {
                  piVar20 = (int *)&(param_2->Elements).field_0x8;
                  piVar23 = (int *)&(param_2->Elements).field_0x8;
                  if (iVar11 != -1) {
                    *(uint *)(lVar22 + (longlong)iVar11 * 0xc) = uVar21;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)param_2,local_b8.Index,1);
                    goto LAB_14c6cead0;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar22 + 4 + (longlong)iVar11 * 0xc);
              } while (iVar11 != -1);
            }
          }
          piVar20 = piVar23;
          uVar12 = *piVar20 - *(int *)&(param_2->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar11 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_d8 = (undefined4)lVar22;
            iVar11 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar12 < 1) || (iVar11 <= param_2->HashSize)) {
            uVar21 = param_2->HashSize - 1U & uVar21;
            *(uint *)((longlong)local_b8.Pointer + 8) = uVar21;
            FVar4 = (param_2->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            uVar18 = (longlong)param_2->HashSize - 1U & (longlong)(int)uVar21;
            *(uint *)((longlong)local_b8.Pointer + 4) = *(uint *)((longlong)FVar19 + uVar18 * 4);
            *(int *)((longlong)FVar19 + uVar18 * 4) = local_b8.Index;
          }
          else {
            param_2->HashSize = iVar11;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_2);
          }
        }
LAB_14c6cead0:
        piVar23 = (int *)&(param_2->Elements).field_0xc;
        this = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
        iVar11 = local_108;
      }
    }
  }
  while (pTVar16 != (TNode *)0x0) {
    local_88.IDs.Tail = pTVar16->NextNode;
    ::operator_delete(pTVar16,0x10);
    pTVar16 = local_88.IDs.Tail;
  }
  if (local_88.IsEnqueued.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    local_88.IDs.Tail = pTVar16;
    FMemory::Free((void *)local_88.IsEnqueued.AllocatorInstance.SecondaryData);
  }
  return iVar11;
}

// ForGroupSetEdges<TArray<int,TSizedDefaultAllocator<32>_>,`UE::Geometry::FGroupTopologyDeformer::CalculateROI'::__l2::<lambda_1>_> @ 14c6cf090

void __thiscall
UE::Geometry::FGroupTopology::
ForGroupSetEdges<TArray<int,TSizedDefaultAllocator<32>_>,_UE::Geometry::FGroupTopologyDeformer::CalculateROI_::__l2::<lambda_1>_>
          (FGroupTopology *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2
          )

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [3];
  uint local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  FScriptContainerElement *local_58;
  FGroup *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_5c = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_5c;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  pFVar11 = pFVar14 + uVar10 * 4;
  local_40 = pFVar11;
  do {
    local_58 = pFVar14;
    if (param_1->ArrayNum != (int)uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar14 == pFVar11) {
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      return;
    }
    local_50 = FindGroupByID(this,*(int *)pFVar14);
    if (local_50 == (FGroup *)0x0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7172532518883688045>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                         ,0x193,"Group != nullptr");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_60 = (local_50->Boundaries).ArrayNum;
      uVar10 = (ulonglong)(int)local_60;
      pFVar12 = (local_50->Boundaries).AllocatorInstance.Data;
      local_48 = pFVar12 + uVar10 * 0x28;
      while( true ) {
        pFVar5 = local_48;
        if ((local_50->Boundaries).ArrayNum != (int)uVar10) {
          local_78 = 0;
          `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_78);
        }
        pFVar11 = local_40;
        pFVar14 = local_58;
        if (pFVar12 == pFVar5) break;
        puVar13 = *(uint **)pFVar12;
        iVar2 = *(int *)(pFVar12 + 8);
        puVar1 = puVar13 + iVar2;
        while( true ) {
          if (*(int *)(pFVar12 + 8) != iVar2) {
            local_77[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_77);
          }
          if (puVar13 == puVar1) break;
          uVar3 = *puVar13;
          for (FVar9.Data = local_70.Data; local_74 = uVar3,
              FVar9.Data != local_70.Data + (longlong)(int)local_68 * 4; FVar9.Data = FVar9.Data + 4
              ) {
            if (*(uint *)FVar9.Data == uVar3) goto LAB_14c6cf2cb;
          }
          uVar7 = 0;
          if ((int)uVar3 < (this->Edges).ArrayNum) {
            uVar7 = ~uVar3 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          `UE::Geometry::FGroupTopologyDeformer::CalculateROI'::__l2::<lambda_1>::operator()
                    (param_2,(FGroupEdge *)
                             ((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x50),
                     uVar3);
          if (((local_70.Data <= (FScriptContainerElement *)&local_74) &&
              ((FScriptContainerElement *)&local_74 < local_70.Data + (longlong)local_68._4_4_ * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_68;
          if ((int)local_68 == local_68._4_4_) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70,(int *)((longlong)&local_68 + 4));
          }
          local_68 = CONCAT44(local_68._4_4_,iVar8 + 1);
          *(uint *)(local_70.Data + (longlong)iVar8 * 4) = local_74;
LAB_14c6cf2cb:
          puVar13 = puVar13 + 1;
        }
        pFVar12 = pFVar12 + 0x28;
        uVar10 = (ulonglong)local_60;
      }
    }
    pFVar14 = pFVar14 + 4;
    uVar10 = (ulonglong)local_5c;
  } while( true );
}

// HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6cffe0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14c6d00c6:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].error <= param_1[iVar4].error &&
                      param_1[iVar4].error != param_1[(longlong)iVar8 + 2].error) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].error < param_1[iVar7].error ||
                    param_1[iVar4].error == param_1[iVar7].error) break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].error <= param_1[iVar6].error &&
          param_1[iVar6].error != param_1[(longlong)iVar5 + 2].error) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].error < param_1[iVar4].error || param_1[iVar6].error == param_1[iVar4].error)
    goto LAB_14c6d00c6;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6d0190

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14c6d0276:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].error <= param_1[iVar4].error &&
                      param_1[iVar4].error != param_1[(longlong)iVar8 + 2].error) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].error < param_1[iVar7].error ||
                    param_1[iVar4].error == param_1[iVar7].error) break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].error <= param_1[iVar6].error &&
          param_1[iVar6].error != param_1[(longlong)iVar5 + 2].error) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].error < param_1[iVar4].error || param_1[iVar6].error == param_1[iVar4].error)
    goto LAB_14c6d0276;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6d0340

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14c6d0426:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].error <= param_1[iVar4].error &&
                      param_1[iVar4].error != param_1[(longlong)iVar8 + 2].error) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].error < param_1[iVar7].error ||
                    param_1[iVar4].error == param_1[iVar7].error) break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].error <= param_1[iVar6].error &&
          param_1[iVar6].error != param_1[(longlong)iVar5 + 2].error) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].error < param_1[iVar4].error || param_1[iVar6].error == param_1[iVar4].error)
    goto LAB_14c6d0426;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14c6d04f0

void __cdecl
AlgoImpl::
HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  FHitIntersectionResult *pFVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FHitIntersectionResult *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14c6d061c:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar15 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar15;
          do {
            uVar9 = *(undefined4 *)&pFVar16->field_0x4;
            dVar5 = pFVar16->Distance;
            dVar3 = (param_1->BaryCoords).field0_0x0._s_0.Z;
            iVar18 = param_1->TriangleId;
            uVar11 = *(undefined4 *)&param_1->field_0x4;
            dVar6 = param_1->Distance;
            dVar7 = (param_1->BaryCoords).field0_0x0._s_0.X;
            dVar8 = (param_1->BaryCoords).field0_0x0._s_0.Y;
            param_1->TriangleId = pFVar16->TriangleId;
            *(undefined4 *)&param_1->field_0x4 = uVar9;
            param_1->Distance = dVar5;
            dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
            (param_1->BaryCoords).field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
            (param_1->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (param_1->BaryCoords).field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
            pFVar16->TriangleId = iVar18;
            *(undefined4 *)&pFVar16->field_0x4 = uVar11;
            pFVar16->Distance = dVar6;
            (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar7;
            (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar8;
            (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar3;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].Distance <= param_1[iVar13].Distance &&
                      param_1[iVar13].Distance != param_1[(longlong)iVar19 + 2].Distance) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Distance < param_1[iVar18].Distance ||
                    param_1[iVar13].Distance == param_1[iVar18].Distance) break;
                pFVar1 = param_1 + iVar13;
                uVar9 = *(undefined4 *)&pFVar1->field_0x4;
                dVar5 = pFVar1->Distance;
                dVar3 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Z;
                pFVar2 = param_1 + iVar18;
                iVar19 = pFVar2->TriangleId;
                uVar11 = *(undefined4 *)&pFVar2->field_0x4;
                dVar6 = pFVar2->Distance;
                dVar7 = param_1[iVar18].BaryCoords.field0_0x0._s_0.X;
                dVar8 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Y;
                pFVar2 = param_1 + iVar18;
                pFVar2->TriangleId = pFVar1->TriangleId;
                *(undefined4 *)&pFVar2->field_0x4 = uVar9;
                pFVar2->Distance = dVar5;
                dVar5 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.X =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Y = dVar5;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Z =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
                pFVar1 = param_1 + iVar13;
                pFVar1->TriangleId = iVar19;
                *(undefined4 *)&pFVar1->field_0x4 = uVar11;
                pFVar1->Distance = dVar6;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.X = dVar7;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar8;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = dVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Distance <= param_1[iVar17].Distance &&
          param_1[iVar17].Distance != param_1[(longlong)iVar14 + 2].Distance) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].Distance < param_1[iVar13].Distance ||
        param_1[iVar17].Distance == param_1[iVar13].Distance) goto LAB_14c6d061c;
    pFVar16 = param_1 + iVar17;
    uVar9 = *(undefined4 *)&pFVar16->field_0x4;
    dVar5 = pFVar16->Distance;
    iVar14 = iVar17 * 2 + 1;
    dVar3 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
    pFVar1 = param_1 + iVar13;
    iVar10 = pFVar1->TriangleId;
    uVar11 = *(undefined4 *)&pFVar1->field_0x4;
    dVar6 = pFVar1->Distance;
    dVar7 = param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
    dVar8 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
    pFVar1 = param_1 + iVar13;
    pFVar1->TriangleId = pFVar16->TriangleId;
    *(undefined4 *)&pFVar1->field_0x4 = uVar9;
    pFVar1->Distance = dVar5;
    dVar5 = param_1[iVar17].BaryCoords.field0_0x0._s_0.Y;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.X = param_1[iVar17].BaryCoords.field0_0x0._s_0.X;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar5;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = param_1[iVar17].BaryCoords.field0_0x0._s_0.Z;
    pFVar16 = param_1 + iVar17;
    pFVar16->TriangleId = iVar10;
    *(undefined4 *)&pFVar16->field_0x4 = uVar11;
    pFVar16->Distance = dVar6;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.X = dVar7;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Y = dVar8;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Z = dVar3;
    iVar13 = iVar17;
  } while( true );
}

// IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6d0b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError *pFVar1;
  FEdgeError FVar2;
  int iVar3;
  FEdgeError *pFVar4;
  FEdgeError *pFVar5;
  FEdgeError **ppFVar6;
  FEdgeError *pFVar7;
  FEdgeError *pFVar8;
  FEdgeError *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FEdgeError *local_338;
  FEdgeError *local_328;
  FEdgeError *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_14c6d0bb0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_14c6d0be0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x00014c6d0be9;
          goto LAB_14c6d0bf3;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4->error) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->error;
                  }
                  if (fVar10 < pFVar4[1].error) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4[2].error) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].error;
                  }
                  if (fVar10 < pFVar4[3].error) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->error < pFVar4->error) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14c6d0cb0;
      }
LAB_14c6d0c9f:
      local_338 = pFVar1;
      HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FEdgeError,TLess<void>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14c6d0cb0:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x00014c6d0be9:
  if (pFVar5->error < pFVar9->error || pFVar5->error == pFVar9->error) goto LAB_14c6d0be0;
LAB_14c6d0bf3:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->error < pFVar4->error || pFVar9->error == pFVar4->error);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_14c6d0be0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14c6d0cb0;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_14c6d0cb0;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14c6d0c9f;
  goto LAB_14c6d0bb0;
}

// IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6d0da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError *pFVar1;
  FEdgeError FVar2;
  int iVar3;
  FEdgeError *pFVar4;
  FEdgeError *pFVar5;
  FEdgeError **ppFVar6;
  FEdgeError *pFVar7;
  FEdgeError *pFVar8;
  FEdgeError *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FEdgeError *local_338;
  FEdgeError *local_328;
  FEdgeError *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_14c6d0e50:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_14c6d0e80:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x00014c6d0e89;
          goto LAB_14c6d0e93;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4->error) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->error;
                  }
                  if (fVar10 < pFVar4[1].error) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4[2].error) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].error;
                  }
                  if (fVar10 < pFVar4[3].error) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->error < pFVar4->error) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14c6d0f50;
      }
LAB_14c6d0f3f:
      local_338 = pFVar1;
      HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FEdgeError,TLess<void>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14c6d0f50:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x00014c6d0e89:
  if (pFVar5->error < pFVar9->error || pFVar5->error == pFVar9->error) goto LAB_14c6d0e80;
LAB_14c6d0e93:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->error < pFVar4->error || pFVar9->error == pFVar4->error);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_14c6d0e80;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14c6d0f50;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_14c6d0f50;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14c6d0f3f;
  goto LAB_14c6d0e50;
}

// IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_> @ 14c6d1040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_>
          (FEdgeError *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>
          param_4)

{
  FEdgeError *pFVar1;
  FEdgeError FVar2;
  int iVar3;
  FEdgeError *pFVar4;
  FEdgeError *pFVar5;
  FEdgeError **ppFVar6;
  FEdgeError *pFVar7;
  FEdgeError *pFVar8;
  FEdgeError *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FEdgeError *local_338;
  FEdgeError *local_328;
  FEdgeError *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_14c6d10f0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_14c6d1120:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x00014c6d1129;
          goto LAB_14c6d1133;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4->error) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->error;
                  }
                  if (fVar10 < pFVar4[1].error) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->error;
                  if (pFVar5->error < pFVar4[2].error) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].error;
                  }
                  if (fVar10 < pFVar4[3].error) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->error < pFVar4->error) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14c6d11f0;
      }
LAB_14c6d11df:
      local_338 = pFVar1;
      HeapSortInternal<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FEdgeError,TLess<void>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14c6d11f0:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x00014c6d1129:
  if (pFVar5->error < pFVar9->error || pFVar5->error == pFVar9->error) goto LAB_14c6d1120;
LAB_14c6d1133:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->error < pFVar4->error || pFVar9->error == pFVar4->error);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_14c6d1120;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14c6d11f0;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_14c6d11f0;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14c6d11df;
  goto LAB_14c6d10f0;
}

// IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14c6d12e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  FHitIntersectionResult *pFVar10;
  int iVar11;
  FHitIntersectionResult *pFVar12;
  FHitIntersectionResult *pFVar13;
  FHitIntersectionResult *pFVar14;
  FHitIntersectionResult *pFVar15;
  FHitIntersectionResult *pFVar16;
  FHitIntersectionResult **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FHitIntersectionResult *local_348;
  FHitIntersectionResult *local_338;
  FHitIntersectionResult *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar13 = ppFVar17[1];
      pFVar12 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
      pFVar16 = pFVar12;
      if ((int)local_348 != 0) {
LAB_14c6d13b0:
        if (8 < iVar11) {
          uVar7 = *(undefined4 *)&pFVar16->field_0x4;
          dVar3 = pFVar16->Distance;
          pFVar10 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar12 = pFVar16 + iVar11;
          iVar8 = pFVar12->TriangleId;
          uVar9 = *(undefined4 *)&pFVar12->field_0x4;
          dVar4 = pFVar12->Distance;
          dVar5 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X;
          dVar6 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y;
          dVar2 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z;
          pFVar12 = pFVar16 + iVar11;
          pFVar12->TriangleId = pFVar16->TriangleId;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          pFVar12->Distance = dVar3;
          dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y = dVar3;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
          pFVar16->TriangleId = iVar8;
          *(undefined4 *)&pFVar16->field_0x4 = uVar9;
          pFVar16->Distance = dVar4;
          (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar5;
          (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar6;
          (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar2;
          pFVar12 = pFVar16;
LAB_14c6d1410:
          pFVar14 = pFVar12;
          pFVar12 = pFVar14 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x00014c6d1419;
          goto LAB_14c6d1427;
        }
        if (pFVar16 < pFVar13) {
          pFVar1 = pFVar16 + 1;
          do {
            pFVar12 = pFVar16;
            if (pFVar1 <= pFVar13) {
              pFVar10 = pFVar1;
              if (0x9f < (ulonglong)((longlong)pFVar13 + (0x28 - (longlong)pFVar1))) {
                do {
                  if (pFVar12->Distance < pFVar10->Distance) {
                    pFVar12 = pFVar10;
                  }
                  if (pFVar12->Distance <= pFVar10[1].Distance &&
                      pFVar10[1].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 1;
                  }
                  if (pFVar12->Distance <= pFVar10[2].Distance &&
                      pFVar10[2].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 2;
                  }
                  if (pFVar12->Distance <= pFVar10[3].Distance &&
                      pFVar10[3].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 3;
                  }
                  pFVar10 = pFVar10 + 4;
                } while (pFVar10 <= pFVar13 + -3);
              }
              for (; pFVar10 <= pFVar13; pFVar10 = pFVar10 + 1) {
                if (pFVar12->Distance < pFVar10->Distance) {
                  pFVar12 = pFVar10;
                }
              }
            }
            iVar11 = pFVar12->TriangleId;
            uVar9 = *(undefined4 *)&pFVar12->field_0x4;
            dVar3 = pFVar12->Distance;
            pFVar10 = pFVar13 + -1;
            dVar2 = (pFVar12->BaryCoords).field0_0x0._s_0.Z;
            dVar4 = (pFVar12->BaryCoords).field0_0x0._s_0.X;
            dVar5 = (pFVar12->BaryCoords).field0_0x0._s_0.Y;
            uVar7 = *(undefined4 *)&pFVar13->field_0x4;
            dVar6 = pFVar13->Distance;
            pFVar12->TriangleId = pFVar13->TriangleId;
            *(undefined4 *)&pFVar12->field_0x4 = uVar7;
            pFVar12->Distance = dVar6;
            dVar6 = (pFVar13->BaryCoords).field0_0x0._s_0.Y;
            (pFVar12->BaryCoords).field0_0x0._s_0.X = (pFVar13->BaryCoords).field0_0x0._s_0.X;
            (pFVar12->BaryCoords).field0_0x0._s_0.Y = dVar6;
            (pFVar12->BaryCoords).field0_0x0._s_0.Z = (pFVar13->BaryCoords).field0_0x0._s_0.Z;
            pFVar13->TriangleId = iVar11;
            *(undefined4 *)&pFVar13->field_0x4 = uVar9;
            pFVar13->Distance = dVar3;
            (pFVar13->BaryCoords).field0_0x0._s_0.X = dVar4;
            (pFVar13->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (pFVar13->BaryCoords).field0_0x0._s_0.Z = dVar2;
            pFVar13 = pFVar10;
          } while (pFVar16 < pFVar10);
        }
        goto LAB_14c6d1575;
      }
LAB_14c6d1566:
      local_348 = pFVar1;
      HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
                (pFVar12,iVar11,param_3,param_4);
LAB_14c6d1575:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014c6d1419:
  if (pFVar14[1].Distance < pFVar16->Distance || pFVar14[1].Distance == pFVar16->Distance)
  goto LAB_14c6d1410;
LAB_14c6d1427:
  do {
    pFVar15 = pFVar10;
    pFVar10 = pFVar15 + -1;
    if (pFVar10 <= pFVar16) break;
  } while (pFVar16->Distance < pFVar15[-1].Distance || pFVar16->Distance == pFVar15[-1].Distance);
  dVar2 = pFVar15[-1].Distance;
  if (pFVar12 <= pFVar10) {
    iVar11 = pFVar12->TriangleId;
    uVar7 = *(undefined4 *)&pFVar12->field_0x4;
    dVar4 = pFVar14[1].Distance;
    dVar5 = pFVar14[1].BaryCoords.field0_0x0._s_0.X;
    dVar6 = pFVar14[1].BaryCoords.field0_0x0._s_0.Y;
    dVar3 = pFVar14[1].BaryCoords.field0_0x0._s_0.Z;
    *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
    pFVar14[1].Distance = dVar2;
    dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
    pFVar14[1].BaryCoords.field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Y = dVar2;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
    pFVar10->TriangleId = iVar11;
    *(undefined4 *)&pFVar10->field_0x4 = uVar7;
    pFVar15[-1].Distance = dVar4;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
    goto LAB_14c6d1410;
  }
  iVar11 = pFVar16->TriangleId;
  uVar7 = *(undefined4 *)&pFVar16->field_0x4;
  dVar4 = pFVar16->Distance;
  dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.X;
  dVar6 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
  local_348._0_4_ = (int)local_348 + -1;
  dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar10;
  pFVar16->Distance = dVar2;
  dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
  (pFVar16->BaryCoords).field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
  (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar2;
  (pFVar16->BaryCoords).field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
  pFVar10->TriangleId = iVar11;
  *(undefined4 *)&pFVar10->field_0x4 = uVar7;
  pFVar15[-1].Distance = dVar4;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
  if (((longlong)pFVar10 + (-0x28 - (longlong)pFVar16)) / 0x28 <
      ((longlong)pFVar13 - (longlong)pFVar12) / 0x28) {
    if (pFVar12 < pFVar13) {
      *ppFVar17 = pFVar12;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar10 <= pFVar16 + 1) goto LAB_14c6d1575;
    pFVar13 = pFVar15 + -2;
    pFVar12 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar10) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_14c6d1575;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
  pFVar16 = pFVar12;
  if ((int)local_348 == 0) goto LAB_14c6d1566;
  goto LAB_14c6d13b0;
}

// MinElementBy<TArray<int,TSizedDefaultAllocator<32>_>,FIdentityFunctor,TLess<void>_> @ 14c6d18c0

int * __cdecl
AlgoImpl::MinElementBy<TArray<int,TSizedDefaultAllocator<32>_>,FIdentityFunctor,TLess<void>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FIdentityFunctor param_2,
          TLess<void> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((pFVar4 == (FScriptContainerElement *)0x0) || (*(int *)pFVar3 < *(int *)pFVar4)) {
      pFVar4 = pFVar3;
    }
    pFVar3 = pFVar3 + 4;
  }
  return (int *)pFVar4;
}

// Move<TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>_> @ 14c6d1930

void __cdecl
TSet<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence>,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// Reverse<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx> @ 14c6d2b00

void __cdecl
AlgoImpl::
Reverse<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx>
          (FEdgeAndCrossingIdx *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FEdgeAndCrossingIdx *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar5 = param_1 + (param_2 + -1);
    do {
      iVar2 = pFVar5->EID;
      iVar3 = param_1->TID;
      iVar4 = param_1->EID;
      iVar1 = param_1->CIdx;
      param_1->TID = pFVar5->TID;
      param_1->EID = iVar2;
      param_1->CIdx = pFVar5->CIdx;
      pFVar5->TID = iVar3;
      pFVar5->EID = iVar4;
      pFVar5->CIdx = iVar1;
      lVar6 = lVar6 + -1;
      param_1 = param_1 + 1;
      pFVar5 = pFVar5 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// Reverse<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint> @ 14c6d2b60

void __cdecl
AlgoImpl::Reverse<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint>
          (FSurfacePoint *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  EPositionType EVar7;
  undefined4 uVar8;
  FSurfacePoint *pFVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar9 = param_1 + (param_2 + -1);
    do {
      uVar1 = *(undefined8 *)((longlong)&param_1->Position + 0x18);
      uVar6 = *(undefined4 *)&pFVar9->field_0x4;
      uVar2 = *(undefined8 *)&pFVar9->Position;
      EVar7 = param_1->PositionType;
      uVar8 = *(undefined4 *)&param_1->field_0x4;
      uVar3 = *(undefined8 *)&param_1->Position;
      dVar4 = (param_1->Position).EdgePosition.Alpha;
      uVar5 = *(undefined8 *)((longlong)&param_1->Position + 0x10);
      param_1->PositionType = pFVar9->PositionType;
      *(undefined4 *)&param_1->field_0x4 = uVar6;
      *(undefined8 *)&param_1->Position = uVar2;
      uVar2 = *(undefined8 *)((longlong)&pFVar9->Position + 0x10);
      (param_1->Position).EdgePosition.Alpha = (pFVar9->Position).EdgePosition.Alpha;
      *(undefined8 *)((longlong)&param_1->Position + 0x10) = uVar2;
      *(undefined8 *)((longlong)&param_1->Position + 0x18) =
           *(undefined8 *)((longlong)&pFVar9->Position + 0x18);
      pFVar9->PositionType = EVar7;
      *(undefined4 *)&pFVar9->field_0x4 = uVar8;
      *(undefined8 *)&pFVar9->Position = uVar3;
      (pFVar9->Position).EdgePosition.Alpha = dVar4;
      *(undefined8 *)((longlong)&pFVar9->Position + 0x10) = uVar5;
      *(undefined8 *)((longlong)&pFVar9->Position + 0x18) = uVar1;
      lVar10 = lVar10 + -1;
      param_1 = param_1 + 1;
      pFVar9 = pFVar9 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// SelectMostFrequentElement<TFixedAllocator<7>_> @ 14c6d2c60

int __cdecl SelectMostFrequentElement<TFixedAllocator<7>_>(TArray<int,TFixedAllocator<7>_> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  FIdentityFunctor local_res8 [8];
  int local_res10;
  
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)param_1,param_1->ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  iVar4 = param_1->ArrayNum;
  local_res10 = 0;
  if ((iVar4 < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar9 = *(int *)(param_1->AllocatorInstance).InlineData[0].Pad;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  iVar10 = *(int *)(param_1->AllocatorInstance).InlineData[0].Pad;
  iVar7 = 1;
  uVar6 = 1;
  if (1 < (longlong)iVar4) {
    lVar8 = 1;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(int *)(param_1->AllocatorInstance).InlineData[lVar8].Pad == iVar10) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar2 = iVar7;
        if (iVar7 <= local_res10) {
          iVar10 = iVar9;
          iVar2 = local_res10;
        }
        iVar9 = iVar10;
        iVar7 = 1;
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        local_res10 = iVar2;
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        iVar10 = *(int *)(param_1->AllocatorInstance).InlineData[lVar8].Pad;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  return iVar9;
}

// TCotanCentroid<`UE::Geometry::FMeshWeights::CotanCentroid'::__l2::<lambda_1>_> @ 14c6d2e20

TVector<double> * __cdecl
TCotanCentroid<_UE::Geometry::FMeshWeights::CotanCentroid_::__l2::<lambda_1>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          <lambda_1> param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_178 [2];
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  double local_140;
  BaseValueIterator local_138;
  double local_100;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar16 = 0.0;
  lVar3 = *(longlong *)
           (((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  local_140 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  local_res18[0] = 0xffffffff;
  local_res10[0] = 0xffffffff;
  local_178[1] = 0xffffffff;
  local_178[0] = -1;
  local_100 = local_140;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_138,&param_1->VertexEdgeLists,param_2,false);
  while( true ) {
    if ((((local_138.ListSet == &param_1->VertexEdgeLists) && (local_138.ListIndex == param_2)) &&
        (local_138.iCur == -1)) && (local_138.cur_ptr == -1)) break;
    local_res20[0] = 0xffffffff;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_138.cur_value,param_2,(int *)local_res18,(int *)local_res10,
               (int *)local_res20,local_178 + 1,local_178);
    pFVar4 = ((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data;
    pdVar1 = (double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res18[0] >> 9) * 8) +
             (ulonglong)(local_res18[0] & 0x1ff) * 0x18);
    dVar10 = *pdVar1;
    dVar11 = pdVar1[1];
    dVar2 = *(double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res18[0] >> 9) * 8) + 0x10 +
             (ulonglong)(local_res18[0] & 0x1ff) * 0x18);
    uVar13 = (ulonglong)(local_res10[0] & 0x1ff);
    lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8);
    pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    local_170._s_0.X = dVar10 - dVar14;
    local_170._s_0.Y = dVar11 - dVar15;
    local_170._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
    local_158._s_0.X = dVar8 - dVar14;
    local_158._s_0.Y = dVar9 - dVar15;
    local_158._s_0.Z = local_100 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
    dVar14 = UE::Geometry::VectorUtil::VectorCot<double>
                       ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_170._s_0);
    if (dVar14 == 0.0) goto LAB_14c6d317e;
    if (local_res20[0] != 0xffffffff) {
      uVar13 = (ulonglong)(local_res20[0] & 0x1ff);
      lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_res20[0] >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      dVar15 = *pdVar1;
      dVar12 = pdVar1[1];
      local_158._s_0.X = dVar10 - dVar15;
      local_158._s_0.Y = dVar11 - dVar12;
      local_158._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      local_170._s_0.Y = dVar9 - dVar12;
      local_170._s_0.X = dVar8 - dVar15;
      local_170._s_0.Z = local_100 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      dVar15 = UE::Geometry::VectorUtil::VectorCot<double>
                         ((TVector<double> *)&local_170._s_0,(TVector<double> *)&local_158._s_0);
      if (dVar15 == 0.0) goto LAB_14c6d317e;
      dVar14 = dVar14 + dVar15;
    }
    dVar16 = dVar16 + dVar14;
    uVar5 = (double)uVar5 + dVar10 * dVar14;
    uVar6 = (double)uVar6 + dVar11 * dVar14;
    uVar7 = (double)uVar7 + dVar2 * dVar14;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_138);
  }
  if (__real_3e45798ee2308c3a <=
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar16 = __real_3ff0000000000000 / dVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar16 * (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16 * (double)uVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar16 * (double)uVar7;
    return __return_storage_ptr__;
  }
LAB_14c6d317e:
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_140;
  return __return_storage_ptr__;
}

// TCotanCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d3200

TVector<double> * __cdecl
TCotanCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_178 [2];
  int local_170 [2];
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  BaseValueIterator local_108;
  double local_e0;
  double local_d8;
  double local_d0;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar6 = 0.0;
  local_178[0] = param_2;
  (**(code **)param_3)(&local_150,*(undefined8 *)&param_3->field_0x8,local_178);
  local_res18[0] = -1;
  local_res10[0] = -1;
  local_170[1] = 0xffffffff;
  local_170[0] = -1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_108,&param_1->VertexEdgeLists,param_2,false);
  uVar13 = SUB84(local_140,0);
  uVar14 = (undefined4)((ulonglong)local_140 >> 0x20);
  while( true ) {
    if ((((local_108.ListSet == &param_1->VertexEdgeLists) && (local_108.ListIndex == param_2)) &&
        (local_108.iCur == -1)) && (local_108.cur_ptr == -1)) break;
    local_res20[0] = -1;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_108.cur_value,param_2,local_res18,local_res10,local_res20,local_170 + 1
               ,local_170);
    local_178[0] = local_res18[0];
    (**(code **)param_3)(&local_120,*(undefined8 *)&param_3->field_0x8,local_178);
    local_178[0] = local_res10[0];
    (**(code **)param_3)(&local_e0,*(undefined8 *)&param_3->field_0x8,local_178);
    uVar7 = SUB84(local_120,0);
    uVar8 = (undefined4)((ulonglong)local_120 >> 0x20);
    uVar11 = SUB84(local_110,0);
    uVar12 = (undefined4)((ulonglong)local_110 >> 0x20);
    uVar9 = SUB84(local_118,0);
    uVar10 = (undefined4)((ulonglong)local_118 >> 0x20);
    local_138._s_0.X = local_120 - local_e0;
    uVar13 = SUB84(local_140,0);
    uVar14 = (undefined4)((ulonglong)local_140 >> 0x20);
    local_138._s_0.Y = local_118 - local_d8;
    local_138._s_0.Z = local_110 - local_d0;
    local_168._s_0.Y = dStack_148 - local_d8;
    local_168._s_0.X = local_150 - local_e0;
    local_168._s_0.Z = local_140 - local_d0;
    dVar1 = UE::Geometry::VectorUtil::VectorCot<double>
                      ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_138._s_0);
    if (dVar1 == 0.0) goto LAB_14c6d3550;
    if (local_res20[0] != -1) {
      local_178[0] = local_res20[0];
      (**(code **)param_3)(&local_168,*(undefined8 *)&param_3->field_0x8,local_178);
      uVar7 = SUB84(local_120,0);
      uVar8 = (undefined4)((ulonglong)local_120 >> 0x20);
      uVar11 = SUB84(local_110,0);
      uVar12 = (undefined4)((ulonglong)local_110 >> 0x20);
      uVar9 = SUB84(local_118,0);
      uVar10 = (undefined4)((ulonglong)local_118 >> 0x20);
      local_138._s_0.X = local_120 - local_168._s_0.X;
      uVar13 = SUB84(local_140,0);
      uVar14 = (undefined4)((ulonglong)local_140 >> 0x20);
      local_138._s_0.Y = local_118 - local_168._s_0.Y;
      local_138._s_0.Z = local_110 - local_168._s_0.Z;
      local_168._s_0.Y = dStack_148 - local_168._s_0.Y;
      local_168._s_0.X = local_150 - local_168._s_0.X;
      local_168._s_0.Z = local_140 - local_168._s_0.Z;
      dVar2 = UE::Geometry::VectorUtil::VectorCot<double>
                        ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_138._s_0);
      if (dVar2 == 0.0) goto LAB_14c6d3550;
      dVar1 = dVar1 + dVar2;
    }
    dVar6 = dVar6 + dVar1;
    uVar3 = (double)uVar3 + (double)CONCAT44(uVar8,uVar7) * dVar1;
    uVar4 = (double)uVar4 + (double)CONCAT44(uVar10,uVar9) * dVar1;
    uVar5 = (double)uVar5 + (double)CONCAT44(uVar12,uVar11) * dVar1;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_108);
  }
  if (__real_3e45798ee2308c3a <=
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar6 = __real_3ff0000000000000 / dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * (double)uVar5;
    return __return_storage_ptr__;
  }
LAB_14c6d3550:
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_150;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_148;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  return __return_storage_ptr__;
}

// TCotanCentroidSafe<`UE::Geometry::FMeshWeights::CotanCentroidSafe'::__l2::<lambda_1>_> @ 14c6d35d0

TVector<double> * __cdecl
TCotanCentroidSafe<_UE::Geometry::FMeshWeights::CotanCentroidSafe_::__l2::<lambda_1>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          <lambda_1> param_3,double param_4,bool *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  double dVar21;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_168 [2];
  double local_160;
  double dStack_158;
  double local_150;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  BaseValueIterator local_118 [5];
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar21 = 0.0;
  bVar16 = false;
  lVar3 = *(longlong *)
           (((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_160 = *pdVar1;
  dStack_158 = pdVar1[1];
  local_150 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_res10[0] = 0xffffffff;
  local_res20[0] = 0xffffffff;
  local_res18[0] = 0xffffffff;
  local_168[1] = 0xffffffff;
  local_168[0] = -1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (local_118,&param_1->VertexEdgeLists,param_2,false);
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  while( true ) {
    if ((((local_118[0].ListSet == &param_1->VertexEdgeLists) && (local_118[0].ListIndex == param_2)
         ) && (local_118[0].iCur == -1)) && (local_118[0].cur_ptr == -1)) goto LAB_14c6d3909;
    local_res18[0] = 0xffffffff;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_118[0].cur_value,param_2,(int *)local_res10,(int *)local_res20,
               (int *)local_res18,local_168 + 1,local_168);
    pFVar4 = ((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data;
    pdVar1 = (double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    dVar10 = *pdVar1;
    dVar11 = pdVar1[1];
    dVar2 = *(double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8) + 0x10 +
             (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    uVar15 = (ulonglong)(local_res20[0] & 0x1ff);
    lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_res20[0] >> 9) * 8);
    pdVar1 = (double *)(lVar3 + uVar15 * 0x18);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    local_148._s_0.X = dVar10 - dVar5;
    local_148._s_0.Y = dVar11 - dVar6;
    local_148._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar15 * 0x18);
    local_130._s_0.X = local_160 - dVar5;
    local_130._s_0.Y = dStack_158 - dVar6;
    local_130._s_0.Z = local_150 - *(double *)(lVar3 + 0x10 + uVar15 * 0x18);
    dVar5 = UE::Geometry::VectorUtil::VectorCot<double>
                      ((TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0);
    uVar17 = 0;
    uVar19 = 0;
    if (local_res18[0] != 0xffffffff) {
      uVar15 = (ulonglong)(local_res18[0] & 0x1ff);
      lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_res18[0] >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar15 * 0x18);
      dVar6 = *pdVar1;
      dVar12 = pdVar1[1];
      local_130._s_0.X = dVar10 - dVar6;
      local_130._s_0.Y = dVar11 - dVar12;
      local_130._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar15 * 0x18);
      local_148._s_0.Y = dStack_158 - dVar12;
      local_148._s_0.X = local_160 - dVar6;
      local_148._s_0.Z = local_150 - *(double *)(lVar3 + 0x10 + uVar15 * 0x18);
      dVar6 = UE::Geometry::VectorUtil::VectorCot<double>
                        ((TVector<double> *)&local_148._s_0,(TVector<double> *)&local_130._s_0);
      uVar17 = SUB84(dVar6,0);
      uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar5 = dVar5 + (double)CONCAT44(uVar19,uVar17);
    uVar18 = SUB84(dVar5,0) & uVar13;
    uVar20 = (uint)((ulonglong)dVar5 >> 0x20) & uVar14;
    if (param_4 <= (double)CONCAT44(uVar20,uVar18) && (double)CONCAT44(uVar20,uVar18) != param_4)
    break;
    dVar21 = dVar21 + dVar5;
    uVar7 = (double)uVar7 + dVar10 * dVar5;
    uVar8 = (double)uVar8 + dVar11 * dVar5;
    uVar9 = (double)uVar9 + dVar2 * dVar5;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_118);
  }
  bVar16 = true;
LAB_14c6d3909:
  if (param_5 != (bool *)0x0) {
    *param_5 = bVar16;
  }
  if ((bVar16 != false) ||
     ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar14,SUB84(dVar21,0) & uVar13) <
      __real_3e45798ee2308c3a)) {
    UE::Geometry::FDynamicMesh3::GetVtxOneRingCentroid(param_1,param_2,__return_storage_ptr__);
  }
  else {
    dVar21 = __real_3ff0000000000000 / dVar21;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar21 * (double)uVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21 * (double)uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar21 * (double)uVar9;
  }
  return __return_storage_ptr__;
}

// TCotanCentroidSafe<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d3a00

TVector<double> * __cdecl
TCotanCentroidSafe<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4,bool *param_5
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_188 [2];
  int local_180 [2];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  BaseValueIterator local_118;
  double local_f0;
  double local_e8;
  double local_e0;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar9 = 0.0;
  local_188[0] = param_2;
  (**(code **)param_3)(&local_130,*(undefined8 *)&param_3->field_0x8,local_188);
  local_res10[0] = -1;
  local_res20[0] = -1;
  bVar6 = false;
  local_res18[0] = -1;
  local_180[1] = 0xffffffff;
  local_180[0] = -1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_118,&param_1->VertexEdgeLists,param_2,false);
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  while( true ) {
    if ((((local_118.ListSet == &param_1->VertexEdgeLists) && (local_118.ListIndex == param_2)) &&
        (local_118.iCur == -1)) && (local_118.cur_ptr == -1)) goto LAB_14c6d3d1f;
    local_res18[0] = -1;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_118.cur_value,param_2,local_res10,local_res20,local_res18,local_180 + 1
               ,local_180);
    local_188[0] = local_res10[0];
    (**(code **)param_3)(&local_148,*(undefined8 *)&param_3->field_0x8,local_188);
    local_188[0] = local_res20[0];
    (**(code **)param_3)(&local_f0,*(undefined8 *)&param_3->field_0x8,local_188);
    uVar10 = SUB84(local_148,0);
    uVar11 = (undefined4)((ulonglong)local_148 >> 0x20);
    uVar14 = SUB84(local_138,0);
    uVar15 = (undefined4)((ulonglong)local_138 >> 0x20);
    uVar12 = SUB84(local_140,0);
    uVar13 = (undefined4)((ulonglong)local_140 >> 0x20);
    local_160._s_0.X = local_148 - local_f0;
    local_160._s_0.Y = local_140 - local_e8;
    local_160._s_0.Z = local_138 - local_e0;
    local_178._s_0.Y = local_128 - local_e8;
    local_178._s_0.X = local_130 - local_f0;
    local_178._s_0.Z = local_120 - local_e0;
    dVar7 = UE::Geometry::VectorUtil::VectorCot<double>
                      ((TVector<double> *)&local_178._s_0,(TVector<double> *)&local_160._s_0);
    dVar8 = 0.0;
    if (local_res18[0] != -1) {
      local_188[0] = local_res18[0];
      (**(code **)param_3)(&local_178,*(undefined8 *)&param_3->field_0x8,local_188);
      uVar10 = SUB84(local_148,0);
      uVar11 = (undefined4)((ulonglong)local_148 >> 0x20);
      uVar14 = SUB84(local_138,0);
      uVar15 = (undefined4)((ulonglong)local_138 >> 0x20);
      uVar12 = SUB84(local_140,0);
      uVar13 = (undefined4)((ulonglong)local_140 >> 0x20);
      local_160._s_0.X = local_148 - local_178._s_0.X;
      local_160._s_0.Y = local_140 - local_178._s_0.Y;
      local_160._s_0.Z = local_138 - local_178._s_0.Z;
      local_178._s_0.Y = local_128 - local_178._s_0.Y;
      local_178._s_0.X = local_130 - local_178._s_0.X;
      local_178._s_0.Z = local_120 - local_178._s_0.Z;
      dVar8 = UE::Geometry::VectorUtil::VectorCot<double>
                        ((TVector<double> *)&local_178._s_0,(TVector<double> *)&local_160._s_0);
    }
    dVar7 = dVar7 + dVar8;
    if (param_4 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,SUB84(dVar7,0) & uVar4))
    break;
    dVar9 = dVar9 + dVar7;
    uVar1 = (double)uVar1 + (double)CONCAT44(uVar11,uVar10) * dVar7;
    uVar2 = (double)uVar2 + (double)CONCAT44(uVar13,uVar12) * dVar7;
    uVar3 = (double)uVar3 + (double)CONCAT44(uVar15,uVar14) * dVar7;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_118);
  }
  bVar6 = true;
LAB_14c6d3d1f:
  if (param_5 != (bool *)0x0) {
    *param_5 = bVar6;
  }
  if ((bVar6 != false) ||
     ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar5,SUB84(dVar9,0) & uVar4) <
      __real_3e45798ee2308c3a)) {
    UE::Geometry::FDynamicMesh3::GetVtxOneRingCentroid(param_1,param_2,__return_storage_ptr__);
  }
  else {
    dVar9 = __real_3ff0000000000000 / dVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * (double)uVar3;
  }
  return __return_storage_ptr__;
}

// TCotanWeightsBlendSafe<`UE::Geometry::FMeshWeights::CotanWeightsBlendSafe'::__l2::<lambda_1>_> @ 14c6d3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TCotanWeightsBlendSafe<_UE::Geometry::FMeshWeights::CotanWeightsBlendSafe_::__l2::<lambda_1>_>
          (FDynamicMesh3 *param_1,int param_2,<lambda_1> param_3,
          TFunctionRef<void___cdecl(int,double)> *param_4,double param_5,bool *param_6)

{
  FSmallListSet *pFVar1;
  double *pdVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  ForElementType<int> FVar17;
  ForElementType<double> FVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_3c8 [32];
  uint local_378;
  uint local_374;
  double local_370;
  uint local_368 [4];
  undefined4 local_358 [2];
  undefined4 local_350 [2];
  TVector<double>_u_0 local_348;
  FDynamicMesh3 *local_330;
  double local_328;
  double local_320;
  BaseValueIterator local_318;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  double local_298;
  ForElementType<int> local_288;
  uint local_200;
  uint local_1fc;
  ForElementType<double> local_1f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar15 = false;
  pFVar1 = &param_1->VertexEdgeLists;
  dVar6 = 0.0;
  lVar19 = *(longlong *)
            (((param_3.Mesh)->Vertices).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar2 = (double *)(lVar19 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_348._s_0.X = *pdVar2;
  local_348._s_0.Y = pdVar2[1];
  local_348._s_0.Z = *(double *)(lVar19 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_288.SecondaryData = (ForElementType<int>)0x0;
  local_200 = 0;
  local_1fc = 0x20;
  local_1f8.SecondaryData = (ForElementType<double>)0x0;
  local_f0 = 0;
  local_ec = 0x20;
  local_378 = 0xffffffff;
  local_368[0] = 0xffffffff;
  local_374 = 0xffffffff;
  local_368[2] = 0xffffffff;
  local_368[1] = 0xffffffff;
  local_330 = param_1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator(&local_318,pFVar1,param_2,false)
  ;
  uVar13 = local_348._s_0.Z;
  uVar12 = local_348._s_0.Y;
  uVar11 = local_348._s_0.X;
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  do {
    if ((((local_318.ListSet == pFVar1) && (local_318.ListIndex == param_2)) &&
        (local_318.iCur == -1)) && (local_318.cur_ptr == -1)) {
LAB_14c6d4344:
      if (param_6 != (bool *)0x0) {
        *param_6 = bVar15;
      }
      uVar20 = (ulonglong)(int)local_200;
      if ((bVar15 != false) ||
         ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar16,SUB84(dVar6,0) & uVar22) <
          __real_3e45798ee2308c3a)) {
        uVar22 = 0;
        dVar6 = __real_3ff0000000000000 / (double)(int)local_200;
        if (0 < (int)local_200) {
          lVar19 = 0;
          uVar21 = uVar20;
          while( true ) {
            uVar16 = 0;
            if ((int)uVar22 < (int)uVar21) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar17 = (ForElementType<int>)&local_288;
            if (local_288.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_288.SecondaryData;
            }
            local_350[0] = *(undefined4 *)((longlong)FVar17 + lVar19 * 4);
            local_320 = dVar6;
            (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_350,&local_320);
            uVar22 = uVar22 + 1;
            lVar19 = lVar19 + 1;
            if ((longlong)uVar20 <= lVar19) break;
            uVar21 = (ulonglong)local_200;
          }
        }
      }
      else {
        uVar22 = 0;
        if (0 < (int)local_200) {
          lVar19 = 0;
          uVar21 = uVar20;
          while( true ) {
            uVar16 = 0;
            if ((int)uVar22 < local_f0) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            uVar24 = (uint)uVar21;
            if ((uVar16 == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar24 = local_200, bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar18 = (ForElementType<double>)&local_1f8;
            if (local_1f8.SecondaryData != (ForElementType<double>)0x0) {
              FVar18 = local_1f8.SecondaryData;
            }
            uVar16 = 0;
            if ((int)uVar22 < (int)uVar24) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            dVar3 = *(double *)((longlong)FVar18 + lVar19 * 8);
            if ((uVar16 == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar17 = (ForElementType<int>)&local_288;
            if (local_288.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_288.SecondaryData;
            }
            local_358[0] = *(undefined4 *)((longlong)FVar17 + lVar19 * 4);
            local_328 = dVar3 / dVar6;
            (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_358,&local_328);
            uVar22 = uVar22 + 1;
            lVar19 = lVar19 + 1;
            if ((longlong)uVar20 <= lVar19) break;
            uVar21 = (ulonglong)local_200;
          }
        }
      }
      if (local_1f8.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_1f8.SecondaryData);
      }
      if (local_288.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_288.SecondaryData);
      }
      return;
    }
    local_374 = 0xffffffff;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_318.cur_value,param_2,(int *)&local_378,(int *)local_368,
               (int *)&local_374,(int *)(local_368 + 2),(int *)(local_368 + 1));
    pFVar4 = ((param_3.Mesh)->Vertices).Blocks.AllocatorInstance.Data;
    pdVar2 = (double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_378 >> 9) * 8) +
             (ulonglong)(local_378 & 0x1ff) * 0x18);
    dVar7 = *pdVar2;
    dVar8 = pdVar2[1];
    dVar3 = *(double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_378 >> 9) * 8) + 0x10 +
             (ulonglong)(local_378 & 0x1ff) * 0x18);
    pdVar2 = (double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_368[0] >> 9) * 8) +
             (ulonglong)(local_368[0] & 0x1ff) * 0x18);
    dVar23 = *pdVar2;
    dVar9 = pdVar2[1];
    local_298 = *(double *)
                 (*(longlong *)(pFVar4 + (ulonglong)(local_368[0] >> 9) * 8) + 0x10 +
                 (ulonglong)(local_368[0] & 0x1ff) * 0x18);
    local_348._s_0.X = dVar7 - dVar23;
    local_348._s_0.Y = dVar8 - dVar9;
    local_348._s_0.Z = dVar3 - local_298;
    local_2f0._s_0.X = (double)uVar11 - dVar23;
    local_2f0._s_0.Y = (double)uVar12 - dVar9;
    local_2f0._s_0.Z = (double)uVar13 - local_298;
    dVar23 = UE::Geometry::VectorUtil::VectorCot<double>
                       ((TVector<double> *)&local_2f0._s_0,(TVector<double> *)&local_348._s_0);
    local_370 = 0.0;
    if (local_374 != 0xffffffff) {
      pdVar2 = (double *)
               (*(longlong *)(pFVar4 + (ulonglong)(local_374 >> 9) * 8) +
               (ulonglong)(local_374 & 0x1ff) * 0x18);
      dVar9 = *pdVar2;
      dVar10 = pdVar2[1];
      local_298 = *(double *)
                   (*(longlong *)(pFVar4 + (ulonglong)(local_374 >> 9) * 8) + 0x10 +
                   (ulonglong)(local_374 & 0x1ff) * 0x18);
      local_2c0._s_0.X = (double)uVar11 - dVar9;
      local_2d8._s_0.X = dVar7 - dVar9;
      local_2d8._s_0.Z = dVar3 - local_298;
      local_2d8._s_0.Y = dVar8 - dVar10;
      local_2c0._s_0.Y = (double)uVar12 - dVar10;
      local_2c0._s_0.Z = (double)uVar13 - local_298;
      local_370 = dVar23;
      local_370 = UE::Geometry::VectorUtil::VectorCot<double>
                            ((TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_2d8._s_0);
    }
    local_370 = dVar23 + local_370;
    uVar24 = SUB84(local_370,0) & uVar22;
    uVar25 = (uint)((ulonglong)local_370 >> 0x20) & uVar16;
    if (param_5 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != param_5) {
      bVar15 = true;
      goto LAB_14c6d4344;
    }
    FVar17 = (ForElementType<int>)&local_288;
    if (local_288.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_288.SecondaryData;
    }
    if ((ulonglong)FVar17 <= &local_378) {
      FVar17 = (ForElementType<int>)&local_288;
      if (local_288.SecondaryData != (ForElementType<int>)0x0) {
        FVar17 = local_288.SecondaryData;
      }
      if ((&local_378 < (uint *)((longlong)FVar17 + (longlong)(int)local_1fc * 4)) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_200 == local_1fc) {
      local_200 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_288,(int *)&local_1fc);
    }
    lVar19 = (longlong)(int)local_200;
    FVar17 = (ForElementType<int>)&local_288;
    if (local_288.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_288.SecondaryData;
    }
    local_200 = local_200 + 1;
    *(uint *)((longlong)FVar17 + lVar19 * 4) = local_378;
    FVar18 = (ForElementType<double>)&local_1f8;
    if (local_1f8.SecondaryData != (ForElementType<double>)0x0) {
      FVar18 = local_1f8.SecondaryData;
    }
    if ((ulonglong)FVar18 <= &local_370) {
      FVar18 = (ForElementType<double>)&local_1f8;
      if (local_1f8.SecondaryData != (ForElementType<double>)0x0) {
        FVar18 = local_1f8.SecondaryData;
      }
      if ((&local_370 < (double *)((longlong)FVar18 + (longlong)local_ec * 8)) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_f0 == local_ec) {
      local_f0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                           (0x808,&local_1f8,&local_ec);
    }
    lVar19 = (longlong)local_f0;
    FVar18 = (ForElementType<double>)&local_1f8;
    if (local_1f8.SecondaryData != (ForElementType<double>)0x0) {
      FVar18 = local_1f8.SecondaryData;
    }
    local_f0 = local_f0 + 1;
    *(double *)((longlong)FVar18 + lVar19 * 8) = local_370;
    dVar6 = dVar6 + local_370;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_318);
    param_1 = local_330;
  } while( true );
}

// TGaussianCurvature<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d4600

double __cdecl
TGaussianCurvature<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4)

{
  int local_res8 [2];
  int local_res10 [2];
  double local_res18;
  double local_res20;
  double local_98;
  code *local_90;
  FDynamicMesh3 **local_88;
  undefined1 local_80 [24];
  FDynamicMesh3 *local_68;
  int *local_60;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_58;
  undefined1 *local_50;
  double *local_48;
  double *local_40;
  double *local_38;
  
  local_98 = 0.0;
  local_res18 = 0.0;
  local_res8[0] = param_2;
  local_res10[0] = param_2;
  local_res20 = param_4;
  (**(code **)param_3)(local_80,*(undefined8 *)&param_3->field_0x8,local_res8);
  local_60 = local_res10;
  local_50 = local_80;
  local_48 = &local_98;
  local_40 = &local_res18;
  local_38 = &local_res20;
  local_88 = &local_68;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TGaussianCurvature<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = param_1;
  local_58 = param_3;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (param_1,local_res10[0],(TFunctionRef<void___cdecl(int)> *)&local_90);
  if (__real_3eb0c6f7a0000000 <= local_res18) {
    local_res18 = (__real_401921fb54442d18 - local_98) / local_res18;
  }
  else {
    local_res18 = 0.0;
  }
  return local_res18;
}

// TMeanCurvatureNormal<`UE::MeshCurvature::MeanCurvatureNormal'::__l2::<lambda_1>_> @ 14c6d46e0

TVector<double> * __cdecl
TMeanCurvatureNormal<_UE::MeshCurvature::MeanCurvatureNormal_::__l2::<lambda_1>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          <lambda_1> param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint local_res10 [2];
  uint local_res18 [2];
  FDynamicMesh3 *local_res20;
  uint local_168 [2];
  TVector<double>_u_0 local_160;
  int local_148 [2];
  code *local_140;
  FDynamicMesh3 **ppFStack_138;
  double local_130;
  TVector<double>_u_0 local_128;
  BaseValueIterator local_110 [5];
  
  local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  lVar3 = *(longlong *)
           (((param_3.Mesh)->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_140 = (code *)*pdVar1;
  ppFStack_138 = (FDynamicMesh3 **)pdVar1[1];
  local_130 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_res10[0] = 0xffffffff;
  local_168[0] = 0xffffffff;
  local_res18[0] = 0xffffffff;
  local_148[1] = 0xffffffff;
  local_148[0] = -1;
  local_res20 = param_3.Mesh;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (local_110,&param_1->VertexEdgeLists,param_2,false);
  dVar17 = local_130;
  uVar10 = local_160._s_0.X;
  uVar9 = local_160._s_0.Y;
  uVar8 = local_160._s_0.Z;
  while ((((dVar2 = __real_3e45798ee2308c3a, local_110[0].ListSet != &param_1->VertexEdgeLists ||
           (local_110[0].ListIndex != param_2)) || (local_110[0].iCur != -1)) ||
         (local_110[0].cur_ptr != -1))) {
    local_res18[0] = 0xffffffff;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_110[0].cur_value,param_2,(int *)local_res10,(int *)local_168,
               (int *)local_res18,local_148 + 1,local_148);
    pFVar4 = (local_res20->Vertices).Blocks.AllocatorInstance.Data;
    pdVar1 = (double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    dVar11 = *pdVar1;
    dVar12 = pdVar1[1];
    dVar2 = *(double *)
             (*(longlong *)(pFVar4 + (ulonglong)(local_res10[0] >> 9) * 8) + 0x10 +
             (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    uVar14 = (ulonglong)(local_168[0] & 0x1ff);
    lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_168[0] >> 9) * 8);
    pdVar1 = (double *)(lVar3 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    local_160._s_0.X = dVar11 - dVar5;
    local_160._s_0.Y = dVar12 - dVar6;
    local_160._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
    local_128._s_0.X = (double)local_140 - dVar5;
    local_128._s_0.Y = (double)ppFStack_138 - dVar6;
    local_128._s_0.Z = dVar17 - *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
    dVar5 = UE::Geometry::VectorUtil::VectorCot<double>
                      ((TVector<double> *)&local_128._s_0,(TVector<double> *)&local_160._s_0);
    uVar18 = SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)param_4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar7 = (double)CONCAT44(uVar19,uVar18);
    dVar6 = dVar7;
    if ((dVar7 <= dVar5) && (dVar6 = dVar5, param_4 <= dVar5)) {
      dVar6 = param_4;
    }
    uVar15 = 0;
    uVar16 = 0;
    if (local_res18[0] != 0xffffffff) {
      uVar14 = (ulonglong)(local_res18[0] & 0x1ff);
      lVar3 = *(longlong *)(pFVar4 + (ulonglong)(local_res18[0] >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar14 * 0x18);
      dVar5 = *pdVar1;
      dVar13 = pdVar1[1];
      local_128._s_0.X = dVar11 - dVar5;
      local_128._s_0.Y = dVar12 - dVar13;
      local_128._s_0.Z = dVar2 - *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
      local_160._s_0.Y = (double)ppFStack_138 - dVar13;
      local_160._s_0.X = (double)local_140 - dVar5;
      local_160._s_0.Z = dVar17 - *(double *)(lVar3 + 0x10 + uVar14 * 0x18);
      dVar5 = UE::Geometry::VectorUtil::VectorCot<double>
                        ((TVector<double> *)&local_160._s_0,(TVector<double> *)&local_128._s_0);
      uVar15 = SUB84(dVar5,0);
      uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    if (((double)CONCAT44(uVar19,uVar18) <= (double)CONCAT44(uVar16,uVar15)) &&
       (dVar7 = (double)CONCAT44(uVar16,uVar15), param_4 <= (double)CONCAT44(uVar16,uVar15))) {
      dVar7 = param_4;
    }
    dVar6 = dVar6 + dVar7;
    uVar10 = (double)uVar10 + ((double)local_140 - dVar11) * dVar6;
    uVar9 = (double)uVar9 + ((double)ppFStack_138 - dVar12) * dVar6;
    uVar8 = (double)uVar8 + (dVar17 - dVar2) * dVar6;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_110);
  }
  if (__real_3e45798ee2308c3a <=
      (double)uVar9 * (double)uVar9 + (double)uVar10 * (double)uVar10 +
      (double)uVar8 * (double)uVar8) {
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::MeshCurvature::MeanCurvatureNormal'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    ppFStack_138 = &local_res20;
    dVar17 = TVoronoiArea<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
                       (param_1,param_2,
                        (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_140,
                        __real_408f400000000000);
    if (dVar2 <= dVar17) {
      dVar17 = __real_3fe0000000000000 / dVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar10 * dVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9 * dVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar8 * dVar17;
      return __return_storage_ptr__;
    }
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// TMeanCurvatureNormal<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d4b60

TVector<double> * __cdecl
TMeanCurvatureNormal<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_178 [2];
  undefined1 local_170 [16];
  double local_160;
  int local_158 [2];
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  BaseValueIterator local_108;
  double local_e0;
  double local_d8;
  double local_d0;
  
  local_170._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_170._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178[0] = param_2;
  (**(code **)param_3)(&local_120,*(undefined8 *)&param_3->field_0x8,local_178);
  local_res10[0] = -1;
  local_res20[0] = -1;
  local_res18[0] = -1;
  local_158[1] = 0xffffffff;
  local_158[0] = -1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_108,&param_1->VertexEdgeLists,param_2,false);
  dVar3 = local_160;
  dVar5 = (double)local_170._0_8_;
  dVar4 = (double)local_170._8_8_;
  while ((((dVar1 = __real_3e45798ee2308c3a, local_108.ListSet != &param_1->VertexEdgeLists ||
           (local_108.ListIndex != param_2)) || (local_108.iCur != -1)) || (local_108.cur_ptr != -1)
         )) {
    local_res18[0] = -1;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_108.cur_value,param_2,local_res10,local_res20,local_res18,local_158 + 1
               ,local_158);
    local_178[0] = local_res10[0];
    (**(code **)param_3)(local_170,*(undefined8 *)&param_3->field_0x8,local_178);
    local_178[0] = local_res20[0];
    (**(code **)param_3)(&local_e0,*(undefined8 *)&param_3->field_0x8,local_178);
    uVar18 = (undefined4)local_170._0_8_;
    uVar19 = SUB84(local_170._0_8_,4);
    uVar20 = (undefined4)local_170._8_8_;
    uVar21 = SUB84(local_170._8_8_,4);
    uVar12 = SUB84(local_120,0);
    uVar13 = (undefined4)((ulonglong)local_120 >> 0x20);
    local_138._s_0.X = (double)local_170._0_8_ - local_e0;
    uVar14 = SUB84(local_118,0);
    uVar15 = (undefined4)((ulonglong)local_118 >> 0x20);
    local_138._s_0.Y = (double)local_170._8_8_ - local_d8;
    uVar16 = SUB84(local_110,0);
    uVar17 = (undefined4)((ulonglong)local_110 >> 0x20);
    local_138._s_0.Z = local_160 - local_d0;
    local_150._s_0.Y = local_118 - local_d8;
    local_150._s_0.X = local_120 - local_e0;
    local_150._s_0.Z = local_110 - local_d0;
    dVar1 = UE::Geometry::VectorUtil::VectorCot<double>
                      ((TVector<double> *)&local_150._s_0,(TVector<double> *)&local_138._s_0);
    uVar10 = SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)param_4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar2 = (double)CONCAT44(uVar11,uVar10);
    dVar9 = dVar2;
    if ((dVar2 <= dVar1) && (dVar9 = dVar1, param_4 <= dVar1)) {
      dVar9 = param_4;
    }
    uVar7 = 0;
    uVar8 = 0;
    if (local_res18[0] != -1) {
      local_178[0] = local_res18[0];
      (**(code **)param_3)(&local_150,*(undefined8 *)&param_3->field_0x8,local_178);
      uVar18 = (undefined4)local_170._0_8_;
      uVar19 = SUB84(local_170._0_8_,4);
      uVar20 = (undefined4)local_170._8_8_;
      uVar21 = SUB84(local_170._8_8_,4);
      uVar12 = SUB84(local_120,0);
      uVar13 = (undefined4)((ulonglong)local_120 >> 0x20);
      local_138._s_0.X = (double)local_170._0_8_ - local_150._s_0.X;
      uVar14 = SUB84(local_118,0);
      uVar15 = (undefined4)((ulonglong)local_118 >> 0x20);
      local_138._s_0.Y = (double)local_170._8_8_ - local_150._s_0.Y;
      uVar16 = SUB84(local_110,0);
      uVar17 = (undefined4)((ulonglong)local_110 >> 0x20);
      local_138._s_0.Z = local_160 - local_150._s_0.Z;
      local_150._s_0.Y = local_118 - local_150._s_0.Y;
      local_150._s_0.X = local_120 - local_150._s_0.X;
      local_150._s_0.Z = local_110 - local_150._s_0.Z;
      dVar1 = UE::Geometry::VectorUtil::VectorCot<double>
                        ((TVector<double> *)&local_150._s_0,(TVector<double> *)&local_138._s_0);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    if (((double)CONCAT44(uVar11,uVar10) <= (double)CONCAT44(uVar8,uVar7)) &&
       (dVar2 = (double)CONCAT44(uVar8,uVar7), param_4 <= (double)CONCAT44(uVar8,uVar7))) {
      dVar2 = param_4;
    }
    dVar9 = dVar9 + dVar2;
    dVar3 = dVar3 + ((double)CONCAT44(uVar17,uVar16) - local_160) * dVar9;
    dVar5 = dVar5 + ((double)CONCAT44(uVar13,uVar12) - (double)CONCAT44(uVar19,uVar18)) * dVar9;
    dVar4 = dVar4 + ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar21,uVar20)) * dVar9;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_108);
  }
  if (__real_3e45798ee2308c3a <= dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3) {
    local_170._0_8_ = *(undefined8 *)param_3;
    local_170._8_8_ = *(undefined8 *)&param_3->field_0x8;
    dVar9 = TVoronoiArea<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
                      (param_1,param_2,
                       (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)local_170,
                       __real_408f400000000000);
    if (dVar1 <= dVar9) {
      dVar9 = __real_3fe0000000000000 / dVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * dVar3;
      return __return_storage_ptr__;
    }
  }
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// TMeanValueCentroid<`UE::Geometry::FMeshWeights::MeanValueCentroid'::__l2::<lambda_1>_> @ 14c6d4fd0

TVector<double> * __cdecl
TMeanValueCentroid<_UE::Geometry::FMeshWeights::MeanValueCentroid_::__l2::<lambda_1>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          <lambda_1> param_3,double param_4)

{
  double *pdVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_res10 [2];
  uint local_res18 [2];
  FDynamicMesh3 *local_res20;
  uint local_168 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  code *local_128;
  FDynamicMesh3 **local_120;
  double local_118;
  BaseValueIterator local_110 [5];
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar11 = 0.0;
  local_138 = 0.0;
  lVar2 = *(longlong *)
           (((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_158 = *pdVar1;
  dStack_150 = pdVar1[1];
  local_148 = *(double *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_res10[0] = 0xffffffff;
  local_168[0] = 0xffffffff;
  local_res18[0] = 0xffffffff;
  local_168[2] = 0xffffffff;
  local_168[1] = 0xffffffff;
  local_res20 = param_3.mesh;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (local_110,&param_1->VertexEdgeLists,param_2,false);
  dVar5 = __real_3ff0000000000000;
  do {
    if ((((local_110[0].ListSet == &param_1->VertexEdgeLists) && (local_110[0].ListIndex == param_2)
         ) && (local_110[0].iCur == -1)) && (local_110[0].cur_ptr == -1)) {
      if (__real_3eb0c6f7a0000000 <= dVar11) {
        dVar5 = dVar5 / dVar11;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar6 * dVar5;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7 * dVar5;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar8 * dVar5;
      }
      else {
        local_120 = &local_res20;
        local_128 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMeshWeights::MeanValueCentroid'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        UE::Geometry::FMeshWeights::UniformCentroid
                  (__return_storage_ptr__,param_1,param_2,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_128);
      }
      return __return_storage_ptr__;
    }
    local_res18[0] = 0xffffffff;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_110[0].cur_value,param_2,(int *)local_res10,(int *)local_168,
               (int *)local_res18,(int *)(local_168 + 2),(int *)(local_168 + 1));
    pFVar3 = (local_res20->Vertices).Blocks.AllocatorInstance.Data;
    pdVar1 = (double *)
             (*(longlong *)(pFVar3 + (ulonglong)(local_res10[0] >> 9) * 8) +
             (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    dVar9 = *pdVar1;
    dVar10 = pdVar1[1];
    local_118 = *(double *)
                 (*(longlong *)(pFVar3 + (ulonglong)(local_res10[0] >> 9) * 8) + 0x10 +
                 (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
    dVar13 = dVar9 - local_158;
    dVar12 = local_118 - local_148;
    dVar11 = dVar10 - dStack_150;
    local_128 = (code *)SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12);
    if ((double)local_128 <= 0.0) {
LAB_14c6d53be:
      dVar11 = param_4;
      if (__real_40c3880000000000 <= param_4) {
        dVar11 = __real_40c3880000000000;
      }
    }
    else {
      dVar4 = dVar5 / (double)local_128;
      local_130 = dVar11 * dVar4;
      local_140 = dVar12 * dVar4;
      if ((double)local_128 < __real_3eb0c6f7a0000000) goto LAB_14c6d53be;
      pdVar1 = (double *)
               (*(longlong *)(pFVar3 + (ulonglong)(local_168[0] >> 9) * 8) +
               (ulonglong)(local_168[0] & 0x1ff) * 0x18);
      dVar14 = *(double *)
                (*(longlong *)(pFVar3 + (ulonglong)(local_168[0] >> 9) * 8) + 0x10 +
                (ulonglong)(local_168[0] & 0x1ff) * 0x18) - local_148;
      dVar12 = pdVar1[1] - dStack_150;
      dVar15 = *pdVar1 - local_158;
      dVar11 = SQRT(dVar12 * dVar12 + dVar15 * dVar15 + dVar14 * dVar14);
      if (dVar11 <= 0.0) {
        dVar15 = 0.0;
        dVar12 = 0.0;
        dVar14 = 0.0;
      }
      else {
        dVar11 = dVar5 / dVar11;
        dVar15 = dVar15 * dVar11;
        dVar12 = dVar12 * dVar11;
        dVar14 = dVar14 * dVar11;
      }
      dVar11 = dVar12 * local_130 + dVar15 * dVar13 * dVar4 + dVar14 * local_140;
      dVar11 = (dVar5 - dVar11) / (dVar11 + dVar5);
      if (0.0 <= dVar11) {
        if (__real_7fefffffffffffff <= dVar11) {
          dVar11 = __real_7fefffffffffffff;
        }
      }
      else {
        dVar11 = 0.0;
      }
      dVar11 = SQRT(dVar11);
      if (local_res18[0] != 0xffffffff) {
        pdVar1 = (double *)
                 (*(longlong *)(pFVar3 + (ulonglong)(local_res18[0] >> 9) * 8) +
                 (ulonglong)(local_res18[0] & 0x1ff) * 0x18);
        dVar15 = *(double *)
                  (*(longlong *)(pFVar3 + (ulonglong)(local_res18[0] >> 9) * 8) + 0x10 +
                  (ulonglong)(local_res18[0] & 0x1ff) * 0x18) - local_148;
        dVar14 = pdVar1[1] - dStack_150;
        dVar16 = *pdVar1 - local_158;
        dVar12 = SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15);
        if (dVar12 <= 0.0) {
          dVar16 = 0.0;
          dVar14 = 0.0;
          dVar15 = 0.0;
        }
        else {
          dVar12 = dVar5 / dVar12;
          dVar16 = dVar16 * dVar12;
          dVar14 = dVar14 * dVar12;
          dVar15 = dVar15 * dVar12;
        }
        dVar13 = dVar14 * local_130 + dVar16 * dVar13 * dVar4 + dVar15 * local_140;
        dVar13 = (dVar5 - dVar13) / (dVar13 + dVar5);
        if (0.0 <= dVar13) {
          if (__real_7fefffffffffffff <= dVar13) {
            dVar13 = __real_7fefffffffffffff;
          }
        }
        else {
          dVar13 = 0.0;
        }
        dVar11 = dVar11 + SQRT(dVar13);
      }
      dVar11 = dVar11 / (double)local_128;
      if (0.0 <= dVar11) {
        if (param_4 <= dVar11) {
          dVar11 = param_4;
        }
      }
      else {
        dVar11 = 0.0;
      }
    }
    uVar8 = (double)uVar8 + local_118 * dVar11;
    uVar7 = (double)uVar7 + dVar10 * dVar11;
    uVar6 = (double)uVar6 + dVar9 * dVar11;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_110);
    dVar11 = local_138 + dVar11;
    local_138 = dVar11;
  } while( true );
}

// TMeanValueCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d54e0

TVector<double> * __cdecl
TMeanValueCentroid<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 unaff_XMM15 [16];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_158 [2];
  int local_150 [2];
  double local_148;
  double local_140;
  double local_138;
  double local_130 [2];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  BaseValueIterator local_f0;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar16 = 0.0;
  local_130[0] = 0.0;
  local_158[0] = param_2;
  (**(code **)param_3)(&local_148,*(undefined8 *)&param_3->field_0x8,local_158);
  local_res10[0] = -1;
  local_res20[0] = -1;
  local_res18[0] = -1;
  local_150[1] = 0xffffffff;
  local_150[0] = -1;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_f0,&param_1->VertexEdgeLists,param_2,false);
  dVar3 = __real_3ff0000000000000;
  do {
    dVar17 = __real_3eb0c6f7a0000000;
    if ((((local_f0.ListSet == &param_1->VertexEdgeLists) && (local_f0.ListIndex == param_2)) &&
        (local_f0.iCur == -1)) && (local_f0.cur_ptr == -1)) {
      if (__real_3eb0c6f7a0000000 <= dVar16) {
        dVar3 = dVar3 / dVar16;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar5 * dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6 * dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar7 * dVar3;
      }
      else {
        local_130[0] = *(double *)param_3;
        local_130[1] = *(double *)&param_3->field_0x8;
        UE::Geometry::FMeshWeights::UniformCentroid
                  (__return_storage_ptr__,param_1,param_2,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)local_130);
      }
      return __return_storage_ptr__;
    }
    local_res18[0] = -1;
    UE::Geometry::FDynamicMesh3::GetVtxNbrhood
              (param_1,local_f0.cur_value,param_2,local_res10,local_res20,local_res18,local_150 + 1,
               local_150);
    local_158[0] = local_res10[0];
    (**(code **)param_3)(&local_108,*(undefined8 *)&param_3->field_0x8,local_158);
    dVar12 = local_108 - local_148;
    dVar11 = local_100 - local_140;
    dVar4 = local_f8 - local_138;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar11 * dVar11 + dVar12 * dVar12 + dVar4 * dVar4;
    unaff_XMM15 = sqrtpd(unaff_XMM15,auVar14);
    dVar19 = unaff_XMM15._0_8_;
    if (dVar19 <= 0.0) {
LAB_14c6d58c4:
      dVar16 = param_4;
      if (__real_40c3880000000000 <= param_4) {
        dVar16 = __real_40c3880000000000;
      }
      dVar17 = local_108 * dVar16;
      dVar12 = local_100 * dVar16;
      dVar11 = local_f8 * dVar16;
    }
    else {
      dVar8 = dVar3 / dVar19;
      if (dVar19 < dVar17) goto LAB_14c6d58c4;
      local_158[0] = local_res20[0];
      (**(code **)param_3)(&local_120,*(undefined8 *)&param_3->field_0x8,local_158);
      dVar16 = local_120 - local_148;
      dVar17 = local_118 - local_140;
      dVar18 = local_110 - local_138;
      auVar13._0_8_ = dVar18 * dVar18;
      auVar13._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar17 * dVar17 + dVar16 * dVar16 + auVar13._0_8_;
      auVar14 = sqrtpd(auVar13,auVar1);
      if (auVar14._0_8_ <= 0.0) {
        dVar16 = 0.0;
        dVar17 = 0.0;
        dVar18 = 0.0;
      }
      else {
        dVar9 = dVar3 / auVar14._0_8_;
        dVar16 = dVar16 * dVar9;
        dVar17 = dVar17 * dVar9;
        dVar18 = dVar18 * dVar9;
      }
      dVar16 = dVar16 * dVar12 * dVar8 + dVar17 * dVar11 * dVar8 + dVar18 * dVar4 * dVar8;
      dVar16 = (dVar3 - dVar16) / (dVar16 + dVar3);
      if (0.0 <= dVar16) {
        if (__real_7fefffffffffffff <= dVar16) {
          dVar16 = __real_7fefffffffffffff;
        }
      }
      else {
        dVar16 = 0.0;
      }
      dVar16 = SQRT(dVar16);
      if (local_res18[0] != -1) {
        local_158[0] = local_res18[0];
        (**(code **)param_3)(&local_120,*(undefined8 *)&param_3->field_0x8,local_158);
        dVar17 = local_120 - local_148;
        dVar18 = local_118 - local_140;
        dVar9 = local_110 - local_138;
        auVar15._0_8_ = dVar9 * dVar9;
        auVar15._8_8_ = 0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar18 * dVar18 + dVar17 * dVar17 + auVar15._0_8_;
        auVar14 = sqrtpd(auVar15,auVar2);
        if (auVar14._0_8_ <= 0.0) {
          dVar17 = 0.0;
          dVar18 = 0.0;
          dVar9 = 0.0;
        }
        else {
          dVar10 = dVar3 / auVar14._0_8_;
          dVar17 = dVar17 * dVar10;
          dVar18 = dVar18 * dVar10;
          dVar9 = dVar9 * dVar10;
        }
        dVar17 = dVar17 * dVar12 * dVar8 + dVar18 * dVar11 * dVar8 + dVar9 * dVar4 * dVar8;
        dVar17 = (dVar3 - dVar17) / (dVar17 + dVar3);
        if (0.0 <= dVar17) {
          if (__real_7fefffffffffffff <= dVar17) {
            dVar17 = __real_7fefffffffffffff;
          }
        }
        else {
          dVar17 = 0.0;
        }
        dVar16 = dVar16 + SQRT(dVar17);
      }
      dVar16 = dVar16 / dVar19;
      if (0.0 <= dVar16) {
        if (param_4 <= dVar16) {
          dVar16 = param_4;
        }
      }
      else {
        dVar16 = 0.0;
      }
      dVar17 = local_108 * dVar16;
      dVar12 = local_100 * dVar16;
      dVar11 = local_f8 * dVar16;
    }
    uVar7 = (double)uVar7 + dVar11;
    uVar6 = (double)uVar6 + dVar12;
    uVar5 = (double)uVar5 + dVar17;
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_f0);
    dVar16 = local_130[0] + dVar16;
    local_130[0] = dVar16;
  } while( true );
}

// TVoronoiArea<`UE::Geometry::FMeshWeights::VoronoiArea'::__l2::<lambda_1>_> @ 14c6d59d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
TVoronoiArea<_UE::Geometry::FMeshWeights::VoronoiArea_::__l2::<lambda_1>_>
          (FDynamicMesh3 *param_1,int param_2,<lambda_1> param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  uint uVar21;
  double dVar20;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined4 local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined1 local_2a8 [16];
  undefined1 local_268 [48];
  ValueIterator local_238;
  ValueIterator local_210;
  undefined1 local_1e8 [144];
  undefined1 local_158 [144];
  ulonglong local_c8;
  double dVar19;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_308;
  dVar2 = 0.0;
  local_2c0 = 0.0;
  lVar4 = *(longlong *)
           (((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_2d8 = *pdVar1;
  dStack_2d0 = pdVar1[1];
  local_2c8 = *(double *)(lVar4 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_2b8 = param_4;
  UE::Geometry::FDynamicMesh3::VtxTrianglesItr
            (param_1,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_268,
             param_2);
  UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1e8,&local_238
             ,&local_210,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_268);
  UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,&local_210
             ,&local_210,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_268);
  do {
    if ((((local_1e8._0_8_ == local_158._0_8_) && (local_1e8._8_4_ == local_158._8_4_)) &&
        (local_1e8._24_4_ == local_158._24_4_)) && (local_1e8._28_4_ == local_158._28_4_)) {
      if (local_158._96_8_ != 0) {
        plVar12 = (longlong *)(local_158 + 0x70);
        if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_158._136_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_1e8._96_8_ != 0) {
        plVar12 = (longlong *)(local_1e8 + 0x70);
        if ((longlong *)local_1e8._136_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_1e8._136_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_268._0_8_ != 0) {
        plVar12 = (longlong *)(local_268 + 0x10);
        if ((longlong *)local_268._40_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_268._40_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      return dVar2;
    }
    iVar13 = 0;
    uVar11 = (ulonglong)((uint)local_1e8._88_8_ & 0x1ff);
    lVar4 = *(longlong *)
             ((param_1->Triangles).Blocks.AllocatorInstance.Data +
             ((local_1e8._88_8_ & 0xffffffff) >> 9) * 8);
    local_2e8 = *(undefined8 *)(lVar4 + uVar11 * 0xc);
    uVar10 = local_2e8;
    local_2e0 = *(undefined4 *)(lVar4 + 8 + uVar11 * 0xc);
    if ((int)local_2e8 != param_2) {
      iVar13 = ((int)((ulonglong)local_2e8 >> 0x20) != param_2) + 1;
    }
    pFVar5 = ((param_3.mesh)->Vertices).Blocks.AllocatorInstance.Data;
    uVar16 = *(uint *)((longlong)&local_2e8 + (longlong)(int)((iVar13 + 1U) % 3) * 4);
    uVar11 = (ulonglong)(uVar16 & 0x1ff);
    lVar4 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
    dVar24 = *pdVar1;
    dVar22 = pdVar1[1];
    dVar2 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
    dVar7 = dVar24 - local_2d8;
    dVar26 = dVar2 - local_2c8;
    dVar8 = dVar22 - dStack_2d0;
    uVar16 = *(uint *)((longlong)&local_2e8 + (longlong)(int)((iVar13 + 2U) % 3) * 4);
    uVar11 = (ulonglong)(uVar16 & 0x1ff);
    lVar4 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
    dVar9 = dVar8 * dVar8 + dVar7 * dVar7 + dVar26 * dVar26;
    auVar3 = *(undefined1 (*) [16])(lVar4 + uVar11 * 0x18);
    dVar6 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18) - local_2c8;
    dVar18 = auVar3._0_8_;
    dVar25 = dVar18 - local_2d8;
    dVar20 = auVar3._8_8_;
    local_2a8._8_4_ = auVar3._8_4_;
    local_2a8._0_8_ = dVar20;
    local_2a8._12_4_ = auVar3._12_4_;
    dVar17 = dVar20 - dStack_2d0;
    dVar19 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18) - dVar2;
    dVar23 = dVar17 * dVar17 + dVar25 * dVar25 + dVar6 * dVar6;
    dVar19 = (dVar20 - dVar22) * (dVar20 - dVar22) + (dVar18 - dVar24) * (dVar18 - dVar24) +
             dVar19 * dVar19;
    local_2e8 = uVar10;
    if (((dVar23 + dVar9 < dVar19) || (dVar19 + dVar23 < dVar9)) || (dVar19 + dVar9 < dVar23)) {
      dVar2 = dVar17 * dVar8 + dVar25 * dVar7 + dVar6 * dVar26;
      if (SQRT(dVar9) <= 0.0) {
        dVar26 = 0.0;
        dVar8 = 0.0;
        dVar7 = 0.0;
      }
      else {
        dVar19 = __real_3ff0000000000000 / SQRT(dVar9);
        dVar7 = dVar7 * dVar19;
        dVar8 = dVar8 * dVar19;
        dVar26 = dVar26 * dVar19;
      }
      if (SQRT(dVar23) <= 0.0) {
        dVar6 = 0.0;
        dVar17 = 0.0;
        dVar25 = 0.0;
      }
      else {
        dVar19 = __real_3ff0000000000000 / SQRT(dVar23);
        dVar25 = dVar25 * dVar19;
        dVar17 = dVar17 * dVar19;
        dVar6 = dVar6 * dVar19;
      }
      dVar20 = dVar17 * dVar8 + dVar25 * dVar7 + dVar6 * dVar26;
      dVar19 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar20) &&
         (dVar19 = dVar20, __real_3ff0000000000000 <= dVar20)) {
        dVar19 = __real_3ff0000000000000;
      }
      dVar19 = acos(dVar19);
      if (dVar19 <= __real_3ff921fb54442d18) {
        uVar14 = SUB84(__real_3fc0000000000000,0);
        uVar15 = (undefined4)((ulonglong)__real_3fc0000000000000 >> 0x20);
      }
      else {
        uVar14 = (undefined4)__real_3fd0000000000000;
        uVar15 = (undefined4)((ulonglong)__real_3fd0000000000000 >> 0x20);
      }
      dVar2 = SQRT(dVar23 * dVar9 - dVar2 * dVar2) * (double)CONCAT44(uVar15,uVar14);
    }
    else {
      dVar19 = local_2c8 - *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
      dVar8 = local_2c8 - dVar2;
      dVar2 = dVar2 - *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
      dVar7 = dStack_2d0 - dVar22;
      dVar22 = dVar22 - dVar20;
      dVar18 = local_2d8 - dVar18;
      dVar20 = dStack_2d0 - dVar20;
      dVar6 = local_2d8 - dVar24;
      dVar24 = dVar24 - *(double *)(lVar4 + uVar11 * 0x18);
      dVar26 = dVar22 * dVar20 + dVar24 * dVar18 + dVar2 * dVar19;
      dVar20 = dVar20 * dVar20 + dVar18 * dVar18 + dVar19 * dVar19;
      dVar19 = (dVar22 * dVar22 + dVar24 * dVar24 + dVar2 * dVar2) * dVar20 - dVar26 * dVar26;
      if (dVar19 < 0.0) {
LAB_14c6d5dac:
        dVar26 = 0.0;
      }
      else {
        if (__real_7fefffffffffffff <= dVar19) {
          dVar19 = __real_7fefffffffffffff;
        }
        if (dVar19 < __real_3e45798ee2308c3a) goto LAB_14c6d5dac;
        dVar26 = dVar26 / SQRT(dVar19);
      }
      uVar27 = (uint)__xmm_80000000000000008000000000000000;
      uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar16 = SUB84(local_2b8,0) ^ uVar27;
      uVar21 = (uint)((ulonglong)local_2b8 >> 0x20) ^ uVar28;
      dVar19 = (double)CONCAT44(uVar21,uVar16);
      if (dVar19 <= dVar26) {
        if (local_2b8 <= dVar26) {
          dVar26 = local_2b8;
        }
      }
      else {
        dVar26 = (double)CONCAT44(uVar21,uVar16);
      }
      dVar23 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar28,SUB84(dVar22,0) ^ uVar27)
      ;
      uVar16 = SUB84(dVar24,0) ^ uVar27;
      uVar21 = (uint)((ulonglong)dVar24 >> 0x20) ^ uVar28;
      uVar27 = SUB84(dVar2,0) ^ uVar27;
      uVar28 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar28;
      dVar2 = dVar6 * (double)CONCAT44(uVar21,uVar16) + dVar7 * dVar23 +
              dVar8 * (double)CONCAT44(uVar28,uVar27);
      dVar6 = dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8;
      dVar24 = (dVar23 * dVar23 + (double)CONCAT44(uVar21,uVar16) * (double)CONCAT44(uVar21,uVar16)
               + (double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar28,uVar27)) * dVar6 -
               dVar2 * dVar2;
      if (dVar24 < 0.0) {
LAB_14c6d5e68:
        dVar2 = 0.0;
      }
      else {
        if (__real_7fefffffffffffff <= dVar24) {
          dVar24 = __real_7fefffffffffffff;
        }
        if (dVar24 < __real_3e45798ee2308c3a) goto LAB_14c6d5e68;
        dVar2 = dVar2 / SQRT(dVar24);
      }
      if ((dVar19 <= dVar2) && (dVar19 = dVar2, local_2b8 <= dVar2)) {
        dVar19 = local_2b8;
      }
      dVar2 = (dVar20 * dVar19 + dVar6 * dVar26) * __real_3fc0000000000000;
    }
    UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1e8);
    dVar2 = local_2c0 + dVar2;
    local_2c0 = dVar2;
  } while( true );
}

// TVoronoiArea<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_> @ 14c6d60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
TVoronoiArea<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>
          (FDynamicMesh3 *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,double param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  double dVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_318 [32];
  double local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_278 [48];
  ValueIterator local_248;
  ValueIterator local_220;
  undefined1 local_1f8 [144];
  undefined1 local_168 [144];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_318;
  dVar24 = 0.0;
  local_2f8 = (double)CONCAT44(local_2f8._4_4_,param_2);
  local_2c8 = 0.0;
  local_2b8 = param_4;
  (**(code **)param_3)(&local_298,*(undefined8 *)&param_3->field_0x8,&local_2f8);
  UE::Geometry::FDynamicMesh3::VtxTrianglesItr
            (param_1,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_278,
             param_2);
  UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1f8,&local_248
             ,&local_220,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_278);
  UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,&local_220
             ,&local_220,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_278);
  do {
    if ((((local_1f8._0_8_ == local_168._0_8_) && (local_1f8._8_4_ == local_168._8_4_)) &&
        (local_1f8._24_4_ == local_168._24_4_)) && (local_1f8._28_4_ == local_168._28_4_)) {
      if (local_168._96_8_ != 0) {
        plVar8 = (longlong *)(local_168 + 0x70);
        if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_168._136_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (local_1f8._96_8_ != 0) {
        plVar8 = (longlong *)(local_1f8 + 0x70);
        if ((longlong *)local_1f8._136_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_1f8._136_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (local_278._0_8_ != 0) {
        plVar8 = (longlong *)(local_278 + 0x10);
        if ((longlong *)local_278._40_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_278._40_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      return dVar24;
    }
    iVar9 = 0;
    uVar7 = (ulonglong)((uint)local_1f8._88_8_ & 0x1ff);
    lVar1 = *(longlong *)
             ((param_1->Triangles).Blocks.AllocatorInstance.Data +
             ((local_1f8._88_8_ & 0xffffffff) >> 9) * 8);
    local_2f0 = *(undefined8 *)(lVar1 + uVar7 * 0xc);
    uVar6 = local_2f0;
    local_2e8 = *(undefined4 *)(lVar1 + 8 + uVar7 * 0xc);
    if ((int)local_2f0 != param_2) {
      iVar9 = ((int)((ulonglong)local_2f0 >> 0x20) != param_2) + 1;
    }
    local_2f0 = uVar6;
    local_2f8._0_4_ = *(undefined4 *)((longlong)&local_2f0 + (longlong)(int)((iVar9 + 1U) % 3) * 4);
    (**(code **)param_3)(&local_2b0,*(undefined8 *)&param_3->field_0x8,&local_2f8);
    local_2f8 = (double)CONCAT44(local_2f8._4_4_,
                                 *(undefined4 *)
                                  ((longlong)&local_2f0 + (longlong)(int)((iVar9 + 2U) % 3) * 4));
    (**(code **)param_3)(&local_2e0,*(undefined8 *)&param_3->field_0x8,&local_2f8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_290;
    dVar19 = local_2b0 - local_298;
    dVar3 = local_2a8 - local_290;
    dVar24 = local_2e0 - local_298;
    dVar21 = local_2d0 - local_288;
    local_2c0 = local_288;
    local_2f8 = local_298;
    dVar15 = local_2a0 - local_288;
    dVar17 = local_2d8 - local_290;
    dVar18 = dVar3 * dVar3 + dVar19 * dVar19 + dVar15 * dVar15;
    dVar5 = dVar17 * dVar17 + dVar24 * dVar24 + dVar21 * dVar21;
    dVar16 = (local_2d8 - local_2a8) * (local_2d8 - local_2a8) +
             (local_2e0 - local_2b0) * (local_2e0 - local_2b0) +
             (local_2d0 - local_2a0) * (local_2d0 - local_2a0);
    if (((dVar5 + dVar18 < dVar16) || (dVar16 + dVar5 < dVar18)) || (dVar16 + dVar18 < dVar5)) {
      auVar13._0_8_ = dVar21 * dVar15;
      auVar13._8_8_ = 0;
      dVar16 = dVar17 * dVar3 + dVar24 * dVar19 + auVar13._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar18;
      auVar14 = sqrtpd(auVar13,auVar14);
      auVar12._0_8_ = dVar5 * dVar18 - dVar16 * dVar16;
      auVar12._8_8_ = 0;
      auVar11 = sqrtpd(auVar11,auVar12);
      if (auVar14._0_8_ <= 0.0) {
        dVar15 = 0.0;
        dVar3 = 0.0;
        dVar19 = 0.0;
      }
      else {
        dVar16 = __real_3ff0000000000000 / auVar14._0_8_;
        dVar19 = dVar19 * dVar16;
        dVar3 = dVar3 * dVar16;
        dVar15 = dVar15 * dVar16;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar14 = sqrtpd(auVar14,auVar4);
      if (auVar14._0_8_ <= 0.0) {
        dVar21 = 0.0;
        dVar17 = 0.0;
        dVar24 = 0.0;
      }
      else {
        dVar16 = __real_3ff0000000000000 / auVar14._0_8_;
        dVar24 = dVar24 * dVar16;
        dVar17 = dVar17 * dVar16;
        dVar21 = dVar21 * dVar16;
      }
      dVar19 = dVar17 * dVar3 + dVar24 * dVar19 + dVar21 * dVar15;
      dVar24 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar19) &&
         (dVar24 = dVar19, __real_3ff0000000000000 <= dVar19)) {
        dVar24 = __real_3ff0000000000000;
      }
      dVar19 = acos(dVar24);
      dVar24 = __real_3fc0000000000000;
      if (__real_3ff921fb54442d18 < dVar19) {
        dVar24 = __real_3fd0000000000000;
      }
      dVar24 = auVar11._0_8_ * dVar24;
    }
    else {
      dVar23 = local_290 - local_2d8;
      dVar16 = local_290 - local_2a8;
      dVar17 = local_2a8 - local_2d8;
      dVar24 = local_298 - local_2e0;
      dVar19 = local_298 - local_2b0;
      dVar3 = local_2b0 - local_2e0;
      dVar21 = local_288 - local_2d0;
      dVar5 = local_288 - local_2a0;
      dVar15 = local_2a0 - local_2d0;
      dVar18 = dVar17 * dVar23 + dVar3 * dVar24 + dVar15 * dVar21;
      dVar21 = dVar23 * dVar23 + dVar24 * dVar24 + dVar21 * dVar21;
      auVar10._0_8_ = dVar18 * dVar18;
      auVar10._8_8_ = 0;
      dVar24 = (dVar17 * dVar17 + dVar3 * dVar3 + dVar15 * dVar15) * dVar21 - auVar10._0_8_;
      if (dVar24 < 0.0) {
LAB_14c6d6484:
        dVar18 = 0.0;
      }
      else {
        if (__real_7fefffffffffffff <= dVar24) {
          dVar24 = __real_7fefffffffffffff;
        }
        if (dVar24 < __real_3e45798ee2308c3a) goto LAB_14c6d6484;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar24;
        auVar11 = sqrtpd(auVar10,auVar2);
        dVar18 = dVar18 / auVar11._0_8_;
      }
      uVar25 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar20 = SUB84(local_2b8,0) ^ uVar25;
      uVar22 = (uint)((ulonglong)local_2b8 >> 0x20) ^ uVar26;
      dVar24 = (double)CONCAT44(uVar22,uVar20);
      if (dVar24 <= dVar18) {
        if (local_2b8 <= dVar18) {
          dVar18 = local_2b8;
        }
      }
      else {
        dVar18 = (double)CONCAT44(uVar22,uVar20);
      }
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar26,SUB84(dVar17,0) ^ uVar25)
      ;
      uVar20 = SUB84(dVar3,0) ^ uVar25;
      uVar22 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
      uVar25 = SUB84(dVar15,0) ^ uVar25;
      uVar26 = (uint)((ulonglong)dVar15 >> 0x20) ^ uVar26;
      dVar3 = dVar19 * (double)CONCAT44(uVar22,uVar20) + dVar16 * dVar17 +
              dVar5 * (double)CONCAT44(uVar26,uVar25);
      dVar19 = dVar19 * dVar19 + dVar16 * dVar16 + dVar5 * dVar5;
      dVar15 = (dVar17 * dVar17 + (double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20)
               + (double)CONCAT44(uVar26,uVar25) * (double)CONCAT44(uVar26,uVar25)) * dVar19 -
               dVar3 * dVar3;
      if (dVar15 < 0.0) {
LAB_14c6d6540:
        dVar3 = 0.0;
      }
      else {
        if (__real_7fefffffffffffff <= dVar15) {
          dVar15 = __real_7fefffffffffffff;
        }
        if (dVar15 < __real_3e45798ee2308c3a) goto LAB_14c6d6540;
        dVar3 = dVar3 / SQRT(dVar15);
      }
      if ((dVar24 <= dVar3) && (dVar24 = dVar3, local_2b8 <= dVar3)) {
        dVar24 = local_2b8;
      }
      dVar24 = (dVar21 * dVar24 + dVar19 * dVar18) * __real_3fc0000000000000;
    }
    UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1f8);
    dVar24 = local_2c8 + dVar24;
    local_2c8 = dVar24;
  } while( true );
}

// TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_> @ 14c6d6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge_::__l2::<lambda_1>_>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,int param_1,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMesh3 *param_3,
                  FIntrinsicEdgeFlipMesh *param_4,double param_5,bool param_6,<lambda_1> *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_118 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_c8;
  int local_b8;
  undefined8 local_b4;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  FDynamicMesh3 *local_98;
  FSurfacePoint local_90;
  FSurfacePoint local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = param_3;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if ((param_1 < 0) ||
     ((int)param_4->_padding_ * 0x200 + *(int *)((longlong)&param_4->_padding_ + 4) <= param_1)) {
LAB_14c6d718e:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar20 = (ulonglong)(param_1 & 0x1ff);
  uVar19 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 2) - 1U
                       )) goto LAB_14c6d718e;
  uVar9 = param_2->ArrayNum + 2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar10 = 0;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar9,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    iVar10 = local_c8.ArrayNum;
  }
  uVar9 = *(uint *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + 8 + uVar20 * 0x10);
  uVar11 = (ulonglong)(uVar9 & 0x1ff);
  uVar17 = (ulonglong)(uVar9 >> 9);
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_b4 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_ac = *(int *)(lVar13 + 8 + uVar11 * 0xc);
  if ((int)local_b4 != param_1) {
    if ((int)((ulonglong)local_b4 >> 0x20) == param_1) {
      iVar16 = 1;
    }
    else {
      iVar16 = -1;
      if (local_ac == param_1) {
        iVar16 = 2;
      }
    }
  }
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_a0 = *(undefined4 *)(lVar13 + 8 + uVar11 * 0xc);
  iVar14 = iVar16 + 1;
  local_a8 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_68.PositionType = Vertex;
  local_90.PositionType = Vertex;
  iVar16 = *(int *)((longlong)&local_a8 + (longlong)iVar16 * 4);
  local_68.Position.EdgePosition.EdgeID = iVar16;
  local_90.Position.VertexPosition.VID =
       (FVertexPosition)
       *(int *)((longlong)&local_a8 +
               (longlong)
               (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                         (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3) * 4);
  local_b8 = iVar16;
  if ((local_c8.AllocatorInstance.Data <= &local_68) &&
     (&local_68 <
      (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    iVar10 = local_c8.ArrayNum;
  }
  if (iVar10 == local_c8.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
  }
  lVar13 = (longlong)iVar10;
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
       CONCAT44(local_68._4_4_,local_68.PositionType);
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
       CONCAT44(local_68.Position._4_4_,local_68.Position.EdgePosition.EdgeID);
  *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
       local_68.Position.EdgePosition.Alpha;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
       local_68.Position._16_8_;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) = local_68.Position._24_8_
  ;
  local_c8.ArrayNum = iVar10 + 1;
  ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge_::__l2::<lambda_1>_>
            (&local_68,&local_90,param_2,local_98,param_4,param_5,param_7,&local_c8);
  uVar9 = 0;
  if ((int)(local_c8.ArrayNum - 1U) < local_c8.ArrayNum) {
    uVar9 = ~(local_c8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
               *)(*pcVar2)();
    return pTVar12;
  }
  if (((local_90.PositionType != Vertex) ||
      (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x28) != 0))
     || (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x20) !=
         local_90.Position.EdgePosition.EdgeID)) {
    if (((local_c8.AllocatorInstance.Data <= &local_90) &&
        (iVar16 = local_b8,
        &local_90 <
        (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), iVar16 = local_b8, bVar8)) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    lVar13 = (longlong)local_c8.ArrayNum;
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
         CONCAT44(local_90._4_4_,local_90.PositionType);
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
         CONCAT44(local_90.Position._4_4_,local_90.Position.EdgePosition.EdgeID);
    *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
         local_90.Position.EdgePosition.Alpha;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
         local_90.Position._16_8_;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) =
         local_90.Position._24_8_;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
  }
  if (*(int *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 0x10) == iVar16) {
    if (!param_6) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (param_6) goto LAB_14c6d717f;
  lVar13 = (longlong)(local_c8.ArrayNum / 2);
  if (0 < local_c8.ArrayNum / 2) {
    pFVar15 = local_c8.AllocatorInstance.Data + (longlong)(local_c8.ArrayNum + -1) * 0x28;
    FVar18.Data = local_c8.AllocatorInstance.Data;
    do {
      uVar1 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18);
      uVar3 = *(undefined8 *)(pFVar15 + 8);
      uVar4 = *(undefined8 *)FVar18.Data;
      uVar5 = *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position;
      dVar6 = (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha;
      uVar7 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10);
      *(undefined8 *)FVar18.Data = *(undefined8 *)pFVar15;
      *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position = uVar3;
      uVar3 = *(undefined8 *)(pFVar15 + 0x18);
      (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha = *(double *)(pFVar15 + 0x10);
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10) = uVar3;
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18) =
           *(undefined8 *)(pFVar15 + 0x20);
      *(undefined8 *)pFVar15 = uVar4;
      *(undefined8 *)(pFVar15 + 8) = uVar5;
      *(double *)(pFVar15 + 0x10) = dVar6;
      *(undefined8 *)(pFVar15 + 0x18) = uVar7;
      *(undefined8 *)(pFVar15 + 0x20) = uVar1;
      lVar13 = lVar13 + -1;
      pFVar15 = pFVar15 + -0x28;
      FVar18.Data = (FScriptContainerElement *)((longlong)FVar18.Data + 0x28);
    } while (lVar13 != 0);
  }
LAB_14c6d717f:
  (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
  return __return_storage_ptr__;
}

// TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_> @ 14c6d71d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge_::__l2::<lambda_1>_>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,int param_1,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMesh3 *param_3,
                  FIntrinsicEdgeFlipMesh *param_4,double param_5,bool param_6,<lambda_1> *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_118 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_c8;
  int local_b8;
  undefined8 local_b4;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  FDynamicMesh3 *local_98;
  FSurfacePoint local_90;
  FSurfacePoint local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = param_3;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if ((param_1 < 0) ||
     ((int)param_4->_padding_ * 0x200 + *(int *)((longlong)&param_4->_padding_ + 4) <= param_1)) {
LAB_14c6d765e:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar20 = (ulonglong)(param_1 & 0x1ff);
  uVar19 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 2) - 1U
                       )) goto LAB_14c6d765e;
  uVar9 = param_2->ArrayNum + 2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar10 = 0;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar9,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    iVar10 = local_c8.ArrayNum;
  }
  uVar9 = *(uint *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + 8 + uVar20 * 0x10);
  uVar11 = (ulonglong)(uVar9 & 0x1ff);
  uVar17 = (ulonglong)(uVar9 >> 9);
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_b4 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_ac = *(int *)(lVar13 + 8 + uVar11 * 0xc);
  if ((int)local_b4 != param_1) {
    if ((int)((ulonglong)local_b4 >> 0x20) == param_1) {
      iVar16 = 1;
    }
    else {
      iVar16 = -1;
      if (local_ac == param_1) {
        iVar16 = 2;
      }
    }
  }
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_a0 = *(undefined4 *)(lVar13 + 8 + uVar11 * 0xc);
  iVar14 = iVar16 + 1;
  local_a8 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_68.PositionType = Vertex;
  local_90.PositionType = Vertex;
  iVar16 = *(int *)((longlong)&local_a8 + (longlong)iVar16 * 4);
  local_68.Position.EdgePosition.EdgeID = iVar16;
  local_90.Position.VertexPosition.VID =
       (FVertexPosition)
       *(int *)((longlong)&local_a8 +
               (longlong)
               (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                         (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3) * 4);
  local_b8 = iVar16;
  if ((local_c8.AllocatorInstance.Data <= &local_68) &&
     (&local_68 <
      (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    iVar10 = local_c8.ArrayNum;
  }
  if (iVar10 == local_c8.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
  }
  lVar13 = (longlong)iVar10;
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
       CONCAT44(local_68._4_4_,local_68.PositionType);
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
       CONCAT44(local_68.Position._4_4_,local_68.Position.EdgePosition.EdgeID);
  *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
       local_68.Position.EdgePosition.Alpha;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
       local_68.Position._16_8_;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) = local_68.Position._24_8_
  ;
  local_c8.ArrayNum = iVar10 + 1;
  ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge_::__l2::<lambda_1>_>
            (&local_68,&local_90,param_2,local_98,param_4,param_5,param_7,&local_c8);
  uVar9 = 0;
  if ((int)(local_c8.ArrayNum - 1U) < local_c8.ArrayNum) {
    uVar9 = ~(local_c8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
               *)(*pcVar2)();
    return pTVar12;
  }
  if (((local_90.PositionType != Vertex) ||
      (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x28) != 0))
     || (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x20) !=
         local_90.Position.EdgePosition.EdgeID)) {
    if (((local_c8.AllocatorInstance.Data <= &local_90) &&
        (iVar16 = local_b8,
        &local_90 <
        (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), iVar16 = local_b8, bVar8)) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    lVar13 = (longlong)local_c8.ArrayNum;
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
         CONCAT44(local_90._4_4_,local_90.PositionType);
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
         CONCAT44(local_90.Position._4_4_,local_90.Position.EdgePosition.EdgeID);
    *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
         local_90.Position.EdgePosition.Alpha;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
         local_90.Position._16_8_;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) =
         local_90.Position._24_8_;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
  }
  if (*(int *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 0x10) == iVar16) {
    if (!param_6) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (param_6) goto LAB_14c6d764f;
  lVar13 = (longlong)(local_c8.ArrayNum / 2);
  if (0 < local_c8.ArrayNum / 2) {
    pFVar15 = local_c8.AllocatorInstance.Data + (longlong)(local_c8.ArrayNum + -1) * 0x28;
    FVar18.Data = local_c8.AllocatorInstance.Data;
    do {
      uVar1 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18);
      uVar3 = *(undefined8 *)(pFVar15 + 8);
      uVar4 = *(undefined8 *)FVar18.Data;
      uVar5 = *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position;
      dVar6 = (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha;
      uVar7 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10);
      *(undefined8 *)FVar18.Data = *(undefined8 *)pFVar15;
      *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position = uVar3;
      uVar3 = *(undefined8 *)(pFVar15 + 0x18);
      (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha = *(double *)(pFVar15 + 0x10);
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10) = uVar3;
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18) =
           *(undefined8 *)(pFVar15 + 0x20);
      *(undefined8 *)pFVar15 = uVar4;
      *(undefined8 *)(pFVar15 + 8) = uVar5;
      *(double *)(pFVar15 + 0x10) = dVar6;
      *(undefined8 *)(pFVar15 + 0x18) = uVar7;
      *(undefined8 *)(pFVar15 + 0x20) = uVar1;
      lVar13 = lVar13 + -1;
      pFVar15 = pFVar15 + -0x28;
      FVar18.Data = (FScriptContainerElement *)((longlong)FVar18.Data + 0x28);
    } while (lVar13 != 0);
  }
LAB_14c6d764f:
  (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
  return __return_storage_ptr__;
}

// TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_> @ 14c6d76a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l2::<lambda_2>_>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,int param_1,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMesh3 *param_3,
                  FIntrinsicEdgeFlipMesh *param_4,double param_5,bool param_6,<lambda_2> *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_118 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_c8;
  int local_b8;
  undefined8 local_b4;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  FDynamicMesh3 *local_98;
  FSurfacePoint local_90;
  FSurfacePoint local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_98 = param_3;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if ((param_1 < 0) ||
     ((int)param_4->_padding_ * 0x200 + *(int *)((longlong)&param_4->_padding_ + 4) <= param_1)) {
LAB_14c6d7b2e:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar20 = (ulonglong)(param_1 & 0x1ff);
  uVar19 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 2) - 1U
                       )) goto LAB_14c6d7b2e;
  uVar9 = param_2->ArrayNum + 2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar10 = 0;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar9,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    iVar10 = local_c8.ArrayNum;
  }
  uVar9 = *(uint *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + 8 + uVar20 * 0x10);
  uVar11 = (ulonglong)(uVar9 & 0x1ff);
  uVar17 = (ulonglong)(uVar9 >> 9);
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_b4 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_ac = *(int *)(lVar13 + 8 + uVar11 * 0xc);
  if ((int)local_b4 != param_1) {
    if ((int)((ulonglong)local_b4 >> 0x20) == param_1) {
      iVar16 = 1;
    }
    else {
      iVar16 = -1;
      if (local_ac == param_1) {
        iVar16 = 2;
      }
    }
  }
  lVar13 = *(longlong *)(param_4->_padding_ + uVar17 * 8);
  local_a0 = *(undefined4 *)(lVar13 + 8 + uVar11 * 0xc);
  iVar14 = iVar16 + 1;
  local_a8 = *(undefined8 *)(lVar13 + uVar11 * 0xc);
  local_68.PositionType = Vertex;
  local_90.PositionType = Vertex;
  iVar16 = *(int *)((longlong)&local_a8 + (longlong)iVar16 * 4);
  local_68.Position.EdgePosition.EdgeID = iVar16;
  local_90.Position.VertexPosition.VID =
       (FVertexPosition)
       *(int *)((longlong)&local_a8 +
               (longlong)
               (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                         (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3) * 4);
  local_b8 = iVar16;
  if ((local_c8.AllocatorInstance.Data <= &local_68) &&
     (&local_68 <
      (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    iVar10 = local_c8.ArrayNum;
  }
  if (iVar10 == local_c8.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
  }
  lVar13 = (longlong)iVar10;
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
       CONCAT44(local_68._4_4_,local_68.PositionType);
  *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
       CONCAT44(local_68.Position._4_4_,local_68.Position.EdgePosition.EdgeID);
  *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
       local_68.Position.EdgePosition.Alpha;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
       local_68.Position._16_8_;
  *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) = local_68.Position._24_8_
  ;
  local_c8.ArrayNum = iVar10 + 1;
  ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l2::<lambda_2>_>
            (&local_68,&local_90,param_2,local_98,param_4,param_5,param_7,&local_c8);
  uVar9 = 0;
  if ((int)(local_c8.ArrayNum - 1U) < local_c8.ArrayNum) {
    uVar9 = ~(local_c8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
               *)(*pcVar2)();
    return pTVar12;
  }
  if (((local_90.PositionType != Vertex) ||
      (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x28) != 0))
     || (*(int *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 0x28 + -0x20) !=
         local_90.Position.EdgePosition.EdgeID)) {
    if (((local_c8.AllocatorInstance.Data <= &local_90) &&
        (iVar16 = local_b8,
        &local_90 <
        (FSurfacePoint *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x28))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), iVar16 = local_b8, bVar8)) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar2)();
      return pTVar12;
    }
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      local_c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    lVar13 = (longlong)local_c8.ArrayNum;
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28) =
         CONCAT44(local_90._4_4_,local_90.PositionType);
    *(ulonglong *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 8) =
         CONCAT44(local_90.Position._4_4_,local_90.Position.EdgePosition.EdgeID);
    *(double *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10) =
         local_90.Position.EdgePosition.Alpha;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x10 + 8) =
         local_90.Position._16_8_;
    *(undefined8 *)(local_c8.AllocatorInstance.Data + lVar13 * 0x28 + 0x20) =
         local_90.Position._24_8_;
    local_c8.ArrayNum = local_c8.ArrayNum + 1;
  }
  if (*(int *)(*(longlong *)(param_4->_padding_ + uVar19 * 8) + uVar20 * 0x10) == iVar16) {
    if (!param_6) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (param_6) goto LAB_14c6d7b1f;
  lVar13 = (longlong)(local_c8.ArrayNum / 2);
  if (0 < local_c8.ArrayNum / 2) {
    pFVar15 = local_c8.AllocatorInstance.Data + (longlong)(local_c8.ArrayNum + -1) * 0x28;
    FVar18.Data = local_c8.AllocatorInstance.Data;
    do {
      uVar1 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18);
      uVar3 = *(undefined8 *)(pFVar15 + 8);
      uVar4 = *(undefined8 *)FVar18.Data;
      uVar5 = *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position;
      dVar6 = (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha;
      uVar7 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10);
      *(undefined8 *)FVar18.Data = *(undefined8 *)pFVar15;
      *(undefined8 *)&((FSurfacePoint *)FVar18.Data)->Position = uVar3;
      uVar3 = *(undefined8 *)(pFVar15 + 0x18);
      (((FSurfacePoint *)FVar18.Data)->Position).EdgePosition.Alpha = *(double *)(pFVar15 + 0x10);
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x10) = uVar3;
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar18.Data)->Position + 0x18) =
           *(undefined8 *)(pFVar15 + 0x20);
      *(undefined8 *)pFVar15 = uVar4;
      *(undefined8 *)(pFVar15 + 8) = uVar5;
      *(double *)(pFVar15 + 0x10) = dVar6;
      *(undefined8 *)(pFVar15 + 0x18) = uVar7;
      *(undefined8 *)(pFVar15 + 0x20) = uVar1;
      lVar13 = lVar13 + -1;
      pFVar15 = pFVar15 + -0x28;
      FVar18.Data = (FScriptContainerElement *)((longlong)FVar18.Data + 0x28);
    } while (lVar13 != 0);
  }
LAB_14c6d7b1f:
  (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
  return __return_storage_ptr__;
}

// TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_> @ 14c6d7b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge_::__l2::<lambda_1>_>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,int param_1,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMesh3 *param_3,
                  FIntrinsicMesh *param_4,double param_5,bool param_6,<lambda_1> *param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  <lambda_1> *p<Var11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined8 local_d8;
  int local_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  <lambda_1> *local_b8;
  FDynamicMesh3 *local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  ulonglong local_a0;
  FSurfacePoint local_98;
  FSurfacePoint local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_b0 = param_3;
  iVar20 = 0;
  local_a8 = param_2;
  local_b8 = param_7;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((param_1 < 0) ||
     ((int)param_4->_padding_ * 0x200 + *(int *)((longlong)&param_4->_padding_ + 4) <= param_1)) {
LAB_14c6d807f:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar23 = (ulonglong)(param_1 & 0x1ff);
  uVar24 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + uVar23 * 2) - 1U
                       )) goto LAB_14c6d807f;
  uVar21 = param_2->ArrayNum + 2;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  iVar13 = 0;
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar21,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    iVar13 = local_e8.ArrayNum;
  }
  p<Var11 = local_b8;
  uVar21 = *(uint *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + 8 + uVar23 * 0x10);
  uVar14 = (ulonglong)(uVar21 & 0x1ff);
  uVar19 = (ulonglong)(uVar21 >> 9);
  lVar16 = *(longlong *)(param_4->_padding_ + uVar19 * 8);
  local_d8 = *(undefined8 *)(lVar16 + uVar14 * 0xc);
  local_d0 = *(int *)(lVar16 + 8 + uVar14 * 0xc);
  if ((int)local_d8 != param_1) {
    if ((int)((ulonglong)local_d8 >> 0x20) == param_1) {
      iVar20 = 1;
    }
    else {
      iVar20 = -1;
      if (local_d0 == param_1) {
        iVar20 = 2;
      }
    }
  }
  lVar16 = *(longlong *)(param_4->_padding_ + uVar19 * 8);
  local_c0 = *(undefined4 *)(lVar16 + 8 + uVar14 * 0xc);
  iVar17 = iVar20 + 1;
  local_c8 = *(undefined8 *)(lVar16 + uVar14 * 0xc);
  uVar21 = *(uint *)((longlong)&local_c8 + (longlong)iVar20 * 4);
  local_a0 = (ulonglong)uVar21;
  uVar4 = *(uint *)((longlong)&local_c8 +
                   (longlong)
                   (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                             (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
  uVar14 = (ulonglong)(uVar21 & 0x1ff);
  lVar16 = *(longlong *)
            ((local_b8->TraceMesh->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
            (ulonglong)(uVar21 >> 9) * 8);
  uVar19 = (ulonglong)(uVar4 & 0x1ff);
  puVar1 = (undefined8 *)(lVar16 + uVar14 * 0x28);
  local_70._0_8_ = *puVar1;
  local_70.Position._0_8_ = puVar1[1];
  pdVar2 = (double *)(lVar16 + 0x10 + uVar14 * 0x28);
  local_70.Position.EdgePosition.Alpha = *pdVar2;
  local_70.Position._16_8_ = pdVar2[1];
  local_70.Position._24_8_ = *(undefined8 *)(lVar16 + 0x20 + uVar14 * 0x28);
  lVar16 = *(longlong *)
            ((local_b8->TraceMesh->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
            (ulonglong)(uVar4 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar16 + uVar19 * 0x28);
  local_98._0_8_ = *puVar1;
  local_98.Position._0_8_ = puVar1[1];
  pdVar2 = (double *)(lVar16 + 0x10 + uVar19 * 0x28);
  local_98.Position.EdgePosition.Alpha = *pdVar2;
  local_98.Position._16_8_ = pdVar2[1];
  local_98.Position._24_8_ = *(undefined8 *)(lVar16 + 0x20 + uVar19 * 0x28);
  if ((local_e8.AllocatorInstance.Data <= &local_70) &&
     (&local_70 <
      (FSurfacePoint *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x28))) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar15;
    }
    iVar13 = local_e8.ArrayNum;
  }
  if (iVar13 == local_e8.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
  }
  lVar16 = (longlong)iVar13;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28) = local_70._0_8_;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 8) = local_70.Position._0_8_;
  *(double *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10) =
       local_70.Position.EdgePosition.Alpha;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10 + 8) =
       local_70.Position._16_8_;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x20) = local_70.Position._24_8_
  ;
  local_e8.ArrayNum = iVar13 + 1;
  ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge_::__l2::<lambda_1>_>
            (&local_70,&local_98,local_a8,local_b0,param_4,param_5,p<Var11,&local_e8);
  uVar21 = 0;
  if ((int)(local_e8.ArrayNum - 1U) < local_e8.ArrayNum) {
    uVar21 = ~(local_e8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar15;
  }
  if (((local_98.PositionType != Vertex) ||
      (*(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x28 + -0x28) != 0))
     || (*(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x28 + -0x20) !=
         local_98.Position.EdgePosition.EdgeID)) {
    if (((local_e8.AllocatorInstance.Data <= &local_98) &&
        (&local_98 <
         (FSurfacePoint *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x28)))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar15;
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    lVar16 = (longlong)local_e8.ArrayNum;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28) = local_98._0_8_;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 8) = local_98.Position._0_8_;
    *(double *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10) =
         local_98.Position.EdgePosition.Alpha;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10 + 8) =
         local_98.Position._16_8_;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x20) =
         local_98.Position._24_8_;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
  }
  if (*(int *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + uVar23 * 0x10) == (int)local_a0) {
    if (!param_6) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_e8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_e8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (param_6) goto LAB_14c6d806f;
  lVar16 = (longlong)(local_e8.ArrayNum / 2);
  if (0 < local_e8.ArrayNum / 2) {
    pFVar18 = local_e8.AllocatorInstance.Data + (longlong)(local_e8.ArrayNum + -1) * 0x28;
    FVar22.Data = local_e8.AllocatorInstance.Data;
    do {
      uVar3 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x18);
      uVar6 = *(undefined8 *)(pFVar18 + 8);
      uVar7 = *(undefined8 *)FVar22.Data;
      uVar8 = *(undefined8 *)&((FSurfacePoint *)FVar22.Data)->Position;
      dVar9 = (((FSurfacePoint *)FVar22.Data)->Position).EdgePosition.Alpha;
      uVar10 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x10);
      *(undefined8 *)FVar22.Data = *(undefined8 *)pFVar18;
      *(undefined8 *)&((FSurfacePoint *)FVar22.Data)->Position = uVar6;
      uVar6 = *(undefined8 *)(pFVar18 + 0x18);
      (((FSurfacePoint *)FVar22.Data)->Position).EdgePosition.Alpha = *(double *)(pFVar18 + 0x10);
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x10) = uVar6;
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x18) =
           *(undefined8 *)(pFVar18 + 0x20);
      *(undefined8 *)pFVar18 = uVar7;
      *(undefined8 *)(pFVar18 + 8) = uVar8;
      *(double *)(pFVar18 + 0x10) = dVar9;
      *(undefined8 *)(pFVar18 + 0x18) = uVar10;
      *(undefined8 *)(pFVar18 + 0x20) = uVar3;
      lVar16 = lVar16 + -1;
      pFVar18 = pFVar18 + -0x28;
      FVar22.Data = (FScriptContainerElement *)((longlong)FVar22.Data + 0x28);
    } while (lVar16 != 0);
  }
LAB_14c6d806f:
  (__return_storage_ptr__->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_e8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_e8.ArrayMax;
  return __return_storage_ptr__;
}

// TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_> @ 14c6d80c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>_::__l2::<lambda_2>_>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,int param_1,
                  TArray<int,TSizedDefaultAllocator<32>_> *param_2,FDynamicMesh3 *param_3,
                  FIntrinsicMesh *param_4,double param_5,bool param_6,<lambda_2> *param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  <lambda_2> *p<Var11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_e8;
  undefined8 local_d8;
  int local_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  <lambda_2> *local_b8;
  FDynamicMesh3 *local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  ulonglong local_a0;
  FSurfacePoint local_98;
  FSurfacePoint local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_b0 = param_3;
  iVar20 = 0;
  local_a8 = param_2;
  local_b8 = param_7;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((param_1 < 0) ||
     ((int)param_4->_padding_ * 0x200 + *(int *)((longlong)&param_4->_padding_ + 4) <= param_1)) {
LAB_14c6d85cf:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar23 = (ulonglong)(param_1 & 0x1ff);
  uVar24 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + uVar23 * 2) - 1U
                       )) goto LAB_14c6d85cf;
  uVar21 = param_2->ArrayNum + 2;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  iVar13 = 0;
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar21,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    iVar13 = local_e8.ArrayNum;
  }
  p<Var11 = local_b8;
  uVar21 = *(uint *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + 8 + uVar23 * 0x10);
  uVar14 = (ulonglong)(uVar21 & 0x1ff);
  uVar19 = (ulonglong)(uVar21 >> 9);
  lVar16 = *(longlong *)(param_4->_padding_ + uVar19 * 8);
  local_d8 = *(undefined8 *)(lVar16 + uVar14 * 0xc);
  local_d0 = *(int *)(lVar16 + 8 + uVar14 * 0xc);
  if ((int)local_d8 != param_1) {
    if ((int)((ulonglong)local_d8 >> 0x20) == param_1) {
      iVar20 = 1;
    }
    else {
      iVar20 = -1;
      if (local_d0 == param_1) {
        iVar20 = 2;
      }
    }
  }
  lVar16 = *(longlong *)(param_4->_padding_ + uVar19 * 8);
  local_c0 = *(undefined4 *)(lVar16 + 8 + uVar14 * 0xc);
  iVar17 = iVar20 + 1;
  local_c8 = *(undefined8 *)(lVar16 + uVar14 * 0xc);
  uVar21 = *(uint *)((longlong)&local_c8 + (longlong)iVar20 * 4);
  local_a0 = (ulonglong)uVar21;
  uVar4 = *(uint *)((longlong)&local_c8 +
                   (longlong)
                   (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                             (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
  uVar14 = (ulonglong)(uVar21 & 0x1ff);
  lVar16 = *(longlong *)
            ((local_b8->IntrinsicMesh->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
            (ulonglong)(uVar21 >> 9) * 8);
  uVar19 = (ulonglong)(uVar4 & 0x1ff);
  puVar1 = (undefined8 *)(lVar16 + uVar14 * 0x28);
  local_70._0_8_ = *puVar1;
  local_70.Position._0_8_ = puVar1[1];
  pdVar2 = (double *)(lVar16 + 0x10 + uVar14 * 0x28);
  local_70.Position.EdgePosition.Alpha = *pdVar2;
  local_70.Position._16_8_ = pdVar2[1];
  local_70.Position._24_8_ = *(undefined8 *)(lVar16 + 0x20 + uVar14 * 0x28);
  lVar16 = *(longlong *)
            ((local_b8->IntrinsicMesh->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
            (ulonglong)(uVar4 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar16 + uVar19 * 0x28);
  local_98._0_8_ = *puVar1;
  local_98.Position._0_8_ = puVar1[1];
  pdVar2 = (double *)(lVar16 + 0x10 + uVar19 * 0x28);
  local_98.Position.EdgePosition.Alpha = *pdVar2;
  local_98.Position._16_8_ = pdVar2[1];
  local_98.Position._24_8_ = *(undefined8 *)(lVar16 + 0x20 + uVar19 * 0x28);
  if ((local_e8.AllocatorInstance.Data <= &local_70) &&
     (&local_70 <
      (FSurfacePoint *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x28))) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar15;
    }
    iVar13 = local_e8.ArrayNum;
  }
  if (iVar13 == local_e8.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
  }
  lVar16 = (longlong)iVar13;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28) = local_70._0_8_;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 8) = local_70.Position._0_8_;
  *(double *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10) =
       local_70.Position.EdgePosition.Alpha;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10 + 8) =
       local_70.Position._16_8_;
  *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x20) = local_70.Position._24_8_
  ;
  local_e8.ArrayNum = iVar13 + 1;
  ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>_::__l2::<lambda_2>_>
            (&local_70,&local_98,local_a8,local_b0,param_4,param_5,p<Var11,&local_e8);
  uVar21 = 0;
  if ((int)(local_e8.ArrayNum - 1U) < local_e8.ArrayNum) {
    uVar21 = ~(local_e8.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar15;
  }
  if (((local_98.PositionType != Vertex) ||
      (*(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x28 + -0x28) != 0))
     || (*(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x28 + -0x20) !=
         local_98.Position.EdgePosition.EdgeID)) {
    if (((local_e8.AllocatorInstance.Data <= &local_98) &&
        (&local_98 <
         (FSurfacePoint *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x28)))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar15;
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    lVar16 = (longlong)local_e8.ArrayNum;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28) = local_98._0_8_;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 8) = local_98.Position._0_8_;
    *(double *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10) =
         local_98.Position.EdgePosition.Alpha;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x10 + 8) =
         local_98.Position._16_8_;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar16 * 0x28 + 0x20) =
         local_98.Position._24_8_;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
  }
  if (*(int *)(*(longlong *)(param_4->_padding_ + uVar24 * 8) + uVar23 * 0x10) == (int)local_a0) {
    if (!param_6) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_e8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_e8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (param_6) goto LAB_14c6d85bf;
  lVar16 = (longlong)(local_e8.ArrayNum / 2);
  if (0 < local_e8.ArrayNum / 2) {
    pFVar18 = local_e8.AllocatorInstance.Data + (longlong)(local_e8.ArrayNum + -1) * 0x28;
    FVar22.Data = local_e8.AllocatorInstance.Data;
    do {
      uVar3 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x18);
      uVar6 = *(undefined8 *)(pFVar18 + 8);
      uVar7 = *(undefined8 *)FVar22.Data;
      uVar8 = *(undefined8 *)&((FSurfacePoint *)FVar22.Data)->Position;
      dVar9 = (((FSurfacePoint *)FVar22.Data)->Position).EdgePosition.Alpha;
      uVar10 = *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x10);
      *(undefined8 *)FVar22.Data = *(undefined8 *)pFVar18;
      *(undefined8 *)&((FSurfacePoint *)FVar22.Data)->Position = uVar6;
      uVar6 = *(undefined8 *)(pFVar18 + 0x18);
      (((FSurfacePoint *)FVar22.Data)->Position).EdgePosition.Alpha = *(double *)(pFVar18 + 0x10);
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x10) = uVar6;
      *(undefined8 *)((longlong)&((FSurfacePoint *)FVar22.Data)->Position + 0x18) =
           *(undefined8 *)(pFVar18 + 0x20);
      *(undefined8 *)pFVar18 = uVar7;
      *(undefined8 *)(pFVar18 + 8) = uVar8;
      *(double *)(pFVar18 + 0x10) = dVar9;
      *(undefined8 *)(pFVar18 + 0x18) = uVar10;
      *(undefined8 *)(pFVar18 + 0x20) = uVar3;
      lVar16 = lVar16 + -1;
      pFVar18 = pFVar18 + -0x28;
      FVar22.Data = (FScriptContainerElement *)((longlong)FVar22.Data + 0x28);
    } while (lVar16 != 0);
  }
LAB_14c6d85bf:
  (__return_storage_ptr__->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_e8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_e8.ArrayMax;
  return __return_storage_ptr__;
}

// VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,`UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetNthEdgeID'::__l2::<lambda_1>_> @ 14c6d9e20

bool __cdecl
UE::Geometry::IntrinsicCorrespondenceUtils::
VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,_UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetNthEdgeID_::__l2::<lambda_1>_>
          (FDynamicMesh3 *param_1,int param_2,int param_3,<lambda_1> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  BaseValueIterator local_48;
  
  if (((((param_3 < 0) ||
        ((int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_3)) ||
       (lVar1 = (ulonglong)((uint)param_3 >> 9) * 8,
       0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + lVar1) + (ulonglong)(param_3 & 0x1ff) * 2) - 1U))) ||
      ((param_2 < 0 ||
       ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= param_2)))) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
LAB_14c6da152:
    bVar8 = false;
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,&param_1->VertexEdgeLists,param_2,false);
    while ((((local_48.ListSet != &param_1->VertexEdgeLists || (local_48.ListIndex != param_2)) ||
            ((local_48.iCur != -1 || (local_48.cur_ptr != -1)))) &&
           ((local_48.cur_value == param_3 ||
            (*(int *)(*(longlong *)
                       ((param_1->Edges).Blocks.AllocatorInstance.Data +
                       ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                     (ulonglong)(local_48.cur_value & 0x1ff) * 0x10) != -1))))) {
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
    pFVar3 = (param_1->TriangleEdges).Blocks.AllocatorInstance.Data;
    uVar4 = *(ulonglong *)
             (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
             (ulonglong)(param_3 & 0x1ff) * 0x10);
    uVar12 = uVar4 >> 0x20;
    lVar1 = ((uVar4 & 0xffffffff) >> 9) * 8;
    lVar2 = (ulonglong)((uint)uVar4 & 0x1ff) * 0xc;
    lVar5 = *(longlong *)(pFVar3 + lVar1);
    local_68 = *(undefined8 *)(lVar5 + lVar2);
    local_60 = *(int *)(lVar5 + 8 + lVar2);
    if ((uint)local_68 == param_3) {
      iVar10 = 0;
    }
    else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (local_60 == param_3) {
        iVar10 = 2;
      }
    }
    lVar1 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar1);
    local_50 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_58 = *(undefined8 *)(lVar1 + lVar2);
    uVar9 = uVar4 & 0xffffffff;
    uVar13 = param_3;
    if (*(int *)((longlong)&local_58 + (longlong)iVar10 * 4) != param_2) {
      uVar11 = (uint)(uVar4 >> 0x20);
      if (uVar11 == 0xffffffff) goto LAB_14c6da152;
      uVar9 = (ulonglong)(uVar11 & 0x1ff);
      lVar1 = *(longlong *)(pFVar3 + (uVar4 >> 0x29) * 8);
      local_68 = *(undefined8 *)(lVar1 + uVar9 * 0xc);
      local_60 = *(int *)(lVar1 + 8 + uVar9 * 0xc);
      uVar9 = uVar12;
      if ((uint)local_68 == param_3) {
        iVar10 = 0;
      }
      else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == param_3) {
          iVar10 = 2;
        }
      }
    }
    do {
      piVar6 = param_4->Count;
      if (param_4->N == *piVar6) {
        *param_4->ResultEID = uVar13;
        *param_4->Count = *param_4->Count + 1;
        return true;
      }
      *piVar6 = *piVar6 + 1;
      iVar10 = iVar10 + 2;
      uVar13 = *(uint *)((longlong)&local_68 +
                        (longlong)
                        (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                  (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3) * 4);
      uVar7 = *(undefined8 *)
               (*(longlong *)
                 ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) + 8
               + (ulonglong)(uVar13 & 0x1ff) * 0x10);
      uVar11 = (uint)uVar7;
      if (uVar11 == (uint)uVar9) {
        uVar11 = (uint)((ulonglong)uVar7 >> 0x20);
      }
      if (uVar11 == 0xffffffff) {
        return true;
      }
      lVar1 = *(longlong *)
               ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar11 >> 9) * 8);
      local_68 = *(undefined8 *)(lVar1 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      if ((uint)local_68 == uVar13) {
        iVar10 = 0;
      }
      else if ((uint)((ulonglong)local_68 >> 0x20) == uVar13) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == uVar13) {
          iVar10 = 2;
        }
      }
      uVar9 = (ulonglong)uVar11;
    } while (uVar13 != param_3);
    bVar8 = true;
  }
  return bVar8;
}

// VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,`UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates'::__l14::<lambda_1>_> @ 14c6da170

bool __cdecl
UE::Geometry::IntrinsicCorrespondenceUtils::
VisitVertexAdjacentElements<UE::Geometry::FDynamicMesh3,_UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates_::__l14::<lambda_1>_>
          (FDynamicMesh3 *param_1,int param_2,int param_3,<lambda_1> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  BaseValueIterator local_48;
  
  if (((((param_3 < 0) ||
        ((int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_3)) ||
       (lVar1 = (ulonglong)((uint)param_3 >> 9) * 8,
       0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + lVar1) + (ulonglong)(param_3 & 0x1ff) * 2) - 1U))) ||
      ((param_2 < 0 ||
       ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= param_2)))) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
LAB_14c6da4a6:
    bVar7 = false;
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,&param_1->VertexEdgeLists,param_2,false);
    while (((local_48.ListSet != &param_1->VertexEdgeLists || (local_48.ListIndex != param_2)) ||
           ((local_48.iCur != -1 || (local_48.cur_ptr != -1))))) {
      if ((local_48.cur_value != param_3) &&
         (*(int *)(*(longlong *)
                    ((param_1->Edges).Blocks.AllocatorInstance.Data +
                    ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                  (ulonglong)(local_48.cur_value & 0x1ff) * 0x10) == -1)) break;
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
    pFVar3 = (param_1->TriangleEdges).Blocks.AllocatorInstance.Data;
    uVar4 = *(ulonglong *)
             (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
             (ulonglong)(param_3 & 0x1ff) * 0x10);
    uVar12 = uVar4 >> 0x20;
    lVar1 = ((uVar4 & 0xffffffff) >> 9) * 8;
    lVar2 = (ulonglong)((uint)uVar4 & 0x1ff) * 0xc;
    lVar5 = *(longlong *)(pFVar3 + lVar1);
    local_68 = *(undefined8 *)(lVar5 + lVar2);
    local_60 = *(int *)(lVar5 + 8 + lVar2);
    if ((uint)local_68 == param_3) {
      iVar9 = 0;
    }
    else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
      iVar9 = 1;
    }
    else {
      iVar9 = -1;
      if (local_60 == param_3) {
        iVar9 = 2;
      }
    }
    lVar1 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar1);
    local_50 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_58 = *(undefined8 *)(lVar1 + lVar2);
    uVar8 = uVar4 & 0xffffffff;
    if (*(int *)((longlong)&local_58 + (longlong)iVar9 * 4) != param_2) {
      uVar11 = (uint)(uVar4 >> 0x20);
      if (uVar11 == 0xffffffff) goto LAB_14c6da4a6;
      uVar8 = (ulonglong)(uVar11 & 0x1ff);
      lVar1 = *(longlong *)(pFVar3 + (uVar4 >> 0x29) * 8);
      local_68 = *(undefined8 *)(lVar1 + uVar8 * 0xc);
      local_60 = *(int *)(lVar1 + 8 + uVar8 * 0xc);
      uVar8 = uVar12;
      if ((uint)local_68 == param_3) {
        iVar9 = 0;
      }
      else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
        iVar9 = 1;
      }
      else {
        iVar9 = -1;
        if (local_60 == param_3) {
          iVar9 = 2;
        }
      }
    }
    do {
      *(int *)(*(longlong *)
                ((param_4->__this->RoundaboutOrder).Blocks.AllocatorInstance.Data + (uVar8 >> 9) * 8
                ) + ((ulonglong)((uint)uVar8 & 0x1ff) * 3 + (longlong)iVar9) * 4) = *param_4->Order;
      *param_4->Order = *param_4->Order + 1;
      iVar9 = iVar9 + 2;
      uVar11 = *(uint *)((longlong)&local_68 +
                        (longlong)
                        (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                                 (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) &
                                       0xffffffffU) >> 0x1f)) * -3) * 4);
      uVar6 = *(undefined8 *)
               (*(longlong *)
                 ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) + 8
               + (ulonglong)(uVar11 & 0x1ff) * 0x10);
      uVar10 = (uint)uVar6;
      if (uVar10 == (uint)uVar8) {
        uVar10 = (uint)((ulonglong)uVar6 >> 0x20);
      }
      if (uVar10 == 0xffffffff) break;
      lVar1 = *(longlong *)
               ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar10 >> 9) * 8);
      local_68 = *(undefined8 *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      if ((uint)local_68 == uVar11) {
        iVar9 = 0;
      }
      else if ((uint)((ulonglong)local_68 >> 0x20) == uVar11) {
        iVar9 = 1;
      }
      else {
        iVar9 = -1;
        if (local_60 == uVar11) {
          iVar9 = 2;
        }
      }
      uVar8 = (ulonglong)uVar10;
    } while (uVar11 != param_3);
    bVar7 = true;
  }
  return bVar7;
}

// VisitVertexAdjacentElements<UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l12::<lambda_1>_> @ 14c6da4d0

bool __cdecl
UE::Geometry::IntrinsicCorrespondenceUtils::
VisitVertexAdjacentElements<UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l12::<lambda_1>_>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3,<lambda_1> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  BaseValueIterator local_48;
  
  if (((((param_3 < 0) ||
        ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <= param_3))
       || (lVar1 = (ulonglong)((uint)param_3 >> 9) * 8,
          0xfffd < (ushort)(*(short *)(*(longlong *)(param_1->_padding_ + lVar1) +
                                      (ulonglong)(param_3 & 0x1ff) * 2) - 1U))) ||
      ((param_2 < 0 ||
       ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <= param_2))))
     || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                       (param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
                                     (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
LAB_14c6da7f9:
    bVar6 = false;
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,(FSmallListSet *)&param_1->_padding_,param_2,false);
    while ((((local_48.ListSet != (FSmallListSet *)&param_1->_padding_ ||
             (local_48.ListIndex != param_2)) || ((local_48.iCur != -1 || (local_48.cur_ptr != -1)))
            ) && ((local_48.cur_value == param_3 ||
                  (*(int *)(*(longlong *)
                             (param_1->_padding_ + ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 0xc
                           + (ulonglong)(local_48.cur_value & 0x1ff) * 0x10) != -1))))) {
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
    uVar3 = *(ulonglong *)
             (*(longlong *)(param_1->_padding_ + lVar1) + 8 + (ulonglong)(param_3 & 0x1ff) * 0x10);
    uVar9 = uVar3 >> 0x20;
    lVar1 = ((uVar3 & 0xffffffff) >> 9) * 8;
    lVar2 = (ulonglong)((uint)uVar3 & 0x1ff) * 0xc;
    lVar4 = *(longlong *)(param_1->_padding_ + lVar1);
    local_68 = *(undefined8 *)(lVar4 + lVar2);
    local_60 = *(uint *)(lVar4 + 8 + lVar2);
    uVar5 = local_68;
    if ((uint)local_68 == param_3) {
      iVar10 = 0;
    }
    else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (local_60 == param_3) {
        iVar10 = 2;
      }
    }
    lVar1 = *(longlong *)(param_1->_padding_ + lVar1);
    local_50 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_58 = *(undefined8 *)(lVar1 + lVar2);
    uVar7 = uVar3 & 0xffffffff;
    local_68 = uVar5;
    uVar11 = param_3;
    if (*(int *)((longlong)&local_58 + (longlong)iVar10 * 4) != param_2) {
      uVar8 = (uint)(uVar3 >> 0x20);
      if (uVar8 == 0xffffffff) goto LAB_14c6da7f9;
      uVar7 = (ulonglong)(uVar8 & 0x1ff);
      lVar1 = *(longlong *)(param_1->_padding_ + (uVar3 >> 0x29) * 8);
      local_68 = *(undefined8 *)(lVar1 + uVar7 * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + uVar7 * 0xc);
      uVar7 = uVar9;
      if ((uint)local_68 == param_3) {
        iVar10 = 0;
      }
      else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == param_3) {
          iVar10 = 2;
        }
      }
    }
    do {
      bVar6 = `FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'
              ::__l12::<lambda_1>::operator()(param_4,(uint)uVar7,uVar11,iVar10);
      if (bVar6) break;
      iVar10 = iVar10 + 2;
      uVar11 = *(uint *)((longlong)&local_68 +
                        (longlong)
                        (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                  (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3) * 4);
      uVar5 = *(undefined8 *)
               (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar11 >> 9) * 8) + 8 +
               (ulonglong)(uVar11 & 0x1ff) * 0x10);
      uVar8 = (uint)uVar5;
      if (uVar8 == (uint)uVar7) {
        uVar8 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      if (uVar8 == 0xffffffff) break;
      lVar1 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar8 >> 9) * 8);
      local_68 = *(undefined8 *)(lVar1 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      if ((uint)local_68 == uVar11) {
        iVar10 = 0;
      }
      else if ((uint)((ulonglong)local_68 >> 0x20) == uVar11) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == uVar11) {
          iVar10 = 2;
        }
      }
      uVar7 = (ulonglong)uVar8;
    } while (uVar11 != param_3);
    bVar6 = true;
  }
  return bVar6;
}

// VisitVertexAdjacentElements<UE::Geometry::FIntrinsicMesh,`FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>'::__l12::<lambda_1>_> @ 14c6da820

bool __cdecl
UE::Geometry::IntrinsicCorrespondenceUtils::
VisitVertexAdjacentElements<UE::Geometry::FIntrinsicMesh,_FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>_::__l12::<lambda_1>_>
          (FIntrinsicMesh *param_1,int param_2,int param_3,<lambda_1> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  BaseValueIterator local_48;
  
  if (((((param_3 < 0) ||
        ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <= param_3))
       || (lVar1 = (ulonglong)((uint)param_3 >> 9) * 8,
          0xfffd < (ushort)(*(short *)(*(longlong *)(param_1->_padding_ + lVar1) +
                                      (ulonglong)(param_3 & 0x1ff) * 2) - 1U))) ||
      ((param_2 < 0 ||
       ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <= param_2))))
     || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                       (param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
                                     (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
LAB_14c6dab49:
    bVar6 = false;
  }
  else {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,(FSmallListSet *)&param_1->_padding_,param_2,false);
    while ((((local_48.ListSet != (FSmallListSet *)&param_1->_padding_ ||
             (local_48.ListIndex != param_2)) || ((local_48.iCur != -1 || (local_48.cur_ptr != -1)))
            ) && ((local_48.cur_value == param_3 ||
                  (*(int *)(*(longlong *)
                             (param_1->_padding_ + ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 0xc
                           + (ulonglong)(local_48.cur_value & 0x1ff) * 0x10) != -1))))) {
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
    uVar3 = *(ulonglong *)
             (*(longlong *)(param_1->_padding_ + lVar1) + 8 + (ulonglong)(param_3 & 0x1ff) * 0x10);
    uVar9 = uVar3 >> 0x20;
    lVar1 = ((uVar3 & 0xffffffff) >> 9) * 8;
    lVar2 = (ulonglong)((uint)uVar3 & 0x1ff) * 0xc;
    lVar4 = *(longlong *)(param_1->_padding_ + lVar1);
    local_68 = *(undefined8 *)(lVar4 + lVar2);
    local_60 = *(uint *)(lVar4 + 8 + lVar2);
    uVar5 = local_68;
    if ((uint)local_68 == param_3) {
      iVar10 = 0;
    }
    else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (local_60 == param_3) {
        iVar10 = 2;
      }
    }
    lVar1 = *(longlong *)(param_1->_padding_ + lVar1);
    local_50 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_58 = *(undefined8 *)(lVar1 + lVar2);
    uVar7 = uVar3 & 0xffffffff;
    local_68 = uVar5;
    uVar11 = param_3;
    if (*(int *)((longlong)&local_58 + (longlong)iVar10 * 4) != param_2) {
      uVar8 = (uint)(uVar3 >> 0x20);
      if (uVar8 == 0xffffffff) goto LAB_14c6dab49;
      uVar7 = (ulonglong)(uVar8 & 0x1ff);
      lVar1 = *(longlong *)(param_1->_padding_ + (uVar3 >> 0x29) * 8);
      local_68 = *(undefined8 *)(lVar1 + uVar7 * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + uVar7 * 0xc);
      uVar7 = uVar9;
      if ((uint)local_68 == param_3) {
        iVar10 = 0;
      }
      else if ((int)((ulonglong)local_68 >> 0x20) == param_3) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == param_3) {
          iVar10 = 2;
        }
      }
    }
    do {
      bVar6 = `FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>'::__l12
              ::<lambda_1>::operator()(param_4,(uint)uVar7,uVar11,iVar10);
      if (bVar6) break;
      iVar10 = iVar10 + 2;
      uVar11 = *(uint *)((longlong)&local_68 +
                        (longlong)
                        (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                  (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3) * 4);
      uVar5 = *(undefined8 *)
               (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar11 >> 9) * 8) + 8 +
               (ulonglong)(uVar11 & 0x1ff) * 0x10);
      uVar8 = (uint)uVar5;
      if (uVar8 == (uint)uVar7) {
        uVar8 = (uint)((ulonglong)uVar5 >> 0x20);
      }
      if (uVar8 == 0xffffffff) break;
      lVar1 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar8 >> 9) * 8);
      local_68 = *(undefined8 *)(lVar1 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      local_60 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      if ((uint)local_68 == uVar11) {
        iVar10 = 0;
      }
      else if ((uint)((ulonglong)local_68 >> 0x20) == uVar11) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_60 == uVar11) {
          iVar10 = 2;
        }
      }
      uVar7 = (ulonglong)uVar8;
    } while (uVar11 != param_3);
    bVar6 = true;
  }
  return bVar6;
}

// VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles'::__l2::<lambda_1>_> @ 14c6dab70

bool __cdecl
VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles_::__l2::<lambda_1>_>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3,int param_4,<lambda_1> *param_5,
          bool param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 local_38;
  uint local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = *(ulonglong *)
           (*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) + 8 +
           (ulonglong)(param_2 & 0x1ff) * 0x10);
  uVar6 = (ulonglong)((uint)uVar1 & 0x1ff);
  uVar9 = (uVar1 & 0xffffffff) >> 9;
  uVar5 = uVar1 & 0xffffffff;
  lVar2 = *(longlong *)(param_1->_padding_ + uVar9 * 8);
  local_38 = *(undefined8 *)(lVar2 + uVar6 * 0xc);
  local_30 = *(uint *)(lVar2 + 8 + uVar6 * 0xc);
  uVar3 = local_38;
  if ((uint)local_38 == param_2) {
    iVar8 = 0;
  }
  else if ((int)((ulonglong)local_38 >> 0x20) == param_2) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (local_30 == param_2) {
      iVar8 = 2;
    }
  }
  lVar2 = *(longlong *)(param_1->_padding_ + uVar9 * 8);
  local_28 = *(undefined8 *)(lVar2 + uVar6 * 0xc);
  local_20 = *(undefined4 *)(lVar2 + 8 + uVar6 * 0xc);
  local_38 = uVar3;
  if (param_6) {
    if (*(int *)((longlong)&local_28 + (longlong)iVar8 * 4) != param_4) goto LAB_14c6dacc5;
  }
  else if (*(int *)((longlong)&local_28 + (longlong)iVar8 * 4) == param_4) goto LAB_14c6dacc5;
  uVar5 = uVar1 >> 0x20;
  uVar4 = (uint)(uVar1 >> 0x20);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  uVar6 = (ulonglong)(uVar4 & 0x1ff);
  lVar2 = *(longlong *)(param_1->_padding_ + (uVar1 >> 0x29) * 8);
  local_38 = *(undefined8 *)(lVar2 + uVar6 * 0xc);
  local_30 = *(uint *)(lVar2 + 8 + uVar6 * 0xc);
  if ((uint)local_38 == param_2) {
    iVar8 = 0;
  }
  else if ((int)((ulonglong)local_38 >> 0x20) == param_2) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (local_30 == param_2) {
      iVar8 = 2;
    }
  }
LAB_14c6dacc5:
  do {
    dVar10 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetTriInternalAngleR
                       ((FSimpleIntrinsicEdgeFlipMesh *)&param_5->__this->EdgeFlipMesh,(uint)uVar5,
                        iVar8);
    iVar8 = (param_6 ^ 1) + 1 + iVar8;
    *param_5->WedgeAngle = dVar10 + *param_5->WedgeAngle;
    uVar4 = *(uint *)((longlong)&local_38 +
                     (longlong)
                     (iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                              (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU)
                                   >> 0x1f)) * -3) * 4);
    uVar3 = *(undefined8 *)
             (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar4 >> 9) * 8) + 8 +
             (ulonglong)(uVar4 & 0x1ff) * 0x10);
    uVar7 = (uint)uVar3;
    if (uVar7 == (uint)uVar5) {
      uVar7 = (uint)((ulonglong)uVar3 >> 0x20);
    }
    uVar5 = (ulonglong)uVar7;
    if (uVar7 == 0xffffffff) {
      return uVar4 == param_3;
    }
    lVar2 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar7 >> 9) * 8);
    local_38 = *(undefined8 *)(lVar2 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
    local_30 = *(uint *)(lVar2 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
    if ((uint)local_38 == uVar4) {
      iVar8 = 0;
    }
    else if ((uint)((ulonglong)local_38 >> 0x20) == uVar4) {
      iVar8 = 1;
    }
    else {
      iVar8 = -1;
      if (local_30 == uVar4) {
        iVar8 = 2;
      }
    }
  } while (uVar4 != param_3);
  return true;
}

// VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FDeformableEdgePath::IsJointFlexible'::__l2::<lambda_1>_> @ 14c6dadf0

bool __cdecl
VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::IsJointFlexible_::__l2::<lambda_1>_>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3,int param_4,<lambda_1> *param_5,
          bool param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  FDeformableEdgePath *pFVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  bool *pbVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  puVar20 = (uint *)0x0;
  uVar3 = *(ulonglong *)
           (*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) + 8 +
           (ulonglong)(param_2 & 0x1ff) * 0x10);
  uVar11 = uVar3 & 0xffffffff;
  lVar1 = ((uVar3 & 0xffffffff) >> 9) * 8;
  lVar2 = (ulonglong)((uint)uVar3 & 0x1ff) * 0xc;
  lVar4 = *(longlong *)(param_1->_padding_ + lVar1);
  local_48 = *(undefined8 *)(lVar4 + lVar2);
  local_40 = *(int *)(lVar4 + 8 + lVar2);
  puVar19 = puVar20;
  if ((uint)local_48 != param_2) {
    if ((int)((ulonglong)local_48 >> 0x20) == param_2) {
      puVar19 = (uint *)&DAT_00000001;
    }
    else {
      puVar19 = (uint *)&DAT_ffffffff;
      if (local_40 == param_2) {
        puVar19 = (uint *)&DAT_00000002;
      }
    }
  }
  lVar1 = *(longlong *)(param_1->_padding_ + lVar1);
  local_38 = *(undefined8 *)(lVar1 + lVar2);
  local_30 = *(undefined4 *)(lVar1 + 8 + lVar2);
  if (param_6) {
    if (*(int *)((longlong)&local_38 + (longlong)(int)puVar19 * 4) != param_4) goto LAB_14c6daefa;
  }
  else if (*(int *)((longlong)&local_38 + (longlong)(int)puVar19 * 4) == param_4)
  goto LAB_14c6daefa;
  uVar11 = uVar3 >> 0x20;
  uVar9 = (uint)(uVar3 >> 0x20);
  if (uVar9 == 0xffffffff) {
    return false;
  }
  uVar12 = (ulonglong)(uVar9 & 0x1ff);
  lVar1 = *(longlong *)(param_1->_padding_ + (uVar3 >> 0x29) * 8);
  local_48 = *(undefined8 *)(lVar1 + uVar12 * 0xc);
  local_40 = *(int *)(lVar1 + 8 + uVar12 * 0xc);
  puVar19 = puVar20;
  if ((uint)local_48 != param_2) {
    if ((int)((ulonglong)local_48 >> 0x20) == param_2) {
      puVar19 = (uint *)&DAT_00000001;
    }
    else {
      puVar19 = (uint *)&DAT_ffffffff;
      if (local_40 == param_2) {
        puVar19 = (uint *)&DAT_00000002;
      }
    }
  }
LAB_14c6daefa:
  puVar18 = puVar20;
LAB_14c6daf13:
  do {
    if (*param_5->bIsBlocked == false) {
      uVar9 = *(uint *)((longlong)&local_48 + (longlong)puVar18 * 4);
      if ((uVar9 != param_5->StartEID) && (uVar9 != param_5->EndEID)) {
        pFVar5 = param_5->__this;
        if (*(int *)&(pFVar5->EIDToSIDsMap).field_0x8 != *(int *)&(pFVar5->EIDToSIDsMap).field_0x34)
        {
          puVar6 = *(undefined1 **)&(pFVar5->EIDToSIDsMap).field_0x40;
          puVar16 = &(pFVar5->EIDToSIDsMap).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar16 = puVar6;
          }
          uVar15 = *(uint *)(puVar16 +
                            (ulonglong)(*(int *)&(pFVar5->EIDToSIDsMap).field_0x48 - 1U & uVar9) * 4
                            );
          if (uVar15 != 0xffffffff) {
            do {
              puVar10 = (uint *)((longlong)(int)uVar15 * 0x20 + *(longlong *)&pFVar5->EIDToSIDsMap);
              if (*puVar10 == uVar9) {
                pbVar17 = param_5->bIsBlocked;
                puVar14 = puVar10 + 2;
                if (puVar10 == (uint *)0x0) {
                  puVar14 = puVar20;
                }
                if (puVar14 == (uint *)0x0) goto LAB_14c6daf8d;
                bVar8 = true;
                goto LAB_14c6daf8f;
              }
              uVar15 = puVar10[6];
            } while (uVar15 != 0xffffffff);
          }
        }
        pbVar17 = param_5->bIsBlocked;
LAB_14c6daf8d:
        bVar8 = false;
LAB_14c6daf8f:
        *pbVar17 = bVar8;
      }
      puVar18 = (uint *)((longlong)puVar18 + 1);
      if ((longlong)puVar18 < 3) goto LAB_14c6daf13;
    }
    iVar13 = (param_6 ^ 1) + 1 + (int)puVar19;
    uVar9 = *(uint *)((longlong)&local_48 +
                     (longlong)
                     (iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                               (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) &
                                     0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar7 = *(undefined8 *)
             (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar9 >> 9) * 8) + 8 +
             (ulonglong)(uVar9 & 0x1ff) * 0x10);
    uVar15 = (uint)uVar7;
    if (uVar15 == (uint)uVar11) {
      uVar15 = (uint)((ulonglong)uVar7 >> 0x20);
    }
    uVar11 = (ulonglong)uVar15;
    if (uVar15 == 0xffffffff) {
      return uVar9 == param_3;
    }
    lVar1 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar15 >> 9) * 8);
    local_48 = *(undefined8 *)(lVar1 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_40 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    puVar19 = puVar20;
    if ((uint)local_48 != uVar9) {
      if ((uint)((ulonglong)local_48 >> 0x20) == uVar9) {
        puVar19 = (uint *)&DAT_00000001;
      }
      else {
        puVar19 = (uint *)&DAT_ffffffff;
        if (local_40 == uVar9) {
          puVar19 = (uint *)&DAT_00000002;
        }
      }
    }
    puVar18 = puVar20;
    if (uVar9 == param_3) {
      return true;
    }
  } while( true );
}

// VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FDeformableEdgePath::DeformJoint'::__l5::<lambda_1>_> @ 14c6db130

bool __cdecl
VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::DeformJoint_::__l5::<lambda_1>_>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3,int param_4,<lambda_1> *param_5,
          bool param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  undefined8 local_50;
  int local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar16 = *(ulonglong *)
            (*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) + 8 +
            (ulonglong)(param_2 & 0x1ff) * 0x10);
  uVar14 = uVar16 & 0xffffffff;
  lVar2 = ((uVar16 & 0xffffffff) >> 9) * 8;
  lVar3 = (ulonglong)((uint)uVar16 & 0x1ff) * 0xc;
  lVar6 = *(longlong *)(param_1->_padding_ + lVar2);
  local_60 = *(undefined8 *)(lVar6 + lVar3);
  local_58 = *(uint *)(lVar6 + 8 + lVar3);
  uVar9 = local_60;
  if ((uint)local_60 == param_2) {
    iVar19 = 0;
  }
  else if ((int)((ulonglong)local_60 >> 0x20) == param_2) {
    iVar19 = 1;
  }
  else {
    iVar19 = -1;
    if (local_58 == param_2) {
      iVar19 = 2;
    }
  }
  lVar2 = *(longlong *)(param_1->_padding_ + lVar2);
  uVar4 = *(undefined8 *)(lVar2 + lVar3);
  uVar5 = *(undefined4 *)(lVar2 + 8 + lVar3);
  local_60 = uVar9;
  if (param_6) {
    local_50 = uVar4;
    local_48 = uVar5;
    if (*(int *)((longlong)&local_50 + (longlong)iVar19 * 4) != param_4) goto LAB_14c6db296;
  }
  else {
    local_44 = uVar4;
    local_3c = uVar5;
    if (*(int *)((longlong)&local_44 + (longlong)iVar19 * 4) == param_4) goto LAB_14c6db296;
  }
  uVar14 = uVar16 >> 0x20;
  uVar13 = (uint)(uVar16 >> 0x20);
  if (uVar13 == 0xffffffff) {
    return false;
  }
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  lVar2 = *(longlong *)(param_1->_padding_ + (uVar16 >> 0x29) * 8);
  local_60 = *(undefined8 *)(lVar2 + uVar15 * 0xc);
  local_58 = *(uint *)(lVar2 + 8 + uVar15 * 0xc);
  uVar9 = local_60;
  if ((uint)local_60 == param_2) {
    iVar19 = 0;
    local_60 = uVar9;
  }
  else if ((int)((ulonglong)local_60 >> 0x20) == param_2) {
    iVar19 = 1;
    local_60 = uVar9;
  }
  else {
    iVar19 = -1;
    local_60 = uVar9;
    if (local_58 == param_2) {
      iVar19 = 2;
    }
  }
LAB_14c6db296:
  while( true ) {
    iVar17 = iVar19;
    if (param_5->bClockwise != false) {
      iVar17 = iVar19 + 1;
      iVar17 = iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                        (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
    }
    iVar1 = iVar17 + 1;
    pTVar7 = param_5->DeformedPath;
    local_68 = *(uint *)((longlong)&local_60 +
                        (longlong)
                        (iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                                 (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) &
                                       0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar16 = (ulonglong)((uint)uVar14 & 0x1ff);
    lVar2 = *(longlong *)((param_5->__this->EdgeFlipMesh)._padding_ + (uVar14 >> 9) * 8);
    local_30 = *(undefined4 *)(lVar2 + 8 + uVar16 * 0xc);
    local_38 = *(undefined8 *)(lVar2 + uVar16 * 0xc);
    iVar17 = param_5->HeadOffset + iVar17;
    uStack_64 = (uint)(*(int *)(*(longlong *)
                                 ((param_5->__this->EdgeFlipMesh)._padding_ +
                                 (ulonglong)(local_68 >> 9) * 8) +
                               (ulonglong)(local_68 & 0x1ff) * 0x10) !=
                      *(int *)((longlong)&local_38 +
                              (longlong)
                              (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                                        (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) &
                                              0xffffffffU) >> 0x1f)) * -3) * 4));
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar8 + (longlong)pTVar7->ArrayMax * 8)) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    iVar17 = pTVar7->ArrayNum;
    if (iVar17 == pTVar7->ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar17 + 1;
    *(ulonglong *)((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 8) =
         CONCAT44(uStack_64,local_68);
    iVar19 = (param_6 ^ 1) + 1 + iVar19;
    uVar13 = *(uint *)((longlong)&local_60 +
                      (longlong)
                      (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                                (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar9 = *(undefined8 *)
             (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar13 >> 9) * 8) + 8 +
             (ulonglong)(uVar13 & 0x1ff) * 0x10);
    uVar18 = (uint)uVar9;
    if (uVar18 == (uint)uVar14) {
      uVar18 = (uint)((ulonglong)uVar9 >> 0x20);
    }
    uVar14 = (ulonglong)uVar18;
    if (uVar18 == 0xffffffff) break;
    lVar2 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar18 >> 9) * 8);
    local_60 = *(undefined8 *)(lVar2 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    local_58 = *(uint *)(lVar2 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
    uVar9 = local_60;
    if ((uint)local_60 == uVar13) {
      iVar19 = 0;
    }
    else if ((uint)((ulonglong)local_60 >> 0x20) == uVar13) {
      iVar19 = 1;
    }
    else {
      iVar19 = -1;
      if (local_58 == uVar13) {
        iVar19 = 2;
      }
    }
    local_60 = uVar9;
    if (uVar13 == param_3) {
      return true;
    }
  }
  return uVar13 == param_3;
}

// __builtin_array_init_helper<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c6db4f0

void __cdecl
__builtin_array_init_helper<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &param_1->ArrayMax;
    do {
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar1 + -3))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar1 + -1) = 0;
      piVar1 = piVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// <lambda_1> @ 14c6dbcd0

<lambda_1> * __thiscall
``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::
operator()'::__l5::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FDynamicMeshInstance *pFVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->ToAdd).ArrayNum;
  pFVar2 = (FDynamicMeshInstance *)(param_1->ToAdd).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    ConstructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
              (*(void **)this,pFVar2,iVar1);
  }
  *(int *)((longlong)this + 0x10) = param_1->InstIdx;
  return this;
}

// TMap<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>_> @ 14c6dc470

TMap<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_enum_UE::Geometry::EMeshResult___cdecl_UE::Geometry::FIntrinsicMesh::PokeTriangle(int,UE::Math::TVector<double>_const_&,DynamicMeshInfo::FPokeTriangleInfo_&)_::_2_::FPointCorrespondence,0>_>
* __thiscall
TMap<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>_>
::
TMap<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,0>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  return this;
}

// ~TFunction_OwnedObject<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::__l2::<lambda_1>,0,0> @ 14c6e07b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FExtrudeMesh::FExtrudeMesh_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::__l2::<lambda_1>,0,0> @ 14c6e07d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_GroupEdgeInserterLocals::CreateNewGroups_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_1>,0,0> @ 14c6e07f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0> @ 14c6e0810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_U__TQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0> @ 14c6e0830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0> @ 14c6e0850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::__l2::<lambda_1>,0,0> @ 14c6e0870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_1>,0,0> @ 14c6e0890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 14c6e08b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
            (*(FDynamicMeshInstance **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0> @ 14c6e08f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0> @ 14c6e0910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__UEBA_NPEBUFSkipTransparentMeshWrapper__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TMap<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>_> @ 14c6e0950

void __thiscall
TMap<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence,0>_>
::
~TMap<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence,0>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14c6e0f00

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,_UE::Geometry::FIntrinsicMesh::PokeTriangle_::__l2::FPointCorrespondence>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 14c6e36c0

bool __thiscall
``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  FSimpleIntrinsicEdgeFlipMesh *this_00;
  double dVar1;
  
  this_00 = *(FSimpleIntrinsicEdgeFlipMesh **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if (((ushort)(*(short *)(*(longlong *)
                              ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        != -1)) {
      dVar1 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(this_00,param_1);
      return dVar1 < *(double *)((longlong)this + 8);
    }
  }
  return false;
}

// operator() @ 14c6e3750

bool __thiscall
``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  FSimpleIntrinsicEdgeFlipMesh *this_00;
  double dVar1;
  
  this_00 = *(FSimpleIntrinsicEdgeFlipMesh **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if (((ushort)(*(short *)(*(longlong *)
                              ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        != -1)) {
      dVar1 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(this_00,param_1);
      return dVar1 < *(double *)((longlong)this + 8);
    }
  }
  return false;
}

// operator() @ 14c6e37e0

bool __thiscall
``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FIntrinsicTriangulation>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  FSimpleIntrinsicEdgeFlipMesh *this_00;
  double dVar1;
  
  this_00 = *(FSimpleIntrinsicEdgeFlipMesh **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if (((ushort)(*(short *)(*(longlong *)
                              ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        != -1)) {
      dVar1 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(this_00,param_1);
      return dVar1 < *(double *)((longlong)this + 8);
    }
  }
  return false;
}

// operator() @ 14c6e3870

bool __thiscall
``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicEdgeFlipMesh>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  FSimpleIntrinsicEdgeFlipMesh *this_00;
  double dVar1;
  
  this_00 = *(FSimpleIntrinsicEdgeFlipMesh **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if (((ushort)(*(short *)(*(longlong *)
                              ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        != -1)) {
      dVar1 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(this_00,param_1);
      return dVar1 < *(double *)((longlong)this + 8);
    }
  }
  return false;
}

// operator() @ 14c6e3900

bool __thiscall
``anonymous_namespace'::FlipToDelaunayImpl<UE::Geometry::FSimpleIntrinsicMesh>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  FSimpleIntrinsicEdgeFlipMesh *this_00;
  double dVar1;
  
  this_00 = *(FSimpleIntrinsicEdgeFlipMesh **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if (((ushort)(*(short *)(*(longlong *)
                              ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10)
        != -1)) {
      dVar1 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight(this_00,param_1);
      return dVar1 < *(double *)((longlong)this + 8);
    }
  }
  return false;
}

// operator() @ 14c6e3990

void __thiscall
`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e3b20

void __thiscall
`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e3cb0

void __thiscall
`IsDevelopableVertex<``UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e3e40

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e3fd0

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e4160

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l49::<lambda_4>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e42f0

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e4480

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e4610

void __thiscall
`IsDevelopableVertex<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::SimplifyToMinimalPlanar'::__l45::<lambda_5>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  
  plVar4 = (longlong *)**(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18);
  iVar3 = **(int **)((longlong)this + 8);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = *(double **)((longlong)this + 0x10);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 8) = iVar3 + 1;
    return;
  }
  pdVar1 = *(double **)((longlong)this + 0x28);
  iVar3 = **(int **)((longlong)this + 0x20);
  if (iVar3 == 0) {
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar2;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  if (**(double **)((longlong)this + 0x18) < dVar8 * pdVar1[1] + dVar7 * *pdVar1 + dVar2 * pdVar1[2]
     ) {
    **(int **)((longlong)this + 0x20) = iVar3 + 1;
    return;
  }
  **(int **)((longlong)this + 0x30) = **(int **)((longlong)this + 0x30) + 1;
  return;
}

// operator() @ 14c6e5700

void __thiscall
``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,int param_1,bool param_2)

{
  longlong lVar1;
  TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  *this_00;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res10 [6];
  undefined8 local_28;
  int *local_20;
  undefined8 *local_18;
  
  if (param_1 != -1) {
    this_00 = *(TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                **)((longlong)this + 8);
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar5 = (this_00->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this_00->HashSize - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar2 * 0x14;
          if (*(int *)(*(longlong *)&this_00->Elements + (longlong)iVar2 * 0x14) == param_1) {
            lVar3 = lVar1 + 4;
            if (lVar1 == 0) {
              lVar3 = 0;
            }
            uVar4 = *(undefined4 *)this;
            if (lVar3 != 0) {
              *(undefined4 *)(lVar3 + ((ulonglong)param_2 ^ 1) * 4) = uVar4;
              return;
            }
            goto LAB_14c6e576b;
          }
          iVar2 = *(int *)(lVar1 + 0xc);
        } while (iVar2 != -1);
      }
    }
    uVar4 = *(undefined4 *)this;
LAB_14c6e576b:
    local_28 = 0xffffffffffffffff;
    *(undefined4 *)((longlong)&local_28 + ((ulonglong)param_2 ^ 1) * 4) = uVar4;
    local_20 = local_res10;
    local_18 = &local_28;
    local_res10[0] = param_1;
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&>_>
              (this_00,(TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&> *)
                       (local_res10 + 4),(bool *)&local_20);
  }
  return;
}

// operator() @ 14c6e57e0

void __thiscall
``UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_68;
  uint local_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  if (((**(char **)this != '\0') && (param_1 != **(int **)((longlong)this + 8))) &&
     (param_1 != **(int **)((longlong)this + 0x10))) {
    puVar4 = *(uint **)((longlong)this + 0x20);
    lVar5 = *(longlong *)((longlong)this + 0x18);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8)
    ;
    local_68 = *(double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_60 = *(uint *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar7 = SUB84(local_68,0);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      pdVar1 = *(double **)((longlong)this + 0x30);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = pdVar1[2];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) +
               (((ulonglong)local_68 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
    }
    uVar7 = (uint)((ulonglong)local_68 >> 0x20);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      auVar3 = **(undefined1 (**) [16])((longlong)this + 0x30);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar8 = auVar3._8_8_;
      dVar12 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x30))[1];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + ((ulonglong)local_68 >> 0x29) * 8);
      auVar3 = *(undefined1 (*) [16])(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar12 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar8 = auVar3._8_8_;
    }
    if ((local_60 == *puVar4) || (local_60 == **(uint **)((longlong)this + 0x28))) {
      puVar2 = *(undefined4 **)((longlong)this + 0x30);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(puVar2 + 4);
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + (ulonglong)(local_60 >> 9) * 8);
      puVar2 = (undefined4 *)(lVar6 + (ulonglong)(local_60 & 0x1ff) * 0x18);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_60 & 0x1ff) * 0x18);
    }
    local_50 = (dVar9 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                (double)CONCAT44(uVar16,uVar14) + (double)CONCAT44(uVar17,uVar15)) *
               __real_3fd5555555555555;
    dStack_48 = (dVar10 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y + dVar8 +
                (double)CONCAT44(uVar19,uVar18)) * __real_3fd5555555555555;
    local_40 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + dVar11 + dVar12 + dVar13)
               * __real_3fd5555555555555;
    (**(code **)(**(longlong **)(lVar5 + 0xd0) + 8))
              (*(longlong **)(lVar5 + 0xd0),&local_68,&local_50,0xffffffff);
    dStack_48 = (double)CONCAT44(uStack_5c,local_60) - dStack_48;
    dVar11 = dStack_48 * dStack_48 + (local_68 - local_50) * (local_68 - local_50) +
             (local_58 - local_40) * (local_58 - local_40);
    if (**(double **)((longlong)this + 0x38) <= dVar11 &&
        dVar11 != **(double **)((longlong)this + 0x38)) {
      **(undefined1 **)this = 0;
    }
  }
  return;
}

// operator() @ 14c6e5a60

void __thiscall
``UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_68;
  uint local_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  if (((**(char **)this != '\0') && (param_1 != **(int **)((longlong)this + 8))) &&
     (param_1 != **(int **)((longlong)this + 0x10))) {
    puVar4 = *(uint **)((longlong)this + 0x20);
    lVar5 = *(longlong *)((longlong)this + 0x18);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8)
    ;
    local_68 = *(double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_60 = *(uint *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar7 = SUB84(local_68,0);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      pdVar1 = *(double **)((longlong)this + 0x30);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = pdVar1[2];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) +
               (((ulonglong)local_68 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
    }
    uVar7 = (uint)((ulonglong)local_68 >> 0x20);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      auVar3 = **(undefined1 (**) [16])((longlong)this + 0x30);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar8 = auVar3._8_8_;
      dVar12 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x30))[1];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + ((ulonglong)local_68 >> 0x29) * 8);
      auVar3 = *(undefined1 (*) [16])(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar12 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar8 = auVar3._8_8_;
    }
    if ((local_60 == *puVar4) || (local_60 == **(uint **)((longlong)this + 0x28))) {
      puVar2 = *(undefined4 **)((longlong)this + 0x30);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(puVar2 + 4);
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + (ulonglong)(local_60 >> 9) * 8);
      puVar2 = (undefined4 *)(lVar6 + (ulonglong)(local_60 & 0x1ff) * 0x18);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_60 & 0x1ff) * 0x18);
    }
    local_50 = (dVar9 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                (double)CONCAT44(uVar16,uVar14) + (double)CONCAT44(uVar17,uVar15)) *
               __real_3fd5555555555555;
    dStack_48 = (dVar10 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y + dVar8 +
                (double)CONCAT44(uVar19,uVar18)) * __real_3fd5555555555555;
    local_40 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + dVar11 + dVar12 + dVar13)
               * __real_3fd5555555555555;
    (**(code **)(**(longlong **)(lVar5 + 0xd0) + 8))
              (*(longlong **)(lVar5 + 0xd0),&local_68,&local_50,0xffffffff);
    dStack_48 = (double)CONCAT44(uStack_5c,local_60) - dStack_48;
    dVar11 = dStack_48 * dStack_48 + (local_68 - local_50) * (local_68 - local_50) +
             (local_58 - local_40) * (local_58 - local_40);
    if (**(double **)((longlong)this + 0x38) <= dVar11 &&
        dVar11 != **(double **)((longlong)this + 0x38)) {
      **(undefined1 **)this = 0;
    }
  }
  return;
}

// operator() @ 14c6e5ce0

void __thiscall
``UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
CheckIfCollapseWithinGeometricTolerance'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_68;
  uint local_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  if (((**(char **)this != '\0') && (param_1 != **(int **)((longlong)this + 8))) &&
     (param_1 != **(int **)((longlong)this + 0x10))) {
    puVar4 = *(uint **)((longlong)this + 0x20);
    lVar5 = *(longlong *)((longlong)this + 0x18);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8)
    ;
    local_68 = *(double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_60 = *(uint *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar7 = SUB84(local_68,0);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      pdVar1 = *(double **)((longlong)this + 0x30);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = pdVar1[2];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) +
               (((ulonglong)local_68 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      dVar11 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
    }
    uVar7 = (uint)((ulonglong)local_68 >> 0x20);
    if ((uVar7 == *puVar4) || (uVar7 == **(uint **)((longlong)this + 0x28))) {
      auVar3 = **(undefined1 (**) [16])((longlong)this + 0x30);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar8 = auVar3._8_8_;
      dVar12 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x30))[1];
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + ((ulonglong)local_68 >> 0x29) * 8);
      auVar3 = *(undefined1 (*) [16])(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      uVar14 = auVar3._0_4_;
      uVar16 = auVar3._4_4_;
      dVar12 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      dVar8 = auVar3._8_8_;
    }
    if ((local_60 == *puVar4) || (local_60 == **(uint **)((longlong)this + 0x28))) {
      puVar2 = *(undefined4 **)((longlong)this + 0x30);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(puVar2 + 4);
    }
    else {
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) + (ulonglong)(local_60 >> 9) * 8);
      puVar2 = (undefined4 *)(lVar6 + (ulonglong)(local_60 & 0x1ff) * 0x18);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar13 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_60 & 0x1ff) * 0x18);
    }
    local_50 = (dVar9 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                (double)CONCAT44(uVar16,uVar14) + (double)CONCAT44(uVar17,uVar15)) *
               __real_3fd5555555555555;
    dStack_48 = (dVar10 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y + dVar8 +
                (double)CONCAT44(uVar19,uVar18)) * __real_3fd5555555555555;
    local_40 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + dVar11 + dVar12 + dVar13)
               * __real_3fd5555555555555;
    (**(code **)(**(longlong **)(lVar5 + 0xd0) + 8))
              (*(longlong **)(lVar5 + 0xd0),&local_68,&local_50,0xffffffff);
    dStack_48 = (double)CONCAT44(uStack_5c,local_60) - dStack_48;
    dVar11 = dStack_48 * dStack_48 + (local_68 - local_50) * (local_68 - local_50) +
             (local_58 - local_40) * (local_58 - local_40);
    if (**(double **)((longlong)this + 0x38) <= dVar11 &&
        dVar11 != **(double **)((longlong)this + 0x38)) {
      **(undefined1 **)this = 0;
    }
  }
  return;
}

// operator() @ 14c6e5f60

void __thiscall
``UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::
operator()(void *this,FPointCorrespondence *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint local_res10 [2];
  int local_res18 [2];
  
  if ((param_1->SurfacePos).PositionType != Vertex) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    if ((((FPointCorrespondence *)pFVar3->Data <= param_1) &&
        (param_1 < (FPointCorrespondence *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4)))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,pFVar3,piVar1);
    }
    lVar10 = (longlong)iVar9;
    *(int *)&pFVar3[1].Data = iVar9 + 1;
    dVar6 = (param_1->LocalPos).field0_0x0._s_0.Y;
    pFVar4 = pFVar3->Data;
    *(double *)(pFVar4 + lVar10 * 0x50) = (param_1->LocalPos).field0_0x0._s_0.X;
    *(double *)(pFVar4 + lVar10 * 0x50 + 8) = dVar6;
    dVar6 = (param_1->IntrinsicBC).field0_0x0._s_0.Y;
    *(double *)(pFVar4 + lVar10 * 0x50 + 0x10) = (param_1->IntrinsicBC).field0_0x0._s_0.X;
    *(double *)(pFVar4 + lVar10 * 0x50 + 0x10 + 8) = dVar6;
    uVar7 = *(undefined8 *)&param_1->SurfacePos;
    *(double *)(pFVar4 + lVar10 * 0x50 + 0x20) = (param_1->IntrinsicBC).field0_0x0._s_0.Z;
    *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x20 + 8) = uVar7;
    dVar6 = (param_1->SurfacePos).Position.EdgePosition.Alpha;
    *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x30) = *(undefined8 *)&(param_1->SurfacePos).Position;
    *(double *)(pFVar4 + lVar10 * 0x50 + 0x30 + 8) = dVar6;
    uVar7 = *(undefined8 *)((longlong)&(param_1->SurfacePos).Position + 0x18);
    *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x40) =
         *(undefined8 *)((longlong)&(param_1->SurfacePos).Position + 0x10);
    *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x40 + 8) = uVar7;
    return;
  }
  plVar2 = *(longlong **)this;
  local_res10[0] = (param_1->SurfacePos).Position.EdgePosition.EdgeID;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar11 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar11 = plVar2 + 7;
    }
    iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar2[9] - 1U & local_res10[0]) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*plVar2 + (longlong)iVar9 * 0xc) == local_res10[0]) {
          return;
        }
        iVar9 = *(int *)(*plVar2 + 4 + (longlong)iVar9 * 0xc);
      } while (iVar9 != -1);
    }
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if ((((FPointCorrespondence *)pFVar3->Data <= param_1) &&
      (param_1 < (FPointCorrespondence *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  dVar6 = (param_1->LocalPos).field0_0x0._s_0.Y;
  lVar10 = (longlong)iVar9;
  pFVar4 = pFVar3->Data;
  *(double *)(pFVar4 + lVar10 * 0x50) = (param_1->LocalPos).field0_0x0._s_0.X;
  *(double *)(pFVar4 + lVar10 * 0x50 + 8) = dVar6;
  dVar6 = (param_1->IntrinsicBC).field0_0x0._s_0.Y;
  *(double *)(pFVar4 + lVar10 * 0x50 + 0x10) = (param_1->IntrinsicBC).field0_0x0._s_0.X;
  *(double *)(pFVar4 + lVar10 * 0x50 + 0x10 + 8) = dVar6;
  uVar7 = *(undefined8 *)&param_1->SurfacePos;
  *(double *)(pFVar4 + lVar10 * 0x50 + 0x20) = (param_1->IntrinsicBC).field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x20 + 8) = uVar7;
  dVar6 = (param_1->SurfacePos).Position.EdgePosition.Alpha;
  *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x30) = *(undefined8 *)&(param_1->SurfacePos).Position;
  *(double *)(pFVar4 + lVar10 * 0x50 + 0x30 + 8) = dVar6;
  uVar7 = *(undefined8 *)((longlong)&(param_1->SurfacePos).Position + 0x18);
  *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x40) =
       *(undefined8 *)((longlong)&(param_1->SurfacePos).Position + 0x10);
  *(undefined8 *)(pFVar4 + lVar10 * 0x50 + 0x40 + 8) = uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,local_res18,
             (bool *)local_res10);
  return;
}

// operator() @ 14c6e6190

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
``UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::<lambda_6>::operator()'::__l2::<lambda_1>::
operator()(void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  plVar1 = *(longlong **)this;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_58[0] = -1;
  lVar3 = plVar1[1];
  lVar6 = *plVar1;
  lVar7 = (longlong)(int)lVar3 * 0x50 + lVar6;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UE::Geometry::FIntrinsicMesh::PokeTriangle'::__l2::FPointCorrespondence_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar6 == lVar7) goto LAB_14c6e620a;
    if (*(int *)(lVar6 + 0x28) == 2) break;
    lVar6 = lVar6 + 0x50;
  }
  local_58[0] = *(int *)(lVar6 + 0x30);
LAB_14c6e620a:
  if (local_58[0] == -1) {
    plVar1 = *(longlong **)this;
    if (((int)plVar1[1] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar5 = FIntrinsicMeshImplUtils::GetAdjacentTriangles
                       (&local_40,(FSurfacePoint *)(*plVar1 + 0x28),
                        *(FDynamicMesh3 **)((longlong)this + 8));
    if (&local_50 != pTVar5) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      local_50.AllocatorInstance.Data = (pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = pTVar5->ArrayNum;
      local_50.ArrayMax = pTVar5->ArrayMax;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  else {
    if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    if (local_50.ArrayNum == local_50.ArrayMax) {
      local_50.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    *(int *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4) = local_58[0];
    local_50.ArrayNum = local_50.ArrayNum + 1;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_50.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_50.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_50.ArrayMax;
  return __return_storage_ptr__;
}

// operator() @ 14c6e85d0

bool __thiscall
`GroupEdgeInserterLocals::CreateNewGroups'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  
  iVar2 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(*(FDynamicMesh3 **)this,param_1);
  iVar3 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(*(FDynamicMesh3 **)this,param_2);
  if (iVar2 == iVar3) {
    uVar4 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      (*(FDynamicMesh3 **)this,param_1,param_2);
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar5 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar5 = plVar1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar1[9] - 1U & uVar4) * 4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == uVar4) goto LAB_14c6e866c;
          iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
        } while (iVar2 != -1);
      }
    }
    iVar2 = -1;
LAB_14c6e866c:
    bVar6 = iVar2 == -1;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// operator() @ 14c6e93b0

FExtrudeFrame * __thiscall
`ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex'::__l2::<lambda_1>::operator()
          (void *this,FExtrudeFrame *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  TQuaternion<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  undefined8 uStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double local_90;
  double local_88;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  local_c8._s_0.Z = (param_1->field0_0x0)._s_0.X;
  dStack_a0 = (param_1->field0_0x0)._s_0.Y;
  local_c8._s_0.X =
       (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z -
       (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y;
  local_88 = (param_1->field0_0x0)._s_0.Z;
  pdVar3 = *(double **)this;
  dVar6 = *pdVar3;
  dVar7 = pdVar3[1];
  uVar4 = *(undefined4 *)(pdVar3 + 2);
  uVar5 = *(undefined4 *)((longlong)pdVar3 + 0x14);
  uStack_b0 = dVar1 * (param_1->field0_0x0)._s_0.Z - dVar2 * (param_2->field0_0x0)._s_0.Z;
  dStack_98 = dVar2 * (param_2->field0_0x0)._s_0.Y - dVar1 * (param_1->field0_0x0)._s_0.Y;
  local_c8._s_0.Y = dStack_98 * dStack_a0 - uStack_b0 * local_88;
  dStack_a8 = local_c8._s_0.X * local_88 - dStack_98 * local_c8._s_0.Z;
  local_e8._s_0.X = 0.0;
  local_90 = uStack_b0 * local_c8._s_0.Z - local_c8._s_0.X * dStack_a0;
  local_e8._s_0.Y = 0.0;
  local_e8._s_0.Z = 0.0;
  local_e8._s_0.W = __real_3ff0000000000000;
  UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_e8._s_0,(TMatrix3<double> *)&local_c8._s_0);
  __return_storage_ptr__->Scaling = 1.0;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = dVar6;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar7;
  uStack_b0._0_4_ = SUB84(local_e8._s_0.X,0);
  uStack_b0._4_4_ = (undefined4)((ulonglong)local_e8._0_8_ >> 0x20);
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) =
       uStack_b0._4_4_;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = local_e8._s_0.Y;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = local_e8._s_0.Z;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = local_e8._s_0.W;
  (__return_storage_ptr__->InFrameScaleDirection).bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 14c6ec440

TVector<double> * __thiscall
``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::
operator()'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  uVar5 = *(uint *)((longlong)this + 0x10);
  uVar11 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 8)) {
    uVar11 = ~uVar5 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar7)();
      return pTVar12;
    }
  }
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  lVar15 = *(longlong *)this + 8 + (longlong)(int)uVar5 * 0xb8;
  lVar13 = *(longlong *)((longlong)(int)uVar5 * 0xb8 + 0xa8 + *(longlong *)this);
  iVar6 = *(int *)(lVar15 + 0xa8);
  if (lVar13 == 0) {
    lVar13 = lVar15;
  }
  pdVar14 = (double *)(lVar13 + 0x40);
  while( true ) {
    if (*(int *)(lVar15 + 0xa8) != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((TQuaternion<double> *)(pdVar14 + -8) ==
        (TQuaternion<double> *)((longlong)iVar6 * 0x50 + lVar13)) break;
    local_78._s_0.X = dVar9 * pdVar14[-1];
    local_78._s_0.Y = dVar8 * *pdVar14;
    local_78._s_0.Z = dVar4 * pdVar14[1];
    pTVar12 = UE::Geometry::operator*<double>
                        (local_60,(TQuaternion<double> *)(pdVar14 + -8),
                         (TVector<double> *)&local_78._s_0);
    pdVar1 = pdVar14 + -4;
    pdVar2 = pdVar14 + -3;
    pdVar3 = pdVar14 + -2;
    pdVar14 = pdVar14 + 10;
    dVar9 = *pdVar1 + (pTVar12->field0_0x0)._s_0.X;
    dVar8 = *pdVar2 + (pTVar12->field0_0x0)._s_0.Y;
    dVar4 = *pdVar3 + (pTVar12->field0_0x0)._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  return __return_storage_ptr__;
}

// operator() @ 14c6ee490

void __thiscall
`IsCollapsableDevelopableEdge'::__l29::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)this;
  lVar7 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar2 = *(double **)((longlong)this + 8);
  lVar3 = *plVar1;
  if (pdVar2[1] * *(double *)(lVar3 + 8 + lVar7 * 0x18) +
      *(double *)(lVar3 + lVar7 * 0x18) * *pdVar2 +
      pdVar2[2] * *(double *)(lVar3 + 0x10 + lVar7 * 0x18) < **(double **)((longlong)this + 0x10)) {
    **(undefined1 **)((longlong)this + 0x18) = 0;
  }
  return;
}

// operator() @ 14c6ee550

bool __thiscall
`GroupEdgeInserterLocals::GetPlaneCutPath'::__l56::<lambda_1>::operator()
          (void *this,FMeshSurfacePoint *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FMeshSurfacePoint *this_00;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 *puVar10;
  TVector<double> *pTVar11;
  TVector<double> local_68;
  TVector<double> local_50 [3];
  
  this_00 = *(FMeshSurfacePoint **)((longlong)this + 0x18);
  if ((this_00->ElementID == param_1->ElementID) && (this_00->PointType == param_1->PointType)) {
    return false;
  }
  if (this_00->ElementID != -1) {
    pdVar7 = *(double **)this;
    pTVar11 = UE::Geometry::FMeshSurfacePoint::Pos
                        (this_00,&local_68,*(FDynamicMesh3 **)((longlong)this + 8));
    pdVar8 = *(double **)((longlong)this + 0x10);
    pdVar9 = *(double **)this;
    dVar1 = (pTVar11->field0_0x0)._s_0.X;
    dVar2 = (pTVar11->field0_0x0)._s_0.Y;
    dVar3 = (pTVar11->field0_0x0)._s_0.Z;
    dVar4 = *pdVar8;
    dVar5 = pdVar8[1];
    dVar6 = pdVar8[2];
    pTVar11 = UE::Geometry::FMeshSurfacePoint::Pos
                        (param_1,local_50,*(FDynamicMesh3 **)((longlong)this + 8));
    pdVar8 = *(double **)((longlong)this + 0x10);
    if (((pTVar11->field0_0x0)._s_0.Y - pdVar8[1]) * pdVar9[1] +
        ((pTVar11->field0_0x0)._s_0.X - *pdVar8) * *pdVar9 +
        ((pTVar11->field0_0x0)._s_0.Z - pdVar8[2]) * pdVar9[2] <=
        (dVar2 - dVar5) * pdVar7[1] + (dVar1 - dVar4) * *pdVar7 + (dVar3 - dVar6) * pdVar7[2]) {
      return false;
    }
  }
  dVar1 = (param_1->BaryCoord).field0_0x0._s_0.X;
  puVar10 = *(undefined8 **)((longlong)this + 0x18);
  *puVar10 = *(undefined8 *)param_1;
  puVar10[1] = dVar1;
  dVar1 = (param_1->BaryCoord).field0_0x0._s_0.Z;
  puVar10[2] = (param_1->BaryCoord).field0_0x0._s_0.Y;
  puVar10[3] = dVar1;
  puVar10[4] = *(undefined8 *)&param_1->PointType;
  return true;
}

// operator() @ 14c6f3330

bool __thiscall
`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)this;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14c6f337f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14c6f337f:
  return iVar2 == -1;
}

// operator() @ 14c6f5900

void __thiscall
`GroupEdgeInserterLocals::InsertNewVertexEndpoints'::__l24::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  **(int **)this = param_1;
  *(undefined1 *)(*(longlong *)this + 4) = 1;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar13 = *(int *)((longlong)this + 0x18) - 1;
  uVar12 = 0;
  if ((int)uVar13 < (int)plVar4[1]) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar8 = __real_3ff0000000000000;
  lVar5 = **(longlong **)((longlong)this + 0x10);
  if (param_1 == *(int *)(*plVar4 + (longlong)(int)uVar13 * 4)) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    dVar16 = *pdVar1;
    dVar18 = pdVar1[1];
    dVar15 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    lVar5 = *(longlong *)this;
    *(double *)(lVar5 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(lVar5 + 0x10) = uVar9;
    *(undefined8 *)(lVar5 + 0x18) = uVar10;
    if (1 < *(int *)((longlong)this + 0x18)) {
      uVar13 = *(int *)((longlong)this + 0x18) - 2;
      plVar4 = *(longlong **)((longlong)this + 8);
      lVar5 = **(longlong **)((longlong)this + 0x10);
      uVar12 = 0;
      if ((int)uVar13 < (int)plVar4[1]) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar12 = *(uint *)(*plVar4 + (longlong)(int)uVar13 * 4);
      uVar14 = (ulonglong)(uVar12 & 0x1ff);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar14 * 0x18);
      dVar21 = dVar15 - *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
      dVar19 = dVar16 - *pdVar1;
      dVar17 = dVar18 - pdVar1[1];
      dVar20 = SQRT(dVar17 * dVar17 + dVar19 * dVar19 + dVar21 * dVar21);
      if (dVar20 <= 0.0) {
        dVar17 = 0.0;
        dVar21 = 0.0;
        dVar19 = 0.0;
      }
      else {
        dVar20 = dVar8 / dVar20;
        dVar17 = dVar17 * dVar20;
        dVar21 = dVar20 * dVar21;
        dVar19 = dVar19 * dVar20;
      }
      lVar5 = *(longlong *)this;
      *(double *)(lVar5 + 8) = dVar19 + *(double *)(lVar5 + 8);
      *(double *)(lVar5 + 0x10) = dVar17 + *(double *)(lVar5 + 0x10);
      *(double *)(lVar5 + 0x18) = dVar21 + *(double *)(lVar5 + 0x18);
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    iVar3 = *(int *)((longlong)this + 0x18);
    if (iVar3 < (int)plVar4[1]) {
      lVar5 = **(longlong **)((longlong)this + 0x10);
      if (iVar3 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar12 = *(uint *)(*plVar4 + (longlong)iVar3 * 4);
      uVar14 = (ulonglong)(uVar12 & 0x1ff);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar14 * 0x18);
      dVar15 = *(double *)(lVar5 + 0x10 + uVar14 * 0x18) - dVar15;
      dVar16 = *pdVar1 - dVar16;
      dVar18 = pdVar1[1] - dVar18;
      dVar20 = SQRT(dVar18 * dVar18 + dVar16 * dVar16 + dVar15 * dVar15);
      if (dVar20 <= 0.0) {
        dVar15 = 0.0;
        dVar16 = 0.0;
        dVar18 = 0.0;
      }
      else {
        dVar8 = dVar8 / dVar20;
        dVar18 = dVar18 * dVar8;
        dVar15 = dVar8 * dVar15;
        dVar16 = dVar16 * dVar8;
      }
      lVar5 = *(longlong *)this;
      *(double *)(lVar5 + 8) = dVar16 + *(double *)(lVar5 + 8);
      *(double *)(lVar5 + 0x10) = dVar18 + *(double *)(lVar5 + 0x10);
      *(double *)(lVar5 + 0x18) = dVar15 + *(double *)(lVar5 + 0x18);
    }
    UE::Geometry::Normalize<double>((TVector<double> *)(*(longlong *)this + 8),0.0);
  }
  else {
    uVar12 = *(uint *)((longlong)this + 0x18);
    plVar4 = *(longlong **)((longlong)this + 8);
    uVar13 = 0;
    if ((int)uVar12 < (int)plVar4[1]) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar12 = *(uint *)(*plVar4 + (longlong)(int)uVar12 * 4);
    uVar14 = (ulonglong)(uVar12 & 0x1ff);
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + uVar14 * 0x18);
    lVar6 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar2 = (double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    dVar20 = *(double *)(lVar5 + 0x10 + uVar14 * 0x18) -
             *(double *)(lVar6 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    dVar18 = *pdVar1 - *pdVar2;
    dVar16 = pdVar1[1] - pdVar2[1];
    dVar8 = 0.0;
    dVar15 = SQRT(dVar16 * dVar16 + dVar18 * dVar18 + dVar20 * dVar20);
    if (dVar15 <= 0.0) {
      dVar16 = 0.0;
      dVar18 = 0.0;
    }
    else {
      dVar15 = __real_3ff0000000000000 / dVar15;
      dVar16 = dVar16 * dVar15;
      dVar8 = dVar15 * dVar20;
      dVar18 = dVar18 * dVar15;
    }
    lVar5 = *(longlong *)this;
    *(double *)(lVar5 + 8) = dVar18;
    *(double *)(lVar5 + 0x10) = dVar16;
    *(double *)(lVar5 + 0x18) = dVar8;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6fc690

void * __thiscall
TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::_scalar_deleting_destructor_
          (TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID> *this,uint param_1)

{
  ~TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_U__TQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TAttrBasedQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::FullProjectionPass'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__FullProjectionPass___TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__MEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
            (*(FDynamicMeshInstance **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::GetBox'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::TestIntersection'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__UEBA_NPEBUFSkipTransparentMeshWrapper__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Geometry::FExtrudeBoundaryEdges::<lambda_29_>,0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Geometry::FExtrudeBoundaryEdges::<lambda_29_>,0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_FExtrudeBoundaryEdges_Geometry_UE___0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fc9f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshConstraintCurve,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::FMeshConstraintCurve,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fca30

void * __thiscall
UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::_scalar_deleting_destructor_
          (TMeshAABBTree3<FSkipTransparentMeshWrapper> *this,uint param_1)

{
  ~TMeshAABBTree3<FSkipTransparentMeshWrapper>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fca70

void * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
_scalar_deleting_destructor_
          (TMeshSimplification<UE::Geometry::TQuadricError<double>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcb60

void * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>::
_scalar_deleting_destructor_
          (TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcc50

void * __thiscall
UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
_scalar_deleting_destructor_
          (TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IsBoundaryVtxCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EdgeQueue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->EdgeQueue).nodes);
  pFVar1 = (this->EdgeQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->triAreas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->seamQuadrics).field_0x48 = 0;
  pvVar2 = *(void **)&(this->seamQuadrics).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->seamQuadrics);
  pFVar1 = (this->vertQuadrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcd40

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

void * __thiscall
UE::Geometry::FAverageOverlayToVertices::_scalar_deleting_destructor_
          (FAverageOverlayToVertices *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Selection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcd90

void * __thiscall
UE::Geometry::FDeformableEdgePath::_scalar_deleting_destructor_
          (FDeformableEdgePath *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FDeformableEdgePath_Geometry_UE__6B_;
  operator_delete__((this->JointAngleQueue).Heap);
  operator_delete__((this->JointAngleQueue).Keys);
  operator_delete__((this->JointAngleQueue).HeapIndexes);
  (this->JointAngleQueue).HeapNum = 0;
  (this->JointAngleQueue).HeapSize = 0;
  (this->JointAngleQueue).IndexSize = 0;
  (this->JointAngleQueue).Heap = (uint *)0x0;
  (this->JointAngleQueue).Keys = (double *)0x0;
  (this->JointAngleQueue).HeapIndexes = (uint *)0x0;
  TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::
  ~TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>(&this->PathJoints);
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EIDToSIDsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EIDToSIDsMap);
  FEdgePath::~FEdgePath(&this->EdgePath);
  IntrinsicCorrespondenceUtils::FNormalCoordinates::~FNormalCoordinates
            (&(this->EdgeFlipMesh).NormalCoordinates);
  FSimpleIntrinsicEdgeFlipMesh::~FSimpleIntrinsicEdgeFlipMesh
            ((FSimpleIntrinsicEdgeFlipMesh *)&this->EdgeFlipMesh);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fce80

void * __thiscall
UE::Geometry::FExtrudeBoundaryEdges::_scalar_deleting_destructor_
          (FExtrudeBoundaryEdges *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FExtrudeBoundaryEdges_Geometry_UE__6B_;
  pFVar1 = (this->NewExtrudedEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewTids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OffsetPositionFunc != 0) {
    plVar2 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
    plVar3 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->InputEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcf20

void * __thiscall
UE::Geometry::FExtrudeBoundaryEdgesFixLayout::_scalar_deleting_destructor_
          (FExtrudeBoundaryEdgesFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcf50

void * __thiscall
UE::Geometry::FExtrudeMesh::_scalar_deleting_destructor_(FExtrudeMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FExtrudeMesh_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
            ((FExtrusionInfo *)(this->Extrusions).AllocatorInstance.Data,(this->Extrusions).ArrayNum
            );
  pFVar1 = (this->Extrusions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ExtrudedPositionFunc != 0) {
    plVar2 = *(longlong **)&(this->ExtrudedPositionFunc).field_0x28;
    plVar3 = (longlong *)&(this->ExtrudedPositionFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fcfd0

void * __thiscall
UE::Geometry::FExtrudeMeshFixLayout::_scalar_deleting_destructor_
          (FExtrudeMeshFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd000

void * __thiscall
UE::Geometry::FGroupTopology::_scalar_deleting_destructor_(FGroupTopology *this,uint param_1)

{
  ~FGroupTopology(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd040

void * __thiscall
UE::Geometry::FInsetMeshRegion::_scalar_deleting_destructor_(FInsetMeshRegion *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FDynamicMeshChangeTracker *this_00;
  
  this->_padding_ = (longlong)&___7FInsetMeshRegion_Geometry_UE__6B_;
  pFVar1 = (this->AllModifiedTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FInsetMeshRegion::FInsetInfo,int>
            ((FInsetInfo *)(this->InsetRegions).AllocatorInstance.Data,(this->InsetRegions).ArrayNum
            );
  pFVar1 = (this->InsetRegions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->ChangeTracker).Ptr;
  if (this_00 != (FDynamicMeshChangeTracker *)0x0) {
    FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_00);
    ::operator_delete(this_00,0xa8);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd0e0

void * __thiscall
UE::Geometry::FJoinMeshLoops::_scalar_deleting_destructor_(FJoinMeshLoops *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
  pFVar1 = (this->QuadGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JoinTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JoinQuads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoopB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoopA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd180

void * __thiscall
UE::Geometry::FMeshAttributeTransfer::_scalar_deleting_destructor_
          (FMeshAttributeTransfer *this,uint param_1)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMeshAttributeTransfer_Geometry_UE__6B_;
  pTVar1 = (this->SourceSpatial).Ptr;
  if (pTVar1 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  pFVar2 = (this->Errors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd1f0

void * __thiscall
_anon_D86B23C6::FMeshBoundaryTopology::_scalar_deleting_destructor_
          (FMeshBoundaryTopology *this,uint param_1)

{
  UE::Geometry::FGroupTopology::~FGroupTopology((FGroupTopology *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd230

void * __thiscall
UE::Geometry::FMeshConstraintCurve::_scalar_deleting_destructor_
          (FMeshConstraintCurve *this,uint param_1)

{
  *(undefined ***)this = &___7IProjectionTarget_Geometry_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd280

void * __thiscall
UE::Geometry::FMeshRefinerBase::_scalar_deleting_destructor_(FMeshRefinerBase *this,uint param_1)

{
  ~FMeshRefinerBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd2c0

void * __thiscall
UE::Geometry::FMeshRefinerBaseFixLayout::_scalar_deleting_destructor_
          (FMeshRefinerBaseFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd2f0

void * __thiscall
UE::Geometry::FSimpleHoleFiller::_scalar_deleting_destructor_(FSimpleHoleFiller *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSimpleHoleFiller_Geometry_UE__6B_;
  pFVar1 = (this->Loop).BowtieVertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Loop).Edges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Loop).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd370

void * __thiscall
UE::Geometry::FTriangleGroupTopology::_scalar_deleting_destructor_
          (FTriangleGroupTopology *this,uint param_1)

{
  FGroupTopology::~FGroupTopology((FGroupTopology *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd3b0

void * __thiscall
UE::Geometry::FUniformTessellate::_scalar_deleting_destructor_
          (FUniformTessellate *this,uint param_1)

{
  ~FUniformTessellate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd3f0

void * __thiscall
UE::Geometry::IHoleFiller::_scalar_deleting_destructor_(IHoleFiller *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6fd440

void * __thiscall
UE::Geometry::IProjectionTarget::_scalar_deleting_destructor_(IProjectionTarget *this,uint param_1)

{
  *this = (IProjectionTarget)&___7IProjectionTarget_Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AppendInclusiveRangeWrapAround @ 14c700d50

void __cdecl
GroupEdgeInserterLocals::AppendInclusiveRangeWrapAround
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (ulonglong)(uint)param_3;
  if (((((param_4 < 0) || (param_1->ArrayNum <= param_4)) || (param_3 < 0)) ||
      (param_1->ArrayNum <= param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InclusiveEndIndex >= 0 && InclusiveEndIndex < InputArray.Num() && StartIndex >= 0 && StartIndex < InputArray.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x35d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  while (param_3 != param_4) {
    uVar8 = (uint)uVar3;
    uVar6 = 0;
    if ((int)uVar8 < param_1->ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4;
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar1
    ;
    uVar3 = (longlong)(int)(uVar8 + 1) % (longlong)param_1->ArrayNum;
    param_3 = (int)uVar3;
  }
  uVar8 = 0;
  if (param_4 < param_1->ArrayNum) {
    uVar8 = (uint)~param_4 >> 0x1f;
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
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)param_4 * 4;
  if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar1;
  return;
}

// ComputeNormalError @ 14c7238b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
`anonymous_namespace'::ComputeNormalError
          (FDynamicMesh3 *param_1,IOrientedProjectionTarget *param_2,FIndex3i *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_a8 [168];
  
  dVar14 = __real_3ff0000000000000;
  pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  uVar4 = (param_3->field0_0x0)._s_0.A;
  uVar16 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar16 * 0x18);
  dVar11 = *pdVar1;
  dVar22 = pdVar1[1];
  dVar17 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar16 * 0x18);
  uVar4 = (param_3->field0_0x0)._s_0.B;
  uVar16 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar16 * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar16 * 0x18);
  uVar4 = (param_3->field0_0x0)._s_0.C;
  dVar8 = dVar2 - dVar17;
  uVar16 = (ulonglong)(uVar4 & 0x1ff);
  dVar9 = dVar12 - dVar11;
  dVar21 = dVar13 - dVar22;
  auVar20 = *(undefined1 (*) [16])
             (*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar16 * 0x18);
  dVar3 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar16 * 0x18);
  dVar10 = auVar20._0_8_ - dVar11;
  dVar7 = auVar20._8_8_ - dVar22;
  local_c8 = (dVar11 + dVar12 + auVar20._0_8_) * __real_3fd5555555555555;
  dVar11 = dVar3 - dVar17;
  local_c0 = (dVar13 + dVar22 + auVar20._8_8_) * __real_3fd5555555555555;
  local_b8 = (dVar17 + dVar2 + dVar3) * __real_3fd5555555555555;
  dVar22 = dVar7 * dVar8 - dVar11 * dVar21;
  dVar3 = dVar11 * dVar9 - dVar10 * dVar8;
  auVar18._8_4_ = auVar20._8_4_;
  auVar18._0_8_ = dVar22;
  auVar18._12_4_ = auVar20._12_4_;
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = dVar22 * dVar22;
  dVar2 = dVar10 * dVar21 - dVar7 * dVar9;
  dVar17 = 0.0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar3 * dVar3 + auVar19._0_8_ + dVar2 * dVar2;
  auVar20 = sqrtpd(auVar19,auVar20);
  if (auVar20._0_8_ <= 0.0) {
    dVar3 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar7 = __real_3ff0000000000000 / auVar20._0_8_;
    dVar17 = dVar7 * dVar2;
    dVar3 = dVar7 * dVar3;
    dVar7 = dVar7 * dVar22;
  }
  local_e8 = ___xmm_46293e5939a08cea46293e5939a08cea;
  dStack_e0 = _UNK_1528c6bb8;
  local_d8 = __real_46293e5939a08cea;
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_a8,&local_c8,&local_e8,0xffffffff);
  dVar17 = (dVar14 - (dStack_e0 * dVar3 + local_e8 * dVar7 + local_d8 * dVar17)) *
           __real_3fe0000000000000;
  if (__real_be45798ee0000000 < dVar17) {
    if ((__real_3ff0000002af31dc <= dVar17) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Err < 1.0 + (1.e-8f)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                            ,0x237,L""), bVar15)) goto code_r0x00014c723b4c;
  }
  else {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Err > - (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                        ,0x236,L"");
    if (bVar15) {
code_r0x00014c723b4c:
      pcVar6 = (code *)swi(3);
      dVar17 = (double)(*pcVar6)();
      return dVar17;
    }
  }
  return dVar17;
}

// ComputeOpposingVert2d @ 14c723d40

TVector2<double> * __cdecl
`anonymous_namespace'::ComputeOpposingVert2d
          (TVector2<double> *__return_storage_ptr__,double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = ((param_2 - param_1) + param_3) * (param_1 + param_2 + param_3) *
          ((param_1 - param_2) + param_3) * ((param_1 + param_2) - param_3);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar1 = (SQRT(dVar1) * __real_3fe0000000000000) / param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  dVar1 = (param_3 - dVar1) * (dVar1 + param_3);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar1 = SQRT(dVar1);
  *(double *)&__return_storage_ptr__->field0_0x0 = dVar1;
  if (param_1 * param_1 + param_3 * param_3 < param_2 * param_2) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return __return_storage_ptr__;
}

// ConnectEndpoints @ 14c7250f0

bool __cdecl
GroupEdgeInserterLocals::ConnectEndpoints
          (FEdgeLoopInsertionParams *param_1,int param_2,FGroupBoundary *param_3,
          TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
          *param_4,TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
                   *param_5,int *param_6,FOptionalOutputParams *param_7,FProgressCancel *param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->Mode == Retriangulate) {
    bVar2 = ConnectMultipleUsingRetriangulation
                      (param_1->Mesh,param_1->Topology,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return bVar2;
  }
  if (param_1->Mode == PlaneCut) {
    bVar2 = ConnectMultipleUsingPlaneCut
                      (param_1->Mesh,param_1->Topology,param_2,param_3,param_4,param_5,
                       param_1->VertexTolerance,param_1->bSimplifyAlongPath,param_6,param_7,param_8)
    ;
    return bVar2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                     ,0x235,L"GroupEdgeInserter:ConnectEndpoints: Unimplemented insertion method.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// ConnectMultipleUsingPlaneCut @ 14c7251f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
GroupEdgeInserterLocals::ConnectMultipleUsingPlaneCut
          (FDynamicMesh3 *param_1,FGroupTopology *param_2,int param_3,FGroupBoundary *param_4,
          TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
          *param_5,TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
                   *param_6,double param_7,bool param_8,int *param_9,FOptionalOutputParams *param_10
          ,FProgressCancel *param_11)

{
  code *pcVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStackY_178 [32];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *param_9 = 0;
  if (param_11 == (FProgressCancel *)0x0) {
LAB_14c7252a7:
    uVar11 = 0;
    iVar4 = param_6->ArrayNum;
    if (param_5->ArrayNum < param_6->ArrayNum) {
      iVar4 = param_5->ArrayNum;
    }
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    if (0 < iVar4) {
      do {
        pTVar9 = param_10->ChangedTidsOut;
        uVar7 = 0;
        if ((int)uVar11 < param_6->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        pFVar3 = (param_6->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar11 < param_5->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        bVar5 = EmbedPlaneCutPath(param_1,param_2,param_3,
                                  (FGroupEdgeSplitPoint *)
                                  ((param_5->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x28)
                                  ,(FGroupEdgeSplitPoint *)(pFVar3 + (longlong)(int)uVar11 * 0x28),
                                  param_7,param_8,&local_f8,pTVar9,param_11);
        if (!bVar5) {
LAB_14c72547c:
          bVar5 = false;
          goto LAB_14c7254fe;
        }
        if (param_11 != (FProgressCancel *)0x0) {
          if (param_11->WasCancelled == false) {
            UE::Core::Private::Function::CheckCallable(*(void **)&param_11->CancelF);
            plVar2 = *(longlong **)&(param_11->CancelF).field_0x28;
            pcVar1 = *(code **)&param_11->CancelF;
            plVar10 = (longlong *)&(param_11->CancelF).field_0x10;
            if (plVar2 != (longlong *)0x0) {
              plVar10 = plVar2;
            }
            uVar8 = (**(code **)(*plVar10 + 8))();
            bVar5 = (bool)(*pcVar1)(uVar8);
            param_11->WasCancelled = bVar5;
            if (bVar5 == false) goto LAB_14c72546a;
          }
          goto LAB_14c72547c;
        }
LAB_14c72546a:
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar4);
    }
    if (param_10->NewEidsOut != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Union
                         (param_10->NewEidsOut,&local_a8,&local_f8);
      if (param_10->NewEidsOut != pTVar9) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(param_10->NewEidsOut,pTVar9);
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
    bVar5 = CreateNewGroups(param_1,&local_f8,param_3,param_9,param_10,param_11);
LAB_14c7254fe:
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
  }
  else {
    if (param_11->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_11->CancelF);
      pcVar1 = *(code **)&param_11->CancelF;
      plVar2 = *(longlong **)&(param_11->CancelF).field_0x28;
      plVar10 = (longlong *)&(param_11->CancelF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar10 = plVar2;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      bVar5 = (bool)(*pcVar1)(uVar8);
      param_11->WasCancelled = bVar5;
      if (bVar5 == false) goto LAB_14c7252a7;
    }
    bVar5 = false;
  }
  return bVar5;
}

// ConnectMultipleUsingRetriangulation @ 14c725570

bool __cdecl
GroupEdgeInserterLocals::ConnectMultipleUsingRetriangulation
          (FDynamicMesh3 *param_1,FGroupTopology *param_2,int param_3,FGroupBoundary *param_4,
          TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
          *param_5,TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
                   *param_6,int *param_7,FOptionalOutputParams *param_8,FProgressCancel *param_9)

{
  code *pcVar1;
  longlong *plVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  char cVar22;
  int local_res18;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  int local_80 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  longlong local_68;
  TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
  local_60;
  int local_50;
  int local_4c;
  int local_48 [4];
  
  *param_7 = 0;
  if (param_9 != (FProgressCancel *)0x0) {
    if (param_9->WasCancelled != false) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_9->CancelF);
    pcVar1 = *(code **)&param_9->CancelF;
    plVar2 = *(longlong **)&(param_9->CancelF).field_0x28;
    plVar14 = (longlong *)&(param_9->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar14 = plVar2;
    }
    uVar10 = (**(code **)(*plVar14 + 8))();
    bVar5 = (bool)(*pcVar1)(uVar10);
    param_9->WasCancelled = bVar5;
    if (bVar5 != false) {
      return false;
    }
  }
  uVar16 = 0;
  iVar9 = param_6->ArrayNum;
  if (param_5->ArrayNum < param_6->ArrayNum) {
    iVar9 = param_5->ArrayNum;
  }
  if (iVar9 == 0) {
    return true;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  local_50 = iVar9;
  bVar5 = DeleteGroupTrianglesAndGetLoop
                    (param_1,param_2,param_3,param_4,&local_78,&local_60,param_8,param_9);
  local_98 = (uint)bVar5;
  if ((!bVar5) ||
     ((param_9 != (FProgressCancel *)0x0 && (bVar5 = FProgressCancel::Cancelled(param_9), bVar5))))
  {
    uVar6 = 0;
    goto LAB_14c7265aa;
  }
  lVar11 = (longlong)iVar9;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar19 = uVar16;
  uVar21 = uVar16;
  local_68 = lVar11;
  if (0 < iVar9) {
    do {
      uVar17 = (uint)uVar19;
      uVar15 = ~uVar17 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar17 < param_5->ArrayNum) {
        uVar18 = uVar15;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      if ((param_5->AllocatorInstance).Data[uVar16 + 4] == (FScriptContainerElement)0x0) {
LAB_14c725778:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartPoints[i].bIsVertex && EndPoints[i].bIsVertex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                           ,0x270,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
      }
      else {
        uVar18 = 0;
        if ((int)uVar17 < param_6->ArrayNum) {
          uVar18 = uVar15;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        if ((param_6->AllocatorInstance).Data[uVar16 + 4] == (FScriptContainerElement)0x0)
        goto LAB_14c725778;
      }
      uVar18 = 0;
      if ((int)uVar17 < param_5->ArrayNum) {
        uVar18 = uVar15;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      if (local_78.AllocatorInstance.Data !=
          local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 4) {
        FVar12.Data = local_78.AllocatorInstance.Data;
        do {
          if (*(int *)FVar12.Data == *(int *)((param_5->AllocatorInstance).Data + uVar16)) {
            local_94 = (int)((longlong)FVar12.Data - (longlong)local_78.AllocatorInstance.Data >> 2)
            ;
            goto LAB_14c725816;
          }
          FVar12.Data = FVar12.Data + 4;
        } while (FVar12.Data != local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 4);
      }
      local_94 = -1;
LAB_14c725816:
      uVar18 = 0;
      if ((int)uVar17 < param_6->ArrayNum) {
        uVar18 = uVar15;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      if (local_78.AllocatorInstance.Data !=
          local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 4) {
        FVar12.Data = local_78.AllocatorInstance.Data;
        do {
          if (*(int *)FVar12.Data == *(int *)((param_6->AllocatorInstance).Data + uVar16)) {
            local_80[0] = (int)((longlong)FVar12.Data - (longlong)local_78.AllocatorInstance.Data >>
                               2);
            goto LAB_14c72588a;
          }
          FVar12.Data = FVar12.Data + 4;
        } while (FVar12.Data != local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 4);
      }
      local_80[0] = -1;
LAB_14c72588a:
      if (((local_94 == -1) || (local_80[0] == -1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex != INDEX_NONE && EndIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                             ,0x274,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      if (((local_b8.Data <= (FScriptContainerElement *)&local_94) &&
          ((FScriptContainerElement *)&local_94 < local_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      if ((int)local_b0 == local_b0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_b8,(int *)((longlong)&local_b0 + 4));
        local_b0 = CONCAT44(local_b0._4_4_,iVar9);
      }
      lVar13 = (longlong)(int)local_b0;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
      *(int *)(local_b8.Data + lVar13 * 4) = local_94;
      if (((local_a8.Data <= (FScriptContainerElement *)local_80) &&
          ((FScriptContainerElement *)local_80 < local_a8.Data + (longlong)local_a0._4_4_ * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      iVar9 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar9 + 1);
      uVar21 = uVar21 + 1;
      uVar16 = uVar16 + 0x28;
      *(int *)(local_a8.Data + (longlong)iVar9 * 4) = local_80[0];
      uVar19 = (ulonglong)(uVar17 + 1);
      iVar9 = local_50;
    } while ((longlong)uVar21 < lVar11);
  }
  uVar18 = 1;
  if (iVar9 < 2) {
LAB_14c725b5b:
    bVar5 = false;
  }
  else {
    iVar9 = local_78.ArrayNum;
    if (((int)local_b0 < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    FVar12.Data = local_b8.Data;
    if (((int)local_b0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    FVar3.Data = local_b8.Data;
    if (((int)local_a0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    FVar4.Data = local_a8.Data;
    if (((int)local_b0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    if (((*(int *)(FVar12.Data + 4) - *(int *)FVar3.Data) + iVar9) % local_78.ArrayNum <=
        ((local_78.ArrayNum - *(int *)local_b8.Data) + *(int *)FVar4.Data) % local_78.ArrayNum)
    goto LAB_14c725b5b;
    bVar5 = true;
  }
  if ((param_9 == (FProgressCancel *)0x0) || (bVar7 = FProgressCancel::Cancelled(param_9), !bVar7))
  {
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    if (bVar5) {
      if (((int)local_a0 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      iVar9 = *(int *)local_a8.Data;
      FVar12.Data = local_b8.Data;
      if (((int)local_b0 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar12.Data = local_b8.Data, bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    else {
      if (((int)local_b0 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      iVar9 = *(int *)local_b8.Data;
      FVar12.Data = local_a8.Data;
      if (((int)local_a0 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar12.Data = local_a8.Data, bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    AppendInclusiveRangeWrapAround(&local_78,&local_90,*(int *)FVar12.Data,iVar9);
    iVar9 = local_90.ArrayNum;
    if (2 < local_90.ArrayNum) {
      bVar7 = RetriangulateLoop(param_1,&local_90,param_3,&local_60);
      local_98 = (uint)bVar7;
      *param_7 = *param_7 + local_98;
    }
    cVar22 = (char)local_98;
    bVar7 = 2 < iVar9;
    if (1 < local_68) {
      lVar11 = 1;
      do {
        if ((char)local_98 == '\0') goto LAB_14c726577;
        if (param_9 != (FProgressCancel *)0x0) {
          if (param_9->WasCancelled != false) goto LAB_14c726577;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_9->CancelF);
          plVar2 = *(longlong **)&(param_9->CancelF).field_0x28;
          pcVar1 = *(code **)&param_9->CancelF;
          plVar14 = (longlong *)&(param_9->CancelF).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar14 = plVar2;
          }
          uVar10 = (**(code **)(*plVar14 + 8))();
          bVar8 = (bool)(*pcVar1)(uVar10);
          param_9->WasCancelled = bVar8;
          if (bVar8 != false) goto LAB_14c726577;
        }
        uVar15 = 0;
        if ((int)(uVar18 - 1) < (int)local_b0) {
          uVar15 = -uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        FVar12.Data = local_b8.Data;
        uVar15 = 0;
        if ((int)uVar18 < (int)local_b0) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        if (*(int *)(FVar12.Data + lVar11 * 4 + -4) == *(int *)(local_b8.Data + lVar11 * 4)) {
          uVar15 = 0;
          if ((int)(uVar18 - 1) < (int)local_a0) {
            uVar15 = -uVar18 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          FVar12.Data = local_a8.Data;
          uVar15 = 0;
          if ((int)uVar18 < (int)local_a0) {
            uVar15 = ~uVar18 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          if (*(int *)(FVar12.Data + lVar11 * 4 + -4) != *(int *)(local_a8.Data + lVar11 * 4))
          goto LAB_14c725ff2;
        }
        else {
LAB_14c725ff2:
          uVar10 = local_90._8_8_;
          iVar9 = local_90.ArrayMax;
          local_90._8_8_ = (ulonglong)(uint)local_90.ArrayMax << 0x20;
          if (((longlong)uVar10 < 0) && (iVar9 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_90.AllocatorInstance,0,&local_90.ArrayMax);
          }
          if (bVar5) {
            uVar15 = 0;
            if ((int)(uVar18 - 1) < (int)local_b0) {
              uVar15 = -uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            iVar9 = *(int *)(local_b8.Data + lVar11 * 4 + -4);
            uVar15 = 0;
            if ((int)uVar18 < (int)local_b0) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            AppendInclusiveRangeWrapAround
                      (&local_78,&local_90,*(int *)(local_b8.Data + lVar11 * 4),iVar9);
            uVar15 = 0;
            if ((int)uVar18 < (int)local_a0) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
            }
            iVar9 = *(int *)(local_a8.Data + lVar11 * 4);
            uVar15 = 0;
            if ((int)(uVar18 - 1) < (int)local_a0) {
              uVar15 = -uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            iVar20 = *(int *)(local_a8.Data + lVar11 * 4 + -4);
          }
          else {
            uVar15 = 0;
            if ((int)uVar18 < (int)local_b0) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            iVar9 = *(int *)(local_b8.Data + lVar11 * 4);
            uVar15 = 0;
            if ((int)(uVar18 - 1) < (int)local_b0) {
              uVar15 = -uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            AppendInclusiveRangeWrapAround
                      (&local_78,&local_90,*(int *)(local_b8.Data + lVar11 * 4 + -4),iVar9);
            uVar15 = 0;
            if ((int)(uVar18 - 1) < (int)local_a0) {
              uVar15 = -uVar18 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return (bool)uVar6;
              }
            }
            iVar9 = *(int *)(local_a8.Data + lVar11 * 4 + -4);
            uVar15 = 0;
            if ((int)uVar18 < (int)local_a0) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            iVar20 = *(int *)(local_a8.Data + lVar11 * 4);
          }
          AppendInclusiveRangeWrapAround(&local_78,&local_90,iVar20,iVar9);
          iVar9 = param_3;
          if (bVar7) {
            iVar9 = param_1->GroupIDCounter;
            param_1->GroupIDCounter = iVar9 + 1;
          }
          bVar8 = RetriangulateLoop(param_1,&local_90,iVar9,&local_60);
          bVar7 = true;
          local_98 = (uint)bVar8;
          *param_7 = *param_7 + (uint)bVar8;
        }
        cVar22 = (char)local_98;
        uVar18 = uVar18 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_68);
    }
    lVar11 = local_68;
    if (cVar22 == '\0') {
LAB_14c726577:
      uVar18 = 0;
    }
    else {
      if (param_9 != (FProgressCancel *)0x0) {
        if (param_9->WasCancelled == false) {
          UE::Core::Private::Function::CheckCallable(*(void **)&param_9->CancelF);
          pcVar1 = *(code **)&param_9->CancelF;
          plVar2 = *(longlong **)&(param_9->CancelF).field_0x28;
          plVar14 = (longlong *)&(param_9->CancelF).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar14 = plVar2;
          }
          uVar10 = (**(code **)(*plVar14 + 8))();
          bVar8 = (bool)(*pcVar1)(uVar10);
          param_9->WasCancelled = bVar8;
          if (bVar8 == false) goto LAB_14c725ef4;
        }
        goto LAB_14c726577;
      }
LAB_14c725ef4:
      uVar10 = local_90._8_8_;
      iVar9 = local_90.ArrayMax;
      local_90._8_8_ = (ulonglong)(uint)local_90.ArrayMax << 0x20;
      if (((longlong)uVar10 < 0) && (iVar9 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_90.AllocatorInstance,0,&local_90.ArrayMax);
      }
      if (bVar5) {
        uVar18 = 0;
        if ((int)((int)local_b0 - 1U) < (int)local_b0) {
          uVar18 = ~((int)local_b0 - 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        iVar9 = *(int *)(local_b8.Data + (longlong)((int)local_b0 + -1) * 4);
        uVar18 = 0;
        if ((int)((int)local_a0 - 1U) < (int)local_a0) {
          uVar18 = ~((int)local_a0 - 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        FVar12.Data = local_a8.Data;
        iVar20 = (int)local_a0;
      }
      else {
        uVar18 = 0;
        if ((int)((int)local_a0 - 1U) < (int)local_a0) {
          uVar18 = ~((int)local_a0 - 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        iVar9 = *(int *)(local_a8.Data + (longlong)((int)local_a0 + -1) * 4);
        uVar18 = 0;
        if ((int)((int)local_b0 - 1U) < (int)local_b0) {
          uVar18 = ~((int)local_b0 - 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        FVar12.Data = local_b8.Data;
        iVar20 = (int)local_b0;
      }
      AppendInclusiveRangeWrapAround
                (&local_78,&local_90,*(int *)(FVar12.Data + (longlong)(iVar20 + -1) * 4),iVar9);
      if (2 < local_90.ArrayNum) {
        local_res18 = param_3;
        if (bVar7) {
          local_res18 = param_1->GroupIDCounter;
          param_1->GroupIDCounter = local_res18 + 1;
        }
        bVar5 = RetriangulateLoop(param_1,&local_90,local_res18,&local_60);
        local_98 = (uint)bVar5;
        *param_7 = *param_7 + (uint)bVar5;
      }
      uVar18 = local_98;
      if ((param_8->NewEidsOut != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
         (uVar15 = 0, 0 < lVar11)) {
        lVar11 = 0;
        do {
          this = param_8->NewEidsOut;
          uVar18 = 0;
          if ((int)uVar15 < param_6->ArrayNum) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          iVar9 = *(int *)((param_6->AllocatorInstance).Data + lVar11);
          uVar18 = 0;
          if ((int)uVar15 < param_5->ArrayNum) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          local_4c = UE::Geometry::FDynamicMesh3::FindEdge
                               (param_1,*(int *)((param_5->AllocatorInstance).Data + lVar11),iVar9);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    (this,local_48,(bool *)&local_4c);
          uVar15 = uVar15 + 1;
          lVar11 = lVar11 + 0x28;
          local_68 = local_68 + -1;
        } while (local_68 != 0);
        local_68 = 0;
        uVar18 = local_98;
      }
    }
    uVar6 = (undefined1)uVar18;
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  else {
    uVar6 = 0;
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
LAB_14c7265aa:
  DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
            ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
              *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
  if ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
       *)local_60.AllocatorInstance.Data !=
      (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
       *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return (bool)uVar6;
}

// ConvertProportionsToArcLengths @ 14c727460

void __cdecl
GroupEdgeInserterLocals::ConvertProportionsToArcLengths
          (FGroupTopology *param_1,int param_2,TArray<double,TSizedDefaultAllocator<32>_> *param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<double,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res18 [8];
  double local_38 [4];
  
  uVar3 = param_3->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&param_4->AllocatorInstance,0,piVar1);
  }
  dVar10 = UE::Geometry::FGroupTopology::GetEdgeArcLength(param_1,param_2,param_5);
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar4 = param_3->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar2) break;
    pFVar5 = (param_4->AllocatorInstance).Data;
    local_38[0] = dVar10 * *(double *)pFVar9;
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar8 + 1;
    pFVar9 = pFVar9 + 8;
    *(double *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
  }
  return;
}

// CountAllGroups @ 14c727710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FaceGroupUtil::CountAllGroups
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,param_1->GroupIDCounter,Default);
  if ((param_1->TriangleGroups).bIsSet != false) {
    iVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar7 = 0;
    if (0 < iVar5) {
      uVar8 = 0;
      do {
        if ((int)uVar7 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar7 >> 9) * 8) +
                                 (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
            if ((param_1->TriangleGroups).bIsSet == false) {
              uVar6 = 0xffffffff;
LAB_14c7277f5:
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              uVar6 = *(uint *)(*(longlong *)
                                 ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4);
              uVar4 = 0;
              if ((int)uVar6 < param_2->ArrayNum) {
                uVar4 = ~uVar6 >> 0x1f;
              }
              if (uVar4 == 0) goto LAB_14c7277f5;
            }
            pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4;
            *(int *)pFVar1 = *(int *)pFVar1 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar7 < iVar5);
    }
  }
  return;
}

// CreateNewGroups @ 14c728f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
GroupEdgeInserterLocals::CreateNewGroups
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          int param_3,int *param_4,FOptionalOutputParams *param_5,FProgressCancel *param_6)

{
  undefined1 *puVar1;
  bool *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  uint uVar8;
  FProgressCancel *pFVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  bool *pbVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined1 local_197 [3];
  uint local_194;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_190;
  undefined8 local_188;
  FMeshConnectedComponents local_180;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  FProgressCancel *local_120;
  FOptionalOutputParams *local_118;
  int *local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FDynamicMesh3 *local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a8;
  undefined8 local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_120 = param_6;
  local_118 = param_5;
  iVar22 = 0;
  *param_4 = 0;
  local_194 = param_3;
  local_190 = param_2;
  local_110 = param_4;
  if (param_6 != (FProgressCancel *)0x0) {
    if (param_6->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_6->CancelF);
      pcVar5 = *(code **)&param_6->CancelF;
      plVar6 = *(longlong **)&(param_6->CancelF).field_0x28;
      plVar17 = (longlong *)&(param_6->CancelF).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar17 = plVar6;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      bVar11 = (bool)(*pcVar5)(uVar14);
      param_6->WasCancelled = bVar11;
      if (bVar11 == false) goto LAB_14c728fdc;
    }
    return false;
  }
LAB_14c728fdc:
  uStack_15c = 1;
  puVar1 = &(param_2->Elements).field_0x10;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_148 = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  iVar13 = *(int *)&(param_2->Elements).field_0x28;
  iStack_14c = local_148;
  if (iVar13 != 0) {
    puVar24 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar21 = *puVar24;
    local_148 = 0;
    iVar22 = 0;
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar22;
      local_148 = local_148 + 0x20;
      iVar22 = iVar22 + 1;
      iStack_14c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14c72909d;
      uVar21 = puVar24[lVar16 + 1];
    }
    uStack_15c = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_15c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_138 = (int)lVar16;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar13 < iStack_14c) {
      iStack_14c = iVar13;
    }
  }
LAB_14c72909d:
  uVar21 = *(uint *)&(param_2->Elements).field_0x28;
  iStack_140 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar25 = uVar21 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_15c,iVar22);
  uStack_150 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_14c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar21 >> 5;
  TStack_100._28_4_ = iStack_14c;
  TStack_100.BaseBitIndex = local_148;
  uStack_e0 = CONCAT44(uStack_13c,iStack_140);
  local_168 = param_2;
  iStack_160 = iVar22;
  local_158 = puVar1;
  iStack_144 = iStack_14c;
  local_108 = param_2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar13 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pTVar7 = local_190;
  uVar8 = local_194;
  uVar4 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar21 != uVar4) {
    puVar23 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar18;
      uVar25 = uVar25 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14c7291b0;
      uVar21 = *(uint *)(puVar23 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_134 = (int)lVar16;
    uVar21 = local_134 + -1 + uVar25;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_14c7291b0:
  do {
    pTVar10 = local_108;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_198 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_198);
    }
    if (((TStack_100.CurrentBitIndex == uVar21) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar7)
       ) break;
    uVar25 = *(uint *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_100.CurrentBitIndex * 0xc)
    ;
    local_188 = *(ulonglong *)
                 (*(longlong *)
                   ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8) +
                  8 + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    uVar25 = (uint)local_188;
    if ((param_1->TriangleGroups).bIsSet == false) {
      uVar25 = 0xffffffff;
    }
    else if ((((int)uVar25 < 0) ||
             ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar25)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data +
                                           ((local_188 & 0xffffffff) >> 9) * 8) +
                                         (ulonglong)(uVar25 & 0x1ff) * 2) - 1U))) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(uint *)(*(longlong *)
                          ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                          ((local_188 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
    }
    if (uVar25 == uVar8) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_98,&local_130,(bool *)&local_188);
    }
    if (local_188._4_4_ != 0xffffffff) {
      if ((param_1->TriangleGroups).bIsSet == false) {
        uVar25 = 0xffffffff;
      }
      else {
        if ((-1 < (longlong)local_188) &&
           ((int)local_188._4_4_ <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar16 = (ulonglong)(local_188._4_4_ >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar16) + (ulonglong)(local_188._4_4_ & 0x1ff) * 2) - 1U)
              < 0xfffe) {
            uVar25 = *(uint *)(*(longlong *)
                                ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + lVar16) + (ulonglong)(local_188._4_4_ & 0x1ff) * 4);
            goto LAB_14c729316;
          }
        }
        uVar25 = 0;
      }
LAB_14c729316:
      if (uVar25 == uVar8) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,&local_12c,(bool *)((longlong)&local_188 + 4));
      }
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`GroupEdgeInserterLocals::CreateNewGroups'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_180.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`GroupEdgeInserterLocals::CreateNewGroups'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_180.Components.Array.ArrayNum = 0;
  local_180.Components.Array.ArrayMax = 0;
  local_a0 = 0;
  local_a8 = pTVar7;
  local_180.Mesh = param_1;
  local_b0 = param_1;
  pTVar15 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_98,&local_d8);
  UE::Geometry::FMeshConnectedComponents::FindTrianglesConnectedToSeeds
            (&local_180,pTVar15,(TFunction<bool___cdecl(int,int)> *)local_c8);
  pFVar9 = local_120;
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (pFVar9 == (FProgressCancel *)0x0) {
LAB_14c7293f6:
    local_194 = 1;
    if (1 < local_180.Components.Array.ArrayNum) {
      local_190 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_00000008;
      do {
        pTVar7 = local_190;
        uVar21 = 0;
        if ((int)local_194 < local_180.Components.Array.ArrayNum) {
          uVar21 = ~local_194 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_1a8 = (longlong)(int)local_194;
          local_1a0 = (longlong)local_180.Components.Array.ArrayNum;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
        }
        plVar6 = *(longlong **)
                  (local_180.Components.Array.AllocatorInstance.Data + (longlong)pTVar7);
        pTVar7 = local_118->ChangedTidsOut;
        if (pTVar7 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          iVar22 = (int)plVar6[1];
          pbVar19 = (bool *)*plVar6;
          if ((iVar22 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
          uVar21 = *(int *)&(pTVar7->Elements).field_0x8 - *(int *)&(pTVar7->Elements).field_0x34;
          uVar25 = uVar21 + iVar22;
          if (uVar21 < uVar25) {
            if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar7,uVar25);
            if (uVar25 < 4) {
              iVar13 = 1;
            }
            else {
              uVar3 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_128 = (undefined4)lVar16;
              iVar13 = 1 << ((byte)lVar16 & 0x1f);
            }
            if ((pTVar7->HashSize == 0) || (pTVar7->HashSize < iVar13)) {
              pTVar7->HashSize = iVar13;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar7);
            }
          }
          pbVar2 = pbVar19 + (longlong)iVar22 * 4;
          for (; pbVar19 != pbVar2; pbVar19 = pbVar19 + 4) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (pTVar7,&local_124,pbVar19);
          }
        }
        iVar13 = param_1->GroupIDCounter;
        iVar22 = iVar13 + 1;
        param_1->GroupIDCounter = iVar22;
        puVar20 = (uint *)*plVar6;
        lVar16 = plVar6[1];
        puVar24 = puVar20 + (int)lVar16;
        while( true ) {
          if ((int)plVar6[1] != (int)lVar16) {
            local_197[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_197);
          }
          if (puVar20 == puVar24) break;
          if ((param_1->TriangleGroups).bIsSet != false) {
            *(int *)(*(longlong *)
                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(*puVar20 >> 9) * 8) + (ulonglong)(*puVar20 & 0x1ff) * 4) = iVar13;
            iVar18 = iVar22;
            if (iVar22 < param_1->GroupIDCounter) {
              iVar18 = param_1->GroupIDCounter;
            }
            param_1->GroupIDCounter = iVar18;
          }
          puVar20 = puVar20 + 1;
        }
        local_194 = local_194 + 1;
        local_190 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)local_190 + 8);
      } while ((int)local_194 < local_180.Components.Array.ArrayNum);
    }
    bVar11 = true;
    *local_110 = local_180.Components.Array.ArrayNum;
  }
  else {
    if (pFVar9->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar9->CancelF);
      pcVar5 = *(code **)&pFVar9->CancelF;
      plVar6 = *(longlong **)&(pFVar9->CancelF).field_0x28;
      plVar17 = (longlong *)&(pFVar9->CancelF).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar17 = plVar6;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      bVar11 = (bool)(*pcVar5)(uVar14);
      pFVar9->WasCancelled = bVar11;
      if (bVar11 == false) goto LAB_14c7293f6;
    }
    bVar11 = false;
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_180.Components);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return bVar11;
}

// DeleteGroupTrianglesAndGetLoop @ 14c72a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop
          (FDynamicMesh3 *param_1,FGroupTopology *param_2,int param_3,FGroupBoundary *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_6,FOptionalOutputParams *param_7,FProgressCancel *param_8)

{
  undefined8 *puVar1;
  uint *puVar2;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  FDynamicMesh3 *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  TDynamicMeshOverlay<float,2> *pTVar17;
  TArrayView<int_const_,int> *pTVar18;
  ulonglong uVar19;
  byte bVar20;
  longlong *plVar21;
  FDynamicMeshAttributeSet *pFVar22;
  uint uVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar33;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_350;
  undefined8 local_340;
  FDynamicMesh3 *local_338;
  TArray<int,TSizedDefaultAllocator<32>_> local_330;
  uint local_320;
  uint uStack_31c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_318;
  undefined4 local_310;
  uint uStack_30c;
  uint uStack_308;
  undefined4 uStack_304;
  int local_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f8;
  undefined4 local_2f0;
  uint uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  FProgressCancel *local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2d8;
  undefined8 uStack_2d0;
  TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
  *local_2c8;
  FMeshConnectedComponents local_2c0;
  undefined4 local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  int local_29c;
  FOptionalOutputParams *local_298;
  FDynamicMeshEditor local_290;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  FSparseArrayAllocationInfo local_228;
  TArrayView<int_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  code *local_1f8 [2];
  undefined **local_1e8;
  FDynamicMesh3 *local_1e0;
  undefined8 local_1d0;
  TArrayView<int_const_,int> local_1c8;
  TArrayView<int_const_,int> local_1b8;
  TArrayView<int_const_,int> local_1a8;
  FMeshRegionBoundaryLoops local_198;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_2c8 = param_6;
  local_2e0 = param_8;
  local_298 = param_7;
  local_338 = param_1;
  if (param_8 != (FProgressCancel *)0x0) {
    if (param_8->WasCancelled != false) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_8->CancelF);
    pcVar3 = *(code **)&param_8->CancelF;
    plVar4 = *(longlong **)&(param_8->CancelF).field_0x28;
    plVar21 = (longlong *)&(param_8->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar21 = plVar4;
    }
    uVar15 = (**(code **)(*plVar21 + 8))();
    bVar10 = (bool)(*pcVar3)(uVar15);
    param_8->WasCancelled = bVar10;
    if (bVar10 != false) {
      return false;
    }
  }
  if (((param_4->GroupEdges).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  uVar27 = *(uint *)(param_4->GroupEdges).AllocatorInstance.Data;
  uVar23 = 0;
  if ((int)uVar27 < (param_2->Edges).ArrayNum) {
    uVar23 = ~uVar27 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  pFVar5 = (param_2->Edges).AllocatorInstance.Data;
  if ((*(int *)(pFVar5 + (longlong)(int)uVar27 * 0x50 + 0x28) < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  this_00 = local_338;
  uVar27 = **(uint **)(pFVar5 + (longlong)(int)uVar27 * 0x50 + 0x20);
  puVar1 = (undefined8 *)
           (*(longlong *)
             ((local_338->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8) +
           (ulonglong)(uVar27 & 0x1ff) * 0x10);
  local_2d8 = (TArray<int,TSizedDefaultAllocator<32>_> *)*puVar1;
  local_340 = puVar1[1];
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayNum = 0;
  local_350.ArrayMax = 0;
  uStack_2d0 = local_340;
  iVar12 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(local_338,(int)local_340);
  if (iVar12 == param_3) {
    if (((local_350.AllocatorInstance.Data <= (FScriptContainerElement *)&local_340) &&
        ((FScriptContainerElement *)&local_340 <
         local_350.AllocatorInstance.Data + (longlong)local_350.ArrayMax * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar12 = local_350.ArrayNum;
    if (local_350.ArrayNum == local_350.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_350.AllocatorInstance,&local_350.ArrayMax);
    }
    local_350.ArrayNum = iVar12 + 1;
    uVar13 = (undefined4)local_340;
  }
  else {
    if (((local_340._4_4_ == -1) ||
        (iVar12 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,local_340._4_4_),
        iVar12 != param_3)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("PotentialSeedTriangles.B != FDynamicMesh3::InvalidID && Mesh.GetTriangleGroup(PotentialSeedTriangles.B) == GroupID"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                            ,0x2f8,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    if (((local_350.AllocatorInstance.Data <= (FScriptContainerElement *)((longlong)&local_340 + 4U)
         ) && ((FScriptContainerElement *)((longlong)&local_340 + 4U) <
               local_350.AllocatorInstance.Data + (longlong)local_350.ArrayMax * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar12 = local_350.ArrayNum;
    if (local_350.ArrayNum == local_350.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_350.AllocatorInstance,&local_350.ArrayMax);
    }
    local_350.ArrayNum = iVar12 + 1;
    uVar13 = local_340._4_4_;
  }
  *(undefined4 *)(local_350.AllocatorInstance.Data + (longlong)iVar12 * 4) = uVar13;
  iVar12 = 0;
  local_2c0.Mesh = this_00;
  local_2c0.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_2c0.Components.Array.ArrayNum = 0;
  local_2c0.Components.Array.ArrayMax = 0;
  local_1f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_1>,bool,int,int>
                 ::Call;
  local_1d0 = 0;
  local_1e0 = this_00;
  UE::Geometry::FMeshConnectedComponents::FindTrianglesConnectedToSeeds
            (&local_2c0,&local_350,(TFunction<bool___cdecl(int,int)> *)local_1f8);
  if (param_8 != (FProgressCancel *)0x0) {
    if (param_8->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_8->CancelF);
      pcVar3 = *(code **)&param_8->CancelF;
      plVar4 = *(longlong **)&(param_8->CancelF).field_0x28;
      plVar21 = (longlong *)&(param_8->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar21 = plVar4;
      }
      uVar15 = (**(code **)(*plVar21 + 8))();
      bVar10 = (bool)(*pcVar3)(uVar15);
      param_8->WasCancelled = bVar10;
      if (bVar10 == false) goto LAB_14c72aba3;
    }
    bVar10 = false;
    goto LAB_14c72b784;
  }
LAB_14c72aba3:
  if ((local_2c0.Components.Array.ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  pTVar29 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
             local_2c0.Components.Array.AllocatorInstance.Data;
  local_2d8 = pTVar29;
  UE::Geometry::FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops(&local_198,this_00,pTVar29,true);
  FVar28.Data = local_198.Loops.AllocatorInstance.Data;
  if ((local_198.bFailed == false) && (local_198.Loops.ArrayNum == 1)) {
    AlgoImpl::Reverse<int>
              (*(int **)(local_198.Loops.AllocatorInstance.Data + 8),
               *(int *)(local_198.Loops.AllocatorInstance.Data + 0x10));
    AlgoImpl::Reverse<int>(*(int **)(FVar28.Data + 0x18),*(int *)(FVar28.Data + 0x20));
    if ((local_198.Loops.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (param_5,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       (local_198.Loops.AllocatorInstance.Data + 8));
    pFVar6 = (this_00->AttributeSet).Ptr;
    if ((pFVar6 != (FDynamicMeshAttributeSet *)0x0) &&
       (iVar14 = (**(code **)(pFVar6->_padding_ + 0xa8))(pFVar6), pTVar9 = local_2c8,
       pTVar29 = local_2d8, 0 < iVar14)) {
      do {
        iVar14 = pTVar9->ArrayNum;
        if (iVar14 == pTVar9->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        lVar16 = (longlong)iVar14;
        pTVar9->ArrayNum = iVar14 + 1;
        pFVar5 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x10) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x18) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x38) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x48) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 8) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x20) = 0;
        *(undefined4 *)(pFVar5 + lVar16 * 0x50 + 0x28) = 0;
        *(undefined4 *)(pFVar5 + lVar16 * 0x50 + 0x2c) = 0x80;
        *(undefined4 *)(pFVar5 + lVar16 * 0x50 + 0x30) = 0xffffffff;
        *(undefined4 *)(pFVar5 + lVar16 * 0x50 + 0x34) = 0;
        *(undefined8 *)(pFVar5 + lVar16 * 0x50 + 0x40) = 0;
        uVar23 = pTVar9->ArrayNum - 1;
        uVar27 = 0;
        if ((int)uVar23 < pTVar9->ArrayNum) {
          uVar27 = ~uVar23 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        iVar14 = pTVar9->ArrayNum;
        pFVar7 = (this_00->AttributeSet).Ptr;
        pFVar5 = (pTVar9->AllocatorInstance).Data;
        pFVar22 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar22 = pFVar7;
        }
        pTVar17 = (TDynamicMeshOverlay<float,2> *)
                  UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar22,iVar12);
        if ((local_198.Loops.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        UE::Geometry::FMeshRegionBoundaryLoops::
        GetLoopOverlayMap<float,2,UE::Math::TVector2<float>_>
                  (&local_198,(FEdgeLoop *)local_198.Loops.AllocatorInstance.Data,pTVar17,
                   (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                    *)(pFVar5 + (longlong)(iVar14 + -1) * 0x50));
        iVar12 = iVar12 + 1;
        iVar14 = (**(code **)(pFVar6->_padding_ + 0xa8))(pFVar6);
        pTVar29 = local_2d8;
        param_8 = local_2e0;
        param_7 = local_298;
      } while (iVar12 < iVar14);
    }
    uVar25 = 0;
    if ((param_8 != (FProgressCancel *)0x0) &&
       (bVar10 = FProgressCancel::Cancelled(param_8), bVar10)) goto LAB_14c72b776;
    this = param_7->ChangedTidsOut;
    if (this != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      pTVar18 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&local_1c8,pTVar29);
      local_218.DataPtr = pTVar18->DataPtr;
      local_218.ArrayNum = pTVar18->ArrayNum;
      local_218._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(this,&local_218);
    }
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    pTVar18 = TArrayView<int_const_,int>::
              TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                        (&local_1b8,pTVar29);
    local_208.DataPtr = pTVar18->DataPtr;
    local_208.ArrayNum = pTVar18->ArrayNum;
    local_208._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    UE::Geometry::TriangleToVertexIDs(this_00,&local_208,&local_330);
    if ((local_198.Loops.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    pTVar18 = TArrayView<int_const_,int>::
              TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                        (&local_1a8,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)
                         (local_198.Loops.AllocatorInstance.Data + 8));
    local_288 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar18->DataPtr;
    uVar27 = pTVar18->ArrayNum;
    uStack_27c = *(undefined4 *)&pTVar18->field_0xc;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.AllocationFlags.NumBits = 0;
    local_98.AllocationFlags.MaxBits = 0x80;
    local_98.FirstFreeIndex = -1;
    local_98.NumFreeIndices = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    uStack_280 = uVar27;
    if (uVar27 != 0) {
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve(&local_98,uVar27);
      uVar23 = 1;
      if (3 < uVar27) {
        uVar31 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2a8 = (undefined4)lVar16;
        uVar23 = 1 << ((byte)lVar16 & 0x1f);
      }
      if ((local_50 == 0) || ((int)local_50 < (int)uVar23)) {
        local_50 = uVar23;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar23 != 0) {
          uVar26 = uVar23;
          if (uVar23 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar26 = 0;
              goto LAB_14c72afed;
            }
          }
          else {
LAB_14c72afed:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar26,4);
          }
          if (0 < (int)uVar23) {
            uVar32 = (ulonglong)uVar23;
            uVar31 = uVar25;
            do {
              FVar28.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar28.Data = local_58.Data;
              }
              uVar19 = uVar31 & (longlong)(int)uVar23 - 1U;
              uVar31 = uVar31 + 1;
              *(undefined4 *)(FVar28.Data + uVar19 * 4) = 0xffffffff;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_318 = &local_98.AllocationFlags;
          local_320 = 0;
          uStack_31c = 1;
          uStack_30c = 0;
          uStack_308 = 0;
          if (local_98.AllocationFlags.NumBits != 0) {
            FVar24 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
            if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar24 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar23 = *(uint *)FVar24;
            uVar31 = uVar25;
            while (uVar23 == 0) {
              uStack_308 = (int)uVar31 + 0x20;
              uVar31 = (ulonglong)uStack_308;
              iVar12 = (int)uVar25;
              local_320 = iVar12 + 1;
              uVar25 = (ulonglong)local_320;
              if ((int)((local_98.AllocationFlags.NumBits - 1U) +
                       ((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_320) goto LAB_14c72b10d;
              uVar23 = *(uint *)((uchar *)((longlong)FVar24 + 4) + (longlong)iVar12 * 4);
            }
            uStack_31c = -uVar23 & uVar23;
            uVar25 = (ulonglong)uStack_31c * 2 + 1;
            lVar16 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_2a4 = (int)lVar16;
            uStack_30c = (int)uVar31 + -1 + local_2a4;
            uVar25 = (ulonglong)uStack_30c;
            if (local_98.AllocationFlags.NumBits < (int)uStack_30c) {
LAB_14c72b10d:
              uVar25 = (ulonglong)(uint)local_98.AllocationFlags.NumBits;
              uStack_30c = local_98.AllocationFlags.NumBits;
            }
          }
          local_310 = 0xffffffff;
          local_278 = &local_98;
          local_270._padding_ = CONCAT44(uStack_31c,local_320);
          local_270.CurrentBitIndex = uStack_30c;
          local_270.UnvisitedBitMask = 0xffffffff;
          local_270._28_4_ = uStack_304;
          local_270.BaseBitIndex = uStack_308;
          local_270.Array = pTStack_318;
          if ((int)uVar25 < local_98.AllocationFlags.NumBits) {
            do {
              lVar16 = (longlong)(int)uVar25;
              pFVar5 = (local_278->Data).AllocatorInstance.Data;
              uVar23 = local_50 - 1 & *(uint *)(pFVar5 + lVar16 * 0xc);
              *(uint *)(pFVar5 + lVar16 * 0xc + 8) = uVar23;
              FVar28.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar28.Data = local_58.Data;
              }
              uVar31 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar23;
              *(undefined4 *)(pFVar5 + lVar16 * 0xc + 4) = *(undefined4 *)(FVar28.Data + uVar31 * 4)
              ;
              *(int *)(FVar28.Data + uVar31 * 4) = (int)uVar25;
              local_270.UnvisitedBitMask = local_270.UnvisitedBitMask & ~local_270._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
              uVar25 = (ulonglong)(uint)local_270.CurrentBitIndex;
            } while (local_270.CurrentBitIndex < (local_270.Array)->NumBits);
          }
        }
      }
    }
    pTVar8 = &local_288->AllocationFlags;
    iVar12 = local_98.FirstFreeIndex;
    for (pTVar33 = local_288; local_98.FirstFreeIndex = iVar12,
        pTVar33 !=
        (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((pTVar8->AllocatorInstance).InlineData + (longlong)(int)uVar27 * 4 + -0x10);
        pTVar33 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)&(pTVar33->Data).AllocatorInstance.Data + 4)) {
      if (local_98.NumFreeIndices == 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                            &local_98.Data.ArrayMax);
        iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_98.AllocationFlags,1)
        ;
        FVar24 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
        if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        bVar20 = (byte)iVar14 & 0x1f;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
          bVar20 = bVar20 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar24 + (longlong)(iVar14 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar20 & 0x1f));
      }
      else {
        local_98.FirstFreeIndex =
             *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar12 * 0xc + 4);
        local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
        if (local_98.NumFreeIndices != 0) {
          *(undefined4 *)
           (local_98.Data.AllocatorInstance.Data + (longlong)local_98.FirstFreeIndex * 0xc) =
               0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_98,&local_228,iVar12);
      if (local_228.Pointer != (uint *)0x0) {
        *(uint *)local_228.Pointer = *(uint *)&(pTVar33->Data).AllocatorInstance.Data;
        *(uint *)((longlong)local_228.Pointer + 4) = 0xffffffff;
      }
      uVar23 = *(uint *)local_228.Pointer;
      if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
         (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
        FVar28.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_58.Data;
        }
        for (iVar12 = *(int *)(FVar28.Data + (ulonglong)(local_50 - 1 & uVar23) * 4); iVar12 != -1;
            iVar12 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar12 * 0xc + 4)) {
          if (*(uint *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar12 * 0xc) == uVar23) {
            if (iVar12 != -1) {
              *(uint *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar12 * 0xc) = uVar23;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_98,local_228.Index,1);
              goto LAB_14c72b5f2;
            }
            break;
          }
        }
      }
      uVar30 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
      uVar26 = 1;
      if (3 < uVar30) {
        uVar25 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2a0 = (undefined4)lVar16;
        uVar26 = 1 << ((byte)lVar16 & 0x1f);
      }
      if (((int)uVar30 < 1) || ((int)uVar26 <= (int)local_50)) {
        uVar23 = local_50 - 1 & uVar23;
        *(uint *)((longlong)local_228.Pointer + 8) = uVar23;
        FVar28.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_58.Data;
        }
        uVar25 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar23;
        *(uint *)((longlong)local_228.Pointer + 4) = *(uint *)(FVar28.Data + uVar25 * 4);
        *(int *)(FVar28.Data + uVar25 * 4) = local_228.Index;
      }
      else {
        local_50 = uVar26;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar26 != 0) {
          uVar23 = uVar26;
          if (uVar26 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar23 = 0;
              goto LAB_14c72b3f2;
            }
          }
          else {
LAB_14c72b3f2:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar23,4);
          }
          if (0 < (int)uVar26) {
            uVar31 = (ulonglong)uVar26;
            uVar25 = 0;
            do {
              FVar28.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar28.Data = local_58.Data;
              }
              uVar32 = uVar25 & (longlong)(int)uVar26 - 1U;
              uVar25 = uVar25 + 1;
              *(undefined4 *)(FVar28.Data + uVar32 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_2f8 = &local_98.AllocationFlags;
          uStack_2fc = 1;
          local_300 = 0;
          uStack_2ec = 0;
          iStack_2e8 = 0;
          if (local_98.AllocationFlags.NumBits != 0) {
            FVar24 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
            if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar24 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar23 = *(uint *)FVar24;
            iStack_2e8 = 0;
            local_300 = 0;
            while (uVar23 == 0) {
              iStack_2e8 = iStack_2e8 + 0x20;
              lVar16 = (longlong)local_300;
              local_300 = local_300 + 1;
              if ((int)((local_98.AllocationFlags.NumBits - 1U) +
                       ((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  local_300) goto LAB_14c72b50d;
              uVar23 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar16 * 4);
            }
            uStack_2fc = -uVar23 & uVar23;
            uVar25 = (ulonglong)uStack_2fc * 2 + 1;
            lVar16 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_29c = (int)lVar16;
            uStack_2ec = local_29c + -1 + iStack_2e8;
            if (local_98.AllocationFlags.NumBits < (int)uStack_2ec) {
LAB_14c72b50d:
              uStack_2ec = local_98.AllocationFlags.NumBits;
            }
          }
          local_2f0 = 0xffffffff;
          local_250 = &local_98;
          local_248._padding_ = CONCAT44(uStack_2fc,local_300);
          local_248.CurrentBitIndex = uStack_2ec;
          local_248.UnvisitedBitMask = 0xffffffff;
          local_248._28_4_ = uStack_2e4;
          local_248.BaseBitIndex = iStack_2e8;
          local_248.Array = pTStack_2f8;
          uVar23 = uStack_2ec;
          if ((int)uStack_2ec < local_98.AllocationFlags.NumBits) {
            do {
              lVar16 = (longlong)(int)uVar23;
              pFVar5 = (local_250->Data).AllocatorInstance.Data;
              uVar26 = local_50 - 1 & *(uint *)(pFVar5 + lVar16 * 0xc);
              *(uint *)(pFVar5 + lVar16 * 0xc + 8) = uVar26;
              FVar28.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar28.Data = local_58.Data;
              }
              uVar25 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar26;
              *(undefined4 *)(pFVar5 + lVar16 * 0xc + 4) = *(undefined4 *)(FVar28.Data + uVar25 * 4)
              ;
              *(uint *)(FVar28.Data + uVar25 * 4) = uVar23;
              local_248.UnvisitedBitMask = local_248.UnvisitedBitMask & ~local_248._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
              uVar23 = local_248.CurrentBitIndex;
            } while (local_248.CurrentBitIndex < (local_248.Array)->NumBits);
          }
        }
      }
LAB_14c72b5f2:
      pTVar29 = local_2d8;
      this_00 = local_338;
      iVar12 = local_98.FirstFreeIndex;
    }
    local_290.Mesh = this_00;
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_290,pTVar29,false);
    local_288 = &local_98;
    iVar12 = local_330.ArrayNum;
    pFVar5 = local_330.AllocatorInstance.Data + (longlong)local_330.ArrayNum * 4;
    FVar28.Data = local_330.AllocatorInstance.Data;
    while( true ) {
      if (local_330.ArrayNum != iVar12) {
        local_358[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_358);
      }
      if (FVar28.Data == pFVar5) break;
      iVar14 = *(int *)FVar28.Data;
      bVar10 = `GroupEdgeInserterLocals::DeleteGroupTrianglesAndGetLoop'::__l2::<lambda_2>::
               operator()(&local_288,iVar14);
      if (bVar10) {
        UE::Geometry::FDynamicMesh3::RemoveVertex(this_00,iVar14,false);
      }
      FVar28.Data = FVar28.Data + 4;
    }
    pFVar6 = (this_00->AttributeSet).Ptr;
    if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
      uVar27 = 0;
      iVar12 = (**(code **)(pFVar6->_padding_ + 0xa8))();
      pTVar9 = local_2c8;
      if (0 < iVar12) {
        do {
          pFVar7 = (local_338->AttributeSet).Ptr;
          pFVar22 = (FDynamicMeshAttributeSet *)0x0;
          if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar22 = pFVar7;
          }
          pTVar17 = (TDynamicMeshOverlay<float,2> *)
                    UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar22,uVar27);
          uVar23 = 0;
          if ((int)uVar27 < pTVar9->ArrayNum) {
            uVar23 = ~uVar27 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          UE::Geometry::FMeshRegionBoundaryLoops::
          UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_>
                    (&local_198,
                     (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                      *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x50),pTVar17);
          uVar27 = uVar27 + 1;
          iVar12 = (**(code **)(pFVar6->_padding_ + 0xa8))();
        } while ((int)uVar27 < iVar12);
      }
    }
    bVar10 = true;
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_98);
    if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
  }
  else {
LAB_14c72b776:
    bVar10 = false;
  }
  UE::Geometry::FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_198);
LAB_14c72b784:
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_2c0.Components);
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  return bVar10;
}

// DistanceBetweenBarycentricPoints @ 14c72d300

double __cdecl
`anonymous_namespace'::DistanceBetweenBarycentricPoints
          (double param_1,double param_2,double param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  
  dVar4 = (param_5->field0_0x0)._s_0.Z - (param_4->field0_0x0)._s_0.Z;
  dVar2 = (param_5->field0_0x0)._s_0.Y - (param_4->field0_0x0)._s_0.Y;
  dVar3 = (param_5->field0_0x0)._s_0.X - (param_4->field0_0x0)._s_0.X;
  dVar1 = 0.0;
  dVar2 = dVar4 * dVar2 * param_2 * param_2 + dVar2 * dVar3 * param_1 * param_1 +
          dVar4 * dVar3 * param_3 * param_3;
  uVar5 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  if (0.0 <= (double)CONCAT44(uVar6,uVar5)) {
    dVar1 = SQRT((double)CONCAT44(uVar6,uVar5));
  }
  return dVar1;
}

// EmbedPlaneCutPath @ 14c72ea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
GroupEdgeInserterLocals::EmbedPlaneCutPath
          (FDynamicMesh3 *param_1,FGroupTopology *param_2,int param_3,FGroupEdgeSplitPoint *param_4,
          FGroupEdgeSplitPoint *param_5,double param_6,bool param_7,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_8,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_9,FProgressCancel *param_10)

{
  bool *pbVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  int *piVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  bool *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  int *piVar25;
  undefined1 auStackY_258 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  TArray<TTuple<UE::Geometry::FMeshSurfacePoint,int>,TSizedDefaultAllocator<32>_> local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  uint local_1f0;
  uint local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  FGroupTopology *local_1c0;
  undefined8 local_1b8;
  FProgressCancel *local_1b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1a8;
  FMeshSurfacePath local_1a0;
  undefined4 local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int *local_160;
  FGroup *local_158;
  FScriptContainerElement *local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  FDynamicMesh3 *local_140;
  FGroupEdgeSplitPoint *local_138;
  FGroupEdgeSplitPoint *local_130;
  FLocalPlanarSimplify local_128;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> local_d8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_138 = param_5;
  local_1a8 = param_8;
  local_1b0 = param_10;
  local_148 = param_9;
  local_1e8 = param_3;
  local_1c0 = param_2;
  local_140 = param_1;
  local_130 = param_4;
  if (param_10 != (FProgressCancel *)0x0) {
    if (param_10->WasCancelled != false) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_10->CancelF);
    pcVar3 = *(code **)&param_10->CancelF;
    plVar4 = *(longlong **)&(param_10->CancelF).field_0x28;
    plVar13 = (longlong *)&(param_10->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar13 = plVar4;
    }
    uVar9 = (**(code **)(*plVar13 + 8))();
    bVar7 = (bool)(*pcVar3)(uVar9);
    param_10->WasCancelled = bVar7;
    if (bVar7 != false) {
      return false;
    }
  }
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_158 = UE::Geometry::FGroupTopology::FindGroupByID(param_2,param_3);
  uVar24 = 1;
  lVar22 = 4;
  if (local_158 == (FGroup *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2424968668812149717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                       ,0x3d5,"Group");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
  }
  else {
    local_1ec = (local_158->Boundaries).ArrayNum;
    uVar19 = (ulonglong)(int)local_1ec;
    pFVar23 = (local_158->Boundaries).AllocatorInstance.Data;
    local_150 = pFVar23 + uVar19 * 0x28;
    while( true ) {
      pFVar5 = local_150;
      if ((local_158->Boundaries).ArrayNum != (int)uVar19) {
        local_218 = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_218);
      }
      param_10 = local_1b0;
      param_1 = local_140;
      param_9 = local_148;
      if (pFVar23 == pFVar5) break;
      local_1f0 = *(uint *)(pFVar23 + 8);
      uVar19 = (ulonglong)(int)local_1f0;
      piVar25 = *(int **)pFVar23;
      local_160 = piVar25 + uVar19;
      while( true ) {
        piVar6 = local_160;
        if (*(int *)(pFVar23 + 8) != (int)uVar19) {
          local_217[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_217);
        }
        if (piVar25 == piVar6) break;
        iVar14 = *piVar25;
        if (iVar14 < (param_2->Edges).ArrayNum) {
          if ((iVar14 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          pFVar5 = (param_2->Edges).AllocatorInstance.Data;
          iVar2 = *(int *)(pFVar5 + (longlong)iVar14 * 0x50 + 0x18);
          pbVar18 = *(bool **)(pFVar5 + (longlong)iVar14 * 0x50 + 0x10);
          if ((iVar2 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          uVar17 = (local_a8._8_4_ - local_74) + iVar2;
          if ((uint)(local_a8._8_4_ - local_74) < uVar17) {
            if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,uVar17);
            uVar15 = 1;
            if (3 < uVar17) {
              uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_178 = (undefined4)lVar16;
              uVar15 = 1 << ((byte)lVar16 & 0x1f);
            }
            if ((local_60 == 0) || ((int)local_60 < (int)uVar15)) {
              local_60 = uVar15;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_68,0,0,4);
              }
              if (uVar15 != 0) {
                uVar17 = uVar15;
                if (uVar15 < 2) {
                  if (local_68.Data != (FScriptContainerElement *)0x0) {
                    uVar17 = 0;
                    goto LAB_14c72edc5;
                  }
                }
                else {
LAB_14c72edc5:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_68,0,uVar17,4);
                }
                if (0 < (int)uVar15) {
                  uVar20 = (ulonglong)uVar15;
                  uVar19 = 0;
                  do {
                    FVar12.Data = local_70;
                    if (local_68.Data != (FScriptContainerElement *)0x0) {
                      FVar12.Data = local_68.Data;
                    }
                    uVar10 = uVar19 & (longlong)(int)uVar15 - 1U;
                    uVar19 = uVar19 + 1;
                    *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              if (local_60 != 0) {
                pTStack_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
                uStack_1dc = 1;
                local_1e0 = 0;
                iStack_1cc = 0;
                iStack_1c8 = 0;
                if (local_80 != 0) {
                  FVar21 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
                  if (local_88 != (ForElementType<unsigned_int>)0x0) {
                    FVar21 = local_88;
                  }
                  uVar17 = *(uint *)FVar21;
                  local_1e0 = 0;
                  while (uVar17 == 0) {
                    iStack_1c8 = iStack_1c8 + 0x20;
                    lVar16 = (longlong)local_1e0;
                    local_1e0 = local_1e0 + 1;
                    if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e0)
                    goto LAB_14c72eedf;
                    uVar17 = ((uint *)((longlong)FVar21 + 4))[lVar16];
                  }
                  uStack_1dc = -uVar17 & uVar17;
                  uVar19 = (ulonglong)uStack_1dc * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  local_174 = (int)lVar16;
                  iStack_1cc = local_174 + -1 + iStack_1c8;
                  if (local_80 < iStack_1cc) {
LAB_14c72eedf:
                    iStack_1cc = local_80;
                  }
                }
                local_1d0 = 0xffffffff;
                local_108 = (longlong *)local_a8;
                local_100._padding_ = CONCAT44(uStack_1dc,local_1e0);
                local_100.CurrentBitIndex = iStack_1cc;
                local_100.UnvisitedBitMask = 0xffffffff;
                local_100._28_4_ = uStack_1c4;
                local_100.BaseBitIndex = iStack_1c8;
                local_100.Array = pTStack_1d8;
                iVar14 = iStack_1cc;
                if (iStack_1cc < local_80) {
                  do {
                    lVar16 = *local_108;
                    lVar11 = (longlong)iVar14;
                    uVar17 = local_60 - 1 & *(uint *)(lVar16 + lVar11 * 0xc);
                    *(uint *)(lVar16 + 8 + lVar11 * 0xc) = uVar17;
                    FVar12.Data = local_70;
                    if (local_68.Data != (FScriptContainerElement *)0x0) {
                      FVar12.Data = local_68.Data;
                    }
                    uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar17;
                    *(undefined4 *)(lVar16 + 4 + lVar11 * 0xc) =
                         *(undefined4 *)(FVar12.Data + uVar19 * 4);
                    *(int *)(FVar12.Data + uVar19 * 4) = iVar14;
                    local_100.UnvisitedBitMask =
                         local_100.UnvisitedBitMask & ~local_100._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
                    iVar14 = local_100.CurrentBitIndex;
                  } while (local_100.CurrentBitIndex < (local_100.Array)->NumBits);
                }
              }
            }
          }
          pbVar1 = pbVar18 + (longlong)iVar2 * 4;
          param_2 = local_1c0;
          for (; local_1c0 = param_2, pbVar18 != pbVar1; pbVar18 = pbVar18 + 4) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_170,
                       pbVar18);
            param_2 = local_1c0;
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2424968668812149723>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                             ,0x3db,"GroupEdgeID < Topology.Edges.Num()");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        uVar19 = (ulonglong)local_1f0;
        piVar25 = piVar25 + 1;
      }
      pFVar23 = pFVar23 + 0x28;
      uVar19 = (ulonglong)local_1ec;
    }
  }
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  bVar7 = GetPlaneCutPath(param_1,local_1e8,local_130,local_138,&local_210,param_6,
                          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,param_10
                         );
  if (bVar7) {
    if (param_10 == (FProgressCancel *)0x0) {
LAB_14c72f082:
      if (local_210.ArrayNum < 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CutPath.Num() >= 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                           ,0x3ec,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      iVar14 = local_210.ArrayNum;
      if ((param_9 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
         (uVar17 = 0, 0 < local_210.ArrayNum)) {
        lVar16 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar17 < iVar14) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            iVar14 = local_210.ArrayNum;
          }
          if (*(int *)(local_210.AllocatorInstance.Data + lVar16 + 0x20) == 1) {
            uVar9 = *(undefined8 *)
                     (*(longlong *)
                       ((param_1->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(*(uint *)(local_210.AllocatorInstance.Data + lVar16) >> 9) * 8) +
                      8 + (ulonglong)(*(uint *)(local_210.AllocatorInstance.Data + lVar16) & 0x1ff)
                          * 0x10);
            local_1b8 = uVar9;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_9,&local_16c,(bool *)&local_1b8);
            if ((int)((ulonglong)uVar9 >> 0x20) != -1) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (param_9,&local_168,(bool *)((longlong)&local_1b8 + 4));
            }
            iVar14 = local_210.ArrayNum;
          }
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 0x30;
          param_10 = local_1b0;
        } while ((int)uVar17 < iVar14);
      }
      FVar12.Data = local_210.AllocatorInstance.Data;
      local_1a0._padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
      local_1a0.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Path.ArrayMax = 0;
      local_1a0.bIsClosed = false;
      local_1a0.Mesh = param_1;
      local_1a0.Path.ArrayNum = iVar14;
      if (iVar14 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar14,0,&local_1a0.Path.AllocatorInstance,iVar14,&local_1a0.Path.ArrayMax
                  );
        memcpy(local_1a0.Path.AllocatorInstance.Data,FVar12.Data,(longlong)iVar14 * 0x30);
      }
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 0;
      local_200.ArrayMax = 0;
      bVar7 = UE::Geometry::FMeshSurfacePath::EmbedSimplePath
                        (&local_1a0,false,&local_200,false,__real_3f1a36e2ea000000);
      if (bVar7) {
        if (param_10 != (FProgressCancel *)0x0) {
          if (param_10->WasCancelled == false) {
            UE::Core::Private::Function::CheckCallable(*(void **)&param_10->CancelF);
            pcVar3 = *(code **)&param_10->CancelF;
            plVar4 = *(longlong **)&(param_10->CancelF).field_0x28;
            plVar13 = (longlong *)&(param_10->CancelF).field_0x10;
            if (plVar4 != (longlong *)0x0) {
              plVar13 = plVar4;
            }
            uVar9 = (**(code **)(*plVar13 + 8))();
            bVar7 = (bool)(*pcVar3)(uVar9);
            param_10->WasCancelled = bVar7;
            if (bVar7 == false) goto LAB_14c72f280;
          }
          goto LAB_14c72f43d;
        }
LAB_14c72f280:
        if (local_200.ArrayNum < 2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PathVertices.Num() >= 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                             ,0x409,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        this = local_1a8;
        iVar14 = local_200.ArrayNum;
        if (1 < local_200.ArrayNum) {
          do {
            uVar17 = 0;
            if ((int)uVar24 < iVar14) {
              uVar17 = ~uVar24 >> 0x1f;
            }
            if (uVar17 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar14 = local_200.ArrayNum;
            }
            iVar2 = *(int *)(local_200.AllocatorInstance.Data + lVar22);
            uVar17 = 0;
            if ((int)(uVar24 - 1) < iVar14) {
              uVar17 = -uVar24 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_1e4 = UE::Geometry::FDynamicMesh3::FindEdge
                                  (param_1,*(int *)(local_200.AllocatorInstance.Data + lVar22 + -4),
                                   iVar2);
            if (local_1e4 < 0) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2424968668812149774>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                                 ,0x40e,"Eid >= 0");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
            }
            else {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (this,&local_164,(bool *)&local_1e4);
            }
            uVar24 = uVar24 + 1;
            lVar22 = lVar22 + 4;
            iVar14 = local_200.ArrayNum;
          } while ((int)uVar24 < local_200.ArrayNum);
        }
        if (param_7) {
          local_128.bPreserveTriangleGroups = true;
          local_128.bPreserveVertexUVs = true;
          local_d8._0_8_ = 0;
          local_d8._40_8_ = 0;
          local_128.bPreserveOverlayUVs = true;
          local_128.SimplificationAngleTolerance = ___xmm_3fd00000000000003fb999999999999a;
          local_128.TryToImproveTriQualityThreshold = _UNK_150b37c98;
          local_128.UVDistortTolerance = 1e-06;
          local_128.NormalDistortTolerance = 0.01;
          local_128.bPreserveVertexNormals = false;
          UE::Geometry::FLocalPlanarSimplify::SimplifyAlongEdges(&local_128,param_1,this,&local_d8);
        }
        bVar7 = true;
      }
      else {
LAB_14c72f43d:
        bVar7 = false;
      }
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      local_1a0._padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
      if (local_1a0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Path.AllocatorInstance.Data);
      }
      goto LAB_14c72f464;
    }
    if (param_10->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_10->CancelF);
      pcVar3 = *(code **)&param_10->CancelF;
      plVar4 = *(longlong **)&(param_10->CancelF).field_0x28;
      plVar13 = (longlong *)&(param_10->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar13 = plVar4;
      }
      uVar9 = (**(code **)(*plVar13 + 8))();
      bVar7 = (bool)(*pcVar3)(uVar9);
      param_10->WasCancelled = bVar7;
      if (bVar7 == false) goto LAB_14c72f082;
    }
  }
  bVar7 = false;
LAB_14c72f464:
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return bVar7;
}

// FindAllGroups @ 14c730d00

void __cdecl
FaceGroupUtil::FindAllGroups
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_res8 [2];
  int local_res18 [4];
  
  if ((param_1->TriangleGroups).bIsSet != false) {
    iVar1 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar3 = 0;
    if (0 < iVar1) {
      uVar2 = 0;
      do {
        if ((int)uVar3 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar3 >> 9) * 8) +
                                 (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
            if ((param_1->TriangleGroups).bIsSet == false) {
              local_res8[0] = 0xffffffff;
            }
            else {
              local_res8[0] =
                   *(undefined4 *)
                    (*(longlong *)
                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4);
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_2,local_res18,(bool *)local_res8);
          }
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}

// FindSharpestAngleMatchEdge @ 14c732250

int __cdecl
ExtrudeBoundaryEdgesLocals::FindSharpestAngleMatchEdge
          (FDynamicMesh3 *param_1,int param_2,int param_3,TVector<double> *param_4,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ForElementType<int> FVar6;
  code *pcVar7;
  TVector<double>_u_0 *pTVar8;
  bool bVar9;
  int iVar10;
  TVector<double>_u_0 *pTVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined1 local_res18 [8];
  TVector<double> *local_res20;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  ForElementType<int> local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  local_res20 = param_4;
  UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV(param_1,(int)&local_f0);
  bVar13 = uStack_ec == param_3;
  if ((!bVar13) && (local_f0 != param_3)) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8213365985634156298>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                        ,0xf6,"bInputIsIncomingEdge || InputEdgeVids.A == Vid");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    return -1;
  }
  pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  iVar12 = -1;
  piVar1 = &param_5->ArrayNum;
  uVar14 = (undefined4)__real_ffefffffffffffff;
  uVar16 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uStack_ec >> 9) * 8);
  pdVar2 = (double *)(lVar5 + (ulonglong)(uStack_ec & 0x1ff) * 0x18);
  local_a8 = *pdVar2;
  dStack_a0 = pdVar2[1];
  local_98 = *(double *)(lVar5 + 0x10 + (ulonglong)(uStack_ec & 0x1ff) * 0x18);
  lVar5 = *(longlong *)(pFVar4 + (ulonglong)(local_f0 >> 9) * 8);
  FVar6 = (param_5->AllocatorInstance).SecondaryData;
  local_80 = *(double *)(lVar5 + 0x10 + (ulonglong)(local_f0 & 0x1ff) * 0x18);
  local_c0._s_0.Z = local_98 - local_80;
  pdVar2 = (double *)(lVar5 + (ulonglong)(local_f0 & 0x1ff) * 0x18);
  local_90 = *pdVar2;
  dStack_88 = pdVar2[1];
  iVar10 = *piVar1;
  local_c0._s_0.X = local_a8 - local_90;
  local_c0._s_0.Y = dStack_a0 - dStack_88;
  if (FVar6 != (ForElementType<int>)0x0) {
    param_5 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar6;
  }
  local_e0 = (ForElementType<int>)((longlong)param_5 + (longlong)iVar10 * 4);
  while( true ) {
    FVar6 = local_e0;
    if (*piVar1 != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((ForElementType<int>)param_5 == FVar6) break;
    iVar3 = *(int *)param_5;
    if (iVar3 != param_2) {
      UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV(param_1,(int)&local_e8);
      if ((uStack_e4 == param_3) || (local_e8 == param_3)) {
        if (bVar13 != (uStack_e4 == param_3)) {
          pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
          lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uStack_e4 >> 9) * 8);
          pdVar2 = (double *)(lVar5 + (ulonglong)(uStack_e4 & 0x1ff) * 0x18);
          local_78 = *pdVar2;
          dStack_70 = pdVar2[1];
          local_68 = *(double *)(lVar5 + 0x10 + (ulonglong)(uStack_e4 & 0x1ff) * 0x18);
          lVar5 = *(longlong *)(pFVar4 + (ulonglong)(local_e8 >> 9) * 8);
          pdVar2 = (double *)(lVar5 + (ulonglong)(local_e8 & 0x1ff) * 0x18);
          local_60 = *pdVar2;
          dStack_58 = pdVar2[1];
          local_50 = *(double *)(lVar5 + 0x10 + (ulonglong)(local_e8 & 0x1ff) * 0x18);
          local_d8._s_0.X = local_78 - local_60;
          local_d8._s_0.Z = local_68 - local_50;
          local_d8._s_0.Y = dStack_70 - dStack_58;
          pTVar11 = &local_d8;
          pTVar8 = &local_c0;
          if (bVar13) {
            pTVar11 = &local_c0;
            pTVar8 = &local_d8;
          }
          dVar15 = UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                             ((TVector<double> *)&pTVar11->_s_0,(TVector<double> *)&pTVar8->_s_0,
                              local_res20);
          if ((double)CONCAT44(uVar16,uVar14) <= dVar15 && dVar15 != (double)CONCAT44(uVar16,uVar14)
             ) {
            uVar14 = SUB84(dVar15,0);
            uVar16 = (undefined4)((ulonglong)dVar15 >> 0x20);
            iVar12 = iVar3;
          }
        }
      }
      else {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8213365985634156277>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                           ,0x10b,"bIsIncomingEdge || Vids.A == Vid");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
      }
    }
    param_5 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_5 + 4);
  }
  return iVar12;
}

// FindTriangleSetsByGroup @ 14c732540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FaceGroupUtil::FindTriangleSetsByGroup
          (FDynamicMesh3 *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint local_78;
  uint local_74;
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if ((param_1->TriangleGroups).bIsSet != false) {
    uVar10 = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_60,param_1->GroupIDCounter,Default);
    if (((param_1->TriangleGroups).bIsSet != false) &&
       (iVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed, uVar12 = uVar10,
       uVar8 = uVar10, 0 < iVar13)) {
      do {
        if ((int)uVar12 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          uVar9 = (ulonglong)((uint)uVar8 & 0x1ff);
          lVar5 = (uVar12 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar5) + uVar9 * 2) - 1U) < 0xfffe) {
            if ((param_1->TriangleGroups).bIsSet == false) {
              uVar6 = 0xffffffff;
LAB_14c732651:
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            else {
              uVar6 = *(uint *)(*(longlong *)
                                 ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar5) + uVar9 * 4);
              uVar7 = 0;
              if ((int)uVar6 < local_60.ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if (uVar7 == 0) goto LAB_14c732651;
            }
            *(int *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
                 *(int *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) + 1;
          }
        }
        uVar6 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar6;
        uVar8 = uVar8 + 1;
      } while ((int)uVar6 < iVar13);
    }
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    iStack_64 = 0;
    local_74 = 0;
    uVar12 = uVar10;
    iVar13 = local_60.ArrayNum;
    if (0 < local_60.ArrayNum) {
      do {
        uVar7 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar7 < iVar13) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar13 = local_60.ArrayNum;
        }
        if ((local_74 != param_3) &&
           (0 < *(int *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar7 * 4))) {
          if ((local_70.Data <= (FScriptContainerElement *)&local_74) &&
             (((FScriptContainerElement *)&local_74 < local_70.Data + (longlong)iStack_64 * 4 &&
              (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar2)))) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_68 == iStack_64) {
            local_68 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_70,&iStack_64);
          }
          lVar5 = (longlong)local_68;
          local_68 = local_68 + 1;
          *(uint *)(local_70.Data + lVar5 * 4) = local_74;
          iVar13 = local_60.ArrayNum;
        }
        local_74 = local_74 + 1;
        uVar12 = (ulonglong)local_74;
      } while ((int)local_74 < iVar13);
    }
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_50,param_1->GroupIDCounter,Default);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (param_2,local_68,Default);
    if (0 < local_68) {
      lVar5 = 0;
      uVar12 = uVar10;
      do {
        uVar7 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar7 < local_68) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = *(uint *)(local_70.Data + lVar5);
        uVar3 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data + uVar12;
        uVar3 = 0;
        if ((int)uVar6 < local_60.ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = *(uint *)(local_60.AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        if (*(int *)(pFVar14 + 0xc) < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)pFVar14,*(int *)&pFVar14[8].field_0x0,
                     (int *)(pFVar14 + 0xc));
        }
        uVar3 = 0;
        if ((int)uVar6 < local_50.ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar5 = lVar5 + 4;
        uVar12 = uVar12 + 0x10;
        *(uint *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar7;
        uVar10 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_68);
    }
    uVar10 = 0;
    uVar6 = 0;
    iVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    local_78 = 0;
    if (0 < iVar13) {
      do {
        uVar7 = (uint)uVar10;
        if (((-1 < (int)uVar7) &&
            (iVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_1->TriangleRefCounts).RefCounts.CurBlockUsed, (int)uVar7 < iVar11)) &&
           (pFVar14 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
           (ushort)(*(short *)(*(longlong *)(pFVar14 + (uVar10 >> 9) * 8) +
                              (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          if ((param_1->TriangleGroups).bIsSet == false) {
            uVar3 = 0xffffffff;
LAB_14c732a8e:
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            uVar7 = local_78;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            uVar3 = uVar6;
            if ((-1 < (int)uVar7) && ((int)uVar7 < iVar11)) {
              if ((ushort)(*(short *)(*(longlong *)(pFVar14 + (uVar10 >> 9) * 8) +
                                     (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
                uVar3 = *(uint *)(*(longlong *)
                                   ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                    Data + (uVar10 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
              }
            }
            uVar4 = uVar6;
            if ((int)uVar3 < local_50.ArrayNum) {
              uVar4 = ~uVar3 >> 0x1f;
            }
            if (uVar4 == 0) goto LAB_14c732a8e;
          }
          uVar3 = *(uint *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
          if (-1 < (int)uVar3) {
            uVar7 = 0;
            if ((int)uVar3 < param_2->ArrayNum) {
              uVar7 = ~uVar3 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar14 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
            if (((*(uint **)&pFVar14->field_0x0 <= &local_78) &&
                (&local_78 < *(uint **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar11 = *(int *)&pFVar14[8].field_0x0;
            if (iVar11 == *(int *)(pFVar14 + 0xc)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
            }
            *(int *)&pFVar14[8].field_0x0 = iVar11 + 1;
            *(uint *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar11 * 4) = local_78;
            uVar7 = local_78;
          }
        }
        local_78 = uVar7 + 1;
        uVar10 = (ulonglong)local_78;
      } while ((int)local_78 < iVar13);
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  return;
}

// FindTrianglesByGroup @ 14c732c50

bool __cdecl
FaceGroupUtil::FindTrianglesByGroup
          (FDynamicMesh3 *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint local_38 [4];
  
  iVar10 = 0;
  if ((param_1->TriangleGroups).bIsSet == false) {
    return false;
  }
  uVar9 = 0;
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar11 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar9 = 1;
    uVar8 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014c732d16;
    do {
      lVar1 = (ulonglong)((uint)uVar9 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar9 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar9 >> 9) * 8)) != -1)) break;
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar11);
  }
  uVar8 = (uint)uVar9;
joined_r0x00014c732d16:
  if (uVar8 == uVar11) {
    return 0 < iVar10;
  }
  do {
    uVar8 = (uint)uVar9;
    if ((param_1->TriangleGroups).bIsSet == false) {
      iVar7 = -1;
    }
    else {
      if ((-1 < (int)uVar8) &&
         ((int)uVar8 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar1 = (uVar9 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar1) + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
          iVar7 = *(int *)(*(longlong *)
                            ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                            lVar1) + (ulonglong)(uVar8 & 0x1ff) * 4);
          goto LAB_14c732d8b;
        }
      }
      iVar7 = 0;
    }
LAB_14c732d8b:
    if (iVar7 == param_2) {
      pFVar2 = (param_3->AllocatorInstance).Data;
      local_38[0] = uVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      iVar10 = iVar10 + 1;
      param_3->ArrayNum = iVar7 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38[0];
    }
    uVar8 = uVar8 + 1;
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar11 <= (int)uVar8) goto joined_r0x00014c732d16;
    pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar1 = (uVar9 >> 9) * 8;
      lVar4 = (ulonglong)((uint)uVar9 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
         (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar11 <= (int)uVar8) goto joined_r0x00014c732d16;
    }
  } while( true );
}

// GetEdgeLoopOpposingEdgeAndCorner @ 14c739ea0

bool __cdecl
GroupEdgeInserterLocals::GetEdgeLoopOpposingEdgeAndCorner
          (FGroupTopology *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
          int *param_7,FOptionalOutputParams *param_8)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FGroup *pFVar5;
  TArrayView<int_const_,int> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  TArrayView<int_const_,int> local_f8;
  undefined8 local_e8;
  FEdgeSpan local_e0;
  undefined8 local_a0;
  undefined8 local_98;
  FEdgeSpan local_90;
  ulonglong local_50;
  TArrayView<int_const_,int> local_48;
  
  *param_5 = -1;
  *param_6 = -1;
  *param_7 = -1;
  if ((param_3 != -1) && (param_2 != -1)) {
    pFVar5 = UE::Geometry::FGroupTopology::FindGroupByID(param_1,param_2);
    if ((pFVar5 == (FGroup *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Group",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                           ,0xce,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar10 = 0;
    if (0 < (pFVar5->Boundaries).ArrayNum) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (pFVar5->Boundaries).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((pFVar5->Boundaries).AllocatorInstance.Data + lVar13);
        pFVar9 = (pTVar14->AllocatorInstance).Data;
        for (pFVar12 = pFVar9; pFVar12 != pFVar9 + (longlong)pTVar14->ArrayNum * 4;
            pFVar12 = pFVar12 + 4) {
          if (*(int *)pFVar12 == param_3) {
            iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar9 >> 2);
            if (iVar11 != -1) {
              if (pTVar14->ArrayNum != 4) {
                this = param_8->ProblemGroupEdgeIDsOut;
                if (this == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
                  return false;
                }
                pTVar6 = TArrayView<int_const_,int>::
                         TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                                   (&local_48,pTVar14);
                local_f8.DataPtr = pTVar6->DataPtr;
                local_f8.ArrayNum = pTVar6->ArrayNum;
                local_f8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(this,&local_f8);
                return false;
              }
              uVar8 = iVar11 + 2U & 0x80000003;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
              }
              uVar4 = 0;
              if ((int)uVar8 < 4) {
                uVar4 = ~uVar8 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              *param_5 = *(int *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
              *param_7 = uVar10;
              if (param_4 == -1) {
                return true;
              }
              uVar10 = iVar11 + 1U & 0x80000003;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
              }
              uVar8 = 0;
              if ((int)uVar10 < pTVar14->ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              uVar10 = *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
              uVar8 = 0;
              if ((int)uVar10 < (param_1->Edges).ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              pFVar9 = (param_1->Edges).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50;
              local_e8 = *(undefined8 *)pFVar9;
              UE::Geometry::FEdgeSpan::FEdgeSpan(&local_e0,(FEdgeSpan *)(pFVar9 + 8));
              local_a0 = *(undefined8 *)(pFVar9 + 0x48);
              uVar10 = iVar11 + 3U & 0x80000003;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
              }
              uVar8 = 0;
              if ((int)uVar10 < pTVar14->ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              uVar10 = *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
              uVar8 = 0;
              if ((int)uVar10 < (param_1->Edges).ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              pFVar9 = (param_1->Edges).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50;
              local_98 = *(undefined8 *)pFVar9;
              UE::Geometry::FEdgeSpan::FEdgeSpan(&local_90,(FEdgeSpan *)(pFVar9 + 8));
              local_50 = *(ulonglong *)(pFVar9 + 0x48);
              if ((int)local_a0 == param_4) {
                uVar7 = (ulonglong)local_a0._4_4_;
              }
              else {
                if (local_a0._4_4_ == param_4) {
                  *param_6 = (int)local_a0;
                  goto LAB_14c73a2be;
                }
                if ((int)local_50 == param_4) {
                  uVar7 = local_50 >> 0x20;
                }
                else {
                  uVar7 = local_50;
                  if ((int)(local_50 >> 0x20) != param_4) goto LAB_14c73a2be;
                }
              }
              *param_6 = (int)uVar7;
LAB_14c73a2be:
              if (local_90.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_90.BowtieVertices.AllocatorInstance.Data);
              }
              if (local_90.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Edges.AllocatorInstance.Data);
              }
              if (local_90.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Vertices.AllocatorInstance.Data);
              }
              if (local_e0.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_e0.BowtieVertices.AllocatorInstance.Data);
              }
              if (local_e0.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Edges.AllocatorInstance.Data);
              }
              if (local_e0.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Vertices.AllocatorInstance.Data);
              }
              return true;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x28;
      } while ((int)uVar10 < (pFVar5->Boundaries).ArrayNum);
    }
  }
  return false;
}

// GetExtrudeFrameAtVertex @ 14c73b3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FExtrudeFrame * __cdecl
ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex
          (FExtrudeFrame *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  TVector<double> *pTVar9;
  bool bVar10;
  FExtrudeFrame *pFVar11;
  TVector<double> *pTVar12;
  TVector<double>_u_0 *pTVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double local_388;
  double dStack_380;
  undefined8 local_378;
  double local_370;
  double dStack_368;
  undefined8 local_360;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  double local_328;
  double local_320;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TQuaternion<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1c8;
  double dStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TQuaternion<double>_u_0 TStack_1b0;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double local_180;
  undefined1 local_178;
  double local_170;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  pTVar9 = param_5;
  dVar22 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  dVar21 = __real_3e45798ee0000000;
  dVar19 = (param_5->field0_0x0)._s_0.X;
  if ((((dVar19 == 0.0) && ((param_5->field0_0x0)._s_0.Y == 0.0)) &&
      ((param_5->field0_0x0)._s_0.Z == 0.0)) &&
     ((((param_3->field0_0x0)._s_0.X == 0.0 && ((param_3->field0_0x0)._s_0.Y == 0.0)) &&
      ((param_3->field0_0x0)._s_0.Z == 0.0)))) {
    dVar19 = (param_1->field0_0x0)._s_0.Y;
    uVar28 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar29 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar19;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x10) = uVar28;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x14) = uVar29;
    *(undefined4 *)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) = 0;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = dVar1;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = dVar22;
    (__return_storage_ptr__->InFrameScaleDirection).bIsSet = false;
    __return_storage_ptr__->Scaling = 1.0;
  }
  else {
    dVar1 = (param_3->field0_0x0)._s_0.X;
    if (((dVar1 == 0.0) && ((param_3->field0_0x0)._s_0.Y == 0.0)) &&
       ((param_3->field0_0x0)._s_0.Z == 0.0)) {
      pTVar12 = param_1;
      if (((dVar19 == 0.0) && (pTVar12 = param_1, (param_5->field0_0x0)._s_0.Y == 0.0)) &&
         ((pTVar12 = param_1, (param_5->field0_0x0)._s_0.Z == 0.0 &&
          (param_5 = param_1,
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8213365985634156470>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                              ,0x4a,"!OutgoingEdgeVector.IsZero()"), pTVar12 = param_5, bVar10)))) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FExtrudeFrame *)(*pcVar6)();
        return pFVar11;
      }
      param_5 = pTVar12;
      if ((((param_4->field0_0x0)._s_0.X == 0.0) && ((param_4->field0_0x0)._s_0.Y == 0.0)) &&
         ((param_4->field0_0x0)._s_0.Z == 0.0)) {
        pTVar12 = GetOrthogonalVector(&local_130,pTVar9);
        `ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex'::__l2::<lambda_1>::operator()
                  (&param_5,__return_storage_ptr__,pTVar12,pTVar9);
      }
      else {
        local_280._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_280._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_280._s_0.Z = (param_4->field0_0x0)._s_0.Z;
        `ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex'::__l2::<lambda_1>::operator()
                  (&param_5,__return_storage_ptr__,(TVector<double> *)&local_280._s_0,pTVar9);
      }
    }
    else if (((dVar19 == 0.0) && ((param_5->field0_0x0)._s_0.Y == 0.0)) &&
            ((param_5->field0_0x0)._s_0.Z == 0.0)) {
      param_5 = param_1;
      if ((((dVar1 == 0.0) && ((param_3->field0_0x0)._s_0.Y == 0.0)) &&
          ((param_3->field0_0x0)._s_0.Z == 0.0)) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8213365985634156463>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                              ,0x51,"!IncomingEdgeVector.IsZero()"), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FExtrudeFrame *)(*pcVar6)();
        return pFVar11;
      }
      if ((((param_2->field0_0x0)._s_0.X == 0.0) && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
         ((param_2->field0_0x0)._s_0.Z == 0.0)) {
        pTVar13 = &GetOrthogonalVector(&local_118,param_2)->field0_0x0;
      }
      else {
        local_268._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_268._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        pTVar13 = &local_268;
        local_268._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      }
      `ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex'::__l2::<lambda_1>::operator()
                (&param_5,__return_storage_ptr__,(TVector<double> *)&pTVar13->_s_0,param_3);
    }
    else {
      _local_370 = *(undefined1 (*) [16])&param_4->field0_0x0;
      local_360 = (param_4->field0_0x0)._s_0.Z;
      auVar5 = *(undefined1 (*) [16])&param_2->field0_0x0;
      uVar28 = auVar5._0_4_;
      uVar29 = auVar5._4_4_;
      uVar24 = auVar5._8_4_;
      uVar25 = auVar5._12_4_;
      dVar22 = (param_2->field0_0x0)._s_0.Z;
      uVar26 = SUB84(dVar22,0);
      uVar27 = (undefined4)((ulonglong)dVar22 >> 0x20);
      _local_388 = auVar5;
      local_378 = dVar22;
      local_328 = dVar22;
      if (((auVar5._0_8_ == 0.0) && (auVar5._8_8_ == 0.0)) && (dVar22 == 0.0)) {
        dVar22 = (param_4->field0_0x0)._s_0.X;
        if (((dVar22 == 0.0) && ((param_4->field0_0x0)._s_0.Y == 0.0)) &&
           ((param_4->field0_0x0)._s_0.Z == 0.0)) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        dVar2 = (param_5->field0_0x0)._s_0.Y;
        pdVar14 = &(param_3->field0_0x0)._s_0.Z;
        pdVar15 = &(param_3->field0_0x0)._s_0.Y;
        if (bVar10) {
          dVar22 = *pdVar14;
          dVar3 = (param_5->field0_0x0)._s_0.Z;
          local_340._s_0.X = *pdVar15 * dVar3 - dVar22 * dVar2;
          local_340._s_0.Y = dVar22 * dVar19 - dVar1 * dVar3;
          local_340._s_0.Z = dVar1 * dVar2 - *pdVar15 * dVar19;
          param_5 = param_1;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_340._s_0,__real_3e45798ee0000000);
          uVar28 = SUB84(local_340._s_0.X,0);
          uVar29 = (undefined4)((ulonglong)local_340._0_8_ >> 0x20);
          uVar24 = SUB84(local_340._s_0.Y,0);
          uVar25 = (undefined4)((ulonglong)local_340._8_8_ >> 0x20);
          uVar26 = SUB84(local_340._s_0.Z,0);
          uVar27 = (undefined4)((ulonglong)local_340._16_8_ >> 0x20);
          if (((local_340._s_0.X == 0.0) && (local_340._s_0.Y == 0.0)) && (local_340._s_0.Z == 0.0))
          {
            pTVar12 = GetOrthogonalVector(&local_100,param_3);
            uVar28 = *(undefined4 *)&pTVar12->field0_0x0;
            uVar29 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
            uVar24 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
            uVar25 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
            uVar4 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 0x10);
            uVar26 = (undefined4)uVar4;
            uVar27 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          dStack_380 = (double)CONCAT44(uVar29,uVar28) * dVar22 -
                       (double)CONCAT44(uVar27,uVar26) * dVar1;
          local_388 = (double)CONCAT44(uVar27,uVar26) * *pdVar15 -
                      (double)CONCAT44(uVar25,uVar24) * dVar22;
          local_378 = (double)CONCAT44(uVar25,uVar24) * dVar1 -
                      (double)CONCAT44(uVar29,uVar28) * *pdVar15;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_388,dVar21);
          local_360 = (double)CONCAT44(uVar25,uVar24) * dVar19 -
                      (double)CONCAT44(uVar29,uVar28) * dVar2;
          dStack_368 = (double)CONCAT44(uVar29,uVar28) * dVar3 -
                       (double)CONCAT44(uVar27,uVar26) * dVar19;
          local_370 = (double)CONCAT44(uVar27,uVar26) * dVar2 -
                      (double)CONCAT44(uVar25,uVar24) * dVar3;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_370,dVar21);
        }
        else {
          dVar21 = (param_4->field0_0x0)._s_0.Y;
          dVar3 = (param_5->field0_0x0)._s_0.Z;
          dVar7 = (param_4->field0_0x0)._s_0.Z;
          dVar20 = dVar21 * dVar3 - dVar7 * dVar2;
          dVar2 = dVar2 * dVar22 - dVar21 * dVar19;
          dVar21 = *pdVar14;
          dVar22 = dVar7 * dVar19 - dVar3 * dVar22;
          local_378 = dVar1 * dVar22 - *pdVar15 * dVar20;
          dStack_380 = dVar21 * dVar20 - dVar1 * dVar2;
          local_388 = *pdVar15 * dVar2 - dVar21 * dVar22;
          param_5 = param_1;
          bVar10 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&local_388,__real_3e45798ee0000000);
          if (!bVar10) {
            _local_388 = *(undefined1 (*) [16])&param_4->field0_0x0;
            local_378 = *(double *)((longlong)&param_4->field0_0x0 + 0x10);
          }
        }
        uVar26 = (undefined4)local_378;
        uVar27 = (undefined4)((ulonglong)local_378 >> 0x20);
        uVar24 = local_388._8_4_;
        uVar25 = local_388._12_4_;
        uVar28 = local_388._0_4_;
        uVar29 = local_388._4_4_;
        pTVar12 = param_5;
        local_328 = (double)local_378;
      }
      else {
        pTVar12 = param_1;
        if ((((param_4->field0_0x0)._s_0.X == 0.0) &&
            (pTVar12 = param_1, (param_4->field0_0x0)._s_0.Y == 0.0)) &&
           (pTVar12 = param_1, (param_4->field0_0x0)._s_0.Z == 0.0)) {
          pdVar14 = &(param_3->field0_0x0)._s_0.Y;
          pdVar15 = &(param_3->field0_0x0)._s_0.Z;
          dVar21 = (param_2->field0_0x0)._s_0.X;
          dVar2 = (param_5->field0_0x0)._s_0.Z;
          dVar3 = (param_5->field0_0x0)._s_0.Y;
          dVar20 = (param_2->field0_0x0)._s_0.Y * *pdVar15 - (param_2->field0_0x0)._s_0.Z * *pdVar14
          ;
          dVar7 = dVar1 * (param_2->field0_0x0)._s_0.Z - dVar21 * *pdVar15;
          dVar21 = dVar21 * *pdVar14 - dVar1 * (param_2->field0_0x0)._s_0.Y;
          local_360 = dVar19 * dVar7 - dVar3 * dVar20;
          dStack_368 = dVar2 * dVar20 - dVar19 * dVar21;
          local_370 = dVar3 * dVar21 - dVar2 * dVar7;
          param_5 = param_1;
          bVar10 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&local_370,__real_3e45798ee0000000);
          pTVar12 = param_5;
          if (!bVar10) {
            _local_370 = auVar5;
            local_360 = dVar22;
          }
        }
      }
      param_5 = pTVar12;
      dVar8 = __real_3e45798ee0000000;
      dVar2 = __real_3ff0000000000000;
      pdVar14 = &(pTVar9->field0_0x0)._s_0.Z;
      pdVar16 = &(param_3->field0_0x0)._s_0.Z;
      pdVar15 = &(param_3->field0_0x0)._s_0.Y;
      dVar21 = *pdVar15;
      dVar22 = *pdVar16;
      dVar3 = (dVar22 * (double)CONCAT44(uVar25,uVar24) - dVar21 * (double)CONCAT44(uVar27,uVar26))
              + (*pdVar14 * dStack_368 - (pTVar9->field0_0x0)._s_0.Y * (double)local_360);
      dVar7 = (dVar1 * (double)CONCAT44(uVar27,uVar26) - dVar22 * (double)CONCAT44(uVar29,uVar28)) +
              ((double)local_360 * dVar19 - *pdVar14 * local_370);
      dVar20 = ((pTVar9->field0_0x0)._s_0.Y * local_370 - dStack_368 * dVar19) +
               (dVar21 * (double)CONCAT44(uVar29,uVar28) - dVar1 * (double)CONCAT44(uVar25,uVar24));
      local_320 = dVar7 * dVar7 + dVar3 * dVar3 + dVar20 * dVar20;
      if (__real_3e45798ee0000000 < local_320) {
        dVar18 = __real_3ff0000000000000 / SQRT(local_320);
        dVar3 = dVar3 * dVar18;
        dVar7 = dVar7 * dVar18;
        dVar20 = dVar20 * dVar18;
      }
      local_388 = dVar21;
      if (((dVar3 == 0.0) && (dVar7 == 0.0)) && (dVar20 == 0.0)) {
        if ((((param_2->field0_0x0)._s_0.X == 0.0) && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
           ((param_2->field0_0x0)._s_0.Z == 0.0)) {
          pTVar13 = &GetOrthogonalVector(local_e8,param_2)->field0_0x0;
        }
        else {
          local_250._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_250._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          pTVar13 = &local_250;
          local_250._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        }
        `ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex'::__l2::<lambda_1>::operator()
                  (&param_5,__return_storage_ptr__,(TVector<double> *)&pTVar13->_s_0,param_3);
      }
      else {
        dVar18 = (double)local_360 + local_328;
        dVar17 = local_370 + (double)CONCAT44(uVar29,uVar28);
        dVar23 = dStack_368 + (double)CONCAT44(uVar25,uVar24);
        if (((dVar17 == 0.0) && (dVar23 == 0.0)) && (dVar18 == 0.0)) {
          dVar18 = dVar22 - *pdVar14;
          dVar23 = dVar21 - (pTVar9->field0_0x0)._s_0.Y;
          dVar17 = dVar1 - dVar19;
        }
        local_318._s_0.X = dVar20 * dVar23 - dVar7 * dVar18;
        local_318._s_0.Y = dVar3 * dVar18 - dVar20 * dVar17;
        local_318._s_0.Z = dVar7 * dVar17 - dVar3 * dVar23;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_318._s_0,__real_3e45798ee0000000);
        dVar19 = (param_1->field0_0x0)._s_0.X;
        dVar21 = (param_1->field0_0x0)._s_0.Y;
        _local_388 = *(undefined1 (*) [16])&param_1->field0_0x0;
        uVar28 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
        uVar29 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
        local_2c8._s_0.Z = dVar7 * local_318._s_0.Z - dVar20 * local_318._s_0.Y;
        local_2c8._s_0.Y = local_318._s_0.X;
        local_2a0 = dVar20 * local_318._s_0.X - dVar3 * local_318._s_0.Z;
        local_2a8 = local_318._s_0.Y;
        local_288 = dVar3 * local_318._s_0.Y - dVar7 * local_318._s_0.X;
        local_290 = local_318._s_0.Z;
        local_2e8._s_0.X = 0.0;
        local_2e8._s_0.W = dVar2;
        local_2e8._s_0.Y = 0.0;
        local_2e8._s_0.Z = 0.0;
        local_2c8._s_0.X = dVar3;
        local_2b0 = dVar7;
        local_298 = dVar20;
        UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
                  ((TQuaternion<double> *)&local_2e8._s_0,(TMatrix3<double> *)&local_2c8._s_0);
        dVar1 = param_6;
        bVar10 = false;
        local_178 = 0;
        dStack_1e8 = local_2e8._s_0.Y;
        local_1f0._0_4_ = SUB84(local_2e8._s_0.X,0);
        local_1f0._4_4_ = (undefined4)((ulonglong)local_2e8._0_8_ >> 0x20);
        local_1e0 = local_2e8._s_0.Z;
        dStack_1d8 = local_2e8._s_0.W;
        TStack_1b0._0_4_ = (undefined4)local_1f0;
        TStack_1b0._4_4_ = local_1f0._4_4_;
        local_170 = dVar2;
        TStack_1b0._s_0.Y = local_2e8._s_0.Y;
        TStack_1b0._s_0.Z = local_2e8._s_0.Z;
        TStack_1b0._s_0.W = local_2e8._s_0.W;
        uStack_1f8 = uVar28;
        uStack_1f4 = uVar29;
        local_1f0 = local_2e8._s_0.X;
        if (dVar2 < param_6) {
          dVar22 = (param_3->field0_0x0)._s_0.X;
          dVar3 = (pTVar9->field0_0x0)._s_0.X;
          dVar7 = *pdVar15;
          local_358._s_0.X = dVar22 - dVar3;
          dVar20 = (pTVar9->field0_0x0)._s_0.Y;
          dVar18 = *pdVar16;
          dVar17 = *pdVar14;
          local_358._s_0.Y = dVar7 - dVar20;
          local_358._s_0.Z = dVar18 - dVar17;
          local_1c8 = dVar19;
          dStack_1c0 = dVar21;
          local_1b8 = uVar28;
          uStack_1b4 = uVar29;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_358._s_0,dVar8);
          if (((local_358._s_0.X != 0.0) || (local_358._s_0.Y != 0.0)) || (local_358._s_0.Z != 0.0))
          {
            dVar23 = dVar17 * dVar7 - dVar18 * dVar20;
            dVar21 = dVar18 * dVar3 - dVar17 * dVar22;
            dVar19 = dVar20 * dVar22 - dVar7 * dVar3;
            local_300._s_0.X = dVar7 * dVar19 - dVar18 * dVar21;
            local_300._s_0.Y = dVar18 * dVar23 - dVar22 * dVar19;
            local_300._s_0.Z = dVar22 * dVar21 - dVar7 * dVar23;
            UE::Math::TVector<double>::Normalize((TVector<double> *)&local_300._s_0,dVar8);
            dVar19 = local_300._s_0.Y * local_358._s_0.Y + local_300._s_0.X * local_358._s_0.X +
                     local_300._s_0.Z * local_358._s_0.Z;
            if (dVar19 == 0.0) {
              if (dVar7 * dVar20 + dVar22 * dVar3 + dVar18 * dVar17 < 0.0) {
                UE::Geometry::TQuaternion<double>::InverseMultiply
                          ((TQuaternion<double> *)&TStack_1b0._s_0,
                           (TVector<double> *)&local_238._s_0,(TVector<double> *)&local_358._s_0);
                bVar10 = true;
                local_190 = local_238._0_4_;
                uStack_18c = local_238._4_4_;
                uStack_188 = local_238._8_4_;
                uStack_184 = local_238._12_4_;
                local_180 = local_238._s_0.Z;
                dVar2 = dVar1;
              }
            }
            else {
              UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&TStack_1b0._s_0,(TVector<double> *)&local_220._s_0,
                         (TVector<double> *)&local_358._s_0);
              bVar10 = true;
              dVar2 = dVar2 / (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               SUB84(dVar19,0) &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              local_190 = local_220._0_4_;
              uStack_18c = local_220._4_4_;
              uStack_188 = local_220._8_4_;
              uStack_184 = local_220._12_4_;
              local_180 = local_220._s_0.Z;
              if (dVar1 <= dVar2) {
                dVar2 = dVar1;
              }
            }
          }
        }
        (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = local_388;
        (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dStack_380;
        (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z =
             (double)CONCAT44(uStack_1f4,uStack_1f8);
        (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = local_1f0;
        (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = dStack_1e8;
        (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = local_1e0;
        (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = TStack_1b0._s_0.W;
        (__return_storage_ptr__->InFrameScaleDirection).bIsSet = bVar10;
        if (bVar10 != false) {
          *(undefined4 *)&(__return_storage_ptr__->InFrameScaleDirection).TypedValue.field0_0x0 =
               local_190;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->InFrameScaleDirection).TypedValue.field0_0x0 + 4) =
               uStack_18c;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->InFrameScaleDirection).TypedValue.field0_0x0 + 8) =
               uStack_188;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->InFrameScaleDirection).TypedValue.field0_0x0 + 0xc)
               = uStack_184;
          (__return_storage_ptr__->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z = local_180;
        }
        __return_storage_ptr__->Scaling = dVar2;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetOrthogonalVector @ 14c73e960

TVector<double> * __cdecl
ExtrudeBoundaryEdgesLocals::GetOrthogonalVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = dVar2 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z -
          dVar1 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  dVar6 = dVar1 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X -
          dVar3 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  dVar1 = dVar3 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y -
          dVar2 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  if (((dVar4 == 0.0) && (dVar6 == 0.0)) && (dVar1 == 0.0)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetOutwardVector @ 14c73ea30

TVector<double> * __cdecl
ExtrudeBoundaryEdgesLocals::GetOutwardVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z -
       (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * (param_1->field0_0x0)._s_0.Z - dVar1 * dVar3
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar4 - dVar2 * dVar5;
  return __return_storage_ptr__;
}

// GetPlaneCutPath @ 14c73ea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
GroupEdgeInserterLocals::GetPlaneCutPath
          (FDynamicMesh3 *param_1,int param_2,FGroupEdgeSplitPoint *param_3,
          FGroupEdgeSplitPoint *param_4,
          TArray<TTuple<UE::Geometry::FMeshSurfacePoint,int>,TSizedDefaultAllocator<32>_> *param_5,
          double param_6,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_7,
          FProgressCancel *param_8)

{
  double *pdVar1;
  uint *puVar2;
  int *piVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  FProgressCancel *pFVar10;
  int iVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  TVector<double>_u_0 *pTVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  byte bVar24;
  longlong *plVar25;
  ForAnyElementType FVar26;
  longlong *plVar27;
  uint uVar28;
  ForElementType<FSetElementId> FVar29;
  ulonglong uVar30;
  ForElementType<FSetElementId> FVar31;
  uint uVar32;
  ulonglong uVar33;
  FGroupEdgeSplitPoint *pFVar34;
  ForElementType<unsigned_int> FVar35;
  uint uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  double dVar53;
  undefined1 auStackY_798 [32];
  uint local_768;
  uint local_764;
  uint local_758;
  float local_754;
  FGroupEdgeSplitPoint *local_750;
  FDynamicMesh3 *local_748;
  int local_740;
  ulonglong local_738;
  double local_730;
  FProgressCancel *local_728;
  double local_720;
  int local_718;
  uint uStack_714;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_710;
  undefined4 local_708;
  int iStack_704;
  int iStack_700;
  undefined4 uStack_6fc;
  ulonglong local_6f8;
  uint local_6f0;
  int local_6e8;
  int local_6e4;
  undefined8 local_6e0;
  undefined4 local_6d8;
  FIndex3i_u_0 local_6d0;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined1 local_6b0 [16];
  undefined1 local_698 [16];
  double local_688;
  double dStack_680;
  double local_678;
  undefined4 local_670;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_668;
  undefined1 local_660 [20];
  int iStack_64c;
  int local_640;
  undefined4 uStack_63c;
  double dStack_638;
  double dStack_630;
  undefined8 uStack_628;
  int local_620;
  undefined4 uStack_61c;
  double *local_618;
  FDynamicMesh3 *local_610;
  TVector<double> *local_608;
  int *local_600;
  FSparseArrayAllocationInfo local_5f8;
  uint local_5e8;
  undefined4 uStack_5e4;
  double dStack_5e0;
  double dStack_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  uint local_5c0;
  undefined4 uStack_5bc;
  double dStack_5b8;
  double dStack_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  uint local_598;
  undefined4 uStack_594;
  double dStack_590;
  double dStack_588;
  double dStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  uint local_570;
  undefined4 uStack_56c;
  double dStack_568;
  double dStack_560;
  double dStack_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  int local_548;
  int iStack_544;
  int iStack_540;
  int iStack_53c;
  double local_538;
  uint local_530;
  undefined4 uStack_52c;
  double dStack_528;
  undefined1 local_520 [16];
  undefined4 local_510;
  undefined4 uStack_50c;
  FMeshSurfacePoint local_508;
  uint local_4e0;
  undefined4 uStack_4dc;
  double dStack_4d8;
  undefined1 local_4d0 [16];
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  int local_4b8;
  undefined4 uStack_4b4;
  double dStack_4b0;
  undefined4 local_498;
  undefined4 uStack_494;
  double local_490;
  double dStack_488;
  double local_480;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_460;
  FMeshSurfacePoint local_448;
  FMeshSurfacePoint local_420;
  int local_3f8;
  undefined4 uStack_3f4;
  double dStack_3f0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  TVector<double> local_388;
  TVector<double> local_370;
  TVector<double> local_358;
  double local_330;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_328;
  FScriptContainerElement local_2f0 [8];
  ForAnyElementType local_2e8;
  uint local_2e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_2d8;
  undefined1 local_288 [48];
  ValueIterator local_258;
  ValueIterator local_230;
  undefined1 local_208 [144];
  undefined1 local_178 [144];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  local_728 = param_8;
  local_750 = param_4;
  local_748 = param_1;
  local_740 = param_2;
  if (param_8 == (FProgressCancel *)0x0) {
LAB_14c73eb39:
    pFVar34 = local_750;
    iVar15 = 0;
    local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.Data.ArrayNum = 0;
    local_328.Data.ArrayMax = 0;
    local_328.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_328.AllocationFlags.NumBits = 0;
    local_328.AllocationFlags.MaxBits = 0x80;
    local_328.FirstFreeIndex = -1;
    local_328.NumFreeIndices = 0;
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2e0 = 0;
    local_2d8.Elements._0_8_ = 0;
    local_2d8.Elements._8_8_ = 0;
    local_2d8.Elements._32_8_ = 0;
    local_2d8.Elements._40_4_ = 0;
    local_2d8.Elements._44_4_ = 0x80;
    local_2d8.Elements._48_4_ = 0xffffffff;
    local_2d8.Elements._52_4_ = 0;
    local_2d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2d8.HashSize = 0;
    if (param_3->bIsVertex == false) {
      pTVar19 = &UE::Geometry::FDynamicMesh3::GetEdgePoint
                           (param_1,&local_370,param_3->ElementID,param_3->EdgeTValue)->field0_0x0;
    }
    else {
      uVar33 = (ulonglong)(param_3->ElementID & 0x1ff);
      lVar20 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_3->ElementID >> 9) * 8);
      pdVar1 = (double *)(lVar20 + uVar33 * 0x18);
      pTVar19 = &local_478;
      local_478._s_0.X = *pdVar1;
      local_478._s_0.Y = pdVar1[1];
      local_478._s_0.Z = *(double *)(lVar20 + 0x10 + uVar33 * 0x18);
    }
    auVar45 = *(undefined1 (*) [16])&(pTVar19->_s_0).X;
    local_538 = (pTVar19->_s_0).Z;
    local_6b0 = auVar45;
    if (pFVar34->bIsVertex == false) {
      pTVar19 = &UE::Geometry::FDynamicMesh3::GetEdgePoint
                           (param_1,&local_358,pFVar34->ElementID,pFVar34->EdgeTValue)->field0_0x0;
    }
    else {
      uVar33 = (ulonglong)(pFVar34->ElementID & 0x1ff);
      lVar20 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)pFVar34->ElementID >> 9) * 8);
      pdVar1 = (double *)(lVar20 + uVar33 * 0x18);
      pTVar19 = &local_460;
      local_460._s_0.X = *pdVar1;
      local_460._s_0.Y = pdVar1[1];
      local_460._s_0.Z = *(double *)(lVar20 + 0x10 + uVar33 * 0x18);
    }
    dVar40 = __real_3ff0000000000000;
    local_480 = (pTVar19->_s_0).Z;
    local_698._8_4_ = auVar45._8_4_;
    local_698._0_8_ = auVar45._8_8_;
    local_698._12_4_ = auVar45._12_4_;
    local_688 = (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X - auVar45._0_8_;
    auVar45._0_8_ = (pTVar19->_s_0).Y - auVar45._8_8_;
    auVar45._8_8_ = (pTVar19->_s_0).Y;
    dVar46 = local_480 - local_538;
    local_720 = local_538;
    local_678 = SQRT(auVar45._0_8_ * auVar45._0_8_ + local_688 * local_688 + dVar46 * dVar46);
    if (local_678 <= 0.0) {
      local_688 = 0.0;
      dStack_680 = 0.0;
      local_678 = 0.0;
    }
    else {
      local_678 = __real_3ff0000000000000 / local_678;
      local_688 = local_678 * local_688;
      dStack_680 = local_678 * auVar45._0_8_;
      local_678 = local_678 * dVar46;
    }
    dVar46 = (param_3->Tangent).field0_0x0._s_0.X;
    dVar53 = (param_3->Tangent).field0_0x0._s_0.Y;
    dVar4 = (param_3->Tangent).field0_0x0._s_0.Z;
    dVar44 = dVar53 * dStack_680 + dVar46 * local_688 + dVar4 * local_678;
    dVar46 = dVar46 - dVar44 * local_688;
    dVar4 = dVar4 - dVar44 * local_678;
    dVar53 = dVar53 - dVar44 * dStack_680;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar53 * dVar53 + dVar46 * dVar46 + dVar4 * dVar4;
    auVar45 = sqrtpd(auVar45,auVar6);
    if (auVar45._0_8_ <= __real_3f1a36e2e0000000) {
      dVar46 = 0.0;
      dVar53 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar44 = __real_3ff0000000000000 / auVar45._0_8_;
      dVar46 = dVar46 * dVar44;
      dVar53 = dVar53 * dVar44;
      dVar4 = dVar4 * dVar44;
    }
    dVar44 = (pFVar34->Tangent).field0_0x0._s_0.X;
    dVar47 = (pFVar34->Tangent).field0_0x0._s_0.Y;
    dVar48 = (pFVar34->Tangent).field0_0x0._s_0.Z;
    dVar8 = dVar47 * dStack_680 + dVar44 * local_688 + dVar48 * local_678;
    dVar44 = dVar44 - dVar8 * local_688;
    dVar48 = dVar48 - dVar8 * local_678;
    dVar47 = dVar47 - dVar8 * dStack_680;
    auVar41._0_8_ = dVar48 * dVar48;
    auVar41._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar47 * dVar47 + dVar44 * dVar44 + auVar41._0_8_;
    auVar45 = sqrtpd(auVar41,auVar7);
    if (auVar45._0_8_ <= __real_3f1a36e2e0000000) {
      dVar44 = 0.0;
      dVar47 = 0.0;
      dVar48 = 0.0;
    }
    else {
      dVar8 = __real_3ff0000000000000 / auVar45._0_8_;
      dVar44 = dVar44 * dVar8;
      dVar47 = dVar47 * dVar8;
      dVar48 = dVar48 * dVar8;
    }
    if ((((dVar46 != 0.0) || (dVar53 != 0.0)) || (dVar4 != 0.0)) &&
       (((dVar44 != 0.0 || (dVar47 != 0.0)) || (dVar48 != 0.0)))) {
      if (dVar47 * dVar53 + dVar44 * dVar46 + dVar48 * dVar4 < 0.0) {
        uVar28 = (uint)__xmm_80000000000000008000000000000000;
        uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar44 = (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) ^ uVar36,
                                  SUB84(dVar44,0) ^ uVar28);
        dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^ uVar36,
                                  SUB84(dVar47,0) ^ uVar28);
        dVar48 = (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) ^ uVar36,
                                  SUB84(dVar48,0) ^ uVar28);
      }
      dVar44 = dVar44 + dVar46;
      dVar47 = dVar47 + dVar53;
      dVar48 = dVar48 + dVar4;
      dVar46 = SQRT(dVar47 * dVar47 + dVar44 * dVar44 + dVar48 * dVar48);
      if (0.0 < dVar46) {
        dVar46 = __real_3ff0000000000000 / dVar46;
        dVar44 = dVar46 * dVar44;
        dVar47 = dVar46 * dVar47;
        dVar46 = dVar46 * dVar48;
        local_730 = dVar44;
        if (((dVar44 != 0.0) || (dVar47 != 0.0)) || (dVar46 != 0.0)) {
          piVar3 = &param_5->ArrayMax;
          param_5->ArrayNum = 0;
          if (*piVar3 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,0,&param_5->AllocatorInstance,0,piVar3);
            iVar15 = param_5->ArrayNum;
          }
          dVar4 = _UNK_150689518;
          dVar53 = ___xmm_00000000000000003ff0000000000000;
          uVar28 = param_3->ElementID;
          if (param_3->bIsVertex == false) {
            local_510 = 1;
            pFVar23 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
            uVar33 = *(ulonglong *)
                      (*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 0x10);
            uVar30 = (ulonglong)((uint)uVar33 & 0x1ff);
            lVar20 = *(longlong *)(pFVar23 + ((uVar33 & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar20 + uVar30 * 0x18);
            local_3b8 = *pdVar1;
            dStack_3b0 = pdVar1[1];
            local_3a8 = *(double *)(lVar20 + 0x10 + uVar30 * 0x18);
            uVar30 = (ulonglong)((uint)(uVar33 >> 0x20) & 0x1ff);
            lVar20 = *(longlong *)(pFVar23 + (uVar33 >> 0x29) * 8);
            pdVar1 = (double *)(lVar20 + uVar30 * 0x18);
            local_3a0 = *pdVar1;
            dStack_398 = pdVar1[1];
            local_390 = *(double *)(lVar20 + 0x10 + uVar30 * 0x18);
            fVar52 = (float)((local_3b8 - (double)local_6b0._0_8_) * dVar44 +
                             (dStack_3b0 - (double)local_698._0_8_) * dVar47 +
                            (local_3a8 - local_720) * dVar46);
            dStack_528 = param_3->EdgeTValue;
            dVar48 = dVar40 - dStack_528;
            fVar51 = (float)((local_3a0 - (double)local_6b0._0_8_) * dVar44 +
                             (dStack_398 - (double)local_698._0_8_) * dVar47 +
                            (local_390 - local_720) * dVar46);
            local_530 = uVar28;
            if (iVar15 == *piVar3) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&param_5->AllocatorInstance,piVar3);
            }
            lVar20 = (longlong)iVar15;
            param_5->ArrayNum = iVar15 + 1;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = dVar48;
            pFVar23 = (param_5->AllocatorInstance).Data;
            *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_52c,local_530);
            *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_528;
            uVar38 = local_510;
            uStack_5c4 = uStack_50c;
            local_520 = auVar42;
          }
          else {
            uStack_5d0 = 0;
            dStack_5e0 = ___xmm_00000000000000003ff0000000000000;
            dStack_5d8 = _UNK_150689518;
            local_5c8 = 0;
            local_5e8 = uVar28;
            if (iVar15 == *piVar3) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&param_5->AllocatorInstance,piVar3);
            }
            auVar42._8_8_ = uStack_5d0;
            auVar42._0_8_ = dStack_5d8;
            param_5->ArrayNum = iVar15 + 1;
            lVar20 = (longlong)iVar15;
            pFVar23 = (param_5->AllocatorInstance).Data;
            *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_5e4,local_5e8);
            *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_5e0;
            uVar38 = local_5c8;
            fVar51 = local_754;
            fVar52 = local_754;
          }
          *(undefined1 (*) [16])(pFVar23 + lVar20 * 0x30 + 0x10) = auVar42;
          *(ulonglong *)(pFVar23 + lVar20 * 0x30 + 0x20) = CONCAT44(uStack_5c4,uVar38);
          *(undefined4 *)(pFVar23 + lVar20 * 0x30 + 0x28) = 0xffffffff;
          if ((param_5->ArrayNum != 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OutputPath.Num() == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                                  ,0x563,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          if ((param_5->ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          iVar15 = *(int *)((param_5->AllocatorInstance).Data + 0x20);
          if ((param_5->ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          local_754 = 1.4013e-45;
          local_738 = CONCAT44(local_738._4_4_,0xffffffff);
          local_768 = *(uint *)(param_5->AllocatorInstance).Data;
          local_758 = local_768;
LAB_14c73f2d3:
          pFVar10 = local_728;
          pFVar34 = local_750;
          bVar12 = iVar15 == 0;
          if ((local_768 != local_750->ElementID) || (bVar12 != local_750->bIsVertex)) {
            if (local_728 != (FProgressCancel *)0x0) {
              if (local_728->WasCancelled != false) goto LAB_14c740651;
              UE::Core::Private::Function::CheckCallable(*(void **)&local_728->CancelF);
              pcVar5 = *(code **)&pFVar10->CancelF;
              plVar27 = *(longlong **)&(local_728->CancelF).field_0x28;
              plVar25 = (longlong *)&(local_728->CancelF).field_0x10;
              if (plVar27 != (longlong *)0x0) {
                plVar25 = plVar27;
              }
              uVar18 = (**(code **)(*plVar25 + 8))();
              bVar14 = (bool)(*pcVar5)(uVar18);
              local_728->WasCancelled = bVar14;
              if (bVar14 != false) goto LAB_14c740651;
            }
            if (bVar12) {
              if (local_328.Data.ArrayNum != local_328.NumFreeIndices) {
                FVar26.Data = local_2f0;
                if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_2e8.Data;
                }
                for (iVar15 = *(int *)(FVar26.Data + (ulonglong)(local_2e0 - 1 & local_768) * 4);
                    iVar15 != -1;
                    iVar15 = *(int *)(local_328.Data.AllocatorInstance.Data +
                                     (longlong)iVar15 * 0xc + 4)) {
                  if (*(uint *)(local_328.Data.AllocatorInstance.Data + (longlong)iVar15 * 0xc) ==
                      local_768) goto LAB_14c740651;
                }
              }
              if (local_328.NumFreeIndices == 0) {
                iVar15 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0xc,4,1,(ForAnyElementType *)&local_328,&local_328.Data.ArrayNum
                                    ,&local_328.Data.ArrayMax);
                iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   (&local_328.AllocationFlags,1);
                FVar35 = (ForElementType<unsigned_int>)&local_328.AllocationFlags;
                if (local_328.AllocationFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar35 = local_328.AllocationFlags.AllocatorInstance.SecondaryData;
                }
                bVar24 = (byte)iVar17 & 0x1f;
                if (iVar17 < 0) {
                  iVar17 = iVar17 + 0x1f;
                  bVar24 = bVar24 - 0x20;
                }
                puVar2 = (uint *)((longlong)FVar35 + (longlong)(iVar17 >> 5) * 4);
                *puVar2 = *puVar2 & ~(1 << (bVar24 & 0x1f));
                iVar17 = local_328.FirstFreeIndex;
              }
              else {
                local_328.NumFreeIndices = local_328.NumFreeIndices + -1;
                iVar17 = *(int *)(local_328.Data.AllocatorInstance.Data +
                                 (longlong)local_328.FirstFreeIndex * 0xc + 4);
                iVar15 = local_328.FirstFreeIndex;
                if (local_328.NumFreeIndices != 0) {
                  *(undefined4 *)(local_328.Data.AllocatorInstance.Data + (longlong)iVar17 * 0xc) =
                       0xffffffff;
                }
              }
              local_328.FirstFreeIndex = iVar17;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex(&local_328,&local_5f8,iVar15);
              if (local_5f8.Pointer != (uint *)0x0) {
                *(uint *)local_5f8.Pointer = local_768;
                *(uint *)((longlong)local_5f8.Pointer + 4) = 0xffffffff;
              }
              uVar28 = *(uint *)local_5f8.Pointer;
              if ((local_328.Data.ArrayNum - local_328.NumFreeIndices != 1) &&
                 (local_328.Data.ArrayNum != local_328.NumFreeIndices)) {
                FVar26.Data = local_2f0;
                if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_2e8.Data;
                }
                for (iVar15 = *(int *)(FVar26.Data + (ulonglong)(local_2e0 - 1 & uVar28) * 4);
                    iVar15 != -1;
                    iVar15 = *(int *)(local_328.Data.AllocatorInstance.Data +
                                     (longlong)iVar15 * 0xc + 4)) {
                  if (*(uint *)(local_328.Data.AllocatorInstance.Data + (longlong)iVar15 * 0xc) ==
                      uVar28) {
                    param_1 = local_748;
                    if (iVar15 != -1) {
                      *(uint *)(local_328.Data.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
                           uVar28;
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized(&local_328,local_5f8.Index,1);
                      pFVar34 = local_750;
                      param_1 = local_748;
                      goto LAB_14c73f57e;
                    }
                    break;
                  }
                }
              }
              uVar36 = local_328.Data.ArrayNum - local_328.NumFreeIndices;
              uVar33 = 1;
              if (3 < uVar36) {
                uVar33 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
                lVar20 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                local_670 = (undefined4)lVar20;
                uVar33 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
              }
              if (((int)uVar36 < 1) || (uVar36 = (uint)uVar33, (int)uVar36 <= (int)local_2e0)) {
                uVar28 = local_2e0 - 1 & uVar28;
                *(uint *)((longlong)local_5f8.Pointer + 8) = uVar28;
                FVar26.Data = local_2f0;
                if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_2e8.Data;
                }
                uVar33 = (longlong)(int)local_2e0 - 1U & (longlong)(int)uVar28;
                *(uint *)((longlong)local_5f8.Pointer + 4) = *(uint *)(FVar26.Data + uVar33 * 4);
                *(int *)(FVar26.Data + uVar33 * 4) = local_5f8.Index;
                pFVar34 = local_750;
              }
              else {
                local_2e0 = uVar36;
                if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_2e8,0,0,4);
                }
                if (uVar36 != 0) {
                  uVar28 = uVar36;
                  if (uVar36 < 2) {
                    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                      uVar28 = 0;
                      goto LAB_14c73fab7;
                    }
                  }
                  else {
LAB_14c73fab7:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_2e8,0,uVar28,4);
                  }
                  if (0 < (int)uVar36) {
                    uVar30 = 0;
                    do {
                      FVar26.Data = local_2f0;
                      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                        FVar26.Data = local_2e8.Data;
                      }
                      uVar22 = uVar30 & (longlong)(int)uVar36 - 1U;
                      uVar30 = uVar30 + 1;
                      *(undefined4 *)(FVar26.Data + uVar22 * 4) = 0xffffffff;
                      uVar33 = uVar33 - 1;
                    } while (uVar33 != 0);
                  }
                }
                pFVar34 = local_750;
                if (local_2e0 != 0) {
                  pTStack_710 = &local_328.AllocationFlags;
                  uStack_714 = 1;
                  local_718 = 0;
                  iStack_704 = 0;
                  iStack_700 = 0;
                  if (local_328.AllocationFlags.NumBits != 0) {
                    FVar35 = (ForElementType<unsigned_int>)&local_328.AllocationFlags;
                    if (local_328.AllocationFlags.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar35 = local_328.AllocationFlags.AllocatorInstance.SecondaryData;
                    }
                    uVar28 = *(uint *)FVar35;
                    iStack_700 = 0;
                    local_718 = 0;
                    while (uVar28 == 0) {
                      iStack_700 = iStack_700 + 0x20;
                      lVar20 = (longlong)local_718;
                      local_718 = local_718 + 1;
                      if ((int)(local_328.AllocationFlags.NumBits + -1 +
                               (local_328.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                          local_718) goto LAB_14c73fbcd;
                      uVar28 = *(uint *)((uchar *)((longlong)FVar35 + 4) + lVar20 * 4);
                    }
                    uStack_714 = -uVar28 & uVar28;
                    uVar33 = (ulonglong)uStack_714 * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_6e4 = (int)lVar20;
                    iStack_704 = iStack_700 + -1 + local_6e4;
                    if (local_328.AllocationFlags.NumBits < iStack_704) {
LAB_14c73fbcd:
                      iStack_704 = local_328.AllocationFlags.NumBits;
                    }
                  }
                  local_708 = 0xffffffff;
                  local_668 = &local_328;
                  local_660._0_8_ = CONCAT44(uStack_714,local_718);
                  iStack_64c = iStack_704;
                  local_660._16_4_ = 0xffffffff;
                  unique0x10002333 = iStack_700;
                  unique0x10002337 = uStack_6fc;
                  iVar15 = iStack_704;
                  local_660._8_8_ = pTStack_710;
                  if (iStack_704 < local_328.AllocationFlags.NumBits) {
                    do {
                      pFVar23 = (local_668->Data).AllocatorInstance.Data;
                      lVar20 = (longlong)iVar15;
                      uVar28 = local_2e0 - 1 & *(uint *)(pFVar23 + lVar20 * 0xc);
                      *(uint *)(pFVar23 + lVar20 * 0xc + 8) = uVar28;
                      FVar26.Data = local_2f0;
                      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
                        FVar26.Data = local_2e8.Data;
                      }
                      uVar33 = (longlong)(int)local_2e0 - 1U & (longlong)(int)uVar28;
                      *(undefined4 *)(pFVar23 + lVar20 * 0xc + 4) =
                           *(undefined4 *)(FVar26.Data + uVar33 * 4);
                      *(int *)(FVar26.Data + uVar33 * 4) = iVar15;
                      local_660._16_4_ = local_660._16_4_ & ~local_660._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_660);
                      pFVar34 = local_750;
                      iVar15 = iStack_64c;
                    } while (iStack_64c < *(int *)(local_660._8_8_ + 0x18));
                  }
                }
              }
            }
            else {
              if (local_2d8.Elements._8_4_ != local_2d8.Elements._52_4_) {
                FVar31 = (ForElementType<FSetElementId>)&local_2d8.Hash;
                if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar31 = local_2d8.Hash.SecondaryData;
                }
                for (iVar15 = *(int *)((longlong)FVar31 +
                                      (ulonglong)(local_2d8.HashSize - 1U & local_768) * 4);
                    iVar15 != -1;
                    iVar15 = *(int *)(local_2d8.Elements._0_8_ + 4 + (longlong)iVar15 * 0xc)) {
                  if (*(uint *)(local_2d8.Elements._0_8_ + (longlong)iVar15 * 0xc) == local_768)
                  goto LAB_14c740651;
                }
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_2d8,&local_6e8,(bool *)&local_758);
            }
LAB_14c73f57e:
            if (((param_1->EdgeRefCounts).UsedCount <= (int)local_754) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointCount < Mesh.EdgeCount()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                                    ,0x58a,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            if (bVar12) {
              uStack_628 = 0;
              local_640 = -1;
              dStack_638 = dVar53;
              dStack_630 = dVar4;
              uVar36 = param_5->ArrayNum - 1;
              local_620 = 0;
              uVar28 = 0;
              if ((int)uVar36 < param_5->ArrayNum) {
                uVar28 = ~uVar36 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              UE::Geometry::FMeshSurfacePoint::Pos
                        ((FMeshSurfacePoint *)
                         ((param_5->AllocatorInstance).Data +
                         (longlong)(param_5->ArrayNum + -1) * 0x30),&local_388,param_1);
              local_764 = 0xffffffff;
              UE::Geometry::FDynamicMesh3::VtxTrianglesItr
                        (param_1,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator>
                                  *)local_288,local_768);
              UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_208,&local_258,&local_230,
                         (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_288);
              UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
              TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                        ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_178,&local_230,&local_230,
                         (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_288);
LAB_14c73f6c0:
              do {
                uVar38 = local_208._88_4_;
                if ((((local_208._0_8_ == local_178._0_8_) && (local_208._8_4_ == local_178._8_4_))
                    && (local_208._24_4_ == local_178._24_4_)) &&
                   (local_208._28_4_ == local_178._28_4_)) goto LAB_14c73fe37;
                if ((local_208._88_4_ != (uint)local_738) &&
                   (iVar15 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,local_208._88_4_)
                   , iVar15 == local_740)) {
                  if (pFVar34->bIsVertex == false) {
                    lVar20 = *(longlong *)
                              ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)uVar38 >> 9) * 8);
                    iVar15 = pFVar34->ElementID;
                    local_6d8 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0xc);
                    lVar21 = 0;
                    local_6e0 = *(undefined8 *)(lVar20 + (ulonglong)(uVar38 & 0x1ff) * 0xc);
                    do {
                      if (iVar15 == *(int *)((longlong)&local_6e0 + lVar21 * 4)) {
                        dStack_4b0 = pFVar34->EdgeTValue;
                        dVar40 = dVar40 - dStack_4b0;
                        iVar17 = param_5->ArrayNum;
                        local_498 = 1;
                        local_4b8 = iVar15;
                        if (iVar17 == param_5->ArrayMax) {
                          iVar17 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
                        }
                        lVar20 = (longlong)iVar17;
                        param_5->ArrayNum = iVar17 + 1;
                        dVar46 = 0.0;
                        pFVar23 = (param_5->AllocatorInstance).Data;
                        *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_4b4,local_4b8);
                        *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_4b0;
                        uVar38 = local_498;
                        uStack_574 = uStack_494;
                        goto LAB_14c7404a2;
                      }
                      lVar21 = lVar21 + 1;
                    } while (lVar21 < 3);
                  }
                  lVar20 = *(longlong *)
                            ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                            (ulonglong)((uint)uVar38 >> 9) * 8);
                  local_6f0 = *(uint *)(lVar20 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0xc);
                  local_6f8 = *(ulonglong *)(lVar20 + (ulonglong)(uVar38 & 0x1ff) * 0xc);
                  uVar28 = (uint)local_6f8;
                  if ((uint)local_6f8 == local_768) {
                    uVar28 = local_6f0;
                  }
                  uVar33 = local_6f8 >> 0x20;
                  if ((uint)(local_6f8 >> 0x20) == local_768) {
                    uVar33 = (ulonglong)local_6f0;
                  }
                  uVar36 = (uint)uVar33;
                  if ((pFVar34->bIsVertex != false) &&
                     ((uVar32 = local_750->ElementID, uVar32 == uVar28 || (uVar32 == uVar36)))) {
                    dStack_580 = 0.0;
                    dStack_590 = dVar53;
                    dStack_588 = dVar4;
                    iVar15 = param_5->ArrayNum;
                    local_578 = 0;
                    local_598 = uVar32;
                    if (iVar15 == param_5->ArrayMax) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
                    }
                    lVar20 = (longlong)iVar15;
                    param_5->ArrayNum = iVar15 + 1;
                    pFVar23 = (param_5->AllocatorInstance).Data;
                    *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_594,local_598);
                    *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_590;
                    uVar38 = local_578;
                    dVar40 = dStack_588;
                    dVar46 = dStack_580;
LAB_14c7404a2:
                    *(double *)(pFVar23 + lVar20 * 0x30 + 0x10) = dVar40;
                    *(double *)(pFVar23 + lVar20 * 0x30 + 0x10 + 8) = dVar46;
                    *(ulonglong *)(pFVar23 + lVar20 * 0x30 + 0x20) = CONCAT44(uStack_574,uVar38);
                    *(undefined4 *)(pFVar23 + lVar20 * 0x30 + 0x28) = 0xffffffff;
                    if (local_178._96_8_ != 0) {
                      plVar27 = (longlong *)(local_178 + 0x70);
                      if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
                        plVar27 = (longlong *)local_178._136_8_;
                      }
                      (**(code **)(*plVar27 + 0x10))();
                    }
                    if (local_208._96_8_ != 0) {
                      plVar27 = (longlong *)(local_208 + 0x70);
                      if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
                        plVar27 = (longlong *)local_208._136_8_;
                      }
                      (**(code **)(*plVar27 + 0x10))();
                    }
                    if (local_288._0_8_ != 0) {
                      plVar27 = (longlong *)(local_288 + 0x10);
                      if ((longlong *)local_288._40_8_ != (longlong *)0x0) {
                        plVar27 = (longlong *)local_288._40_8_;
                      }
                      (**(code **)(*plVar27 + 0x10))();
                    }
                    goto LAB_14c740524;
                  }
                  pFVar23 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
                  lVar20 = *(longlong *)(pFVar23 + (ulonglong)(uVar28 >> 9) * 8);
                  pdVar1 = (double *)(lVar20 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
                  local_3d0 = *pdVar1;
                  dStack_3c8 = pdVar1[1];
                  local_3c0 = *(double *)(lVar20 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
                  lVar20 = *(longlong *)(pFVar23 + (uVar33 >> 9) * 8);
                  pdVar1 = (double *)(lVar20 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
                  local_330 = *(double *)(lVar20 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
                  local_618 = &local_688;
                  local_608 = &local_388;
                  local_600 = &local_640;
                  fVar49 = (float)((local_3d0 - (double)local_6b0._0_8_) * dVar44 +
                                   (dStack_3c8 - (double)local_698._0_8_) * dVar47 +
                                  (local_3c0 - local_720) * dVar46);
                  fVar50 = (float)((*pdVar1 - (double)local_6b0._0_8_) * dVar44 +
                                   (pdVar1[1] - (double)local_698._0_8_) * dVar47 +
                                  (local_330 - local_720) * dVar46);
                  fVar37 = (float)((uint)fVar50 & __xmm_7fffffff7fffffff7fffffff7fffffff);
                  bVar12 = false;
                  local_610 = param_1;
                  if ((double)(float)((uint)fVar49 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                      param_6) {
                    if (*(int *)&(param_7->Elements).field_0x8 !=
                        *(int *)&(param_7->Elements).field_0x34) {
                      FVar31 = (param_7->Hash).SecondaryData;
                      FVar29 = (ForElementType<FSetElementId>)&param_7->Hash;
                      if (FVar31 != (ForElementType<FSetElementId>)0x0) {
                        FVar29 = FVar31;
                      }
                      iVar15 = *(int *)((longlong)FVar29 +
                                       (ulonglong)(param_7->HashSize - 1U & uVar28) * 4);
                      if (iVar15 != -1) {
                        do {
                          if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar15 * 0xc) ==
                              uVar28) goto LAB_14c73f97b;
                          iVar15 = *(int *)(*(longlong *)&param_7->Elements + 4 +
                                           (longlong)iVar15 * 0xc);
                        } while (iVar15 != -1);
                      }
                    }
                    local_448.BaryCoord.field0_0x0._s_0.Z = 0.0;
                    bVar12 = true;
                    local_448.PointType = Vertex;
                    local_448.BaryCoord.field0_0x0._s_0.X = dVar53;
                    local_448.BaryCoord.field0_0x0._s_0.Y = dVar4;
                    local_448.ElementID = uVar28;
                    `GroupEdgeInserterLocals::GetPlaneCutPath'::__l56::<lambda_1>::operator()
                              (&local_618,&local_448);
                  }
LAB_14c73f97b:
                  param_1 = local_748;
                  if ((double)fVar37 <= param_6) {
                    if (*(int *)&(param_7->Elements).field_0x8 !=
                        *(int *)&(param_7->Elements).field_0x34) {
                      FVar31 = (param_7->Hash).SecondaryData;
                      FVar29 = (ForElementType<FSetElementId>)&param_7->Hash;
                      if (FVar31 != (ForElementType<FSetElementId>)0x0) {
                        FVar29 = FVar31;
                      }
                      iVar15 = *(int *)((longlong)FVar29 + (param_7->HashSize - 1 & uVar33) * 4);
                      if (iVar15 != -1) {
                        do {
                          if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar15 * 0xc) ==
                              uVar36) goto LAB_14c73fd36;
                          iVar15 = *(int *)(*(longlong *)&param_7->Elements + 4 +
                                           (longlong)iVar15 * 0xc);
                        } while (iVar15 != -1);
                      }
                    }
                    local_420.BaryCoord.field0_0x0._s_0.Z = 0.0;
                    local_420.BaryCoord.field0_0x0._s_0.X = dVar53;
                    local_420.BaryCoord.field0_0x0._s_0.Y = dVar4;
                    local_420.PointType = Vertex;
                    local_420.ElementID = uVar36;
                    `GroupEdgeInserterLocals::GetPlaneCutPath'::__l56::<lambda_1>::operator()
                              (&local_618,&local_420);
                    param_1 = local_748;
                    dVar44 = local_730;
                  }
                  else {
LAB_14c73fd36:
                    dVar44 = local_730;
                    if ((!bVar12) && (fVar50 * fVar49 < 0.0)) {
                      local_508.ElementID =
                           UE::Geometry::FDynamicMesh3::FindEdgeFromTri
                                     (local_748,uVar28,uVar36,uVar38);
                      uVar36 = (uint)local_508.ElementID >> 9;
                      uVar32 = local_508.ElementID & 0x1ff;
                      local_508.BaryCoord.field0_0x0._s_0.X = (double)(fVar49 / (fVar49 - fVar50));
                      if (uVar28 != *(uint *)(*(longlong *)
                                               ((param_1->Edges).Blocks.AllocatorInstance.Data +
                                               (ulonglong)uVar36 * 8) + (ulonglong)uVar32 * 0x10)) {
                        local_508.BaryCoord.field0_0x0._s_0.X =
                             dVar40 - local_508.BaryCoord.field0_0x0._s_0.X;
                      }
                      local_508.BaryCoord.field0_0x0._s_0.Y =
                           dVar40 - local_508.BaryCoord.field0_0x0._s_0.X;
                      local_508.BaryCoord.field0_0x0._s_0.Z = 0.0;
                      local_508.PointType = Edge;
                      bVar12 = `GroupEdgeInserterLocals::GetPlaneCutPath'::__l56::<lambda_1>::
                               operator()(&local_618,&local_508);
                      dVar44 = local_730;
                      if (bVar12) {
                        fVar51 = fVar50;
                        fVar52 = fVar49;
                        if (uVar28 != *(uint *)(*(longlong *)
                                                 ((param_1->Edges).Blocks.AllocatorInstance.Data +
                                                 (ulonglong)uVar36 * 8) + (ulonglong)uVar32 * 0x10))
                        {
                          fVar51 = fVar49;
                          fVar52 = fVar50;
                        }
                        local_764 = uVar38;
                        UE::Geometry::
                        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                                    *)local_208);
                        pFVar34 = local_750;
                        goto LAB_14c73f6c0;
                      }
                    }
                  }
                }
                UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
                goto_next((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)
                          local_208);
                pFVar34 = local_750;
              } while( true );
            }
            lVar20 = *(longlong *)
                      ((param_1->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_768 >> 9) * 8);
            piVar3 = (int *)(lVar20 + (ulonglong)(local_768 & 0x1ff) * 0x10);
            iVar15 = *piVar3;
            iStack_544 = piVar3[1];
            iStack_540 = piVar3[2];
            iStack_53c = piVar3[3];
            uVar33 = *(ulonglong *)(lVar20 + 8 + (ulonglong)(local_768 & 0x1ff) * 0x10);
            local_548 = iVar15;
            if ((int)uVar33 == (int)local_738) {
              uVar33 = uVar33 >> 0x20;
            }
            else if ((int)(uVar33 >> 0x20) == (int)local_738) {
              uVar33 = uVar33 & 0xffffffff;
            }
            else {
              iVar17 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,(int)uVar33);
              uVar30 = uVar33 >> 0x20;
              if (iVar17 == local_740) {
                uVar30 = uVar33;
              }
              uVar33 = uVar30 & 0xffffffff;
            }
            iVar17 = local_740;
            uVar28 = (uint)uVar33;
            local_738 = uVar33;
            if ((uVar28 == 0xffffffff) ||
               (iVar16 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,uVar28),
               iVar11 = iStack_544, iVar16 != iVar17)) goto LAB_14c740651;
            uVar30 = (ulonglong)(uVar28 & 0x1ff);
            lVar20 = *(longlong *)
                      ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar33 >> 9) * 8);
            local_6d0._0_8_ = *(undefined8 *)(lVar20 + uVar30 * 0xc);
            local_6d0._s_0.C = *(int *)(lVar20 + 8 + uVar30 * 0xc);
            uVar28 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                               (iVar15,iStack_544,(FIndex3i *)&local_6d0._s_0);
            param_1 = local_748;
            if (local_750->bIsVertex == false) {
              iVar17 = local_750->ElementID;
              lVar20 = *(longlong *)
                        ((local_748->TriangleEdges).Blocks.AllocatorInstance.Data +
                        (uVar33 >> 9) * 8);
              local_6b8 = *(undefined4 *)(lVar20 + 8 + uVar30 * 0xc);
              lVar21 = 0;
              local_6c0 = *(undefined8 *)(lVar20 + uVar30 * 0xc);
              do {
                if (iVar17 == *(int *)((longlong)&local_6c0 + lVar21 * 4)) {
                  dStack_3f0 = local_750->EdgeTValue;
                  dVar40 = dVar40 - dStack_3f0;
                  iVar15 = param_5->ArrayNum;
                  local_3d8 = 1;
                  local_3f8 = iVar17;
                  if (iVar15 == param_5->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
                  }
                  lVar20 = (longlong)iVar15;
                  param_5->ArrayNum = iVar15 + 1;
                  dVar46 = 0.0;
                  pFVar23 = (param_5->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_3f4,local_3f8);
                  *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_3f0;
                  uVar38 = local_3d8;
                  uStack_54c = uStack_3d4;
                  goto LAB_14c740596;
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 < 3);
            }
            else {
              uVar36 = local_750->ElementID;
              if (uVar36 == uVar28) {
                dStack_558 = 0.0;
                dStack_568 = dVar53;
                dStack_560 = dVar4;
                iVar15 = param_5->ArrayNum;
                local_550 = 0;
                local_570 = uVar36;
                if (iVar15 == param_5->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
                }
                lVar20 = (longlong)iVar15;
                param_5->ArrayNum = iVar15 + 1;
                pFVar23 = (param_5->AllocatorInstance).Data;
                *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_56c,local_570);
                *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_568;
                uVar38 = local_550;
                dVar40 = dStack_560;
                dVar46 = dStack_558;
LAB_14c740596:
                *(double *)(pFVar23 + lVar20 * 0x30 + 0x10) = dVar40;
                *(double *)(pFVar23 + lVar20 * 0x30 + 0x10 + 8) = dVar46;
                bVar12 = true;
                *(ulonglong *)(pFVar23 + lVar20 * 0x30 + 0x20) = CONCAT44(uStack_54c,uVar38);
                *(undefined4 *)(pFVar23 + lVar20 * 0x30 + 0x28) = 0xffffffff;
                goto LAB_14c740653;
              }
            }
            lVar20 = *(longlong *)
                      ((local_748->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar28 >> 9) * 8);
            pdVar1 = (double *)(lVar20 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
            local_490 = *pdVar1;
            dStack_488 = pdVar1[1];
            local_480 = *(double *)(lVar20 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
            fVar37 = (float)((local_490 - (double)local_6b0._0_8_) * dVar44 +
                             (dStack_488 - (double)local_698._0_8_) * dVar47 +
                            (local_480 - local_720) * dVar46);
            if (param_6 < (double)(float)((uint)fVar37 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
LAB_14c7401a4:
              if ((0.0 <= fVar52 * fVar37) &&
                 (fVar52 = fVar51, iVar15 = iVar11, 0.0 <= fVar51 * fVar37)) goto LAB_14c740651;
              local_4e0 = UE::Geometry::FDynamicMesh3::FindEdge(local_748,uVar28,iVar15);
              dStack_4d8 = (double)(fVar37 / (fVar37 - fVar52));
              fVar51 = fVar52;
              if (uVar28 != *(uint *)(*(longlong *)
                                       ((param_1->Edges).Blocks.AllocatorInstance.Data +
                                       (ulonglong)(local_4e0 >> 9) * 8) +
                                     (ulonglong)(local_4e0 & 0x1ff) * 0x10)) {
                dStack_4d8 = dVar40 - dStack_4d8;
                fVar51 = fVar37;
                fVar37 = fVar52;
              }
              dVar48 = dVar40 - dStack_4d8;
              local_4c0 = 1;
              iVar15 = param_5->ArrayNum;
              if (iVar15 == param_5->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
              }
              lVar20 = (longlong)iVar15;
              param_5->ArrayNum = iVar15 + 1;
              auVar43._8_8_ = 0;
              auVar43._0_8_ = dVar48;
              pFVar23 = (param_5->AllocatorInstance).Data;
              *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_4dc,local_4e0);
              *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_4d8;
              uVar38 = local_4c0;
              uVar39 = uStack_4bc;
              local_4d0 = auVar43;
            }
            else {
              if (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34)
              {
                FVar31 = (param_7->Hash).SecondaryData;
                FVar29 = (ForElementType<FSetElementId>)&param_7->Hash;
                if (FVar31 != (ForElementType<FSetElementId>)0x0) {
                  FVar29 = FVar31;
                }
                iVar17 = *(int *)((longlong)FVar29 +
                                 (ulonglong)(param_7->HashSize - 1U & uVar28) * 4);
                if (iVar17 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&param_7->Elements + (longlong)iVar17 * 0xc) ==
                        uVar28) {
                      if (iVar17 != -1) goto LAB_14c7401a4;
                      break;
                    }
                    iVar17 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar17 * 0xc);
                  } while (iVar17 != -1);
                }
              }
              uStack_5a8 = 0;
              dStack_5b8 = dVar53;
              dStack_5b0 = dVar4;
              iVar15 = param_5->ArrayNum;
              local_5a0 = 0;
              local_5c0 = uVar28;
              if (iVar15 == param_5->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
              }
              auVar43._8_8_ = uStack_5a8;
              auVar43._0_8_ = dStack_5b0;
              param_5->ArrayNum = iVar15 + 1;
              lVar20 = (longlong)iVar15;
              pFVar23 = (param_5->AllocatorInstance).Data;
              *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_5bc,local_5c0);
              *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_5b8;
              param_1 = local_748;
              uVar38 = local_5a0;
              uVar39 = uStack_59c;
              fVar37 = fVar52;
            }
            *(undefined1 (*) [16])(pFVar23 + lVar20 * 0x30 + 0x10) = auVar43;
            *(ulonglong *)(pFVar23 + lVar20 * 0x30 + 0x20) = CONCAT44(uVar39,uVar38);
            *(undefined4 *)(pFVar23 + lVar20 * 0x30 + 0x28) = 0xffffffff;
            fVar52 = fVar37;
            goto LAB_14c7402b7;
          }
LAB_14c740524:
          bVar12 = true;
          goto LAB_14c740653;
        }
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2424968668812150088>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                          ,0x548,"false");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
    }
LAB_14c740651:
    bVar12 = false;
LAB_14c740653:
    local_2d8.HashSize = 0;
    if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2d8.Elements);
    local_2e0 = 0;
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_328);
  }
  else {
    if (param_8->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_8->CancelF);
      pcVar5 = *(code **)&param_8->CancelF;
      plVar27 = *(longlong **)&(param_8->CancelF).field_0x28;
      plVar25 = (longlong *)&(param_8->CancelF).field_0x10;
      if (plVar27 != (longlong *)0x0) {
        plVar25 = plVar27;
      }
      uVar18 = (**(code **)(*plVar25 + 8))();
      bVar12 = (bool)(*pcVar5)(uVar18);
      param_8->WasCancelled = bVar12;
      if (bVar12 == false) goto LAB_14c73eb39;
    }
    bVar12 = false;
  }
  return bVar12;
LAB_14c73fe37:
  if (local_178._96_8_ != 0) {
    plVar27 = (longlong *)(local_178 + 0x70);
    if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_178._136_8_;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (local_208._96_8_ != 0) {
    plVar27 = (longlong *)(local_208 + 0x70);
    if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_208._136_8_;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (local_288._0_8_ != 0) {
    plVar27 = (longlong *)(local_288 + 0x10);
    if ((longlong *)local_288._40_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_288._40_8_;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (local_640 == -1) goto LAB_14c740651;
  iVar15 = param_5->ArrayNum;
  if (iVar15 == param_5->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar15 + 1;
  lVar20 = (longlong)iVar15;
  pFVar23 = (param_5->AllocatorInstance).Data;
  *(ulonglong *)(pFVar23 + lVar20 * 0x30) = CONCAT44(uStack_63c,local_640);
  *(double *)(pFVar23 + lVar20 * 0x30 + 8) = dStack_638;
  auVar9._8_8_ = uStack_628;
  auVar9._0_8_ = dStack_630;
  *(undefined1 (*) [16])(pFVar23 + lVar20 * 0x30 + 0x10) = auVar9;
  *(ulonglong *)(pFVar23 + lVar20 * 0x30 + 0x20) = CONCAT44(uStack_61c,local_620);
  *(undefined4 *)(pFVar23 + lVar20 * 0x30 + 0x28) = 0xffffffff;
  local_738 = 0xffffffff;
  if (local_620 == 1) {
    local_738 = (ulonglong)local_764;
  }
LAB_14c7402b7:
  local_754 = (float)((int)local_754 + 1);
  if ((local_754 != (float)param_5->ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PointCount == OutputPath.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                          ,0x668,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  uVar36 = param_5->ArrayNum - 1;
  uVar28 = 0;
  if ((int)uVar36 < param_5->ArrayNum) {
    uVar28 = ~uVar36 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  iVar15 = param_5->ArrayNum;
  local_768 = *(uint *)((param_5->AllocatorInstance).Data + ((longlong)iVar15 + -1) * 0x30);
  uVar28 = 0;
  if ((int)(iVar15 - 1U) < iVar15) {
    uVar28 = ~(iVar15 - 1U) >> 0x1f;
  }
  local_758 = local_768;
  if ((uVar28 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)((param_5->AllocatorInstance).Data + (longlong)param_5->ArrayNum * 0x30 + -0x10);
  goto LAB_14c73f2d3;
}

// HasMultipleGroups @ 14c7444a0

bool __cdecl FaceGroupUtil::HasMultipleGroups(FDynamicMesh3 *param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  if ((param_1->TriangleGroups).bIsSet != false) {
    uVar2 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 + uVar2;
    uVar7 = 0;
    if ((uVar11 != 0) &&
       (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar7 = 0,
       0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      uVar6 = 1;
      uVar7 = 1;
      if (1 < (int)uVar11) {
        do {
          lVar1 = (ulonglong)(uVar6 & 0x1ff) * 2;
          if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar6 >> 9) * 8)) != 0) &&
             (uVar7 = uVar6,
             *(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar6 >> 9) * 8)) != -1)) break;
          uVar6 = uVar6 + 1;
          uVar7 = uVar6;
        } while ((int)uVar6 < (int)uVar11);
      }
    }
    if (uVar7 != uVar11) {
      iVar9 = -1;
      iVar10 = 0;
LAB_14c744558:
      do {
        if (((int)uVar7 < 0) ||
           ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 + uVar2) <= (int)uVar7)) {
LAB_14c7445ae:
          iVar8 = 0;
        }
        else {
          lVar1 = (ulonglong)(uVar7 >> 9) * 8;
          if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + lVar1) +
                                          (ulonglong)(uVar7 & 0x1ff) * 2) - 1U)) goto LAB_14c7445ae;
          iVar8 = *(int *)(*(longlong *)
                            ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                            lVar1) + (ulonglong)(uVar7 & 0x1ff) * 4);
        }
        if ((iVar8 != iVar9) && (bVar4 = 1 < iVar10, iVar9 = iVar8, iVar10 = iVar10 + 1, bVar4)) {
          return true;
        }
        uVar7 = uVar7 + 1;
        if ((int)uVar7 < (int)uVar11) {
          pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          do {
            lVar1 = (ulonglong)(uVar7 >> 9) * 8;
            lVar5 = (ulonglong)(uVar7 & 0x1ff) * 2;
            if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
               (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) goto LAB_14c744558;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar11);
        }
      } while (uVar7 != uVar11);
    }
  }
  return false;
}

// InsertEdgeLoopEdgesInDirection @ 14c74cae0

bool __cdecl
GroupEdgeInserterLocals::InsertEdgeLoopEdgesInDirection
          (FEdgeLoopInsertionParams *param_1,
          TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
          *param_2,int param_3,int param_4,int param_5,int param_6,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_7,int *param_8,
          FOptionalOutputParams *param_9,FProgressCancel *param_10)

{
  FGroupBoundary *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FGroupTopology *pFVar5;
  FDynamicMesh3 *pFVar6;
  FProgressCancel *pFVar7;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_> *pTVar8
  ;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  FGroup *pFVar15;
  longlong *plVar16;
  ForElementType<FSetElementId> FVar17;
  ForElementType<FSetElementId> FVar18;
  FOptionalOutputParams *pFVar19;
  longlong lVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  uint local_res18 [2];
  uint local_res20 [2];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
  *local_68;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
  *local_60;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
  local_58;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
  local_48;
  
  this = param_7;
  *param_8 = 0;
  if (*(int *)&(param_7->Elements).field_0x8 != *(int *)&(param_7->Elements).field_0x34) {
    FVar17 = (param_7->Hash).SecondaryData;
    if (FVar17 == (ForElementType<FSetElementId>)0x0) {
      FVar17 = (ForElementType<FSetElementId>)&param_7->Hash;
    }
    iVar12 = *(int *)((longlong)FVar17 + (ulonglong)(param_7->HashSize - 1U & param_3) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_7->Elements + (longlong)iVar12 * 0xc) == param_3) {
          return true;
        }
        iVar12 = *(int *)(*(longlong *)&param_7->Elements + 4 + (longlong)iVar12 * 0xc);
      } while (iVar12 != -1);
    }
  }
  local_58.ArrayNum = param_2->ArrayNum;
  lVar20 = (longlong)local_58.ArrayNum;
  if (local_58.ArrayNum == 0) {
    return true;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
             &local_58.ArrayMax);
  memcpy(local_58.AllocatorInstance.Data,pFVar2,lVar20 * 0x28);
  pFVar7 = param_10;
  local_68 = &local_58;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60 = &local_48;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  bVar9 = true;
  do {
    if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
      FVar17 = (this->Hash).SecondaryData;
      FVar18 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar17 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = FVar17;
      }
      iVar12 = *(int *)((longlong)FVar18 + (ulonglong)(this->HashSize - 1U & param_3) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0xc) == param_3)
          goto LAB_14c74d0f3;
          iVar12 = *(int *)(*(longlong *)&this->Elements + 4 + (longlong)iVar12 * 0xc);
        } while (iVar12 != -1);
      }
    }
    if (pFVar7 != (FProgressCancel *)0x0) {
      if (pFVar7->WasCancelled == false) {
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar7->CancelF);
        plVar3 = *(longlong **)&(pFVar7->CancelF).field_0x28;
        pcVar4 = *(code **)&pFVar7->CancelF;
        plVar16 = (longlong *)&(pFVar7->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar16 = plVar3;
        }
        uVar14 = (**(code **)(*plVar16 + 8))();
        bVar9 = (bool)(*pcVar4)(uVar14);
        pFVar7->WasCancelled = bVar9;
        if (bVar9 == false) goto LAB_14c74cc7f;
      }
      goto LAB_14c74d097;
    }
LAB_14c74cc7f:
    pFVar15 = UE::Geometry::FGroupTopology::FindGroupByID(param_1->Topology,param_3);
    if ((pFVar15 == (FGroup *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentGroup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                           ,0x11f,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    lVar20 = (longlong)param_6;
    uVar13 = 0;
    if (param_6 < (pFVar15->Boundaries).ArrayNum) {
      uVar13 = (uint)~param_6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pTVar8 = local_60;
    pFVar19 = param_9;
    pFVar1 = (FGroupBoundary *)((pFVar15->Boundaries).AllocatorInstance.Data + lVar20 * 0x28);
    if (local_res20[0] == param_1->GroupEdgeID) {
      bVar9 = ConnectEndpoints(param_1,param_3,pFVar1,local_68,param_2,&local_74,param_9,pFVar7);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this,&local_6c,(bool *)local_res18);
      *param_8 = *param_8 + (uint)(1 < local_74);
      goto LAB_14c74d0f3;
    }
    bVar9 = InsertNewVertexEndpoints(param_1,local_res20[0],param_5,local_60,param_9);
    if (!bVar9) {
LAB_14c74d097:
      bVar9 = false;
      goto LAB_14c74d0f3;
    }
    if (pFVar7 != (FProgressCancel *)0x0) {
      if (pFVar7->WasCancelled == false) {
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar7->CancelF);
        plVar3 = *(longlong **)&(pFVar7->CancelF).field_0x28;
        pcVar4 = *(code **)&pFVar7->CancelF;
        plVar16 = (longlong *)&(pFVar7->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar16 = plVar3;
        }
        uVar14 = (**(code **)(*plVar16 + 8))();
        bVar9 = (bool)(*pcVar4)(uVar14);
        pFVar7->WasCancelled = bVar9;
        pFVar19 = param_9;
        if (bVar9 == false) goto LAB_14c74cd90;
      }
      goto LAB_14c74d097;
    }
LAB_14c74cd90:
    if (pTVar8->ArrayNum == 0) {
      bVar9 = true;
      goto LAB_14c74d0f3;
    }
    if (param_1->Mode == Retriangulate) {
      bVar9 = ConnectMultipleUsingRetriangulation
                        (param_1->Mesh,param_1->Topology,param_3,pFVar1,local_68,pTVar8,&local_78,
                         pFVar19,pFVar7);
    }
    else if (param_1->Mode == PlaneCut) {
      bVar9 = ConnectMultipleUsingPlaneCut
                        (param_1->Mesh,param_1->Topology,param_3,pFVar1,local_68,pTVar8,
                         param_1->VertexTolerance,param_1->bSimplifyAlongPath,&local_78,pFVar19,
                         pFVar7);
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x235,
                         L"GroupEdgeInserter:ConnectEndpoints: Unimplemented insertion method.");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      bVar9 = false;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (this,&local_70,(bool *)local_res18);
    *param_8 = *param_8 + (uint)(1 < local_78);
    if (bVar9 == false) goto LAB_14c74d097;
    if (pFVar7 != (FProgressCancel *)0x0) {
      if (pFVar7->WasCancelled == false) {
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar7->CancelF);
        plVar3 = *(longlong **)&(pFVar7->CancelF).field_0x28;
        pcVar4 = *(code **)&pFVar7->CancelF;
        plVar16 = (longlong *)&(pFVar7->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar16 = plVar3;
        }
        uVar14 = (**(code **)(*plVar16 + 8))();
        bVar11 = (bool)(*pcVar4)(uVar14);
        pFVar7->WasCancelled = bVar11;
        if (bVar11 == false) goto LAB_14c74ced3;
      }
      goto LAB_14c74d097;
    }
LAB_14c74ced3:
    lVar20 = (longlong)(int)local_res20[0];
    pFVar5 = param_1->Topology;
    pFVar6 = pFVar5->Mesh;
    uVar13 = 0;
    if ((int)local_res20[0] < (pFVar5->Edges).ArrayNum) {
      uVar13 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pFVar2 = (pFVar5->Edges).AllocatorInstance.Data;
    if ((*(int *)(pFVar2 + lVar20 * 0x50 + 0x28) < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    uVar13 = **(uint **)(pFVar2 + lVar20 * 0x50 + 0x20);
    if (*(int *)(*(longlong *)
                  ((pFVar6->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                 0xc + (ulonglong)(uVar13 & 0x1ff) * 0x10) == -1) goto LAB_14c74d0f3;
    lVar20 = (longlong)(int)local_res20[0];
    pFVar5 = param_1->Topology;
    uVar13 = 0;
    if ((int)local_res20[0] < (pFVar5->Edges).ArrayNum) {
      uVar13 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pFVar2 = (pFVar5->Edges).AllocatorInstance.Data;
    if (((*(uint *)(pFVar2 + lVar20 * 0x50) != param_3) &&
        (*(uint *)(pFVar2 + lVar20 * 0x50 + 4) != param_3)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Groups.A == GroupID || Groups.B == GroupID",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                            ,0x119,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pTVar8 = local_60;
    uVar13 = *(uint *)(pFVar2 + lVar20 * 0x50);
    if (uVar13 == param_3) {
      uVar13 = *(uint *)(pFVar2 + lVar20 * 0x50 + 4);
    }
    local_60 = local_68;
    local_68 = pTVar8;
    local_res18[0] = uVar13;
    bVar11 = GetEdgeLoopOpposingEdgeAndCorner
                       (param_1->Topology,uVar13,local_res20[0],param_5,(int *)local_res20,&param_5,
                        &param_6,param_9);
    this = param_7;
    param_3 = uVar13;
    if (!bVar11) {
LAB_14c74d0f3:
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return bVar9;
    }
  } while( true );
}

// InsertNewVertexEndpoints @ 14c74d9b0

bool __cdecl
GroupEdgeInserterLocals::InsertNewVertexEndpoints
          (FEdgeLoopInsertionParams *param_1,int param_2,int param_3,
          TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
          *param_4,FOptionalOutputParams *param_5)

{
  undefined4 *puVar1;
  double *pdVar2;
  FGroupTopology *pFVar3;
  void *_Src;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined4 uVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6 [6];
  TArray<double,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<double,TSizedDefaultAllocator<32>_> local_190;
  double local_180;
  int local_178;
  int local_174;
  FScriptContainerElement *local_170;
  uint local_168;
  undefined4 uStack_164;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  int local_140;
  int local_13c;
  undefined1 local_138 [4];
  undefined8 local_134;
  undefined8 local_12c;
  bool local_124 [4];
  int iStack_120;
  uint local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  uint *local_f8;
  ForAnyElementType *local_f0;
  FEdgeLoopInsertionParams *local_e8;
  uint local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (param_1->SortedInputLengths->ArrayNum == 0) {
    return false;
  }
  pFVar3 = param_1->Topology;
  uVar16 = 0;
  if (param_2 < (pFVar3->Edges).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  local_170 = (pFVar3->Edges).AllocatorInstance.Data;
  pFVar27 = local_170 + (longlong)param_2 * 0x50 + 0x10;
  iVar13 = UE::Geometry::FGroupTopology::GetCornerVertexID(param_1->Topology,param_3);
  uVar26 = *(int *)(pFVar27 + 8) - 1;
  uVar16 = 0;
  if ((int)uVar26 < *(int *)(pFVar27 + 8)) {
    uVar16 = ~uVar26 >> 0x1f;
  }
  local_178 = iVar13;
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pFVar21 = local_170;
  local_174 = *(int *)(*(longlong *)pFVar27 + -4 + (longlong)*(int *)(pFVar27 + 8) * 4);
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  iVar14 = iStack_1ac;
  if (local_174 == iVar13) {
    uVar16 = *(int *)(pFVar27 + 8) - 1;
    if (-1 < (int)uVar16) {
      lVar20 = (longlong)(int)uVar16 * 4;
      do {
        uVar26 = 0;
        if ((int)uVar16 < *(int *)(pFVar21 + (longlong)param_2 * 0x50 + 0x18)) {
          uVar26 = ~uVar16 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar25 = (FScriptContainerElement *)(*(longlong *)pFVar27 + lVar20);
        if (((local_1b8.Data <= pFVar25) && (pFVar25 < local_1b8.Data + (longlong)iStack_1ac * 4))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        if (local_1b0 == iStack_1ac) {
          local_1b0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_1b8,&iStack_1ac);
        }
        lVar17 = (longlong)local_1b0;
        lVar20 = lVar20 + -4;
        uVar16 = uVar16 - 1;
        local_1b0 = local_1b0 + 1;
        *(uint *)(local_1b8.Data + lVar17 * 4) = *(uint *)pFVar25;
        iVar14 = iStack_1ac;
      } while (-1 < (int)uVar16);
    }
  }
  else if ((FScriptContainerElement *)&local_1b8 != pFVar27) {
    local_1b0 = *(int *)(pFVar27 + 8);
    lVar20 = (longlong)local_1b0;
    _Src = *(void **)pFVar27;
    iStack_1ac = 0;
    iVar14 = iStack_1ac;
    iStack_1ac = 0;
    if (local_1b0 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1b0,0,&local_1b8,local_1b0,&iStack_1ac);
      memcpy(local_1b8.Data,_Src,lVar20 << 2);
      iVar14 = iStack_1ac;
    }
  }
  iStack_1ac = iVar14;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  pTVar4 = param_1->SortedInputLengths;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  if (param_1->bInputsAreProportions == false) {
    if (&local_1a0 != pTVar4) {
      uVar16 = pTVar4->ArrayNum;
      pFVar27 = (pTVar4->AllocatorInstance).Data;
      local_1a0.ArrayMax = 0;
      local_1a0.ArrayNum = uVar16;
      if (uVar16 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,0,&local_1a0.AllocatorInstance,uVar16,&local_1a0.ArrayMax);
        memcpy(local_1a0.AllocatorInstance.Data,pFVar27,(longlong)(int)uVar16 << 3);
      }
    }
    UE::Geometry::FGroupTopology::GetEdgeArcLength(param_1->Topology,param_2,&local_190);
  }
  else {
    uVar16 = pTVar4->ArrayNum;
    pFVar3 = param_1->Topology;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&local_1a0.AllocatorInstance,0,&local_1a0.ArrayMax);
    }
    dVar7 = UE::Geometry::FGroupTopology::GetEdgeArcLength(pFVar3,param_2,&local_190);
    pFVar21 = (pTVar4->AllocatorInstance).Data;
    iVar13 = pTVar4->ArrayNum;
    pFVar27 = pFVar21 + (longlong)iVar13 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar13) {
        local_1a8 = 0;
        `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a8);
      }
      if (pFVar21 == pFVar27) break;
      local_180 = dVar7 * *(double *)pFVar21;
      if (((local_1a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
          ((FScriptContainerElement *)&local_180 <
           local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      iVar14 = local_1a0.ArrayNum;
      if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
      }
      pFVar21 = pFVar21 + 8;
      local_1a0.ArrayNum = iVar14 + 1;
      *(double *)(local_1a0.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_180;
    }
  }
  uVar16 = 0;
  if ((int)(local_190.ArrayNum - 1U) < local_190.ArrayNum) {
    uVar16 = ~(local_190.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  dVar7 = *(double *)(local_190.AllocatorInstance.Data + (longlong)(local_190.ArrayNum + -1) * 8);
  if (local_174 == local_178) {
    AlgoImpl::Reverse<double>((double *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
    iVar13 = local_190.ArrayNum;
    pFVar27 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 8;
    FVar22.Data = local_190.AllocatorInstance.Data;
    while( true ) {
      if (local_190.ArrayNum != iVar13) {
        local_1a7 = 0;
        `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a7);
      }
      if (FVar22.Data == pFVar27) break;
      *(double *)FVar22.Data = dVar7 - *(double *)FVar22.Data;
      FVar22.Data = FVar22.Data + 8;
    }
  }
  if ((local_1b0 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  uVar10 = local_1a0._8_8_;
  dVar9 = __real_3ff0000000000000;
  uVar18 = (ulonglong)local_1a0.ArrayNum;
  uVar26 = 1;
  uVar16 = *(uint *)local_1b8.Data;
  local_170 = local_1a0.AllocatorInstance.Data + uVar18 * 8;
  lVar20 = 1;
  uVar19 = uVar18;
  FVar22.Data = local_1a0.AllocatorInstance.Data;
  uVar28 = 0;
  uVar31 = 0;
  do {
    pFVar27 = local_170;
    if ((int)uVar18 != (int)uVar19) {
      local_1a6[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a6);
    }
    if (FVar22.Data == pFVar27) {
      bVar11 = true;
      goto LAB_14c74e618;
    }
    dVar29 = *(double *)FVar22.Data;
    uVar30 = SUB84(dVar29,0);
    uVar32 = (int)((ulonglong)dVar29 >> 0x20);
    if (dVar7 + param_1->VertexTolerance < dVar29) {
      uVar30 = SUB84(dVar7,0);
      uVar32 = (int)((ulonglong)dVar7 >> 0x20);
    }
    uVar15 = 0;
    if ((int)uVar26 < local_190.ArrayNum) {
      do {
        uVar23 = ~uVar26 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar26 < local_190.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        if ((double)CONCAT44(uVar32,uVar30) <
            *(double *)(local_190.AllocatorInstance.Data + lVar20 * 8)) break;
        uVar16 = 0;
        if ((int)uVar26 < local_1b0) {
          uVar16 = uVar23;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        uVar16 = *(uint *)(local_1b8.Data + lVar20 * 4);
        uVar24 = uVar15;
        if ((int)uVar26 < local_190.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        uVar26 = uVar26 + 1;
        uVar28 = (undefined4)*(undefined8 *)(local_190.AllocatorInstance.Data + lVar20 * 8);
        uVar31 = (undefined4)
                 ((ulonglong)*(undefined8 *)(local_190.AllocatorInstance.Data + lVar20 * 8) >> 0x20)
        ;
        lVar20 = lVar20 + 1;
      } while ((int)uVar26 < local_190.ArrayNum);
    }
    local_f8 = &local_168;
    dVar29 = (double)CONCAT44(uVar32,uVar30) - (double)CONCAT44(uVar31,uVar28);
    local_f0 = &local_1b8;
    local_e8 = param_1;
    local_e0 = uVar26;
    if (param_1->VertexTolerance <= dVar29 && dVar29 != param_1->VertexTolerance) {
      uVar24 = ~uVar26 >> 0x1f;
      if ((int)uVar26 < local_190.ArrayNum) {
        uVar23 = uVar15;
        if ((int)uVar26 < local_190.ArrayNum) {
          uVar23 = uVar24;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        dVar8 = *(double *)(local_190.AllocatorInstance.Data + lVar20 * 8) -
                (double)CONCAT44(uVar31,uVar28);
        if (dVar8 < param_1->VertexTolerance || dVar8 == param_1->VertexTolerance) {
          if ((int)uVar26 < local_1b0) {
            uVar15 = uVar24;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          `GroupEdgeInserterLocals::InsertNewVertexEndpoints'::__l24::<lambda_2>::operator()
                    (&local_f8,*(int *)(local_1b8.Data + lVar20 * 4));
          uVar30 = uVar28;
          uVar32 = uVar31;
          goto LAB_14c74e517;
        }
      }
      pFVar5 = param_1->Mesh;
      uVar15 = 0;
      if ((int)uVar26 < local_1b0) {
        uVar15 = uVar24;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      uVar16 = UE::Geometry::FDynamicMesh3::FindEdge
                         (pFVar5,uVar16,*(int *)(local_1b8.Data + lVar20 * 4));
      if ((int)uVar16 < 0) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2424968668812149213>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                            ,0x1dd,"CurrentEid >= 0");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        bVar11 = false;
LAB_14c74e618:
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
        if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.AllocatorInstance.Data);
        }
        if (local_1b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data);
        }
        return bVar11;
      }
      uVar15 = 0;
      if ((int)uVar26 < local_190.ArrayNum) {
        uVar15 = uVar24;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      pFVar5 = param_1->Mesh;
      uVar15 = 0;
      if ((int)uVar26 < local_1b0) {
        uVar15 = uVar24;
      }
      dVar29 = dVar29 / (*(double *)(local_190.AllocatorInstance.Data + lVar20 * 8) -
                        (double)CONCAT44(uVar31,uVar28));
      uVar28 = SUB84(dVar29,0);
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      puVar1 = (undefined4 *)
               (*(longlong *)
                 ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) +
               (ulonglong)(uVar16 & 0x1ff) * 0x10);
      local_a8 = *puVar1;
      iStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      if (iStack_a4 != *(int *)(local_1b8.Data + lVar20 * 4)) {
        uVar28 = SUB84(dVar9 - dVar29,0);
      }
      local_134 = 0xffffffffffffffff;
      local_12c = 0xffffffffffffffff;
      _local_124 = 0xffffffffffffffff;
      local_114 = 0xffffffffffffffff;
      local_10c = 0xffffffffffffffff;
      local_104 = 0xffffffff;
      (**(code **)(param_1->Mesh->_padding_ + 0x30))(param_1->Mesh,uVar16,local_138,uVar28);
      if (param_5->ChangedTidsOut != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_5->ChangedTidsOut,&local_140,local_124);
        if (iStack_120 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (param_5->ChangedTidsOut,&local_13c,local_124 + 4);
        }
      }
      uVar16 = local_118;
      pFVar5 = param_1->Mesh;
      uVar15 = 0;
      if ((int)uVar26 < local_1b0) {
        uVar15 = uVar24;
      }
      local_168 = local_118;
      uStack_164 = CONCAT31(uStack_164._1_3_,1);
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      uVar19 = (ulonglong)(*(uint *)(local_1b8.Data + lVar20 * 4) & 0x1ff);
      lVar17 = *(longlong *)
                ((pFVar5->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)(local_1b8.Data + lVar20 * 4) >> 9) * 8);
      pdVar2 = (double *)(lVar17 + uVar19 * 0x18);
      local_d8 = *pdVar2;
      dStack_d0 = pdVar2[1];
      local_c8 = *(double *)(lVar17 + 0x10 + uVar19 * 0x18);
      lVar17 = *(longlong *)
                ((param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar16 >> 9) * 8);
      pdVar2 = (double *)(lVar17 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      local_c0 = *pdVar2;
      dStack_b8 = pdVar2[1];
      local_b0 = *(double *)(lVar17 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      dStack_150 = local_c8 - local_b0;
      dVar29 = local_d8 - local_c0;
      local_158 = dStack_d0 - dStack_b8;
      dStack_160 = SQRT(local_158 * local_158 + dVar29 * dVar29 + dStack_150 * dStack_150);
      if (dStack_160 <= 0.0) {
        dStack_150 = 0.0;
        local_158 = 0.0;
        dStack_160 = 0.0;
      }
      else {
        dStack_160 = dVar9 / dStack_160;
        dStack_150 = dStack_160 * dStack_150;
        local_158 = dStack_160 * local_158;
        dStack_160 = dStack_160 * dVar29;
      }
    }
    else {
      `GroupEdgeInserterLocals::InsertNewVertexEndpoints'::__l24::<lambda_2>::operator()
                (&local_f8,uVar16);
      uVar30 = uVar28;
      uVar32 = uVar31;
    }
LAB_14c74e517:
    pFVar27 = (param_4->AllocatorInstance).Data;
    if (((pFVar27 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 < pFVar27 + (longlong)param_4->ArrayMax * 0x28)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    iVar13 = param_4->ArrayNum;
    if (iVar13 == param_4->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    uVar19 = uVar10 & 0xffffffff;
    param_4->ArrayNum = iVar13 + 1;
    FVar22.Data = FVar22.Data + 8;
    lVar17 = (longlong)iVar13;
    pFVar27 = (param_4->AllocatorInstance).Data;
    *(ulonglong *)(pFVar27 + lVar17 * 0x28) = CONCAT44(uStack_164,local_168);
    *(double *)(pFVar27 + lVar17 * 0x28 + 8) = dStack_160;
    *(double *)(pFVar27 + lVar17 * 0x28 + 0x10) = local_158;
    *(double *)(pFVar27 + lVar17 * 0x28 + 0x10 + 8) = dStack_150;
    *(undefined8 *)(pFVar27 + lVar17 * 0x28 + 0x20) = local_148;
    uVar18 = local_1a0._8_8_ & 0xffffffff;
    uVar28 = uVar30;
    uVar31 = uVar32;
  } while( true );
}

// InsertSingleWithRetriangulation @ 14c74e7e0

bool __cdecl
GroupEdgeInserterLocals::InsertSingleWithRetriangulation
          (FDynamicMesh3 *param_1,FGroupTopology *param_2,int param_3,int param_4,
          FGroupEdgeSplitPoint *param_5,FGroupEdgeSplitPoint *param_6,FOptionalOutputParams *param_7
          ,FProgressCancel *param_8)

{
  code *pcVar1;
  longlong *plVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  FProgressCancel *this;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  FGroup *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  int iVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  int iVar18;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
  local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [4];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 local_ac;
  bool local_a4 [4];
  int iStack_a0;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_6c;
  bool local_64 [4];
  int iStack_60;
  int local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  this = param_8;
  if (param_8 != (FProgressCancel *)0x0) {
    if (param_8->WasCancelled != false) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_8->CancelF);
    pcVar1 = *(code **)&this->CancelF;
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar11 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar11 = plVar2;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    bVar5 = (bool)(*pcVar1)(uVar9);
    this->WasCancelled = bVar5;
    if (bVar5 != false) {
      return false;
    }
  }
  if ((param_5->bIsVertex == param_6->bIsVertex) && (param_5->ElementID == param_6->ElementID)) {
    return false;
  }
  iVar8 = param_5->ElementID;
  if (param_5->bIsVertex == false) {
    local_b4 = 0xffffffffffffffff;
    local_ac = 0xffffffffffffffff;
    pTVar3 = param_7->ChangedTidsOut;
    _local_a4 = 0xffffffffffffffff;
    local_94 = 0xffffffffffffffff;
    local_8c = 0xffffffffffffffff;
    local_84 = 0xffffffff;
    (**(code **)(param_1->_padding_ + 0x30))
              (param_1,param_5->ElementID,local_b8,param_5->EdgeTValue);
    iVar8 = local_98;
    if (pTVar3 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar3,&local_d8,local_a4);
      iVar8 = local_98;
      if (iStack_a0 != -1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar3,&local_d4,local_a4 + 4);
        iVar8 = local_98;
      }
    }
  }
  iVar18 = param_6->ElementID;
  if (param_6->bIsVertex == false) {
    local_74 = 0xffffffffffffffff;
    local_6c = 0xffffffffffffffff;
    pTVar3 = param_7->ChangedTidsOut;
    _local_64 = 0xffffffffffffffff;
    local_54 = 0xffffffffffffffff;
    local_4c = 0xffffffffffffffff;
    local_44 = 0xffffffff;
    (**(code **)(param_1->_padding_ + 0x30))
              (param_1,param_6->ElementID,local_78,param_6->EdgeTValue);
    iVar18 = local_58;
    if (pTVar3 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar3,&local_d0,local_64);
      iVar18 = local_58;
      if (iStack_60 != -1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar3,&local_cc,local_64 + 4);
        iVar18 = local_58;
      }
    }
  }
  pFVar10 = UE::Geometry::FGroupTopology::FindGroupByID(param_2,param_3);
  if (((pFVar10 == (FGroup *)0x0) || (param_4 < 0)) || ((pFVar10->Boundaries).ArrayNum <= param_4))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Group && BoundaryIndex >= 0 && BoundaryIndex < Group->Boundaries.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                       ,0x4d9,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  uVar7 = 0;
  if (param_4 < (pFVar10->Boundaries).ArrayNum) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  bVar5 = DeleteGroupTrianglesAndGetLoop
                    (param_1,param_2,param_3,
                     (FGroupBoundary *)
                     ((pFVar10->Boundaries).AllocatorInstance.Data + (longlong)param_4 * 0x28),
                     &local_e8,&local_f8,param_7,this);
  if (!bVar5) {
LAB_14c74ec42:
    bVar5 = false;
    goto LAB_14c74ec44;
  }
  if (this != (FProgressCancel *)0x0) {
    bVar5 = FProgressCancel::Cancelled(this);
    if (bVar5) goto LAB_14c74ec42;
  }
  lVar17 = (longlong)local_e8.ArrayNum;
  for (FVar16.Data = local_e8.AllocatorInstance.Data; FVar14.Data = local_e8.AllocatorInstance.Data,
      FVar16.Data != local_e8.AllocatorInstance.Data + lVar17 * 4; FVar16.Data = FVar16.Data + 4) {
    if (*(int *)FVar16.Data == iVar8) {
      pFVar12 = local_e8.AllocatorInstance.Data + lVar17 * 4;
      lVar17 = (longlong)FVar16.Data - (longlong)local_e8.AllocatorInstance.Data >> 2;
      goto LAB_14c74eae7;
    }
  }
  pFVar12 = local_e8.AllocatorInstance.Data + lVar17 * 4;
  lVar17 = 0xffffffff;
  iVar15 = -1;
  if (local_e8.AllocatorInstance.Data != pFVar12) {
LAB_14c74eae7:
    do {
      iVar15 = (int)lVar17;
      if (*(int *)FVar14.Data == iVar18) {
        iVar13 = (int)((longlong)FVar14.Data - (longlong)local_e8.AllocatorInstance.Data >> 2);
        goto LAB_14c74eafe;
      }
      FVar14.Data = FVar14.Data + 4;
    } while (FVar14.Data != pFVar12);
  }
  iVar13 = -1;
LAB_14c74eafe:
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  AppendInclusiveRangeWrapAround(&local_e8,&local_108,iVar15,iVar13);
  if (local_108.ArrayNum < 3) {
LAB_14c74ec2f:
    bVar5 = false;
  }
  else {
    bVar5 = RetriangulateLoop(param_1,&local_108,param_3,&local_f8);
    if (!bVar5) goto LAB_14c74ec2f;
    if (this != (FProgressCancel *)0x0) {
      bVar5 = FProgressCancel::Cancelled(this);
      if (bVar5) goto LAB_14c74ec2f;
    }
    uVar9 = local_108._8_8_;
    iVar4 = local_108.ArrayMax;
    local_108._8_8_ = (ulonglong)(uint)local_108.ArrayMax << 0x20;
    if (((longlong)uVar9 < 0) && (iVar4 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
    }
    AppendInclusiveRangeWrapAround(&local_e8,&local_108,iVar13,iVar15);
    if (local_108.ArrayNum < 3) goto LAB_14c74ec2f;
    iVar15 = param_1->GroupIDCounter;
    param_1->GroupIDCounter = iVar15 + 1;
    bVar5 = RetriangulateLoop(param_1,&local_108,iVar15,&local_f8);
    pTVar3 = param_7->NewEidsOut;
    if (pTVar3 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      iVar8 = UE::Geometry::FDynamicMesh3::FindEdge(param_1,iVar8,iVar18);
      param_8._0_4_ = iVar8;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                (pTVar3,local_c8,(bool *)&param_8);
    }
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14c74ec44:
  DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
            ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
              *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
       *)local_f8.AllocatorInstance.Data !=
      (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
       *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsCollapsableDevelopableEdge @ 14c74ff60

bool __cdecl
IsCollapsableDevelopableEdge
          (FDynamicMesh3 *param_1,int param_2,int param_3,int param_4,double param_5,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  atomic<unsigned_char> *paVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  code *local_190;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_188;
  BaseValueIterator local_180;
  BaseValueIterator local_158;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_130;
  double *local_128;
  double *local_120;
  undefined1 *local_118;
  double local_108;
  double dStack_100;
  double local_e8;
  
  pTVar23 = param_6;
  uVar5 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
            + 8 + (ulonglong)(param_2 & 0x1ff) * 0x10);
  uVar18 = (uint)uVar5;
  uVar19 = 0;
  if ((int)uVar18 < param_6->ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  local_res10 = param_2;
  if ((uVar19 == 0) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  pTVar11 = param_7;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  pFVar17 = pFVar6 + (longlong)(int)uVar18 * 0x18;
  local_1f8 = *(double *)pFVar17;
  dStack_1f0 = *(double *)(pFVar17 + 8);
  local_1e8 = *(double *)(pFVar6 + (longlong)(int)uVar18 * 0x18 + 0x10);
  uVar19 = (uint)((ulonglong)uVar5 >> 0x20);
  if (uVar19 != 0xffffffff) {
    uVar18 = 0;
    if (param_3 < param_7->ArrayNum) {
      uVar18 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    pFVar17 = (pTVar11->AllocatorInstance).Data;
    if (pFVar17[param_3] == (FScriptContainerElement)0x0) {
      uVar18 = 0;
      if ((int)uVar19 < pTVar23->ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      pFVar6 = (pTVar23->AllocatorInstance).Data;
      pFVar17 = pFVar6 + (longlong)(int)uVar19 * 0x18;
      dVar10 = *(double *)pFVar17;
      dVar3 = *(double *)(pFVar17 + 8);
      dVar4 = *(double *)(pFVar6 + (longlong)(int)uVar19 * 0x18 + 0x10);
      local_1c0 = dVar4;
      if (param_5 < dVar3 * dStack_1f0 + dVar10 * local_1f8 + dVar4 * local_1e8) {
LAB_14c7508d8:
        local_128 = &local_1f8;
        local_res8[0] = 1;
        local_120 = &param_5;
        local_118 = local_res8;
        local_188 = &local_130;
        local_190 = UE::Core::Private::Function::
                    TFunctionRefCaller<`IsCollapsableDevelopableEdge'::__l29::<lambda_1>,void,int>::
                    Call;
        local_130 = pTVar23;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (param_1,param_3,(TFunctionRef<void___cdecl(int)> *)&local_190);
        uVar14 = local_res8[0];
      }
      else {
        pFVar17 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        lVar7 = *(longlong *)(pFVar17 + (ulonglong)((uint)param_3 >> 9) * 8);
        local_1e0 = *(undefined1 (*) [16])(lVar7 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        uVar38 = local_1e0._0_4_;
        uVar39 = local_1e0._4_4_;
        uVar40 = local_1e0._8_4_;
        uVar41 = local_1e0._12_4_;
        local_1c0 = *(double *)(lVar7 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
        local_108 = local_1e0._8_8_;
        lVar7 = *(longlong *)(pFVar17 + (ulonglong)((uint)param_4 >> 9) * 8);
        pdVar1 = (double *)(lVar7 + (ulonglong)(param_4 & 0x1ff) * 0x18);
        dVar32 = *(double *)(lVar7 + 0x10 + (ulonglong)(param_4 & 0x1ff) * 0x18) - local_1c0;
        dVar34 = *pdVar1 - local_1e0._0_8_;
        dVar30 = pdVar1[1] - local_108;
        dVar25 = SQRT(dVar30 * dVar30 + dVar34 * dVar34 + dVar32 * dVar32);
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
          dVar30 = 0.0;
          dVar34 = 0.0;
        }
        else {
          dVar25 = __real_3ff0000000000000 / dVar25;
          dVar34 = dVar25 * dVar34;
          dVar30 = dVar25 * dVar30;
          dVar25 = dVar25 * dVar32;
        }
        iVar21 = 0;
        local_208 = 0;
        iVar22 = 0;
        local_198 = local_1c0;
        dStack_100 = local_108;
        UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_158,&param_1->VertexEdgeLists,param_3,false);
        uVar36 = SUB84(param_5,0);
        uVar37 = (undefined4)((ulonglong)param_5 >> 0x20);
        while ((((iVar12 = local_158.cur_value, local_158.ListSet != &param_1->VertexEdgeLists ||
                 (local_158.ListIndex != param_3)) || (local_158.iCur != -1)) ||
               (local_158.cur_ptr != -1))) {
          if (local_158.cur_value != local_res10) {
            local_1a0 = *(undefined8 *)
                         (*(longlong *)
                           ((param_1->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)local_158.cur_value >> 9) * 8) + 8 +
                         (ulonglong)(local_158.cur_value & 0x1ff) * 0x10);
            uVar19 = (uint)((ulonglong)local_1a0 >> 0x20);
            if (uVar19 == 0xffffffff) {
              iVar21 = 899;
              paVar16 = &bGEnsureHasExecuted<8014598786120680323>;
              goto LAB_14c750899;
            }
            uVar24 = (uint)local_1a0;
            uVar18 = 0;
            if ((int)uVar24 < param_6->ArrayNum) {
              uVar18 = ~uVar24 >> 0x1f;
            }
            if (uVar18 == 0) {
              bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              uVar36 = SUB84(param_5,0);
              uVar37 = (undefined4)((ulonglong)param_5 >> 0x20);
            }
            pTVar23 = param_6;
            pFVar17 = (param_6->AllocatorInstance).Data;
            local_1c0 = *(double *)(pFVar17 + (longlong)(int)uVar24 * 0x18 + 0x10);
            pFVar17 = pFVar17 + (longlong)(int)uVar24 * 0x18;
            dVar32 = *(double *)pFVar17;
            dVar29 = *(double *)(pFVar17 + 8);
            uVar18 = 0;
            if ((int)uVar19 < param_6->ArrayNum) {
              uVar18 = ~uVar19 >> 0x1f;
            }
            if (uVar18 == 0) {
              bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              uVar36 = SUB84(param_5,0);
              uVar37 = (undefined4)((ulonglong)param_5 >> 0x20);
            }
            pFVar6 = (pTVar23->AllocatorInstance).Data;
            pFVar17 = pFVar6 + (longlong)local_1a0._4_4_ * 0x18;
            local_1b8 = *(double *)pFVar17;
            dStack_1b0 = *(double *)(pFVar17 + 8);
            local_1a8 = *(double *)(pFVar6 + (longlong)local_1a0._4_4_ * 0x18 + 0x10);
            uVar20 = *(ulonglong *)
                      (*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)iVar12 >> 9) * 8) + (ulonglong)(iVar12 & 0x1ff) * 0x10);
            if ((uint)uVar20 == param_3) {
              uVar20 = uVar20 >> 0x20;
            }
            else {
              uVar19 = 0xffffffff;
              if ((int)(uVar20 >> 0x20) == param_3) {
                uVar19 = (uint)uVar20;
              }
              uVar20 = (ulonglong)uVar19;
            }
            uVar15 = (ulonglong)((uint)uVar20 & 0x1ff);
            lVar7 = *(longlong *)
                     ((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar20 >> 9) * 8);
            local_e8 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
            pdVar1 = (double *)(lVar7 + uVar15 * 0x18);
            dVar33 = local_198 - local_e8;
            dVar35 = (double)CONCAT44(uVar39,uVar38) - *pdVar1;
            dVar31 = local_108 - pdVar1[1];
            auVar26._8_4_ = uVar40;
            auVar26._0_8_ = dVar35;
            auVar26._12_4_ = uVar41;
            auVar27._8_8_ = auVar26._8_8_;
            auVar27._0_8_ = dVar35 * dVar35;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = dVar31 * dVar31 + auVar27._0_8_ + dVar33 * dVar33;
            auVar28 = sqrtpd(auVar27,auVar28);
            if (auVar28._0_8_ <= 0.0) {
              dVar31 = 0.0;
              dVar33 = 0.0;
              dVar9 = 0.0;
            }
            else {
              dVar9 = __real_3ff0000000000000 / auVar28._0_8_;
              dVar31 = dVar31 * dVar9;
              dVar33 = dVar9 * dVar33;
              dVar9 = dVar9 * dVar35;
            }
            dVar33 = dVar31 * dVar30 + dVar34 * dVar9 + dVar33 * dVar25;
            if (dVar33 < (double)CONCAT44(uVar37,uVar36) ||
                dVar33 == (double)CONCAT44(uVar37,uVar36)) {
              dVar32 = dStack_1b0 * dVar29 + local_1b8 * dVar32 + local_1a8 * local_1c0;
              if (dVar32 < (double)CONCAT44(uVar37,uVar36) ||
                  dVar32 == (double)CONCAT44(uVar37,uVar36)) {
                iVar22 = iVar22 + 1;
              }
            }
            else {
              dVar33 = dVar29 * dStack_1f0 + dVar32 * local_1f8 + local_1c0 * local_1e8;
              if ((((double)CONCAT44(uVar37,uVar36) <= dVar33 &&
                    dVar33 != (double)CONCAT44(uVar37,uVar36)) &&
                  (dVar33 = dStack_1b0 * dVar3 + local_1b8 * dVar10 + local_1a8 * dVar4,
                  (double)CONCAT44(uVar37,uVar36) <= dVar33 &&
                  dVar33 != (double)CONCAT44(uVar37,uVar36))) ||
                 ((dVar32 = dVar29 * dVar3 + dVar32 * dVar10 + local_1c0 * dVar4,
                  (double)CONCAT44(uVar37,uVar36) <= dVar32 &&
                  dVar32 != (double)CONCAT44(uVar37,uVar36) &&
                  (dVar32 = dStack_1b0 * dStack_1f0 + local_1b8 * local_1f8 + local_1a8 * local_1e8,
                  (double)CONCAT44(uVar37,uVar36) <= dVar32 &&
                  dVar32 != (double)CONCAT44(uVar37,uVar36))))) {
                local_208 = local_208 + 1;
              }
            }
            uVar38 = local_1e0._0_4_;
            uVar39 = local_1e0._4_4_;
            uVar40 = local_1e0._8_4_;
            uVar41 = local_1e0._12_4_;
            iVar21 = local_208;
          }
          UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_158);
        }
        if ((iVar21 != 1) || (uVar14 = 1, iVar22 != 0)) {
          uVar14 = 0;
        }
      }
      pFVar17 = (param_7->AllocatorInstance).Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
    }
    else {
LAB_14c7508c3:
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      uVar14 = 0;
    }
    return (bool)uVar14;
  }
  bVar13 = false;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_180,&param_1->VertexEdgeLists,param_3,false);
  dVar10 = param_5;
  dVar4 = __real_3ff0000000000000;
  while ((((local_180.ListSet != &param_1->VertexEdgeLists || (local_180.ListIndex != param_3)) ||
          (local_180.iCur != -1)) || (local_180.cur_ptr != -1))) {
    if (local_180.cur_value == local_res10) goto LAB_14c7502cb;
    uVar20 = (ulonglong)(local_180.cur_value & 0x1ff);
    lVar7 = *(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data +
             ((local_180._32_8_ & 0xffffffff) >> 9) * 8);
    if (*(int *)(lVar7 + 0xc + uVar20 * 0x10) == -1) {
      if (bVar13) goto LAB_14c7508b9;
      pFVar17 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      uVar20 = *(ulonglong *)(lVar7 + uVar20 * 0x10);
      bVar13 = true;
      local_1a8 = *(double *)
                   (*(longlong *)(pFVar17 + (ulonglong)((uint)param_4 >> 9) * 8) + 0x10 +
                   (ulonglong)(param_4 & 0x1ff) * 0x18);
      pdVar1 = (double *)
               (*(longlong *)(pFVar17 + (ulonglong)((uint)param_4 >> 9) * 8) +
               (ulonglong)(param_4 & 0x1ff) * 0x18);
      dVar3 = *(double *)
               (*(longlong *)(pFVar17 + (ulonglong)((uint)param_3 >> 9) * 8) + 0x10 +
               (ulonglong)(param_3 & 0x1ff) * 0x18);
      pdVar2 = (double *)
               (*(longlong *)(pFVar17 + (ulonglong)((uint)param_3 >> 9) * 8) +
               (ulonglong)(param_3 & 0x1ff) * 0x18);
      dVar32 = *pdVar2;
      dVar30 = pdVar2[1];
      if ((uint)uVar20 == param_3) {
        uVar20 = uVar20 >> 0x20;
      }
      else {
        uVar19 = 0xffffffff;
        if ((int)(uVar20 >> 0x20) == param_3) {
          uVar19 = (uint)uVar20;
        }
        uVar20 = (ulonglong)uVar19;
      }
      uVar15 = (ulonglong)((uint)uVar20 & 0x1ff);
      local_1c0 = *(double *)(*(longlong *)(pFVar17 + (uVar20 >> 9) * 8) + 0x10 + uVar15 * 0x18);
      pdVar2 = (double *)(*(longlong *)(pFVar17 + (uVar20 >> 9) * 8) + uVar15 * 0x18);
      dVar25 = dVar3 - local_1c0;
      dVar33 = dVar32 - *pdVar2;
      dVar34 = dVar30 - pdVar2[1];
      dVar29 = SQRT(dVar34 * dVar34 + dVar33 * dVar33 + dVar25 * dVar25);
      if (dVar29 <= 0.0) {
        dVar34 = 0.0;
        dVar25 = 0.0;
        dVar33 = 0.0;
      }
      else {
        dVar29 = dVar4 / dVar29;
        dVar34 = dVar34 * dVar29;
        dVar25 = dVar29 * dVar25;
        dVar33 = dVar33 * dVar29;
      }
      dVar32 = *pdVar1 - dVar32;
      dVar30 = pdVar1[1] - dVar30;
      dVar3 = local_1a8 - dVar3;
      dVar29 = SQRT(dVar30 * dVar30 + dVar32 * dVar32 + dVar3 * dVar3);
      if (dVar29 <= 0.0) {
        dVar3 = 0.0;
        dVar32 = 0.0;
        dVar30 = 0.0;
      }
      else {
        dVar29 = dVar4 / dVar29;
        dVar30 = dVar30 * dVar29;
        dVar3 = dVar3 * dVar29;
        dVar32 = dVar32 * dVar29;
      }
      if (dVar30 * dVar34 + dVar33 * dVar32 + dVar3 * dVar25 <= dVar10) goto LAB_14c7508b9;
    }
LAB_14c7502cb:
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_180);
  }
  pTVar23 = param_6;
  if (bVar13) goto LAB_14c7508d8;
  iVar21 = 0x357;
  paVar16 = &bGEnsureHasExecuted<8014598786120680279>;
LAB_14c750899:
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (paVar16,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshSimplification.cpp"
                      ,iVar21,"false");
  if (bVar13) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
LAB_14c7508b9:
  pFVar17 = (param_7->AllocatorInstance).Data;
  goto LAB_14c7508c3;
}

// RetriangulateLoop @ 14c75f520

bool __cdecl
GroupEdgeInserterLocals::RetriangulateLoop
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  FDynamicMesh3 *pFVar3;
  void *_Src;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  FDynamicMeshEditor local_res8;
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  undefined1 local_f0;
  FDynamicMesh3 *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  FDynamicMesh3 *local_80;
  FDynamicMesh3 *local_78;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  bool local_40;
  EFillType local_38;
  int local_34;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  UE::Geometry::FEdgeLoop::VertexLoopToEdgeLoop(param_1,param_2,&local_a8);
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_e8 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_e0,param_2);
  FVar2.Data = local_a8.AllocatorInstance.Data;
  iVar6 = local_a8.ArrayNum;
  lVar7 = (longlong)local_a8.ArrayNum;
  local_c8 = CONCAT44(local_c8._4_4_,local_a8.ArrayNum);
  if ((local_a8.ArrayNum == 0) && (local_c8._4_4_ == 0)) {
    local_c8 = local_a8._8_8_ & 0xffffffff;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_a8.ArrayNum,local_c8._4_4_,&local_d0,local_a8.ArrayNum,
               (int *)((longlong)&local_c8 + 4));
    if (iVar6 != 0) {
      memcpy(local_d0.Data,FVar2.Data,lVar7 << 2);
    }
    iVar6 = (int)local_c8;
  }
  FVar2.Data = local_e0.AllocatorInstance.Data;
  pFVar3 = local_e8;
  lVar7 = (longlong)local_e0.ArrayNum;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = local_e0.ArrayNum;
  if (local_e0.ArrayNum == 0) {
    local_114 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e0.ArrayNum,0,&local_120,local_e0.ArrayNum,&local_114);
    memcpy(local_120.Data,FVar2.Data,lVar7 << 2);
    iVar6 = (int)local_c8;
  }
  FVar2.Data = local_d0.Data;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = iVar6;
  if (iVar6 == 0) {
    local_104 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&local_110,iVar6,&local_104);
    memcpy(local_110.Data,FVar2.Data,(longlong)iVar6 << 2);
  }
  _Src = local_c0;
  lVar7 = (longlong)(int)local_b8;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = (int)local_b8;
  if ((int)local_b8 == 0) {
    local_f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_b8,0,&local_100,(int)local_b8,&local_f4);
    memcpy(local_100.Data,_Src,lVar7 << 2);
  }
  iVar6 = local_118;
  FVar2.Data = local_120.Data;
  local_f0 = local_b0;
  local_98._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  local_78 = pFVar3;
  local_98._8_8_ = (void *)0x0;
  local_88 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_80 = param_1;
  local_68 = local_118;
  if (local_118 == 0) {
    local_64 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_118,0,&local_70,local_118,&local_64);
    memcpy(local_70.Data,FVar2.Data,(longlong)iVar6 << 2);
  }
  iVar6 = local_108;
  FVar2.Data = local_110.Data;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = local_108;
  if (local_108 == 0) {
    local_54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_108,0,&local_60,local_108,&local_54);
    memcpy(local_60.Data,FVar2.Data,(longlong)iVar6 << 2);
  }
  iVar6 = local_f8;
  FVar2.Data = local_100.Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = local_f8;
  if (local_f8 == 0) {
    local_44 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f8,0,&local_50,local_f8,&local_44);
    memcpy(local_50.Data,FVar2.Data,(longlong)iVar6 << 2);
  }
  local_40 = (bool)local_f0;
  local_38 = PolygonEarClipping;
  local_34 = -1;
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  bVar4 = UE::Geometry::FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_98,param_3);
  if (bVar4) {
LAB_14c75f8f9:
    if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = UE::Geometry::FSimpleHoleFiller::UpdateAttributes
                        ((FSimpleHoleFiller *)local_98,param_4);
      if (!bVar4) goto LAB_14c75f913;
    }
    bVar4 = true;
  }
  else {
    local_res8.Mesh = param_1;
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles
              (&local_res8,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_98 + 8),false);
    local_38 = TriangleFan;
    bVar4 = UE::Geometry::FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_98,param_3);
    if (bVar4) goto LAB_14c75f8f9;
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2424968668812149638>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                       ,0x386,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
LAB_14c75f913:
    bVar4 = false;
  }
  local_98._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar4;
}

// SeparateMeshByGroups @ 14c760060

void __cdecl
FaceGroupUtil::SeparateMeshByGroups
          (FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_2)

{
  FDynamicMesh3 *local_res8 [4];
  code *local_18;
  FDynamicMesh3 **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FaceGroupUtil::SeparateMeshByGroups'::__l2::<lambda_1>,int,int>::
             Call;
  local_res8[0] = param_1;
  UE::Geometry::FDynamicMeshEditor::SplitMesh
            (param_1,param_2,(TFunctionRef<int___cdecl(int)> *)&local_18,-1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  return;
}

// SeparateMeshByGroups @ 14c7600b0

void __cdecl
FaceGroupUtil::SeparateMeshByGroups
          (FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  undefined4 local_48 [2];
  code *local_40;
  FDynamicMesh3 **local_38;
  
  local_38 = &local_res10;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`FaceGroupUtil::SeparateMeshByGroups'::__l2::<lambda_1>,int,int>::
             Call;
  local_res10 = param_1;
  UE::Geometry::FDynamicMeshEditor::SplitMesh
            (param_1,param_2,(TFunctionRef<int___cdecl(int)> *)&local_40,-1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x230;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(int *)(pFVar7 + 0x170) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("M.TriangleCount() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\FaceGroupUtil.cpp"
                         ,0xcb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pFVar7[0x1a8] == (FScriptContainerElement)0x0) {
      local_48[0] = 0xffffffff;
    }
    else if ((*(int *)(pFVar7 + 0x140) * 0x200 + *(int *)(pFVar7 + 0x144) < 1) ||
            (0xfffd < (ushort)(*(short *)**(undefined8 **)(pFVar7 + 0x148) - 1U))) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *(undefined4 *)**(undefined8 **)(pFVar7 + 0x198);
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)*piVar1 * 4)) {
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
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,piVar1);
    }
    pFVar7 = pFVar7 + 0x230;
    param_3->ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_48[0];
  }
  return;
}

// SetGroupID @ 14c762180

void __cdecl
FaceGroupUtil::SetGroupID(FDynamicMesh3 *param_1,TArrayView<int_const_,int> *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = (param_1->TriangleGroups).bIsSet;
  if ((bool)cVar4 != false) {
    puVar2 = (uint *)param_2->DataPtr;
    puVar1 = puVar2 + param_2->ArrayNum;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      bVar5 = cVar4 != '\0';
      cVar4 = '\0';
      if (bVar5) {
        *(int *)(*(longlong *)
                  ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                  (ulonglong)(*puVar2 >> 9) * 8) + (ulonglong)(*puVar2 & 0x1ff) * 4) = param_3;
        cVar4 = (param_1->TriangleGroups).bIsSet;
        iVar3 = param_3 + 1;
        if (param_3 + 1 < param_1->GroupIDCounter) {
          iVar3 = param_1->GroupIDCounter;
        }
        param_1->GroupIDCounter = iVar3;
      }
    }
  }
  return;
}

// SetGroupID @ 14c762200

void __cdecl FaceGroupUtil::SetGroupID(FDynamicMesh3 *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1->TriangleGroups).bIsSet != false) {
    uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
            (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar5 = 0;
    if ((uVar7 != 0) &&
       (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
       0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar7) {
        do {
          lVar3 = (ulonglong)(uVar4 & 0x1ff) * 2;
          lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8);
          if ((*(short *)(lVar3 + lVar2) != 0) && (uVar5 = uVar4, *(short *)(lVar3 + lVar2) != -1))
          break;
          uVar4 = uVar4 + 1;
          uVar5 = uVar4;
        } while ((int)uVar4 < (int)uVar7);
      }
    }
joined_r0x00014c762297:
    if (uVar5 != uVar7) {
      while( true ) {
        if ((param_1->TriangleGroups).bIsSet != false) {
          *(int *)(*(longlong *)
                    ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) = param_2;
          iVar6 = param_2 + 1;
          if (param_2 + 1 < param_1->GroupIDCounter) {
            iVar6 = param_1->GroupIDCounter;
          }
          param_1->GroupIDCounter = iVar6;
        }
        uVar5 = uVar5 + 1;
        if ((int)uVar7 <= (int)uVar5) break;
        pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar2 = (ulonglong)(uVar5 >> 9) * 8;
          lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != -1)) break;
          uVar5 = uVar5 + 1;
          if ((int)uVar7 <= (int)uVar5) goto joined_r0x00014c762297;
        }
      }
      goto joined_r0x00014c762297;
    }
  }
  return;
}

// SetGroupToGroup @ 14c762350

void __cdecl FaceGroupUtil::SetGroupToGroup(FDynamicMesh3 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((param_1->TriangleGroups).bIsSet != false) {
    uVar5 = 0;
    iVar4 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar7 = uVar5;
    if (0 < iVar4) {
      do {
        if ((int)uVar5 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
          uVar6 = (ulonglong)(uVar7 & 0x1ff);
          lVar1 = (ulonglong)(uVar5 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar1) + uVar6 * 2) - 1U) < 0xfffe) {
            bVar2 = (param_1->TriangleGroups).bIsSet;
            if (bVar2 == false) {
              iVar3 = -1;
            }
            else {
              iVar3 = *(int *)(*(longlong *)
                                ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + lVar1) + uVar6 * 4);
            }
            if ((iVar3 == param_2) && (bVar2 != false)) {
              *(int *)(*(longlong *)
                        ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1)
                      + uVar6 * 4) = param_3;
              iVar3 = param_3 + 1;
              if (param_3 + 1 < param_1->GroupIDCounter) {
                iVar3 = param_1->GroupIDCounter;
              }
              param_1->GroupIDCounter = iVar3;
            }
          }
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

// TraceFromIntrinsicVert @ 14c76c7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMeshGeodesicSurfaceTracer * __cdecl
SignpostSufaceTraceUtil::TraceFromIntrinsicVert
          (FMeshGeodesicSurfaceTracer *__return_storage_ptr__,FSignpost *param_1,int param_2,
          double param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  ulonglong uVar11;
  FMeshGeodesicSurfaceTracer *pFVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStackY_128 [32];
  uint local_f8;
  int local_f0;
  undefined1 local_ec [8];
  undefined4 local_e4;
  TVector<double>_u_0 local_e0;
  FMeshSurfaceDirection local_c8;
  FMeshSurfaceDirection local_b0;
  TVector<double>_u_0 local_98;
  FMeshTangentDirection local_80;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar5 = (FDynamicMesh3 *)param_1->_padding_;
  uVar11 = (ulonglong)(param_2 & 0x1ff);
  lVar6 = *(longlong *)
           ((param_1->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_2 >> 9) * 8);
  __return_storage_ptr__->Mesh = pFVar5;
  (__return_storage_ptr__->SurfaceTrace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SurfaceTrace).ArrayNum = 0;
  (__return_storage_ptr__->SurfaceTrace).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->ScratchTri2 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ScratchTri2).PermutedTriVIDs.field0_0x0 + 4) =
       0xffffffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->ScratchTri2).PermutedTriEIDs.field0_0x0 =
       0xffffffffffffffff;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ScratchTri2).PermutedTriEIDs.field0_0x0 + 8) =
       0xffffffffffffffff;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ScratchTri2).PermutedIndices.field0_0x0 + 4) =
       0xffffffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->ScratchTri2).EdgeOrientationSign.field0_0x0 =
       0xffffffffffffffff;
  (__return_storage_ptr__->ScratchTri2).EdgeOrientationSign.field0_0x0._s_0.C = -1;
  dVar9 = __real_3ff0000000000000;
  iVar14 = *(int *)(lVar6 + uVar11 * 0x28);
  if (iVar14 == 0) {
    uVar4 = *(uint *)(lVar6 + 8 + uVar11 * 0x28);
    uVar13 = 0;
    if ((int)uVar4 < (int)param_1->_padding_) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FMeshGeodesicSurfaceTracer *)(*pcVar8)();
      return pFVar12;
    }
    local_80.EdgeID = *(int *)(param_1->_padding_ + (longlong)(int)uVar4 * 4);
    local_80.VID = uVar4;
    local_80.PolarAngle = param_3;
    UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromVertex
              (__return_storage_ptr__,&local_80,param_4);
  }
  else if (iVar14 == 1) {
    uVar4 = *(uint *)(lVar6 + 8 + uVar11 * 0x28);
    dVar2 = *(double *)(lVar6 + 0x10 + uVar11 * 0x28);
    lVar6 = *(longlong *)
             ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8);
    uVar13 = *(uint *)(lVar6 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0x10);
    uVar11 = (ulonglong)(uVar13 & 0x1ff);
    lVar7 = *(longlong *)
             ((pFVar5->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
    uVar3 = *(undefined8 *)(lVar7 + uVar11 * 0xc);
    local_f8 = (uint)uVar3;
    uVar15 = 0;
    if (local_f8 != uVar4) {
      if ((uint)((ulonglong)uVar3 >> 0x20) == uVar4) {
        uVar15 = 1;
      }
      else {
        uVar15 = 0xffffffff;
        if (*(uint *)(lVar7 + 8 + uVar11 * 0xc) == uVar4) {
          uVar15 = 2;
        }
      }
    }
    lVar7 = *(longlong *)
             ((pFVar5->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
    local_ec = (undefined1  [8])*(undefined8 *)(lVar7 + uVar11 * 0xc);
    local_e4 = *(undefined4 *)(lVar7 + 8 + uVar11 * 0xc);
    local_e0._s_0.Z = 0.0;
    local_e0._s_0.X = 0.0;
    local_e0._s_0.Y = 0.0;
    if (*(int *)(local_ec + (longlong)(int)uVar15 * 4) !=
        *(int *)(lVar6 + (ulonglong)(uVar4 & 0x1ff) * 0x10)) {
      dVar2 = __real_3ff0000000000000 - dVar2;
    }
    if (((int)uVar15 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FMeshGeodesicSurfaceTracer *)(*pcVar8)();
      return pFVar12;
    }
    iVar14 = uVar15 + 1;
    *(double *)((longlong)&local_e0 + (longlong)(int)uVar15 * 8) = dVar2;
    iVar14 = iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                      (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    if ((2 < iVar14) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FMeshGeodesicSurfaceTracer *)(*pcVar8)();
      return pFVar12;
    }
    local_b0.EdgeID = uVar4;
    *(double *)((longlong)&local_e0 + (longlong)iVar14 * 8) = dVar9 - dVar2;
    __libm_sse2_sincos_();
    UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromBaryPoint
              (__return_storage_ptr__,uVar13,(TVector<double> *)&local_e0._s_0,&local_b0,param_4);
  }
  else if (iVar14 == 2) {
    uVar4 = *(uint *)(lVar6 + 8 + uVar11 * 0x28);
    pdVar1 = (double *)(lVar6 + 0x10 + uVar11 * 0x28);
    local_98._s_0.X = *pdVar1;
    local_98._s_0.Y = pdVar1[1];
    local_98._s_0.Z = *(double *)(lVar6 + 0x20 + uVar11 * 0x28);
    uVar13 = 0;
    if ((int)uVar4 < (int)param_1->_padding_) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FMeshGeodesicSurfaceTracer *)(*pcVar8)();
      return pFVar12;
    }
    local_c8.EdgeID = *(int *)(param_1->_padding_ + (longlong)(int)uVar4 * 4);
    __libm_sse2_sincos_();
    UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromBaryPoint
              (__return_storage_ptr__,uVar4,(TVector<double> *)&local_98._s_0,&local_c8,param_4);
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\IntrinsicTriangulationMesh.cpp"
                        ,0x1b2,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FMeshGeodesicSurfaceTracer *)(*pcVar8)();
      return pFVar12;
    }
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_DynamicMesh @ 14c77f530

void __cdecl IMPLEMENT_MODULE_DynamicMesh(void)

{
  return;
}

