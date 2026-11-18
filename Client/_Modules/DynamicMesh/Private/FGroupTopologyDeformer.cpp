// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 13

// operator() @ 14c6e7580

void __thiscall
`UE::Geometry::FGroupTopologyDeformer::CalculateROI'::__l2::<lambda_1>::operator()
          (void *this,FGroupEdge *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForAnyElementType *pFVar16;
  uint *puVar17;
  int *piVar18;
  int *piVar19;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  FScriptContainerElement local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  piVar19 = (int *)**(undefined8 **)((longlong)this + 8);
  piVar1 = piVar19 + *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (piVar19 != piVar1) {
    piVar18 = piVar19;
    do {
      if (*piVar18 == (param_1->Groups).field0_0x0._s_0.A) {
        return;
      }
      piVar18 = piVar18 + 1;
    } while (piVar18 != piVar1);
    do {
      if (*piVar19 == (param_1->Groups).field0_0x0._s_0.B) {
        return;
      }
      piVar19 = piVar19 + 1;
    } while (piVar19 != piVar1);
  }
  lVar12 = *(longlong *)this;
  pFVar14 = (param_1->Span).Vertices.AllocatorInstance.Data;
  iVar8 = (param_1->Span).Vertices.ArrayNum;
  pFVar10 = pFVar14 + (longlong)iVar8 * 4;
  do {
    if ((param_1->Span).Vertices.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar10) {
      pFVar14 = (param_1->Span).Vertices.AllocatorInstance.Data;
      iVar8 = (param_1->Span).Vertices.ArrayNum;
      pFVar10 = pFVar14 + (longlong)iVar8 * 4;
      while( true ) {
        if ((param_1->Span).Vertices.ArrayNum != iVar8) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_98);
        }
        if (pFVar14 == pFVar10) break;
        local_44 = *(undefined4 *)pFVar14;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (*(longlong *)this + 0x128),&local_3c,(bool *)&local_44);
        pFVar14 = pFVar14 + 4;
      }
      return;
    }
    if (*(int *)(lVar12 + 0xe0) != *(int *)(lVar12 + 0x10c)) {
      lVar15 = lVar12 + 0x110;
      if (*(longlong *)(lVar12 + 0x118) != 0) {
        lVar15 = *(longlong *)(lVar12 + 0x118);
      }
      iVar6 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar12 + 0x120) - 1U & *(uint *)pFVar14) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar12 + 0xd8) + (longlong)iVar6 * 0xc) == *(uint *)pFVar14) {
            pFVar14 = (param_1->Span).Vertices.AllocatorInstance.Data;
            iVar8 = (param_1->Span).Vertices.ArrayNum;
            pFVar10 = pFVar14 + (longlong)iVar8 * 4;
            while( true ) {
              if ((param_1->Span).Vertices.ArrayNum != iVar8) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (pFVar14 == pFVar10) break;
              local_48 = *(undefined4 *)pFVar14;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         (*(longlong *)this + 0x178),&local_40,(bool *)&local_48);
              pFVar14 = pFVar14 + 4;
            }
            lVar12 = *(longlong *)this;
            lVar15 = 0;
            pFVar16 = (ForAnyElementType *)(lVar12 + 0x2b8);
            local_90 = 0;
            local_4f = 0;
            local_4b = 0;
            local_49 = 0;
            local_80 = (void *)0x0;
            local_78 = 0;
            local_70 = (void *)0x0;
            local_68 = 0;
            local_60 = (void *)0x0;
            local_58 = 0;
            local_50 = (FScriptContainerElement)0x0;
            local_88 = 0;
            if (((pFVar16->Data <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 <
                 pFVar16->Data + (longlong)*(int *)(lVar12 + 0x2c4) * 0x48)) &&
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
            uVar7 = *(uint *)(lVar12 + 0x2c0);
            if (uVar7 == *(uint *)(lVar12 + 0x2c4)) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x848,pFVar16,(int *)(lVar12 + 0x2c4));
            }
            pFVar10 = pFVar16->Data;
            *(uint *)(lVar12 + 0x2c0) = uVar7 + 1;
            pFVar10 = pFVar10 + (longlong)(int)uVar7 * 0x48;
            *(undefined4 *)pFVar10 = (undefined4)local_90;
            *(undefined8 *)(pFVar10 + 8) = local_88;
            *(undefined8 *)(pFVar10 + 0x10) = 0;
            *(void **)(pFVar10 + 0x10) = local_80;
            local_80 = (void *)0x0;
            *(undefined4 *)(pFVar10 + 0x18) = (undefined4)local_78;
            *(undefined4 *)(pFVar10 + 0x1c) = local_78._4_4_;
            local_78 = 0;
            *(undefined8 *)(pFVar10 + 0x20) = 0;
            *(void **)(pFVar10 + 0x20) = local_70;
            local_70 = (void *)0x0;
            *(undefined4 *)(pFVar10 + 0x28) = (undefined4)local_68;
            *(undefined4 *)(pFVar10 + 0x2c) = local_68._4_4_;
            local_68 = 0;
            *(undefined8 *)(pFVar10 + 0x30) = 0;
            *(void **)(pFVar10 + 0x30) = local_60;
            local_60 = (void *)0x0;
            *(undefined4 *)(pFVar10 + 0x38) = (undefined4)local_58;
            *(undefined4 *)(pFVar10 + 0x3c) = local_58._4_4_;
            local_58 = 0;
            pFVar10[0x40] = local_50;
            uVar9 = 0;
            if ((int)uVar7 < *(int *)(lVar12 + 0x2c0)) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = pFVar16->Data + (longlong)(int)uVar7 * 0x48;
            if (local_60 != (void *)0x0) {
              FMemory::Free(local_60);
            }
            if (local_70 != (void *)0x0) {
              FMemory::Free(local_70);
            }
            if (local_80 != (void *)0x0) {
              FMemory::Free(local_80);
            }
            *(int *)pFVar10 = param_2;
            *(FDynamicMesh3 **)(pFVar10 + 8) = (param_1->Span).Mesh;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x10),
                       &(param_1->Span).Vertices);
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x20),
                       &(param_1->Span).Edges);
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x30),
                       &(param_1->Span).BowtieVertices);
            pFVar10[0x40] = (FScriptContainerElement)(param_1->Span).bBowtiesCalculated;
            lVar12 = *(longlong *)this;
            if ((*(int *)(pFVar10 + 0x18) < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar3 = *(uint **)(pFVar10 + 0x10);
            if (*(int *)(lVar12 + 0xe0) != *(int *)(lVar12 + 0x10c)) {
              lVar11 = *(longlong *)(lVar12 + 0x118);
              if (*(longlong *)(lVar12 + 0x118) == 0) {
                lVar11 = lVar12 + 0x110;
              }
              iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar12 + 0x120) - 1U & *puVar3) * 4);
              if (iVar8 != -1) {
                do {
                  if (*(uint *)(*(longlong *)(lVar12 + 0xd8) + (longlong)iVar8 * 0xc) == *puVar3) {
                    return;
                  }
                  iVar8 = *(int *)(*(longlong *)(lVar12 + 0xd8) + 4 + (longlong)iVar8 * 0xc);
                } while (iVar8 != -1);
              }
            }
            iVar8 = *(int *)(pFVar10 + 0x18) / 2;
            if (0 < iVar8) {
              lVar12 = lVar15;
              puVar17 = puVar3 + (*(int *)(pFVar10 + 0x18) + -1);
              do {
                uVar7 = puVar3[lVar12];
                puVar3[lVar12] = *puVar17;
                lVar12 = lVar12 + 1;
                *puVar17 = uVar7;
                puVar17 = puVar17 + -1;
              } while (lVar12 < iVar8);
            }
            lVar12 = *(longlong *)(pFVar10 + 0x20);
            iVar8 = *(int *)(pFVar10 + 0x28) / 2;
            if (iVar8 < 1) {
              return;
            }
            puVar13 = (undefined4 *)(lVar12 + (longlong)(*(int *)(pFVar10 + 0x28) + -1) * 4);
            do {
              uVar2 = *(undefined4 *)(lVar12 + lVar15 * 4);
              *(undefined4 *)(lVar12 + lVar15 * 4) = *puVar13;
              lVar15 = lVar15 + 1;
              *puVar13 = uVar2;
              puVar13 = puVar13 + -1;
            } while (lVar15 < iVar8);
            return;
          }
          iVar6 = *(int *)(*(longlong *)(lVar12 + 0xd8) + 4 + (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
    }
    pFVar14 = pFVar14 + 4;
  } while( true );
}

// operator() @ 14c6ebef0

void __thiscall
`UE::Geometry::FGroupTopologyDeformer::UpdateSolution'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  atomic<unsigned_char> *this_00;
  double *pdVar1;
  undefined4 *puVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  short sVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint local_res10;
  longlong local_118;
  double local_e0;
  
  lVar12 = *(longlong *)this;
  uVar24 = 0;
  if (param_1 < *(int *)(lVar12 + 0x2d0)) {
    uVar24 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar12 = *(longlong *)(lVar12 + 0x2c8);
  lVar30 = *(longlong *)this;
  lVar31 = (longlong)param_1 * 0x20;
  uVar24 = 0;
  if (param_1 < *(int *)(lVar30 + 0x2f0)) {
    uVar24 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar22 = (longlong)*(int *)(lVar31 + 0x18 + lVar12);
  lVar29 = (longlong)*(int *)(lVar31 + 8 + lVar12);
  plVar25 = (longlong *)((longlong)param_1 * 0x10 + *(longlong *)(lVar30 + 0x2e8));
  local_res10 = 0;
  if (0 < lVar22) {
    lVar30 = 0;
    local_118 = 0;
    do {
      uVar24 = 0;
      if ((int)local_res10 < (int)plVar25[1]) {
        uVar24 = ~local_res10 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar13 = *plVar25;
      lVar27 = 0;
      uVar24 = 0;
      local_e0 = 0.0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      dVar16 = 0.0;
      if (lVar29 < 1) {
        dVar6 = 0.0;
        dVar5 = 0.0;
      }
      else {
        dVar5 = 0.0;
        lVar26 = 0;
        dVar6 = 0.0;
        do {
          uVar28 = ~uVar24 >> 0x1f;
          lVar14 = **(longlong **)((longlong)this + 8);
          uVar21 = 0;
          if ((int)uVar24 < *(int *)(lVar12 + 8 + lVar31)) {
            uVar21 = uVar28;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar21 = *(uint *)(*(longlong *)(lVar12 + lVar31) + lVar27 * 4);
          uVar23 = (ulonglong)(uVar21 & 0x1ff);
          lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)(uVar21 >> 9) * 8);
          pdVar1 = (double *)(lVar14 + uVar23 * 0x18);
          dVar17 = *pdVar1;
          dVar18 = pdVar1[1];
          dVar7 = *(double *)(lVar14 + 0x10 + uVar23 * 0x18);
          uVar21 = 0;
          if ((int)uVar24 < *(int *)(lVar30 + 0x18 + lVar13)) {
            uVar21 = uVar28;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar14 = *(longlong *)(lVar30 + 0x10 + lVar13);
          dVar8 = *(double *)(lVar14 + lVar26);
          dVar9 = *(double *)(lVar14 + 8 + lVar26);
          dVar10 = *(double *)(lVar14 + 0x10 + lVar26);
          uVar21 = 0;
          if ((int)uVar24 < *(int *)(lVar30 + 8 + lVar13)) {
            uVar21 = uVar28;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar24 = uVar24 + 1;
          lVar26 = lVar26 + 0x18;
          dVar11 = *(double *)(*(longlong *)(lVar30 + lVar13) + lVar27 * 8);
          lVar27 = lVar27 + 1;
          dVar16 = dVar16 + dVar11 * (dVar7 + dVar10);
          uVar34 = SUB84(dVar16,0);
          dVar6 = dVar6 + dVar11 * (dVar17 + dVar8);
          uVar32 = SUB84(dVar6,0);
          dVar5 = dVar5 + dVar11 * (dVar18 + dVar9);
          uVar33 = SUB84(dVar5,0);
          local_e0 = dVar16;
        } while (lVar27 < lVar29);
      }
      lVar13 = **(longlong **)((longlong)this + 8);
      uVar24 = 0;
      if ((int)local_res10 < *(int *)(lVar31 + 0x18 + lVar12)) {
        uVar24 = ~local_res10 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar24 = *(uint *)(*(longlong *)(lVar31 + 0x10 + lVar12) + local_118 * 4);
      sVar20 = _dclass(SUB84(dVar6,0));
      if (((sVar20 < 1) && (sVar20 = _dclass(SUB84(dVar5,0)), sVar20 < 1)) &&
         (sVar20 = _dclass(uVar34), sVar20 < 1)) {
        uVar23 = (ulonglong)(uVar24 & 0x1ff);
        lVar27 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar24 >> 9) * 8);
        puVar2 = (undefined4 *)(lVar27 + uVar23 * 0x18);
        *puVar2 = uVar32;
        puVar2[1] = (int)((ulonglong)dVar6 >> 0x20);
        puVar2[2] = uVar33;
        puVar2[3] = (int)((ulonglong)dVar5 >> 0x20);
        *(double *)(lVar27 + 0x10 + uVar23 * 0x18) = local_e0;
        if (*(char *)(lVar13 + 0x21c) != '\0') {
          this_00 = (atomic<unsigned_char> *)(lVar13 + 0x21d);
          LOCK();
          FVar3.State = *this_00;
          if (FVar3.State == (atomic<unsigned_char>)0x0) {
            *this_00 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar3.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)this_00);
          }
          *(int *)(lVar13 + 0x220) = *(int *)(lVar13 + 0x220) + 1;
          LOCK();
          aVar4 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)this_00);
          }
        }
      }
      local_res10 = local_res10 + 1;
      local_118 = local_118 + 1;
      lVar30 = lVar30 + 0x20;
    } while (local_118 < lVar22);
  }
  return;
}

