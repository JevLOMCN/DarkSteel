// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Convert @ 14c7f9d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper>::Convert
          (TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper> *this,
          FDynamicMesh3 *param_1,FMeshWeldingWrapper *param_2,
          TFunctionRef<int___cdecl(int_const_&)> *param_3)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  code *pcVar9;
  FMeshWeldingWrapper *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FDateTime FVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  FMeshWeldingWrapper *local_res18;
  TFunctionRef<int___cdecl(int_const_&)> *local_res20;
  undefined1 local_138 [2];
  undefined1 local_136;
  undefined1 local_134 [4];
  FIndex3i_u_0 local_130;
  ForAnyElementType local_120;
  int local_118 [4];
  uint local_108 [4];
  FScriptContainerElement *local_f8;
  int *local_f0;
  FScriptContainerElement *local_e8;
  TVector<double>_u_0 local_e0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  TVector2<float>_u_0 local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  TVector<double>_u_0 local_a0;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  TVector2<float>_u_0 local_70;
  undefined2 local_68;
  undefined1 local_66;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  FDynamicMesh3::Clear(param_1);
  FDynamicMesh3::DiscardAttributes(param_1);
  FDynamicMesh3::EnableTriangleGroups(param_1,0);
  piVar3 = &(this->ToSrcVertIDMap).ArrayMax;
  piVar4 = &(this->ToSrcVertIDMap).ArrayNum;
  *piVar4 = 0;
  if ((this->ToSrcVertIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar3);
  }
  local_f0 = &(this->ToSrcTriIDMap).ArrayNum;
  piVar5 = &(this->ToSrcTriIDMap).ArrayMax;
  *local_f0 = 0;
  if ((this->ToSrcTriIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ToSrcTriIDMap).AllocatorInstance,0,piVar5);
  }
  iVar13 = (param_2->OriginalIndexes).ArrayNum;
  if ((iVar13 != 0) && (iVar16 = (param_2->TriIds).ArrayNum, iVar16 != 0)) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar13,(ForAnyElementType *)this,piVar4,piVar3);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,&(this->ToSrcTriIDMap).AllocatorInstance,&(this->ToSrcTriIDMap).ArrayNum,
               piVar5);
    uVar17 = 0xffffffff;
    pFVar19 = (local_res18->OriginalIndexes).AllocatorInstance.Data;
    iVar13 = (local_res18->OriginalIndexes).ArrayNum;
    local_f8 = pFVar19 + (longlong)iVar13 * 4;
    while( true ) {
      pFVar2 = local_f8;
      if ((local_res18->OriginalIndexes).ArrayNum != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar19 == pFVar2) break;
      uVar15 = (ulonglong)(*(uint *)pFVar19 & 0x1ff);
      local_a8 = 0;
      local_a6 = 0;
      lVar20 = *(longlong *)
                ((local_res18->OriginalMesh->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)pFVar19 >> 9) * 8);
      pdVar1 = (double *)(lVar20 + uVar15 * 0x18);
      local_e0._s_0.X = *pdVar1;
      local_e0._s_0.Y = pdVar1[1];
      local_e0._s_0.Z = *(double *)(lVar20 + 0x10 + uVar15 * 0x18);
      local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_b0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uVar12 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_e0._s_0);
      uVar18 = *(uint *)pFVar19;
      uVar21 = 0;
      if ((int)uVar12 < *piVar4) {
        uVar21 = ~uVar12 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar18;
      if ((int)uVar17 < (int)*(uint *)pFVar19) {
        uVar17 = *(uint *)pFVar19;
      }
      pFVar19 = pFVar19 + 4;
      param_1 = local_res10;
    }
    local_120.Data = (FScriptContainerElement *)0x0;
    local_118[0] = 0;
    local_118[1] = 0;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17 + 1,&local_120,local_118,local_118 + 1);
    iVar13 = *piVar4;
    uVar17 = 0;
    if (0 < iVar13) {
      lVar20 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar17 < iVar13) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        uVar18 = *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + lVar20);
        uVar21 = 0;
        if ((int)uVar18 < local_118[0]) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if (uVar21 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar20 = lVar20 + 4;
        *(uint *)(local_120.Data + (longlong)(int)uVar18 * 4) = uVar17;
        uVar17 = uVar17 + 1;
        iVar13 = *piVar4;
      } while ((int)uVar17 < iVar13);
    }
    FVar14 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterVertices).Ticks = *FVar14.Ticks;
    iVar13 = (local_res18->TriIds).ArrayNum;
    uVar15 = (ulonglong)iVar13;
    pFVar19 = (local_res18->TriIds).AllocatorInstance.Data;
    local_f8 = (FScriptContainerElement *)CONCAT44(local_f8._4_4_,iVar13);
    local_e8 = pFVar19 + uVar15 * 4;
    while( true ) {
      pFVar2 = local_e8;
      pFVar10 = local_res18;
      if ((local_res18->TriIds).ArrayNum != (int)uVar15) {
        local_134[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_134);
      }
      if (pFVar19 == pFVar2) break;
      local_118[2] = (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,pFVar19);
      uVar17 = *(uint *)pFVar19;
      pFVar7 = pFVar10->OriginalMesh;
      if ((-1 < (int)uVar17) &&
         ((int)uVar17 <
          (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar15 = (ulonglong)(uVar17 & 0x1ff);
        lVar20 = (ulonglong)(uVar17 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar20) + uVar15 * 2) - 1U) < 0xfffe) {
          lVar20 = *(longlong *)((pFVar7->Triangles).Blocks.AllocatorInstance.Data + lVar20);
          uVar17 = *(uint *)(lVar20 + uVar15 * 0xc);
          lVar20 = lVar20 + uVar15 * 0xc;
          uVar18 = 0;
          if ((int)uVar17 < (pFVar10->OriginalToMerged).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          local_108[0] = *(uint *)((pFVar10->OriginalToMerged).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
          uVar17 = *(uint *)(lVar20 + 4);
          uVar18 = 0;
          if ((int)uVar17 < (pFVar10->OriginalToMerged).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          local_108[1] = *(uint *)((pFVar10->OriginalToMerged).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
          uVar17 = *(uint *)(lVar20 + 8);
          uVar18 = 0;
          if ((int)uVar17 < (pFVar10->OriginalToMerged).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          local_108[2] = *(uint *)((pFVar10->OriginalToMerged).AllocatorInstance.Data +
                                  (longlong)(int)uVar17 * 4);
        }
      }
      lVar20 = (longlong)(int)local_108[2];
      uVar17 = 0;
      if ((int)local_108[2] < local_118[0]) {
        uVar17 = ~local_108[2] >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar13 = *(int *)(local_120.Data + lVar20 * 4);
      lVar20 = (longlong)(int)local_108[1];
      uVar17 = 0;
      if ((int)local_108[1] < local_118[0]) {
        uVar17 = ~local_108[1] >> 0x1f;
      }
      iVar16 = local_118[0];
      if (uVar17 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = local_118[0];
      }
      iVar6 = *(int *)(local_120.Data + lVar20 * 4);
      lVar20 = (longlong)(int)local_108[0];
      uVar17 = 0;
      if ((int)local_108[0] < iVar16) {
        uVar17 = ~local_108[0] >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      local_130._s_0.A = *(undefined4 *)(local_120.Data + lVar20 * 4);
      local_130._s_0.B = iVar6;
      local_130._s_0.C = iVar13;
      uVar17 = FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_130._s_0,local_118[2]);
      if ((uVar17 + 3 & 0xfffffffd) != 0) {
        if (uVar17 == 0xfffffffe) {
          _local_138 = 0;
          uVar17 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.A,local_130._s_0.B);
          if ((uVar17 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + 0xc + (ulonglong)(uVar17 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT12(local_136,0x101);
          }
          uVar17 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.B,local_130._s_0.C);
          if ((uVar17 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + 0xc + (ulonglong)(uVar17 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT21(0x101,local_138[0]);
          }
          uVar17 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.C,local_130._s_0.A);
          if ((uVar17 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + 0xc + (ulonglong)(uVar17 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT12(1,local_138);
            _local_138 = CONCAT21(stack0xfffffffffffffec9,1);
          }
          lVar20 = 0;
          do {
            if (local_138[lVar20] != '\0') {
              uVar17 = *(uint *)((longlong)&local_130 + lVar20 * 4);
              uVar15 = (ulonglong)(uVar17 & 0x1ff);
              local_68 = 0;
              local_66 = 0;
              lVar8 = *(longlong *)
                       ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar17 >> 9) * 8);
              pdVar1 = (double *)(lVar8 + uVar15 * 0x18);
              local_a0._s_0.X = *pdVar1;
              local_a0._s_0.Y = pdVar1[1];
              local_a0._s_0.Z = *(double *)(lVar8 + 0x10 + uVar15 * 0x18);
              local_80 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_88 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_7c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_70 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              uVar17 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_a0._s_0);
              iVar13 = *piVar4;
              *(uint *)((longlong)&local_130 + lVar20 * 4) = uVar17;
              uVar18 = uVar17 + 1;
              if (iVar13 < (int)uVar18) {
                Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar18 - iVar13,(ForAnyElementType *)this,piVar4,
                           &(this->ToSrcVertIDMap).ArrayMax);
              }
              else {
                if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
                }
                if ((int)uVar18 < iVar13) {
                  uVar21 = iVar13 - uVar18;
                  if ((int)(uVar18 | uVar21) < 0) {
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  if (uVar21 != 0) {
                    pFVar2 = (this->ToSrcVertIDMap).AllocatorInstance.Data +
                             (longlong)(int)uVar18 * 4;
                    iVar13 = (*piVar4 - uVar18) - uVar21;
                    if (iVar13 != 0) {
                      memmove(pFVar2,pFVar2 + (longlong)(int)uVar21 * 4,(longlong)iVar13 << 2);
                    }
                    *piVar4 = *piVar4 - uVar21;
                    Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)this,*piVar4,
                               &(this->ToSrcVertIDMap).ArrayMax);
                  }
                }
              }
              uVar18 = local_108[lVar20];
              uVar21 = 0;
              if ((int)uVar17 < *piVar4) {
                uVar21 = ~uVar17 >> 0x1f;
              }
              if (uVar21 == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + (longlong)(int)uVar17 * 4) =
                   uVar18;
              param_1 = local_res10;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < 3);
          uVar17 = FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_130._s_0,local_118[2]);
        }
        uVar18 = *(uint *)pFVar19;
        uVar21 = 0;
        if ((int)uVar17 < *local_f0) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        *(uint *)((this->ToSrcTriIDMap).AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = uVar18
        ;
      }
      pFVar19 = pFVar19 + 4;
      uVar15 = (ulonglong)local_f8 & 0xffffffff;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ToSrcTriIDMap,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    FVar14 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterTriangles).Ticks = *FVar14.Ticks;
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
  }
  return;
}

