// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: binka_ue_decode_win64_static
// Functions: 143

// decode_coeff<1,1> @ 14f8d21d0

void __cdecl decode_coeff<1,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 1) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<1,2> @ 14f8d2200

void __cdecl decode_coeff<1,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 2) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<1,3> @ 14f8d2240

void __cdecl decode_coeff<1,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 3) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<1,4> @ 14f8d2280

void __cdecl decode_coeff<1,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 4) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<1,5> @ 14f8d22c0

void __cdecl decode_coeff<1,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 5) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<1,6> @ 14f8d2300

void __cdecl decode_coeff<1,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 6) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<1,7> @ 14f8d2340

void __cdecl decode_coeff<1,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 7) & 1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<1,0> @ 14f8d2380

void __cdecl decode_coeff<1,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = (ushort)param_2 & 1;
  bVar1 = *param_1;
  *param_1 = bVar1 + (char)uVar3;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<2,1> @ 14f8d23b0

void __cdecl decode_coeff<2,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 2) & 3;
  *param_1 = ((param_2 >> 2 & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<2,2> @ 14f8d23f0

void __cdecl decode_coeff<2,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 4) & 3;
  *param_1 = ((param_2 >> 4 & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<2,3> @ 14f8d2430

void __cdecl decode_coeff<2,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 6) & 3;
  *param_1 = ((param_2 >> 6 & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<2,4> @ 14f8d2470

void __cdecl decode_coeff<2,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 8) & 3;
  *param_1 = ((param_2 & 0x300) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<2,5> @ 14f8d24b0

void __cdecl decode_coeff<2,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 10) & 3;
  *param_1 = ((param_2 >> 10 & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<2,6> @ 14f8d24f0

void __cdecl decode_coeff<2,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xc) & 3;
  *param_1 = ((param_2 >> 0xc & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<2,7> @ 14f8d2530

void __cdecl decode_coeff<2,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xe) & 3;
  *param_1 = ((param_2 >> 0xe & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<2,0> @ 14f8d2570

void __cdecl decode_coeff<2,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 3;
  *param_1 = ((param_2 & 3) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<3,1> @ 14f8d25a0

void __cdecl decode_coeff<3,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 3) & 7;
  *param_1 = ((param_2 >> 3 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<3,2> @ 14f8d25e0

void __cdecl decode_coeff<3,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 6) & 7;
  *param_1 = ((param_2 >> 6 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<3,3> @ 14f8d2620

void __cdecl decode_coeff<3,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 9) & 7;
  *param_1 = ((param_2 >> 9 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<3,4> @ 14f8d2660

void __cdecl decode_coeff<3,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xc) & 7;
  *param_1 = ((param_2 >> 0xc & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<3,5> @ 14f8d26a0

void __cdecl decode_coeff<3,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xf) & 7;
  *param_1 = ((param_2 >> 0xf & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<3,6> @ 14f8d26e0

void __cdecl decode_coeff<3,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x12) & 7;
  *param_1 = ((param_2 >> 0x12 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<3,7> @ 14f8d2720

void __cdecl decode_coeff<3,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x15) & 7;
  *param_1 = ((param_2 >> 0x15 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<3,0> @ 14f8d2760

void __cdecl decode_coeff<3,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 7;
  *param_1 = ((param_2 & 7) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<4,1> @ 14f8d2790

void __cdecl decode_coeff<4,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 4) & 0xf;
  *param_1 = ((param_2 >> 4 & 0xf) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<4,2> @ 14f8d27d0

void __cdecl decode_coeff<4,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 8) & 0xf;
  *param_1 = ((param_2 & 0xf00) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<4,3> @ 14f8d2810

void __cdecl decode_coeff<4,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xc) & 0xf;
  *param_1 = ((param_2 >> 0xc & 0xf) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<4,4> @ 14f8d2850

void __cdecl decode_coeff<4,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x10) & 0xf;
  *param_1 = ((param_2 & 0xf0000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<4,5> @ 14f8d2890

void __cdecl decode_coeff<4,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x14) & 0xf;
  *param_1 = ((param_2 >> 0x14 & 0xf) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<4,6> @ 14f8d28d0

void __cdecl decode_coeff<4,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x18) & 0xf;
  *param_1 = ((param_2 & 0xf000000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<4,7> @ 14f8d2910

void __cdecl decode_coeff<4,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1c) & 0xf;
  *param_1 = ((param_2 >> 0x1c & 0xf) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<4,0> @ 14f8d2950

void __cdecl decode_coeff<4,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0xf;
  *param_1 = ((param_2 & 0xf) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<5,1> @ 14f8d2980

void __cdecl decode_coeff<5,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 5) & 0x1f;
  *param_1 = ((param_2 >> 5 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<5,2> @ 14f8d29c0

void __cdecl decode_coeff<5,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 10) & 0x1f;
  *param_1 = ((param_2 >> 10 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<5,3> @ 14f8d2a00

void __cdecl decode_coeff<5,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xf) & 0x1f;
  *param_1 = ((param_2 >> 0xf & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<5,4> @ 14f8d2a40

void __cdecl decode_coeff<5,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x14) & 0x1f;
  *param_1 = ((param_2 >> 0x14 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<5,5> @ 14f8d2a80

void __cdecl decode_coeff<5,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x19) & 0x1f;
  *param_1 = ((param_2 >> 0x19 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<5,6> @ 14f8d2ac0

void __cdecl decode_coeff<5,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1e) & 0x1f;
  *param_1 = ((param_2 >> 0x1e & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<5,7> @ 14f8d2b00

void __cdecl decode_coeff<5,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x23) & 0x1f;
  *param_1 = ((param_2 >> 0x23 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<5,0> @ 14f8d2b40

void __cdecl decode_coeff<5,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x1f;
  *param_1 = ((param_2 & 0x1f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<6,1> @ 14f8d2b70

void __cdecl decode_coeff<6,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 6) & 0x3f;
  *param_1 = ((param_2 >> 6 & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<6,2> @ 14f8d2bb0

void __cdecl decode_coeff<6,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xc) & 0x3f;
  *param_1 = ((param_2 >> 0xc & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<6,3> @ 14f8d2bf0

void __cdecl decode_coeff<6,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x12) & 0x3f;
  *param_1 = ((param_2 >> 0x12 & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<6,4> @ 14f8d2c30

void __cdecl decode_coeff<6,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x18) & 0x3f;
  *param_1 = ((param_2 & 0x3f000000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<6,5> @ 14f8d2c70

void __cdecl decode_coeff<6,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1e) & 0x3f;
  *param_1 = ((param_2 >> 0x1e & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<6,6> @ 14f8d2cb0

void __cdecl decode_coeff<6,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x24) & 0x3f;
  *param_1 = ((param_2 >> 0x24 & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<6,7> @ 14f8d2cf0

void __cdecl decode_coeff<6,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x2a) & 0x3f;
  *param_1 = ((param_2 >> 0x2a & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<6,0> @ 14f8d2d30

void __cdecl decode_coeff<6,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x3f;
  *param_1 = ((param_2 & 0x3f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<7,1> @ 14f8d2d60

void __cdecl decode_coeff<7,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 7) & 0x7f;
  *param_1 = ((param_2 >> 7 & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<7,2> @ 14f8d2da0

void __cdecl decode_coeff<7,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xe) & 0x7f;
  *param_1 = ((param_2 >> 0xe & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<7,3> @ 14f8d2de0

void __cdecl decode_coeff<7,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x15) & 0x7f;
  *param_1 = ((param_2 >> 0x15 & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<7,4> @ 14f8d2e20

void __cdecl decode_coeff<7,4>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1c) & 0x7f;
  *param_1 = ((param_2 >> 0x1c & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[4] = uVar2;
  return;
}

// decode_coeff<7,5> @ 14f8d2e60

void __cdecl decode_coeff<7,5>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x23) & 0x7f;
  *param_1 = ((param_2 >> 0x23 & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[5] = uVar2;
  return;
}

// decode_coeff<7,6> @ 14f8d2ea0

void __cdecl decode_coeff<7,6>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x2a) & 0x7f;
  *param_1 = ((param_2 >> 0x2a & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[6] = uVar2;
  return;
}

// decode_coeff<7,7> @ 14f8d2ee0

void __cdecl decode_coeff<7,7>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x31) & 0x7f;
  *param_1 = (uVar3 != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[7] = uVar2;
  return;
}

// decode_coeff<7,0> @ 14f8d2f20

void __cdecl decode_coeff<7,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x7f;
  *param_1 = ((param_2 & 0x7f) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<8,1> @ 14f8d2f50

void __cdecl decode_coeff<8,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 8) & 0xff;
  *param_1 = ((param_2 & 0xff00) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<8,2> @ 14f8d2f90

void __cdecl decode_coeff<8,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x10) & 0xff;
  *param_1 = ((param_2 & 0xff0000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<8,3> @ 14f8d2fd0

void __cdecl decode_coeff<8,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x18) & 0xff;
  *param_1 = ((param_2 & 0xff000000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<8,0> @ 14f8d3010

void __cdecl decode_coeff<8,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0xff;
  *param_1 = ((param_2 & 0xff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<9,1> @ 14f8d3050

void __cdecl decode_coeff<9,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 9) & 0x1ff;
  *param_1 = ((param_2 >> 9 & 0x1ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<9,2> @ 14f8d3090

void __cdecl decode_coeff<9,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x12) & 0x1ff;
  *param_1 = ((param_2 >> 0x12 & 0x1ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<9,3> @ 14f8d30d0

void __cdecl decode_coeff<9,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1b) & 0x1ff;
  *param_1 = ((param_2 >> 0x1b & 0x1ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<9,0> @ 14f8d3110

void __cdecl decode_coeff<9,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x1ff;
  *param_1 = ((param_2 & 0x1ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<10,1> @ 14f8d3150

void __cdecl decode_coeff<10,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 10) & 0x3ff;
  *param_1 = ((param_2 >> 10 & 0x3ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<10,2> @ 14f8d3190

void __cdecl decode_coeff<10,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x14) & 0x3ff;
  *param_1 = ((param_2 >> 0x14 & 0x3ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<10,3> @ 14f8d31d0

void __cdecl decode_coeff<10,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1e) & 0x3ff;
  *param_1 = ((param_2 >> 0x1e & 0x3ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<10,0> @ 14f8d3210

void __cdecl decode_coeff<10,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x3ff;
  *param_1 = ((param_2 & 0x3ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<11,1> @ 14f8d3250

void __cdecl decode_coeff<11,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xb) & 0x7ff;
  *param_1 = ((param_2 >> 0xb & 0x7ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<11,2> @ 14f8d3290

void __cdecl decode_coeff<11,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x16) & 0x7ff;
  *param_1 = ((param_2 >> 0x16 & 0x7ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<11,3> @ 14f8d32d0

void __cdecl decode_coeff<11,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x21) & 0x7ff;
  *param_1 = ((param_2 >> 0x21 & 0x7ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<11,0> @ 14f8d3310

void __cdecl decode_coeff<11,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x7ff;
  *param_1 = ((param_2 & 0x7ff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<12,1> @ 14f8d3350

void __cdecl decode_coeff<12,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xc) & 0xfff;
  *param_1 = ((param_2 >> 0xc & 0xfff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<12,2> @ 14f8d3390

void __cdecl decode_coeff<12,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x18) & 0xfff;
  *param_1 = ((param_2 & 0xfff000000) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<12,3> @ 14f8d33d0

void __cdecl decode_coeff<12,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x24) & 0xfff;
  *param_1 = ((param_2 >> 0x24 & 0xfff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<12,0> @ 14f8d3410

void __cdecl decode_coeff<12,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0xfff;
  *param_1 = ((param_2 & 0xfff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<13,1> @ 14f8d3450

void __cdecl decode_coeff<13,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xd) & 0x1fff;
  *param_1 = ((param_2 >> 0xd & 0x1fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<13,2> @ 14f8d3490

void __cdecl decode_coeff<13,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1a) & 0x1fff;
  *param_1 = ((param_2 >> 0x1a & 0x1fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<13,3> @ 14f8d34d0

void __cdecl decode_coeff<13,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x27) & 0x1fff;
  *param_1 = ((param_2 >> 0x27 & 0x1fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<13,0> @ 14f8d3510

void __cdecl decode_coeff<13,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x1fff;
  *param_1 = ((param_2 & 0x1fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<14,1> @ 14f8d3550

void __cdecl decode_coeff<14,1>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0xe) & 0x3fff;
  *param_1 = ((param_2 >> 0xe & 0x3fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[1] = uVar2;
  return;
}

// decode_coeff<14,2> @ 14f8d3590

void __cdecl decode_coeff<14,2>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x1c) & 0x3fff;
  *param_1 = ((param_2 >> 0x1c & 0x3fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[2] = uVar2;
  return;
}

// decode_coeff<14,3> @ 14f8d35d0

void __cdecl decode_coeff<14,3>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)(param_2 >> 0x2a) & 0x3fff;
  *param_1 = ((param_2 >> 0x2a & 0x3fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  param_4[3] = uVar2;
  return;
}

// decode_coeff<14,0> @ 14f8d3610

void __cdecl decode_coeff<14,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x3fff;
  *param_1 = ((param_2 & 0x3fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff<15,0> @ 14f8d3650

void __cdecl decode_coeff<15,0>(uchar *param_1,ulong64 param_2,uint param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ushort)param_2 & 0x7fff;
  *param_1 = ((param_2 & 0x7fff) != 0) + bVar1;
  uVar2 = -uVar3;
  if ((param_3 >> (bVar1 & 0x1f) & 1) == 0) {
    uVar2 = uVar3;
  }
  *param_4 = uVar2;
  return;
}

// decode_coeff_remnants<1> @ 14f8d3690

ulong64 __cdecl
decode_coeff_remnants<1>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar5 = (byte)param_4;
    uVar6 = param_4 >> 3;
    param_4 = param_4 + 1;
    uVar2 = param_5 >> 3;
    bVar1 = (byte)param_5;
    uVar4 = (ushort)(*(uint *)(param_3 + uVar6) >> (bVar5 & 7)) & 1;
    param_5 = param_5 + uVar4;
    uVar3 = -uVar4;
    if ((*(uint *)(param_3 + uVar2) >> (bVar1 & 7) & 1) == 0) {
      uVar3 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar3;
  }
  return param_5;
}

// decode_coeff_remnants<2> @ 14f8d3740

ulong64 __cdecl
decode_coeff_remnants<2>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 3;
    param_5 = param_5 + ((uVar5 & 3) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 2;
  }
  return param_5;
}

// decode_coeff_remnants<3> @ 14f8d3800

ulong64 __cdecl
decode_coeff_remnants<3>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 7;
    param_5 = param_5 + ((uVar5 & 7) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 3;
  }
  return param_5;
}

// decode_coeff_remnants<4> @ 14f8d38c0

ulong64 __cdecl
decode_coeff_remnants<4>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0xf;
    param_5 = param_5 + ((uVar5 & 0xf) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 4;
  }
  return param_5;
}

// decode_coeff_remnants<5> @ 14f8d3980

ulong64 __cdecl
decode_coeff_remnants<5>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x1f;
    param_5 = param_5 + ((uVar5 & 0x1f) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 5;
  }
  return param_5;
}

// decode_coeff_remnants<6> @ 14f8d3a40

ulong64 __cdecl
decode_coeff_remnants<6>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x3f;
    param_5 = param_5 + ((uVar5 & 0x3f) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 6;
  }
  return param_5;
}

// decode_coeff_remnants<7> @ 14f8d3b00

ulong64 __cdecl
decode_coeff_remnants<7>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  for (; param_1 < param_6; param_1 = param_1 + 1) {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x7f;
    param_5 = param_5 + ((uVar5 & 0x7f) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_4 = param_4 + 7;
  }
  return param_5;
}

// decode_coeff_remnants<8> @ 14f8d3bc0

ulong64 __cdecl
decode_coeff_remnants<8>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0xff;
    param_5 = param_5 + ((uVar5 & 0xff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 8;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<9> @ 14f8d3ca0

ulong64 __cdecl
decode_coeff_remnants<9>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x1ff;
    param_5 = param_5 + ((uVar5 & 0x1ff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 9;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<10> @ 14f8d3d80

ulong64 __cdecl
decode_coeff_remnants<10>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x3ff;
    param_5 = param_5 + ((uVar5 & 0x3ff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 10;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<11> @ 14f8d3e60

ulong64 __cdecl
decode_coeff_remnants<11>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x7ff;
    param_5 = param_5 + ((uVar5 & 0x7ff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 0xb;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<12> @ 14f8d3f40

ulong64 __cdecl
decode_coeff_remnants<12>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0xfff;
    param_5 = param_5 + ((uVar5 & 0xfff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 0xc;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<13> @ 14f8d4020

ulong64 __cdecl
decode_coeff_remnants<13>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x1fff;
    param_5 = param_5 + ((uVar5 & 0x1fff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 0xd;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<14> @ 14f8d4100

ulong64 __cdecl
decode_coeff_remnants<14>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x3fff;
    param_5 = param_5 + ((uVar5 & 0x3fff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 0xe;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeff_remnants<15> @ 14f8d41e0

ulong64 __cdecl
decode_coeff_remnants<15>
          (ulong64 param_1,float *param_2,uchar *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_6 <= param_1) {
    return param_5;
  }
  do {
    bVar1 = (byte)param_5;
    uVar5 = *(uint *)(param_3 + (param_4 >> 3)) >> ((byte)param_4 & 7);
    uVar3 = param_5 >> 3;
    uVar4 = (ushort)uVar5 & 0x7fff;
    param_5 = param_5 + ((uVar5 & 0x7fff) != 0);
    uVar2 = -uVar4;
    if ((*(uint *)(param_3 + uVar3) >> (bVar1 & 7) & 1) == 0) {
      uVar2 = uVar4;
    }
    param_2[param_1] = (float)(int)(short)uVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 0xf;
  } while (param_1 < param_6);
  return param_5;
}

// decode_coeffs_runlength_4<8> @ 14f8d42c0

ulong64 __cdecl
decode_coeffs_runlength_4<8>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x20;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0xff;
      uVar9 = (ushort)(uVar3 >> 8) & 0xff;
      sVar4 = ((uVar3 & 0xff) != 0) + ((uVar3 & 0xff00) != 0);
      uVar10 = (ushort)(uVar3 >> 0x10) & 0xff;
      sVar5 = sVar4 + ((uVar3 & 0xff0000) != 0);
      uVar7 = (ushort)(uVar3 >> 0x18) & 0xff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 & 0xff000000) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0xff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 8;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0xff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0xff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<9> @ 14f8d4510

ulong64 __cdecl
decode_coeffs_runlength_4<9>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x24;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x1ff;
      uVar9 = (ushort)(uVar3 >> 9) & 0x1ff;
      sVar4 = ((uVar3 & 0x1ff) != 0) + ((uVar3 >> 9 & 0x1ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x12) & 0x1ff;
      sVar5 = sVar4 + ((uVar3 >> 0x12 & 0x1ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x1b) & 0x1ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x1b & 0x1ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x1ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 9;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x1ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x1ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<10> @ 14f8d4760

ulong64 __cdecl
decode_coeffs_runlength_4<10>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x28;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x3ff;
      uVar9 = (ushort)(uVar3 >> 10) & 0x3ff;
      sVar4 = ((uVar3 & 0x3ff) != 0) + ((uVar3 >> 10 & 0x3ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x14) & 0x3ff;
      sVar5 = sVar4 + ((uVar3 >> 0x14 & 0x3ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x1e) & 0x3ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x1e & 0x3ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x3ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 10;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x3ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x3ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<11> @ 14f8d49b0

ulong64 __cdecl
decode_coeffs_runlength_4<11>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x2c;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x7ff;
      uVar9 = (ushort)(uVar3 >> 0xb) & 0x7ff;
      sVar4 = ((uVar3 & 0x7ff) != 0) + ((uVar3 >> 0xb & 0x7ff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x16) & 0x7ff;
      sVar5 = sVar4 + ((uVar3 >> 0x16 & 0x7ff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x21) & 0x7ff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x21 & 0x7ff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x7ff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xb;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x7ff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x7ff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<12> @ 14f8d4c00

ulong64 __cdecl
decode_coeffs_runlength_4<12>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x30;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0xfff;
      uVar9 = (ushort)(uVar3 >> 0xc) & 0xfff;
      sVar4 = ((uVar3 & 0xfff) != 0) + ((uVar3 >> 0xc & 0xfff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x18) & 0xfff;
      sVar5 = sVar4 + ((uVar3 & 0xfff000000) != 0);
      uVar7 = (ushort)(uVar3 >> 0x24) & 0xfff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x24 & 0xfff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0xfff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xc;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0xfff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0xfff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<13> @ 14f8d4e50

ulong64 __cdecl
decode_coeffs_runlength_4<13>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x34;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x1fff;
      uVar9 = (ushort)(uVar3 >> 0xd) & 0x1fff;
      sVar4 = ((uVar3 & 0x1fff) != 0) + ((uVar3 >> 0xd & 0x1fff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x1a) & 0x1fff;
      sVar5 = sVar4 + ((uVar3 >> 0x1a & 0x1fff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x27) & 0x1fff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x27 & 0x1fff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x1fff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xd;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x1fff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x1fff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_4<14> @ 14f8d50a0

ulong64 __cdecl
decode_coeffs_runlength_4<14>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  ulonglong uVar12;
  float *local_48;
  
  uVar12 = 0;
  if ((param_5 & 0xfffffffffffffffc) != 0) {
    local_48 = param_1 + 2;
    lVar2 = ((param_5 & 0xfffffffffffffffc) - 1 >> 2) + 1;
    uVar12 = lVar2 * 4;
    do {
      bVar11 = (byte)param_3;
      uVar3 = param_3 >> 3;
      param_3 = param_3 + 0x38;
      uVar3 = *(ulonglong *)(param_2 + uVar3) >> (bVar11 & 7);
      uVar8 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar6 = (ushort)uVar3 & 0x3fff;
      uVar9 = (ushort)(uVar3 >> 0xe) & 0x3fff;
      sVar4 = ((uVar3 & 0x3fff) != 0) + ((uVar3 >> 0xe & 0x3fff) != 0);
      uVar10 = (ushort)(uVar3 >> 0x1c) & 0x3fff;
      sVar5 = sVar4 + ((uVar3 >> 0x1c & 0x3fff) != 0);
      uVar7 = (ushort)(uVar3 >> 0x2a) & 0x3fff;
      param_4 = param_4 + (byte)(sVar5 + ((uVar3 >> 0x2a & 0x3fff) != 0));
      uVar1 = -uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = uVar6;
      }
      uVar6 = -uVar9;
      if ((uVar8 >> ((uVar3 & 0x3fff) != 0) & 1) == 0) {
        uVar6 = uVar9;
      }
      local_48[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar10;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar1 = uVar10;
      }
      local_48[-1] = (float)(int)(short)uVar6;
      uVar6 = -uVar7;
      if ((uVar8 >> sVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
      *local_48 = (float)(int)(short)uVar1;
      local_48[1] = (float)(int)(short)uVar6;
      local_48 = local_48 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar12 < param_5; uVar12 = uVar12 + 1) {
    bVar11 = (byte)param_3;
    uVar3 = param_3 >> 3;
    param_3 = param_3 + 0xe;
    uVar8 = *(uint *)(param_2 + uVar3) >> (bVar11 & 7);
    uVar6 = (ushort)uVar8 & 0x3fff;
    uVar3 = param_4 >> 3;
    bVar11 = (byte)param_4;
    param_4 = param_4 + ((uVar8 & 0x3fff) != 0);
    uVar1 = -uVar6;
    if ((*(uint *)(param_2 + uVar3) >> (bVar11 & 7) & 1) == 0) {
      uVar1 = uVar6;
    }
    param_1[uVar12] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<1> @ 14f8d52f0

ulong64 __cdecl
decode_coeffs_runlength_8<1>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  sbyte sVar1;
  sbyte sVar2;
  sbyte sVar3;
  sbyte sVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  short sVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  float *pfVar18;
  longlong lVar19;
  ushort uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ulonglong local_70;
  float *local_60;
  char local_58;
  longlong local_50;
  
  uVar9 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_50 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar9 = local_50 * 8;
    local_70 = param_4;
    do {
      bVar5 = (byte)param_3;
      uVar12 = param_3 >> 3;
      param_3 = param_3 + 8;
      uVar21 = *(ulonglong *)(param_2 + uVar12) >> (bVar5 & 7);
      uVar8 = *(uint *)(param_2 + (local_70 >> 3)) >> ((byte)local_70 & 7);
      uVar16 = (ushort)uVar21 & 1;
      uVar17 = (ushort)(uVar21 >> 1) & 1;
      sVar1 = (sbyte)uVar16 + (char)uVar17;
      uVar14 = (ushort)(uVar21 >> 2) & 1;
      sVar2 = sVar1 + (char)uVar14;
      uVar12 = uVar21 >> 6 & 0xffffffffffff0001;
      uVar22 = uVar21 >> 7 & 1;
      uVar15 = (ushort)(uVar21 >> 3) & 1;
      sVar3 = sVar2 + (char)uVar15;
      uVar23 = (ushort)(uVar21 >> 4) & 1;
      uVar20 = (ushort)(uVar21 >> 5) & 1;
      sVar4 = sVar3 + (char)uVar23;
      bVar5 = sVar4 + (char)uVar20;
      bVar6 = bVar5 + (char)uVar12;
      local_58 = (char)uVar22;
      param_4 = local_70 + (byte)(bVar6 + local_58);
      uVar13 = -uVar16;
      if ((uVar8 & 1) == 0) {
        uVar13 = uVar16;
      }
      local_60[-2] = (float)(int)(short)uVar13;
      uVar13 = -uVar17;
      if ((uVar8 >> (sbyte)uVar16 & 1) == 0) {
        uVar13 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar13;
      uVar13 = -uVar14;
      if ((uVar8 >> sVar1 & 1) == 0) {
        uVar13 = uVar14;
      }
      uVar14 = -uVar15;
      if ((uVar8 >> sVar2 & 1) == 0) {
        uVar14 = uVar15;
      }
      *local_60 = (float)(int)(short)uVar13;
      uVar13 = -uVar23;
      if ((uVar8 >> sVar3 & 1) == 0) {
        uVar13 = uVar23;
      }
      local_60[1] = (float)(int)(short)uVar14;
      uVar14 = -uVar20;
      if ((uVar8 >> sVar4 & 1) == 0) {
        uVar14 = uVar20;
      }
      local_60[2] = (float)(int)(short)uVar13;
      sVar10 = (short)uVar12;
      sVar7 = -sVar10;
      if ((uVar8 >> (bVar5 & 0x1f) & 1) == 0) {
        sVar7 = sVar10;
      }
      local_60[3] = (float)(int)(short)uVar14;
      sVar11 = (short)uVar22;
      sVar10 = -sVar11;
      if ((uVar8 >> (bVar6 & 0x1f) & 1) == 0) {
        sVar10 = sVar11;
      }
      local_60[4] = (float)(int)sVar7;
      local_60[5] = (float)(int)sVar10;
      local_60 = local_60 + 8;
      local_50 = local_50 + -1;
      local_70 = param_4;
    } while (local_50 != 0);
  }
  if (uVar9 < param_5) {
    lVar19 = param_5 - uVar9;
    pfVar18 = param_1 + uVar9;
    do {
      bVar5 = (byte)param_3;
      uVar9 = param_3 >> 3;
      param_3 = param_3 + 1;
      uVar14 = (ushort)(*(uint *)(param_2 + uVar9) >> (bVar5 & 7)) & 1;
      uVar9 = param_4 >> 3;
      bVar5 = (byte)param_4;
      param_4 = param_4 + uVar14;
      uVar13 = -uVar14;
      if ((*(uint *)(param_2 + uVar9) >> (bVar5 & 7) & 1) == 0) {
        uVar13 = uVar14;
      }
      *pfVar18 = (float)(int)(short)uVar13;
      lVar19 = lVar19 + -1;
      pfVar18 = pfVar18 + 1;
    } while (lVar19 != 0);
  }
  return param_4;
}

// decode_coeffs_runlength_8<2> @ 14f8d5670

ulong64 __cdecl
decode_coeffs_runlength_8<2>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x10;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 3;
      uVar3 = (ushort)(uVar14 >> 2) & 3;
      sVar5 = ((uVar14 & 3) != 0) + ((uVar14 >> 2 & 3) != 0);
      uVar17 = (ushort)(uVar14 >> 4) & 3;
      sVar6 = sVar5 + ((uVar14 >> 4 & 3) != 0);
      uVar18 = (ushort)(uVar14 >> 6) & 3;
      sVar7 = sVar6 + ((uVar14 >> 6 & 3) != 0);
      uVar4 = (ushort)(uVar14 >> 8) & 3;
      sVar8 = sVar7 + ((uVar14 & 0x300) != 0);
      uVar16 = (ushort)(uVar14 >> 10) & 3;
      bVar9 = sVar8 + ((uVar14 >> 10 & 3) != 0);
      uVar12 = (ushort)(uVar14 >> 0xc) & 3;
      bVar10 = bVar9 + ((uVar14 >> 0xc & 3) != 0);
      local_70 = (ushort)(uVar14 >> 0xe) & 3;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0xe & 3) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 3) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 2;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 3;
    param_4 = param_4 + ((uVar11 & 3) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<3> @ 14f8d5a00

ulong64 __cdecl
decode_coeffs_runlength_8<3>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x18;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 7;
      uVar3 = (ushort)(uVar14 >> 3) & 7;
      sVar5 = ((uVar14 & 7) != 0) + ((uVar14 >> 3 & 7) != 0);
      uVar17 = (ushort)(uVar14 >> 6) & 7;
      sVar6 = sVar5 + ((uVar14 >> 6 & 7) != 0);
      uVar18 = (ushort)(uVar14 >> 9) & 7;
      sVar7 = sVar6 + ((uVar14 >> 9 & 7) != 0);
      uVar4 = (ushort)(uVar14 >> 0xc) & 7;
      sVar8 = sVar7 + ((uVar14 >> 0xc & 7) != 0);
      uVar16 = (ushort)(uVar14 >> 0xf) & 7;
      bVar9 = sVar8 + ((uVar14 >> 0xf & 7) != 0);
      uVar12 = (ushort)(uVar14 >> 0x12) & 7;
      bVar10 = bVar9 + ((uVar14 >> 0x12 & 7) != 0);
      local_70 = (ushort)(uVar14 >> 0x15) & 7;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x15 & 7) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 7) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 3;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 7;
    param_4 = param_4 + ((uVar11 & 7) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<4> @ 14f8d5d90

ulong64 __cdecl
decode_coeffs_runlength_8<4>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x20;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0xf;
      uVar3 = (ushort)(uVar14 >> 4) & 0xf;
      sVar5 = ((uVar14 & 0xf) != 0) + ((uVar14 >> 4 & 0xf) != 0);
      uVar17 = (ushort)(uVar14 >> 8) & 0xf;
      sVar6 = sVar5 + ((uVar14 & 0xf00) != 0);
      uVar18 = (ushort)(uVar14 >> 0xc) & 0xf;
      sVar7 = sVar6 + ((uVar14 >> 0xc & 0xf) != 0);
      uVar4 = (ushort)(uVar14 >> 0x10) & 0xf;
      sVar8 = sVar7 + ((uVar14 & 0xf0000) != 0);
      uVar16 = (ushort)(uVar14 >> 0x14) & 0xf;
      bVar9 = sVar8 + ((uVar14 >> 0x14 & 0xf) != 0);
      uVar12 = (ushort)(uVar14 >> 0x18) & 0xf;
      bVar10 = bVar9 + ((uVar14 & 0xf000000) != 0);
      local_70 = (ushort)(uVar14 >> 0x1c) & 0xf;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x1c & 0xf) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0xf) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 4;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0xf;
    param_4 = param_4 + ((uVar11 & 0xf) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<5> @ 14f8d6120

ulong64 __cdecl
decode_coeffs_runlength_8<5>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x28;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x1f;
      uVar3 = (ushort)(uVar14 >> 5) & 0x1f;
      sVar5 = ((uVar14 & 0x1f) != 0) + ((uVar14 >> 5 & 0x1f) != 0);
      uVar17 = (ushort)(uVar14 >> 10) & 0x1f;
      sVar6 = sVar5 + ((uVar14 >> 10 & 0x1f) != 0);
      uVar18 = (ushort)(uVar14 >> 0xf) & 0x1f;
      sVar7 = sVar6 + ((uVar14 >> 0xf & 0x1f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x14) & 0x1f;
      sVar8 = sVar7 + ((uVar14 >> 0x14 & 0x1f) != 0);
      uVar16 = (ushort)(uVar14 >> 0x19) & 0x1f;
      bVar9 = sVar8 + ((uVar14 >> 0x19 & 0x1f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x1e) & 0x1f;
      bVar10 = bVar9 + ((uVar14 >> 0x1e & 0x1f) != 0);
      local_70 = (ushort)(uVar14 >> 0x23) & 0x1f;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x23 & 0x1f) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x1f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 5;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x1f;
    param_4 = param_4 + ((uVar11 & 0x1f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<6> @ 14f8d64b0

ulong64 __cdecl
decode_coeffs_runlength_8<6>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x30;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x3f;
      uVar3 = (ushort)(uVar14 >> 6) & 0x3f;
      sVar5 = ((uVar14 & 0x3f) != 0) + ((uVar14 >> 6 & 0x3f) != 0);
      uVar17 = (ushort)(uVar14 >> 0xc) & 0x3f;
      sVar6 = sVar5 + ((uVar14 >> 0xc & 0x3f) != 0);
      uVar18 = (ushort)(uVar14 >> 0x12) & 0x3f;
      sVar7 = sVar6 + ((uVar14 >> 0x12 & 0x3f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x18) & 0x3f;
      sVar8 = sVar7 + ((uVar14 & 0x3f000000) != 0);
      uVar16 = (ushort)(uVar14 >> 0x1e) & 0x3f;
      bVar9 = sVar8 + ((uVar14 >> 0x1e & 0x3f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x24) & 0x3f;
      bVar10 = bVar9 + ((uVar14 >> 0x24 & 0x3f) != 0);
      local_70 = (ushort)(uVar14 >> 0x2a) & 0x3f;
      param_4 = param_4 + (byte)(bVar10 + ((uVar14 >> 0x2a & 0x3f) != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x3f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 6;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x3f;
    param_4 = param_4 + ((uVar11 & 0x3f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// decode_coeffs_runlength_8<7> @ 14f8d6840

ulong64 __cdecl
decode_coeffs_runlength_8<7>
          (float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  sbyte sVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort local_70;
  float *local_60;
  longlong local_58;
  
  uVar13 = 0;
  if ((param_5 & 0xfffffffffffffff8) != 0) {
    local_60 = param_1 + 2;
    local_58 = ((param_5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
    uVar13 = local_58 * 8;
    uVar15 = param_3;
    do {
      param_3 = uVar15 + 0x38;
      uVar14 = *(ulonglong *)(param_2 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
      uVar11 = *(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7);
      uVar2 = (ushort)uVar14 & 0x7f;
      uVar3 = (ushort)(uVar14 >> 7) & 0x7f;
      sVar5 = ((uVar14 & 0x7f) != 0) + ((uVar14 >> 7 & 0x7f) != 0);
      uVar17 = (ushort)(uVar14 >> 0xe) & 0x7f;
      sVar6 = sVar5 + ((uVar14 >> 0xe & 0x7f) != 0);
      uVar18 = (ushort)(uVar14 >> 0x15) & 0x7f;
      sVar7 = sVar6 + ((uVar14 >> 0x15 & 0x7f) != 0);
      uVar4 = (ushort)(uVar14 >> 0x1c) & 0x7f;
      sVar8 = sVar7 + ((uVar14 >> 0x1c & 0x7f) != 0);
      uVar16 = (ushort)(uVar14 >> 0x23) & 0x7f;
      bVar9 = sVar8 + ((uVar14 >> 0x23 & 0x7f) != 0);
      uVar12 = (ushort)(uVar14 >> 0x2a) & 0x7f;
      bVar10 = bVar9 + ((uVar14 >> 0x2a & 0x7f) != 0);
      local_70 = (ushort)(uVar14 >> 0x31) & 0x7f;
      param_4 = param_4 + (byte)(bVar10 + (local_70 != 0));
      uVar1 = -uVar2;
      if ((uVar11 & 1) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar3;
      if ((uVar11 >> ((uVar14 & 0x7f) != 0) & 1) == 0) {
        uVar2 = uVar3;
      }
      local_60[-2] = (float)(int)(short)uVar1;
      uVar1 = -uVar17;
      if ((uVar11 >> sVar5 & 1) == 0) {
        uVar1 = uVar17;
      }
      local_60[-1] = (float)(int)(short)uVar2;
      uVar2 = -uVar18;
      if ((uVar11 >> sVar6 & 1) == 0) {
        uVar2 = uVar18;
      }
      *local_60 = (float)(int)(short)uVar1;
      uVar1 = -uVar4;
      if ((uVar11 >> sVar7 & 1) == 0) {
        uVar1 = uVar4;
      }
      local_60[1] = (float)(int)(short)uVar2;
      uVar2 = -uVar16;
      if ((uVar11 >> sVar8 & 1) == 0) {
        uVar2 = uVar16;
      }
      local_60[2] = (float)(int)(short)uVar1;
      uVar1 = -uVar12;
      if ((uVar11 >> (bVar9 & 0x1f) & 1) == 0) {
        uVar1 = uVar12;
      }
      local_60[3] = (float)(int)(short)uVar2;
      uVar2 = -local_70;
      if ((uVar11 >> (bVar10 & 0x1f) & 1) == 0) {
        uVar2 = local_70;
      }
      local_60[4] = (float)(int)(short)uVar1;
      local_60[5] = (float)(int)(short)uVar2;
      local_60 = local_60 + 8;
      local_58 = local_58 + -1;
      uVar15 = param_3;
    } while (local_58 != 0);
  }
  for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
    bVar9 = (byte)param_3;
    uVar14 = param_3 >> 3;
    param_3 = param_3 + 7;
    uVar11 = *(uint *)(param_2 + uVar14) >> (bVar9 & 7);
    bVar9 = (byte)param_4;
    uVar14 = param_4 >> 3;
    uVar2 = (ushort)uVar11 & 0x7f;
    param_4 = param_4 + ((uVar11 & 0x7f) != 0);
    uVar1 = -uVar2;
    if ((*(uint *)(param_2 + uVar14) >> (bVar9 & 7) & 1) == 0) {
      uVar1 = uVar2;
    }
    param_1[uVar13] = (float)(int)(short)uVar1;
  }
  return param_4;
}

// validate_chunked_bit_read<unsigned_int> @ 14f8d6bd0

bool __cdecl
validate_chunked_bit_read<unsigned_int>(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  return (param_1 + param_3 & 0xfffffffffffffff8) <= param_2;
}

// validate_chunked_bit_read<__m128i> @ 14f8d6bf0

bool __cdecl validate_chunked_bit_read<__m128i>(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  return (param_1 + param_3 & 0xfffffffffffffff8) + 0x10 <= param_2;
}

// validate_chunked_bit_read<unsigned___int64> @ 14f8d6c10

bool __cdecl
validate_chunked_bit_read<unsigned___int64>(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  return (param_1 + param_3 & 0xfffffffffffffff8) + 8 <= param_2;
}

// CrossFadeSSE2 @ 14f8d6c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CrossFadeSSE2(short *param_1,short *param_2,uint param_3,int param_4)

{
  short *psVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  unkbyte10 Var5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  short sVar23;
  int iVar24;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ushort uVar29;
  short sVar30;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  undefined1 auVar31 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  
  sVar15 = _UNK_15347908e;
  sVar14 = _UNK_15347908c;
  sVar13 = _UNK_15347908a;
  sVar12 = _UNK_153479088;
  sVar11 = _UNK_153479086;
  sVar10 = _UNK_153479084;
  sVar9 = _UNK_153479082;
  sVar8 = ___xmm_00080008000800080008000800080008;
  uVar17 = 0;
  uVar29 = (ushort)(param_3 >> 1) & 0x7fff;
  auVar31 = ___xmm_00070006000500040003000200010000;
  if (param_3 != 0) {
    do {
      auVar19 = *(undefined1 (*) [16])(uVar17 + (longlong)param_1);
      sVar30 = auVar31._0_2_;
      auVar27._0_2_ = uVar29 - sVar30;
      sVar32 = auVar31._2_2_;
      auVar27._2_2_ = uVar29 - sVar32;
      sVar33 = auVar31._4_2_;
      auVar27._4_2_ = uVar29 - sVar33;
      sVar34 = auVar31._6_2_;
      auVar27._6_2_ = uVar29 - sVar34;
      sVar35 = auVar31._8_2_;
      auVar27._8_2_ = uVar29 - sVar35;
      sVar36 = auVar31._10_2_;
      auVar27._10_2_ = uVar29 - sVar36;
      sVar37 = auVar31._12_2_;
      auVar27._12_2_ = uVar29 - sVar37;
      sVar38 = auVar31._14_2_;
      auVar27._14_2_ = uVar29 - sVar38;
      auVar18 = pmulhw(auVar19,auVar31);
      psVar1 = (short *)(uVar17 + (longlong)param_2);
      auVar28 = pmulhw(auVar27,*(undefined1 (*) [16])(uVar17 + (longlong)param_2));
      sVar23 = auVar19._6_2_ * sVar34;
      auVar31._0_2_ = sVar30 + sVar8;
      auVar31._2_2_ = sVar32 + sVar9;
      auVar31._4_2_ = sVar33 + sVar10;
      auVar31._6_2_ = sVar34 + sVar11;
      auVar31._8_2_ = sVar35 + sVar12;
      auVar31._10_2_ = sVar36 + sVar13;
      auVar31._12_2_ = sVar37 + sVar14;
      auVar31._14_2_ = sVar38 + sVar15;
      iVar6 = CONCAT22(auVar18._6_2_,sVar23);
      Var4 = CONCAT64(CONCAT42(iVar6,auVar18._4_2_),CONCAT22(auVar19._4_2_ * sVar33,sVar23));
      auVar2._4_8_ = (longlong)((unkuint10)Var4 >> 0x10);
      auVar2._2_2_ = auVar18._2_2_;
      auVar2._0_2_ = auVar19._2_2_ * sVar32;
      iVar20 = CONCAT22(auVar18._8_2_,auVar19._8_2_ * sVar35);
      auVar21._0_8_ = CONCAT26(auVar18._10_2_,CONCAT24(auVar19._10_2_ * sVar36,iVar20));
      auVar21._8_2_ = auVar19._12_2_ * sVar37;
      auVar21._10_2_ = auVar18._12_2_;
      auVar22._12_2_ = auVar19._14_2_ * sVar38;
      auVar22._0_12_ = auVar21;
      auVar22._14_2_ = auVar18._14_2_;
      iVar7 = CONCAT22(auVar28._6_2_,auVar27._6_2_ * psVar1[3]);
      Var5 = CONCAT64(CONCAT42(iVar7,auVar28._4_2_),
                      CONCAT22(auVar27._4_2_ * psVar1[2],auVar27._6_2_ * psVar1[3]));
      auVar3._4_8_ = (longlong)((unkuint10)Var5 >> 0x10);
      auVar3._2_2_ = auVar28._2_2_;
      auVar3._0_2_ = auVar27._2_2_ * psVar1[1];
      iVar24 = CONCAT22(auVar28._8_2_,auVar27._8_2_ * psVar1[4]);
      auVar25._0_8_ = CONCAT26(auVar28._10_2_,CONCAT24(auVar27._10_2_ * psVar1[5],iVar24));
      auVar25._8_2_ = auVar27._12_2_ * psVar1[6];
      auVar25._10_2_ = auVar28._12_2_;
      auVar26._12_2_ = auVar27._14_2_ * psVar1[7];
      auVar26._0_12_ = auVar25;
      auVar26._14_2_ = auVar28._14_2_;
      auVar19._0_4_ =
           CONCAT22(auVar28._0_2_,auVar27._0_2_ * *psVar1) +
           CONCAT22(auVar18._0_2_,auVar19._0_2_ * sVar30) >> param_4;
      auVar19._4_4_ = auVar3._0_4_ + auVar2._0_4_ >> param_4;
      auVar19._8_4_ = (int)((unkuint10)Var5 >> 0x10) + (int)((unkuint10)Var4 >> 0x10) >> param_4;
      auVar19._12_4_ = iVar7 + iVar6 >> param_4;
      auVar18._0_4_ = iVar24 + iVar20 >> param_4;
      auVar18._4_4_ =
           (int)((ulonglong)auVar25._0_8_ >> 0x20) + (int)((ulonglong)auVar21._0_8_ >> 0x20) >>
           param_4;
      auVar18._8_4_ = auVar25._8_4_ + auVar21._8_4_ >> param_4;
      auVar18._12_4_ = auVar26._12_4_ + auVar22._12_4_ >> param_4;
      auVar19 = packssdw(auVar19,auVar18);
      *(undefined1 (*) [16])(uVar17 + (longlong)param_1) = auVar19;
      uVar16 = (int)uVar17 + 0x10;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < param_3);
  }
  return;
}

// decode_frame @ 14f8d6d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
decode_frame(uint param_1,float param_2,uint param_3,uint param_4,BINKAC_OUT_RINGBUF *param_5,
            BINKAC_IN *param_6,uint param_7,uint *param_8,uint param_9,uint param_10,short *param_11
            )

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  bool bVar12;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  float afStack_98 [2];
  longlong lStack_90;
  uint local_88 [8];
  uint local_68;
  int local_64;
  BINKVARBITS local_60;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  undefined1 uStack_29;
  
  local_40 = __security_cookie.value ^ (ulonglong)&local_68;
  lVar1 = (ulonglong)param_1 * 4;
  uVar4 = lVar1 + 0x6f;
  if (uVar4 <= lVar1 + 0x60U) {
    uVar4 = 0xffffffffffffff0;
  }
  uStack_c0 = 0x14f8d6d89;
  lVar1 = -(uVar4 & 0xfffffffffffffff0);
  puVar5 = auStack_b8 + lVar1;
  local_60.bitlen = 0x3e;
  pfVar7 = (float *)((ulonglong)(&uStack_29 + lVar1) & 0xffffffffffffffc0);
  lVar6 = (longlong)param_6->inend + 0x48;
  local_60.cur = (ulonglong *)((longlong)param_6->inptr + 8);
  local_60.bits = *(ulonglong *)param_6->inptr >> 2;
  if (param_3 == 1) {
    *(longlong *)((longlong)&lStack_90 + lVar1) = lVar6;
    *(uint **)((longlong)afStack_98 + lVar1) = param_8;
    if ((param_4 & 4) == 0) {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6dfe;
      read_channel_data(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                        *(void **)((longlong)&lStack_90 + lVar1));
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6df7;
      read_channel_data_2(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                          *(void **)((longlong)&lStack_90 + lVar1));
    }
    *(uint *)((longlong)local_88 + lVar1 + 8) = param_10;
    *(uint *)((longlong)local_88 + lVar1) = param_9;
  }
  else {
    if ((param_4 & 2) == 0) {
      uVar9 = param_1 * 4;
      uVar10 = param_5->outlen;
      uVar2 = *(int *)&param_5->outend - *(int *)&param_5->outptr;
      psVar11 = param_5->outptr;
      uVar8 = uVar10;
      if (uVar2 <= uVar10) {
        uVar8 = uVar2;
      }
      puVar5 = auStack_b8 + lVar1;
      if (uVar8 < uVar9) {
        if (uVar10 - uVar8 < uVar9) {
          uVar4 = (ulonglong)(uVar9 + 0x10) + 0xf;
          if (uVar4 <= uVar9 + 0x10) {
            uVar4 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6f8a;
          puVar5 = auStack_b8 + -(uVar4 & 0xfffffffffffffff0) + lVar1;
          psVar11 = (short *)((longlong)&local_60 + -(uVar4 & 0xfffffffffffffff0) + lVar1);
        }
        else {
          psVar11 = param_5->outstart;
          puVar5 = auStack_b8 + lVar1;
        }
      }
      *(longlong *)(puVar5 + 0x28) = lVar6;
      local_68 = param_4 & 4;
      *(uint **)(puVar5 + 0x20) = param_8;
      if ((param_4 & 4) == 0) {
        *(undefined8 *)(puVar5 + -8) = 0x14f8d6fd5;
        read_channel_data(pfVar7,param_1,param_7,&local_60,*(uint **)(puVar5 + 0x20),
                          *(void **)(puVar5 + 0x28));
      }
      else {
        *(undefined8 *)(puVar5 + -8) = 0x14f8d6fce;
        read_channel_data_2(pfVar7,param_1,param_7,&local_60,*(uint **)(puVar5 + 0x20),
                            *(void **)(puVar5 + 0x28));
      }
      *(undefined4 *)(puVar5 + 0x38) = 0;
      *(undefined4 *)(puVar5 + 0x30) = 0;
      *(undefined8 *)(puVar5 + 0x28) = 0;
      *(float *)(puVar5 + 0x20) = param_2;
      *(undefined8 *)(puVar5 + -8) = 0x14f8d6ffc;
      linear_inverse_transform_to_s16
                (param_4,psVar11 + param_1,pfVar7,param_1,*(float *)(puVar5 + 0x20),
                 *(short **)(puVar5 + 0x28),*(uint *)(puVar5 + 0x30),*(uint *)(puVar5 + 0x38));
      bVar12 = local_68 == 0;
      *(longlong *)(puVar5 + 0x28) = lVar6;
      *(uint **)(puVar5 + 0x20) = param_8;
      if (bVar12) {
        *(undefined8 *)(puVar5 + -8) = 0x14f8d7024;
        read_channel_data(pfVar7,param_1,param_7,&local_60,*(uint **)(puVar5 + 0x20),
                          *(void **)(puVar5 + 0x28));
      }
      else {
        *(undefined8 *)(puVar5 + -8) = 0x14f8d701d;
        read_channel_data_2(pfVar7,param_1,param_7,&local_60,*(uint **)(puVar5 + 0x20),
                            *(void **)(puVar5 + 0x28));
      }
      *(uint *)(puVar5 + 0x40) = param_10;
      *(uint *)(puVar5 + 0x38) = param_9;
      *(short **)(puVar5 + 0x30) = param_11;
      *(float *)(puVar5 + 0x28) = param_2;
      *(uint *)(puVar5 + 0x20) = param_1;
      *(undefined8 *)(puVar5 + -8) = 0x14f8d7063;
      inverse_transform_to_s16_stereo
                (param_4,param_5,psVar11,pfVar7,*(uint *)(puVar5 + 0x20),*(float *)(puVar5 + 0x28),
                 *(short **)(puVar5 + 0x30),*(uint *)(puVar5 + 0x38),*(uint *)(puVar5 + 0x40));
      goto LAB_14f8d7063;
    }
    iVar3 = param_10 - 1;
    *(longlong *)((longlong)&lStack_90 + lVar1) = lVar6;
    if (param_10 == 0) {
      iVar3 = 0;
    }
    *(uint **)((longlong)afStack_98 + lVar1) = param_8;
    local_64 = iVar3;
    uVar10 = param_9 >> 1;
    local_48 = param_5->eatfirst;
    local_44 = param_5->eatfirst >> 1;
    param_5->eatfirst = local_44;
    local_68 = param_4 & 4;
    if ((param_4 & 4) == 0) {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6e93;
      read_channel_data(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                        *(void **)((longlong)&lStack_90 + lVar1));
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6e8c;
      read_channel_data_2(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                          *(void **)((longlong)&lStack_90 + lVar1));
    }
    *(int *)((longlong)local_88 + lVar1 + 8) = local_64;
    *(uint *)((longlong)local_88 + lVar1) = uVar10;
    *(short **)((longlong)&lStack_90 + lVar1) = param_11;
    *(float *)((longlong)afStack_98 + lVar1) = param_2;
    *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6ec6;
    inverse_transform_to_s16
              (param_4,param_5,pfVar7,param_1,*(float *)((longlong)afStack_98 + lVar1),
               *(short **)((longlong)&lStack_90 + lVar1),*(uint *)((longlong)local_88 + lVar1),
               *(uint *)((longlong)local_88 + lVar1 + 8));
    iVar3 = local_48 - local_44;
    *(longlong *)((longlong)&lStack_90 + lVar1) = lVar6;
    *(uint **)((longlong)afStack_98 + lVar1) = param_8;
    param_5->eatfirst = param_5->eatfirst + iVar3;
    if (local_68 == 0) {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6efe;
      read_channel_data(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                        *(void **)((longlong)&lStack_90 + lVar1));
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6ef7;
      read_channel_data_2(pfVar7,param_1,param_7,&local_60,*(uint **)((longlong)afStack_98 + lVar1),
                          *(void **)((longlong)&lStack_90 + lVar1));
    }
    param_11 = (short *)((ulonglong)uVar10 + (longlong)param_11);
    *(int *)((longlong)local_88 + lVar1 + 8) = local_64;
    *(uint *)((longlong)local_88 + lVar1) = uVar10;
  }
  *(short **)((longlong)&lStack_90 + lVar1) = param_11;
  *(float *)((longlong)afStack_98 + lVar1) = param_2;
  *(undefined8 *)(auStack_b8 + lVar1 + -8) = 0x14f8d6f34;
  inverse_transform_to_s16
            (param_4,param_5,pfVar7,param_1,*(float *)((longlong)afStack_98 + lVar1),
             *(short **)((longlong)&lStack_90 + lVar1),*(uint *)((longlong)local_88 + lVar1),
             *(uint *)((longlong)local_88 + lVar1 + 8));
LAB_14f8d7063:
  param_6->inptr =
       (void *)((longlong)param_6->inptr +
               ((longlong)local_60.cur +
                (-(longlong)param_6->inptr - (ulonglong)(local_60.bitlen >> 3)) + 3 &
               0xfffffffffffffffc));
  *(undefined8 *)(puVar5 + -8) = 0x14f8d7092;
  return;
}

// decode_pfxsum @ 14f8d70c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
decode_pfxsum(float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
             ulong64 param_6,int param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  unkbyte10 Var9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  ushort uVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  ushort uVar35;
  short sVar36;
  short sVar37;
  ushort uVar38;
  ushort uVar39;
  short sVar40;
  short sVar41;
  ushort uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  undefined1 auVar45 [16];
  ushort uVar50;
  undefined1 auVar46 [16];
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_f8 [32];
  float local_d8 [5];
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  auVar55 = ___xmm_0706070607060706ffffffffffffffff;
  auVar57 = ___xmm_00000000000000804020100804020100;
  sVar17 = _UNK_150b5136e;
  sVar16 = _UNK_150b5136c;
  sVar15 = _UNK_150b5136a;
  sVar14 = _UNK_150b51368;
  sVar13 = _UNK_150b51366;
  sVar12 = _UNK_150b51364;
  sVar11 = _UNK_150b51362;
  sVar10 = ___xmm_00010001000100010001000100010001;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar21 = (longlong)param_7;
  uVar24 = 0;
  uVar18 = (1 << ((byte)param_7 & 0x1f)) - 1;
  lVar19 = lVar21 * 0x20;
  uVar22 = (ulonglong)((uint)param_3 & 7);
  uVar35 = *(ushort *)((longlong)bink_invertbins + lVar19 + 0x52) >> uVar22;
  uVar38 = *(ushort *)((longlong)bink_invertbins + lVar19 + 0x56) >> uVar22;
  uVar39 = *(ushort *)((longlong)bink_invertbins + lVar19 + 0x5a) >> uVar22;
  uVar42 = *(ushort *)((longlong)bink_invertbins + lVar19 + 0x5e) >> uVar22;
  uVar47 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff &
           *(ushort *)(bink_invertbins + lVar21 * 8 + 0x14) >> uVar22;
  uVar48 = _UNK_1506e9ce2 & uVar35;
  uVar49 = _UNK_1506e9ce4 & *(ushort *)(bink_invertbins + lVar21 * 8 + 0x15) >> uVar22;
  uVar50 = _UNK_1506e9ce6 & uVar38;
  uVar51 = _UNK_1506e9ce8 & *(ushort *)(bink_invertbins + lVar21 * 8 + 0x16) >> uVar22;
  uVar52 = _UNK_1506e9cea & uVar39;
  uVar53 = _UNK_1506e9cec & *(ushort *)(bink_invertbins + lVar21 * 8 + 0x17) >> uVar22;
  uVar54 = _UNK_1506e9cee & uVar42;
  sVar27 = uVar47 * 2;
  sVar32 = uVar48 * 2;
  sVar36 = uVar49 * 2;
  sVar37 = uVar50 * 2;
  sVar40 = uVar51 * 2;
  sVar41 = uVar52 * 2;
  sVar5 = uVar53 * 2;
  sVar6 = uVar54 * 2;
  sVar25 = -(ushort)(uVar47 == *(ushort *)(bink_invertbins + lVar21 * 8 + 0x14) >> uVar22);
  sVar26 = -(ushort)(uVar48 == uVar35);
  sVar28 = -(ushort)(uVar49 == *(ushort *)(bink_invertbins + lVar21 * 8 + 0x15) >> uVar22);
  sVar29 = -(ushort)(uVar50 == uVar38);
  sVar30 = -(ushort)(uVar51 == *(ushort *)(bink_invertbins + lVar21 * 8 + 0x16) >> uVar22);
  sVar31 = -(ushort)(uVar52 == uVar39);
  sVar33 = -(ushort)(uVar53 == *(ushort *)(bink_invertbins + lVar21 * 8 + 0x17) >> uVar22);
  sVar34 = -(ushort)(uVar54 == uVar42);
  auVar46[0] = *(char *)(bink_invertbins + lVar21 * 8 + 0x10) - (char)sVar25;
  auVar46[1] = *(char *)((longlong)bink_invertbins + lVar19 + 0x41) - (char)((ushort)sVar25 >> 8);
  auVar46[2] = *(char *)((longlong)bink_invertbins + lVar19 + 0x42) - (char)sVar26;
  auVar46[3] = *(char *)((longlong)bink_invertbins + lVar19 + 0x43) - (char)((ushort)sVar26 >> 8);
  auVar46[4] = *(char *)(bink_invertbins + lVar21 * 8 + 0x11) - (char)sVar28;
  auVar46[5] = *(char *)((longlong)bink_invertbins + lVar19 + 0x45) - (char)((ushort)sVar28 >> 8);
  auVar46[6] = *(char *)((longlong)bink_invertbins + lVar19 + 0x46) - (char)sVar29;
  auVar46[7] = *(char *)((longlong)bink_invertbins + lVar19 + 0x47) - (char)((ushort)sVar29 >> 8);
  auVar46[8] = *(char *)(bink_invertbins + lVar21 * 8 + 0x12) - (char)sVar30;
  auVar46[9] = *(char *)((longlong)bink_invertbins + lVar19 + 0x49) - (char)((ushort)sVar30 >> 8);
  auVar46[10] = *(char *)((longlong)bink_invertbins + lVar19 + 0x4a) - (char)sVar31;
  auVar46[0xb] = *(char *)((longlong)bink_invertbins + lVar19 + 0x4b) - (char)((ushort)sVar31 >> 8);
  auVar46[0xc] = *(char *)(bink_invertbins + lVar21 * 8 + 0x13) - (char)sVar33;
  auVar46[0xd] = *(char *)((longlong)bink_invertbins + lVar19 + 0x4d) - (char)((ushort)sVar33 >> 8);
  auVar46[0xe] = *(char *)((longlong)bink_invertbins + lVar19 + 0x4e) - (char)sVar34;
  auVar46[0xf] = *(char *)((longlong)bink_invertbins + lVar19 + 0x4f) - (char)((ushort)sVar34 >> 8);
  auVar56[0] = __xmm_01010101010101010101010101010101 + auVar46[0];
  auVar56[1] = UNK_150b50e21 + auVar46[1];
  auVar56[2] = UNK_150b50e22 + auVar46[2];
  auVar56[3] = UNK_150b50e23 + auVar46[3];
  auVar56[4] = UNK_150b50e24 + auVar46[4];
  auVar56[5] = UNK_150b50e25 + auVar46[5];
  auVar56[6] = UNK_150b50e26 + auVar46[6];
  auVar56[7] = UNK_150b50e27 + auVar46[7];
  auVar56[8] = UNK_150b50e28 + auVar46[8];
  auVar56[9] = UNK_150b50e29 + auVar46[9];
  auVar56[10] = UNK_150b50e2a + auVar46[10];
  auVar56[0xb] = UNK_150b50e2b + auVar46[0xb];
  auVar56[0xc] = UNK_150b50e2c + auVar46[0xc];
  auVar56[0xd] = UNK_150b50e2d + auVar46[0xd];
  auVar56[0xe] = UNK_150b50e2e + auVar46[0xe];
  auVar56[0xf] = UNK_150b50e2f + auVar46[0xf];
  uVar22 = param_6 & 0xfffffffffffffff8;
  if (uVar22 != 0) {
    uVar23 = uVar24;
    do {
      auVar45 = pshufb(*(undefined1 (*) [16])(param_2 + (param_3 >> 3)),auVar46);
      uVar35 = (ushort)(auVar45._0_2_ * sVar27) >> 8;
      uVar38 = (ushort)(auVar45._2_2_ * sVar32) >> 8;
      uVar39 = (ushort)(auVar45._4_2_ * sVar36) >> 8;
      uVar42 = (ushort)(auVar45._6_2_ * sVar37) >> 8;
      uVar47 = (ushort)(auVar45._8_2_ * sVar40) >> 8;
      uVar48 = (ushort)(auVar45._10_2_ * sVar41) >> 8;
      uVar49 = (ushort)(auVar45._12_2_ * sVar5) >> 8;
      uVar50 = (ushort)(auVar45._14_2_ * sVar6) >> 8;
      if (8 < param_7) {
        auVar45 = pshufb(*(undefined1 (*) [16])(param_2 + (param_3 >> 3)),auVar56);
        uVar35 = uVar35 | auVar45._0_2_ * sVar27;
        uVar38 = uVar38 | auVar45._2_2_ * sVar32;
        uVar39 = uVar39 | auVar45._4_2_ * sVar36;
        uVar42 = uVar42 | auVar45._6_2_ * sVar37;
        uVar47 = uVar47 | auVar45._8_2_ * sVar40;
        uVar48 = uVar48 | auVar45._10_2_ * sVar41;
        uVar49 = uVar49 | auVar45._12_2_ * sVar5;
        uVar50 = uVar50 | auVar45._14_2_ * sVar6;
      }
      param_3 = param_3 + (longlong)(param_7 * 8);
      auVar45._0_2_ = sVar10 - (ushort)((uVar35 & uVar18) == 0);
      sVar25 = sVar11 - (ushort)((uVar38 & uVar18) == 0);
      sVar26 = sVar12 - (ushort)((uVar39 & uVar18) == 0);
      auVar45._8_2_ = sVar14 - (ushort)((uVar47 & uVar18) == 0);
      sVar28 = sVar15 - (ushort)((uVar48 & uVar18) == 0);
      sVar29 = sVar16 - (ushort)((uVar49 & uVar18) == 0);
      sVar30 = auVar45._0_2_ + sVar25;
      sVar31 = auVar45._8_2_ + sVar28;
      auVar45._2_2_ = sVar30;
      auVar45._4_2_ = auVar45._0_2_ + sVar25 + sVar26;
      auVar45._6_2_ = sVar30 + sVar26 + (sVar13 - (ushort)((uVar42 & uVar18) == 0));
      auVar45._10_2_ = sVar31;
      auVar45._12_2_ = auVar45._8_2_ + sVar28 + sVar29;
      auVar45._14_2_ = sVar31 + sVar29 + (sVar17 - (ushort)((uVar50 & uVar18) == 0));
      auVar43 = pshufb(auVar45,auVar55);
      auVar44._0_2_ = auVar43._0_2_ + auVar45._0_2_;
      auVar44._2_2_ = auVar43._2_2_ + sVar30;
      auVar44._4_2_ = auVar43._4_2_ + auVar45._4_2_;
      auVar44._6_2_ = auVar43._6_2_ + auVar45._6_2_;
      auVar44._8_2_ = auVar43._8_2_ + auVar45._8_2_;
      auVar44._10_2_ = auVar43._10_2_ + sVar31;
      auVar44._12_2_ = auVar43._12_2_ + auVar45._12_2_;
      auVar44._14_2_ = auVar43._14_2_ + auVar45._14_2_;
      auVar45 = pshufb(ZEXT416(*(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7) & 0xff),
                       ZEXT816(0));
      auVar43 = pshufb(auVar57,auVar44);
      auVar45 = auVar45 & auVar43;
      uVar51 = (ushort)(auVar45._0_2_ == auVar43._0_2_);
      uVar52 = (ushort)(auVar45._2_2_ == auVar43._2_2_);
      uVar53 = (ushort)(auVar45._4_2_ == auVar43._4_2_);
      uVar54 = (ushort)(auVar45._6_2_ == auVar43._6_2_);
      uVar1 = (ushort)(auVar45._8_2_ == auVar43._8_2_);
      uVar2 = (ushort)(auVar45._10_2_ == auVar43._10_2_);
      uVar3 = (ushort)(auVar45._12_2_ == auVar43._12_2_);
      uVar4 = (ushort)(auVar45._14_2_ == auVar43._14_2_);
      sVar25 = (-uVar52 ^ uVar38 & uVar18) + uVar52;
      sVar26 = (-uVar53 ^ uVar39 & uVar18) + uVar53;
      sVar28 = (-uVar54 ^ uVar42 & uVar18) + uVar54;
      param_4 = param_4 + (auVar44._14_2_ & 0xf);
      Var9 = CONCAT64(CONCAT42(CONCAT22(sVar28,sVar28),sVar26),CONCAT22(sVar26,sVar28));
      auVar7._4_8_ = (longlong)((unkuint10)Var9 >> 0x10);
      auVar7._2_2_ = sVar25;
      auVar7._0_2_ = sVar25;
      pfVar20 = param_1 + uVar23;
      *pfVar20 = (float)(int)(short)((-uVar51 ^ uVar35 & uVar18) + uVar51);
      pfVar20[1] = (float)(auVar7._0_4_ >> 0x10);
      pfVar20[2] = (float)((int)((unkuint10)Var9 >> 0x10) >> 0x10);
      pfVar20[3] = (float)(int)sVar28;
      pfVar20 = param_1 + uVar23 + 4;
      *pfVar20 = (float)(int)(short)((-uVar1 ^ uVar47 & uVar18) + uVar1);
      pfVar20[1] = (float)(int)(short)((-uVar2 ^ uVar48 & uVar18) + uVar2);
      pfVar20[2] = (float)(int)(short)((-uVar3 ^ uVar49 & uVar18) + uVar3);
      pfVar20[3] = (float)(int)(short)((-uVar4 ^ uVar50 & uVar18) + uVar4);
      if (param_5 < param_4) {
        return param_5;
      }
      if (param_5 < param_3) {
        return param_5;
      }
      uVar23 = uVar23 + 8;
    } while (uVar23 < uVar22);
  }
  uVar23 = (ulonglong)((uint)param_6 & 7);
  if ((param_6 & 7) != 0) {
    auVar55 = pshufb(*(undefined1 (*) [16])(param_2 + (param_3 >> 3)),auVar46);
    uVar35 = (ushort)(auVar55._0_2_ * sVar27) >> 8;
    uVar38 = (ushort)(auVar55._2_2_ * sVar32) >> 8;
    uVar39 = (ushort)(auVar55._4_2_ * sVar36) >> 8;
    uVar42 = (ushort)(auVar55._6_2_ * sVar37) >> 8;
    uVar47 = (ushort)(auVar55._8_2_ * sVar40) >> 8;
    uVar48 = (ushort)(auVar55._10_2_ * sVar41) >> 8;
    uVar49 = (ushort)(auVar55._12_2_ * sVar5) >> 8;
    uVar50 = (ushort)(auVar55._14_2_ * sVar6) >> 8;
    if (8 < param_7) {
      auVar55 = pshufb(*(undefined1 (*) [16])(param_2 + (param_3 >> 3)),auVar56);
      uVar35 = uVar35 | auVar55._0_2_ * sVar27;
      uVar38 = uVar38 | auVar55._2_2_ * sVar32;
      uVar39 = uVar39 | auVar55._4_2_ * sVar36;
      uVar42 = uVar42 | auVar55._6_2_ * sVar37;
      uVar47 = uVar47 | auVar55._8_2_ * sVar40;
      uVar48 = uVar48 | auVar55._10_2_ * sVar41;
      uVar49 = uVar49 | auVar55._12_2_ * sVar5;
      uVar50 = uVar50 | auVar55._14_2_ * sVar6;
    }
    auVar55._0_2_ = ___xmm_00010001000100010001000100010001 - (ushort)((uVar35 & uVar18) == 0);
    sVar36 = _UNK_150b51362 - (ushort)((uVar38 & uVar18) == 0);
    sVar37 = _UNK_150b51364 - (ushort)((uVar39 & uVar18) == 0);
    auVar55._8_2_ = _UNK_150b51368 - (ushort)((uVar47 & uVar18) == 0);
    sVar40 = _UNK_150b5136a - (ushort)((uVar48 & uVar18) == 0);
    sVar41 = _UNK_150b5136c - (ushort)((uVar49 & uVar18) == 0);
    sVar27 = auVar55._0_2_ + sVar36;
    sVar32 = auVar55._8_2_ + sVar40;
    auVar55._2_2_ = sVar27;
    auVar55._4_2_ = auVar55._0_2_ + sVar36 + sVar37;
    auVar55._6_2_ = sVar27 + sVar37 + (_UNK_150b51366 - (ushort)((uVar42 & uVar18) == 0));
    auVar55._10_2_ = sVar32;
    auVar55._12_2_ = auVar55._8_2_ + sVar40 + sVar41;
    auVar55._14_2_ = sVar32 + sVar41 + (_UNK_150b5136e - (ushort)((uVar50 & uVar18) == 0));
    auVar46 = pshufb(auVar55,___xmm_0706070607060706ffffffffffffffff);
    local_b8._0_2_ = auVar46._0_2_ + auVar55._0_2_;
    local_b8._2_2_ = auVar46._2_2_ + sVar27;
    local_b8._4_2_ = auVar46._4_2_ + auVar55._4_2_;
    local_b8._6_2_ = auVar46._6_2_ + auVar55._6_2_;
    local_b8._8_2_ = auVar46._8_2_ + auVar55._8_2_;
    local_b8._10_2_ = auVar46._10_2_ + sVar32;
    local_b8._12_2_ = auVar46._12_2_ + auVar55._12_2_;
    local_b8._14_2_ = auVar46._14_2_ + auVar55._14_2_;
    auVar55 = pshufb(ZEXT416(*(uint *)(param_2 + (param_4 >> 3)) >> ((byte)param_4 & 7) & 0xff),
                     ZEXT816(0));
    auVar57 = pshufb(auVar57,local_b8);
    auVar55 = auVar55 & auVar57;
    param_4 = param_4 + *(ushort *)(local_b8 + uVar23 * 2 + -2);
    uVar51 = (ushort)(auVar55._0_2_ == auVar57._0_2_);
    uVar52 = (ushort)(auVar55._2_2_ == auVar57._2_2_);
    uVar53 = (ushort)(auVar55._4_2_ == auVar57._4_2_);
    uVar54 = (ushort)(auVar55._6_2_ == auVar57._6_2_);
    uVar1 = (ushort)(auVar55._8_2_ == auVar57._8_2_);
    uVar2 = (ushort)(auVar55._10_2_ == auVar57._10_2_);
    uVar3 = (ushort)(auVar55._12_2_ == auVar57._12_2_);
    uVar4 = (ushort)(auVar55._14_2_ == auVar57._14_2_);
    sVar27 = (-uVar52 ^ uVar38 & uVar18) + uVar52;
    sVar32 = (-uVar53 ^ uVar39 & uVar18) + uVar53;
    sVar36 = (-uVar54 ^ uVar42 & uVar18) + uVar54;
    Var9 = CONCAT64(CONCAT42(CONCAT22(sVar36,sVar36),sVar32),CONCAT22(sVar32,sVar36));
    auVar8._4_8_ = (longlong)((unkuint10)Var9 >> 0x10);
    auVar8._2_2_ = sVar27;
    auVar8._0_2_ = sVar27;
    local_d8[0] = (float)(int)(short)((-uVar51 ^ uVar35 & uVar18) + uVar51);
    local_d8[1] = (float)(auVar8._0_4_ >> 0x10);
    local_d8[2] = (float)((int)((unkuint10)Var9 >> 0x10) >> 0x10);
    local_d8[3] = (float)(int)sVar36;
    local_d8[4] = (float)(int)(short)((-uVar1 ^ uVar47 & uVar18) + uVar1);
    fStack_c4 = (float)(int)(short)((-uVar2 ^ uVar48 & uVar18) + uVar2);
    fStack_c0 = (float)(int)(short)((-uVar3 ^ uVar49 & uVar18) + uVar3);
    uStack_bc = (float)(int)(short)((-uVar4 ^ uVar50 & uVar18) + uVar4);
    if (3 < uVar23) {
      lVar19 = uVar22 * 4 + 8;
      pfVar20 = param_1 + uVar22 + 2;
      lVar21 = (uVar23 - 4 >> 2) + 1;
      uVar24 = lVar21 * 4;
      do {
        pfVar20[-2] = *(float *)((longlong)local_d8 + (-(longlong)param_1 - lVar19) +
                                (longlong)pfVar20);
        pfVar20[-1] = *(float *)((longlong)local_d8 + (-(longlong)param_1 - lVar19) + 4 +
                                (longlong)pfVar20);
        *pfVar20 = *(float *)((longlong)local_d8 + (uVar22 * -4 - (longlong)param_1) +
                             (longlong)pfVar20);
        pfVar20[1] = *(float *)((longlong)local_d8 + (uVar22 * -4 - (longlong)param_1) + 4 +
                               (longlong)pfVar20);
        pfVar20 = pfVar20 + 4;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (uVar24 < uVar23) {
      memcpy(param_1 + uVar24 + uVar22,local_d8 + uVar24,(uVar23 - uVar24) * 4);
    }
  }
  return param_4;
}

// decode_pfxsum_8 @ 14f8d74b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
decode_pfxsum_8(float *param_1,uchar *param_2,__m128i *param_3,__m128i *param_4,__m128i *param_5,
               __m128i *param_6,__m128i *param_7,__m128i *param_8,ulong64 param_9,ulong64 param_10,
               int param_11)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 auVar13 [12];
  unkbyte10 Var14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar21 [16];
  __m128i _Var22;
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  undefined1 auVar24 [16];
  ushort uVar31;
  
  auVar24 = pshufb(*(undefined1 (*) [16])(param_2 + (param_9 >> 3)),(undefined1  [16])*param_3);
  uVar23 = (ushort)(auVar24._0_2_ * param_5->m128i_i16[0]) >> 8;
  uVar25 = (ushort)(auVar24._2_2_ * param_5->m128i_i16[1]) >> 8;
  uVar26 = (ushort)(auVar24._4_2_ * param_5->m128i_i16[2]) >> 8;
  uVar27 = (ushort)(auVar24._6_2_ * param_5->m128i_i16[3]) >> 8;
  uVar28 = (ushort)(auVar24._8_2_ * param_5->m128i_i16[4]) >> 8;
  uVar29 = (ushort)(auVar24._10_2_ * param_5->m128i_i16[5]) >> 8;
  uVar30 = (ushort)(auVar24._12_2_ * param_5->m128i_i16[6]) >> 8;
  uVar31 = (ushort)(auVar24._14_2_ * param_5->m128i_i16[7]) >> 8;
  if (8 < param_11) {
    auVar24 = pshufb(*(undefined1 (*) [16])(param_2 + (param_9 >> 3)),(undefined1  [16])*param_4);
    uVar23 = uVar23 | auVar24._0_2_ * param_5->m128i_i16[0];
    uVar25 = uVar25 | auVar24._2_2_ * param_5->m128i_i16[1];
    uVar26 = uVar26 | auVar24._4_2_ * param_5->m128i_i16[2];
    uVar27 = uVar27 | auVar24._6_2_ * param_5->m128i_i16[3];
    uVar28 = uVar28 | auVar24._8_2_ * param_5->m128i_i16[4];
    uVar29 = uVar29 | auVar24._10_2_ * param_5->m128i_i16[5];
    uVar30 = uVar30 | auVar24._12_2_ * param_5->m128i_i16[6];
    uVar31 = uVar31 | auVar24._14_2_ * param_5->m128i_i16[7];
  }
  uVar9 = param_7->m128i_u16[4];
  uVar10 = param_7->m128i_u16[5];
  uVar11 = param_7->m128i_u16[6];
  uVar12 = param_7->m128i_u16[7];
  auVar24._0_2_ =
       ___xmm_00010001000100010001000100010001 - (ushort)((uVar23 & param_7->m128i_u16[0]) == 0);
  sVar17 = _UNK_150b51362 - (ushort)((uVar25 & param_7->m128i_u16[1]) == 0);
  sVar18 = _UNK_150b51364 - (ushort)((uVar26 & param_7->m128i_u16[2]) == 0);
  auVar24._8_2_ = _UNK_150b51368 - (ushort)((uVar28 & uVar9) == 0);
  sVar19 = _UNK_150b5136a - (ushort)((uVar29 & uVar10) == 0);
  sVar20 = _UNK_150b5136c - (ushort)((uVar30 & uVar11) == 0);
  sVar15 = auVar24._0_2_ + sVar17;
  sVar16 = auVar24._8_2_ + sVar19;
  auVar24._2_2_ = sVar15;
  auVar24._4_2_ = auVar24._0_2_ + sVar17 + sVar18;
  auVar24._6_2_ =
       sVar15 + sVar18 + (_UNK_150b51366 - (ushort)((uVar27 & param_7->m128i_u16[3]) == 0));
  auVar24._10_2_ = sVar16;
  auVar24._12_2_ = auVar24._8_2_ + sVar19 + sVar20;
  auVar24._14_2_ = sVar16 + sVar20 + (_UNK_150b5136e - (ushort)((uVar31 & uVar12) == 0));
  auVar21 = pshufb(auVar24,___xmm_0706070607060706ffffffffffffffff);
  _Var22._0_2_ = auVar21._0_2_ + auVar24._0_2_;
  _Var22._2_2_ = auVar21._2_2_ + sVar15;
  _Var22._4_2_ = auVar21._4_2_ + auVar24._4_2_;
  _Var22._6_2_ = auVar21._6_2_ + auVar24._6_2_;
  _Var22._8_2_ = auVar21._8_2_ + auVar24._8_2_;
  _Var22._10_2_ = auVar21._10_2_ + sVar16;
  _Var22._12_2_ = auVar21._12_2_ + auVar24._12_2_;
  _Var22._14_2_ = auVar21._14_2_ + auVar24._14_2_;
  auVar21 = pshufb((undefined1  [16])*param_6,(undefined1  [16])_Var22);
  auVar24 = pshufb(ZEXT416(*(uint *)(param_2 + (param_10 >> 3)) >> ((byte)param_10 & 7) & 0xff),
                   ZEXT816(0));
  auVar24 = auVar24 & auVar21;
  uVar1 = (ushort)(auVar24._0_2_ == auVar21._0_2_);
  uVar2 = (ushort)(auVar24._2_2_ == auVar21._2_2_);
  uVar3 = (ushort)(auVar24._4_2_ == auVar21._4_2_);
  uVar4 = (ushort)(auVar24._6_2_ == auVar21._6_2_);
  uVar5 = (ushort)(auVar24._8_2_ == auVar21._8_2_);
  uVar6 = (ushort)(auVar24._10_2_ == auVar21._10_2_);
  uVar7 = (ushort)(auVar24._12_2_ == auVar21._12_2_);
  uVar8 = (ushort)(auVar24._14_2_ == auVar21._14_2_);
  sVar15 = (-uVar2 ^ uVar25 & param_7->m128i_u16[1]) + uVar2;
  sVar16 = (-uVar3 ^ uVar26 & param_7->m128i_u16[2]) + uVar3;
  sVar17 = (-uVar4 ^ uVar27 & param_7->m128i_u16[3]) + uVar4;
  Var14 = CONCAT64(CONCAT42(CONCAT22(sVar17,sVar17),sVar16),CONCAT22(sVar16,sVar17));
  auVar13._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
  auVar13._2_2_ = sVar15;
  auVar13._0_2_ = sVar15;
  *param_1 = (float)(int)(short)((-uVar1 ^ uVar23 & param_7->m128i_u16[0]) + uVar1);
  param_1[1] = (float)(auVar13._0_4_ >> 0x10);
  param_1[2] = (float)((int)((unkuint10)Var14 >> 0x10) >> 0x10);
  param_1[3] = (float)(int)sVar17;
  param_1[4] = (float)(int)(short)((-uVar5 ^ uVar28 & uVar9) + uVar5);
  param_1[5] = (float)(int)(short)((-uVar6 ^ uVar29 & uVar10) + uVar6);
  param_1[6] = (float)(int)(short)((-uVar7 ^ uVar30 & uVar11) + uVar7);
  param_1[7] = (float)(int)(short)((-uVar8 ^ uVar31 & uVar12) + uVar8);
  *param_8 = _Var22;
  return;
}

// decode_scalar @ 14f8d75c0

uint __cdecl
decode_scalar(float *param_1,uchar *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
             int param_6)

{
  ushort uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  switch(param_6) {
  case 1:
    uVar2 = decode_coeffs_runlength_8<1>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 2:
    uVar2 = decode_coeffs_runlength_8<2>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 3:
    uVar2 = decode_coeffs_runlength_8<3>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 4:
    uVar2 = decode_coeffs_runlength_8<4>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 5:
    uVar2 = decode_coeffs_runlength_8<5>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 6:
    uVar2 = decode_coeffs_runlength_8<6>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 7:
    uVar2 = decode_coeffs_runlength_8<7>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 8:
    uVar2 = decode_coeffs_runlength_4<8>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 9:
    uVar2 = decode_coeffs_runlength_4<9>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 10:
    uVar2 = decode_coeffs_runlength_4<10>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 0xb:
    uVar2 = decode_coeffs_runlength_4<11>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 0xc:
    uVar2 = decode_coeffs_runlength_4<12>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 0xd:
    uVar2 = decode_coeffs_runlength_4<13>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 0xe:
    uVar2 = decode_coeffs_runlength_4<14>(param_1,param_2,param_3,param_4,param_5);
    return (uint)uVar2;
  case 0xf:
    uVar6 = 0;
    if (param_5 != 0) {
      do {
        bVar7 = (byte)param_3;
        uVar3 = param_3 >> 3;
        param_3 = param_3 + 0xf;
        uVar5 = *(uint *)(param_2 + uVar3) >> (bVar7 & 7);
        bVar7 = (byte)param_4;
        uVar3 = param_4 >> 3;
        uVar4 = (ushort)uVar5 & 0x7fff;
        param_4 = param_4 + ((uVar5 & 0x7fff) != 0);
        uVar1 = -uVar4;
        if ((*(uint *)(param_2 + uVar3) >> (bVar7 & 7) & 1) == 0) {
          uVar1 = uVar4;
        }
        param_1[uVar6] = (float)(int)(short)uVar1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_5);
    }
  }
  return (uint)param_4;
}

// determine_shuffle_and_mul @ 14f8d77d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
determine_shuffle_and_mul(__m128i *param_1,__m128i *param_2,int param_3,ulong64 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  
  lVar16 = (longlong)param_3;
  lVar17 = lVar16 * 0x20;
  uVar18 = (ulonglong)((uint)param_4 & 7);
  uVar27 = *(ushort *)((longlong)bink_invertbins + lVar17 + 0x52) >> uVar18;
  uVar28 = *(ushort *)((longlong)bink_invertbins + lVar17 + 0x56) >> uVar18;
  uVar29 = *(ushort *)((longlong)bink_invertbins + lVar17 + 0x5a) >> uVar18;
  uVar30 = *(ushort *)((longlong)bink_invertbins + lVar17 + 0x5e) >> uVar18;
  cVar1 = *(char *)((longlong)bink_invertbins + lVar17 + 0x41);
  cVar2 = *(char *)((longlong)bink_invertbins + lVar17 + 0x42);
  cVar3 = *(char *)((longlong)bink_invertbins + lVar17 + 0x43);
  cVar4 = *(char *)(bink_invertbins + lVar16 * 8 + 0x11);
  cVar5 = *(char *)((longlong)bink_invertbins + lVar17 + 0x45);
  cVar6 = *(char *)((longlong)bink_invertbins + lVar17 + 0x46);
  cVar7 = *(char *)((longlong)bink_invertbins + lVar17 + 0x47);
  cVar8 = *(char *)(bink_invertbins + lVar16 * 8 + 0x12);
  cVar9 = *(char *)((longlong)bink_invertbins + lVar17 + 0x49);
  cVar10 = *(char *)((longlong)bink_invertbins + lVar17 + 0x4a);
  cVar11 = *(char *)((longlong)bink_invertbins + lVar17 + 0x4b);
  cVar12 = *(char *)(bink_invertbins + lVar16 * 8 + 0x13);
  cVar13 = *(char *)((longlong)bink_invertbins + lVar17 + 0x4d);
  cVar14 = *(char *)((longlong)bink_invertbins + lVar17 + 0x4e);
  cVar15 = *(char *)((longlong)bink_invertbins + lVar17 + 0x4f);
  uVar31 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff &
           *(ushort *)(bink_invertbins + lVar16 * 8 + 0x14) >> uVar18;
  uVar32 = _UNK_1506e9ce2 & uVar27;
  uVar33 = _UNK_1506e9ce4 & *(ushort *)(bink_invertbins + lVar16 * 8 + 0x15) >> uVar18;
  uVar34 = _UNK_1506e9ce6 & uVar28;
  uVar35 = _UNK_1506e9ce8 & *(ushort *)(bink_invertbins + lVar16 * 8 + 0x16) >> uVar18;
  uVar36 = _UNK_1506e9cea & uVar29;
  uVar37 = _UNK_1506e9cec & *(ushort *)(bink_invertbins + lVar16 * 8 + 0x17) >> uVar18;
  uVar38 = _UNK_1506e9cee & uVar30;
  sVar19 = -(ushort)(uVar31 == *(ushort *)(bink_invertbins + lVar16 * 8 + 0x14) >> uVar18);
  sVar20 = -(ushort)(uVar32 == uVar27);
  sVar21 = -(ushort)(uVar33 == *(ushort *)(bink_invertbins + lVar16 * 8 + 0x15) >> uVar18);
  sVar22 = -(ushort)(uVar34 == uVar28);
  sVar23 = -(ushort)(uVar35 == *(ushort *)(bink_invertbins + lVar16 * 8 + 0x16) >> uVar18);
  sVar24 = -(ushort)(uVar36 == uVar29);
  sVar25 = -(ushort)(uVar37 == *(ushort *)(bink_invertbins + lVar16 * 8 + 0x17) >> uVar18);
  sVar26 = -(ushort)(uVar38 == uVar30);
  param_1->m128i_i8[0] = *(char *)(bink_invertbins + lVar16 * 8 + 0x10) - (char)sVar19;
  param_1->m128i_i8[1] = cVar1 - (char)((ushort)sVar19 >> 8);
  param_1->m128i_i8[2] = cVar2 - (char)sVar20;
  param_1->m128i_i8[3] = cVar3 - (char)((ushort)sVar20 >> 8);
  param_1->m128i_i8[4] = cVar4 - (char)sVar21;
  param_1->m128i_i8[5] = cVar5 - (char)((ushort)sVar21 >> 8);
  param_1->m128i_i8[6] = cVar6 - (char)sVar22;
  param_1->m128i_i8[7] = cVar7 - (char)((ushort)sVar22 >> 8);
  param_1->m128i_i8[8] = cVar8 - (char)sVar23;
  param_1->m128i_i8[9] = cVar9 - (char)((ushort)sVar23 >> 8);
  param_1->m128i_i8[10] = cVar10 - (char)sVar24;
  param_1->m128i_i8[0xb] = cVar11 - (char)((ushort)sVar24 >> 8);
  param_1->m128i_i8[0xc] = cVar12 - (char)sVar25;
  param_1->m128i_i8[0xd] = cVar13 - (char)((ushort)sVar25 >> 8);
  param_1->m128i_i8[0xe] = cVar14 - (char)sVar26;
  param_1->m128i_i8[0xf] = cVar15 - (char)((ushort)sVar26 >> 8);
  param_2->m128i_i16[0] = uVar31 * 2;
  param_2->m128i_i16[1] = uVar32 * 2;
  param_2->m128i_i16[2] = uVar33 * 2;
  param_2->m128i_i16[3] = uVar34 * 2;
  param_2->m128i_i16[4] = uVar35 * 2;
  param_2->m128i_i16[5] = uVar36 * 2;
  param_2->m128i_i16[6] = uVar37 * 2;
  param_2->m128i_i16[7] = uVar38 * 2;
  return;
}

// fxptof @ 14f8d7830

float __cdecl fxptof(uint param_1)

{
  float fVar1;
  
  fVar1 = (float)(param_1 >> 5 & 0x77fffff) * bink_invertbins[param_1 & 0x1f];
  if ((param_1 >> 0x1c & 1) != 0) {
    fVar1 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  }
  return fVar1;
}

// have_room @ 14f8d7870

int __cdecl have_room(void **param_1,BINKAC_OUT_RINGBUF *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)&param_2->outend - *(int *)&param_2->outptr;
  uVar1 = param_2->outlen;
  if (uVar2 <= param_2->outlen) {
    uVar1 = uVar2;
  }
  *param_1 = param_2->outptr;
  if (uVar1 < param_3) {
    if (param_2->outlen - uVar1 < param_3) {
      return 0;
    }
    *param_1 = param_2->outstart;
  }
  return 1;
}

// inverse_transform_to_s16 @ 14f8d78b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
inverse_transform_to_s16
          (uint param_1,BINKAC_OUT_RINGBUF *param_2,float *param_3,uint param_4,float param_5,
          short *param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  short *psVar7;
  undefined1 auStack_68 [64];
  ulonglong local_28;
  short asStack_20 [4];
  
  local_28 = __security_cookie.value ^ (ulonglong)&local_28;
  uVar2 = param_4 * 2;
  uVar3 = *(int *)&param_2->outend - *(int *)&param_2->outptr;
  uVar1 = param_2->outlen;
  psVar7 = param_2->outptr;
  uVar5 = uVar1;
  if (uVar3 <= uVar1) {
    uVar5 = uVar3;
  }
  puVar6 = auStack_68;
  if (uVar5 < uVar2) {
    if (uVar1 - uVar5 < uVar2) {
      uVar4 = (ulonglong)(uVar2 + 0x10) + 0xf;
      if (uVar4 <= uVar2 + 0x10) {
        uVar4 = 0xffffffffffffff0;
      }
      puVar6 = auStack_68 + -(uVar4 & 0xfffffffffffffff0);
      psVar7 = (short *)((longlong)asStack_20 + -(uVar4 & 0xfffffffffffffff0));
    }
    else {
      psVar7 = param_2->outstart;
      puVar6 = auStack_68;
    }
  }
  *(uint *)(puVar6 + 0x38) = param_8;
  *(uint *)(puVar6 + 0x30) = param_7;
  *(short **)(puVar6 + 0x28) = param_6;
  *(float *)(puVar6 + 0x20) = param_5;
  *(undefined8 *)(puVar6 + -8) = 0x14f8d7968;
  linear_inverse_transform_to_s16
            (param_1,psVar7,param_3,param_4,*(float *)(puVar6 + 0x20),*(short **)(puVar6 + 0x28),
             *(uint *)(puVar6 + 0x30),*(uint *)(puVar6 + 0x38));
  *(undefined8 *)(puVar6 + -8) = 0x14f8d7978;
  update_ring(param_2,psVar7,uVar2 - param_7);
  *(undefined8 *)(puVar6 + -8) = 0x14f8d7984;
  return;
}

// inverse_transform_to_s16_stereo @ 14f8d79a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
inverse_transform_to_s16_stereo
          (uint param_1,BINKAC_OUT_RINGBUF *param_2,short *param_3,float *param_4,uint param_5,
          float param_6,short *param_7,uint param_8,uint param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 auStack_50 [5];
  ulonglong auStack_28 [4];
  
  auStack_28[2] = __security_cookie.value ^ (ulonglong)(auStack_28 + 2);
  uVar3 = (ulonglong)param_5;
  uVar2 = uVar3 * 4 + 0x4f;
  if (uVar2 <= uVar3 * 4 + 0x40) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x14f8d79fc;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(ulonglong *)((longlong)auStack_28 + lVar1 + 8) = uVar3;
  *(float **)((longlong)auStack_28 + lVar1) = param_4;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x14f8d7a27;
  radfft_idct_to_S16_stereo_interleaveUEBA
            (param_3,param_3 + uVar3,param_6,
             (float *)((ulonglong)(&stack0x00000027 + lVar1) & 0xffffffffffffffc0),
             *(float **)((longlong)auStack_28 + lVar1),
             *(ulong64 *)((longlong)auStack_28 + lVar1 + 8));
  uVar2 = (ulonglong)param_8;
  if (param_9 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x14f8d7a46;
    CrossFadeSSE2(param_3,param_7,param_8,param_9);
  }
  if ((uint)uVar2 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x14f8d7a62;
    ourmemcpy(param_7,(void *)(((ulonglong)(param_5 * 2) * 2 - uVar2) + (longlong)param_3),
              (uint)uVar2);
  }
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x14f8d7a78;
  update_ring(param_2,param_3,param_5 * 4 - (int)uVar2);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x14f8d7a84;
  return;
}

// linear_inverse_transform_to_s16 @ 14f8d7aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
linear_inverse_transform_to_s16
          (uint param_1,short *param_2,float *param_3,uint param_4,float param_5,short *param_6,
          uint param_7,uint param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uStackX_27;
  undefined8 auStack_50 [5];
  ulonglong auStack_28 [4];
  
  auStack_28[2] = __security_cookie.value ^ (ulonglong)(auStack_28 + 2);
  uVar1 = (ulonglong)param_4;
  uVar3 = uVar1 * 4 + 0x4f;
  if (uVar3 <= uVar1 * 4 + 0x40) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x14f8d7af5;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  *(ulonglong *)((longlong)auStack_28 + lVar2) = uVar1;
  *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x14f8d7b1a;
  radfft_idct_to_S16UEBA
            (param_2,param_5,(float *)((ulonglong)(&uStackX_27 + lVar2) & 0xffffffffffffffc0),
             param_3,*(ulong64 *)((longlong)auStack_28 + lVar2));
  uVar3 = (ulonglong)param_7;
  if (param_8 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x14f8d7b36;
    CrossFadeSSE2(param_2,param_6,param_7,param_8);
  }
  if ((uint)uVar3 != 0) {
    *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x14f8d7b4d;
    ourmemcpy(param_6,(void *)((uVar1 * 2 - uVar3) + (longlong)param_2),(uint)uVar3);
  }
  *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x14f8d7b59;
  return;
}

// load128u @ 14f8d7b80

__m128i * __cdecl load128u(__m128i *__return_storage_ptr__,void *param_1)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// ourmemcpy @ 14f8d7b90

void __cdecl ourmemcpy(void *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = param_3 >> 4 & 3;
  puVar9 = param_1;
  puVar11 = param_2;
  for (uVar13 = param_3 >> 6; uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    uVar4 = puVar11[4];
    uVar5 = puVar11[5];
    uVar6 = puVar11[6];
    uVar7 = puVar11[7];
    uVar8 = puVar11[1];
    *puVar9 = *puVar11;
    puVar9[1] = uVar8;
    puVar9 = puVar9 + 8;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x10 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x20 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((longlong)param_1 + (0x30 - (longlong)param_2) + (longlong)puVar11);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar11 = puVar11 + 8;
  }
  if (uVar12 != 0) {
    lVar10 = (longlong)puVar9 - (longlong)puVar11;
    do {
      uVar2 = puVar11[1];
      puVar9 = (undefined8 *)(lVar10 + (longlong)puVar11);
      *puVar9 = *puVar11;
      puVar9[1] = uVar2;
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// ourmemsetzero @ 14f8d7c10

void __cdecl ourmemsetzero(void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2 + 0x1f >> 5;
  do {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    param_1 = (void *)((longlong)param_1 + 0x20);
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}

// prefix_sum_u16 @ 14f8d7c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__m128i * __cdecl prefix_sum_u16(__m128i *__return_storage_ptr__,__m128i *param_1)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  short sVar2;
  short sVar3;
  undefined1 auVar4 [16];
  
  auVar1 = *(undefined1 (*) [16])__return_storage_ptr__->m128i_i8;
  sVar2 = auVar1._0_2_ + __return_storage_ptr__->m128i_i16[1];
  sVar3 = auVar1._8_2_ + __return_storage_ptr__->m128i_i16[5];
  auVar4._2_2_ = sVar2;
  auVar4._0_2_ = __return_storage_ptr__->m128i_i16[0];
  auVar4._4_2_ = __return_storage_ptr__->m128i_i16[0] +
                 auVar1._2_2_ + __return_storage_ptr__->m128i_i16[2];
  auVar4._6_2_ = sVar2 + auVar1._4_2_ + __return_storage_ptr__->m128i_i16[3];
  auVar4._8_2_ = __return_storage_ptr__->m128i_i16[4];
  auVar4._10_2_ = sVar3;
  auVar4._12_2_ =
       __return_storage_ptr__->m128i_i16[4] + auVar1._10_2_ + __return_storage_ptr__->m128i_i16[6];
  auVar4._14_2_ = sVar3 + auVar1._12_2_ + __return_storage_ptr__->m128i_i16[7];
  pshufb(auVar4,___xmm_0706070607060706ffffffffffffffff);
  return in_RAX;
}

// read_channel_data @ 14f8d7c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
read_channel_data(float *param_1,uint param_2,uint param_3,BINKVARBITS *param_4,uint *param_5,
                 void *param_6)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  float fVar24;
  float local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  float *local_e8;
  uint local_e0;
  ulonglong *local_d8;
  float *local_d0;
  uint *local_c8;
  BINKVARBITS *local_c0;
  float local_b8 [28];
  ulonglong local_48;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  local_48 = __security_cookie.value ^ (ulonglong)&local_f8;
  local_d8 = param_4->cur;
  uVar21 = param_4->bits;
  local_c0 = param_4;
  local_ec = param_2;
  uVar19 = param_4->bitlen;
  local_e8 = param_1;
  if (uVar19 < 0x1d) {
    uVar13 = uVar19 + 0x23;
    uVar14 = *local_d8 >> (0x1d - (byte)uVar19 & 0x3f);
    uVar21 = uVar21 | *local_d8 << ((byte)uVar19 & 0x3f);
    puVar18 = local_d8 + 1;
  }
  else {
    uVar14 = uVar21 >> 0x1d;
    uVar13 = uVar19 - 0x1d;
    puVar18 = local_d8;
  }
  uVar19 = (uint)uVar21 & 0x1fffffff;
  uVar20 = (uint)uVar14;
  fVar24 = (float)(uVar19 >> 5 & 0x77fffff) * bink_invertbins[(uint)uVar21 & 0x1f];
  if (uVar19 >> 0x1c != 0) {
    fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
  }
  *param_1 = fVar24;
  if (uVar13 < 0x1d) {
    uVar21 = *puVar18;
    uVar19 = uVar13 + 0x23;
    puVar18 = puVar18 + 1;
    uVar15 = uVar21 >> (0x1d - (byte)uVar13 & 0x3f);
    uVar20 = (uint)(uVar21 << ((byte)uVar13 & 0x3f)) | uVar20;
  }
  else {
    uVar15 = uVar14 >> 0x1d;
    uVar19 = uVar13 - 0x1d;
  }
  fVar24 = (float)((uVar20 & 0x1fffffff) >> 5 & 0x77fffff) * bink_invertbins[uVar20 & 0x1f];
  if ((uVar20 & 0x1fffffff) >> 0x1c != 0) {
    fVar24 = (float)((uint)fVar24 ^ uVar3);
  }
  uVar13 = 0;
  param_1[1] = fVar24;
  local_b8[0] = 0.0;
  uVar21 = 2;
  if (3 < param_3) {
    uVar13 = (param_3 - 4 >> 2) + 1;
    uVar23 = (ulonglong)uVar13;
    uVar13 = uVar13 * 4;
    uVar14 = uVar21;
    do {
      if (uVar19 < 8) {
        uVar17 = *puVar18;
        puVar18 = puVar18 + 1;
        uVar20 = uVar19 + 0x38;
        uVar16 = uVar17 >> (8 - (byte)uVar19 & 0x3f);
        uVar15 = uVar15 | uVar17 << ((byte)uVar19 & 0x3f);
      }
      else {
        uVar16 = uVar15 >> 8;
        uVar20 = uVar19 - 8;
      }
      uVar17 = uVar15 & 0xff;
      iVar2 = (int)uVar14;
      if (0x5f < (uint)uVar17) {
        uVar17 = 0x5f;
      }
      local_b8[iVar2 - 1] = bink_Undecibel_table[uVar17];
      if (uVar20 < 8) {
        uVar1 = *puVar18;
        puVar18 = puVar18 + 1;
        uVar19 = uVar20 + 0x38;
        uVar17 = uVar1 >> (8 - (byte)uVar20 & 0x3f);
        uVar16 = uVar16 | uVar1 << ((byte)uVar20 & 0x3f);
      }
      else {
        uVar17 = uVar16 >> 8;
        uVar19 = uVar20 - 8;
      }
      uVar16 = uVar16 & 0xff;
      if (0x5f < (uint)uVar16) {
        uVar16 = 0x5f;
      }
      local_b8[uVar14] = bink_Undecibel_table[uVar16];
      if (uVar19 < 8) {
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        uVar20 = uVar19 + 0x38;
        uVar16 = uVar14 >> (8 - (byte)uVar19 & 0x3f);
        uVar17 = uVar17 | uVar14 << ((byte)uVar19 & 0x3f);
      }
      else {
        uVar16 = uVar17 >> 8;
        uVar20 = uVar19 - 8;
      }
      uVar17 = uVar17 & 0xff;
      if (0x5f < (uint)uVar17) {
        uVar17 = 0x5f;
      }
      local_b8[iVar2 + 1] = bink_Undecibel_table[uVar17];
      if (uVar20 < 8) {
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        uVar19 = uVar20 + 0x38;
        uVar15 = uVar14 >> (8 - (byte)uVar20 & 0x3f);
        uVar16 = uVar16 | uVar14 << ((byte)uVar20 & 0x3f);
      }
      else {
        uVar15 = uVar16 >> 8;
        uVar19 = uVar20 - 8;
      }
      uVar16 = uVar16 & 0xff;
      if (0x5f < (uint)uVar16) {
        uVar16 = 0x5f;
      }
      uVar14 = (ulonglong)(iVar2 + 4);
      local_b8[iVar2 + 2] = bink_Undecibel_table[uVar16];
      uVar23 = uVar23 - 1;
      param_1 = local_e8;
      param_2 = local_ec;
    } while (uVar23 != 0);
  }
  if (uVar13 < param_3) {
    uVar14 = (ulonglong)(param_3 - uVar13);
    pfVar11 = local_b8 + (uVar13 + 1);
    uVar22 = uVar15;
    do {
      if (uVar19 < 8) {
        uVar23 = *puVar18;
        puVar18 = puVar18 + 1;
        bVar5 = (byte)uVar19;
        uVar19 = uVar19 + 0x38;
        uVar15 = uVar23 >> (8 - bVar5 & 0x3f);
        uVar22 = uVar22 | uVar23 << (bVar5 & 0x3f);
      }
      else {
        uVar15 = uVar22 >> 8;
        uVar19 = uVar19 - 8;
      }
      uVar23 = uVar22 & 0xff;
      if (0x5f < (uint)uVar23) {
        uVar23 = 0x5f;
      }
      *pfVar11 = bink_Undecibel_table[uVar23];
      pfVar11 = pfVar11 + 1;
      uVar14 = uVar14 - 1;
      uVar22 = uVar15;
      param_1 = local_e8;
    } while (uVar14 != 0);
  }
  uVar14 = 0;
  if (2 < param_2) {
    do {
      uVar23 = uVar15;
      if (uVar19 < 9) {
        uVar23 = uVar15 | *puVar18 << ((byte)uVar19 & 0x3f);
        uVar13 = 0x40 - uVar19 >> 3;
        puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar13);
        uVar19 = uVar19 + uVar13 * 8;
      }
      uVar20 = (uint)(uVar23 >> 1);
      uVar10 = uVar20 & 0x7fffffff;
      uVar13 = (uint)uVar21;
      if ((uVar23 & 1) == 0) {
        uVar15 = uVar23 >> 5;
        local_e0 = uVar13 + 8;
        uVar19 = uVar19 - 5;
      }
      else {
        uVar15 = uVar23 >> 9;
        uVar19 = uVar19 - 9;
        uVar10 = (uint)(uVar23 >> 5) & 0x7ffffff;
        local_e0 = uVar13 + (uint)bink_rlelens_snd[uVar20 & 0xf] * 8;
      }
      if (param_2 < local_e0) {
        local_e0 = param_2;
      }
      uVar10 = uVar10 & 0xf;
      puVar4 = puVar18;
      uVar20 = local_e0;
      if (uVar10 == 0) {
LAB_14f8d808f:
        puVar18 = puVar4;
        uVar23 = (ulonglong)((uVar20 - uVar13) * 4) + 0x1f >> 5;
        pauVar7 = (undefined1 (*) [16])(param_1 + (uVar21 & 0xffffffff));
        do {
          *pauVar7 = ZEXT816(0);
          pauVar7[1] = ZEXT816(0);
          pauVar7 = pauVar7 + 2;
          uVar23 = uVar23 - 1;
          uVar21 = (ulonglong)uVar20;
        } while (uVar23 != 0);
      }
      else {
        sVar6 = (sbyte)uVar10;
        uVar12 = (1 << sVar6) - 1;
        puVar4 = local_d8;
        uVar20 = param_2;
        if (param_6 < (void *)((ulonglong)((local_e0 - uVar13) * (uVar10 + 1) + 9 >> 3) +
                              (longlong)puVar18)) goto LAB_14f8d808f;
        if (uVar13 < local_e0) {
          local_c8 = param_5 + uVar14;
          do {
            uVar13 = *local_c8;
            while (uVar13 * 2 <= (uint)uVar21) {
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar13 = param_5[uVar14];
            }
            local_c8 = param_5 + uVar14;
            local_f8 = local_b8[uVar14];
            local_f0 = param_5[uVar14] * 2;
            if (local_e0 < param_5[uVar14] * 2) {
              local_f0 = local_e0;
            }
            local_f4 = (uint)local_b8[uVar14] ^ uVar3;
            pfVar11 = param_1 + (uVar21 & 0xffffffff);
            local_d0 = param_1 + local_f0;
            if ((local_f0 < (uint)uVar21 + 4) || (0xe < uVar10 + 1)) {
LAB_14f8d82bd:
              uVar13 = uVar10 + 1;
              if (pfVar11 < local_d0) {
                if (0xf < ((longlong)local_d0 + (3 - (longlong)pfVar11) & 0xfffffffffffffffcU)) {
                  do {
                    if (uVar19 < uVar13) {
                      uVar15 = uVar15 | *puVar18 << ((byte)uVar19 & 0x3f);
                      uVar20 = 0x40 - uVar19 >> 3;
                      puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar20);
                      uVar19 = uVar19 + uVar20 * 8;
                    }
                    uVar20 = (uint)uVar15 & uVar12;
                    uVar21 = (uVar15 >> sVar6) >> (uVar20 != 0);
                    uVar19 = uVar19 - ((uVar20 != 0) + uVar10);
                    *pfVar11 = (float)(int)uVar20 * (&local_f8)[(uint)(uVar15 >> sVar6) & 1];
                    if (uVar19 < uVar13) {
                      uVar21 = uVar21 | *puVar18 << ((byte)uVar19 & 0x3f);
                      uVar20 = 0x40 - uVar19 >> 3;
                      puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar20);
                      uVar19 = uVar19 + uVar20 * 8;
                    }
                    uVar20 = (uint)uVar21 & uVar12;
                    uVar23 = (uVar21 >> sVar6) >> (uVar20 != 0);
                    uVar19 = uVar19 - ((uVar20 != 0) + uVar10);
                    pfVar11[1] = (float)(int)uVar20 * (&local_f8)[(uint)(uVar21 >> sVar6) & 1];
                    if (uVar19 < uVar13) {
                      uVar23 = uVar23 | *puVar18 << ((byte)uVar19 & 0x3f);
                      uVar20 = 0x40 - uVar19 >> 3;
                      puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar20);
                      uVar19 = uVar19 + uVar20 * 8;
                    }
                    uVar20 = (uint)uVar23 & uVar12;
                    uVar21 = (uVar23 >> sVar6) >> (uVar20 != 0);
                    uVar19 = uVar19 - ((uVar20 != 0) + uVar10);
                    pfVar11[2] = (float)(int)uVar20 * (&local_f8)[(uint)(uVar23 >> sVar6) & 1];
                    if (uVar19 < uVar13) {
                      uVar21 = uVar21 | *puVar18 << ((byte)uVar19 & 0x3f);
                      uVar20 = 0x40 - uVar19 >> 3;
                      puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar20);
                      uVar19 = uVar19 + uVar20 * 8;
                    }
                    uVar20 = (uint)uVar21 & uVar12;
                    uVar15 = (uVar21 >> sVar6) >> (uVar20 != 0);
                    uVar19 = uVar19 - ((uVar20 != 0) + uVar10);
                    pfVar11[3] = (float)(int)uVar20 * (&local_f8)[(uint)(uVar21 >> sVar6) & 1];
                    pfVar11 = pfVar11 + 4;
                  } while (pfVar11 < local_d0 + -3);
                  if (local_d0 <= pfVar11) goto LAB_14f8d84b8;
                }
                do {
                  if (uVar19 < uVar13) {
                    uVar15 = uVar15 | *puVar18 << ((byte)uVar19 & 0x3f);
                    uVar20 = 0x40 - uVar19 >> 3;
                    puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar20);
                    uVar19 = uVar19 + uVar20 * 8;
                  }
                  uVar21 = uVar15 >> sVar6;
                  uVar20 = (uint)uVar15 & uVar12;
                  uVar15 = uVar21 >> (uVar20 != 0);
                  uVar19 = uVar19 - ((uVar20 != 0) + uVar10);
                  *pfVar11 = (float)(int)uVar20 * (&local_f8)[(uint)uVar21 & 1];
                  pfVar11 = pfVar11 + 1;
                } while (pfVar11 < local_d0);
              }
LAB_14f8d84b8:
              uVar21 = (ulonglong)local_f0;
            }
            else {
              do {
                if (uVar19 < (uVar10 + 1) * 4) {
                  uVar15 = uVar15 | *puVar18 << ((byte)uVar19 & 0x3f);
                  uVar13 = 0x40 - uVar19 >> 3;
                  puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar13);
                  uVar19 = uVar19 + uVar13 * 8;
                }
                uVar13 = (uint)uVar15 & uVar12;
                *pfVar11 = (float)(int)uVar13 * (&local_f8)[(uint)(uVar15 >> sVar6) & 1];
                uVar21 = (uVar15 >> sVar6) >> (uVar13 != 0);
                uVar20 = (uint)uVar21 & uVar12;
                uVar21 = uVar21 >> sVar6;
                pfVar11[1] = (float)(int)uVar20 * (&local_f8)[(uint)uVar21 & 1];
                uVar21 = uVar21 >> (uVar20 != 0);
                uVar8 = (uint)uVar21 & uVar12;
                uVar21 = uVar21 >> sVar6;
                pfVar11[2] = (float)(int)uVar8 * (&local_f8)[(uint)uVar21 & 1];
                uVar21 = uVar21 >> (uVar8 != 0);
                uVar9 = (uint)uVar21 & uVar12;
                uVar21 = uVar21 >> sVar6;
                uVar15 = uVar21 >> (uVar9 != 0);
                uVar19 = (((uVar19 + (uVar10 * -4 - (uint)(uVar13 != 0))) - (uint)(uVar20 != 0)) -
                         (uint)(uVar8 != 0)) - (uint)(uVar9 != 0);
                pfVar11[3] = (float)(int)uVar9 * (&local_f8)[(uint)uVar21 & 1];
                pfVar11 = pfVar11 + 4;
              } while (pfVar11 <= local_d0 + -4);
              uVar21 = (longlong)local_d0 - (longlong)pfVar11 >> 2;
              if ((uint)uVar21 < local_f0) goto LAB_14f8d82bd;
            }
            param_1 = local_e8;
            param_2 = local_ec;
          } while ((uint)uVar21 < local_e0);
        }
      }
    } while ((uint)uVar21 < param_2);
  }
  param_4->cur = puVar18;
  param_4->bits = uVar15;
  param_4->bitlen = uVar19;
  return;
}

// read_channel_data_2 @ 14f8d84f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
read_channel_data_2(float *param_1,uint param_2,uint param_3,BINKVARBITS *param_4,uint *param_5,
                   void *param_6)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uchar *puVar19;
  float fVar20;
  undefined1 auStackY_108 [32];
  float local_b8 [28];
  ulonglong local_48;
  
  uVar9 = __xmm_80000000800000008000000080000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar7 = (ulonglong)param_3;
  uVar14 = 0x40 - param_4->bitlen;
  uVar16 = (ulonglong)uVar14;
  puVar19 = (uchar *)((longlong)param_4->cur + -8);
  uVar17 = 0;
  uVar18 = (ulonglong)(uint)(((int)param_6 - (int)puVar19) * 8);
  if (uVar18 < ((param_3 * 8 + 0x3a) + uVar16 & 0xfffffffffffffff8)) {
LAB_14f8d8a16:
    uVar7 = (ulonglong)(param_2 * 4) + 0x1f >> 5;
    do {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1 = param_1 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  else {
    uVar8 = (uint)(*(ulonglong *)(puVar19 + (uVar14 >> 3)) >> ((byte)uVar14 & 7));
    uVar14 = uVar8 & 0x1fffffff;
    fVar20 = (float)(uVar14 >> 5 & 0x77fffff) * bink_invertbins[uVar8 & 0x1f];
    if (uVar14 >> 0x1c != 0) {
      fVar20 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
    }
    *param_1 = fVar20;
    uVar15 = uVar16 + 0x3a;
    uVar8 = (uint)(*(ulonglong *)(puVar19 + (uVar16 + 0x1d >> 3)) >> ((byte)(uVar16 + 0x1d) & 7));
    uVar14 = uVar8 & 0x1fffffff;
    fVar20 = (float)(uVar14 >> 5 & 0x77fffff) * bink_invertbins[uVar8 & 0x1f];
    if (uVar14 >> 0x1c != 0) {
      fVar20 = (float)((uint)fVar20 ^ uVar9);
    }
    param_1[1] = fVar20;
    local_b8[0] = 0.0;
    if (3 < uVar7) {
      do {
        uVar9 = *(uint *)(puVar19 + (uVar15 >> 3)) >> ((byte)uVar15 & 7) & 0x7f;
        if (0x5f < uVar9) {
          uVar9 = 0x5f;
        }
        uVar14 = *(uint *)(puVar19 + (uVar15 + 7 >> 3)) >> ((byte)(uVar15 + 7) & 7) & 0x7f;
        local_b8[uVar17 + 1] = bink_Undecibel_table[uVar9];
        if (0x5f < uVar14) {
          uVar14 = 0x5f;
        }
        uVar16 = uVar15 + 0x15;
        uVar9 = *(uint *)(puVar19 + (uVar15 + 0xe >> 3)) >> ((byte)(uVar15 + 0xe) & 7) & 0x7f;
        local_b8[uVar17 + 2] = bink_Undecibel_table[uVar14];
        if (0x5f < uVar9) {
          uVar9 = 0x5f;
        }
        uVar15 = uVar15 + 0x1c;
        uVar14 = *(uint *)(puVar19 + (uVar16 >> 3)) >> ((byte)uVar16 & 7) & 0x7f;
        local_b8[uVar17 + 3] = bink_Undecibel_table[uVar9];
        uVar16 = (ulonglong)uVar14;
        if (0x5f < uVar14) {
          uVar16 = 0x5f;
        }
        local_b8[uVar17 + 4] = bink_Undecibel_table[uVar16];
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar7 - 3);
    }
    for (; uVar17 < uVar7; uVar17 = uVar17 + 1) {
      bVar13 = (byte)uVar15;
      uVar16 = uVar15 >> 3;
      uVar15 = uVar15 + 7;
      uVar9 = *(uint *)(puVar19 + uVar16) >> (bVar13 & 7) & 0x7f;
      uVar16 = (ulonglong)uVar9;
      if (0x5f < uVar9) {
        uVar16 = 0x5f;
      }
      local_b8[uVar17 + 1] = bink_Undecibel_table[uVar16];
    }
    uVar17 = (ulonglong)param_2;
    lVar6 = 0;
    uVar7 = 2;
    if (2 < uVar17) {
      do {
        if (uVar18 < (uVar15 + 9 & 0xfffffffffffffff8)) goto LAB_14f8d8a16;
        uVar9 = *(uint *)(puVar19 + (uVar15 >> 3)) >> ((byte)uVar15 & 7);
        if ((uVar9 & 1) == 0) {
          uVar15 = uVar15 + 5;
          lVar3 = 8;
          uVar14 = uVar9 >> 1;
        }
        else {
          uVar15 = uVar15 + 9;
          uVar14 = uVar9 >> 5;
          lVar3 = (ulonglong)bink_rlelens_snd[uVar9 >> 1 & 0xf] << 3;
        }
        uVar16 = uVar17;
        if (lVar3 + uVar7 <= uVar17) {
          uVar16 = lVar3 + uVar7;
        }
        uVar10 = uVar16 - uVar7;
        uVar9 = uVar14 & 0xf;
        if (uVar9 == 0) {
          uVar4 = uVar10 * 4 + 0x1f >> 5;
          pfVar1 = param_1 + uVar7;
          do {
            pfVar1[0] = 0.0;
            pfVar1[1] = 0.0;
            pfVar1[2] = 0.0;
            pfVar1[3] = 0.0;
            pfVar1[4] = 0.0;
            pfVar1[5] = 0.0;
            pfVar1[6] = 0.0;
            pfVar1[7] = 0.0;
            pfVar1 = pfVar1 + 8;
            uVar4 = uVar4 - 1;
            uVar7 = uVar16;
          } while (uVar4 != 0);
        }
        else {
          uVar12 = uVar9 * uVar10 + uVar15;
          if (uVar18 < ((uVar16 - uVar7) + uVar12 & 0xfffffffffffffff8)) goto LAB_14f8d8a16;
          if (((byte)cpu_features_to_useUEBA & 0x20) == 0) {
            if (uVar18 < (uVar12 & 0xfffffffffffffff8) + 8) goto LAB_14f8d8a16;
            uVar9 = decode_scalar(param_1 + uVar7,puVar19,uVar15,uVar12,uVar10,uVar14 & 0xf);
            uVar15 = (ulonglong)uVar9;
          }
          else {
            if (uVar18 < (uVar12 & 0xfffffffffffffff8) + 0x10) goto LAB_14f8d8a16;
            uVar15 = decode_pfxsum(param_1 + uVar7,puVar19,uVar15,uVar12,uVar18,uVar10,uVar9);
          }
joined_r0x00014f8d88a3:
          uVar4 = uVar7;
          uVar7 = uVar4;
          if (uVar4 < uVar16) {
            uVar9 = param_5[lVar6];
            while (uVar9 * 2 <= uVar4) {
              lVar3 = lVar6 + 1;
              lVar6 = lVar6 + 1;
              uVar9 = param_5[lVar3];
            }
            fVar20 = local_b8[lVar6];
            uVar11 = 0;
            uVar7 = (ulonglong)(param_5[lVar6] * 2);
            if (uVar16 < param_5[lVar6] * 2) {
              uVar7 = uVar16;
            }
            uVar5 = uVar7 - uVar4;
            if ((uVar5 & 0xfffffffffffffff8) != 0) {
              lVar3 = ((uVar5 & 0xfffffffffffffff8) - 1 >> 3) + 1;
              uVar11 = lVar3 * 8;
              pfVar1 = param_1 + uVar4;
              do {
                pfVar1[4] = pfVar1[4] * fVar20;
                pfVar1[5] = pfVar1[5] * fVar20;
                pfVar1[6] = pfVar1[6] * fVar20;
                pfVar1[7] = pfVar1[7] * fVar20;
                *pfVar1 = *pfVar1 * fVar20;
                pfVar1[1] = pfVar1[1] * fVar20;
                pfVar1[2] = pfVar1[2] * fVar20;
                pfVar1[3] = pfVar1[3] * fVar20;
                lVar3 = lVar3 + -1;
                pfVar1 = pfVar1 + 8;
              } while (lVar3 != 0);
            }
            if ((uVar5 - uVar11 < 8) && (uVar11 < uVar5)) {
              fVar20 = local_b8[lVar6];
              if (3 < uVar5 - uVar11) {
                lVar3 = uVar4 + 2 + uVar11;
                lVar2 = ((uVar5 - uVar11) - 4 >> 2) + 1;
                uVar11 = uVar11 + lVar2 * 4;
                pfVar1 = param_1 + lVar3;
                do {
                  pfVar1[-2] = pfVar1[-2] * fVar20;
                  pfVar1[-1] = pfVar1[-1] * fVar20;
                  *pfVar1 = *pfVar1 * fVar20;
                  pfVar1[1] = pfVar1[1] * fVar20;
                  lVar2 = lVar2 + -1;
                  pfVar1 = pfVar1 + 4;
                } while (lVar2 != 0);
                if (uVar5 <= uVar11) goto joined_r0x00014f8d88a3;
              }
              lVar3 = uVar5 - uVar11;
              pfVar1 = param_1 + uVar11 + uVar4;
              do {
                *pfVar1 = fVar20 * *pfVar1;
                lVar3 = lVar3 + -1;
                pfVar1 = pfVar1 + 1;
              } while (lVar3 != 0);
            }
            goto joined_r0x00014f8d88a3;
          }
        }
      } while (uVar7 < uVar17);
    }
    uVar9 = (uint)uVar15 & 0x3f;
    uVar7 = *(ulonglong *)(puVar19 + (uVar15 >> 6) * 8);
    param_4->bitlen = 0x40 - uVar9;
    param_4->bits = uVar7 >> (sbyte)uVar9;
    param_4->cur = puVar19 + ((uVar15 >> 6) + 1) * 8;
  }
  return;
}

// read_up_to_24_bits @ 14f8d8a80

uint __cdecl read_up_to_24_bits(uchar *param_1,ulong64 param_2)

{
  return *(uint *)(param_1 + (param_2 >> 3)) >> ((byte)param_2 & 7);
}

// read_up_to_56_bits @ 14f8d8aa0

ulong64 __cdecl read_up_to_56_bits(uchar *param_1,ulong64 param_2)

{
  return *(ulonglong *)(param_1 + (param_2 >> 3)) >> ((byte)param_2 & 7);
}

// short_to_float_4 @ 14f8d8ac0

void __cdecl short_to_float_4(float *param_1,short *param_2)

{
  *param_1 = (float)(int)*param_2;
  param_1[1] = (float)(int)param_2[1];
  param_1[2] = (float)(int)param_2[2];
  param_1[3] = (float)(int)param_2[3];
  return;
}

// update_ring @ 14f8d8b10

void __cdecl update_ring(BINKAC_OUT_RINGBUF *param_1,short *param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  param_1->decoded_bytes = param_1->decoded_bytes + param_3;
  uVar3 = param_1->eatfirst;
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      param_1->outlen = 0;
      param_1->eatfirst = uVar3 - param_3;
      return;
    }
    param_3 = param_3 - uVar3;
    param_1->eatfirst = 0;
    param_2 = (short *)((longlong)param_2 + (ulonglong)uVar3);
  }
  uVar3 = param_1->outlen;
  if (param_3 <= param_1->outlen) {
    uVar3 = param_3;
  }
  uVar2 = *(int *)&param_1->outend - *(int *)&param_1->outptr;
  param_1->outlen = uVar3;
  psVar1 = param_1->outptr;
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  if (param_2 == psVar1) {
    param_1->outptr = (void *)((ulonglong)uVar3 + (longlong)psVar1);
  }
  else {
    ourmemcpy(psVar1,param_2,uVar2);
    param_1->outptr = (void *)((longlong)param_1->outptr + (ulonglong)uVar2);
    uVar3 = uVar3 - uVar2;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      param_1->outptr = param_1->outstart;
      ourmemcpy(param_1->outstart,(void *)((ulonglong)uVar2 + (longlong)param_2),uVar3);
      param_1->outptr = (void *)((longlong)param_1->outptr + uVar4);
      return;
    }
  }
  return;
}

// BinkAudioDecompressMemoryUEBA @ 14f8d8bd0

uint __cdecl BinkAudioDecompressMemoryUEBA(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (0xac43 < param_1) {
    return (param_2 & 0xfffff) * 0x100 + 0xa0;
  }
  iVar1 = 0x400;
  if (0x5621 < param_1) {
    iVar1 = 0x800;
  }
  return (iVar1 * param_2 >> 4) + 0xa0;
}

// BinkAudioDecompressOpenUEBA @ 14f8d8c20

uint __cdecl BinkAudioDecompressOpenUEBA(void *param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  CPU_checkUEBA(0,0);
  if (param_2 < 0xac44) {
    if (param_2 < 0x5622) {
      uVar2 = 0x200;
      fVar9 = tsr512;
    }
    else {
      uVar2 = 0x400;
      fVar9 = tsr1024;
    }
  }
  else {
    uVar2 = 0x800;
    fVar9 = tsr2048;
  }
  puVar3 = bink_bandtopfreq;
  uVar4 = param_2 + 1 >> 1;
  uVar6 = 0;
  do {
    if (uVar4 <= *puVar3) break;
    if (uVar4 <= puVar3[1]) {
      uVar6 = uVar6 + 1;
      break;
    }
    if (uVar4 <= puVar3[2]) {
      uVar6 = uVar6 + 2;
      break;
    }
    if (uVar4 <= puVar3[3]) {
      uVar6 = uVar6 + 3;
      break;
    }
    if (uVar4 <= puVar3[4]) {
      uVar6 = uVar6 + 4;
      break;
    }
    puVar3 = puVar3 + 5;
    uVar6 = uVar6 + 5;
  } while (uVar6 < 0x19);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar5 = (uVar2 * param_3 & 0x7fffffff) >> 3;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(longlong *)param_1 = (longlong)param_1 + 0xa0;
  *(uint *)((longlong)param_1 + 0x30) = uVar5 + 0xa0;
  radfft_initUEBA();
  *(uint *)((longlong)param_1 + 0x2c) = param_4;
  if (param_3 == 1) {
    *(uint *)((longlong)param_1 + 0x2c) = param_4 & 0xfffffffd;
  }
  uVar8 = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  *(uint *)((longlong)param_1 + 0x1c) = param_3;
  *(uint *)((longlong)param_1 + 0x24) = uVar6;
  *(uint *)((longlong)param_1 + 8) = uVar2;
  *(uint *)((longlong)param_1 + 0x10) = uVar2 * param_3 * 2;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  if (uVar5 == 0x40) {
    *(undefined4 *)((longlong)param_1 + 0x18) = 5;
  }
  else if (uVar5 == 0x80) {
    *(undefined4 *)((longlong)param_1 + 0x18) = 6;
  }
  else if (uVar5 == 0x100) {
    *(undefined4 *)((longlong)param_1 + 0x18) = 7;
  }
  else {
    if (uVar5 != 0x200) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    *(undefined4 *)((longlong)param_1 + 0x18) = 8;
  }
  *(float *)((longlong)param_1 + 0xc) = fVar9;
  if (uVar6 != 0) {
    uVar7 = (ulonglong)uVar6;
    uVar8 = (ulonglong)uVar6;
    puVar3 = (uint *)((longlong)param_1 + 0x34);
    do {
      uVar6 = ((uVar2 >> 1) * *(int *)((0x154e162b8 - (longlong)param_1) + (longlong)(puVar3 + 1)))
              / uVar4;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      *puVar3 = uVar6;
      uVar7 = uVar7 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar7 != 0);
  }
  *(uint *)((longlong)param_1 + uVar8 * 4 + 0x34) = uVar2 >> 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  return 1;
}

// BinkAudioDecompressOutputSizeUEBA @ 14f8d8e20

uint __cdecl BinkAudioDecompressOutputSizeUEBA(void *param_1)

{
  return *(uint *)((longlong)param_1 + 0x10);
}

// BinkAudioDecompressResetStartFrameUEBA @ 14f8d8e30

void __cdecl BinkAudioDecompressResetStartFrameUEBA(void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  }
  return;
}

// BinkAudioDecompressUEBA @ 14f8d8e50

void __cdecl BinkAudioDecompressUEBA(void *param_1,BINKAC_OUT_RINGBUF *param_2,BINKAC_IN *param_3)

{
  uint uVar1;
  
  param_2->decoded_bytes = 0;
  if (param_2->outptr == param_2->outend) {
    param_2->outptr = param_2->outstart;
  }
  if (*(int *)((longlong)param_1 + 0x20) == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
  }
  else {
    uVar1 = 0;
  }
  decode_frame(*(uint *)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0xc),
               *(uint *)((longlong)param_1 + 0x1c),*(uint *)((longlong)param_1 + 0x2c),param_2,
               param_3,*(uint *)((longlong)param_1 + 0x24),(uint *)((longlong)param_1 + 0x34),
               *(uint *)((longlong)param_1 + 0x14),uVar1,*(short **)param_1);
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

