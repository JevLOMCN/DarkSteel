// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// Convert @ 14ca82310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TToDynamicMeshBase<UE::Conversion::FGeometryCacheMeshBufferWrapper>::Convert
          (TToDynamicMeshBase<UE::Conversion::FGeometryCacheMeshBufferWrapper> *this,
          FDynamicMesh3 *param_1,FGeometryCacheMeshBufferWrapper *param_2,
          TFunctionRef<int___cdecl(int_const_&)> *param_3)

{
  double *pdVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  FGeometryCacheMeshBufferWrapper *pFVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FDateTime FVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  FGeometryCacheMeshBufferWrapper *local_res18;
  TFunctionRef<int___cdecl(int_const_&)> *local_res20;
  undefined1 local_148 [2];
  undefined1 local_146;
  undefined1 local_144 [4];
  FIndex3i_u_0 local_140;
  ForAnyElementType local_130;
  int local_128 [4];
  FScriptContainerElement *local_118;
  uint local_110;
  uint local_108 [4];
  int *local_f8;
  FScriptContainerElement *local_f0;
  undefined8 local_e8;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  TVector2<float>_u_0 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  TVector<double>_u_0 local_98;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  TVector2<float>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  FDynamicMesh3::Clear(param_1);
  FDynamicMesh3::DiscardAttributes(param_1);
  FDynamicMesh3::EnableTriangleGroups(param_1,0);
  piVar2 = &(this->ToSrcVertIDMap).ArrayMax;
  piVar3 = &(this->ToSrcVertIDMap).ArrayNum;
  *piVar3 = 0;
  if ((this->ToSrcVertIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  local_f8 = &(this->ToSrcTriIDMap).ArrayNum;
  piVar4 = &(this->ToSrcTriIDMap).ArrayMax;
  *local_f8 = 0;
  if ((this->ToSrcTriIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ToSrcTriIDMap).AllocatorInstance,0,piVar4);
  }
  iVar13 = (param_2->VertIDs).ArrayNum;
  if ((iVar13 != 0) && (iVar16 = (param_2->TriIDs).ArrayNum, iVar16 != 0)) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar13,(ForAnyElementType *)this,piVar3,piVar2);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,&(this->ToSrcTriIDMap).AllocatorInstance,&(this->ToSrcTriIDMap).ArrayNum,
               piVar4);
    uVar12 = 0xffffffff;
    pFVar18 = (local_res18->VertIDs).AllocatorInstance.Data;
    iVar13 = (local_res18->VertIDs).ArrayNum;
    local_118 = pFVar18 + (longlong)iVar13 * 4;
    while( true ) {
      pFVar6 = local_118;
      if ((local_res18->VertIDs).ArrayNum != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar18 == pFVar6) break;
      uVar17 = *(uint *)pFVar18;
      lVar19 = (longlong)(int)uVar17;
      uVar20 = 0;
      if ((int)uVar17 < (local_res18->Positions).ArrayNum) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_a0 = 0;
      local_9e = 0;
      pFVar6 = (local_res18->Positions).AllocatorInstance.Data;
      local_d8._s_0.X = (double)*(float *)(pFVar6 + lVar19 * 0xc);
      local_d8._s_0.Y = (double)*(float *)(pFVar6 + lVar19 * 0xc + 4);
      local_d8._s_0.Z = (double)*(float *)(pFVar6 + lVar19 * 0xc + 8);
      local_b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_ac = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar11 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_d8._s_0);
      uVar17 = *(uint *)pFVar18;
      uVar20 = 0;
      if ((int)uVar11 < *piVar3) {
        uVar20 = ~uVar11 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) = uVar17;
      if ((int)uVar12 < (int)*(uint *)pFVar18) {
        uVar12 = *(uint *)pFVar18;
      }
      pFVar18 = pFVar18 + 4;
      param_1 = local_res10;
    }
    uVar17 = 0;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128[0] = 0;
    local_128[1] = 0;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12 + 1,&local_130,local_128,local_128 + 1);
    iVar13 = *piVar3;
    if (0 < iVar13) {
      lVar19 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar17 < iVar13) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        uVar12 = *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + lVar19);
        uVar20 = 0;
        if ((int)uVar12 < local_128[0]) {
          uVar20 = ~uVar12 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar19 = lVar19 + 4;
        *(uint *)(local_130.Data + (longlong)(int)uVar12 * 4) = uVar17;
        uVar17 = uVar17 + 1;
        iVar13 = *piVar3;
      } while ((int)uVar17 < iVar13);
    }
    FVar14 = FDateTime::Now();
    piVar2 = &(this->ToSrcVertIDMap).ArrayMax;
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterVertices).Ticks = *FVar14.Ticks;
    local_110 = (local_res18->TriIDs).ArrayNum;
    uVar15 = (ulonglong)(int)local_110;
    pFVar18 = (local_res18->TriIDs).AllocatorInstance.Data;
    local_f0 = pFVar18 + uVar15 * 4;
    while( true ) {
      pFVar6 = local_f0;
      pFVar9 = local_res18;
      local_118 = pFVar18;
      if ((local_res18->TriIDs).ArrayNum != (int)uVar15) {
        local_144[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_144);
      }
      if (pFVar18 == pFVar6) break;
      local_128[2] = (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,pFVar18);
      uVar12 = *(uint *)pFVar18;
      uVar17 = 0;
      if ((int)uVar12 < (pFVar9->Triangles).ArrayNum) {
        uVar17 = ~uVar12 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar18 = (pFVar9->Triangles).AllocatorInstance.Data;
      local_108[2] = *(uint *)(pFVar18 + (longlong)(int)uVar12 * 0xc + 8);
      lVar19 = (longlong)(int)local_108[2];
      local_e8 = *(undefined8 *)(pFVar18 + (longlong)(int)uVar12 * 0xc);
      local_108[0] = (uint)local_e8;
      uVar17 = (uint)((ulonglong)local_e8 >> 0x20);
      uVar12 = 0;
      if ((int)local_108[2] < local_128[0]) {
        uVar12 = ~local_108[2] >> 0x1f;
      }
      local_108[1] = uVar17;
      if (uVar12 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = *(int *)(local_130.Data + lVar19 * 4);
      uVar12 = 0;
      if ((int)uVar17 < local_128[0]) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      iVar16 = local_128[0];
      if (uVar12 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = local_128[0];
      }
      lVar19 = (longlong)(int)local_108[0];
      iVar5 = *(int *)(local_130.Data + (longlong)(int)uVar17 * 4);
      uVar12 = 0;
      if ((int)local_108[0] < iVar16) {
        uVar12 = ~local_108[0] >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_140._s_0.A = *(undefined4 *)(local_130.Data + lVar19 * 4);
      local_140._s_0.B = iVar5;
      local_140._s_0.C = iVar13;
      uVar12 = FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_140._s_0,local_128[2]);
      if ((uVar12 + 3 & 0xfffffffd) != 0) {
        if (uVar12 == 0xfffffffe) {
          _local_148 = 0;
          uVar12 = FDynamicMesh3::FindEdge(param_1,local_140._s_0.A,local_140._s_0.B);
          if ((uVar12 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) !=
              -1)) {
            _local_148 = CONCAT12(local_146,0x101);
          }
          uVar12 = FDynamicMesh3::FindEdge(param_1,local_140._s_0.B,local_140._s_0.C);
          if ((uVar12 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) !=
              -1)) {
            _local_148 = CONCAT21(0x101,local_148[0]);
          }
          uVar12 = FDynamicMesh3::FindEdge(param_1,local_140._s_0.C,local_140._s_0.A);
          if ((uVar12 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + 0xc + (ulonglong)(uVar12 & 0x1ff) * 0x10) !=
              -1)) {
            _local_148 = CONCAT12(1,local_148);
            _local_148 = CONCAT21(stack0xfffffffffffffeb9,1);
          }
          lVar19 = 0;
          do {
            if (local_148[lVar19] != '\0') {
              uVar12 = *(uint *)((longlong)&local_140 + lVar19 * 4);
              uVar15 = (ulonglong)(uVar12 & 0x1ff);
              local_60 = 0;
              local_5e = 0;
              lVar7 = *(longlong *)
                       ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar12 >> 9) * 8);
              pdVar1 = (double *)(lVar7 + uVar15 * 0x18);
              local_98._s_0.X = *pdVar1;
              local_98._s_0.Y = pdVar1[1];
              local_98._s_0.Z = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
              local_78 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_6c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_80 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_68 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              uVar12 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_98._s_0);
              iVar13 = *piVar3;
              *(uint *)((longlong)&local_140 + lVar19 * 4) = uVar12;
              uVar17 = uVar12 + 1;
              if (iVar13 < (int)uVar17) {
                Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar17 - iVar13,(ForAnyElementType *)this,piVar3,piVar2);
              }
              else {
                if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
                }
                if ((int)uVar17 < iVar13) {
                  uVar20 = iVar13 - uVar17;
                  if ((int)(uVar17 | uVar20) < 0) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       );
                    if (bVar10) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  if (uVar20 != 0) {
                    pFVar18 = (this->ToSrcVertIDMap).AllocatorInstance.Data +
                              (longlong)(int)uVar17 * 4;
                    iVar13 = (*piVar3 - uVar17) - uVar20;
                    if (iVar13 != 0) {
                      memmove(pFVar18,pFVar18 + (longlong)(int)uVar20 * 4,(longlong)iVar13 << 2);
                    }
                    *piVar3 = *piVar3 - uVar20;
                    Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)this,*piVar3,piVar2);
                  }
                }
              }
              uVar17 = local_108[lVar19];
              uVar20 = 0;
              if ((int)uVar12 < *piVar3) {
                uVar20 = ~uVar12 >> 0x1f;
              }
              if (uVar20 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
                   uVar17;
              param_1 = local_res10;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < 3);
          uVar12 = FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_140._s_0,local_128[2]);
        }
        uVar17 = *(uint *)local_118;
        uVar20 = 0;
        if ((int)uVar12 < *local_f8) {
          uVar20 = ~uVar12 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *(uint *)((this->ToSrcTriIDMap).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar17
        ;
      }
      pFVar18 = local_118 + 4;
      uVar15 = (ulonglong)local_110;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ToSrcTriIDMap,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    FVar14 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterTriangles).Ticks = *FVar14.Ticks;
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
  }
  return;
}