// CalculateROI @ 14c7190a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FGroupTopologyDeformer::CalculateROI
          (FGroupTopologyDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Geometry::FGroupTopologyDeformer::FROIFace,TSizedDefaultAllocator<32>_> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  FSmallListSet *pFVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  FDynamicMeshAttributeSet *pFVar5;
  code *pcVar6;
  FGroupTopologyDeformer *pFVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_468 [32];
  undefined1 local_418;
  undefined1 local_417 [3];
  uint local_414;
  uint local_410;
  undefined1 local_40c [4];
  uint local_408;
  uint local_404;
  ulonglong local_400;
  FGroupTopologyDeformer *local_3f8;
  int local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3e0;
  int iStack_3d8;
  uint uStack_3d4;
  undefined1 *local_3d0;
  undefined4 uStack_3c8;
  int iStack_3c4;
  int local_3c0;
  undefined4 uStack_3bc;
  int iStack_3b8;
  undefined4 uStack_3b4;
  FScriptContainerElement *local_3b0;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_390;
  int *local_388;
  FScriptContainerElement *local_380;
  int local_378;
  FSmallListSet *local_370;
  int iStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  uint uStack_35c;
  undefined8 uStack_358;
  undefined8 local_350;
  int local_348;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  code *local_2d8 [2];
  undefined **local_2c8;
  FDynamicMesh3 *local_2c0;
  int local_2b8;
  undefined ***local_2b0;
  <lambda_1> local_2a8 [2];
  BaseValueIterator local_288;
  undefined4 local_244;
  undefined1 local_238 [40];
  longlong *local_210;
  FSmallListSet *local_208;
  ulonglong uStack_200;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  FSmallListSet *local_1e0;
  ulonglong uStack_1d8;
  longlong local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [144];
  undefined1 local_128 [144];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  uVar21 = param_2->ArrayNum * 5;
  local_3f8 = this;
  local_390 = param_2;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar27 = &(this->ROIEdges).ArrayMax;
  if (*piVar27 < (int)uVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar21,&(this->ROIEdges).AllocatorInstance,(this->ROIEdges).ArrayNum,piVar27);
  }
  local_2a8[0].__this = this;
  local_2a8[0].HandleGroups = param_1;
  FGroupTopology::
  ForGroupSetEdges<TArray<int,TSizedDefaultAllocator<32>_>,_UE::Geometry::FGroupTopologyDeformer::CalculateROI_::__l2::<lambda_1>_>
            (this->Topology,param_2,local_2a8);
  uVar21 = param_2->ArrayNum;
  this_00 = &this->ROIFaces;
  iVar19 = (this->ROIFaces).ArrayNum;
  piVar27 = &(this->ROIFaces).ArrayNum;
  local_388 = piVar27;
  if (iVar19 < (int)uVar21) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,uVar21 - iVar19,&this_00->AllocatorInstance,piVar27,
                        &(this->ROIFaces).ArrayMax);
    DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x20,uVar21 - iVar19);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar19) {
      uVar23 = iVar19 - uVar21;
      if (((int)(uVar23 | uVar21) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar23 != 0) {
        TArray<UE::Geometry::FGroupTopologyDeformer::FROIFace,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar21,uVar23);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this_00->AllocatorInstance,*piVar27,&(this->ROIFaces).ArrayMax);
      }
    }
  }
  local_404 = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)local_404;
  pFVar28 = (param_2->AllocatorInstance).Data;
  local_400 = CONCAT44(local_400._4_4_,1);
  local_380 = pFVar28 + uVar13 * 4;
  uVar21 = 0;
  while( true ) {
    pFVar20 = local_380;
    local_3b0 = pFVar28;
    if (param_2->ArrayNum != (int)uVar13) {
      local_418 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_418);
    }
    if (pFVar28 == pFVar20) break;
    iVar19 = *(int *)pFVar28;
    pTVar1 = &this->FaceVertsTemp;
    if (*(int *)&(this->FaceVertsTemp).Elements.field_0x8 !=
        *(int *)&(this->FaceVertsTemp).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar1);
      iVar10 = *(int *)&(this->FaceVertsTemp).Elements.field_0xc;
      *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x8 = 0;
      if (iVar10 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)pTVar1,0,
                   (int *)&(this->FaceVertsTemp).Elements.field_0xc);
      }
      *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->FaceVertsTemp).Elements.field_0x28 = 0;
    }
    pTVar11 = &this->FaceBoundaryVertsTemp;
    if (*(int *)&(this->FaceBoundaryVertsTemp).Elements.field_0x8 !=
        *(int *)&(this->FaceBoundaryVertsTemp).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar11);
      iVar10 = *(int *)&(this->FaceBoundaryVertsTemp).Elements.field_0xc;
      *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x8 = 0;
      if (iVar10 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)pTVar11,0,
                   (int *)&(this->FaceBoundaryVertsTemp).Elements.field_0xc);
      }
      *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->FaceBoundaryVertsTemp).Elements.field_0x28 = 0;
    }
    FGroupTopology::CollectGroupVertices(this->Topology,iVar19,pTVar1);
    FGroupTopology::CollectGroupBoundaryVertices(this->Topology,iVar19,pTVar11);
    uVar23 = 0;
    if ((int)uVar21 < *piVar27) {
      uVar23 = ~uVar21 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = *(int *)&(this->FaceVertsTemp).Elements.field_0x28;
    local_408 = uVar21 + 1;
    iStack_3d8 = 0;
    pFVar28 = (this->ROIFaces).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x20;
    local_3c0 = 0;
    iStack_3c4 = 0;
    uStack_3d4 = (uint)local_400;
    if (iVar19 != 0) {
      puVar26 = *(uint **)&(this->FaceVertsTemp).Elements.field_0x20;
      puVar25 = (uint *)&(this->FaceVertsTemp).Elements.field_0x10;
      if (puVar26 != (uint *)0x0) {
        puVar25 = puVar26;
      }
      uVar21 = *puVar25;
      while (uVar21 == 0) {
        lVar14 = (longlong)iStack_3d8;
        local_3c0 = local_3c0 + 0x20;
        iStack_3d8 = iStack_3d8 + 1;
        iStack_3c4 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3d8)
        goto LAB_14c71942d;
        uVar21 = puVar25[lVar14 + 1];
      }
      uStack_3d4 = -uVar21 & uVar21;
      uVar13 = (ulonglong)uStack_3d4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_378 = (int)lVar14;
      iStack_3c4 = local_3c0 + -1 + local_378;
      if (iVar19 < iStack_3c4) {
        iStack_3c4 = iVar19;
      }
    }
