// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// operator() @ 148718600

void __thiscall
`UE::SVT::FTextureData::Create'::__l2::<lambda_1>::operator()
          (void *this,TIntVector3<int> *param_1,int param_2,int param_3,float param_4)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_18;
  int iStack_14;
  
  lVar2 = *(longlong *)this;
  if (3 < (uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_4 != *(float *)(((ulonglong)(uint)param_2 + 5) * 0x10 + lVar2 + (longlong)param_3 * 4))
  {
    lVar2 = *(longlong *)this;
    iVar5 = (param_1->field0_0x0)._s_0.X;
    if ((((iVar5 < *(int *)(lVar2 + 0xc)) ||
         (iVar6 = (param_1->field0_0x0)._s_0.Y, iVar6 < *(int *)(lVar2 + 0x10))) ||
        (iVar7 = (param_1->field0_0x0)._s_0.Z, iVar7 < *(int *)(lVar2 + 0x14))) ||
       (((*(int *)(lVar2 + 0x18) <= iVar5 || (*(int *)(lVar2 + 0x1c) <= iVar6)) ||
        (*(int *)(lVar2 + 0x20) <= iVar7)))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInBounds(Coord, Header.VirtualVolumeAABBMin, Header.VirtualVolumeAABBMax)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x49,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_1->field0_0x0)._s_0.Z;
    lVar2 = *(longlong *)this;
    local_18 = (int)*(undefined8 *)&param_1->field0_0x0;
    iStack_14 = (int)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    iVar6 = ((int)((local_18 >> 0x1f & 0xfU) + local_18) >> 4) - *(int *)(lVar2 + 0x30);
    iVar7 = ((int)((iStack_14 >> 0x1f & 0xfU) + iStack_14) >> 4) - *(int *)(lVar2 + 0x34);
    iVar5 = ((int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4) - *(int *)(lVar2 + 0x38);
    if (((iVar6 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
        (iVar7 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
       ((iVar5 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z ||
        (((*(int *)(lVar2 + 0x24) <= iVar6 || (*(int *)(lVar2 + 0x28) <= iVar7)) ||
         (*(int *)(lVar2 + 0x2c) <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInBounds(PageCoord, FIntVector3::ZeroValue, Header.PageTableVolumeResolution)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x61,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)((longlong)this + 8);
    iVar6 = (iVar5 * *(int *)(*(longlong *)this + 0x28) + iVar7) *
            *(int *)(*(longlong *)this + 0x24) + iVar6;
    if ((iVar6 < 0) || (*(int *)(lVar2 + 0x18) <= iVar6)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar8 = lVar2;
    }
    puVar1 = (uint *)(lVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  }
  return;
}

// operator() @ 1487187e0

void __thiscall
`UE::SVT::FTextureData::CreateFromDense'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  size_t sVar7;
  void *_Buf2;
  code *pcVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong local_a0;
  
  lVar32 = *(longlong *)this;
  iVar21 = *(int *)(lVar32 + 0x38) + param_1 / *(int *)(lVar32 + 0x28);
  iVar27 = *(int *)(lVar32 + 0x34) + param_1 % *(int *)(lVar32 + 0x28);
  iVar2 = *(int *)(lVar32 + 0x30);
  iVar12 = *(int *)(lVar32 + 0x18) + 0xf;
  iVar1 = iVar21 + 1;
  iVar22 = iVar27 + 1;
  uVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 0xfU)) >> 4;
  uVar25 = (ulonglong)uVar13;
  iVar12 = *(int *)(lVar32 + 0x40);
  if (iVar22 < *(int *)(lVar32 + 0x40)) {
    iVar12 = iVar22;
  }
  iVar22 = *(int *)(lVar32 + 0x44);
  if (iVar1 < *(int *)(lVar32 + 0x44)) {
    iVar22 = iVar1;
  }
  iVar1 = *(int *)(lVar32 + 0x1c);
  if (iVar12 * 0x10 < *(int *)(lVar32 + 0x1c)) {
    iVar1 = iVar12 * 0x10;
  }
  iVar12 = *(int *)(lVar32 + 0x20);
  if (iVar22 * 0x10 < *(int *)(lVar32 + 0x20)) {
    iVar12 = iVar22 * 0x10;
  }
  lVar32 = (longlong)(*(int *)(*(longlong *)((longlong)this + 8) + 8) + iVar21 * 0x10);
  if (lVar32 < iVar12) {
    lVar18 = (longlong)(iVar27 * 0x10 + *(int *)(*(longlong *)((longlong)this + 8) + 4));
    do {
      if (lVar18 < iVar1) {
        lVar20 = (longlong)iVar2;
        uVar19 = (ulonglong)(int)uVar25;
        lVar33 = lVar18;
        do {
          if (lVar20 < (longlong)uVar19) {
            local_a0 = lVar20 << 4;
            lVar17 = lVar20;
            do {
              uVar28 = (int)lVar17 * 0x10 + **(int **)((longlong)this + 8);
              lVar26 = *(longlong *)this;
              uVar16 = (uint)lVar33;
              uVar15 = (uint)lVar32;
              if (((((((int)uVar28 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
                     ((int)uVar16 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
                    ((int)uVar15 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) ||
                   ((*(int *)(lVar26 + 0x18) <= (int)uVar28 ||
                    (*(int *)(lVar26 + 0x1c) <= (int)uVar16)))) ||
                  (*(int *)(lVar26 + 0x20) <= (int)uVar15)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsInBounds(GridCoord, FIntVector3::ZeroValue, Header.VirtualVolumeAABBMax)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                      ,0xce,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar26 = *(longlong *)this;
              iVar27 = ((int)(((int)uVar28 >> 0x1f & 0xfU) + uVar28) >> 4) - *(int *)(lVar26 + 0x30)
              ;
              iVar21 = ((int)(((int)uVar16 >> 0x1f & 0xfU) + uVar16) >> 4) - *(int *)(lVar26 + 0x34)
              ;
              iVar22 = ((int)(((int)uVar15 >> 0x1f & 0xfU) + uVar15) >> 4) - *(int *)(lVar26 + 0x38)
              ;
              if ((((iVar27 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
                   (iVar21 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
                  ((iVar22 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z ||
                   (((*(int *)(lVar26 + 0x24) <= iVar27 || (*(int *)(lVar26 + 0x28) <= iVar21)) ||
                    (*(int *)(lVar26 + 0x2c) <= iVar22)))))) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsInBounds(PageCoord, FIntVector3::ZeroValue, Header.PageTableVolumeResolution)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                      ,0xd0,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar26 = *(longlong *)this;
              uVar24 = (iVar21 + iVar22 * *(int *)(lVar26 + 0x28)) * *(int *)(lVar26 + 0x24) +
                       iVar27;
              if ((*(int *)(lVar26 + 0x98) < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              plVar3 = *(longlong **)(lVar26 + 0x90);
              uVar14 = 0;
              if ((int)uVar24 < (int)plVar3[1]) {
                uVar14 = ~uVar24 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar22 = *(int *)(*plVar3 + (longlong)(int)uVar24 * 4);
              if (param_2) {
                if (iVar22 != 0) {
LAB_148718ab3:
                  piVar4 = *(int **)this;
                  lVar31 = (longlong)*piVar4;
                  lVar30 = local_a0 - piVar4[3];
                  lVar26 = lVar31;
                  if (lVar30 + 0x10 < lVar31) {
                    lVar26 = lVar30 + 0x10;
                  }
                  lVar26 = lVar26 - lVar30;
                  uVar15 = uVar15 & 0x8000000f;
                  if ((int)uVar15 < 0) {
                    uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                  }
                  uVar16 = uVar16 & 0x8000000f;
                  if ((int)uVar16 < 0) {
                    uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                  }
                  uVar28 = uVar28 & 0x8000000f;
                  if ((int)uVar28 < 0) {
                    uVar28 = (uVar28 - 1 | 0xfffffff0) + 1;
                  }
                  lVar29 = ((longlong)(int)uVar16 +
                           ((longlong)(int)uVar15 + (ulonglong)(iVar22 - 1) * 0x12) * 0x12) * 0x12 +
                           0x157 + (longlong)(int)uVar28;
                  lVar30 = (lVar33 - piVar4[4]) * lVar31 +
                           lVar30 + (lVar32 - piVar4[5]) * (longlong)(*piVar4 * piVar4[1]);
                  if (param_2) {
                    lVar31 = **(longlong **)((longlong)this + 0x10);
                    if (lVar31 != 0) {
                      lVar23 = lVar31 * lVar30;
                      plVar3 = *(longlong **)((longlong)this + 0x18);
                      uVar15 = 0;
                      if (lVar23 < plVar3[1]) {
                        uVar15 = (uint)((ulonglong)lVar23 >> 0x3f) ^ 1;
                      }
                      if ((uVar15 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      lVar5 = *plVar3;
                      lVar6 = *(longlong *)this;
                      if ((*(int *)(lVar6 + 0x98) < 1) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      memcpy((void *)(lVar29 * **(longlong **)((longlong)this + 0x10) +
                                     *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10)),
                             (void *)(lVar5 + lVar23),lVar31 * lVar26);
                    }
                    lVar31 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 8);
                    if (lVar31 != 0) {
                      lVar30 = lVar31 * lVar30;
                      plVar3 = *(longlong **)((longlong)this + 0x20);
                      uVar15 = 0;
                      if (lVar30 < plVar3[1]) {
                        uVar15 = (uint)((ulonglong)lVar30 >> 0x3f) ^ 1;
                      }
                      if ((uVar15 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      lVar23 = *plVar3;
                      lVar5 = *(longlong *)this;
                      if ((*(int *)(lVar5 + 0x98) < 1) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      memcpy((void *)(lVar29 * *(longlong *)
                                                (*(longlong *)((longlong)this + 0x10) + 8) +
                                     *(longlong *)(*(longlong *)(lVar5 + 0x90) + 0x28)),
                             (void *)(lVar23 + lVar30),lVar31 * lVar26);
                    }
                  }
                  else {
                    bVar11 = false;
                    lVar31 = lVar30;
                    if (0 < lVar26) {
                      do {
                        if (bVar11) goto LAB_148718ea6;
                        sVar7 = **(size_t **)((longlong)this + 0x10);
                        if (sVar7 == 0) {
LAB_148718df5:
                          bVar9 = 0;
                        }
                        else {
                          _Buf2 = *(void **)((longlong)this + 0x28);
                          plVar3 = *(longlong **)((longlong)this + 0x18);
                          lVar29 = sVar7 * lVar31;
                          uVar15 = 0;
                          if (lVar29 < plVar3[1]) {
                            uVar15 = (uint)((ulonglong)lVar29 >> 0x3f) ^ 1;
                          }
                          if ((uVar15 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                 ), bVar11)) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          iVar22 = memcmp((void *)(*plVar3 + lVar29),_Buf2,sVar7);
                          if (iVar22 == 0) goto LAB_148718df5;
                          bVar9 = 1;
                        }
                        sVar7 = *(size_t *)(*(longlong *)((longlong)this + 0x10) + 8);
                        if (sVar7 == 0) {
LAB_148718e79:
                          bVar10 = 0;
                        }
                        else {
                          lVar29 = *(longlong *)((longlong)this + 0x28);
                          plVar3 = *(longlong **)((longlong)this + 0x20);
                          lVar23 = sVar7 * lVar31;
                          uVar15 = 0;
                          if (lVar23 < plVar3[1]) {
                            uVar15 = (uint)((ulonglong)lVar23 >> 0x3f) ^ 1;
                          }
                          if ((uVar15 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                 ), bVar11)) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          iVar22 = memcmp((void *)(*plVar3 + lVar23),(void *)(lVar29 + 0x10),sVar7);
                          if (iVar22 == 0) goto LAB_148718e79;
                          bVar10 = 1;
                        }
                        bVar11 = (bool)(bVar10 | bVar9);
                        lVar31 = lVar31 + 1;
                      } while (lVar31 - lVar30 < lVar26);
                      if (bVar11) {
LAB_148718ea6:
                        piVar4 = *(int **)((longlong)this + 0x30);
                        LOCK();
                        iVar22 = *piVar4;
                        *piVar4 = *piVar4 + 1;
                        UNLOCK();
                        lVar26 = *(longlong *)this;
                        if ((*(int *)(lVar26 + 0x98) < 1) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        plVar3 = *(longlong **)(lVar26 + 0x90);
                        uVar15 = 0;
                        if ((int)uVar24 < (int)plVar3[1]) {
                          uVar15 = ~uVar24 >> 0x1f;
                        }
                        if ((uVar15 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        *(int *)(*plVar3 + (longlong)(int)uVar24 * 4) = iVar22 + 1;
                      }
                    }
                  }
                }
              }
              else if (iVar22 == 0) goto LAB_148718ab3;
              uVar19 = (ulonglong)(int)uVar13;
              lVar17 = lVar17 + 1;
              local_a0 = local_a0 + 0x10;
              uVar25 = uVar19;
            } while (lVar17 < (longlong)uVar19);
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < iVar1);
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 < iVar12);
  }
  return;
}

// operator() @ 148718ff0

void __thiscall
`UE::SVT::FTextureData::GenerateBorderVoxels'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  TIntVector3<int>_u_0 local_68;
  TIntVector3<int>_u_0 local_58;
  TVector4<float> local_48;
  TVector4<float> local_38;
  
  plVar6 = *(longlong **)((longlong)this + 0x10);
  uVar16 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar16 = *(uint *)((longlong)this + 8);
  piVar1 = (int *)(*plVar6 + (longlong)param_1 * 0xc);
  lVar7 = *(longlong *)this;
  uVar12 = ((*(int **)((longlong)this + 0x18))[1] * piVar1[2] + piVar1[1]) *
           **(int **)((longlong)this + 0x18) + *piVar1;
  uVar10 = 0;
  if ((int)uVar16 < *(int *)(lVar7 + 0x98)) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar7 = *(longlong *)(lVar7 + 0x90);
  uVar10 = 0;
  if ((int)uVar12 < *(int *)(lVar7 + 8 + (longlong)(int)uVar16 * 0x48)) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar14 = -1;
  iVar2 = *(int *)(*(longlong *)(lVar7 + (longlong)(int)uVar16 * 0x48) + (longlong)(int)uVar12 * 4);
  lVar7 = *(longlong *)this;
  iVar3 = *(int *)(lVar7 + 0x30);
  iVar4 = *(int *)(lVar7 + 0x34);
  iVar5 = *(int *)(lVar7 + 0x38);
  bVar11 = (byte)*(undefined4 *)((longlong)this + 8);
  do {
    iVar15 = -1;
    do {
      iVar13 = -1;
      do {
        if ((((iVar13 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
             (iVar15 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
            (iVar14 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) ||
           (((0xf < iVar13 || (0xf < iVar15)) || (0xf < iVar14)))) {
          local_68._s_0.Y = (piVar1[1] + (iVar4 >> (bVar11 & 0x1f))) * 0x10 + iVar15;
          local_68._s_0.X = (*piVar1 + (iVar3 >> (bVar11 & 0x1f))) * 0x10 + iVar13;
          local_68._s_0.Z = (piVar1[2] + (iVar5 >> (bVar11 & 0x1f))) * 0x10 + iVar14;
          local_58._s_0.X = iVar13;
          local_58._s_0.Y = iVar15;
          local_58._s_0.Z = iVar14;
          UE::SVT::FTextureData::Load
                    (*(FTextureData **)this,&local_48,(TIntVector3<int> *)&local_68._s_0,
                     *(int *)((longlong)this + 8),0,
                     *(FTextureDataAddressingInfo **)((longlong)this + 0x20));
          UE::SVT::FTextureData::Load
                    (*(FTextureData **)this,&local_38,(TIntVector3<int> *)&local_68._s_0,
                     *(int *)((longlong)this + 8),1,
                     *(FTextureDataAddressingInfo **)((longlong)this + 0x20));
          UE::SVT::FTextureData::WriteTileDataVoxel
                    (*(FTextureData **)this,iVar2 + -1,(TIntVector3<int> *)&local_58._s_0,
                     *(int *)((longlong)this + 8),0,&local_48,-1);
          UE::SVT::FTextureData::WriteTileDataVoxel
                    (*(FTextureData **)this,iVar2 + -1,(TIntVector3<int> *)&local_58._s_0,
                     *(int *)((longlong)this + 8),1,&local_38,-1);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x11);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x11);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x11);
  return;
}

// operator() @ 14871ab90

void __thiscall
`UE::SVT::FTextureData::GenerateMipMaps'::__l66::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res18;
  int local_res20;
  TIntVector3<int>_u_0 local_100;
  TIntVector3<int>_u_0 local_f0;
  undefined8 local_e0;
  undefined8 local_d0;
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8 [6];
  
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar18 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *plVar4;
  uVar18 = *(uint *)((longlong)this + 0x28);
  lVar6 = *(longlong *)this;
  local_e0 = *(undefined8 *)(lVar5 + (longlong)param_1 * 0xc);
  iVar2 = *(int *)(lVar5 + 8 + (longlong)param_1 * 0xc);
  uVar12 = 0;
  if ((int)uVar18 < *(int *)(lVar6 + 0x98)) {
    uVar12 = ~uVar18 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = local_e0._4_4_;
  iVar10 = (int)local_e0;
  lVar5 = *(longlong *)(lVar6 + 0x90);
  uVar11 = (iVar2 * (*(int **)((longlong)this + 0x10))[1] + local_e0._4_4_) *
           **(int **)((longlong)this + 0x10) + (int)local_e0;
  uVar12 = 0;
  if ((int)uVar11 < *(int *)(lVar5 + 8 + (longlong)(int)uVar18 * 0x48)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar8 = __real_3e000000;
  *(int *)(*(longlong *)(lVar5 + (longlong)(int)uVar18 * 0x48) + (longlong)(int)uVar11 * 4) =
       param_1 + 1;
  uVar1 = **(undefined8 **)((longlong)this + 0x18);
  iVar3 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  local_d0._0_4_ = (int)uVar1;
  local_d0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar10 = (int)local_d0 + iVar10;
  iVar14 = local_d0._4_4_ + iVar14;
  uVar18 = 0;
  local_d0 = uVar1;
  do {
    if (*(char *)((ulonglong)uVar18 + 0x48 + *(longlong *)this) != '\0') {
      local_res20 = 0;
      iVar16 = (iVar3 + iVar2) * 0x20;
      do {
        local_res18 = 0;
        iVar15 = iVar14 * 0x20;
        local_f0._s_0.Z = local_res20;
        do {
          iVar13 = 0;
          iVar17 = iVar10 * 0x20;
          local_f0._s_0.Y = local_res18;
          do {
            uVar12 = 0;
            fVar19 = 0.0;
            fVar20 = 0.0;
            fVar21 = 0.0;
            fVar22 = 0.0;
            do {
              local_100._s_0.X = (uVar12 & 1) + iVar17;
              local_100._s_0.Y = (uVar12 >> 1 & 1) + iVar15;
              local_100._s_0.Z = (uVar12 >> 2 & 1) + iVar16;
              UE::SVT::FTextureData::Load
                        (*(FTextureData **)this,(TVector4<float> *)&local_b8._s_0,
                         (TIntVector3<int> *)&local_100._s_0,*(int *)((longlong)this + 0x28) + -1,
                         uVar18,*(FTextureDataAddressingInfo **)((longlong)this + 0x20));
              fVar19 = fVar19 + local_b8._s_0.X;
              fVar20 = fVar20 + local_b8._s_0.Y;
              fVar21 = fVar21 + local_b8._s_0.Z;
              fVar22 = fVar22 + local_b8._s_0.W;
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < 8);
            local_a8[0]._0_4_ = fVar19 * fVar8;
            local_a8[0]._4_4_ = fVar20 * fVar8;
            local_a8[0]._8_4_ = fVar21 * fVar8;
            local_a8[0]._12_4_ = fVar22 * fVar8;
            local_f0._s_0.X = iVar13;
            UE::SVT::FTextureData::WriteTileDataVoxel
                      (*(FTextureData **)this,param_1,(TIntVector3<int> *)&local_f0._s_0,
                       *(int *)((longlong)this + 0x28),uVar18,(TVector4<float> *)&local_a8[0]._s_0,
                       -1);
            iVar13 = iVar13 + 1;
            iVar17 = iVar17 + 2;
          } while (iVar13 < 0x10);
          iVar15 = iVar15 + 2;
          local_res18 = local_res18 + 1;
        } while (local_res18 < 0x10);
        iVar16 = iVar16 + 2;
        local_res20 = local_res20 + 1;
      } while (local_res20 < 0x10);
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 2);
  return;
}

// operator() @ 14871b2d0

void __thiscall
`UE::SVT::FTextureData::Create'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_38 [2];
  
  lVar8 = *(longlong *)this;
  lVar4 = 0;
  if ((*(int *)(lVar8 + 0x98) < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)this;
  local_38[0] = *(longlong *)(*(longlong *)(lVar8 + 0x90) + 0x10);
  if ((*(int *)(lVar1 + 0x98) < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar9 = local_38;
  lVar7 = 2;
  local_38[1] = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 0x28);
  lVar8 = lVar4;
  do {
    if (*(int *)(lVar4 + *(longlong *)((longlong)this + 8)) != 0) {
      lVar1 = *plVar9;
      lVar5 = 0x16c8;
      lVar6 = (longlong)param_1 * 0x16c8;
      do {
        _Size = (size_t)*(int *)(*(longlong *)((longlong)this + 8) + lVar4);
        memcpy((void *)(_Size * lVar6 + lVar1),
               (void *)(*(longlong *)((longlong)this + 0x10) + lVar8),_Size);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar8 = lVar8 + 0x10;
    plVar9 = plVar9 + 1;
    lVar4 = lVar4 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

// operator() @ 14871b430

void __thiscall
`UE::SVT::FTextureData::Create'::__l2::<lambda_3>::operator()
          (void *this,TIntVector3<int> *param_1,int param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_78;
  TIntVector3<int>_u_0 local_68;
  undefined8 local_58;
  uint local_50;
  TVector4<float>_u_0 local_48 [2];
  
  uVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  lVar3 = *(longlong *)this;
  local_78 = (uint)uVar1;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20);
  if (((((int)local_78 < *(int *)(lVar3 + 0xc)) || ((int)uVar7 < *(int *)(lVar3 + 0x10))) ||
      ((int)uVar2 < *(int *)(lVar3 + 0x14))) ||
     (((*(int *)(lVar3 + 0x18) <= (int)local_78 || (*(int *)(lVar3 + 0x1c) <= (int)uVar7)) ||
      (*(int *)(lVar3 + 0x20) <= (int)uVar2)))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInBounds(GridCoord, Header.VirtualVolumeAABBMin, Header.VirtualVolumeAABBMax)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                       ,0x8c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)this;
  iVar12 = ((int)(((int)local_78 >> 0x1f & 0xfU) + local_78) >> 4) - *(int *)(lVar3 + 0x30);
  iVar8 = ((int)(((int)uVar7 >> 0x1f & 0xfU) + uVar7) >> 4) - *(int *)(lVar3 + 0x34);
  iVar10 = ((int)(((int)uVar2 >> 0x1f & 0xfU) + uVar2) >> 4) - *(int *)(lVar3 + 0x38);
  local_58 = uVar1;
  local_50 = uVar2;
  if (((iVar12 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
      (iVar8 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
     ((iVar10 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z ||
      (((*(int *)(lVar3 + 0x24) <= iVar12 || (*(int *)(lVar3 + 0x28) <= iVar8)) ||
       (*(int *)(lVar3 + 0x2c) <= iVar10)))))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInBounds(PageCoord, FIntVector3::ZeroValue, Header.PageTableVolumeResolution)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                       ,0x8e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)this;
  uVar11 = (iVar10 * *(int *)(lVar3 + 0x28) + iVar8) * *(int *)(lVar3 + 0x24) + iVar12;
  if (*(int *)(lVar3 + 0x98) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar4 = *(longlong **)(lVar3 + 0x90);
  uVar9 = 0;
  if ((int)uVar11 < (int)plVar4[1]) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = *(int *)(*plVar4 + (longlong)(int)uVar11 * 4);
  if (iVar8 != 0) {
    local_68._s_0.X = local_78 & 0x8000000f;
    if (local_68._s_0.X < 0) {
      local_68._s_0.X = (local_68._s_0.X - 1U | 0xfffffff0) + 1;
    }
    local_68._s_0.Y = uVar7 & 0x8000000f;
    if (local_68._s_0.Y < 0) {
      local_68._s_0.Y = (local_68._s_0.Y - 1U | 0xfffffff0) + 1;
    }
    local_68._s_0.Z = uVar2 & 0x8000000f;
    if (local_68._s_0.Z < 0) {
      local_68._s_0.Z = (local_68._s_0.Z - 1U | 0xfffffff0) + 1;
    }
    local_48[0]._s_0.X = param_4;
    local_48[0]._s_0.Y = param_4;
    local_48[0]._s_0.Z = param_4;
    local_48[0]._s_0.W = param_4;
    UE::SVT::FTextureData::WriteTileDataVoxel
              (*(FTextureData **)this,iVar8 + -1,(TIntVector3<int> *)&local_68._s_0,0,param_2,
               (TVector4<float> *)&local_48[0]._s_0,param_3);
  }
  return;
}

// operator() @ 14871be60

void __thiscall
`UE::SVT::FTextureData::CreateFromDense'::__l28::<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  size_t _Size;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  lVar6 = *(longlong *)this;
  lVar4 = 0;
  if (*(int *)(lVar6 + 0x98) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)this;
  local_38[0] = *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10);
  if (*(int *)(lVar1 + 0x98) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar8 = 2;
  local_38[1] = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 0x28);
  lVar6 = lVar4;
  do {
    if (*(longlong *)(lVar4 + *(longlong *)((longlong)this + 8)) != 0) {
      lVar1 = *(longlong *)((longlong)local_38 + lVar4);
      lVar5 = 0x16c8;
      lVar7 = (longlong)param_1 * 0x16c8;
      do {
        _Size = *(size_t *)(lVar4 + *(longlong *)((longlong)this + 8));
        memcpy((void *)(_Size * lVar7 + lVar1),
               (void *)(*(longlong *)((longlong)this + 0x10) + lVar6),_Size);
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar6 = lVar6 + 0x10;
    lVar4 = lVar4 + 8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// BuildDerivedData @ 148724030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::SVT::FTextureData::BuildDerivedData
          (FTextureData *this,FTextureDataAddressingInfo *param_1,int param_2,bool param_3,
          FDerivedTextureData *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FStaticBasicLogRecord *pFVar10;
  longlong lVar11;
  int iVar12;
  TIntVector3<int> *pTVar13;
  uint uVar14;
  uint uVar15;
  FMipMap *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auStackY_258 [32];
  ForAnyElementType local_208;
  undefined8 local_200;
  <lambda_1> local_1f8;
  TIntVector3<int> *local_1f0;
  undefined1 local_1e8 [16];
  int local_1d8;
  int iStack_1d4;
  int local_1d0;
  FTextureDataAddressingInfo *local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  FDerivedTextureData *local_1a0;
  undefined8 local_198;
  int local_190;
  undefined8 local_18c;
  int local_184;
  TArrayView<std::nullptr_t,int> local_180;
  code *local_170;
  TIntVector3<int>_u_0 **local_168;
  FMipMap local_160;
  TIntVector3<int>_u_0 *local_118;
  undefined4 local_110;
  ForAnyElementType *local_108;
  int *local_100;
  FTextureDataAddressingInfo *local_f8;
  TIntVector3<int>_u_0 local_e8;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForAnyElementType local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar5 = *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMin.field0_0x0 + 4);
  uStack_d0 = *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0;
  lVar11 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iStack_d8 = (int)uVar5;
  iStack_d4 = (int)((ulonglong)uVar5 >> 0x20);
  local_1a0 = param_4;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_e8._0_8_ = *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&(this->Header).VirtualVolumeResolution.field0_0x0 + 8);
  local_b8 = *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0;
  uStack_b0 = *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMin.field0_0x0 + 8);
  local_e8._s_0.Z = (int)uVar5;
  iStack_dc = (int)((ulonglong)uVar5 >> 0x20);
  local_c8 = *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMax.field0_0x0 + 8);
  uStack_c0 = *(undefined8 *)((longlong)&(this->Header).PageTableVolumeResolution.field0_0x0 + 4);
  local_98 = *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0;
  uStack_90 = *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8);
  local_a8 = *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMax.field0_0x0 + 4);
  uStack_a0._0_2_ = (this->Header).AttributesFormats;
  uStack_a0._2_2_ = *(undefined2 *)&(this->Header).field_0x4a;
  uStack_a0._4_4_ = (this->Header)._padding_;
  local_88 = *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8);
  local_1c8 = param_1;
  if ((0x1f < param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumMipLevelsGlobal < 32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                         ,0xa8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_198 = CONCAT44(iStack_d8,iStack_dc);
  iVar17 = 1 << ((char)param_2 - 1U & 0x1f);
  local_190 = iStack_d4;
  iVar12 = (((int)(iStack_dc + (iStack_dc >> 0x1f & 0xfU)) >> 4) / iVar17) * iVar17;
  local_18c = uStack_d0;
  uVar5 = local_18c;
  iVar22 = (((int)(iStack_d8 + (iStack_d8 >> 0x1f & 0xfU)) >> 4) / iVar17) * iVar17;
  local_184 = (int)local_c8;
  local_b8 = CONCAT44(iVar22,iVar12);
  iVar17 = (((int)(iStack_d4 + (iStack_d4 >> 0x1f & 0xfU)) >> 4) / iVar17) * iVar17;
  local_18c._4_4_ = (int)((ulonglong)uStack_d0 >> 0x20);
  iVar18 = ((int)(((int)uStack_d0 + 0xf >> 0x1f & 0xfU) + (int)uStack_d0 + 0xf) >> 4) - iVar12;
  iVar19 = 1;
  if (iVar18 != 0) {
    iVar19 = iVar18;
  }
  uVar1 = (ulonglong)(iVar19 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar18 = 1 << ((byte)lVar3 & 0x1f);
  iVar20 = ((int)((local_18c._4_4_ + 0xf >> 0x1f & 0xfU) + local_18c._4_4_ + 0xf) >> 4) - iVar22;
  local_1b0 = (undefined4)lVar3;
  local_c8 = CONCAT44(iVar18,(int)local_c8);
  iVar19 = 1;
  if (iVar20 != 0) {
    iVar19 = iVar20;
  }
  uVar1 = (ulonglong)(iVar19 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar21 = 1 << ((byte)lVar3 & 0x1f);
  iVar20 = ((int)(((int)local_c8 + 0xf >> 0x1f & 0xfU) + (int)local_c8 + 0xf) >> 4) - iVar17;
  local_1ac = (undefined4)lVar3;
  iVar19 = 1;
  if (iVar20 != 0) {
    iVar19 = iVar20;
  }
  uVar1 = (ulonglong)(iVar19 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar19 = 1 << ((byte)lVar3 & 0x1f);
  uStack_b0 = CONCAT44(iVar18 + iVar12,iVar17);
  local_1a8 = (int)lVar3;
  uStack_c0 = CONCAT44(iVar19,iVar21);
  local_a8 = CONCAT44(iVar17 + iVar19,iVar22 + iVar21);
LAB_148724281:
  local_18c = uVar5;
  switch(*(undefined1 *)((longlong)&uStack_a0 + lVar11)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x1a:
  case 0x25:
  case 0x28:
  case 0x47:
    break;
  default:
    if ((byte)LogSparseVolumeTexture._0_1_ < 3) goto LAB_148724ec8;
    pFVar10 = &::LOG_Static;
    goto LAB_148724ebc;
  }
  lVar11 = lVar11 + 1;
  if (1 < lVar11) goto code_r0x0001487242b4;
  goto LAB_148724281;
code_r0x0001487242b4:
  if (((iVar18 < 0x801) && (iVar21 < 0x801)) && (iVar19 < 0x801)) {
    if ((longlong)iVar19 * (longlong)iVar21 * (longlong)iVar18 * 4 < 0x80000001) {
      if (local_50[0] < 1) {
        iVar12 = 1 - local_50[0];
        iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x48,8,iVar12,&local_58,local_50,local_50 + 1);
        DefaultConstructItems<UE::SVT::FTextureData::FMipMap,int>
                  (local_58.Data + (longlong)iVar19 * 0x48,iVar12);
      }
      else if (1 < local_50[0]) {
        iVar19 = local_50[0] + -1;
        if (iVar19 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        else if (iVar19 == 0) goto LAB_148724440;
        pFVar16 = (FMipMap *)(local_58.Data + 0x48);
        DestructItems<UE::SVT::FTextureData::FMipMap,int>(pFVar16,iVar19);
        iVar12 = (local_50[0] - iVar19) + -1;
        if (iVar12 != 0) {
          memmove(pFVar16,pFVar16 + iVar19,(longlong)iVar12 * 0x48);
        }
        iVar19 = local_50[0] - iVar19;
        local_50[0] = iVar19;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&local_58,iVar19,local_50 + 1);
      }
LAB_148724440:
      iVar19 = (this->MipMaps).ArrayNum;
      if (param_3) {
        if ((iVar19 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar16 = (FMipMap *)(this->MipMaps).AllocatorInstance.Data;
        if ((local_50[0] < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FMipMap::operator=((FMipMap *)local_58.Data,pFVar16);
        local_160.PageTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.NumPhysicalTiles = 0;
        local_160._68_4_ = 0;
        local_160.PageTable.ArrayNum = 0;
        local_160.PageTable.ArrayMax = 0;
        local_160.PhysicalTileDataA.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.PhysicalTileDataA.ArrayNum = 0;
        local_160.PhysicalTileDataA.ArrayMax = 0;
        local_160.PhysicalTileDataB.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.PhysicalTileDataB.ArrayNum = 0;
        local_160.PhysicalTileDataB.ArrayMax = 0;
        if (((this->MipMaps).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FMipMap::operator=((FMipMap *)(this->MipMaps).AllocatorInstance.Data,&local_160);
        if (local_160.PhysicalTileDataB.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.PhysicalTileDataB.AllocatorInstance.Data);
        }
        if (local_160.PhysicalTileDataA.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.PhysicalTileDataA.AllocatorInstance.Data);
        }
        if (local_160.PageTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.PageTable.AllocatorInstance.Data);
        }
      }
      else {
        if ((iVar19 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar16 = (FMipMap *)(this->MipMaps).AllocatorInstance.Data;
        if ((local_50[0] < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar6.Data = local_58.Data;
        if ((FMipMap *)local_58.Data != pFVar16) {
          iVar19 = (pFVar16->PageTable).ArrayNum;
          _Src = (pFVar16->PageTable).AllocatorInstance.Data;
          iVar12 = *(int *)(local_58.Data + 0xc);
          *(int *)(local_58.Data + 8) = iVar19;
          if ((iVar19 == 0) && (iVar12 == 0)) {
            *(undefined4 *)(local_58.Data + 0xc) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar19,iVar12,(ForAnyElementType *)local_58.Data,iVar19,
                       (int *)(local_58.Data + 0xc));
            if (iVar19 != 0) {
              memcpy(*(void **)FVar6.Data,_Src,(longlong)iVar19 << 2);
            }
          }
        }
        TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(FVar6.Data + 0x10),
                   &pFVar16->PhysicalTileDataA);
        TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(FVar6.Data + 0x28),
                   &pFVar16->PhysicalTileDataB);
        *(int *)(FVar6.Data + 0x40) = pFVar16->NumPhysicalTiles;
      }
      if ((((int)local_b8 == (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X) &&
          (local_b8._4_4_ == (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y)) &&
         ((int)uStack_b0 == (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z)) {
        local_1f0 = &(this->Header).PageTableVolumeAABBMax;
        if ((((uStack_b0._4_4_ != (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.X) ||
             ((int)local_a8 != (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Y)) ||
            ((local_a8._4_4_ != (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Z ||
             ((local_c8._4_4_ != (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X ||
              ((int)uStack_c0 != (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y)))))) ||
           (uStack_c0._4_4_ != (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z))
        goto LAB_14872470a;
      }
      else {
LAB_14872470a:
        pTVar13 = &(this->Header).PageTableVolumeAABBMax;
        local_1e8._0_8_ = (FScriptContainerElement *)0x0;
        local_1e8._8_4_ = 0;
        local_1e8._12_4_ = 0;
        local_1f0 = pTVar13;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_1e8,
                   uStack_c0._4_4_ * (int)uStack_c0 * local_c8._4_4_,Default);
        if ((int)uStack_b0 < local_a8._4_4_) {
          iVar19 = local_a8._4_4_;
          iVar12 = (int)uStack_b0;
          iVar17 = (int)local_a8;
          iVar18 = uStack_b0._4_4_;
          do {
            iVar22 = local_b8._4_4_;
            if (local_b8._4_4_ < iVar17) {
              do {
                iVar19 = (int)local_b8;
                if ((int)local_b8 < iVar18) {
                  do {
                    iVar17 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X;
                    if (((((iVar17 <= iVar19) &&
                          (iVar20 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y,
                          iVar20 <= iVar22)) &&
                         (iVar21 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z,
                         iVar21 <= iVar12)) &&
                        ((iVar19 < (pTVar13->field0_0x0)._s_0.X &&
                         (iVar22 < (pTVar13->field0_0x0)._s_0.Y)))) &&
                       (iVar12 < (pTVar13->field0_0x0)._s_0.Z)) {
                      uVar15 = ((((iVar12 - iVar21) *
                                  (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y -
                                 iVar20) + iVar22) *
                                (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X - iVar17)
                               + iVar19;
                      if ((local_50[0] < 1) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      if ((((int)uVar15 < 0) || (*(int *)(local_58.Data + 8) <= (int)uVar15)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("MippedTextureData.MipMaps[0].PageTable.IsValidIndex(PageTableIndexOld)"
                                             ,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                             ,0x28b,L""), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      uVar14 = ((((iVar12 - (int)uStack_b0) * (int)uStack_c0 - local_b8._4_4_) +
                                iVar22) * local_c8._4_4_ - (int)local_b8) + iVar19;
                      if ((((int)uVar14 < 0) || ((int)local_1e8._8_4_ <= (int)uVar14)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("PageTableNew.IsValidIndex(PageTableIndexNew)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                             ,0x291,L""), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      if ((local_50[0] < 1) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      FVar6.Data = local_58.Data;
                      uVar9 = 0;
                      if ((int)uVar15 < *(int *)(local_58.Data + 8)) {
                        uVar9 = ~uVar15 >> 0x1f;
                      }
                      if ((uVar9 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      uVar2 = *(undefined4 *)(*(longlong *)FVar6.Data + (longlong)(int)uVar15 * 4);
                      uVar15 = 0;
                      if ((int)uVar14 < (int)local_1e8._8_4_) {
                        uVar15 = ~uVar14 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar4 = (code *)swi(3);
                        uVar8 = (*pcVar4)();
                        return (bool)uVar8;
                      }
                      *(undefined4 *)(local_1e8._0_8_ + (longlong)(int)uVar14 * 4) = uVar2;
                      iVar18 = uStack_b0._4_4_;
                    }
                    iVar19 = iVar19 + 1;
                    pTVar13 = local_1f0;
                  } while (iVar19 < iVar18);
                  iVar17 = (int)local_a8;
                }
                iVar22 = iVar22 + 1;
                pTVar13 = local_1f0;
              } while (iVar22 < iVar17);
              iVar19 = local_a8._4_4_;
            }
            iVar12 = iVar12 + 1;
            pTVar13 = local_1f0;
            param_4 = local_1a0;
          } while (iVar12 < iVar19);
        }
        if ((local_50[0] < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar6.Data = local_58.Data;
        if ((FMipMap *)local_58.Data != (FMipMap *)local_1e8) {
          if (*(void **)local_58.Data != (void *)0x0) {
            FMemory::Free(*(void **)local_58.Data);
          }
          *(undefined8 *)FVar6.Data = local_1e8._0_8_;
          local_1e8._0_8_ = (FScriptContainerElement *)0x0;
          *(undefined4 *)(FVar6.Data + 8) = local_1e8._8_4_;
          *(undefined4 *)(FVar6.Data + 0xc) = local_1e8._12_4_;
          local_1e8._8_4_ = 0;
          local_1e8._12_4_ = 0;
        }
        if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1e8._0_8_);
        }
        param_1 = local_1c8;
      }
      iVar12 = 0;
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = 0;
      iVar19 = uStack_c0._4_4_;
      if (0 < uStack_c0._4_4_) {
        do {
          iVar17 = 0;
          if (0 < (int)uStack_c0) {
            do {
              iVar19 = 0;
              if (0 < local_c8._4_4_) {
                do {
                  uVar15 = (iVar12 * (int)uStack_c0 + iVar17) * local_c8._4_4_ + iVar19;
                  if ((local_50[0] < 1) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    uVar8 = (*pcVar4)();
                    return (bool)uVar8;
                  }
                  FVar6.Data = local_58.Data;
                  uVar14 = 0;
                  if ((int)uVar15 < *(int *)(local_58.Data + 8)) {
                    uVar14 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    uVar8 = (*pcVar4)();
                    return (bool)uVar8;
                  }
                  if (*(int *)(*(longlong *)FVar6.Data + (longlong)(int)uVar15 * 4) != 0) {
                    local_1d8 = iVar19;
                    iStack_1d4 = iVar17;
                    local_1d0 = iVar12;
                    if (((local_208.Data <= (FScriptContainerElement *)&local_1d8) &&
                        ((FScriptContainerElement *)&local_1d8 <
                         local_208.Data + (longlong)local_200._4_4_ * 0xc)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      uVar8 = (*pcVar4)();
                      return (bool)uVar8;
                    }
                    if ((int)local_200 == local_200._4_4_) {
                      iVar18 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&local_208,(int *)((longlong)&local_200 + 4));
                      local_200 = CONCAT44(local_200._4_4_,iVar18);
                    }
                    lVar11 = (longlong)(int)local_200;
                    local_200 = CONCAT44(local_200._4_4_,(int)local_200 + 1);
                    *(ulonglong *)(local_208.Data + lVar11 * 0xc) = CONCAT44(iStack_1d4,local_1d8);
                    *(int *)(local_208.Data + lVar11 * 0xc + 8) = local_1d0;
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 < local_c8._4_4_);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < (int)uStack_c0);
            iVar19 = uStack_c0._4_4_;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar19);
      }
      local_110 = 0;
      local_1c0 = 1;
      if (1 < local_c8._4_4_) {
        local_1c0 = local_c8._4_4_;
      }
      local_180.DataPtr = (void **)0x0;
      local_1bc = 1;
      if (1 < (int)uStack_c0) {
        local_1bc = (int)uStack_c0;
      }
      local_1b8 = 1;
      if (1 < iVar19) {
        local_1b8 = iVar19;
      }
      local_180.ArrayNum = 0;
      local_118 = &local_e8;
      local_108 = &local_208;
      local_100 = &local_1c0;
      local_170 = Core::Private::Function::
                  TFunctionRefCaller<`UE::SVT::FTextureData::GenerateBorderVoxels'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_168 = &local_118;
      local_f8 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_200,1,(TFunctionRef<void___cdecl(int)> *)&local_170,
                 local_1f8,None,&local_180);
      if (local_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data);
      }
      bVar7 = GenerateMipMaps((FTextureData *)&local_e8._s_0,param_1,-1);
      if (bVar7) {
        param_4->NumPhysicalTiles = 0;
        (param_4->MipPageRanges).ArrayNum = 0;
        if ((param_4->MipPageRanges).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(param_4->MipPageRanges).AllocatorInstance,0,
                     &(param_4->MipPageRanges).ArrayMax);
        }
        (param_4->PageTableCoords).ArrayNum = 0;
        if ((param_4->PageTableCoords).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(param_4->PageTableCoords).AllocatorInstance,0,
                     &(param_4->PageTableCoords).ArrayMax);
        }
        (param_4->PageTableTileIndices).ArrayNum = 0;
        if ((param_4->PageTableTileIndices).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(param_4->PageTableTileIndices).AllocatorInstance,0,
                     &(param_4->PageTableTileIndices).ArrayMax);
        }
        (param_4->PageTableParentIndices).ArrayNum = 0;
        if ((param_4->PageTableParentIndices).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(param_4->PageTableParentIndices).AllocatorInstance,0,
                     &(param_4->PageTableParentIndices).ArrayMax);
        }
        (param_4->PhysicalTileDataA).ArrayNum = 0;
        if ((param_4->PhysicalTileDataA).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,&(param_4->PhysicalTileDataA).AllocatorInstance,0,
                     &(param_4->PhysicalTileDataA).ArrayMax);
        }
        (param_4->PhysicalTileDataB).ArrayNum = 0;
        if ((param_4->PhysicalTileDataB).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,&(param_4->PhysicalTileDataB).AllocatorInstance,0,
                     &(param_4->PhysicalTileDataB).ArrayMax);
        }
        FDerivedTextureData::Build(param_4,(FTextureData *)&local_e8._s_0);
        bVar7 = true;
        goto LAB_148724eca;
      }
    }
    else if (2 < (byte)LogSparseVolumeTexture._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_148724ebc:
      Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogSparseVolumeTexture);
    }
  }
  else if (2 < (byte)LogSparseVolumeTexture._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
  }
LAB_148724ec8:
  bVar7 = false;
LAB_148724eca:
  DestructItems<UE::SVT::FTextureData::FMipMap,int>((FMipMap *)local_58.Data,local_50[0]);
  if ((FMipMap *)local_58.Data != (FMipMap *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return bVar7;
}

// Create @ 14872dcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::SVT::FTextureData::Create(FTextureData *this,ITextureDataProvider *param_1)

{
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *this_00;
  uint *puVar1;
  ulonglong uVar2;
  EPixelFormat EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TStaticArray<EPixelFormat,2,4294967295> TVar7;
  undefined2 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  FHeader *pFVar13;
  TVector4<float> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  FTextureData *pFVar23;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1f8;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  FTextureData *local_1d0;
  ITextureDataProvider *local_1c8;
  FTextureData *local_1c0;
  FTextureData *local_1b8;
  ForElementType<unsigned_int> local_1b0;
  code *local_1a8;
  FTextureData **local_1a0;
  TArrayView<std::nullptr_t,int> local_198;
  code *local_188;
  FTextureData **local_180;
  code *local_178;
  FTextureData **local_170;
  FTextureData *local_168;
  int *local_160;
  uchar *local_158;
  TVector4<float> local_148;
  undefined1 local_138 [16];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_11c;
  TIntVector3<int> local_118;
  TIntVector3<int> local_10c;
  EPixelFormat local_100;
  EPixelFormat local_ff;
  TVector4<float> local_f8;
  TVector4<float> local_e8;
  FHeader local_d8;
  uchar local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0 = this;
  local_1c8 = param_1;
  (**(code **)*param_1)(param_1,&local_118);
  pFVar13 = SVT::FHeader::FHeader
                      (&local_d8,&local_118,&local_10c,local_100,local_ff,&local_f8,&local_e8);
  uVar6 = *(undefined8 *)((longlong)&(pFVar13->VirtualVolumeResolution).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0 =
       *(undefined8 *)&(pFVar13->VirtualVolumeResolution).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeResolution.field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(pFVar13->VirtualVolumeAABBMax).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMin.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar13->VirtualVolumeAABBMin).field0_0x0 + 4);
  *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0 = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(pFVar13->PageTableVolumeResolution).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMax.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(pFVar13->VirtualVolumeAABBMax).field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeResolution.field0_0x0 + 4) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(pFVar13->PageTableVolumeAABBMin).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0 =
       *(undefined8 *)&(pFVar13->PageTableVolumeAABBMin).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMin.field0_0x0 + 8) = uVar6;
  TVar7.Elements = (pFVar13->AttributesFormats).Elements[0];
  uVar8 = *(undefined2 *)&pFVar13->field_0x4a;
  iVar18 = pFVar13->_padding_;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMax.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar13->PageTableVolumeAABBMax).field0_0x0 + 4);
  (this->Header).AttributesFormats = (TStaticArray<EPixelFormat,2,4294967295>)TVar7.Elements;
  *(undefined2 *)&(this->Header).field_0x4a = uVar8;
  (this->Header)._padding_ = iVar18;
  uVar6 = *(undefined8 *)((longlong)&(pFVar13->FallbackValues).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0 =
       *(undefined8 *)&(pFVar13->FallbackValues).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(pFVar13->FallbackValues).Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0 =
       *(undefined8 *)&(pFVar13->FallbackValues).Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8) = uVar6;
  bVar9 = SVT::FHeader::Validate(&this->Header,true);
  bVar10 = false;
  if (bVar9) {
    EVar3 = (this->Header).AttributesFormats.Elements[0];
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    local_68[0x18] = '\0';
    local_68[0x19] = '\0';
    local_68[0x1a] = '\0';
    local_68[0x1b] = '\0';
    local_68[0x1c] = '\0';
    local_68[0x1d] = '\0';
    local_68[0x1e] = '\0';
    local_68[0x1f] = '\0';
    local_1e8 = GPixelFormats[EVar3].BlockBytes;
    local_1e4 = GPixelFormats[(this->Header).AttributesFormats.Elements[1]].BlockBytes;
    if (EVar3 != PF_Unknown) {
      WriteVoxel(0,local_68,EVar3,(this->Header).FallbackValues.Elements,-1);
      pTVar14 = ReadVoxel(&local_148,0,local_68,(this->Header).AttributesFormats.Elements[0]);
      uVar6 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 8);
      *(undefined8 *)&(this->FallbackValuesQuantized).Elements[0].field0_0x0 =
           *(undefined8 *)&pTVar14->field0_0x0;
      *(undefined8 *)((longlong)&(this->FallbackValuesQuantized).Elements[0].field0_0x0 + 8) = uVar6
      ;
    }
    EVar3 = (this->Header).AttributesFormats.Elements[1];
    if (EVar3 != PF_Unknown) {
      WriteVoxel(0,local_68 + 0x10,EVar3,(this->Header).FallbackValues.Elements + 1,-1);
      pTVar14 = ReadVoxel(&local_148,0,local_68 + 0x10,(this->Header).AttributesFormats.Elements[1])
      ;
      uVar6 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 8);
      *(undefined8 *)&(this->FallbackValuesQuantized).Elements[1].field0_0x0 =
           *(undefined8 *)&pTVar14->field0_0x0;
      *(undefined8 *)((longlong)&(this->FallbackValuesQuantized).Elements[1].field0_0x0 + 8) = uVar6
      ;
    }
    this_00 = &this->MipMaps;
    TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>::SetNum(this_00,1,Default);
    local_128 = (ForElementType<unsigned_int>)0x0;
    local_11c = 0x80;
    local_120 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z *
                (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X *
                (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y;
    uVar17 = local_120 + 0x1f >> 5;
    if (local_120 + 0x1f >> 5 != 0) {
      if (4 < uVar17) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)local_138,0,uVar17,4);
        local_11c = uVar17 << 5;
      }
      FVar15 = (ForElementType<unsigned_int>)local_138;
      if (local_128 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_128;
      }
      memset((void *)FVar15,0,(ulonglong)uVar17 << 2);
      uVar17 = local_120 & 0x8000001f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
      }
      if (uVar17 != 0) {
        FVar15 = (ForElementType<unsigned_int>)local_138;
        if (local_128 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_128;
        }
        puVar1 = (uint *)((longlong)FVar15 +
                         (longlong)((int)(local_120 + ((int)local_120 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar17 & 0x1f);
      }
    }
    local_1a0 = &local_1b8;
    local_1a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::SVT::FTextureData::Create'::__l2::<lambda_1>,void,UE::Math::TIntVector3<int>_const_&,int,int,float>
                ::Call;
    local_1b8 = this;
    local_1b0 = (ForElementType<unsigned_int>)local_138;
    (**(code **)((longlong)*param_1 + 8))(param_1,&local_1a8);
    if (((this->MipMaps).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data
               ,(this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y *
                (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z *
                (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X,Default);
    iVar18 = 0;
    uVar17 = 1;
    iVar20 = 0;
    uVar19 = 0;
    if (local_120 != 0) {
      FVar15 = (ForElementType<unsigned_int>)local_138;
      if (local_128 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_128;
      }
      uVar19 = *(uint *)FVar15;
      while (uVar19 == 0) {
        lVar16 = (longlong)iVar18;
        iVar20 = iVar20 + 0x20;
        iVar18 = iVar18 + 1;
        uVar19 = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14872e062;
        uVar19 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar16 * 4);
      }
      uVar17 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1dc = (int)lVar16;
      uVar19 = local_1dc + -1 + iVar20;
      if ((int)local_120 < (int)uVar19) {
        uVar19 = local_120;
      }
    }
LAB_14872e062:
    pFVar23 = this;
    iVar21 = 0;
    if ((int)uVar19 < (int)local_120) {
      uVar22 = 0xffffffff;
      local_1e0 = 0;
      do {
        local_1e0 = local_1e0 + 1;
        if (((this->MipMaps).ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        pFVar4 = (this_00->AllocatorInstance).Data;
        uVar12 = 0;
        if ((int)uVar19 < *(int *)(pFVar4 + 8)) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        *(int *)(*(longlong *)pFVar4 + (longlong)(int)uVar19 * 4) = local_1e0;
        uVar22 = uVar22 & ~uVar17;
        FVar15 = (ForElementType<unsigned_int>)local_138;
        if (local_128 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_128;
        }
        uVar19 = uVar22 & *(uint *)((longlong)FVar15 + (longlong)iVar18 * 4);
        while (uVar19 == 0) {
          lVar16 = (longlong)iVar18;
          iVar20 = iVar20 + 0x20;
          iVar18 = iVar18 + 1;
          uVar19 = local_120;
          if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14872e1aa;
          uVar22 = 0xffffffff;
          uVar19 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar16 * 4);
        }
        uVar17 = -uVar19 & uVar19;
        uVar2 = (ulonglong)uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1d8 = (int)lVar16;
        uVar19 = local_1d8 + -1 + iVar20;
        if ((int)local_120 < (int)uVar19) {
          uVar19 = local_120;
        }
LAB_14872e1aa:
        param_1 = local_1c8;
        pFVar23 = local_1d0;
        iVar21 = local_1e0;
      } while ((int)uVar19 < (int)local_120);
    }
    if (((this->MipMaps).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
              ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
               ((this_00->AllocatorInstance).Data + 0x10),
               (longlong)local_1e8 * (longlong)iVar21 * 0x16c8,Default);
    if (((this->MipMaps).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
              ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
               ((this_00->AllocatorInstance).Data + 0x28),
               (longlong)local_1e4 * (longlong)iVar21 * 0x16c8,Default);
    if (((this->MipMaps).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    local_198.DataPtr = (void **)0x0;
    local_198.ArrayNum = 0;
    *(int *)((this_00->AllocatorInstance).Data + 0x40) = iVar21;
    local_160 = &local_1e8;
    local_158 = local_68;
    local_188 = Core::Private::Function::
                TFunctionRefCaller<`UE::SVT::FTextureData::Create'::__l2::<lambda_2>,void,int>::Call
    ;
    local_180 = &local_168;
    local_168 = pFVar23;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar21,1,(TFunctionRef<void___cdecl(int)> *)&local_188,local_1f8,
               None,&local_198);
    local_170 = &local_1c0;
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::SVT::FTextureData::Create'::__l2::<lambda_3>,void,UE::Math::TIntVector3<int>_const_&,int,int,float>
                ::Call;
    local_1c0 = pFVar23;
    (**(code **)((longlong)*param_1 + 8))(param_1,&local_178);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128);
    }
    bVar10 = true;
  }
  return bVar10;
}

// CreateDefault @ 14872e5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::SVT::FTextureData::CreateDefault(FTextureData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  TStaticArray<EPixelFormat,2,4294967295> TVar4;
  undefined2 uVar5;
  int iVar6;
  bool bVar7;
  FHeader *pFVar8;
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 auStackY_f8 [32];
  TIntVector3<int>_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  TVector4<float>_u_0 local_98;
  FHeader local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_a8._8_8_ = _UNK_150689648;
  local_98._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_98._8_8_ = _UNK_150689648;
  local_b8._s_0.X = 1;
  local_b8._s_0.Y = 1;
  local_b8._s_0.Z = 1;
  pFVar8 = SVT::FHeader::FHeader
                     (&local_88,&UE::Math::TIntVector3<int>::ZeroValue,
                      (TIntVector3<int> *)&local_b8._s_0,PF_R8,PF_Unknown,
                      (TVector4<float> *)&local_98._s_0,(TVector4<float> *)&local_a8._s_0);
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->VirtualVolumeResolution).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0 =
       *(undefined8 *)&(pFVar8->VirtualVolumeResolution).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeResolution.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(pFVar8->VirtualVolumeAABBMax).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMin.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar8->VirtualVolumeAABBMin).field0_0x0 + 4);
  *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0 = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->PageTableVolumeResolution).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMax.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(pFVar8->VirtualVolumeAABBMax).field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeResolution.field0_0x0 + 4) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->PageTableVolumeAABBMin).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0 =
       *(undefined8 *)&(pFVar8->PageTableVolumeAABBMin).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMin.field0_0x0 + 8) = uVar3;
  TVar4.Elements = (pFVar8->AttributesFormats).Elements[0];
  uVar5 = *(undefined2 *)&pFVar8->field_0x4a;
  iVar6 = pFVar8->_padding_;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMax.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar8->PageTableVolumeAABBMax).field0_0x0 + 4);
  (this->Header).AttributesFormats = (TStaticArray<EPixelFormat,2,4294967295>)TVar4.Elements;
  *(undefined2 *)&(this->Header).field_0x4a = uVar5;
  (this->Header)._padding_ = iVar6;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->FallbackValues).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0 =
       *(undefined8 *)&(pFVar8->FallbackValues).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->FallbackValues).Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0 =
       *(undefined8 *)&(pFVar8->FallbackValues).Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8) = uVar3;
  this_00 = &this->MipMaps;
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>::SetNum(this_00,1,Default);
  if ((this->MipMaps).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data,1
             ,Default);
  if ((this->MipMaps).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + 0x18) = 0;
  if (*(longlong *)(pFVar1 + 0x20) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)(pFVar1 + 0x10),0,(long64 *)(pFVar1 + 0x20));
  }
  if ((this->MipMaps).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + 0x30) = 0;
  if (*(longlong *)(pFVar1 + 0x38) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)(pFVar1 + 0x28),0,(long64 *)(pFVar1 + 0x38));
  }
  if ((this->MipMaps).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)((this_00->AllocatorInstance).Data + 0x40) = 0;
  return;
}

// CreateFromDense @ 14872e9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::SVT::FTextureData::CreateFromDense
          (FTextureData *this,FTextureDataCreateInfo *param_1,
          TArrayView<unsigned_char,__int64> *param_2,TArrayView<unsigned_char,__int64> *param_3)

{
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  undefined8 uVar2;
  EPixelFormat EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TStaticArray<EPixelFormat,2,4294967295> TVar7;
  undefined2 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FHeader *pFVar12;
  TVector4<float> *pTVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStackY_228 [32];
  <lambda_1> local_1e8 [4];
  int local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  int local_1d0;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  FTextureData **local_1a8;
  FTextureData **local_1a0;
  undefined8 local_198;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  FTextureData ***local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  FTextureData **local_150;
  TArrayView<std::nullptr_t,int> local_148;
  code *local_138;
  FTextureData ***local_130;
  FTextureData *local_128;
  longlong *local_120;
  uchar *local_118;
  FTextureData *local_110;
  uint *local_108;
  longlong *local_100;
  TArrayView<unsigned_char,__int64> *local_f8;
  TArrayView<unsigned_char,__int64> *local_f0;
  uchar *local_e8;
  int *local_e0;
  TVector4<float> local_d8;
  FHeader local_c8;
  uchar local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar12 = SVT::FHeader::FHeader
                      (&local_c8,&param_1->VirtualVolumeAABBMin,&param_1->VirtualVolumeAABBMax,
                       (param_1->AttributesFormats).Elements[0],
                       (param_1->AttributesFormats).Elements[1],(param_1->FallbackValues).Elements,
                       (param_1->FallbackValues).Elements + 1);
  uVar2 = *(undefined8 *)((longlong)&(pFVar12->VirtualVolumeResolution).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0 =
       *(undefined8 *)&(pFVar12->VirtualVolumeResolution).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeResolution.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)&(pFVar12->VirtualVolumeAABBMax).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMin.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar12->VirtualVolumeAABBMin).field0_0x0 + 4);
  *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0 = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(pFVar12->PageTableVolumeResolution).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Header).VirtualVolumeAABBMax.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(pFVar12->VirtualVolumeAABBMax).field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeResolution.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(pFVar12->PageTableVolumeAABBMin).field0_0x0 + 8);
  *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0 =
       *(undefined8 *)&(pFVar12->PageTableVolumeAABBMin).field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMin.field0_0x0 + 8) = uVar2;
  TVar7.Elements = (pFVar12->AttributesFormats).Elements[0];
  uVar8 = *(undefined2 *)&pFVar12->field_0x4a;
  iVar4 = pFVar12->_padding_;
  *(undefined8 *)((longlong)&(this->Header).PageTableVolumeAABBMax.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar12->PageTableVolumeAABBMax).field0_0x0 + 4);
  (this->Header).AttributesFormats = (TStaticArray<EPixelFormat,2,4294967295>)TVar7.Elements;
  *(undefined2 *)&(this->Header).field_0x4a = uVar8;
  (this->Header)._padding_ = iVar4;
  uVar2 = *(undefined8 *)((longlong)&(pFVar12->FallbackValues).Elements[0].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0 =
       *(undefined8 *)&(pFVar12->FallbackValues).Elements[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(pFVar12->FallbackValues).Elements[1].field0_0x0 + 8);
  *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0 =
       *(undefined8 *)&(pFVar12->FallbackValues).Elements[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8) = uVar2;
  bVar9 = SVT::FHeader::Validate(&this->Header,true);
  if (!bVar9) {
    return bVar9;
  }
  EVar3 = (this->Header).AttributesFormats.Elements[0];
  uVar2 = *(undefined8 *)&(this->Header).VirtualVolumeAABBMin.field0_0x0;
  local_1c8 = (longlong)GPixelFormats[EVar3].BlockBytes;
  local_1c0 = (longlong)GPixelFormats[(this->Header).AttributesFormats.Elements[1]].BlockBytes;
  local_1b8._0_4_ = (uint)uVar2;
  local_1b0 = (this->Header).VirtualVolumeAABBMin.field0_0x0._s_0.Z;
  local_1e0 = (uint)local_1b8 & 0x8000000f;
  if ((int)local_1e0 < 0) {
    local_1e0 = (local_1e0 - 1 | 0xfffffff0) + 1;
  }
  local_1b8._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  local_1dc = local_1b8._4_4_ & 0x8000000f;
  if ((int)local_1dc < 0) {
    local_1dc = (local_1dc - 1 | 0xfffffff0) + 1;
  }
  local_1d8 = local_1b0 & 0x8000000f;
  if ((int)local_1d8 < 0) {
    local_1d8 = (local_1d8 - 1 | 0xfffffff0) + 1;
  }
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_1b8 = uVar2;
  if (EVar3 != PF_Unknown) {
    WriteVoxel(0,local_58,EVar3,(this->Header).FallbackValues.Elements,-1);
    pTVar13 = ReadVoxel(&local_d8,0,local_58,(this->Header).AttributesFormats.Elements[0]);
    uVar2 = *(undefined8 *)((longlong)&pTVar13->field0_0x0 + 8);
    *(undefined8 *)&(this->FallbackValuesQuantized).Elements[0].field0_0x0 =
         *(undefined8 *)&pTVar13->field0_0x0;
    *(undefined8 *)((longlong)&(this->FallbackValuesQuantized).Elements[0].field0_0x0 + 8) = uVar2;
  }
  EVar3 = (this->Header).AttributesFormats.Elements[1];
  if (EVar3 != PF_Unknown) {
    WriteVoxel(0,local_58 + 0x10,EVar3,(this->Header).FallbackValues.Elements + 1,-1);
    pTVar13 = ReadVoxel(&local_d8,0,local_58 + 0x10,(this->Header).AttributesFormats.Elements[1]);
    uVar2 = *(undefined8 *)((longlong)&pTVar13->field0_0x0 + 8);
    *(undefined8 *)&(this->FallbackValuesQuantized).Elements[1].field0_0x0 =
         *(undefined8 *)&pTVar13->field0_0x0;
    *(undefined8 *)((longlong)&(this->FallbackValuesQuantized).Elements[1].field0_0x0 + 8) = uVar2;
  }
  this_00 = &this->MipMaps;
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>::SetNum(this_00,1,Default);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data,
             (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X *
             (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y *
             (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z,Default);
  local_108 = &local_1e0;
  local_1cc = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y *
              (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z;
  local_100 = &local_1c8;
  local_1e4 = 0;
  local_e8 = local_58;
  local_e0 = &local_1e4;
  local_1a8 = &local_110;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::SVT::FTextureData::CreateFromDense'::__l2::<lambda_2>,void,int>
              ::Call;
  local_170 = &local_1a8;
  local_188.DataPtr = (void **)0x0;
  local_188.ArrayNum = 0;
  local_110 = this;
  local_f8 = param_2;
  local_f0 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_1cc,1,(TFunctionRef<void___cdecl(int)> *)&local_178,
             local_1e8[0],None,&local_188);
  local_1d0 = local_1e4;
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pFVar5 = (this_00->AllocatorInstance).Data;
  piVar16 = *(int **)pFVar5;
  iVar4 = *(int *)(pFVar5 + 8);
  piVar1 = piVar16 + iVar4;
  iVar17 = 1;
  while( true ) {
    if (*(int *)(pFVar5 + 8) != iVar4) {
      local_1e8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1e8);
    }
    iVar18 = local_1d0;
    if (piVar16 == piVar1) break;
    iVar18 = iVar17;
    if (*piVar16 != 0) {
      iVar18 = iVar17 + 1;
      *piVar16 = iVar17;
    }
    piVar16 = piVar16 + 1;
    iVar17 = iVar18;
  }
  lVar19 = (longlong)local_1d0;
  if ((local_1d0 + 1 != iVar17) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumAllocatedPages + 1) == NextPageTableEntry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x118,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             ((this_00->AllocatorInstance).Data + 0x10),lVar19 * local_1c8 * 0x16c8,Default);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             ((this_00->AllocatorInstance).Data + 0x28),lVar19 * local_1c0 * 0x16c8,Default);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  *(int *)((this_00->AllocatorInstance).Data + 0x40) = iVar18;
  if (((local_1e0 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
      (local_1dc == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
     (local_1d8 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) {
    uVar2 = *(undefined8 *)&(this->Header).VirtualVolumeAABBMax.field0_0x0;
    local_198._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    uVar15 = local_198._4_4_ & 0x8000000f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
    }
    uVar14 = (this->Header).VirtualVolumeAABBMax.field0_0x0._s_0.Z & 0x8000000f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
    }
    local_198._0_4_ = (uint)uVar2;
    uVar11 = (uint)local_198 & 0x8000000f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
    }
    local_198 = uVar2;
    if (((uVar11 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
        (uVar15 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
       (uVar14 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) goto LAB_14872ef1e;
  }
  local_120 = &local_1c8;
  local_118 = local_58;
  local_168.DataPtr = (void **)0x0;
  local_168.ArrayNum = 0;
  local_158 = Core::Private::Function::
              TFunctionRefCaller<`UE::SVT::FTextureData::CreateFromDense'::__l28::<lambda_3>,void,int>
              ::Call;
  local_150 = &local_128;
  local_128 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar18,1,(TFunctionRef<void___cdecl(int)> *)&local_158,local_1e8[0]
             ,None,&local_168);
LAB_14872ef1e:
  local_1a0 = &local_110;
  local_148.DataPtr = (void **)0x0;
  local_138 = Core::Private::Function::
              TFunctionRefCaller<`UE::SVT::FTextureData::CreateFromDense'::__l2::<lambda_4>,void,int>
              ::Call;
  local_130 = &local_1a0;
  local_148.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_1cc,1,(TFunctionRef<void___cdecl(int)> *)&local_138,
             local_1e8[0],None,&local_148);
  return true;
}

// GenerateBorderVoxels @ 1487351d0

bool __thiscall
UE::SVT::FTextureData::GenerateBorderVoxels
          (FTextureData *this,FTextureDataAddressingInfo *param_1,int param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  <lambda_1> local_res18;
  int local_68;
  int local_64;
  int local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FTextureData **local_40;
  FTextureData *local_38;
  int local_30;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_28;
  int *local_20;
  FTextureDataAddressingInfo *local_18;
  
  bVar1 = (byte)param_2;
  iVar2 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X >> (bVar1 & 0x1f);
  iVar4 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z >> (bVar1 & 0x1f);
  iVar3 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >> (bVar1 & 0x1f);
  local_68 = 1;
  if (1 < iVar2) {
    local_68 = iVar2;
  }
  local_64 = 1;
  if (1 < iVar3) {
    local_64 = iVar3;
  }
  local_60 = 1;
  if (1 < iVar4) {
    local_60 = iVar4;
  }
  local_20 = &local_68;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::SVT::FTextureData::GenerateBorderVoxels'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_38 = this;
  local_30 = param_2;
  local_28 = param_3;
  local_18 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             local_res18,None,&local_58);
  return true;
}

// GenerateMipMaps @ 1487352d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::SVT::FTextureData::GenerateMipMaps
          (FTextureData *this,FTextureDataAddressingInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long64 lVar10;
  <lambda_1> <Var11;
  uint uVar12;
  <lambda_1> <Var13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  <lambda_1> <Var18;
  longlong lVar19;
  uint uVar20;
  size_t sVar21;
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *pTVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_1a8;
  int local_1a0 [3];
  uint local_194;
  uint local_190;
  int local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *local_160;
  int local_158;
  int iStack_154;
  int local_150;
  longlong local_148;
  longlong local_140;
  int local_138;
  int iStack_134;
  int local_130;
  TIntVector3<int>_u_0 local_128;
  int local_118;
  int local_114;
  int local_110;
  longlong local_108;
  longlong local_100;
  int local_f8;
  int iStack_f4;
  TArrayView<std::nullptr_t,int> local_e8;
  code *local_d8;
  FTextureData **local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FTextureData **local_b0;
  FTextureData *local_a8;
  uint local_a0;
  ForAnyElementType *local_98;
  int *local_90;
  FTextureDataAddressingInfo *local_88;
  FTextureData *local_80;
  ForAnyElementType *local_78;
  int *local_70;
  int *local_68;
  FTextureDataAddressingInfo *local_60;
  uint local_58;
  
  pTVar22 = &this->MipMaps;
  lVar14 = (longlong)GPixelFormats[(this->Header).AttributesFormats.Elements[0]].BlockBytes;
  lVar24 = (longlong)GPixelFormats[(this->Header).AttributesFormats.Elements[1]].BlockBytes;
  local_160 = pTVar22;
  if (((this->MipMaps).ArrayNum == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MipMaps.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1ba,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar9 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X;
  if (((((uVar9 & uVar9 - 1) != 0) ||
       (uVar9 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y, (uVar9 & uVar9 - 1) != 0
       )) || (uVar9 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z,
             (uVar9 & uVar9 - 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Header.PageTableVolumeResolution.X) && FMath::IsPowerOfTwo(Header.PageTableVolumeResolution.Y) && FMath::IsPowerOfTwo(Header.PageTableVolumeResolution.Z)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1bd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar19 = (longlong)*(int *)((pTVar22->AllocatorInstance).Data + 0x40);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar15 = lVar14 * lVar19 * 0x16c8;
  local_108 = lVar14;
  if ((*(longlong *)((pTVar22->AllocatorInstance).Data + 0x18) < lVar15) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipMaps[0].PhysicalTileDataA.Num() >= ((int64)NumMip0Tiles * (int64)SVT::NumVoxelsPerPaddedTile * (int64)FormatSize[0])"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1bf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar14 = lVar24 * lVar19 * 0x16c8;
  local_100 = lVar24;
  if ((*(longlong *)((pTVar22->AllocatorInstance).Data + 0x30) < lVar14) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipMaps[0].PhysicalTileDataB.Num() >= ((int64)NumMip0Tiles * (int64)SVT::NumVoxelsPerPaddedTile * (int64)FormatSize[1])"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1c0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(int *)((pTVar22->AllocatorInstance).Data + 8) !=
       (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z *
       (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y *
       (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipMaps[0].PageTable.Num() == (Header.PageTableVolumeResolution.X * Header.PageTableVolumeResolution.Y * Header.PageTableVolumeResolution.Z)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (param_2 == -1) {
    uVar2 = *(undefined8 *)&(this->Header).PageTableVolumeResolution.field0_0x0;
    param_2 = 1;
    iVar8 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z;
    local_170._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_170._0_4_ = (int)uVar2;
    iVar7 = local_170._4_4_;
    iVar6 = (int)local_170;
    local_170 = uVar2;
    for (; ((1 < iVar6 || (1 < (int)((ulonglong)local_170 >> 0x20))) || (1 < iVar8));
        iVar8 = iVar8 / 2) {
      iVar6 = iVar6 / 2;
      iVar7 = iVar7 / 2;
      local_170 = CONCAT44(iVar7,iVar6);
      param_2 = param_2 + 1;
    }
  }
  TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>::SetNum(pTVar22,1,Default);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             ((pTVar22->AllocatorInstance).Data + 0x10),lVar15,Default);
  if (((this->MipMaps).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             ((pTVar22->AllocatorInstance).Data + 0x28),lVar14,Default);
  local_170 = (longlong)param_2;
  local_res18 = 1;
  if (1 < local_170) {
    local_res18._0_1_ = (<lambda_1>)0x1;
    local_178 = 1;
    local_180 = 0x48;
    <Var18 = local_res18._0_1_;
    <Var13 = local_res18._0_1_;
    do {
      iVar8 = pTVar22->ArrayNum;
      if (iVar8 == pTVar22->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
      }
      pTVar22->ArrayNum = iVar8 + 1;
      DefaultConstructItems<UE::SVT::FTextureData::FMipMap,int>
                ((pTVar22->AllocatorInstance).Data + (longlong)iVar8 * 0x48,1);
      <Var11 = SUB41(local_res18,0);
      local_158 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X >> ((byte)<Var11 & 0x1f);
      uVar12 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >> ((byte)<Var11 & 0x1f);
      iStack_154 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y >> ((byte)<Var11 & 0x1f);
      uVar20 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z >> ((byte)<Var11 & 0x1f);
      local_150 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z >> ((byte)<Var11 & 0x1f);
      uVar9 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X >> ((byte)<Var11 & 0x1f);
      local_1a0[2] = 1;
      if (1 < (int)uVar9) {
        local_1a0[2] = uVar9;
      }
      local_194 = 1;
      if (1 < (int)uVar12) {
        local_194 = uVar12;
      }
      local_190 = 1;
      if (1 < (int)uVar20) {
        local_190 = uVar20;
      }
      if (((((local_1a0[2] & local_1a0[2] - 1U) != 0) || ((local_194 & local_194 - 1) != 0)) ||
          ((local_190 & local_190 - 1) != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsPowerOfTwo(PageTableVolumeResolution.X) && FMath::IsPowerOfTwo(PageTableVolumeResolution.Y) && FMath::IsPowerOfTwo(PageTableVolumeResolution.Z)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                             ,0x1da,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar8 = 0;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0[0] = 0;
      local_1a0[1] = 0;
      uVar9 = local_190 * local_194 * local_1a0[2];
      if ((int)uVar9 < 1) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
      }
      else {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar9,&local_1a8,local_1a0,local_1a0 + 1);
        iVar8 = local_1a0[0];
      }
      iVar7 = 0;
      lVar14 = 0;
      uVar9 = 0;
      local_res20 = 0;
      local_148 = 0;
      local_188 = 0;
      uVar12 = 0;
      if (0 < (int)local_190) {
        do {
          uVar9 = uVar12;
          iVar6 = 0;
          if (0 < (int)local_194) {
            do {
              iVar25 = 0;
              if (0 < local_1a0[2]) {
                local_140 = lVar14 * 0xc;
                local_188 = local_res18 - 1;
                iStack_f4 = iVar6;
                do {
                  iVar8 = local_188;
                  bVar4 = false;
                  uVar16 = 0;
                  local_f8 = iVar25;
                  do {
                    local_130 = local_150 + iVar7;
                    local_128._s_0.X = ((uint)uVar16 & 1) + (local_158 + iVar25) * 2;
                    _local_138 = CONCAT44(iStack_154 + iVar6,local_158);
                    local_128._s_0.Y = ((uint)(uVar16 >> 1) & 1) + (iStack_154 + iVar6) * 2;
                    local_128._s_0.Z = ((uint)(uVar16 >> 2) & 1) + local_130 * 2;
                    uVar9 = ReadPageTable(this,(TIntVector3<int> *)&local_128._s_0,iVar8);
                    lVar14 = local_140;
                    if (uVar9 - 1 < 0xfffffffe) {
                      bVar4 = true;
                    }
                    uVar9 = (uint)uVar16 + 1;
                    uVar16 = (ulonglong)uVar9;
                  } while ((int)uVar9 < 8);
                  if (bVar4) {
                    uVar9 = 0;
                    if ((int)local_res20 < local_1a0[0]) {
                      uVar9 = ~local_res20 >> 0x1f;
                    }
                    if ((uVar9 == 0) &&
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
                    local_res20 = local_res20 + 1;
                    *(ulonglong *)(local_1a8.Data + lVar14) = CONCAT44(iStack_f4,local_f8);
                    *(int *)(local_1a8.Data + lVar14 + 8) = iVar7;
                    local_148 = local_148 + 1;
                    local_140 = lVar14 + 0xc;
                  }
                  iVar25 = iVar25 + 1;
                } while (iVar25 < local_1a0[2]);
                lVar14 = local_148;
                iVar8 = local_1a0[0];
                uVar9 = local_res20;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)local_194);
          }
          iVar7 = iVar7 + 1;
          pTVar22 = local_160;
          <Var18 = <Var11;
          <Var13 = <Var11;
          uVar12 = uVar9;
        } while (iVar7 < (int)local_190);
      }
      if (iVar8 < (int)uVar9) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar9 - iVar8,&local_1a8,local_1a0,local_1a0 + 1);
      }
      else {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if ((int)uVar9 < iVar8) {
          uVar12 = iVar8 - uVar9;
          if ((int)(uVar12 | uVar9) < 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar8 = local_1a0[0];
          }
          if (uVar12 != 0) {
            iVar7 = (iVar8 - uVar12) - uVar9;
            if (iVar7 != 0) {
              memmove(local_1a8.Data + (longlong)(int)uVar9 * 0xc,
                      local_1a8.Data + (longlong)(int)uVar9 * 0xc + (longlong)(int)uVar12 * 0xc,
                      (longlong)iVar7 * 0xc);
              iVar8 = local_1a0[0];
            }
            local_1a0[0] = iVar8 - uVar12;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&local_1a8,iVar8 - uVar12,local_1a0 + 1);
          }
        }
      }
      uVar20 = ~local_res18 >> 0x1f;
      uVar12 = 0;
      if ((int)local_res18 < pTVar22->ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar26 = (pTVar22->AllocatorInstance).Data + local_180;
      pFVar1 = pFVar26 + 8;
      iVar8 = *(int *)&pFVar1->field_0x0;
      uVar12 = local_190 * local_194 * local_1a0[2];
      if (iVar8 < (int)uVar12) {
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar12 - iVar8,(ForAnyElementType *)pFVar26,(int *)pFVar1,
                           (int *)(pFVar26 + 0xc));
        memset((void *)(*(longlong *)&pFVar26->field_0x0 + (longlong)iVar7 * 4),0,
               (longlong)(int)(uVar12 - iVar8) << 2);
      }
      else {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if ((int)uVar12 < iVar8) {
          uVar23 = iVar8 - uVar12;
          if (((int)(uVar23 | uVar12) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (uVar23 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar26->field_0x0 + (longlong)(int)uVar12 * 4);
            iVar8 = (*(int *)&pFVar1->field_0x0 - uVar12) - uVar23;
            if (iVar8 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar23 * 4),(longlong)iVar8 << 2
                     );
            }
            *(uint *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - uVar23;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar26,*(int *)&pFVar1->field_0x0,
                       (int *)(pFVar26 + 0xc));
          }
        }
      }
      pTVar22 = local_160;
      uVar12 = 0;
      if ((int)local_res18 < local_160->ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar24 = local_180;
      pFVar26 = (pTVar22->AllocatorInstance).Data;
      lVar14 = *(longlong *)(pFVar26 + local_180 + 0x18);
      pFVar1 = pFVar26 + local_180 + 0x18;
      lVar19 = (int)uVar9 * local_108;
      uVar17 = lVar19 * 0x16c8;
      if (uVar17 - lVar14 == 0 || (longlong)uVar17 < lVar14) {
        if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar17);
        }
        if ((longlong)uVar17 < lVar14) {
          lVar14 = lVar14 + lVar19 * -0x16c8;
          if (((((uint)(uVar17 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar14 >> 0x3f) ^ 1)) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (lVar14 != 0) {
            sVar21 = (*(longlong *)pFVar1 + lVar19 * -0x16c8) - lVar14;
            if (sVar21 != 0) {
              memmove((void *)(*(longlong *)(pFVar26 + lVar24 + 0x10) + uVar17),
                      (void *)((longlong)(*(longlong *)(pFVar26 + lVar24 + 0x10) + uVar17) + lVar14)
                      ,sVar21);
            }
            *(longlong *)pFVar1 = *(longlong *)pFVar1 - lVar14;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,(ForAnyElementType *)(pFVar26 + lVar24 + 0x10),*(long64 *)pFVar1,
                       (long64 *)(pFVar26 + lVar24 + 0x20));
          }
        }
      }
      else {
        lVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (1,1,uVar17 - lVar14,(ForAnyElementType *)(pFVar26 + local_180 + 0x10),
                            (long64 *)pFVar1,(long64 *)(pFVar26 + local_180 + 0x20));
        memset((void *)(*(longlong *)(pFVar26 + lVar24 + 0x10) + lVar10),0,uVar17 - lVar14);
      }
      pTVar22 = local_160;
      uVar12 = 0;
      if ((int)local_res18 < local_160->ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar24 = local_180;
      pFVar26 = (pTVar22->AllocatorInstance).Data;
      pFVar1 = pFVar26 + local_180 + 0x30;
      lVar14 = *(longlong *)pFVar1;
      lVar19 = local_100 * (int)uVar9;
      uVar17 = lVar19 * 0x16c8;
      if (uVar17 - lVar14 == 0 || (longlong)uVar17 < lVar14) {
        if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar17);
        }
        if ((longlong)uVar17 < lVar14) {
          lVar14 = lVar14 + lVar19 * -0x16c8;
          if (((((uint)(uVar17 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar14 >> 0x3f) ^ 1)) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (lVar14 != 0) {
            sVar21 = (*(longlong *)pFVar1 + lVar19 * -0x16c8) - lVar14;
            if (sVar21 != 0) {
              memmove((void *)(*(longlong *)(pFVar26 + lVar24 + 0x28) + uVar17),
                      (void *)((longlong)(*(longlong *)(pFVar26 + lVar24 + 0x28) + uVar17) + lVar14)
                      ,sVar21);
            }
            *(longlong *)pFVar1 = *(longlong *)pFVar1 - lVar14;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,(ForAnyElementType *)(pFVar26 + lVar24 + 0x28),*(long64 *)pFVar1,
                       (long64 *)(pFVar26 + lVar24 + 0x38));
          }
        }
      }
      else {
        lVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (1,1,uVar17 - lVar14,(ForAnyElementType *)(pFVar26 + local_180 + 0x28),
                            (long64 *)pFVar1,(long64 *)(pFVar26 + local_180 + 0x38));
        memset((void *)(*(longlong *)(pFVar26 + lVar24 + 0x28) + lVar10),0,uVar17 - lVar14);
      }
      pTVar22 = local_160;
      lVar14 = local_178;
      uVar12 = 0;
      if ((int)local_res18 < local_160->ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_58 = local_res18;
      *(uint *)((pTVar22->AllocatorInstance).Data + local_180 + 0x40) = uVar9;
      local_78 = &local_1a8;
      local_e8.DataPtr = (void **)0x0;
      local_70 = local_1a0 + 2;
      local_68 = &local_158;
      local_d8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SVT::FTextureData::GenerateMipMaps'::__l66::<lambda_1>,void,int>
                 ::Call;
      local_d0 = &local_80;
      local_e8.ArrayNum = 0;
      local_80 = this;
      local_60 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar9,1,(TFunctionRef<void___cdecl(int)> *)&local_d8,<Var13,
                 None,&local_e8);
      iVar6 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z >> ((byte)<Var11 & 0x1f);
      iVar7 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >> ((byte)<Var11 & 0x1f);
      iVar8 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X >> ((byte)<Var11 & 0x1f);
      local_a0 = local_res18;
      local_118 = 1;
      if (1 < iVar8) {
        local_118 = iVar8;
      }
      local_114 = 1;
      if (1 < iVar7) {
        local_114 = iVar7;
      }
      local_110 = 1;
      if (1 < iVar6) {
        local_110 = iVar6;
      }
      local_98 = &local_1a8;
      local_c8.DataPtr = (void **)0x0;
      local_90 = &local_118;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SVT::FTextureData::GenerateBorderVoxels'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_b0 = &local_a8;
      local_c8.ArrayNum = 0;
      local_a8 = this;
      local_88 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_1a0[0],1,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                 <Var18,None,&local_c8);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      local_180 = local_180 + 0x48;
      local_res18 = local_res18 + 1;
      local_178 = lVar14 + 1;
    } while (local_178 < local_170);
  }
  return true;
}

// Load @ 14874cbc0

TVector4<float> * __thiscall
UE::SVT::FTextureData::Load
          (FTextureData *this,TVector4<float> *__return_storage_ptr__,TIntVector3<int> *param_1,
          int param_2,int param_3,FTextureDataAddressingInfo *param_4)

{
  TextureAddress TVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TVector4<float> *pTVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TIntVector3<int>_u_0 local_48;
  TIntVector3<int>_u_0 local_38;
  TVector4<float>_u_0 local_28;
  
  bVar4 = (byte)param_2;
  if ((1 < (uint)param_3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributesIdx >= 0 && AttributesIdx <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x17e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar2)();
    return pTVar10;
  }
  iVar11 = (param_1->field0_0x0)._s_0.Z;
  iVar15 = (param_4->VolumeResolution).field0_0x0._s_0.Z >> (bVar4 & 0x1f);
  TVar1 = param_4->AddressZ;
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  if (TVar1 == TA_Wrap) {
    iVar11 = (iVar15 + iVar11 % iVar15) % iVar15;
  }
  else if (TVar1 == TA_Clamp) {
    iVar16 = iVar15 + -1;
    if (iVar11 < iVar15 + -1) {
      iVar16 = iVar11;
    }
    iVar11 = 0;
    if (0 < iVar16) {
      iVar11 = iVar16;
    }
  }
  else if (TVar1 == TA_Mirror) {
    iVar16 = iVar15 * 2;
    iVar11 = (iVar16 + iVar11 % iVar16) % iVar16;
    if (iVar15 <= iVar11) {
      iVar11 = (iVar16 - iVar11) + -1;
    }
  }
  iVar15 = (param_1->field0_0x0)._s_0.Y;
  iVar16 = (param_4->VolumeResolution).field0_0x0._s_0.Y >> (bVar4 & 0x1f);
  TVar1 = param_4->AddressY;
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  if (TVar1 == TA_Wrap) {
    iVar15 = (iVar16 + iVar15 % iVar16) % iVar16;
  }
  else if (TVar1 == TA_Clamp) {
    iVar17 = iVar16 + -1;
    if (iVar15 < iVar16 + -1) {
      iVar17 = iVar15;
    }
    iVar15 = 0;
    if (0 < iVar17) {
      iVar15 = iVar17;
    }
  }
  else if (TVar1 == TA_Mirror) {
    iVar17 = iVar16 * 2;
    iVar15 = (iVar17 + iVar15 % iVar17) % iVar17;
    if (iVar16 <= iVar15) {
      iVar15 = (iVar17 - iVar15) + -1;
    }
  }
  iVar16 = (param_1->field0_0x0)._s_0.X;
  iVar17 = (param_4->VolumeResolution).field0_0x0._s_0.X >> (bVar4 & 0x1f);
  TVar1 = param_4->AddressX;
  if (iVar17 < 1) {
    iVar17 = 1;
  }
  if (TVar1 == TA_Wrap) {
    iVar16 = (iVar17 + iVar16 % iVar17) % iVar17;
  }
  else if (TVar1 == TA_Clamp) {
    iVar3 = iVar17 + -1;
    if (iVar16 < iVar17 + -1) {
      iVar3 = iVar16;
    }
    iVar16 = 0;
    if (0 < iVar3) {
      iVar16 = iVar3;
    }
  }
  else if (TVar1 == TA_Mirror) {
    iVar3 = iVar17 * 2;
    iVar16 = (iVar3 + iVar16 % iVar3) % iVar3;
    if (iVar17 <= iVar16) {
      iVar16 = (iVar3 - iVar16) + -1;
    }
  }
  uVar12 = iVar16 >> 0x1f & 0xf;
  uVar6 = iVar16 + uVar12;
  local_48._s_0.X = (int)uVar6 >> 4;
  uVar13 = iVar15 >> 0x1f & 0xf;
  uVar7 = iVar15 + uVar13;
  local_48._s_0.Y = (int)uVar7 >> 4;
  uVar14 = iVar11 >> 0x1f & 0xf;
  uVar8 = iVar11 + uVar14;
  local_48._s_0.Z = (int)uVar8 >> 4;
  uVar9 = ReadPageTable(this,(TIntVector3<int> *)&local_48._s_0,param_2);
  if (uVar9 - 1 < 0xfffffffe) {
    local_38._s_0.X = (uVar6 & 0xf) - uVar12;
    local_38._s_0.Y = (uVar7 & 0xf) - uVar13;
    local_38._s_0.Z = (uVar8 & 0xf) - uVar14;
    ReadTileDataVoxel(this,(TVector4<float> *)&local_28._s_0,uVar9 - 1,
                      (TIntVector3<int> *)&local_38._s_0,param_2,param_3);
  }
  else {
    pTVar10 = (this->FallbackValuesQuantized).Elements + (uint)param_3;
    local_28._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    local_28._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    local_28._s_0.W = (pTVar10->field0_0x0)._s_0.W;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.W = local_28._s_0.W;
  return __return_storage_ptr__;
}

// ReadPageTable @ 148750420

uint __thiscall
UE::SVT::FTextureData::ReadPageTable(FTextureData *this,TIntVector3<int> *param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_38;
  int iStack_34;
  
  if ((-1 < param_2) && (param_2 < (this->MipMaps).ArrayNum)) {
    bVar8 = (byte)param_2;
    iVar9 = (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Y >> (bVar8 & 0x1f);
    iVar13 = (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Z >> (bVar8 & 0x1f);
    iVar6 = (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.X >> (bVar8 & 0x1f);
    iVar17 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X >> (bVar8 & 0x1f);
    iVar18 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y >> (bVar8 & 0x1f);
    iVar16 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z >> (bVar8 & 0x1f);
    iVar4 = 1;
    if (1 < iVar6) {
      iVar4 = iVar6;
    }
    iVar6 = 1;
    if (1 < iVar9) {
      iVar6 = iVar9;
    }
    iVar9 = (param_1->field0_0x0)._s_0.X;
    iVar15 = 1;
    if (1 < iVar13) {
      iVar15 = iVar13;
    }
    if (((((iVar17 <= iVar9) && (iVar13 = (param_1->field0_0x0)._s_0.Y, iVar18 <= iVar13)) &&
         (iVar10 = (param_1->field0_0x0)._s_0.Z, iVar16 <= iVar10)) &&
        ((iVar9 < iVar4 && (iVar13 < iVar6)))) && (iVar10 < iVar15)) {
      iVar13 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Y >> (bVar8 & 0x1f);
      iVar14 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z >> (bVar8 & 0x1f);
      iVar10 = (this->Header).PageTableVolumeResolution.field0_0x0._s_0.X >> (bVar8 & 0x1f);
      iVar9 = 1;
      if (1 < iVar13) {
        iVar9 = iVar13;
      }
      iVar13 = 1;
      if (1 < iVar14) {
        iVar13 = iVar14;
      }
      iVar14 = 1;
      if (1 < iVar10) {
        iVar14 = iVar10;
      }
      if ((((iVar4 - iVar17 != iVar14) || (iVar6 - iVar18 != iVar9)) || (iVar15 - iVar16 != iVar13))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("PageTableResolution == ShiftRightAndMax(Header.PageTableVolumeResolution, MipLevel, 1)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                                ,0x157,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar12 = 0;
      iStack_34 = (int)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
      local_38 = (int)*(undefined8 *)&param_1->field0_0x0;
      uVar11 = (((((param_1->field0_0x0)._s_0.Z - iVar16) * (iVar6 - iVar18) - iVar18) + iStack_34)
                * (iVar4 - iVar17) - iVar17) + local_38;
      uVar7 = uVar12;
      if (param_2 < (this->MipMaps).ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      if ((-1 < (int)uVar11) &&
         (lVar1 = (longlong)param_2 * 0x48,
         (int)uVar11 < *(int *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 8))) {
        uVar7 = uVar12;
        if (param_2 < (this->MipMaps).ArrayNum) {
          uVar7 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return uVar7;
        }
        pFVar2 = (this->MipMaps).AllocatorInstance.Data;
        if ((int)uVar11 < *(int *)(pFVar2 + lVar1 + 8)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return uVar7;
        }
        return *(uint *)(*(longlong *)(pFVar2 + lVar1) + (longlong)(int)uVar11 * 4);
      }
    }
  }
  return 0xffffffff;
}

// ReadTileDataVoxel @ 1487506c0

TVector4<float> * __thiscall
UE::SVT::FTextureData::ReadTileDataVoxel
          (FTextureData *this,TVector4<float> *__return_storage_ptr__,int param_1,
          TIntVector3<int> *param_2,int param_3,int param_4)

{
  longlong lVar1;
  EPixelFormat EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TVector4<float> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int local_48;
  int iStack_44;
  
  if ((1 < (uint)param_4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributesIdx >= 0 && AttributesIdx <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x163,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TVector4<float> *)(*pcVar6)();
    return pTVar11;
  }
  if ((((((-1 < param_3) && (param_3 < (this->MipMaps).ArrayNum)) &&
        (iVar3 = (param_2->field0_0x0)._s_0.X,
        UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X <= iVar3)) &&
       ((iVar4 = (param_2->field0_0x0)._s_0.Y,
        UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y <= iVar4 &&
        (iVar5 = (param_2->field0_0x0)._s_0.Z,
        UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z <= iVar5)))) &&
      ((iVar3 < 0x10 && ((iVar4 < 0x10 && (iVar5 < 0x10)))))) && (-1 < param_1)) {
    uVar13 = (uint)~param_3 >> 0x1f;
    uVar9 = 0;
    if (param_3 < (this->MipMaps).ArrayNum) {
      uVar9 = uVar13;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TVector4<float> *)(*pcVar6)();
      return pTVar11;
    }
    lVar1 = (longlong)param_3 * 0x48;
    if (*(int *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x40) <= param_1)
    goto LAB_148750af9;
    uVar9 = 0;
    if (param_4 == 0) {
      uVar10 = 0;
      if (param_3 < (this->MipMaps).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector4<float> *)(*pcVar6)();
        return pTVar11;
      }
      lVar12 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x18);
    }
    else {
      if (param_4 != 1) goto LAB_1487508d4;
      uVar10 = uVar9;
      if (param_3 < (this->MipMaps).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector4<float> *)(*pcVar6)();
        return pTVar11;
      }
      lVar12 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x30);
    }
    if (lVar12 != 0) {
LAB_1487508d4:
      EVar2 = (this->Header).AttributesFormats.Elements[(uint)param_4];
      iVar3 = GPixelFormats[EVar2].BlockBytes;
      iVar4 = (this->MipMaps).ArrayNum;
      if (param_4 == 0) {
        uVar10 = uVar9;
        if (param_3 < iVar4) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TVector4<float> *)(*pcVar6)();
          return pTVar11;
        }
        lVar12 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x18);
      }
      else {
        uVar10 = uVar9;
        if (param_3 < iVar4) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TVector4<float> *)(*pcVar6)();
          return pTVar11;
        }
        lVar12 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x30);
      }
      if ((lVar12 <= (longlong)iVar3 * (longlong)param_1 * 0x16c8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TileByteOffset < NumTileBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                             ,0x173,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector4<float> *)(*pcVar6)();
        return pTVar11;
      }
      iStack_44 = (int)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
      iVar3 = (this->MipMaps).ArrayNum;
      local_48 = (int)*(undefined8 *)&param_2->field0_0x0;
      lVar12 = (longlong)local_48 + 0x157 +
               ((longlong)iStack_44 +
               ((longlong)(param_2->field0_0x0)._s_0.Z + (longlong)param_1 * 0x12) * 0x12) * 0x12;
      if (param_4 == 0) {
        if (param_3 < iVar3) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TVector4<float> *)(*pcVar6)();
          return pTVar11;
        }
        ReadVoxel(__return_storage_ptr__,lVar12,
                  *(uchar **)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x10),EVar2);
        return __return_storage_ptr__;
      }
      if (param_3 < iVar3) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector4<float> *)(*pcVar6)();
        return pTVar11;
      }
      ReadVoxel(__return_storage_ptr__,lVar12,
                *(uchar **)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x28),EVar2);
      return __return_storage_ptr__;
    }
  }
LAB_148750af9:
  pTVar11 = (this->FallbackValuesQuantized).Elements + (uint)param_4;
  uVar7 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar11->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  return __return_storage_ptr__;
}

// WriteTileDataVoxel @ 14875ee20

void __thiscall
UE::SVT::FTextureData::WriteTileDataVoxel
          (FTextureData *this,int param_1,TIntVector3<int> *param_2,int param_3,int param_4,
          TVector4<float> *param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uint uVar11;
  int local_38;
  int iStack_34;
  
  if ((1 < (uint)param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributesIdx >= 0 && AttributesIdx <= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureData.cpp"
                         ,0x1a2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = (param_2->field0_0x0)._s_0.X;
  if (iVar2 < -1) {
    return;
  }
  iVar3 = (param_2->field0_0x0)._s_0.Y;
  if (iVar3 < -1) {
    return;
  }
  iVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar4 < -1) {
    return;
  }
  if (0x10 < iVar2) {
    return;
  }
  if (0x10 < iVar3) {
    return;
  }
  if (0x10 < iVar4) {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  if ((this->MipMaps).ArrayNum <= param_3) {
    return;
  }
  if (param_1 < 0) {
    return;
  }
  uVar11 = (uint)~param_3 >> 0x1f;
  uVar8 = 0;
  if (param_3 < (this->MipMaps).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar1 = (longlong)param_3 * 0x48;
  if (*(int *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x40) <= param_1) {
    return;
  }
  uVar8 = 0;
  if (param_4 == 0) {
    uVar9 = 0;
    if (param_3 < (this->MipMaps).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x18);
  }
  else {
    if (param_4 != 1) goto LAB_14875f015;
    uVar9 = uVar8;
    if (param_3 < (this->MipMaps).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x30);
  }
  if (lVar5 == 0) {
    return;
  }
LAB_14875f015:
  iVar2 = (param_2->field0_0x0)._s_0.Z;
  iStack_34 = (int)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  local_38 = (int)*(undefined8 *)&param_2->field0_0x0;
  iVar3 = (this->MipMaps).ArrayNum;
  if (param_4 == 0) {
    if (param_3 < iVar3) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar10 = *(uchar **)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x10);
  }
  else {
    if (param_3 < iVar3) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar10 = *(uchar **)((this->MipMaps).AllocatorInstance.Data + lVar1 + 0x28);
  }
  WriteVoxel((longlong)local_38 +
             ((longlong)iStack_34 + ((longlong)iVar2 + (longlong)param_1 * 0x12) * 0x12) * 0x12 +
             0x157,puVar10,(this->Header).AttributesFormats.Elements[(uint)param_4],param_5,param_6)
  ;
  return;
}

