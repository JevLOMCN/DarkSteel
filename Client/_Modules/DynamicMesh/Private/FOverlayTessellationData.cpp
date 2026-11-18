// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// InitEdgeVertexBuffers @ 14c8133a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,2>::InitEdgeVertexBuffers
          (FOverlayTessellationData<float,2> *this,FTessellationPattern *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *this_00;
  int iVar13;
  uint uVar14;
  uint local_res18 [2];
  int local_res20;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [20];
  ulonglong local_a0;
  uint *local_98;
  int *local_90;
  uint *local_88;
  int *local_80;
  uint *local_78;
  int *local_70;
  uint *local_68;
  int *local_60;
  uint *local_58;
  int *local_50;
  
  lVar12 = this->_padding_;
  uVar11 = 0;
  local_res20 = 0;
  uVar14 = *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4);
  iVar13 = 0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x1d8) - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014c813455;
    do {
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(lVar12 + 0x1d8))[uVar11 >> 9];
      if ((*(short *)(lVar5 + lVar1) != 0) && (*(short *)(lVar5 + lVar1) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar14);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c813455:
  if (uVar10 == uVar14) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar13,Default);
    uVar14 = 0;
    if (0 < (int)this->_padding_) {
      lVar12 = 0;
      do {
        iVar13 = (int)this->_padding_ + uVar14;
        uVar10 = 0;
        if ((int)uVar14 < (int)this->_padding_) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(int *)(lVar12 + this->_padding_) = iVar13;
        lVar12 = lVar12 + 4;
      } while ((int)uVar14 < (int)this->_padding_);
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<double,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res20,Default);
    return;
  }
  do {
    local_res18[0] = (uint)uVar11;
    iVar7 = (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar11);
    uVar2 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(local_res18[0] >> 9) * 8) + 8 +
             (ulonglong)(local_res18[0] & 0x1ff) * 0x10);
    local_a0 = uVar2 >> 0x20;
    uVar10 = (int)uVar2 * 3;
    local_b4._12_8_ = (ulonglong)(uVar10 & 0x1ff) * 4;
    local_b4._4_8_ = (ulonglong)(uVar10 >> 9) * 8;
    pFVar3 = (this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data;
    iVar9 = (int)(uVar2 >> 0x20);
    if ((*(int *)(local_b4._12_8_ + *(longlong *)(pFVar3 + local_b4._4_8_)) < 0) &&
       ((iVar9 == -1 ||
        (*(int *)(*(longlong *)(pFVar3 + (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                 (ulonglong)(iVar9 * 3 & 0x1ff) * 4) < 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar8 = iVar13;
    if ((0 < iVar7) && (bVar6)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,&local_c8
                 ,(bool *)local_res18);
      local_98 = local_res18;
      local_90 = &local_110;
      local_110 = local_res20;
      local_10c = iVar7;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)&this->_padding_,
                 (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> *)local_c4,
                 (bool *)&local_98);
      this_00 = &this->_padding_;
      local_res20 = local_res20 + iVar7;
      if (*(int *)(local_b4._12_8_ +
                  *(longlong *)
                   ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data + local_b4._4_8_
                   )) < 0) {
        local_d8 = local_res18[0];
        local_58 = &local_d8;
        local_50 = &local_d0;
        local_d4 = iVar9;
        local_d0 = iVar13;
        local_cc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)local_b4
                   ,(bool *)&local_58);
      }
      else {
        local_108 = local_res18[0];
        local_88 = &local_108;
        local_80 = &local_100;
        local_104 = (int)uVar2;
        local_100 = iVar13;
        local_fc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                   (local_c4 + 4),(bool *)&local_88);
        if (((int)local_a0 != -1) &&
           (-1 < *(int *)(*(longlong *)
                           ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                         (ulonglong)(iVar9 * 3 & 0x1ff) * 4))) {
          iVar8 = iVar7 + iVar13;
          bVar6 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                            (this->Overlay,local_res18[0],(bool *)0x0);
          if (bVar6) {
            local_f8 = local_res18[0];
            local_78 = &local_f8;
            local_70 = &local_f0;
            local_f4 = iVar9;
            local_f0 = iVar8;
            local_ec = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       local_bc,(bool *)&local_78);
            iVar8 = iVar13 + iVar7 * 2;
          }
          else {
            local_e8 = local_res18[0];
            local_68 = &local_e8;
            local_60 = &local_e0;
            local_e4 = iVar9;
            local_e0 = iVar13;
            local_dc = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       (local_bc + 4),(bool *)&local_68);
          }
          goto LAB_14c8136f0;
        }
      }
      iVar8 = iVar13 + iVar7;
    }