LAB_14c71942d:
    local_414 = *(uint *)&(this->FaceVertsTemp).Elements.field_0x28;
    local_3d0 = &(this->FaceVertsTemp).Elements.field_0x10;
    uStack_3bc = local_244;
    iStack_3b8 = *(int *)&(this->FaceVertsTemp).Elements.field_0x8 -
                 *(int *)&(this->FaceVertsTemp).Elements.field_0x34;
    uStack_3c8 = 0xffffffff;
    uVar21 = local_414 & 0xffffffe0;
    TStack_338._padding_ = CONCAT44(uStack_3d4,iStack_3d8);
    TStack_338.CurrentBitIndex = iStack_3c4;
    TStack_338.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)local_414 >> 5;
    TStack_338._28_4_ = local_244;
    TStack_338.BaseBitIndex = local_3c0;
    uStack_318 = CONCAT44(uStack_3b4,iStack_3b8);
    bVar12 = (byte)local_414;
    local_3e0 = pTVar1;
    local_340 = pTVar1;
    TStack_338.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3d0;
    if (((int)local_414 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar23 = *(uint *)&(this->FaceVertsTemp).Elements.field_0x28;
    uVar22 = local_414;
    if (local_414 != uVar23) {
      puVar3 = *(undefined1 **)&(this->FaceVertsTemp).Elements.field_0x20;
      puVar24 = &(this->FaceVertsTemp).Elements.field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar24 = puVar3;
      }
      uVar22 = -1 << (bVar12 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
      while (uVar22 == 0) {
        lVar14 = (longlong)iVar19;
        uVar21 = uVar21 + 0x20;
        iVar19 = iVar19 + 1;
        local_414 = uVar23;
        uVar22 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14c719560;
        uVar22 = *(uint *)(puVar24 + lVar14 * 4 + 4);
      }
      uVar13 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_348 = (int)lVar14;
      local_414 = (uVar21 - 1) + local_348;
      uVar22 = local_414;
      if ((int)uVar23 < (int)local_414) {
        local_414 = uVar23;
        uVar22 = uVar23;
      }
    }
LAB_14c719560:
    while( true ) {
      pTVar8 = local_340;
      if (*(int *)&(local_340->Elements).field_0x8 - *(int *)&(local_340->Elements).field_0x34 !=
          (int)uStack_318) {
        local_417[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_417);
      }
      if (((TStack_338.CurrentBitIndex == uVar22) &&
          (TStack_338.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->FaceVertsTemp).Elements.field_0x10)) &&
         (pTVar8 == pTVar1)) break;
      local_410 = *(uint *)(*(longlong *)&pTVar8->Elements +
                           (longlong)TStack_338.CurrentBitIndex * 0xc);
      if (*(int *)&(this->FaceBoundaryVertsTemp).Elements.field_0x8 !=
          *(int *)&(this->FaceBoundaryVertsTemp).Elements.field_0x34) {
        FVar4 = (this->FaceBoundaryVertsTemp).Hash.SecondaryData;
        FVar18 = (ForElementType<FSetElementId>)&(this->FaceBoundaryVertsTemp).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar18 = FVar4;
        }
        iVar19 = *(int *)((longlong)FVar18 +
                         (ulonglong)((this->FaceBoundaryVertsTemp).HashSize - 1U & local_410) * 4);
        if (iVar19 != -1) {
          do {
            pFVar20 = pFVar28;
            if (*(uint *)(*(longlong *)&pTVar11->Elements + (longlong)iVar19 * 0xc) == local_410)
            goto LAB_14c7195ff;
            iVar19 = *(int *)(*(longlong *)&pTVar11->Elements + 4 + (longlong)iVar19 * 0xc);
          } while (iVar19 != -1);
        }
      }
      pFVar20 = pFVar28 + 0x10;
LAB_14c7195ff:
      if (((*(uint **)&pFVar20->field_0x0 <= &local_410) &&
          (&local_410 < *(uint **)&pFVar20->field_0x0 + *(int *)(pFVar20 + 0xc))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = *(int *)&pFVar20[8].field_0x0;
      if (iVar19 == *(int *)(pFVar20 + 0xc)) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
      }
      *(int *)&pFVar20[8].field_0x0 = iVar19 + 1;
      *(uint *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar19 * 4) = local_410;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->ModifiedVertices,&local_3a8,(bool *)&local_410);
      TStack_338.UnvisitedBitMask = TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
    }
    pFVar28 = local_3b0 + 4;
    uVar13 = (ulonglong)local_404;
    piVar27 = local_388;
    param_2 = local_390;
    uVar21 = local_408;
  }
  pFVar5 = (this->Mesh->AttributeSet).Ptr;
  if (((pFVar5 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar5->NormalLayers).Array.ArrayNum))
     && (pFVar28 = (pFVar5->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar28 != 0))
  {
    iVar19 = *(int *)&(this->ModifiedVertices).Elements.field_0x28;
    puVar3 = &(this->ModifiedVertices).Elements.field_0x10;
    lVar14 = *(longlong *)pFVar28;
    pTVar1 = &this->ModifiedVertices;
    iStack_3d8 = 0;
    local_3c0 = 0;
    iStack_3c4 = 0;
    if (iVar19 != 0) {
      puVar26 = *(uint **)&(this->ModifiedVertices).Elements.field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar3;
      }
      uVar21 = *puVar26;
      while (uVar21 == 0) {
        lVar15 = (longlong)iStack_3d8;
        local_3c0 = local_3c0 + 0x20;
        iStack_3d8 = iStack_3d8 + 1;
        iStack_3c4 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3d8)
        goto LAB_14c7197a0;
        uVar21 = puVar26[lVar15 + 1];
      }
      local_400 = (ulonglong)(-uVar21 & uVar21);
      uVar13 = local_400 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_3a4 = (int)lVar15;
      iStack_3c4 = local_3a4 + -1 + local_3c0;
      if (iVar19 < iStack_3c4) {
        iStack_3c4 = iVar19;
      }
    }
