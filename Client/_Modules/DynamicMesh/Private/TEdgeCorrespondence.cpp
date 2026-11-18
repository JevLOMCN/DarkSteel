// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6dc410

TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> * __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::
TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> *this,
          FIntrinsicEdgeFlipMesh *param_1)

{
  (this->SurfaceEdgesCrossed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceEdgesCrossed).ArrayNum = 0;
  (this->SurfaceEdgesCrossed).ArrayMax = 0;
  Setup(this,param_1);
  return this;
}

// TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> @ 14c6dc440

TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> * __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::
TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> *this,FIntrinsicMesh *param_1)

{
  (this->SurfaceEdgesCrossed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceEdgesCrossed).ArrayNum = 0;
  (this->SurfaceEdgesCrossed).ArrayMax = 0;
  Setup(this,param_1);
  return this;
}

// ~TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6e0730

void __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::
~TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->SurfaceEdgesCrossed).AllocatorInstance.Data,(this->SurfaceEdgesCrossed).ArrayNum
            );
  pFVar1 = (this->SurfaceEdgesCrossed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> @ 14c6e0770

void __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::
~TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->SurfaceEdgesCrossed).AllocatorInstance.Data,(this->SurfaceEdgesCrossed).ArrayNum
            );
  pFVar1 = (this->SurfaceEdgesCrossed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Setup @ 14c763020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::Setup
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> *this,
          FIntrinsicEdgeFlipMesh *param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FDynamicMesh3 *pFVar4;
  FIntrinsicEdgeFlipMesh *pFVar5;
  FIntrinsicEdgeFlipMesh *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong local_res18;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_60 [2];
  
  this_00 = &this->SurfaceEdgesCrossed;
  piVar1 = &(this->SurfaceEdgesCrossed).ArrayMax;
  iVar11 = (this->SurfaceEdgesCrossed).ArrayNum;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data;
  if ((this->SurfaceEdgesCrossed).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar11);
    (this->SurfaceEdgesCrossed).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar11);
    (this->SurfaceEdgesCrossed).ArrayNum = 0;
  }
  uVar19 = 0;
  this->IntrinsicMesh = param_1;
  pFVar4 = (FDynamicMesh3 *)(param_1->NormalCoordinates)._padding_;
  this->SurfaceMesh = pFVar4;
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_ * 0x200;
  iVar21 = (pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar11,Default);
  pFVar5 = this->IntrinsicMesh;
  uVar12 = 0;
  if (0 < iVar11) {
    lVar20 = (longlong)iVar11;
    uVar14 = uVar19;
    uVar17 = uVar19;
    do {
      pFVar6 = this->IntrinsicMesh;
      uVar16 = (uint)uVar17;
      if ((-1 < (int)uVar16) &&
         ((int)uVar16 < (int)pFVar6->_padding_ * 0x200 + *(int *)((longlong)&pFVar6->_padding_ + 4))
         ) {
        lVar2 = (uVar17 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(pFVar6->_padding_ + lVar2) +
                               (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar13 = *(uint *)(*(longlong *)
                              ((pFVar5->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data
                              + lVar2) + (ulonglong)(uVar16 & 0x1ff) * 4);
          if ((int)uVar13 < 1) {
            uVar13 = uVar12;
          }
          if (0 < (int)uVar13) {
            uVar18 = uVar12;
            if ((int)uVar16 < (this->SurfaceEdgesCrossed).ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar22 = (this_00->AllocatorInstance).Data + uVar14;
            iVar11 = *(int *)&pFVar22[8].field_0x0;
            pFVar15 = pFVar22 + 8;
            if (iVar11 < (int)uVar13) {
              iVar9 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,uVar13 - iVar11,(ForAnyElementType *)pFVar22,(int *)pFVar15,
                                 (int *)(pFVar22 + 0xc));
              memset((void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar9 * 4),0,
                     (longlong)(int)(uVar13 - iVar11) << 2);
            }
            else if ((int)uVar13 < iVar11) {
              uVar18 = iVar11 - uVar13;
              if (((int)(uVar18 | uVar13) < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar18 != 0) {
                _Dst = (void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar13 * 4);
                iVar11 = (*(int *)&pFVar15->field_0x0 - uVar18) - uVar13;
                if (iVar11 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar18 * 4),
                          (longlong)iVar11 << 2);
                }
                *(uint *)&pFVar15->field_0x0 = *(int *)&pFVar15->field_0x0 - uVar18;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(ForAnyElementType *)pFVar22,*(int *)&pFVar15->field_0x0,
                           (int *)(pFVar22 + 0xc));
              }
            }
          }
        }
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar14 = uVar14 + 0x10;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  local_res18 = 0;
  if (0 < iVar21) {
    uVar16 = 0;
    uVar14 = uVar19;
    do {
      pFVar4 = this->SurfaceMesh;
      iVar11 = (int)uVar14;
      if ((iVar11 < (int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar14 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)
         ) {
        FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
                  (local_60,this->IntrinsicMesh,iVar11,false);
        iVar9 = local_60[0].ArrayNum;
        uVar17 = uVar19;
        uVar23 = uVar19;
        if (0 < local_60[0].ArrayNum) {
          do {
            uVar18 = (uint)uVar17;
            uVar13 = uVar12;
            if ((int)uVar18 < iVar9) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar15 = local_60[0].AllocatorInstance.Data + uVar23;
            if (*(int *)(pFVar15 + 8) != 0) {
              uVar13 = *(uint *)(pFVar15 + 4);
              iVar11 = *(int *)(*(longlong *)
                                 (this->IntrinsicMesh->_padding_ + (ulonglong)(uVar13 >> 9) * 8) + 8
                               + (ulonglong)(uVar13 & 0x1ff) * 0x10);
              uVar10 = uVar12;
              if ((int)uVar13 < (this->SurfaceEdgesCrossed).ArrayNum) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar22 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
              if (iVar11 == *(int *)pFVar15) {
                uVar13 = *(int *)(pFVar15 + 8) - 1;
              }
              else {
                uVar13 = *(int *)(pFVar22 + 8) - *(int *)(pFVar15 + 8);
              }
              uVar10 = uVar12;
              if ((int)uVar13 < *(int *)(pFVar22 + 8)) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)(*(longlong *)pFVar22 + (longlong)(int)uVar13 * 4) =
                   (undefined4)local_res18;
              uVar14 = local_res18;
            }
            iVar11 = (int)uVar14;
            uVar17 = (ulonglong)(uVar18 + 1);
            uVar23 = uVar23 + 0xc;
          } while ((int)(uVar18 + 1) < iVar9);
        }
        if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].AllocatorInstance.Data);
        }
      }
      uVar13 = iVar11 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar16 = uVar16 + 1;
      local_res18 = (ulonglong)uVar13;
    } while ((int)uVar13 < iVar21);
  }
  return;
}

