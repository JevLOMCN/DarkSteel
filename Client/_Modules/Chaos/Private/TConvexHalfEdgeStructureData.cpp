// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 29

// BuildRegularDatas @ 143756360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::BuildRegularDatas
          (TConvexHalfEdgeStructureData<unsigned_char> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexData,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint local_res20;
  FScriptContainerElement local_78 [8];
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  ForAnyElementType local_58;
  int local_50 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  
  iVar13 = param_1->ArrayNum;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = uVar17;
  uVar21 = uVar17;
  if (0 < iVar13) {
    do {
      uVar23 = (uint)uVar17;
      uVar18 = 0;
      if ((int)uVar23 < iVar13) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar17 = (ulonglong)(uVar23 + 1);
      iVar13 = param_1->ArrayNum;
      uVar18 = (int)uVar19 + *(int *)((param_1->AllocatorInstance).Data + uVar21 + 8);
      uVar19 = (ulonglong)uVar18;
      uVar21 = uVar21 + 0x10;
    } while ((int)(uVar23 + 1) < iVar13);
  }
  if (((iVar13 < 0xff) && ((int)uVar18 < 0xff)) && (param_2 < 0xff)) {
    TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FPlaneData,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Planes,iVar13,Default);
    local_70 = &this->HalfEdges;
    TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
    ::SetNum(local_70,uVar18,Default);
    this_00 = &this->Vertices;
    TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexData,TSizedDefaultAllocator<32>_>
    ::SetNum(this_00,param_2,Default);
    TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexPlanes,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->VertexPlanes,param_2,Default);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    if (param_2 < 1) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
    }
    else {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,1,param_2,&local_58,local_50,local_50 + 1);
      DefaultConstructItems<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexHalfEdges,int>
                (local_58.Data + (longlong)iVar13 * 4,param_2);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_48,uVar18,Default);
    uVar18 = 0;
    if (0 < (this->Vertices).ArrayNum) {
      lVar22 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar18 < (this->Vertices).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        uVar18 = uVar18 + 1;
        (this_00->AllocatorInstance).Data[lVar22] = (FScriptContainerElement)0xff;
        lVar22 = lVar22 + 1;
      } while ((int)uVar18 < (this->Vertices).ArrayNum);
    }
    uVar18 = 0;
    local_res20 = 0;
    iVar13 = param_1->ArrayNum;
    if (0 < iVar13) {
      do {
        uVar23 = 0;
        if ((int)local_res20 < iVar13) {
          uVar23 = ~local_res20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        local_60 = (param_1->AllocatorInstance).Data + (longlong)(int)local_res20 * 0x10;
        FVar3 = local_60[8];
        uVar23 = 0;
        if ((int)local_res20 < (this->Planes).ArrayNum) {
          uVar23 = ~local_res20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        uVar23 = 0;
        *(ushort *)((this->Planes).AllocatorInstance.Data + (longlong)(int)local_res20 * 2) =
             (ushort)(byte)FVar3 << 8 | (ushort)uVar18 & 0xff;
        iVar13 = *(int *)(local_60 + 8);
        if (0 < iVar13) {
          local_68 = 0;
          do {
            pFVar7 = local_60;
            lVar22 = local_68;
            uVar14 = 0;
            if ((int)uVar23 < iVar13) {
              uVar14 = ~uVar23 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            uVar14 = *(uint *)(lVar22 + *(longlong *)pFVar7);
            lVar22 = (longlong)(int)uVar14;
            uVar16 = (int)(uVar23 + 1) % *(int *)(pFVar7 + 8);
            uVar15 = 0;
            if ((int)uVar16 < *(int *)(pFVar7 + 8)) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FVar3 = *(FScriptContainerElement *)(*(longlong *)pFVar7 + (longlong)(int)uVar16 * 4);
            uVar15 = 0;
            if ((int)uVar18 < local_70->ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            pFVar7 = (local_70->AllocatorInstance).Data;
            lVar20 = (longlong)(int)uVar18 * 3;
            pFVar7[lVar20] = SUB41(local_res20,0);
            pFVar7[lVar20 + 1] = SUB41(uVar14,0);
            pFVar7[lVar20 + 2] = FVar3;
            uVar15 = 0;
            if ((int)uVar18 < local_48.ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            uVar16 = ~uVar14 >> 0x1f;
            local_48.AllocatorInstance.Data[(int)uVar18] = FVar3;
            uVar15 = 0;
            if ((int)uVar14 < (this->Vertices).ArrayNum) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            if ((this_00->AllocatorInstance).Data[lVar22] == (FScriptContainerElement)0xff) {
              uVar15 = 0;
              if ((int)uVar14 < (this->Vertices).ArrayNum) {
                uVar15 = uVar16;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              (this_00->AllocatorInstance).Data[lVar22] = SUB41(uVar18,0);
            }
            uVar15 = 0;
            if ((int)uVar14 < local_50[0]) {
              uVar15 = uVar16;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
            }
            FVar10.Data = local_58.Data;
            uVar15 = 0;
            if ((int)uVar14 < local_50[0]) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FVar10.Data[(ulonglong)(byte)local_58.Data[lVar22 * 4 + 3] + lVar22 * 4] =
                 SUB41(uVar18,0);
            local_58.Data[lVar22 * 4 + 3] =
                 (FScriptContainerElement)((char)local_58.Data[lVar22 * 4 + 3] + '\x01');
            uVar15 = 0;
            if ((int)uVar14 < (this->VertexPlanes).ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            pFVar7 = (this->VertexPlanes).AllocatorInstance.Data;
            uVar15 = 0;
            if ((int)uVar14 < (this->VertexPlanes).ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            pFVar8 = (this->VertexPlanes).AllocatorInstance.Data;
            uVar18 = uVar18 + 1;
            uVar23 = uVar23 + 1;
            local_68 = local_68 + 4;
            pFVar7[(ulonglong)(byte)pFVar8[lVar22 * 4 + 3] + lVar22 * 4] = SUB41(local_res20,0);
            pFVar8 = pFVar8 + lVar22 * 4 + 3;
            *pFVar8 = (FScriptContainerElement)((char)*pFVar8 + '\x01');
            iVar13 = *(int *)(local_60 + 8);
          } while ((int)uVar23 < iVar13);
        }
        local_res20 = local_res20 + 1;
        iVar13 = param_1->ArrayNum;
      } while ((int)local_res20 < iVar13);
    }
    pTVar1 = &this->Edges;
    piVar2 = &(this->Edges).ArrayMax;
    (this->Edges).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    uVar18 = (this->HalfEdges).ArrayNum / 2;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*piVar2 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar18,&pTVar1->AllocatorInstance,(this->Edges).ArrayNum,piVar2);
    }
    uVar18 = 0;
    if (0 < (this->HalfEdges).ArrayNum) {
      do {
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar3 = (this->HalfEdges).AllocatorInstance.Data[(longlong)(int)uVar18 * 3 + 1];
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        lVar22 = 0;
        FVar4 = (this->HalfEdges).AllocatorInstance.Data[(longlong)(int)uVar18 * 3 + 2];
        if ((local_50[0] <= (int)(uint)(byte)FVar4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        lVar20 = (ulonglong)(byte)FVar4 * 4;
        FVar5 = local_58.Data[lVar20 + 3];
        if ((ulonglong)(byte)FVar5 != 0) {
          do {
            if ((local_50[0] <= (int)(uint)(byte)FVar4) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FVar6 = local_58.Data[lVar20];
            if ((local_48.ArrayNum <= (int)(uint)(byte)FVar6) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            if (local_48.AllocatorInstance.Data[(byte)FVar6] == FVar3) {
              uVar23 = 0;
              if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
                uVar23 = ~uVar18 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              (this->HalfEdges).AllocatorInstance.Data[(longlong)(int)uVar18 * 3 + 2] = FVar6;
              break;
            }
            lVar22 = lVar22 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar22 < (longlong)(ulonglong)(byte)FVar5);
        }
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar4 = (this->HalfEdges).AllocatorInstance.Data[(longlong)(int)uVar18 * 3 + 2];
        if (((this->HalfEdges).ArrayNum <= (int)(uint)(byte)FVar4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((byte)FVar3 <
            (byte)(this->HalfEdges).AllocatorInstance.Data[(ulonglong)(byte)FVar4 * 3 + 1]) {
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          local_78[0] = SUB41(uVar18,0);
          piVar2 = &(this->Edges).ArrayMax;
          if (((pFVar7 <= local_78) && (local_78 < pFVar7 + *piVar2)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          iVar13 = (this->Edges).ArrayNum;
          if (iVar13 == *piVar2) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->Edges).ArrayNum = iVar13 + 1;
          (pTVar1->AllocatorInstance).Data[iVar13] = local_78[0];
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->HalfEdges).ArrayNum);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    bVar11 = true;
  }
  else {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_Chaos::TConvexHalfEdgeStructureData<unsigned_char>::BuildRegularDatas(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,int)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    bVar11 = false;
  }
  return bVar11;
}

// BuildRegularDatas @ 143756e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::BuildRegularDatas
          (TConvexHalfEdgeStructureData<short> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexData,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint local_res20;
  undefined2 local_78 [4];
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  ForAnyElementType local_58;
  int local_50 [2];
  TArray<short,TSizedDefaultAllocator<32>_> local_48;
  
  iVar14 = param_1->ArrayNum;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < iVar14) {
    do {
      uVar23 = (uint)uVar17;
      uVar18 = 0;
      if ((int)uVar23 < iVar14) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      uVar17 = (ulonglong)(uVar23 + 1);
      iVar14 = param_1->ArrayNum;
      uVar18 = (int)uVar19 + *(int *)((param_1->AllocatorInstance).Data + uVar20 + 8);
      uVar19 = (ulonglong)uVar18;
      uVar20 = uVar20 + 0x10;
    } while ((int)(uVar23 + 1) < iVar14);
  }
  if (((iVar14 < 0x8000) && ((int)uVar18 < 0x8000)) && (param_2 < 0x8000)) {
    TArray<Chaos::TConvexHalfEdgeStructureData<short>::FPlaneData,TSizedDefaultAllocator<32>_>::
    SetNum(&this->Planes,iVar14,Default);
    local_70 = &this->HalfEdges;
    TArray<Chaos::TConvexHalfEdgeStructureData<short>::FHalfEdgeData,TSizedDefaultAllocator<32>_>::
    SetNum(local_70,uVar18,Default);
    this_00 = &this->Vertices;
    TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexData,TSizedDefaultAllocator<32>_>::
    SetNum(this_00,param_2,Default);
    TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexPlanes,TSizedDefaultAllocator<32>_>::
    SetNum(&this->VertexPlanes,param_2,Default);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    if (param_2 < 1) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
    }
    else {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,2,param_2,&local_58,local_50,local_50 + 1);
      DefaultConstructItems<Chaos::TConvexHalfEdgeStructureData<short>::FVertexHalfEdges,int>
                (local_58.Data + (longlong)iVar14 * 8,param_2);
    }
    TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&local_48,uVar18,Default);
    uVar18 = 0;
    if (0 < (this->Vertices).ArrayNum) {
      lVar21 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar18 < (this->Vertices).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        uVar18 = uVar18 + 1;
        *(undefined2 *)((this_00->AllocatorInstance).Data + lVar21) = 0x8000;
        lVar21 = lVar21 + 2;
      } while ((int)uVar18 < (this->Vertices).ArrayNum);
    }
    uVar18 = 0;
    local_res20 = 0;
    iVar14 = param_1->ArrayNum;
    if (0 < iVar14) {
      do {
        uVar23 = 0;
        if ((int)local_res20 < iVar14) {
          uVar23 = ~local_res20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        local_60 = (param_1->AllocatorInstance).Data + (longlong)(int)local_res20 * 0x10;
        uVar2 = *(ushort *)(local_60 + 8);
        uVar23 = 0;
        if ((int)local_res20 < (this->Planes).ArrayNum) {
          uVar23 = ~local_res20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        uVar23 = 0;
        *(uint *)((this->Planes).AllocatorInstance.Data + (longlong)(int)local_res20 * 4) =
             (uint)uVar2 << 0x10 | uVar18 & 0xffff;
        iVar14 = *(int *)(local_60 + 8);
        if (0 < iVar14) {
          local_68 = 0;
          do {
            pFVar8 = local_60;
            lVar21 = local_68;
            uVar24 = 0;
            if ((int)uVar23 < iVar14) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            uVar24 = *(uint *)(lVar21 + *(longlong *)pFVar8);
            lVar21 = (longlong)(int)uVar24;
            uVar16 = (int)(uVar23 + 1) % *(int *)(pFVar8 + 8);
            uVar15 = 0;
            if ((int)uVar16 < *(int *)(pFVar8 + 8)) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            uVar3 = *(undefined2 *)(*(longlong *)pFVar8 + (longlong)(int)uVar16 * 4);
            uVar15 = 0;
            if ((int)uVar18 < local_70->ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            lVar22 = (longlong)(int)uVar18;
            pFVar8 = (local_70->AllocatorInstance).Data;
            *(short *)(pFVar8 + lVar22 * 6) = (short)local_res20;
            *(short *)(pFVar8 + lVar22 * 6 + 2) = (short)uVar24;
            *(undefined2 *)(pFVar8 + lVar22 * 6 + 4) = uVar3;
            uVar15 = 0;
            if ((int)uVar18 < local_48.ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            *(undefined2 *)(local_48.AllocatorInstance.Data + lVar22 * 2) = uVar3;
            uVar16 = ~uVar24 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar24 < (this->Vertices).ArrayNum) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            if (*(short *)((this_00->AllocatorInstance).Data + lVar21 * 2) == -0x8000) {
              uVar15 = 0;
              if ((int)uVar24 < (this->Vertices).ArrayNum) {
                uVar15 = uVar16;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
              *(short *)((this_00->AllocatorInstance).Data + lVar21 * 2) = (short)uVar18;
            }
            uVar15 = 0;
            if ((int)uVar24 < local_50[0]) {
              uVar15 = uVar16;
            }
            if (uVar15 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
            }
            FVar11.Data = local_58.Data;
            uVar15 = 0;
            if ((int)uVar24 < local_50[0]) {
              uVar15 = uVar16;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            *(short *)(FVar11.Data +
                      (longlong)*(short *)(local_58.Data + lVar21 * 8 + 6) * 2 + lVar21 * 8) =
                 (short)uVar18;
            *(short *)(local_58.Data + lVar21 * 8 + 6) =
                 *(short *)(local_58.Data + lVar21 * 8 + 6) + 1;
            uVar15 = 0;
            if ((int)uVar24 < (this->VertexPlanes).ArrayNum) {
              uVar15 = ~uVar24 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            pFVar8 = (this->VertexPlanes).AllocatorInstance.Data;
            uVar15 = 0;
            if ((int)uVar24 < (this->VertexPlanes).ArrayNum) {
              uVar15 = ~uVar24 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            pFVar9 = (this->VertexPlanes).AllocatorInstance.Data;
            uVar18 = uVar18 + 1;
            uVar23 = uVar23 + 1;
            local_68 = local_68 + 4;
            *(short *)(pFVar8 + (longlong)*(short *)(pFVar9 + lVar21 * 8 + 6) * 2 + lVar21 * 8) =
                 (short)local_res20;
            pFVar9 = pFVar9 + lVar21 * 8 + 6;
            *(short *)pFVar9 = *(short *)pFVar9 + 1;
            iVar14 = *(int *)(local_60 + 8);
          } while ((int)uVar23 < iVar14);
        }
        local_res20 = local_res20 + 1;
        iVar14 = param_1->ArrayNum;
      } while ((int)local_res20 < iVar14);
    }
    piVar1 = &(this->Edges).ArrayMax;
    (this->Edges).ArrayNum = 0;
    if ((this->Edges).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->Edges).AllocatorInstance,0,piVar1);
    }
    uVar18 = (this->HalfEdges).ArrayNum / 2;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*piVar1 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar18,&(this->Edges).AllocatorInstance,(this->Edges).ArrayNum,piVar1);
    }
    uVar18 = 0;
    if (0 < (this->HalfEdges).ArrayNum) {
      do {
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        sVar4 = *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)(int)uVar18 * 6 + 2)
        ;
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        lVar21 = 0;
        sVar5 = *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)(int)uVar18 * 6 + 4)
        ;
        uVar24 = (uint)~(int)sVar5 >> 0x1f;
        uVar23 = 0;
        if (sVar5 < local_50[0]) {
          uVar23 = uVar24;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        lVar22 = (longlong)sVar5 * 8;
        sVar6 = *(short *)(local_58.Data + lVar22 + 6);
        if (0 < (longlong)sVar6) {
          do {
            uVar23 = 0;
            if (sVar5 < local_50[0]) {
              uVar23 = uVar24;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            sVar7 = *(short *)(local_58.Data + lVar22);
            uVar23 = 0;
            if (sVar7 < local_48.ArrayNum) {
              uVar23 = (uint)~(int)sVar7 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            if (*(short *)(local_48.AllocatorInstance.Data + (longlong)sVar7 * 2) == sVar4) {
              uVar23 = 0;
              if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
                uVar23 = ~uVar18 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
              *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)(int)uVar18 * 6 + 4) =
                   sVar7;
              break;
            }
            lVar21 = lVar21 + 1;
            lVar22 = lVar22 + 2;
          } while (lVar21 < sVar6);
        }
        uVar23 = 0;
        if ((int)uVar18 < (this->HalfEdges).ArrayNum) {
          uVar23 = ~uVar18 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        sVar5 = *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)(int)uVar18 * 6 + 4)
        ;
        uVar23 = 0;
        if ((int)sVar5 < (this->HalfEdges).ArrayNum) {
          uVar23 = (uint)~(int)sVar5 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        if (sVar4 < *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)sVar5 * 6 + 2))
        {
          pFVar8 = (this->Edges).AllocatorInstance.Data;
          local_78[0] = (undefined2)uVar18;
          piVar1 = &(this->Edges).ArrayMax;
          if (((pFVar8 <= (FScriptContainerElement *)local_78) &&
              ((FScriptContainerElement *)local_78 < pFVar8 + (longlong)*piVar1 * 2)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          iVar14 = (this->Edges).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&(this->Edges).AllocatorInstance,piVar1);
          }
          (this->Edges).ArrayNum = iVar14 + 1;
          *(undefined2 *)((this->Edges).AllocatorInstance.Data + (longlong)iVar14 * 2) = local_78[0]
          ;
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->HalfEdges).ArrayNum);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    bVar12 = true;
  }
  else {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_Chaos::TConvexHalfEdgeStructureData<short>::BuildRegularDatas(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,int)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    bVar12 = false;
  }
  return bVar12;
}

// BuildRegularDatas @ 143757940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::BuildRegularDatas
          (TConvexHalfEdgeStructureData<int> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_> *this_00
  ;
  longlong local_res20;
  uint local_a8 [2];
  ForAnyElementType local_a0;
  int local_98 [2];
  longlong local_90;
  longlong local_88;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_>
  *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  longlong local_68;
  longlong local_60;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *local_58;
  longlong local_50;
  longlong local_48;
  FScriptContainerElement *local_40;
  
  uVar19 = 0;
  uVar14 = 0;
  iVar9 = param_1->ArrayNum;
  uVar13 = uVar19;
  uVar15 = uVar19;
  uVar18 = uVar19;
  if (0 < iVar9) {
    do {
      uVar12 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar12 < iVar9) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = param_1->ArrayNum;
      uVar14 = (int)uVar15 + *(int *)((param_1->AllocatorInstance).Data + uVar18 + 8);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = (ulonglong)uVar14;
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar12 + 1) < iVar9);
  }
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FPlaneData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Planes,iVar9,Default);
  local_58 = &this->HalfEdges;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FHalfEdgeData,TSizedDefaultAllocator<32>_>::
  SetNum(local_58,uVar14,Default);
  this_00 = &this->Vertices;
  local_80 = this_00;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,param_2,Default);
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexPlanes,TSizedDefaultAllocator<32>_>::
  SetNum(&this->VertexPlanes,param_2,Default);
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  if (param_2 < 1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
  }
  else {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_2,&local_a0,local_98,local_98 + 1);
    DefaultConstructItems<Chaos::TConvexHalfEdgeStructureData<int>::FVertexHalfEdges,int>
              (local_a0.Data + (longlong)iVar9 * 0x10,param_2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_78,uVar14,Default);
  uVar13 = uVar19;
  uVar15 = uVar19;
  if (0 < (this->Vertices).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      *(undefined4 *)((this_00->AllocatorInstance).Data + uVar15) = 0x80000000;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 4;
    } while ((int)(uVar12 + 1) < (this->Vertices).ArrayNum);
  }
  uVar14 = 0;
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    lVar22 = 0;
    local_88 = 0;
    local_90 = 0;
    local_50 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar14 < iVar9) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_40 = (param_1->AllocatorInstance).Data;
      uVar12 = *(uint *)(local_40 + local_90 + 8);
      local_40 = local_40 + local_90;
      uVar20 = 0;
      if ((int)uVar14 < (this->Planes).ArrayNum) {
        uVar20 = ~uVar14 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar20 = 0;
      *(ulonglong *)((this->Planes).AllocatorInstance.Data + local_88 * 8) =
           (ulonglong)uVar12 << 0x20 | uVar19;
      iVar9 = *(int *)(local_40 + 8);
      if (0 < iVar9) {
        local_68 = lVar22 * 0xc;
        local_60 = lVar22 * 4;
        local_48 = 0;
        do {
          pFVar3 = local_40;
          lVar22 = local_48;
          uVar12 = 0;
          if ((int)uVar20 < iVar9) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar12 = *(uint *)(lVar22 + *(longlong *)pFVar3);
          lVar21 = (longlong)(int)uVar12;
          uVar11 = (int)(uVar20 + 1) % *(int *)(pFVar3 + 8);
          uVar10 = 0;
          if ((int)uVar11 < *(int *)(pFVar3 + 8)) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar2 = *(undefined4 *)(*(longlong *)pFVar3 + (longlong)(int)uVar11 * 4);
          uVar11 = (uint)uVar19;
          uVar10 = 0;
          if ((int)uVar11 < local_58->ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar3 = (local_58->AllocatorInstance).Data;
          *(uint *)(pFVar3 + local_68) = uVar14;
          *(uint *)(pFVar3 + local_68 + 4) = uVar12;
          *(undefined4 *)(pFVar3 + local_68 + 8) = uVar2;
          uVar10 = 0;
          if ((int)uVar11 < local_78.ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          *(undefined4 *)(local_78.AllocatorInstance.Data + local_60) = uVar2;
          uVar17 = ~uVar12 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar12 < this_00->ArrayNum) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          if (*(int *)((this_00->AllocatorInstance).Data + lVar21 * 4) == -0x80000000) {
            uVar10 = 0;
            if ((int)uVar12 < this_00->ArrayNum) {
              uVar10 = uVar17;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            *(uint *)((this_00->AllocatorInstance).Data + lVar21 * 4) = uVar11;
          }
          uVar10 = 0;
          if ((int)uVar12 < local_98[0]) {
            uVar10 = uVar17;
          }
          if (uVar10 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          FVar6.Data = local_a0.Data;
          lVar16 = lVar21 * 0x10;
          uVar10 = 0;
          if ((int)uVar12 < local_98[0]) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          *(uint *)(FVar6.Data + (longlong)*(int *)(local_a0.Data + lVar16 + 0xc) * 4 + lVar16) =
               uVar11;
          *(int *)(local_a0.Data + lVar16 + 0xc) = *(int *)(local_a0.Data + lVar16 + 0xc) + 1;
          uVar10 = 0;
          if ((int)uVar12 < (this->VertexPlanes).ArrayNum) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar3 = (this->VertexPlanes).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)uVar12 < (this->VertexPlanes).ArrayNum) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar4 = (this->VertexPlanes).AllocatorInstance.Data;
          uVar19 = (ulonglong)(uVar11 + 1);
          uVar20 = uVar20 + 1;
          lVar22 = local_50 + 1;
          local_68 = local_68 + 0xc;
          local_60 = local_60 + 4;
          *(uint *)(pFVar3 + (longlong)*(int *)(pFVar4 + lVar21 * 0x10 + 0xc) * 4 + lVar16) = uVar14
          ;
          pFVar4 = pFVar4 + lVar21 * 0x10 + 0xc;
          *(int *)pFVar4 = *(int *)pFVar4 + 1;
          iVar9 = *(int *)(local_40 + 8);
          local_48 = local_48 + 4;
          this_00 = local_80;
          local_50 = lVar22;
        } while ((int)uVar20 < iVar9);
      }
      uVar14 = uVar14 + 1;
      local_88 = local_88 + 1;
      local_90 = local_90 + 0x10;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar9);
  }
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).ArrayNum = 0;
  if ((this->Edges).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Edges).AllocatorInstance,0,piVar1);
  }
  uVar14 = (this->HalfEdges).ArrayNum / 2;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(this->Edges).AllocatorInstance,(this->Edges).ArrayNum,piVar1);
  }
  uVar14 = 0;
  if (0 < (this->HalfEdges).ArrayNum) {
    local_res20 = 0;
    do {
      uVar20 = ~uVar14 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar14 < (this->HalfEdges).ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = *(int *)((this->HalfEdges).AllocatorInstance.Data + local_res20 + 4);
      uVar12 = 0;
      if ((int)uVar14 < (this->HalfEdges).ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar22 = 0;
      uVar12 = *(uint *)((this->HalfEdges).AllocatorInstance.Data + local_res20 + 8);
      uVar10 = 0;
      if ((int)uVar12 < local_98[0]) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar21 = (longlong)(int)uVar12 * 0x10;
      local_80 = (TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_>
                  *)(longlong)*(int *)(local_a0.Data + lVar21 + 0xc);
      if (0 < (longlong)local_80) {
        do {
          uVar10 = 0;
          if ((int)uVar12 < local_98[0]) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar10 = *(uint *)(local_a0.Data + lVar21);
          uVar11 = 0;
          if ((int)uVar10 < local_78.ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          if (*(int *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) == iVar9) {
            uVar12 = 0;
            if ((int)uVar14 < (this->HalfEdges).ArrayNum) {
              uVar12 = uVar20;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            *(uint *)((this->HalfEdges).AllocatorInstance.Data + local_res20 + 8) = uVar10;
            break;
          }
          lVar22 = lVar22 + 1;
          lVar21 = lVar21 + 4;
        } while (lVar22 < (longlong)local_80);
      }
      uVar12 = 0;
      if ((int)uVar14 < (this->HalfEdges).ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar12 = *(uint *)((this->HalfEdges).AllocatorInstance.Data + local_res20 + 8);
      uVar20 = 0;
      if ((int)uVar12 < (this->HalfEdges).ArrayNum) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (iVar9 < *(int *)((this->HalfEdges).AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 0xc + 4)) {
        pFVar3 = (this->Edges).AllocatorInstance.Data;
        piVar1 = &(this->Edges).ArrayMax;
        local_a8[0] = uVar14;
        if (((pFVar3 <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar9 = (this->Edges).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->Edges).AllocatorInstance,piVar1);
        }
        (this->Edges).ArrayNum = iVar9 + 1;
        *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_a8[0];
      }
      local_res20 = local_res20 + 0xc;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (this->HalfEdges).ArrayNum);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return true;
}

// BuildUniqueEdgeList @ 143758440

void __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::BuildUniqueEdgeList
          (TConvexHalfEdgeStructureData<unsigned_char> *this)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement local_28 [16];
  
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).ArrayNum = 0;
  if ((this->Edges).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Edges).AllocatorInstance,0,piVar1);
  }
  uVar7 = (this->HalfEdges).ArrayNum / 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,&(this->Edges).AllocatorInstance,(this->Edges).ArrayNum,piVar1);
  }
  uVar7 = 0;
  if (0 < (this->HalfEdges).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->HalfEdges).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->HalfEdges).AllocatorInstance.Data;
      FVar2 = pFVar4[(longlong)(int)uVar7 * 3 + 2];
      if (FVar2 != (FScriptContainerElement)0xff) {
        if (((this->HalfEdges).ArrayNum <= (int)(uint)(byte)FVar2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = pFVar4[(longlong)(int)uVar7 * 3 + 1];
        if (((FVar3 != (FScriptContainerElement)0xff) &&
            (FVar2 = (this->HalfEdges).AllocatorInstance.Data[(ulonglong)(byte)FVar2 * 3 + 1],
            FVar2 != (FScriptContainerElement)0xff)) && ((byte)FVar3 < (byte)FVar2)) {
          pFVar4 = (this->Edges).AllocatorInstance.Data;
          local_28[0] = SUB41(uVar7,0);
          if (((pFVar4 <= local_28) && (local_28 < pFVar4 + *piVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->Edges).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&(this->Edges).AllocatorInstance,piVar1);
          }
          (this->Edges).ArrayNum = iVar9 + 1;
          (this->Edges).AllocatorInstance.Data[iVar9] = local_28[0];
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->HalfEdges).ArrayNum);
  }
  return;
}

