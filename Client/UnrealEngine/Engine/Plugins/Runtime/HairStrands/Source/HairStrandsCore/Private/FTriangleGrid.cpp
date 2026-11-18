// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FTriangleGrid @ 14dfaee80

FTriangleGrid * __thiscall
GroomBinding_RootProjection::FTriangleGrid::FTriangleGrid
          (FTriangleGrid *this,TVector<float> *param_1,TVector<float> *param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  FTriangleGrid *pFVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  int local_58;
  
  fVar11 = __real_bf000000;
  fVar19 = __real_3f800000;
  piVar1 = &(this->Cells).ArrayNum;
  piVar2 = &(this->Cells).ArrayMax;
  (this->Cells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined8 *)&(this->MinBound).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->MinBound).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->MaxBound).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->MaxBound).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->GridResolution).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  fVar12 = __real_40000000;
  (this->GridResolution).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  do {
    fVar3 = (this->MaxBound).field0_0x0._s_0.Y;
    fVar19 = fVar19 + fVar19;
    fVar4 = (this->MinBound).field0_0x0._s_0.Y;
    fVar5 = (this->MinBound).field0_0x0._s_0.Z;
    fVar6 = (this->MinBound).field0_0x0._s_0.X;
    fVar18 = fVar12 / fVar19;
    fVar7 = (this->MaxBound).field0_0x0._s_0.Z;
    (this->GridResolution).field0_0x0._s_0.X =
         -((int)ROUND(fVar11 - ((this->MaxBound).field0_0x0._s_0.X - fVar6) * fVar18) >> 1);
    (this->GridResolution).field0_0x0._s_0.Y = -((int)ROUND(fVar11 - (fVar3 - fVar4) * fVar18) >> 1)
    ;
    (this->GridResolution).field0_0x0._s_0.Z = -((int)ROUND(fVar11 - (fVar7 - fVar5) * fVar18) >> 1)
    ;
  } while (0x8000000 <
           (longlong)(this->GridResolution).field0_0x0._s_0.X *
           (longlong)(this->GridResolution).field0_0x0._s_0.Z *
           (longlong)(this->GridResolution).field0_0x0._s_0.Y);
  uVar8 = *(undefined8 *)&(this->GridResolution).field0_0x0;
  local_58 = (int)uVar8;
  (this->MaxBound).field0_0x0._s_0.X = (float)local_58 * fVar19 + fVar6;
  (this->MaxBound).field0_0x0._s_0.Y = (float)(int)((ulonglong)uVar8 >> 0x20) * fVar19 + fVar4;
  (this->MaxBound).field0_0x0._s_0.Z =
       (float)(this->GridResolution).field0_0x0._s_0.Z * fVar19 + fVar5;
  iVar9 = *piVar1;
  uVar16 = (this->GridResolution).field0_0x0._s_0.X * (this->GridResolution).field0_0x0._s_0.Y *
           (this->GridResolution).field0_0x0._s_0.Z;
  if (iVar9 < (int)uVar16) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar16 - iVar9,&(this->Cells).AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<GroomBinding_RootProjection::FTriangleGrid::FCell,int>
              ((this->Cells).AllocatorInstance.Data + (longlong)iVar14 * 0x10,uVar16 - iVar9);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar9) {
      uVar17 = iVar9 - uVar16;
      if (((int)(uVar17 | uVar16) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar15 = (FTriangleGrid *)(*pcVar10)();
        return pFVar15;
      }
      if (uVar17 != 0) {
        TArray<GroomBinding_RootProjection::FTriangleGrid::FCell,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->Cells,uVar16,uVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Cells).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  return this;
}

// Insert @ 14dfcd080

bool __thiscall
GroomBinding_RootProjection::FTriangleGrid::Insert(FTriangleGrid *this,FTriangle *param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_f4;
  float fStack_e4;
  
  uVar3 = *(undefined8 *)&(param_1->P0).field0_0x0;
  uVar4 = *(undefined8 *)&(param_1->P2).field0_0x0;
  fVar2 = (param_1->P0).field0_0x0._s_0.Z;
  uVar5 = *(undefined8 *)&(param_1->P1).field0_0x0;
  fVar30 = (float)uVar5;
  fVar31 = (float)uVar3;
  fVar26 = fVar30 - fVar31;
  fVar34 = (float)uVar4;
  fVar33 = (param_1->P1).field0_0x0._s_0.Z;
  fVar31 = fVar34 - fVar31;
  fVar24 = fVar33 - fVar2;
  fStack_e4 = (float)((ulonglong)uVar3 >> 0x20);
  fVar32 = fStack_e4;
  fVar30 = fVar30 - fVar34;
  fStack_f4 = (float)((ulonglong)uVar5 >> 0x20);
  fVar28 = fStack_f4 - fStack_e4;
  fStack_e4 = (float)((ulonglong)uVar4 >> 0x20);
  fVar34 = (param_1->P2).field0_0x0._s_0.Z;
  fVar33 = fVar33 - fVar34;
  fVar34 = fVar34 - fVar2;
  if (((0.0 < fVar28 * fVar28 + fVar26 * fVar26 + fVar24 * fVar24) &&
      (0.0 < fVar31 * fVar31 + (fStack_e4 - fVar32) * (fStack_e4 - fVar32) + fVar34 * fVar34)) &&
     (0.0 < fVar30 * fVar30 + (fStack_f4 - fStack_e4) * (fStack_f4 - fStack_e4) + fVar33 * fVar33))
  {
    fVar33 = (param_1->P1).field0_0x0._s_0.X;
    fVar34 = (param_1->P1).field0_0x0._s_0.Y;
    fVar32 = (param_1->P1).field0_0x0._s_0.Z;
    fVar31 = (param_1->P2).field0_0x0._s_0.X;
    fVar24 = fVar33;
    if (fVar33 <= fVar31) {
      fVar24 = fVar31;
    }
    fVar31 = (param_1->P2).field0_0x0._s_0.X;
    if (fVar31 <= fVar33) {
      fVar33 = fVar31;
    }
    fVar31 = (param_1->P2).field0_0x0._s_0.Y;
    fVar26 = fVar34;
    if (fVar31 <= fVar34) {
      fVar26 = fVar31;
    }
    fVar31 = (param_1->P2).field0_0x0._s_0.Y;
    if (fVar34 <= fVar31) {
      fVar34 = fVar31;
    }
    fVar31 = (this->MinBound).field0_0x0._s_0.X;
    fVar28 = (param_1->P0).field0_0x0._s_0.X;
    if (fVar24 <= fVar28) {
      fVar24 = fVar28;
    }
    fVar28 = (param_1->P2).field0_0x0._s_0.Z;
    fVar30 = fVar32;
    if (fVar28 <= fVar32) {
      fVar30 = fVar28;
    }
    fVar28 = (param_1->P2).field0_0x0._s_0.Z;
    if (fVar32 <= fVar28) {
      fVar32 = fVar28;
    }
    fVar28 = (param_1->P0).field0_0x0._s_0.X;
    if (fVar28 <= fVar33) {
      fVar33 = fVar28;
    }
    fVar28 = (param_1->P0).field0_0x0._s_0.Y;
    if (fVar28 <= fVar26) {
      fVar26 = fVar28;
    }
    fVar28 = (param_1->P0).field0_0x0._s_0.Y;
    if (fVar34 <= fVar28) {
      fVar34 = fVar28;
    }
    if (fVar2 <= fVar30) {
      fVar30 = fVar2;
    }
    if (fVar32 <= fVar2) {
      fVar32 = fVar2;
    }
    if ((((fVar31 < fVar24) && (fVar2 = (this->MinBound).field0_0x0._s_0.Y, fVar2 < fVar34)) &&
        ((fVar28 = (this->MinBound).field0_0x0._s_0.Z, fVar28 < fVar32 &&
         ((fVar35 = (this->MaxBound).field0_0x0._s_0.X, fVar33 < fVar35 &&
          (fVar26 < (this->MaxBound).field0_0x0._s_0.Y)))))) &&
       (fVar30 < (this->MaxBound).field0_0x0._s_0.Z)) {
      iVar21 = (this->GridResolution).field0_0x0._s_0.X;
      iVar19 = (this->GridResolution).field0_0x0._s_0.Y;
      iVar11 = (this->GridResolution).field0_0x0._s_0.Z;
      fVar27 = (this->MaxBound).field0_0x0._s_0.Y - fVar2;
      fVar29 = (this->MaxBound).field0_0x0._s_0.Z - fVar28;
      iVar1 = iVar11 + -1;
      fVar35 = fVar35 - fVar31;
      fVar25 = (float)iVar21;
      fVar23 = (float)iVar19;
      fVar25 = fVar25 + fVar25;
      fVar23 = fVar23 + fVar23;
      fVar22 = (float)iVar11;
      fVar22 = fVar22 + fVar22;
      iVar18 = (int)ROUND(((fVar26 - fVar2) / fVar27) * fVar23 - __real_3f000000) >> 1;
      iVar20 = (int)ROUND(((fVar33 - fVar31) / fVar35) * fVar25 - __real_3f000000) >> 1;
      iVar10 = (int)ROUND(((fVar30 - fVar28) / fVar29) * fVar22 - __real_3f000000) >> 1;
      iVar11 = iVar1;
      if (iVar10 < iVar1) {
        iVar11 = iVar10;
      }
      iVar19 = iVar19 + -1;
      iVar10 = iVar19;
      if (iVar18 < iVar19) {
        iVar10 = iVar18;
      }
      iVar21 = iVar21 + -1;
      iVar18 = iVar21;
      if (iVar20 < iVar21) {
        iVar18 = iVar20;
      }
      iVar20 = 0;
      if (0 < iVar18) {
        iVar20 = iVar18;
      }
      iVar18 = 0;
      if (0 < iVar10) {
        iVar18 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar11) {
        iVar10 = iVar11;
      }
      iVar11 = (int)ROUND(((fVar32 - fVar28) / fVar29) * fVar22 - __real_3f000000) >> 1;
      iVar14 = (int)ROUND(((fVar24 - fVar31) / fVar35) * fVar25 - __real_3f000000) >> 1;
      iVar13 = (int)ROUND(((fVar34 - fVar2) / fVar27) * fVar23 - __real_3f000000) >> 1;
      if (iVar11 < iVar1) {
        iVar1 = iVar11;
      }
      if (iVar13 < iVar19) {
        iVar19 = iVar13;
      }
      if (iVar14 < iVar21) {
        iVar21 = iVar14;
      }
      iVar11 = 0;
      if (0 < iVar21) {
        iVar11 = iVar21;
      }
      iVar21 = 0;
      if (0 < iVar19) {
        iVar21 = iVar19;
      }
      iVar19 = 0;
      if (0 < iVar1) {
        iVar19 = iVar1;
      }
      bVar8 = false;
      do {
        iVar1 = iVar18;
        if (iVar19 < iVar10) {
          return bVar8;
        }
        for (; iVar13 = iVar20, iVar1 <= iVar21; iVar1 = iVar1 + 1) {
          for (; iVar13 <= iVar11; iVar13 = iVar13 + 1) {
            if (((((-1 < iVar13) &&
                  (iVar14 = (this->GridResolution).field0_0x0._s_0.X, iVar13 < iVar14)) &&
                 (-1 < iVar1)) &&
                ((iVar6 = (this->GridResolution).field0_0x0._s_0.Y, iVar1 < iVar6 && (-1 < iVar10)))
                ) && (iVar10 < (this->GridResolution).field0_0x0._s_0.Z)) {
              uVar16 = (iVar1 + iVar6 * iVar10) * iVar14 + iVar13;
              if (((uint)(this->Cells).ArrayNum <= uVar16) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CellIndex < uint32(Cells.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                                     ,0x4de,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              uVar12 = 0;
              if ((int)uVar16 < (this->Cells).ArrayNum) {
                uVar12 = ~uVar16 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              pFVar17 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
              if (((*(FTriangle **)&pFVar17->field_0x0 <= param_1) &&
                  (param_1 < *(FTriangle **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              iVar14 = *(int *)&pFVar17[8].field_0x0;
              if (iVar14 == *(int *)(pFVar17 + 0xc)) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x4a8,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
              }
              *(int *)&pFVar17[8].field_0x0 = iVar14 + 1;
              uVar3 = *(undefined8 *)&param_1->SectionBaseIndex;
              puVar15 = (undefined8 *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar14 * 0xa8);
              *puVar15 = *(undefined8 *)param_1;
              puVar15[1] = uVar3;
              uVar3 = *(undefined8 *)&(param_1->P0).field0_0x0;
              puVar15[2] = *(undefined8 *)&param_1->I1;
              puVar15[3] = uVar3;
              uVar3 = *(undefined8 *)((longlong)&(param_1->P1).field0_0x0 + 4);
              puVar15[4] = *(undefined8 *)((longlong)&(param_1->P0).field0_0x0 + 8);
              puVar15[5] = uVar3;
              uVar3 = *(undefined8 *)((longlong)&(param_1->P2).field0_0x0 + 8);
              puVar15[6] = *(undefined8 *)&(param_1->P2).field0_0x0;
              puVar15[7] = uVar3;
              uVar3 = *(undefined8 *)&(param_1->P1_NonTransfered).field0_0x0;
              puVar15[8] = *(undefined8 *)((longlong)&(param_1->P0_NonTransfered).field0_0x0 + 4);
              puVar15[9] = uVar3;
              uVar3 = *(undefined8 *)((longlong)&(param_1->P2_NonTransfered).field0_0x0 + 4);
              puVar15[10] = *(undefined8 *)((longlong)&(param_1->P1_NonTransfered).field0_0x0 + 8);
              puVar15[0xb] = uVar3;
              uVar3 = *(undefined8 *)((longlong)&(param_1->N0).field0_0x0 + 8);
              puVar15[0xc] = *(undefined8 *)&(param_1->N0).field0_0x0;
              puVar15[0xd] = uVar3;
              uVar3 = *(undefined8 *)&(param_1->N2).field0_0x0;
              puVar15[0xe] = *(undefined8 *)((longlong)&(param_1->N1).field0_0x0 + 4);
              puVar15[0xf] = uVar3;
              uVar3 = *(undefined8 *)((longlong)&(param_1->UV0).field0_0x0 + 4);
              puVar15[0x10] = *(undefined8 *)((longlong)&(param_1->N2).field0_0x0 + 8);
              puVar15[0x11] = uVar3;
              *(undefined1 (*) [16])(puVar15 + 0x12) =
                   *(undefined1 (*) [16])((longlong)&(param_1->UV1).field0_0x0 + 4);
              puVar15[0x14] = *(undefined8 *)&param_1->Attribute1;
              bVar8 = true;
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while( true );
    }
  }
  return false;
}

// ToCells @ 14dfd9070

TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_> *
__thiscall
GroomBinding_RootProjection::FTriangleGrid::ToCells
          (FTriangleGrid *this,
          TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TVector<float> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
  *pTVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_res10;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68 [5];
  
  fVar8 = __real_3f000000;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar10 = false;
  fVar28 = (param_1->field0_0x0)._s_0.X - (this->MinBound).field0_0x0._s_0.X;
  iVar13 = (this->GridResolution).field0_0x0._s_0.X;
  fVar29 = (param_1->field0_0x0)._s_0.Y - (this->MinBound).field0_0x0._s_0.Y;
  iVar19 = (this->GridResolution).field0_0x0._s_0.Y;
  fVar30 = (param_1->field0_0x0)._s_0.Z - (this->MinBound).field0_0x0._s_0.Z;
  bVar7 = false;
  iVar21 = (this->GridResolution).field0_0x0._s_0.Z;
  uVar27 = iVar21 - 1;
  iVar25 = (int)ROUND(((fVar28 + fVar28) /
                      ((this->MaxBound).field0_0x0._s_0.X - (this->MinBound).field0_0x0._s_0.X)) *
                      (float)iVar13 - fVar8) >> 1;
  iVar23 = (int)ROUND(((fVar29 + fVar29) /
                      ((this->MaxBound).field0_0x0._s_0.Y - (this->MinBound).field0_0x0._s_0.Y)) *
                      (float)iVar19 - fVar8) >> 1;
  uVar11 = (int)ROUND(((fVar30 + fVar30) /
                      ((this->MaxBound).field0_0x0._s_0.Z - (this->MinBound).field0_0x0._s_0.Z)) *
                      (float)iVar21 - fVar8) >> 1;
  if ((int)uVar11 < (int)uVar27) {
    uVar27 = uVar11;
  }
  iVar21 = iVar19 + -1;
  if (iVar23 < iVar19 + -1) {
    iVar21 = iVar23;
  }
  iVar23 = iVar13 + -1;
  if (iVar25 < iVar13 + -1) {
    iVar23 = iVar25;
  }
  iVar25 = 0;
  if (0 < iVar23) {
    iVar25 = iVar23;
  }
  iVar23 = 0;
  if (0 < iVar21) {
    iVar23 = iVar21;
  }
  uVar11 = 0;
  if (0 < (int)uVar27) {
    uVar11 = uVar27;
  }
  uVar27 = (iVar19 * uVar11 + iVar23) * iVar13 + iVar25;
  if (((uint)(this->Cells).ArrayNum <= uVar27) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellIndex < uint32(Cells.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x4de,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar16;
  }
  uVar12 = 0;
  if ((int)uVar27 < (this->Cells).ArrayNum) {
    uVar12 = ~uVar27 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar16;
  }
  if (0 < *(int *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10 + 8)) {
    uVar12 = 0;
    if ((int)uVar27 < (this->Cells).ArrayNum) {
      uVar12 = ~uVar27 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar16;
    }
    local_70 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 <
         pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar5)();
      return pTVar16;
    }
    iVar13 = __return_storage_ptr__->ArrayNum;
    if (iVar13 == __return_storage_ptr__->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    bVar10 = true;
    __return_storage_ptr__->ArrayNum = iVar13 + 1;
    bVar7 = true;
    *(FScriptContainerElement **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_70;
  }
  local_res10 = -1;
  iVar13 = 1;
  do {
    if (local_res10 <= iVar13) {
      iVar19 = local_res10 + iVar25;
      iVar21 = (uVar11 - iVar25) + iVar19;
      iVar20 = local_res10;
      do {
        iVar26 = iVar19 + (iVar23 - iVar25);
        iVar22 = local_res10;
        iVar6 = iVar19;
        iVar18 = local_res10;
        do {
          do {
            iVar15 = -iVar22;
            if (-iVar22 < 0) {
              iVar15 = iVar22;
            }
            if (iVar15 == iVar13) {
LAB_14dfd93d8:
              iVar2 = (this->GridResolution).field0_0x0._s_0.X;
              iVar3 = (this->GridResolution).field0_0x0._s_0.Y;
              iVar15 = iVar2 + -1;
              iVar24 = iVar3 + -1;
              if (iVar6 < iVar15) {
                iVar15 = iVar6;
              }
              if (iVar26 < iVar24) {
                iVar24 = iVar26;
              }
              iVar14 = (this->GridResolution).field0_0x0._s_0.Z + -1;
              if (iVar21 < iVar14) {
                iVar14 = iVar21;
              }
              iVar17 = 0;
              if (0 < iVar14) {
                iVar17 = iVar14;
              }
              iVar14 = 0;
              if (0 < iVar24) {
                iVar14 = iVar24;
              }
              iVar24 = 0;
              if (0 < iVar15) {
                iVar24 = iVar15;
              }
              uVar27 = (iVar14 + iVar17 * iVar3) * iVar2 + iVar24;
              if (((uint)(this->Cells).ArrayNum <= uVar27) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CellIndex < uint32(Cells.Num())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                                      ,0x4de,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar16;
              }
              uVar12 = 0;
              if ((int)uVar27 < (this->Cells).ArrayNum) {
                uVar12 = ~uVar27 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar16;
              }
              bVar10 = bVar7;
              if (0 < *(int *)((this->Cells).AllocatorInstance.Data +
                              (longlong)(int)uVar27 * 0x10 + 8)) {
                uVar12 = 0;
                if ((int)uVar27 < (this->Cells).ArrayNum) {
                  uVar12 = ~uVar27 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar16;
                }
                local_68[0] = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10;
                piVar1 = &__return_storage_ptr__->ArrayMax;
                pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
                    ((FScriptContainerElement *)local_68 < pFVar4 + (longlong)*piVar1 * 8)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  pTVar16 = (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell_const_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar16;
                }
                iVar15 = __return_storage_ptr__->ArrayNum;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
                }
                __return_storage_ptr__->ArrayNum = iVar15 + 1;
                bVar7 = true;
                *(FScriptContainerElement **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar15 * 8) =
                     local_68[0];
                bVar10 = bVar7;
              }
            }
            else {
              iVar15 = -iVar18;
              if (-iVar18 < 0) {
                iVar15 = iVar18;
              }
              if (iVar15 == iVar13) goto LAB_14dfd93d8;
              iVar15 = -iVar20;
              if (-iVar20 < 0) {
                iVar15 = iVar20;
              }
              if (iVar15 == iVar13) goto LAB_14dfd93d8;
            }
            iVar22 = iVar22 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar22 <= iVar13);
          iVar18 = iVar18 + 1;
          iVar26 = iVar26 + 1;
          iVar22 = local_res10;
          iVar6 = iVar19;
          bVar7 = bVar10;
        } while (iVar18 <= iVar13);
        iVar20 = iVar20 + 1;
        iVar21 = iVar21 + 1;
      } while (iVar20 <= iVar13);
    }
    iVar19 = (this->GridResolution).field0_0x0._s_0.Y;
    local_res10 = local_res10 + -1;
    iVar21 = (this->GridResolution).field0_0x0._s_0.Z;
    iVar13 = iVar13 + 1;
    if (iVar19 < (this->GridResolution).field0_0x0._s_0.X) {
      iVar19 = (this->GridResolution).field0_0x0._s_0.X;
    }
    if (iVar21 < iVar19) {
      iVar21 = iVar19;
    }
    if ((iVar21 <= iVar13) || (bVar10)) {
      return __return_storage_ptr__;
    }
  } while( true );
}

