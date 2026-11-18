// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddPlane @ 147fb0b40

void __thiscall FPlaneMap::AddPlane(FPlaneMap *this,TPlane<double> *param_1,int param_2)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int> FVar8;
  ForElementType<int> FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FPlaneKey *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_res18 [2];
  uint local_res20;
  uint local_1a8;
  FPlaneKey local_194;
  FPlaneKey local_184;
  FPlaneKey local_174;
  FPlaneKey local_164;
  FPlaneKey local_154;
  FPlaneKey local_144;
  FPlaneKey local_134;
  FPlaneKey local_124;
  FPlaneKey local_114;
  FPlaneKey local_104;
  FPlaneKey local_f4;
  FPlaneKey local_e4;
  FPlaneKey local_d4;
  FPlaneKey local_c4;
  FPlaneKey local_b4;
  FPlaneKey local_a4 [6];
  
  fVar25 = this->OneOverGranularityXYZ;
  fVar27 = (float)((double)param_1->_padding_ - __real_3fbf9a6b60000000) * fVar25;
  fVar24 = (float)((double)param_1->_padding_ - __real_3fbf9a6b60000000) * fVar25;
  fVar25 = (float)((double)param_1->_padding_ - __real_3fbf9a6b60000000) * fVar25;
  fVar26 = (float)(param_1->W - __real_3fbf9a6b60000000) * this->OneOverGranularityW;
  local_res20 = (int)ROUND((fVar27 + fVar27) - __real_3f000000) >> 1;
  uVar17 = (int)ROUND((fVar24 + fVar24) - __real_3f000000) >> 1;
  uVar18 = (int)ROUND((fVar25 + fVar25) - __real_3f000000) >> 1;
  uVar14 = (int)ROUND((fVar26 + fVar26) - __real_3f000000) >> 1;
  uVar5 = uVar14 >> 0xd;
  uVar10 = uVar18 - uVar14 ^ uVar5;
  uVar6 = uVar10 << 8;
  uVar13 = (-0x61c88647 - uVar10) - uVar14 ^ uVar6;
  uVar19 = (uVar14 - uVar13) - uVar10 ^ uVar13 >> 0xd;
  uVar11 = (uVar10 - uVar19) - uVar13 ^ uVar19 >> 0xc;
  uVar13 = (uVar13 - uVar11) - uVar19 ^ uVar11 << 0x10;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 5;
  uVar11 = (uVar11 - uVar19) - uVar13 ^ uVar19 >> 3;
  uVar13 = (uVar13 - uVar11) - uVar19 ^ uVar11 << 10;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 0xf;
  uVar13 = uVar17 - uVar19 ^ uVar19 >> 0xd;
  uVar11 = (-0x61c88647 - uVar13) - uVar19 ^ uVar13 << 8;
  uVar19 = (uVar19 - uVar11) - uVar13 ^ uVar11 >> 0xd;
  uVar13 = (uVar13 - uVar19) - uVar11 ^ uVar19 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar19 ^ uVar13 << 0x10;
  uVar19 = (uVar19 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar19) - uVar11 ^ uVar19 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar19 ^ uVar13 << 10;
  uVar20 = (uVar19 - uVar11) - uVar13 ^ uVar11 >> 0xf;
  uVar19 = local_res20 - uVar20 ^ uVar20 >> 0xd;
  uVar11 = (-0x61c88647 - uVar19) - uVar20 ^ uVar19 << 8;
  uVar13 = (uVar20 - uVar11) - uVar19 ^ uVar11 >> 0xd;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 0xc;
  uVar11 = (uVar11 - uVar19) - uVar13 ^ uVar19 << 0x10;
  uVar13 = (uVar13 - uVar11) - uVar19 ^ uVar11 >> 5;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 3;
  uVar11 = (uVar11 - uVar19) - uVar13 ^ uVar19 << 10;
  local_res18[0] = param_2;
  local_194.X = local_res20;
  local_194.Y = uVar17;
  local_194.Z = uVar18;
  local_194.W = uVar14;
  FVar8 = (ForElementType<int>)
          TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::FindOrAddImpl<FPlaneKey>
                    ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)&this->PlaneMap,(uVar13 - uVar11) - uVar19 ^ uVar11 >> 0xf,&local_194);
  FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
  FVar9 = FVar8;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar9 = FVar1;
  }
  if ((ulonglong)FVar9 <= local_res18) {
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((local_res18 < (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4)) &&
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
  }
  iVar7 = *(int *)((longlong)FVar8 + 0x48);
  if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
  }
  fVar3 = __real_3f800000;
  *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
  if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
    FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
  fVar23 = this->Threshold * this->OneOverGranularityW;
  fVar22 = this->Threshold * this->OneOverGranularityXYZ;
  if (fVar22 <= fVar27 - (float)(int)local_res20) {
    uVar11 = local_res20 + 1;
    if (fVar22 <= fVar3 - (fVar27 - (float)(int)local_res20)) {
      uVar11 = local_res20;
    }
  }
  else {
    uVar11 = local_res20 - 1;
  }
  if (fVar22 <= fVar24 - (float)(int)uVar17) {
    local_1a8 = uVar17;
    if (fVar3 - (fVar24 - (float)(int)uVar17) < fVar22) {
      local_1a8 = uVar17 + 1;
    }
  }
  else {
    local_1a8 = uVar17 - 1;
  }
  if (fVar22 <= fVar25 - (float)(int)uVar18) {
    uVar13 = uVar18 + 1;
    if (fVar22 <= fVar3 - (fVar25 - (float)(int)uVar18)) {
      uVar13 = uVar18;
    }
  }
  else {
    uVar13 = uVar18 - 1;
  }
  if (fVar23 <= fVar26 - (float)(int)uVar14) {
    uVar19 = uVar14 + 1;
    if (fVar23 <= fVar3 - (fVar26 - (float)(int)uVar14)) {
      uVar19 = uVar14;
    }
  }
  else {
    uVar19 = uVar14 - 1;
  }
  if (uVar11 == local_res20) {
    if (local_1a8 == uVar17) {
      if (uVar13 == uVar18) {
        if (uVar19 == uVar14) {
          return;
        }
        local_a4[0].X = local_res20;
        local_a4[0].Y = uVar17;
        local_a4[0].Z = uVar18;
        local_a4[0].W = uVar19;
        uVar5 = HashCombine(uVar18,uVar19);
        uVar5 = HashCombine(uVar17,uVar5);
        uVar5 = HashCombine(local_res20,uVar5);
        pFVar16 = local_a4;
      }
      else {
        local_c4.X = local_res20;
        uVar5 = uVar13 - uVar14 ^ uVar5;
        uVar6 = (-0x61c88647 - uVar14) - uVar5 ^ uVar5 << 8;
        uVar11 = (uVar14 - uVar6) - uVar5 ^ uVar6 >> 0xd;
        uVar10 = (uVar5 - uVar11) - uVar6 ^ uVar11 >> 0xc;
        uVar5 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 0x10;
        uVar11 = (uVar11 - uVar5) - uVar10 ^ uVar5 >> 5;
        uVar6 = (uVar10 - uVar11) - uVar5 ^ uVar11 >> 3;
        uVar5 = (uVar5 - uVar6) - uVar11 ^ uVar6 << 10;
        uVar10 = (uVar11 - uVar5) - uVar6 ^ uVar5 >> 0xf;
        uVar6 = uVar17 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar6) - uVar10 ^ uVar6 << 8;
        uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xd;
        uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 5;
        uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 10;
        uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xf;
        uVar5 = local_res20 - uVar10 ^ uVar10 >> 0xd;
        uVar6 = (-0x61c88647 - uVar10) - uVar5 ^ uVar5 << 8;
        uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xd;
        uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 0xc;
        uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 0x10;
        uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 5;
        uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 3;
        uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
        local_c4.Y = uVar17;
        local_c4.Z = uVar13;
        local_c4.W = uVar14;
        FVar8 = (ForElementType<int>)
                TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                ::FindOrAddImpl<FPlaneKey>
                          ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                            *)&this->PlaneMap,(uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf,&local_c4);
        FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        FVar9 = FVar8;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= local_res18) {
          FVar9 = FVar8;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((local_res18 <
               (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4)) &&
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
        }
        iVar7 = *(int *)((longlong)FVar8 + 0x48);
        if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
        }
        uVar5 = local_res20;
        *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
          FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        }
        *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
        if (uVar19 == uVar14) {
          return;
        }
        local_b4.X = local_res20;
        local_b4.Y = uVar17;
        local_b4.Z = uVar13;
        local_b4.W = uVar19;
        uVar6 = HashCombine(uVar13,uVar19);
        uVar6 = HashCombine(uVar17,uVar6);
        uVar5 = HashCombine(uVar5,uVar6);
        pFVar16 = &local_b4;
      }
    }
    else {
      local_104.X = local_res20;
      local_104.Y = local_1a8;
      uVar6 = (-0x61c88647 - uVar14) - uVar10 ^ uVar6;
      uVar11 = (uVar14 - uVar6) - uVar10 ^ uVar6 >> 0xd;
      uVar10 = (uVar10 - uVar11) - uVar6 ^ uVar11 >> 0xc;
      uVar5 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 0x10;
      uVar11 = (uVar11 - uVar5) - uVar10 ^ uVar5 >> 5;
      uVar6 = (uVar10 - uVar11) - uVar5 ^ uVar11 >> 3;
      uVar5 = (uVar5 - uVar6) - uVar11 ^ uVar6 << 10;
      uVar10 = (uVar11 - uVar5) - uVar6 ^ uVar5 >> 0xf;
      uVar6 = local_1a8 - uVar10 ^ uVar10 >> 0xd;
      uVar5 = (-0x61c88647 - uVar6) - uVar10 ^ uVar6 << 8;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar5 >> 0xd;
      uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 0xc;
      uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 0x10;
      uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 5;
      uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 3;
      uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 10;
      uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xf;
      uVar5 = local_res20 - uVar10 ^ uVar10 >> 0xd;
      uVar6 = (-0x61c88647 - uVar5) - uVar10 ^ uVar5 << 8;
      uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 0xc;
      uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 0x10;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 5;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 3;
      uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
      local_104.Z = uVar18;
      local_104.W = uVar14;
      FVar8 = (ForElementType<int>)
              TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
              ::FindOrAddImpl<FPlaneKey>
                        ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                          *)&this->PlaneMap,(uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf,&local_104);
      FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
      FVar9 = FVar8;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((ulonglong)FVar9 <= local_res18) {
        FVar9 = FVar8;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((local_res18 < (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = *(int *)((longlong)FVar8 + 0x48);
      if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
      }
      uVar5 = local_res20;
      *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
      if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
        FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
      }
      *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
      if (uVar13 == uVar18) {
        if (uVar19 == uVar14) {
          return;
        }
        local_d4.X = local_res20;
        local_d4.Y = local_1a8;
        local_d4.Z = uVar18;
        local_d4.W = uVar19;
        uVar6 = HashCombine(uVar18,uVar19);
        uVar6 = HashCombine(local_1a8,uVar6);
        uVar5 = HashCombine(uVar5,uVar6);
        pFVar16 = &local_d4;
      }
      else {
        local_f4.X = local_res20;
        local_f4.Y = local_1a8;
        local_f4.Z = uVar13;
        local_f4.W = uVar14;
        uVar6 = HashCombine(uVar13,uVar14);
        uVar6 = HashCombine(local_1a8,uVar6);
        uVar6 = HashCombine(uVar5,uVar6);
        FVar8 = (ForElementType<int>)
                TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                ::FindOrAddImpl<FPlaneKey>
                          ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                            *)&this->PlaneMap,uVar6,&local_f4);
        FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        FVar9 = FVar8;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= local_res18) {
          FVar9 = FVar8;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((local_res18 <
               (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4)) &&
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
        }
        iVar7 = *(int *)((longlong)FVar8 + 0x48);
        if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
        }
        *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
          FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        }
        *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
        if (uVar19 == uVar14) {
          return;
        }
        local_e4.X = uVar5;
        local_e4.Y = local_1a8;
        local_e4.Z = uVar13;
        local_e4.W = uVar19;
        uVar6 = HashCombine(uVar13,uVar19);
        uVar6 = HashCombine(local_1a8,uVar6);
        uVar5 = HashCombine(uVar5,uVar6);
        pFVar16 = &local_e4;
      }
    }
