// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowAssetTools
// Functions: 4

// operator() @ 14dab6670

void __thiscall
`UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int local_38 [4];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = param_1 * 3;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_20 = *(undefined4 *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_28 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  lVar3 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x78);
  local_38[0] = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)(uVar2 & 0x1ff) * 4);
  local_38[1] = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                 (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  lVar8 = 0;
  local_38[2] = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                 (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  do {
    uVar2 = *(uint *)((longlong)&local_28 + lVar8);
    plVar4 = *(longlong **)((longlong)this + 0x18);
    lVar3 = *(longlong *)((longlong)this + 0x10);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(uint *)(*plVar4 + (longlong)(int)uVar2 * 4);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    local_18 = *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0xc);
    local_10 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0xc);
    piVar1 = (int *)((longlong)local_38 + lVar8);
    lVar8 = lVar8 + 4;
    uVar2 = *piVar1 * 3;
    lVar3 = **(longlong **)((longlong)this + 8);
    *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 4) = (int)local_18;
    *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
            (ulonglong)(uVar2 + 1 & 0x1ff) * 4) = (int)((ulonglong)local_18 >> 0x20);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 + 2 >> 9) * 8) +
     (ulonglong)(uVar2 + 2 & 0x1ff) * 4) = local_10;
  } while (lVar8 < 0xc);
  return;
}

// operator() @ 14dab6890

void __thiscall
`UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh'::__l5::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_28 [4];
  undefined8 local_18;
  undefined4 local_10;
  
  uVar3 = param_1 * 3;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_10 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_18 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  lVar4 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x78);
  local_28[0] = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4);
  local_28[1] = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                 (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
  lVar11 = 0;
  local_28[2] = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                 (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
  do {
    uVar3 = *(uint *)((longlong)&local_18 + lVar11);
    plVar5 = *(longlong **)((longlong)this + 0x18);
    lVar4 = *(longlong *)((longlong)this + 0x10);
    uVar9 = 0;
    if ((int)uVar3 < (int)plVar5[1]) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar3 = *(uint *)(*plVar5 + (longlong)(int)uVar3 * 4);
    lVar10 = (longlong)(int)uVar3;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x18)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    uVar3 = *(uint *)((longlong)local_28 + lVar11);
    lVar11 = lVar11 + 4;
    uVar9 = uVar3 * 4;
    uVar1 = *(undefined4 *)(lVar4 + 4 + lVar10 * 0x10);
    lVar6 = **(longlong **)((longlong)this + 8);
    uVar2 = *(undefined4 *)(lVar4 + 8 + lVar10 * 0x10);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
     (ulonglong)(uVar9 & 0x1ff) * 4) = *(undefined4 *)(lVar4 + lVar10 * 0x10);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
     (ulonglong)(uVar9 + 1 & 0x1ff) * 4) = uVar1;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
     (ulonglong)(uVar9 + 2 & 0x1ff) * 4) = uVar2;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
     (ulonglong)(uVar9 + 3 & 0x1ff) * 4) = 0x3f800000;
  } while (lVar11 < 0xc);
  return;
}

// DynamicMeshToRenderingFacade @ 14dab6ac0

