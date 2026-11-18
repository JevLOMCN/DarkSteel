// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 16

// operator== @ 149502b30

bool __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::operator==
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (*(int *)this != param_1->mNumBits) {
    return false;
  }
  if (0 < *(int *)this) {
    iVar2 = (int)(*(longlong *)(this + 0x10) - *(longlong *)(this + 8) >> 2) + -1;
    if (-1 < iVar2) {
      puVar1 = (param_1->mBits)._Mypair._Myval2._Myfirst;
      lVar4 = (longlong)iVar2;
      puVar3 = puVar1 + lVar4;
      do {
        if (*(uint *)((longlong)puVar3 + (*(longlong *)(this + 8) - (longlong)puVar1)) != *puVar3) {
          return false;
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return true;
}

// operator< @ 149503cd0

bool __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::operator<
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  
  iVar4 = param_1->mNumBits;
  if ((*(int *)this < 1) || (iVar4 < 1)) {
    return 0 < iVar4;
  }
  iVar3 = *(int *)this + -1;
  uVar5 = iVar3 >> 0x1f & 0x1f;
  iVar3 = iVar3 + uVar5;
  iVar14 = iVar3 >> 5;
  lVar12 = (longlong)iVar14;
  uVar6 = iVar4 + -1 >> 0x1f & 0x1f;
  iVar4 = iVar4 + -1 + uVar6;
  iVar7 = iVar4 >> 5;
  bVar1 = (((byte)iVar3 & 0x1f) - (char)uVar5) + 1;
  uVar9 = (ulonglong)*(uint *)(*(longlong *)(this + 8) + lVar12 * 4);
  puVar8 = (uint *)(*(longlong *)(this + 8) + lVar12 * 4);
  lVar11 = (longlong)iVar7;
  bVar2 = (((byte)iVar4 & 0x1f) - (char)uVar6) + 1;
  puVar13 = (param_1->mBits)._Mypair._Myval2._Myfirst;
  uVar10 = (ulonglong)puVar13[lVar11];
  puVar13 = puVar13 + lVar11;
  if (-1 < iVar14) {
    do {
      if (lVar11 < 0) break;
      uVar6 = (uint)(uVar9 << (0x20 - bVar1 & 0x3f));
      iVar14 = iVar14 + -1;
      uVar5 = (uint)(uVar10 << (0x20 - bVar2 & 0x3f));
      puVar8 = puVar8 + -1;
      lVar12 = lVar12 + -1;
      if (-1 < lVar12) {
        uVar9 = (ulonglong)*puVar8;
        uVar6 = uVar6 | *puVar8 >> (bVar1 & 0x3f);
      }
      iVar7 = iVar7 + -1;
      puVar13 = puVar13 + -1;
      lVar11 = lVar11 + -1;
      if (-1 < lVar11) {
        uVar10 = (ulonglong)*puVar13;
        uVar5 = uVar5 | *puVar13 >> (bVar2 & 0x3f);
      }
      if (uVar6 < uVar5) {
        return true;
      }
      if (uVar5 < uVar6) {
        return false;
      }
    } while (-1 < lVar12);
  }
  return iVar14 < iVar7;
}

// Add @ 14950a120

void __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::Add
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1,UIntegerAP32 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar10;
  UIntegerAP32 *pUVar11;
  int local_28;
  int local_24 [3];
  ulonglong uVar9;
  
  uVar1 = param_1->mNumBits;
  if (param_1->mNumBits < param_2->mNumBits) {
    uVar1 = param_2->mNumBits;
  }
  UIntegerAP32::SetNumBits((UIntegerAP32 *)this,uVar1 + 1);
  uVar3 = 0;
  *(undefined4 *)(*(longlong *)(this + 0x10) + -4) = 0;
  local_24[0] = (int)((longlong)(param_1->mBits)._Mypair._Myval2._Mylast -
                      (longlong)(param_1->mBits)._Mypair._Myval2._Myfirst >> 2);
  iVar4 = (int)((longlong)(param_2->mBits)._Mypair._Myval2._Mylast -
                (longlong)(param_2->mBits)._Mypair._Myval2._Myfirst >> 2);
  local_28 = iVar4;
  pUVar11 = param_1;
  if (local_24[0] < iVar4) {
    pUVar11 = param_2;
  }
  piVar7 = local_24;
  if (iVar4 < local_24[0]) {
    piVar7 = &local_28;
  }
  if (local_24[0] < iVar4) {
    param_2 = param_1;
  }
  piVar6 = &local_28;
  iVar2 = local_24[0];
  if (iVar4 < local_24[0]) {
    piVar6 = local_24;
    iVar2 = iVar4;
    iVar4 = local_24[0];
  }
  uVar9 = uVar3;
  uVar10 = uVar3;
  if (0 < iVar2) {
    do {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar3 = uVar3 + *(uint *)(uVar10 + (longlong)(param_2->mBits)._Mypair._Myval2._Myfirst) +
              (ulonglong)*(uint *)(uVar10 + (longlong)(pUVar11->mBits)._Mypair._Myval2._Myfirst);
      *(int *)(uVar10 + *(longlong *)(this + 8)) = (int)uVar3;
      uVar3 = uVar3 >> 0x20;
      uVar10 = uVar10 + 4;
    } while ((int)uVar8 < *piVar7);
  }
  uVar8 = (uint)uVar9;
  if (uVar3 == 0) {
    if ((int)uVar8 < iVar4) {
      lVar5 = (longlong)(int)uVar8 * 4;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *(undefined4 *)(lVar5 + *(longlong *)(this + 8)) =
             *(undefined4 *)(lVar5 + (longlong)(pUVar11->mBits)._Mypair._Myval2._Myfirst);
        lVar5 = lVar5 + 4;
      } while ((int)uVar8 < *piVar6);
    }
  }
  else {
    if ((int)uVar8 < iVar4) {
      lVar5 = (longlong)(int)uVar8 * 4;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar3 = uVar3 + *(uint *)(lVar5 + (longlong)(pUVar11->mBits)._Mypair._Myval2._Myfirst);
        *(int *)(lVar5 + *(longlong *)(this + 8)) = (int)uVar3;
        uVar3 = uVar3 >> 0x20;
        lVar5 = lVar5 + 4;
      } while ((int)uVar8 < *piVar6);
      if (uVar3 == 0) goto LAB_14950a28d;
    }
    *(int *)(*(longlong *)(this + 8) + (longlong)(int)uVar8 * 4) = (int)uVar3;
  }
