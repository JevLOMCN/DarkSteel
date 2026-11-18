// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 3

// voro_base @ 1436b7d20

voro_base * __thiscall
voro::voro_base::voro_base
          (voro_base *this,int param_1,int param_2,int param_3,double param_4,double param_5,
          double param_6)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  
  dVar3 = __real_3ff0000000000000;
  dVar24 = __real_3ff0000000000000 / param_4;
  this->nx = param_1;
  this->ny = param_2;
  this->nz = param_3;
  this->boxx = param_4;
  this->ysp = dVar3 / param_5;
  this->nxy = param_1 * param_2;
  this->boxy = param_5;
  this->boxz = param_6;
  this->xsp = dVar24;
  this->zsp = dVar3 / param_6;
  this->nxyz = param_1 * param_2 * param_3;
  pdVar8 = operator_new__(0x8000);
  dVar7 = __real_46293e5939a08cea;
  dVar24 = __real_3fc0000000000000;
  puVar11 = wl;
  uVar30 = 0;
  uVar31 = 0;
  iVar21 = 0;
  dVar4 = this->boxz * __real_3fc0000000000000;
  this->mrad = pdVar8;
  dVar3 = this->boxx * dVar24;
  dVar24 = this->boxy * dVar24;
  dVar29 = dVar4;
  do {
    iVar23 = 0;
    dVar28 = dVar24;
    dVar6 = 0.0;
    do {
      dVar5 = dVar28;
      uVar32 = 0;
      uVar33 = 0;
      iVar22 = 0;
      dVar28 = dVar3;
      do {
        iVar12 = *puVar11 + 1;
        dVar27 = dVar7;
        for (lVar20 = (longlong)iVar12; lVar20 < 0x40; lVar20 = lVar20 + 1) {
          uVar2 = puVar11[lVar20];
          uVar16 = uVar2 >> 7 & 0x7f;
          uVar9 = uVar2 >> 0xe & 0x7f;
          uVar13 = uVar2 & 0x7f;
          iVar17 = uVar16 - 0x40;
          iVar10 = uVar9 - 0x40;
          iVar14 = uVar13 - 0x40;
          if ((uVar2 >> 0x16 & 1) == 0) {
            dVar26 = dVar27;
            if ((uVar2 >> 0x15 & 1) != 0) {
              if ((int)(uVar13 - 0x3f) < 1) goto LAB_1436b7fc4;
              dVar26 = (double)(int)(uVar13 - 0x3f) * this->boxx - dVar28;
              dVar26 = dVar26 * dVar26;
              goto LAB_1436b7fe6;
            }
          }
          else {
            iVar1 = uVar13 - 0x41;
            if (iVar1 < 1) {
              if (iVar1 < 0) {
                dVar26 = (double)CONCAT44(uVar33,uVar32) - (double)iVar14 * this->boxx;
                dVar26 = dVar26 * dVar26;
              }
              else {
                dVar26 = 0.0;
              }
            }
            else {
              dVar26 = (double)iVar1 * this->boxx - dVar28;
              dVar26 = dVar26 * dVar26;
            }
            if (iVar17 < 1) {
              if (iVar17 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar16 - 0x3f) * this->boxy;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar17 * this->boxy - dVar5;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar9 - 0x3f) * this->boxz;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxz - dVar29;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (dVar27 <= dVar26) {
              dVar26 = dVar27;
            }
            dVar27 = dVar26;
            dVar26 = dVar27;
            if ((uVar2 >> 0x15 & 1) == 0) {
              if ((int)(uVar13 - 0x3f) < 1) {
LAB_1436b7fc4:
                if ((int)(uVar13 - 0x3f) < 0) {
                  dVar26 = (double)CONCAT44(uVar33,uVar32) -
                           (double)(int)(uVar13 - 0x3e) * this->boxx;
                  dVar26 = dVar26 * dVar26;
                }
                else {
                  dVar26 = 0.0;
                }
              }
              else {
                dVar26 = (double)(int)(uVar13 - 0x3f) * this->boxx - dVar28;
                dVar26 = dVar26 * dVar26;
              }
LAB_1436b7fe6:
              if (iVar17 < 1) {
                if (iVar17 < 0) {
                  dVar25 = dVar6 - (double)(int)(uVar16 - 0x3f) * this->boxy;
                  dVar26 = dVar26 + dVar25 * dVar25;
                }
              }
              else {
                dVar25 = (double)iVar17 * this->boxy - dVar5;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
              if (iVar10 < 1) {
                if (iVar10 < 0) {
                  dVar25 = (double)CONCAT44(uVar31,uVar30) -
                           (double)(int)(uVar9 - 0x3f) * this->boxz;
                  dVar26 = dVar26 + dVar25 * dVar25;
                }
              }
              else {
                dVar25 = (double)iVar10 * this->boxz - dVar29;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
              if (dVar27 <= dVar26) {
                dVar26 = dVar27;
              }
            }
          }
          if ((uVar2 >> 0x19 & 1) == 0) {
            dVar25 = dVar26;
            if ((uVar2 >> 0x18 & 1) != 0) goto LAB_1436b815f;
          }
          else {
            iVar1 = uVar16 - 0x41;
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar27 = (double)CONCAT44(uVar33,uVar32) - (double)(int)(uVar13 - 0x3f) * this->boxx
                ;
                dVar27 = dVar27 * dVar27;
              }
              else {
                dVar27 = 0.0;
              }
            }
            else {
              dVar27 = (double)iVar14 * this->boxx - dVar28;
              dVar27 = dVar27 * dVar27;
            }
            if (iVar1 < 1) {
              if (iVar1 < 0) {
                dVar25 = dVar6 - (double)iVar17 * this->boxy;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar1 * this->boxy - dVar5;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar9 - 0x3f) * this->boxz;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxz - dVar29;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            if (dVar26 <= dVar27) {
              dVar27 = dVar26;
            }
            dVar26 = dVar27;
            dVar25 = dVar26;
            if ((uVar2 >> 0x18 & 1) == 0) {
LAB_1436b815f:
              iVar1 = uVar16 - 0x3f;
              if (iVar14 < 1) {
                if (iVar14 < 0) {
                  dVar25 = (double)CONCAT44(uVar33,uVar32) -
                           (double)(int)(uVar13 - 0x3f) * this->boxx;
                  dVar25 = dVar25 * dVar25;
                }
                else {
                  dVar25 = 0.0;
                }
              }
              else {
                dVar25 = (double)iVar14 * this->boxx - dVar28;
                dVar25 = dVar25 * dVar25;
              }
              if (iVar1 < 1) {
                if (iVar1 < 0) {
                  dVar27 = dVar6 - (double)(int)(uVar16 - 0x3e) * this->boxy;
                  dVar25 = dVar25 + dVar27 * dVar27;
                }
              }
              else {
                dVar27 = (double)iVar1 * this->boxy - dVar5;
                dVar25 = dVar25 + dVar27 * dVar27;
              }
              if (iVar10 < 1) {
                if (iVar10 < 0) {
                  dVar27 = (double)CONCAT44(uVar31,uVar30) -
                           (double)(int)(uVar9 - 0x3f) * this->boxz;
                  dVar25 = dVar25 + dVar27 * dVar27;
                }
              }
              else {
                dVar27 = (double)iVar10 * this->boxz - dVar29;
                dVar25 = dVar25 + dVar27 * dVar27;
              }
              if (dVar26 <= dVar25) {
                dVar25 = dVar26;
              }
            }
          }
          if ((uVar2 >> 0x1c & 1) == 0) {
            dVar27 = dVar25;
            if ((uVar2 >> 0x1b & 1) != 0) {
              if (iVar14 < 1) goto LAB_1436b8357;
              dVar27 = (double)iVar14 * this->boxx - dVar28;
              dVar27 = dVar27 * dVar27;
              goto LAB_1436b837b;
            }
          }
          else {
            iVar1 = uVar9 - 0x41;
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar27 = (double)CONCAT44(uVar33,uVar32) - (double)(int)(uVar13 - 0x3f) * this->boxx
                ;
                dVar27 = dVar27 * dVar27;
              }
              else {
                dVar27 = 0.0;
              }
            }
            else {
              dVar27 = (double)iVar14 * this->boxx - dVar28;
              dVar27 = dVar27 * dVar27;
            }
            if (iVar17 < 1) {
              if (iVar17 < 0) {
                dVar26 = dVar6 - (double)(int)(uVar16 - 0x3f) * this->boxy;
                dVar27 = dVar27 + dVar26 * dVar26;
              }
            }
            else {
              dVar26 = (double)iVar17 * this->boxy - dVar5;
              dVar27 = dVar27 + dVar26 * dVar26;
            }
            if (iVar1 < 1) {
              if (iVar1 < 0) {
                dVar26 = (double)CONCAT44(uVar31,uVar30) - (double)iVar10 * this->boxz;
                dVar27 = dVar27 + dVar26 * dVar26;
              }
            }
            else {
              dVar26 = (double)iVar1 * this->boxz - dVar29;
              dVar27 = dVar27 + dVar26 * dVar26;
            }
            if (dVar25 <= dVar27) {
              dVar27 = dVar25;
            }
            dVar25 = dVar27;
            dVar27 = dVar25;
            if ((uVar2 >> 0x1b & 1) == 0) {
              if (iVar14 < 1) {
LAB_1436b8357:
                if (iVar14 < 0) {
                  dVar27 = (double)CONCAT44(uVar33,uVar32) -
                           (double)(int)(uVar13 - 0x3f) * this->boxx;
                  dVar27 = dVar27 * dVar27;
                }
                else {
                  dVar27 = 0.0;
                }
              }
              else {
                dVar27 = (double)iVar14 * this->boxx - dVar28;
                dVar27 = dVar27 * dVar27;
              }
LAB_1436b837b:
              iVar10 = uVar9 - 0x3f;
              if (iVar17 < 1) {
                if (iVar17 < 0) {
                  dVar26 = dVar6 - (double)(int)(uVar16 - 0x3f) * this->boxy;
                  dVar27 = dVar27 + dVar26 * dVar26;
                }
              }
              else {
                dVar26 = (double)iVar17 * this->boxy - dVar5;
                dVar27 = dVar27 + dVar26 * dVar26;
              }
              if (iVar10 < 1) {
                if (iVar10 < 0) {
                  dVar26 = (double)CONCAT44(uVar31,uVar30) -
                           (double)(int)(uVar9 - 0x3e) * this->boxz;
                  dVar27 = dVar27 + dVar26 * dVar26;
                }
              }
              else {
                dVar26 = (double)iVar10 * this->boxz - dVar29;
                dVar27 = dVar27 + dVar26 * dVar26;
              }
              if (dVar25 <= dVar27) {
                dVar27 = dVar25;
              }
            }
          }
          iVar12 = iVar12 + 1;
        }
        lVar20 = (longlong)(iVar12 + -1);
        if (3 < lVar20) {
          lVar19 = (lVar20 - 4U >> 2) + 1;
          pdVar18 = pdVar8 + lVar20 + -2;
          puVar15 = puVar11 + lVar20 + -2;
          lVar20 = lVar20 + lVar19 * -4;
          do {
            pdVar18[2] = dVar27;
            uVar2 = puVar15[2];
            uVar9 = uVar2 >> 7 & 0x7f;
            uVar13 = uVar2 >> 0xe & 0x7f;
            iVar10 = uVar9 - 0x40;
            iVar12 = (uVar2 & 0x7f) - 0x40;
            iVar14 = uVar13 - 0x40;
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                dVar26 = (double)CONCAT44(uVar33,uVar32) -
                         (double)(int)((uVar2 & 0x7f) - 0x3f) * this->boxx;
                dVar26 = dVar26 * dVar26;
              }
              else {
                dVar26 = 0.0;
              }
            }
            else {
              dVar26 = (double)iVar12 * this->boxx - dVar28;
              dVar26 = dVar26 * dVar26;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar9 - 0x3f) * this->boxy;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxy - dVar5;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar13 - 0x3f) * this->boxz
                ;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar14 * this->boxz - dVar29;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (dVar27 <= dVar26) {
              dVar26 = dVar27;
            }
            pdVar18[1] = dVar26;
            uVar2 = puVar15[1];
            uVar9 = uVar2 >> 7 & 0x7f;
            uVar13 = uVar2 >> 0xe & 0x7f;
            iVar10 = uVar9 - 0x40;
            iVar12 = (uVar2 & 0x7f) - 0x40;
            iVar14 = uVar13 - 0x40;
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                dVar27 = (double)CONCAT44(uVar33,uVar32) -
                         (double)(int)((uVar2 & 0x7f) - 0x3f) * this->boxx;
                dVar27 = dVar27 * dVar27;
              }
              else {
                dVar27 = 0.0;
              }
            }
            else {
              dVar27 = (double)iVar12 * this->boxx - dVar28;
              dVar27 = dVar27 * dVar27;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar9 - 0x3f) * this->boxy;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxy - dVar5;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar13 - 0x3f) * this->boxz
                ;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar14 * this->boxz - dVar29;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            if (dVar26 <= dVar27) {
              dVar27 = dVar26;
            }
            *pdVar18 = dVar27;
            uVar2 = *puVar15;
            uVar9 = uVar2 >> 7 & 0x7f;
            uVar13 = uVar2 >> 0xe & 0x7f;
            iVar10 = uVar9 - 0x40;
            iVar12 = (uVar2 & 0x7f) - 0x40;
            iVar14 = uVar13 - 0x40;
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                dVar26 = (double)CONCAT44(uVar33,uVar32) -
                         (double)(int)((uVar2 & 0x7f) - 0x3f) * this->boxx;
                dVar26 = dVar26 * dVar26;
              }
              else {
                dVar26 = 0.0;
              }
            }
            else {
              dVar26 = (double)iVar12 * this->boxx - dVar28;
              dVar26 = dVar26 * dVar26;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar9 - 0x3f) * this->boxy;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxy - dVar5;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar13 - 0x3f) * this->boxz
                ;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar14 * this->boxz - dVar29;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (dVar27 <= dVar26) {
              dVar26 = dVar27;
            }
            pdVar18[-1] = dVar26;
            uVar2 = puVar15[-1];
            uVar9 = uVar2 >> 7 & 0x7f;
            uVar13 = uVar2 >> 0xe & 0x7f;
            iVar10 = uVar9 - 0x40;
            iVar12 = (uVar2 & 0x7f) - 0x40;
            iVar14 = uVar13 - 0x40;
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                dVar27 = (double)CONCAT44(uVar33,uVar32) -
                         (double)(int)((uVar2 & 0x7f) - 0x3f) * this->boxx;
                dVar27 = dVar27 * dVar27;
              }
              else {
                dVar27 = 0.0;
              }
            }
            else {
              dVar27 = (double)iVar12 * this->boxx - dVar28;
              dVar27 = dVar27 * dVar27;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar9 - 0x3f) * this->boxy;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxy - dVar5;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar13 - 0x3f) * this->boxz
                ;
                dVar27 = dVar27 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar14 * this->boxz - dVar29;
              dVar27 = dVar27 + dVar25 * dVar25;
            }
            pdVar18 = pdVar18 + -4;
            if (dVar26 <= dVar27) {
              dVar27 = dVar26;
            }
            puVar15 = puVar15 + -4;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        if (0 < lVar20) {
          puVar15 = puVar11 + lVar20;
          do {
            pdVar8[lVar20] = dVar27;
            uVar2 = *puVar15;
            uVar13 = uVar2 >> 7 & 0x7f;
            uVar9 = uVar2 >> 0xe & 0x7f;
            iVar14 = uVar13 - 0x40;
            iVar12 = (uVar2 & 0x7f) - 0x40;
            iVar10 = uVar9 - 0x40;
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                dVar26 = (double)CONCAT44(uVar33,uVar32) -
                         (double)(int)((uVar2 & 0x7f) - 0x3f) * this->boxx;
                dVar26 = dVar26 * dVar26;
              }
              else {
                dVar26 = 0.0;
              }
            }
            else {
              dVar26 = (double)iVar12 * this->boxx - dVar28;
              dVar26 = dVar26 * dVar26;
            }
            if (iVar14 < 1) {
              if (iVar14 < 0) {
                dVar25 = dVar6 - (double)(int)(uVar13 - 0x3f) * this->boxy;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar14 * this->boxy - dVar5;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (iVar10 < 1) {
              if (iVar10 < 0) {
                dVar25 = (double)CONCAT44(uVar31,uVar30) - (double)(int)(uVar9 - 0x3f) * this->boxz;
                dVar26 = dVar26 + dVar25 * dVar25;
              }
            }
            else {
              dVar25 = (double)iVar10 * this->boxz - dVar29;
              dVar26 = dVar26 + dVar25 * dVar25;
            }
            if (dVar27 <= dVar26) {
              dVar26 = dVar27;
            }
            dVar27 = dVar26;
            lVar20 = lVar20 + -1;
            puVar15 = puVar15 + -1;
          } while (0 < lVar20);
        }
        *pdVar8 = dVar27;
        puVar11 = puVar11 + 0x40;
        pdVar8 = pdVar8 + 0x40;
        iVar22 = iVar22 + 1;
        uVar32 = SUB84(dVar28,0);
        uVar33 = (undefined4)((ulonglong)dVar28 >> 0x20);
        dVar28 = dVar28 + dVar3;
      } while (iVar22 < 4);
      iVar23 = iVar23 + 1;
      dVar28 = dVar5 + dVar24;
      dVar6 = dVar5;
    } while (iVar23 < 4);
    iVar21 = iVar21 + 1;
    uVar30 = SUB84(dVar29,0);
    uVar31 = (undefined4)((ulonglong)dVar29 >> 0x20);
    dVar29 = dVar29 + dVar4;
    if (3 < iVar21) {
      return this;
    }
  } while( true );
}

