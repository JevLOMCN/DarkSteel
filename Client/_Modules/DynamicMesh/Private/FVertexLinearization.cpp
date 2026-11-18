// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FVertexLinearization<UE::Geometry::FDynamicMesh3> @ 14c77f6f0

FVertexLinearization * __thiscall
UE::Geometry::FVertexLinearization::FVertexLinearization<UE::Geometry::FDynamicMesh3>
          (FVertexLinearization *this,FDynamicMesh3 *param_1,bool param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *piVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NumBndryVerts = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  FElementLinearization::Populate<UE::Geometry::FRefCountVector::IndexEnumerable>
            ((FElementLinearization *)this,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,(param_1->VertexRefCounts).UsedCount,
             (IndexEnumerable)&param_1->VertexRefCounts);
  if (param_2) {
    RemapBoundaryVerts<UE::Geometry::FDynamicMesh3>(this,param_1);
  }
  return this;
}

// RemapBoundaryVerts<UE::Geometry::FDynamicMesh3> @ 14c79f870

void __thiscall
UE::Geometry::FVertexLinearization::RemapBoundaryVerts<UE::Geometry::FDynamicMesh3>
          (FVertexLinearization *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_58 [2];
  ForAnyElementType local_50;
  undefined8 uStack_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  uVar4 = (uint)this->_padding_;
  uVar10 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&local_50,0,(int *)((longlong)&uStack_48 + 4));
  }
  lVar13 = (longlong)(int)this->_padding_;
  uVar4 = 0;
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (0 < lVar13) {
    do {
      uVar9 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_58[0] = *(uint *)(this->_padding_ + uVar11 * 4);
      if ((((int)local_58[0] < 0) ||
          ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)local_58[0])) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(local_58[0] >> 9) * 8)
                                      + (ulonglong)(local_58[0] & 0x1ff) * 2) - 1U))) {
LAB_14c79fa93:
        if ((local_40.Data <= (FScriptContainerElement *)local_58) &&
           (((FScriptContainerElement *)local_58 < local_40.Data + (longlong)aiStack_34[0] * 4 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_38 == aiStack_34[0]) {
          local_38 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_40,aiStack_34);
        }
        lVar8 = (longlong)local_38;
        local_38 = local_38 + 1;
        *(uint *)(local_40.Data + lVar8 * 4) = local_58[0];
      }
      else {
        uVar5 = *(uint *)(*(longlong *)
                           ((param_1->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                           (ulonglong)(local_58[0] >> 9) * 8) + (ulonglong)(local_58[0] & 0x1ff) * 4
                         );
        uVar6 = uVar4;
        if (uVar5 != 0xffffffff) {
          uVar6 = *(uint *)(*(longlong *)
                             ((param_1->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
        }
        if (((int)uVar6 < 1) ||
           (bVar3 = FDynamicMesh3::IsBoundaryVertex(param_1,local_58[0]), bVar3))
        goto LAB_14c79fa93;
        if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)uStack_48._4_4_ * 4))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar7 = (int)uStack_48;
        if ((int)uStack_48 == uStack_48._4_4_) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_50,(int *)((longlong)&uStack_48 + 4));
        }
        uStack_48 = CONCAT44(uStack_48._4_4_,iVar7 + 1);
        *(uint *)(local_50.Data + (longlong)iVar7 * 4) = local_58[0];
      }
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar11 < lVar13);
  }
  lVar13 = (longlong)local_38;
  this->NumBndryVerts = local_38;
  if (local_38 != 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_38,&local_50,(int *)&uStack_48,(int *)((longlong)&uStack_48 + 4));
    memcpy(local_50.Data + (longlong)iVar7 * 4,local_40.Data,lVar13 << 2);
  }
  lVar13 = (longlong)(int)this->_padding_;
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (0 < lVar13) {
    do {
      uVar9 = (uint)uVar11;
      uVar5 = uVar4;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)(this->_padding_ + uVar12 * 4) = 0xffffffff;
      uVar12 = uVar12 + 1;
      uVar11 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar12 < lVar13);
  }
  lVar13 = (longlong)(int)uStack_48;
  uVar11 = uVar10;
  if (0 < lVar13) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = uVar4;
      if ((int)uVar9 < (int)uStack_48) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = *(uint *)(local_50.Data + uVar11 * 4);
      uVar6 = uVar4;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(this->_padding_ + (longlong)(int)uVar5 * 4) = uVar9;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar11 < lVar13);
  }
  pFVar2 = (FScriptContainerElement *)this->_padding_;
  lVar13 = this->_padding_;
  this->_padding_ = (longlong)local_50.Data;
  this->_padding_ = uStack_48;
  local_50.Data = pFVar2;
  uStack_48 = lVar13;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// RemapBoundaryVerts<UE::Geometry::FDynamicGraph3<double>_> @ 14c874c00