LAB_14950a28d:
  if ((*(uint *)(*(longlong *)(this + 0x10) + -4) >> (uVar1 & 0x1f) & 1) == 0) {
    UIntegerAP32::SetNumBits((UIntegerAP32 *)this,uVar1);
  }
  return;
}

// GetPrefix @ 14951aae0

ulong64 __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::GetPrefix(UIntegerALU32<gte::UIntegerAP32> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)(this + 8);
  uVar6 = *(int *)this + -1 >> 0x1f & 0x1f;
  uVar4 = *(int *)this + -1 + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  iVar7 = (int)uVar4 >> 5;
  lVar10 = (longlong)iVar7;
  iVar1 = iVar5 + 1;
  iVar8 = param_1 - iVar1;
  uVar9 = (ulonglong)*(uint *)(lVar2 + lVar10 * 4) << (0x3fU - (char)iVar5 & 0x3f);
  if ((((0 < iVar8) && (-1 < iVar7 + -1)) &&
      (bVar3 = (byte)iVar1,
      uVar9 = uVar9 | (ulonglong)*(uint *)(lVar2 + -4 + lVar10 * 4) << (0x20 - bVar3 & 0x3f),
      0 < iVar8 + -0x20)) && (-1 < iVar7 + -2)) {
    return *(uint *)(lVar2 + -8 + lVar10 * 4) >> (bVar3 & 0x3f) | uVar9;
  }
  return uVar9;
}

// Mul @ 14951f7e0

