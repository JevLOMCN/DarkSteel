// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ApplyStampToVertexColors @ 14cce2e40

void __thiscall
UE::Geometry::FVertexColorSoftenBrushOp::ApplyStampToVertexColors
          (FVertexColorSoftenBrushOp *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4,
          FSculptBrushStamp *param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  pTVar19 = param_6;
  iVar8 = param_6->ArrayNum;
  if ((param_7->ArrayNum != iVar8) &&
     (bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8931431689427616057>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshVertexPaintBrushOps.h"
                          ,0x139,"NewColorsOut.Num() == NumElements"), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  dVar12 = __real_3ff0000000000000;
  uVar20 = 0;
  if (0 < iVar8) {
    lVar21 = 0;
    lVar22 = 0;
    pTVar1 = &this->TempElementIDs;
    do {
      uVar18 = ~uVar20 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar20 < pTVar19->ArrayNum) {
        uVar14 = uVar18;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar14 = *(uint *)((pTVar19->AllocatorInstance).Data + lVar21 * 4);
      piVar2 = &(this->TempElementIDs).ArrayMax;
      iVar9 = *(int *)(*(longlong *)
                        (*(longlong *)&param_2->field_0x60 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
      (this->TempElementIDs).ArrayNum = 0;
      if (*piVar2 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
      TDynamicMeshOverlay<float,4>::GetVertexElements
                ((TDynamicMeshOverlay<float,4> *)param_2,iVar9,pTVar1);
      pTVar19 = param_6;
      iVar9 = (this->TempElementIDs).ArrayNum;
      if (iVar9 < 2) {
        uVar14 = 0;
        if ((int)uVar20 < param_6->ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar17 = param_7;
        lVar10 = *(longlong *)&param_2->field_0x48;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).Data + lVar21 * 4);
        uVar15 = uVar14 * 4;
        uVar4 = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar15 & 0x1ff) * 4);
        uVar5 = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
        uVar6 = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
        uVar7 = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                 (ulonglong)(uVar15 + 3 & 0x1ff) * 4);
        uVar14 = 0;
        if ((int)uVar20 < param_7->ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar23 = CONCAT44(uVar5,uVar4);
        uVar24 = CONCAT44(uVar7,uVar6);
      }
      else {
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        pFVar3 = pFVar16 + (longlong)iVar9 * 4;
        while( true ) {
          if ((this->TempElementIDs).ArrayNum != iVar9) {
            param_5._0_1_ = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_5)
            ;
          }
          pTVar17 = param_7;
          if (pFVar16 == pFVar3) break;
          lVar10 = *(longlong *)&param_2->field_0x48;
          uVar14 = *(uint *)pFVar16;
          uVar15 = uVar14 * 4;
          fVar26 = fVar26 + *(float *)(*(longlong *)
                                        (lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar15 & 0x1ff) * 4);
          fVar27 = fVar27 + *(float *)(*(longlong *)
                                        (lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
          fVar28 = fVar28 + *(float *)(*(longlong *)
                                        (lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
          pFVar16 = pFVar16 + 4;
          fVar29 = fVar29 + *(float *)(*(longlong *)
                                        (lVar10 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar15 + 3 & 0x1ff) * 4);
        }
        uVar14 = 0;
        if ((int)uVar20 < param_7->ArrayNum) {
          uVar14 = uVar18;
        }
        fVar25 = (float)(dVar12 / (double)(this->TempElementIDs).ArrayNum);
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar23 = CONCAT44(fVar27 * fVar25,fVar26 * fVar25);
        uVar24 = CONCAT44(fVar29 * fVar25,fVar28 * fVar25);
        pTVar19 = param_6;
      }
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 1;
      pFVar3 = (pTVar17->AllocatorInstance).Data + lVar22;
      *(undefined8 *)pFVar3 = uVar23;
      *(undefined8 *)(pFVar3 + 8) = uVar24;
      lVar22 = lVar22 + 0x10;
    } while (lVar21 < iVar8);
  }
  return;
}