void __thiscall
UE::Geometry::FVertexLinearization::RemapBoundaryVerts<UE::Geometry::FDynamicGraph3<double>_>
          (FVertexLinearization *this,FDynamicGraph3<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint local_58 [2];
  ForAnyElementType local_50;
  undefined8 uStack_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  uVar5 = (uint)this->_padding_;
  uVar11 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&local_50,0,(int *)((longlong)&uStack_48 + 4));
  }
  lVar14 = (longlong)(int)this->_padding_;
  uVar5 = 0;
  uVar12 = uVar11;
  uVar13 = uVar11;
  if (0 < lVar14) {
    do {
      uVar10 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58[0] = *(uint *)(this->_padding_ + uVar13 * 4);
      if ((int)local_58[0] < 0) {
LAB_14c874e45:
        if (((local_40.Data <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < local_40.Data + (longlong)aiStack_34[0] * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_38 == aiStack_34[0]) {
          local_38 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_40,aiStack_34);
        }
        FVar9.Data = local_40.Data;
        iVar8 = local_38;
        local_38 = local_38 + 1;
      }
      else {
        iVar8 = (int)param_1->_padding_;
        iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
        if ((iVar8 * 0x200 + iVar1 <= (int)local_58[0]) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (param_1->_padding_ + (ulonglong)(local_58[0] >> 9) * 8) +
                                        (ulonglong)(local_58[0] & 0x1ff) * 2) - 1U)))
        goto LAB_14c874e45;
        uVar6 = *(uint *)(*(longlong *)(param_1->_padding_ + (ulonglong)(local_58[0] >> 9) * 8) +
                         (ulonglong)(local_58[0] & 0x1ff) * 4);
        uVar7 = uVar5;
        if (uVar6 != 0xffffffff) {
          uVar7 = *(uint *)(*(longlong *)(param_1->_padding_ + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4);
        }
        if (((int)uVar7 < 1) ||
           ((((int)local_58[0] < iVar8 * 0x200 + iVar1 && (uVar6 != 0xffffffff)) &&
            (*(int *)(*(longlong *)(param_1->_padding_ + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4) == 1)))) goto LAB_14c874e45;
        if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)uStack_48._4_4_ * 4))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)uStack_48 == uStack_48._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_50,(int *)((longlong)&uStack_48 + 4));
          uStack_48 = CONCAT44(uStack_48._4_4_,iVar8);
        }
        iVar8 = (int)uStack_48;
        uStack_48 = CONCAT44(uStack_48._4_4_,(int)uStack_48 + 1);
        FVar9.Data = local_50.Data;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(FVar9.Data + (longlong)iVar8 * 4) = local_58[0];
      uVar12 = (ulonglong)(uVar10 + 1);
    } while ((longlong)uVar13 < lVar14);
  }
  lVar14 = (longlong)local_38;
  this->NumBndryVerts = local_38;
  if (local_38 != 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_38,&local_50,(int *)&uStack_48,(int *)((longlong)&uStack_48 + 4));
    memcpy(local_50.Data + (longlong)iVar8 * 4,local_40.Data,lVar14 << 2);
  }
  lVar14 = (longlong)(int)this->_padding_;
  uVar12 = uVar11;
  uVar13 = uVar11;
  if (0 < lVar14) {
    do {
      uVar10 = (uint)uVar12;
      uVar6 = uVar5;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(this->_padding_ + uVar13 * 4) = 0xffffffff;
      uVar13 = uVar13 + 1;
      uVar12 = (ulonglong)(uVar10 + 1);
    } while ((longlong)uVar13 < lVar14);
  }
  lVar14 = (longlong)(int)uStack_48;
  uVar12 = uVar11;
  if (0 < lVar14) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = uVar5;
      if ((int)uVar10 < (int)uStack_48) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = *(uint *)(local_50.Data + uVar12 * 4);
      uVar7 = uVar5;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(this->_padding_ + (longlong)(int)uVar6 * 4) = uVar10;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((longlong)uVar12 < lVar14);
  }
  pFVar3 = (FScriptContainerElement *)this->_padding_;
  lVar14 = this->_padding_;
  this->_padding_ = (longlong)local_50.Data;
  this->_padding_ = uStack_48;
  local_50.Data = pFVar3;
  uStack_48 = lVar14;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