void __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::Mul
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1,UIntegerAP32 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  UIntegerAP32 local_68;
  
  uVar6 = param_1->mNumBits + param_2->mNumBits;
  UIntegerAP32::SetNumBits((UIntegerAP32 *)this,uVar6);
  UIntegerAP32::UIntegerAP32(&local_68,uVar6);
  puVar2 = (param_1->mBits)._Mypair._Myval2._Myfirst;
  uVar5 = 0;
  lVar4 = *(longlong *)(this + 0x10);
  lVar10 = *(longlong *)(this + 8);
  puVar3 = (param_1->mBits)._Mypair._Myval2._Mylast;
  uVar1 = *puVar2;
  uVar8 = (longlong)(param_2->mBits)._Mypair._Myval2._Mylast -
          (longlong)(param_2->mBits)._Mypair._Myval2._Myfirst >> 2;
  iVar7 = (int)uVar8;
  lVar18 = (longlong)iVar7;
  iVar13 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar5 = uVar5 + (ulonglong)(param_2->mBits)._Mypair._Myval2._Myfirst[lVar11] *
                      (ulonglong)uVar1;
      *(int *)(*(longlong *)(this + 8) + lVar11 * 4) = (int)uVar5;
      lVar11 = lVar11 + 1;
      uVar5 = uVar5 >> 0x20;
      iVar13 = iVar7;
    } while (lVar11 < lVar18);
  }
  iVar16 = (int)(lVar4 - lVar10 >> 2);
  if (iVar13 < iVar16) {
    *(int *)(*(longlong *)(this + 8) + (longlong)iVar13 * 4) = (int)uVar5;
  }
  lVar4 = (longlong)(int)((longlong)puVar3 - (longlong)puVar2 >> 2);
  if (1 < lVar4) {
    lVar10 = 1;
    lVar11 = -4;
    do {
      lVar17 = lVar10 * 4;
      uVar1 = (param_1->mBits)._Mypair._Myval2._Myfirst[lVar10];
      uVar5 = 0;
      lVar15 = lVar17;
      lVar12 = lVar10;
      lVar14 = lVar18;
      if (0 < lVar18) {
        do {
          uVar5 = uVar5 + (ulonglong)
                          *(uint *)(lVar11 + lVar15 +
                                   (longlong)(param_2->mBits)._Mypair._Myval2._Myfirst) *
                          (ulonglong)uVar1;
          local_68.mBits._Mypair._Myval2._Myfirst[lVar12] = (uint)uVar5;
          lVar12 = lVar12 + 1;
          uVar5 = uVar5 >> 0x20;
          lVar14 = lVar14 + -1;
          lVar15 = lVar15 + 4;
        } while (lVar14 != 0);
      }
      if (lVar12 < iVar16) {
        local_68.mBits._Mypair._Myval2._Myfirst[lVar12] = (uint)uVar5;
      }
      uVar5 = 0;
      lVar15 = lVar10;
      if (0 < iVar7) {
        uVar9 = uVar8 & 0xffffffff;
        do {
          lVar17 = lVar17 + 4;
          uVar5 = uVar5 + local_68.mBits._Mypair._Myval2._Myfirst[lVar15] +
                  (ulonglong)*(uint *)(*(longlong *)(this + 8) + -4 + lVar17);
          *(int *)(*(longlong *)(this + 8) + lVar15 * 4) = (int)uVar5;
          lVar15 = lVar15 + 1;
          uVar5 = uVar5 >> 0x20;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (lVar15 < iVar16) {
        *(uint *)(*(longlong *)(this + 8) + lVar15 * 4) =
             local_68.mBits._Mypair._Myval2._Myfirst[lVar15] + (int)uVar5;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + -4;
    } while (lVar10 < lVar4);
  }
  if ((*(uint *)(*(longlong *)(this + 0x10) + -4) >> (uVar6 - 1 & 0x1f) & 1) == 0) {
    UIntegerAP32::SetNumBits((UIntegerAP32 *)this,uVar6 - 1);
  }
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy(&local_68.mBits);
  return;
}

// ShiftLeft @ 149523e40

void __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::ShiftLeft
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1,int param_2)

{
  uint *puVar1;
  UIntegerALU32<gte::UIntegerAP32> *_Dst;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  UIntegerALU32<gte::UIntegerAP32> *pUVar13;
  ulonglong uVar14;
  
  UIntegerAP32::SetNumBits((UIntegerAP32 *)this,param_1->mNumBits + param_2);
  uVar12 = 0;
  pUVar13 = this + 8;
  uVar9 = param_2 >> 0x1f & 0x1f;
  uVar11 = 0;
  uVar3 = param_2 + uVar9;
  iVar4 = (uVar3 & 0x1f) - uVar9;
  uVar3 = (int)uVar3 >> 5;
  uVar9 = uVar11;
  if ((0 < (int)uVar3) && (3 < uVar3)) {
    _Dst = *(UIntegerALU32<gte::UIntegerAP32> **)pUVar13;
    if ((pUVar13 < _Dst) || (_Dst + (longlong)(int)(uVar3 - 1) * 4 < pUVar13)) {
      uVar5 = uVar3 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      uVar14 = uVar12;
      do {
        uVar9 = (int)uVar14 + 4;
        uVar14 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)(uVar3 - uVar5));
      iVar6 = (uVar3 - uVar5) + 3;
      memset(_Dst,0,(longlong)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) << 4);
    }
  }
  lVar10 = (longlong)(int)uVar3;
  for (lVar8 = (longlong)(int)uVar9; lVar8 < lVar10; lVar8 = lVar8 + 1) {
    *(undefined4 *)(*(longlong *)pUVar13 + lVar8 * 4) = 0;
  }
  iVar6 = (int)((longlong)(param_1->mBits)._Mypair._Myval2._Mylast -
                (longlong)(param_1->mBits)._Mypair._Myval2._Myfirst >> 2);
  if (iVar4 < 1) {
    if (0 < iVar6) {
      lVar8 = lVar10 * 4;
      do {
        puVar1 = (param_1->mBits)._Mypair._Myval2._Myfirst + uVar12;
        uVar12 = uVar12 + 1;
        *(uint *)(lVar8 + *(longlong *)pUVar13) = *puVar1;
        lVar8 = lVar8 + 4;
      } while ((longlong)uVar12 < (longlong)iVar6);
    }
  }
  else {
    bVar2 = (byte)iVar4;
    bVar7 = 0x20 - bVar2;
    if (0 < iVar6) {
      uVar3 = uVar3 + iVar6;
      uVar14 = uVar12;
      lVar8 = lVar10 * 4;
      do {
        uVar11 = (param_1->mBits)._Mypair._Myval2._Myfirst[uVar14];
        uVar14 = uVar14 + 1;
        uVar9 = (uint)uVar12;
        uVar12 = (ulonglong)uVar11;
        *(uint *)(lVar8 + *(longlong *)pUVar13) = uVar11 << (bVar2 & 0x1f) | uVar9 >> (bVar7 & 0x1f)
        ;
        lVar8 = lVar8 + 4;
      } while ((longlong)uVar14 < (longlong)iVar6);
    }
    if ((int)uVar3 < (int)(*(longlong *)(this + 0x10) - *(longlong *)pUVar13 >> 2)) {
      *(uint *)(*(longlong *)pUVar13 + (longlong)(int)uVar3 * 4) = uVar11 >> (bVar7 & 0x1f);
    }
  }
  return;
}

// ShiftRightToOdd @ 149523fe0

int __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::ShiftRightToOdd
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  puVar8 = (param_1->mBits)._Mypair._Myval2._Myfirst;
  iVar13 = (int)((longlong)(param_1->mBits)._Mypair._Myval2._Mylast - (longlong)puVar8 >> 2);
  lVar15 = (longlong)iVar13;
  iVar4 = GetLeadingBit(puVar8[lVar15 + -1]);
  uVar11 = 0;
  iVar6 = -1;
  uVar10 = 0;
  if (0 < iVar13) {
    puVar8 = (param_1->mBits)._Mypair._Myval2._Myfirst;
    uVar7 = uVar11;
    uVar12 = uVar11;
    do {
      if (*puVar8 != 0) {
        iVar6 = GetTrailingBit(*puVar8);
        iVar6 = (int)uVar12 * 0x20 + iVar6;
        break;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((longlong)uVar7 < lVar15);
  }
  UIntegerAP32::SetNumBits((UIntegerAP32 *)this,((iVar13 * 0x20 + iVar4) - iVar6) - 0x1f);
  uVar9 = iVar6 >> 0x1f & 0x1f;
  uVar5 = iVar6 + uVar9;
  iVar6 = (uVar5 & 0x1f) - uVar9;
  iVar4 = (int)uVar5 >> 5;
  iVar13 = (int)(*(longlong *)(this + 0x10) - *(longlong *)(this + 8) >> 2);
  if (iVar6 < 1) {
    if (0 < iVar13) {
      do {
        *(uint *)(*(longlong *)(this + 8) + uVar11 * 4) =
             (param_1->mBits)._Mypair._Myval2._Myfirst[(longlong)iVar4 + uVar11];
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)iVar13);
    }
  }
  else {
    bVar3 = (byte)iVar6;
    lVar14 = (longlong)iVar4 + 1;
    uVar5 = (param_1->mBits)._Mypair._Myval2._Myfirst[iVar4];
    if (lVar14 < lVar15) {
      lVar2 = lVar14 * -4;
      uVar9 = uVar5;
      do {
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar5 = (param_1->mBits)._Mypair._Myval2._Myfirst[lVar14];
        lVar1 = lVar14 * 4;
        lVar14 = lVar14 + 1;
        *(uint *)(lVar2 + lVar1 + *(longlong *)(this + 8)) =
             uVar5 << (0x20 - bVar3 & 0x1f) | uVar9 >> (bVar3 & 0x1f);
        uVar9 = uVar5;
      } while (lVar14 < lVar15);
    }
    if ((int)uVar10 < iVar13) {
      *(uint *)(*(longlong *)(this + 8) + (longlong)(int)uVar10 * 4) = uVar5 >> (bVar3 & 0x1f);
    }
  }
  return iVar6 + iVar4 * 0x20;
}