LAB_14c7197a0:
    uStack_3d4 = (uint)local_400;
    uStack_3bc = uStack_358._4_4_;
    iStack_3b8 = *(int *)&(this->ModifiedVertices).Elements.field_0x8 -
                 *(int *)&(this->ModifiedVertices).Elements.field_0x34;
    uVar21 = *(uint *)&(this->ModifiedVertices).Elements.field_0x28;
    uStack_3c8 = 0xffffffff;
    uVar23 = uVar21 & 0xffffffe0;
    TStack_308._padding_ = CONCAT44(uStack_3d4,iStack_3d8);
    TStack_308.CurrentBitIndex = iStack_3c4;
    TStack_308.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar21 >> 5;
    TStack_308._28_4_ = uStack_358._4_4_;
    TStack_308.BaseBitIndex = local_3c0;
    uStack_2e8 = CONCAT44(uStack_3b4,iStack_3b8);
    local_3e0 = pTVar1;
    local_3d0 = puVar3;
    local_310 = pTVar1;
    TStack_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if (((int)uVar21 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar22 = *(uint *)&(this->ModifiedVertices).Elements.field_0x28;
    if (uVar21 != uVar22) {
      puVar24 = *(undefined1 **)&(this->ModifiedVertices).Elements.field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar3;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar15 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14c71989f;
        uVar21 = *(uint *)(puVar24 + lVar15 * 4 + 4);
      }
      uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar21 = (int)lVar15 + -1 + uVar23;
      if ((int)uVar22 < (int)uVar21) {
        uVar21 = uVar22;
      }
    }
LAB_14c71989f:
    while( true ) {
      pTVar11 = local_310;
      if (*(int *)&(local_310->Elements).field_0x8 - *(int *)&(local_310->Elements).field_0x34 !=
          (int)uStack_2e8) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_40c);
      }
      if (((TStack_308.CurrentBitIndex == uVar21) &&
          (TStack_308.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (this = local_3f8, pTVar11 == pTVar1)) break;
      local_2c8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_2d8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_2c0 = local_3f8->Mesh;
      iVar19 = *(int *)(*(longlong *)&pTVar11->Elements + (longlong)TStack_308.CurrentBitIndex * 0xc
                       );
      local_2b0 = (undefined ***)0x0;
      pFVar2 = &local_2c0->VertexEdgeLists;
      local_238._0_8_ = 0;
      local_210 = (longlong *)0x0;
      local_208 = (FSmallListSet *)0x0;
      uStack_200 = uStack_200 & 0xffffffff00000000;
      local_1e0 = (FSmallListSet *)0x0;
      uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
      local_2b8 = iVar19;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_288,pFVar2,iVar19,false);
      local_208 = local_288.ListSet;
      uStack_200._0_4_ = local_288.ListIndex;
      uStack_200._4_4_ = local_288.block_ptr;
      local_1e8 = local_288.cur_value;
      uStack_1e4 = local_288._36_4_;
      local_1f8 = local_288.N;
      iStack_1f4 = local_288.iEnd;
      iStack_1f0 = local_288.iCur;
      iStack_1ec = local_288.cur_ptr;
      uStack_364 = 0xffffffff;
      uStack_1d8 = CONCAT44(0xffffffff,iVar19);
      local_360 = 0;
      uStack_358 = 0xffffffffffffffff;
      local_1d0 = (ulonglong)uStack_35c << 0x20;
      local_1c0 = local_350;
      uStack_1c8 = 0xffffffffffffffff;
      local_370 = pFVar2;
      iStack_368 = iVar19;
      local_1e0 = pFVar2;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_238,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8);
      if (local_2d8[0] != (code *)0x0) {
        pppuVar16 = &local_2c8;
        if (local_2b0 != (undefined ***)0x0) {
          pppuVar16 = local_2b0;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1b8,
                 (ValueIterator *)&local_208,(ValueIterator *)&local_1e0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_238);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_128,
                 (ValueIterator *)&local_1e0,(ValueIterator *)&local_1e0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_238);
      pFVar7 = local_3f8;
      while ((((local_1b8._0_8_ != local_128._0_8_ || (local_1b8._8_4_ != local_128._8_4_)) ||
              (local_1b8._24_4_ != local_128._24_4_)) || (local_1b8._28_4_ != local_128._28_4_))) {
        lVar15 = *(longlong *)(lVar14 + 0x78);
        uVar23 = local_1b8._88_4_ * 3;
        iVar19 = *(int *)(*(longlong *)(lVar15 + (ulonglong)(uVar23 >> 9) * 8) +
                         (ulonglong)(uVar23 & 0x1ff) * 4);
        if (-1 < iVar19) {
          local_3ec = *(undefined4 *)
                       (*(longlong *)(lVar15 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                       (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
          local_3e8[0] = *(undefined4 *)
                          (*(longlong *)(lVar15 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                          (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
          local_3f0 = iVar19;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&pFVar7->ModifiedOverlayNormals,&local_3a0,(bool *)&local_3f0);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&pFVar7->ModifiedOverlayNormals,&local_39c,(bool *)&local_3ec);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&pFVar7->ModifiedOverlayNormals,local_398,(bool *)local_3e8);
        }
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1b8);
      }
      if (local_128._96_8_ != 0) {
        plVar17 = (longlong *)(local_128 + 0x70);
        if ((longlong *)local_128._136_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_128._136_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_1b8._96_8_ != 0) {
        plVar17 = (longlong *)(local_1b8 + 0x70);
        if ((longlong *)local_1b8._136_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_1b8._136_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_238._0_8_ != 0) {
        plVar17 = (longlong *)(local_238 + 0x10);
        if (local_210 != (longlong *)0x0) {
          plVar17 = local_210;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
    }
  }
  pTVar1 = &this->ModifiedVertices;
  pTVar11 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                      (pTVar1,&local_98,&this->FixedBoundaryVertices);
  if (pTVar1 != pTVar11) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar1,pTVar11);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// ClearSolution @ 14c71cb80

void __thiscall
UE::Geometry::FGroupTopologyDeformer::ClearSolution
          (FGroupTopologyDeformer *this,FDynamicMesh3 *param_1)

{
  FVertexPositionCache::SetPositions(&this->InitialPositions,param_1);
  return;
}

// ComputeEncoding @ 14c720370

void __thiscall UE::Geometry::FGroupTopologyDeformer::ComputeEncoding(FGroupTopologyDeformer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_> *this_01;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FDynamicMesh3 *pFVar8;
  FDynamicMesh3 *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  void *pvVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,TSizedDefaultAllocator<32>_>
  *this_02;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_160;
  TVector<double>_u_0 local_128;
  double local_110;
  int *local_108;
  int *local_100;
  TArray<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,TSizedDefaultAllocator<32>_>
  *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  
  uVar18 = (this->ROIEdges).ArrayNum;
  this_00 = &this->EdgeEncodings;
  iVar19 = (this->EdgeEncodings).ArrayNum;
  piVar1 = &(this->EdgeEncodings).ArrayNum;
  if (iVar19 < (int)uVar18) {
    iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar18 - iVar19,&this_00->AllocatorInstance,piVar1,
                        &(this->EdgeEncodings).ArrayMax);
    DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar17 * 0x10,uVar18 - iVar19);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar19) {
      uVar26 = iVar19 - uVar18;
      if (((int)(uVar18 | uVar26) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (uVar26 != 0) {
        TArray<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar18,uVar26);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->EdgeEncodings).ArrayMax);
      }
    }
  }
  dVar6 = __real_3fe0000000000000;
  dVar15 = __real_3ff0000000000000;
  local_res10 = 0;
  if (0 < (int)uVar18) {
    local_188 = 0;
    local_180 = 0;
    lVar29 = 0;
    do {
      uVar26 = 0;
      if ((int)local_res10 < (this->ROIEdges).ArrayNum) {
        uVar26 = ~local_res10 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (this->ROIEdges).AllocatorInstance.Data;
      uVar26 = 0;
      if ((int)local_res10 < (this->EdgeEncodings).ArrayNum) {
        uVar26 = ~local_res10 >> 0x1f;
      }
      uVar23 = *(uint *)(pFVar7 + lVar29 + 0x18);
      if ((uVar26 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this_00->AllocatorInstance).Data + local_180;
      iVar19 = *(int *)&pFVar28[8].field_0x0;
      pFVar2 = pFVar28 + 8;
      if (iVar19 < (int)uVar23) {
        iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,uVar23 - iVar19,(ForAnyElementType *)pFVar28,(int *)pFVar2,
                            (int *)(pFVar28 + 0xc));
        DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeVertexEncoding,int>
                  ((void *)(*(longlong *)&pFVar28->field_0x0 + (longlong)iVar17 * 0x20),
                   uVar23 - iVar19);
      }
      else {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if ((int)uVar23 < iVar19) {
          uVar26 = iVar19 - uVar23;
          if (((int)(uVar26 | uVar23) < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (uVar26 != 0) {
            pvVar21 = (void *)(*(longlong *)&pFVar28->field_0x0 + (longlong)(int)uVar23 * 0x20);
            iVar19 = (*(int *)&pFVar2->field_0x0 - uVar26) - uVar23;
            if (iVar19 != 0) {
              memmove(pvVar21,(void *)((longlong)pvVar21 + (longlong)(int)uVar26 * 0x20),
                      (longlong)iVar19 << 5);
            }
            *(uint *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - uVar26;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,(ForAnyElementType *)pFVar28,*(int *)&pFVar2->field_0x0,
                       (int *)(pFVar28 + 0xc));
          }
        }
      }
      pFVar8 = this->Mesh;
      if ((*(int *)(pFVar7 + lVar29 + 0x18) < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = this->Mesh;
      uVar22 = (ulonglong)(**(uint **)(pFVar7 + lVar29 + 0x10) & 0x1ff);
      uVar23 = uVar23 - 1;
      lVar25 = *(longlong *)
                ((pFVar8->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(**(uint **)(pFVar7 + lVar29 + 0x10) >> 9) * 8);
      dVar4 = *(double *)(lVar25 + 0x10 + uVar22 * 0x18);
      pdVar3 = (double *)(lVar25 + uVar22 * 0x18);
      dVar12 = *pdVar3;
      dVar5 = pdVar3[1];
      uVar26 = 0;
      if ((int)uVar23 < *(int *)(pFVar7 + lVar29 + 0x18)) {
        uVar26 = ~uVar23 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_110 = 0.0;
      uVar26 = *(uint *)(*(longlong *)(pFVar7 + lVar29 + 0x10) + (longlong)(int)uVar23 * 4);
      uVar22 = (ulonglong)(uVar26 & 0x1ff);
      lVar25 = *(longlong *)
                ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar26 >> 9) * 8);
      pdVar3 = (double *)(lVar25 + uVar22 * 0x18);
      dVar13 = *pdVar3;
      dVar14 = pdVar3[1];
      dVar30 = *(double *)(lVar25 + 0x10 + uVar22 * 0x18);
      local_128._s_0.Z = dVar30 - dVar4;
      local_128._s_0.X = dVar13 - dVar12;
      dVar12 = (dVar12 + dVar13) * dVar6;
      dVar30 = (dVar4 + dVar30) * dVar6;
      local_128._s_0.Y = dVar14 - dVar5;
      dVar4 = (dVar5 + dVar14) * dVar6;
      local_110 = Normalize<double>((TVector<double> *)&local_128._s_0,0.0);
      local_110 = local_110 * dVar6;
      uVar26 = 1;
      if (1 < (int)uVar23) {
        lVar25 = 0x20;
        local_res20 = 4;
        do {
          pFVar8 = this->Mesh;
          uVar27 = 0;
          if ((int)uVar26 < *(int *)(pFVar7 + lVar29 + 0x18)) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar22 = (ulonglong)
                   (*(uint *)(local_res20 + *(longlong *)(pFVar7 + lVar29 + 0x10)) & 0x1ff);
          lVar10 = *(longlong *)
                    ((pFVar8->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)(local_res20 + *(longlong *)(pFVar7 + lVar29 + 0x10)) >> 9)
                    * 8);
          dVar5 = *(double *)(lVar10 + 0x10 + uVar22 * 0x18);
          pdVar3 = (double *)(lVar10 + uVar22 * 0x18);
          dVar13 = *pdVar3;
          dVar14 = pdVar3[1];
          uVar27 = 0;
          if ((int)uVar26 < *(int *)&pFVar28[8].field_0x0) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar10 = *(longlong *)&pFVar28->field_0x0;
          dVar31 = (((dVar14 - dVar4) * local_128._s_0.Y + (dVar13 - dVar12) * local_128._s_0.X +
                    (dVar5 - dVar30) * local_128._s_0.Z) / local_110 + dVar15) * dVar6;
          if (0.0 <= dVar31) {
            if (dVar15 <= dVar31) {
              dVar31 = dVar15;
            }
          }
          else {
            dVar31 = 0.0;
          }
          *(double *)(lVar10 + lVar25) = dVar31;
          local_res20 = local_res20 + 4;
          uVar26 = uVar26 + 1;
          dVar31 = ((dVar31 + dVar31) - dVar15) * local_110;
          *(double *)(lVar10 + lVar25 + 8) = dVar13 - (dVar31 * local_128._s_0.X + dVar12);
          *(double *)(lVar10 + lVar25 + 0x10) = dVar14 - (dVar31 * local_128._s_0.Y + dVar4);
          *(double *)(lVar10 + lVar25 + 0x18) = dVar5 - (dVar31 * local_128._s_0.Z + dVar30);
          lVar25 = lVar25 + 0x20;
        } while ((int)uVar26 < (int)uVar23);
      }
      lVar29 = lVar29 + 0x48;
      local_res10 = local_res10 + 1;
      local_188 = local_188 + 1;
      local_180 = local_180 + 0x10;
    } while (local_188 < (int)uVar18);
  }
  uVar18 = (this->ROIFaces).ArrayNum;
  this_01 = &this->FaceEncodings;
  iVar19 = (this->FaceEncodings).ArrayNum;
  piVar1 = &(this->FaceEncodings).ArrayNum;
  local_108 = piVar1;
  if (iVar19 < (int)uVar18) {
    iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar18 - iVar19,&this_01->AllocatorInstance,piVar1,
                        &(this->FaceEncodings).ArrayMax);
    DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar17 * 0x10,uVar18 - iVar19);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar19) {
      uVar26 = iVar19 - uVar18;
      if (((int)(uVar18 | uVar26) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (uVar26 != 0) {
        TArray<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_01,uVar18,uVar26);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar1,&(this->FaceEncodings).ArrayMax);
      }
    }
  }
  local_res18 = 0;
  if (0 < (int)uVar18) {
    local_188 = 0;
    local_160 = 0;
    local_180 = 0;
    local_e8 = (longlong)(int)uVar18;
    do {
      uVar18 = 0;
      if ((int)local_res18 < (this->ROIFaces).ArrayNum) {
        uVar18 = ~local_res18 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (this->ROIFaces).AllocatorInstance.Data;
      uVar18 = *(uint *)(pFVar7 + local_160 + 0x18);
      uVar26 = *(uint *)(pFVar7 + local_160 + 8);
      uVar23 = 0;
      if ((int)local_res18 < *local_108) {
        uVar23 = ~local_res18 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_02 = (TArray<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,TSizedDefaultAllocator<32>_>
                 *)((this->FaceEncodings).AllocatorInstance.Data + local_180);
      iVar19 = this_02->ArrayNum;
      local_100 = &this_02->ArrayNum;
      local_f8 = this_02;
      if (iVar19 < (int)uVar18) {
        iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,uVar18 - iVar19,(ForAnyElementType *)this_02,local_100,
                            &this_02->ArrayMax);
        DefaultConstructItems<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,int>
                  ((this_02->AllocatorInstance).Data + (longlong)iVar17 * 0x20,uVar18 - iVar19);
      }
      else {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if ((int)uVar18 < iVar19) {
          uVar23 = iVar19 - uVar18;
          if (((int)(uVar18 | uVar23) < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (uVar23 != 0) {
            TArray<UE::Geometry::FGroupTopologyDeformer::FFaceVertexEncoding,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(this_02,uVar18,uVar23);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,(ForAnyElementType *)this_02,this_02->ArrayNum,&this_02->ArrayMax);
          }
        }
      }
      local_res10 = 0;
      if (0 < (int)uVar18) {
        local_170 = 0;
        local_178 = 0;
        do {
          pFVar8 = this->Mesh;
          uVar23 = 0;
          if ((int)local_res10 < *(int *)(pFVar7 + local_160 + 0x18)) {
            uVar23 = ~local_res10 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar22 = (ulonglong)
                   (*(uint *)(local_178 + *(longlong *)(pFVar7 + local_160 + 0x10)) & 0x1ff);
          lVar29 = *(longlong *)
                    ((pFVar8->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)
                    (*(uint *)(local_178 + *(longlong *)(pFVar7 + local_160 + 0x10)) >> 9) * 8);
          pdVar3 = (double *)(lVar29 + uVar22 * 0x18);
          dVar4 = *pdVar3;
          dVar12 = pdVar3[1];
          dVar6 = *(double *)(lVar29 + 0x10 + uVar22 * 0x18);
          uVar23 = 0;
          if ((int)local_res10 < *local_100) {
            uVar23 = ~local_res10 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar28 = (local_f8->AllocatorInstance).Data + local_170;
          iVar19 = *(int *)&pFVar28[8].field_0x0;
          pFVar2 = pFVar28 + 8;
          if (iVar19 < (int)uVar26) {
            iVar17 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,uVar26 - iVar19,(ForAnyElementType *)pFVar28,(int *)pFVar2,
                                (int *)(pFVar28 + 0xc));
            memset((void *)(*(longlong *)&pFVar28->field_0x0 + (longlong)iVar17 * 8),0,
                   (longlong)(int)(uVar26 - iVar19) << 3);
          }
          else {
            if ((int)uVar26 < 0) goto LAB_14c721402;
            if ((int)uVar26 < iVar19) {
              uVar23 = iVar19 - uVar26;
              if (((int)(uVar26 | uVar23) < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (uVar23 != 0) {
                pvVar21 = (void *)(*(longlong *)&pFVar28->field_0x0 + (longlong)(int)uVar26 * 8);
                iVar19 = (*(int *)&pFVar2->field_0x0 - uVar23) - uVar26;
                if (iVar19 != 0) {
                  memmove(pvVar21,(void *)((longlong)pvVar21 + (longlong)(int)uVar23 * 8),
                          (longlong)iVar19 << 3);
                }
                *(uint *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - uVar23;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(ForAnyElementType *)pFVar28,*(int *)&pFVar2->field_0x0,
                           (int *)(pFVar28 + 0xc));
              }
            }
          }
          iVar19 = *(int *)&pFVar28[0x18].field_0x0;
          pFVar2 = pFVar28 + 0x18;
          local_f0 = pFVar2;
          if (iVar19 < (int)uVar26) {
            Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar26 - iVar19,(ForAnyElementType *)(pFVar28 + 0x10),(int *)pFVar2,
                       (int *)(pFVar28 + 0x1c));
          }
          else {
            if ((int)uVar26 < 0) {
LAB_14c721402:
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
            }
            if ((int)uVar26 < iVar19) {
              uVar23 = iVar19 - uVar26;
              if (((int)(uVar26 | uVar23) < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (uVar23 != 0) {
                pvVar21 = (void *)(*(longlong *)&pFVar28[0x10].field_0x0 +
                                  (longlong)(int)uVar26 * 0x18);
                iVar19 = (*(int *)&pFVar2->field_0x0 - uVar23) - uVar26;
                if (iVar19 != 0) {
                  memmove(pvVar21,(void *)((longlong)pvVar21 + (longlong)(int)uVar23 * 0x18),
                          (longlong)iVar19 * 0x18);
                }
                *(uint *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - uVar23;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,(ForAnyElementType *)(pFVar28 + 0x10),*(int *)&pFVar2->field_0x0,
                           (int *)(pFVar28 + 0x1c));
              }
            }
          }
          uVar23 = 0;
          lVar29 = 0;
          dVar5 = 0.0;
          if (0 < (int)uVar26) {
            lVar25 = 0;
LAB_14c721020:
            uVar24 = ~uVar23 >> 0x1f;
            pFVar8 = this->Mesh;
            uVar27 = 0;
            if ((int)uVar23 < *(int *)(pFVar7 + local_160 + 8)) {
              uVar27 = uVar24;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar27 = *(uint *)(*(longlong *)(pFVar7 + local_160) + lVar29 * 4);
            uVar22 = (ulonglong)(uVar27 & 0x1ff);
            lVar10 = *(longlong *)
                      ((pFVar8->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar27 >> 9) * 8);
            pdVar3 = (double *)(lVar10 + uVar22 * 0x18);
            dVar13 = dVar4 - *pdVar3;
            dVar14 = dVar6 - *(double *)(lVar10 + 0x10 + uVar22 * 0x18);
            dVar30 = dVar12 - pdVar3[1];
            uVar27 = 0;
            if ((int)uVar23 < *(int *)&local_f0->field_0x0) {
              uVar27 = uVar24;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar10 = *(longlong *)&pFVar28[0x10].field_0x0;
            *(double *)(lVar10 + lVar25) = dVar13;
            *(double *)(lVar10 + lVar25 + 8) = dVar30;
            *(double *)(lVar10 + lVar25 + 0x10) = dVar14;
            iVar19 = *(int *)&pFVar28[8].field_0x0;
            dVar30 = dVar30 * dVar30 + dVar13 * dVar13 + dVar14 * dVar14;
            if (dVar30 != 0.0) goto code_r0x00014c721157;
            uVar27 = 0;
            if (0 < iVar19) {
              lVar25 = 0;
              do {
                uVar20 = 0;
                if ((int)uVar27 < iVar19) {
                  uVar20 = ~uVar27 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar27 = uVar27 + 1;
                *(undefined8 *)(*(longlong *)&pFVar28->field_0x0 + lVar25) = 0;
                lVar25 = lVar25 + 8;
                iVar19 = *(int *)&pFVar28[8].field_0x0;
              } while ((int)uVar27 < iVar19);
            }
            uVar27 = 0;
            if ((int)uVar23 < iVar19) {
              uVar27 = uVar24;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(undefined8 *)(*(longlong *)&pFVar28->field_0x0 + lVar29 * 8) = 0x3ff0000000000000;
            dVar5 = dVar15;
LAB_14c721289:
            uVar23 = 0;
            lVar29 = 0;
            do {
              uVar27 = 0;
              if ((int)uVar23 < *(int *)&pFVar28[8].field_0x0) {
                uVar27 = ~uVar23 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar23 = uVar23 + 1;
              *(double *)(*(longlong *)&pFVar28->field_0x0 + lVar29) =
                   (dVar15 / dVar5) * *(double *)(*(longlong *)&pFVar28->field_0x0 + lVar29);
              lVar29 = lVar29 + 8;
            } while ((int)uVar23 < (int)uVar26);
          }
          local_178 = local_178 + 4;
          local_res10 = local_res10 + 1;
          local_170 = local_170 + 0x20;
        } while ((int)local_res10 < (int)uVar18);
      }
      local_160 = local_160 + 0x20;
      local_res18 = local_res18 + 1;
      local_180 = local_180 + 0x10;
      local_188 = local_188 + 1;
    } while (local_188 < local_e8);
  }
  return;
code_r0x00014c721157:
  dVar30 = dVar15 / dVar30;
  uVar27 = 0;
  if ((int)uVar23 < iVar19) {
    uVar27 = uVar24;
  }
  if ((uVar27 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  dVar5 = dVar5 + dVar30;
  uVar23 = uVar23 + 1;
  lVar25 = lVar25 + 0x18;
  *(double *)(*(longlong *)&pFVar28->field_0x0 + lVar29 * 8) = dVar30;
  lVar29 = lVar29 + 1;
  if ((int)uVar26 <= (int)uVar23) goto LAB_14c721289;
  goto LAB_14c721020;
}

// Initialize @ 14c744a00

void __thiscall
UE::Geometry::FGroupTopologyDeformer::Initialize
          (FGroupTopologyDeformer *this,FDynamicMesh3 *param_1,FGroupTopology *param_2)

{
  this->Mesh = param_1;
  this->Topology = param_2;
  return;
}

// Reset @ 14c75dfd0

void __thiscall UE::Geometry::FGroupTopologyDeformer::Reset(FGroupTopologyDeformer *this)

{
  int *piVar1;
  int iVar2;
  FROIFace *pFVar3;
  FROIEdge *pFVar4;
  FScriptContainerElement *pFVar5;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->HandleVertices);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->HandleBoundaryVertices);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->FixedBoundaryVertices);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->ROIEdgeVertices);
  piVar1 = &(this->ROIFaces).ArrayMax;
  pFVar3 = (FROIFace *)(this->ROIFaces).AllocatorInstance.Data;
  iVar2 = (this->ROIFaces).ArrayNum;
  if ((this->ROIFaces).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>(pFVar3,iVar2);
    (this->ROIFaces).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->ROIFaces).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIFace,int>(pFVar3,iVar2);
    (this->ROIFaces).ArrayNum = 0;
  }
  iVar2 = (this->InitialPositions).Vertices.ArrayMax;
  (this->InitialPositions).Vertices.ArrayNum = 0;
  if (iVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InitialPositions,0,
               &(this->InitialPositions).Vertices.ArrayMax);
  }
  iVar2 = (this->InitialPositions).Positions.ArrayMax;
  (this->InitialPositions).Positions.ArrayNum = 0;
  if (iVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->InitialPositions).Positions.AllocatorInstance,0,
               &(this->InitialPositions).Positions.ArrayMax);
  }
  piVar1 = &(this->ROIEdges).ArrayMax;
  pFVar4 = (FROIEdge *)(this->ROIEdges).AllocatorInstance.Data;
  iVar2 = (this->ROIEdges).ArrayNum;
  if ((this->ROIEdges).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIEdge,int>(pFVar4,iVar2);
    (this->ROIEdges).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&(this->ROIEdges).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FROIEdge,int>(pFVar4,iVar2);
    (this->ROIEdges).ArrayNum = 0;
  }
  piVar1 = &(this->EdgeEncodings).ArrayMax;
  pFVar5 = (this->EdgeEncodings).AllocatorInstance.Data;
  iVar2 = (this->EdgeEncodings).ArrayNum;
  if ((this->EdgeEncodings).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
              ((FEdgeEncoding *)pFVar5,iVar2);
    (this->EdgeEncodings).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->EdgeEncodings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FEdgeEncoding,int>
              ((FEdgeEncoding *)pFVar5,iVar2);
    (this->EdgeEncodings).ArrayNum = 0;
  }
  piVar1 = &(this->FaceEncodings).ArrayMax;
  pFVar5 = (this->FaceEncodings).AllocatorInstance.Data;
  iVar2 = (this->FaceEncodings).ArrayNum;
  if ((this->FaceEncodings).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
              ((FFaceEncoding *)pFVar5,iVar2);
    (this->FaceEncodings).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FaceEncodings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopologyDeformer::FFaceEncoding,int>
              ((FFaceEncoding *)pFVar5,iVar2);
    (this->FaceEncodings).ArrayNum = 0;
  }
  return;
}

// SaveInitialPositions @ 14c75fc60

void __thiscall
UE::Geometry::FGroupTopologyDeformer::SaveInitialPositions(FGroupTopologyDeformer *this)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  uint local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = *(int *)&(this->ModifiedVertices).Elements.field_0x28;
  puVar1 = &(this->ModifiedVertices).Elements.field_0x10;
  iStack_90 = 0;
  pTVar2 = &this->ModifiedVertices;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&(this->ModifiedVertices).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14c75fcfd;
      uVar17 = puVar19[lVar14 + 1];
    }
    uStack_8c = -uVar17 & uVar17;
    uVar5 = (ulonglong)uStack_8c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar13 < iStack_7c) {
      iStack_7c = iVar13;
    }
  }
LAB_14c75fcfd:
  uVar17 = *(uint *)&(this->ModifiedVertices).Elements.field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_70 = *(int *)&(this->ModifiedVertices).Elements.field_0x8 -
              *(int *)&(this->ModifiedVertices).Elements.field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = *(uint *)&(this->ModifiedVertices).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&(this->ModifiedVertices).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c75fe00;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar17 = local_res18 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_14c75fe00:
  while( true ) {
    pTVar11 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2))
    {
      return;
    }
    pFVar7 = this->Mesh;
    local_b8[0] = *(uint *)(*(longlong *)&pTVar11->Elements +
                           (longlong)TStack_60.CurrentBitIndex * 0xc);
    pFVar8 = (this->InitialPositions).Vertices.AllocatorInstance.Data;
    if (((pFVar8 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 <
         pFVar8 + (longlong)(this->InitialPositions).Vertices.ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = (this->InitialPositions).Vertices.ArrayNum;
    piVar3 = &(this->InitialPositions).Vertices.ArrayMax;
    if (iVar13 == *piVar3) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)&this->InitialPositions,piVar3);
    }
    (this->InitialPositions).Vertices.ArrayNum = iVar13 + 1;
    *(uint *)((this->InitialPositions).Vertices.AllocatorInstance.Data + (longlong)iVar13 * 4) =
         local_b8[0];
    lVar14 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_b8[0] >> 9) * 8)
    ;
    pFVar8 = (this->InitialPositions).Positions.AllocatorInstance.Data;
    puVar4 = (undefined8 *)(lVar14 + (ulonglong)(local_b8[0] & 0x1ff) * 0x18);
    local_b0 = *puVar4;
    uStack_a8 = puVar4[1];
    local_a0 = *(undefined8 *)(lVar14 + 0x10 + (ulonglong)(local_b8[0] & 0x1ff) * 0x18);
    if (((pFVar8 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar8 + (longlong)(this->InitialPositions).Positions.ArrayMax * 0x18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) break;
    iVar13 = (this->InitialPositions).Positions.ArrayNum;
    piVar3 = &(this->InitialPositions).Positions.ArrayMax;
    if (iVar13 == *piVar3) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(this->InitialPositions).Positions.AllocatorInstance,piVar3);
    }
    (this->InitialPositions).Positions.ArrayNum = iVar13 + 1;
    pFVar9 = (this->InitialPositions).Positions.AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar13 * 0x18;
    *(undefined8 *)pFVar8 = local_b0;
    *(undefined8 *)(pFVar8 + 8) = uStack_a8;
    *(undefined8 *)(pFVar9 + (longlong)iVar13 * 0x18 + 0x10) = local_a0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