// Setup @ 14c763560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::Setup
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> *this,FIntrinsicMesh *param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FDynamicMesh3 *pFVar4;
  FIntrinsicMesh *pFVar5;
  FIntrinsicMesh *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong local_res18;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_60 [2];
  
  this_00 = &this->SurfaceEdgesCrossed;
  piVar1 = &(this->SurfaceEdgesCrossed).ArrayMax;
  iVar11 = (this->SurfaceEdgesCrossed).ArrayNum;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data;
  if ((this->SurfaceEdgesCrossed).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar11);
    (this->SurfaceEdgesCrossed).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar11);
    (this->SurfaceEdgesCrossed).ArrayNum = 0;
  }
  uVar19 = 0;
  this->IntrinsicMesh = param_1;
  pFVar4 = (FDynamicMesh3 *)(param_1->NormalCoordinates)._padding_;
  this->SurfaceMesh = pFVar4;
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_ * 0x200;
  iVar21 = (pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar11,Default);
  pFVar5 = this->IntrinsicMesh;
  uVar12 = 0;
  if (0 < iVar11) {
    lVar20 = (longlong)iVar11;
    uVar14 = uVar19;
    uVar17 = uVar19;
    do {
      pFVar6 = this->IntrinsicMesh;
      uVar16 = (uint)uVar17;
      if ((-1 < (int)uVar16) &&
         ((int)uVar16 < (int)pFVar6->_padding_ * 0x200 + *(int *)((longlong)&pFVar6->_padding_ + 4))
         ) {
        lVar2 = (uVar17 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(pFVar6->_padding_ + lVar2) +
                               (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar13 = *(uint *)(*(longlong *)
                              ((pFVar5->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data
                              + lVar2) + (ulonglong)(uVar16 & 0x1ff) * 4);
          if ((int)uVar13 < 1) {
            uVar13 = uVar12;
          }
          if (0 < (int)uVar13) {
            uVar18 = uVar12;
            if ((int)uVar16 < (this->SurfaceEdgesCrossed).ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar22 = (this_00->AllocatorInstance).Data + uVar14;
            iVar11 = *(int *)&pFVar22[8].field_0x0;
            pFVar15 = pFVar22 + 8;
            if (iVar11 < (int)uVar13) {
              iVar9 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,uVar13 - iVar11,(ForAnyElementType *)pFVar22,(int *)pFVar15,
                                 (int *)(pFVar22 + 0xc));
              memset((void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar9 * 4),0,
                     (longlong)(int)(uVar13 - iVar11) << 2);
            }
            else if ((int)uVar13 < iVar11) {
              uVar18 = iVar11 - uVar13;
              if (((int)(uVar18 | uVar13) < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar18 != 0) {
                _Dst = (void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar13 * 4);
                iVar11 = (*(int *)&pFVar15->field_0x0 - uVar18) - uVar13;
                if (iVar11 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar18 * 4),
                          (longlong)iVar11 << 2);
                }
                *(uint *)&pFVar15->field_0x0 = *(int *)&pFVar15->field_0x0 - uVar18;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(ForAnyElementType *)pFVar22,*(int *)&pFVar15->field_0x0,
                           (int *)(pFVar22 + 0xc));
              }
            }
          }
        }
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar14 = uVar14 + 0x10;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  local_res18 = 0;
  if (0 < iVar21) {
    uVar16 = 0;
    uVar14 = uVar19;
    do {
      pFVar4 = this->SurfaceMesh;
      iVar11 = (int)uVar14;
      if ((iVar11 < (int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar14 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)
         ) {
        FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
                  (local_60,this->IntrinsicMesh,iVar11,false);
        iVar9 = local_60[0].ArrayNum;
        uVar17 = uVar19;
        uVar23 = uVar19;
        if (0 < local_60[0].ArrayNum) {
          do {
            uVar18 = (uint)uVar17;
            uVar13 = uVar12;
            if ((int)uVar18 < iVar9) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar15 = local_60[0].AllocatorInstance.Data + uVar23;
            if (*(int *)(pFVar15 + 8) != 0) {
              uVar13 = *(uint *)(pFVar15 + 4);
              iVar11 = *(int *)(*(longlong *)
                                 (this->IntrinsicMesh->_padding_ + (ulonglong)(uVar13 >> 9) * 8) + 8
                               + (ulonglong)(uVar13 & 0x1ff) * 0x10);
              uVar10 = uVar12;
              if ((int)uVar13 < (this->SurfaceEdgesCrossed).ArrayNum) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar22 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
              if (iVar11 == *(int *)pFVar15) {
                uVar13 = *(int *)(pFVar15 + 8) - 1;
              }
              else {
                uVar13 = *(int *)(pFVar22 + 8) - *(int *)(pFVar15 + 8);
              }
              uVar10 = uVar12;
              if ((int)uVar13 < *(int *)(pFVar22 + 8)) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)(*(longlong *)pFVar22 + (longlong)(int)uVar13 * 4) =
                   (undefined4)local_res18;
              uVar14 = local_res18;
            }
            iVar11 = (int)uVar14;
            uVar17 = (ulonglong)(uVar18 + 1);
            uVar23 = uVar23 + 0xc;
          } while ((int)(uVar18 + 1) < iVar9);
        }
        if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].AllocatorInstance.Data);
        }
      }
      uVar13 = iVar11 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar16 = uVar16 + 1;
      local_res18 = (ulonglong)uVar13;
    } while ((int)uVar13 < iVar21);
  }
  return;
}