// Sub @ 149527e70

void __thiscall
gte::UIntegerALU32<gte::UIntegerAP32>::Sub
          (UIntegerALU32<gte::UIntegerAP32> *this,UIntegerAP32 *param_1,UIntegerAP32 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  UIntegerAP32 local_58;
  UIntegerAP32 local_38;
  
  puVar1 = (param_1->mBits)._Mypair._Myval2._Mylast;
  puVar2 = (param_1->mBits)._Mypair._Myval2._Myfirst;
  puVar3 = (param_2->mBits)._Mypair._Myval2._Mylast;
  puVar4 = (param_2->mBits)._Mypair._Myval2._Myfirst;
  iVar5 = param_1->mNumBits;
  UIntegerAP32::UIntegerAP32(&local_58,iVar5);
  uVar11 = 0;
  iVar10 = (int)((longlong)puVar3 - (longlong)puVar4 >> 2);
  uVar7 = uVar11;
  iVar14 = 0;
  if (0 < iVar10) {
    do {
      local_58.mBits._Mypair._Myval2._Myfirst[uVar7] =
           ~(param_2->mBits)._Mypair._Myval2._Myfirst[uVar7];
      uVar7 = uVar7 + 1;
      iVar14 = iVar10;
    } while ((longlong)uVar7 < (longlong)iVar10);
  }
  iVar10 = (int)((longlong)puVar1 - (longlong)puVar2 >> 2);
  lVar12 = (longlong)iVar10;
  for (lVar6 = (longlong)iVar14; lVar6 < lVar12; lVar6 = lVar6 + 1) {
    local_58.mBits._Mypair._Myval2._Myfirst[lVar6] = 0xffffffff;
  }
  uVar8 = 1;
  uVar7 = uVar11;
  if (0 < iVar10) {
    do {
      uVar13 = uVar7 + 1;
      uVar8 = uVar8 + local_58.mBits._Mypair._Myval2._Myfirst[uVar7];
      local_58.mBits._Mypair._Myval2._Myfirst[uVar7] = (uint)uVar8;
      uVar8 = uVar8 >> 0x20;
      uVar7 = uVar13;
    } while ((longlong)uVar13 < lVar12);
  }
  UIntegerAP32::SetNumBits((UIntegerAP32 *)this,iVar5 + 1);
  *(undefined4 *)(*(longlong *)(this + 0x10) + -4) = 0;
  uVar7 = uVar11;
  uVar8 = uVar11;
  if (0 < iVar10) {
    do {
      uVar11 = uVar11 + *(uint *)((longlong)(param_1->mBits)._Mypair._Myval2._Myfirst + uVar8) +
               (ulonglong)local_58.mBits._Mypair._Myval2._Myfirst[uVar7];
      *(int *)(*(longlong *)(this + 8) + uVar7 * 4) = (int)uVar11;
      uVar7 = uVar7 + 1;
      uVar11 = uVar11 >> 0x20;
      uVar8 = uVar8 + 4;
    } while ((longlong)uVar7 < lVar12);
  }
  iVar10 = iVar10 + -1;
  if (-1 < iVar10) {
    lVar6 = (longlong)iVar10;
    piVar9 = (int *)(*(longlong *)(this + 8) + lVar6 * 4);
    do {
      if (*piVar9 != 0) break;
      iVar10 = iVar10 + -1;
      piVar9 = piVar9 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    if (-1 < iVar10) {
      iVar5 = GetLeadingBit(*(uint *)(*(longlong *)(this + 8) + (longlong)iVar10 * 4));
      UIntegerAP32::SetNumBits((UIntegerAP32 *)this,iVar5 + 1 + iVar10 * 0x20);
      goto LAB_149527ff9;
    }
  }
  UIntegerAP32::UIntegerAP32(&local_38,0);
  UIntegerAP32::operator=((UIntegerAP32 *)this,&local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy(&local_38.mBits);
LAB_149527ff9:
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy(&local_58.mBits);
  return;
}

// operator== @ 1495abcd0

bool __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::operator==
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1)

{
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar1;
  longlong lVar2;
  
  if (*(int *)this != param_1->mNumBits) {
    return false;
  }
  if (0 < *(int *)this) {
    lVar2 = (longlong)(*(int *)(this + 4) + -1);
    if (-1 < *(int *)(this + 4) + -1) {
      pUVar1 = this + 8 + lVar2 * 4;
      do {
        if (*(int *)pUVar1 != *(int *)(pUVar1 + (longlong)param_1 + (8 - (longlong)(this + 8)))) {
          return false;
        }
        pUVar1 = pUVar1 + -4;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
  }
  return true;
}

// operator< @ 1495ad170

bool __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::operator<
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar5 = param_1->mNumBits;
  if ((*(int *)this < 1) || (iVar5 < 1)) {
    return 0 < iVar5;
  }
  iVar4 = *(int *)this + -1;
  uVar6 = iVar4 >> 0x1f & 0x1f;
  iVar4 = iVar4 + uVar6;
  iVar8 = iVar4 >> 5;
  lVar12 = (longlong)iVar8;
  uVar9 = (ulonglong)*(uint *)(this + lVar12 * 4 + 8);
  bVar2 = (((byte)iVar4 & 0x1f) - (char)uVar6) + 1;
  uVar6 = iVar5 + -1 >> 0x1f & 0x1f;
  iVar5 = iVar5 + -1 + uVar6;
  iVar4 = iVar5 >> 5;
  bVar3 = (((byte)iVar5 & 0x1f) - (char)uVar6) + 1;
  uVar7 = (ulonglong)(param_1->mBits)._Elems[iVar4];
  if (-1 < iVar8) {
    lVar11 = (longlong)iVar4;
    do {
      if (lVar11 < 0) break;
      uVar10 = (uint)(uVar9 << (0x20 - bVar2 & 0x3f));
      iVar8 = iVar8 + -1;
      uVar6 = (uint)(uVar7 << (0x20 - bVar3 & 0x3f));
      lVar12 = lVar12 + -1;
      if (-1 < lVar12) {
        uVar9 = (ulonglong)*(uint *)(this + lVar12 * 4 + 8);
        uVar10 = uVar10 | *(uint *)(this + lVar12 * 4 + 8) >> (bVar2 & 0x3f);
      }
      iVar4 = iVar4 + -1;
      if (-1 < lVar11 + -1) {
        uVar1 = (param_1->mBits)._Elems[lVar11 + -1];
        uVar7 = (ulonglong)uVar1;
        uVar6 = uVar6 | uVar1 >> (bVar3 & 0x3f);
      }
      if (uVar10 < uVar6) {
        return true;
      }
      if (uVar6 < uVar10) {
        return false;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar12);
  }
  return iVar8 < iVar4;
}

// Add @ 1495b7f00

void __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::Add
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1,
          UIntegerFP32<100> *param_2)

{
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar7;
  int *piVar8;
  array<unsigned_int,100> *paVar9;
  UIntegerFP32<100> *pUVar10;
  array<unsigned_int,100> *paVar11;
  int *piVar12;
  int local_28;
  int local_24 [3];
  
  piVar8 = &local_28;
  uVar3 = param_1->mNumBits;
  if (param_1->mNumBits < param_2->mNumBits) {
    uVar3 = param_2->mNumBits;
  }
  pUVar1 = this + 8;
  *(uint *)this = uVar3 + 1;
  *(uint *)(this + 4) = (uVar3 >> 5) + 1;
  iVar5 = 0;
  uVar6 = 0;
  *(undefined4 *)(this + (ulonglong)(uVar3 >> 5) * 4 + 8) = 0;
  local_28 = param_2->mSize;
  local_24[0] = param_1->mSize;
  pUVar10 = param_1;
  if (local_24[0] < local_28) {
    pUVar10 = param_2;
  }
  paVar11 = &pUVar10->mBits;
  if (local_24[0] < local_28) {
    param_2 = param_1;
  }
  piVar12 = local_24;
  iVar4 = local_28;
  if (local_24[0] <= local_28) {
    piVar12 = &local_28;
    iVar4 = local_24[0];
    local_24[0] = local_28;
    piVar8 = local_24;
  }
  if (0 < iVar4) {
    paVar9 = paVar11;
    do {
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 + *(uint *)((longlong)paVar9 + (longlong)param_2 + (8 - (longlong)paVar11)) +
              (ulonglong)paVar9->_Elems[0];
      *(int *)((longlong)paVar9 + ((longlong)pUVar1 - (longlong)paVar11)) = (int)uVar6;
      uVar6 = uVar6 >> 0x20;
      paVar9 = (array<unsigned_int,100> *)(paVar9->_Elems + 1);
    } while (iVar5 < *piVar8);
  }
  if (uVar6 == 0) {
    if (iVar5 < local_24[0]) {
      pUVar7 = pUVar1 + (longlong)iVar5 * 4;
      do {
        iVar5 = iVar5 + 1;
        *(undefined4 *)pUVar7 = *(undefined4 *)(pUVar7 + ((longlong)paVar11 - (longlong)pUVar1));
        pUVar7 = pUVar7 + 4;
      } while (iVar5 < *piVar12);
    }
  }
  else {
    if (iVar5 < local_24[0]) {
      pUVar7 = pUVar1 + (longlong)iVar5 * 4;
      do {
        uVar2 = *(uint *)(pUVar7 + ((longlong)paVar11 - (longlong)pUVar1));
        iVar5 = iVar5 + 1;
        *(int *)pUVar7 = (int)(uVar6 + uVar2);
        uVar6 = uVar6 + uVar2 >> 0x20;
        pUVar7 = pUVar7 + 4;
      } while (iVar5 < *piVar12);
      if (uVar6 == 0) goto LAB_1495b806d;
    }
    *(int *)(pUVar1 + (longlong)iVar5 * 4) = (int)uVar6;
  }
LAB_1495b806d:
  if ((*(uint *)(this + (longlong)*(int *)(this + 4) * 4 + 4) >> (uVar3 & 0x1f) & 1) == 0) {
    *(uint *)this = uVar3;
    *(uint *)(this + 4) = (uVar3 - 1 >> 5) + 1;
  }
  return;
}

// GetPrefix @ 1495c0210

ulong64 __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::GetPrefix
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  longlong lVar9;
  
  uVar5 = *(int *)this + -1 >> 0x1f & 0x1f;
  uVar3 = *(int *)this + -1 + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  iVar6 = (int)uVar3 >> 5;
  lVar9 = (longlong)iVar6;
  iVar1 = iVar4 + 1;
  iVar7 = param_1 - iVar1;
  uVar8 = (ulonglong)*(uint *)(this + lVar9 * 4 + 8) << (0x3fU - (char)iVar4 & 0x3f);
  if ((((0 < iVar7) && (-1 < iVar6 + -1)) &&
      (bVar2 = (byte)iVar1,
      uVar8 = uVar8 | (ulonglong)*(uint *)(this + lVar9 * 4 + 4) << (0x20 - bVar2 & 0x3f),
      0 < iVar7 + -0x20)) && (-1 < iVar6 + -2)) {
    return *(uint *)(this + lVar9 * 4) >> (bVar2 & 0x3f) | uVar8;
  }
  return uVar8;
}

// Mul @ 1495c4f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::Mul
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1,
          UIntegerFP32<100> *param_2)

