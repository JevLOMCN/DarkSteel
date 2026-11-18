// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 4

// CompactMaterialIndices @ 14435e050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRawMesh::CompactMaterialIndices(FRawMesh *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStackY_f8 [32];
  uint local_a8;
  int local_a4;
  longlong local_a0;
  ForElementType<int> local_98;
  int local_70;
  int local_6c;
  ForElementType<int> local_68;
  uint local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar1 = &this->MaterialIndexToImportIndex;
  uVar10 = 0;
  (this->MaterialIndexToImportIndex).ArrayNum = 0;
  if ((this->MaterialIndexToImportIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->MaterialIndexToImportIndex).ArrayMax);
  }
  bVar5 = IsValidOrFixable(this);
  if (bVar5) {
    lVar13 = (longlong)(this->FaceMaterialIndices).ArrayNum;
    local_68.SecondaryData = (ForElementType<int>)0x0;
    local_40[0] = 0;
    local_40[1] = 8;
    uVar14 = uVar10;
    uVar17 = uVar10;
    local_a0 = lVar13;
    if (0 < lVar13) {
      do {
        uVar16 = (uint)uVar17;
        uVar12 = 0;
        if ((int)uVar16 < (this->FaceMaterialIndices).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar10 = (ulonglong)local_40[0];
        }
        uVar12 = *(uint *)((this->FaceMaterialIndices).AllocatorInstance.Data + uVar14 * 4);
        if ((int)uVar10 <= (int)uVar12) {
          iVar11 = (uVar12 - (int)uVar10) + 1;
          iVar6 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (4,4,iVar11,&local_68,(int *)local_40,(int *)(local_40 + 1));
          FVar8 = (ForElementType<int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_68.SecondaryData;
          }
          memset((void *)((longlong)FVar8 + (longlong)iVar6 * 4),0,(longlong)iVar11 << 2);
          uVar10 = (ulonglong)local_40[0];
        }
        if (-1 < (int)uVar12) {
          uVar7 = 0;
          if ((int)uVar12 < (int)uVar10) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          FVar8 = (ForElementType<int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_68.SecondaryData;
          }
          piVar15 = (int *)((longlong)FVar8 + (longlong)(int)uVar12 * 4);
          *piVar15 = *piVar15 + 1;
          uVar10 = (ulonglong)local_40[0];
        }
        uVar14 = uVar14 + 1;
        uVar17 = (ulonglong)(uVar16 + 1);
      } while ((longlong)uVar14 < lVar13);
    }
    lVar13 = local_a0;
    piVar15 = &(this->MaterialIndexToImportIndex).ArrayMax;
    local_98.SecondaryData = (ForElementType<int>)0x0;
    local_70 = 0;
    local_6c = 8;
    local_a8 = 0;
    if (0 < (int)uVar10) {
      do {
        uVar12 = local_a8;
        local_a4 = -1;
        uVar16 = 0;
        if ((int)local_a8 < (int)uVar10) {
          uVar16 = ~local_a8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (ForElementType<int>)&local_68;
        if (local_68.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_68.SecondaryData;
        }
        if (0 < *(int *)((longlong)FVar8 + (longlong)(int)uVar12 * 4)) {
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)*piVar15 * 4)) &&
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
          iVar6 = (this->MaterialIndexToImportIndex).ArrayNum;
          if (iVar6 == *piVar15) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar1->AllocatorInstance,piVar15);
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          (this->MaterialIndexToImportIndex).ArrayNum = iVar6 + 1;
          *(uint *)(pFVar3 + (longlong)iVar6 * 4) = local_a8;
          local_a4 = iVar6;
        }
        FVar8 = (ForElementType<int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_98.SecondaryData;
        }
        if ((ulonglong)FVar8 <= &local_a4) {
          FVar8 = (ForElementType<int>)&local_98;
          if (local_98.SecondaryData != (ForElementType<int>)0x0) {
            FVar8 = local_98.SecondaryData;
          }
          if ((&local_a4 < (int *)((longlong)FVar8 + (longlong)local_6c * 4)) &&
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
        }
        if (local_70 == local_6c) {
          local_70 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_98,&local_6c);
        }
        lVar9 = (longlong)local_70;
        FVar8 = (ForElementType<int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_98.SecondaryData;
        }
        local_70 = local_70 + 1;
        *(int *)((longlong)FVar8 + lVar9 * 4) = local_a4;
        uVar10 = (ulonglong)local_40[0];
        local_a8 = local_a8 + 1;
      } while ((int)local_a8 < (int)local_40[0]);
    }
    uVar12 = 0;
    if ((this->MaterialIndexToImportIndex).ArrayNum == local_70) {
      (this->MaterialIndexToImportIndex).ArrayNum = 0;
      if (*piVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,piVar15);
      }
    }
    else if (0 < lVar13) {
      lVar9 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar12 < (this->FaceMaterialIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar16 = *(uint *)((this->FaceMaterialIndices).AllocatorInstance.Data + lVar9 * 4);
        uVar7 = 0;
        if ((int)uVar16 < local_70) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (ForElementType<int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<int>)0x0) {
          FVar8 = local_98.SecondaryData;
        }
        uVar2 = *(undefined4 *)((longlong)FVar8 + (longlong)(int)uVar16 * 4);
        uVar16 = 0;
        if ((int)uVar12 < (this->FaceMaterialIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((this->FaceMaterialIndices).AllocatorInstance.Data + lVar9 * 4) = uVar2;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar13);
    }
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
    if (local_68.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
  }
  return;
}