// compute_minimum @ 1436b89b0

void __thiscall
voro::voro_base::compute_minimum
          (voro_base *this,double *param_1,double *param_2,double *param_3,double *param_4,
          double *param_5,double *param_6,double *param_7,int param_8,int param_9,int param_10)

{
  double dVar1;
  double dVar2;
  
  if (param_8 < 1) {
    if (param_8 < 0) {
      dVar2 = *param_2 - (double)(param_8 + 1) * this->boxx;
      dVar2 = dVar2 * dVar2;
    }
    else {
      dVar2 = 0.0;
    }
  }
  else {
    dVar2 = (double)param_8 * this->boxx - *param_3;
    dVar2 = dVar2 * dVar2;
  }
  if (param_9 < 1) {
    if (param_9 < 0) {
      dVar1 = *param_4 - (double)(param_9 + 1) * this->boxy;
      dVar2 = dVar2 + dVar1 * dVar1;
    }
  }
  else {
    dVar1 = (double)param_9 * this->boxy - *param_5;
    dVar2 = dVar2 + dVar1 * dVar1;
  }
  if (param_10 < 1) {
    if (param_10 < 0) {
      dVar1 = *param_6 - (double)(param_10 + 1) * this->boxz;
      dVar2 = dVar2 + dVar1 * dVar1;
    }
  }
  else {
    dVar1 = (double)param_10 * this->boxz - *param_7;
    dVar2 = dVar2 + dVar1 * dVar1;
  }
  if (dVar2 < *param_1) {
    *param_1 = dVar2;
  }
  return;
}

// contains_neighbor @ 1436b8aa0

bool __thiscall voro::voro_base::contains_neighbor(voro_base *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return false;
    }
    if (cVar2 == '%') {
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      if (*pcVar1 == 'n') {
        return true;
      }
      if (*pcVar1 == '\0') {
        return false;
      }
    }
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}