{
  uint uVar1;
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar9;
  longlong lVar10;
  longlong lVar11;
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_1f8 [36];
  uint local_1d4;
  UIntegerALU32<gte::UIntegerFP32<100>_> local_1d0 [408];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)local_1f8;
  iVar14 = param_1->mNumBits + param_2->mNumBits;
  *(int *)this = iVar14;
  uVar1 = iVar14 - 1;
  pUVar2 = this + 8;
  uVar8 = (uVar1 >> 5) + 1;
  *(uint *)(this + 4) = uVar8;
  uVar3 = param_2->mSize;
  iVar4 = param_1->mSize;
  uVar6 = 0;
  uVar5 = (param_1->mBits)._Elems[0];
  uVar15 = 0;
  if (0 < (int)uVar3) {
    pUVar9 = pUVar2;
    lVar10 = (longlong)(int)uVar3;
    do {
      uVar6 = uVar6 + (ulonglong)*(uint *)(pUVar9 + (longlong)param_2 + (8 - (longlong)pUVar2)) *
                      (ulonglong)uVar5;
      *(int *)pUVar9 = (int)uVar6;
      uVar6 = uVar6 >> 0x20;
      lVar10 = lVar10 + -1;
      pUVar9 = pUVar9 + 4;
      uVar15 = uVar3;
    } while (lVar10 != 0);
  }
  if ((int)uVar15 < (int)uVar8) {
    *(int *)(pUVar2 + (longlong)(int)uVar15 * 4) = (int)uVar6;
  }
  if (1 < (longlong)iVar4) {
    pUVar9 = this + 0xc;
    lVar16 = 1;
    lVar10 = (longlong)param_2 + (8 - (longlong)local_1d0);
    do {
      uVar5 = *(uint *)(pUVar9 + (longlong)param_1 + (8 - (longlong)pUVar2));
      uVar6 = 0;
      lVar7 = lVar16;
      lVar11 = (longlong)(int)uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar6 = uVar6 + (ulonglong)*(uint *)((longlong)&local_1d4 + lVar7 * 4 + lVar10) *
                          (ulonglong)uVar5;
          *(int *)(local_1d0 + lVar7 * 4) = (int)uVar6;
          lVar7 = lVar7 + 1;
          uVar6 = uVar6 >> 0x20;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar7 < (longlong)(ulonglong)uVar8) {
        *(int *)(local_1d0 + lVar7 * 4) = (int)uVar6;
      }
      uVar6 = 0;
      lVar7 = lVar16;
      if (0 < (int)uVar3) {
        lVar7 = (ulonglong)uVar3 + lVar16;
        pUVar12 = pUVar9;
        uVar13 = (ulonglong)uVar3;
        do {
          uVar6 = uVar6 + *(uint *)(pUVar12 + (longlong)(local_1d0 + -(longlong)pUVar2)) +
                  (ulonglong)*(uint *)pUVar12;
          *(uint *)pUVar12 = (uint)uVar6;
          uVar6 = uVar6 >> 0x20;
          uVar13 = uVar13 - 1;
          pUVar12 = pUVar12 + 4;
        } while (uVar13 != 0);
      }
      if (lVar7 < (longlong)(ulonglong)uVar8) {
        *(int *)(pUVar2 + lVar7 * 4) = *(int *)(local_1d0 + lVar7 * 4) + (int)uVar6;
      }
      lVar16 = lVar16 + 1;
      pUVar9 = pUVar9 + 4;
      lVar10 = lVar10 + -4;
    } while (lVar16 < iVar4);
  }
  if ((*(uint *)(this + (longlong)*(int *)(this + 4) * 4 + 4) >> (uVar1 & 0x1f) & 1) == 0) {
    *(uint *)this = uVar1;
    *(uint *)(this + 4) = (iVar14 - 2U >> 5) + 1;
  }
  return;
}

