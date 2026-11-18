// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// operator() @ 14ccc7780

void __thiscall
`FEraseSculptLayerBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  
  plVar17 = *(longlong **)((longlong)this + 0x18);
  uVar20 = 0;
  lVar23 = (longlong)param_1;
  uVar22 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < (int)plVar17[1]) {
    uVar13 = uVar22;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar3 = 0.0;
  dVar2 = 0.0;
  dVar10 = 0.0;
  local_b0 = 0.0;
  local_c0 = 0;
  uStack_b8 = 0;
  uVar13 = *(uint *)(*plVar17 + lVar23 * 4);
  lVar15 = *(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) +
            (ulonglong)(uVar13 >> 9) * 8);
  pdVar1 = (double *)(lVar15 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
  local_d8 = *pdVar1;
  dStack_d0 = pdVar1[1];
  local_c8 = *(double *)(lVar15 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
  lVar15 = (longlong)*(int *)(*(longlong *)((longlong)this + 0x38) + 8);
  dVar4 = 0.0;
  if (0 < lVar15) {
    dVar2 = 0.0;
    dVar3 = 0.0;
    uVar19 = uVar20;
    uVar21 = uVar20;
    do {
      uVar18 = (uint)uVar19;
      if (uVar18 != *(uint *)((longlong)this + 0x40)) {
        plVar17 = *(longlong **)((longlong)this + 0x38);
        uVar19 = uVar20;
        if ((-1 < (int)uVar18) && ((int)uVar18 < (int)plVar17[1])) {
          if (((int)uVar18 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar19 = *(ulonglong *)(*plVar17 + uVar21 * 8);
        }
        lVar6 = *(longlong *)(uVar19 + 0x20);
        uVar14 = uVar13 * 3;
        dVar4 = *(double *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 8);
        dVar5 = *(double *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                 (ulonglong)(uVar14 + 1 & 0x1ff) * 8);
        dVar25 = *(double *)
                  (*(longlong *)(lVar6 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                  (ulonglong)(uVar14 + 2 & 0x1ff) * 8);
        uVar14 = 0;
        if ((int)uVar18 < *(int *)((longlong)this + 0x50)) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar24 = *(double *)(*(longlong *)((longlong)this + 0x48) + uVar21 * 8);
        dVar10 = dVar10 + dVar25 * dVar24;
        dVar3 = dVar3 + dVar4 * dVar24;
        dVar2 = dVar2 + dVar5 * dVar24;
        local_b0 = dVar10;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar21 = uVar21 + 1;
      dVar4 = dVar10;
    } while ((longlong)uVar21 < lVar15);
  }
  lVar15 = *(longlong *)this;
  dVar5 = dVar3 - local_d8;
  dVar10 = dVar2 - dStack_d0;
  dVar4 = dVar4 - local_c8;
  if ((*(longlong *)(lVar15 + 0x10) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar7 = *(undefined8 **)(lVar15 + 0x10);
  uVar8 = *(undefined8 *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable((void *)*puVar7);
  pcVar9 = (code *)*puVar7;
  plVar17 = puVar7 + 2;
  if ((longlong *)puVar7[5] != (longlong *)0x0) {
    plVar17 = (longlong *)puVar7[5];
  }
  uVar16 = (**(code **)(*plVar17 + 8))();
  dVar24 = (double)(*pcVar9)(uVar16,uVar8,&local_d8);
  dVar24 = dVar24 * *(double *)((longlong)this + 0x28);
  dVar25 = dVar5 * dVar5 + dVar10 * dVar10 + dVar4 * dVar4;
  if (dVar24 * dVar24 <= dVar25) {
    dVar25 = SQRT(dVar25);
    if (dVar25 <= 0.0) {
      dVar4 = 0.0;
      dVar10 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar25 = __real_3ff0000000000000 / dVar25;
      dVar5 = dVar5 * dVar25;
      dVar10 = dVar10 * dVar25;
      dVar4 = dVar4 * dVar25;
    }
    plVar17 = *(longlong **)((longlong)this + 0x20);
    dVar3 = dVar5 * dVar24 + local_d8;
    dVar2 = dVar10 * dVar24 + dStack_d0;
    uVar13 = 0;
    if (param_1 < (int)plVar17[1]) {
      uVar13 = uVar22;
    }
    dVar10 = dVar4 * dVar24 + local_c8;
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar15 = *plVar17;
    *(double *)(lVar15 + lVar23 * 0x18) = dVar3;
    *(double *)(lVar15 + 8 + lVar23 * 0x18) = dVar2;
    *(double *)(lVar15 + 0x10 + lVar23 * 0x18) = dVar10;
  }
  else {
    plVar17 = *(longlong **)((longlong)this + 0x20);
    uVar13 = 0;
    if (param_1 < (int)plVar17[1]) {
      uVar13 = uVar22;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar15 = *plVar17;
    auVar11._8_4_ = SUB84(dVar2,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(lVar15 + lVar23 * 0x18) = auVar11;
    *(double *)(lVar15 + 0x10 + lVar23 * 0x18) = local_b0;
  }
  return;
}

// ApplyStamp @ 14ccdee90

void __thiscall
FEraseSculptLayerBrushOp::ApplyStamp
          (FEraseSculptLayerBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FDynamicMesh3 *local_res10;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FEraseSculptLayerBrushOp **local_b0;
  FEraseSculptLayerBrushOp *local_a8;
  FDynamicMesh3 **local_a0;
  FSculptBrushStamp *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_88;
  double local_80;
  double local_78;
  FDynamicMeshSculptLayers *local_70;
  int local_68;
  FScriptContainerElement *local_60;
  int local_58;
  undefined4 local_54;
  
  pFVar6 = (param_1->AttributeSet).Ptr;
  dVar1 = param_2->Radius;
  dVar2 = param_2->Power;
  dVar3 = param_2->DeltaTime;
  if ((pFVar6 != (FDynamicMeshAttributeSet *)0x0) &&
     (&pFVar6->SculptLayers != (FDynamicMeshSculptLayers *)0x0)) {
    iVar4 = (pFVar6->SculptLayers).ActiveLayer;
    iVar5 = (pFVar6->SculptLayers).LayerWeights.ArrayNum;
    pFVar7 = (pFVar6->SculptLayers).LayerWeights.AllocatorInstance.Data;
    local_res10 = param_1;
    if (iVar5 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_a0 = &local_res10;
    local_88 = param_4;
    local_54 = local_b0._4_4_;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FEraseSculptLayerBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>
               ::Call;
    local_b0 = &local_a8;
    local_c8.DataPtr = (void **)0x0;
    local_c8.ArrayNum = 0;
    local_a8 = this;
    local_98 = param_2;
    local_90 = param_3;
    local_80 = dVar1 * dVar2 * dVar3;
    local_78 = dVar1;
    local_70 = &pFVar6->SculptLayers;
    local_68 = iVar4;
    local_60 = pFVar7;
    local_58 = iVar5;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,
               local_res10._0_1_,None,&local_c8);
  }
  return;
}

// GetBrushTargetType @ 14ccfe120

ESculptBrushOpTargetType __thiscall
FEraseSculptLayerBrushOp::GetBrushTargetType(FEraseSculptLayerBrushOp *this)

{
  return SculptMesh;
}

// IgnoreZeroMovements @ 14cd03b10

bool __thiscall FEraseSculptLayerBrushOp::IgnoreZeroMovements(FEraseSculptLayerBrushOp *this)

{
  return false;
}