LAB_14c8136f0:
    uVar10 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    iVar13 = iVar8;
    if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c813455;
    while( true ) {
      lVar1 = (uVar11 >> 9) * 8;
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + *(longlong *)(lVar1 + *(longlong *)(lVar12 + 0x1d8))) != 0) &&
         (*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar12 + 0x1d8) + lVar1)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c813455;
    }
  } while( true );
}

// InitEdgeVertexBuffers @ 14c813810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,3>::InitEdgeVertexBuffers
          (FOverlayTessellationData<float,3> *this,FTessellationPattern *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *this_00;
  int iVar13;
  uint uVar14;
  uint local_res18 [2];
  int local_res20;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [20];
  ulonglong local_a0;
  uint *local_98;
  int *local_90;
  uint *local_88;
  int *local_80;
  uint *local_78;
  int *local_70;
  uint *local_68;
  int *local_60;
  uint *local_58;
  int *local_50;
  
  lVar12 = this->_padding_;
  uVar11 = 0;
  local_res20 = 0;
  uVar14 = *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4);
  iVar13 = 0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x1d8) - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014c8138c5;
    do {
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(lVar12 + 0x1d8))[uVar11 >> 9];
      if ((*(short *)(lVar5 + lVar1) != 0) && (*(short *)(lVar5 + lVar1) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar14);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c8138c5:
  if (uVar10 == uVar14) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar13,Default);
    uVar14 = 0;
    if (0 < (int)this->_padding_) {
      lVar12 = 0;
      do {
        iVar13 = (int)this->_padding_ + uVar14;
        uVar10 = 0;
        if ((int)uVar14 < (int)this->_padding_) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(int *)(lVar12 + this->_padding_) = iVar13;
        lVar12 = lVar12 + 4;
      } while ((int)uVar14 < (int)this->_padding_);
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<double,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res20,Default);
    return;
  }
  do {
    local_res18[0] = (uint)uVar11;
    iVar7 = (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar11);
    uVar2 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(local_res18[0] >> 9) * 8) + 8 +
             (ulonglong)(local_res18[0] & 0x1ff) * 0x10);
    local_a0 = uVar2 >> 0x20;
    uVar10 = (int)uVar2 * 3;
    local_b4._12_8_ = (ulonglong)(uVar10 & 0x1ff) * 4;
    local_b4._4_8_ = (ulonglong)(uVar10 >> 9) * 8;
    pFVar3 = (this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data;
    iVar9 = (int)(uVar2 >> 0x20);
    if ((*(int *)(local_b4._12_8_ + *(longlong *)(pFVar3 + local_b4._4_8_)) < 0) &&
       ((iVar9 == -1 ||
        (*(int *)(*(longlong *)(pFVar3 + (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                 (ulonglong)(iVar9 * 3 & 0x1ff) * 4) < 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar8 = iVar13;
    if ((0 < iVar7) && (bVar6)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,&local_c8
                 ,(bool *)local_res18);
      local_98 = local_res18;
      local_90 = &local_110;
      local_110 = local_res20;
      local_10c = iVar7;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)&this->_padding_,
                 (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> *)local_c4,
                 (bool *)&local_98);
      this_00 = &this->_padding_;
      local_res20 = local_res20 + iVar7;
      if (*(int *)(local_b4._12_8_ +
                  *(longlong *)
                   ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data + local_b4._4_8_
                   )) < 0) {
        local_d8 = local_res18[0];
        local_58 = &local_d8;
        local_50 = &local_d0;
        local_d4 = iVar9;
        local_d0 = iVar13;
        local_cc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)local_b4
                   ,(bool *)&local_58);
      }
      else {
        local_108 = local_res18[0];
        local_88 = &local_108;
        local_80 = &local_100;
        local_104 = (int)uVar2;
        local_100 = iVar13;
        local_fc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                   (local_c4 + 4),(bool *)&local_88);
        if (((int)local_a0 != -1) &&
           (-1 < *(int *)(*(longlong *)
                           ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                         (ulonglong)(iVar9 * 3 & 0x1ff) * 4))) {
          iVar8 = iVar7 + iVar13;
          bVar6 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                            (this->Overlay,local_res18[0],(bool *)0x0);
          if (bVar6) {
            local_f8 = local_res18[0];
            local_78 = &local_f8;
            local_70 = &local_f0;
            local_f4 = iVar9;
            local_f0 = iVar8;
            local_ec = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       local_bc,(bool *)&local_78);
            iVar8 = iVar13 + iVar7 * 2;
          }
          else {
            local_e8 = local_res18[0];
            local_68 = &local_e8;
            local_60 = &local_e0;
            local_e4 = iVar9;
            local_e0 = iVar13;
            local_dc = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       (local_bc + 4),(bool *)&local_68);
          }
          goto LAB_14c813b60;
        }
      }
      iVar8 = iVar13 + iVar7;
    }