// TraceEdge @ 14c76c040

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  FDynamicMesh3 *pFVar1;
  FIntrinsicEdgeFlipMesh *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  <lambda_1> local_res8;
  
  pFVar1 = this->SurfaceMesh;
  pFVar2 = this->IntrinsicMesh;
  uVar5 = 0;
  if (param_1 < (this->SurfaceEdgesCrossed).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_res8.TraceMesh = pFVar2;
  FNormalCoordSurfaceTraceImpl::
  TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge_::__l2::<lambda_1>_>
            (__return_storage_ptr__,param_1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((this->SurfaceEdgesCrossed).AllocatorInstance.Data + (longlong)param_1 * 0x10),pFVar1,
             pFVar2,param_2,param_3,&local_res8);
  return __return_storage_ptr__;
}

// TraceEdge @ 14c76c120

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge
          (TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh> *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  FDynamicMesh3 *pFVar1;
  FIntrinsicMesh *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar6;
  <lambda_1> local_res8;
  
  pFVar1 = this->SurfaceMesh;
  pFVar2 = this->IntrinsicMesh;
  uVar5 = 0;
  if (param_1 < (this->SurfaceEdgesCrossed).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_res8.TraceMesh = pFVar2;
  FNormalCoordSurfaceTraceImpl::
  TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge_::__l2::<lambda_1>_>
            (__return_storage_ptr__,param_1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((this->SurfaceEdgesCrossed).AllocatorInstance.Data + (longlong)param_1 * 0x10),pFVar1,
             pFVar2,param_2,param_3,&local_res8);
  return __return_storage_ptr__;
}