// ShiftLeft @ 1495c9df0

void __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::ShiftLeft
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1,int param_2)

{
  UIntegerALU32<gte::UIntegerFP32<100>_> *_Dst;
  int iVar1;
  longlong lVar2;
  byte bVar3;
  array<unsigned_int,100> *paVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  paVar4 = &param_1->mBits;
  _Dst = this + 8;
  iVar7 = param_1->mNumBits + param_2;
  *(int *)this = iVar7;
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  *(uint *)(this + 4) = (iVar7 - 1U >> 5) + 1;
  lVar5 = (longlong)iVar1;
  if (0 < iVar1) {
    memset(_Dst,0,lVar5 << 2);
  }
  uVar6 = param_2 & 0x8000001f;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
  }
  iVar7 = param_1->mSize;
  lVar2 = (longlong)iVar7;
  if ((int)uVar6 < 1) {
    if (0 < iVar7) {
      lVar5 = lVar5 * 4 - (longlong)paVar4;
      do {
        *(uint *)(_Dst + lVar5 + (longlong)paVar4) = paVar4->_Elems[0];
        paVar4 = (array<unsigned_int,100> *)(paVar4->_Elems + 1);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar9 = 0;
    bVar3 = 0x20 - (byte)uVar6;
    if (0 < iVar7) {
      lVar5 = lVar5 * 4 - (longlong)paVar4;
      iVar1 = iVar1 + iVar7;
      uVar8 = uVar9;
      do {
        uVar9 = paVar4->_Elems[0];
        paVar4 = (array<unsigned_int,100> *)(paVar4->_Elems + 1);
        *(uint *)(_Dst + lVar5 + -4 + (longlong)paVar4) =
             uVar9 << ((byte)uVar6 & 0x1f) | uVar8 >> (bVar3 & 0x1f);
        lVar2 = lVar2 + -1;
        uVar8 = uVar9;
      } while (lVar2 != 0);
    }
    if (iVar1 < *(int *)(this + 4)) {
      *(uint *)(_Dst + (longlong)iVar1 * 4) = uVar9 >> (bVar3 & 0x1f);
    }
  }
  return;
}

// ShiftRightToOdd @ 1495c9f10

int __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::ShiftRightToOdd
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1)