// BuildUniqueEdgeList @ 143758680

void __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::BuildUniqueEdgeList
          (TConvexHalfEdgeStructureData<short> *this)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 local_28 [8];
  
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).ArrayNum = 0;
  if ((this->Edges).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->Edges).AllocatorInstance,0,piVar1);
  }
  uVar7 = (this->HalfEdges).ArrayNum / 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,&(this->Edges).AllocatorInstance,(this->Edges).ArrayNum,piVar1);
  }
  uVar7 = 0;
  if (0 < (this->HalfEdges).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->HalfEdges).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->HalfEdges).AllocatorInstance.Data;
      sVar2 = *(short *)(pFVar4 + (longlong)(int)uVar7 * 6 + 4);
      if (sVar2 != -0x8000) {
        uVar8 = 0;
        if ((int)sVar2 < (this->HalfEdges).ArrayNum) {
          uVar8 = (uint)~(int)sVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        sVar3 = *(short *)(pFVar4 + (longlong)(int)uVar7 * 6 + 2);
        if (((sVar3 != -0x8000) &&
            (sVar2 = *(short *)((this->HalfEdges).AllocatorInstance.Data + (longlong)sVar2 * 6 + 2),
            sVar2 != -0x8000)) && (sVar3 < sVar2)) {
          pFVar4 = (this->Edges).AllocatorInstance.Data;
          local_28[0] = (undefined2)uVar7;
          if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 2)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->Edges).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&(this->Edges).AllocatorInstance,piVar1);
          }
          (this->Edges).ArrayNum = iVar9 + 1;
          *(undefined2 *)((this->Edges).AllocatorInstance.Data + (longlong)iVar9 * 2) = local_28[0];
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->HalfEdges).ArrayNum);
  }
  return;
}