LAB_147fb1f11:
    FVar8 = (ForElementType<int>)
            TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FPlaneKey>
                      ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->PlaneMap,uVar5,pFVar16);
    FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if (local_res18 < (ulonglong)FVar9) goto LAB_147fb1fab;
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4) <= local_res18)
    goto LAB_147fb1fab;
  }
  else {
    uVar15 = uVar11 - uVar20 ^ uVar20 >> 0xd;
    uVar12 = (-0x61c88647 - uVar20) - uVar15 ^ uVar15 << 8;
    uVar21 = (uVar20 - uVar12) - uVar15 ^ uVar12 >> 0xd;
    uVar15 = (uVar15 - uVar21) - uVar12 ^ uVar21 >> 0xc;
    uVar20 = (uVar12 - uVar15) - uVar21 ^ uVar15 << 0x10;
    uVar21 = (uVar21 - uVar20) - uVar15 ^ uVar20 >> 5;
    uVar12 = (uVar15 - uVar21) - uVar20 ^ uVar21 >> 3;
    uVar20 = (uVar20 - uVar12) - uVar21 ^ uVar12 << 10;
    local_184.X = uVar11;
    local_184.Y = uVar17;
    local_184.Z = uVar18;
    local_184.W = uVar14;
    FVar8 = (ForElementType<int>)
            TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FPlaneKey>
                      ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->PlaneMap,(uVar21 - uVar20) - uVar12 ^ uVar20 >> 0xf,&local_184);
    FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((ulonglong)FVar9 <= local_res18) {
      FVar9 = FVar8;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((local_res18 < (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4))
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
    }
    iVar7 = *(int *)((longlong)FVar8 + 0x48);
    if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
    }
    *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
    if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
      FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    }
    *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
    if (local_1a8 == uVar17) {
      if (uVar13 == uVar18) {
        if (uVar19 == uVar14) {
          return;
        }
        local_114.X = uVar11;
        local_114.Y = uVar17;
        local_114.Z = uVar18;
        local_114.W = uVar19;
        uVar5 = HashCombine(uVar18,uVar19);
        uVar5 = HashCombine(uVar17,uVar5);
        uVar5 = HashCombine(uVar11,uVar5);
        pFVar16 = &local_114;
      }
      else {
        local_134.X = uVar11;
        local_134.Y = uVar17;
        local_134.Z = uVar13;
        local_134.W = uVar14;
        uVar5 = HashCombine(uVar13,uVar14);
        uVar5 = HashCombine(uVar17,uVar5);
        uVar5 = HashCombine(uVar11,uVar5);
        FVar8 = (ForElementType<int>)
                TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                ::FindOrAddImpl<FPlaneKey>
                          ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                            *)&this->PlaneMap,uVar5,&local_134);
        FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        FVar9 = FVar8;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= local_res18) {
          FVar9 = FVar8;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar9 = FVar1;
          }
          if ((local_res18 <
               (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4)) &&
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
        }
        iVar7 = *(int *)((longlong)FVar8 + 0x48);
        if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
        }
        *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
        if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
          FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
        }
        *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
        if (uVar19 == uVar14) {
          return;
        }
        local_124.X = uVar11;
        local_124.Y = uVar17;
        local_124.Z = uVar13;
        local_124.W = uVar19;
        uVar5 = HashCombine(uVar13,uVar19);
        uVar5 = HashCombine(uVar17,uVar5);
        uVar5 = HashCombine(uVar11,uVar5);
        pFVar16 = &local_124;
      }
      goto LAB_147fb1f11;
    }
    uVar6 = (-0x61c88647 - uVar14) - uVar10 ^ uVar6;
    local_174.Y = local_1a8;
    uVar17 = (uVar14 - uVar6) - uVar10 ^ uVar6 >> 0xd;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 0x10;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 5;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 3;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 10;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 0xf;
    uVar10 = local_1a8 - uVar17 ^ uVar17 >> 0xd;
    uVar6 = (-0x61c88647 - uVar17) - uVar10 ^ uVar10 << 8;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 0xd;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 0x10;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 5;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 3;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 10;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 0xf;
    uVar10 = uVar11 - uVar17 ^ uVar17 >> 0xd;
    uVar6 = (-0x61c88647 - uVar17) - uVar10 ^ uVar10 << 8;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 0xd;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 0x10;
    uVar17 = (uVar17 - uVar6) - uVar10 ^ uVar6 >> 5;
    uVar10 = (uVar10 - uVar17) - uVar6 ^ uVar17 >> 3;
    uVar6 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 10;
    local_174.X = uVar11;
    local_174.Z = uVar18;
    local_174.W = uVar14;
    FVar8 = (ForElementType<int>)
            TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FPlaneKey>
                      ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->PlaneMap,(uVar17 - uVar6) - uVar10 ^ uVar6 >> 0xf,&local_174);
    FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((ulonglong)FVar9 <= local_res18) {
      FVar9 = FVar8;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((local_res18 < (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4))
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
    }
    iVar7 = *(int *)((longlong)FVar8 + 0x48);
    if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
    }
    *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
    if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
      FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    }
    *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
    if (uVar13 == uVar18) {
      if (uVar19 == uVar14) {
        return;
      }
      local_144.Y = local_1a8;
      local_144.X = uVar11;
      local_144.Z = uVar18;
      local_144.W = uVar19;
      uVar5 = HashCombine(uVar18,uVar19);
      uVar5 = HashCombine(local_1a8,uVar5);
      uVar5 = HashCombine(uVar11,uVar5);
      pFVar16 = &local_144;
      goto LAB_147fb1f11;
    }
    local_164.Y = local_1a8;
    uVar5 = uVar13 - uVar14 ^ uVar5;
    uVar6 = (-0x61c88647 - uVar14) - uVar5 ^ uVar5 << 8;
    uVar17 = (uVar14 - uVar6) - uVar5 ^ uVar6 >> 0xd;
    uVar10 = (uVar5 - uVar17) - uVar6 ^ uVar17 >> 0xc;
    uVar5 = (uVar6 - uVar10) - uVar17 ^ uVar10 << 0x10;
    uVar17 = (uVar17 - uVar5) - uVar10 ^ uVar5 >> 5;
    uVar6 = (uVar10 - uVar17) - uVar5 ^ uVar17 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar17 ^ uVar6 << 10;
    uVar10 = (uVar17 - uVar5) - uVar6 ^ uVar5 >> 0xf;
    uVar6 = local_1a8 - uVar10 ^ uVar10 >> 0xd;
    uVar5 = (-0x61c88647 - uVar10) - uVar6 ^ uVar6 << 8;
    uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 0xc;
    uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 0x10;
    uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 10;
    uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xf;
    uVar5 = uVar11 - uVar10 ^ uVar10 >> 0xd;
    uVar6 = (-0x61c88647 - uVar10) - uVar5 ^ uVar5 << 8;
    uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xd;
    uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar5 << 0x10;
    uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
    local_164.X = uVar11;
    local_164.Z = uVar13;
    local_164.W = uVar14;
    FVar8 = (ForElementType<int>)
            TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FPlaneKey>
                      ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->PlaneMap,(uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf,&local_164);
    FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((ulonglong)FVar9 <= local_res18) {
      FVar9 = FVar8;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar9 = FVar1;
      }
      if ((local_res18 < (int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4))
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
    }
    iVar7 = *(int *)((longlong)FVar8 + 0x48);
    if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
    }
    *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
    if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
      FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    }
    *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
    if (uVar19 == uVar14) {
      return;
    }
    local_154.Y = local_1a8;
    local_154.X = uVar11;
    local_154.Z = uVar13;
    local_154.W = uVar19;
    uVar5 = HashCombine(uVar13,uVar19);
    uVar5 = HashCombine(local_1a8,uVar5);
    uVar5 = HashCombine(uVar11,uVar5);
    FVar8 = (ForElementType<int>)
            TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::FindOrAddImpl<FPlaneKey>
                      ((TMapBase<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->PlaneMap,uVar5,&local_154);
    FVar1 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if (local_res18 < (ulonglong)FVar9) goto LAB_147fb1fab;
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<int>)0x0) {
      FVar9 = FVar1;
    }
    if ((int *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x4c) * 4) <= local_res18)
    goto LAB_147fb1fab;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x7a5,
                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                    );
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147fb1fab:
  iVar7 = *(int *)((longlong)FVar8 + 0x48);
  if (iVar7 == *(int *)((longlong)FVar8 + 0x4c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x4c));
  }
  *(int *)((longlong)FVar8 + 0x48) = iVar7 + 1;
  if (*(ForElementType<int> *)((longlong)FVar8 + 0x40) != (ForElementType<int>)0x0) {
    FVar8 = *(ForElementType<int> *)((longlong)FVar8 + 0x40);
  }
  *(int *)((longlong)FVar8 + (longlong)iVar7 * 4) = local_res18[0];
  return;
}

// Clear @ 147fb9400

void __thiscall FPlaneMap::Clear(FPlaneMap *this,int param_1)

{
  TSet<TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           *)&this->PlaneMap,param_1);
  return;
}

