// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// operator() @ 144019ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
``anonymous_namespace'::FHullPolygons::Intersect'::__l2::<lambda_1>::operator()
          (void *this,TVector<float,3> *param_1,TVector<float,3> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  undefined1 local_res20 [8];
  uint local_1a8;
  int local_1a4;
  uint local_1a0;
  undefined1 local_198 [4];
  uint local_194;
  uint local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined8 local_180;
  float local_178;
  uint local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  undefined4 local_15c;
  undefined8 local_158;
  longlong *local_150;
  uint local_148;
  int local_144;
  uint *local_140;
  uint local_138;
  ulonglong local_130;
  TPairInitializer<int_const_&,int_const_&> local_128;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int *local_a0;
  uint *local_98;
  undefined4 local_74;
  
  pFVar4 = *(ForAnyElementType **)this;
  uVar25 = *(uint *)(*(longlong *)((longlong)this + 0x28) + 8);
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  iVar18 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar18 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar25,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  TSet<TTuple<UE::Math::TIntVector2<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<int>,int,0>,FDefaultSetAllocator>
  ::Reset(*(TSet<TTuple<UE::Math::TIntVector2<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<int>,int,0>,FDefaultSetAllocator>
            **)((longlong)this + 8));
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              ((longlong)this + 0x20));
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),
             *(int *)(*(longlong *)((longlong)this + 0x28) + 0x18),No);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
             *(int *)(*(longlong *)((longlong)this + 0x28) + 0x18),No);
  plVar16 = *(longlong **)((longlong)this + 0x28);
  uVar21 = 0;
  local_170 = 0xffffffff;
  uVar25 = 0;
  uVar29 = uVar21;
  uVar31 = uVar21;
  uVar27 = uVar21;
  if (0 < (int)plVar16[3]) {
    do {
      uVar19 = (uint)uVar21;
      uVar25 = 0;
      if ((int)uVar19 < (int)plVar16[3]) {
        uVar25 = ~uVar19 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = plVar16[2];
      plVar14 = *(longlong **)((longlong)this + 0x10);
      uVar25 = 0;
      if ((int)uVar19 < (int)plVar14[1]) {
        uVar25 = ~uVar19 >> 0x1f;
      }
      fVar32 = (*(float *)(uVar27 + 4 + lVar30) - *(float *)&param_1->field_0x4) *
               *(float *)&param_2->field_0x4 +
               (*(float *)(uVar27 + lVar30) - *(float *)param_1) * *(float *)param_2 +
               (*(float *)(uVar27 + 8 + lVar30) - *(float *)&param_1->field_0x8) *
               *(float *)&param_2->field_0x8;
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar16 = *(longlong **)((longlong)this + 0x28);
      *(float *)(*plVar14 + uVar31 * 4) = fVar32;
      uVar21 = (ulonglong)(uVar19 + 1);
      uVar25 = (int)uVar29 + (uint)(0.0 < fVar32);
      uVar29 = (ulonglong)uVar25;
      uVar31 = uVar31 + 1;
      uVar27 = uVar27 + 0xc;
    } while ((int)(uVar19 + 1) < (int)plVar16[3]);
  }
  if (uVar25 == *(uint *)(plVar16 + 3)) {
    *(undefined4 *)(plVar16 + 3) = 0;
    if (*(int *)((longlong)plVar16 + 0x1c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)(plVar16 + 2),0,(int *)((longlong)plVar16 + 0x1c));
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x28);
    iVar18 = *(int *)((longlong)&pFVar4[1].Data + 4);
    *(undefined4 *)&pFVar4[1].Data = 0;
    if (iVar18 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
    }
  }
  else if (uVar25 != 0) {
    local_1a8 = 0;
    if (0 < (int)plVar16[1]) {
      do {
        uVar25 = local_1a8;
        local_184 = 3;
        uVar19 = 0;
        if ((int)local_1a8 < (int)plVar16[1]) {
          uVar19 = ~local_1a8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_140 = (uint *)(longlong)(int)local_1a8;
        lVar30 = (longlong)local_140 * 4;
        local_130 = lVar30;
        if (*(int *)(lVar30 + *plVar16) < 0) {
          plVar16 = *(longlong **)((longlong)this + 0x28);
          uVar19 = 0;
          if ((int)local_1a8 < (int)plVar16[1]) {
            uVar19 = ~local_1a8 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_184 = -*(int *)(lVar30 + *plVar16);
          local_1a8 = local_1a8 + 1;
        }
        local_150 = *(longlong **)((longlong)this + 0x28);
        iVar18 = -1;
        iVar15 = 0;
        local_18c = -1;
        local_1a0 = 0xffffffff;
        iVar26 = iVar15;
        if (local_184 < 1) {
LAB_14401a1d5:
          local_1a0 = local_184 - 1;
          local_18c = 0;
        }
        else {
          iVar18 = -1;
          local_138 = ~local_1a8;
          lVar30 = (longlong)(int)local_1a8;
          iVar26 = 0;
          do {
            plVar14 = local_150;
            uVar19 = iVar15 + local_1a8;
            plVar16 = *(longlong **)((longlong)this + 0x10);
            uVar20 = 0;
            if ((int)uVar19 < (int)local_150[1]) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar20 = *(uint *)(*plVar14 + lVar30 * 4);
            uVar28 = 0;
            if ((int)uVar20 < (int)plVar16[1]) {
              uVar28 = ~uVar20 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar10 = 0.0 < *(float *)(*plVar16 + (longlong)(int)uVar20 * 4);
            if (iVar18 == -1) {
              if (!bVar10) {
                iVar18 = iVar15;
              }
            }
            else if ((local_18c == -1) && (bVar10)) {
              local_1a0 = uVar19 + local_138;
              local_18c = iVar15;
            }
            iVar15 = iVar15 + 1;
            lVar30 = lVar30 + 1;
            iVar26 = iVar26 + (uint)bVar10;
          } while (iVar15 < local_184);
          if (local_18c == -1) goto LAB_14401a1d5;
        }
        plVar16 = local_150;
        if (iVar26 != local_184) {
          if (iVar26 == 0) {
            iVar18 = local_184 + local_1a8;
            uVar29 = local_130;
            for (; (int)uVar25 < iVar18; uVar25 = uVar25 + 1) {
              plVar16 = *(longlong **)((longlong)this + 0x28);
              pFVar4 = *(ForAnyElementType **)this;
              uVar19 = 0;
              if ((int)uVar25 < (int)plVar16[1]) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar22 = (FScriptContainerElement *)(*plVar16 + uVar29);
              if (((pFVar4->Data <= pFVar22) &&
                  (pFVar22 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4))
                 && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar26 = *(int *)&pFVar4[1].Data;
              piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
              if (iVar26 == *piVar1) {
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar4,piVar1);
              }
              *(int *)&pFVar4[1].Data = iVar26 + 1;
              uVar29 = uVar29 + 4;
              *(undefined4 *)(pFVar4->Data + (longlong)iVar26 * 4) = *(undefined4 *)pFVar22;
            }
          }
          else {
            local_1a4 = (local_1a0 - iVar18) + 1;
            if ((iVar18 == 0) && (iVar26 = local_184 + -1, 0 < iVar26)) {
              uVar25 = local_1a8 + iVar26;
              do {
                plVar14 = *(longlong **)((longlong)this + 0x10);
                uVar19 = 0;
                if ((int)uVar25 < (int)plVar16[1]) {
                  uVar19 = ~uVar25 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar19 = *(uint *)(*plVar16 + (longlong)(int)uVar25 * 4);
                uVar20 = 0;
                if ((int)uVar19 < (int)plVar14[1]) {
                  uVar20 = ~uVar19 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (0.0 < *(float *)(*plVar14 + (longlong)(int)uVar19 * 4)) break;
                uVar25 = uVar25 - 1;
                iVar15 = iVar26 + -1;
                local_1a4 = local_1a4 + 1;
                iVar18 = iVar26;
                iVar26 = iVar15;
              } while (0 < iVar15);
            }
            local_b8 = *(undefined8 *)((longlong)this + 8);
            local_b0 = *(undefined8 *)((longlong)this + 0x10);
            local_a8 = *(undefined8 *)((longlong)this + 0x28);
            uVar19 = local_1a8 + (local_184 + -1 + iVar18) % local_184;
            uVar25 = 0;
            if ((int)uVar19 < (int)plVar16[1]) {
              uVar25 = ~uVar19 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar20 = local_1a8 + iVar18;
            iVar26 = *(int *)(*plVar16 + (longlong)(int)uVar19 * 4);
            uVar25 = 0;
            if ((int)uVar20 < (int)plVar16[1]) {
              uVar25 = ~uVar20 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_188 = ```anonymous_namespace'::FHullPolygons::Intersect'::__l2::<lambda_1>::
                        operator()'::__l14::<lambda_2>::operator()
                                  (&local_b8,*(int *)(*plVar16 + (longlong)(int)uVar20 * 4),iVar26);
            uVar19 = local_18c + local_1a8;
            uVar25 = 0;
            if ((int)uVar19 < (int)plVar16[1]) {
              uVar25 = ~uVar19 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar20 = local_1a8 + local_1a0;
            iVar26 = *(int *)(*plVar16 + (longlong)(int)uVar19 * 4);
            uVar25 = 0;
            if ((int)uVar20 < (int)plVar16[1]) {
              uVar25 = ~uVar20 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_194 = ```anonymous_namespace'::FHullPolygons::Intersect'::__l2::<lambda_1>::
                        operator()'::__l14::<lambda_2>::operator()
                                  (&local_b8,*(int *)(*plVar16 + (longlong)(int)uVar20 * 4),iVar26);
            local_144 = local_188;
            local_148 = local_194;
            if (local_188 == -1) {
              uVar25 = iVar18 + local_1a8;
              uVar19 = 0;
              if ((int)uVar25 < (int)plVar16[1]) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_144 = *(int *)(*plVar16 + (longlong)(int)uVar25 * 4);
            }
            else {
              local_1a4 = local_1a4 + 1;
            }
            if (local_194 == 0xffffffff) {
              uVar25 = local_1a0 + local_1a8;
              uVar19 = 0;
              if ((int)uVar25 < (int)plVar16[1]) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_148 = *(uint *)(*plVar16 + (longlong)(int)uVar25 * 4);
            }
            else {
              local_1a4 = local_1a4 + 1;
            }
            if (1 < local_1a4) {
              local_a0 = &local_144;
              local_170 = local_148;
              local_98 = &local_148;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           **)((longlong)this + 0x20),&local_128,(bool *)&local_a0);
              if (local_1a4 != 2) {
                if (3 < local_1a4) {
                  pFVar4 = *(ForAnyElementType **)this;
                  local_16c = -local_1a4;
                  if (((pFVar4->Data <= (FScriptContainerElement *)&local_16c) &&
                      ((FScriptContainerElement *)&local_16c <
                       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar26 = *(int *)&pFVar4[1].Data;
                  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
                  if (iVar26 == *piVar1) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,pFVar4,piVar1);
                  }
                  *(int *)&pFVar4[1].Data = iVar26 + 1;
                  *(int *)(pFVar4->Data + (longlong)iVar26 * 4) = local_16c;
                }
                pFVar4 = *(ForAnyElementType **)this;
                iVar26 = *(int *)&pFVar4[1].Data;
                if (local_188 != -1) {
                  if (((pFVar4->Data <= (FScriptContainerElement *)&local_188) &&
                      ((FScriptContainerElement *)&local_188 <
                       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = *(int *)&pFVar4[1].Data;
                  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,pFVar4,piVar1);
                  }
                  *(int *)&pFVar4[1].Data = iVar15 + 1;
                  *(int *)(pFVar4->Data + (longlong)iVar15 * 4) = local_188;
                }
                if ((int)local_1a0 < iVar18) {
                  if (iVar18 < local_184) {
                    uVar25 = iVar18 + local_1a8;
                    lVar30 = (longlong)(int)(iVar18 + local_1a8);
                    uVar29 = (ulonglong)(uint)(local_184 - iVar18);
                    do {
                      pFVar4 = *(ForAnyElementType **)this;
                      uVar19 = 0;
                      if ((int)uVar25 < (int)plVar16[1]) {
                        uVar19 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      local_168 = *(undefined4 *)(*plVar16 + lVar30 * 4);
                      if (((pFVar4->Data <= (FScriptContainerElement *)&local_168) &&
                          ((FScriptContainerElement *)&local_168 <
                           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar10)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar18 = *(int *)&pFVar4[1].Data;
                      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
                      if (iVar18 == *piVar1) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,pFVar4,piVar1);
                      }
                      *(int *)&pFVar4[1].Data = iVar18 + 1;
                      uVar25 = uVar25 + 1;
                      lVar30 = lVar30 + 1;
                      *(undefined4 *)(pFVar4->Data + (longlong)iVar18 * 4) = local_168;
                      uVar29 = uVar29 - 1;
                    } while (uVar29 != 0);
                  }
                  iVar18 = 0;
                  if (local_1a0 < 0x80000000) goto LAB_14401a97f;
                }
                else {
LAB_14401a97f:
                  uVar25 = local_1a8 + iVar18;
                  uVar29 = (ulonglong)((local_1a0 - iVar18) + 1);
                  lVar30 = (longlong)(int)uVar25;
                  do {
                    pFVar4 = *(ForAnyElementType **)this;
                    uVar19 = 0;
                    if ((int)uVar25 < (int)plVar16[1]) {
                      uVar19 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_164 = *(undefined4 *)(*plVar16 + lVar30 * 4);
                    if (((pFVar4->Data <= (FScriptContainerElement *)&local_164) &&
                        ((FScriptContainerElement *)&local_164 <
                         pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar18 = *(int *)&pFVar4[1].Data;
                    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
                    if (iVar18 == *piVar1) {
                      iVar18 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,pFVar4,piVar1);
                    }
                    *(int *)&pFVar4[1].Data = iVar18 + 1;
                    uVar25 = uVar25 + 1;
                    lVar30 = lVar30 + 1;
                    *(undefined4 *)(pFVar4->Data + (longlong)iVar18 * 4) = local_164;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
                if (local_194 != 0xffffffff) {
                  pFVar4 = *(ForAnyElementType **)this;
                  if (((pFVar4->Data <= (FScriptContainerElement *)&local_194) &&
                      ((FScriptContainerElement *)&local_194 <
                       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar18 = *(int *)&pFVar4[1].Data;
                  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
                  if (iVar18 == *piVar1) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,pFVar4,piVar1);
                  }
                  *(int *)&pFVar4[1].Data = iVar18 + 1;
                  *(uint *)(pFVar4->Data + (longlong)iVar18 * 4) = local_194;
                }
                if ((*(int *)(*(longlong *)this + 8) - iVar26 != local_1a4) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NewPolygons.Num() - NewPolygonStart == NewPolyLen",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionConvexUtility.cpp"
                                        ,0xd3d,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
            }
          }
        }
        local_1a8 = local_1a8 + local_184;
        plVar16 = *(longlong **)((longlong)this + 0x28);
      } while ((int)local_1a8 < (int)plVar16[1]);
    }
    uVar25 = local_170;
    if ((local_170 != 0xffffffff) &&
       (iVar18 = *(int *)(*(longlong *)((longlong)this + 0x20) + 8) -
                 *(int *)(*(longlong *)((longlong)this + 0x20) + 0x34), 2 < iVar18)) {
      pFVar4 = *(ForAnyElementType **)this;
      iVar26 = *(int *)&pFVar4[1].Data;
      if (3 < iVar18) {
        local_160 = -iVar18;
        if (((pFVar4->Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar15 + 1;
        *(int *)(pFVar4->Data + (longlong)iVar15 * 4) = local_160;
      }
      local_190 = uVar25;
      iVar15 = 0;
      while( true ) {
        pFVar4 = *(ForAnyElementType **)this;
        if (((pFVar4->Data <= (FScriptContainerElement *)&local_190) &&
            ((FScriptContainerElement *)&local_190 <
             pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar11 + 1;
        *(uint *)(pFVar4->Data + (longlong)iVar11 * 4) = local_190;
        plVar16 = *(longlong **)((longlong)this + 0x20);
        if ((int)plVar16[1] == *(int *)((longlong)plVar16 + 0x34)) break;
        plVar14 = plVar16 + 7;
        if ((longlong *)plVar16[8] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar16[8];
        }
        uVar19 = *(uint *)((longlong)plVar14 + (ulonglong)((int)plVar16[9] - 1U & local_190) * 4);
        if (uVar19 == 0xffffffff) break;
        while (puVar13 = (uint *)((longlong)(int)uVar19 * 0x10 + *plVar16), *puVar13 != local_190) {
          uVar19 = puVar13[2];
          if (uVar19 == 0xffffffff) goto LAB_14401ad9c;
        }
        puVar12 = puVar13 + 1;
        if (puVar13 == (uint *)0x0) {
          puVar12 = (uint *)0x0;
        }
        if (puVar12 == (uint *)0x0) break;
        local_190 = *puVar12;
        iVar15 = iVar15 + 1;
        if ((local_190 == uVar25) || (iVar18 <= iVar15)) break;
      }
LAB_14401ad9c:
      if ((iVar15 != iVar18) || (local_190 != uVar25)) {
        TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)this,iVar26,No);
        fVar32 = 0.0;
        plVar16 = *(longlong **)((longlong)this + 0x20);
        uStack_10c = 1;
        local_180 = 0;
        local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
        local_178 = 0.0;
        local_15c = *(undefined4 *)(*(longlong *)((longlong)this + 0x28) + 0x18);
        iStack_110 = 0;
        iVar18 = (int)plVar16[5];
        local_f8 = 0;
        iStack_fc = 0;
        if (iVar18 != 0) {
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar24 = local_108;
          }
          uVar25 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
          local_f8 = 0;
          while (uVar25 == 0) {
            lVar30 = (longlong)iStack_110;
            local_f8 = local_f8 + 0x20;
            iStack_110 = iStack_110 + 1;
            iStack_fc = iVar18;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110)
            goto LAB_14401ae6d;
            uVar25 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar30 * 4 + 4);
          }
          uStack_10c = -uVar25 & uVar25;
          uVar29 = (ulonglong)uStack_10c * 2 + 1;
          lVar30 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_128.Key._4_4_ = (int)lVar30;
          iStack_fc = local_f8 + -1 + local_128.Key._4_4_;
          if (iVar18 < iStack_fc) {
            iStack_fc = iVar18;
          }
        }
LAB_14401ae6d:
        uVar25 = *(uint *)(plVar16 + 5);
        uStack_f4 = local_74;
        iStack_f0 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
        uVar19 = uVar25 & 0xffffffe0;
        uStack_100 = 0xffffffff;
        TStack_e0.CurrentBitIndex = iStack_fc;
        TStack_e0.UnvisitedBitMask = 0xffffffff;
        TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
        iVar18 = (int)uVar25 >> 5;
        TStack_e0._28_4_ = local_74;
        TStack_e0.BaseBitIndex = local_f8;
        uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
        local_118 = plVar16;
        local_e8 = plVar16;
        TStack_e0.Array = local_108;
        if (((int)uVar25 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar33 = __real_3f800000;
        uVar20 = *(uint *)(plVar16 + 5);
        if (uVar25 != uVar20) {
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
          }
          uVar25 = -1 << ((byte)uVar25 & 0x1f) &
                   *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
          while (uVar25 == 0) {
            lVar30 = (longlong)iVar18;
            uVar19 = uVar19 + 0x20;
            iVar18 = iVar18 + 1;
            uVar25 = uVar20;
            if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_14401af80;
            uVar25 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar30 * 4 + 4);
          }
          uVar29 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar30 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_128.Value._0_4_ = (int)lVar30;
          uVar25 = (int)local_128.Value + -1 + uVar19;
          if ((int)uVar20 < (int)uVar25) {
            uVar25 = uVar20;
          }
        }
LAB_14401af80:
        while( true ) {
          plVar14 = local_e8;
          if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_e0.CurrentBitIndex == uVar25) &&
              (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2))) &&
             (plVar14 == plVar16)) break;
          pFVar4 = *(ForAnyElementType **)this;
          local_158 = *(undefined8 *)(*plVar14 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
          if (((pFVar4->Data <= (FScriptContainerElement *)&local_158) &&
              ((FScriptContainerElement *)&local_158 <
               pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar18 + 1;
          *(uint *)(pFVar4->Data + (longlong)iVar18 * 4) = (uint)local_158;
          pFVar4 = *(ForAnyElementType **)this;
          if (((pFVar4->Data <= (FScriptContainerElement *)((longlong)&local_158 + 4U)) &&
              ((FScriptContainerElement *)((longlong)&local_158 + 4U) <
               pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar18 + 1;
          *(undefined4 *)(pFVar4->Data + (longlong)iVar18 * 4) = local_158._4_4_;
          pFVar4 = *(ForAnyElementType **)this;
          if (((pFVar4->Data <= (FScriptContainerElement *)&local_15c) &&
              ((FScriptContainerElement *)&local_15c <
               pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar18 + 1;
          *(undefined4 *)(pFVar4->Data + (longlong)iVar18 * 4) = local_15c;
          lVar17 = (longlong)(int)(uint)local_158;
          lVar30 = *(longlong *)((longlong)this + 0x28);
          uVar19 = 0;
          if ((int)(uint)local_158 < *(int *)(lVar30 + 0x18)) {
            uVar19 = ~(uint)local_158 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x10);
          fVar32 = fVar32 + fVar33;
          local_180 = CONCAT44(local_180._4_4_ + *(float *)(lVar30 + 4 + lVar17 * 0xc),
                               (float)local_180 + *(float *)(lVar30 + lVar17 * 0xc));
          local_178 = local_178 + *(float *)(lVar30 + 8 + lVar17 * 0xc);
          TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
        }
        lVar30 = *(longlong *)((longlong)this + 0x28);
        fVar33 = fVar33 / fVar32;
        local_178 = local_178 * fVar33;
        local_180 = CONCAT44(local_180._4_4_ * fVar33,(float)local_180 * fVar33);
        if (((*(undefined8 **)(lVar30 + 0x10) <= &local_180) &&
            (&local_180 <
             (undefined8 *)
             ((longlong)*(undefined8 **)(lVar30 + 0x10) + (longlong)*(int *)(lVar30 + 0x1c) * 0xc)))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar18 = *(int *)(lVar30 + 0x18);
        if (iVar18 == *(int *)(lVar30 + 0x1c)) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(lVar30 + 0x10),(int *)(lVar30 + 0x1c));
        }
        *(int *)(lVar30 + 0x18) = iVar18 + 1;
        lVar30 = *(longlong *)(lVar30 + 0x10);
        *(undefined8 *)(lVar30 + (longlong)iVar18 * 0xc) = local_180;
        *(float *)(lVar30 + 8 + (longlong)iVar18 * 0xc) = local_178;
      }
    }
    puVar5 = *(undefined8 **)((longlong)this + 0x28);
    uVar29 = 0;
    puVar6 = *(undefined8 **)this;
    iVar18 = 0;
    uVar2 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar9;
    *puVar6 = uVar2;
    puVar6[1] = uVar8;
    local_170 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
    uVar31 = (ulonglong)(int)local_170;
    local_130 = uVar31;
    if (0 < (int)local_170) {
      local_150 = (longlong *)0x0;
      uVar31 = uVar29;
      uVar27 = uVar29;
      uVar21 = uVar29;
      do {
        plVar16 = *(longlong **)((longlong)this + 0x10);
        uVar19 = (uint)uVar29;
        uVar20 = ~uVar19 >> 0x1f;
        uVar28 = (uint)uVar21;
        uVar25 = 0;
        if ((int)uVar19 < (int)plVar16[1]) {
          uVar25 = uVar20;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)(*plVar16 + uVar31 * 4) <= 0.0) {
          uVar21 = (ulonglong)(uVar28 + 1);
          plVar16 = *(longlong **)((longlong)this + 0x18);
          uVar25 = 0;
          if ((int)uVar19 < (int)plVar16[1]) {
            uVar25 = uVar20;
          }
          plVar14 = (longlong *)((longlong)local_150 + 1);
          local_140 = (uint *)local_150;
          if ((uVar25 == 0) &&
             (local_150 = (longlong *)((longlong)local_150 + 1),
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             plVar14 = local_150, bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_150 = plVar14;
          *(uint *)(*plVar16 + uVar31 * 4) = uVar28;
          lVar30 = *(longlong *)((longlong)this + 0x28);
          uVar25 = 0;
          if ((int)uVar19 < *(int *)(lVar30 + 0x18)) {
            uVar25 = uVar20;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x10);
          uVar2 = *(undefined8 *)(lVar30 + uVar27);
          uVar3 = *(undefined4 *)(lVar30 + 8 + uVar27);
          lVar30 = *(longlong *)((longlong)this + 0x28);
          uVar25 = 0;
          if ((int)uVar28 < *(int *)(lVar30 + 0x18)) {
            uVar25 = ~uVar28 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x10);
          *(undefined8 *)(lVar30 + (longlong)local_140 * 0xc) = uVar2;
          *(undefined4 *)(lVar30 + 8 + (longlong)local_140 * 0xc) = uVar3;
        }
        iVar18 = (int)uVar21;
        uVar29 = (ulonglong)(uVar19 + 1);
        uVar31 = uVar31 + 1;
        uVar27 = uVar27 + 0xc;
      } while ((longlong)uVar31 < (longlong)local_130);
      uVar31 = (ulonglong)local_170;
    }
    uVar25 = (uint)uVar31;
    if (iVar18 < (int)uVar25) {
      lVar30 = *(longlong *)((longlong)this + 0x28);
      uVar31 = uVar31 & 0xffffffff;
      if ((int)uVar25 < *(int *)(lVar30 + 0x18)) {
        lVar17 = (longlong)(int)uVar25;
        lVar23 = (longlong)(int)uVar25 * 0xc;
        iVar26 = iVar18 - uVar25;
        do {
          uVar19 = (uint)uVar31;
          uVar25 = 0;
          if ((int)uVar19 < *(int *)(lVar30 + 0x18)) {
            uVar25 = ~uVar19 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar20 = uVar19 + iVar26;
          uVar2 = *(undefined8 *)(lVar23 + *(longlong *)(lVar30 + 0x10));
          uVar3 = *(undefined4 *)(lVar23 + 8 + *(longlong *)(lVar30 + 0x10));
          lVar30 = *(longlong *)((longlong)this + 0x28);
          uVar25 = 0;
          if ((int)uVar20 < *(int *)(lVar30 + 0x18)) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar31 = (ulonglong)(uVar19 + 1);
          lVar30 = *(longlong *)(lVar30 + 0x10) + (iVar18 - lVar17) * 0xc;
          *(undefined8 *)(lVar30 + lVar23) = uVar2;
          *(undefined4 *)(lVar30 + 8 + lVar23) = uVar3;
          lVar23 = lVar23 + 0xc;
          lVar30 = *(longlong *)((longlong)this + 0x28);
          uVar25 = local_170;
        } while ((int)(uVar19 + 1) < *(int *)(lVar30 + 0x18));
      }
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(lVar30 + 0x10),
                 (*(int *)(lVar30 + 0x18) - uVar25) + iVar18,No);
    }
    puVar5 = *(undefined8 **)((longlong)this + 0x28);
    puVar13 = (uint *)*puVar5;
    iVar26 = *(int *)(puVar5 + 1);
    local_140 = puVar13 + iVar26;
    while( true ) {
      puVar12 = local_140;
      if (*(int *)(puVar5 + 1) != iVar26) {
        local_198[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (puVar13 == puVar12) break;
      uVar19 = *puVar13;
      if ((int)uVar19 < 0) {
LAB_14401b739:
        puVar13 = puVar13 + 1;
      }
      else {
        if ((int)uVar25 <= (int)uVar19) {
          *puVar13 = (uVar19 - uVar25) + iVar18;
          goto LAB_14401b739;
        }
        plVar16 = *(longlong **)((longlong)this + 0x18);
        uVar20 = 0;
        if ((int)uVar19 < (int)plVar16[1]) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *puVar13 = *(uint *)(*plVar16 + (longlong)(int)uVar19 * 4);
        puVar13 = puVar13 + 1;
      }
    }
  }
  return;
}

// operator() @ 14401dee0

void __thiscall
``anonymous_namespace'::FHullPolygons::EstimateSharpContact'::__l8::<lambda_2>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TInterval1<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res10 [8];
  float local_28;
  
  iVar2 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    piVar3 = *(int **)this;
    fVar5 = (float)((ulonglong)*(undefined8 *)pFVar4 >> 0x20);
    fVar6 = *(float *)(pFVar4 + 8);
    local_28 = (float)*(undefined8 *)pFVar4;
    fVar7 = fVar5 * (float)piVar3[0xc] + local_28 * (float)piVar3[0xb] + fVar6 * (float)piVar3[0xd];
    if (fVar7 < param_2->Min) {
      param_2->Min = fVar7;
    }
    if (param_2->Max <= fVar7 && fVar7 != param_2->Max) {
      param_2->Max = fVar7;
    }
    if (2 < *piVar3) {
      fVar6 = fVar5 * (float)piVar3[0xf] + local_28 * (float)piVar3[0xe] +
              fVar6 * (float)piVar3[0x10];
      if (fVar6 < param_2[1].Min) {
        param_2[1].Min = fVar6;
      }
      if (param_2[1].Max <= fVar6 && fVar6 != param_2[1].Max) {
        param_2[1].Max = fVar6;
      }
    }
    pFVar4 = pFVar4 + 0xc;
  }
  return;
}

// ComputeArea @ 144027bf0

float __thiscall _anon_140741B8::FHullPolygons::ComputeArea(FHullPolygons *this)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  
  fVar13 = __real_3f000000;
  iVar8 = (this->PackedPolygons).ArrayNum;
  uVar10 = 0;
  fVar19 = 0.0;
  if (iVar8 < 1) {
    return 0.0;
  }
  do {
    iVar12 = 3;
    uVar9 = 0;
    if ((int)uVar10 < iVar8) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    if (*(int *)((this->PackedPolygons).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) < 0) {
      uVar9 = 0;
      if ((int)uVar10 < (this->PackedPolygons).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar13 = (float)(*pcVar4)();
        return fVar13;
      }
      iVar12 = -*(int *)((this->PackedPolygons).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
      uVar10 = uVar10 + 1;
    }
    uVar9 = 0;
    if ((int)uVar10 < (this->PackedPolygons).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    uVar9 = *(uint *)((this->PackedPolygons).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
    uVar6 = 0;
    if ((int)uVar9 < (this->Vertices).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      fVar13 = (float)(*pcVar4)();
      return fVar13;
    }
    pFVar3 = (this->Vertices).AllocatorInstance.Data;
    uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 * 0xc);
    fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar9 * 0xc + 8);
    if (2 < iVar12) {
      uVar9 = uVar10 + 1;
      fStack_d4 = (float)((ulonglong)uVar1 >> 0x20);
      lVar11 = (longlong)(int)uVar10 * 4 + 4;
      local_d8 = (float)uVar1;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->PackedPolygons).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          fVar13 = (float)(*pcVar4)();
          return fVar13;
        }
        uVar6 = *(uint *)((this->PackedPolygons).AllocatorInstance.Data + lVar11);
        uVar7 = 0;
        if ((int)uVar6 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          fVar13 = (float)(*pcVar4)();
          return fVar13;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        uVar9 = uVar9 + 1;
        uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar6 * 0xc);
        fVar15 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 0xc + 8);
        uVar6 = 0;
        if ((int)uVar9 < (this->PackedPolygons).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          fVar13 = (float)(*pcVar4)();
          return fVar13;
        }
        lVar11 = lVar11 + 4;
        uVar6 = *(uint *)((this->PackedPolygons).AllocatorInstance.Data + lVar11);
        uVar7 = 0;
        if ((int)uVar6 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          fVar13 = (float)(*pcVar4)();
          return fVar13;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        local_c8 = (float)uVar1;
        fStack_c4 = (float)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar6 * 0xc);
        fVar15 = fVar15 - fVar2;
        fVar18 = (float)uVar1 - local_d8;
        fVar17 = (float)((ulonglong)uVar1 >> 0x20) - fStack_d4;
        fVar14 = *(float *)(pFVar3 + (longlong)(int)uVar6 * 0xc + 8) - fVar2;
        fVar16 = fVar14 * (local_c8 - local_d8) - fVar18 * fVar15;
        fVar15 = fVar17 * fVar15 - fVar14 * (fStack_c4 - fStack_d4);
        fVar14 = fVar18 * (fStack_c4 - fStack_d4) - fVar17 * (local_c8 - local_d8);
        fVar19 = fVar19 + SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14) * fVar13;
      } while ((int)(uVar9 + (1 - uVar10)) < iVar12);
    }
    iVar8 = (this->PackedPolygons).ArrayNum;
    uVar10 = uVar10 + iVar12;
    if (iVar8 <= (int)uVar10) {
      return fVar19;
    }
  } while( true );
}

// Init @ 1440450c0

void __thiscall _anon_140741B8::FHullPolygons::Init(FHullPolygons *this,FConvex *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  EIndexType EVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  TConvexHalfEdgeStructureData<int> *this_00;
  TConvexHalfEdgeStructureData<short> *this_01;
  TConvexHalfEdgeStructureData<unsigned_char> *this_02;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FPlaneData *pFVar11;
  FPlaneData *pFVar12;
  FPlaneData *pFVar13;
  FHalfEdgeData *pFVar14;
  FHalfEdgeData *pFVar15;
  FHalfEdgeData *pFVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int local_38;
  uint local_34 [3];
  
  (this->Vertices).ArrayNum = 0;
  if ((this->Vertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Vertices).AllocatorInstance,0,&(this->Vertices).ArrayMax);
  }
  piVar1 = &(this->PackedPolygons).ArrayMax;
  (this->PackedPolygons).ArrayNum = 0;
  if ((this->PackedPolygons).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  uVar5 = __real_ff7fffff;
  *(undefined4 *)&(this->Bounds).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->Bounds).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->Bounds).MMin.field_0x8 = 0x7f7fffff;
  *(ulonglong *)&(this->Bounds).MMax = CONCAT44(uVar5,uVar5);
  *(undefined4 *)&(this->Bounds).MMax.field_0x8 = uVar5;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Vertices,&param_1->Vertices);
  iVar4 = (param_1->Planes).ArrayNum;
  uVar18 = iVar4 * 3;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*piVar1 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,(ForAnyElementType *)this,(this->PackedPolygons).ArrayNum,piVar1);
  }
  iVar19 = 0;
  if (0 < iVar4) {
    do {
      EVar3 = (param_1->StructureData).IndexType;
      if (EVar3 == Small) {
        pFVar13 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
                            ((param_1->StructureData).Data.DataS,iVar19);
        uVar18 = (uint)pFVar13->NumHalfEdges;
LAB_14404521d:
        if ((int)uVar18 < 4) {
          iVar17 = 0;
          if ((int)uVar18 < 1) goto LAB_1440453f4;
        }
        else {
          pFVar7 = (this->PackedPolygons).AllocatorInstance.Data;
          local_38 = -uVar18;
          if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)*piVar1 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = (this->PackedPolygons).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)this,piVar1);
          }
          iVar17 = 0;
          (this->PackedPolygons).ArrayNum = iVar10 + 1;
          *(int *)((this->PackedPolygons).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_38;
        }
        do {
          EVar3 = (param_1->StructureData).IndexType;
          if (EVar3 == Small) {
            this_02 = (param_1->StructureData).Data.DataS;
            iVar10 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
                               (this_02,iVar19,iVar17);
            pFVar16 = Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
                                (this_02,iVar10);
            local_34[0] = (uint)pFVar16->VertexIndex;
          }
          else if (EVar3 == Medium) {
            this_01 = (param_1->StructureData).Data.DataM;
            iVar10 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                               (this_01,iVar19,iVar17);
            pFVar15 = Chaos::TConvexHalfEdgeStructureData<short>::GetHalfEdge(this_01,iVar10);
            local_34[0] = (uint)pFVar15->VertexIndex;
          }
          else if (EVar3 == Large) {
            this_00 = (param_1->StructureData).Data.DataL;
            iVar10 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
                               (this_00,iVar19,iVar17);
            pFVar14 = Chaos::TConvexHalfEdgeStructureData<int>::GetHalfEdge(this_00,iVar10);
            local_34[0] = pFVar14->VertexIndex;
          }
          else {
            local_34[0] = 0xffffffff;
          }
          pFVar7 = (this->PackedPolygons).AllocatorInstance.Data;
          if (((pFVar7 <= (FScriptContainerElement *)local_34) &&
              ((FScriptContainerElement *)local_34 < pFVar7 + (longlong)*piVar1 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = (this->PackedPolygons).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)this,piVar1);
          }
          iVar17 = iVar17 + 1;
          (this->PackedPolygons).ArrayNum = iVar10 + 1;
          *(uint *)((this->PackedPolygons).AllocatorInstance.Data + (longlong)iVar10 * 4) =
               local_34[0];
        } while (iVar17 < (int)uVar18);
      }
      else {
        if (EVar3 == Medium) {
          pFVar12 = Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
                              ((param_1->StructureData).Data.DataM,iVar19);
          uVar18 = (uint)pFVar12->NumHalfEdges;
          goto LAB_14404521d;
        }
        if (EVar3 == Large) {
          pFVar11 = Chaos::TConvexHalfEdgeStructureData<int>::GetPlane
                              ((param_1->StructureData).Data.DataL,iVar19);
          uVar18 = pFVar11->NumHalfEdges;
          goto LAB_14404521d;
        }
      }
LAB_1440453f4:
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar4);
  }
  uVar2 = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  uVar5 = *(undefined4 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  uVar6 = *(undefined4 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->Bounds).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined8 *)&(this->Bounds).MMax = uVar2;
  *(undefined4 *)&(this->Bounds).MMin.field_0x8 = uVar5;
  *(undefined4 *)&(this->Bounds).MMax.field_0x8 = uVar6;
  return;
}

// Intersect @ 1440459b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_140741B8::FHullPolygons::Intersect(FHullPolygons *this,FConvex *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  EIndexType EVar3;
  FScriptContainerElement *pFVar4;
  TConvexHalfEdgeStructureData<int> *pTVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  <lambda_2> local_248;
  <lambda_2> local_247;
  <lambda_2> local_246 [6];
  int local_240 [2];
  int local_238 [2];
  int local_230 [2];
  float local_228;
  float local_224;
  float local_220;
  float local_218;
  float local_214;
  float local_210;
  void *local_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  void **local_188;
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_180;
  void **local_178;
  void **local_170;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  FHullPolygons *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  undefined8 local_148;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  void *local_f8;
  undefined4 local_f0;
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_188 = &local_1e8;
  local_180 = &local_e8;
  local_178 = &local_1f8;
  uVar16 = 0;
  local_170 = &local_208;
  lVar19 = (longlong)(param_1->Planes).ArrayNum;
  local_168 = &local_138;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_138._32_8_ = 0;
  local_138._40_4_ = 0;
  local_138._44_4_ = 0x80;
  local_138._48_4_ = 0xffffffff;
  local_138._52_4_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  uVar15 = uVar16;
  uVar18 = uVar16;
  local_160 = this;
  if (0 < lVar19) {
    do {
      iVar14 = (param_1->Planes).ArrayNum;
      uVar17 = (uint)uVar18;
      uVar10 = 0;
      if ((int)uVar17 < iVar14) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_258 = (longlong)(int)uVar17;
        local_250 = (longlong)iVar14;
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
      pFVar4 = (param_1->Planes).AllocatorInstance.Data;
      pFVar1 = pFVar4 + uVar15;
      local_1a0 = *(float *)pFVar1;
      fStack_19c = *(float *)(pFVar1 + 4);
      fStack_198 = *(float *)(pFVar1 + 8);
      fStack_194 = *(float *)(pFVar1 + 0xc);
      uVar2 = *(undefined8 *)(pFVar4 + uVar15 + 0x10);
      fStack_190 = (float)uVar2;
      fStack_18c = (float)((ulonglong)uVar2 >> 0x20);
      local_1d8._8_4_ = fStack_18c;
      local_1d8._4_4_ = fStack_190;
      local_1d8._0_4_ = fStack_194;
      local_228 = fStack_194 * param_2 + local_1a0;
      local_224 = fStack_190 * param_2 + fStack_19c;
      local_220 = fStack_18c * param_2 + fStack_198;
      ``anonymous_namespace'::FHullPolygons::Intersect'::__l2::<lambda_1>::operator()
                (&local_188,(TVector<float,3> *)&local_228,(TVector<float,3> *)local_1d8);
      lVar19 = lVar19 + -1;
      uVar15 = uVar15 + 0x18;
      uVar18 = (ulonglong)(uVar17 + 1);
    } while (lVar19 != 0);
  }
  dVar8 = __real_bfb999999999999a;
  fVar7 = __real_322bcc77;
  if ((0.0 < param_2) &&
     (pTVar5 = (param_1->StructureData).Data.DataL,
     pTVar5 != (TConvexHalfEdgeStructureData<int> *)0x0)) {
    EVar3 = (param_1->StructureData).IndexType;
    uVar10 = 0;
    if ((EVar3 == Small) || ((EVar3 == Medium || (uVar17 = uVar10, EVar3 == Large)))) {
      uVar17 = (pTVar5->Edges).ArrayNum;
    }
    if (0 < (int)uVar17) {
      do {
        iVar14 = (int)uVar16;
        if ((param_1->StructureData).Data.Ptr == (void *)0x0) {
          iVar12 = (param_1->Planes).ArrayNum;
          uVar11 = 0xffffffff;
LAB_144045c7b:
          local_250 = (longlong)iVar12;
          local_258 = (longlong)(int)uVar11;
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
        else {
          local_240[1] = 0;
          local_240[0] = iVar14;
          uVar11 = Chaos::FConvexStructureData::
                   ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                             (&param_1->StructureData,(<lambda_1> *)local_240,&local_248);
          iVar12 = (param_1->Planes).ArrayNum;
          uVar13 = uVar10;
          if ((int)uVar11 < iVar12) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if (uVar13 == 0) goto LAB_144045c7b;
        }
        pFVar4 = (param_1->Planes).AllocatorInstance.Data;
        pFVar1 = pFVar4 + (longlong)(int)uVar11 * 0x18;
        local_1b8 = *(undefined8 *)pFVar1;
        uStack_1b0 = *(undefined8 *)(pFVar1 + 8);
        local_1a8 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
        if ((param_1->StructureData).Data.Ptr == (void *)0x0) {
          iVar12 = (param_1->Planes).ArrayNum;
          uVar11 = 0xffffffff;
LAB_144045d15:
          local_250 = (longlong)iVar12;
          local_258 = (longlong)(int)uVar11;
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
        else {
          local_238[1] = 1;
          local_238[0] = iVar14;
          uVar11 = Chaos::FConvexStructureData::
                   ConstDataOp<_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgePlane_::__l2::<lambda_2>_>
                             (&param_1->StructureData,(<lambda_1> *)local_238,&local_247);
          iVar12 = (param_1->Planes).ArrayNum;
          uVar13 = uVar10;
          if ((int)uVar11 < iVar12) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if (uVar13 == 0) goto LAB_144045d15;
        }
        pFVar4 = (param_1->Planes).AllocatorInstance.Data;
        pFVar1 = pFVar4 + (longlong)(int)uVar11 * 0x18;
        local_158 = *(undefined4 *)pFVar1;
        uStack_154 = *(undefined4 *)(pFVar1 + 4);
        uStack_150 = *(undefined4 *)(pFVar1 + 8);
        fStack_14c = *(float *)(pFVar1 + 0xc);
        uVar2 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
        local_148._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        if ((double)((float)local_1a8 * (float)uVar2 + uStack_1b0._4_4_ * fStack_14c +
                    local_1a8._4_4_ * local_148._4_4_) < dVar8) {
          fVar22 = uStack_1b0._4_4_ + fStack_14c;
          fVar21 = (float)local_1a8 + (float)uVar2;
          fVar23 = local_1a8._4_4_ + local_148._4_4_;
          fVar20 = fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23;
          if (fVar7 < fVar20) {
            fVar20 = __real_3f800000 / SQRT(fVar20);
            local_148 = uVar2;
            if ((param_1->StructureData).Data.Ptr == (void *)0x0) {
              iVar12 = (param_1->Vertices).ArrayNum;
              uVar11 = 0xffffffff;
LAB_144045e49:
              local_250 = (longlong)iVar12;
              local_258 = (longlong)(int)uVar11;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              local_230[1] = 0;
              local_230[0] = iVar14;
              uVar11 = Chaos::FConvexStructureData::
                       ConstDataOp<_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_1>,_Chaos::FConvexStructureData::GetEdgeVertex_::__l2::<lambda_2>_>
                                 (&param_1->StructureData,(<lambda_1> *)local_230,local_246);
              iVar12 = (param_1->Vertices).ArrayNum;
              uVar13 = uVar10;
              if ((int)uVar11 < iVar12) {
                uVar13 = ~uVar11 >> 0x1f;
              }
              if (uVar13 == 0) goto LAB_144045e49;
            }
            pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
            local_1b8 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar11 * 0xc);
            local_210 = fVar20 * fVar23 * param_2 +
                        *(float *)(pFVar1 + (longlong)(int)uVar11 * 0xc + 8);
            local_214 = fVar20 * fVar21 * param_2 + (float)((ulonglong)local_1b8 >> 0x20);
            local_218 = fVar20 * fVar22 * param_2 + (float)local_1b8;
            local_1c8._4_4_ = fVar20 * fVar21;
            local_1c8._0_4_ = fVar20 * fVar22;
            local_1c8._8_4_ = fVar20 * fVar23;
            ``anonymous_namespace'::FHullPolygons::Intersect'::__l2::<lambda_1>::operator()
                      (&local_188,(TVector<float,3> *)&local_218,(TVector<float,3> *)local_1c8);
            uVar2 = local_148;
          }
        }
        local_148 = uVar2;
        uVar16 = (ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < (int)uVar17);
    }
  }
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138);
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}