LAB_14c813b60:
    uVar10 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    iVar13 = iVar8;
    if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c8138c5;
    while( true ) {
      lVar1 = (uVar11 >> 9) * 8;
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + *(longlong *)(lVar1 + *(longlong *)(lVar12 + 0x1d8))) != 0) &&
         (*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar12 + 0x1d8) + lVar1)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c8138c5;
    }
  } while( true );
}

// InitEdgeVertexBuffers @ 14c813c80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,4>::InitEdgeVertexBuffers
          (FOverlayTessellationData<float,4> *this,FTessellationPattern *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *this_00;
  int iVar13;
  uint uVar14;
  uint local_res18 [2];
  int local_res20;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [20];
  ulonglong local_a0;
  uint *local_98;
  int *local_90;
  uint *local_88;
  int *local_80;
  uint *local_78;
  int *local_70;
  uint *local_68;
  int *local_60;
  uint *local_58;
  int *local_50;
  
  lVar12 = this->_padding_;
  uVar11 = 0;
  local_res20 = 0;
  uVar14 = *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4);
  iVar13 = 0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x1d8) - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014c813d35;
    do {
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar1 = (*(undefined8 **)(lVar12 + 0x1d8))[uVar11 >> 9];
      if ((*(short *)(lVar5 + lVar1) != 0) && (*(short *)(lVar5 + lVar1) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar14);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014c813d35:
  if (uVar10 == uVar14) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar13,Default);
    uVar14 = 0;
    if (0 < (int)this->_padding_) {
      lVar12 = 0;
      do {
        iVar13 = (int)this->_padding_ + uVar14;
        uVar10 = 0;
        if ((int)uVar14 < (int)this->_padding_) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(int *)(lVar12 + this->_padding_) = iVar13;
        lVar12 = lVar12 + 4;
      } while ((int)uVar14 < (int)this->_padding_);
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<double,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res20,Default);
    return;
  }
  do {
    local_res18[0] = (uint)uVar11;
    iVar7 = (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar11);
    uVar2 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(local_res18[0] >> 9) * 8) + 8 +
             (ulonglong)(local_res18[0] & 0x1ff) * 0x10);
    local_a0 = uVar2 >> 0x20;
    uVar10 = (int)uVar2 * 3;
    local_b4._12_8_ = (ulonglong)(uVar10 & 0x1ff) * 4;
    local_b4._4_8_ = (ulonglong)(uVar10 >> 9) * 8;
    pFVar3 = (this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data;
    iVar9 = (int)(uVar2 >> 0x20);
    if ((*(int *)(local_b4._12_8_ + *(longlong *)(pFVar3 + local_b4._4_8_)) < 0) &&
       ((iVar9 == -1 ||
        (*(int *)(*(longlong *)(pFVar3 + (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                 (ulonglong)(iVar9 * 3 & 0x1ff) * 4) < 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar8 = iVar13;
    if ((0 < iVar7) && (bVar6)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,&local_c8
                 ,(bool *)local_res18);
      local_98 = local_res18;
      local_90 = &local_110;
      local_110 = local_res20;
      local_10c = iVar7;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)&this->_padding_,
                 (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> *)local_c4,
                 (bool *)&local_98);
      this_00 = &this->_padding_;
      local_res20 = local_res20 + iVar7;
      if (*(int *)(local_b4._12_8_ +
                  *(longlong *)
                   ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data + local_b4._4_8_
                   )) < 0) {
        local_d8 = local_res18[0];
        local_58 = &local_d8;
        local_50 = &local_d0;
        local_d4 = iVar9;
        local_d0 = iVar13;
        local_cc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)local_b4
                   ,(bool *)&local_58);
      }
      else {
        local_108 = local_res18[0];
        local_88 = &local_108;
        local_80 = &local_100;
        local_104 = (int)uVar2;
        local_100 = iVar13;
        local_fc = iVar7;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                   (local_c4 + 4),(bool *)&local_88);
        if (((int)local_a0 != -1) &&
           (-1 < *(int *)(*(longlong *)
                           ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                         (ulonglong)(iVar9 * 3 & 0x1ff) * 4))) {
          iVar8 = iVar7 + iVar13;
          bVar6 = UE::Geometry::TDynamicMeshOverlay<float,4>::IsSeamEdge
                            (this->Overlay,local_res18[0],(bool *)0x0);
          if (bVar6) {
            local_f8 = local_res18[0];
            local_78 = &local_f8;
            local_70 = &local_f0;
            local_f4 = iVar9;
            local_f0 = iVar8;
            local_ec = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       local_bc,(bool *)&local_78);
            iVar8 = iVar13 + iVar7 * 2;
          }
          else {
            local_e8 = local_res18[0];
            local_68 = &local_e8;
            local_60 = &local_e0;
            local_e4 = iVar9;
            local_e0 = iVar13;
            local_dc = iVar7;
            TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this_00,
                       (TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> *)
                       (local_bc + 4),(bool *)&local_68);
          }
          goto LAB_14c813fd0;
        }
      }
      iVar8 = iVar13 + iVar7;
    }
LAB_14c813fd0:
    uVar10 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    iVar13 = iVar8;
    if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c813d35;
    while( true ) {
      lVar1 = (uVar11 >> 9) * 8;
      lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + *(longlong *)(lVar1 + *(longlong *)(lVar12 + 0x1d8))) != 0) &&
         (*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar12 + 0x1d8) + lVar1)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar14 <= (int)uVar10) goto joined_r0x00014c813d35;
    }
  } while( true );
}

// IsValidTriangle @ 14c818f80

bool __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,2>::IsValidTriangle
          (FOverlayTessellationData<float,2> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c819010

bool __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,3>::IsValidTriangle
          (FOverlayTessellationData<float,3> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c8190a0

bool __thiscall
SelectiveTessellateLocals::FOverlayTessellationData<float,4>::IsValidTriangle
          (FOverlayTessellationData<float,4> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

