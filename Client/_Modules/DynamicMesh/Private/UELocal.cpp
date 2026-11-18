// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// QuadsToTris @ 14c758440

void __cdecl
UELocal::QuadsToTris
          (FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  
  iVar3 = param_2->ArrayNum;
  if (param_4) {
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_3->AllocatorInstance,0,piVar1);
    }
    uVar4 = iVar3 * 2;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
  }
  pFVar10 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar9 = pFVar10 + 4;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FIndex2i_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar10 == pFVar2) break;
    uVar4 = *(uint *)pFVar10;
    if (((-1 < (int)uVar4) &&
        ((int)uVar4 <
         (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) <
        0xfffe)) {
      pFVar5 = (param_3->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)param_3->ArrayMax * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_3->ArrayNum;
      if (iVar8 == param_3->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar8 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar10;
    }
    uVar4 = *(uint *)pFVar9;
    if (((-1 < (int)uVar4) &&
        ((int)uVar4 <
         (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) <
        0xfffe)) {
      pFVar5 = (param_3->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar9) && (pFVar9 < pFVar5 + (longlong)param_3->ArrayMax * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_3->ArrayNum;
      if (iVar8 == param_3->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar8 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
    }
    pFVar10 = pFVar10 + 8;
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// ReconcileTriangleSets @ 14c75ae30

void __cdecl
UELocal::ReconcileTriangleSets(TArray<UELocal::FVertexSplit,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  void *_Src;
  int iVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  local_res18 = (longlong)param_1->ArrayNum;
  uVar17 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (0 < local_res18) {
    lVar20 = 0;
    local_res10 = 0;
    do {
      lVar16 = local_res10;
      uVar18 = ~uVar17 >> 0x1f;
      if ((int)local_40 == 0) {
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)((param_1->AllocatorInstance).Data + lVar20 + 0x10) < 1) goto LAB_14c75b011;
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data + lVar20 + 8;
        if ((FScriptContainerElement *)&local_48 != pFVar12) {
          iVar13 = *(int *)(pFVar12 + 8);
          lVar14 = (longlong)iVar13;
          _Src = *(void **)pFVar12;
          local_40 = CONCAT44(local_40._4_4_,iVar13);
          iVar19 = local_40._4_4_;
          if ((iVar13 == 0) && (local_40._4_4_ == 0)) goto LAB_14c75b1dc;
LAB_14c75af6e:
          iVar13 = (int)lVar14;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar13,iVar19,&local_48,iVar13,(int *)((longlong)&local_40 + 4));
          if (iVar13 != 0) {
            memcpy(local_48.Data,_Src,lVar14 << 2);
          }
        }
      }
      else {
LAB_14c75b011:
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data;
        piVar15 = *(int **)(pFVar12 + lVar20 + 8);
        iVar13 = *(int *)(pFVar12 + lVar20 + 0x10);
        piVar1 = piVar15 + iVar13;
        while( true ) {
          if (*(int *)(pFVar12 + lVar20 + 0x10) != iVar13) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (piVar15 == piVar1) break;
          for (FVar11.Data = local_48.Data;
              FVar11.Data != local_48.Data + (longlong)(int)local_40 * 4;
              FVar11.Data = FVar11.Data + 4) {
            if (*(int *)FVar11.Data == *piVar15) goto LAB_14c75b15c;
          }
          piVar15 = piVar15 + 1;
        }
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data;
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar12 + lVar20 + 0x18;
        uVar6 = *(undefined8 *)(pFVar2 + 8);
        pFVar3 = pFVar4 + lVar20 + 8;
        uVar7 = *(undefined8 *)pFVar3;
        uVar8 = *(undefined8 *)(pFVar3 + 8);
        pFVar4 = pFVar4 + lVar20 + 8;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar2;
        *(undefined8 *)(pFVar4 + 8) = uVar6;
        pFVar12 = pFVar12 + lVar20 + 0x18;
        *(undefined8 *)pFVar12 = uVar7;
        *(undefined8 *)(pFVar12 + 8) = uVar8;
LAB_14c75b15c:
        lVar16 = local_res10;
        uVar10 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data + lVar20 + 8;
        if ((FScriptContainerElement *)&local_48 != pFVar12) {
          iVar13 = *(int *)(pFVar12 + 8);
          lVar14 = (longlong)iVar13;
          _Src = *(void **)pFVar12;
          local_40 = CONCAT44(local_40._4_4_,iVar13);
          iVar19 = local_40._4_4_;
          if ((iVar13 != 0) || (local_40._4_4_ != 0)) goto LAB_14c75af6e;
LAB_14c75b1dc:
          local_40 = local_40 & 0xffffffff;
        }
      }
      local_res10 = lVar16 + 1;
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + 0x28;
    } while (local_res10 < local_res18);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

