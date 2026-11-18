// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 22

// AddPointHelper @ 1435eced0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::AddPointHelper(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
                 *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,int param_2,
                TAxisAlignedBox3<float> *param_3)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<int> FVar6;
  code *pcVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [8];
  undefined1 auVar11 [8];
  TVector<float> *pTVar12;
  float fVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<int> FVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ForElementType<int> FVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint local_res8;
  TVector<float>_u_0 local_158;
  uint local_148;
  uint local_140 [2];
  longlong local_138;
  int local_130;
  undefined1 local_128 [8];
  undefined1 auStack_120 [8];
  undefined8 local_118;
  uint local_108;
  longlong local_100;
  longlong local_f8;
  TVector<float> *local_f0;
  longlong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  this->Num = this->Num + 1;
  local_f0 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](param_1,param_2);
  fVar9 = __real_3f000000;
  local_d8 = *(undefined8 *)&(param_3->Min).field0_0x0;
  pfVar8 = &(param_3->Min).field0_0x0._s_0.Z;
  uStack_d0 = *(undefined8 *)pfVar8;
  uVar28 = 0;
  local_c8 = *(undefined8 *)((longlong)&(param_3->Max).field0_0x0 + 4);
  local_res8 = 0;
  local_158._s_0.X =
       ((param_3->Min).field0_0x0._s_0.X + (param_3->Max).field0_0x0._s_0.X) * __real_3f000000;
  local_130 = 0;
  local_158._s_0.Y = ((param_3->Min).field0_0x0._s_0.Y + (float)local_c8) * __real_3f000000;
  local_158._s_0.Z = (*pfVar8 + (float)((ulonglong)local_c8 >> 0x20)) * __real_3f000000;
  uVar27 = 0;
  uVar20 = uVar28;
  uVar30 = uVar27;
  if (0 < this->MaxDepth) {
    do {
      uVar29 = (uint)uVar20;
      uVar30 = ~uVar29 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar29 < (this->Nodes).ArrayNum) {
        uVar16 = uVar30;
      }
      local_148 = uVar30;
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
      lVar25 = (longlong)(int)uVar29;
      lVar31 = lVar25 * 0x20;
      uVar16 = 0;
      local_138 = lVar25;
      local_f8 = lVar31;
      if (-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar31)) {
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->Nodes).AllocatorInstance.Data;
        uVar20 = uVar28;
        do {
          if (*(int *)(pFVar4 + uVar20 * 4 + lVar31) == -1) {
            *(int *)(pFVar4 + uVar20 * 4 + lVar31) = param_2;
            return;
          }
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < 8);
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Nodes).AllocatorInstance.Data;
        pFVar4 = pFVar5 + lVar31;
        pFVar5 = pFVar5 + lVar31 + 0x10;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        local_b0 = *(undefined8 *)pFVar4;
        uStack_a8 = *(undefined8 *)(pFVar4 + 8);
        local_a0 = *(undefined8 *)pFVar5;
        uStack_98 = *(undefined8 *)(pFVar5 + 8);
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 4) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 8) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0xc) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0x10) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0x14) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0x18) = 0xfffffffe;
        uVar24 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar24 = uVar30;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0x1c) = 0xfffffffe;
        local_100 = lVar25 * 8;
        uVar20 = uVar28;
        uVar29 = local_res8;
        if (local_130 + 1 < this->MaxDepth) {
          do {
            uVar24 = *(uint *)((longlong)&local_b0 + uVar20 * 4);
            uVar17 = uVar16;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar17 = ~uVar24 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_e8 = *(longlong *)&param_1->DataPtr[(int)uVar24].field0_0x0;
            uVar17 = uVar27;
            if (local_158._s_0.Z < param_1->DataPtr[(int)uVar24].field0_0x0._s_0.Z) {
              uVar17 = 4;
            }
            bVar14 = local_158._s_0.X < (float)local_e8;
            uVar23 = uVar27;
            if (local_158._s_0.Y < (float)((ulonglong)local_e8 >> 0x20)) {
              uVar23 = 2;
            }
            uVar19 = uVar27;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar19 = uVar30;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar25 = (ulonglong)(uVar17 + bVar14 + uVar23) + local_100;
            uVar30 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) - 3;
            if (uVar30 == 0xffffffff) {
              uVar30 = (this->Nodes).ArrayNum;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar30 == *piVar1) {
                uVar30 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)this,piVar1);
              }
              (this->Nodes).ArrayNum = uVar30 + 1;
              pFVar4 = (this->Nodes).AllocatorInstance.Data;
              lVar31 = (longlong)(int)uVar30 * 0x20;
              *(undefined8 *)(pFVar4 + lVar31) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 0x18) = 0xffffffffffffffff;
              uVar17 = uVar27;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar17 = local_148;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) = -3 - uVar30;
            }
            uVar17 = uVar16;
            if ((int)uVar30 < (this->Nodes).ArrayNum) {
              uVar17 = ~uVar30 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            pFVar4 = (this->Nodes).AllocatorInstance.Data;
            uVar22 = uVar28;
            do {
              if (*(int *)(pFVar4 + uVar22 * 4 + (longlong)(int)uVar30 * 0x20) == -1) {
                *(uint *)(pFVar4 + uVar22 * 4 + (longlong)(int)uVar30 * 0x20) = uVar24;
                break;
              }
              uVar22 = uVar22 + 1;
            } while ((longlong)uVar22 < 8);
            uVar20 = uVar20 + 1;
            uVar30 = local_148;
          } while ((longlong)uVar20 < 8);
        }
        else {
          local_e8 = 0;
          do {
            uVar24 = *(uint *)((longlong)&local_b0 + local_e8 * 4);
            uVar17 = uVar27;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar17 = ~uVar24 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar3 = *(undefined8 *)&param_1->DataPtr[(int)uVar24].field0_0x0;
            fVar2 = param_1->DataPtr[(int)uVar24].field0_0x0._s_0.Z;
            local_c0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            fVar13 = local_c0._4_4_;
            uVar17 = uVar27;
            if (local_158._s_0.Z < fVar2) {
              uVar17 = 4;
            }
            uVar23 = uVar27;
            if (local_158._s_0.Y < local_c0._4_4_) {
              uVar23 = 2;
            }
            uVar23 = uVar17 + (local_158._s_0.X < (float)uVar3) + uVar23;
            uVar17 = uVar27;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar17 = uVar30;
            }
            local_108 = uVar23;
            local_c0 = uVar3;
            if ((uVar17 == 0) &&
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
            lVar25 = (ulonglong)uVar23 + local_100;
            uVar30 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) - 3;
            if (uVar30 == 0xffffffff) {
              uVar30 = (this->Nodes).ArrayNum;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar30 == *piVar1) {
                uVar30 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)this,piVar1);
              }
              (this->Nodes).ArrayNum = uVar30 + 1;
              pFVar4 = (this->Nodes).AllocatorInstance.Data;
              lVar31 = (longlong)(int)uVar30 * 0x20;
              *(undefined8 *)(pFVar4 + lVar31) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar31 + 0x18) = 0xffffffffffffffff;
              uVar17 = uVar27;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar17 = local_148;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) = -3 - uVar30;
            }
            uVar17 = uVar27;
            if ((int)uVar30 < (this->Nodes).ArrayNum) {
              uVar17 = ~uVar30 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            pFVar4 = (this->Nodes).AllocatorInstance.Data;
            uVar17 = uVar27;
            if (((param_3->Max).field0_0x0._s_0.Y - (param_3->Min).field0_0x0._s_0.Y) * fVar9 *
                ((float)(local_108 & 2) - fVar9) + local_158._s_0.Y < fVar13) {
              uVar17 = 2;
            }
            uVar23 = uVar27;
            if (((param_3->Max).field0_0x0._s_0.Z - (param_3->Min).field0_0x0._s_0.Z) * fVar9 *
                ((float)(local_108 & 4) - fVar9) + local_158._s_0.Z < fVar2) {
              uVar23 = 4;
            }
            lVar25 = (ulonglong)
                     (uVar17 + uVar23 +
                     (uint)(((param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X) *
                            fVar9 * ((float)(local_108 & 1) - fVar9) + local_158._s_0.X <
                           (float)uVar3)) + (longlong)(int)uVar30 * 8;
            uVar30 = *(uint *)(pFVar4 + lVar25 * 4);
            local_140[0] = uVar24;
            if (uVar30 == 0xffffffff) {
              uVar30 = (this->MaxDepthBuckets).ArrayNum;
              piVar1 = &(this->MaxDepthBuckets).ArrayMax;
              if (uVar30 == *piVar1) {
                uVar30 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(this->MaxDepthBuckets).AllocatorInstance,piVar1);
              }
              (this->MaxDepthBuckets).ArrayNum = uVar30 + 1;
              pFVar5 = (this->MaxDepthBuckets).AllocatorInstance.Data;
              lVar31 = (longlong)(int)uVar30 * 0x20;
              *(undefined8 *)(pFVar5 + lVar31 + 0x10) = 0;
              *(undefined4 *)(pFVar5 + lVar31 + 0x18) = 0;
              *(undefined4 *)(pFVar5 + lVar31 + 0x1c) = 4;
              *(uint *)(pFVar4 + lVar25 * 4) = uVar30;
            }
            uVar24 = uVar16;
            if ((int)uVar30 < (this->MaxDepthBuckets).ArrayNum) {
              uVar24 = ~uVar30 >> 0x1f;
            }
            if ((uVar24 == 0) &&
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
            FVar26 = (ForElementType<int>)
                     ((longlong)(int)uVar30 * 0x20 +
                     (longlong)(this->MaxDepthBuckets).AllocatorInstance.Data);
            FVar6 = *(ForElementType<int> *)((longlong)FVar26 + 0x10);
            FVar21 = FVar26;
            if (FVar6 != (ForElementType<int>)0x0) {
              FVar21 = FVar6;
            }
            if ((ulonglong)FVar21 <= local_140) {
              FVar21 = FVar26;
              if (FVar6 != (ForElementType<int>)0x0) {
                FVar21 = FVar6;
              }
              if ((local_140 <
                   (uint *)((longlong)FVar21 + (longlong)*(int *)((longlong)FVar26 + 0x1c) * 4)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar18 = *(int *)((longlong)FVar26 + 0x18);
            if (iVar18 == *(int *)((longlong)FVar26 + 0x1c)) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x1c));
            }
            *(int *)((longlong)FVar26 + 0x18) = iVar18 + 1;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x10) != (ForElementType<int>)0x0) {
              FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x10);
            }
            *(uint *)((longlong)FVar26 + (longlong)iVar18 * 4) = local_140[0];
            local_e8 = local_e8 + 1;
            uVar30 = local_148;
          } while (local_e8 < 8);
        }
      }
      lVar25 = local_f8;
      if ((int)uVar29 < (this->Nodes).ArrayNum) {
        uVar16 = uVar30;
      }
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
      if ((-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar25)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodeT::IsNodeIndex(Nodes[CurNodeIdx].Children[0])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                              ,0x163,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = uVar27;
      if (local_158._s_0.Z < (local_f0->field0_0x0)._s_0.Z) {
        uVar16 = 4;
      }
      uVar24 = uVar27;
      if (local_158._s_0.Y < (local_f0->field0_0x0)._s_0.Y) {
        uVar24 = 2;
      }
      uVar24 = uVar16 + uVar24 + (uint)(local_158._s_0.X < (local_f0->field0_0x0)._s_0.X);
      uVar16 = uVar27;
      if ((int)uVar29 < (this->Nodes).ArrayNum) {
        uVar16 = uVar30;
      }
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
      lVar25 = (ulonglong)uVar24 + local_138 * 8;
      local_res8 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) - 3;
      if (local_res8 == 0xffffffff) {
        local_res8 = (this->Nodes).ArrayNum;
        piVar1 = &(this->Nodes).ArrayMax;
        if (local_res8 == *piVar1) {
          local_res8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x420,(ForAnyElementType *)this,piVar1);
        }
        (this->Nodes).ArrayNum = local_res8 + 1;
        pFVar4 = (this->Nodes).AllocatorInstance.Data;
        lVar31 = (longlong)(int)local_res8 * 0x20;
        *(undefined8 *)(pFVar4 + lVar31) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar31 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar31 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar31 + 0x18) = 0xffffffffffffffff;
        uVar30 = uVar27;
        if ((int)uVar29 < (this->Nodes).ArrayNum) {
          uVar30 = local_148;
        }
        if ((uVar30 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(uint *)((this->Nodes).AllocatorInstance.Data + lVar25 * 4) = -3 - local_res8;
      }
      local_118 = local_c8;
      uVar3 = local_118;
      local_128 = (undefined1  [8])local_d8;
      auVar10 = local_128;
      auStack_120 = (undefined1  [8])uStack_d0;
      auVar11 = auStack_120;
      if ((uVar24 & 1) == 0) {
        local_128._0_4_ = (undefined4)local_d8;
        auStack_120._0_4_ = (undefined4)uStack_d0;
        auStack_120._4_4_ = local_158._s_0.X;
        uVar33 = local_158._s_0.X;
        local_158._s_0.X = (float)local_128._0_4_;
        local_128 = auVar10;
      }
      else {
        auStack_120._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
        local_128._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
        local_128._0_4_ = local_158._s_0.X;
        uVar33 = auStack_120._4_4_;
        auStack_120 = auVar11;
      }
      if ((uVar24 & 2) == 0) {
        local_118 = CONCAT44((int)((ulonglong)local_c8 >> 0x20),local_158._s_0.Y);
        uVar34 = local_128._4_4_;
      }
      else {
        local_118._0_4_ = (float)local_c8;
        local_128._4_4_ = local_158._s_0.Y;
        uVar34 = local_158._s_0.Y;
        local_158._s_0.Y = (float)local_118;
        local_118 = uVar3;
      }
      if ((uVar24 & 4) == 0) {
        local_118 = CONCAT44(local_158._s_0.Z,local_158._s_0.Y);
        uVar32 = local_158._s_0.Z;
        local_158._s_0.Z = (float)auStack_120._0_4_;
      }
      else {
        auStack_120._0_4_ = local_158._s_0.Z;
        uVar32 = local_118._4_4_;
      }
      local_d8 = local_128;
      uStack_d0 = auStack_120;
      local_130 = local_130 + 1;
      local_158._s_0.X = ((float)uVar33 + local_158._s_0.X) * fVar9;
      local_158._s_0.Y = (local_158._s_0.Y + (float)uVar34) * fVar9;
      local_158._s_0.Z = ((float)uVar32 + local_158._s_0.Z) * fVar9;
      uVar20 = (ulonglong)local_res8;
      uVar30 = local_res8;
      local_c8 = local_118;
    } while (local_130 < this->MaxDepth);
  }
  pTVar12 = local_f0;
  if ((int)uVar30 < (this->Nodes).ArrayNum) {
    uVar27 = ~uVar30 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  PlaceInMaxDepthBucketHelper
            (this,param_2,pTVar12,
             (FOctreeNode *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x20),
             (TVector<float> *)&local_158._s_0);
  return;
}