// BuildUniqueEdgeList @ 1437588f0

void __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::BuildUniqueEdgeList
          (TConvexHalfEdgeStructureData<int> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint local_28 [4];
  
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).ArrayNum = 0;
  if ((this->Edges).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Edges).AllocatorInstance,0,piVar1);
  }
  uVar6 = (this->HalfEdges).ArrayNum / 2;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&(this->Edges).AllocatorInstance,(this->Edges).ArrayNum,piVar1);
  }
  uVar6 = 0;
  if (0 < (this->HalfEdges).ArrayNum) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar6 < (this->HalfEdges).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HalfEdges).AllocatorInstance.Data;
      uVar7 = *(uint *)(pFVar3 + lVar10 + 8);
      if (uVar7 != 0x80000000) {
        uVar8 = 0;
        if ((int)uVar7 < (this->HalfEdges).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(pFVar3 + lVar10 + 4);
        if (((iVar9 != -0x80000000) &&
            (iVar2 = *(int *)((this->HalfEdges).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0xc + 4), iVar2 != -0x80000000)) &&
           (iVar9 < iVar2)) {
          pFVar3 = (this->Edges).AllocatorInstance.Data;
          local_28[0] = uVar6;
          if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
          iVar9 = (this->Edges).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->Edges).AllocatorInstance,piVar1);
          }
          (this->Edges).ArrayNum = iVar9 + 1;
          *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_28[0];
        }
      }
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((int)uVar6 < (this->HalfEdges).ArrayNum);
  }
  return;
}