void __cdecl
UE::Dataflow::Conversion::DynamicMeshToRenderingFacade
          (FDynamicMesh3 *param_1,FRenderingFacade *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  TManagedArray<FLinearColor> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  longlong local_b8;
  TVector<float>_u_0 local_a0;
  FLinearColor_u_0 local_94 [2];
  double local_70;
  
  bVar12 = GeometryCollection::Facades::FRenderingFacade::CanRenderSurface(param_2);
  if (bVar12) {
    iVar13 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(param_2);
    pTVar4 = (param_2->VertexAttribute).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar14 = FManagedArrayCollection::NumElements
                         ((param_2->VertexAttribute).ConstCollection,
                          (param_2->VertexAttribute).Group);
    }
    else {
      iVar14 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if ((iVar13 == (param_1->TriangleRefCounts).UsedCount) &&
       (iVar14 == (param_1->VertexRefCounts).UsedCount)) {
      if ((param_2->Collection == (FManagedArrayCollection *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\Facades\\CollectionRenderingFacade.h"
                              ,0x73,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_2->VertexAttribute).AttributeArray ==
            (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
          ((param_2->VertexAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray!=nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x74,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ((param_2->VertexAttribute).AttributeArray)->field_0x8 = 1;
      pTVar4 = (param_2->VertexAttribute).AttributeArray;
      if ((param_2->Collection == (FManagedArrayCollection *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\Facades\\CollectionRenderingFacade.h"
                              ,0x77,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_2->VertexNormalAttribute).AttributeArray ==
            (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
          ((param_2->VertexNormalAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray!=nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x74,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ((param_2->VertexNormalAttribute).AttributeArray)->field_0x8 = 1;
      pTVar5 = (param_2->VertexNormalAttribute).AttributeArray;
      if ((param_2->Collection == (FManagedArrayCollection *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\Facades\\CollectionRenderingFacade.h"
                              ,0x8a,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_2->VertexColorAttribute).AttributeArray == (TManagedArray<FLinearColor> *)0x0) ||
          ((param_2->VertexColorAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray!=nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x74,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = 0;
      ((param_2->VertexColorAttribute).AttributeArray)->field_0x8 = 1;
      pTVar6 = (param_2->VertexColorAttribute).AttributeArray;
      local_b8 = (longlong)iVar14;
      if (0 < iVar14) {
        lVar22 = 0;
        lVar16 = 0;
        do {
          uVar20 = ~uVar18 >> 0x1f;
          uVar19 = (ulonglong)(uVar18 >> 9);
          uVar21 = (ulonglong)(uVar18 & 0x1ff);
          lVar7 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar19 * 8);
          pdVar1 = (double *)(lVar7 + uVar21 * 0x18);
          dVar9 = *pdVar1;
          dVar10 = pdVar1[1];
          local_70 = *(double *)(lVar7 + 0x10 + uVar21 * 0x18);
          uVar15 = 0;
          if ((int)uVar18 < *(int *)&pTVar4->field_0x18) {
            uVar15 = uVar20;
          }
          fVar25 = (float)local_70;
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)&pTVar4->field_0x10;
          *(float *)(lVar7 + lVar16) = (float)dVar9;
          *(float *)(lVar7 + 4 + lVar16) = (float)dVar10;
          *(float *)(lVar7 + 8 + lVar16) = fVar25;
          if ((param_1->VertexNormals).bIsSet == false) {
            uVar23 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            uVar24 = (undefined4)
                     ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
            uVar17 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          }
          else {
            lVar7 = *(longlong *)
                     ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + uVar19 * 8
                     );
            uVar3 = *(undefined8 *)(lVar7 + uVar21 * 0xc);
            uVar23 = (undefined4)uVar3;
            uVar24 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uVar17 = *(float *)(lVar7 + 8 + uVar21 * 0xc);
          }
          uVar15 = 0;
          if ((int)uVar18 < *(int *)&pTVar5->field_0x18) {
            uVar15 = uVar20;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)&pTVar5->field_0x10;
          *(ulonglong *)(lVar16 + lVar7) = CONCAT44(uVar24,uVar23);
          *(undefined4 *)(lVar16 + 8 + lVar7) = uVar17;
          if ((param_1->VertexColors).bIsSet == false) {
            local_a0._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
            local_a0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
          }
          else {
            lVar7 = *(longlong *)
                     ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + uVar19 * 8)
            ;
            local_a0._0_8_ = *(undefined8 *)(lVar7 + uVar21 * 0xc);
            local_a0._s_0.Z = *(float *)(lVar7 + 8 + uVar21 * 0xc);
          }
          FLinearColor::FLinearColor
                    ((FLinearColor *)&local_94[0]._s_0,(TVector<float> *)&local_a0._s_0);
          uVar11 = local_94[0]._8_8_;
          uVar3 = local_94[0]._0_8_;
          uVar15 = 0;
          if ((int)uVar18 < *(int *)&pTVar6->field_0x18) {
            uVar15 = uVar20;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0xc;
          puVar2 = (undefined8 *)(*(longlong *)&pTVar6->field_0x10 + lVar22);
          *puVar2 = uVar3;
          puVar2[1] = uVar11;
          lVar22 = lVar22 + 0x10;
          local_b8 = local_b8 + -1;
        } while (local_b8 != 0);
      }
    }
  }
  return;
}

// RenderingFacadeToDynamicMesh @ 14dab6f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh
          (FRenderingFacade *param_1,int param_2,FDynamicMesh3 *param_3,bool param_4)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this;
  FRefCountVector *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  TManagedArray<FString> *pTVar6;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar7;
  longlong lVar8;
  FDynamicMeshAttributeSet *pFVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  code *pcVar13;
  FDynamicMesh3 *pFVar14;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TManagedArray<UE::Math::TVector<float>_> *pTVar19;
  FName FVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  TManagedArray<int> *pTVar25;
  TManagedArray<UE::Math::TVector<float>_> *pTVar26;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar27;
  FRenderingFacade *pFVar28;
  uint uVar29;
  FDynamicMeshAttributeSet *pFVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  FDynamicMesh3 *pFVar40;
  TDynamicMeshOverlay<float,2> *this_00;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar41;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar42;
  ulonglong uVar43;
  TManagedArray<FLinearColor> *pTVar44;
  float fVar45;
  undefined1 auStackY_318 [32];
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  char local_2bc;
  FDynamicMesh3 *local_2b8;
  int local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  uint local_298;
  uint local_294;
  int local_290;
  FRenderingFacade *local_288;
  TManagedArray<UE::Math::TVector<float>_> *local_280;
  TManagedArray<int> *local_278;
  TManagedArray<FLinearColor> *local_270;
  FBoneWeightsSettings local_268;
  IndexIterator local_258;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *local_248;
  undefined8 local_240;
  FName local_238;
  FIndex3i_u_0 local_230;
  uint local_220 [4];
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_210;
  TVector<float>_u_0 local_208;
  undefined8 local_1f8;
  undefined4 local_1f0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_1e8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1e0;
  TDynamicMeshOverlay<float,3> *local_1d8;
  BaseIterator local_1d0;
  TVector<double>_u_0 local_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  TVector2<float>_u_0 local_190;
  undefined2 local_188;
  undefined1 local_186;
  FDynamicMesh3 *local_180;
  TDynamicMeshOverlay<float,3> **local_178;
  TManagedArray<UE::Math::TVector<float>_> *local_170;
  TArray<int,TSizedDefaultAllocator<32>_> *local_168;
  FDynamicMesh3 *local_160;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_158;
  TManagedArray<FLinearColor> *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  IndexIterator local_140;
  IndexIterator local_130;
  FBoneWeights local_120;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_318;
  lVar35 = (longlong)param_2;
  local_2bc = param_4;
  local_2b8 = param_3;
  local_288 = param_1;
  bVar21 = GeometryCollection::Facades::FRenderingFacade::CanRenderSurface(param_1);
  if (!bVar21) {
    return;
  }
  local_2c0 = 0;
  local_2c8 = 0;
  local_294 = 0;
  local_298 = GeometryCollection::Facades::FRenderingFacade::NumTriangles(param_1);
  pTVar26 = (param_1->VertexAttribute).ConstAttributeArray;
  if (pTVar26 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar22 = FManagedArrayCollection::NumElements
                       ((param_1->VertexAttribute).ConstCollection,(param_1->VertexAttribute).Group)
    ;
  }
  else {
    iVar22 = (**(code **)(*(longlong *)pTVar26 + 0x60))();
  }
  pTVar6 = (param_1->MaterialPathAttribute).ConstAttributeArray;
  if (pTVar6 == (TManagedArray<FString> *)0x0) {
    FManagedArrayCollection::NumElements
              ((param_1->MaterialPathAttribute).ConstCollection,
               (param_1->MaterialPathAttribute).Group);
  }
  else {
    (**(code **)(*(longlong *)pTVar6 + 0x60))();
  }
  if (param_2 != -1) {
    if (-1 < param_2) {
      pTVar6 = (param_1->GeometryNameAttribute).ConstAttributeArray;
      if (pTVar6 == (TManagedArray<FString> *)0x0) {
        iVar23 = FManagedArrayCollection::NumElements
                           ((param_1->GeometryNameAttribute).ConstCollection,
                            (param_1->GeometryNameAttribute).Group);
      }
      else {
        iVar23 = (**(code **)(*(longlong *)pTVar6 + 0x60))();
      }
      if (param_2 < iVar23) {
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->IndicesStartAttribute);
        uVar38 = (uint)~param_2 >> 0x1f;
        uVar33 = 0;
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar33 = uVar38;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_2c0 = *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4);
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->VertexStartAttribute);
        uVar33 = 0;
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar33 = uVar38;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_2c8 = *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4);
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->MaterialStartAttribute);
        uVar39 = 0;
        uVar33 = uVar39;
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar33 = uVar38;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_294 = *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4);
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->IndicesCountAttribute);
        uVar33 = uVar39;
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar33 = uVar38;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_298 = *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4);
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->VertexCountAttribute);
        uVar33 = uVar39;
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar33 = uVar38;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar22 = *(int *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4);
        pTVar25 = TManagedArrayAccessor<int>::Get(&param_1->MaterialCountAttribute);
        if (param_2 < *(int *)&pTVar25->field_0x18) {
          uVar39 = uVar38;
        }
        if ((uVar39 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        goto LAB_14dab72b0;
      }
    }
    bVar21 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8051465849086672927>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowAssetTools\\Private\\Dataflow\\CollectionRenderingPatternUtility.cpp"
                        ,0x1f,"0 <= InMeshIndex && InMeshIndex < Facade.NumGeometry()");
    if (bVar21) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
LAB_14dab72b0:
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  if (((param_1->IndicesAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar7 = (param_1->IndicesAttribute).ConstAttributeArray;
  local_1e8 = pTVar7;
  pTVar26 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&param_1->VertexAttribute);
  local_280 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&param_1->VertexNormalAttribute)
  ;
  if (((param_1->VertexColorAttribute).ConstAttributeArray == (TManagedArray<FLinearColor> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar28 = local_288;
  pTVar44 = (param_1->VertexColorAttribute).ConstAttributeArray;
  local_270 = pTVar44;
  if (((local_288->VertexUVAttribute).ConstAttributeArray ==
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_248 = (pFVar28->VertexUVAttribute).ConstAttributeArray;
  local_278 = TManagedArrayAccessor<int>::Get(&pFVar28->MaterialIDAttribute);
  pTVar19 = local_280;
  local_290 = (local_2b8->VertexRefCounts).UsedCount;
  local_2b0 = iVar22 + local_2c8;
  uVar33 = local_2c8;
  uVar38 = local_2c0;
  pFVar40 = local_2b8;
  while (local_2c4 = uVar33, local_2c0 = uVar38, (int)uVar33 < (int)(iVar22 + local_2c8)) {
    uVar38 = 0;
    if ((int)uVar33 < *(int *)&pTVar44->field_0x18) {
      uVar38 = ~uVar33 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar35 = (longlong)(int)local_2c4;
    uVar2 = *(undefined4 *)(*(longlong *)&pTVar44->field_0x10 + 8 + (longlong)(int)uVar33 * 0x10);
    uVar33 = 0;
    if ((int)local_2c4 < *(int *)&pTVar44->field_0x18) {
      uVar33 = ~local_2c4 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar36 = (longlong)(int)local_2c4;
    uVar3 = *(undefined4 *)(*(longlong *)&pTVar44->field_0x10 + 4 + lVar35 * 0x10);
    uVar33 = 0;
    if ((int)local_2c4 < *(int *)&pTVar44->field_0x18) {
      uVar33 = ~local_2c4 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar35 = (longlong)(int)local_2c4;
    uVar4 = *(undefined4 *)(*(longlong *)&pTVar44->field_0x10 + lVar36 * 0x10);
    uVar33 = 0;
    if ((int)local_2c4 < *(int *)&pTVar19->field_0x18) {
      uVar33 = ~local_2c4 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar37 = (longlong)(int)local_2c4;
    lVar36 = *(longlong *)&pTVar19->field_0x10;
    uVar33 = 0;
    if ((int)local_2c4 < *(int *)&pTVar26->field_0x18) {
      uVar33 = ~local_2c4 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar40 = local_2b8;
    lVar8 = *(longlong *)&pTVar26->field_0x10;
    local_1c0._s_0.X = (double)*(float *)(lVar8 + lVar37 * 0xc);
    local_1c0._s_0.Y = (double)*(float *)(lVar8 + 4 + lVar37 * 0xc);
    local_1c0._s_0.Z = (double)*(float *)(lVar8 + 8 + lVar37 * 0xc);
    local_1a8 = *(undefined8 *)(lVar36 + lVar35 * 0xc);
    local_1a0 = *(undefined4 *)(lVar36 + 8 + lVar35 * 0xc);
    local_190 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_188 = 0x101;
    local_186 = 0;
    local_19c = uVar4;
    local_198 = uVar3;
    local_194 = uVar2;
    UE::Geometry::FDynamicMesh3::AppendVertex(local_2b8,(FVertexInfo *)&local_1c0._s_0);
    if (((local_2a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2c4) &&
        ((FScriptContainerElement *)&local_2c4 <
         local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayMax * 4)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar23 = local_2a8.ArrayNum;
    if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
      iVar23 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
    }
    local_2a8.ArrayNum = iVar23 + 1;
    *(uint *)(local_2a8.AllocatorInstance.Data + (longlong)iVar23 * 4) = local_2c4;
    pTVar7 = local_1e8;
    uVar38 = local_2c0;
    uVar33 = local_2c4 + 1;
  }
  lVar35 = (longlong)(int)uVar38;
  if (lVar35 < (int)(local_298 + uVar38)) {
    lVar36 = lVar35 * 0xc;
    lVar35 = (int)(local_298 + uVar38) - lVar35;
    do {
      uVar39 = ~uVar38 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar38 < *(int *)&pTVar7->field_0x18) {
        uVar33 = uVar39;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar22 = *(int *)(*(longlong *)&pTVar7->field_0x10 + 8 + lVar36);
      uVar33 = 0;
      if ((int)uVar38 < *(int *)&pTVar7->field_0x18) {
        uVar33 = uVar39;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar23 = *(int *)(*(longlong *)&pTVar7->field_0x10 + 4 + lVar36);
      uVar33 = 0;
      if ((int)uVar38 < *(int *)&pTVar7->field_0x18) {
        uVar33 = uVar39;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = local_2b8;
      local_230._s_0.A = *(int *)(*(longlong *)&pTVar7->field_0x10 + lVar36) - local_2c8;
      local_230._s_0.B = iVar23 - local_2c8;
      local_230._s_0.C = iVar22 - local_2c8;
      UE::Geometry::FDynamicMesh3::AppendTriangle(local_2b8,(FIndex3i *)&local_230._s_0,0);
      uVar38 = uVar38 + 1;
      lVar36 = lVar36 + 0xc;
      lVar35 = lVar35 + -1;
      pTVar44 = local_270;
    } while (lVar35 != 0);
  }
  UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar40);
  if (local_2bc != '\0') {
    pTVar26 = (local_288->VertexAttribute).ConstAttributeArray;
    if (pTVar26 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar22 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)(local_288->VertexAttribute).ConstCollection,
                          (local_288->VertexAttribute).Group);
    }
    else {
      iVar22 = (**(code **)(*(longlong *)&pTVar26->field_0x0 + 0x60))();
    }
    if (local_2a8.ArrayNum < iVar22) {
      UE::Geometry::FNonManifoldMappingSupport::AttachNonManifoldVertexMappingData
                (&local_2a8,pFVar40);
    }
  }
  pFVar9 = (pFVar40->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  if ((pFVar30->NormalLayers).Array.ArrayNum < 1) {
    local_1d8 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_1d8 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar30->NormalLayers).Array.AllocatorInstance.Data;
  }
  UE::Geometry::TDynamicMeshOverlay<float,3>::CreatePerVertex(local_1d8,0.0);
  pFVar1 = &pFVar40->TriangleRefCounts;
  local_178 = &local_1d8;
  local_170 = local_280;
  local_168 = &local_2a8;
  local_180 = pFVar40;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_1d0,pFVar1,0,
             (pFVar1->RefCounts).CurBlock * 0x200 +
             (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar22 = (pFVar1->RefCounts).CurBlock * 0x200 +
           (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_140,pFVar1,iVar22,iVar22);
  iVar22 = local_1d0.Index;
  while (iVar22 != local_140._8_4_) {
    `UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh'::__l5::<lambda_1>::operator()
              (&local_180,local_1d0.Index);
    UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_1d0);
    iVar22 = local_1d0.Index;
  }
  pFVar9 = (pFVar40->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar30);
  pFVar9 = (pFVar40->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  UE::Geometry::TDynamicMeshOverlay<float,4>::CreatePerVertex
            ((TDynamicMeshOverlay<float,4> *)(pFVar30->ColorLayer).Ptr,0.0);
  local_208._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_208._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  UE::Geometry::FDynamicMesh3::EnableVertexColors(pFVar40,(TVector<float> *)&local_208._s_0);
  pFVar9 = (pFVar40->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  local_210 = (pFVar30->ColorLayer).Ptr;
  local_158 = &local_210;
  local_148 = &local_2a8;
  local_160 = pFVar40;
  local_150 = pTVar44;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_258,pFVar1,0,
             (pFVar1->RefCounts).CurBlock * 0x200 +
             (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar22 = (pFVar1->RefCounts).CurBlock * 0x200 +
           (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_130,pFVar1,iVar22,iVar22);
  pFVar14 = pFVar40;
  uVar33 = local_258._8_4_;
joined_r0x00014dab7a4a:
  local_258._8_4_ = uVar33;
  if (uVar33 != local_130._8_4_) {
    `UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh'::__l5::<lambda_2>::operator()
              (&local_160,uVar33);
    uVar33 = uVar33 + 1;
    pFVar14 = local_2b8;
    if ((int)uVar33 < (int)local_258._12_4_) {
      do {
        if ((*(short *)(*(longlong *)
                         (*(longlong *)(local_258._0_8_ + 8) + (ulonglong)(uVar33 >> 9) * 8) +
                       (ulonglong)(uVar33 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)(local_258._0_8_ + 8) + (ulonglong)(uVar33 >> 9) * 8) +
                      (ulonglong)(uVar33 & 0x1ff) * 2) != -1)) break;
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < (int)local_258._12_4_);
    }
    goto joined_r0x00014dab7a4a;
  }
  pFVar9 = (pFVar14->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar30);
  pTVar25 = local_278;
  uVar33 = local_2c0;
  pFVar9 = (pFVar14->AttributeSet).Ptr;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar30 = pFVar9;
  }
  pTVar10 = (pFVar30->MaterialIDAttrib).Ptr;
  uVar39 = (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->RefCounts).CurBlock * 0x200;
  uVar38 = 0;
  pTVar15 = local_248;
  if ((uVar39 != 0) &&
     (pFVar11 = (pFVar40->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar11 - 1U))) {
    uVar34 = 1;
    uVar38 = 1;
    if (1 < (int)uVar39) {
      do {
        sVar5 = *(short *)(*(longlong *)(pFVar11 + (ulonglong)(uVar34 >> 9) * 8) +
                          (ulonglong)(uVar34 & 0x1ff) * 2);
        if ((sVar5 != 0) && (uVar38 = uVar34, sVar5 != -1)) break;
        uVar34 = uVar34 + 1;
        uVar38 = uVar34;
      } while ((int)uVar34 < (int)uVar39);
    }
  }
joined_r0x00014dab7b49:
  local_248 = pTVar15;
  if (uVar38 != uVar39) {
    while( true ) {
      uVar34 = uVar38 + uVar33;
      uVar24 = 0;
      if ((int)uVar34 < *(int *)&pTVar25->field_0x18) {
        uVar24 = ~uVar34 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = uVar38 >> 9;
      uVar29 = uVar38 & 0x1ff;
      uVar38 = uVar38 + 1;
      *(uint *)(*(longlong *)(*(longlong *)&pTVar10->field_0x20 + (ulonglong)uVar24 * 8) +
               (ulonglong)uVar29 * 4) =
           *(int *)(*(longlong *)&pTVar25->field_0x10 + (longlong)(int)uVar34 * 4) - local_294;
      pTVar15 = local_248;
      if ((int)uVar39 <= (int)uVar38) break;
      while( true ) {
        lVar35 = *(longlong *)
                  ((pFVar40->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar38 >> 9) * 8);
        if ((*(short *)(lVar35 + (ulonglong)(uVar38 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar35 + (ulonglong)(uVar38 & 0x1ff) * 2) != -1)) break;
        uVar38 = uVar38 + 1;
        if ((int)uVar39 <= (int)uVar38) goto joined_r0x00014dab7b49;
      }
    }
    goto joined_r0x00014dab7b49;
  }
  if (0 < local_2a8.ArrayNum) {
    uVar33 = *(uint *)local_2a8.AllocatorInstance.Data;
    uVar38 = 0;
    if ((int)uVar33 < *(int *)(&pTVar15->field_0x8 + 0x10)) {
      uVar38 = ~uVar33 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar35 = (longlong)local_2b0;
    iVar22 = *(int *)(*(longlong *)(&pTVar15->field_0x8 + 8) + 8 + (longlong)(int)uVar33 * 0x10);
    if (iVar22 < 1) goto LAB_14dab80e5;
    lVar36 = (longlong)(int)local_2c8;
    if (lVar36 < lVar35) {
      lVar37 = lVar36 << 4;
      lVar35 = lVar35 - lVar36;
      uVar33 = local_2c8;
      do {
        uVar38 = 0;
        if ((int)uVar33 < *(int *)(&pTVar15->field_0x8 + 0x10)) {
          uVar38 = ~uVar33 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((iVar22 != *(int *)(lVar37 + 8 + *(longlong *)(&pTVar15->field_0x8 + 8))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumUVLayers == VertexUVs.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowAssetTools\\Private\\Dataflow\\CollectionRenderingPatternUtility.cpp"
                                ,0x7e,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar33 = uVar33 + 1;
        lVar37 = lVar37 + 0x10;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    pFVar40 = local_2b8;
    pFVar9 = (local_2b8->AttributeSet).Ptr;
    (**(code **)(pFVar9->_padding_ + 0xb0))(pFVar9,iVar22);
    uVar33 = 0;
    if (0 < iVar22) {
      local_280 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
      local_278 = (TManagedArray<int> *)(longlong)iVar22;
      do {
        pTVar26 = local_280;
        pFVar9 = (pFVar40->AttributeSet).Ptr;
        pFVar30 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar30 = pFVar9;
        }
        if (((int)uVar33 < (pFVar30->UVLayers).Array.ArrayNum) && (-1 < (int)uVar33)) {
          if (((int)uVar33 < 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          this_00 = *(TDynamicMeshOverlay<float,2> **)
                     ((pFVar30->UVLayers).Array.AllocatorInstance.Data + (longlong)pTVar26 * 8);
        }
        else {
          this_00 = (TDynamicMeshOverlay<float,2> *)0x0;
        }
        UE::Geometry::TDynamicMeshOverlay<float,2>::CreatePerVertex(this_00,0.0);
        local_298 = (pFVar40->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (pFVar40->TriangleRefCounts).RefCounts.CurBlockUsed;
        local_2c0 = 0;
        if ((local_298 == 0) ||
           (pFVar11 = (pFVar40->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
           (ushort)(**(short **)pFVar11 - 1U) < 0xfffe)) {
LAB_14dab7e61:
          bVar21 = local_2c0 == local_298;
        }
        else {
          uVar38 = 1;
          local_2c0 = 1;
          bVar21 = local_298 == 1;
          if (1 < (int)local_298) {
            do {
              sVar5 = *(short *)(*(longlong *)(pFVar11 + (ulonglong)(uVar38 >> 9) * 8) +
                                (ulonglong)(uVar38 & 0x1ff) * 2);
              pTVar26 = local_280;
              if ((sVar5 != 0) && (local_2c0 = uVar38, sVar5 != -1)) break;
              uVar38 = uVar38 + 1;
              local_2c0 = uVar38;
            } while ((int)uVar38 < (int)local_298);
            goto LAB_14dab7e61;
          }
        }
        if (!bVar21) {
          local_294 = ~uVar33 >> 0x1f;
LAB_14dab7e80:
          do {
            pTVar15 = local_248;
            uVar39 = local_294;
            lVar35 = *(longlong *)
                      ((pFVar40->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_2c0 >> 9) * 8);
            uVar38 = local_2c0 * 3;
            pFVar11 = (this_00->ElementTriangles).Blocks.AllocatorInstance.Data;
            local_1f0 = *(undefined4 *)(lVar35 + 8 + (ulonglong)(local_2c0 & 0x1ff) * 0xc);
            local_1f8 = *(undefined8 *)(lVar35 + (ulonglong)(local_2c0 & 0x1ff) * 0xc);
            local_220[0] = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar38 >> 9) * 8) +
                                    (ulonglong)(uVar38 & 0x1ff) * 4);
            local_220[1] = *(undefined4 *)
                            (*(longlong *)(pFVar11 + (ulonglong)(uVar38 + 1 >> 9) * 8) +
                            (ulonglong)(uVar38 + 1 & 0x1ff) * 4);
            lVar35 = 0;
            local_220[2] = *(undefined4 *)
                            (*(longlong *)(pFVar11 + (ulonglong)(uVar38 + 2 >> 9) * 8) +
                            (ulonglong)(uVar38 + 2 & 0x1ff) * 4);
            do {
              uVar38 = *(uint *)((longlong)&local_1f8 + lVar35);
              uVar34 = 0;
              if ((int)uVar38 < local_2a8.ArrayNum) {
                uVar34 = ~uVar38 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar38 = *(uint *)(local_2a8.AllocatorInstance.Data + (longlong)(int)uVar38 * 4);
              uVar34 = 0;
              if ((int)uVar38 < *(int *)(&pTVar15->field_0x8 + 0x10)) {
                uVar34 = ~uVar38 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar36 = *(longlong *)(&pTVar15->field_0x8 + 8);
              uVar34 = 0;
              if ((int)uVar33 < *(int *)(lVar36 + 8 + (longlong)(int)uVar38 * 0x10)) {
                uVar34 = uVar39;
              }
              if ((uVar34 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar12 = *(undefined8 *)
                        (*(longlong *)(lVar36 + (longlong)(int)uVar38 * 0x10) +
                        (longlong)local_280 * 8);
              uVar38 = *(uint *)((longlong)local_220 + lVar35);
              lVar35 = lVar35 + 4;
              local_240._0_4_ = (undefined4)uVar12;
              *(undefined4 *)
               (*(longlong *)
                 ((this_00->Elements).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uVar38 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar38 * 2 & 0x1ff) * 4)
                   = (undefined4)local_240;
              local_240._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
              *(undefined4 *)
               (*(longlong *)
                 ((this_00->Elements).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uVar38 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar38 * 2 + 1 & 0x1ff) * 4) = local_240._4_4_;
              local_240 = uVar12;
            } while (lVar35 < 0xc);
            local_2c0 = local_2c0 + 1;
            pFVar40 = local_2b8;
            if ((int)local_2c0 < (int)local_298) {
              do {
                lVar35 = *(longlong *)
                          ((local_2b8->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_2c0 >> 9) * 8);
                if ((*(short *)(lVar35 + (ulonglong)(local_2c0 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar35 + (ulonglong)(local_2c0 & 0x1ff) * 2) != -1))
                goto LAB_14dab7e80;
                local_2c0 = local_2c0 + 1;
              } while ((int)local_2c0 < (int)local_298);
            }
            pTVar26 = local_280;
          } while (local_2c0 != local_298);
        }
        local_280 = (TManagedArray<UE::Math::TVector<float>_> *)((longlong)pTVar26 + 1);
        uVar33 = uVar33 + 1;
      } while ((longlong)local_280 < (longlong)local_278);
    }
  }
  lVar35 = (longlong)local_2b0;
LAB_14dab80e5:
  pTVar42 = (local_288->BoneWeightsAttribute).ConstAttributeArray;
  pTVar41 = (local_288->BoneIndicesAttribute).ConstAttributeArray;
  local_278 = (TManagedArray<int> *)pTVar42;
  local_270 = (TManagedArray<FLinearColor> *)pTVar41;
  if ((pTVar42 != (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (pTVar41 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    ::FName::FName(&local_238,"Default");
    FVar20 = local_238;
    pFVar40 = local_2b8;
    pFVar9 = (local_2b8->AttributeSet).Ptr;
    pFVar30 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar30 = pFVar9;
    }
    uVar33 = ::GetTypeHash(local_238.ComparisonIndex.Value);
    if (*(int *)&(pFVar30->SkinWeightAttributes).field_0x8 !=
        *(int *)&(pFVar30->SkinWeightAttributes).field_0x34) {
      puVar31 = *(undefined1 **)&(pFVar30->SkinWeightAttributes).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &(pFVar30->SkinWeightAttributes).field_0x38;
      }
      iVar22 = *(int *)(puVar31 +
                       (ulonglong)
                       (*(int *)&(pFVar30->SkinWeightAttributes).field_0x48 - 1U &
                       FVar20.Number + uVar33) * 4);
      if (iVar22 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar30->SkinWeightAttributes + (longlong)iVar22 * 0x18) ==
              FVar20) {
            pTVar27 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&pFVar30->SkinWeightAttributes,FVar20);
            if ((pTVar27 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x27b,L""), bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_288 = *(FRenderingFacade **)&pTVar27->field_0x8;
            if (local_288 != (FRenderingFacade *)0x0) goto LAB_14dab82b2;
            break;
          }
          iVar22 = *(int *)(*(longlong *)&pFVar30->SkinWeightAttributes + 0x10 +
                           (longlong)iVar22 * 0x18);
        } while (iVar22 != -1);
      }
    }
    pFVar28 = ::operator_new(0x30);
    if (pFVar28 == (FRenderingFacade *)0x0) {
      pFVar28 = (FRenderingFacade *)0x0;
      local_288 = (FRenderingFacade *)0x0;
    }
    else {
      this = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)
             &(pFVar28->VertexAttribute).Collection;
      pFVar28->Collection = (FManagedArrayCollection *)0x0;
      (pFVar28->VertexAttribute).ConstCollection = (FManagedArrayCollection *)pFVar40;
      pFVar28->ConstCollection =
           (FManagedArrayCollection *)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&(pFVar28->VertexAttribute).Name)->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      (pFVar28->VertexAttribute).Group.ComparisonIndex = 0;
      (pFVar28->VertexAttribute).Group.Number = 0;
      local_288 = pFVar28;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this);
      local_120.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_120.BoneWeights.ArrayNum = 0;
      local_120.BoneWeights.ArrayMax = 0xc;
      local_120.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_120.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_120.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar28,
                 &local_120);
    }
    pFVar9 = (pFVar40->AttributeSet).Ptr;
    pFVar30 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar30 = pFVar9;
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar30,local_238,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar28);
LAB_14dab82b2:
    fVar18 = __real_477fff00;
    fVar17 = __real_3f000000;
    fVar16 = __real_3f800000;
    local_2b8 = (FDynamicMesh3 *)(longlong)(int)local_2c8;
    if ((longlong)local_2b8 < lVar35) {
      lVar35 = (longlong)local_2b8 << 4;
      local_290 = local_290 - local_2c8;
      pFVar40 = local_2b8;
      do {
        uVar38 = (uint)pFVar40;
        uVar33 = 0;
        if ((int)uVar38 < *(int *)&pTVar42->field_0x18) {
          uVar33 = ~uVar38 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar36 = *(longlong *)&pTVar42->field_0x10;
        uVar33 = 0;
        if ((int)uVar38 < *(int *)&pTVar41->field_0x18) {
          uVar33 = ~uVar38 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar37 = *(longlong *)&pTVar41->field_0x10;
        uVar32 = 0;
        local_d8.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0xc;
        iVar22 = *(int *)(lVar35 + 8 + lVar37);
        if (*(int *)(lVar35 + 8 + lVar36) < iVar22) {
          iVar22 = *(int *)(lVar35 + 8 + lVar36);
        }
        uVar43 = uVar32;
        if (0 < iVar22) {
          do {
            uVar38 = (uint)uVar32;
            local_268.bHasDefaultBoneIndex = false;
            local_268.bBlendZeroInfluence = true;
            local_268._14_2_ = 0;
            local_268.NormalizeType = Always;
            local_268.MaxWeightCount = 0xc;
            uVar33 = 0;
            if ((int)uVar38 < *(int *)(lVar35 + 8 + lVar36)) {
              uVar33 = ~uVar38 >> 0x1f;
            }
            local_268.WeightThreshold = 1;
            local_268.DefaultBoneIndex = 0;
            if ((uVar33 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            fVar45 = *(float *)(*(longlong *)(lVar35 + lVar36) + uVar43 * 4);
            uVar33 = 0;
            if ((int)uVar38 < *(int *)(lVar35 + 8 + lVar37)) {
              uVar33 = ~uVar38 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (fVar16 <= fVar45) {
              fVar45 = fVar16;
            }
            local_1e0.Container = &local_d8;
            if (fVar45 <= 0.0) {
              fVar45 = 0.0;
            }
            AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::
            AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_1e0,
                       (FBoneWeight)
                       ((int)(fVar45 * fVar18 + fVar17) << 0x10 |
                       (uint)*(ushort *)(*(longlong *)(lVar35 + lVar37) + uVar43 * 4)),&local_268);
            uVar32 = (ulonglong)(uVar38 + 1);
            uVar43 = uVar43 + 1;
          } while ((longlong)uVar43 < (longlong)iVar22);
        }
        AnimationCore::FBoneWeights::operator=
                  ((FBoneWeights *)
                   ((ulonglong)(local_290 + local_2c8 & 0x1ff) * 0x40 +
                   *(longlong *)
                    ((((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                        *)&(local_288->VertexAttribute).Name)->AllocatorInstance).Data +
                    (ulonglong)(local_290 + local_2c8 >> 9) * 8)),(FBoneWeights *)&local_d8);
        if (local_d8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
        }
        local_2c8 = local_2c8 + 1;
        pFVar40 = (FDynamicMesh3 *)(ulonglong)local_2c8;
        local_2b8 = (FDynamicMesh3 *)((longlong)&local_2b8->_padding_ + 1);
        lVar35 = lVar35 + 0x10;
        pTVar41 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_270;
        pTVar42 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_278;
      } while ((longlong)local_2b8 < (longlong)local_2b0);
    }
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  return;
}