{
  array<unsigned_int,100> *paVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UIntegerALU32<gte::UIntegerFP32<100>_> *pUVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  
  iVar10 = param_1->mSize;
  lVar12 = (longlong)iVar10;
  paVar1 = &param_1->mBits;
  iVar13 = 0;
  iVar9 = -1;
  uVar3 = paVar1->_Elems[iVar10 + -1] >> 1 | paVar1->_Elems[iVar10 + -1];
  iVar7 = 0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  iVar15 = gsLeadingBitTable[(uVar3 >> 0x10 | uVar3) * 0x7c4acdd >> 0x1b] + (iVar10 + -1) * 0x20;
  if (iVar10 < 1) {
LAB_1495ca020:
    *(uint *)this = (iVar15 - iVar9) + 1;
    uVar3 = ((uint)(iVar15 - iVar9) >> 5) + 1;
    *(uint *)(this + 4) = uVar3;
    uVar8 = iVar9 >> 0x1f & 0x1f;
    uVar4 = iVar9 + uVar8;
    iVar9 = (uVar4 & 0x1f) - uVar8;
    iVar10 = (int)uVar4 >> 5;
    if (0 < iVar9) {
      bVar2 = (byte)iVar9;
      uVar4 = paVar1->_Elems[iVar10];
      lVar5 = (longlong)(iVar10 + 1);
      if (lVar5 < lVar12) {
        puVar14 = paVar1->_Elems + lVar5;
        lVar12 = lVar12 - lVar5;
        iVar13 = (int)lVar12;
        uVar8 = uVar4;
        do {
          uVar4 = *puVar14;
          puVar14 = puVar14 + 1;
          *(uint *)(this + (lVar5 * -4 - (longlong)paVar1) + 4 + (longlong)puVar14) =
               uVar4 << (0x20 - bVar2 & 0x1f) | uVar8 >> (bVar2 & 0x1f);
          lVar12 = lVar12 + -1;
          uVar8 = uVar4;
        } while (lVar12 != 0);
      }
      if (iVar13 < (int)uVar3) {
        *(uint *)(this + (longlong)iVar13 * 4 + 8) = uVar4 >> (bVar2 & 0x1f);
        return iVar9 + iVar10 * 0x20;
      }
      goto LAB_1495c9ff1;
    }
  }
  else {
    lVar5 = 0;
    do {
      uVar3 = paVar1->_Elems[lVar5];
      if (uVar3 != 0) {
        iVar9 = iVar7 * 0x20 + gsTrailingBitTable[(-uVar3 & uVar3) * 0x77cb531 >> 0x1b];
        goto LAB_1495ca020;
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar12);
    iVar10 = 0;
    *(int *)this = iVar15 + 2;
    uVar3 = (iVar15 + 1U >> 5) + 1;
    *(uint *)(this + 4) = uVar3;
  }
  uVar6 = (ulonglong)uVar3;
  pUVar11 = this + 8;
  if (uVar3 != 0) {
    lVar12 = (longlong)iVar10 * 4 - (longlong)pUVar11;
    do {
      *(undefined4 *)pUVar11 = *(undefined4 *)(pUVar11 + lVar12 + (longlong)paVar1);
      pUVar11 = pUVar11 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
LAB_1495c9ff1:
  return iVar9 + iVar10 * 0x20;
}

// Sub @ 1495ca190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
gte::UIntegerALU32<gte::UIntegerFP32<100>_>::Sub
          (UIntegerALU32<gte::UIntegerFP32<100>_> *this,UIntegerFP32<100> *param_1,
          UIntegerFP32<100> *param_2)

{
  array<unsigned_int,100> *paVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  array<unsigned_int,100> *paVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_388 [32];
  uint local_368;
  int local_364;
  uint local_360 [4];
  uint local_350 [100];
  undefined4 local_1c0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_388;
  uVar13 = param_2->mSize;
  paVar20 = &param_2->mBits;
  paVar1 = &param_1->mBits;
  uVar4 = param_1->mNumBits;
  iVar19 = param_1->mSize;
  lVar21 = (longlong)iVar19;
  uVar18 = 0;
  local_364 = ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5) + 1;
  if (((0 < (int)uVar13) && (1 < uVar13)) &&
     ((paVar20->_Elems + (int)(uVar13 - 1) < local_360 || (local_360 + (int)(uVar13 - 1) < paVar20))
     )) {
    if (0xf < uVar13) {
      uVar15 = uVar13 & 0x8000000f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
      }
      lVar22 = 0;
      lVar16 = (longlong)paVar20 - (longlong)local_360;
      puVar14 = local_350;
      do {
        puVar3 = (uint *)(lVar16 + -0x10 + (longlong)puVar14);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar18 = uVar18 + 0x10;
        lVar22 = lVar22 + 0x10;
        puVar2 = (uint *)(lVar16 + (longlong)puVar14);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar2 = puVar14 + 0x10;
        puVar14[-4] = ~*puVar3 & ___xmm_ffffffffffffffffffffffffffffffff;
        puVar14[-3] = ~uVar5 & _UNK_15060db24;
        puVar14[-2] = ~uVar6 & _UNK_15060db28;
        puVar14[-1] = ~uVar7 & _UNK_15060db2c;
        puVar3 = (uint *)(lVar16 + -0x30 + (longlong)puVar2);
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar12 = puVar3[3];
        *puVar14 = ~uVar8 & ___xmm_ffffffffffffffffffffffffffffffff;
        puVar14[1] = ~uVar9 & _UNK_15060db24;
        puVar14[2] = ~uVar10 & _UNK_15060db28;
        puVar14[3] = ~uVar11 & _UNK_15060db2c;
        puVar3 = (uint *)(lVar16 + -0x20 + (longlong)puVar2);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        puVar14[4] = ~uVar5 & ___xmm_ffffffffffffffffffffffffffffffff;
        puVar14[5] = ~uVar6 & _UNK_15060db24;
        puVar14[6] = ~uVar7 & _UNK_15060db28;
        puVar14[7] = ~uVar12 & _UNK_15060db2c;
        puVar14[8] = ~uVar8 & ___xmm_ffffffffffffffffffffffffffffffff;
        puVar14[9] = ~uVar9 & _UNK_15060db24;
        puVar14[10] = ~uVar10 & _UNK_15060db28;
        puVar14[0xb] = ~uVar11 & _UNK_15060db2c;
        puVar14 = puVar2;
      } while (lVar22 < (int)(uVar13 - uVar15));
      if (((byte)uVar13 & 0xf) < 2) goto LAB_1495ca2fd;
    }
    lVar16 = (longlong)(int)uVar18;
    uVar15 = uVar13 & 0x80000001;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
    }
    do {
      uVar18 = uVar18 + 2;
      *(ulonglong *)(local_360 + lVar16) =
           CONCAT44(~(uint)((ulonglong)*(undefined8 *)(paVar20->_Elems + lVar16) >> 0x20) &
                    _UNK_15060db24,
                    ~(uint)*(undefined8 *)(paVar20->_Elems + lVar16) &
                    ___xmm_ffffffffffffffffffffffffffffffff);
      lVar16 = lVar16 + 2;
    } while (lVar16 < (int)(uVar13 - uVar15));
  }
LAB_1495ca2fd:
  lVar16 = (longlong)(int)uVar18;
  for (; lVar16 < (int)uVar13; lVar16 = lVar16 + 1) {
    local_360[lVar16] = ~paVar20->_Elems[lVar16];
    uVar18 = uVar13;
  }
  if ((int)uVar18 < iVar19) {
    local_368 = uVar4;
    memset(local_360 + (int)uVar18,-1,(longlong)(int)(iVar19 - uVar18) << 2);
  }
  uVar17 = 1;
  if (0 < iVar19) {
    lVar16 = 0;
    do {
      uVar13 = local_360[lVar16];
      local_360[lVar16] = (uint)(uVar17 + uVar13);
      lVar16 = lVar16 + 1;
      uVar17 = uVar17 + uVar13 >> 0x20;
    } while (lVar16 < lVar21);
  }
  uVar17 = 0;
  *(uint *)this = uVar4 + 1;
  *(uint *)(this + 4) = (uVar4 >> 5) + 1;
  *(undefined4 *)(this + (ulonglong)(uVar4 >> 5) * 4 + 8) = 0;
  if (0 < iVar19) {
    paVar20 = paVar1;
    do {
      puVar2 = paVar20->_Elems;
      puVar14 = (uint *)(((longlong)local_360 - (longlong)paVar1) + (longlong)paVar20);
      paVar20 = (array<unsigned_int,100> *)(paVar20->_Elems + 1);
      uVar17 = uVar17 + *puVar14 + (ulonglong)*puVar2;
      *(int *)(this + (4 - (longlong)paVar1) + (longlong)paVar20) = (int)uVar17;
      uVar17 = uVar17 >> 0x20;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  iVar19 = iVar19 + -1;
  lVar21 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      if (*(int *)(this + lVar21 * 4 + 8) != 0) break;
      iVar19 = iVar19 + -1;
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
    if (-1 < iVar19) {
      uVar13 = *(uint *)(this + (longlong)iVar19 * 4 + 8) >> 1 |
               *(uint *)(this + (longlong)iVar19 * 4 + 8);
      uVar13 = uVar13 >> 2 | uVar13;
      uVar13 = uVar13 >> 4 | uVar13;
      uVar13 = uVar13 >> 8 | uVar13;
      uVar13 = gsLeadingBitTable[(uVar13 >> 0x10 | uVar13) * 0x7c4acdd >> 0x1b] + iVar19 * 0x20;
      *(uint *)this = uVar13 + 1;
      *(uint *)(this + 4) = (uVar13 >> 5) + 1;
      return;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = local_1c0;
  return;
}