// BuildVertexPlanes @ 143758b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::BuildVertexPlanes
          (TConvexHalfEdgeStructureData<unsigned_char> *this)

{
  FScriptContainerElement FVar1;
  byte bVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FHalfEdgeData *pFVar8;
  FPlaneData *pFVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexPlanes,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->VertexPlanes,(this->Vertices).ArrayNum,Default);
  uVar12 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->VertexPlanes).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->VertexPlanes).AllocatorInstance.Data;
      *(undefined4 *)(pFVar4 + lVar11 * 4) = 0xffffff;
      uVar7 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (this->Vertices).AllocatorInstance.Data[lVar11];
      uVar7 = (uint)(byte)FVar1;
      if (FVar1 != (FScriptContainerElement)0xff) {
        while( true ) {
          if ((byte)pFVar4[lVar11 * 4 + 3] < 3) {
            pFVar8 = GetHalfEdge(this,uVar7);
            pFVar4[(ulonglong)(byte)pFVar4[lVar11 * 4 + 3] + lVar11 * 4] =
                 (FScriptContainerElement)pFVar8->PlaneIndex;
          }
          pFVar4[lVar11 * 4 + 3] = (FScriptContainerElement)((char)pFVar4[lVar11 * 4 + 3] + '\x01');
          if ((this->Planes).ArrayNum < (int)(uint)(byte)pFVar4[lVar11 * 4 + 3]) break;
          pFVar8 = GetHalfEdge(this,uVar7);
          bVar2 = pFVar8->TwinHalfEdgeIndex;
          if (bVar2 == 0xff) goto LAB_143758d7d;
          pFVar8 = GetHalfEdge(this,(uint)bVar2);
          bVar3 = pFVar8->PlaneIndex;
          uVar7 = (uint)bVar3;
          pFVar9 = GetPlane(this,uVar7);
          iVar10 = (uint)bVar2 - (uint)pFVar9->FirstHalfEdgeIndex;
          if ((iVar10 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = GetPlane(this,(uint)bVar3);
          if (((int)(uint)pFVar9->NumHalfEdges <= iVar10) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27b,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = GetPlane(this,uVar7);
          uVar7 = GetPlaneHalfEdge(this,uVar7,(iVar10 + 1) % (int)(uint)pFVar9->NumHalfEdges);
          if ((uVar7 == (byte)FVar1) || (uVar7 == 0xff)) goto LAB_143758d7d;
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_180241437902765385>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                           ,0x2b7,"VertexPlane.NumPlaneIndices <= Planes.Num()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4[lVar11 * 4 + 3] = (FScriptContainerElement)0x0;
      }
LAB_143758d7d:
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  return;
}

// BuildVertexPlanes @ 143758dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::BuildVertexPlanes
          (TConvexHalfEdgeStructureData<short> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHalfEdgeData *pFVar5;
  FPlaneData *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexPlanes,TSizedDefaultAllocator<32>_>::
  SetNum(&this->VertexPlanes,(this->Vertices).ArrayNum,Default);
  uVar10 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar10 < (this->VertexPlanes).ArrayNum) {
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
      pFVar1 = (this->VertexPlanes).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + lVar9 * 8 + 4) = 0xffff;
      *(undefined4 *)(pFVar1 + lVar9 * 8) = 0xffffffff;
      uVar4 = 0;
      if ((int)uVar10 < (this->Vertices).ArrayNum) {
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
      iVar11 = (int)*(short *)((this->Vertices).AllocatorInstance.Data + lVar9 * 2);
      iVar8 = iVar11;
      if (iVar11 != -0x8000) {
        while( true ) {
          if (*(short *)(pFVar1 + lVar9 * 8 + 6) < 3) {
            pFVar5 = GetHalfEdge(this,iVar8);
            *(short *)(pFVar1 + (longlong)*(short *)(pFVar1 + lVar9 * 8 + 6) * 2 + lVar9 * 8) =
                 pFVar5->PlaneIndex;
          }
          *(short *)(pFVar1 + lVar9 * 8 + 6) = *(short *)(pFVar1 + lVar9 * 8 + 6) + 1;
          if ((this->Planes).ArrayNum < (int)*(short *)(pFVar1 + lVar9 * 8 + 6)) break;
          pFVar5 = GetHalfEdge(this,iVar8);
          iVar8 = (int)pFVar5->TwinHalfEdgeIndex;
          if (iVar8 == -0x8000) goto LAB_143758fbb;
          pFVar5 = GetHalfEdge(this,iVar8);
          iVar7 = (int)pFVar5->PlaneIndex;
          pFVar6 = GetPlane(this,iVar7);
          iVar8 = iVar8 - pFVar6->FirstHalfEdgeIndex;
          if ((iVar8 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27a,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = GetPlane(this,iVar7);
          if ((pFVar6->NumHalfEdges <= iVar8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27b,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = GetPlane(this,iVar7);
          iVar8 = GetPlaneHalfEdge(this,iVar7,(iVar8 + 1) % (int)pFVar6->NumHalfEdges);
          if ((iVar8 == iVar11) || (iVar8 == -0x8000)) goto LAB_143758fbb;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_180241437902765385>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                           ,0x2b7,"VertexPlane.NumPlaneIndices <= Planes.Num()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined2 *)(pFVar1 + lVar9 * 8 + 6) = 0;
      }
LAB_143758fbb:
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar10 < (this->Vertices).ArrayNum);
  }
  return;
}

// BuildVertexPlanes @ 143759030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::BuildVertexPlanes(TConvexHalfEdgeStructureData<int> *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHalfEdgeData *pFVar6;
  FPlaneData *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexPlanes,TSizedDefaultAllocator<32>_>::
  SetNum(&this->VertexPlanes,(this->Vertices).ArrayNum,Default);
  uVar12 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar12 < (this->VertexPlanes).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->VertexPlanes).AllocatorInstance.Data + lVar11;
      *(undefined4 *)(pFVar8 + 0xc) = 0;
      *(undefined8 *)pFVar8 = 0xffffffffffffffff;
      *(undefined4 *)(pFVar8 + 8) = 0xffffffff;
      uVar5 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)((this->Vertices).AllocatorInstance.Data + lVar10 * 4);
      iVar9 = iVar1;
      if (iVar1 != -0x80000000) {
        while( true ) {
          if (*(int *)(pFVar8 + 0xc) < 3) {
            pFVar6 = GetHalfEdge(this,iVar9);
            *(int *)(pFVar8 + (longlong)*(int *)(pFVar8 + 0xc) * 4) = pFVar6->PlaneIndex;
          }
          *(int *)(pFVar8 + 0xc) = *(int *)(pFVar8 + 0xc) + 1;
          if ((this->Planes).ArrayNum < *(int *)(pFVar8 + 0xc)) break;
          pFVar6 = GetHalfEdge(this,iVar9);
          iVar9 = pFVar6->TwinHalfEdgeIndex;
          if (iVar9 == -0x80000000) goto LAB_143759260;
          pFVar6 = GetHalfEdge(this,iVar9);
          iVar2 = pFVar6->PlaneIndex;
          pFVar7 = GetPlane(this,iVar2);
          iVar9 = iVar9 - pFVar7->FirstHalfEdgeIndex;
          if ((iVar9 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27a,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = GetPlane(this,iVar2);
          if ((pFVar7->NumHalfEdges <= iVar9) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PlaneHalfEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar7 = GetPlane(this,iVar2);
          iVar9 = GetPlaneHalfEdge(this,iVar2,(iVar9 + 1) % pFVar7->NumHalfEdges);
          if ((iVar9 == iVar1) || (iVar9 == -0x80000000)) goto LAB_143759260;
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_180241437902765385>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                           ,0x2b7,"VertexPlane.NumPlaneIndices <= Planes.Num()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(pFVar8 + 0xc) = 0;
      }
LAB_143759260:
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  return;
}

// GetEdgePlane @ 14378fff0

int __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::GetEdgePlane
          (TConvexHalfEdgeStructureData<short> *this,int param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHalfEdgeData *pFVar6;
  
  iVar5 = (this->Edges).ArrayNum;
  if (param_2 == 0) {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    sVar1 = *(short *)((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 2);
  }
  else {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    pFVar6 = GetHalfEdge(this,(int)*(short *)((this->Edges).AllocatorInstance.Data +
                                             (longlong)param_1 * 2));
    sVar1 = pFVar6->TwinHalfEdgeIndex;
  }
  pFVar6 = GetHalfEdge(this,(int)sVar1);
  return (int)pFVar6->PlaneIndex;
}

// GetEdgeVertex @ 1437900f0

int __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::GetEdgeVertex
          (TConvexHalfEdgeStructureData<short> *this,int param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FHalfEdgeData *pFVar6;
  
  iVar5 = (this->Edges).ArrayNum;
  if (param_2 == 0) {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    sVar1 = *(short *)((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 2);
  }
  else {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    pFVar6 = GetHalfEdge(this,(int)*(short *)((this->Edges).AllocatorInstance.Data +
                                             (longlong)param_1 * 2));
    sVar1 = pFVar6->TwinHalfEdgeIndex;
  }
  pFVar6 = GetHalfEdge(this,(int)sVar1);
  return (int)pFVar6->VertexIndex;
}

// GetHalfEdge @ 1437908a0

FHalfEdgeData * __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge
          (TConvexHalfEdgeStructureData<unsigned_char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHalfEdgeData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->HalfEdges).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHalfEdgeData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHalfEdgeData *)((this->HalfEdges).AllocatorInstance.Data + (longlong)param_1 * 3);
}

// GetHalfEdge @ 143790920

FHalfEdgeData * __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::GetHalfEdge
          (TConvexHalfEdgeStructureData<short> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHalfEdgeData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->HalfEdges).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHalfEdgeData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHalfEdgeData *)((this->HalfEdges).AllocatorInstance.Data + (longlong)param_1 * 6);
}

// GetHalfEdge @ 1437909a0

FHalfEdgeData * __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::GetHalfEdge
          (TConvexHalfEdgeStructureData<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHalfEdgeData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->HalfEdges).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHalfEdgeData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FHalfEdgeData *)((this->HalfEdges).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// GetPlane @ 143792430

FPlaneData * __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlane
          (TConvexHalfEdgeStructureData<unsigned_char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPlaneData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPlaneData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPlaneData *)((this->Planes).AllocatorInstance.Data + (longlong)param_1 * 2);
}

// GetPlane @ 1437924b0

FPlaneData * __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::GetPlane
          (TConvexHalfEdgeStructureData<short> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPlaneData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPlaneData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPlaneData *)((this->Planes).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetPlane @ 143792530

FPlaneData * __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::GetPlane
          (TConvexHalfEdgeStructureData<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPlaneData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Planes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPlaneData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPlaneData *)((this->Planes).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetPlaneHalfEdge @ 1437925b0

int __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge
          (TConvexHalfEdgeStructureData<unsigned_char> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPlaneData *pFVar4;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  if ((int)(uint)pFVar4->NumHalfEdges <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  return (uint)pFVar4->FirstHalfEdgeIndex + param_2;
}

// GetPlaneHalfEdge @ 143792650

int __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
          (TConvexHalfEdgeStructureData<short> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPlaneData *pFVar4;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  if (pFVar4->NumHalfEdges <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  return pFVar4->FirstHalfEdgeIndex + param_2;
}

// GetPlaneHalfEdge @ 1437926f0

int __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge
          (TConvexHalfEdgeStructureData<int> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPlaneData *pFVar4;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  if (pFVar4->NumHalfEdges <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlaneEdgeIndex < NumPlaneHalfEdges(PlaneIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexHalfEdgeStructureData.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = GetPlane(this,param_1);
  return pFVar4->FirstHalfEdgeIndex + param_2;
}

// SetPlaneVertices @ 1437ae4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::SetPlaneVertices
          (TConvexHalfEdgeStructureData<unsigned_char> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexData,TSizedDefaultAllocator<32>_>
  *this_01;
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint local_res20;
  longlong local_78;
  int *local_70;
  longlong local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50;
  
  iVar14 = param_1->ArrayNum;
  iVar12 = 0;
  uVar11 = 0;
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar11 < iVar14) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar11 = uVar11 + 1;
      iVar14 = param_1->ArrayNum;
      iVar12 = iVar12 + *(int *)((param_1->AllocatorInstance).Data + lVar13 + 8);
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar11 < iVar14);
  }
  if (((0xfe < iVar14) || (0xfe < iVar12)) || (0xfe < param_2)) {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_Chaos::TConvexHalfEdgeStructureData<unsigned_char>::SetPlaneVertices(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,int)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return false;
  }
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FPlaneData,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Planes,iVar14,Default);
  this_00 = &this->HalfEdges;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  ::SetNum(this_00,iVar12,Default);
  this_01 = &this->Vertices;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexData,TSizedDefaultAllocator<32>_>
  ::SetNum(this_01,param_2,Default);
  uVar11 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar13 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar11 < (this->Vertices).ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar11 = uVar11 + 1;
      (this_01->AllocatorInstance).Data[lVar13] = (FScriptContainerElement)0xff;
      lVar13 = lVar13 + 1;
    } while ((int)uVar11 < (this->Vertices).ArrayNum);
  }
  uVar11 = 0;
  local_res20 = 0;
  iVar14 = param_1->ArrayNum;
  if (0 < iVar14) {
    do {
      uVar17 = 0;
      if ((int)local_res20 < iVar14) {
        uVar17 = ~local_res20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)(int)local_res20 * 0x10;
      FVar2 = pFVar9[8];
      uVar17 = 0;
      if ((int)local_res20 < (this->Planes).ArrayNum) {
        uVar17 = ~local_res20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar17 = 0;
      *(ushort *)((this->Planes).AllocatorInstance.Data + (longlong)(int)local_res20 * 2) =
           (ushort)(byte)FVar2 << 8 | (ushort)uVar11 & 0xff;
      iVar14 = *(int *)(pFVar9 + 8);
      if (0 < iVar14) {
        local_68 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar17 < iVar14) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar15 = *(uint *)(local_68 + *(longlong *)pFVar9);
          uVar17 = uVar17 + 1;
          uVar10 = (int)uVar17 % *(int *)(pFVar9 + 8);
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar9 + 8)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar2 = *(FScriptContainerElement *)(*(longlong *)pFVar9 + (longlong)(int)uVar10 * 4);
          uVar8 = 0;
          if ((int)uVar11 < (this->HalfEdges).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          lVar13 = (longlong)(int)uVar11 * 3;
          pFVar4 = (this_00->AllocatorInstance).Data;
          pFVar4[lVar13] = SUB41(local_res20,0);
          pFVar4[lVar13 + 1] = SUB41(uVar15,0);
          pFVar4[lVar13 + 2] = FVar2;
          uVar8 = 0;
          if ((int)uVar15 < (this->Vertices).ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((this_01->AllocatorInstance).Data[(int)uVar15] == (FScriptContainerElement)0xff) {
            uVar8 = 0;
            if ((int)uVar15 < (this->Vertices).ArrayNum) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            (this_01->AllocatorInstance).Data[(int)uVar15] = SUB41(uVar11,0);
          }
          uVar11 = uVar11 + 1;
          local_68 = local_68 + 4;
          iVar14 = *(int *)(pFVar9 + 8);
        } while ((int)uVar17 < iVar14);
      }
      local_res20 = local_res20 + 1;
      iVar14 = param_1->ArrayNum;
    } while ((int)local_res20 < iVar14);
  }
  piVar1 = &(this->HalfEdges).ArrayNum;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            (&local_60,(this->HalfEdges).ArrayNum,Default);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_50,*piVar1,Default);
  uVar11 = 0;
  if (0 < local_60.ArrayNum) {
    lVar13 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar11 < local_60.ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_60.AllocatorInstance.Data[lVar13] = (FScriptContainerElement)0xff;
      uVar17 = 0;
      if ((int)uVar11 < local_50.ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar11 = uVar11 + 1;
      local_50.AllocatorInstance.Data[lVar13] = (FScriptContainerElement)0x0;
      lVar13 = lVar13 + 1;
    } while ((int)uVar11 < local_60.ArrayNum);
  }
  local_70 = &(this->HalfEdges).ArrayNum;
  iVar14 = *piVar1;
  uVar11 = 0;
  if (0 < iVar14) {
    local_78 = 0;
    local_68 = 0;
    do {
      uVar15 = ~uVar11 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar11 < (this->HalfEdges).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar2 = (this_00->AllocatorInstance).Data[local_68 + 1];
      uVar17 = 0;
      if ((int)uVar11 < (this->HalfEdges).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (this_00->AllocatorInstance).Data[local_68 + 2];
      uVar17 = 0;
      if (0 < *local_70) {
        do {
          uVar8 = 0;
          if ((int)uVar17 < (this->HalfEdges).ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((this_00->AllocatorInstance).Data[(longlong)(int)uVar17 * 3 + 1] == FVar3) {
            uVar8 = 0;
            if ((int)uVar17 < (this->HalfEdges).ArrayNum) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if ((this_00->AllocatorInstance).Data[(longlong)(int)uVar17 * 3 + 2] == FVar2) {
              uVar8 = 0;
              if ((int)uVar17 < local_50.ArrayNum) {
                uVar8 = ~uVar17 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              if (local_50.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
                uVar8 = 0;
                if ((int)uVar11 < local_60.ArrayNum) {
                  uVar8 = uVar15;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                local_60.AllocatorInstance.Data[local_78] = SUB41(uVar17,0);
                uVar15 = 0;
                if ((int)uVar17 < local_50.ArrayNum) {
                  uVar15 = ~uVar17 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                local_50.AllocatorInstance.Data[(int)uVar17] = (FScriptContainerElement)0x1;
              }
              else {
                uVar17 = 0;
                if ((int)uVar11 < local_60.ArrayNum) {
                  uVar17 = uVar15;
                }
                if ((uVar17 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                local_60.AllocatorInstance.Data[local_78] = (FScriptContainerElement)0xff;
              }
              break;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < *local_70);
      }
      uVar11 = uVar11 + 1;
      local_68 = local_68 + 3;
      local_78 = local_78 + 1;
      iVar14 = *local_70;
    } while ((int)uVar11 < iVar14);
  }
  uVar11 = 0;
  if (0 < iVar14) {
    lVar13 = 0;
    lVar16 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar11 < local_60.ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar2 = local_60.AllocatorInstance.Data[lVar13];
      uVar17 = 0;
      if ((int)uVar11 < (this->HalfEdges).ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      (this->HalfEdges).AllocatorInstance.Data[lVar16 + 2] = FVar2;
      lVar16 = lVar16 + 3;
    } while ((int)uVar11 < (this->HalfEdges).ArrayNum);
  }
  BuildVertexPlanes(this);
  BuildUniqueEdgeList(this);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return true;
}

// SetPlaneVertices @ 1437aee80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::SetPlaneVertices
          (TConvexHalfEdgeStructureData<short> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexData,TSizedDefaultAllocator<32>_>
  *this_01;
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  uint local_res20;
  longlong local_78;
  longlong local_68;
  TArray<short,TSizedDefaultAllocator<32>_> local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50;
  
  iVar15 = param_1->ArrayNum;
  iVar13 = 0;
  uVar12 = 0;
  if (0 < iVar15) {
    lVar14 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar12 < iVar15) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar12 = uVar12 + 1;
      iVar15 = param_1->ArrayNum;
      iVar13 = iVar13 + *(int *)((param_1->AllocatorInstance).Data + lVar14 + 8);
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar12 < iVar15);
  }
  if (((0x7fff < iVar15) || (0x7fff < iVar13)) || (0x7fff < param_2)) {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_Chaos::TConvexHalfEdgeStructureData<short>::SetPlaneVertices(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,int)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return false;
  }
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FPlaneData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Planes,iVar15,Default);
  this_00 = &this->HalfEdges;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FHalfEdgeData,TSizedDefaultAllocator<32>_>::
  SetNum(this_00,iVar13,Default);
  this_01 = &this->Vertices;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexData,TSizedDefaultAllocator<32>_>::
  SetNum(this_01,param_2,Default);
  uVar12 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar14 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar12 = uVar12 + 1;
      *(undefined2 *)((this_01->AllocatorInstance).Data + lVar14) = 0x8000;
      lVar14 = lVar14 + 2;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  uVar12 = 0;
  local_res20 = 0;
  iVar15 = param_1->ArrayNum;
  if (0 < iVar15) {
    do {
      uVar19 = 0;
      if ((int)local_res20 < iVar15) {
        uVar19 = ~local_res20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)local_res20 * 0x10;
      uVar1 = *(ushort *)(pFVar10 + 8);
      uVar19 = 0;
      if ((int)local_res20 < (this->Planes).ArrayNum) {
        uVar19 = ~local_res20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar19 = 0;
      *(uint *)((this->Planes).AllocatorInstance.Data + (longlong)(int)local_res20 * 4) =
           (uint)uVar1 << 0x10 | uVar12 & 0xffff;
      iVar15 = *(int *)(pFVar10 + 8);
      if (0 < iVar15) {
        local_68 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar19 < iVar15) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          uVar16 = *(uint *)(local_68 + *(longlong *)pFVar10);
          uVar19 = uVar19 + 1;
          uVar11 = (int)uVar19 % *(int *)(pFVar10 + 8);
          uVar9 = 0;
          if ((int)uVar11 < *(int *)(pFVar10 + 8)) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          uVar2 = *(undefined2 *)(*(longlong *)pFVar10 + (longlong)(int)uVar11 * 4);
          uVar9 = 0;
          if ((int)uVar12 < (this->HalfEdges).ArrayNum) {
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
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar14 = (longlong)(int)uVar12;
          pFVar5 = (this_00->AllocatorInstance).Data;
          *(short *)(pFVar5 + lVar14 * 6) = (short)local_res20;
          *(short *)(pFVar5 + lVar14 * 6 + 2) = (short)uVar16;
          *(undefined2 *)(pFVar5 + lVar14 * 6 + 4) = uVar2;
          uVar9 = 0;
          if ((int)uVar16 < (this->Vertices).ArrayNum) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (*(short *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar16 * 2) == -0x8000)
          {
            uVar9 = 0;
            if ((int)uVar16 < (this->Vertices).ArrayNum) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            *(short *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar16 * 2) =
                 (short)uVar12;
          }
          uVar12 = uVar12 + 1;
          local_68 = local_68 + 4;
          iVar15 = *(int *)(pFVar10 + 8);
        } while ((int)uVar19 < iVar15);
      }
      local_res20 = local_res20 + 1;
      iVar15 = param_1->ArrayNum;
    } while ((int)local_res20 < iVar15);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&local_60,(this->HalfEdges).ArrayNum,Default);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_50,(this->HalfEdges).ArrayNum,Default);
  uVar12 = 0;
  if (0 < local_60.ArrayNum) {
    lVar14 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar12 < local_60.ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      *(undefined2 *)(local_60.AllocatorInstance.Data + lVar14 * 2) = 0x8000;
      uVar19 = 0;
      if ((int)uVar12 < local_50.ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar12 = uVar12 + 1;
      local_50.AllocatorInstance.Data[lVar14] = (FScriptContainerElement)0x0;
      lVar14 = lVar14 + 1;
    } while ((int)uVar12 < local_60.ArrayNum);
  }
  piVar17 = &(this->HalfEdges).ArrayNum;
  iVar15 = (this->HalfEdges).ArrayNum;
  uVar12 = 0;
  if (0 < iVar15) {
    local_78 = 0;
    local_68 = 0;
    do {
      uVar16 = ~uVar12 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar12 < (this->HalfEdges).ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      sVar3 = *(short *)((this_00->AllocatorInstance).Data + local_68 + 2);
      uVar19 = 0;
      if ((int)uVar12 < (this->HalfEdges).ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      sVar4 = *(short *)((this_00->AllocatorInstance).Data + local_68 + 4);
      uVar19 = 0;
      if (0 < *piVar17) {
        do {
          uVar9 = 0;
          if ((int)uVar19 < (this->HalfEdges).ArrayNum) {
            uVar9 = ~uVar19 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (*(short *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar19 * 6 + 2) == sVar4
             ) {
            uVar9 = 0;
            if ((int)uVar19 < (this->HalfEdges).ArrayNum) {
              uVar9 = ~uVar19 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (*(short *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar19 * 6 + 4) ==
                sVar3) {
              uVar9 = 0;
              if ((int)uVar19 < local_50.ArrayNum) {
                uVar9 = ~uVar19 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if (local_50.AllocatorInstance.Data[(int)uVar19] == (FScriptContainerElement)0x0) {
                uVar9 = 0;
                if ((int)uVar12 < local_60.ArrayNum) {
                  uVar9 = uVar16;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                *(short *)(local_60.AllocatorInstance.Data + local_78) = (short)uVar19;
                uVar16 = 0;
                if ((int)uVar19 < local_50.ArrayNum) {
                  uVar16 = ~uVar19 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                local_50.AllocatorInstance.Data[(int)uVar19] = (FScriptContainerElement)0x1;
              }
              else {
                uVar19 = 0;
                if ((int)uVar12 < local_60.ArrayNum) {
                  uVar19 = uVar16;
                }
                if ((uVar19 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                *(undefined2 *)(local_60.AllocatorInstance.Data + local_78) = 0x8000;
              }
              break;
            }
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < *piVar17);
      }
      uVar12 = uVar12 + 1;
      local_68 = local_68 + 6;
      local_78 = local_78 + 2;
      iVar15 = *piVar17;
    } while ((int)uVar12 < iVar15);
  }
  uVar12 = 0;
  if (0 < iVar15) {
    lVar14 = 0;
    lVar18 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar12 < local_60.ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar2 = *(undefined2 *)(local_60.AllocatorInstance.Data + lVar18);
      uVar19 = 0;
      if ((int)uVar12 < (this->HalfEdges).ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar12 = uVar12 + 1;
      lVar18 = lVar18 + 2;
      *(undefined2 *)((this->HalfEdges).AllocatorInstance.Data + lVar14 + 4) = uVar2;
      lVar14 = lVar14 + 6;
    } while ((int)uVar12 < (this->HalfEdges).ArrayNum);
  }
  BuildVertexPlanes(this);
  BuildUniqueEdgeList(this);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return true;
}

// SetPlaneVertices @ 1437af860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::SetPlaneVertices
          (TConvexHalfEdgeStructureData<int> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_res20;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_68;
  longlong local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<bool,TSizedDefaultAllocator<32>_> local_48;
  
  iVar11 = 0;
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < iVar7) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      iVar7 = param_1->ArrayNum;
      iVar11 = iVar11 + *(int *)((param_1->AllocatorInstance).Data + lVar12 + 8);
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar9 < iVar7);
  }
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FPlaneData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Planes,iVar7,Default);
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FHalfEdgeData,TSizedDefaultAllocator<32>_>::
  SetNum(&this->HalfEdges,iVar11,Default);
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Vertices,param_2,Default);
  uVar9 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < (this->Vertices).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)((this->Vertices).AllocatorInstance.Data + lVar12) = 0x80000000;
      lVar12 = lVar12 + 4;
    } while ((int)uVar9 < (this->Vertices).ArrayNum);
  }
  uVar16 = 0;
  local_res20 = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    local_78 = 0;
    lVar12 = 0;
    local_60 = 0;
    local_80 = 0;
    do {
      uVar9 = 0;
      if ((int)local_res20 < iVar7) {
        uVar9 = ~local_res20 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar6 = (param_1->AllocatorInstance).Data + local_78;
      uVar9 = *(uint *)(pFVar6 + 8);
      uVar10 = 0;
      if ((int)local_res20 < (this->Planes).ArrayNum) {
        uVar10 = ~local_res20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(ulonglong *)((this->Planes).AllocatorInstance.Data + local_60 * 8) =
           (ulonglong)uVar9 << 0x20 | uVar16;
      uVar9 = 0;
      iVar7 = *(int *)(pFVar6 + 8);
      if (0 < iVar7) {
        lVar14 = lVar12 * 0xc;
        local_68 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar9 < iVar7) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar10 = *(uint *)(local_68 + *(longlong *)pFVar6);
          uVar8 = (int)(uVar9 + 1) % *(int *)(pFVar6 + 8);
          uVar13 = 0;
          if ((int)uVar8 < *(int *)(pFVar6 + 8)) {
            uVar13 = ~uVar8 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar15 = (uint)uVar16;
          uVar1 = *(undefined4 *)(*(longlong *)pFVar6 + (longlong)(int)uVar8 * 4);
          uVar13 = 0;
          if ((int)uVar15 < (this->HalfEdges).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->HalfEdges).AllocatorInstance.Data;
          *(uint *)(pFVar2 + lVar14) = local_res20;
          *(uint *)(pFVar2 + lVar14 + 4) = uVar10;
          *(undefined4 *)(pFVar2 + lVar14 + 8) = uVar1;
          uVar13 = 0;
          if ((int)uVar10 < (this->Vertices).ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) ==
              -0x80000000) {
            uVar13 = 0;
            if ((int)uVar10 < (this->Vertices).ArrayNum) {
              uVar13 = ~uVar10 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            *(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = uVar15;
          }
          uVar16 = (ulonglong)(uVar15 + 1);
          lVar14 = lVar14 + 0xc;
          local_68 = local_68 + 4;
          lVar12 = local_80 + 1;
          uVar9 = uVar9 + 1;
          iVar7 = *(int *)(pFVar6 + 8);
          local_80 = lVar12;
        } while ((int)uVar9 < iVar7);
      }
      local_res20 = local_res20 + 1;
      local_78 = local_78 + 0x10;
      local_60 = local_60 + 1;
      iVar7 = param_1->ArrayNum;
    } while ((int)local_res20 < iVar7);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_58,(this->HalfEdges).ArrayNum,Default);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_48,(this->HalfEdges).ArrayNum,Default);
  uVar9 = 0;
  if (0 < local_58.ArrayNum) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < local_58.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)(local_58.AllocatorInstance.Data + lVar12 * 4) = 0x80000000;
      uVar10 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      local_48.AllocatorInstance.Data[lVar12] = (FScriptContainerElement)0x0;
      lVar12 = lVar12 + 1;
    } while ((int)uVar9 < local_58.ArrayNum);
  }
  iVar7 = (this->HalfEdges).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    local_88 = 0;
    local_60 = 0;
    do {
      uVar13 = ~uVar9 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar9 < (this->HalfEdges).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = *(int *)((this->HalfEdges).AllocatorInstance.Data + local_60 + 4);
      uVar10 = 0;
      if ((int)uVar9 < (this->HalfEdges).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar12 = 0;
      iVar11 = *(int *)((this->HalfEdges).AllocatorInstance.Data + local_60 + 8);
      uVar10 = 0;
      if (0 < (this->HalfEdges).ArrayNum) {
        lVar14 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < (this->HalfEdges).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(int *)((this->HalfEdges).AllocatorInstance.Data + lVar14 + 4) == iVar11) {
            uVar8 = 0;
            if ((int)uVar10 < (this->HalfEdges).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (*(int *)((this->HalfEdges).AllocatorInstance.Data + lVar14 + 8) == iVar7) {
              uVar8 = 0;
              if ((int)uVar10 < local_48.ArrayNum) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              if (local_48.AllocatorInstance.Data[lVar12] == (FScriptContainerElement)0x0) {
                uVar8 = 0;
                if ((int)uVar9 < local_58.ArrayNum) {
                  uVar8 = uVar13;
                }
                if ((uVar8 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                *(uint *)(local_58.AllocatorInstance.Data + local_88) = uVar10;
                uVar13 = 0;
                if ((int)uVar10 < local_48.ArrayNum) {
                  uVar13 = ~uVar10 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                local_48.AllocatorInstance.Data[lVar12] = (FScriptContainerElement)0x1;
              }
              else {
                uVar10 = 0;
                if ((int)uVar9 < local_58.ArrayNum) {
                  uVar10 = uVar13;
                }
                if ((uVar10 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                *(undefined4 *)(local_58.AllocatorInstance.Data + local_88) = 0x80000000;
              }
              break;
            }
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 1;
          lVar14 = lVar14 + 0xc;
        } while ((int)uVar10 < (this->HalfEdges).ArrayNum);
      }
      uVar9 = uVar9 + 1;
      local_88 = local_88 + 4;
      local_60 = local_60 + 0xc;
      iVar7 = (this->HalfEdges).ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  uVar9 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < local_58.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar14);
      uVar10 = 0;
      if ((int)uVar9 < (this->HalfEdges).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 4;
      *(undefined4 *)((this->HalfEdges).AllocatorInstance.Data + lVar12 + 8) = uVar1;
      lVar12 = lVar12 + 0xc;
    } while ((int)uVar9 < (this->HalfEdges).ArrayNum);
  }
  BuildVertexPlanes(this);
  BuildUniqueEdgeList(this);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// TConvexHalfEdgeStructureData<unsigned_char> @ 143a36810

TConvexHalfEdgeStructureData<unsigned_char> * __thiscall
Chaos::TConvexHalfEdgeStructureData<unsigned_char>::TConvexHalfEdgeStructureData<unsigned_char>
          (TConvexHalfEdgeStructureData<unsigned_char> *this,
          TConvexHalfEdgeStructureData<unsigned_char> *param_1)

{
  int *piVar1;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::TConvexHalfEdgeStructureData<unsigned_char>::FVertexPlanes,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->Planes).ArrayMax;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Planes).ArrayNum;
  pFVar7 = (param_1->Planes).AllocatorInstance.Data;
  (this->Planes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    memcpy((this->Planes).AllocatorInstance.Data,pFVar7,(longlong)iVar6 * 2);
  }
  pTVar2 = &this->HalfEdges;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->HalfEdges).ArrayMax;
  iVar6 = (param_1->HalfEdges).ArrayNum;
  pFVar7 = (param_1->HalfEdges).AllocatorInstance.Data;
  (this->HalfEdges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (3,1,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 3);
  }
  pTVar3 = &this->Vertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar6 = (param_1->Vertices).ArrayNum;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  pTVar4 = &this->Edges;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Edges).ArrayMax;
  iVar6 = (param_1->Edges).ArrayNum;
  pFVar7 = (param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  pTVar5 = &this->VertexPlanes;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VertexPlanes).ArrayMax;
  iVar6 = (param_1->VertexPlanes).ArrayNum;
  pFVar7 = (param_1->VertexPlanes).AllocatorInstance.Data;
  (this->VertexPlanes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,1,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  return this;
}

// TConvexHalfEdgeStructureData<short> @ 143a369f0

TConvexHalfEdgeStructureData<short> * __thiscall
Chaos::TConvexHalfEdgeStructureData<short>::TConvexHalfEdgeStructureData<short>
          (TConvexHalfEdgeStructureData<short> *this,TConvexHalfEdgeStructureData<short> *param_1)

{
  int *piVar1;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::TConvexHalfEdgeStructureData<short>::FVertexPlanes,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->Planes).ArrayMax;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Planes).ArrayNum;
  pFVar7 = (param_1->Planes).AllocatorInstance.Data;
  (this->Planes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    memcpy((this->Planes).AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar2 = &this->HalfEdges;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->HalfEdges).ArrayMax;
  iVar6 = (param_1->HalfEdges).ArrayNum;
  pFVar7 = (param_1->HalfEdges).AllocatorInstance.Data;
  (this->HalfEdges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 6);
  }
  pTVar3 = &this->Vertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar6 = (param_1->Vertices).ArrayNum;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 2);
  }
  pTVar4 = &this->Edges;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Edges).ArrayMax;
  iVar6 = (param_1->Edges).ArrayNum;
  pFVar7 = (param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 2);
  }
  pTVar5 = &this->VertexPlanes;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VertexPlanes).ArrayMax;
  iVar6 = (param_1->VertexPlanes).ArrayNum;
  pFVar7 = (param_1->VertexPlanes).AllocatorInstance.Data;
  (this->VertexPlanes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,2,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  return this;
}

// TConvexHalfEdgeStructureData<int> @ 143a36be0

TConvexHalfEdgeStructureData<int> * __thiscall
Chaos::TConvexHalfEdgeStructureData<int>::TConvexHalfEdgeStructureData<int>
          (TConvexHalfEdgeStructureData<int> *this,TConvexHalfEdgeStructureData<int> *param_1)

{
  int *piVar1;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FHalfEdgeData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::TConvexHalfEdgeStructureData<int>::FVertexPlanes,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->Planes).ArrayMax;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Planes).ArrayNum;
  pFVar7 = (param_1->Planes).AllocatorInstance.Data;
  (this->Planes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    memcpy((this->Planes).AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 3);
  }
  pTVar2 = &this->HalfEdges;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->HalfEdges).ArrayMax;
  iVar6 = (param_1->HalfEdges).ArrayNum;
  pFVar7 = (param_1->HalfEdges).AllocatorInstance.Data;
  (this->HalfEdges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xc);
  }
  pTVar3 = &this->Vertices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar6 = (param_1->Vertices).ArrayNum;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar4 = &this->Edges;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Edges).ArrayMax;
  iVar6 = (param_1->Edges).ArrayNum;
  pFVar7 = (param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar5 = &this->VertexPlanes;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VertexPlanes).ArrayMax;
  iVar6 = (param_1->VertexPlanes).ArrayNum;
  pFVar7 = (param_1->VertexPlanes).AllocatorInstance.Data;
  (this->VertexPlanes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  return this;
}

// operator() @ 1504a2ab0

bool __thiscall
`Chaos::TConvexHalfEdgeStructureData<unsigned_char>::Serialize'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180241437902765504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180241437902765504>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::TConvexHalfEdgeStructureData<unsigned_char>::Serialize(FArchive&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a2af0

bool __thiscall
`Chaos::TConvexHalfEdgeStructureData<short>::Serialize'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180241437902765504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180241437902765504>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::TConvexHalfEdgeStructureData<short>::Serialize(FArchive&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a2b30

bool __thiscall
`Chaos::TConvexHalfEdgeStructureData<int>::Serialize'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180241437902765504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180241437902765504>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::TConvexHalfEdgeStructureData<int>::Serialize(FArchive&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

