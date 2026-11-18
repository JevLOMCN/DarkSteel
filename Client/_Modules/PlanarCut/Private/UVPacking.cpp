// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// CreateUVIslandsFromMeshTopology<UE::PlanarCut::FGeomMesh> @ 14c98f7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::UVPacking::CreateUVIslandsFromMeshTopology<UE::PlanarCut::FGeomMesh>
          (FGeomMesh *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  int *piVar4;
  TArrayView<bool,int> *pTVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  bool *pbVar10;
  uint *puVar11;
  ulonglong uVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  TArrayView<bool,int> *this;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar23;
  longlong lVar24;
  undefined1 auStackY_178 [32];
  int local_128 [2];
  FDisjointSet local_120;
  uint local_110 [2];
  int local_108 [2];
  int local_100 [2];
  uint local_f8 [2];
  TArrayView<bool,int> *local_f0;
  FGeomMesh *local_e8;
  TFunctionRef<bool___cdecl(int)> *local_e0;
  TPairInitializer<unsigned_int_const_&,int_const_&> local_d8;
  uint local_c8 [4];
  uint *local_b8;
  uint *local_b0;
  uint local_a8 [4];
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  longlong lVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar20 = 0;
  local_120.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Parents.ArrayNum = 0;
  local_120.Parents.ArrayMax = 0;
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8.Value = (int *)param_2;
  FDisjointSet::Init(&local_120,(param_1->GlobalVertices).ArrayNum);
  this = &param_1->ActiveTriangles;
  local_f0 = this;
  iVar8 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
  pTVar5 = this;
  if (0 < iVar8) {
    do {
      pbVar10 = TArrayView<bool,int>::operator[](this,iVar20);
      if ((*pbVar10 != false) &&
         (local_108[0] = iVar20,
         cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_108), cVar6 != '\0'))
      {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_c8);
        uVar12 = local_120.Parents._8_8_ & 0xffffffff;
        lVar19 = 3;
        lVar22 = 8;
        lVar24 = 0;
        do {
          uVar9 = *(uint *)((longlong)local_c8 + lVar22);
          uVar21 = (ulonglong)(int)uVar9;
          uVar14 = *(uint *)((longlong)local_c8 + lVar24);
          uVar18 = (ulonglong)(int)uVar14;
          uVar23 = 0;
          if ((int)uVar9 < (int)uVar12) {
            uVar23 = ~uVar9 >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar12 = local_120.Parents._8_8_ & 0xffffffff;
          }
          uVar9 = *(uint *)(local_120.Parents.AllocatorInstance.Data + uVar21 * 4);
          uVar23 = 0;
          if ((int)uVar14 < (int)uVar12) {
            uVar23 = ~uVar14 >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar12 = local_120.Parents._8_8_ & 0xffffffff;
          }
          uVar14 = *(uint *)(local_120.Parents.AllocatorInstance.Data + uVar18 * 4);
          if (uVar9 != uVar14) {
            do {
              if (uVar9 < uVar14) {
                uVar17 = (uint)uVar21;
                uVar23 = 0;
                if ((int)uVar17 < (int)uVar12) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(uint *)(local_120.Parents.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) =
                     uVar14;
                if (uVar17 == uVar9) {
LAB_14c98faf0:
                  uVar12 = local_120.Parents._8_8_ & 0xffffffff;
                  break;
                }
                uVar12 = (ulonglong)local_120.Parents.ArrayNum;
                uVar21 = (ulonglong)uVar9;
                uVar23 = 0;
                if ((int)uVar9 < local_120.Parents.ArrayNum) {
                  uVar23 = ~uVar9 >> 0x1f;
                }
                if (uVar23 == 0) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar12 = local_120.Parents._8_8_ & 0xffffffff;
                }
                uVar9 = *(uint *)(local_120.Parents.AllocatorInstance.Data +
                                 (longlong)(int)uVar9 * 4);
              }
              else {
                uVar17 = (uint)uVar18;
                uVar23 = 0;
                if ((int)uVar17 < (int)uVar12) {
                  uVar23 = ~uVar17 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(uint *)(local_120.Parents.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) =
                     uVar9;
                if (uVar17 == uVar14) goto LAB_14c98faf0;
                uVar12 = (ulonglong)local_120.Parents.ArrayNum;
                uVar18 = (ulonglong)uVar14;
                uVar23 = 0;
                if ((int)uVar14 < local_120.Parents.ArrayNum) {
                  uVar23 = ~uVar14 >> 0x1f;
                }
                if (uVar23 == 0) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar12 = local_120.Parents._8_8_ & 0xffffffff;
                }
                uVar14 = *(uint *)(local_120.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar14 * 4);
              }
            } while (uVar9 != uVar14);
          }
          lVar19 = lVar19 + -1;
          param_1 = local_e8;
          this = local_f0;
          param_3 = local_e0;
          lVar22 = lVar24;
          lVar24 = lVar24 + 4;
        } while (lVar19 != 0);
      }
      iVar20 = iVar20 + 1;
      iVar8 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
      pTVar5 = local_f0;
    } while (iVar20 < iVar8);
  }
  local_f0 = pTVar5;
  piVar4 = local_d8.Value;
  piVar1 = (int *)((longlong)local_d8.Value + 0xc);
  pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((ForAnyElementType *)local_d8.Value)->Data;
  if (*(int *)((longlong)local_d8.Value + 0xc) < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (pTVar2,*(int *)((longlong)local_d8.Value + 8));
    iVar8 = *piVar1;
    *(int *)((longlong)piVar4 + 8) = 0;
    if (iVar8 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)piVar4,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (pTVar2,*(int *)((longlong)local_d8.Value + 8));
    *(int *)((longlong)piVar4 + 8) = 0;
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_128[0] = 0;
  iVar8 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
  if (local_128[0] < iVar8) {
    do {
      pbVar10 = TArrayView<bool,int>::operator[](this,local_128[0]);
      if (*pbVar10 != false) {
        local_100[0] = local_128[0];
        cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_100);
        if (cVar6 != '\0') {
          (**(code **)(param_1->_padding_ + 8))(param_1,local_a8,local_128[0]);
          uVar9 = local_a8[0];
          uVar12 = (ulonglong)(int)local_a8[0];
          uVar18 = (ulonglong)local_120.Parents.ArrayNum;
          uVar23 = ~local_a8[0];
          uVar14 = 0;
          if ((int)local_a8[0] < local_120.Parents.ArrayNum) {
            uVar14 = uVar23 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar18 = local_120.Parents._8_8_ & 0xffffffff;
          }
          uVar14 = *(uint *)(local_120.Parents.AllocatorInstance.Data + uVar12 * 4);
          uVar17 = uVar14;
          if (uVar14 != uVar9) {
            do {
              uVar14 = 0;
              if ((int)uVar17 < (int)uVar18) {
                uVar14 = ~uVar17 >> 0x1f;
              }
              if (uVar14 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar18 = local_120.Parents._8_8_ & 0xffffffff;
              }
              uVar14 = *(uint *)(local_120.Parents.AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 4);
              bVar7 = uVar14 != uVar17;
              uVar17 = uVar14;
            } while (bVar7);
          }
          uVar17 = 0;
          if ((int)uVar9 < (int)uVar18) {
            uVar17 = uVar23 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar18 = local_120.Parents._8_8_ & 0xffffffff;
          }
          for (uVar9 = *(uint *)(local_120.Parents.AllocatorInstance.Data + uVar12 * 4);
              uVar9 != uVar14;
              uVar9 = *(uint *)(local_120.Parents.AllocatorInstance.Data + (longlong)(int)uVar9 * 4)
              ) {
            uVar17 = (uint)uVar12;
            uVar23 = 0;
            if ((int)uVar17 < (int)uVar18) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar12 = (ulonglong)uVar9;
            *(uint *)(local_120.Parents.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = uVar14
            ;
            uVar18 = (ulonglong)local_120.Parents.ArrayNum;
            uVar23 = 0;
            if ((int)uVar9 < local_120.Parents.ArrayNum) {
              uVar23 = ~uVar9 >> 0x1f;
            }
            if (uVar23 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar18 = local_120.Parents._8_8_ & 0xffffffff;
            }
          }
          local_110[0] = 0xffffffff;
          local_f8[0] = uVar14;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar13 = local_98.Hash.SecondaryData;
            }
            uVar9 = *(uint *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & uVar14) * 4);
            while (uVar9 != 0xffffffff) {
              puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + local_98.Elements._0_8_);
              if (*puVar11 == uVar14) {
                puVar16 = puVar11 + 1;
                if (puVar11 == (uint *)0x0) {
                  puVar16 = (uint *)0x0;
                }
                if (puVar16 != (uint *)0x0) {
                  local_110[0] = *puVar16;
                  goto LAB_14c98feaf;
                }
                break;
              }
              uVar9 = puVar11[2];
            }
          }
          uVar9 = *(int *)((longlong)piVar4 + 8);
          if (uVar9 == *piVar1) {
            uVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)piVar4,piVar1);
          }
          *(uint *)((longlong)piVar4 + 8) = uVar9 + 1;
          pFVar15 = ((ForAnyElementType *)piVar4)->Data;
          *(undefined8 *)(pFVar15 + (longlong)(int)uVar9 * 0x10) = 0;
          *(undefined8 *)(pFVar15 + (longlong)(int)uVar9 * 0x10 + 8) = 0;
          local_b8 = local_f8;
          local_b0 = local_110;
          local_110[0] = uVar9;
          TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                    (&local_98,&local_d8,(bool *)&local_b8);
LAB_14c98feaf:
          uVar9 = local_110[0];
          uVar14 = 0;
          if ((int)local_110[0] < *(int *)((longlong)piVar4 + 8)) {
            uVar14 = ~local_110[0] >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar15 = ((ForAnyElementType *)piVar4)->Data + (longlong)(int)uVar9 * 0x10;
          if (((*(int **)&pFVar15->field_0x0 <= local_128) &&
              (local_128 < *(int **)&pFVar15->field_0x0 + *(int *)(pFVar15 + 0xc))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = *(int *)&pFVar15[8].field_0x0;
          if (iVar8 == *(int *)(pFVar15 + 0xc)) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
          }
          *(int *)&pFVar15[8].field_0x0 = iVar8 + 1;
          *(int *)(*(longlong *)&pFVar15->field_0x0 + (longlong)iVar8 * 4) = local_128[0];
          param_1 = local_e8;
          this = local_f0;
        }
      }
      local_128[0] = local_128[0] + 1;
      iVar8 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
      param_3 = local_e0;
    } while (local_128[0] < iVar8);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_120.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Parents.AllocatorInstance.Data);
  }
  return;
}