// AddPointHelper @ 1435edd60

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::AddPointHelper(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
                 *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
                TAxisAlignedBox3<double> *param_3)

{
  int *piVar1;
  TVector<double> *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<int> FVar6;
  code *pcVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ForElementType<int> FVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ForElementType<int> FVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined8 uVar33;
  undefined1 auVar32 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint local_res8;
  uint local_180 [2];
  TVector<double>_u_0 local_178;
  int local_160;
  longlong local_158;
  uint local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  TVector<double> *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_98;
  
  this->Num = this->Num + 1;
  local_130 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,param_2);
  dVar12 = __real_3fe0000000000000;
  local_e8 = *(undefined1 (*) [16])((longlong)&(param_3->Min).field0_0x0 + 0x10);
  uVar27 = 0;
  auVar8._4_8_ = extraout_XMM0_Qb;
  auVar8._0_4_ = local_e8._4_4_;
  auVar31._0_8_ = auVar8._0_8_ << 0x20;
  auVar31._8_4_ = local_e8._8_4_;
  auVar31._12_4_ = local_e8._12_4_;
  local_f8 = (param_3->Min).field0_0x0._s_0.X;
  uStack_f0 = (param_3->Min).field0_0x0._s_0.Y;
  local_res8 = 0;
  dVar3 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 8);
  dVar10 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
  local_160 = 0;
  local_d8 = SUB84(dVar3,0);
  uStack_d4 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uStack_d0 = SUB84(dVar10,0);
  uStack_cc = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_178._s_0.X = (local_f8 + auVar31._8_8_) * __real_3fe0000000000000;
  local_178._s_0.Y = (uStack_f0 + dVar3) * __real_3fe0000000000000;
  local_178._s_0.Z = (local_e8._0_8_ + dVar10) * __real_3fe0000000000000;
  uVar26 = 0;
  uVar18 = uVar27;
  uVar15 = uVar26;
  if (0 < this->MaxDepth) {
    do {
      uVar28 = (uint)uVar18;
      uVar21 = ~uVar28 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar28 < (this->Nodes).ArrayNum) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar29 = (longlong)(int)uVar28;
      lVar30 = lVar29 * 0x20;
      uVar15 = 0;
      local_158 = lVar29;
      local_138 = lVar30;
      if (-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar30)) {
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->Nodes).AllocatorInstance.Data;
        uVar18 = uVar27;
        do {
          if (*(int *)(pFVar4 + uVar18 * 4 + lVar30) == -1) {
            *(int *)(pFVar4 + uVar18 * 4 + lVar30) = param_2;
            return;
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < 8);
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Nodes).AllocatorInstance.Data;
        pFVar4 = pFVar5 + lVar30;
        pFVar5 = pFVar5 + lVar30 + 0x10;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        local_c8 = *(undefined8 *)pFVar4;
        uStack_c0 = *(undefined8 *)(pFVar4 + 8);
        local_b8 = *(undefined8 *)pFVar5;
        uStack_b0 = *(undefined8 *)(pFVar5 + 8);
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 4) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 8) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 0xc) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 0x10) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 0x14) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 0x18) = 0xfffffffe;
        uVar24 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar30 + 0x1c) = 0xfffffffe;
        local_140 = lVar29 * 8;
        uVar18 = uVar27;
        uVar28 = local_res8;
        if (local_160 + 1 < this->MaxDepth) {
          do {
            uVar24 = *(uint *)((longlong)&local_c8 + uVar18 * 4);
            uVar23 = uVar15;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar23 = ~uVar24 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_98 = param_1->DataPtr[(int)uVar24].field0_0x0._s_0.Z;
            pTVar2 = param_1->DataPtr + (int)uVar24;
            uVar23 = uVar26;
            if (local_178._s_0.Z < local_98) {
              uVar23 = 4;
            }
            bVar13 = local_178._s_0.X < (pTVar2->field0_0x0)._s_0.X;
            uVar22 = uVar26;
            if (local_178._s_0.Y < (pTVar2->field0_0x0)._s_0.Y) {
              uVar22 = 2;
            }
            uVar16 = uVar26;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar16 = uVar21;
            }
            if ((uVar16 == 0) &&
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
            lVar29 = (ulonglong)(uVar23 + bVar13 + uVar22) + local_140;
            uVar23 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) - 3;
            if (uVar23 == 0xffffffff) {
              uVar23 = (this->Nodes).ArrayNum;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar23 == *piVar1) {
                uVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)this,piVar1);
              }
              (this->Nodes).ArrayNum = uVar23 + 1;
              pFVar4 = (this->Nodes).AllocatorInstance.Data;
              lVar30 = (longlong)(int)uVar23 * 0x20;
              *(undefined8 *)(pFVar4 + lVar30) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 0x18) = 0xffffffffffffffff;
              uVar22 = uVar26;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar22 = uVar21;
              }
              if ((uVar22 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) = -3 - uVar23;
            }
            uVar22 = uVar15;
            if ((int)uVar23 < (this->Nodes).ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->Nodes).AllocatorInstance.Data;
            uVar20 = uVar27;
            do {
              if (*(int *)(pFVar4 + uVar20 * 4 + (longlong)(int)uVar23 * 0x20) == -1) {
                *(uint *)(pFVar4 + uVar20 * 4 + (longlong)(int)uVar23 * 0x20) = uVar24;
                break;
              }
              uVar20 = uVar20 + 1;
            } while ((longlong)uVar20 < 8);
            uVar18 = uVar18 + 1;
          } while ((longlong)uVar18 < 8);
        }
        else {
          local_148 = 0;
          do {
            uVar24 = *(uint *)((longlong)&local_c8 + local_148 * 4);
            uVar23 = uVar26;
            if ((int)uVar24 < param_1->ArrayNum) {
              uVar23 = ~uVar24 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar2 = param_1->DataPtr + (int)uVar24;
            dVar10 = (pTVar2->field0_0x0)._s_0.X;
            dVar11 = (pTVar2->field0_0x0)._s_0.Y;
            dVar3 = param_1->DataPtr[(int)uVar24].field0_0x0._s_0.Z;
            local_98 = dVar3;
            uVar23 = uVar26;
            if (local_178._s_0.Z < dVar3) {
              uVar23 = 4;
            }
            uVar22 = uVar26;
            if (local_178._s_0.Y < dVar11) {
              uVar22 = 2;
            }
            uVar22 = uVar23 + (local_178._s_0.X < dVar10) + uVar22;
            uVar23 = uVar26;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar23 = uVar21;
            }
            local_150 = uVar22;
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar29 = (ulonglong)uVar22 + local_140;
            uVar23 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) - 3;
            if (uVar23 == 0xffffffff) {
              uVar23 = (this->Nodes).ArrayNum;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar23 == *piVar1) {
                uVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)this,piVar1);
              }
              (this->Nodes).ArrayNum = uVar23 + 1;
              pFVar4 = (this->Nodes).AllocatorInstance.Data;
              lVar30 = (longlong)(int)uVar23 * 0x20;
              *(undefined8 *)(pFVar4 + lVar30) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar4 + lVar30 + 0x18) = 0xffffffffffffffff;
              uVar22 = uVar26;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar22 = uVar21;
              }
              if ((uVar22 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) = -3 - uVar23;
            }
            uVar22 = uVar26;
            if ((int)uVar23 < (this->Nodes).ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (this->Nodes).AllocatorInstance.Data;
            uVar22 = uVar26;
            if (((param_3->Max).field0_0x0._s_0.Y - (param_3->Min).field0_0x0._s_0.Y) * dVar12 *
                ((double)(local_150 & 2) - dVar12) + local_178._s_0.Y < dVar11) {
              uVar22 = 2;
            }
            uVar16 = uVar26;
            if (((param_3->Max).field0_0x0._s_0.Z - (param_3->Min).field0_0x0._s_0.Z) * dVar12 *
                ((double)(local_150 & 4) - dVar12) + local_178._s_0.Z < dVar3) {
              uVar16 = 4;
            }
            lVar29 = (ulonglong)
                     (uVar22 + uVar16 +
                     (uint)(((param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X) *
                            dVar12 * ((double)(local_150 & 1) - dVar12) + local_178._s_0.X < dVar10)
                     ) + (longlong)(int)uVar23 * 8;
            uVar23 = *(uint *)(pFVar4 + lVar29 * 4);
            local_180[0] = uVar24;
            if (uVar23 == 0xffffffff) {
              uVar23 = (this->MaxDepthBuckets).ArrayNum;
              piVar1 = &(this->MaxDepthBuckets).ArrayMax;
              if (uVar23 == *piVar1) {
                uVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(this->MaxDepthBuckets).AllocatorInstance,piVar1);
              }
              (this->MaxDepthBuckets).ArrayNum = uVar23 + 1;
              pFVar5 = (this->MaxDepthBuckets).AllocatorInstance.Data;
              lVar30 = (longlong)(int)uVar23 * 0x20;
              *(undefined8 *)(pFVar5 + lVar30 + 0x10) = 0;
              *(undefined4 *)(pFVar5 + lVar30 + 0x18) = 0;
              *(undefined4 *)(pFVar5 + lVar30 + 0x1c) = 4;
              *(uint *)(pFVar4 + lVar29 * 4) = uVar23;
            }
            uVar24 = uVar15;
            if ((int)uVar23 < (this->MaxDepthBuckets).ArrayNum) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar25 = (ForElementType<int>)
                     ((longlong)(int)uVar23 * 0x20 +
                     (longlong)(this->MaxDepthBuckets).AllocatorInstance.Data);
            FVar6 = *(ForElementType<int> *)((longlong)FVar25 + 0x10);
            FVar19 = FVar25;
            if (FVar6 != (ForElementType<int>)0x0) {
              FVar19 = FVar6;
            }
            if ((ulonglong)FVar19 <= local_180) {
              FVar19 = FVar25;
              if (FVar6 != (ForElementType<int>)0x0) {
                FVar19 = FVar6;
              }
              if ((local_180 <
                   (uint *)((longlong)FVar19 + (longlong)*(int *)((longlong)FVar25 + 0x1c) * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar17 = *(int *)((longlong)FVar25 + 0x18);
            if (iVar17 == *(int *)((longlong)FVar25 + 0x1c)) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar25,
                                  (int *)((longlong)FVar25 + 0x1c));
            }
            *(int *)((longlong)FVar25 + 0x18) = iVar17 + 1;
            if (*(ForElementType<int> *)((longlong)FVar25 + 0x10) != (ForElementType<int>)0x0) {
              FVar25 = *(ForElementType<int> *)((longlong)FVar25 + 0x10);
            }
            *(uint *)((longlong)FVar25 + (longlong)iVar17 * 4) = local_180[0];
            local_148 = local_148 + 1;
          } while (local_148 < 8);
        }
      }
      lVar30 = local_138;
      lVar29 = local_158;
      if ((int)uVar28 < (this->Nodes).ArrayNum) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar30)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodeT::IsNodeIndex(Nodes[CurNodeIdx].Children[0])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                              ,0x163,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = uVar26;
      if (local_178._s_0.Z < (local_130->field0_0x0)._s_0.Z) {
        uVar15 = 4;
      }
      uVar33 = 0;
      uVar24 = uVar26;
      if (local_178._s_0.Y < (local_130->field0_0x0)._s_0.Y) {
        uVar24 = 2;
      }
      uVar24 = uVar15 + uVar24 + (uint)(local_178._s_0.X < (local_130->field0_0x0)._s_0.X);
      uVar15 = uVar26;
      if ((int)uVar28 < (this->Nodes).ArrayNum) {
        uVar15 = uVar21;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar33 = extraout_XMM0._8_8_;
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar29 = (ulonglong)uVar24 + lVar29 * 8;
      local_res8 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) - 3;
      if (local_res8 == 0xffffffff) {
        local_res8 = (this->Nodes).ArrayNum;
        piVar1 = &(this->Nodes).ArrayMax;
        if (local_res8 == *piVar1) {
          local_res8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x420,(ForAnyElementType *)this,piVar1);
          uVar33 = extraout_XMM0_00._8_8_;
        }
        (this->Nodes).ArrayNum = local_res8 + 1;
        pFVar4 = (this->Nodes).AllocatorInstance.Data;
        lVar30 = (longlong)(int)local_res8 * 0x20;
        *(undefined8 *)(pFVar4 + lVar30) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar30 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar30 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar4 + lVar30 + 0x18) = 0xffffffffffffffff;
        uVar15 = uVar26;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar15 = uVar21;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar33 = extraout_XMM0_01._8_8_;
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        *(uint *)((this->Nodes).AllocatorInstance.Data + lVar29 * 4) = -3 - local_res8;
      }
      uStack_110 = local_178._0_4_;
      uStack_10c = local_178._4_4_;
      local_128 = (undefined4)local_f8;
      uStack_124 = local_f8._4_4_;
      if ((uVar24 & 1) != 0) {
        uStack_110 = local_e8._8_4_;
        uStack_10c = local_e8._12_4_;
        local_128 = local_178._0_4_;
        uStack_124 = local_178._4_4_;
      }
      uVar36 = SUB84(local_178._s_0.Y,0);
      uVar37 = (undefined4)((ulonglong)local_178._8_8_ >> 0x20);
      uVar34 = uVar36;
      uVar35 = uVar37;
      if ((uVar24 & 2) != 0) {
        uVar34 = local_d8;
        uVar35 = uStack_d4;
        local_178._s_0.Y = (double)CONCAT44(uStack_d4,local_d8);
        uStack_f0._0_4_ = uVar36;
        uStack_f0._4_4_ = uVar37;
      }
      local_108._8_4_ = uStack_d0;
      local_108._0_8_ = local_178._s_0.Y;
      local_108._12_4_ = uStack_cc;
      if ((uVar24 & 4) == 0) {
        uVar34 = SUB84(local_178._s_0.Y,0);
        uVar35 = (undefined4)((ulonglong)local_178._s_0.Y >> 0x20);
        local_108._8_4_ = local_178._16_4_;
        local_108._12_4_ = local_178._20_4_;
        uStack_d0 = local_178._16_4_;
        uStack_cc = local_178._20_4_;
        local_118 = local_e8._0_4_;
        uStack_114 = local_e8._4_4_;
      }
      else {
        auVar9._4_8_ = uVar33;
        auVar9._0_4_ = uVar35;
        auVar32._0_8_ = auVar9._0_8_ << 0x20;
        auVar32._8_4_ = uStack_d0;
        auVar32._12_4_ = uStack_cc;
        local_118 = local_178._16_4_;
        uStack_114 = local_178._20_4_;
        local_178._s_0.Z = auVar32._8_8_;
      }
      local_160 = local_160 + 1;
      local_f8 = (double)CONCAT44(uStack_124,local_128);
      local_178._s_0.X =
           ((double)CONCAT44(uStack_10c,uStack_110) + (double)CONCAT44(uStack_124,local_128)) *
           dVar12;
      local_178._s_0.Y =
           (local_178._s_0.Y + (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0)) * dVar12;
      local_178._s_0.Z = (local_178._s_0.Z + (double)CONCAT44(uStack_114,local_118)) * dVar12;
      local_e8._4_4_ = uStack_114;
      local_e8._0_4_ = local_118;
      local_e8._8_4_ = uStack_110;
      local_e8._12_4_ = uStack_10c;
      uVar18 = (ulonglong)local_res8;
      uVar15 = local_res8;
      uStack_120 = (undefined4)uStack_f0;
      uStack_11c = uStack_f0._4_4_;
      local_d8 = uVar34;
      uStack_d4 = uVar35;
    } while (local_160 < this->MaxDepth);
  }
  pTVar2 = local_130;
  if ((int)uVar15 < (this->Nodes).ArrayNum) {
    uVar26 = ~uVar15 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  PlaceInMaxDepthBucketHelper
            (this,param_2,pTVar2,
             (FOctreeNode *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20),
             (TVector<double> *)&local_178._s_0);
  return;
}