// SetActiveHandleCorners @ 14c7602b0

void __thiscall
UE::Geometry::FGroupTopologyDeformer::SetActiveHandleCorners
          (FGroupTopologyDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FGroupTopology *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_88;
  int local_84;
  int local_80 [2];
  FScriptContainerElement *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  void *local_60;
  undefined8 local_58;
  
  (**(code **)(this->_padding_ + 0x38))();
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar12 = pFVar9 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar12) break;
    local_88 = FGroupTopology::GetCornerVertexID(this->Topology,*(int *)pFVar9);
    if (-1 < local_88) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->HandleVertices,local_80,(bool *)&local_88);
    }
    pFVar9 = pFVar9 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->HandleBoundaryVertices,&this->HandleVertices);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->ModifiedVertices,&this->HandleVertices);
  pFVar5 = this->Topology;
  iVar2 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78 = pFVar12 + (longlong)iVar2 * 4;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  while( true ) {
    pFVar9 = local_78;
    if (param_1->ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar12 == pFVar9) break;
    uVar3 = *(uint *)pFVar12;
    lVar10 = (longlong)(int)uVar3;
    if (((int)uVar3 < 0) || ((pFVar5->Corners).ArrayNum <= (int)uVar3)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CornerID >= 0 && CornerID < Corners.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x1dc,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = 0;
    if ((int)uVar3 < (pFVar5->Corners).ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar9 = (pFVar5->Corners).AllocatorInstance.Data;
    piVar11 = *(int **)(pFVar9 + lVar10 * 0x18 + 8);
    iVar4 = *(int *)(pFVar9 + lVar10 * 0x18 + 0x10);
    piVar1 = piVar11 + iVar4;
    while( true ) {
      if (*(int *)(pFVar9 + lVar10 * 0x18 + 0x10) != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (piVar11 == piVar1) break;
      local_84 = *piVar11;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_70,&local_84);
      piVar11 = piVar11 + 1;
    }
    pFVar12 = pFVar12 + 4;
  }
  (**(code **)(this->_padding_ + 0x40))(this,&local_60,&local_70);
  (**(code **)(this->_padding_ + 0x48))(this);
  (**(code **)(this->_padding_ + 0x50))(this);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// SetActiveHandleEdges @ 14c7604f0

void __thiscall
UE::Geometry::FGroupTopologyDeformer::SetActiveHandleEdges
          (FGroupTopologyDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FGroupTopology *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res8 [2];
  int local_res10 [2];
  FScriptContainerElement *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  void *local_48;
  undefined8 local_40;
  
  (**(code **)(this->_padding_ + 0x38))();
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_res18 = pFVar6 + (longlong)iVar1 * 4;
  while( true ) {
    pFVar5 = local_res18;
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar5) break;
    pTVar3 = FGroupTopology::GetGroupEdgeVertices(this->Topology,*(int *)pFVar6);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar5) break;
      local_res8[0] = *(undefined4 *)pFVar4;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->HandleVertices,local_res10,(bool *)local_res8);
      pFVar4 = pFVar4 + 4;
    }
    pFVar6 = pFVar6 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->HandleBoundaryVertices,&this->HandleVertices);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->ModifiedVertices,&this->HandleVertices);
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  this_00 = this->Topology;
  local_48 = (void *)0x0;
  local_40 = 0;
  pFVar6 = pFVar5 + (longlong)iVar1 * 4;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    FGroupTopology::FindEdgeNbrGroups(this_00,*(int *)pFVar5,&local_58);
    pFVar5 = pFVar5 + 4;
  }
  (**(code **)(this->_padding_ + 0x40))(this,&local_48);
  (**(code **)(this->_padding_ + 0x48))(this);
  (**(code **)(this->_padding_ + 0x50))(this);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// SetActiveHandleFaces @ 14c760690

