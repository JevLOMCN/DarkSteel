// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FFloat3Packed @ 1417a13c0

FFloat3Packed * __thiscall FFloat3Packed::FFloat3Packed(FFloat3Packed *this,FLinearColor *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 4);
  uVar3 = *(uint *)&param_1->field0_0x0;
  uVar5 = 0x7c0;
  uVar1 = *(uint *)((longlong)&param_1->field0_0x0 + 8);
  uVar2 = uVar3 & 0x7fffffff;
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    uVar6 = 0x7c0;
    if ((uVar3 & 0x7fffff) == 0) {
      if ((int)uVar3 < 0) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = (((uVar2 >> 6 | uVar2) >> 5 | uVar2) >> 6 | uVar2) & 0x3f | 0x7c0;
    }
  }
  else if ((int)uVar3 < 0) {
    uVar6 = 0;
  }
  else if (uVar2 < 0x477e0001) {
    if (uVar2 < 0x38800000) {
      uVar2 = (uVar3 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar2 >> 0x17) & 0x1f);
    }
    else {
      uVar2 = uVar2 + 0xc8000000;
    }
    uVar6 = uVar2 + 0xffff + (uVar2 >> 0x11 & 1) >> 0x11;
  }
  else {
    uVar6 = 0x7bf;
  }
  uVar3 = uVar4 & 0x7fffffff;
  if ((uVar4 & 0x7f800000) == 0x7f800000) {
    if ((uVar4 & 0x7fffff) == 0) {
      if ((int)uVar4 < 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = (((uVar3 >> 6 | uVar3) >> 5 | uVar3) >> 6 | uVar3) & 0x3f | 0x7c0;
    }
  }
  else if ((int)uVar4 < 0) {
    uVar5 = 0;
  }
  else if (uVar3 < 0x477e0001) {
    if (uVar3 < 0x38800000) {
      uVar3 = (uVar4 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar3 >> 0x17) & 0x1f);
    }
    else {
      uVar3 = uVar3 + 0xc8000000;
    }
    uVar5 = uVar3 + 0xffff + (uVar3 >> 0x11 & 1) >> 0x11;
  }
  else {
    uVar5 = 0x7bf;
  }
  uVar4 = uVar1 & 0x7fffffff;
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    uVar3 = 0x3e0;
    if ((uVar1 & 0x7fffff) != 0) {
      uVar3 = (((uVar4 >> 5 | uVar4) >> 10 | uVar4) >> 3 | uVar4) & 0x1f | 0x3e0;
      goto LAB_1417a15a5;
    }
    if (-1 < (int)uVar1) goto LAB_1417a15a5;
  }
  else if (-1 < (int)uVar1) {
    if (uVar4 < 0x477c0001) {
      if (uVar4 < 0x38800000) {
        uVar4 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar4 >> 0x17) & 0x1f);
      }
      else {
        uVar4 = uVar4 + 0xc8000000;
      }
      uVar3 = uVar4 + 0x1ffff + (uVar4 >> 0x12 & 1) >> 0x12;
    }
    else {
      uVar3 = 0x3df;
    }
    goto LAB_1417a15a5;
  }
  uVar3 = 0;
LAB_1417a15a5:
  (this->field0_0x0).v = (uVar5 & 0x7ff | uVar3 << 0xb) << 0xb | uVar6 & 0x7ff;
  return this;
}

// ToLinearColor @ 141804c90

FLinearColor * __thiscall
FFloat3Packed::ToLinearColor(FFloat3Packed *this,FLinearColor *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (this->field0_0x0).v;
  uVar4 = uVar1 & 0x3f;
  uVar2 = uVar1 >> 6 & 0x1f;
  if (uVar2 == 0x1f) {
    fVar5 = (float)((uVar4 | 0x3fc0) << 0x11);
  }
  else {
    if ((uVar1 & 0x7c0) == 0) {
      if (uVar4 == 0) {
        uVar2 = 0xffffff90;
      }
      else {
        uVar2 = 1;
        do {
          uVar2 = uVar2 - 1;
          uVar4 = uVar4 * 2;
        } while ((uVar4 & 0x40) == 0);
        uVar4 = uVar4 & 0x3f;
      }
    }
    fVar5 = (float)((uVar2 + 0x70) * 0x800000 | uVar4 << 0x11);
  }
  uVar4 = uVar1 >> 0xb & 0x3f;
  uVar2 = uVar1 >> 0x11 & 0x1f;
  if (uVar2 == 0x1f) {
    fVar3 = (float)((uVar1 & 0x1f800 | 0x1fe0000) << 6);
  }
  else {
    if ((uVar1 & 0x3e0000) == 0) {
      if (uVar4 == 0) {
        uVar2 = 0xffffff90;
      }
      else {
        uVar2 = 1;
        do {
          uVar2 = uVar2 - 1;
          uVar4 = uVar4 * 2;
        } while ((uVar4 & 0x40) == 0);
        uVar4 = uVar4 & 0x3f;
      }
    }
    fVar3 = (float)((uVar2 + 0x70) * 0x800000 | uVar4 << 0x11);
  }
  uVar4 = uVar1 >> 0x16 & 0x1f;
  uVar2 = uVar1 >> 0x1b;
  if (uVar2 == 0x1f) {
    fVar6 = (float)(uVar1 >> 5 & 0x3e0000 | 0x7f800000);
  }
  else {
    if (uVar1 < 0x8000000) {
      if (uVar4 == 0) {
        uVar2 = 0xffffff90;
      }
      else {
        uVar2 = 1;
        do {
          uVar2 = uVar2 - 1;
          uVar4 = uVar4 * 2;
        } while ((uVar4 & 0x20) == 0);
        uVar4 = uVar4 & 0x1f;
      }
    }
    fVar6 = (float)((uVar2 + 0x70) * 0x800000 | uVar4 << 0x12);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 0.0;
  return __return_storage_ptr__;
}