// AddPointHelper @ 1435eebf0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
::AddPointHelper(TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
                 *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,int param_2,
                TAxisAlignedBox2<float> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TVector2<float> *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<int> FVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ForElementType<int> FVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint local_res8;
  TVector2<float>_u_0 local_e8;
  uint local_e0;
  uint local_d8 [2];
  longlong local_d0;
  int local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  TVector2<float> *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  this->Num = this->Num + 1;
  local_98 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[](param_1,param_2);
  fVar6 = __real_3f000000;
  local_c0 = (param_3->Min).field0_0x0._s_0.X;
  fStack_bc = (param_3->Min).field0_0x0._s_0.Y;
  fStack_b8 = (param_3->Max).field0_0x0._s_0.X;
  fStack_b4 = (param_3->Max).field0_0x0._s_0.Y;
  uVar21 = 0;
  local_res8 = 0;
  local_e8._s_0.X = (local_c0 + fStack_b8) * __real_3f000000;
  local_c8 = 0;
  local_e8._s_0.Y = (fStack_bc + fStack_b4) * __real_3f000000;
  uVar20 = 0;
  uVar14 = uVar21;
  uVar22 = uVar20;
  if (0 < this->MaxDepth) {
    do {
      piVar25 = &(this->Nodes).ArrayNum;
      uVar23 = (uint)uVar14;
      uVar22 = ~uVar23 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar23 < *piVar25) {
        uVar17 = uVar22;
      }
      local_e0 = uVar22;
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = (longlong)(int)uVar23;
      lVar26 = lVar18 * 0x10;
      local_d0 = lVar18;
      local_a0 = lVar26;
      if (-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar26)) {
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data;
        uVar14 = uVar21;
        do {
          if (*(int *)(pFVar2 + uVar14 * 4 + lVar26) == -1) {
            *(int *)(pFVar2 + uVar14 * 4 + lVar26) = param_2;
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < 4);
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data + lVar26;
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        local_90 = *(undefined8 *)pFVar2;
        uStack_88 = *(undefined8 *)(pFVar2 + 8);
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar26) = 0xfffffffe;
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar26 + 4) = 0xfffffffe;
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar26 + 8) = 0xfffffffe;
        uVar17 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar26 + 0xc) = 0xfffffffe;
        local_a8 = (TVector2<float>_u_0)(lVar18 * 4);
        uVar14 = uVar21;
        uVar23 = local_res8;
        if (local_c8 + 1 < this->MaxDepth) {
          do {
            uVar17 = *(uint *)((longlong)&local_90 + uVar14 * 4);
            uVar24 = uVar20;
            if ((int)uVar17 < param_1->ArrayNum) {
              uVar24 = ~uVar17 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_b0 = (TVector2<float>_u_0)
                       *(TVector2<float>_u_0 *)&param_1->DataPtr[(int)uVar17].field0_0x0._s_0;
            bVar10 = local_e8._s_0.X < (float)local_b0;
            uVar24 = uVar20;
            if (local_e8._s_0.Y < local_b0._4_4_) {
              uVar24 = 2;
            }
            uVar12 = uVar20;
            if ((int)local_res8 < *piVar25) {
              uVar12 = uVar22;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar18 = (ulonglong)(bVar10 + uVar24) + (longlong)local_a8;
            uVar22 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) - 3;
            if (uVar22 == 0xffffffff) {
              uVar22 = *piVar25;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar22 == *piVar1) {
                uVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,(ForAnyElementType *)this,piVar1);
              }
              *piVar25 = uVar22 + 1;
              pFVar2 = (this->Nodes).AllocatorInstance.Data;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar22 * 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar22 * 0x10 + 8) = 0xffffffffffffffff;
              uVar24 = uVar20;
              if ((int)local_res8 < *piVar25) {
                uVar24 = local_e0;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) = -3 - uVar22;
            }
            uVar24 = uVar20;
            if ((int)uVar22 < *piVar25) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->Nodes).AllocatorInstance.Data;
            uVar16 = uVar21;
            do {
              if (*(int *)(pFVar2 + uVar16 * 4 + (longlong)(int)uVar22 * 0x10) == -1) {
                *(uint *)(pFVar2 + uVar16 * 4 + (longlong)(int)uVar22 * 0x10) = uVar17;
                break;
              }
              uVar16 = uVar16 + 1;
            } while ((longlong)uVar16 < 4);
            uVar14 = uVar14 + 1;
            uVar22 = local_e0;
          } while ((longlong)uVar14 < 4);
        }
        else {
          local_b0 = (TVector2<float>_u_0)0x0;
          do {
            uVar17 = *(uint *)((longlong)&local_90 + (longlong)local_b0 * 4);
            uVar24 = uVar20;
            if ((int)uVar17 < param_1->ArrayNum) {
              uVar24 = ~uVar17 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_a8 = (TVector2<float>_u_0)
                       *(TVector2<float>_u_0 *)&param_1->DataPtr[(int)uVar17].field0_0x0._s_0;
            fVar7 = (float)local_a8;
            fVar8 = local_a8._4_4_;
            uVar24 = uVar20;
            if (local_e8._s_0.Y < local_a8._4_4_) {
              uVar24 = 2;
            }
            uVar24 = uVar24 + (local_e8._s_0.X < (float)local_a8);
            uVar12 = uVar20;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar12 = uVar22;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar18 = (ulonglong)uVar24 + lVar18 * 4;
            uVar22 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) - 3;
            if (uVar22 == 0xffffffff) {
              uVar22 = (this->Nodes).ArrayNum;
              piVar25 = &(this->Nodes).ArrayMax;
              if (uVar22 == *piVar25) {
                uVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,(ForAnyElementType *)this,piVar25);
              }
              (this->Nodes).ArrayNum = uVar22 + 1;
              pFVar2 = (this->Nodes).AllocatorInstance.Data;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar22 * 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar22 * 0x10 + 8) = 0xffffffffffffffff;
              uVar12 = uVar20;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar12 = local_e0;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) = -3 - uVar22;
            }
            uVar12 = uVar20;
            if ((int)uVar22 < (this->Nodes).ArrayNum) {
              uVar12 = ~uVar22 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->Nodes).AllocatorInstance.Data;
            uVar12 = uVar20;
            if (((param_3->Max).field0_0x0._s_0.Y - (param_3->Min).field0_0x0._s_0.Y) * fVar6 *
                ((float)(uVar24 & 2) - fVar6) + local_e8._s_0.Y < fVar8) {
              uVar12 = 2;
            }
            lVar18 = (ulonglong)
                     (uVar12 + (((param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X
                                ) * fVar6 * ((float)(uVar24 & 1) - fVar6) + local_e8._s_0.X < fVar7)
                     ) + (longlong)(int)uVar22 * 4;
            uVar22 = *(uint *)(pFVar2 + lVar18 * 4);
            local_d8[0] = uVar17;
            if (uVar22 == 0xffffffff) {
              uVar22 = (this->MaxDepthBuckets).ArrayNum;
              piVar25 = &(this->MaxDepthBuckets).ArrayMax;
              if (uVar22 == *piVar25) {
                uVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(this->MaxDepthBuckets).AllocatorInstance,piVar25);
              }
              (this->MaxDepthBuckets).ArrayNum = uVar22 + 1;
              pFVar3 = (this->MaxDepthBuckets).AllocatorInstance.Data;
              lVar26 = (longlong)(int)uVar22 * 0x20;
              *(undefined8 *)(pFVar3 + lVar26 + 0x10) = 0;
              *(undefined4 *)(pFVar3 + lVar26 + 0x18) = 0;
              *(undefined4 *)(pFVar3 + lVar26 + 0x1c) = 4;
              *(uint *)(pFVar2 + lVar18 * 4) = uVar22;
            }
            uVar17 = uVar20;
            if ((int)uVar22 < (this->MaxDepthBuckets).ArrayNum) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar19 = (ForElementType<int>)
                     ((longlong)(int)uVar22 * 0x20 +
                     (longlong)(this->MaxDepthBuckets).AllocatorInstance.Data);
            FVar4 = *(ForElementType<int> *)((longlong)FVar19 + 0x10);
            FVar15 = FVar19;
            if (FVar4 != (ForElementType<int>)0x0) {
              FVar15 = FVar4;
            }
            if ((ulonglong)FVar15 <= local_d8) {
              FVar15 = FVar19;
              if (FVar4 != (ForElementType<int>)0x0) {
                FVar15 = FVar4;
              }
              if ((local_d8 <
                   (uint *)((longlong)FVar15 + (longlong)*(int *)((longlong)FVar19 + 0x1c) * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar13 = *(int *)((longlong)FVar19 + 0x18);
            if (iVar13 == *(int *)((longlong)FVar19 + 0x1c)) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar19,
                                  (int *)((longlong)FVar19 + 0x1c));
            }
            *(int *)((longlong)FVar19 + 0x18) = iVar13 + 1;
            if (*(ForElementType<int> *)((longlong)FVar19 + 0x10) != (ForElementType<int>)0x0) {
              FVar19 = *(ForElementType<int> *)((longlong)FVar19 + 0x10);
            }
            *(uint *)((longlong)FVar19 + (longlong)iVar13 * 4) = local_d8[0];
            local_b0 = local_b0 + 1;
            lVar18 = local_d0;
            uVar22 = local_e0;
          } while ((longlong)local_b0 < 4);
        }
      }
      lVar18 = local_a0;
      piVar25 = &(this->Nodes).ArrayNum;
      uVar17 = uVar20;
      if ((int)uVar23 < *piVar25) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodeT::IsNodeIndex(Nodes[CurNodeIdx].Children[0])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                              ,0x163,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = uVar20;
      if (local_e8._s_0.Y < (local_98->field0_0x0)._s_0.Y) {
        uVar17 = 2;
      }
      uVar17 = uVar17 + (local_e8._s_0.X < (local_98->field0_0x0)._s_0.X);
      uVar24 = uVar20;
      if ((int)uVar23 < *piVar25) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar18 = (ulonglong)uVar17 + local_d0 * 4;
      local_res8 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) - 3;
      if (local_res8 == 0xffffffff) {
        local_res8 = *piVar25;
        piVar1 = &(this->Nodes).ArrayMax;
        if (local_res8 == *piVar1) {
          local_res8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,(ForAnyElementType *)this,piVar1);
        }
        *piVar25 = local_res8 + 1;
        pFVar2 = (this->Nodes).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + (longlong)(int)local_res8 * 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar2 + (longlong)(int)local_res8 * 0x10 + 8) = 0xffffffffffffffff;
        uVar22 = uVar20;
        if ((int)uVar23 < *piVar25) {
          uVar22 = local_e0;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->Nodes).AllocatorInstance.Data + lVar18 * 4) = -3 - local_res8;
      }
      uVar28 = local_e8._s_0.X;
      if ((uVar17 & 1) != 0) {
        uVar28 = fStack_b8;
        local_c0 = local_e8._s_0.X;
      }
      uVar27 = local_e8._s_0.Y;
      if ((uVar17 & 2) != 0) {
        uVar27 = fStack_b4;
        fStack_bc = local_e8._s_0.Y;
      }
      local_c8 = local_c8 + 1;
      local_e8._s_0.X = (local_c0 + (float)uVar28) * fVar6;
      local_e8._s_0.Y = ((float)uVar27 + fStack_bc) * fVar6;
      uVar14 = (ulonglong)local_res8;
      uVar22 = local_res8;
      fStack_b8 = (float)uVar28;
      fStack_b4 = (float)uVar27;
    } while (local_c8 < this->MaxDepth);
  }
  pTVar9 = local_98;
  if ((int)uVar22 < (this->Nodes).ArrayNum) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  PlaceInMaxDepthBucketHelper
            (this,param_2,pTVar9,
             (FQuadTreeNode *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10),
             (TVector2<float> *)&local_e8._s_0);
  return;
}