void __thiscall
UE::Geometry::FGroupTopologyDeformer::SetActiveHandleFaces
          (FGroupTopologyDeformer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FGroupTopology *this_00;
  code *pcVar6;
  bool bVar7;
  FGroup *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  
  (**(code **)(this->_padding_ + 0x38))();
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar5 = pFVar13 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar5) break;
    iVar3 = *(int *)pFVar13;
    FGroupTopology::CollectGroupVertices(this->Topology,iVar3,&this->HandleVertices);
    FGroupTopology::CollectGroupBoundaryVertices(this->Topology,iVar3,&this->HandleBoundaryVertices)
    ;
    pFVar13 = pFVar13 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->ModifiedVertices,&this->HandleVertices);
  local_60 = param_1->ArrayNum;
  lVar11 = (longlong)local_60;
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,pFVar5,lVar11 << 2);
  }
  uVar4 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar4;
  pFVar13 = (param_1->AllocatorInstance).Data;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar5 = pFVar13 + uVar10 * 4;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar5) {
      (**(code **)(this->_padding_ + 0x40))(this,&local_68,&local_58);
      (**(code **)(this->_padding_ + 0x48))(this);
      (**(code **)(this->_padding_ + 0x50))(this);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      return;
    }
    this_00 = this->Topology;
    pFVar8 = FGroupTopology::FindGroupByID(this_00,*(int *)pFVar13);
    if ((pFVar8 == (FGroup *)0x0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3316175843021029133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                           ,0xf3,"Found != nullptr"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar14 = &pFVar8->NeighbourGroupIDs;
    if (pFVar8 == (FGroup *)0x0) {
      pTVar14 = &this_00->EmptyArray;
    }
    pFVar12 = (pTVar14->AllocatorInstance).Data;
    iVar2 = pTVar14->ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar14->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar1) break;
      local_res20[0] = *(int *)pFVar12;
      for (FVar9.Data = local_68.Data; FVar9.Data != local_68.Data + (longlong)local_60 * 4;
          FVar9.Data = FVar9.Data + 4) {
        if (*(int *)FVar9.Data == local_res20[0]) goto LAB_14c76084f;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_58,local_res20);
LAB_14c76084f:
      pFVar12 = pFVar12 + 4;
    }
    uVar10 = (ulonglong)uVar4;
    pFVar13 = pFVar13 + 4;
  } while( true );
}

// SetActiveHandleFromSelection @ 14c7608c0

void __thiscall
UE::Geometry::FGroupTopologyDeformer::SetActiveHandleFromSelection
          (FGroupTopologyDeformer *this,FGeometrySelection *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  EGeometryElementType EVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  FGroup *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_178;
  int local_170;
  int iStack_16c;
  int local_168;
  int local_164;
  int local_160 [2];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  int local_5c;
  int local_3c;
  
  if (param_1->TopologyType == Polygroup) {
    EVar3 = param_1->ElementType;
    iVar14 = 0;
    iVar15 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    iStack_16c = 0;
    iVar17 = 0;
    if (EVar3 == Face) {
      iVar4 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      local_158 = &param_1->Selection;
      uStack_14c = 1;
      iStack_13c = iVar15;
      if (iVar4 != 0) {
        puVar18 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar12 = *puVar18;
        iVar17 = iVar14;
        iVar15 = iVar14;
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_13c = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c7609ee;
          uVar12 = puVar18[lVar11 + 1];
        }
        uStack_14c = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_14c * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_120 = (int)lVar11;
        iStack_13c = iVar17 + -1 + local_120;
        if (iVar4 < iStack_13c) {
          iStack_13c = iVar4;
        }
      }
LAB_14c7609ee:
      uVar12 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      iStack_134 = local_5c;
      iStack_130 = *(int *)&(param_1->Selection).Elements.field_0x8 -
                   *(int *)&(param_1->Selection).Elements.field_0x34;
      uVar13 = uVar12 & 0xffffffe0;
      uStack_140 = 0xffffffff;
      TStack_100._padding_ = CONCAT44(uStack_14c,iVar15);
      TStack_100.CurrentBitIndex = iStack_13c;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar12 >> 5;
      TStack_100._28_4_ = local_5c;
      TStack_100.BaseBitIndex = iVar17;
      uStack_e0 = CONCAT44(uStack_12c,iStack_130);
      iStack_150 = iVar15;
      local_148 = puVar1;
      local_138 = iVar17;
      local_128 = local_158;
      local_108 = local_158;
      TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar7 = local_128;
      uVar5 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar12 != uVar5) {
        puVar16 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar14;
          uVar13 = uVar13 + 0x20;
          iVar14 = iVar14 + 1;
          uVar12 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14c760af1;
          uVar12 = *(uint *)(puVar16 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_11c = (int)lVar11;
        uVar12 = local_11c + -1 + uVar13;
        if ((int)uVar5 < (int)uVar12) {
          uVar12 = uVar5;
        }
      }
LAB_14c760af1:
      while( true ) {
        pTVar8 = local_108;
        if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
            (int)uStack_e0) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_100.CurrentBitIndex == uVar12) &&
            (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == pTVar7)) break;
        local_168 = (int)((ulonglong)
                          *(undefined8 *)
                           (*(longlong *)&pTVar8->Elements +
                           (longlong)TStack_100.CurrentBitIndex * 0x10) >> 0x20);
        pFVar10 = FGroupTopology::FindGroupByID(this->Topology,local_168);
        if (pFVar10 != (FGroup *)0x0) {
          if (((local_178.Data <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 < local_178.Data + (longlong)iStack_16c * 4))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_170 == iStack_16c) {
            local_170 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_178,&iStack_16c);
          }
          *(int *)(local_178.Data + (longlong)local_170 * 4) = local_168;
          local_170 = local_170 + 1;
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      }
      (**(code **)(this->_padding_ + 8))(this,&local_178);
    }
    else {
      iVar17 = 0;
      if (EVar3 == Edge) {
        iVar4 = *(int *)&(param_1->Selection).Elements.field_0x28;
        puVar1 = &(param_1->Selection).Elements.field_0x10;
        local_158 = &param_1->Selection;
        uStack_14c = 1;
        iStack_13c = iVar17;
        if (iVar4 != 0) {
          puVar18 = *(uint **)&(param_1->Selection).Elements.field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)puVar1;
          }
          uVar12 = *puVar18;
          iVar17 = iVar14;
          iVar15 = iVar14;
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar15;
            iVar17 = iVar17 + 0x20;
            iVar15 = iVar15 + 1;
            iStack_13c = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c760cae;
            uVar12 = puVar18[lVar11 + 1];
          }
          uStack_14c = -uVar12 & uVar12;
          uVar2 = (ulonglong)uStack_14c * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_118 = (int)lVar11;
          iStack_13c = iVar17 + -1 + local_118;
          if (iVar4 < iStack_13c) {
            iStack_13c = iVar4;
          }
        }
