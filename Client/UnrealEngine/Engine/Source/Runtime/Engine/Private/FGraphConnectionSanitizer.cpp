// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddCorruptGraph @ 147b42670

void __thiscall
FGraphConnectionSanitizer::AddCorruptGraph(FGraphConnectionSanitizer *this,UEdGraph *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UEdGraph *local_res10 [3];
  
  pFVar2 = (this->CorruptGraphs).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->CorruptGraphs).ArrayMax * 8
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->CorruptGraphs).ArrayNum;
  piVar1 = &(this->CorruptGraphs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->CorruptGraphs).ArrayNum = iVar5 + 1;
  *(UEdGraph **)((this->CorruptGraphs).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// SanitizeConnectionsForCorruptGraphs @ 147b868a0

void __thiscall
FGraphConnectionSanitizer::SanitizeConnectionsForCorruptGraphs(FGraphConnectionSanitizer *this)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ForAnyElementType *pFVar24;
  longlong lVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  uVar5 = (this->CorruptGraphs).ArrayNum;
  uVar15 = (ulonglong)(int)uVar5;
  pFVar19 = (this->CorruptGraphs).AllocatorInstance.Data;
  pFVar2 = pFVar19 + uVar15 * 8;
  do {
    if ((this->CorruptGraphs).ArrayNum != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UEdGraph_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar19 == pFVar2) {
      (this->CorruptGraphs).ArrayNum = 0;
      if ((this->CorruptGraphs).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,&(this->CorruptGraphs).ArrayMax);
      }
      return;
    }
    lVar7 = *(longlong *)pFVar19;
    uVar6 = *(uint *)(lVar7 + 0x38);
    uVar15 = (ulonglong)(int)uVar6;
    plVar17 = *(longlong **)(lVar7 + 0x30);
    plVar3 = plVar17 + uVar15;
    while( true ) {
      if (*(int *)(lVar7 + 0x38) != (int)uVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar17 == plVar3) break;
      lVar8 = *plVar17;
      pFVar24 = (ForAnyElementType *)(lVar8 + 0x28);
      local_res20 = *(int *)(lVar8 + 0x30) - 1;
      if (-1 < (int)local_res20) {
        lVar20 = (longlong)(int)local_res20;
        lVar25 = lVar20 * 8;
        do {
          uVar21 = ~local_res20;
          uVar16 = uVar21 >> 0x1f;
          uVar22 = 0;
          if ((int)local_res20 < *(int *)(lVar8 + 0x30)) {
            uVar22 = uVar16;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)(pFVar24->Data + lVar25);
          if (lVar9 == 0) {
            uVar22 = 0;
            if ((int)local_res20 < *(int *)(lVar8 + 0x30)) {
              uVar22 = uVar16;
            }
            if ((uVar22 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar13 = *(int *)(lVar8 + 0x30) + uVar21;
            if (1 < iVar13) {
              iVar13 = 1;
            }
            if (iVar13 != 0) {
              memmove(pFVar24->Data + lVar20 * 8,
                      pFVar24->Data + (longlong)(*(int *)(lVar8 + 0x30) - iVar13) * 8,
                      (longlong)iVar13 << 3);
            }
            *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,pFVar24,*(int *)(lVar8 + 0x30),(int *)(lVar8 + 0x34));
          }
          else {
            pFVar1 = (ForAnyElementType *)(lVar9 + 200);
            uVar22 = *(int *)(lVar9 + 0xd0) - 1;
            if (-1 < (int)uVar22) {
              lVar18 = (longlong)(int)uVar22;
              lVar23 = lVar18 * 8;
              do {
                uVar21 = ~uVar22 >> 0x1f;
                uVar16 = 0;
                if ((int)uVar22 < *(int *)(lVar9 + 0xd0)) {
                  uVar16 = uVar21;
                }
                if ((uVar16 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar10 = *(longlong *)(pFVar1->Data + lVar23);
                if (lVar10 != 0) {
                  plVar14 = *(longlong **)(lVar10 + 200);
                  plVar4 = plVar14 + *(int *)(lVar10 + 0xd0);
                  for (; plVar14 != plVar4; plVar14 = plVar14 + 1) {
                    if (*plVar14 == lVar9) goto LAB_147b86bae;
                  }
                }
                uVar16 = 0;
                if ((int)uVar22 < *(int *)(lVar9 + 0xd0)) {
                  uVar16 = uVar21;
                }
                if ((uVar16 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar13 = *(int *)(lVar9 + 0xd0) + ~uVar22;
                if (1 < iVar13) {
                  iVar13 = 1;
                }
                if (iVar13 != 0) {
                  memmove(pFVar1->Data + lVar18 * 8,
                          pFVar1->Data + (longlong)(*(int *)(lVar9 + 0xd0) - iVar13) * 8,
                          (longlong)iVar13 << 3);
                }
                *(int *)(lVar9 + 0xd0) = *(int *)(lVar9 + 0xd0) + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,pFVar1,*(int *)(lVar9 + 0xd0),(int *)(lVar9 + 0xd4));
LAB_147b86bae:
                lVar18 = lVar18 + -1;
                lVar23 = lVar23 + -8;
                uVar22 = uVar22 - 1;
              } while (-1 < (int)uVar22);
            }
          }
          local_res20 = local_res20 - 1;
          lVar25 = lVar25 + -8;
          lVar20 = lVar20 + -1;
        } while (-1 < (int)local_res20);
      }
      plVar17 = plVar17 + 1;
      uVar15 = (ulonglong)uVar6;
    }
    pFVar19 = pFVar19 + 8;
    uVar15 = (ulonglong)uVar5;
  } while( true );
}