// AddPointHelper @ 1435ef7c0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
::AddPointHelper(TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
                 *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
                TAxisAlignedBox2<double> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  TVector2<double> *pTVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ForElementType<int> FVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ForElementType<int> FVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  longlong lVar31;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint local_res8;
  uint local_110 [2];
  longlong local_108;
  TVector2<double>_u_0 local_100;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  TVector2<double> *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  this->Num = this->Num + 1;
  local_d8 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[](param_1,param_2);
  dVar12 = __real_3fe0000000000000;
  dVar7 = *(double *)&(param_3->Min).field0_0x0;
  dVar8 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 8);
  uVar26 = 0;
  local_res8 = 0;
  dVar9 = *(double *)&(param_3->Max).field0_0x0;
  dVar10 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 8);
  local_f0 = 0;
  local_98 = SUB84(dVar7,0);
  uStack_94 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_90 = SUB84(dVar8,0);
  uStack_8c = (undefined4)((ulonglong)dVar8 >> 0x20);
  local_88 = SUB84(dVar9,0);
  uStack_84 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uStack_80 = SUB84(dVar10,0);
  uStack_7c = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_100._s_0.X = (dVar7 + dVar9) * __real_3fe0000000000000;
  local_100._s_0.Y = (dVar8 + dVar10) * __real_3fe0000000000000;
  uVar25 = 0;
  uVar18 = uVar26;
  uVar22 = uVar25;
  if (0 < this->MaxDepth) {
    do {
      piVar30 = &(this->Nodes).ArrayNum;
      uVar28 = (uint)uVar18;
      uVar27 = ~uVar28 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar28 < *piVar30) {
        uVar22 = uVar27;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar23 = (longlong)(int)uVar28;
      lVar31 = lVar23 * 0x10;
      local_108 = lVar23;
      local_e0 = lVar31;
      if (-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar31)) {
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data;
        uVar18 = uVar26;
        do {
          if (*(int *)(pFVar2 + uVar18 * 4 + lVar31) == -1) {
            *(int *)(pFVar2 + uVar18 * 4 + lVar31) = param_2;
            return;
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < 4);
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data + lVar31;
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        local_a8 = *(undefined8 *)pFVar2;
        uStack_a0 = *(undefined8 *)(pFVar2 + 8);
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31) = 0xfffffffe;
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 4) = 0xfffffffe;
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 8) = 0xfffffffe;
        uVar22 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar22 = uVar27;
        }
        if ((uVar22 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 + 0xc) = 0xfffffffe;
        local_e8 = lVar23 * 4;
        uVar18 = uVar26;
        uVar28 = local_res8;
        if (local_f0 + 1 < this->MaxDepth) {
          do {
            uVar22 = *(uint *)((longlong)&local_a8 + uVar18 * 4);
            uVar29 = uVar25;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar29 = ~uVar22 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar14 = local_100._s_0.X < param_1->DataPtr[(int)uVar22].field0_0x0._s_0.X;
            uVar29 = uVar25;
            if (local_100._s_0.Y < param_1->DataPtr[(int)uVar22].field0_0x0._s_0.Y) {
              uVar29 = 2;
            }
            uVar21 = uVar25;
            if ((int)local_res8 < *piVar30) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar23 = (ulonglong)(bVar14 + uVar29) + local_e8;
            uVar29 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) - 3;
            if (uVar29 == 0xffffffff) {
              uVar29 = *piVar30;
              piVar1 = &(this->Nodes).ArrayMax;
              if (uVar29 == *piVar1) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,(ForAnyElementType *)this,piVar1);
              }
              *piVar30 = uVar29 + 1;
              pFVar2 = (this->Nodes).AllocatorInstance.Data;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar29 * 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar29 * 0x10 + 8) = 0xffffffffffffffff;
              uVar21 = uVar25;
              if ((int)local_res8 < *piVar30) {
                uVar21 = uVar27;
              }
              if ((uVar21 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) = -3 - uVar29;
            }
            uVar21 = uVar25;
            if ((int)uVar29 < *piVar30) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->Nodes).AllocatorInstance.Data;
            uVar20 = uVar26;
            do {
              if (*(int *)(pFVar2 + uVar20 * 4 + (longlong)(int)uVar29 * 0x10) == -1) {
                *(uint *)(pFVar2 + uVar20 * 4 + (longlong)(int)uVar29 * 0x10) = uVar22;
                break;
              }
              uVar20 = uVar20 + 1;
            } while ((longlong)uVar20 < 4);
            uVar18 = uVar18 + 1;
          } while ((longlong)uVar18 < 4);
        }
        else {
          local_e8 = 0;
          do {
            uVar22 = *(uint *)((longlong)&local_a8 + local_e8 * 4);
            uVar29 = uVar25;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar29 = ~uVar22 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            dVar7 = param_1->DataPtr[(int)uVar22].field0_0x0._s_0.X;
            dVar8 = param_1->DataPtr[(int)uVar22].field0_0x0._s_0.Y;
            uVar29 = uVar25;
            if (local_100._s_0.Y < dVar8) {
              uVar29 = 2;
            }
            uVar29 = uVar29 + (local_100._s_0.X < dVar7);
            uVar21 = uVar25;
            if ((int)local_res8 < (this->Nodes).ArrayNum) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar23 = (ulonglong)uVar29 + lVar23 * 4;
            uVar21 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) - 3;
            if (uVar21 == 0xffffffff) {
              uVar21 = (this->Nodes).ArrayNum;
              piVar30 = &(this->Nodes).ArrayMax;
              if (uVar21 == *piVar30) {
                uVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,(ForAnyElementType *)this,piVar30);
              }
              (this->Nodes).ArrayNum = uVar21 + 1;
              pFVar2 = (this->Nodes).AllocatorInstance.Data;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar21 * 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(pFVar2 + (longlong)(int)uVar21 * 0x10 + 8) = 0xffffffffffffffff;
              uVar16 = uVar25;
              if ((int)local_res8 < (this->Nodes).ArrayNum) {
                uVar16 = uVar27;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) = -3 - uVar21;
            }
            uVar16 = uVar25;
            if ((int)uVar21 < (this->Nodes).ArrayNum) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->Nodes).AllocatorInstance.Data;
            uVar16 = uVar25;
            if (((param_3->Max).field0_0x0._s_0.Y - (param_3->Min).field0_0x0._s_0.Y) * dVar12 *
                ((double)(uVar29 & 2) - dVar12) + local_100._s_0.Y < dVar8) {
              uVar16 = 2;
            }
            lVar23 = (ulonglong)
                     ((((param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X) *
                       dVar12 * ((double)(uVar29 & 1) - dVar12) + local_100._s_0.X < dVar7) + uVar16
                     ) + (longlong)(int)uVar21 * 4;
            uVar29 = *(uint *)(pFVar2 + lVar23 * 4);
            local_110[0] = uVar22;
            if (uVar29 == 0xffffffff) {
              uVar29 = (this->MaxDepthBuckets).ArrayNum;
              piVar30 = &(this->MaxDepthBuckets).ArrayMax;
              if (uVar29 == *piVar30) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&(this->MaxDepthBuckets).AllocatorInstance,piVar30);
              }
              (this->MaxDepthBuckets).ArrayNum = uVar29 + 1;
              pFVar3 = (this->MaxDepthBuckets).AllocatorInstance.Data;
              lVar31 = (longlong)(int)uVar29 * 0x20;
              *(undefined8 *)(pFVar3 + lVar31 + 0x10) = 0;
              *(undefined4 *)(pFVar3 + lVar31 + 0x18) = 0;
              *(undefined4 *)(pFVar3 + lVar31 + 0x1c) = 4;
              *(uint *)(pFVar2 + lVar23 * 4) = uVar29;
            }
            uVar22 = uVar25;
            if ((int)uVar29 < (this->MaxDepthBuckets).ArrayNum) {
              uVar22 = ~uVar29 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar24 = (ForElementType<int>)
                     ((longlong)(int)uVar29 * 0x20 +
                     (longlong)(this->MaxDepthBuckets).AllocatorInstance.Data);
            FVar4 = *(ForElementType<int> *)((longlong)FVar24 + 0x10);
            FVar19 = FVar24;
            if (FVar4 != (ForElementType<int>)0x0) {
              FVar19 = FVar4;
            }
            if ((ulonglong)FVar19 <= local_110) {
              FVar19 = FVar24;
              if (FVar4 != (ForElementType<int>)0x0) {
                FVar19 = FVar4;
              }
              if ((local_110 <
                   (uint *)((longlong)FVar19 + (longlong)*(int *)((longlong)FVar24 + 0x1c) * 4)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
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
            iVar17 = *(int *)((longlong)FVar24 + 0x18);
            if (iVar17 == *(int *)((longlong)FVar24 + 0x1c)) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar24,
                                  (int *)((longlong)FVar24 + 0x1c));
            }
            *(int *)((longlong)FVar24 + 0x18) = iVar17 + 1;
            if (*(ForElementType<int> *)((longlong)FVar24 + 0x10) != (ForElementType<int>)0x0) {
              FVar24 = *(ForElementType<int> *)((longlong)FVar24 + 0x10);
            }
            *(uint *)((longlong)FVar24 + (longlong)iVar17 * 4) = local_110[0];
            local_e8 = local_e8 + 1;
            lVar23 = local_108;
          } while (local_e8 < 4);
        }
      }
      lVar23 = local_e0;
      piVar30 = &(this->Nodes).ArrayNum;
      uVar22 = uVar25;
      if ((int)uVar28 < *piVar30) {
        uVar22 = uVar27;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((-2 < *(int *)((this->Nodes).AllocatorInstance.Data + lVar23)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("NodeT::IsNodeIndex(Nodes[CurNodeIdx].Children[0])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                              ,0x163,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar38 = 0;
      uVar22 = uVar25;
      if (local_100._s_0.Y < (local_d8->field0_0x0)._s_0.Y) {
        uVar22 = 2;
      }
      uVar22 = uVar22 + (local_100._s_0.X < (local_d8->field0_0x0)._s_0.X);
      uVar29 = uVar25;
      if ((int)uVar28 < *piVar30) {
        uVar29 = uVar27;
      }
      if (uVar29 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar38 = extraout_XMM0._8_8_;
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar23 = (ulonglong)uVar22 + local_108 * 4;
      local_res8 = -*(int *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) - 3;
      if (local_res8 == 0xffffffff) {
        local_res8 = *piVar30;
        piVar1 = &(this->Nodes).ArrayMax;
        if (local_res8 == *piVar1) {
          local_res8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,(ForAnyElementType *)this,piVar1);
          uVar38 = extraout_XMM0_00._8_8_;
        }
        *piVar30 = local_res8 + 1;
        pFVar2 = (this->Nodes).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + (longlong)(int)local_res8 * 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(pFVar2 + (longlong)(int)local_res8 * 0x10 + 8) = 0xffffffffffffffff;
        uVar29 = uVar25;
        if ((int)uVar28 < *piVar30) {
          uVar29 = uVar27;
        }
        if (uVar29 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar38 = extraout_XMM0_01._8_8_;
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(uint *)((this->Nodes).AllocatorInstance.Data + lVar23 * 4) = -3 - local_res8;
      }
      uVar18 = (ulonglong)local_res8;
      uVar39 = CONCAT44(uStack_94,local_98);
      auVar11._8_4_ = uStack_90;
      auVar11._0_8_ = uVar39;
      auVar11._12_4_ = uStack_8c;
      uVar33 = SUB84(local_100._s_0.X,0);
      uVar34 = (undefined4)((ulonglong)local_100._0_8_ >> 0x20);
      uVar37 = local_100._s_0.X;
      local_c8 = auVar11;
      if ((uVar22 & 1) != 0) {
        local_c8._8_4_ = uStack_90;
        local_c8._0_8_ = local_100._s_0.X;
        local_c8._12_4_ = uStack_8c;
        local_98 = uVar33;
        uStack_94 = uVar34;
        uVar33 = local_88;
        uVar34 = uStack_84;
        uVar37 = CONCAT44(uStack_84,local_88);
        uVar39 = local_100._s_0.X;
      }
      local_b8._8_4_ = uStack_80;
      local_b8._0_8_ = uVar37;
      local_b8._12_4_ = uStack_7c;
      uVar35 = SUB84(local_100._s_0.Y,0);
      uVar36 = (undefined4)((ulonglong)local_100._8_8_ >> 0x20);
      if ((uVar22 & 2) == 0) {
        uVar33 = (undefined4)uVar37;
        uVar34 = (undefined4)((ulonglong)uVar37 >> 0x20);
        uVar38 = auVar11._8_8_;
        local_b8._8_4_ = uVar35;
        local_b8._12_4_ = uVar36;
      }
      else {
        local_98 = (undefined4)uVar39;
        uStack_94 = (undefined4)((ulonglong)uVar39 >> 0x20);
        auVar6._4_8_ = uVar38;
        auVar6._0_4_ = uVar34;
        auVar32._0_8_ = auVar6._0_8_ << 0x20;
        auVar32._8_4_ = uStack_80;
        auVar32._12_4_ = uStack_7c;
        local_c8._8_4_ = uVar35;
        local_c8._0_8_ = uVar39;
        local_c8._12_4_ = uVar36;
        uStack_90 = uVar35;
        uStack_8c = uVar36;
        uVar35 = uStack_80;
        uVar36 = uStack_7c;
        uVar38 = local_100._s_0.Y;
        local_100._s_0.Y = auVar32._8_8_;
      }
      local_f0 = local_f0 + 1;
      local_88 = uVar33;
      uStack_84 = uVar34;
      uStack_80 = uVar35;
      uStack_7c = uVar36;
      local_100._s_0.X = ((double)uVar37 + (double)uVar39) * dVar12;
      local_100._s_0.Y = (local_100._s_0.Y + (double)uVar38) * dVar12;
      uVar22 = local_res8;
    } while (local_f0 < this->MaxDepth);
  }
  pTVar13 = local_d8;
  if ((int)uVar22 < (this->Nodes).ArrayNum) {
    uVar25 = ~uVar22 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  PlaceInMaxDepthBucketHelper
            (this,param_2,pTVar13,
             (FQuadTreeNode *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10),
             (TVector2<double> *)&local_100._s_0);
  return;
}

// ExtractZOrderCurveHelper @ 1435fa100

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::ExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FOctreeNode *param_2,int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *_Src;
  longlong lVar9;
  int local_28 [4];
  
  lVar9 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      do {
        uVar8 = -param_2->Children[lVar9] - 3;
        if (uVar8 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar8 < (this->Nodes).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
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
          ExtractZOrderCurveHelper
                    (this,param_1,
                     (FOctreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20),
                     param_3 + 1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 8);
    }
    else {
      do {
        local_28[0] = param_2->Children[lVar9];
        if (local_28[0] == -1) {
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar7;
        }
        lVar9 = lVar9 + 1;
        param_1->ArrayNum = iVar7 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      } while (lVar9 < 8);
    }
  }
  else {
    do {
      uVar8 = param_2->Children[lVar9];
      if (uVar8 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar8 < (this->MaxDepthBuckets).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Src = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20);
        if ((param_1 == _Src) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = _Src[1].ArrayNum;
        if (iVar7 != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)_Src[1].AllocatorInstance.Data;
          if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            _Src = pTVar1;
          }
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,_Src,(longlong)iVar7 << 2);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < 8);
  }
  return;
}

// ExtractZOrderCurveHelper @ 1435fa3a0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::ExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FOctreeNode *param_2,int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *_Src;
  longlong lVar9;
  int local_28 [4];
  
  lVar9 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      do {
        uVar8 = -param_2->Children[lVar9] - 3;
        if (uVar8 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar8 < (this->Nodes).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
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
          ExtractZOrderCurveHelper
                    (this,param_1,
                     (FOctreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20),
                     param_3 + 1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 8);
    }
    else {
      do {
        local_28[0] = param_2->Children[lVar9];
        if (local_28[0] == -1) {
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar7;
        }
        lVar9 = lVar9 + 1;
        param_1->ArrayNum = iVar7 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      } while (lVar9 < 8);
    }
  }
  else {
    do {
      uVar8 = param_2->Children[lVar9];
      if (uVar8 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar8 < (this->MaxDepthBuckets).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Src = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20);
        if ((param_1 == _Src) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = _Src[1].ArrayNum;
        if (iVar7 != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)_Src[1].AllocatorInstance.Data;
          if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            _Src = pTVar1;
          }
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,_Src,(longlong)iVar7 << 2);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < 8);
  }
  return;
}