LAB_14c760cae:
        uVar12 = *(uint *)&(param_1->Selection).Elements.field_0x28;
        iStack_134 = local_3c;
        iStack_130 = *(int *)&(param_1->Selection).Elements.field_0x8 -
                     *(int *)&(param_1->Selection).Elements.field_0x34;
        uVar13 = uVar12 & 0xffffffe0;
        uStack_140 = 0xffffffff;
        TStack_d0._padding_ = CONCAT44(uStack_14c,iVar15);
        TStack_d0.CurrentBitIndex = iStack_13c;
        TStack_d0.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar12 >> 5;
        TStack_d0._28_4_ = local_3c;
        TStack_d0.BaseBitIndex = iVar17;
        uStack_b0 = CONCAT44(uStack_12c,iStack_130);
        iStack_150 = iVar15;
        local_148 = puVar1;
        local_138 = iVar17;
        local_128 = local_158;
        local_d8 = local_158;
        TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar7 = local_128;
        uVar5 = *(uint *)&(param_1->Selection).Elements.field_0x28;
        if (uVar12 != uVar5) {
          puVar16 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
          if (puVar16 == (undefined1 *)0x0) {
            puVar16 = puVar1;
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar14;
            uVar13 = uVar13 + 0x20;
            iVar14 = iVar14 + 1;
            uVar12 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14c760db1;
            uVar12 = *(uint *)(puVar16 + lVar11 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_114 = (int)lVar11;
          uVar12 = local_114 + -1 + uVar13;
          if ((int)uVar5 < (int)uVar12) {
            uVar12 = uVar5;
          }
        }
LAB_14c760db1:
        while( true ) {
          pTVar8 = local_d8;
          if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
              (int)uStack_b0) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_d0.CurrentBitIndex == uVar12) &&
              (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar8 == pTVar7)) break;
          lVar11 = *(longlong *)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_d0.CurrentBitIndex * 0x10);
          local_164 = (int)((ulonglong)lVar11 >> 0x20);
          if ((-1 < lVar11) && (local_164 < (this->Topology->Edges).ArrayNum)) {
            if ((local_178.Data <= (FScriptContainerElement *)&local_164) &&
               (((FScriptContainerElement *)&local_164 < local_178.Data + (longlong)iStack_16c * 4
                && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_170 == iStack_16c) {
              local_170 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_178,&iStack_16c);
            }
            lVar11 = (longlong)local_170;
            local_170 = local_170 + 1;
            *(int *)(local_178.Data + lVar11 * 4) = local_164;
          }
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        }
        (**(code **)(this->_padding_ + 0x18))(this,&local_178);
      }
      else if (EVar3 == Vertex) {
        iVar4 = *(int *)&(param_1->Selection).Elements.field_0x28;
        puVar1 = &(param_1->Selection).Elements.field_0x10;
        local_158 = &param_1->Selection;
        uStack_14c = 1;
        iStack_13c = iVar17;
        if (iVar4 != 0) {
          puVar18 = *(uint **)&(param_1->Selection).Elements.field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)puVar1;
          }
          uVar12 = *puVar18;
          iVar17 = iVar14;
          iVar15 = iVar14;
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar15;
            iVar17 = iVar17 + 0x20;
            iVar15 = iVar15 + 1;
            iStack_13c = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c760f7e;
            uVar12 = puVar18[lVar11 + 1];
          }
          uStack_14c = -uVar12 & uVar12;
          uVar2 = (ulonglong)uStack_14c * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_110 = (int)lVar11;
          iStack_13c = iVar17 + -1 + local_110;
          if (iVar4 < iStack_13c) {
            iStack_13c = iVar4;
          }
        }
LAB_14c760f7e:
        uVar12 = *(uint *)&(param_1->Selection).Elements.field_0x28;
        iStack_130 = *(int *)&(param_1->Selection).Elements.field_0x8 -
                     *(int *)&(param_1->Selection).Elements.field_0x34;
        uVar13 = uVar12 & 0xffffffe0;
        TStack_a0._padding_ = CONCAT44(uStack_14c,iVar15);
        uStack_140 = 0xffffffff;
        TStack_a0.CurrentBitIndex = iStack_13c;
        TStack_a0.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar12 >> 5;
        TStack_a0._28_4_ = iStack_13c;
        TStack_a0.BaseBitIndex = iVar17;
        uStack_80 = CONCAT44(uStack_12c,iStack_130);
        iStack_150 = iVar15;
        local_148 = puVar1;
        local_138 = iVar17;
        iStack_134 = iStack_13c;
        local_128 = local_158;
        local_a8 = local_158;
        TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar7 = local_128;
        uVar5 = *(uint *)&(param_1->Selection).Elements.field_0x28;
        if (uVar12 != uVar5) {
          puVar16 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
          if (puVar16 == (undefined1 *)0x0) {
            puVar16 = puVar1;
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar14;
            uVar13 = uVar13 + 0x20;
            iVar14 = iVar14 + 1;
            uVar12 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14c761081;
            uVar12 = *(uint *)(puVar16 + lVar11 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_10c = (int)lVar11;
          uVar12 = local_10c + -1 + uVar13;
          if ((int)uVar5 < (int)uVar12) {
            uVar12 = uVar5;
          }
        }
LAB_14c761081:
        while( true ) {
          pTVar8 = local_a8;
          if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
              (int)uStack_80) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_a0.CurrentBitIndex == uVar12) &&
              (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar8 == pTVar7)) break;
          lVar11 = *(longlong *)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_a0.CurrentBitIndex * 0x10);
          local_160[0] = (int)((ulonglong)lVar11 >> 0x20);
          if ((-1 < lVar11) && (local_160[0] < (this->Topology->Corners).ArrayNum)) {
            if ((local_178.Data <= (FScriptContainerElement *)local_160) &&
               (((FScriptContainerElement *)local_160 < local_178.Data + (longlong)iStack_16c * 4 &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_170 == iStack_16c) {
              local_170 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_178,&iStack_16c);
            }
            lVar11 = (longlong)local_170;
            local_170 = local_170 + 1;
            *(int *)(local_178.Data + lVar11 * 4) = local_160[0];
          }
          TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        }
        (**(code **)(this->_padding_ + 0x10))(this,&local_178);
      }
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  else {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5797829713544085377>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupTopologyDeformer.cpp"
                       ,0x7f,"Selection.TopologyType == EGeometryTopologyType::Polygroup");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// UpdateSolution @ 14c77b240

void __thiscall
UE::Geometry::FGroupTopologyDeformer::UpdateSolution
          (FGroupTopologyDeformer *this,FDynamicMesh3 *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_*,int)> *param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  FMutex *pFVar3;
  undefined8 *puVar4;
  double *pdVar5;
  atomic<unsigned_char> aVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FDynamicMesh3 *pFVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  bool bVar19;
  short sVar20;
  int iVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  ForElementType<FSetElementId> FVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint *puVar34;
  longlong lVar35;
  <lambda_1> local_res8;
  FDynamicMesh3 *local_res10;
  undefined1 local_res20 [8];
  uint local_1d8;
  longlong local_1d0;
  uint local_1c8 [2];
  uint local_1c0;
  FScriptContainerElement *local_1b8;
  longlong local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  TVector<double>_u_0 local_190;
  double local_178;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  FDynamicMesh3 *local_138;
  longlong local_130;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  FGroupTopologyDeformer *local_e0;
  FDynamicMesh3 **local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  FGroupTopologyDeformer **local_b8;
  double local_a0;
  
  local_res10 = param_1;
  FVertexPositionCache::SetPositions(&this->InitialPositions,param_1);
  puVar1 = &(this->HandleVertices).Elements.field_0x10;
  iStack_168 = 0;
  iVar21 = *(int *)&(this->HandleVertices).Elements.field_0x28;
  pTVar2 = &this->HandleVertices;
  local_150 = 0;
  iStack_154 = 0;
  uStack_164 = 1;
  if (iVar21 != 0) {
    puVar34 = *(uint **)&(this->HandleVertices).Elements.field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)puVar1;
    }
    uStack_164 = *puVar34;
    while (uStack_164 == 0) {
      lVar24 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar21;
      uStack_164 = 1;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14c77b30d;
      uStack_164 = puVar34[lVar24 + 1];
    }
    uStack_164 = -uStack_164 & uStack_164;
    uVar23 = (ulonglong)uStack_164 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_140 = (int)lVar24;
    iStack_154 = local_150 + -1 + local_140;
    if (iVar21 < iStack_154) {
      iStack_154 = iVar21;
    }
  }
