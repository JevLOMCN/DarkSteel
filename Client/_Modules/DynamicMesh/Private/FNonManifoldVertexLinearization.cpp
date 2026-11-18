// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Initialize @ 14c8165b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Private::FNonManifoldVertexLinearization::Initialize
          (FNonManifoldVertexLinearization *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  short sVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FNonManifoldMappingSupport local_38;
  
  FElementLinearization::Empty((FElementLinearization *)this);
  FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_38,param_1);
  iVar15 = 0;
  bVar8 = FNonManifoldMappingSupport::IsNonManifoldVertexInSource(&local_38);
  if (bVar8) {
    uVar14 = 0;
    uVar16 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    iVar15 = 0;
    if ((uVar16 == 0) ||
       (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14c816660:
      uVar10 = (uint)uVar14;
    }
    else {
      uVar14 = 1;
      uVar10 = 1;
      if (1 < (int)uVar16) {
        do {
          lVar1 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
          lVar17 = *(longlong *)(pFVar4 + (uVar14 >> 9) * 8);
          if ((*(short *)(lVar1 + lVar17) != 0) && (*(short *)(lVar1 + lVar17) != -1)) break;
          uVar10 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar16);
        goto LAB_14c816660;
      }
    }
    while (uVar10 != uVar16) {
      iVar11 = (int)uVar14;
      iVar9 = FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID(&local_38,iVar11);
      iVar6 = iVar15 + 1;
      if (iVar11 == iVar9) {
        iVar6 = iVar15;
      }
      uVar10 = iVar11 + 1;
      uVar14 = (ulonglong)uVar10;
      iVar15 = iVar6;
      if ((int)uVar10 < (int)uVar16) {
        pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar17 = (uVar14 >> 9) * 8;
          lVar1 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
          if ((*(short *)(lVar1 + *(longlong *)(pFVar4 + lVar17)) != 0) &&
             (*(short *)(lVar1 + *(longlong *)(pFVar4 + lVar17)) != -1)) break;
          uVar10 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar16);
        uVar10 = (uint)uVar14;
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x10,&IndexConstants::InvalidID
             ,(param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,
             (param_1->VertexRefCounts).UsedCount - iVar15,Default);
  uVar16 = 0;
  uVar14 = 0;
  uVar10 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar10 != 0) &&
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar14 = 1;
    uVar12 = 1;
    if ((int)uVar10 < 2) goto LAB_14c816762;
    do {
      lVar1 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
      lVar17 = *(longlong *)(pFVar4 + (uVar14 >> 9) * 8);
      if ((*(short *)(lVar1 + lVar17) != 0) && (*(short *)(lVar1 + lVar17) != -1)) break;
      uVar12 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar10);
  }
  uVar12 = (uint)uVar14;
LAB_14c816762:
  if (uVar12 != uVar10) {
    lVar17 = 0;
LAB_14c816770:
    do {
      uVar13 = (uint)uVar14;
      uVar12 = FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID(&local_38,uVar13);
      if (uVar13 == uVar12) {
        uVar12 = 0;
        if ((int)uVar16 < *(int *)&this->field_0x8) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(lVar17 + *(longlong *)this) = uVar13;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&this->field_0x18) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar13 * 4) = uVar16;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 4;
      }
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)uVar13 < (int)uVar10) {
        pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (uVar14 >> 9) * 8;
          lVar7 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar1)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar1)) != -1)) goto LAB_14c816770;
          uVar13 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while ((int)uVar13 < (int)uVar10);
      }
    } while (uVar13 != uVar10);
  }
  uVar10 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar16 = 0;
  if (((uVar10 != 0) &&
      (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
      0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar16 = 1, 1 < (int)uVar10)) {
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar10);
  }
joined_r0x00014c8168ee:
  do {
    if (uVar16 == uVar10) {
      return;
    }
    while( true ) {
      uVar12 = FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID(&local_38,uVar16);
      if (uVar16 != uVar12) {
        uVar13 = FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID(&local_38,uVar16);
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&this->field_0x18) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined4 *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar13 * 4);
        uVar12 = 0;
        if ((int)uVar16 < *(int *)&this->field_0x18) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar16 * 4) = uVar3;
      }
      uVar16 = uVar16 + 1;
      if ((int)uVar10 <= (int)uVar16) break;
      while( true ) {
        lVar1 = (ulonglong)(uVar16 & 0x1ff) * 2;
        lVar17 = *(longlong *)
                  ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar16 >> 9) * 8);
        if ((*(short *)(lVar1 + lVar17) != 0) && (*(short *)(lVar1 + lVar17) != -1)) break;
        uVar16 = uVar16 + 1;
        if ((int)uVar10 <= (int)uVar16) goto joined_r0x00014c8168ee;
      }
    }
  } while( true );
}