// ExtractZOrderCurveHelper @ 1435fa640

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
::ExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FQuadTreeNode *param_2,int param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int local_28 [4];
  
  uVar10 = param_2->Children[0];
  lVar9 = 0;
  uVar6 = 0;
  if (param_3 < this->MaxDepth) {
    if ((int)uVar10 < -1) {
      do {
        uVar10 = -param_2->Children[lVar9] - 3;
        if (uVar10 != 0xffffffff) {
          uVar4 = uVar6;
          if ((int)uVar10 < (this->Nodes).ArrayNum) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ExtractZOrderCurveHelper
                    (this,param_1,
                     (FQuadTreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10),
                     param_3 + 1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 4);
    }
    else {
      do {
        local_28[0] = param_2->Children[lVar9];
        if (local_28[0] == -1) {
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar7;
        }
        lVar9 = lVar9 + 1;
        param_1->ArrayNum = iVar7 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      } while (lVar9 < 4);
    }
  }
  else {
    if (uVar10 != 0xffffffff) {
      uVar4 = uVar6;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[1];
    if (uVar10 != 0xffffffff) {
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[2];
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[3];
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
  }
  return;
}

// ExtractZOrderCurveHelper @ 1435fab30

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
::ExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FQuadTreeNode *param_2,int param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int local_28 [4];
  
  uVar10 = param_2->Children[0];
  lVar9 = 0;
  uVar6 = 0;
  if (param_3 < this->MaxDepth) {
    if ((int)uVar10 < -1) {
      do {
        uVar10 = -param_2->Children[lVar9] - 3;
        if (uVar10 != 0xffffffff) {
          uVar4 = uVar6;
          if ((int)uVar10 < (this->Nodes).ArrayNum) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ExtractZOrderCurveHelper
                    (this,param_1,
                     (FQuadTreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10),
                     param_3 + 1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 4);
    }
    else {
      do {
        local_28[0] = param_2->Children[lVar9];
        if (local_28[0] == -1) {
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar7;
        }
        lVar9 = lVar9 + 1;
        param_1->ArrayNum = iVar7 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      } while (lVar9 < 4);
    }
  }
  else {
    if (uVar10 != 0xffffffff) {
      uVar4 = uVar6;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[1];
    if (uVar10 != 0xffffffff) {
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[2];
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
    uVar10 = param_2->Children[3];
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaxDepthBuckets).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20);
      if ((param_1 == pTVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = pTVar11[1].ArrayNum;
      if (iVar7 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar11[1].AllocatorInstance.Data;
        if (pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar8 = pTVar11;
        }
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4,pTVar8,(longlong)iVar7 << 2);
      }
    }
  }
  return;
}

// InPlaceExtractZOrderCurveHelper @ 143608680

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::InPlaceExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
           *this,TArrayView<int,int> *param_1,FOctreeNode *param_2,int param_3,bool param_4,
          int *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  TArrayView<int,int> local_48;
  
  lVar14 = 0;
  uVar8 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      lVar15 = 8;
      do {
        lVar11 = 7 - lVar14;
        if (!param_4) {
          lVar11 = lVar14;
        }
        uVar12 = -param_2->Children[lVar11] - 3;
        if (uVar12 != 0xffffffff) {
          uVar9 = uVar8;
          if ((int)uVar12 < (this->Nodes).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48.DataPtr = param_1->DataPtr;
          local_48.ArrayNum = param_1->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
          InPlaceExtractZOrderCurveHelper
                    (this,&local_48,
                     (FOctreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20),
                     param_3 + 1,param_4,param_5);
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      do {
        iVar3 = param_2->Children[lVar14];
        if (iVar3 == -1) {
          return;
        }
        iVar4 = *param_5;
        *param_5 = iVar4 + 1;
        piVar10 = TArrayView<int,int>::operator[](param_1,iVar4);
        lVar14 = lVar14 + 1;
        *piVar10 = iVar3;
      } while (lVar14 < 8);
    }
  }
  else {
    local_58 = 0;
    local_50 = 8;
    do {
      lVar14 = 7 - local_58;
      if (!param_4) {
        lVar14 = local_58;
      }
      uVar12 = param_2->Children[lVar14];
      if (uVar12 != 0xffffffff) {
        uVar9 = uVar8;
        if ((int)uVar12 < (this->MaxDepthBuckets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        iVar3 = *(int *)(pFVar13 + 0x18);
        pFVar1 = pFVar13 + 0x18;
        if (*(FScriptContainerElement **)(pFVar13 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar13 + 0x10);
        }
        pFVar2 = pFVar13 + (longlong)iVar3 * 4;
        while( true ) {
          if (*(int *)pFVar1 != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar13 == pFVar2) break;
          iVar4 = *(int *)pFVar13;
          iVar5 = param_1->ArrayNum;
          uVar12 = *param_5;
          *param_5 = uVar12 + 1;
          uVar9 = uVar8;
          if ((int)uVar12 < iVar5) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar13 = pFVar13 + 4;
          param_1->DataPtr[(int)uVar12] = iVar4;
        }
      }
      local_58 = local_58 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

// InPlaceExtractZOrderCurveHelper @ 143608970

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::InPlaceExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
           *this,TArrayView<int,int> *param_1,FOctreeNode *param_2,int param_3,bool param_4,
          int *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  TArrayView<int,int> local_48;
  
  lVar14 = 0;
  uVar8 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      lVar15 = 8;
      do {
        lVar11 = 7 - lVar14;
        if (!param_4) {
          lVar11 = lVar14;
        }
        uVar12 = -param_2->Children[lVar11] - 3;
        if (uVar12 != 0xffffffff) {
          uVar9 = uVar8;
          if ((int)uVar12 < (this->Nodes).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48.DataPtr = param_1->DataPtr;
          local_48.ArrayNum = param_1->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
          InPlaceExtractZOrderCurveHelper
                    (this,&local_48,
                     (FOctreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20),
                     param_3 + 1,param_4,param_5);
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      do {
        iVar3 = param_2->Children[lVar14];
        if (iVar3 == -1) {
          return;
        }
        iVar4 = *param_5;
        *param_5 = iVar4 + 1;
        piVar10 = TArrayView<int,int>::operator[](param_1,iVar4);
        lVar14 = lVar14 + 1;
        *piVar10 = iVar3;
      } while (lVar14 < 8);
    }
  }
  else {
    local_58 = 0;
    local_50 = 8;
    do {
      lVar14 = 7 - local_58;
      if (!param_4) {
        lVar14 = local_58;
      }
      uVar12 = param_2->Children[lVar14];
      if (uVar12 != 0xffffffff) {
        uVar9 = uVar8;
        if ((int)uVar12 < (this->MaxDepthBuckets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        iVar3 = *(int *)(pFVar13 + 0x18);
        pFVar1 = pFVar13 + 0x18;
        if (*(FScriptContainerElement **)(pFVar13 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar13 + 0x10);
        }
        pFVar2 = pFVar13 + (longlong)iVar3 * 4;
        while( true ) {
          if (*(int *)pFVar1 != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar13 == pFVar2) break;
          iVar4 = *(int *)pFVar13;
          iVar5 = param_1->ArrayNum;
          uVar12 = *param_5;
          *param_5 = uVar12 + 1;
          uVar9 = uVar8;
          if ((int)uVar12 < iVar5) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar13 = pFVar13 + 4;
          param_1->DataPtr[(int)uVar12] = iVar4;
        }
      }
      local_58 = local_58 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

// InPlaceExtractZOrderCurveHelper @ 143608c60

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
::InPlaceExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
           *this,TArrayView<int,int> *param_1,FQuadTreeNode *param_2,int param_3,bool param_4,
          int *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  TArrayView<int,int> local_48;
  
  lVar14 = 0;
  uVar8 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      lVar15 = 4;
      do {
        lVar11 = 3 - lVar14;
        if (!param_4) {
          lVar11 = lVar14;
        }
        uVar12 = -param_2->Children[lVar11] - 3;
        if (uVar12 != 0xffffffff) {
          uVar9 = uVar8;
          if ((int)uVar12 < (this->Nodes).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48.DataPtr = param_1->DataPtr;
          local_48.ArrayNum = param_1->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
          InPlaceExtractZOrderCurveHelper
                    (this,&local_48,
                     (FQuadTreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10),
                     param_3 + 1,param_4,param_5);
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      do {
        iVar3 = param_2->Children[lVar14];
        if (iVar3 == -1) {
          return;
        }
        iVar4 = *param_5;
        *param_5 = iVar4 + 1;
        piVar10 = TArrayView<int,int>::operator[](param_1,iVar4);
        lVar14 = lVar14 + 1;
        *piVar10 = iVar3;
      } while (lVar14 < 4);
    }
  }
  else {
    local_58 = 0;
    local_50 = 4;
    do {
      lVar14 = 3 - local_58;
      if (!param_4) {
        lVar14 = local_58;
      }
      uVar12 = param_2->Children[lVar14];
      if (uVar12 != 0xffffffff) {
        uVar9 = uVar8;
        if ((int)uVar12 < (this->MaxDepthBuckets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        iVar3 = *(int *)(pFVar13 + 0x18);
        pFVar1 = pFVar13 + 0x18;
        if (*(FScriptContainerElement **)(pFVar13 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar13 + 0x10);
        }
        pFVar2 = pFVar13 + (longlong)iVar3 * 4;
        while( true ) {
          if (*(int *)pFVar1 != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar13 == pFVar2) break;
          iVar4 = *(int *)pFVar13;
          iVar5 = param_1->ArrayNum;
          uVar12 = *param_5;
          *param_5 = uVar12 + 1;
          uVar9 = uVar8;
          if ((int)uVar12 < iVar5) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar13 = pFVar13 + 4;
          param_1->DataPtr[(int)uVar12] = iVar4;
        }
      }
      local_58 = local_58 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

// InPlaceExtractZOrderCurveHelper @ 143608f50

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
::InPlaceExtractZOrderCurveHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
           *this,TArrayView<int,int> *param_1,FQuadTreeNode *param_2,int param_3,bool param_4,
          int *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  TArrayView<int,int> local_48;
  
  lVar14 = 0;
  uVar8 = 0;
  if (param_3 < this->MaxDepth) {
    if (param_2->Children[0] < -1) {
      lVar15 = 4;
      do {
        lVar11 = 3 - lVar14;
        if (!param_4) {
          lVar11 = lVar14;
        }
        uVar12 = -param_2->Children[lVar11] - 3;
        if (uVar12 != 0xffffffff) {
          uVar9 = uVar8;
          if ((int)uVar12 < (this->Nodes).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48.DataPtr = param_1->DataPtr;
          local_48.ArrayNum = param_1->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
          InPlaceExtractZOrderCurveHelper
                    (this,&local_48,
                     (FQuadTreeNode *)
                     ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10),
                     param_3 + 1,param_4,param_5);
        }
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      do {
        iVar3 = param_2->Children[lVar14];
        if (iVar3 == -1) {
          return;
        }
        iVar4 = *param_5;
        *param_5 = iVar4 + 1;
        piVar10 = TArrayView<int,int>::operator[](param_1,iVar4);
        lVar14 = lVar14 + 1;
        *piVar10 = iVar3;
      } while (lVar14 < 4);
    }
  }
  else {
    local_58 = 0;
    local_50 = 4;
    do {
      lVar14 = 3 - local_58;
      if (!param_4) {
        lVar14 = local_58;
      }
      uVar12 = param_2->Children[lVar14];
      if (uVar12 != 0xffffffff) {
        uVar9 = uVar8;
        if ((int)uVar12 < (this->MaxDepthBuckets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (this->MaxDepthBuckets).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        iVar3 = *(int *)(pFVar13 + 0x18);
        pFVar1 = pFVar13 + 0x18;
        if (*(FScriptContainerElement **)(pFVar13 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar13 + 0x10);
        }
        pFVar2 = pFVar13 + (longlong)iVar3 * 4;
        while( true ) {
          if (*(int *)pFVar1 != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar13 == pFVar2) break;
          iVar4 = *(int *)pFVar13;
          iVar5 = param_1->ArrayNum;
          uVar12 = *param_5;
          *param_5 = uVar12 + 1;
          uVar9 = uVar8;
          if ((int)uVar12 < iVar5) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar13 = pFVar13 + 4;
          param_1->DataPtr[(int)uVar12] = iVar4;
        }
      }
      local_58 = local_58 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}

// Init @ 143609570

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::Init(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
       *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
      TAxisAlignedBox3<float> *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  TVector<float> *pTVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  TVector<float> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38 [3];
  
  Reset(this);
  iVar6 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,(ForAnyElementType *)this,piVar1);
  }
  fVar10 = (param_2->Max).field0_0x0._s_0.X;
  fVar11 = (param_2->Min).field0_0x0._s_0.X;
  (this->Nodes).ArrayNum = iVar6 + 1;
  pFVar5 = (this->Nodes).AllocatorInstance.Data;
  lVar7 = (longlong)iVar6 * 0x20;
  *(undefined8 *)(pFVar5 + lVar7) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar5 + lVar7 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar5 + lVar7 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar5 + lVar7 + 0x18) = 0xffffffffffffffff;
  this->MaxDepth = param_3;
  if (((fVar10 < fVar11) ||
      (fVar12 = (param_2->Min).field0_0x0._s_0.Y, pfVar2 = &(param_2->Max).field0_0x0._s_0.Y,
      *pfVar2 <= fVar12 && fVar12 != *pfVar2)) ||
     (fVar12 = (param_2->Min).field0_0x0._s_0.Z, pfVar2 = &(param_2->Max).field0_0x0._s_0.Z,
     *pfVar2 <= fVar12 && fVar12 != *pfVar2)) {
    pTVar8 = param_1->DataPtr;
    pTVar3 = pTVar8 + param_1->ArrayNum;
    if (pTVar8 != pTVar3) {
      fVar12 = (param_2->Max).field0_0x0._s_0.Y;
      fVar13 = (param_2->Min).field0_0x0._s_0.Y;
      fVar14 = (param_2->Min).field0_0x0._s_0.Z;
      fVar15 = (param_2->Max).field0_0x0._s_0.Z;
      do {
        fVar4 = (pTVar8->field0_0x0)._s_0.X;
        if (fVar4 < fVar11) {
          (param_2->Min).field0_0x0._s_0.X = fVar4;
          fVar11 = fVar4;
        }
        if (fVar10 < fVar4) {
          (param_2->Max).field0_0x0._s_0.X = fVar4;
          fVar10 = fVar4;
        }
        fVar4 = (pTVar8->field0_0x0)._s_0.Y;
        if (fVar4 <= fVar13) {
          fVar13 = fVar4;
        }
        fVar4 = (pTVar8->field0_0x0)._s_0.Y;
        if (fVar12 <= fVar4) {
          fVar12 = fVar4;
        }
        fVar4 = (pTVar8->field0_0x0)._s_0.Z;
        if (fVar4 <= fVar14) {
          fVar14 = fVar4;
        }
        fVar4 = (pTVar8->field0_0x0)._s_0.Z;
        if (fVar15 <= fVar4) {
          fVar15 = fVar4;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != pTVar3);
      (param_2->Max).field0_0x0._s_0.Z = fVar15;
      (param_2->Min).field0_0x0._s_0.Z = fVar14;
      (param_2->Max).field0_0x0._s_0.Y = fVar12;
      (param_2->Min).field0_0x0._s_0.Y = fVar13;
    }
  }
  iVar6 = param_1->ArrayNum;
  iVar9 = 0;
  if (0 < iVar6) {
    do {
      local_38[0].DataPtr = param_1->DataPtr;
      local_38[0].ArrayNum = param_1->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      AddPointHelper(this,local_38,iVar9,param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar6);
  }
  return;
}

// Init @ 143609700

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::Init(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
       *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
      TAxisAlignedBox3<double> *param_2,int param_3)

{
  int *piVar1;
  double *pdVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  TVector<double> *pTVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  TArrayView<UE::Math::TVector<double>_const_,int> local_38 [3];
  
  Reset(this);
  iVar7 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,(ForAnyElementType *)this,piVar1);
  }
  dVar11 = (param_2->Max).field0_0x0._s_0.X;
  dVar12 = (param_2->Min).field0_0x0._s_0.X;
  (this->Nodes).ArrayNum = iVar7 + 1;
  pFVar6 = (this->Nodes).AllocatorInstance.Data;
  lVar8 = (longlong)iVar7 * 0x20;
  *(undefined8 *)(pFVar6 + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar6 + lVar8 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar6 + lVar8 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar6 + lVar8 + 0x18) = 0xffffffffffffffff;
  this->MaxDepth = param_3;
  if (((dVar11 < dVar12) ||
      (dVar13 = (param_2->Min).field0_0x0._s_0.Y, pdVar2 = &(param_2->Max).field0_0x0._s_0.Y,
      *pdVar2 <= dVar13 && dVar13 != *pdVar2)) ||
     (dVar13 = (param_2->Min).field0_0x0._s_0.Z, pdVar2 = &(param_2->Max).field0_0x0._s_0.Z,
     *pdVar2 <= dVar13 && dVar13 != *pdVar2)) {
    pTVar9 = param_1->DataPtr;
    pTVar3 = pTVar9 + param_1->ArrayNum;
    if (pTVar9 != pTVar3) {
      dVar13 = (param_2->Max).field0_0x0._s_0.Y;
      dVar14 = (param_2->Min).field0_0x0._s_0.Y;
      uVar4 = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
      uVar15 = (undefined4)uVar4;
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar4 = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 0x10);
      uVar17 = (undefined4)uVar4;
      uVar18 = (undefined4)((ulonglong)uVar4 >> 0x20);
      do {
        dVar5 = (pTVar9->field0_0x0)._s_0.X;
        if (dVar5 < dVar12) {
          (param_2->Min).field0_0x0._s_0.X = dVar5;
          dVar12 = dVar5;
        }
        if (dVar11 < dVar5) {
          (param_2->Max).field0_0x0._s_0.X = dVar5;
          dVar11 = dVar5;
        }
        dVar5 = (pTVar9->field0_0x0)._s_0.Y;
        if (dVar5 <= dVar14) {
          dVar14 = dVar5;
        }
        dVar5 = (pTVar9->field0_0x0)._s_0.Y;
        if (dVar13 <= dVar5) {
          dVar13 = dVar5;
        }
        dVar5 = *(double *)((longlong)&pTVar9->field0_0x0 + 0x10);
        if (dVar5 <= (double)CONCAT44(uVar16,uVar15)) {
          uVar15 = SUB84(dVar5,0);
          uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)((longlong)&pTVar9->field0_0x0 + 0x10);
        if ((double)CONCAT44(uVar18,uVar17) <= dVar5) {
          uVar17 = SUB84(dVar5,0);
          uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        pTVar9 = pTVar9 + 1;
      } while (pTVar9 != pTVar3);
      (param_2->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
      (param_2->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar16,uVar15);
      (param_2->Max).field0_0x0._s_0.Y = dVar13;
      (param_2->Min).field0_0x0._s_0.Y = dVar14;
    }
  }
  iVar7 = param_1->ArrayNum;
  iVar10 = 0;
  if (0 < iVar7) {
    do {
      local_38[0].DataPtr = param_1->DataPtr;
      local_38[0].ArrayNum = param_1->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      AddPointHelper(this,local_38,iVar10,param_2);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
  }
  return;
}

// PlaceInMaxDepthBucketHelper @ 143613980

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::PlaceInMaxDepthBucketHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
           *this,int param_1,TVector<float> *param_2,FOctreeNode *param_3,TVector<float> *param_4)

{
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int local_res10 [2];
  
  pTVar1 = &this->MaxDepthBuckets;
  iVar7 = 0;
  if ((param_4->field0_0x0)._s_0.Z < (param_2->field0_0x0)._s_0.Z) {
    iVar7 = 4;
  }
  uVar6 = 0;
  if ((param_4->field0_0x0)._s_0.Y < (param_2->field0_0x0)._s_0.Y) {
    uVar6 = 2;
  }
  uVar11 = iVar7 + uVar6 + (uint)((param_4->field0_0x0)._s_0.X < (param_2->field0_0x0)._s_0.X);
  uVar6 = param_3->Children[uVar11];
  local_res10[0] = param_1;
  if (uVar6 == 0xffffffff) {
    uVar6 = (this->MaxDepthBuckets).ArrayNum;
    piVar2 = &(this->MaxDepthBuckets).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->MaxDepthBuckets).ArrayNum = uVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar6 * 0x20;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x1c) = 4;
    param_3->Children[uVar11] = uVar6;
  }
  uVar11 = 0;
  if ((int)uVar6 < (this->MaxDepthBuckets).ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if (uVar11 == 0) {
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
  FVar10 = (ForElementType<int>)
           ((longlong)(int)uVar6 * 0x20 + (longlong)(pTVar1->AllocatorInstance).Data);
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  if (((ulonglong)FVar8 <= local_res10) &&
     (local_res10 < (int *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar10 + 0x1c) * 4))) {
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
  iVar7 = *(int *)((longlong)FVar10 + 0x18);
  if (iVar7 == *(int *)((longlong)FVar10 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar10,(int *)((longlong)FVar10 + 0x1c));
  }
  *(int *)((longlong)FVar10 + 0x18) = iVar7 + 1;
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// PlaceInMaxDepthBucketHelper @ 143613b50

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::PlaceInMaxDepthBucketHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
           *this,int param_1,TVector<double> *param_2,FOctreeNode *param_3,TVector<double> *param_4)

{
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int local_res10 [2];
  
  pTVar1 = &this->MaxDepthBuckets;
  iVar7 = 0;
  if ((param_4->field0_0x0)._s_0.Z < (param_2->field0_0x0)._s_0.Z) {
    iVar7 = 4;
  }
  uVar6 = 0;
  if ((param_4->field0_0x0)._s_0.Y < (param_2->field0_0x0)._s_0.Y) {
    uVar6 = 2;
  }
  uVar11 = iVar7 + uVar6 + (uint)((param_4->field0_0x0)._s_0.X < (param_2->field0_0x0)._s_0.X);
  uVar6 = param_3->Children[uVar11];
  local_res10[0] = param_1;
  if (uVar6 == 0xffffffff) {
    uVar6 = (this->MaxDepthBuckets).ArrayNum;
    piVar2 = &(this->MaxDepthBuckets).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->MaxDepthBuckets).ArrayNum = uVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar6 * 0x20;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x1c) = 4;
    param_3->Children[uVar11] = uVar6;
  }
  uVar11 = 0;
  if ((int)uVar6 < (this->MaxDepthBuckets).ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if (uVar11 == 0) {
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
  FVar10 = (ForElementType<int>)
           ((longlong)(int)uVar6 * 0x20 + (longlong)(pTVar1->AllocatorInstance).Data);
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  if (((ulonglong)FVar8 <= local_res10) &&
     (local_res10 < (int *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar10 + 0x1c) * 4))) {
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
  iVar7 = *(int *)((longlong)FVar10 + 0x18);
  if (iVar7 == *(int *)((longlong)FVar10 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar10,(int *)((longlong)FVar10 + 0x1c));
  }
  *(int *)((longlong)FVar10 + 0x18) = iVar7 + 1;
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// PlaceInMaxDepthBucketHelper @ 143613d20

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
::PlaceInMaxDepthBucketHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
           *this,int param_1,TVector2<float> *param_2,FQuadTreeNode *param_3,
          TVector2<float> *param_4)

{
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int local_res10 [2];
  
  pTVar1 = &this->MaxDepthBuckets;
  iVar7 = 0;
  if ((param_4->field0_0x0)._s_0.Y < (param_2->field0_0x0)._s_0.Y) {
    iVar7 = 2;
  }
  uVar11 = iVar7 + (uint)((param_4->field0_0x0)._s_0.X < (param_2->field0_0x0)._s_0.X);
  uVar6 = param_3->Children[uVar11];
  local_res10[0] = param_1;
  if (uVar6 == 0xffffffff) {
    uVar6 = (this->MaxDepthBuckets).ArrayNum;
    piVar2 = &(this->MaxDepthBuckets).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->MaxDepthBuckets).ArrayNum = uVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar6 * 0x20;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x1c) = 4;
    param_3->Children[uVar11] = uVar6;
  }
  uVar11 = 0;
  if ((int)uVar6 < (this->MaxDepthBuckets).ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if (uVar11 == 0) {
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
  FVar10 = (ForElementType<int>)
           ((longlong)(int)uVar6 * 0x20 + (longlong)(pTVar1->AllocatorInstance).Data);
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  if (((ulonglong)FVar8 <= local_res10) &&
     (local_res10 < (int *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar10 + 0x1c) * 4))) {
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
  iVar7 = *(int *)((longlong)FVar10 + 0x18);
  if (iVar7 == *(int *)((longlong)FVar10 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar10,(int *)((longlong)FVar10 + 0x1c));
  }
  *(int *)((longlong)FVar10 + 0x18) = iVar7 + 1;
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// PlaceInMaxDepthBucketHelper @ 143613ed0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
::PlaceInMaxDepthBucketHelper
          (TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
           *this,int param_1,TVector2<double> *param_2,FQuadTreeNode *param_3,
          TVector2<double> *param_4)

{
  TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  int local_res10 [2];
  
  pTVar1 = &this->MaxDepthBuckets;
  iVar7 = 0;
  if ((param_4->field0_0x0)._s_0.Y < (param_2->field0_0x0)._s_0.Y) {
    iVar7 = 2;
  }
  uVar11 = iVar7 + (uint)((param_4->field0_0x0)._s_0.X < (param_2->field0_0x0)._s_0.X);
  uVar6 = param_3->Children[uVar11];
  local_res10[0] = param_1;
  if (uVar6 == 0xffffffff) {
    uVar6 = (this->MaxDepthBuckets).ArrayNum;
    piVar2 = &(this->MaxDepthBuckets).ArrayMax;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->MaxDepthBuckets).ArrayNum = uVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar6 * 0x20;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x1c) = 4;
    param_3->Children[uVar11] = uVar6;
  }
  uVar11 = 0;
  if ((int)uVar6 < (this->MaxDepthBuckets).ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if (uVar11 == 0) {
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
  FVar10 = (ForElementType<int>)
           ((longlong)(int)uVar6 * 0x20 + (longlong)(pTVar1->AllocatorInstance).Data);
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  if (((ulonglong)FVar8 <= local_res10) &&
     (local_res10 < (int *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar10 + 0x1c) * 4))) {
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
  iVar7 = *(int *)((longlong)FVar10 + 0x18);
  if (iVar7 == *(int *)((longlong)FVar10 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar10,(int *)((longlong)FVar10 + 0x1c));
  }
  *(int *)((longlong)FVar10 + 0x18) = iVar7 + 1;
  FVar8 = *(ForElementType<int> *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<int> *)((longlong)FVar10 + 0x10) == (ForElementType<int>)0x0) {
    FVar8 = FVar10;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res10[0];
  return;
}

// Reset @ 1436182f0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
::Reset(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
        *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  piVar1 = &(this->MaxDepthBuckets).ArrayMax;
  pTVar3 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
           (this->MaxDepthBuckets).AllocatorInstance.Data;
  iVar2 = (this->MaxDepthBuckets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->MaxDepthBuckets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
  }
  this->Num = 0;
  return;
}

// Reset @ 1436183a0

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
::Reset(TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
        *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  piVar1 = &(this->MaxDepthBuckets).ArrayMax;
  pTVar3 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
           (this->MaxDepthBuckets).AllocatorInstance.Data;
  iVar2 = (this->MaxDepthBuckets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->MaxDepthBuckets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
  }
  this->Num = 0;
  return;
}

// Reset @ 143618450

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
::Reset(TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
        *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  piVar1 = &(this->MaxDepthBuckets).ArrayMax;
  pTVar3 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
           (this->MaxDepthBuckets).AllocatorInstance.Data;
  iVar2 = (this->MaxDepthBuckets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->MaxDepthBuckets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
  }
  this->Num = 0;
  return;
}

// Reset @ 143618500

void __thiscall
ZOrderCurvePointsLocal::
TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
::Reset(TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
        *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  piVar1 = &(this->MaxDepthBuckets).ArrayMax;
  pTVar3 = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
           (this->MaxDepthBuckets).AllocatorInstance.Data;
  iVar2 = (this->MaxDepthBuckets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->MaxDepthBuckets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar3,iVar2);
    (this->MaxDepthBuckets).ArrayNum = 0;
  }
  this->Num = 0;
  return;
}