LAB_14c77b30d:
  iStack_148 = *(int *)&(this->HandleVertices).Elements.field_0x8 -
               *(int *)&(this->HandleVertices).Elements.field_0x34;
  uVar32 = *(uint *)&(this->HandleVertices).Elements.field_0x28;
  TStack_120._padding_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  uVar29 = uVar32 & 0xffffffe0;
  TStack_120.CurrentBitIndex = iStack_154;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar32 >> 5;
  TStack_120._28_4_ = iStack_154;
  TStack_120.BaseBitIndex = local_150;
  uStack_100 = CONCAT44(uStack_144,iStack_148);
  local_170 = pTVar2;
  local_160 = puVar1;
  iStack_14c = iStack_154;
  local_128 = pTVar2;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar32 < 0) || (iVar21 < (int)uVar32)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar28 = *(uint *)&(this->HandleVertices).Elements.field_0x28;
  if (uVar32 != uVar28) {
    puVar33 = *(undefined1 **)&(this->HandleVertices).Elements.field_0x20;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = puVar1;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar27 * 4);
    while (uVar32 == 0) {
      lVar24 = (longlong)iVar27;
      uVar29 = uVar29 + 0x20;
      iVar27 = iVar27 + 1;
      uVar32 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_14c77b420;
      uVar32 = *(uint *)(puVar33 + lVar24 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_13c = (int)lVar24;
    uVar32 = local_13c + -1 + uVar29;
    if ((int)uVar28 < (int)uVar32) {
      uVar32 = uVar28;
    }
  }
LAB_14c77b420:
  while( true ) {
    pTVar18 = local_128;
    if (*(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34 !=
        (int)uStack_100) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    dVar16 = __real_3fe0000000000000;
    dVar15 = __real_3ff0000000000000;
    if (((TStack_120.CurrentBitIndex == uVar32) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar18 == pTVar2)
       ) break;
    uVar29 = *(uint *)(*(longlong *)&pTVar18->Elements + (longlong)TStack_120.CurrentBitIndex * 0xc)
    ;
    local_138 = local_res10;
    local_1c8[0] = uVar29;
    Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar10 = *(code **)param_2;
    plVar25 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar25 = (longlong *)&param_2->field_0x10;
    }
    uVar22 = (**(code **)(*plVar25 + 8))();
    (*pcVar10)(&local_f8,uVar22,&local_138,local_1c8);
    pFVar17 = local_res10;
    sVar20 = _dclass((int)local_f8);
    if (((sVar20 < 1) && (sVar20 = _dclass((int)uStack_f0), uVar22 = local_e8, sVar20 < 1)) &&
       (sVar20 = _dclass((int)local_e8), sVar20 < 1)) {
      lVar24 = *(longlong *)
                ((pFVar17->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar29 >> 9) * 8);
      puVar4 = (undefined8 *)(lVar24 + (ulonglong)(uVar29 & 0x1ff) * 0x18);
      *puVar4 = local_f8;
      puVar4[1] = uStack_f0;
      *(undefined8 *)(lVar24 + 0x10 + (ulonglong)(uVar29 & 0x1ff) * 0x18) = uVar22;
      if ((pFVar17->ChangeStampShape).bIsEnabled != false) {
        pFVar3 = &(pFVar17->ChangeStampShape).Mutex;
        LOCK();
        bVar19 = pFVar3->State == (atomic<unsigned_char>)0x0;
        if (bVar19) {
          pFVar3->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar19) {
          FMutex::LockSlow(pFVar3);
        }
        puVar34 = &(pFVar17->ChangeStampShape).Value;
        *puVar34 = *puVar34 + 1;
        LOCK();
        aVar6 = pFVar3->State;
        pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
        UNLOCK();
        if (((byte)aVar6 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar3);
        }
      }
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_1d8 = 0;
  local_130 = (longlong)(this->ROIEdges).ArrayNum;
  if (0 < local_130) {
    lVar24 = 0;
    local_1d0 = 0;
    local_1b0 = 0;
    do {
      lVar31 = local_1b0;
      uVar32 = 0;
      if ((int)local_1d8 < (this->ROIEdges).ArrayNum) {
        uVar32 = ~local_1d8 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (this->ROIEdges).AllocatorInstance.Data;
      uVar32 = 0;
      if ((int)local_1d8 < (this->EdgeEncodings).ArrayNum) {
        uVar32 = ~local_1d8 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar21 = *(int *)(pFVar8 + lVar24 + 0x18);
      local_1b8 = (this->EdgeEncodings).AllocatorInstance.Data;
      if ((iVar21 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar23 = (ulonglong)(**(uint **)(pFVar8 + lVar24 + 0x10) & 0x1ff);
      uVar29 = iVar21 - 1;
      lVar30 = *(longlong *)
                ((local_res10->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(**(uint **)(pFVar8 + lVar24 + 0x10) >> 9) * 8);
      local_a0 = *(double *)(lVar30 + 0x10 + uVar23 * 0x18);
      pdVar5 = (double *)(lVar30 + uVar23 * 0x18);
      dVar11 = *pdVar5;
      dVar12 = pdVar5[1];
      uVar32 = 0;
      if ((int)uVar29 < *(int *)(pFVar8 + lVar24 + 0x18)) {
        uVar32 = ~uVar29 >> 0x1f;
      }
      local_1c0 = uVar29;
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_178 = 0.0;
      uVar32 = *(uint *)(*(longlong *)(pFVar8 + lVar24 + 0x10) + (longlong)(int)uVar29 * 4);
      uVar23 = (ulonglong)(uVar32 & 0x1ff);
      lVar30 = *(longlong *)
                ((local_res10->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar32 >> 9) * 8);
      pdVar5 = (double *)(lVar30 + uVar23 * 0x18);
      dVar13 = *pdVar5;
      dVar14 = pdVar5[1];
      dVar7 = *(double *)(lVar30 + 0x10 + uVar23 * 0x18);
      local_190._s_0.Z = dVar7 - local_a0;
      local_190._s_0.X = dVar13 - dVar11;
      local_1a8 = (dVar11 + dVar13) * dVar16;
      local_198 = (local_a0 + dVar7) * dVar16;
      local_190._s_0.Y = dVar14 - dVar12;
      local_1a0 = (dVar12 + dVar14) * dVar16;
      local_a0 = dVar7;
      local_178 = Normalize<double>((TVector<double> *)&local_190._s_0,0.0);
      local_178 = local_178 * dVar16;
      uVar32 = 1;
      if (1 < (int)uVar29) {
        lVar35 = 0x20;
        lVar30 = 1;
        do {
          uVar28 = ~uVar32 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar32 < *(int *)(pFVar8 + lVar24 + 0x18)) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar31 = local_1b0;
          uVar29 = *(uint *)(*(longlong *)(pFVar8 + lVar24 + 0x10) + lVar30 * 4);
          if (*(int *)&(this->HandleVertices).Elements.field_0x8 !=
              *(int *)&(this->HandleVertices).Elements.field_0x34) {
            FVar9 = (this->HandleVertices).Hash.SecondaryData;
            FVar26 = (ForElementType<FSetElementId>)&(this->HandleVertices).Hash;
            if (FVar9 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = FVar9;
            }
            iVar21 = *(int *)((longlong)FVar26 +
                             (ulonglong)((this->HandleVertices).HashSize - 1U & uVar29) * 4);
            if (iVar21 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar2->Elements + (longlong)iVar21 * 0xc) == uVar29)
                goto LAB_14c77baaa;
                iVar21 = *(int *)(*(longlong *)&pTVar2->Elements + 4 + (longlong)iVar21 * 0xc);
              } while (iVar21 != -1);
            }
          }
          uVar29 = 0;
          if ((int)uVar32 < *(int *)(local_1b8 + local_1b0 + 8)) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar29 = 0;
          if ((int)uVar32 < *(int *)(local_1b8 + lVar31 + 8)) {
            uVar29 = uVar28;
          }
          dVar11 = ((*(double *)(lVar35 + *(longlong *)(local_1b8 + lVar31)) +
                    *(double *)(lVar35 + *(longlong *)(local_1b8 + lVar31))) - dVar15) * local_178;
          dVar7 = local_190._s_0.X * dVar11 + local_1a8;
          dVar12 = local_190._s_0.Y * dVar11 + local_1a0;
          dVar11 = local_190._s_0.Z * dVar11 + local_198;
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar31 = *(longlong *)(local_1b8 + lVar31);
          dVar7 = dVar7 + *(double *)(lVar31 + 8 + lVar35);
          dVar12 = dVar12 + *(double *)(lVar31 + 0x10 + lVar35);
          dVar11 = dVar11 + *(double *)(lVar31 + 0x18 + lVar35);
          uVar29 = 0;
          if ((int)uVar32 < *(int *)(pFVar8 + lVar24 + 0x18)) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar17 = local_res10;
          uVar29 = *(uint *)(*(longlong *)(pFVar8 + lVar24 + 0x10) + lVar30 * 4);
          sVar20 = _dclass(SUB84(dVar7,0));
          if (((sVar20 < 1) && (sVar20 = _dclass(SUB84(dVar12,0)), sVar20 < 1)) &&
             (sVar20 = _dclass(SUB84(dVar11,0)), sVar20 < 1)) {
            uVar23 = (ulonglong)(uVar29 & 0x1ff);
            lVar31 = *(longlong *)
                      ((pFVar17->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar29 >> 9) * 8);
            *(double *)(lVar31 + uVar23 * 0x18) = dVar7;
            *(double *)(lVar31 + 8 + uVar23 * 0x18) = dVar12;
            *(double *)(lVar31 + 0x10 + uVar23 * 0x18) = dVar11;
            if ((pFVar17->ChangeStampShape).bIsEnabled != false) {
              pFVar3 = &(pFVar17->ChangeStampShape).Mutex;
              LOCK();
              bVar19 = pFVar3->State == (atomic<unsigned_char>)0x0;
              if (bVar19) {
                pFVar3->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar19) {
                FMutex::LockSlow(pFVar3);
              }
              puVar34 = &(pFVar17->ChangeStampShape).Value;
              *puVar34 = *puVar34 + 1;
              LOCK();
              aVar6 = pFVar3->State;
              pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
              UNLOCK();
              if (((byte)aVar6 & 2) != 0) {
                FMutex::WakeWaitingThread(pFVar3);
              }
            }
          }
LAB_14c77baaa:
          uVar32 = uVar32 + 1;
          lVar30 = lVar30 + 1;
          lVar35 = lVar35 + 0x20;
          lVar31 = local_1b0;
        } while ((int)uVar32 < (int)local_1c0);
      }
      local_1b0 = lVar31 + 0x10;
      local_1d8 = local_1d8 + 1;
      local_1d0 = local_1d0 + 1;
      lVar24 = lVar24 + 0x48;
    } while (local_1d0 < local_130);
  }
  local_d8 = &local_res10;
  local_c0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGroupTopologyDeformer::UpdateSolution'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b8 = &local_e0;
  local_d0.DataPtr = (void **)0x0;
  local_d0.ArrayNum = 0;
  local_res8 = SUB81(this,0);
  local_e0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->ROIFaces).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_c0,local_res8,None,&local_d0);
  FMeshNormals::QuickRecomputeOverlayNormals(local_res10,false,true,true,true);
  return;
}