// Convert @ 14ca82c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TToDynamicMeshBase<UE::Conversion::FSkinnedComponentWrapper>::Convert
          (TToDynamicMeshBase<UE::Conversion::FSkinnedComponentWrapper> *this,FDynamicMesh3 *param_1
          ,FSkinnedComponentWrapper *param_2,TFunctionRef<int___cdecl(int_const_&)> *param_3)

{
  double *pdVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FRawStaticIndexBuffer16or32Interface *pFVar7;
  longlong lVar8;
  code *pcVar9;
  FSkinnedComponentWrapper *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FDateTime FVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar21;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  FSkinnedComponentWrapper *local_res18;
  TFunctionRef<int___cdecl(int_const_&)> *local_res20;
  undefined1 local_138 [2];
  undefined1 local_136;
  undefined1 local_134 [4];
  FIndex3i_u_0 local_130;
  ForAnyElementType local_120;
  int local_118 [4];
  FScriptContainerElement *local_108;
  uint local_100;
  uint local_f8 [4];
  int *local_e8;
  FScriptContainerElement *local_e0;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  TVector2<float>_u_0 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  TVector<double>_u_0 local_98;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  TVector2<float>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  FDynamicMesh3::Clear(param_1);
  FDynamicMesh3::DiscardAttributes(param_1);
  FDynamicMesh3::EnableTriangleGroups(param_1,0);
  piVar2 = &(this->ToSrcVertIDMap).ArrayMax;
  piVar3 = &(this->ToSrcVertIDMap).ArrayNum;
  *piVar3 = 0;
  if ((this->ToSrcVertIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  local_e8 = &(this->ToSrcTriIDMap).ArrayNum;
  piVar4 = &(this->ToSrcTriIDMap).ArrayMax;
  *local_e8 = 0;
  if ((this->ToSrcTriIDMap).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ToSrcTriIDMap).AllocatorInstance,0,piVar4);
  }
  iVar14 = (param_2->VertIDs).ArrayNum;
  if ((iVar14 != 0) && (iVar21 = (param_2->TriIDs).ArrayNum, iVar21 != 0)) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar14,(ForAnyElementType *)this,piVar3,piVar2);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar21,&(this->ToSrcTriIDMap).AllocatorInstance,&(this->ToSrcTriIDMap).ArrayNum,
               piVar4);
    uVar13 = 0xffffffff;
    pFVar19 = (local_res18->VertIDs).AllocatorInstance.Data;
    iVar14 = (local_res18->VertIDs).ArrayNum;
    local_108 = pFVar19 + (longlong)iVar14 * 4;
    while( true ) {
      pFVar6 = local_108;
      if ((local_res18->VertIDs).ArrayNum != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar19 == pFVar6) break;
      uVar18 = *(uint *)pFVar19;
      uVar20 = 0;
      if ((int)uVar18 < (local_res18->SkinnedVertices).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if (uVar20 == 0) {
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
      lVar16 = (longlong)(int)uVar18 * 0x60;
      local_a0 = 0;
      local_9e = 0;
      pFVar6 = (local_res18->SkinnedVertices).AllocatorInstance.Data;
      local_d8._s_0.X = (double)*(float *)(pFVar6 + lVar16);
      local_d8._s_0.Y = (double)*(float *)(pFVar6 + lVar16 + 4);
      local_d8._s_0.Z = (double)*(float *)(pFVar6 + lVar16 + 8);
      local_b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_ac = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar12 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_d8._s_0);
      uVar18 = *(uint *)pFVar19;
      uVar20 = 0;
      if ((int)uVar12 < *piVar3) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if (uVar20 == 0) {
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
      if ((int)uVar13 < (int)*(uint *)pFVar19) {
        uVar13 = *(uint *)pFVar19;
      }
      pFVar19 = pFVar19 + 4;
      param_1 = local_res10;
    }
    uVar18 = 0;
    local_120.Data = (FScriptContainerElement *)0x0;
    local_118[0] = 0;
    local_118[1] = 0;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13 + 1,&local_120,local_118,local_118 + 1);
    iVar14 = *piVar3;
    if (0 < iVar14) {
      lVar16 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < iVar14) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if (uVar13 == 0) {
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
        uVar13 = *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + lVar16);
        uVar20 = 0;
        if ((int)uVar13 < local_118[0]) {
          uVar20 = ~uVar13 >> 0x1f;
        }
        if (uVar20 == 0) {
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
        lVar16 = lVar16 + 4;
        *(uint *)(local_120.Data + (longlong)(int)uVar13 * 4) = uVar18;
        uVar18 = uVar18 + 1;
        iVar14 = *piVar3;
      } while ((int)uVar18 < iVar14);
    }
    FVar15 = FDateTime::Now();
    piVar2 = &(this->ToSrcVertIDMap).ArrayMax;
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterVertices).Ticks = *FVar15.Ticks;
    local_100 = (local_res18->TriIDs).ArrayNum;
    uVar17 = (ulonglong)(int)local_100;
    pFVar19 = (local_res18->TriIDs).AllocatorInstance.Data;
    local_e0 = pFVar19 + uVar17 * 4;
    while( true ) {
      pFVar6 = local_e0;
      pFVar10 = local_res18;
      local_108 = pFVar19;
      if ((local_res18->TriIDs).ArrayNum != (int)uVar17) {
        local_134[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_134);
      }
      if (pFVar19 == pFVar6) break;
      local_118[2] = (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,pFVar19);
      pFVar7 = pFVar10->IndexBuffer;
      iVar14 = *(int *)pFVar19 * 3;
      local_f8[0] = (**(code **)(pFVar7->_padding_ + 0x60))(pFVar7,iVar14);
      uVar18 = (**(code **)(pFVar7->_padding_ + 0x60))(pFVar7,iVar14 + 1);
      local_f8[1] = uVar18;
      local_f8[2] = (**(code **)(pFVar7->_padding_ + 0x60))(pFVar7,iVar14 + 2);
      lVar16 = (longlong)(int)local_f8[2];
      uVar13 = 0;
      if ((int)local_f8[2] < local_118[0]) {
        uVar13 = ~local_f8[2] >> 0x1f;
      }
      if (uVar13 == 0) {
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
      iVar14 = *(int *)(local_120.Data + lVar16 * 4);
      uVar13 = 0;
      if ((int)uVar18 < local_118[0]) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      iVar21 = local_118[0];
      if (uVar13 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar21 = local_118[0];
      }
      lVar16 = (longlong)(int)local_f8[0];
      iVar5 = *(int *)(local_120.Data + (longlong)(int)uVar18 * 4);
      uVar13 = 0;
      if ((int)local_f8[0] < iVar21) {
        uVar13 = ~local_f8[0] >> 0x1f;
      }
      if (uVar13 == 0) {
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
      param_1 = local_res10;
      local_130._s_0.A = *(undefined4 *)(local_120.Data + lVar16 * 4);
      local_130._s_0.B = iVar5;
      local_130._s_0.C = iVar14;
      uVar13 = FDynamicMesh3::AppendTriangle(local_res10,(FIndex3i *)&local_130._s_0,local_118[2]);
      if ((uVar13 + 3 & 0xfffffffd) != 0) {
        if (uVar13 == 0xfffffffe) {
          _local_138 = 0;
          uVar13 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.A,local_130._s_0.B);
          if ((uVar13 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar13 >> 9) * 8) + 0xc + (ulonglong)(uVar13 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT12(local_136,0x101);
          }
          uVar13 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.B,local_130._s_0.C);
          if ((uVar13 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar13 >> 9) * 8) + 0xc + (ulonglong)(uVar13 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT21(0x101,local_138[0]);
          }
          uVar13 = FDynamicMesh3::FindEdge(param_1,local_130._s_0.C,local_130._s_0.A);
          if ((uVar13 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar13 >> 9) * 8) + 0xc + (ulonglong)(uVar13 & 0x1ff) * 0x10) !=
              -1)) {
            _local_138 = CONCAT12(1,local_138);
            _local_138 = CONCAT21(stack0xfffffffffffffec9,1);
          }
          lVar16 = 0;
          do {
            if (local_138[lVar16] != '\0') {
              uVar13 = *(uint *)((longlong)&local_130 + lVar16 * 4);
              uVar17 = (ulonglong)(uVar13 & 0x1ff);
              local_60 = 0;
              local_5e = 0;
              lVar8 = *(longlong *)
                       ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar13 >> 9) * 8);
              pdVar1 = (double *)(lVar8 + uVar17 * 0x18);
              local_98._s_0.X = *pdVar1;
              local_98._s_0.Y = pdVar1[1];
              local_98._s_0.Z = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
              local_78 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_6c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_80 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_68 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              uVar13 = FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_98._s_0);
              iVar14 = *piVar3;
              *(uint *)((longlong)&local_130 + lVar16 * 4) = uVar13;
              uVar18 = uVar13 + 1;
              if (iVar14 < (int)uVar18) {
                Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar18 - iVar14,(ForAnyElementType *)this,piVar3,piVar2);
              }
              else {
                if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
                }
                if ((int)uVar18 < iVar14) {
                  uVar20 = iVar14 - uVar18;
                  if ((int)(uVar20 | uVar18) < 0) {
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
                  if (uVar20 != 0) {
                    pFVar19 = (this->ToSrcVertIDMap).AllocatorInstance.Data +
                              (longlong)(int)uVar18 * 4;
                    iVar14 = (*piVar3 - uVar18) - uVar20;
                    if (iVar14 != 0) {
                      memmove(pFVar19,pFVar19 + (longlong)(int)uVar20 * 4,(longlong)iVar14 << 2);
                    }
                    *piVar3 = *piVar3 - uVar20;
                    Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)this,*piVar3,piVar2);
                  }
                }
              }
              uVar18 = local_f8[lVar16];
              uVar20 = 0;
              if ((int)uVar13 < *piVar3) {
                uVar20 = ~uVar13 >> 0x1f;
              }
              if (uVar20 == 0) {
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
              *(uint *)((this->ToSrcVertIDMap).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) =
                   uVar18;
              param_1 = local_res10;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < 3);
          uVar13 = FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_130._s_0,local_118[2]);
        }
        iVar14 = *(int *)local_108;
        uVar18 = 0;
        if ((int)uVar13 < *local_e8) {
          uVar18 = ~uVar13 >> 0x1f;
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
        *(int *)((this->ToSrcTriIDMap).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = iVar14;
      }
      pFVar19 = local_108 + 4;
      uVar17 = (ulonglong)local_100;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ToSrcTriIDMap,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    FVar15 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    (this->Time_AfterTriangles).Ticks = *FVar15.Ticks;
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
  }
  return;
}