// Empty @ 14435e620

void __thiscall FRawMesh::Empty(FRawMesh *this)

{
  int *piVar1;
  
  piVar1 = &(this->FaceMaterialIndices).ArrayMax;
  (this->FaceMaterialIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->FaceSmoothingMasks).ArrayMax;
  (this->FaceSmoothingMasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FaceSmoothingMasks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->VertexPositions).ArrayMax;
  (this->VertexPositions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->VertexPositions).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WedgeIndices).ArrayMax;
  (this->WedgeIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WedgeIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WedgeTangentX).ArrayMax;
  (this->WedgeTangentX).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->WedgeTangentX).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WedgeTangentY).ArrayMax;
  (this->WedgeTangentY).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->WedgeTangentY).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WedgeTangentZ).ArrayMax;
  (this->WedgeTangentZ).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->WedgeTangentZ).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WedgeColors).ArrayMax;
  (this->WedgeColors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WedgeColors).AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[0].ArrayMax;
  this->WedgeTexCoords[0].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[0].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[1].ArrayMax;
  this->WedgeTexCoords[1].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[1].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[2].ArrayMax;
  this->WedgeTexCoords[2].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[2].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[3].ArrayMax;
  this->WedgeTexCoords[3].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[3].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[4].ArrayMax;
  this->WedgeTexCoords[4].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[4].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[5].ArrayMax;
  this->WedgeTexCoords[5].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[5].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[6].ArrayMax;
  this->WedgeTexCoords[6].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[6].AllocatorInstance,0,piVar1);
  }
  piVar1 = &this->WedgeTexCoords[7].ArrayMax;
  this->WedgeTexCoords[7].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&this->WedgeTexCoords[7].AllocatorInstance,0,piVar1);
  }
  return;
}

// IsValid @ 14435eae0

bool __thiscall FRawMesh::IsValid(FRawMesh *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = (this->VertexPositions).ArrayNum;
  iVar2 = (this->WedgeIndices).ArrayNum;
  iVar8 = iVar2 / 3 + (iVar2 >> 0x1f) +
          (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if (((((((0 < (int)uVar1) && (0 < iVar2)) && (0 < iVar8)) &&
        ((iVar3 = (this->FaceMaterialIndices).ArrayNum, iVar3 == 0 || (iVar3 == iVar8)))) &&
       ((iVar3 = (this->FaceSmoothingMasks).ArrayNum, iVar3 == 0 || (iVar3 == iVar8)))) &&
      (((iVar8 = (this->WedgeTangentX).ArrayNum, iVar8 == 0 || (iVar8 == iVar2)) &&
       ((iVar8 = (this->WedgeTangentY).ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))))) &&
     ((((((((iVar8 = (this->WedgeTangentZ).ArrayNum, iVar8 == 0 || (iVar8 == iVar2)) &&
           ((iVar8 = (this->WedgeColors).ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))) &&
          (this->WedgeTexCoords[0].ArrayNum == iVar2)) &&
         ((iVar8 = this->WedgeTexCoords[1].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))) &&
        (((iVar8 = this->WedgeTexCoords[2].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)) &&
         ((iVar8 = this->WedgeTexCoords[3].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))))) &&
       ((iVar8 = this->WedgeTexCoords[4].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))) &&
      ((((iVar8 = this->WedgeTexCoords[5].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)) &&
        ((iVar8 = this->WedgeTexCoords[6].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))) &&
       ((iVar8 = this->WedgeTexCoords[7].ArrayNum, iVar8 == 0 || (iVar8 == iVar2)))))))) {
    uVar9 = 0;
    lVar10 = 0;
    while( true ) {
      if (iVar2 <= lVar10) {
        return true;
      }
      uVar7 = 0;
      if ((int)uVar9 < (this->WedgeIndices).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) break;
      if (uVar1 <= *(uint *)((this->WedgeIndices).AllocatorInstance.Data + lVar10 * 4)) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

// IsValidOrFixable @ 14435ecb0

bool __thiscall FRawMesh::IsValidOrFixable(FRawMesh *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = (this->VertexPositions).ArrayNum;
  iVar2 = (this->WedgeIndices).ArrayNum;
  if (((((((((0 < (int)uVar1) && (0 < iVar2)) &&
           (iVar7 = iVar2 / 3 + (iVar2 >> 0x1f) +
                    (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f),
           0 < iVar7)) &&
          (((this->FaceMaterialIndices).ArrayNum == iVar7 &&
           ((this->FaceSmoothingMasks).ArrayNum == iVar7)))) &&
         ((iVar7 = (this->WedgeColors).ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))) &&
        ((this->WedgeTexCoords[0].ArrayNum == iVar2 &&
         (((iVar7 = this->WedgeTexCoords[1].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)) &&
          ((iVar7 = this->WedgeTexCoords[2].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))))))) &&
       ((iVar7 = this->WedgeTexCoords[3].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))) &&
      ((iVar7 = this->WedgeTexCoords[4].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))) &&
     ((((iVar7 = this->WedgeTexCoords[5].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)) &&
       ((iVar7 = this->WedgeTexCoords[6].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))) &&
      ((iVar7 = this->WedgeTexCoords[7].ArrayNum, iVar7 == 0 || (iVar7 == iVar2)))))) {
    uVar8 = 0;
    lVar9 = 0;
    while( true ) {
      if (iVar2 <= lVar9) {
        return true;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->WedgeIndices).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) break;
      if (uVar1 <= *(uint *)((this->WedgeIndices).AllocatorInstance.Data + lVar9 * 4)) {
        return false;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    }
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

