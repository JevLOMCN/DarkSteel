// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 344

// ByteCopy<unsigned_char,unsigned_char> @ 14ff40670

void __cdecl oo2net::ByteCopy<unsigned_char,unsigned_char>(uchar *param_1,uchar *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2net::rated_packet,oo2net::rated_packet> @ 14ff40680

void __cdecl
oo2net::ByteCopy<oo2net::rated_packet,oo2net::rated_packet>
          (rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  dVar1 = param_2->base_rating;
  param_1->rating = param_2->rating;
  param_1->base_rating = dVar1;
  iVar2 = param_2->packet_size;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  param_1->packet_ptr = param_2->packet_ptr;
  param_1->packet_size = iVar2;
  *(undefined4 *)&param_1->field_0x1c = uVar3;
  return;
}

// ByteCopy<oo2net::Bytes<1>,oo2net::Bytes<1>_> @ 14ff406a0

void __cdecl
oo2net::ByteCopy<oo2net::Bytes<1>,oo2net::Bytes<1>_>(Bytes<1> *param_1,Bytes<1> *param_2)

{
  param_1->bytes[0] = param_2->bytes[0];
  return;
}

// ByteCopy<oo2net::Bytes<32>,oo2net::Bytes<32>_> @ 14ff406b0

void __cdecl
oo2net::ByteCopy<oo2net::Bytes<32>,oo2net::Bytes<32>_>(Bytes<32> *param_1,Bytes<32> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2->bytes + 8);
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  *(undefined8 *)(param_1->bytes + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2->bytes + 0x18);
  *(undefined8 *)(param_1->bytes + 0x10) = *(undefined8 *)(param_2->bytes + 0x10);
  *(undefined8 *)(param_1->bytes + 0x18) = uVar1;
  return;
}

// ByteSwap<unsigned_char> @ 14ff406d0

void __cdecl oo2net::ByteSwap<unsigned_char>(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// ByteSwap<oo2net::rated_packet> @ 14ff406f0

void __cdecl oo2net::ByteSwap<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  dVar1 = param_2->base_rating;
  dVar2 = param_1->rating;
  dVar3 = param_1->base_rating;
  pvVar4 = param_1->packet_ptr;
  iVar7 = param_1->packet_size;
  uVar8 = *(undefined4 *)&param_1->field_0x1c;
  param_1->rating = param_2->rating;
  param_1->base_rating = dVar1;
  iVar5 = param_2->packet_size;
  uVar6 = *(undefined4 *)&param_2->field_0x1c;
  param_1->packet_ptr = param_2->packet_ptr;
  param_1->packet_size = iVar5;
  *(undefined4 *)&param_1->field_0x1c = uVar6;
  param_2->rating = dVar2;
  param_2->base_rating = dVar3;
  param_2->packet_ptr = pvVar4;
  param_2->packet_size = iVar7;
  *(undefined4 *)&param_2->field_0x1c = uVar8;
  return;
}

// OodleDelete<oo2net::OodleNetwork1UDP_CountingState> @ 14ff40720

void __cdecl oo2net::OodleDelete<oo2net::OodleNetwork1UDP_CountingState>(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff40720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// assign<oo2net::rated_packet_const_*> @ 14ff40740

void __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
assign<oo2net::rated_packet_const_*>
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          rated_packet *param_1,rated_packet *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  rated_packet *prVar5;
  rated_packet *prVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar10 = (longlong)param_2 - (longlong)param_1 >> 5;
  if (uVar10 <= *(ulonglong *)&this->field_0x10) {
    prVar6 = *(rated_packet **)this;
    if (prVar6 != param_1) {
      if (param_1 < prVar6) {
        lVar9 = uVar10 - 1;
        if (-1 < lVar9) {
          prVar5 = prVar6 + lVar9;
          do {
            lVar9 = lVar9 + -1;
            pdVar1 = (double *)(((longlong)param_1 - (longlong)prVar6) + (longlong)prVar5);
            dVar3 = pdVar1[1];
            prVar5->rating = *pdVar1;
            prVar5->base_rating = dVar3;
            puVar7 = (undefined8 *)
                     (((longlong)param_1 - (longlong)prVar6) + 0x30 + (longlong)(prVar5 + -1));
            uVar4 = puVar7[1];
            prVar5->packet_ptr = (void *)*puVar7;
            *(undefined8 *)&prVar5->packet_size = uVar4;
            prVar5 = prVar5 + -1;
          } while (-1 < lVar9);
          *(ulonglong *)&this->field_0x10 = uVar10;
          return;
        }
      }
      else if (uVar10 != 0) {
        prVar5 = prVar6;
        uVar8 = uVar10;
        do {
          pdVar1 = (double *)((longlong)prVar5 + ((longlong)param_1 - (longlong)prVar6));
          dVar3 = pdVar1[1];
          prVar5->rating = *pdVar1;
          prVar5->base_rating = dVar3;
          puVar7 = (undefined8 *)((longlong)prVar5 + ((longlong)param_1 - (longlong)prVar6) + 0x10);
          uVar4 = puVar7[1];
          prVar5->packet_ptr = (void *)*puVar7;
          *(undefined8 *)&prVar5->packet_size = uVar4;
          uVar8 = uVar8 - 1;
          prVar5 = prVar5 + 1;
        } while (uVar8 != 0);
      }
    }
    *(ulonglong *)&this->field_0x10 = uVar10;
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(ulonglong *)&this->field_0x8 < uVar10) {
    prVar6 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar10,0);
    puVar7 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar10;
    if (uVar10 != 0) {
      lVar9 = (longlong)param_1 - (longlong)puVar7;
      do {
        if (puVar7 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar9 + (longlong)puVar7);
          uVar4 = puVar2[1];
          *puVar7 = *puVar2;
          puVar7[1] = uVar4;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + (longlong)puVar7);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
        }
        puVar7 = puVar7 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (prVar6 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff40860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar6);
      return;
    }
  }
  else {
    puVar7 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar10;
    if (uVar10 != 0) {
      lVar9 = (longlong)param_1 - (longlong)puVar7;
      do {
        if (puVar7 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar9 + (longlong)puVar7);
          uVar4 = puVar2[1];
          *puVar7 = *puVar2;
          puVar7[1] = uVar4;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + (longlong)puVar7);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
        }
        puVar7 = puVar7 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}

// check_value_cast<unsigned_char,int> @ 14ff408b0

uchar __cdecl oo2net::check_value_cast<unsigned_char,int>(int *param_1)

{
  return (uchar)*param_1;
}

// check_value_cast<unsigned_short,int> @ 14ff408c0

ushort __cdecl oo2net::check_value_cast<unsigned_short,int>(int *param_1)

{
  return (ushort)*param_1;
}

// check_value_cast<unsigned_int,__int64> @ 14ff408d0

uint __cdecl oo2net::check_value_cast<unsigned_int,__int64>(long64 *param_1)

{
  return (uint)*param_1;
}

// check_value_cast<__int64,unsigned___int64> @ 14ff408e0

long64 __cdecl oo2net::check_value_cast<__int64,unsigned___int64>(ulong64 *param_1)

{
  return *param_1;
}

// construct<unsigned_char_const_*,unsigned_char_const_*_const_&> @ 14ff408f0

uchar ** __cdecl
oo2net::construct<unsigned_char_const_*,unsigned_char_const_*_const_&>
          (uchar **param_1,uchar **param_2)

{
  if (param_1 != (uchar **)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<oo2net::rated_packet> @ 14ff40910

rated_packet * __cdecl oo2net::construct<oo2net::rated_packet>(rated_packet *param_1)

{
  if (param_1 != (rated_packet *)0x0) {
    param_1->rating = 0.0;
    param_1->base_rating = 0.0;
    param_1->packet_ptr = (void *)0x0;
    *(undefined8 *)&param_1->packet_size = 0;
  }
  return param_1;
}

// copy<oo2net::rated_packet> @ 14ff40930

void __cdecl
oo2net::copy<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2,ulong64 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  rated_packet *prVar5;
  
  if (param_3 != 0) {
    prVar5 = param_1;
    do {
      pdVar1 = (double *)(((longlong)param_2 - (longlong)param_1) + (longlong)prVar5);
      dVar3 = pdVar1[1];
      prVar5->rating = *pdVar1;
      prVar5->base_rating = dVar3;
      puVar2 = (undefined8 *)
               (((longlong)param_2 - (longlong)param_1) + -0x10 + (longlong)(prVar5 + 1));
      uVar4 = puVar2[1];
      prVar5->packet_ptr = (void *)*puVar2;
      *(undefined8 *)&prVar5->packet_size = uVar4;
      param_3 = param_3 - 1;
      prVar5 = prVar5 + 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct<int> @ 14ff40970

void __cdecl oo2net::copy_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2net::rated_packet> @ 14ff40980

void __cdecl
oo2net::copy_construct<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (rated_packet *)0x0) {
    dVar1 = param_2->base_rating;
    param_1->rating = param_2->rating;
    param_1->base_rating = dVar1;
    iVar2 = param_2->packet_size;
    uVar3 = *(undefined4 *)&param_2->field_0x1c;
    param_1->packet_ptr = param_2->packet_ptr;
    param_1->packet_size = iVar2;
    *(undefined4 *)&param_1->field_0x1c = uVar3;
  }
  return;
}

// copy_construct<oo2net::rated_packet> @ 14ff409a0

void __cdecl
oo2net::copy_construct<oo2net::rated_packet>
          (rated_packet *param_1,rated_packet *param_2,ulong64 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (rated_packet *)0x0) {
        pdVar1 = (double *)(lVar5 + (longlong)param_1);
        dVar3 = pdVar1[1];
        param_1->rating = *pdVar1;
        param_1->base_rating = dVar3;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + (longlong)param_1);
        uVar4 = puVar2[1];
        param_1->packet_ptr = (void *)*puVar2;
        *(undefined8 *)&param_1->packet_size = uVar4;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct_identical<int> @ 14ff409d0

void __cdecl oo2net::copy_construct_identical<int>(int *param_1,int *param_2,ulong64 param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *param_2;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *param_1 = iVar1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

// decode_noadapt_with_excludelist<unsigned_char> @ 14ff40a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
          (O0ArithCoder<unsigned_short,256> *this,rrArithDecoder *param_1,uchar *param_2,int param_3
          )

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_78;
  lVar9 = 0;
  uVar12 = this->m_sum;
  local_78 = *(undefined8 *)this->m_sum16s;
  uStack_70 = *(undefined8 *)(this->m_sum16s + 2);
  local_68 = *(undefined8 *)(this->m_sum16s + 4);
  uStack_60 = *(undefined8 *)(this->m_sum16s + 6);
  lVar10 = (longlong)param_3;
  local_58 = *(undefined8 *)(this->m_sum16s + 8);
  uStack_50 = *(undefined8 *)(this->m_sum16s + 10);
  local_48 = *(undefined8 *)(this->m_sum16s + 0xc);
  uStack_40 = *(undefined8 *)(this->m_sum16s + 0xe);
  if (0 < param_3) {
    do {
      pbVar6 = param_2 + lVar9;
      lVar9 = lVar9 + 1;
      uVar12 = uVar12 - this->m_counts[*pbVar6];
      piVar2 = (int *)((longlong)&local_78 + (ulonglong)(*pbVar6 >> 4) * 4);
      *piVar2 = *piVar2 - (uint)this->m_counts[*pbVar6];
    } while (lVar9 < lVar10);
  }
  uVar4 = (ulonglong)param_1->range / (ulonglong)uVar12;
  uVar5 = (uint)uVar4;
  param_1->range = uVar5;
  uVar11 = (uint)(param_1->code / uVar4);
  if (uVar12 <= uVar11) {
    uVar11 = uVar12 - 1;
  }
  iVar8 = 0;
  iVar13 = 0;
  lVar9 = 0;
  do {
    iVar7 = *(int *)((longlong)&local_78 + lVar9 * 4) + iVar8;
    if ((int)uVar11 < iVar7) break;
    iVar8 = iVar7 + *(int *)((longlong)&local_78 + lVar9 * 4 + 4);
    if ((int)uVar11 < iVar8) {
      iVar13 = iVar13 + 1;
      iVar8 = iVar7;
      break;
    }
    iVar7 = iVar8 + *(int *)((longlong)&uStack_70 + lVar9 * 4);
    if ((int)uVar11 < iVar7) {
      iVar13 = iVar13 + 2;
      break;
    }
    iVar8 = iVar7 + *(int *)((longlong)&uStack_70 + lVar9 * 4 + 4);
    if ((int)uVar11 < iVar8) {
      iVar13 = iVar13 + 3;
      iVar8 = iVar7;
      break;
    }
    lVar9 = lVar9 + 4;
    iVar13 = iVar13 + 4;
  } while (lVar9 < 0x10);
  uVar12 = iVar13 << 4;
  puVar14 = this->m_counts + (int)uVar12;
  if (*(int *)((longlong)&local_78 + (longlong)iVar13 * 4) != this->m_sum16s[iVar13]) {
    do {
      uVar15 = (uint)*puVar14;
      lVar9 = 0;
      if (0 < lVar10) {
        do {
          if (param_2[lVar9] == uVar12) {
            uVar15 = 0;
            break;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar10);
      }
      if ((int)uVar11 < (int)(uVar15 + iVar8)) goto LAB_14ff40baf;
      uVar12 = uVar12 + 1;
      puVar14 = puVar14 + 1;
      iVar8 = uVar15 + iVar8;
    } while( true );
  }
  iVar13 = (uint)*puVar14 + iVar8;
  while (iVar7 = iVar13, iVar7 <= (int)uVar11) {
    puVar1 = puVar14 + 1;
    puVar14 = puVar14 + 1;
    uVar12 = uVar12 + 1;
    iVar8 = iVar7;
    iVar13 = iVar7 + (uint)*puVar1;
  }
LAB_14ff40baf:
  uVar11 = uVar5 * this->m_counts[(int)uVar12];
  param_1->code = param_1->code - uVar5 * iVar8;
  param_1->range = uVar11;
  if (uVar11 < 0x1000000) {
    pbVar6 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar11 = uVar11 << 8;
      param_1->range = uVar11;
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      param_1->code = param_1->code | (uint)bVar3;
      param_1->ptr = pbVar6;
    } while (uVar11 < 0x1000000);
  }
  return uVar12;
}

// decode_noadapt_with_excludelist<int> @ 14ff40c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<int>
          (O0ArithCoder<unsigned_short,256> *this,rrArithDecoder *param_1,int *param_2,int param_3)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_78;
  uVar14 = this->m_sum;
  lVar12 = 0;
  local_78 = *(undefined8 *)this->m_sum16s;
  uStack_70 = *(undefined8 *)(this->m_sum16s + 2);
  local_68 = *(undefined8 *)(this->m_sum16s + 4);
  uStack_60 = *(undefined8 *)(this->m_sum16s + 6);
  lVar13 = (longlong)param_3;
  local_58 = *(undefined8 *)(this->m_sum16s + 8);
  uStack_50 = *(undefined8 *)(this->m_sum16s + 10);
  local_48 = *(undefined8 *)(this->m_sum16s + 0xc);
  uStack_40 = *(undefined8 *)(this->m_sum16s + 0xe);
  if (0 < param_3) {
    do {
      iVar9 = param_2[lVar12];
      lVar11 = (longlong)iVar9;
      uVar14 = uVar14 - this->m_counts[lVar11];
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xf;
      }
      lVar12 = lVar12 + 1;
      piVar2 = (int *)((longlong)&local_78 + (longlong)(iVar9 >> 4) * 4);
      *piVar2 = *piVar2 - (uint)this->m_counts[lVar11];
    } while (lVar12 < lVar13);
  }
  uVar4 = (ulonglong)param_1->range / (ulonglong)uVar14;
  uVar6 = (uint)uVar4;
  param_1->range = uVar6;
  uVar7 = (uint)(param_1->code / uVar4);
  if (uVar14 <= uVar7) {
    uVar7 = uVar14 - 1;
  }
  iVar9 = 0;
  iVar15 = 0;
  lVar12 = 0;
  do {
    iVar10 = *(int *)((longlong)&local_78 + lVar12 * 4) + iVar9;
    if ((int)uVar7 < iVar10) break;
    iVar9 = iVar10 + *(int *)((longlong)&local_78 + lVar12 * 4 + 4);
    if ((int)uVar7 < iVar9) {
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      break;
    }
    iVar10 = iVar9 + *(int *)((longlong)&uStack_70 + lVar12 * 4);
    if ((int)uVar7 < iVar10) {
      iVar15 = iVar15 + 2;
      break;
    }
    iVar9 = iVar10 + *(int *)((longlong)&uStack_70 + lVar12 * 4 + 4);
    if ((int)uVar7 < iVar9) {
      iVar15 = iVar15 + 3;
      iVar9 = iVar10;
      break;
    }
    lVar12 = lVar12 + 4;
    iVar15 = iVar15 + 4;
  } while (lVar12 < 0x10);
  iVar10 = iVar15 << 4;
  puVar16 = this->m_counts + iVar10;
  if (*(int *)((longlong)&local_78 + (longlong)iVar15 * 4) == this->m_sum16s[iVar15]) {
    iVar15 = (uint)*puVar16 + iVar9;
    while (iVar5 = iVar15, iVar5 <= (int)uVar7) {
      puVar1 = puVar16 + 1;
      puVar16 = puVar16 + 1;
      iVar10 = iVar10 + 1;
      iVar9 = iVar5;
      iVar15 = iVar5 + (uint)*puVar1;
    }
LAB_14ff40da5:
    uVar14 = uVar6 * this->m_counts[iVar10];
    param_1->code = param_1->code - uVar6 * iVar9;
    param_1->range = uVar14;
    if (uVar14 < 0x1000000) {
      pbVar8 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar14 = uVar14 << 8;
        param_1->range = uVar14;
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        param_1->code = param_1->code | (uint)bVar3;
        param_1->ptr = pbVar8;
      } while (uVar14 < 0x1000000);
    }
    return iVar10;
  }
  do {
    uVar14 = (uint)*puVar16;
    lVar12 = 0;
    if (0 < lVar13) {
      do {
        if (param_2[lVar12] == iVar10) {
          uVar14 = 0;
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar13);
    }
    if ((int)uVar7 < (int)(uVar14 + iVar9)) goto LAB_14ff40da5;
    iVar10 = iVar10 + 1;
    puVar16 = puVar16 + 1;
    iVar9 = uVar14 + iVar9;
  } while( true );
}

// default_construct<unsigned_char> @ 14ff40e70

uchar * __cdecl oo2net::default_construct<unsigned_char>(uchar *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<unsigned_char> @ 14ff40e80

uchar * __cdecl oo2net::destruct<unsigned_char>(uchar *param_1)

{
  return param_1;
}

// destruct<unsigned_char> @ 14ff40e90

uchar * __cdecl oo2net::destruct<unsigned_char>(uchar *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<int> @ 14ff40ea0

int * __cdecl oo2net::destruct<int>(int *param_1)

{
  return param_1;
}

// destruct<int> @ 14ff40eb0

int * __cdecl oo2net::destruct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<unsigned_char_const_*> @ 14ff40ec0

uchar ** __cdecl oo2net::destruct<unsigned_char_const_*>(uchar **param_1)

{
  return param_1;
}

// destruct<unsigned_char_const_*> @ 14ff40ed0

uchar ** __cdecl oo2net::destruct<unsigned_char_const_*>(uchar **param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::OodleNetwork1UDP_CountingState> @ 14ff40ee0

OodleNetwork1UDP_CountingState * __cdecl
oo2net::destruct<oo2net::OodleNetwork1UDP_CountingState>(OodleNetwork1UDP_CountingState *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieMatch> @ 14ff40ef0

SuffixTrieMatch * __cdecl oo2net::destruct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieMatch> @ 14ff40f00

SuffixTrieMatch * __cdecl
oo2net::destruct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::rated_packet> @ 14ff40f10

rated_packet * __cdecl oo2net::destruct<oo2net::rated_packet>(rated_packet *param_1)

{
  return param_1;
}

// destruct<oo2net::rated_packet> @ 14ff40f20

rated_packet * __cdecl oo2net::destruct<oo2net::rated_packet>(rated_packet *param_1,ulong64 param_2)

{
  return param_1;
}

// encode_noadapt_with_excludelist<unsigned_char> @ 14ff40f40

void __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
          (O0ArithCoder<unsigned_short,256> *this,rrArithEncoder *param_1,int param_2,uchar *param_3
          ,int param_4)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar7;
  ulonglong uVar10;
  ulonglong uVar12;
  
  uVar8 = 0;
  uVar5 = 0;
  uVar13 = 0;
  lVar16 = (longlong)param_2;
  uVar9 = 0;
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  lVar15 = (longlong)iVar2;
  iVar14 = 0;
  uVar7 = uVar8;
  uVar11 = uVar9;
  if (1 < lVar15) {
    piVar4 = this->m_sum16s + 1;
    lVar6 = (lVar15 - 2U >> 1) + 1;
    uVar7 = lVar6 * 2;
    uVar10 = uVar8;
    uVar12 = uVar8;
    do {
      uVar11 = (int)uVar12 + piVar4[-1];
      uVar12 = (ulonglong)uVar11;
      uVar9 = (int)uVar10 + *piVar4;
      uVar10 = (ulonglong)uVar9;
      piVar4 = piVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar7 < lVar15) {
    iVar14 = this->m_sum16s[uVar7];
  }
  iVar14 = iVar14 + uVar9 + uVar11;
  lVar15 = (longlong)(iVar2 << 4);
  if (lVar16 <= lVar15) goto LAB_14ff4101a;
  if (lVar16 - lVar15 < 2) {
LAB_14ff4100c:
    iVar14 = iVar14 + (uint)this->m_counts[lVar15];
  }
  else {
    uVar7 = uVar8;
    uVar10 = uVar8;
    do {
      uVar5 = (int)uVar7 + (uint)this->m_counts[lVar15];
      uVar7 = (ulonglong)uVar5;
      uVar13 = (int)uVar10 + (uint)this->m_counts[lVar15 + 1];
      uVar10 = (ulonglong)uVar13;
      lVar15 = lVar15 + 2;
    } while (lVar15 < lVar16 + -1);
    if (lVar15 < lVar16) goto LAB_14ff4100c;
  }
  iVar14 = iVar14 + uVar13 + uVar5;
LAB_14ff4101a:
  uVar11 = this->m_sum;
  if (0 < (longlong)param_4) {
    do {
      iVar2 = iVar14 - (uint)this->m_counts[param_3[uVar8]];
      if (param_2 <= (int)(uint)param_3[uVar8]) {
        iVar2 = iVar14;
      }
      iVar14 = iVar2;
      uVar11 = uVar11 - this->m_counts[param_3[uVar8]];
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)param_4);
  }
  uVar5 = param_1->low;
  uVar11 = param_1->range / uVar11;
  param_1->range = uVar11 * this->m_counts[lVar16];
  uVar11 = uVar11 * iVar14 + uVar5;
  param_1->low = uVar11;
  if (uVar11 < uVar5) {
    puVar3 = param_1->ptr + -1;
    uVar1 = *puVar3;
    while (uVar1 == 0xff) {
      *puVar3 = '\0';
      puVar3 = puVar3 + -1;
      uVar1 = *puVar3;
    }
    *puVar3 = uVar1 + '\x01';
  }
  uVar11 = param_1->range;
  while (uVar11 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar11 = param_1->range;
  }
  return;
}

// encode_noadapt_with_excludelist<int> @ 14ff41100

void __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<int>
          (O0ArithCoder<unsigned_short,256> *this,rrArithEncoder *param_1,int param_2,int *param_3,
          int param_4)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar7;
  ulonglong uVar10;
  ulonglong uVar12;
  
  uVar8 = 0;
  uVar5 = 0;
  uVar13 = 0;
  lVar16 = (longlong)param_2;
  uVar9 = 0;
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  lVar15 = (longlong)iVar2;
  iVar14 = 0;
  uVar7 = uVar8;
  uVar11 = uVar9;
  if (1 < lVar15) {
    piVar4 = this->m_sum16s + 1;
    lVar6 = (lVar15 - 2U >> 1) + 1;
    uVar7 = lVar6 * 2;
    uVar10 = uVar8;
    uVar12 = uVar8;
    do {
      uVar11 = (int)uVar12 + piVar4[-1];
      uVar12 = (ulonglong)uVar11;
      uVar9 = (int)uVar10 + *piVar4;
      uVar10 = (ulonglong)uVar9;
      piVar4 = piVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar7 < lVar15) {
    iVar14 = this->m_sum16s[uVar7];
  }
  iVar14 = iVar14 + uVar9 + uVar11;
  lVar15 = (longlong)(iVar2 << 4);
  if (lVar16 <= lVar15) goto LAB_14ff411da;
  if (lVar16 - lVar15 < 2) {
LAB_14ff411cc:
    iVar14 = iVar14 + (uint)this->m_counts[lVar15];
  }
  else {
    uVar7 = uVar8;
    uVar10 = uVar8;
    do {
      uVar5 = (int)uVar7 + (uint)this->m_counts[lVar15];
      uVar7 = (ulonglong)uVar5;
      uVar13 = (int)uVar10 + (uint)this->m_counts[lVar15 + 1];
      uVar10 = (ulonglong)uVar13;
      lVar15 = lVar15 + 2;
    } while (lVar15 < lVar16 + -1);
    if (lVar15 < lVar16) goto LAB_14ff411cc;
  }
  iVar14 = iVar14 + uVar13 + uVar5;
LAB_14ff411da:
  uVar11 = this->m_sum;
  if (0 < (longlong)param_4) {
    do {
      iVar2 = iVar14 - (uint)this->m_counts[param_3[uVar8]];
      if (param_2 <= param_3[uVar8]) {
        iVar2 = iVar14;
      }
      iVar14 = iVar2;
      uVar11 = uVar11 - this->m_counts[param_3[uVar8]];
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)param_4);
  }
  uVar5 = param_1->low;
  uVar11 = param_1->range / uVar11;
  param_1->range = uVar11 * this->m_counts[lVar16];
  uVar11 = uVar11 * iVar14 + uVar5;
  param_1->low = uVar11;
  if (uVar11 < uVar5) {
    puVar3 = param_1->ptr + -1;
    uVar1 = *puVar3;
    while (uVar1 == 0xff) {
      *puVar3 = '\0';
      puVar3 = puVar3 + -1;
      uVar1 = *puVar3;
    }
    *puVar3 = uVar1 + '\x01';
  }
  uVar11 = param_1->range;
  while (uVar11 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar11 = param_1->range;
  }
  return;
}

// extend_construct_in_place<> @ 14ff412c0

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
extend_construct_in_place<>
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  rated_packet *prVar3;
  undefined8 *puVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    prVar3 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    this->m_size = uVar1;
    if (prVar3 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff41320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar3);
      return;
    }
  }
  else {
    this->m_size = uVar1;
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
  }
  return;
}

// extend_construct_in_place<unsigned_char_const_*_const_&> @ 14ff41360

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
extend_construct_in_place<unsigned_char_const_*_const_&>
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          uchar **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  uchar **ppuVar3;
  undefined8 *puVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    ppuVar3 = vector_storage<unsigned_char_const_*>::makefit1
                        ((vector_storage<unsigned_char_const_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (ppuVar3 != (uchar **)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(ppuVar3);
    }
  }
  else {
    this->m_size = uVar1;
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
  }
  return;
}

// forward<unsigned_char_const_*_const_&> @ 14ff413f0

uchar ** __cdecl oo2net::forward<unsigned_char_const_*_const_&>(uchar **param_1)

{
  return param_1;
}

// move<unsigned_char_&> @ 14ff41400

uchar * __cdecl oo2net::move<unsigned_char_&>(uchar *param_1)

{
  return param_1;
}

// move<int_&> @ 14ff41410

int * __cdecl oo2net::move<int_&>(int *param_1)

{
  return param_1;
}

// move<unsigned_char_const_*_&> @ 14ff41420

uchar ** __cdecl oo2net::move<unsigned_char_const_*_&>(uchar **param_1)

{
  return param_1;
}

// move<oo2net::rated_packet_&> @ 14ff41430

rated_packet * __cdecl oo2net::move<oo2net::rated_packet_&>(rated_packet *param_1)

{
  return param_1;
}

// move<oo2net::rated_packet> @ 14ff41440

void __cdecl
oo2net::move<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2,ulong64 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  rated_packet *prVar5;
  longlong lVar6;
  
  if (param_2 < param_1) {
    lVar6 = param_3 - 1;
    if (-1 < lVar6) {
      prVar5 = param_1 + lVar6;
      do {
        lVar6 = lVar6 + -1;
        pdVar1 = (double *)(((longlong)param_2 - (longlong)param_1) + (longlong)prVar5);
        dVar3 = pdVar1[1];
        prVar5->rating = *pdVar1;
        prVar5->base_rating = dVar3;
        puVar2 = (undefined8 *)
                 (((longlong)param_2 - (longlong)param_1) + 0x30 + (longlong)(prVar5 + -1));
        uVar4 = puVar2[1];
        prVar5->packet_ptr = (void *)*puVar2;
        *(undefined8 *)&prVar5->packet_size = uVar4;
        prVar5 = prVar5 + -1;
      } while (-1 < lVar6);
      return;
    }
  }
  else if (param_3 != 0) {
    prVar5 = param_1;
    do {
      pdVar1 = (double *)((longlong)prVar5 + ((longlong)param_2 - (longlong)param_1));
      dVar3 = pdVar1[1];
      prVar5->rating = *pdVar1;
      prVar5->base_rating = dVar3;
      puVar2 = (undefined8 *)((longlong)prVar5 + ((longlong)param_2 - (longlong)param_1) + 0x10);
      uVar4 = puVar2[1];
      prVar5->packet_ptr = (void *)*puVar2;
      *(undefined8 *)&prVar5->packet_size = uVar4;
      param_3 = param_3 - 1;
      prVar5 = prVar5 + 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<unsigned_char> @ 14ff414c0

void __cdecl oo2net::move_construct<unsigned_char>(uchar *param_1,uchar *param_2)

{
  if (param_1 != (uchar *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<unsigned_char> @ 14ff414e0

void __cdecl oo2net::move_construct<unsigned_char>(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (uchar *)0x0) {
        *param_1 = param_1[lVar1];
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<int> @ 14ff41510

void __cdecl oo2net::move_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<int> @ 14ff41520

void __cdecl oo2net::move_construct<int>(int *param_1,int *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = *(int *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<unsigned_char_const_*> @ 14ff41550

void __cdecl oo2net::move_construct<unsigned_char_const_*>(uchar **param_1,uchar **param_2)

{
  if (param_1 != (uchar **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<unsigned_char_const_*> @ 14ff41570

void __cdecl
oo2net::move_construct<unsigned_char_const_*>(uchar **param_1,uchar **param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (uchar **)0x0) {
        *param_1 = *(uchar **)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2net::rated_packet> @ 14ff415a0

void __cdecl
oo2net::move_construct<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (rated_packet *)0x0) {
    dVar1 = param_2->base_rating;
    param_1->rating = param_2->rating;
    param_1->base_rating = dVar1;
    iVar2 = param_2->packet_size;
    uVar3 = *(undefined4 *)&param_2->field_0x1c;
    param_1->packet_ptr = param_2->packet_ptr;
    param_1->packet_size = iVar2;
    *(undefined4 *)&param_1->field_0x1c = uVar3;
  }
  return;
}

// move_construct<oo2net::rated_packet> @ 14ff415c0

void __cdecl
oo2net::move_construct<oo2net::rated_packet>
          (rated_packet *param_1,rated_packet *param_2,ulong64 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (rated_packet *)0x0) {
        pdVar1 = (double *)(lVar5 + (longlong)param_1);
        dVar3 = pdVar1[1];
        param_1->rating = *pdVar1;
        param_1->base_rating = dVar3;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + (longlong)param_1);
        uVar4 = puVar2[1];
        param_1->packet_ptr = (void *)*puVar2;
        *(undefined8 *)&param_1->packet_size = uVar4;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// stdsort<oo2net::rated_packet_*,oo2net::stdless<oo2net::rated_packet>_> @ 14ff41600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::stdsort<oo2net::rated_packet_*,oo2net::stdless<oo2net::rated_packet>_>
          (rated_packet *param_1,rated_packet *param_2,stdless<oo2net::rated_packet> param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  rated_packet *prVar7;
  longlong lVar8;
  rated_packet *prVar9;
  rated_packet *prVar10;
  rated_packet *prVar11;
  ulonglong uVar12;
  rated_packet *prVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar15 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 5);
  uVar14 = uVar15;
  puVar19 = local_48;
  if (1 < uVar15) {
    do {
      puVar18 = puVar19;
      puVar19 = puVar18 + -3;
      uVar14 = (uVar14 >> 2) + (uVar14 >> 1);
    } while (uVar14 != 0);
    puVar18[-4] = 0;
    prVar13 = param_1 + (uVar15 - 1);
LAB_14ff41690:
    do {
      if (1 < uVar15) {
        dVar1 = prVar13->rating;
        if (uVar15 == 2) {
          if (param_1->rating <= dVar1 && dVar1 != param_1->rating) {
            dVar1 = prVar13->base_rating;
            uVar20 = *(undefined4 *)&param_1->rating;
            uVar21 = *(undefined4 *)((longlong)&param_1->rating + 4);
            uVar22 = *(undefined4 *)&param_1->base_rating;
            uVar23 = *(undefined4 *)((longlong)&param_1->base_rating + 4);
            uVar24 = *(undefined4 *)&param_1->packet_ptr;
            uVar25 = *(undefined4 *)((longlong)&param_1->packet_ptr + 4);
            iVar26 = param_1->packet_size;
            uVar27 = *(undefined4 *)&param_1->field_0x1c;
            param_1->rating = prVar13->rating;
            param_1->base_rating = dVar1;
            iVar5 = prVar13->packet_size;
            uVar6 = *(undefined4 *)&prVar13->field_0x1c;
            param_1->packet_ptr = prVar13->packet_ptr;
            param_1->packet_size = iVar5;
            *(undefined4 *)&param_1->field_0x1c = uVar6;
LAB_14ff41a74:
            *(undefined4 *)&prVar13->rating = uVar20;
            *(undefined4 *)((longlong)&prVar13->rating + 4) = uVar21;
            *(undefined4 *)&prVar13->base_rating = uVar22;
            *(undefined4 *)((longlong)&prVar13->base_rating + 4) = uVar23;
            *(undefined4 *)&prVar13->packet_ptr = uVar24;
            *(undefined4 *)((longlong)&prVar13->packet_ptr + 4) = uVar25;
            prVar13->packet_size = iVar26;
            *(undefined4 *)&prVar13->field_0x1c = uVar27;
          }
        }
        else {
          dVar2 = param_1->rating;
          uVar14 = uVar15 >> 1;
          prVar7 = param_1 + uVar14;
          dVar3 = prVar7->rating;
          if (dVar3 <= dVar2) {
            if (dVar3 < dVar1) {
              if (dVar1 < dVar2) goto LAB_14ff41727;
              dVar1 = prVar7->base_rating;
              dVar2 = param_1->rating;
              dVar3 = param_1->base_rating;
              pvVar4 = param_1->packet_ptr;
              iVar5 = param_1->packet_size;
              uVar21 = *(undefined4 *)&param_1->field_0x1c;
              param_1->rating = prVar7->rating;
              param_1->base_rating = dVar1;
              iVar26 = prVar7->packet_size;
              uVar20 = *(undefined4 *)&prVar7->field_0x1c;
              param_1->packet_ptr = prVar7->packet_ptr;
              param_1->packet_size = iVar26;
              *(undefined4 *)&param_1->field_0x1c = uVar20;
              prVar7->rating = dVar2;
              prVar7->base_rating = dVar3;
              prVar7->packet_ptr = pvVar4;
              prVar7->packet_size = iVar5;
              *(undefined4 *)&prVar7->field_0x1c = uVar21;
              goto LAB_14ff4176a;
            }
          }
          else {
            if (dVar3 <= dVar1) {
LAB_14ff4176a:
              dVar1 = prVar13->base_rating;
              uVar20 = *(undefined4 *)&param_1->rating;
              uVar21 = *(undefined4 *)((longlong)&param_1->rating + 4);
              uVar22 = *(undefined4 *)&param_1->base_rating;
              uVar23 = *(undefined4 *)((longlong)&param_1->base_rating + 4);
              uVar24 = *(undefined4 *)&param_1->packet_ptr;
              uVar25 = *(undefined4 *)((longlong)&param_1->packet_ptr + 4);
              iVar26 = param_1->packet_size;
              uVar27 = *(undefined4 *)&param_1->field_0x1c;
              param_1->rating = prVar13->rating;
              param_1->base_rating = dVar1;
              iVar5 = prVar13->packet_size;
              uVar6 = *(undefined4 *)&prVar13->field_0x1c;
              param_1->packet_ptr = prVar13->packet_ptr;
              param_1->packet_size = iVar5;
              *(undefined4 *)&param_1->field_0x1c = uVar6;
            }
            else {
              if (dVar1 < dVar2) {
                dVar1 = prVar7->base_rating;
                dVar2 = param_1->rating;
                dVar3 = param_1->base_rating;
                pvVar4 = param_1->packet_ptr;
                iVar5 = param_1->packet_size;
                uVar21 = *(undefined4 *)&param_1->field_0x1c;
                param_1->rating = prVar7->rating;
                param_1->base_rating = dVar1;
                iVar26 = prVar7->packet_size;
                uVar20 = *(undefined4 *)&prVar7->field_0x1c;
                param_1->packet_ptr = prVar7->packet_ptr;
                param_1->packet_size = iVar26;
                *(undefined4 *)&param_1->field_0x1c = uVar20;
                prVar7->rating = dVar2;
                prVar7->base_rating = dVar3;
                prVar7->packet_ptr = pvVar4;
                prVar7->packet_size = iVar5;
                *(undefined4 *)&prVar7->field_0x1c = uVar21;
                goto LAB_14ff4178a;
              }
              dVar1 = param_1->base_rating;
              dVar2 = prVar7->rating;
              dVar3 = prVar7->base_rating;
              pvVar4 = prVar7->packet_ptr;
              iVar5 = prVar7->packet_size;
              uVar21 = *(undefined4 *)&prVar7->field_0x1c;
              prVar7->rating = param_1->rating;
              prVar7->base_rating = dVar1;
              iVar26 = param_1->packet_size;
              uVar20 = *(undefined4 *)&param_1->field_0x1c;
              prVar7->packet_ptr = param_1->packet_ptr;
              prVar7->packet_size = iVar26;
              *(undefined4 *)&prVar7->field_0x1c = uVar20;
              param_1->rating = dVar2;
              param_1->base_rating = dVar3;
              param_1->packet_ptr = pvVar4;
              param_1->packet_size = iVar5;
              *(undefined4 *)&param_1->field_0x1c = uVar21;
LAB_14ff41727:
              dVar1 = prVar13->base_rating;
              uVar20 = *(undefined4 *)&prVar7->rating;
              uVar21 = *(undefined4 *)((longlong)&prVar7->rating + 4);
              uVar22 = *(undefined4 *)&prVar7->base_rating;
              uVar23 = *(undefined4 *)((longlong)&prVar7->base_rating + 4);
              uVar24 = *(undefined4 *)&prVar7->packet_ptr;
              uVar25 = *(undefined4 *)((longlong)&prVar7->packet_ptr + 4);
              iVar26 = prVar7->packet_size;
              uVar27 = *(undefined4 *)&prVar7->field_0x1c;
              prVar7->rating = prVar13->rating;
              prVar7->base_rating = dVar1;
              iVar5 = prVar13->packet_size;
              uVar6 = *(undefined4 *)&prVar13->field_0x1c;
              prVar7->packet_ptr = prVar13->packet_ptr;
              prVar7->packet_size = iVar5;
              *(undefined4 *)&prVar7->field_0x1c = uVar6;
            }
            *(undefined4 *)&prVar13->rating = uVar20;
            *(undefined4 *)((longlong)&prVar13->rating + 4) = uVar21;
            *(undefined4 *)&prVar13->base_rating = uVar22;
            *(undefined4 *)((longlong)&prVar13->base_rating + 4) = uVar23;
            *(undefined4 *)&prVar13->packet_ptr = uVar24;
            *(undefined4 *)((longlong)&prVar13->packet_ptr + 4) = uVar25;
            prVar13->packet_size = iVar26;
            *(undefined4 *)&prVar13->field_0x1c = uVar27;
          }
LAB_14ff4178a:
          if (4 < uVar15) {
            if (puVar19 == local_48) {
LAB_14ff418e5:
              uVar14 = uVar14 - 1;
              prVar7 = prVar7 + -1;
              uVar12 = uVar14 * 2 + 1;
              prVar10 = prVar7;
LAB_14ff41900:
              prVar9 = param_1 + uVar12;
              prVar11 = prVar9 + 1;
              if ((prVar11 <= prVar13) &&
                 (prVar11->rating <= prVar9->rating && prVar9->rating != prVar11->rating)) {
                uVar12 = uVar12 + 1;
                prVar9 = prVar11;
              }
              if (prVar9->rating <= prVar10->rating && prVar10->rating != prVar9->rating)
              goto code_r0x00014ff4192f;
              goto code_r0x00014ff41960;
            }
            dVar1 = param_1->base_rating;
            dVar2 = prVar7->rating;
            dVar3 = prVar7->base_rating;
            pvVar4 = prVar7->packet_ptr;
            iVar5 = prVar7->packet_size;
            uVar21 = *(undefined4 *)&prVar7->field_0x1c;
            prVar7->rating = param_1->rating;
            prVar7->base_rating = dVar1;
            iVar26 = param_1->packet_size;
            uVar20 = *(undefined4 *)&param_1->field_0x1c;
            prVar7->packet_ptr = param_1->packet_ptr;
            prVar7->packet_size = iVar26;
            *(undefined4 *)&prVar7->field_0x1c = uVar20;
            param_1->rating = dVar2;
            param_1->base_rating = dVar3;
            param_1->packet_ptr = pvVar4;
            param_1->packet_size = iVar5;
            *(undefined4 *)&param_1->field_0x1c = uVar21;
            prVar7 = param_1;
            prVar10 = prVar13;
            while( true ) {
              dVar1 = param_1->rating;
              do {
                prVar11 = prVar10;
                prVar10 = prVar11 + -1;
              } while (prVar10->rating <= dVar1 && dVar1 != prVar10->rating);
              prVar9 = prVar7;
              if (prVar10 <= prVar7) break;
              do {
                prVar7 = prVar9;
                prVar9 = prVar7 + 1;
              } while (dVar1 < prVar7[1].rating);
              if (prVar10 <= prVar9) break;
              dVar1 = prVar11[-1].base_rating;
              dVar2 = prVar9->rating;
              dVar3 = prVar7[1].base_rating;
              pvVar4 = prVar7[1].packet_ptr;
              iVar5 = prVar7[1].packet_size;
              uVar21 = *(undefined4 *)&prVar7[1].field_0x1c;
              prVar9->rating = prVar10->rating;
              prVar7[1].base_rating = dVar1;
              iVar26 = prVar11[-1].packet_size;
              uVar20 = *(undefined4 *)&prVar11[-1].field_0x1c;
              prVar7[1].packet_ptr = prVar11[-1].packet_ptr;
              prVar7[1].packet_size = iVar26;
              *(undefined4 *)&prVar7[1].field_0x1c = uVar20;
              prVar10->rating = dVar2;
              prVar11[-1].base_rating = dVar3;
              prVar11[-1].packet_ptr = pvVar4;
              prVar11[-1].packet_size = iVar5;
              *(undefined4 *)&prVar11[-1].field_0x1c = uVar21;
              prVar7 = prVar9;
            }
            dVar1 = prVar7->base_rating;
            dVar2 = param_1->rating;
            dVar3 = param_1->base_rating;
            pvVar4 = param_1->packet_ptr;
            iVar5 = param_1->packet_size;
            uVar21 = *(undefined4 *)&param_1->field_0x1c;
            param_1->rating = prVar7->rating;
            param_1->base_rating = dVar1;
            iVar26 = prVar7->packet_size;
            uVar20 = *(undefined4 *)&prVar7->field_0x1c;
            param_1->packet_ptr = prVar7->packet_ptr;
            param_1->packet_size = iVar26;
            *(undefined4 *)&param_1->field_0x1c = uVar20;
            prVar7->rating = dVar2;
            prVar7->base_rating = dVar3;
            prVar7->packet_ptr = pvVar4;
            prVar7->packet_size = iVar5;
            *(undefined4 *)&prVar7->field_0x1c = uVar21;
            prVar10 = prVar7;
            do {
              prVar10 = prVar10 + 1;
              if (prVar13 <= prVar10) break;
            } while (prVar7->rating < prVar10->rating || prVar7->rating == prVar10->rating);
            prVar11 = prVar7 + -1;
            if (param_1 < prVar11) {
              do {
                if (prVar7->rating < prVar11->rating) break;
                prVar11 = prVar11 + -1;
              } while (param_1 < prVar11);
            }
            lVar17 = (longlong)prVar13 - (longlong)prVar10 >> 5;
            lVar16 = (longlong)prVar11 - (longlong)param_1 >> 5;
            uVar15 = lVar17 + 1;
            uVar14 = lVar16 + 1;
            prVar7 = prVar13;
            prVar9 = prVar10;
            if (uVar14 > uVar15) {
              prVar7 = prVar11;
              prVar11 = prVar13;
              prVar9 = param_1;
              param_1 = prVar10;
            }
            *puVar19 = (ulonglong)param_1;
            lVar8 = lVar17;
            if (uVar14 <= uVar15) {
              lVar8 = lVar16;
            }
            puVar19[1] = (ulonglong)prVar11;
            puVar19[2] = lVar8 + 1;
            if (uVar14 <= uVar15) {
              lVar16 = lVar17;
            }
            uVar15 = lVar16 + 1;
            prVar13 = prVar7;
            param_1 = prVar9;
            puVar19 = puVar19 + 3;
            goto LAB_14ff41690;
          }
          if (uVar15 != 3) {
            dVar1 = param_1[1].rating;
            if (prVar7->rating <= dVar1) {
              if (param_1->rating <= dVar1 && dVar1 != param_1->rating) {
                dVar1 = param_1[1].base_rating;
                dVar2 = param_1->rating;
                dVar3 = param_1->base_rating;
                pvVar4 = param_1->packet_ptr;
                iVar5 = param_1->packet_size;
                uVar21 = *(undefined4 *)&param_1->field_0x1c;
                param_1->rating = param_1[1].rating;
                param_1->base_rating = dVar1;
                iVar26 = param_1[1].packet_size;
                uVar20 = *(undefined4 *)&param_1[1].field_0x1c;
                param_1->packet_ptr = param_1[1].packet_ptr;
                param_1->packet_size = iVar26;
                *(undefined4 *)&param_1->field_0x1c = uVar20;
                param_1[1].rating = dVar2;
                param_1[1].base_rating = dVar3;
                param_1[1].packet_ptr = pvVar4;
                param_1[1].packet_size = iVar5;
                *(undefined4 *)&param_1[1].field_0x1c = uVar21;
              }
            }
            else {
              if (dVar1 < prVar13->rating || dVar1 == prVar13->rating) {
                dVar1 = param_1[1].base_rating;
                dVar2 = prVar7->rating;
                dVar3 = prVar7->base_rating;
                pvVar4 = prVar7->packet_ptr;
                iVar5 = prVar7->packet_size;
                uVar21 = *(undefined4 *)&prVar7->field_0x1c;
                prVar7->rating = param_1[1].rating;
                prVar7->base_rating = dVar1;
                iVar26 = param_1[1].packet_size;
                uVar20 = *(undefined4 *)&param_1[1].field_0x1c;
                prVar7->packet_ptr = param_1[1].packet_ptr;
                prVar7->packet_size = iVar26;
                *(undefined4 *)&prVar7->field_0x1c = uVar20;
                param_1[1].rating = dVar2;
                param_1[1].base_rating = dVar3;
                param_1[1].packet_ptr = pvVar4;
                param_1[1].packet_size = iVar5;
                *(undefined4 *)&param_1[1].field_0x1c = uVar21;
                dVar1 = prVar13->base_rating;
                uVar20 = *(undefined4 *)&prVar7->rating;
                uVar21 = *(undefined4 *)((longlong)&prVar7->rating + 4);
                uVar22 = *(undefined4 *)&prVar7->base_rating;
                uVar23 = *(undefined4 *)((longlong)&prVar7->base_rating + 4);
                uVar24 = *(undefined4 *)&prVar7->packet_ptr;
                uVar25 = *(undefined4 *)((longlong)&prVar7->packet_ptr + 4);
                iVar26 = prVar7->packet_size;
                uVar27 = *(undefined4 *)&prVar7->field_0x1c;
                prVar7->rating = prVar13->rating;
                prVar7->base_rating = dVar1;
                iVar5 = prVar13->packet_size;
                uVar6 = *(undefined4 *)&prVar13->field_0x1c;
                prVar7->packet_ptr = prVar13->packet_ptr;
                prVar7->packet_size = iVar5;
                *(undefined4 *)&prVar7->field_0x1c = uVar6;
                goto LAB_14ff41a74;
              }
              dVar1 = prVar7->base_rating;
              dVar2 = param_1[1].rating;
              dVar3 = param_1[1].base_rating;
              pvVar4 = param_1[1].packet_ptr;
              iVar5 = param_1[1].packet_size;
              uVar21 = *(undefined4 *)&param_1[1].field_0x1c;
              param_1[1].rating = prVar7->rating;
              param_1[1].base_rating = dVar1;
              iVar26 = prVar7->packet_size;
              uVar20 = *(undefined4 *)&prVar7->field_0x1c;
              param_1[1].packet_ptr = prVar7->packet_ptr;
              param_1[1].packet_size = iVar26;
              *(undefined4 *)&param_1[1].field_0x1c = uVar20;
              prVar7->rating = dVar2;
              prVar7->base_rating = dVar3;
              prVar7->packet_ptr = pvVar4;
              prVar7->packet_size = iVar5;
              *(undefined4 *)&prVar7->field_0x1c = uVar21;
            }
          }
        }
      }
LAB_14ff41a7b:
      uVar15 = puVar19[-1];
      param_1 = (rated_packet *)puVar19[-3];
      prVar13 = (rated_packet *)puVar19[-2];
      puVar19 = puVar19 + -3;
    } while (uVar15 != 0);
  }
  return;
code_r0x00014ff4192f:
  dVar1 = prVar10->rating;
  dVar2 = prVar10->base_rating;
  uVar12 = uVar12 * 2 + 1;
  pvVar4 = prVar10->packet_ptr;
  iVar5 = prVar10->packet_size;
  uVar21 = *(undefined4 *)&prVar10->field_0x1c;
  dVar3 = prVar9->base_rating;
  prVar10->rating = prVar9->rating;
  prVar10->base_rating = dVar3;
  iVar26 = prVar9->packet_size;
  uVar20 = *(undefined4 *)&prVar9->field_0x1c;
  prVar10->packet_ptr = prVar9->packet_ptr;
  prVar10->packet_size = iVar26;
  *(undefined4 *)&prVar10->field_0x1c = uVar20;
  prVar9->rating = dVar1;
  prVar9->base_rating = dVar2;
  prVar9->packet_ptr = pvVar4;
  prVar9->packet_size = iVar5;
  *(undefined4 *)&prVar9->field_0x1c = uVar21;
  prVar10 = prVar9;
  if (uVar15 <= uVar12) {
code_r0x00014ff41960:
    if (uVar14 == 0) {
      dVar1 = prVar13->base_rating;
      uVar15 = uVar15 - 1;
      uVar12 = 1;
      dVar2 = param_1->rating;
      dVar3 = param_1->base_rating;
      pvVar4 = param_1->packet_ptr;
      iVar5 = param_1->packet_size;
      uVar21 = *(undefined4 *)&param_1->field_0x1c;
      param_1->rating = prVar13->rating;
      param_1->base_rating = dVar1;
      iVar26 = prVar13->packet_size;
      uVar20 = *(undefined4 *)&prVar13->field_0x1c;
      param_1->packet_ptr = prVar13->packet_ptr;
      param_1->packet_size = iVar26;
      *(undefined4 *)&param_1->field_0x1c = uVar20;
      prVar13->rating = dVar2;
      prVar13->base_rating = dVar3;
      prVar13->packet_ptr = pvVar4;
      prVar13->packet_size = iVar5;
      *(undefined4 *)&prVar13->field_0x1c = uVar21;
      prVar13 = prVar13 + -1;
      prVar10 = param_1;
      if (uVar15 < 2) goto LAB_14ff41a7b;
      goto LAB_14ff41900;
    }
    goto LAB_14ff418e5;
  }
  goto LAB_14ff41900;
}

// stdsort<oo2net::rated_packet> @ 14ff41af0

void __cdecl oo2net::stdsort<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2)

{
  undefined1 local_res18;
  
  stdsort<oo2net::rated_packet_*,oo2net::stdless<oo2net::rated_packet>_>
            (param_1,param_2,local_res18);
  return;
}

// sum<unsigned_int> @ 14ff41b20

uint __cdecl oo2net::sum<unsigned_int>(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar6 = 0;
  uVar7 = (ulonglong)((longlong)param_2 + (3 - (longlong)param_1)) >> 2;
  if (param_2 < param_1) {
    uVar7 = uVar6;
  }
  if ((uVar7 != 0) && (7 < uVar7)) {
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    do {
      uVar6 = uVar6 + 8;
      iVar12 = iVar12 + *param_1;
      iVar13 = iVar13 + param_1[1];
      iVar14 = iVar14 + param_1[2];
      iVar15 = iVar15 + param_1[3];
      puVar1 = param_1 + 4;
      puVar2 = param_1 + 5;
      puVar3 = param_1 + 6;
      puVar4 = param_1 + 7;
      param_1 = param_1 + 8;
      iVar8 = iVar8 + *puVar1;
      iVar9 = iVar9 + *puVar2;
      iVar10 = iVar10 + *puVar3;
      iVar11 = iVar11 + *puVar4;
    } while (uVar6 != (uVar7 & 0xfffffffffffffff8));
    uVar6 = (ulonglong)(uint)(iVar8 + iVar12 + iVar10 + iVar14 + iVar9 + iVar13 + iVar11 + iVar15);
  }
  uVar5 = (uint)uVar6;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar5 = (int)uVar6 + *param_1;
    uVar6 = (ulonglong)uVar5;
  }
  return uVar5;
}

// swap3<oo2net::rated_packet> @ 14ff41bb0

void __cdecl
oo2net::swap3<oo2net::rated_packet>
          (rated_packet *param_1,rated_packet *param_2,rated_packet *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  dVar1 = param_2->base_rating;
  dVar2 = param_1->rating;
  dVar3 = param_1->base_rating;
  pvVar4 = param_1->packet_ptr;
  iVar7 = param_1->packet_size;
  uVar8 = *(undefined4 *)&param_1->field_0x1c;
  param_1->rating = param_2->rating;
  param_1->base_rating = dVar1;
  iVar5 = param_2->packet_size;
  uVar6 = *(undefined4 *)&param_2->field_0x1c;
  param_1->packet_ptr = param_2->packet_ptr;
  param_1->packet_size = iVar5;
  *(undefined4 *)&param_1->field_0x1c = uVar6;
  param_2->rating = dVar2;
  param_2->base_rating = dVar3;
  param_2->packet_ptr = pvVar4;
  param_2->packet_size = iVar7;
  *(undefined4 *)&param_2->field_0x1c = uVar8;
  dVar1 = param_3->base_rating;
  dVar2 = param_1->rating;
  dVar3 = param_1->base_rating;
  pvVar4 = param_1->packet_ptr;
  iVar7 = param_1->packet_size;
  uVar8 = *(undefined4 *)&param_1->field_0x1c;
  param_1->rating = param_3->rating;
  param_1->base_rating = dVar1;
  iVar5 = param_3->packet_size;
  uVar6 = *(undefined4 *)&param_3->field_0x1c;
  param_1->packet_ptr = param_3->packet_ptr;
  param_1->packet_size = iVar5;
  *(undefined4 *)&param_1->field_0x1c = uVar6;
  param_3->rating = dVar2;
  param_3->base_rating = dVar3;
  param_3->packet_ptr = pvVar4;
  param_3->packet_size = iVar7;
  *(undefined4 *)&param_3->field_0x1c = uVar8;
  return;
}

// swap<unsigned_char> @ 14ff41c00

void __cdecl oo2net::swap<unsigned_char>(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// swap<oo2net::rated_packet> @ 14ff41c20

void __cdecl oo2net::swap<oo2net::rated_packet>(rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  dVar1 = param_2->base_rating;
  dVar2 = param_1->rating;
  dVar3 = param_1->base_rating;
  pvVar4 = param_1->packet_ptr;
  iVar7 = param_1->packet_size;
  uVar8 = *(undefined4 *)&param_1->field_0x1c;
  param_1->rating = param_2->rating;
  param_1->base_rating = dVar1;
  iVar5 = param_2->packet_size;
  uVar6 = *(undefined4 *)&param_2->field_0x1c;
  param_1->packet_ptr = param_2->packet_ptr;
  param_1->packet_size = iVar5;
  *(undefined4 *)&param_1->field_0x1c = uVar6;
  param_2->rating = dVar2;
  param_2->base_rating = dVar3;
  param_2->packet_ptr = pvVar4;
  param_2->packet_size = iVar7;
  *(undefined4 *)&param_2->field_0x1c = uVar8;
  return;
}

// vector<unsigned_char> @ 14ff41c50

vector<unsigned_char> * __thiscall
oo2net::vector<unsigned_char>::vector<unsigned_char>(vector<unsigned_char> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<int> @ 14ff41c70

vector<int> * __thiscall oo2net::vector<int>::vector<int>(vector<int> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<unsigned_char_const_*> @ 14ff41c90

vector<unsigned_char_const_*> * __thiscall
oo2net::vector<unsigned_char_const_*>::vector<unsigned_char_const_*>
          (vector<unsigned_char_const_*> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2net::SuffixTrieMatch> @ 14ff41cb0

vector<oo2net::SuffixTrieMatch> * __thiscall
oo2net::vector<oo2net::SuffixTrieMatch>::vector<oo2net::SuffixTrieMatch>
          (vector<oo2net::SuffixTrieMatch> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2net::rated_packet> @ 14ff41cd0

vector<oo2net::rated_packet> * __thiscall
oo2net::vector<oo2net::rated_packet>::vector<oo2net::rated_packet>
          (vector<oo2net::rated_packet> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> @ 14ff41cf0

vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> * __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::
vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<int,oo2net::vector_storage<int>_> @ 14ff41d10

vector_base<int,oo2net::vector_storage<int>_> * __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::vector_base<int,oo2net::vector_storage<int>_>
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> @ 14ff41d30

vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> * __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> @ 14ff41d50

vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> * __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> @ 14ff41d70

vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> @ 14ff41d90

vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> * __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::
vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<int,oo2net::vector_storage<int>_> @ 14ff41db0

vector_flex<int,oo2net::vector_storage<int>_> * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::vector_flex<int,oo2net::vector_storage<int>_>
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> @ 14ff41dd0

vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> * __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> @ 14ff41df0

vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> * __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> @ 14ff41e10

vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<unsigned_char> @ 14ff41e30

vector_storage<unsigned_char> * __thiscall
oo2net::vector_storage<unsigned_char>::vector_storage<unsigned_char>
          (vector_storage<unsigned_char> *this)

{
  this->m_begin = (uchar *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<int> @ 14ff41e50

vector_storage<int> * __thiscall
oo2net::vector_storage<int>::vector_storage<int>(vector_storage<int> *this)

{
  this->m_begin = (int *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<unsigned_char_const_*> @ 14ff41e70

vector_storage<unsigned_char_const_*> * __thiscall
oo2net::vector_storage<unsigned_char_const_*>::vector_storage<unsigned_char_const_*>
          (vector_storage<unsigned_char_const_*> *this)

{
  this->m_begin = (uchar **)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2net::SuffixTrieMatch> @ 14ff41e90

vector_storage<oo2net::SuffixTrieMatch> * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::vector_storage<oo2net::SuffixTrieMatch>
          (vector_storage<oo2net::SuffixTrieMatch> *this)

{
  this->m_begin = (SuffixTrieMatch *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2net::rated_packet> @ 14ff41eb0

vector_storage<oo2net::rated_packet> * __thiscall
oo2net::vector_storage<oo2net::rated_packet>::vector_storage<oo2net::rated_packet>
          (vector_storage<oo2net::rated_packet> *this)

{
  this->m_begin = (rated_packet *)0x0;
  this->m_capacity = 0;
  return this;
}

// ~vector<unsigned_char> @ 14ff41ee0

void __thiscall oo2net::vector<unsigned_char>::~vector<unsigned_char>(vector<unsigned_char> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<int> @ 14ff41f40

void __thiscall oo2net::vector<int>::~vector<int>(vector<int> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<unsigned_char_const_*> @ 14ff41fa0

void __thiscall
oo2net::vector<unsigned_char_const_*>::~vector<unsigned_char_const_*>
          (vector<unsigned_char_const_*> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2net::SuffixTrieMatch> @ 14ff42000

void __thiscall
oo2net::vector<oo2net::SuffixTrieMatch>::~vector<oo2net::SuffixTrieMatch>
          (vector<oo2net::SuffixTrieMatch> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2net::rated_packet> @ 14ff42060

void __thiscall
oo2net::vector<oo2net::rated_packet>::~vector<oo2net::rated_packet>
          (vector<oo2net::rated_packet> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> @ 14ff420c0

void __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::
~vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<int,oo2net::vector_storage<int>_> @ 14ff42120

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::
~vector_base<int,oo2net::vector_storage<int>_>(vector_base<int,oo2net::vector_storage<int>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> @ 14ff42180

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
~vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> @ 14ff421e0

void __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
~vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> @ 14ff42240

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
~vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> @ 14ff422a0

void __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::
~vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<int,oo2net::vector_storage<int>_> @ 14ff42300

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::
~vector_flex<int,oo2net::vector_storage<int>_>(vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> @ 14ff42360

void __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
~vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> @ 14ff423c0

void __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
~vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> @ 14ff42420

void __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
~vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<unsigned_char> @ 14ff42480

void __thiscall
oo2net::vector_storage<unsigned_char>::~vector_storage<unsigned_char>
          (vector_storage<unsigned_char> *this)

{
  if (this->m_begin != (uchar *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (uchar *)0x0;
  return;
}

// ~vector_storage<int> @ 14ff424c0

void __thiscall oo2net::vector_storage<int>::~vector_storage<int>(vector_storage<int> *this)

{
  if (this->m_begin != (int *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (int *)0x0;
  return;
}

// ~vector_storage<unsigned_char_const_*> @ 14ff42500

void __thiscall
oo2net::vector_storage<unsigned_char_const_*>::~vector_storage<unsigned_char_const_*>
          (vector_storage<unsigned_char_const_*> *this)

{
  if (this->m_begin != (uchar **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (uchar **)0x0;
  return;
}

// ~vector_storage<oo2net::SuffixTrieMatch> @ 14ff42540

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::~vector_storage<oo2net::SuffixTrieMatch>
          (vector_storage<oo2net::SuffixTrieMatch> *this)

{
  if (this->m_begin != (SuffixTrieMatch *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixTrieMatch *)0x0;
  return;
}

// ~vector_storage<oo2net::rated_packet> @ 14ff42580

void __thiscall
oo2net::vector_storage<oo2net::rated_packet>::~vector_storage<oo2net::rated_packet>
          (vector_storage<oo2net::rated_packet> *this)

{
  if (this->m_begin != (rated_packet *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (rated_packet *)0x0;
  return;
}

// operator= @ 14ff425c0

vector<oo2net::rated_packet> * __thiscall
oo2net::vector<oo2net::rated_packet>::operator=
          (vector<oo2net::rated_packet> *this,vector<oo2net::rated_packet> *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  rated_packet *prVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar2 = *(undefined8 **)param_1;
  uVar9 = (*(longlong *)&param_1->field_0x10 << 5) >> 5;
  if (uVar9 <= *(ulonglong *)&this->field_0x10) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 != puVar2) {
      if (puVar2 < puVar6) {
        lVar8 = uVar9 - 1;
        if (-1 < lVar8) {
          puVar4 = puVar6 + lVar8 * 4;
          do {
            lVar8 = lVar8 + -1;
            puVar1 = (undefined8 *)(((longlong)puVar2 - (longlong)puVar6) + (longlong)puVar4);
            uVar3 = puVar1[1];
            *puVar4 = *puVar1;
            puVar4[1] = uVar3;
            puVar1 = (undefined8 *)
                     (((longlong)puVar2 - (longlong)puVar6) + 0x30 + (longlong)(puVar4 + -4));
            uVar3 = puVar1[1];
            puVar4[2] = *puVar1;
            puVar4[3] = uVar3;
            puVar4 = puVar4 + -4;
          } while (-1 < lVar8);
          *(ulonglong *)&this->field_0x10 = uVar9;
          return this;
        }
      }
      else if (uVar9 != 0) {
        puVar4 = puVar6;
        uVar7 = uVar9;
        do {
          puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)puVar2 - (longlong)puVar6));
          uVar3 = puVar1[1];
          *puVar4 = *puVar1;
          puVar4[1] = uVar3;
          puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)puVar2 - (longlong)puVar6) + 0x10);
          uVar3 = puVar1[1];
          puVar4[2] = *puVar1;
          puVar4[3] = uVar3;
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar7 != 0);
      }
    }
    *(ulonglong *)&this->field_0x10 = uVar9;
    return this;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(ulonglong *)&this->field_0x8 < uVar9) {
    prVar5 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar9,0);
    puVar6 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar9;
    if (uVar9 != 0) {
      lVar8 = (longlong)puVar2 - (longlong)puVar6;
      do {
        if (puVar6 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar8 + (longlong)puVar6);
          uVar3 = puVar2[1];
          *puVar6 = *puVar2;
          puVar6[1] = uVar3;
          puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)puVar6);
          uVar3 = puVar2[1];
          puVar6[2] = *puVar2;
          puVar6[3] = uVar3;
        }
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (prVar5 != (rated_packet *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(prVar5);
      return this;
    }
  }
  else {
    puVar6 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar9;
    if (uVar9 != 0) {
      lVar8 = (longlong)puVar2 - (longlong)puVar6;
      do {
        if (puVar6 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar8 + (longlong)puVar6);
          uVar3 = puVar2[1];
          *puVar6 = *puVar2;
          puVar6[1] = uVar3;
          puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)puVar6);
          uVar3 = puVar2[1];
          puVar6[2] = *puVar2;
          puVar6[3] = uVar3;
        }
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return this;
}

// operator= @ 14ff42740

void __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::operator=
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  rated_packet *prVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar2 = *(undefined8 **)param_1;
  uVar9 = (*(longlong *)&param_1->field_0x10 << 5) >> 5;
  if (uVar9 <= *(ulonglong *)&this->field_0x10) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 != puVar2) {
      if (puVar2 < puVar6) {
        lVar8 = uVar9 - 1;
        if (-1 < lVar8) {
          puVar4 = puVar6 + lVar8 * 4;
          do {
            lVar8 = lVar8 + -1;
            puVar1 = (undefined8 *)(((longlong)puVar2 - (longlong)puVar6) + (longlong)puVar4);
            uVar3 = puVar1[1];
            *puVar4 = *puVar1;
            puVar4[1] = uVar3;
            puVar1 = (undefined8 *)
                     (((longlong)puVar2 - (longlong)puVar6) + 0x30 + (longlong)(puVar4 + -4));
            uVar3 = puVar1[1];
            puVar4[2] = *puVar1;
            puVar4[3] = uVar3;
            puVar4 = puVar4 + -4;
          } while (-1 < lVar8);
          *(ulonglong *)&this->field_0x10 = uVar9;
          return;
        }
      }
      else if (uVar9 != 0) {
        puVar4 = puVar6;
        uVar7 = uVar9;
        do {
          puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)puVar2 - (longlong)puVar6));
          uVar3 = puVar1[1];
          *puVar4 = *puVar1;
          puVar4[1] = uVar3;
          puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)puVar2 - (longlong)puVar6) + 0x10);
          uVar3 = puVar1[1];
          puVar4[2] = *puVar1;
          puVar4[3] = uVar3;
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar7 != 0);
      }
    }
    *(ulonglong *)&this->field_0x10 = uVar9;
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(ulonglong *)&this->field_0x8 < uVar9) {
    prVar5 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar9,0);
    puVar6 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar9;
    if (uVar9 != 0) {
      lVar8 = (longlong)puVar2 - (longlong)puVar6;
      do {
        if (puVar6 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar8 + (longlong)puVar6);
          uVar3 = puVar2[1];
          *puVar6 = *puVar2;
          puVar6[1] = uVar3;
          puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)puVar6);
          uVar3 = puVar2[1];
          puVar6[2] = *puVar2;
          puVar6[3] = uVar3;
        }
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (prVar5 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff42860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar5);
      return;
    }
  }
  else {
    puVar6 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar9;
    if (uVar9 != 0) {
      lVar8 = (longlong)puVar2 - (longlong)puVar6;
      do {
        if (puVar6 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar8 + (longlong)puVar6);
          uVar3 = puVar2[1];
          *puVar6 = *puVar2;
          puVar6[1] = uVar3;
          puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)puVar6);
          uVar3 = puVar2[1];
          puVar6[2] = *puVar2;
          puVar6[3] = uVar3;
        }
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

// operator[] @ 14ff428b0

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::operator[]
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// operator[] @ 14ff428c0

uchar ** __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::
operator[](vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  return (uchar **)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14ff428d0

SuffixTrieMatch * __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
operator[](vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this,ulong64 param_1)

{
  return (SuffixTrieMatch *)(*(longlong *)this + param_1 * 0x18);
}

// operator[] @ 14ff428f0

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::operator[]
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  return (rated_packet *)(param_1 * 0x20 + *(longlong *)this);
}

// operator[] @ 14ff42910

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::operator[]
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  return (rated_packet *)(param_1 * 0x20 + *(longlong *)this);
}

// operator< @ 14ff42930

bool __thiscall oo2net::rated_packet::operator<(rated_packet *this,rated_packet *param_1)

{
  return param_1->rating <= this->rating && this->rating != param_1->rating;
}

// operator() @ 14ff42950

bool __thiscall
oo2net::stdless<oo2net::rated_packet>::operator()
          (stdless<oo2net::rated_packet> *this,rated_packet *param_1,rated_packet *param_2)

{
  return param_2->rating <= param_1->rating && param_1->rating != param_2->rating;
}

// operator() @ 14ff42970

void __thiscall
oo2net::swap_functor<unsigned_char>::operator()
          (swap_functor<unsigned_char> *this,uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// operator() @ 14ff42990

void __thiscall
oo2net::swap_functor<oo2net::rated_packet>::operator()
          (swap_functor<oo2net::rated_packet> *this,rated_packet *param_1,rated_packet *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  dVar1 = param_2->base_rating;
  dVar2 = param_1->rating;
  dVar3 = param_1->base_rating;
  pvVar4 = param_1->packet_ptr;
  iVar7 = param_1->packet_size;
  uVar8 = *(undefined4 *)&param_1->field_0x1c;
  param_1->rating = param_2->rating;
  param_1->base_rating = dVar1;
  iVar5 = param_2->packet_size;
  uVar6 = *(undefined4 *)&param_2->field_0x1c;
  param_1->packet_ptr = param_2->packet_ptr;
  param_1->packet_size = iVar5;
  *(undefined4 *)&param_1->field_0x1c = uVar6;
  param_2->rating = dVar2;
  param_2->base_rating = dVar3;
  param_2->packet_ptr = pvVar4;
  param_2->packet_size = iVar7;
  *(undefined4 *)&param_2->field_0x1c = uVar8;
  return;
}

// ContextBack3 @ 14ff429c0

uint __cdecl oo2net::ContextBack3(uchar *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + -3);
  return (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

// ContextSlide3 @ 14ff429e0

uint __cdecl oo2net::ContextSlide3(uint param_1,uint param_2)

{
  return (param_1 | param_2) << 8;
}

// Count @ 14ff42a00

void __thiscall
oo2net::OodleNetwork1UDP_CountingState::Count
          (OodleNetwork1UDP_CountingState *this,OodleNetwork1_Shared *param_1,uchar *param_2,
          long64 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  ON1_HashEntry *pOVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  
  if (6 < param_3) {
    while (0x4000 < (ulonglong)param_3) {
      Count(this,param_1,param_2,0x4000);
      param_2 = (uchar *)((longlong)param_2 + 0x4000);
      param_3 = param_3 - 0x4000;
      if (param_3 < 7) {
        return;
      }
    }
    puVar7 = param_1->m_lzp_window;
    puVar18 = (ulonglong *)((longlong)param_2 + 3);
    uVar13 = *(uint *)param_2;
    uVar6 = param_1->m_lzp_hash_mask;
    puVar8 = param_1->m_lzp_window_end;
    puVar3 = this->m_histos_nomatch[0].counts + (byte)uVar13;
    *puVar3 = *puVar3 + 2;
    bVar4 = *(byte *)((longlong)param_2 + 1);
    puVar2 = (ulonglong *)((longlong)param_2 + param_3);
    puVar3 = this->m_histos_nomatch[(byte)uVar13].counts + bVar4;
    *puVar3 = *puVar3 + 2;
    puVar1 = (ulonglong *)((longlong)puVar2 - 1);
    bVar5 = *(byte *)((longlong)param_2 + 2);
    puVar3 = this->m_histos_nomatch[bVar4].counts + bVar5;
    *puVar3 = *puVar3 + 2;
    uVar13 = *(uint *)param_2;
    uVar19 = (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar12 = (ulonglong)bVar5;
    uVar13 = uVar13 >> 0x18;
LAB_14ff42ae0:
    while( true ) {
      uVar21 = (ulonglong)uVar13;
      uVar10 = uVar19 * -0x61c8864f;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8;
      uVar14 = (ulonglong)(uVar10 & uVar6);
      if (((param_1->m_lzp_hash[uVar14].context == uVar19) ||
          (uVar14 = (ulonglong)(uVar10 + 1 & uVar6), param_1->m_lzp_hash[uVar14].context == uVar19))
         && (pOVar11 = param_1->m_lzp_hash + uVar14, pOVar11 != (ON1_HashEntry *)0x0)) break;
      puVar3 = this->m_histos_nomatch[uVar12].counts + uVar21;
      *puVar3 = *puVar3 + 2;
      puVar18 = (ulonglong *)((longlong)puVar18 + 1);
      if (puVar1 <= puVar18) goto joined_r0x00014ff42cfd;
      uVar19 = (uVar19 | uVar13) << 8;
      uVar12 = uVar21;
      uVar13 = (uint)*(byte *)puVar18;
    }
    uVar10._0_3_ = pOVar11->index;
    uVar10._3_1_ = pOVar11->mp0;
    puVar20 = (ulonglong *)(puVar7 + (uVar10 & 0xffffff));
    uVar10 = ((int)uVar12 << 8 | (uint)(byte)*puVar20) * -0x61c8864f;
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 & 0xfff;
    if (uVar13 == (byte)*puVar20) {
      puVar16 = puVar18 + 2;
      if (puVar16 < puVar2) {
        if (*puVar18 == *puVar20) {
          if (puVar18[1] == puVar20[1]) {
            lVar15 = (longlong)puVar8 - (longlong)puVar20;
            uVar12 = 0x10;
            lVar17 = (longlong)puVar2 - (longlong)puVar18;
            if (lVar15 <= (longlong)puVar2 - (longlong)puVar18) {
              lVar17 = lVar15;
            }
            if (0x10 < lVar17) {
              do {
                if ((byte)*puVar16 !=
                    *(byte *)(((longlong)puVar20 - (longlong)puVar18) + (longlong)puVar16)) break;
                uVar12 = uVar12 + 1;
                puVar16 = (ulonglong *)((longlong)puVar16 + 1);
              } while ((longlong)uVar12 < lVar17);
            }
          }
          else {
            uVar14 = puVar20[1] ^ puVar18[1];
            uVar12 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            uVar12 = (ulonglong)(((uint)(uVar12 >> 3) & 0x1fffffff) + 8);
          }
        }
        else {
          uVar14 = *puVar20 ^ *puVar18;
          uVar12 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          uVar12 = uVar12 >> 3;
        }
      }
      else {
        lVar15 = (longlong)puVar8 - (longlong)puVar20;
        lVar17 = (longlong)puVar2 - (longlong)puVar18;
        if (lVar15 <= (longlong)puVar2 - (longlong)puVar18) {
          lVar17 = lVar15;
        }
        uVar12 = 1;
        if (1 < lVar17) {
          puVar16 = puVar18;
          do {
            puVar16 = (ulonglong *)((longlong)puVar16 + 1);
            if (*(byte *)puVar16 !=
                *(byte *)((longlong)puVar16 + ((longlong)puVar20 - (longlong)puVar18))) break;
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < lVar17);
        }
      }
      if (uVar12 != 1) {
        if ((longlong)uVar12 < 0xe) {
          puVar3 = this->m_histos_match[uVar10].counts + (longlong)(int)uVar12 + 0xfe;
          *puVar3 = *puVar3 + 2;
        }
        else {
          uVar13 = (int)uVar12 - 0xc;
          iVar9 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          puVar3 = this->m_histos_match[uVar10].counts + (iVar9 + 0x10b);
          *puVar3 = *puVar3 + 2;
        }
        puVar18 = (ulonglong *)((longlong)puVar18 + uVar12);
        if (puVar1 <= puVar18) goto joined_r0x00014ff42cfd;
        uVar13 = *(uint *)((longlong)puVar18 + -3);
        uVar19 = (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
        uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + -1);
        uVar13 = (uint)(byte)*puVar18;
        goto LAB_14ff42ae0;
      }
      puVar3 = this->m_histos_match[uVar10].counts + (int)uVar13;
      *puVar3 = *puVar3 + 2;
    }
    else {
      puVar3 = this->m_histos_match[uVar10].counts + (int)uVar13;
      *puVar3 = *puVar3 + 2;
    }
    puVar18 = (ulonglong *)((longlong)puVar18 + 1);
    if (puVar18 < puVar1) {
      uVar19 = (uVar19 | uVar13) << 8;
      uVar12 = uVar21;
      uVar13 = (uint)*(byte *)puVar18;
      goto LAB_14ff42ae0;
    }
joined_r0x00014ff42cfd:
    for (; puVar18 < puVar2; puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
      puVar3 = this->m_histos_nomatch[*(byte *)((longlong)puVar18 + -1)].counts + (byte)*puVar18;
      *puVar3 = *puVar3 + 2;
    }
  }
  return;
}

// Decode @ 14ff42d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __thiscall
oo2net::OodleNetwork1TCP_State::Decode
          (OodleNetwork1TCP_State *this,OodleNetwork1_Shared *param_1,uchar *param_2,long64 param_3,
          uchar *param_4,long64 param_5)

{
  byte *pbVar1;
  SRCoder<8,unsigned_char> *pSVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar12;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong lVar20;
  O0ArithCoder<unsigned_short,256> *pOVar21;
  byte *pbVar22;
  uchar *puVar23;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  longlong alStack_88 [2];
  rrArithDecoder local_78;
  uint local_60;
  ON1_HashEntry *local_58;
  byte *local_50;
  byte *local_48;
  uchar *local_40;
  ulonglong local_38;
  
  puVar17 = auStack_a8;
  puVar16 = auStack_a8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_78;
  if (param_5 < 7) {
    uStack_b0 = 0x14ff42da5;
    memcpy(param_4,param_2,param_5);
  }
  else if (param_3 < param_5) {
    uStack_b0 = 0x14ff42e25;
    rrArithDecodeInit(&local_78,param_2);
    puVar23 = param_1->m_lzp_window;
    local_58 = param_1->m_lzp_hash;
    local_50 = param_1->m_lzp_window_end;
    local_60 = param_1->m_lzp_hash_mask;
    uStack_b0 = 0x14ff42e4e;
    local_40 = puVar23;
    uVar6 = SRCoder<8,unsigned_char>::decode((SRCoder<8,unsigned_char> *)this,&local_78);
    pOVar21 = &(this->m_o1ac_lit_nomatch).m_o0;
    if (uVar6 == 0xffffffff) {
      uStack_b0 = 0x14ff42e72;
      uVar6 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                        (pOVar21,&local_78,(this->m_o1ac_lit_nomatch).m_o1[0].m_syms,8);
      uStack_b0 = 0x14ff42e85;
      O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,uVar6,2);
      (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[7] = (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[6];
      (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[6] = (uchar)uVar6;
    }
    *param_4 = (uchar)uVar6;
    pSVar2 = (this->m_o1ac_lit_nomatch).m_o1 + (uVar6 & 0xff);
    uStack_b0 = 0x14ff42eb6;
    uVar6 = SRCoder<8,unsigned_char>::decode(pSVar2,&local_78);
    if (uVar6 == 0xffffffff) {
      uStack_b0 = 0x14ff42ed1;
      uVar6 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                        (pOVar21,&local_78,pSVar2->m_syms,8);
      uStack_b0 = 0x14ff42ee5;
      O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,uVar6,2);
      pSVar2->m_syms[7] = pSVar2->m_syms[6];
      pSVar2->m_syms[6] = (uchar)uVar6;
    }
    param_4[1] = (uchar)uVar6;
    pSVar2 = (this->m_o1ac_lit_nomatch).m_o1 + (uVar6 & 0xff);
    uStack_b0 = 0x14ff42f0d;
    iVar7 = SRCoder<8,unsigned_char>::decode(pSVar2,&local_78);
    if (iVar7 == -1) {
      uStack_b0 = 0x14ff42f28;
      iVar7 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                        (pOVar21,&local_78,pSVar2->m_syms,8);
      uStack_b0 = 0x14ff42f3a;
      O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,iVar7,2);
      pSVar2->m_syms[7] = pSVar2->m_syms[6];
      pSVar2->m_syms[6] = (uchar)iVar7;
    }
    pbVar22 = param_4 + param_5;
    param_4[2] = (uchar)iVar7;
    pbVar18 = param_4 + 3;
    local_48 = pbVar22;
    if (pbVar18 < pbVar22 + -1) {
      pbVar1 = pbVar22 + -1;
      do {
        uVar6 = *(uint *)(pbVar18 + -3);
        uVar14 = (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = uVar14 * -0x61c8864f;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
        uVar8 = uVar6 & local_60;
        uVar6 = uVar6 + 1 & local_60;
        if (((local_58[uVar8].context == uVar14) &&
            (uVar12._0_3_ = local_58[uVar8].index, uVar12._3_1_ = local_58[uVar8].mp0,
            (uVar12 & 0xffffff) != 0)) ||
           ((local_58[uVar6].context == uVar14 &&
            (uVar12._0_3_ = local_58[uVar6].index, uVar12._3_1_ = local_58[uVar6].mp0,
            (uVar12 & 0xffffff) != 0)))) {
          bVar3 = pbVar18[-1];
          pbVar15 = puVar23 + (uVar12 & 0xffffff);
          if (pbVar15 == (byte *)0x0) goto LAB_14ff43229;
          uVar8 = (uint)CONCAT11(bVar3,*pbVar15) * -0x61c8864f;
          uVar6 = uVar8 >> 0x18;
          uVar8 = (uVar8 & 0xff0000) >> 8;
          uVar14 = uVar6 | uVar8 & 0xfff;
          uVar12 = (local_78.range >> 0xb) * (uint)(this->m_o1ac_mf).bin[uVar14];
          if (local_78.code < uVar12) {
            uVar4 = (this->m_o1ac_mf).bin[uVar14];
            (this->m_o1ac_mf).bin[uVar14] = (short)((int)(0x800 - (uint)uVar4) >> 4) + uVar4;
            for (local_78.range = uVar12; local_78.range < 0x1000000;
                local_78.range = local_78.range << 8) {
              bVar3 = *local_78.ptr;
              local_78.ptr = local_78.ptr + 1;
              local_78.code = (uint)bVar3 | local_78.code << 8;
            }
            bVar3 = *pbVar15;
            uVar6 = ((uint)(pbVar18[-1] >> 3) + (uint)pbVar18[-1]) * 0x100;
LAB_14ff43186:
            uStack_b0 = 0x14ff431a5;
            iVar7 = O1SRCoder4U8<12>::decode_withexclude
                              (&this->m_o1ac_lit_match,&local_78,uVar6 & 0xfff | (uint)bVar3,
                               (uint)bVar3);
            *pbVar18 = (byte)iVar7;
            goto LAB_14ff4329a;
          }
          local_78.code = local_78.code - uVar12;
          local_78.range = local_78.range - uVar12;
          uVar4 = (this->m_o1ac_mf).bin[uVar14];
          (this->m_o1ac_mf).bin[uVar14] = uVar4 - (uVar4 >> 4);
          for (; local_78.range < 0x1000000; local_78.range = local_78.range << 8) {
            bVar3 = *local_78.ptr;
            local_78.ptr = local_78.ptr + 1;
            local_78.code = (uint)bVar3 | local_78.code << 8;
          }
          uStack_b0 = 0x14ff430a5;
          iVar7 = O1ACNOSBValueCoder<9,3>::decode
                            (&this->m_o1ac_ml_vc,&local_78,uVar6 | uVar8 & 0x1ff);
          lVar20 = (longlong)(iVar7 + 1);
          *pbVar18 = *pbVar15;
          if (((lVar20 != 1) && (pbVar18[1] = pbVar15[1], lVar20 != 2)) &&
             (pbVar18[2] = pbVar15[2], lVar20 != 3)) {
            pbVar13 = pbVar18 + 4;
            pbVar18[3] = pbVar15[3];
            pbVar19 = pbVar15 + 4;
            uVar9 = (ulonglong)((uint)(lVar20 + -4 >> 0x3f) & 3);
            lVar10 = lVar20 + -4 + uVar9;
            lVar11 = ((uint)lVar10 & 3) - uVar9;
            lVar10 = lVar10 >> 2;
            if (0 < lVar10) {
              do {
                uVar5 = *(undefined4 *)pbVar19;
                pbVar19 = pbVar19 + 4;
                *(undefined4 *)pbVar13 = uVar5;
                pbVar13 = pbVar13 + 4;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            if (0 < lVar11) {
              lVar10 = (longlong)pbVar19 - (longlong)pbVar13;
              do {
                *pbVar13 = pbVar13[lVar10];
                pbVar13 = pbVar13 + 1;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          pbVar18 = pbVar18 + lVar20;
          if ((pbVar18 < pbVar22) && (pbVar15 + lVar20 < local_50)) {
            bVar3 = pbVar15[lVar20];
            uVar6 = (pbVar18[-1] & 0x7fffff8) * 0x20 + (uint)pbVar18[-1] * 0x100;
            goto LAB_14ff43186;
          }
        }
        else {
          bVar3 = pbVar18[-1];
LAB_14ff43229:
          pSVar2 = (this->m_o1ac_lit_nomatch).m_o1 + bVar3;
          uStack_b0 = 0x14ff43248;
          iVar7 = SRCoder<8,unsigned_char>::decode(pSVar2,&local_78);
          if (iVar7 == -1) {
            uStack_b0 = 0x14ff43268;
            iVar7 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                              (&(this->m_o1ac_lit_nomatch).m_o0,&local_78,pSVar2->m_syms,8);
            uStack_b0 = 0x14ff4327f;
            O0ArithCoder<unsigned_short,256>::inc_count(&(this->m_o1ac_lit_nomatch).m_o0,iVar7,2);
            (this->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[7] =
                 (this->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[6];
            (this->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[6] = (uchar)iVar7;
          }
          *pbVar18 = (byte)iVar7;
          pbVar22 = local_48;
          puVar23 = local_40;
LAB_14ff4329a:
          pbVar18 = pbVar18 + 1;
        }
      } while (pbVar18 < pbVar1);
    }
    pOVar21 = &(this->m_o1ac_lit_nomatch).m_o0;
    for (; puVar16 = auStack_a8, pbVar18 < pbVar22; pbVar18 = pbVar18 + 1) {
      pSVar2 = (this->m_o1ac_lit_nomatch).m_o1 + pbVar18[-1];
      uStack_b0 = 0x14ff432d8;
      iVar7 = SRCoder<8,unsigned_char>::decode(pSVar2,&local_78);
      if (iVar7 == -1) {
        uStack_b0 = 0x14ff432f3;
        iVar7 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                          (pOVar21,&local_78,pSVar2->m_syms,8);
        uStack_b0 = 0x14ff43305;
        O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,iVar7,2);
        pSVar2->m_syms[7] = pSVar2->m_syms[6];
        pSVar2->m_syms[6] = (uchar)iVar7;
      }
      *pbVar18 = (byte)iVar7;
    }
  }
  else {
    if (param_5 < param_3) {
      iVar7 = 0;
      goto LAB_14ff4331e;
    }
    uStack_b0 = 0x14ff42dcd;
    memcpy(param_4,param_2,param_5);
    uVar9 = param_5 + 0x100f;
    if (uVar9 <= param_5 + 0x1000U) {
      uVar9 = 0xffffffffffffff0;
    }
    uStack_b0 = 0x14ff42df0;
    lVar20 = -(uVar9 & 0xfffffffffffffff0);
    puVar16 = auStack_a8 + lVar20;
    (&stack0x00000f87)[param_5 + 0x1000U + lVar20 + -0x1000] = 0xec;
    *(longlong *)((longlong)alStack_88 + lVar20) = (longlong)&local_78 + lVar20;
    *(undefined8 *)(auStack_a8 + lVar20 + -8) = 0x14ff42e13;
    Encode(this,param_1,param_4,param_5,*(uchar **)((longlong)alStack_88 + lVar20));
  }
  iVar7 = 1;
  puVar17 = puVar16;
LAB_14ff4331e:
  *(undefined8 *)(puVar17 + -8) = 0x14ff4332a;
  return iVar7;
}

// Decode @ 14ff43360

/* WARNING: Type propagation algorithm not settling */

long64 __thiscall
oo2net::OodleNetwork1UDP_State::Decode
          (OodleNetwork1UDP_State *this,OodleNetwork1_Shared *param_1,uchar *param_2,long64 param_3,
          uchar *param_4,long64 param_5)

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uchar *puVar7;
  uchar *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  long64 lVar13;
  uint uVar14;
  ulonglong uVar15;
  short sVar16;
  longlong lVar17;
  uchar *puVar18;
  uchar *puVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  longlong lVar26;
  ON1_HashEntry *pOVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  rrArithDecoder local_48;
  
  if ((param_5 < 7) || (param_5 <= param_3)) {
    if (param_3 == param_5) {
      memcpy(param_4,param_2,param_5);
      return param_5;
    }
  }
  else if (param_5 < 0x4001) {
    pbVar20 = param_2 + param_3 + 5;
    rrArithDecodeInit(&local_48,param_2);
    puVar7 = param_1->m_lzp_window;
    uVar10 = 0;
    uVar24 = param_1->m_lzp_hash_mask;
    puVar8 = param_1->m_lzp_window_end;
    puVar3 = param_4 + param_5;
    puVar1 = puVar3 + -1;
    iVar21 = 0;
    do {
      while (puVar18 = param_4, local_48.range < 0x1000000) {
        local_48.range = local_48.range << 8;
        if (pbVar20 <= local_48.ptr) {
          return 0;
        }
        bVar4 = *local_48.ptr;
        local_48.ptr = local_48.ptr + 1;
        local_48.code = (uint)bVar4 | local_48.code << 8;
        param_4 = puVar18;
      }
      uVar10 = O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::decode_noadapt_norenorm
                         (this->m_coders_nomatch + (int)uVar10,&local_48);
      if (0xff < (int)uVar10) {
        return -1;
      }
      iVar21 = iVar21 + 1;
      *puVar18 = (uchar)uVar10;
      param_4 = puVar18 + 1;
    } while (iVar21 < 3);
    uVar22 = *(uint *)(puVar18 + -2);
    uVar22 = (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    pbVar25 = local_48.ptr;
    puVar18 = puVar18 + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_48.range < 0x1000000) {
            local_48.range = local_48.range << 8;
            if (pbVar20 <= pbVar25) {
              return 0;
            }
            local_48.ptr = pbVar25 + 1;
            local_48.code = (uint)*pbVar25 | local_48.code << 8;
            pbVar25 = local_48.ptr;
          }
          uVar11 = uVar22 * -0x61c8864f;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
          uVar15 = (ulonglong)(uVar11 & uVar24);
          if (((param_1->m_lzp_hash[uVar15].context == uVar22) ||
              (uVar15 = (ulonglong)(uVar11 + 1 & uVar24),
              param_1->m_lzp_hash[uVar15].context == uVar22)) &&
             (pOVar27 = param_1->m_lzp_hash + uVar15, pOVar27 != (ON1_HashEntry *)0x0)) break;
          uVar23 = local_48.range >> 0xc;
          uVar14 = local_48.code / uVar23 & 0xfff;
          bVar4 = this->m_coders_nomatch[(int)uVar10].m_jumptable[uVar14 >> 6];
          uVar15 = (ulonglong)bVar4;
          uVar11 = (uint)bVar4;
          sVar16 = (short)uVar14;
          puVar9 = this->m_coders_nomatch[(int)uVar10].m_cumprobs + uVar15 + 8;
          uVar6 = *puVar9;
          while (uVar6 <= uVar14) {
            puVar2 = puVar9 + 8;
            puVar9 = puVar9 + 8;
            uVar11 = (int)uVar15 + 8;
            uVar15 = (ulonglong)uVar11;
            uVar6 = *puVar2;
          }
          puVar9 = this->m_coders_nomatch[(int)uVar10].m_cumprobs + (longlong)(int)uVar11 + 1;
          auVar29._0_2_ = -(ushort)(sVar16 < (short)*puVar9);
          auVar29._2_2_ = -(ushort)(sVar16 < (short)puVar9[1]);
          auVar29._4_2_ = -(ushort)(sVar16 < (short)puVar9[2]);
          auVar29._6_2_ = -(ushort)(sVar16 < (short)puVar9[3]);
          auVar29._8_2_ = -(ushort)(sVar16 < (short)puVar9[4]);
          auVar29._10_2_ = -(ushort)(sVar16 < (short)puVar9[5]);
          auVar29._12_2_ = -(ushort)(sVar16 < (short)puVar9[6]);
          auVar29._14_2_ = -(ushort)(sVar16 < (short)puVar9[7]);
          uVar6 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar29._14_2_ >> 7) & 1) << 0xe | auVar29._14_2_ & 0x8000;
          uVar14 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          uVar11 = uVar11 + (uVar14 >> 1);
          uVar6 = this->m_coders_nomatch[(int)uVar10].m_cumprobs[(int)uVar11];
          local_48.range =
               uVar23 * ((uint)this->m_coders_nomatch[(int)uVar10].m_cumprobs
                               [(longlong)(int)uVar11 + 1] - (uint)uVar6);
          local_48.code = local_48.code - uVar6 * uVar23;
          *puVar18 = (uchar)uVar11;
          if (puVar1 <= puVar18 + 1) goto LAB_14ff43915;
          uVar22 = (uVar22 | uVar11) << 8;
          pbVar25 = local_48.ptr;
          uVar10 = uVar11;
          puVar18 = puVar18 + 1;
        }
        uVar23 = local_48.range >> 0xc;
        uVar10 = ((uint)pOVar27->mp0 | uVar10 << 8) * -0x61c8864f;
        uVar11 = local_48.code / uVar23 & 0xfff;
        uVar14 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 & 0xfff;
        uVar6 = this->m_coders_match[uVar14].m_jumptable[uVar11 >> 6];
        uVar15 = (ulonglong)uVar6;
        uVar10 = (uint)uVar6;
        sVar16 = (short)uVar11;
        puVar9 = this->m_coders_match[uVar14].m_cumprobs + uVar15 + 8;
        uVar6 = *puVar9;
        while (uVar6 <= uVar11) {
          puVar2 = puVar9 + 8;
          puVar9 = puVar9 + 8;
          uVar10 = (int)uVar15 + 8;
          uVar15 = (ulonglong)uVar10;
          uVar6 = *puVar2;
        }
        puVar9 = this->m_coders_match[uVar14].m_cumprobs + (longlong)(int)uVar10 + 1;
        auVar28._0_2_ = -(ushort)(sVar16 < (short)*puVar9);
        auVar28._2_2_ = -(ushort)(sVar16 < (short)puVar9[1]);
        auVar28._4_2_ = -(ushort)(sVar16 < (short)puVar9[2]);
        auVar28._6_2_ = -(ushort)(sVar16 < (short)puVar9[3]);
        auVar28._8_2_ = -(ushort)(sVar16 < (short)puVar9[4]);
        auVar28._10_2_ = -(ushort)(sVar16 < (short)puVar9[5]);
        auVar28._12_2_ = -(ushort)(sVar16 < (short)puVar9[6]);
        auVar28._14_2_ = -(ushort)(sVar16 < (short)puVar9[7]);
        uVar6 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar28._14_2_ >> 7) & 1) << 0xe | auVar28._14_2_ & 0x8000;
        uVar11 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        uVar10 = uVar10 + (uVar11 >> 1);
        uVar6 = this->m_coders_match[uVar14].m_cumprobs[(int)uVar10];
        local_48.range =
             uVar23 * ((uint)this->m_coders_match[uVar14].m_cumprobs[(longlong)(int)uVar10 + 1] -
                      (uint)uVar6);
        local_48.code = local_48.code - uVar6 * uVar23;
        if ((int)uVar10 < 0x100) break;
        uVar22._0_3_ = pOVar27->index;
        uVar22._3_1_ = pOVar27->mp0;
        uVar22 = uVar22 & 0xffffff;
        if ((int)uVar10 < 0x10c) {
          lVar26 = (longlong)(int)(uVar10 - 0xfe);
          if (puVar3 < puVar18 + lVar26) {
            return 0;
          }
          if (0 < lVar26) {
            puVar19 = puVar18;
            lVar17 = lVar26;
            do {
              *puVar19 = puVar19[(longlong)(puVar7 + ((ulonglong)uVar22 - (longlong)puVar18))];
              puVar19 = puVar19 + 1;
              lVar17 = lVar17 + -1;
              pbVar25 = local_48.ptr;
            } while (lVar17 != 0);
          }
          puVar19 = puVar18 + lVar26;
          if (puVar1 <= puVar19) goto joined_r0x00014ff43924;
          uVar22 = *(uint *)(puVar19 + -3);
          uVar10 = (uint)puVar19[-1];
          uVar22 = (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
          puVar18 = puVar19;
        }
        else {
          while (local_48.range < 0x1000000) {
            local_48.range = local_48.range << 8;
            if (pbVar20 <= pbVar25) {
              return 0;
            }
            bVar4 = *pbVar25;
            pbVar25 = pbVar25 + 1;
            local_48.code = (uint)bVar4 | local_48.code << 8;
            local_48.ptr = pbVar25;
          }
          local_48.range = local_48.range >> ((uchar)uVar10 - 0xb & 0x1f);
          lVar26 = (longlong)c_on2_len_decode_table[(int)(uVar10 - 0x10c)] +
                   (ulonglong)local_48.code / (ulonglong)local_48.range;
          puVar19 = puVar18 + lVar26;
          local_48.code =
               local_48.code -
               local_48.range * (int)((ulonglong)local_48.code / (ulonglong)local_48.range);
          if (puVar3 < puVar19) {
            return 0;
          }
          if (puVar8 < puVar7 + lVar26 + (ulonglong)uVar22) {
            return 0;
          }
          if (0 < lVar26) {
            lVar17 = (ulonglong)uVar22 - (longlong)puVar18;
            do {
              *puVar18 = puVar18[(longlong)(puVar7 + lVar17)];
              puVar18 = puVar18 + 1;
              lVar26 = lVar26 + -1;
              pbVar25 = local_48.ptr;
            } while (lVar26 != 0);
          }
          if (puVar1 <= puVar19) goto joined_r0x00014ff43924;
          uVar22 = *(uint *)(puVar19 + -3);
          uVar10 = (uint)puVar19[-1];
          uVar22 = (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
          puVar18 = puVar19;
        }
      }
      *puVar18 = (uchar)uVar10;
      if (puVar1 <= puVar18 + 1) break;
      uVar22 = (uVar22 | uVar10) << 8;
      pbVar25 = local_48.ptr;
      puVar18 = puVar18 + 1;
    }
LAB_14ff43915:
    puVar19 = puVar18 + 1;
    pbVar25 = local_48.ptr;
joined_r0x00014ff43924:
    while( true ) {
      if (puVar3 <= puVar19) {
        lVar13 = rrArithDecodeTellPos(&local_48);
        return lVar13;
      }
      while (local_48.range < 0x1000000) {
        local_48.range = local_48.range << 8;
        if (pbVar20 <= pbVar25) {
          return 0;
        }
        bVar4 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        local_48.code = (uint)bVar4 | local_48.code << 8;
        local_48.ptr = pbVar25;
      }
      bVar4 = puVar19[-1];
      uVar22 = local_48.range >> 0xc;
      uVar10 = local_48.code / uVar22 & 0xfff;
      bVar5 = this->m_coders_nomatch[bVar4].m_jumptable[uVar10 >> 6];
      uVar15 = (ulonglong)bVar5;
      uVar24 = (uint)bVar5;
      sVar16 = (short)uVar10;
      puVar9 = this->m_coders_nomatch[bVar4].m_cumprobs + uVar15 + 8;
      uVar6 = *puVar9;
      while (uVar6 <= uVar10) {
        puVar2 = puVar9 + 8;
        puVar9 = puVar9 + 8;
        uVar24 = (int)uVar15 + 8;
        uVar15 = (ulonglong)uVar24;
        uVar6 = *puVar2;
      }
      puVar9 = this->m_coders_nomatch[bVar4].m_cumprobs + (longlong)(int)uVar24 + 1;
      auVar30._0_2_ = -(ushort)(sVar16 < (short)*puVar9);
      auVar30._2_2_ = -(ushort)(sVar16 < (short)puVar9[1]);
      auVar30._4_2_ = -(ushort)(sVar16 < (short)puVar9[2]);
      auVar30._6_2_ = -(ushort)(sVar16 < (short)puVar9[3]);
      auVar30._8_2_ = -(ushort)(sVar16 < (short)puVar9[4]);
      auVar30._10_2_ = -(ushort)(sVar16 < (short)puVar9[5]);
      auVar30._12_2_ = -(ushort)(sVar16 < (short)puVar9[6]);
      auVar30._14_2_ = -(ushort)(sVar16 < (short)puVar9[7]);
      uVar6 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
              (ushort)((byte)(auVar30._14_2_ >> 7) & 1) << 0xe | auVar30._14_2_ & 0x8000;
      uVar10 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
        }
      }
      iVar21 = uVar24 + (uVar10 >> 1);
      uVar6 = this->m_coders_nomatch[bVar4].m_cumprobs[iVar21];
      local_48.range =
           uVar22 * ((uint)this->m_coders_nomatch[bVar4].m_cumprobs[(longlong)iVar21 + 1] -
                    (uint)uVar6);
      local_48.code = local_48.code - uVar6 * uVar22;
      if (0xff < iVar21) break;
      *puVar19 = (uchar)iVar21;
      puVar19 = puVar19 + 1;
      pbVar25 = local_48.ptr;
    }
  }
  else if (2 < param_3) {
    uVar15 = (ulonglong)*(ushort *)param_2;
    if (((longlong)uVar15 < param_3 + -2) &&
       (uVar12 = Decode(this,param_1,param_2 + 2,(ulonglong)*(ushort *)param_2,param_4,0x4000),
       uVar12 == uVar15)) {
      lVar13 = Decode(this,param_1,param_2 + 2 + uVar15,(param_3 + -2) - uVar15,param_4 + 0x4000,
                      param_5 + -0x4000);
      return lVar13 + 2 + uVar12;
    }
  }
  return -1;
}

// Encode @ 14ff43aa0

/* WARNING: Type propagation algorithm not settling */

long64 __thiscall
oo2net::OodleNetwork1TCP_State::Encode
          (OodleNetwork1TCP_State *this,OodleNetwork1_Shared *param_1,uchar *param_2,long64 param_3,
          uchar *param_4)

{
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  O0ArithCoder<unsigned_short,256> *pOVar8;
  bool bVar9;
  uchar *puVar10;
  long64 lVar11;
  uint uVar12;
  byte *pbVar13;
  SRCoder<8,unsigned_char> *pSVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  O0ArithCoder<unsigned_short,256> *this_00;
  byte bVar21;
  byte *pbVar22;
  rrArithEncoder local_90;
  uint local_78;
  byte *local_70;
  uchar *local_68;
  O0ArithCoder<unsigned_short,256> *local_60;
  uchar *local_58;
  ON1_HashEntry *local_50;
  byte *local_48;
  byte *local_40;
  
  if (param_3 < 7) goto LAB_14ff4409b;
  rrArithEncodeInit(&local_90,param_4);
  local_40 = param_1->m_lzp_window_end;
  local_58 = param_4 + param_3;
  this_00 = &(this->m_o1ac_lit_nomatch).m_o0;
  local_50 = param_1->m_lzp_hash;
  local_68 = param_1->m_lzp_window;
  local_78 = param_1->m_lzp_hash_mask;
  bVar21 = *param_2;
  bVar6 = false;
  local_60 = this_00;
  bVar9 = SRCoder<8,unsigned_char>::encode((SRCoder<8,unsigned_char> *)this,&local_90,(uint)bVar21);
  pOVar8 = this_00;
  if (!bVar9) {
    O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this_00,&local_90,(uint)bVar21,(this->m_o1ac_lit_nomatch).m_o1[0].m_syms,8);
    O0ArithCoder<unsigned_short,256>::inc_count(this_00,(uint)bVar21,2);
    (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[7] = (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[6];
    (this->m_o1ac_lit_nomatch).m_o1[0].m_syms[6] = bVar21;
    pOVar8 = local_60;
  }
  local_60 = pOVar8;
  bVar21 = *param_2;
  bVar1 = param_2[1];
  pSVar14 = (this->m_o1ac_lit_nomatch).m_o1 + bVar21;
  bVar9 = SRCoder<8,unsigned_char>::encode(pSVar14,&local_90,(uint)bVar1);
  if (!bVar9) {
    O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this_00,&local_90,(uint)bVar1,pSVar14->m_syms,8);
    O0ArithCoder<unsigned_short,256>::inc_count(this_00,(uint)bVar1,2);
    (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[7] =
         (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6];
    (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6] = bVar1;
  }
  bVar21 = param_2[1];
  bVar1 = param_2[2];
  pSVar14 = (this->m_o1ac_lit_nomatch).m_o1 + bVar21;
  bVar9 = SRCoder<8,unsigned_char>::encode(pSVar14,&local_90,(uint)bVar1);
  if (!bVar9) {
    O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this_00,&local_90,(uint)bVar1,pSVar14->m_syms,8);
    O0ArithCoder<unsigned_short,256>::inc_count(this_00,(uint)bVar1,2);
    (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[7] =
         (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6];
    (this->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6] = bVar1;
  }
  local_70 = param_2 + param_3;
  pbVar16 = param_2 + 3;
  pbVar20 = local_70 + -1;
  local_48 = pbVar20;
  if (pbVar16 < pbVar20) {
LAB_14ff43c72:
    uVar17 = *(uint *)(pbVar16 + -3);
    uVar15 = (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    uVar17 = (uint)pbVar16[-1];
    do {
      while( true ) {
        pbVar7 = local_40;
        pbVar22 = local_70;
        if (local_58 <= local_90.ptr) {
          bVar6 = true;
          *param_4 = '\0';
          local_90.ptr = param_4 + 1;
        }
        uVar12 = uVar15 * -0x61c8864f;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8;
        uVar5 = uVar12 & local_78;
        uVar12 = uVar12 + 1 & local_78;
        if (((local_50[uVar5].context == uVar15) &&
            (uVar18._0_3_ = local_50[uVar5].index, uVar18._3_1_ = local_50[uVar5].mp0,
            (uVar18 & 0xffffff) != 0)) ||
           ((local_50[uVar12].context == uVar15 &&
            (uVar18._0_3_ = local_50[uVar12].index, uVar18._3_1_ = local_50[uVar12].mp0,
            (uVar18 & 0xffffff) != 0)))) break;
        bVar21 = *pbVar16;
        uVar12 = (uint)bVar21;
LAB_14ff43f56:
        pSVar14 = (this->m_o1ac_lit_nomatch).m_o1 + uVar17;
        bVar9 = SRCoder<8,unsigned_char>::encode(pSVar14,&local_90,uVar12);
        if (!bVar9) {
          O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
                    (&(this->m_o1ac_lit_nomatch).m_o0,&local_90,uVar12,pSVar14->m_syms,8);
          O0ArithCoder<unsigned_short,256>::inc_count(&(this->m_o1ac_lit_nomatch).m_o0,uVar12,2);
          pSVar14->m_syms[7] = pSVar14->m_syms[6];
          pSVar14->m_syms[6] = bVar21;
        }
        if (pbVar20 <= pbVar16 + 1) {
LAB_14ff43fd4:
          pbVar16 = pbVar16 + 1;
          pbVar22 = local_70;
          goto LAB_14ff43fd8;
        }
        uVar15 = (uVar15 | uVar12) << 8;
        pbVar16 = pbVar16 + 1;
        uVar17 = uVar12;
      }
      bVar21 = *pbVar16;
      uVar12 = (uint)bVar21;
      pbVar13 = local_68 + (uVar18 & 0xffffff);
      if (pbVar13 == (byte *)0x0) goto LAB_14ff43f56;
      bVar1 = *pbVar13;
      uVar18 = (uVar17 * 0x100 | (uint)bVar1) * -0x61c8864f;
      uVar5 = uVar18 >> 0x18;
      uVar18 = (uVar18 & 0xff0000) >> 8;
      uVar19 = uVar5 | uVar18 & 0xfff;
      if ((uint)bVar21 == (uint)bVar1) goto LAB_14ff43dfa;
      uVar3 = (this->m_o1ac_mf).bin[uVar19];
      uVar4 = (this->m_o1ac_mf).bin[uVar19];
      (this->m_o1ac_mf).bin[uVar19] = (short)((int)(0x800 - (uint)uVar4) >> 4) + uVar4;
      for (local_90.range = (local_90.range >> 0xb) * (uint)uVar3; local_90.range < 0x1000000;
          local_90.range = local_90.range << 8) {
        *local_90.ptr = (uchar)(local_90.low >> 0x18);
        local_90.ptr = local_90.ptr + 1;
        local_90.low = local_90.low << 8;
      }
      O1SRCoder4U8<12>::encode_withexclude
                (&this->m_o1ac_lit_match,&local_90,uVar12,
                 (uVar17 & 0x7fffff8) * 0x20 + uVar17 * 0x100 & 0xfff | (uint)bVar1,(uint)bVar1);
      if (local_48 <= pbVar16 + 1) goto LAB_14ff43fd4;
      uVar15 = (uVar15 | bVar21) << 8;
      pbVar16 = pbVar16 + 1;
      pbVar20 = local_48;
      uVar17 = (uint)bVar21;
    } while( true );
  }
  bVar6 = false;
  pbVar22 = local_70;
joined_r0x00014ff43ff5:
  for (; pbVar16 < pbVar22; pbVar16 = pbVar16 + 1) {
    bVar21 = *pbVar16;
    pSVar14 = (this->m_o1ac_lit_nomatch).m_o1 + pbVar16[-1];
    bVar9 = SRCoder<8,unsigned_char>::encode(pSVar14,&local_90,(uint)bVar21);
    if (!bVar9) {
      O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
                (this_00,&local_90,(uint)bVar21,pSVar14->m_syms,8);
      O0ArithCoder<unsigned_short,256>::inc_count(this_00,(uint)bVar21,2);
      pSVar14->m_syms[7] = pSVar14->m_syms[6];
      pSVar14->m_syms[6] = bVar21;
    }
  }
  goto LAB_14ff44068;
LAB_14ff43dfa:
  lVar11 = lzp_getmatchlen(pbVar16,local_70,pbVar13,local_40);
  uVar17 = (local_90.range >> 0xb) * (uint)(this->m_o1ac_mf).bin[uVar19];
  local_90.low = local_90.low + uVar17;
  local_90.range = local_90.range - uVar17;
  uVar3 = (this->m_o1ac_mf).bin[uVar19];
  (this->m_o1ac_mf).bin[uVar19] = uVar3 - (uVar3 >> 4);
  if (local_90.low < uVar17) {
    puVar10 = local_90.ptr + -1;
    uVar2 = *puVar10;
    while (uVar2 == 0xff) {
      *puVar10 = '\0';
      puVar10 = puVar10 + -1;
      uVar2 = *puVar10;
    }
    *puVar10 = uVar2 + '\x01';
  }
  for (; local_90.range < 0x1000000; local_90.range = local_90.range << 8) {
    *local_90.ptr = (uchar)(local_90.low >> 0x18);
    local_90.ptr = local_90.ptr + 1;
    local_90.low = local_90.low << 8;
  }
  O1ACNOSBValueCoder<9,3>::encode
            (&this->m_o1ac_ml_vc,&local_90,(int)lVar11 + -1,uVar5 | uVar18 & 0x1ff);
  pbVar16 = pbVar16 + lVar11;
  if (pbVar22 <= pbVar16) goto LAB_14ff43fd8;
  if (pbVar13 + lVar11 < pbVar7) {
    uVar17 = (uint)pbVar13[lVar11];
    O1SRCoder4U8<12>::encode_withexclude
              (&this->m_o1ac_lit_match,&local_90,(uint)*pbVar16,
               (pbVar16[-1] & 0x7fffff8) * 0x20 + (uint)pbVar16[-1] * 0x100 & 0xfff | uVar17,uVar17)
    ;
    pbVar16 = pbVar16 + 1;
  }
  pbVar20 = pbVar22 + -1;
  if (pbVar20 <= pbVar16) goto LAB_14ff43fd8;
  goto LAB_14ff43c72;
LAB_14ff43fd8:
  this_00 = local_60;
  if (!bVar6) goto joined_r0x00014ff43ff5;
LAB_14ff44068:
  lVar11 = rrArithEncodeFlush(&local_90);
  if ((!bVar6) && (lVar11 < param_3)) {
    return lVar11;
  }
LAB_14ff4409b:
  memcpy(param_4,param_2,param_3);
  return param_3;
}

// Encode @ 14ff440e0

long64 __thiscall
oo2net::OodleNetwork1UDP_State::Encode
          (OodleNetwork1UDP_State *this,OodleNetwork1_Shared *param_1,uchar *param_2,long64 param_3,
          uchar *param_4)

{
  ulonglong *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  long64 lVar7;
  long64 lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar17;
  byte *pbVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  ON1_HashEntry *pOVar25;
  bool bVar26;
  ulonglong local_80;
  rrArithEncoder local_58;
  
  if (6 < param_3) {
    if (param_3 < 0x4001) {
      rrArithEncodeInit(&local_58,param_4);
      uVar6 = param_1->m_lzp_hash_mask;
      puVar1 = (ulonglong *)(param_2 + param_3);
      puVar2 = param_1->m_lzp_window;
      puVar3 = param_1->m_lzp_window_end;
      uVar19 = (ulonglong)*param_2;
      uVar17 = (uint)this->m_coders_nomatch[0].m_cumprobs[uVar19];
      uVar21 = (local_58.range >> 0xc) * (this->m_coders_nomatch[0].m_cumprobs[uVar19 + 1] - uVar17)
      ;
      uVar17 = (local_58.range >> 0xc) * uVar17 + local_58.low;
      if (uVar17 < local_58.low) {
        pcVar10 = (char *)((longlong)local_58.ptr + -1);
        cVar5 = *pcVar10;
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar21 < 0x1000000; uVar21 = uVar21 << 8) {
        *local_58.ptr = (char)(uVar17 >> 0x18);
        local_58.ptr = (uchar *)((longlong)local_58.ptr + 1);
        uVar17 = uVar17 << 8;
      }
      uVar12 = (ulonglong)param_2[1];
      uVar23 = (uint)this->m_coders_nomatch[uVar19].m_cumprobs[uVar12];
      uVar22 = (uVar21 >> 0xc) * (this->m_coders_nomatch[uVar19].m_cumprobs[uVar12 + 1] - uVar23);
      uVar21 = (uVar21 >> 0xc) * uVar23 + uVar17;
      if (uVar21 < uVar17) {
        pcVar10 = (char *)((longlong)local_58.ptr + -1);
        cVar5 = *(char *)((longlong)local_58.ptr + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar22 < 0x1000000; uVar22 = uVar22 << 8) {
        *local_58.ptr = (char)(uVar21 >> 0x18);
        local_58.ptr = (uchar *)((longlong)local_58.ptr + 1);
        uVar21 = uVar21 << 8;
      }
      local_80 = (ulonglong)param_2[2];
      uVar17 = (uint)this->m_coders_nomatch[uVar12].m_cumprobs[local_80];
      local_58.range =
           (uVar22 >> 0xc) * (this->m_coders_nomatch[uVar12].m_cumprobs[local_80 + 1] - uVar17);
      local_58.low = (uVar22 >> 0xc) * uVar17 + uVar21;
      puVar24 = (uint *)local_58.ptr;
      if (local_58.low < uVar21) {
        pcVar10 = (char *)((longlong)local_58.ptr + -1);
        cVar5 = *(char *)((longlong)local_58.ptr + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; local_58.range < 0x1000000; local_58.range = local_58.range << 8) {
        *(char *)puVar24 = (char)(local_58.low >> 0x18);
        local_58.low = local_58.low << 8;
        puVar24 = (uint *)((longlong)puVar24 + 1);
      }
      uVar21 = *(uint *)param_2;
      puVar16 = (ulonglong *)(param_2 + 3);
      uVar22 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar21 = uVar22 * -0x61c8864f;
      uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
      uVar17 = uVar21 & uVar6;
      pOVar25 = param_1->m_lzp_hash + uVar17;
      if (param_1->m_lzp_hash[uVar17].context != uVar22) {
        uVar21 = uVar21 + 1 & uVar6;
        pOVar25 = (ON1_HashEntry *)0x0;
        if (param_1->m_lzp_hash[uVar21].context == uVar22) {
          pOVar25 = param_1->m_lzp_hash + uVar21;
        }
      }
      local_58.ptr = (uchar *)puVar24;
      if (puVar16 < (ulonglong *)((longlong)puVar1 - 1U)) {
        do {
          if (param_4 + param_3 + -2 <= puVar24) goto LAB_14ff44b7f;
          uVar19 = (ulonglong)(byte)*puVar16;
          uVar21 = (uint)(byte)*puVar16;
          uVar4 = (undefined1)(local_58.low >> 0x18);
          iVar18 = (int)local_80;
          if (pOVar25 == (ON1_HashEntry *)0x0) {
            uVar17 = uVar22 | uVar21;
            puVar16 = (ulonglong *)((longlong)puVar16 + 1);
            uVar22 = uVar17 * 0x100;
            if (local_58.range < 0x1000000) {
              if (local_58.range < 0x10000) {
                *puVar24 = local_58.low >> 0x18 | (local_58.low & 0xff0000) >> 8 |
                           (local_58.low & 0xff00) << 8 | local_58.low << 0x18;
                puVar24 = (uint *)((longlong)local_58.ptr + 2);
                local_58.low = local_58.low << 0x10;
                local_58.range = local_58.range << 0x10;
                local_58.ptr = (uchar *)puVar24;
              }
              else {
                *(undefined1 *)puVar24 = uVar4;
                puVar24 = (uint *)((longlong)local_58.ptr + 1);
                local_58.low = local_58.low << 8;
                local_58.range = local_58.range << 8;
                local_58.ptr = (uchar *)puVar24;
              }
            }
            uVar17 = uVar17 * 0x3779b100;
            uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8;
            uVar23 = uVar17 & uVar6;
            pOVar25 = param_1->m_lzp_hash + uVar23;
            if (param_1->m_lzp_hash[uVar23].context != uVar22) {
              uVar17 = uVar17 + 1 & uVar6;
              pOVar25 = (ON1_HashEntry *)0x0;
              if (param_1->m_lzp_hash[uVar17].context == uVar22) {
                pOVar25 = param_1->m_lzp_hash + uVar17;
              }
            }
            uVar23 = local_58.range >> 0xc;
            uVar17 = (uint)this->m_coders_nomatch[iVar18].m_cumprobs[(int)uVar21];
            local_58.range =
                 uVar23 * (this->m_coders_nomatch[iVar18].m_cumprobs[(longlong)(int)uVar21 + 1] -
                          uVar17);
            uVar21 = uVar23 * uVar17 + local_58.low;
            bVar26 = uVar21 < local_58.low;
            local_80 = uVar19;
            local_58.low = uVar21;
            if (bVar26) {
              pcVar10 = (char *)((longlong)puVar24 + -1);
              cVar5 = *(char *)((longlong)puVar24 + -1);
              while (cVar5 == -1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + -1;
                cVar5 = *pcVar10;
              }
              *pcVar10 = cVar5 + '\x01';
              puVar24 = (uint *)local_58.ptr;
            }
          }
          else {
            uVar17._0_3_ = pOVar25->index;
            uVar17._3_1_ = pOVar25->mp0;
            puVar15 = (ulonglong *)(puVar2 + (uVar17 & 0xffffff));
            uVar23 = (iVar18 << 8 | uVar17 >> 0x18) * -0x61c8864f;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 & 0xfff;
            if (local_58.range < 0x1000000) {
              if (local_58.range < 0x10000) {
                *puVar24 = local_58.low >> 0x18 | (local_58.low & 0xff0000) >> 8 |
                           (local_58.low & 0xff00) << 8 | local_58.low << 0x18;
                puVar24 = (uint *)((longlong)local_58.ptr + 2);
                local_58.low = local_58.low << 0x10;
                local_58.range = local_58.range << 0x10;
                local_58.ptr = (uchar *)puVar24;
              }
              else {
                *(undefined1 *)puVar24 = uVar4;
                puVar24 = (uint *)((longlong)local_58.ptr + 1);
                local_58.low = local_58.low << 8;
                local_58.range = local_58.range << 8;
                local_58.ptr = (uchar *)puVar24;
              }
            }
            if ((uVar21 == uVar17 >> 0x18) &&
               (pbVar14 = (byte *)((longlong)puVar16 + 1),
               *pbVar14 == *(byte *)((longlong)puVar15 + 1))) {
              puVar20 = puVar16 + 2;
              if (puVar20 < puVar1) {
                if (*puVar16 == *puVar15) {
                  if (puVar16[1] == puVar15[1]) {
                    uVar19 = 0x10;
                    lVar13 = (longlong)puVar3 - (longlong)puVar15;
                    lVar9 = (longlong)puVar1 - (longlong)puVar16;
                    if (lVar13 <= (longlong)puVar1 - (longlong)puVar16) {
                      lVar9 = lVar13;
                    }
                    if (0x10 < lVar9) {
                      do {
                        if ((byte)*puVar20 !=
                            *(byte *)(((longlong)puVar15 - (longlong)puVar16) + (longlong)puVar20))
                        break;
                        uVar19 = uVar19 + 1;
                        puVar20 = (ulonglong *)((longlong)puVar20 + 1);
                      } while ((longlong)uVar19 < lVar9);
                    }
                  }
                  else {
                    uVar12 = puVar15[1] ^ puVar16[1];
                    uVar19 = 0;
                    if (uVar12 != 0) {
                      for (; (uVar12 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                      }
                    }
                    uVar19 = (ulonglong)(((uint)(uVar19 >> 3) & 0x1fffffff) + 8);
                  }
                }
                else {
                  uVar12 = *puVar15 ^ *puVar16;
                  uVar19 = 0;
                  if (uVar12 != 0) {
                    for (; (uVar12 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                    }
                  }
                  uVar19 = uVar19 >> 3;
                }
              }
              else {
                lVar13 = (longlong)puVar3 - (longlong)puVar15;
                uVar19 = 1;
                lVar9 = (longlong)puVar1 - (longlong)puVar16;
                if (lVar13 <= (longlong)puVar1 - (longlong)puVar16) {
                  lVar9 = lVar13;
                }
                if (1 < lVar9) {
                  do {
                    if (*pbVar14 != pbVar14[(longlong)puVar15 - (longlong)puVar16]) break;
                    uVar19 = uVar19 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while ((longlong)uVar19 < lVar9);
                }
              }
              puVar16 = (ulonglong *)((longlong)puVar16 + uVar19);
              if (puVar16 < puVar1) {
                uVar21 = *(uint *)((longlong)puVar16 + -3);
                local_80 = (ulonglong)*(byte *)((longlong)puVar16 + -1);
                uVar22 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
                uVar21 = uVar22 * -0x61c8864f;
                uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
                uVar17 = uVar21 & uVar6;
                pOVar25 = param_1->m_lzp_hash + uVar17;
                if (param_1->m_lzp_hash[uVar17].context != uVar22) {
                  uVar21 = uVar21 + 1 & uVar6;
                  pOVar25 = (ON1_HashEntry *)0x0;
                  if (param_1->m_lzp_hash[uVar21].context == uVar22) {
                    pOVar25 = param_1->m_lzp_hash + uVar21;
                  }
                }
              }
              uVar21 = local_58.range >> 0xc;
              iVar18 = (int)uVar19;
              if ((longlong)uVar19 < 0xe) {
                uVar17 = (uint)this->m_coders_match[uVar23].m_cumprobs[(longlong)iVar18 + 0xfe];
                local_58.range =
                     uVar21 * (this->m_coders_match[uVar23].m_cumprobs[(longlong)iVar18 + 0xff] -
                              uVar17);
                uVar21 = uVar21 * uVar17 + local_58.low;
                bVar26 = uVar21 < local_58.low;
                local_58.low = uVar21;
                if (bVar26) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  goto LAB_14ff447df;
                }
              }
              else {
                uVar17 = iVar18 - 0xc;
                iVar18 = 0x1f;
                if (uVar17 != 0) {
                  for (; uVar17 >> iVar18 == 0; iVar18 = iVar18 + -1) {
                  }
                }
                uVar11 = (uint)this->m_coders_match[uVar23].m_cumprobs[iVar18 + 0x10b];
                local_58.range =
                     uVar21 * (this->m_coders_match[uVar23].m_cumprobs
                               [(longlong)(iVar18 + 0x10b) + 1] - uVar11);
                uVar21 = uVar21 * uVar11 + local_58.low;
                if (uVar21 < local_58.low) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar24 = (uint *)local_58.ptr;
                }
                if (local_58.range < 0x1000000) {
                  if (local_58.range < 0x10000) {
                    *puVar24 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                               uVar21 * 0x1000000;
                    puVar24 = (uint *)((longlong)local_58.ptr + 2);
                    uVar21 = uVar21 * 0x10000;
                    local_58.range = local_58.range * 0x10000;
                    local_58.ptr = (uchar *)puVar24;
                  }
                  else {
                    *(char *)puVar24 = (char)(uVar21 >> 0x18);
                    puVar24 = (uint *)((longlong)local_58.ptr + 1);
                    uVar21 = uVar21 * 0x100;
                    local_58.range = local_58.range * 0x100;
                    local_58.ptr = (uchar *)puVar24;
                  }
                }
                local_58.range = local_58.range >> ((byte)iVar18 & 0x1f);
                local_58.low = local_58.range * (uVar17 - (1 << ((byte)iVar18 & 0x1f))) + uVar21;
                if (local_58.low < uVar21) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar24 = (uint *)local_58.ptr;
                }
                for (; local_58.range < 0x1000000; local_58.range = local_58.range << 8) {
                  *(char *)puVar24 = (char)(local_58.low >> 0x18);
                  local_58.ptr = (uchar *)((longlong)local_58.ptr + 1);
                  local_58.low = local_58.low << 8;
                  puVar24 = (uint *)local_58.ptr;
                }
              }
            }
            else {
              uVar21 = uVar22 | uVar21;
              puVar16 = (ulonglong *)((longlong)puVar16 + 1);
              uVar22 = uVar21 * 0x100;
              uVar21 = uVar21 * 0x3779b100;
              uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
              uVar17 = uVar21 & uVar6;
              pOVar25 = param_1->m_lzp_hash + uVar17;
              if (param_1->m_lzp_hash[uVar17].context != uVar22) {
                uVar21 = uVar21 + 1 & uVar6;
                pOVar25 = (ON1_HashEntry *)0x0;
                if (param_1->m_lzp_hash[uVar21].context == uVar22) {
                  pOVar25 = param_1->m_lzp_hash + uVar21;
                }
              }
              uVar17 = local_58.range >> 0xc;
              uVar21 = (uint)this->m_coders_match[uVar23].m_cumprobs[uVar19];
              local_58.range =
                   uVar17 * (this->m_coders_match[uVar23].m_cumprobs[uVar19 + 1] - uVar21);
              uVar21 = uVar17 * uVar21 + local_58.low;
              bVar26 = uVar21 < local_58.low;
              local_80 = uVar19;
              local_58.low = uVar21;
              if (bVar26) {
                pcVar10 = (char *)((longlong)puVar24 + -1);
                cVar5 = *(char *)((longlong)puVar24 + -1);
                while (cVar5 == -1) {
                  *pcVar10 = '\0';
                  pcVar10 = pcVar10 + -1;
                  cVar5 = *pcVar10;
                }
LAB_14ff447df:
                *pcVar10 = cVar5 + '\x01';
                puVar24 = (uint *)local_58.ptr;
              }
            }
          }
        } while (puVar16 < (ulonglong *)((longlong)puVar1 - 1U));
      }
      if (local_58.range < 0x1000000) {
        if (local_58.range < 0x10000) {
          *puVar24 = local_58.low >> 0x18 | (local_58.low & 0xff0000) >> 8 |
                     (local_58.low & 0xff00) << 8 | local_58.low << 0x18;
          puVar24 = (uint *)((longlong)local_58.ptr + 2);
          local_58.low = local_58.low << 0x10;
          local_58.range = local_58.range << 0x10;
          local_58.ptr = (uchar *)puVar24;
        }
        else {
          *(char *)puVar24 = (char)(local_58.low >> 0x18);
          puVar24 = (uint *)((longlong)local_58.ptr + 1);
          local_58.low = local_58.low << 8;
          local_58.range = local_58.range << 8;
          local_58.ptr = (uchar *)puVar24;
        }
      }
      while (puVar16 < puVar1) {
        uVar19 = *puVar16;
        pbVar14 = (byte *)((longlong)puVar16 + -1);
        puVar16 = (ulonglong *)((longlong)puVar16 + 1);
        uVar21 = local_58.range >> 0xc;
        uVar6 = (uint)this->m_coders_nomatch[*pbVar14].m_cumprobs[(byte)uVar19];
        local_58.range =
             uVar21 * (this->m_coders_nomatch[*pbVar14].m_cumprobs[(ulonglong)(byte)uVar19 + 1] -
                      uVar6);
        uVar6 = uVar21 * uVar6 + local_58.low;
        bVar26 = uVar6 < local_58.low;
        local_58.low = uVar6;
        if (bVar26) {
          pcVar10 = (char *)((longlong)puVar24 + -1);
          cVar5 = *(char *)((longlong)puVar24 + -1);
          while (cVar5 == -1) {
            *pcVar10 = '\0';
            pcVar10 = pcVar10 + -1;
            cVar5 = *pcVar10;
          }
          *pcVar10 = cVar5 + '\x01';
          puVar24 = (uint *)local_58.ptr;
        }
        for (; local_58.range < 0x1000000; local_58.range = local_58.range << 8) {
          *(char *)puVar24 = (char)(local_58.low >> 0x18);
          local_58.ptr = (uchar *)((longlong)local_58.ptr + 1);
          local_58.low = local_58.low << 8;
          puVar24 = (uint *)local_58.ptr;
        }
      }
      lVar9 = rrArithEncodeFlush(&local_58);
    }
    else {
      lVar7 = Encode(this,param_1,param_2,0x4000,param_4 + 2);
      *(short *)param_4 = (short)lVar7;
      lVar8 = Encode(this,param_1,param_2 + 0x4000,param_3 + -0x4000,param_4 + 2 + lVar7);
      lVar9 = lVar8 + 2 + lVar7;
    }
    if (lVar9 < param_3) {
      return lVar9;
    }
  }
LAB_14ff44b7f:
  memcpy(param_4,param_2,param_3);
  return param_3;
}

// FillDictionary @ 14ff44bc0

void __cdecl oo2net::FillDictionary(void *param_1,int param_2,vector<oo2net::rated_packet> *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  
  lVar3 = 0;
  pvVar5 = (void *)((longlong)param_2 + (longlong)param_1);
  lVar4 = lVar3;
  if (0 < *(longlong *)&param_3->field_0x10) {
    do {
      lVar1 = *(longlong *)param_3;
      iVar2 = (int)pvVar5 - (int)param_1;
      if (*(int *)(lVar1 + 0x18 + lVar4) < iVar2) {
        iVar2 = *(int *)(lVar1 + 0x18 + lVar4);
      }
      memcpy(param_1,*(void **)(lVar1 + 0x10 + lVar4),(longlong)iVar2);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar2);
      if (pvVar5 <= param_1) {
        return;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(longlong *)&param_3->field_0x10);
  }
  if (param_1 < pvVar5) {
    if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x47d,
                 "WARNING : OodleNetwork_SelectDictionaryFromPackets - not enough packets to fill dictionary!\n"
                );
    }
    memset(param_1,0,(longlong)pvVar5 - (longlong)param_1);
  }
  return;
}

// GetNumBytesZeroNeverAllR @ 14ff44c90

int __cdecl oo2net::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// Init @ 14ff44ca0

void __thiscall oo2net::OodleNetwork1UDP_CountingState::Init(OodleNetwork1UDP_CountingState *this)

{
  longlong lVar1;
  OodleNetwork1UDP_CountingState *pOVar2;
  Histo_nomatch *pHVar3;
  
  pOVar2 = this;
  for (lVar1 = 0x119000; lVar1 != 0; lVar1 = lVar1 + -1) {
    pOVar2->m_histos_match[0].counts[0] = 1;
    pOVar2 = (OodleNetwork1UDP_CountingState *)(pOVar2->m_histos_match[0].counts + 1);
  }
  pHVar3 = this->m_histos_nomatch;
  for (lVar1 = 0x10000; lVar1 != 0; lVar1 = lVar1 + -1) {
    pHVar3->counts[0] = 1;
    pHVar3 = (Histo_nomatch *)(pHVar3->counts + 1);
  }
  return;
}

// Normalize @ 14ff44ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2net::OodleNetwork1UDP_CountingState::Normalize(OodleNetwork1UDP_CountingState *this)

{
  OodleNetwork1UDP_CountingState *pOVar1;
  Histo_nomatch *pHVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Histo_match *pHVar7;
  Histo_match *pHVar8;
  Histo_match *pHVar9;
  Histo_match *pHVar10;
  uint *puVar11;
  uint *puVar12;
  OodleNetwork1UDP_CountingState *pOVar13;
  uint *puVar14;
  Histo_nomatch *pHVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  OodleNetwork1UDP_CountingState *pOVar19;
  Histo_nomatch *pHVar20;
  longlong lVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auStackY_4c8 [32];
  uint local_498 [284];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  puVar22 = this->m_total_match;
  lVar21 = 0x1000;
  uVar24 = 0;
  pOVar19 = this;
  do {
    pOVar1 = (OodleNetwork1UDP_CountingState *)(pOVar19->m_histos_match + 1);
    pOVar13 = pOVar19;
    uVar17 = uVar24;
    if (pOVar19 <= pOVar1) {
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      do {
        uVar17 = uVar17 + 8;
        iVar29 = iVar29 + pOVar13->m_histos_match[0].counts[0];
        iVar30 = iVar30 + pOVar13->m_histos_match[0].counts[1];
        iVar31 = iVar31 + pOVar13->m_histos_match[0].counts[2];
        iVar32 = iVar32 + pOVar13->m_histos_match[0].counts[3];
        pHVar7 = pOVar13->m_histos_match;
        pHVar8 = pOVar13->m_histos_match;
        pHVar9 = pOVar13->m_histos_match;
        pHVar10 = pOVar13->m_histos_match;
        pOVar13 = (OodleNetwork1UDP_CountingState *)(pOVar13->m_histos_match[0].counts + 8);
        iVar25 = iVar25 + pHVar7->counts[4];
        iVar26 = iVar26 + pHVar8->counts[5];
        iVar27 = iVar27 + pHVar9->counts[6];
        iVar28 = iVar28 + pHVar10->counts[7];
      } while (uVar17 != 0x118);
      uVar17 = (ulonglong)
               (uint)(iVar25 + iVar29 + iVar27 + iVar31 + iVar26 + iVar30 + iVar28 + iVar32);
    }
    uVar23 = (uint)uVar17;
    for (; pOVar13 != pOVar1;
        pOVar13 = (OodleNetwork1UDP_CountingState *)(pOVar13->m_histos_match[0].counts + 1)) {
      uVar23 = (int)uVar17 + pOVar13->m_histos_match[0].counts[0];
      uVar17 = (ulonglong)uVar23;
    }
    *puVar22 = uVar23;
    normalize_counts_v6(local_498,0x1000,(uint *)pOVar19,uVar23,0x119);
    lVar18 = 8;
    puVar16 = local_498;
    do {
      pOVar13 = pOVar19;
      puVar14 = puVar16;
      pOVar19 = (OodleNetwork1UDP_CountingState *)(pOVar13->m_histos_match[0].counts + 0x20);
      uVar3 = *(undefined8 *)(puVar14 + 2);
      uVar4 = *(undefined8 *)(puVar14 + 4);
      uVar5 = *(undefined8 *)(puVar14 + 6);
      *(undefined8 *)pOVar13->m_histos_match[0].counts = *(undefined8 *)puVar14;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 2) = uVar3;
      uVar3 = *(undefined8 *)(puVar14 + 8);
      uVar6 = *(undefined8 *)(puVar14 + 10);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 4) = uVar4;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 6) = uVar5;
      uVar4 = *(undefined8 *)(puVar14 + 0xc);
      uVar5 = *(undefined8 *)(puVar14 + 0xe);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 8) = uVar3;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 10) = uVar6;
      uVar3 = *(undefined8 *)(puVar14 + 0x10);
      uVar6 = *(undefined8 *)(puVar14 + 0x12);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0xc) = uVar4;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0xe) = uVar5;
      uVar4 = *(undefined8 *)(puVar14 + 0x14);
      uVar5 = *(undefined8 *)(puVar14 + 0x16);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x10) = uVar3;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x12) = uVar6;
      uVar3 = *(undefined8 *)(puVar14 + 0x18);
      uVar6 = *(undefined8 *)(puVar14 + 0x1a);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x14) = uVar4;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x16) = uVar5;
      uVar4 = *(undefined8 *)(puVar14 + 0x1c);
      uVar5 = *(undefined8 *)(puVar14 + 0x1e);
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x18) = uVar3;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x1a) = uVar6;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x1c) = uVar4;
      *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x1e) = uVar5;
      lVar18 = lVar18 + -1;
      puVar16 = puVar14 + 0x20;
    } while (lVar18 != 0);
    uVar3 = *(undefined8 *)(puVar14 + 0x22);
    puVar22 = puVar22 + 1;
    uVar4 = *(undefined8 *)(puVar14 + 0x24);
    uVar5 = *(undefined8 *)(puVar14 + 0x26);
    *(undefined8 *)pOVar19->m_histos_match[0].counts = *(undefined8 *)(puVar14 + 0x20);
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x22) = uVar3;
    uVar3 = *(undefined8 *)(puVar14 + 0x28);
    uVar6 = *(undefined8 *)(puVar14 + 0x2a);
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x24) = uVar4;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x26) = uVar5;
    uVar4 = *(undefined8 *)(puVar14 + 0x2c);
    uVar5 = *(undefined8 *)(puVar14 + 0x2e);
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x28) = uVar3;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x2a) = uVar6;
    uVar3 = *(undefined8 *)(puVar14 + 0x30);
    uVar6 = *(undefined8 *)(puVar14 + 0x32);
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x2c) = uVar4;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x2e) = uVar5;
    uVar4 = *(undefined8 *)(puVar14 + 0x34);
    uVar5 = *(undefined8 *)(puVar14 + 0x36);
    uVar23 = puVar14[0x38];
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x30) = uVar3;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x32) = uVar6;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x34) = uVar4;
    *(undefined8 *)(pOVar13->m_histos_match[0].counts + 0x36) = uVar5;
    pOVar13->m_histos_match[0].counts[0x38] = uVar23;
    lVar21 = lVar21 + -1;
    pOVar19 = pOVar1;
  } while (lVar21 != 0);
  puVar22 = this->m_total_nomatch;
  lVar21 = 0x100;
  pHVar20 = this->m_histos_nomatch;
  do {
    pHVar2 = pHVar20 + 1;
    pHVar15 = pHVar20;
    uVar17 = uVar24;
    if (pHVar20 <= pHVar2) {
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      do {
        uVar17 = uVar17 + 8;
        iVar29 = iVar29 + pHVar15->counts[0];
        iVar30 = iVar30 + pHVar15->counts[1];
        iVar31 = iVar31 + pHVar15->counts[2];
        iVar32 = iVar32 + pHVar15->counts[3];
        puVar16 = pHVar15->counts;
        puVar14 = pHVar15->counts;
        puVar11 = pHVar15->counts;
        puVar12 = pHVar15->counts;
        pHVar15 = (Histo_nomatch *)(pHVar15->counts + 8);
        iVar25 = iVar25 + puVar16[4];
        iVar26 = iVar26 + puVar14[5];
        iVar27 = iVar27 + puVar11[6];
        iVar28 = iVar28 + puVar12[7];
      } while (uVar17 != 0x100);
      uVar17 = (ulonglong)
               (uint)(iVar25 + iVar29 + iVar27 + iVar31 + iVar26 + iVar30 + iVar28 + iVar32);
    }
    uVar23 = (uint)uVar17;
    for (; pHVar15 != pHVar2; pHVar15 = (Histo_nomatch *)(pHVar15->counts + 1)) {
      uVar23 = (int)uVar17 + pHVar15->counts[0];
      uVar17 = (ulonglong)uVar23;
    }
    *puVar22 = uVar23;
    normalize_counts_v6(local_498,0x1000,pHVar20->counts,uVar23,0x100);
    lVar18 = 8;
    puVar16 = local_498;
    do {
      uVar3 = *(undefined8 *)(puVar16 + 2);
      uVar4 = *(undefined8 *)(puVar16 + 4);
      uVar5 = *(undefined8 *)(puVar16 + 6);
      *(undefined8 *)pHVar20->counts = *(undefined8 *)puVar16;
      *(undefined8 *)(pHVar20->counts + 2) = uVar3;
      uVar3 = *(undefined8 *)(puVar16 + 8);
      uVar6 = *(undefined8 *)(puVar16 + 10);
      *(undefined8 *)(pHVar20->counts + 4) = uVar4;
      *(undefined8 *)(pHVar20->counts + 6) = uVar5;
      uVar4 = *(undefined8 *)(puVar16 + 0xc);
      uVar5 = *(undefined8 *)(puVar16 + 0xe);
      *(undefined8 *)(pHVar20->counts + 8) = uVar3;
      *(undefined8 *)(pHVar20->counts + 10) = uVar6;
      uVar3 = *(undefined8 *)(puVar16 + 0x10);
      uVar6 = *(undefined8 *)(puVar16 + 0x12);
      *(undefined8 *)(pHVar20->counts + 0xc) = uVar4;
      *(undefined8 *)(pHVar20->counts + 0xe) = uVar5;
      uVar4 = *(undefined8 *)(puVar16 + 0x14);
      uVar5 = *(undefined8 *)(puVar16 + 0x16);
      *(undefined8 *)(pHVar20->counts + 0x10) = uVar3;
      *(undefined8 *)(pHVar20->counts + 0x12) = uVar6;
      uVar3 = *(undefined8 *)(puVar16 + 0x18);
      uVar6 = *(undefined8 *)(puVar16 + 0x1a);
      *(undefined8 *)(pHVar20->counts + 0x14) = uVar4;
      *(undefined8 *)(pHVar20->counts + 0x16) = uVar5;
      uVar4 = *(undefined8 *)(puVar16 + 0x1c);
      uVar5 = *(undefined8 *)(puVar16 + 0x1e);
      *(undefined8 *)(pHVar20->counts + 0x18) = uVar3;
      *(undefined8 *)(pHVar20->counts + 0x1a) = uVar6;
      *(undefined8 *)(pHVar20->counts + 0x1c) = uVar4;
      *(undefined8 *)(pHVar20->counts + 0x1e) = uVar5;
      lVar18 = lVar18 + -1;
      puVar16 = puVar16 + 0x20;
      pHVar20 = (Histo_nomatch *)(pHVar20->counts + 0x20);
    } while (lVar18 != 0);
    puVar22 = puVar22 + 1;
    lVar21 = lVar21 + -1;
    pHVar20 = pHVar2;
  } while (lVar21 != 0);
  return;
}

// ON1UDP_LookupHash @ 14ff44fe0

ON1_HashEntry * __cdecl oo2net::ON1UDP_LookupHash(uint param_1,ON1_HashEntry *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ON1_HashEntry *pOVar3;
  
  uVar1 = param_1 * -0x61c8864f;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | param_1 * -0x4f000000;
  uVar1 = uVar2 & param_3;
  pOVar3 = param_2 + uVar1;
  if (param_2[uVar1].context != param_1) {
    uVar1 = uVar2 + 1 & param_3;
    pOVar3 = (ON1_HashEntry *)0x0;
    if (param_2[uVar1].context == param_1) {
      pOVar3 = param_2 + uVar1;
    }
  }
  return pOVar3;
}

// ON1_InsertHash @ 14ff45020

void __cdecl
oo2net::ON1_InsertHash(uint param_1,int param_2,ON1_HashEntry *param_3,uint param_4,uchar *param_5)

{
  ON1_HashEntry *pOVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 * -0x61c8864f;
  bVar2 = *param_5;
  uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | param_1 * -0x4f000000;
  uVar3 = uVar5 & param_4;
  pOVar1 = param_3 + uVar3;
  uVar4._0_3_ = param_3[uVar3].index;
  uVar4._3_1_ = param_3[uVar3].mp0;
  if ((uVar4 & 0xffffff) == 0) {
    pOVar1->context = param_1;
    uVar4 = (uVar4 ^ param_2) & 0xffffff ^ uVar4;
    pOVar1->index = (int3)uVar4;
    pOVar1->mp0 = (char)(uVar4 >> 0x18);
    pOVar1->mp0 = bVar2;
    return;
  }
  uVar4 = uVar5 + 1 & param_4;
  uVar3._0_3_ = param_3[uVar4].index;
  uVar3._3_1_ = param_3[uVar4].mp0;
  if ((uVar3 & 0xffffff) == 0) {
    param_3[uVar4].context = param_1;
    uVar3 = (uVar3 ^ param_2) & 0xffffff ^ uVar3;
    param_3[uVar4].index = (int3)uVar3;
    param_3[uVar4].mp0 = (char)(uVar3 >> 0x18);
    param_3[uVar4].mp0 = bVar2;
  }
  return;
}

// ON1_LookupHash @ 14ff450c0

uchar * __cdecl
oo2net::ON1_LookupHash(uint param_1,ON1_HashEntry *param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 * -0x61c8864f;
  uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | param_1 * -0x4f000000;
  uVar2 = uVar3 & param_3;
  uVar3 = uVar3 + 1 & param_3;
  if (((param_2[uVar2].context != param_1) ||
      (uVar1._0_3_ = param_2[uVar2].index, uVar1._3_1_ = param_2[uVar2].mp0, (uVar1 & 0xffffff) == 0
      )) && ((param_2[uVar3].context != param_1 ||
             (uVar1._0_3_ = param_2[uVar3].index, uVar1._3_1_ = param_2[uVar3].mp0,
             (uVar1 & 0xffffff) == 0)))) {
    return (uchar *)0x0;
  }
  return param_4 + (uVar1 & 0xffffff);
}

// OodleFree @ 14ff45120

void __cdecl oo2net::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff45120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14ff45130

void __cdecl oo2net::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff45130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14ff45140

void * __cdecl oo2net::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14ff45190

void * __cdecl oo2net::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleNetwork1UDP_MeasureTotalCompressedSize @ 14ff451e0

long64 __cdecl
oo2net::OodleNetwork1UDP_MeasureTotalCompressedSize
          (OodleNetwork1UDP_State *param_1,OodleNetwork1_Shared *param_2,void **param_3,int *param_4
          ,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  uchar *puVar4;
  uchar *puVar5;
  long64 lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  long64 lVar10;
  vector_storage<unsigned_char> local_50;
  ulonglong local_40;
  
  lVar9 = 0;
  local_50.m_begin = (uchar *)0x0;
  local_50.m_capacity = 0;
  local_40 = 0;
  puVar4 = vector_storage<unsigned_char>::makefit1(&local_50,0x10000,0);
  if (puVar4 != (uchar *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(puVar4);
  }
  local_40 = local_40 + 0x10000;
  uVar7 = local_40;
  lVar10 = lVar9;
  if (0 < param_5) {
    do {
      puVar4 = param_3[lVar9];
      iVar2 = param_4[lVar9];
      uVar1 = (longlong)iVar2 + 0x1000;
      uVar8 = uVar7;
      uVar3 = local_40;
      if (((longlong)uVar7 <= (longlong)uVar1) && (uVar8 = uVar1, uVar3 = uVar1, uVar7 <= uVar1)) {
        uVar8 = uVar7;
        if ((local_50.m_capacity < uVar1) &&
           (puVar5 = vector_storage<unsigned_char>::makefit1(&local_50,uVar1,uVar7),
           uVar8 = local_40, puVar5 != (uchar *)0x0)) {
          (*g_fp_OodleNet_Plugin_Free)(puVar5);
          uVar8 = local_40;
        }
        uVar8 = uVar8 + (uVar1 - uVar7);
        uVar3 = uVar8;
      }
      local_40 = uVar3;
      puVar5 = local_50.m_begin;
      if (uVar8 == 0) {
        puVar5 = (uchar *)0x0;
      }
      lVar6 = OodleNetwork1UDP_State::Encode(param_1,param_2,puVar4,(longlong)iVar2,puVar5);
      lVar10 = lVar10 + lVar6;
      lVar9 = lVar9 + 1;
      uVar7 = uVar8;
    } while (lVar9 < param_5);
  }
  if (local_50.m_begin != (uchar *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(local_50.m_begin);
  }
  return lVar10;
}

// OodleNetwork1UDP_Train_State_Counting @ 14ff45340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
oo2net::OodleNetwork1UDP_Train_State_Counting
          (OodleNetwork1UDP_CountingState *param_1,OodleNetwork1_Shared *param_2,void **param_3,
          int *param_4,int param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  OodleNetwork1UDP_CountingState *pOVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  rrRandState local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar8 = 0;
  pOVar9 = param_1;
  for (lVar5 = 0x119000; lVar7 = lVar8, lVar5 != 0; lVar5 = lVar5 + -1) {
    pOVar9->m_histos_match[0].counts[0] = 1;
    pOVar9 = (OodleNetwork1UDP_CountingState *)(pOVar9->m_histos_match[0].counts + 1);
  }
  do {
    auVar11 = ___xmm_00000001000000010000000100000001;
    lVar5 = 8;
    pauVar4 = (undefined1 (*) [16])((longlong)param_1->m_histos_nomatch[0].counts + lVar7);
    do {
      *pauVar4 = auVar11;
      pauVar4[1] = auVar11;
      pauVar4[2] = auVar11;
      pauVar4[3] = auVar11;
      pauVar4[4] = auVar11;
      pauVar4[5] = auVar11;
      pauVar4[6] = auVar11;
      pauVar4[7] = auVar11;
      lVar5 = lVar5 + -1;
      pauVar4 = pauVar4 + 8;
    } while (lVar5 != 0);
    lVar7 = lVar7 + 0x400;
  } while (lVar7 < 0x40000);
  uVar10 = (ulonglong)param_5;
  if (0 < (longlong)uVar10) {
    lVar7 = lVar8;
    lVar5 = lVar8;
    if (uVar10 < 4) goto LAB_14ff45470;
    if (__isa_available < 2) goto LAB_14ff45470;
    lVar13 = 0;
    lVar14 = 0;
    lVar5 = 0;
    lVar3 = 0;
    uVar6 = param_5 >> 0x1f & 3;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(param_4 + lVar7);
      auVar11 = pmovsxdq(in_XMM1,auVar11);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(param_4 + lVar7 + 2);
      lVar13 = lVar13 + auVar11._0_8_;
      lVar14 = lVar14 + auVar11._8_8_;
      lVar7 = lVar7 + 4;
      in_XMM1 = pmovsxdq(auVar11,auVar12);
      lVar5 = lVar5 + in_XMM1._0_8_;
      lVar3 = lVar3 + in_XMM1._8_8_;
    } while (lVar7 < (longlong)(uVar10 - ((ulonglong)(param_5 + uVar6 & 3) - (ulonglong)uVar6)));
    auVar2._8_4_ = (int)(lVar3 + lVar14);
    auVar2._0_8_ = lVar5 + lVar13;
    auVar2._12_4_ = (int)((ulonglong)(lVar3 + lVar14) >> 0x20);
    lVar5 = lVar5 + lVar13 + auVar2._8_8_;
    for (; lVar7 < (longlong)uVar10; lVar7 = lVar7 + 1) {
LAB_14ff45470:
      lVar5 = lVar5 + param_4[lVar7];
    }
    if (lVar5 < 0x40000001) {
      if (0 < (longlong)uVar10) {
        do {
          OodleNetwork1UDP_CountingState::Count
                    (param_1,param_2,param_3[lVar8],(longlong)param_4[lVar8]);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (longlong)uVar10);
      }
    }
    else {
      if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        local_68 = lVar5;
        (*g_fp_OodleNet_Plugin_Printf)
                  (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0xa39,
                   "OodleNetwork1UDP_Train_State_Counting: huge input (%lld), sampling...\n");
      }
      rrRandStateSeed(&local_58,(uint)lVar5);
      do {
        uVar6 = rrRandState32(&local_58);
        uVar10 = (ulonglong)uVar6 * (ulonglong)(uint)param_5 >> 0x20;
        iVar1 = param_4[uVar10];
        OodleNetwork1UDP_CountingState::Count(param_1,param_2,param_3[uVar10],(longlong)iVar1);
        lVar8 = lVar8 + iVar1;
      } while (lVar8 < 0x40000000);
    }
  }
  OodleNetwork1UDP_CountingState::Normalize(param_1);
  return;
}

// OodleNetwork1_HashBack3 @ 14ff45560

uint __cdecl oo2net::OodleNetwork1_HashBack3(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * -0x61c8864f;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | param_1 * -0x4f000000;
}

// OodleNetwork1_MakeContext @ 14ff45570

int __cdecl oo2net::OodleNetwork1_MakeContext(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 8 | param_2) * -0x61c8864f;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 & 0xfff;
}

// OodleNetwork1_MakeLitMatchContext @ 14ff45590

int __cdecl oo2net::OodleNetwork1_MakeLitMatchContext(int param_1,int param_2)

{
  return (((param_1 >> 3) + param_1) * 0x100 | param_2) & 0xfff;
}

// OodleNetwork1_MakeMLC @ 14ff455b0

int __cdecl oo2net::OodleNetwork1_MakeMLC(int param_1)

{
  return param_1 & 0x1ff;
}

// OodleNetwork1_MakeMatchContext @ 14ff455c0

int __cdecl oo2net::OodleNetwork1_MakeMatchContext(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 8 | param_2) * -0x61c8864f;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 & 0xfff;
}

// RR_GET16_NATIVE @ 14ff455e0

ushort __cdecl oo2net::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14ff455f0

uint __cdecl oo2net::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14ff45600

ulong64 __cdecl oo2net::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT16_NATIVE @ 14ff45610

void __cdecl oo2net::RR_PUT16_NATIVE(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// RR_PUT32_NATIVE @ 14ff45620

void __cdecl oo2net::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14ff45630

void __cdecl oo2net::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Reset @ 14ff45640

void __thiscall oo2net::OodleNetwork1TCP_State::Reset(OodleNetwork1TCP_State *this)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  O1BinaryArithCoder<12,1> *pOVar4;
  O1ACNOSBValueCoder<9,3> *pOVar5;
  O1BinaryArithCoder<9,4> *pOVar6;
  O1BinaryArithCoder<9,1> *pOVar7;
  
  puVar2 = (this->m_o1ac_lit_nomatch).m_o1[0].m_probs + 7;
  lVar3 = 0x100;
  do {
    lVar1 = 0;
    do {
      puVar2[lVar1 + -7] = 0x7f8;
      *(char *)((longlong)puVar2 + lVar1 + 2) = (char)lVar1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < 8);
    *puVar2 = (ushort)((uint)*puVar2 * 3 + 0x400 >> 2);
    puVar2 = puVar2 + 0xc;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  O0ArithCoder<unsigned_short,256>::init(&(this->m_o1ac_lit_nomatch).m_o0);
  lVar3 = 0x1000;
  puVar2 = (this->m_o1ac_lit_match).m_o1[0].m_probs;
  do {
    *(undefined4 *)(puVar2 + -1) = 0x7f80400;
    puVar2[1] = 0x7f8;
    puVar2[2] = 0x7f8;
    ((SRCoder4U8 *)(puVar2 + -3))->m_foursyms = 0xff200a;
    puVar2 = puVar2 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  O0ArithCoder<unsigned_short,256>::init(&(this->m_o1ac_lit_match).m_o0);
  pOVar4 = &this->m_o1ac_mf;
  for (lVar3 = 0x1000; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar4->bin[0] = 0x400;
    pOVar4 = (O1BinaryArithCoder<12,1> *)(pOVar4->bin + 1);
  }
  pOVar5 = &this->m_o1ac_ml_vc;
  for (lVar3 = 0x600; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar5->m_o1ac_unary[0].bin[0] = 0x400;
    pOVar5 = (O1ACNOSBValueCoder<9,3> *)(pOVar5->m_o1ac_unary[0].bin + 1);
  }
  pOVar6 = &(this->m_o1ac_ml_vc).m_o1ac_nosb;
  for (lVar3 = 0x1e00; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar6->bin[0] = 0x400;
    pOVar6 = (O1BinaryArithCoder<9,4> *)(pOVar6->bin + 1);
  }
  pOVar7 = &(this->m_o1ac_ml_vc).m_o1ac_firstbit;
  for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar7->bin[0] = 0x400;
    pOVar7 = (O1BinaryArithCoder<9,1> *)(pOVar7->bin + 1);
  }
  return;
}

// SetFromCounting @ 14ff45760

void __thiscall
oo2net::OodleNetwork1UDP_State::SetFromCounting
          (OodleNetwork1UDP_State *this,OodleNetwork1UDP_CountingState *param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  OodleNetwork1UDP_State *this_00;
  O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this_01;
  OodleNetwork1UDP_CountingState *pOVar3;
  Histo_nomatch *pHVar4;
  uint *puVar5;
  longlong lVar6;
  
  memcpy(this->m_total_match,param_1->m_total_match,0x4000);
  lVar6 = 8;
  puVar2 = param_1->m_total_nomatch;
  puVar5 = this->m_total_nomatch;
  do {
    uVar1 = *(undefined8 *)(puVar2 + 2);
    *(undefined8 *)puVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)(puVar5 + 2) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 6);
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar2 + 4);
    *(undefined8 *)(puVar5 + 6) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 10);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar5 + 10) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 0xe);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
    *(undefined8 *)(puVar5 + 0xe) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(puVar5 + 0x12) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 0x16);
    *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(puVar2 + 0x14);
    *(undefined8 *)(puVar5 + 0x16) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 0x1a);
    *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
    *(undefined8 *)(puVar5 + 0x1a) = uVar1;
    uVar1 = *(undefined8 *)(puVar2 + 0x1e);
    *(undefined8 *)(puVar5 + 0x1c) = *(undefined8 *)(puVar2 + 0x1c);
    *(undefined8 *)(puVar5 + 0x1e) = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar2 + 0x20;
    puVar5 = puVar5 + 0x20;
  } while (lVar6 != 0);
  lVar6 = 0x1000;
  this_00 = this;
  pOVar3 = param_1;
  do {
    O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::set_from_histo_normalized
              (this_00->m_coders_match,(uint *)pOVar3);
    pOVar3 = (OodleNetwork1UDP_CountingState *)(pOVar3->m_histos_match + 1);
    this_00 = (OodleNetwork1UDP_State *)(this_00->m_coders_match + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  this_01 = this->m_coders_nomatch;
  lVar6 = 0x100;
  pHVar4 = param_1->m_histos_nomatch;
  do {
    O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::set_from_histo_normalized
              (this_01,pHVar4->counts);
    pHVar4 = pHVar4 + 1;
    this_01 = this_01 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// U8_void @ 14ff458a0

uchar * __cdecl oo2net::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14ff458b0

uchar * __cdecl oo2net::U8_void(void *param_1)

{
  return param_1;
}

// adaptive_quantizer @ 14ff458c0

float __cdecl oo2net::adaptive_quantizer(uint param_1,uint param_2,uint param_3)

{
  double dVar1;
  
  dVar1 = rrlog2_F64((double)param_2 / (double)(param_1 * param_3));
  return (float)(dVar1 * __real_4028000000000000);
}

// assign_construct @ 14ff45900

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::
assign_construct(vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>
                 *this,rated_packet *param_1,rated_packet *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  rated_packet *prVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (longlong)param_2 - (longlong)param_1 >> 5;
  if ((ulonglong)this->_padding_ < uVar5) {
    prVar3 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar5,this->m_size);
    puVar4 = (undefined8 *)this->_padding_;
    this->m_size = uVar5;
    if (uVar5 != 0) {
      lVar6 = (longlong)param_1 - (longlong)puVar4;
      do {
        if (puVar4 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)puVar4);
          uVar2 = puVar1[1];
          *puVar4 = *puVar1;
          puVar4[1] = uVar2;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)puVar4);
          uVar2 = puVar1[1];
          puVar4[2] = *puVar1;
          puVar4[3] = uVar2;
        }
        puVar4 = puVar4 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (prVar3 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff45980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar3);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)this->_padding_;
    this->m_size = uVar5;
    if (uVar5 != 0) {
      lVar6 = (longlong)param_1 - (longlong)puVar4;
      do {
        if (puVar4 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)puVar4);
          uVar2 = puVar1[1];
          *puVar4 = *puVar1;
          puVar4[1] = uVar2;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)puVar4);
          uVar2 = puVar1[1];
          puVar4[2] = *puVar1;
          puVar4[3] = uVar2;
        }
        puVar4 = puVar4 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// at @ 14ff459d0

uchar * __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::at
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this,ulong64 param_1)

{
  return (uchar *)(*(longlong *)this + param_1);
}

// at @ 14ff459e0

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::at
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// at @ 14ff459f0

uchar ** __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::at
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  return (uchar **)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff45a00

SuffixTrieMatch * __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::at
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this,ulong64 param_1)

{
  return (SuffixTrieMatch *)(*(longlong *)this + param_1 * 0x18);
}

// at @ 14ff45a20

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::at
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  return (rated_packet *)(param_1 * 0x20 + *(longlong *)this);
}

// at @ 14ff45a40

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::at
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  return (rated_packet *)(param_1 * 0x20 + *(longlong *)this);
}

// back @ 14ff45a60

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::back
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)(*(longlong *)this + -0x20 + *(longlong *)&this->field_0x10 * 0x20);
}

// begin @ 14ff45a80

uchar * __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::begin
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  return (uchar *)this->_padding_;
}

// begin @ 14ff45a90

int * __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::begin
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  return (int *)this->_padding_;
}

// begin @ 14ff45aa0

uchar ** __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::begin
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return (uchar **)this->_padding_;
}

// begin @ 14ff45ab0

SuffixTrieMatch * __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::begin
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  return (SuffixTrieMatch *)this->_padding_;
}

// begin @ 14ff45ac0

rated_packet * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::begin
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)this->_padding_;
}

// begin @ 14ff45ad0

rated_packet * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::begin
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)this->_padding_;
}

// begin @ 14ff45ae0

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::begin
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return *(rated_packet **)this;
}

// begin @ 14ff45af0

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::begin
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return *(rated_packet **)this;
}

// begin @ 14ff45b00

uchar * __thiscall oo2net::vector_storage<unsigned_char>::begin(vector_storage<unsigned_char> *this)

{
  return this->m_begin;
}

// begin @ 14ff45b10

int * __thiscall oo2net::vector_storage<int>::begin(vector_storage<int> *this)

{
  return this->m_begin;
}

// begin @ 14ff45b20

uchar ** __thiscall
oo2net::vector_storage<unsigned_char_const_*>::begin(vector_storage<unsigned_char_const_*> *this)

{
  return this->m_begin;
}

// begin @ 14ff45b30

SuffixTrieMatch * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::begin
          (vector_storage<oo2net::SuffixTrieMatch> *this)

{
  return this->m_begin;
}

// begin @ 14ff45b40

rated_packet * __thiscall
oo2net::vector_storage<oo2net::rated_packet>::begin(vector_storage<oo2net::rated_packet> *this)

{
  return this->m_begin;
}

// begin @ 14ff45b50

rated_packet * __thiscall
oo2net::vector_storage<oo2net::rated_packet>::begin(vector_storage<oo2net::rated_packet> *this)

{
  return this->m_begin;
}

// capacity @ 14ff45b60

ulong64 __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::capacity
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff45b70

ulong64 __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::capacity
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff45b80

ulong64 __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::capacity
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff45b90

ulong64 __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::capacity
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff45ba0

ulong64 __thiscall
oo2net::vector_storage<unsigned_char>::capacity(vector_storage<unsigned_char> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff45bb0

ulong64 __thiscall oo2net::vector_storage<int>::capacity(vector_storage<int> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff45bc0

ulong64 __thiscall
oo2net::vector_storage<unsigned_char_const_*>::capacity(vector_storage<unsigned_char_const_*> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff45bd0

ulong64 __thiscall
oo2net::vector_storage<oo2net::rated_packet>::capacity(vector_storage<oo2net::rated_packet> *this)

{
  return this->m_capacity;
}

// clear @ 14ff45be0

void __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::clear
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// count @ 14ff45bf0

int __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::count
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,int param_1)

{
  return (uint)this->m_cumprobs[(longlong)param_1 + 1] - (uint)this->m_cumprobs[param_1];
}

// count @ 14ff45c10

int __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::count
          (O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *this,int param_1)

{
  return (uint)this->m_cumprobs[(longlong)param_1 + 1] - (uint)this->m_cumprobs[param_1];
}

// count_match @ 14ff45c30

void __thiscall
oo2net::OodleNetwork1UDP_CountingState::count_match
          (OodleNetwork1UDP_CountingState *this,int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = this->m_histos_match[param_2].counts + param_1;
  *puVar1 = *puVar1 + 2;
  return;
}

// count_nomatch @ 14ff45c50

void __thiscall
oo2net::OodleNetwork1UDP_CountingState::count_nomatch
          (OodleNetwork1UDP_CountingState *this,int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = this->m_histos_nomatch[param_2].counts + param_1;
  *puVar1 = *puVar1 + 2;
  return;
}

// data @ 14ff45c70

uchar * __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::data
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (uchar *)0x0;
  }
  return *(uchar **)this;
}

// decode @ 14ff45ca0

int __thiscall
oo2net::O1ACNOSBValueCoder<9,3>::decode
          (O1ACNOSBValueCoder<9,3> *this,rrArithDecoder *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  uVar4 = param_1->range;
  puVar6 = this->m_o1ac_unary[0].bin + param_2;
  uVar9 = uVar8;
  do {
    uVar3 = (uVar4 >> 0xb) * (uint)*puVar6;
    if (uVar3 <= param_1->code) {
      param_1->code = param_1->code - uVar3;
      param_1->range = uVar4 - uVar3;
      *puVar6 = *puVar6 - (*puVar6 >> 4);
      uVar4 = param_1->range;
      if (uVar4 < 0x1000000) {
        pbVar5 = param_1->ptr;
        do {
          param_1->code = param_1->code << 8;
          uVar4 = uVar4 << 8;
          param_1->range = uVar4;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          param_1->code = param_1->code | (uint)bVar1;
          param_1->ptr = pbVar5;
        } while (uVar4 < 0x1000000);
      }
      return (int)uVar9;
    }
    param_1->range = uVar3;
    *puVar6 = (short)((int)(0x800 - (uint)*puVar6) >> 4) + *puVar6;
    uVar4 = param_1->range;
    if (uVar4 < 0x1000000) {
      pbVar5 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar4 = uVar4 << 8;
        param_1->range = uVar4;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar5;
      } while (uVar4 < 0x1000000);
    }
    uVar9 = (ulonglong)((int)uVar9 + 1);
    uVar8 = uVar8 + 1;
    puVar6 = puVar6 + 0x200;
  } while ((longlong)uVar8 < 3);
  iVar2 = O1BinaryArithCoder<9,4>::decode(&this->m_o1ac_nosb,param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = 3;
  }
  else if (iVar2 == 1) {
    iVar2 = O1BinaryArithCoder<9,1>::decode(&this->m_o1ac_firstbit,param_1,param_2);
    iVar2 = iVar2 + 4;
  }
  else {
    if (iVar2 == 0xf) {
      param_1->range = param_1->range >> 4;
      uVar4 = param_1->range;
      uVar3 = param_1->code / uVar4;
      param_1->code = param_1->code - uVar4 * uVar3;
      if (uVar4 < 0x1000000) {
        pbVar5 = param_1->ptr;
        do {
          param_1->code = param_1->code << 8;
          uVar4 = uVar4 << 8;
          param_1->range = uVar4;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          param_1->code = param_1->code | (uint)bVar1;
          param_1->ptr = pbVar5;
        } while (uVar4 < 0x1000000);
      }
      iVar2 = uVar3 + 0xf;
    }
    uVar3 = O1BinaryArithCoder<9,1>::decode(&this->m_o1ac_firstbit,param_1,param_2);
    param_1->range = param_1->range >> ((char)iVar2 - 1U & 0x1f);
    uVar4 = param_1->range;
    uVar7 = param_1->code / uVar4;
    param_1->code = param_1->code - uVar4 * uVar7;
    if (uVar4 < 0x1000000) {
      pbVar5 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar4 = uVar4 << 8;
        param_1->range = uVar4;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar5;
      } while (uVar4 < 0x1000000);
    }
    iVar2 = uVar7 + 2 + ((uVar3 | 2) << ((char)iVar2 - 1U & 0x1f));
  }
  return iVar2;
}

// decode @ 14ff45f00

int __thiscall
oo2net::O1BinaryArithCoder<9,1>::decode
          (O1BinaryArithCoder<9,1> *this,rrArithDecoder *param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar1 = this->bin + param_2;
  uVar3 = (param_1->range >> 0xb) * (uint)*puVar1;
  if (uVar3 <= param_1->code) {
    param_1->code = param_1->code - uVar3;
    param_1->range = param_1->range - uVar3;
    *puVar1 = *puVar1 - (*puVar1 >> 4);
    uVar3 = param_1->range;
    if (uVar3 < 0x1000000) {
      pbVar4 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar3 = uVar3 << 8;
        param_1->range = uVar3;
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        param_1->code = param_1->code | (uint)bVar2;
        param_1->ptr = pbVar4;
      } while (uVar3 < 0x1000000);
    }
    return 1;
  }
  param_1->range = uVar3;
  *puVar1 = (short)((int)(0x800 - (uint)*puVar1) >> 4) + *puVar1;
  uVar3 = param_1->range;
  if (uVar3 < 0x1000000) {
    pbVar4 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar3 = uVar3 << 8;
      param_1->range = uVar3;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      param_1->code = param_1->code | (uint)bVar2;
      param_1->ptr = pbVar4;
    } while (uVar3 < 0x1000000);
  }
  return 0;
}

// decode @ 14ff45fe0

int __thiscall
oo2net::O1BinaryArithCoder<9,4>::decode
          (O1BinaryArithCoder<9,4> *this,rrArithDecoder *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar4 = param_2 | 0x200;
  uVar6 = (param_1->range >> 0xb) *
          (uint)*(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
  if (param_1->code < uVar6) {
    param_1->range = uVar6;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    if (uVar6 < 0x1000000) {
      pbVar7 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar6 = uVar6 << 8;
        param_1->range = uVar6;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar7;
      } while (uVar6 < 0x1000000);
    }
    uVar3 = 0;
  }
  else {
    param_1->code = param_1->code - uVar6;
    param_1->range = param_1->range - uVar6;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    uVar6 = param_1->range;
    if (uVar6 < 0x1000000) {
      pbVar7 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar6 = uVar6 << 8;
        param_1->range = uVar6;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar7;
      } while (uVar6 < 0x1000000);
    }
    uVar3 = 1;
  }
  uVar8 = uVar4 * 2 | uVar3;
  uVar4 = (uVar6 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
  if (param_1->code < uVar4) {
    param_1->range = uVar4;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      param_1->code = param_1->code << 8;
      uVar4 = param_1->range << 8;
      param_1->range = uVar4;
      bVar1 = *param_1->ptr;
      param_1->ptr = param_1->ptr + 1;
      param_1->code = param_1->code | (uint)bVar1;
    }
    uVar6 = 0;
  }
  else {
    param_1->code = param_1->code - uVar4;
    param_1->range = uVar6 - uVar4;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      param_1->code = param_1->code << 8;
      uVar4 = param_1->range << 8;
      param_1->range = uVar4;
      bVar1 = *param_1->ptr;
      param_1->ptr = param_1->ptr + 1;
      param_1->code = param_1->code | (uint)bVar1;
    }
    uVar6 = 1;
  }
  uVar8 = uVar8 * 2 | uVar6;
  uVar4 = (uVar4 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
  if (param_1->code < uVar4) {
    param_1->range = uVar4;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      param_1->code = param_1->code << 8;
      uVar4 = param_1->range << 8;
      param_1->range = uVar4;
      bVar1 = *param_1->ptr;
      param_1->ptr = param_1->ptr + 1;
      param_1->code = param_1->code | (uint)bVar1;
    }
    uVar5 = 0;
  }
  else {
    param_1->code = param_1->code - uVar4;
    param_1->range = param_1->range - uVar4;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar8 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      param_1->code = param_1->code << 8;
      uVar4 = param_1->range << 8;
      param_1->range = uVar4;
      bVar1 = *param_1->ptr;
      param_1->ptr = param_1->ptr + 1;
      param_1->code = param_1->code | (uint)bVar1;
    }
    uVar5 = 1;
  }
  uVar6 = uVar3 * 8 | uVar6 * 4 | uVar5 * 2;
  uVar5 = uVar8 * 2 | uVar5;
  uVar4 = (uVar4 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
  if (param_1->code < uVar4) {
    param_1->range = uVar4;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      param_1->code = param_1->code << 8;
      param_1->range = param_1->range << 8;
      bVar1 = *param_1->ptr;
      param_1->ptr = param_1->ptr + 1;
      param_1->code = param_1->code | (uint)bVar1;
      uVar4 = param_1->range;
    }
    return uVar6;
  }
  param_1->code = param_1->code - uVar4;
  param_1->range = param_1->range - uVar4;
  uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
  *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
  uVar4 = param_1->range;
  while (uVar4 < 0x1000000) {
    param_1->code = param_1->code << 8;
    param_1->range = param_1->range << 8;
    bVar1 = *param_1->ptr;
    param_1->ptr = param_1->ptr + 1;
    param_1->code = param_1->code | (uint)bVar1;
    uVar4 = param_1->range;
  }
  return uVar6 | 1;
}

// decode @ 14ff463e0

int __thiscall
oo2net::O1BinaryArithCoder<12,1>::decode
          (O1BinaryArithCoder<12,1> *this,rrArithDecoder *param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar1 = this->bin + param_2;
  uVar3 = (param_1->range >> 0xb) * (uint)*puVar1;
  if (uVar3 <= param_1->code) {
    param_1->code = param_1->code - uVar3;
    param_1->range = param_1->range - uVar3;
    *puVar1 = *puVar1 - (*puVar1 >> 4);
    uVar3 = param_1->range;
    if (uVar3 < 0x1000000) {
      pbVar4 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar3 = uVar3 << 8;
        param_1->range = uVar3;
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        param_1->code = param_1->code | (uint)bVar2;
        param_1->ptr = pbVar4;
      } while (uVar3 < 0x1000000);
    }
    return 1;
  }
  param_1->range = uVar3;
  *puVar1 = (short)((int)(0x800 - (uint)*puVar1) >> 4) + *puVar1;
  uVar3 = param_1->range;
  if (uVar3 < 0x1000000) {
    pbVar4 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar3 = uVar3 << 8;
      param_1->range = uVar3;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      param_1->code = param_1->code | (uint)bVar2;
      param_1->ptr = pbVar4;
    } while (uVar3 < 0x1000000);
  }
  return 0;
}

// decode @ 14ff464c0

int __thiscall
oo2net::O1SRCoder<8,8,256,unsigned_char>::decode
          (O1SRCoder<8,8,256,unsigned_char> *this,rrArithDecoder *param_1,int param_2)

{
  SRCoder<8,unsigned_char> *this_00;
  int iVar1;
  
  this_00 = this->m_o1 + param_2;
  iVar1 = SRCoder<8,unsigned_char>::decode(this_00,param_1);
  if (iVar1 == -1) {
    iVar1 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<unsigned_char>
                      (&this->m_o0,param_1,this_00->m_syms,8);
    O0ArithCoder<unsigned_short,256>::inc_count(&this->m_o0,iVar1,2);
    this_00->m_syms[7] = this_00->m_syms[6];
    this_00->m_syms[6] = (uchar)iVar1;
  }
  return iVar1;
}

// decode @ 14ff46540

int __thiscall
oo2net::SRCoder<8,unsigned_char>::decode(SRCoder<8,unsigned_char> *this,rrArithDecoder *param_1)

{
  byte bVar1;
  uchar uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  longlong lVar9;
  
  uVar4 = (param_1->range >> 0xb) * (uint)this->m_probs[7];
  if (param_1->code < uVar4) {
    param_1->range = uVar4;
    this->m_probs[7] = (short)((int)(0x800 - (uint)this->m_probs[7]) >> 4) + this->m_probs[7];
    uVar4 = param_1->range;
    if (uVar4 < 0x1000000) {
      pbVar8 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar4 = uVar4 << 8;
        param_1->range = uVar4;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar8;
      } while (uVar4 < 0x1000000);
    }
    return -1;
  }
  param_1->code = param_1->code - uVar4;
  param_1->range = param_1->range - uVar4;
  this->m_probs[7] = this->m_probs[7] - (this->m_probs[7] >> 4);
  uVar4 = param_1->range;
  if (uVar4 < 0x1000000) {
    pbVar8 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar4 = uVar4 << 8;
      param_1->range = uVar4;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar8;
    } while (uVar4 < 0x1000000);
  }
  iVar6 = 0;
  lVar9 = 0;
  while( true ) {
    uVar5 = (uVar4 >> 0xb) * (uint)this->m_probs[lVar9];
    if (uVar5 <= param_1->code) break;
    param_1->range = uVar5;
    this->m_probs[lVar9] =
         (short)((int)(0x800 - (uint)this->m_probs[lVar9]) >> 4) + this->m_probs[lVar9];
    uVar4 = param_1->range;
    if (uVar4 < 0x1000000) {
      pbVar8 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar4 = uVar4 << 8;
        param_1->range = uVar4;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar8;
      } while (uVar4 < 0x1000000);
    }
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 1;
    if (6 < lVar9) {
      bVar1 = this->m_syms[7];
      this->m_syms[7] = this->m_syms[6];
      this->m_syms[6] = this->m_syms[5];
      this->m_syms[5] = this->m_syms[4];
      this->m_syms[4] = this->m_syms[3];
      this->m_syms[3] = this->m_syms[2];
      this->m_syms[2] = this->m_syms[1];
      uVar2 = this->m_syms[0];
      this->m_syms[0] = bVar1;
      this->m_syms[1] = uVar2;
      return (uint)bVar1;
    }
  }
  param_1->code = param_1->code - uVar5;
  param_1->range = uVar4 - uVar5;
  this->m_probs[lVar9] = this->m_probs[lVar9] - (this->m_probs[lVar9] >> 4);
  uVar4 = param_1->range;
  if (uVar4 < 0x1000000) {
    pbVar8 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar4 = uVar4 << 8;
      param_1->range = uVar4;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar8;
    } while (uVar4 < 0x1000000);
  }
  lVar9 = (longlong)iVar6;
  bVar1 = this->m_syms[lVar9];
  if (iVar6 < 1) {
    return (uint)bVar1;
  }
  puVar7 = (undefined1 *)((longlong)this->m_probs + lVar9 + 0xf);
  do {
    uVar3 = *puVar7;
    *puVar7 = puVar7[1];
    puVar7[1] = uVar3;
    puVar7 = puVar7 + -1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return (uint)bVar1;
}

// decode_noadapt_norenorm @ 14ff467a0

int __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::decode_noadapt_norenorm
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,rrArithDecoder *param_1
          )

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  param_1->range = param_1->range >> 0xc;
  uVar4 = param_1->code / param_1->range & 0xfff;
  uVar8 = (ulonglong)this->m_jumptable[uVar4 >> 6];
  uVar6 = (uint)this->m_jumptable[uVar4 >> 6];
  sVar5 = (short)uVar4;
  puVar3 = this->m_cumprobs + uVar8 + 8;
  uVar2 = this->m_cumprobs[uVar8 + 8];
  while (uVar2 <= uVar4) {
    puVar1 = puVar3 + 8;
    puVar3 = puVar3 + 8;
    uVar6 = (int)uVar8 + 8;
    uVar8 = (ulonglong)uVar6;
    uVar2 = *puVar1;
  }
  puVar3 = this->m_cumprobs + (longlong)(int)uVar6 + 1;
  auVar9._0_2_ = -(ushort)(sVar5 < (short)*puVar3);
  auVar9._2_2_ = -(ushort)(sVar5 < (short)puVar3[1]);
  auVar9._4_2_ = -(ushort)(sVar5 < (short)puVar3[2]);
  auVar9._6_2_ = -(ushort)(sVar5 < (short)puVar3[3]);
  auVar9._8_2_ = -(ushort)(sVar5 < (short)puVar3[4]);
  auVar9._10_2_ = -(ushort)(sVar5 < (short)puVar3[5]);
  auVar9._12_2_ = -(ushort)(sVar5 < (short)puVar3[6]);
  auVar9._14_2_ = -(ushort)(sVar5 < (short)puVar3[7]);
  uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
          (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000;
  uVar4 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  iVar7 = uVar6 + (uVar4 >> 1);
  uVar2 = this->m_cumprobs[iVar7];
  uVar6 = param_1->range;
  param_1->range = ((uint)this->m_cumprobs[(longlong)iVar7 + 1] - (uint)uVar2) * param_1->range;
  param_1->code = param_1->code - uVar6 * uVar2;
  return iVar7;
}

// decode_noadapt_norenorm @ 14ff46860

int __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::decode_noadapt_norenorm
          (O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *this,
          rrArithDecoder *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  param_1->range = param_1->range >> 0xc;
  uVar4 = param_1->code / param_1->range & 0xfff;
  uVar8 = (ulonglong)this->m_jumptable[uVar4 >> 6];
  uVar6 = (uint)this->m_jumptable[uVar4 >> 6];
  sVar5 = (short)uVar4;
  puVar3 = this->m_cumprobs + uVar8 + 8;
  uVar2 = this->m_cumprobs[uVar8 + 8];
  while (uVar2 <= uVar4) {
    puVar1 = puVar3 + 8;
    puVar3 = puVar3 + 8;
    uVar6 = (int)uVar8 + 8;
    uVar8 = (ulonglong)uVar6;
    uVar2 = *puVar1;
  }
  puVar3 = this->m_cumprobs + (longlong)(int)uVar6 + 1;
  auVar9._0_2_ = -(ushort)(sVar5 < (short)*puVar3);
  auVar9._2_2_ = -(ushort)(sVar5 < (short)puVar3[1]);
  auVar9._4_2_ = -(ushort)(sVar5 < (short)puVar3[2]);
  auVar9._6_2_ = -(ushort)(sVar5 < (short)puVar3[3]);
  auVar9._8_2_ = -(ushort)(sVar5 < (short)puVar3[4]);
  auVar9._10_2_ = -(ushort)(sVar5 < (short)puVar3[5]);
  auVar9._12_2_ = -(ushort)(sVar5 < (short)puVar3[6]);
  auVar9._14_2_ = -(ushort)(sVar5 < (short)puVar3[7]);
  uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
          (ushort)((byte)(auVar9._14_2_ >> 7) & 1) << 0xe | auVar9._14_2_ & 0x8000;
  uVar4 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  iVar7 = uVar6 + (uVar4 >> 1);
  uVar2 = this->m_cumprobs[iVar7];
  uVar6 = param_1->range;
  param_1->range = ((uint)this->m_cumprobs[(longlong)iVar7 + 1] - (uint)uVar2) * param_1->range;
  param_1->code = param_1->code - uVar6 * uVar2;
  return iVar7;
}

// decode_withexclude @ 14ff46920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
oo2net::O1SRCoder4U8<12>::decode_withexclude
          (O1SRCoder4U8<12> *this,rrArithDecoder *param_1,int param_2,int param_3)

{
  SRCoder4U8 *this_00;
  uint uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  this_00 = this->m_o1 + param_2;
  local_48[0] = param_3;
  iVar2 = SRCoder4U8::decode_withexclude(this_00,param_1,local_48);
  if (iVar2 == -1) {
    uVar1 = this_00->m_foursyms;
    local_40 = uVar1 & 0xff;
    local_3c = uVar1 >> 8 & 0xff;
    local_34 = uVar1 >> 0x18;
    local_38 = uVar1 >> 0x10 & 0xff;
    local_30 = local_48[0];
    iVar2 = O0ArithCoder<unsigned_short,256>::decode_noadapt_with_excludelist<int>
                      (&this->m_o0,param_1,(int *)&local_40,(-1 < local_48[0]) + 4);
    O0ArithCoder<unsigned_short,256>::inc_count(&this->m_o0,iVar2,2);
    this_00->m_foursyms =
         (this_00->m_foursyms & 0xffff0000) << 8 | iVar2 << 0x10 | this_00->m_foursyms & 0xffff;
  }
  return iVar2;
}

// decode_withexclude @ 14ff46a20

int __thiscall
oo2net::SRCoder4U8::decode_withexclude(SRCoder4U8 *this,rrArithDecoder *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  
  uVar3 = *param_2;
  uVar5 = uVar3 << 0x10 | uVar3;
  uVar6 = (uVar5 | uVar5 << 8) ^ this->m_foursyms;
  uVar5 = (param_1->range >> 0xb) * (uint)this->m_probany;
  if (param_1->code < uVar5) {
    param_1->range = uVar5;
    this->m_probany = (short)((int)(0x800 - (uint)this->m_probany) >> 4) + this->m_probany;
    uVar3 = param_1->range;
    if (uVar3 < 0x1000000) {
      uVar5 = param_1->code;
      pbVar4 = param_1->ptr;
      do {
        param_1->code = uVar5 << 8;
        uVar3 = uVar3 << 8;
        param_1->range = uVar3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar1;
        param_1->ptr = pbVar4;
        param_1->code = uVar5;
      } while (uVar3 < 0x1000000);
    }
    if ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) != 0) {
      *param_2 = -1;
    }
    return -1;
  }
  param_1->code = param_1->code - uVar5;
  param_1->range = param_1->range - uVar5;
  this->m_probany = this->m_probany - (this->m_probany >> 4);
  uVar5 = param_1->range;
  if (uVar5 < 0x1000000) {
    uVar6 = param_1->code;
    pbVar4 = param_1->ptr;
    do {
      param_1->code = uVar6 << 8;
      uVar5 = uVar5 << 8;
      param_1->range = uVar5;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 << 8 | (uint)bVar1;
      param_1->ptr = pbVar4;
      param_1->code = uVar6;
    } while (uVar5 < 0x1000000);
  }
  iVar7 = 0;
  puVar8 = this->m_probs;
  iVar2 = iVar7;
  do {
    if ((this->m_foursyms >> ((byte)iVar2 & 0x1f) & 0xff) != uVar3) {
      uVar5 = (param_1->range >> 0xb) * (uint)*puVar8;
      if (uVar5 <= param_1->code) {
        param_1->code = param_1->code - uVar5;
        param_1->range = param_1->range - uVar5;
        *puVar8 = *puVar8 - (*puVar8 >> 4);
        uVar3 = param_1->range;
        if (uVar3 < 0x1000000) {
          uVar5 = param_1->code;
          pbVar4 = param_1->ptr;
          do {
            param_1->code = uVar5 << 8;
            uVar3 = uVar3 << 8;
            param_1->range = uVar3;
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            uVar5 = uVar5 << 8 | (uint)bVar1;
            param_1->ptr = pbVar4;
            param_1->code = uVar5;
          } while (uVar3 < 0x1000000);
        }
        uVar3 = this->m_foursyms;
        uVar5 = uVar3 >> ((char)iVar7 * '\b' & 0x1fU) & 0xff;
        if (iVar7 != 0) {
          if (iVar7 != 1) {
            if (iVar7 != 2) {
              this->m_foursyms = uVar3 << 8 | uVar3 >> 0x18;
              return uVar5;
            }
            this->m_foursyms = uVar3 >> 0x10 & 0xff | (uVar3 & 0xffff) << 8 | uVar3 & 0xff000000;
            return uVar5;
          }
          this->m_foursyms = uVar3 >> 8 & 0xff | (uVar3 & 0xff) << 8 | uVar3 & 0xffff0000;
        }
        return uVar5;
      }
      param_1->range = uVar5;
      *puVar8 = (short)((int)(0x800 - (uint)*puVar8) >> 4) + *puVar8;
      uVar5 = param_1->range;
      if (uVar5 < 0x1000000) {
        uVar6 = param_1->code;
        pbVar4 = param_1->ptr;
        do {
          param_1->code = uVar6 << 8;
          uVar5 = uVar5 << 8;
          param_1->range = uVar5;
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 << 8 | (uint)bVar1;
          param_1->ptr = pbVar4;
          param_1->code = uVar6;
        } while (uVar5 < 0x1000000);
      }
    }
    iVar7 = iVar7 + 1;
    iVar2 = iVar2 + 8;
    puVar8 = puVar8 + 1;
  } while (iVar2 < 0x18);
  bVar1 = *(byte *)((longlong)&this->m_foursyms + 3);
  this->m_foursyms = this->m_foursyms << 8 | this->m_foursyms >> 0x18;
  return (int)bVar1;
}

// dequantize_dz @ 14ff46d20

int __cdecl oo2net::dequantize_dz(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = (((int)(param_1 + 1U) >> 1) + 1) * param_2;
  iVar1 = (param_2 >> 1) - iVar2;
  if ((param_1 + 1U & 1) == 0) {
    iVar1 = iVar2 - (param_2 >> 1);
  }
  return iVar1;
}

// empty @ 14ff46d50

bool __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::empty
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14ff46d60

bool __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::empty
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// encode @ 14ff46d80

void __thiscall
oo2net::O1ACNOSBValueCoder<9,3>::encode
          (O1ACNOSBValueCoder<9,3> *this,rrArithEncoder *param_1,int param_2,int param_3)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar10 = (longlong)param_2;
  if (param_2 < 3) {
    if (param_2 < 1) {
      uVar6 = param_1->range;
    }
    else {
      puVar9 = this->m_o1ac_unary[0].bin + param_3;
      lVar11 = lVar10;
      do {
        param_1->range = (param_1->range >> 0xb) * (uint)*puVar9;
        *puVar9 = (short)((int)(0x800 - (uint)*puVar9) >> 4) + *puVar9;
        uVar6 = param_1->range;
        while (uVar6 < 0x1000000) {
          *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
          param_1->ptr = param_1->ptr + 1;
          param_1->low = param_1->low << 8;
          uVar6 = param_1->range << 8;
          param_1->range = uVar6;
        }
        puVar9 = puVar9 + 0x200;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    uVar8 = (uVar6 >> 0xb) * (uint)this->m_o1ac_unary[lVar10].bin[param_3];
    param_1->low = param_1->low + uVar8;
    param_1->range = uVar6 - uVar8;
    uVar2 = this->m_o1ac_unary[lVar10].bin[param_3];
    this->m_o1ac_unary[lVar10].bin[param_3] = uVar2 - (uVar2 >> 4);
    if (param_1->low < uVar8) {
      puVar5 = param_1->ptr + -1;
      uVar1 = *puVar5;
      while (uVar1 == 0xff) {
        *puVar5 = '\0';
        puVar5 = puVar5 + -1;
        uVar1 = *puVar5;
      }
      *puVar5 = uVar1 + '\x01';
    }
    if (param_1->range < 0x1000000) {
      do {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        param_1->range = param_1->range << 8;
      } while (param_1->range < 0x1000000);
      return;
    }
  }
  else {
    param_1->range = (param_1->range >> 0xb) * (uint)this->m_o1ac_unary[0].bin[param_3];
    uVar2 = this->m_o1ac_unary[0].bin[param_3];
    this->m_o1ac_unary[0].bin[param_3] = (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->range = param_1->range << 8;
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range;
    }
    param_1->range = (uVar6 >> 0xb) * (uint)this->m_o1ac_unary[1].bin[param_3];
    uVar2 = this->m_o1ac_unary[1].bin[param_3];
    this->m_o1ac_unary[1].bin[param_3] = (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar6 = param_1->range;
    }
    param_1->range = (uVar6 >> 0xb) * (uint)this->m_o1ac_unary[2].bin[param_3];
    uVar2 = this->m_o1ac_unary[2].bin[param_3];
    this->m_o1ac_unary[2].bin[param_3] = (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar6 = param_1->range;
    }
    uVar6 = param_2 - 2;
    iVar4 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (iVar4 == 0) {
      O1BinaryArithCoder<9,4>::encode(&this->m_o1ac_nosb,param_1,0,param_3);
    }
    else if (iVar4 == 1) {
      O1BinaryArithCoder<9,4>::encode(&this->m_o1ac_nosb,param_1,1,param_3);
      O1BinaryArithCoder<9,1>::encode(&this->m_o1ac_firstbit,param_1,uVar6 & 1,param_3);
    }
    else {
      uVar8 = 1 << ((char)iVar4 - 1U & 0x1f);
      if (iVar4 < 0xf) {
        O1BinaryArithCoder<9,4>::encode(&this->m_o1ac_nosb,param_1,iVar4,param_3);
      }
      else {
        O1BinaryArithCoder<9,4>::encode(&this->m_o1ac_nosb,param_1,0xf,param_3);
        uVar3 = param_1->low;
        param_1->range = param_1->range >> 4;
        uVar7 = (iVar4 + -0xf) * param_1->range + uVar3;
        param_1->low = uVar7;
        if (uVar7 < uVar3) {
          puVar5 = param_1->ptr + -1;
          uVar1 = *puVar5;
          while (uVar1 == 0xff) {
            *puVar5 = '\0';
            puVar5 = puVar5 + -1;
            uVar1 = *puVar5;
          }
          *puVar5 = uVar1 + '\x01';
        }
        uVar3 = param_1->range;
        while (uVar3 < 0x1000000) {
          *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
          param_1->ptr = param_1->ptr + 1;
          param_1->low = param_1->low << 8;
          param_1->range = param_1->range << 8;
          uVar3 = param_1->range;
        }
      }
      O1BinaryArithCoder<9,1>::encode
                (&this->m_o1ac_firstbit,param_1,(uint)((uVar6 & uVar8) != 0),param_3);
      uVar3 = param_1->low;
      param_1->range = param_1->range >> ((char)iVar4 - 1U & 0x1f);
      uVar6 = (uVar8 - 1 & uVar6) * param_1->range + uVar3;
      param_1->low = uVar6;
      if (uVar6 < uVar3) {
        puVar5 = param_1->ptr + -1;
        uVar1 = *puVar5;
        while (uVar1 == 0xff) {
          *puVar5 = '\0';
          puVar5 = puVar5 + -1;
          uVar1 = *puVar5;
        }
        *puVar5 = uVar1 + '\x01';
      }
      uVar6 = param_1->range;
      while (uVar6 < 0x1000000) {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        param_1->range = param_1->range << 8;
        uVar6 = param_1->range;
      }
    }
  }
  return;
}

// encode @ 14ff471a0

void __thiscall
oo2net::O1BinaryArithCoder<9,1>::encode
          (O1BinaryArithCoder<9,1> *this,rrArithEncoder *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uchar uVar2;
  uchar *puVar3;
  uint uVar4;
  
  puVar1 = this->bin + param_3;
  uVar4 = (param_1->range >> 0xb) * (uint)*puVar1;
  if (param_2 == 0) {
    param_1->range = uVar4;
    *puVar1 = (short)((int)(0x800 - (uint)*puVar1) >> 4) + *puVar1;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar4 = param_1->range;
    }
  }
  else {
    param_1->low = param_1->low + uVar4;
    param_1->range = param_1->range - uVar4;
    *puVar1 = *puVar1 - (*puVar1 >> 4);
    if (param_1->low < uVar4) {
      puVar3 = param_1->ptr + -1;
      uVar2 = *puVar3;
      while (uVar2 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar2 = *puVar3;
      }
      *puVar3 = uVar2 + '\x01';
    }
    if (param_1->range < 0x1000000) {
      do {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        param_1->range = param_1->range << 8;
      } while (param_1->range < 0x1000000);
      return;
    }
  }
  return;
}

// encode @ 14ff47280

void __thiscall
oo2net::O1BinaryArithCoder<9,4>::encode
          (O1BinaryArithCoder<9,4> *this,rrArithEncoder *param_1,int param_2,int param_3)

{
  uchar uVar1;
  ushort uVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_3 | 0x200;
  uVar6 = (param_1->range >> 0xb) *
          (uint)*(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
  uVar4 = param_2 >> 3 & 1;
  if (uVar4 == 0) {
    param_1->range = uVar6;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  else {
    param_1->low = param_1->low + uVar6;
    param_1->range = param_1->range - uVar6;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    if (param_1->low < uVar6) {
      puVar3 = param_1->ptr + -1;
      uVar1 = *puVar3;
      while (uVar1 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      *puVar3 = uVar1 + '\x01';
    }
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  uVar4 = uVar5 * 2 | uVar4;
  uVar7 = (uVar6 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
  uVar5 = param_2 >> 2 & 1;
  if (uVar5 == 0) {
    param_1->range = uVar7;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  else {
    param_1->low = param_1->low + uVar7;
    param_1->range = uVar6 - uVar7;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    if (param_1->low < uVar7) {
      puVar3 = param_1->ptr + -1;
      uVar1 = *puVar3;
      while (uVar1 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      *puVar3 = uVar1 + '\x01';
    }
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  uVar5 = uVar4 * 2 | uVar5;
  uVar7 = (uVar6 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
  uVar4 = param_2 >> 1 & 1;
  if (uVar4 == 0) {
    param_1->range = uVar7;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  else {
    param_1->low = param_1->low + uVar7;
    param_1->range = uVar6 - uVar7;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar5 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    if (param_1->low < uVar7) {
      puVar3 = param_1->ptr + -1;
      uVar1 = *puVar3;
      while (uVar1 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      *puVar3 = uVar1 + '\x01';
    }
    uVar6 = param_1->range;
    while (uVar6 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      uVar6 = param_1->range << 8;
      param_1->range = uVar6;
    }
  }
  uVar4 = uVar5 * 2 | uVar4;
  uVar5 = (uVar6 >> 0xb) * (uint)*(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
  if ((param_2 & 1U) == 0) {
    param_1->range = uVar5;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) =
         (short)((int)(0x800 - (uint)uVar2) >> 4) + uVar2;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar4 = param_1->range;
    }
  }
  else {
    param_1->low = param_1->low + uVar5;
    param_1->range = uVar6 - uVar5;
    uVar2 = *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400);
    *(ushort *)((longlong)this + (longlong)(int)uVar4 * 2 + -0x400) = uVar2 - (uVar2 >> 4);
    if (param_1->low < uVar5) {
      puVar3 = param_1->ptr + -1;
      uVar1 = *puVar3;
      while (uVar1 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      *puVar3 = uVar1 + '\x01';
    }
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar4 = param_1->range;
    }
  }
  return;
}

// encode @ 14ff47740

void __thiscall
oo2net::O1BinaryArithCoder<12,1>::encode
          (O1BinaryArithCoder<12,1> *this,rrArithEncoder *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uchar uVar2;
  uchar *puVar3;
  uint uVar4;
  
  puVar1 = this->bin + param_3;
  uVar4 = (param_1->range >> 0xb) * (uint)*puVar1;
  if (param_2 == 0) {
    param_1->range = uVar4;
    *puVar1 = (short)((int)(0x800 - (uint)*puVar1) >> 4) + *puVar1;
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar4 = param_1->range;
    }
  }
  else {
    param_1->low = param_1->low + uVar4;
    param_1->range = param_1->range - uVar4;
    *puVar1 = *puVar1 - (*puVar1 >> 4);
    if (param_1->low < uVar4) {
      puVar3 = param_1->ptr + -1;
      uVar2 = *puVar3;
      while (uVar2 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar2 = *puVar3;
      }
      *puVar3 = uVar2 + '\x01';
    }
    if (param_1->range < 0x1000000) {
      do {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        param_1->range = param_1->range << 8;
      } while (param_1->range < 0x1000000);
      return;
    }
  }
  return;
}

// encode @ 14ff47820

void __thiscall
oo2net::O1SRCoder<8,8,256,unsigned_char>::encode
          (O1SRCoder<8,8,256,unsigned_char> *this,rrArithEncoder *param_1,int param_2,int param_3)

{
  SRCoder<8,unsigned_char> *this_00;
  bool bVar1;
  
  this_00 = this->m_o1 + param_3;
  bVar1 = SRCoder<8,unsigned_char>::encode(this_00,param_1,param_2);
  if (!bVar1) {
    O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (&this->m_o0,param_1,param_2,this_00->m_syms,8);
    O0ArithCoder<unsigned_short,256>::inc_count(&this->m_o0,param_2,2);
    this_00->m_syms[7] = this_00->m_syms[6];
    this_00->m_syms[6] = (uchar)param_2;
  }
  return;
}

// encode @ 14ff478c0

bool __thiscall
oo2net::SRCoder<8,unsigned_char>::encode
          (SRCoder<8,unsigned_char> *this,rrArithEncoder *param_1,int param_2)

{
  uchar uVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  uVar7 = uVar9;
  uVar11 = uVar9;
  do {
    iVar10 = (int)uVar11;
    if (param_2 == (uint)this->m_syms[uVar7]) {
      uVar5 = (param_1->range >> 0xb) * (uint)this->m_probs[7];
      param_1->low = param_1->low + uVar5;
      param_1->range = param_1->range - uVar5;
      this->m_probs[7] = this->m_probs[7] - (this->m_probs[7] >> 4);
      if (param_1->low < uVar5) {
        puVar3 = param_1->ptr + -1;
        uVar1 = *puVar3;
        while (uVar1 == 0xff) {
          *puVar3 = '\0';
          puVar3 = puVar3 + -1;
          uVar1 = *puVar3;
        }
        *puVar3 = uVar1 + '\x01';
      }
      uVar5 = param_1->range;
      while (uVar5 < 0x1000000) {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        uVar5 = param_1->range << 8;
        param_1->range = uVar5;
      }
      lVar8 = (longlong)iVar10;
      if (0 < iVar10) {
        do {
          param_1->range = (param_1->range >> 0xb) * (uint)this->m_probs[uVar9];
          this->m_probs[uVar9] =
               (short)((int)(0x800 - (uint)this->m_probs[uVar9]) >> 4) + this->m_probs[uVar9];
          uVar5 = param_1->range;
          while (uVar5 < 0x1000000) {
            *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
            param_1->ptr = param_1->ptr + 1;
            param_1->low = param_1->low << 8;
            uVar5 = param_1->range << 8;
            param_1->range = uVar5;
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < lVar8);
      }
      if (iVar10 < 7) {
        uVar6 = (uVar5 >> 0xb) * (uint)this->m_probs[lVar8];
        param_1->low = param_1->low + uVar6;
        param_1->range = uVar5 - uVar6;
        this->m_probs[lVar8] = this->m_probs[lVar8] - (this->m_probs[lVar8] >> 4);
        if (param_1->low < uVar6) {
          puVar3 = param_1->ptr + -1;
          uVar1 = *puVar3;
          while (uVar1 == 0xff) {
            *puVar3 = '\0';
            puVar3 = puVar3 + -1;
            uVar1 = *puVar3;
          }
          *puVar3 = uVar1 + '\x01';
        }
        uVar5 = param_1->range;
        while (uVar5 < 0x1000000) {
          *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
          param_1->ptr = param_1->ptr + 1;
          param_1->low = param_1->low << 8;
          param_1->range = param_1->range << 8;
          uVar5 = param_1->range;
        }
      }
      if (0 < iVar10) {
        puVar4 = (undefined1 *)((longlong)this->m_probs + lVar8 + 0xf);
        do {
          uVar2 = *puVar4;
          *puVar4 = puVar4[1];
          puVar4[1] = uVar2;
          puVar4 = puVar4 + -1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      return true;
    }
    uVar11 = (ulonglong)(iVar10 + 1);
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < 8);
  param_1->range = (param_1->range >> 0xb) * (uint)this->m_probs[7];
  this->m_probs[7] = (short)((int)(0x800 - (uint)this->m_probs[7]) >> 4) + this->m_probs[7];
  uVar5 = param_1->range;
  while (uVar5 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar5 = param_1->range;
  }
  return false;
}

// encode_noadapt @ 14ff47b20

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::encode_noadapt
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,rrArithEncoder *param_1
          ,int param_2)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  
  uVar3 = param_1->low;
  uVar2 = this->m_cumprobs[param_2];
  uVar5 = param_1->range >> 0xc;
  param_1->range = uVar5 * ((uint)this->m_cumprobs[(longlong)param_2 + 1] - (uint)uVar2);
  uVar5 = uVar5 * uVar2 + uVar3;
  param_1->low = uVar5;
  if (uVar5 < uVar3) {
    puVar4 = param_1->ptr + -1;
    uVar1 = *puVar4;
    while (uVar1 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 + '\x01';
  }
  uVar3 = param_1->range;
  while (uVar3 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar3 = param_1->range;
  }
  return;
}

// encode_noadapt_norenorm @ 14ff47bc0

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::encode_noadapt_norenorm
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,rrArithEncoder *param_1
          ,int param_2)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  
  uVar3 = param_1->low;
  uVar2 = this->m_cumprobs[param_2];
  uVar5 = param_1->range >> 0xc;
  param_1->range = uVar5 * ((uint)this->m_cumprobs[(longlong)param_2 + 1] - (uint)uVar2);
  uVar5 = uVar5 * uVar2 + uVar3;
  param_1->low = uVar5;
  if (uVar5 < uVar3) {
    puVar4 = param_1->ptr + -1;
    uVar1 = *puVar4;
    while (uVar1 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 + '\x01';
  }
  return;
}

// encode_noadapt_norenorm @ 14ff47c40

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::encode_noadapt_norenorm
          (O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *this,
          rrArithEncoder *param_1,int param_2)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  
  uVar3 = param_1->low;
  uVar2 = this->m_cumprobs[param_2];
  uVar5 = param_1->range >> 0xc;
  param_1->range = uVar5 * ((uint)this->m_cumprobs[(longlong)param_2 + 1] - (uint)uVar2);
  uVar5 = uVar5 * uVar2 + uVar3;
  param_1->low = uVar5;
  if (uVar5 < uVar3) {
    puVar4 = param_1->ptr + -1;
    uVar1 = *puVar4;
    while (uVar1 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 + '\x01';
  }
  return;
}

// encode_withexclude @ 14ff47cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2net::O1SRCoder4U8<12>::encode_withexclude
          (O1SRCoder4U8<12> *this,rrArithEncoder *param_1,int param_2,int param_3,int param_4)

{
  SRCoder4U8 *this_00;
  uint uVar1;
  bool bVar2;
  undefined1 auStackY_78 [32];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this_00 = this->m_o1 + param_3;
  bVar2 = SRCoder4U8::encode_withexclude(this_00,param_1,param_2,&param_4);
  if (!bVar2) {
    uVar1 = this_00->m_foursyms;
    local_48 = uVar1 & 0xff;
    local_44 = uVar1 >> 8 & 0xff;
    local_3c = uVar1 >> 0x18;
    local_40 = uVar1 >> 0x10 & 0xff;
    local_38 = param_4;
    O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<int>
              (&this->m_o0,param_1,param_2,(int *)&local_48,(-1 < param_4) + 4);
    O0ArithCoder<unsigned_short,256>::inc_count(&this->m_o0,param_2,2);
    this_00->m_foursyms =
         param_2 << 0x10 | (this_00->m_foursyms & 0xffff0000) << 8 | this_00->m_foursyms & 0xffff;
  }
  return;
}

// encode_withexclude @ 14ff47dc0

bool __thiscall
oo2net::SRCoder4U8::encode_withexclude
          (SRCoder4U8 *this,rrArithEncoder *param_1,int param_2,int *param_3)

{
  uchar uVar1;
  bool bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = *param_3;
  uVar9 = param_2 << 0x10 | param_2;
  uVar4 = uVar5 << 0x10 | uVar5;
  uVar7 = this->m_foursyms ^ (uVar9 | uVar9 << 8);
  uVar9 = this->m_foursyms ^ (uVar4 | uVar4 << 8);
  uVar4 = param_1->range;
  if ((uVar7 + 0xfefefeff & ~uVar7 & 0x80808080) == 0) {
    param_1->range = (uVar4 >> 0xb) * (uint)this->m_probany;
    this->m_probany = (short)((int)(0x800 - (uint)this->m_probany) >> 4) + this->m_probany;
    uVar5 = param_1->range;
    while (uVar5 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar5 = param_1->range;
    }
    if ((uVar9 + 0xfefefeff & ~uVar9 & 0x80808080) != 0) {
      *param_3 = -1;
    }
    bVar2 = false;
  }
  else {
    uVar9 = (uVar4 >> 0xb) * (uint)this->m_probany;
    param_1->low = param_1->low + uVar9;
    param_1->range = uVar4 - uVar9;
    this->m_probany = this->m_probany - (this->m_probany >> 4);
    if (param_1->low < uVar9) {
      puVar3 = param_1->ptr + -1;
      uVar1 = *puVar3;
      while (uVar1 == 0xff) {
        *puVar3 = '\0';
        puVar3 = puVar3 + -1;
        uVar1 = *puVar3;
      }
      *puVar3 = uVar1 + '\x01';
    }
    uVar4 = param_1->range;
    while (uVar4 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar4 = param_1->range;
    }
    iVar10 = 0;
    puVar6 = this->m_probs;
    iVar8 = iVar10;
    do {
      uVar4 = this->m_foursyms >> ((byte)iVar8 & 0x1f) & 0xff;
      if (uVar4 == param_2) {
        uVar5 = (param_1->range >> 0xb) * (uint)this->m_probs[iVar10];
        param_1->low = param_1->low + uVar5;
        param_1->range = param_1->range - uVar5;
        this->m_probs[iVar10] = this->m_probs[iVar10] - (this->m_probs[iVar10] >> 4);
        if (param_1->low < uVar5) {
          puVar3 = param_1->ptr + -1;
          uVar1 = *puVar3;
          while (uVar1 == 0xff) {
            *puVar3 = '\0';
            puVar3 = puVar3 + -1;
            uVar1 = *puVar3;
          }
          *puVar3 = uVar1 + '\x01';
        }
        uVar5 = param_1->range;
        while (uVar5 < 0x1000000) {
          *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
          param_1->ptr = param_1->ptr + 1;
          param_1->low = param_1->low << 8;
          param_1->range = param_1->range << 8;
          uVar5 = param_1->range;
        }
        uVar5 = this->m_foursyms;
        if (iVar10 != 0) {
          if (iVar10 != 1) {
            if (iVar10 != 2) {
              this->m_foursyms = uVar5 << 8 | uVar5 >> 0x18;
              return true;
            }
            this->m_foursyms = uVar5 >> 0x10 & 0xff | (uVar5 & 0xffff) << 8 | uVar5 & 0xff000000;
            return true;
          }
          this->m_foursyms = uVar5 >> 8 & 0xff | (uVar5 & 0xff) << 8 | uVar5 & 0xffff0000;
        }
        return true;
      }
      if (uVar4 != uVar5) {
        param_1->range = (param_1->range >> 0xb) * (uint)*puVar6;
        *puVar6 = (short)((int)(0x800 - (uint)*puVar6) >> 4) + *puVar6;
        uVar4 = param_1->range;
        while (uVar4 < 0x1000000) {
          *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
          param_1->ptr = param_1->ptr + 1;
          param_1->low = param_1->low << 8;
          param_1->range = param_1->range << 8;
          uVar4 = param_1->range;
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 8;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 0x18);
    this->m_foursyms = this->m_foursyms << 8 | this->m_foursyms >> 0x18;
    bVar2 = true;
  }
  return bVar2;
}

// end @ 14ff480c0

rated_packet * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::end
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)(this->m_size * 0x20 + this->_padding_);
}

// end @ 14ff480e0

rated_packet * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::end
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)(this->m_size * 0x20 + this->_padding_);
}

// end @ 14ff48100

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::end
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)(*(longlong *)&this->field_0x10 * 0x20 + *(longlong *)this);
}

// end @ 14ff48120

rated_packet * __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::end
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return (rated_packet *)(*(longlong *)&this->field_0x10 * 0x20 + *(longlong *)this);
}

// extend_copy @ 14ff48140

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::extend_copy
          (vector_base<int,oo2net::vector_storage<int>_> *this,int *param_1,ulong64 param_2)

{
  int iVar1;
  int *piVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int *piVar5;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    piVar2 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar3 + param_2,uVar3);
    uVar3 = this->m_size;
    if (param_2 != 0) {
      iVar1 = *param_1;
      piVar5 = (int *)(this->_padding_ + uVar3 * 4);
      for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
      }
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
    if (piVar2 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar2);
    }
  }
  else {
    if (param_2 != 0) {
      iVar1 = *param_1;
      piVar2 = (int *)(this->_padding_ + uVar3 * 4);
      for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar2 = iVar1;
        piVar2 = piVar2 + 1;
      }
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
  }
  return;
}

// extend_default @ 14ff48200

void __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::extend_default
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this,ulong64 param_1)

{
  uchar *puVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    puVar1 = vector_storage<unsigned_char>::makefit1
                       ((vector_storage<unsigned_char> *)this,uVar2,this->m_size);
    if (puVar1 != (uchar *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(puVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// getsym @ 14ff48260

int __thiscall oo2net::SRCoder4U8::getsym(SRCoder4U8 *this,int param_1)

{
  return this->m_foursyms >> ((char)param_1 * '\b' & 0x1fU) & 0xff;
}

// inc_count @ 14ff48280

void __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::inc_count
          (O0ArithCoder<unsigned_short,256> *this,int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  iVar1 = (uint)this->m_counts[param_1] + param_2;
  if (0xffff < iVar1) {
    uVar4 = 0;
    this->m_sum = 0;
    rrMemSetZero(this->m_sum16s,0x40);
    do {
      uVar3 = (this->m_counts[uVar4] >> 1) + 1;
      uVar2 = uVar4 >> 4;
      this->m_counts[uVar4] = uVar3;
      uVar4 = uVar4 + 1;
      this->m_sum16s[uVar2] = this->m_sum16s[uVar2] + (uint)uVar3;
      this->m_sum = this->m_sum + (uint)uVar3;
    } while ((longlong)uVar4 < 0x100);
    iVar1 = (uint)this->m_counts[param_1] + param_2;
  }
  this->m_counts[param_1] = (ushort)iVar1;
  this->m_sum16s[(int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4] =
       this->m_sum16s[(int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4] + param_2;
  this->m_sum = this->m_sum + param_2;
  return;
}

// init @ 14ff48350

void __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::init(O0ArithCoder<unsigned_short,256> *this)

{
  longlong lVar1;
  O0ArithCoder<unsigned_short,256> *pOVar2;
  
  pOVar2 = this;
  for (lVar1 = 0x100; lVar1 != 0; lVar1 = lVar1 + -1) {
    pOVar2->m_counts[0] = 1;
    pOVar2 = (O0ArithCoder<unsigned_short,256> *)(pOVar2->m_counts + 1);
  }
  this->m_sum16s[0] = 0x10;
  this->m_sum16s[1] = 0x10;
  this->m_sum16s[2] = 0x10;
  this->m_sum16s[3] = 0x10;
  this->m_sum16s[4] = 0x10;
  this->m_sum16s[5] = 0x10;
  this->m_sum16s[6] = 0x10;
  this->m_sum16s[7] = 0x10;
  this->m_sum16s[8] = 0x10;
  this->m_sum16s[9] = 0x10;
  this->m_sum16s[10] = 0x10;
  this->m_sum16s[0xb] = 0x10;
  this->m_sum16s[0xc] = 0x10;
  this->m_sum16s[0xd] = 0x10;
  this->m_sum16s[0xe] = 0x10;
  this->m_sum16s[0xf] = 0x10;
  this->m_sum = 0x100;
  return;
}

// init @ 14ff48430

void __thiscall oo2net::O1ACNOSBValueCoder<9,3>::init(O1ACNOSBValueCoder<9,3> *this)

{
  longlong lVar1;
  O1ACNOSBValueCoder<9,3> *pOVar2;
  O1BinaryArithCoder<9,4> *pOVar3;
  O1BinaryArithCoder<9,1> *pOVar4;
  
  pOVar2 = this;
  for (lVar1 = 0x600; lVar1 != 0; lVar1 = lVar1 + -1) {
    pOVar2->m_o1ac_unary[0].bin[0] = 0x400;
    pOVar2 = (O1ACNOSBValueCoder<9,3> *)(pOVar2->m_o1ac_unary[0].bin + 1);
  }
  pOVar3 = &this->m_o1ac_nosb;
  for (lVar1 = 0x1e00; lVar1 != 0; lVar1 = lVar1 + -1) {
    pOVar3->bin[0] = 0x400;
    pOVar3 = (O1BinaryArithCoder<9,4> *)(pOVar3->bin + 1);
  }
  pOVar4 = &this->m_o1ac_firstbit;
  for (lVar1 = 0x200; lVar1 != 0; lVar1 = lVar1 + -1) {
    pOVar4->bin[0] = 0x400;
    pOVar4 = (O1BinaryArithCoder<9,1> *)(pOVar4->bin + 1);
  }
  return;
}

// init @ 14ff48480

void __thiscall oo2net::O1BinaryArithCoder<9,1>::init(O1BinaryArithCoder<9,1> *this)

{
  longlong lVar1;
  
  for (lVar1 = 0x200; lVar1 != 0; lVar1 = lVar1 + -1) {
    this->bin[0] = 0x400;
    this = (O1BinaryArithCoder<9,1> *)((longlong)this + 2);
  }
  return;
}

// init @ 14ff484b0

void __thiscall oo2net::O1BinaryArithCoder<9,4>::init(O1BinaryArithCoder<9,4> *this)

{
  longlong lVar1;
  
  for (lVar1 = 0x1e00; lVar1 != 0; lVar1 = lVar1 + -1) {
    this->bin[0] = 0x400;
    this = (O1BinaryArithCoder<9,4> *)((longlong)this + 2);
  }
  return;
}

// init @ 14ff484e0

void __thiscall oo2net::O1BinaryArithCoder<12,1>::init(O1BinaryArithCoder<12,1> *this)

{
  longlong lVar1;
  
  for (lVar1 = 0x1000; lVar1 != 0; lVar1 = lVar1 + -1) {
    this->bin[0] = 0x400;
    this = (O1BinaryArithCoder<12,1> *)((longlong)this + 2);
  }
  return;
}

// init @ 14ff48510

void __thiscall oo2net::O1SRCoder4U8<12>::init(O1SRCoder4U8<12> *this)

{
  ushort *puVar1;
  longlong lVar2;
  
  puVar1 = this->m_o1[0].m_probs;
  lVar2 = 0x1000;
  do {
    *(undefined4 *)(puVar1 + -1) = 0x7f80400;
    puVar1[1] = 0x7f8;
    puVar1[2] = 0x7f8;
    ((SRCoder4U8 *)(puVar1 + -3))->m_foursyms = 0xff200a;
    puVar1 = puVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  O0ArithCoder<unsigned_short,256>::init(&this->m_o0);
  return;
}

// init @ 14ff48560

void __thiscall
oo2net::O1SRCoder<8,8,256,unsigned_char>::init(O1SRCoder<8,8,256,unsigned_char> *this)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  
  puVar2 = this->m_o1[0].m_probs + 7;
  lVar3 = 0x100;
  do {
    lVar1 = 0;
    do {
      puVar2[lVar1 + -7] = 0x7f8;
      *(char *)((longlong)puVar2 + lVar1 + 2) = (char)lVar1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < 8);
    *puVar2 = (ushort)((uint)*puVar2 * 3 + 0x400 >> 2);
    puVar2 = puVar2 + 0xc;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  O0ArithCoder<unsigned_short,256>::init(&this->m_o0);
  return;
}

// init @ 14ff485e0

void __thiscall oo2net::SRCoder<8,unsigned_char>::init(SRCoder<8,unsigned_char> *this)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    this->m_probs[lVar1] = 0x7f8;
    this->m_syms[lVar1] = (uchar)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 < 8);
  this->m_probs[7] = (ushort)((uint)this->m_probs[7] * 3 + 0x400 >> 2);
  return;
}

// init @ 14ff48630

void __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::init
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff48640

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::init
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff48650

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::init
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff48660

void __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::init
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff48670

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::init
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff48680

void __thiscall oo2net::vector_storage<unsigned_char>::init(vector_storage<unsigned_char> *this)

{
  this->m_begin = (uchar *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff48690

void __thiscall oo2net::vector_storage<int>::init(vector_storage<int> *this)

{
  this->m_begin = (int *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff486a0

void __thiscall
oo2net::vector_storage<unsigned_char_const_*>::init(vector_storage<unsigned_char_const_*> *this)

{
  this->m_begin = (uchar **)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff486b0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::init(vector_storage<oo2net::SuffixTrieMatch> *this)

{
  this->m_begin = (SuffixTrieMatch *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff486c0

void __thiscall
oo2net::vector_storage<oo2net::rated_packet>::init(vector_storage<oo2net::rated_packet> *this)

{
  this->m_begin = (rated_packet *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff486d0

void __thiscall oo2net::SRCoder4U8::init(SRCoder4U8 *this)

{
  this->m_probany = 0x400;
  this->m_probs[0] = 0x7f8;
  this->m_probs[1] = 0x7f8;
  this->m_probs[2] = 0x7f8;
  this->m_foursyms = 0xff200a;
  return;
}

// lzp_copymatch @ 14ff48700

void __cdecl oo2net::lzp_copymatch(uchar *param_1,uchar *param_2,long64 param_3)

{
  uchar uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uchar *puVar5;
  ulonglong uVar6;
  uchar *puVar7;
  
  *param_1 = *param_2;
  if (((param_3 != 1) && (param_1[1] = param_2[1], param_3 != 2)) &&
     (param_1[2] = param_2[2], param_3 != 3)) {
    puVar7 = param_2 + 4;
    param_1[3] = param_2[3];
    puVar5 = param_1 + 4;
    uVar6 = (ulonglong)((uint)(param_3 + -4 >> 0x3f) & 3);
    lVar3 = param_3 + -4 + uVar6;
    lVar4 = ((uint)lVar3 & 3) - uVar6;
    lVar3 = lVar3 >> 2;
    if (0 < lVar3) {
      do {
        uVar2 = *(undefined4 *)puVar7;
        puVar7 = puVar7 + 4;
        *(undefined4 *)puVar5 = uVar2;
        puVar5 = puVar5 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (0 < lVar4) {
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}

// lzp_copymatch_basic @ 14ff487a0

void __cdecl oo2net::lzp_copymatch_basic(uchar *param_1,uchar *param_2,long64 param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = param_1[lVar1];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// lzp_getmatchlen @ 14ff487e0

long64 __cdecl oo2net::lzp_getmatchlen(uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 + 0x10 < param_2) {
    if (*(ulonglong *)param_1 != *(ulonglong *)param_3) {
      uVar2 = *(ulonglong *)param_3 ^ *(ulonglong *)param_1;
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return uVar1 >> 3;
    }
    if (*(ulonglong *)(param_1 + 8) != *(ulonglong *)(param_3 + 8)) {
      uVar2 = *(ulonglong *)(param_3 + 8) ^ *(ulonglong *)(param_1 + 8);
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return (ulonglong)(((uint)(uVar1 >> 3) & 0x1fffffff) + 8);
    }
    lVar3 = 0x10;
    lVar6 = (longlong)param_2 - (longlong)param_1;
    if ((longlong)param_4 - (longlong)param_3 <= (longlong)param_2 - (longlong)param_1) {
      lVar6 = (longlong)param_4 - (longlong)param_3;
    }
    if (0x10 < lVar6) {
      puVar4 = param_3 + 0x10;
      while (puVar4[(longlong)param_1 - (longlong)param_3] == *puVar4) {
        lVar3 = lVar3 + 1;
        puVar4 = puVar4 + 1;
        if (lVar6 <= lVar3) {
          return lVar3;
        }
      }
    }
  }
  else {
    lVar3 = 1;
    lVar6 = (longlong)param_2 - (longlong)param_1;
    if ((longlong)param_4 - (longlong)param_3 <= (longlong)param_2 - (longlong)param_1) {
      lVar6 = (longlong)param_4 - (longlong)param_3;
    }
    if (1 < lVar6) {
      lVar5 = (longlong)param_1 - (longlong)param_3;
      do {
        param_3 = param_3 + 1;
        if (param_3[lVar5] != *param_3) {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar6);
    }
  }
  return lVar3;
}

// makefit1 @ 14ff48890

uchar * __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::makefit1
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this,ulong64 param_1)

{
  uchar *puVar1;
  
  puVar1 = vector_storage<unsigned_char>::makefit1
                     ((vector_storage<unsigned_char> *)this,param_1,this->m_size);
  return puVar1;
}

// makefit1 @ 14ff488a0

int * __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::makefit1
          (vector_base<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  
  piVar1 = vector_storage<int>::makefit1((vector_storage<int> *)this,param_1,this->m_size);
  return piVar1;
}

// makefit1 @ 14ff488b0

uchar ** __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::makefit1
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  uchar **ppuVar1;
  
  ppuVar1 = vector_storage<unsigned_char_const_*>::makefit1
                      ((vector_storage<unsigned_char_const_*> *)this,param_1,this->m_size);
  return ppuVar1;
}

// makefit1 @ 14ff488c0

rated_packet * __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::makefit1
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  rated_packet *prVar1;
  
  prVar1 = vector_storage<oo2net::rated_packet>::makefit1
                     ((vector_storage<oo2net::rated_packet> *)this,param_1,this->m_size);
  return prVar1;
}

// makefit1 @ 14ff488e0

uchar * __thiscall
oo2net::vector_storage<unsigned_char>::makefit1
          (vector_storage<unsigned_char> *this,ulong64 param_1,ulong64 param_2)

{
  uchar *puVar1;
  ulonglong uVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulonglong uVar5;
  
  puVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x2000000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 + 7 & 0xfffffffffffffff8;
  puVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(uVar5,0x10);
  if (puVar3 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(uVar5);
  }
  if (param_2 != 0) {
    puVar4 = puVar3;
    do {
      if (puVar4 != (uchar *)0x0) {
        *puVar4 = puVar4[(longlong)puVar1 - (longlong)puVar3];
      }
      puVar4 = puVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = puVar3;
  this->m_capacity = uVar5;
  return puVar1;
}

// makefit1 @ 14ff489c0

int * __thiscall
oo2net::vector_storage<int>::makefit1(vector_storage<int> *this,ulong64 param_1,ulong64 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  
  piVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x800000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 4;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14ff48a43;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x3ffffffffffffc00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x3fffffffffffc000;
  }
  param_1 = uVar5 >> 2 & uVar2;
LAB_14ff48a43:
  piVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 4,0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 4);
  }
  if (param_2 != 0) {
    piVar4 = piVar3;
    do {
      if (piVar4 != (int *)0x0) {
        *piVar4 = *(int *)(((longlong)piVar1 - (longlong)piVar3) + (longlong)piVar4);
      }
      piVar4 = piVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = piVar3;
  this->m_capacity = param_1;
  return piVar1;
}

// makefit1 @ 14ff48ae0

uchar ** __thiscall
oo2net::vector_storage<unsigned_char_const_*>::makefit1
          (vector_storage<unsigned_char_const_*> *this,ulong64 param_1,ulong64 param_2)

{
  uchar **ppuVar1;
  ulonglong uVar2;
  uchar **ppuVar3;
  uchar **ppuVar4;
  ulonglong uVar5;
  
  ppuVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x400000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 8;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14ff48b63;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff48b63:
  ppuVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (ppuVar3 == (uchar **)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    ppuVar4 = ppuVar3;
    do {
      if (ppuVar4 != (uchar **)0x0) {
        *ppuVar4 = *(uchar **)(((longlong)ppuVar1 - (longlong)ppuVar3) + (longlong)ppuVar4);
      }
      ppuVar4 = ppuVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = ppuVar3;
  this->m_capacity = param_1;
  return ppuVar1;
}

// makefit1 @ 14ff48c00

rated_packet * __thiscall
oo2net::vector_storage<oo2net::rated_packet>::makefit1
          (vector_storage<oo2net::rated_packet> *this,ulong64 param_1,ulong64 param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  rated_packet *prVar3;
  double dVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  rated_packet *prVar8;
  rated_packet *prVar9;
  longlong lVar10;
  
  prVar3 = this->m_begin;
  uVar6 = this->m_capacity + 0x100000;
  uVar7 = this->m_capacity * 2;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if (param_1 < uVar7) {
    param_1 = uVar7;
  }
  uVar6 = param_1 * 0x20;
  if (uVar6 < 0x10001) {
    if (uVar6 < 0x200) goto LAB_14ff48c82;
    uVar6 = uVar6 + 0xfff;
    uVar7 = 0x7ffffffffffff80;
  }
  else {
    uVar6 = uVar6 + 0xffff;
    uVar7 = 0x7fffffffffff800;
  }
  param_1 = uVar6 >> 5 & uVar7;
LAB_14ff48c82:
  prVar8 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 << 5,0x10);
  if (prVar8 == (rated_packet *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 << 5);
  }
  if (param_2 != 0) {
    lVar10 = (longlong)prVar3 - (longlong)prVar8;
    prVar9 = prVar8;
    do {
      if (prVar9 != (rated_packet *)0x0) {
        pdVar1 = (double *)(lVar10 + (longlong)prVar9);
        dVar4 = pdVar1[1];
        prVar9->rating = *pdVar1;
        prVar9->base_rating = dVar4;
        puVar2 = (undefined8 *)(lVar10 + 0x10 + (longlong)prVar9);
        uVar5 = puVar2[1];
        prVar9->packet_ptr = (void *)*puVar2;
        *(undefined8 *)&prVar9->packet_size = uVar5;
      }
      prVar9 = prVar9 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = prVar8;
  this->m_capacity = param_1;
  return prVar3;
}

// makefit2 @ 14ff48d40

void __thiscall
oo2net::vector_storage<unsigned_char>::makefit2
          (vector_storage<unsigned_char> *this,uchar *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (uchar *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff48d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff48d60

void __thiscall
oo2net::vector_storage<int>::makefit2
          (vector_storage<int> *this,int *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff48d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff48d80

void __thiscall
oo2net::vector_storage<unsigned_char_const_*>::makefit2
          (vector_storage<unsigned_char_const_*> *this,uchar **param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (uchar **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff48d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff48da0

void __thiscall
oo2net::vector_storage<oo2net::rated_packet>::makefit2
          (vector_storage<oo2net::rated_packet> *this,rated_packet *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff48da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// myArithEncodeRenorm2 @ 14ff48dc0

void __cdecl oo2net::myArithEncodeRenorm2(rrArithEncoder *param_1)

{
  uint uVar1;
  
  if (param_1->range < 0x1000000) {
    uVar1 = param_1->low;
    if (param_1->range < 0x10000) {
      *(uint *)param_1->ptr =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      param_1->ptr = param_1->ptr + 2;
      param_1->low = param_1->low << 0x10;
      param_1->range = param_1->range << 0x10;
      return;
    }
    *param_1->ptr = (char)(uVar1 >> 0x18);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
  }
  return;
}

// needmakefit @ 14ff48e10

bool __thiscall
oo2net::vector_storage<unsigned_char>::needmakefit
          (vector_storage<unsigned_char> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff48e20

bool __thiscall oo2net::vector_storage<int>::needmakefit(vector_storage<int> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff48e30

bool __thiscall
oo2net::vector_storage<unsigned_char_const_*>::needmakefit
          (vector_storage<unsigned_char_const_*> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff48e40

bool __thiscall
oo2net::vector_storage<oo2net::rated_packet>::needmakefit
          (vector_storage<oo2net::rated_packet> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// normalize_counts @ 14ff48e60

int __cdecl
oo2net::normalize_counts
          (int param_1,uint *param_2,int param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_1 < 6) {
    iVar1 = normalize_counts_v5(param_2,param_3,param_4,param_5,param_6);
    return iVar1;
  }
  iVar1 = normalize_counts_v6(param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}

// oo64toA @ 14ff48eb0

long64 __cdecl oo2net::oo64toA(long64 param_1)

{
  return param_1;
}

// push_back @ 14ff48ec0

void __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::push_back
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          uchar **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  uchar **ppuVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    ppuVar3 = vector_storage<unsigned_char_const_*>::makefit1
                        ((vector_storage<unsigned_char_const_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (ppuVar3 != (uchar **)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(ppuVar3);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
  }
  return;
}

// push_back @ 14ff48f60

void __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::push_back
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  rated_packet *prVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    prVar3 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (prVar3 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff48fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar3);
      return;
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
  }
  return;
}

// quantize_dzi @ 14ff49000

int __cdecl oo2net::quantize_dzi(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  iVar1 = (param_1 ^ uVar2) - uVar2;
  if (iVar1 <= param_2) {
    return 0;
  }
  return ((iVar1 / param_2) * 2 + -1) - uVar2;
}

// release @ 14ff49040

void __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::release
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff49080

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::release
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff490c0

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::release
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff49100

void __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
release(vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff49140

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::release
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff49180

void __thiscall oo2net::vector_storage<unsigned_char>::release(vector_storage<unsigned_char> *this)

{
  if (this->m_begin != (uchar *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (uchar *)0x0;
  return;
}

// release @ 14ff491c0

void __thiscall oo2net::vector_storage<int>::release(vector_storage<int> *this)

{
  if (this->m_begin != (int *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (int *)0x0;
  return;
}

// release @ 14ff49200

void __thiscall
oo2net::vector_storage<unsigned_char_const_*>::release(vector_storage<unsigned_char_const_*> *this)

{
  if (this->m_begin != (uchar **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (uchar **)0x0;
  return;
}

// release @ 14ff49240

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::release
          (vector_storage<oo2net::SuffixTrieMatch> *this)

{
  if (this->m_begin != (SuffixTrieMatch *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixTrieMatch *)0x0;
  return;
}

// release @ 14ff49280

void __thiscall
oo2net::vector_storage<oo2net::rated_packet>::release(vector_storage<oo2net::rated_packet> *this)

{
  if (this->m_begin != (rated_packet *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (rated_packet *)0x0;
  return;
}

// renorm @ 14ff492c0

void __thiscall
oo2net::O0ArithCoder<unsigned_short,256>::renorm(O0ArithCoder<unsigned_short,256> *this)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  this->m_sum = 0;
  rrMemSetZero(this->m_sum16s,0x40);
  do {
    uVar2 = (this->m_counts[uVar3] >> 1) + 1;
    uVar1 = uVar3 >> 4;
    this->m_counts[uVar3] = uVar2;
    uVar3 = uVar3 + 1;
    this->m_sum16s[uVar1] = this->m_sum16s[uVar1] + (uint)uVar2;
    this->m_sum = this->m_sum + (uint)uVar2;
  } while ((longlong)uVar3 < 0x100);
  return;
}

// reserve @ 14ff49340

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::reserve
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  uchar **ppuVar1;
  
  if ((ulonglong)this->_padding_ < param_1) {
    ppuVar1 = vector_storage<unsigned_char_const_*>::makefit1
                        ((vector_storage<unsigned_char_const_*> *)this,param_1,this->m_size);
    if (ppuVar1 != (uchar **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff49360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppuVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff49380

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::reserve
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  rated_packet *prVar1;
  
  if ((ulonglong)this->_padding_ < param_1) {
    prVar1 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,param_1,this->m_size);
    if (prVar1 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff493a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff493c0

void __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::reserve
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  uchar **ppuVar1;
  
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    ppuVar1 = vector_storage<unsigned_char_const_*>::makefit1
                        ((vector_storage<unsigned_char_const_*> *)this,param_1,
                         *(ulong64 *)&this->field_0x10);
    if (ppuVar1 != (uchar **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff493e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppuVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff49400

void __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::reserve
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  rated_packet *prVar1;
  
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    prVar1 = vector_storage<oo2net::rated_packet>::makefit1
                       ((vector_storage<oo2net::rated_packet> *)this,param_1,
                        *(ulong64 *)&this->field_0x10);
    if (prVar1 != (rated_packet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff49420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(prVar1);
      return;
    }
  }
  return;
}

// resize @ 14ff49440

void __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::resize
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  uchar *puVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    puVar2 = vector_storage<unsigned_char>::makefit1
                       ((vector_storage<unsigned_char> *)this,param_1,uVar1);
    if (puVar2 != (uchar *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(puVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14ff494a0

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::resize
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  
  uVar5 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar5) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  lVar6 = param_1 - uVar5;
  if (*(ulonglong *)&this->field_0x8 < uVar5 + lVar6) {
    piVar2 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar5 + lVar6,uVar5);
    lVar4 = *(longlong *)&this->field_0x10;
    if (lVar6 != 0) {
      iVar1 = *param_2;
      piVar7 = (int *)(*(longlong *)this + lVar4 * 4);
      for (lVar3 = lVar6; lVar3 != 0; lVar3 = lVar3 + -1) {
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
      }
      lVar4 = *(longlong *)&this->field_0x10;
    }
    *(longlong *)&this->field_0x10 = lVar4 + lVar6;
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff49537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(piVar2);
      return;
    }
  }
  else {
    if (lVar6 != 0) {
      iVar1 = *param_2;
      piVar2 = (int *)(*(longlong *)this + uVar5 * 4);
      for (lVar4 = lVar6; lVar4 != 0; lVar4 = lVar4 + -1) {
        *piVar2 = iVar1;
        piVar2 = piVar2 + 1;
      }
      uVar5 = *(ulonglong *)&this->field_0x10;
    }
    *(ulonglong *)&this->field_0x10 = uVar5 + lVar6;
  }
  return;
}

// rrArithBinaryModelDecode @ 14ff49580

int __cdecl oo2net::rrArithBinaryModelDecode(rrArithDecoder *param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (param_1->range >> 0xb) * (uint)*param_2;
  if (uVar2 <= param_1->code) {
    param_1->code = param_1->code - uVar2;
    param_1->range = param_1->range - uVar2;
    *param_2 = *param_2 - (*param_2 >> 4);
    uVar2 = param_1->range;
    if (uVar2 < 0x1000000) {
      pbVar3 = param_1->ptr;
      do {
        param_1->code = param_1->code << 8;
        uVar2 = uVar2 << 8;
        param_1->range = uVar2;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        param_1->code = param_1->code | (uint)bVar1;
        param_1->ptr = pbVar3;
      } while (uVar2 < 0x1000000);
    }
    return 1;
  }
  param_1->range = uVar2;
  *param_2 = (short)((int)(0x800 - (uint)*param_2) >> 4) + *param_2;
  uVar2 = param_1->range;
  if (uVar2 < 0x1000000) {
    pbVar3 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar2 = uVar2 << 8;
      param_1->range = uVar2;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar3;
    } while (uVar2 < 0x1000000);
  }
  return 0;
}

// rrArithBinaryModelEncode @ 14ff49660

void __cdecl oo2net::rrArithBinaryModelEncode(rrArithEncoder *param_1,int param_2,ushort *param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uint uVar3;
  
  uVar3 = (param_1->range >> 0xb) * (uint)*param_3;
  if (param_2 == 0) {
    param_1->range = uVar3;
    *param_3 = (short)((int)(0x800 - (uint)*param_3) >> 4) + *param_3;
    uVar3 = param_1->range;
    while (uVar3 < 0x1000000) {
      *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
      param_1->ptr = param_1->ptr + 1;
      param_1->low = param_1->low << 8;
      param_1->range = param_1->range << 8;
      uVar3 = param_1->range;
    }
  }
  else {
    param_1->low = param_1->low + uVar3;
    param_1->range = param_1->range - uVar3;
    *param_3 = *param_3 - (*param_3 >> 4);
    if (param_1->low < uVar3) {
      puVar2 = param_1->ptr + -1;
      uVar1 = *puVar2;
      while (uVar1 == 0xff) {
        *puVar2 = '\0';
        puVar2 = puVar2 + -1;
        uVar1 = *puVar2;
      }
      *puVar2 = uVar1 + '\x01';
    }
    if (param_1->range < 0x1000000) {
      do {
        *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
        param_1->ptr = param_1->ptr + 1;
        param_1->low = param_1->low << 8;
        param_1->range = param_1->range << 8;
      } while (param_1->range < 0x1000000);
      return;
    }
  }
  return;
}

// rrArithBinaryModelRenorm @ 14ff49740

void __cdecl oo2net::rrArithBinaryModelRenorm(ushort *param_1)

{
  *param_1 = (ushort)((uint)*param_1 * 3 + 0x400 >> 2);
  return;
}

// rrArithDecodePeek @ 14ff49760

uint __cdecl oo2net::rrArithDecodePeek(rrArithDecoder *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)param_1->range / (ulonglong)param_2;
  param_1->range = (uint)uVar1;
  uVar3 = (uint)(param_1->code / uVar1);
  uVar2 = param_2 - 1;
  if (uVar3 < param_2) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// rrArithDecodePeekPow2 @ 14ff49790

uint __cdecl oo2net::rrArithDecodePeekPow2(rrArithDecoder *param_1,uint param_2)

{
  param_1->range = param_1->range >> ((byte)param_2 & 0x1f);
  return param_1->code / param_1->range;
}

// rrArithDecodeRemove @ 14ff497c0

void __cdecl
oo2net::rrArithDecodeRemove(rrArithDecoder *param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = param_1->range * param_3;
  param_1->code = param_1->code - param_1->range * param_2;
  param_1->range = uVar3;
  if (uVar3 < 0x1000000) {
    pbVar2 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar3 = uVar3 << 8;
      param_1->range = uVar3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar2;
    } while (uVar3 < 0x1000000);
  }
  return;
}

// rrArithDecodeRemovePow2_NoRenorm @ 14ff49810

void __cdecl
oo2net::rrArithDecodeRemovePow2_NoRenorm
          (rrArithDecoder *param_1,uint param_2,uint param_3,uint param_4)

{
  param_1->code = param_1->code - param_1->range * param_2;
  param_1->range = param_1->range * param_3;
  return;
}

// rrArithDecodeRenorm @ 14ff49840

void __cdecl oo2net::rrArithDecodeRenorm(rrArithDecoder *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = param_1->range;
  if (uVar2 < 0x1000000) {
    pbVar3 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar2 = uVar2 << 8;
      param_1->range = uVar2;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar3;
    } while (uVar2 < 0x1000000);
  }
  return;
}

// rrArithEncodePropagateCarry @ 14ff49880

void __cdecl oo2net::rrArithEncodePropagateCarry(rrArithEncoder *param_1)

{
  uchar uVar1;
  uchar *puVar2;
  
  puVar2 = param_1->ptr + -1;
  uVar1 = param_1->ptr[-1];
  while (uVar1 == 0xff) {
    *puVar2 = '\0';
    puVar2 = puVar2 + -1;
    uVar1 = *puVar2;
  }
  *puVar2 = uVar1 + '\x01';
  return;
}

// rrArithEncodeRange @ 14ff498c0

void __cdecl
oo2net::rrArithEncodeRange(rrArithEncoder *param_1,uint param_2,uint param_3,uint param_4)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar2 = param_1->low;
  uVar3 = param_1->range / param_4;
  param_1->range = uVar3 * param_3;
  uVar3 = uVar3 * param_2 + uVar2;
  param_1->low = uVar3;
  if (uVar3 < uVar2) {
    puVar4 = param_1->ptr + -1;
    uVar1 = *puVar4;
    while (uVar1 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 + '\x01';
  }
  uVar2 = param_1->range;
  while (uVar2 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar2 = param_1->range;
  }
  return;
}

// rrArithEncodeRangePow2 @ 14ff49950

void __cdecl
oo2net::rrArithEncodeRangePow2(rrArithEncoder *param_1,uint param_2,uint param_3,uint param_4)

{
  uchar uVar1;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  
  uVar2 = param_1->low;
  uVar4 = param_1->range >> ((byte)param_4 & 0x1f);
  param_1->range = uVar4 * param_3;
  uVar4 = uVar4 * param_2 + uVar2;
  param_1->low = uVar4;
  if (uVar4 < uVar2) {
    puVar3 = param_1->ptr + -1;
    uVar1 = *puVar3;
    while (uVar1 == 0xff) {
      *puVar3 = '\0';
      puVar3 = puVar3 + -1;
      uVar1 = *puVar3;
    }
    *puVar3 = uVar1 + '\x01';
  }
  uVar2 = param_1->range;
  while (uVar2 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar2 = param_1->range;
  }
  return;
}

// rrArithEncodeRangePow2_NoRenorm @ 14ff499e0

void __cdecl
oo2net::rrArithEncodeRangePow2_NoRenorm
          (rrArithEncoder *param_1,uint param_2,uint param_3,uint param_4)

{
  uchar uVar1;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  
  uVar2 = param_1->low;
  uVar4 = param_1->range >> ((byte)param_4 & 0x1f);
  param_1->range = uVar4 * param_3;
  uVar4 = uVar4 * param_2 + uVar2;
  param_1->low = uVar4;
  if (uVar4 < uVar2) {
    puVar3 = param_1->ptr + -1;
    uVar1 = *puVar3;
    while (uVar1 == 0xff) {
      *puVar3 = '\0';
      puVar3 = puVar3 + -1;
      uVar1 = *puVar3;
    }
    *puVar3 = uVar1 + '\x01';
  }
  return;
}

// rrArithEncodeRenorm @ 14ff49a40

void __cdecl oo2net::rrArithEncodeRenorm(rrArithEncoder *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->range;
  while (uVar1 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar1 = param_1->range;
  }
  return;
}

// rrArithGetBits @ 14ff49a80

uint __cdecl oo2net::rrArithGetBits(rrArithDecoder *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  param_1->range = param_1->range >> ((byte)param_2 & 0x1f);
  uVar4 = param_1->range;
  uVar2 = param_1->code / uVar4;
  param_1->code = param_1->code - uVar4 * uVar2;
  if (uVar4 < 0x1000000) {
    pbVar3 = param_1->ptr;
    do {
      param_1->code = param_1->code << 8;
      uVar4 = uVar4 << 8;
      param_1->range = uVar4;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      param_1->code = param_1->code | (uint)bVar1;
      param_1->ptr = pbVar3;
    } while (uVar4 < 0x1000000);
  }
  return uVar2;
}

// rrArithGetBits_NoRenorm @ 14ff49b00

uint __cdecl oo2net::rrArithGetBits_NoRenorm(rrArithDecoder *param_1,uint param_2)

{
  uint uVar1;
  
  param_1->range = param_1->range >> ((byte)param_2 & 0x1f);
  uVar1 = param_1->code / param_1->range;
  param_1->code = param_1->code - param_1->range * uVar1;
  return uVar1;
}

// rrArithPutBits @ 14ff49b30

void __cdecl oo2net::rrArithPutBits(rrArithEncoder *param_1,uint param_2,uint param_3)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar2 = param_1->low;
  param_1->range = param_1->range >> ((byte)param_3 & 0x1f);
  uVar3 = param_1->range * param_2 + uVar2;
  param_1->low = uVar3;
  if (uVar3 < uVar2) {
    puVar4 = param_1->ptr + -1;
    uVar1 = *puVar4;
    while (uVar1 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
    }
    *puVar4 = uVar1 + '\x01';
  }
  uVar2 = param_1->range;
  while (uVar2 < 0x1000000) {
    *param_1->ptr = *(uchar *)((longlong)&param_1->low + 3);
    param_1->ptr = param_1->ptr + 1;
    param_1->low = param_1->low << 8;
    param_1->range = param_1->range << 8;
    uVar2 = param_1->range;
  }
  return;
}

// rrClz32 @ 14ff49bb0

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCtz32 @ 14ff49bd0

uint __cdecl oo2net::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrCtz64 @ 14ff49be0

uint __cdecl oo2net::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14ff49bf0

uint __cdecl oo2net::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrGetBitLevel_V_NonZero @ 14ff49c00

uint __cdecl oo2net::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrPtrDiff32 @ 14ff49c10

int __cdecl oo2net::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14ff49c20

long64 __cdecl oo2net::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrRandStateMod @ 14ff49c30

uint __cdecl oo2net::rrRandStateMod(rrRandState *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = rrRandState32(param_1);
  return (uint)((ulonglong)uVar1 * (ulonglong)param_2 >> 0x20);
}

// rrRandStateUnitFloat @ 14ff49c60

float __cdecl oo2net::rrRandStateUnitFloat(rrRandState *param_1)

{
  uint uVar1;
  
  uVar1 = rrRandState32(param_1);
  return (float)uVar1 * __real_2f800000;
}

// rrVB_Get32BE_Masked @ 14ff49ca0

uint __cdecl oo2net::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  uVar3 = 0;
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
  }
  if (lVar1 == 1 || lVar1 + -1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  if (lVar1 == 2 || lVar1 + -2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)param_1[2];
  }
  if (lVar1 != 3 && -1 < lVar1 + -3) {
    uVar3 = (uint)param_1[3];
  }
  return ((uVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar3;
}

// rrVB_Get64BE_Masked @ 14ff49d20

ulong64 __cdecl oo2net::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  lVar6 = (longlong)param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < lVar6) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}

// set_from_histo @ 14ff49e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::set_from_histo
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,uint *param_1,
          int param_2)

{
  uint uVar1;
  undefined1 auStackY_448 [32];
  uint local_418 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_448;
  uVar1 = rrSumOfHistogram(param_1,0x100);
  if (param_2 < 6) {
    normalize_counts_v5(local_418,0x1000,param_1,uVar1,0x100);
  }
  else {
    normalize_counts_v6(local_418,0x1000,param_1,uVar1,0x100);
  }
  set_from_histo_normalized(this,local_418);
  return;
}

// set_from_histo @ 14ff49ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::set_from_histo
          (O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *this,uint *param_1,
          int param_2)

{
  uint uVar1;
  undefined1 auStackY_4b8 [32];
  uint local_488 [284];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  uVar1 = rrSumOfHistogram(param_1,0x119);
  if (param_2 < 6) {
    normalize_counts_v5(local_488,0x1000,param_1,uVar1,0x119);
  }
  else {
    normalize_counts_v6(local_488,0x1000,param_1,uVar1,0x119);
  }
  set_from_histo_normalized(this,local_488);
  return;
}

// set_from_histo_normalized @ 14ff49f40

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::set_from_histo_normalized
          (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this,uint *param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  uchar *puVar8;
  int iVar9;
  
  iVar6 = 0;
  this->m_cumprobs[0] = 0;
  lVar7 = 0x40;
  puVar4 = this->m_cumprobs + 2;
  puVar5 = param_1 + 2;
  do {
    uVar2 = ((O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *)(puVar4 + -2))->
            m_cumprobs[0] + (short)puVar5[-2];
    puVar4[-1] = uVar2;
    uVar2 = uVar2 + (short)puVar5[-1];
    *puVar4 = uVar2;
    uVar2 = uVar2 + (short)*puVar5;
    puVar4[1] = uVar2;
    puVar4[2] = uVar2 + (short)puVar5[1];
    lVar7 = lVar7 + -1;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 4;
  } while (lVar7 != 0);
  if ((this->m_cumprobs[0x100] != 0x1000) &&
     (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\arith_o0.inl",0x35e,
                                 "oo2net::O0ArithCoderJump_Const<unsigned short,unsigned char,256,12>::set_from_histo_normalized"
                                 ,"m_cumprobs[t_alphabet] == c_sum"), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_cumprobs[0x101] = 0x1001;
  this->m_cumprobs[0x102] = 0x1001;
  this->m_cumprobs[0x107] = 0x1001;
  puVar8 = this->m_jumptable + 1;
  this->m_cumprobs[0x103] = 0x1001;
  this->m_cumprobs[0x104] = 0x1001;
  iVar9 = 0;
  this->m_cumprobs[0x105] = 0x1001;
  this->m_cumprobs[0x106] = 0x1001;
  iVar3 = 0x80;
  do {
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar9 * 0x40) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[-1] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + -0x40) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    *puVar8 = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[1] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x40) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[2] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x80) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[3] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0xc0) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[4] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x100) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[5] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x140) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[6] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x180) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[7] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x1c0) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[8] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x200) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[9] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x240) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[10] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x280) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[0xb] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x2c0) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[0xc] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x300) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[0xd] = (uchar)iVar6;
    uVar2 = this->m_cumprobs[(longlong)iVar6 + 1];
    while ((int)(uint)uVar2 <= iVar3 + 0x340) {
      lVar7 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      uVar2 = this->m_cumprobs[lVar7 + 2];
    }
    puVar8[0xe] = (uchar)iVar6;
    iVar9 = iVar9 + 0x10;
    puVar8 = puVar8 + 0x10;
    iVar3 = iVar3 + 0x400;
  } while (iVar3 < 0x1080);
  return;
}

// set_from_histo_normalized @ 14ff4a340

void __thiscall
oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::set_from_histo_normalized
          (O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *this,uint *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  uVar6 = 0;
  this->m_cumprobs[0] = 0;
  uVar4 = uVar6;
  do {
    this->m_cumprobs[uVar4 + 1] = (short)param_1[uVar4] + this->m_cumprobs[uVar4];
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 0x119);
  if ((this->m_cumprobs[0x119] != 0x1000) &&
     (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\network\\arith_o0.inl",0x35e,
                                 "oo2net::O0ArithCoderJump_Const<unsigned short,unsigned short,281,12>::set_from_histo_normalized"
                                 ,"m_cumprobs[t_alphabet] == c_sum"), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->m_cumprobs[0x11a] = 0x1001;
  this->m_cumprobs[0x11b] = 0x1001;
  this->m_cumprobs[0x120] = 0x1001;
  puVar7 = this->m_jumptable + 1;
  this->m_cumprobs[0x11c] = 0x1001;
  this->m_cumprobs[0x11d] = 0x1001;
  this->m_cumprobs[0x11e] = 0x1001;
  this->m_cumprobs[0x11f] = 0x1001;
  iVar3 = 0x80;
  uVar4 = uVar6;
  do {
    uVar1 = this->m_cumprobs[(longlong)(int)uVar6 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= (int)uVar4 * 0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[-1] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + -0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    *puVar7 = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[1] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[2] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x80) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[3] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0xc0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[4] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x100) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[5] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x140) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[6] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x180) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[7] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x1c0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[8] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x200) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[9] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x240) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[10] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x280) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[0xb] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x2c0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[0xc] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x300) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[0xd] = (ushort)uVar6;
    uVar1 = this->m_cumprobs[(longlong)iVar5 + 1];
    while ((int)(uint)uVar1 <= iVar3 + 0x340) {
      iVar5 = (int)uVar6;
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = this->m_cumprobs[(longlong)iVar5 + 2];
    }
    puVar7[0xe] = (ushort)uVar6;
    uVar4 = (ulonglong)((int)uVar4 + 0x10);
    puVar7 = puVar7 + 0x10;
    iVar3 = iVar3 + 0x400;
  } while (iVar3 < 0x1080);
  return;
}

// shrink @ 14ff4a710

void __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::shrink
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff4a720

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::shrink
          (vector_base<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff4a730

void __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::shrink
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff4a740

void __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
shrink(vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> *this,
      ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff4a750

void __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::shrink
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size @ 14ff4a760

ulong64 __thiscall
oo2net::vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_>::size
          (vector_base<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  return this->m_size;
}

// size @ 14ff4a770

ulong64 __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::size
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  return this->m_size;
}

// size @ 14ff4a780

ulong64 __thiscall
oo2net::vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::size
          (vector_base<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return this->m_size;
}

// size @ 14ff4a790

ulong64 __thiscall
oo2net::vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::size
          (vector_base<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return this->m_size;
}

// size @ 14ff4a7a0

ulong64 __thiscall
oo2net::vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_>::size
          (vector_flex<unsigned_char,oo2net::vector_storage<unsigned_char>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff4a7b0

ulong64 __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::size
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff4a7c0

ulong64 __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::size
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// sizea @ 14ff4a7d0

long64 __thiscall
oo2net::vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_>::sizea
          (vector_flex<unsigned_char_const_*,oo2net::vector_storage<unsigned_char_const_*>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// sizea @ 14ff4a7e0

long64 __thiscall
oo2net::vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_>::sizea
          (vector_flex<oo2net::rated_packet,oo2net::vector_storage<oo2net::rated_packet>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// update_escape @ 14ff4a7f0

void __thiscall
oo2net::SRCoder<8,unsigned_char>::update_escape(SRCoder<8,unsigned_char> *this,int param_1)

{
  this->m_syms[7] = this->m_syms[6];
  this->m_syms[6] = (uchar)param_1;
  return;
}

// update_escape @ 14ff4a820

void __thiscall oo2net::SRCoder4U8::update_escape(SRCoder4U8 *this,int param_1)

{
  this->m_foursyms =
       (this->m_foursyms & 0xffff0000) << 8 | param_1 << 0x10 | this->m_foursyms & 0xffff;
  return;
}

// update_found @ 14ff4a850

void __thiscall
oo2net::SRCoder<8,unsigned_char>::update_found(SRCoder<8,unsigned_char> *this,int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (0 < param_1) {
    puVar2 = (undefined1 *)((longlong)this->m_probs + (longlong)param_1 + 0xf);
    do {
      param_1 = param_1 + -1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      puVar2 = puVar2 + -1;
    } while (0 < param_1);
  }
  return;
}

// update_found @ 14ff4a880

void __thiscall oo2net::SRCoder4U8::update_found(SRCoder4U8 *this,int param_1)

{
  uint uVar1;
  
  uVar1 = this->m_foursyms;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        this->m_foursyms = uVar1 << 8 | uVar1 >> 0x18;
        return;
      }
      this->m_foursyms = uVar1 >> 0x10 & 0xff | (uVar1 & 0xffff) << 8 | uVar1 & 0xff000000;
      return;
    }
    this->m_foursyms = uVar1 >> 8 & 0xff | (uVar1 & 0xff) << 8 | uVar1 & 0xffff0000;
  }
  return;
}

// OodleNetwork1TCP_Decode @ 14ff4a8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl
OodleNetwork1TCP_Decode
          (OodleNetwork1TCP_State *param_1,OodleNetwork1_Shared *param_2,void *param_3,
          long64 param_4,void *param_5,long64 param_6)

{
  byte *pbVar1;
  SRCoder<8,unsigned_char> *pSVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong lVar20;
  O0ArithCoder<unsigned_short,256> *pOVar21;
  byte *pbVar22;
  uchar *puVar23;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  longlong alStack_88 [2];
  rrArithDecoder rStack_78;
  uint uStack_60;
  ON1_HashEntry *pOStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  uchar *puStack_40;
  ulonglong uStack_38;
  
  puVar17 = auStack_a8;
  puVar16 = auStack_a8;
  uStack_38 = __security_cookie.value ^ (ulonglong)&rStack_78;
  if (param_6 < 7) {
    uStack_b0 = 0x14ff42da5;
    memcpy(param_5,param_3,param_6);
  }
  else if (param_4 < param_6) {
    uStack_b0 = 0x14ff42e25;
    oo2net::rrArithDecodeInit(&rStack_78,param_3);
    puVar23 = param_2->m_lzp_window;
    pOStack_58 = param_2->m_lzp_hash;
    pbStack_50 = param_2->m_lzp_window_end;
    uStack_60 = param_2->m_lzp_hash_mask;
    uStack_b0 = 0x14ff42e4e;
    puStack_40 = puVar23;
    uVar6 = oo2net::SRCoder<8,unsigned_char>::decode((SRCoder<8,unsigned_char> *)param_1,&rStack_78)
    ;
    pOVar21 = &(param_1->m_o1ac_lit_nomatch).m_o0;
    if (uVar6 == 0xffffffff) {
      uStack_b0 = 0x14ff42e72;
      uVar6 = oo2net::O0ArithCoder<unsigned_short,256>::
              decode_noadapt_with_excludelist<unsigned_char>
                        (pOVar21,&rStack_78,(param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms,8);
      uStack_b0 = 0x14ff42e85;
      oo2net::O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,uVar6,2);
      (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[7] =
           (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[6];
      (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[6] = (uchar)uVar6;
    }
    *(char *)param_5 = (char)uVar6;
    pSVar2 = (param_1->m_o1ac_lit_nomatch).m_o1 + (uVar6 & 0xff);
    uStack_b0 = 0x14ff42eb6;
    uVar6 = oo2net::SRCoder<8,unsigned_char>::decode(pSVar2,&rStack_78);
    if (uVar6 == 0xffffffff) {
      uStack_b0 = 0x14ff42ed1;
      uVar6 = oo2net::O0ArithCoder<unsigned_short,256>::
              decode_noadapt_with_excludelist<unsigned_char>(pOVar21,&rStack_78,pSVar2->m_syms,8);
      uStack_b0 = 0x14ff42ee5;
      oo2net::O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,uVar6,2);
      pSVar2->m_syms[7] = pSVar2->m_syms[6];
      pSVar2->m_syms[6] = (uchar)uVar6;
    }
    *(char *)((longlong)param_5 + 1) = (char)uVar6;
    pSVar2 = (param_1->m_o1ac_lit_nomatch).m_o1 + (uVar6 & 0xff);
    uStack_b0 = 0x14ff42f0d;
    iVar7 = oo2net::SRCoder<8,unsigned_char>::decode(pSVar2,&rStack_78);
    if (iVar7 == -1) {
      uStack_b0 = 0x14ff42f28;
      iVar7 = oo2net::O0ArithCoder<unsigned_short,256>::
              decode_noadapt_with_excludelist<unsigned_char>(pOVar21,&rStack_78,pSVar2->m_syms,8);
      uStack_b0 = 0x14ff42f3a;
      oo2net::O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,iVar7,2);
      pSVar2->m_syms[7] = pSVar2->m_syms[6];
      pSVar2->m_syms[6] = (uchar)iVar7;
    }
    pbVar22 = (byte *)((longlong)param_5 + param_6);
    *(char *)((longlong)param_5 + 2) = (char)iVar7;
    pbVar18 = (byte *)((longlong)param_5 + 3);
    pbStack_48 = pbVar22;
    if (pbVar18 < pbVar22 + -1) {
      pbVar1 = pbVar22 + -1;
      do {
        uVar6 = *(uint *)(pbVar18 + -3);
        uVar14 = (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = uVar14 * -0x61c8864f;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
        uVar8 = uVar6 & uStack_60;
        uVar6 = uVar6 + 1 & uStack_60;
        if (((pOStack_58[uVar8].context == uVar14) &&
            (uVar12._0_3_ = pOStack_58[uVar8].index, uVar12._3_1_ = pOStack_58[uVar8].mp0,
            (uVar12 & 0xffffff) != 0)) ||
           ((pOStack_58[uVar6].context == uVar14 &&
            (uVar12._0_3_ = pOStack_58[uVar6].index, uVar12._3_1_ = pOStack_58[uVar6].mp0,
            (uVar12 & 0xffffff) != 0)))) {
          bVar3 = pbVar18[-1];
          pbVar15 = puVar23 + (uVar12 & 0xffffff);
          if (pbVar15 == (byte *)0x0) goto LAB_14ff43229;
          uVar8 = (uint)CONCAT11(bVar3,*pbVar15) * -0x61c8864f;
          uVar6 = uVar8 >> 0x18;
          uVar8 = (uVar8 & 0xff0000) >> 8;
          uVar14 = uVar6 | uVar8 & 0xfff;
          uVar12 = (rStack_78.range >> 0xb) * (uint)(param_1->m_o1ac_mf).bin[uVar14];
          if (rStack_78.code < uVar12) {
            uVar4 = (param_1->m_o1ac_mf).bin[uVar14];
            (param_1->m_o1ac_mf).bin[uVar14] = (short)((int)(0x800 - (uint)uVar4) >> 4) + uVar4;
            for (rStack_78.range = uVar12; rStack_78.range < 0x1000000;
                rStack_78.range = rStack_78.range << 8) {
              bVar3 = *rStack_78.ptr;
              rStack_78.ptr = rStack_78.ptr + 1;
              rStack_78.code = (uint)bVar3 | rStack_78.code << 8;
            }
            bVar3 = *pbVar15;
            uVar6 = ((uint)(pbVar18[-1] >> 3) + (uint)pbVar18[-1]) * 0x100;
LAB_14ff43186:
            uStack_b0 = 0x14ff431a5;
            iVar7 = oo2net::O1SRCoder4U8<12>::decode_withexclude
                              (&param_1->m_o1ac_lit_match,&rStack_78,uVar6 & 0xfff | (uint)bVar3,
                               (uint)bVar3);
            *pbVar18 = (byte)iVar7;
            goto LAB_14ff4329a;
          }
          rStack_78.code = rStack_78.code - uVar12;
          rStack_78.range = rStack_78.range - uVar12;
          uVar4 = (param_1->m_o1ac_mf).bin[uVar14];
          (param_1->m_o1ac_mf).bin[uVar14] = uVar4 - (uVar4 >> 4);
          for (; rStack_78.range < 0x1000000; rStack_78.range = rStack_78.range << 8) {
            bVar3 = *rStack_78.ptr;
            rStack_78.ptr = rStack_78.ptr + 1;
            rStack_78.code = (uint)bVar3 | rStack_78.code << 8;
          }
          uStack_b0 = 0x14ff430a5;
          iVar7 = oo2net::O1ACNOSBValueCoder<9,3>::decode
                            (&param_1->m_o1ac_ml_vc,&rStack_78,uVar6 | uVar8 & 0x1ff);
          lVar20 = (longlong)(iVar7 + 1);
          *pbVar18 = *pbVar15;
          if (((lVar20 != 1) && (pbVar18[1] = pbVar15[1], lVar20 != 2)) &&
             (pbVar18[2] = pbVar15[2], lVar20 != 3)) {
            pbVar13 = pbVar18 + 4;
            pbVar18[3] = pbVar15[3];
            pbVar19 = pbVar15 + 4;
            uVar9 = (ulonglong)((uint)(lVar20 + -4 >> 0x3f) & 3);
            lVar10 = lVar20 + -4 + uVar9;
            lVar11 = ((uint)lVar10 & 3) - uVar9;
            lVar10 = lVar10 >> 2;
            if (0 < lVar10) {
              do {
                uVar5 = *(undefined4 *)pbVar19;
                pbVar19 = pbVar19 + 4;
                *(undefined4 *)pbVar13 = uVar5;
                pbVar13 = pbVar13 + 4;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            if (0 < lVar11) {
              lVar10 = (longlong)pbVar19 - (longlong)pbVar13;
              do {
                *pbVar13 = pbVar13[lVar10];
                pbVar13 = pbVar13 + 1;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          pbVar18 = pbVar18 + lVar20;
          if ((pbVar18 < pbVar22) && (pbVar15 + lVar20 < pbStack_50)) {
            bVar3 = pbVar15[lVar20];
            uVar6 = (pbVar18[-1] & 0x7fffff8) * 0x20 + (uint)pbVar18[-1] * 0x100;
            goto LAB_14ff43186;
          }
        }
        else {
          bVar3 = pbVar18[-1];
LAB_14ff43229:
          pSVar2 = (param_1->m_o1ac_lit_nomatch).m_o1 + bVar3;
          uStack_b0 = 0x14ff43248;
          iVar7 = oo2net::SRCoder<8,unsigned_char>::decode(pSVar2,&rStack_78);
          if (iVar7 == -1) {
            uStack_b0 = 0x14ff43268;
            iVar7 = oo2net::O0ArithCoder<unsigned_short,256>::
                    decode_noadapt_with_excludelist<unsigned_char>
                              (&(param_1->m_o1ac_lit_nomatch).m_o0,&rStack_78,pSVar2->m_syms,8);
            uStack_b0 = 0x14ff4327f;
            oo2net::O0ArithCoder<unsigned_short,256>::inc_count
                      (&(param_1->m_o1ac_lit_nomatch).m_o0,iVar7,2);
            (param_1->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[7] =
                 (param_1->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[6];
            (param_1->m_o1ac_lit_nomatch).m_o1[bVar3].m_syms[6] = (uchar)iVar7;
          }
          *pbVar18 = (byte)iVar7;
          pbVar22 = pbStack_48;
          puVar23 = puStack_40;
LAB_14ff4329a:
          pbVar18 = pbVar18 + 1;
        }
      } while (pbVar18 < pbVar1);
    }
    pOVar21 = &(param_1->m_o1ac_lit_nomatch).m_o0;
    for (; puVar16 = auStack_a8, pbVar18 < pbVar22; pbVar18 = pbVar18 + 1) {
      pSVar2 = (param_1->m_o1ac_lit_nomatch).m_o1 + pbVar18[-1];
      uStack_b0 = 0x14ff432d8;
      iVar7 = oo2net::SRCoder<8,unsigned_char>::decode(pSVar2,&rStack_78);
      if (iVar7 == -1) {
        uStack_b0 = 0x14ff432f3;
        iVar7 = oo2net::O0ArithCoder<unsigned_short,256>::
                decode_noadapt_with_excludelist<unsigned_char>(pOVar21,&rStack_78,pSVar2->m_syms,8);
        uStack_b0 = 0x14ff43305;
        oo2net::O0ArithCoder<unsigned_short,256>::inc_count(pOVar21,iVar7,2);
        pSVar2->m_syms[7] = pSVar2->m_syms[6];
        pSVar2->m_syms[6] = (uchar)iVar7;
      }
      *pbVar18 = (byte)iVar7;
    }
  }
  else {
    if (param_6 < param_4) {
      iVar7 = 0;
      goto LAB_14ff4331e;
    }
    uStack_b0 = 0x14ff42dcd;
    memcpy(param_5,param_3,param_6);
    uVar9 = param_6 + 0x100f;
    if (uVar9 <= param_6 + 0x1000U) {
      uVar9 = 0xffffffffffffff0;
    }
    uStack_b0 = 0x14ff42df0;
    lVar20 = -(uVar9 & 0xfffffffffffffff0);
    puVar16 = auStack_a8 + lVar20;
    (&stack0x00000f87)[param_6 + 0x1000U + lVar20 + -0x1000] = 0xec;
    *(longlong *)((longlong)alStack_88 + lVar20) = (longlong)&rStack_78 + lVar20;
    *(undefined8 *)(auStack_a8 + lVar20 + -8) = 0x14ff42e13;
    oo2net::OodleNetwork1TCP_State::Encode
              (param_1,param_2,param_5,param_6,*(uchar **)((longlong)alStack_88 + lVar20));
  }
  iVar7 = 1;
  puVar17 = puVar16;
LAB_14ff4331e:
  *(undefined8 *)(puVar17 + -8) = 0x14ff4332a;
  return iVar7;
}

// OodleNetwork1TCP_Encode @ 14ff4a900

/* WARNING: Type propagation algorithm not settling */

long64 __cdecl
OodleNetwork1TCP_Encode
          (OodleNetwork1TCP_State *param_1,OodleNetwork1_Shared *param_2,void *param_3,
          long64 param_4,void *param_5)

{
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  O0ArithCoder<unsigned_short,256> *pOVar8;
  bool bVar9;
  uchar *puVar10;
  long64 lVar11;
  uint uVar12;
  byte *pbVar13;
  SRCoder<8,unsigned_char> *pSVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  O0ArithCoder<unsigned_short,256> *this;
  byte bVar21;
  byte *pbVar22;
  rrArithEncoder rStack_90;
  uint uStack_78;
  byte *pbStack_70;
  uchar *puStack_68;
  O0ArithCoder<unsigned_short,256> *pOStack_60;
  uchar *puStack_58;
  ON1_HashEntry *pOStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  
  if (param_4 < 7) goto LAB_14ff4409b;
  oo2net::rrArithEncodeInit(&rStack_90,param_5);
  pbStack_40 = param_2->m_lzp_window_end;
  puStack_58 = (uchar *)(param_4 + (longlong)param_5);
  this = &(param_1->m_o1ac_lit_nomatch).m_o0;
  pOStack_50 = param_2->m_lzp_hash;
  puStack_68 = param_2->m_lzp_window;
  uStack_78 = param_2->m_lzp_hash_mask;
  bVar21 = *(byte *)param_3;
  bVar6 = false;
  pOStack_60 = this;
  bVar9 = oo2net::SRCoder<8,unsigned_char>::encode
                    ((SRCoder<8,unsigned_char> *)param_1,&rStack_90,(uint)bVar21);
  pOVar8 = this;
  if (!bVar9) {
    oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this,&rStack_90,(uint)bVar21,(param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms,8);
    oo2net::O0ArithCoder<unsigned_short,256>::inc_count(this,(uint)bVar21,2);
    (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[7] =
         (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[6];
    (param_1->m_o1ac_lit_nomatch).m_o1[0].m_syms[6] = bVar21;
    pOVar8 = pOStack_60;
  }
  pOStack_60 = pOVar8;
  bVar21 = *(byte *)param_3;
  bVar1 = *(byte *)((longlong)param_3 + 1);
  pSVar14 = (param_1->m_o1ac_lit_nomatch).m_o1 + bVar21;
  bVar9 = oo2net::SRCoder<8,unsigned_char>::encode(pSVar14,&rStack_90,(uint)bVar1);
  if (!bVar9) {
    oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this,&rStack_90,(uint)bVar1,pSVar14->m_syms,8);
    oo2net::O0ArithCoder<unsigned_short,256>::inc_count(this,(uint)bVar1,2);
    (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[7] =
         (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6];
    (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6] = bVar1;
  }
  bVar21 = *(byte *)((longlong)param_3 + 1);
  bVar1 = *(byte *)((longlong)param_3 + 2);
  pSVar14 = (param_1->m_o1ac_lit_nomatch).m_o1 + bVar21;
  bVar9 = oo2net::SRCoder<8,unsigned_char>::encode(pSVar14,&rStack_90,(uint)bVar1);
  if (!bVar9) {
    oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
              (this,&rStack_90,(uint)bVar1,pSVar14->m_syms,8);
    oo2net::O0ArithCoder<unsigned_short,256>::inc_count(this,(uint)bVar1,2);
    (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[7] =
         (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6];
    (param_1->m_o1ac_lit_nomatch).m_o1[bVar21].m_syms[6] = bVar1;
  }
  pbStack_70 = (byte *)(param_4 + (longlong)param_3);
  pbVar16 = (byte *)((longlong)param_3 + 3);
  pbVar20 = pbStack_70 + -1;
  pbStack_48 = pbVar20;
  if (pbVar16 < pbVar20) {
LAB_14ff43c72:
    uVar17 = *(uint *)(pbVar16 + -3);
    uVar15 = (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
    uVar17 = (uint)pbVar16[-1];
    do {
      while( true ) {
        pbVar7 = pbStack_40;
        pbVar22 = pbStack_70;
        if (puStack_58 <= rStack_90.ptr) {
          bVar6 = true;
          *(undefined1 *)param_5 = 0;
          rStack_90.ptr = (uchar *)((longlong)param_5 + 1);
        }
        uVar12 = uVar15 * -0x61c8864f;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8;
        uVar5 = uVar12 & uStack_78;
        uVar12 = uVar12 + 1 & uStack_78;
        if (((pOStack_50[uVar5].context == uVar15) &&
            (uVar18._0_3_ = pOStack_50[uVar5].index, uVar18._3_1_ = pOStack_50[uVar5].mp0,
            (uVar18 & 0xffffff) != 0)) ||
           ((pOStack_50[uVar12].context == uVar15 &&
            (uVar18._0_3_ = pOStack_50[uVar12].index, uVar18._3_1_ = pOStack_50[uVar12].mp0,
            (uVar18 & 0xffffff) != 0)))) break;
        bVar21 = *pbVar16;
        uVar12 = (uint)bVar21;
LAB_14ff43f56:
        pSVar14 = (param_1->m_o1ac_lit_nomatch).m_o1 + uVar17;
        bVar9 = oo2net::SRCoder<8,unsigned_char>::encode(pSVar14,&rStack_90,uVar12);
        if (!bVar9) {
          oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
                    (&(param_1->m_o1ac_lit_nomatch).m_o0,&rStack_90,uVar12,pSVar14->m_syms,8);
          oo2net::O0ArithCoder<unsigned_short,256>::inc_count
                    (&(param_1->m_o1ac_lit_nomatch).m_o0,uVar12,2);
          pSVar14->m_syms[7] = pSVar14->m_syms[6];
          pSVar14->m_syms[6] = bVar21;
        }
        if (pbVar20 <= pbVar16 + 1) {
LAB_14ff43fd4:
          pbVar16 = pbVar16 + 1;
          pbVar22 = pbStack_70;
          goto LAB_14ff43fd8;
        }
        uVar15 = (uVar15 | uVar12) << 8;
        pbVar16 = pbVar16 + 1;
        uVar17 = uVar12;
      }
      bVar21 = *pbVar16;
      uVar12 = (uint)bVar21;
      pbVar13 = puStack_68 + (uVar18 & 0xffffff);
      if (pbVar13 == (byte *)0x0) goto LAB_14ff43f56;
      bVar1 = *pbVar13;
      uVar18 = (uVar17 * 0x100 | (uint)bVar1) * -0x61c8864f;
      uVar5 = uVar18 >> 0x18;
      uVar18 = (uVar18 & 0xff0000) >> 8;
      uVar19 = uVar5 | uVar18 & 0xfff;
      if ((uint)bVar21 == (uint)bVar1) goto LAB_14ff43dfa;
      uVar3 = (param_1->m_o1ac_mf).bin[uVar19];
      uVar4 = (param_1->m_o1ac_mf).bin[uVar19];
      (param_1->m_o1ac_mf).bin[uVar19] = (short)((int)(0x800 - (uint)uVar4) >> 4) + uVar4;
      for (rStack_90.range = (rStack_90.range >> 0xb) * (uint)uVar3; rStack_90.range < 0x1000000;
          rStack_90.range = rStack_90.range << 8) {
        *rStack_90.ptr = (uchar)(rStack_90.low >> 0x18);
        rStack_90.ptr = rStack_90.ptr + 1;
        rStack_90.low = rStack_90.low << 8;
      }
      oo2net::O1SRCoder4U8<12>::encode_withexclude
                (&param_1->m_o1ac_lit_match,&rStack_90,uVar12,
                 (uVar17 & 0x7fffff8) * 0x20 + uVar17 * 0x100 & 0xfff | (uint)bVar1,(uint)bVar1);
      if (pbStack_48 <= pbVar16 + 1) goto LAB_14ff43fd4;
      uVar15 = (uVar15 | bVar21) << 8;
      pbVar16 = pbVar16 + 1;
      pbVar20 = pbStack_48;
      uVar17 = (uint)bVar21;
    } while( true );
  }
  bVar6 = false;
  pbVar22 = pbStack_70;
joined_r0x00014ff43ff5:
  for (; pbVar16 < pbVar22; pbVar16 = pbVar16 + 1) {
    bVar21 = *pbVar16;
    pSVar14 = (param_1->m_o1ac_lit_nomatch).m_o1 + pbVar16[-1];
    bVar9 = oo2net::SRCoder<8,unsigned_char>::encode(pSVar14,&rStack_90,(uint)bVar21);
    if (!bVar9) {
      oo2net::O0ArithCoder<unsigned_short,256>::encode_noadapt_with_excludelist<unsigned_char>
                (this,&rStack_90,(uint)bVar21,pSVar14->m_syms,8);
      oo2net::O0ArithCoder<unsigned_short,256>::inc_count(this,(uint)bVar21,2);
      pSVar14->m_syms[7] = pSVar14->m_syms[6];
      pSVar14->m_syms[6] = bVar21;
    }
  }
  goto LAB_14ff44068;
LAB_14ff43dfa:
  lVar11 = oo2net::lzp_getmatchlen(pbVar16,pbStack_70,pbVar13,pbStack_40);
  uVar17 = (rStack_90.range >> 0xb) * (uint)(param_1->m_o1ac_mf).bin[uVar19];
  rStack_90.low = rStack_90.low + uVar17;
  rStack_90.range = rStack_90.range - uVar17;
  uVar3 = (param_1->m_o1ac_mf).bin[uVar19];
  (param_1->m_o1ac_mf).bin[uVar19] = uVar3 - (uVar3 >> 4);
  if (rStack_90.low < uVar17) {
    puVar10 = rStack_90.ptr + -1;
    uVar2 = *puVar10;
    while (uVar2 == 0xff) {
      *puVar10 = '\0';
      puVar10 = puVar10 + -1;
      uVar2 = *puVar10;
    }
    *puVar10 = uVar2 + '\x01';
  }
  for (; rStack_90.range < 0x1000000; rStack_90.range = rStack_90.range << 8) {
    *rStack_90.ptr = (uchar)(rStack_90.low >> 0x18);
    rStack_90.ptr = rStack_90.ptr + 1;
    rStack_90.low = rStack_90.low << 8;
  }
  oo2net::O1ACNOSBValueCoder<9,3>::encode
            (&param_1->m_o1ac_ml_vc,&rStack_90,(int)lVar11 + -1,uVar5 | uVar18 & 0x1ff);
  pbVar16 = pbVar16 + lVar11;
  if (pbVar22 <= pbVar16) goto LAB_14ff43fd8;
  if (pbVar13 + lVar11 < pbVar7) {
    uVar17 = (uint)pbVar13[lVar11];
    oo2net::O1SRCoder4U8<12>::encode_withexclude
              (&param_1->m_o1ac_lit_match,&rStack_90,(uint)*pbVar16,
               (pbVar16[-1] & 0x7fffff8) * 0x20 + (uint)pbVar16[-1] * 0x100 & 0xfff | uVar17,uVar17)
    ;
    pbVar16 = pbVar16 + 1;
  }
  pbVar20 = pbVar22 + -1;
  if (pbVar20 <= pbVar16) goto LAB_14ff43fd8;
  goto LAB_14ff43c72;
LAB_14ff43fd8:
  this = pOStack_60;
  if (!bVar6) goto joined_r0x00014ff43ff5;
LAB_14ff44068:
  lVar11 = oo2net::rrArithEncodeFlush(&rStack_90);
  if ((!bVar6) && (lVar11 < param_4)) {
    return lVar11;
  }
LAB_14ff4409b:
  memcpy(param_5,param_3,param_4);
  return param_4;
}

// OodleNetwork1TCP_State_InitAsCopy @ 14ff4a910

void __cdecl
OodleNetwork1TCP_State_InitAsCopy(OodleNetwork1TCP_State *param_1,OodleNetwork1TCP_State *param_2)

{
  memcpy(param_1,param_2,0x14888);
  return;
}

// OodleNetwork1TCP_State_Reset @ 14ff4a930

void __cdecl OodleNetwork1TCP_State_Reset(OodleNetwork1TCP_State *param_1)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  O1BinaryArithCoder<12,1> *pOVar4;
  O1ACNOSBValueCoder<9,3> *pOVar5;
  O1BinaryArithCoder<9,4> *pOVar6;
  O1BinaryArithCoder<9,1> *pOVar7;
  
  puVar2 = (param_1->m_o1ac_lit_nomatch).m_o1[0].m_probs + 7;
  lVar3 = 0x100;
  do {
    lVar1 = 0;
    do {
      puVar2[lVar1 + -7] = 0x7f8;
      *(char *)((longlong)puVar2 + lVar1 + 2) = (char)lVar1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < 8);
    *puVar2 = (ushort)((uint)*puVar2 * 3 + 0x400 >> 2);
    puVar2 = puVar2 + 0xc;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  oo2net::O0ArithCoder<unsigned_short,256>::init(&(param_1->m_o1ac_lit_nomatch).m_o0);
  lVar3 = 0x1000;
  puVar2 = (param_1->m_o1ac_lit_match).m_o1[0].m_probs;
  do {
    *(undefined4 *)(puVar2 + -1) = 0x7f80400;
    puVar2[1] = 0x7f8;
    puVar2[2] = 0x7f8;
    ((SRCoder4U8 *)(puVar2 + -3))->m_foursyms = 0xff200a;
    puVar2 = puVar2 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  oo2net::O0ArithCoder<unsigned_short,256>::init(&(param_1->m_o1ac_lit_match).m_o0);
  pOVar4 = &param_1->m_o1ac_mf;
  for (lVar3 = 0x1000; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar4->bin[0] = 0x400;
    pOVar4 = (O1BinaryArithCoder<12,1> *)(pOVar4->bin + 1);
  }
  pOVar5 = &param_1->m_o1ac_ml_vc;
  for (lVar3 = 0x600; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar5->m_o1ac_unary[0].bin[0] = 0x400;
    pOVar5 = (O1ACNOSBValueCoder<9,3> *)(pOVar5->m_o1ac_unary[0].bin + 1);
  }
  pOVar6 = &(param_1->m_o1ac_ml_vc).m_o1ac_nosb;
  for (lVar3 = 0x1e00; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar6->bin[0] = 0x400;
    pOVar6 = (O1BinaryArithCoder<9,4> *)(pOVar6->bin + 1);
  }
  pOVar7 = &(param_1->m_o1ac_ml_vc).m_o1ac_firstbit;
  for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
    pOVar7->bin[0] = 0x400;
    pOVar7 = (O1BinaryArithCoder<9,1> *)(pOVar7->bin + 1);
  }
  return;
}

// OodleNetwork1TCP_State_Size @ 14ff4a940

long64 __cdecl OodleNetwork1TCP_State_Size(void)

{
  return 0x14888;
}

// OodleNetwork1TCP_Train @ 14ff4a960

void __cdecl
OodleNetwork1TCP_Train
          (OodleNetwork1TCP_State *param_1,OodleNetwork1_Shared *param_2,void **param_3,int *param_4
          ,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  vector_storage<unsigned_char> local_50;
  ulonglong local_40;
  
  oo2net::OodleNetwork1TCP_State::Reset(param_1);
  lVar8 = 0;
  local_50.m_begin = (uchar *)0x0;
  local_50.m_capacity = 0;
  local_40 = 0;
  puVar4 = oo2net::vector_storage<unsigned_char>::makefit1(&local_50,0x10000,0);
  if (puVar4 != (uchar *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(puVar4);
  }
  uVar6 = local_40 + 0x10000;
  local_40 = uVar6;
  if (0 < (longlong)param_5) {
    do {
      puVar4 = param_3[lVar8];
      iVar2 = param_4[lVar8];
      uVar1 = (longlong)iVar2 + 0x1000;
      uVar7 = uVar6;
      uVar3 = local_40;
      if (((longlong)uVar6 <= (longlong)uVar1) && (uVar7 = uVar1, uVar3 = uVar1, uVar6 <= uVar1)) {
        uVar7 = uVar6;
        if ((local_50.m_capacity < uVar1) &&
           (puVar5 = oo2net::vector_storage<unsigned_char>::makefit1(&local_50,uVar1,uVar6),
           uVar7 = local_40, puVar5 != (uchar *)0x0)) {
          (*oo2net::g_fp_OodleNet_Plugin_Free)(puVar5);
          uVar7 = local_40;
        }
        uVar7 = uVar7 + (uVar1 - uVar6);
        uVar3 = uVar7;
      }
      local_40 = uVar3;
      puVar5 = local_50.m_begin;
      if (uVar7 == 0) {
        puVar5 = (uchar *)0x0;
      }
      oo2net::OodleNetwork1TCP_State::Encode(param_1,param_2,puVar4,(longlong)iVar2,puVar5);
      lVar8 = lVar8 + 1;
      uVar6 = uVar7;
    } while (lVar8 < param_5);
  }
  if (local_50.m_begin != (uchar *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(local_50.m_begin);
  }
  return;
}

// OodleNetwork1UDP_Decode @ 14ff4aac0

int __cdecl
OodleNetwork1UDP_Decode
          (OodleNetwork1UDP_State *param_1,OodleNetwork1_Shared *param_2,void *param_3,
          long64 param_4,void *param_5,long64 param_6)

{
  long64 lVar1;
  
  if (((0 < param_6) && (0 < param_4)) && (param_4 <= param_6)) {
    lVar1 = oo2net::OodleNetwork1UDP_State::Decode(param_1,param_2,param_3,param_4,param_5,param_6);
    return (int)(lVar1 == param_4);
  }
  return 0;
}

// OodleNetwork1UDP_Encode @ 14ff4ab10

long64 __cdecl
OodleNetwork1UDP_Encode
          (OodleNetwork1UDP_State *param_1,OodleNetwork1_Shared *param_2,void *param_3,
          long64 param_4,void *param_5)

{
  ulonglong *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  long64 lVar7;
  long64 lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  ON1_HashEntry *pOVar25;
  bool bVar26;
  ulonglong uStack_80;
  rrArithEncoder rStack_58;
  
  if (6 < param_4) {
    if (param_4 < 0x4001) {
      oo2net::rrArithEncodeInit(&rStack_58,param_5);
      uVar6 = param_2->m_lzp_hash_mask;
      puVar1 = (ulonglong *)((longlong)param_3 + param_4);
      puVar2 = param_2->m_lzp_window;
      puVar3 = param_2->m_lzp_window_end;
      uVar19 = (ulonglong)*(byte *)param_3;
      uVar17 = (uint)param_1->m_coders_nomatch[0].m_cumprobs[uVar19];
      uVar21 = (rStack_58.range >> 0xc) *
               (param_1->m_coders_nomatch[0].m_cumprobs[uVar19 + 1] - uVar17);
      uVar17 = (rStack_58.range >> 0xc) * uVar17 + rStack_58.low;
      if (uVar17 < rStack_58.low) {
        pcVar10 = (char *)((longlong)rStack_58.ptr + -1);
        cVar5 = *pcVar10;
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar21 < 0x1000000; uVar21 = uVar21 << 8) {
        *rStack_58.ptr = (char)(uVar17 >> 0x18);
        rStack_58.ptr = (uchar *)((longlong)rStack_58.ptr + 1);
        uVar17 = uVar17 << 8;
      }
      uVar12 = (ulonglong)*(byte *)((longlong)param_3 + 1);
      uVar23 = (uint)param_1->m_coders_nomatch[uVar19].m_cumprobs[uVar12];
      uVar22 = (uVar21 >> 0xc) * (param_1->m_coders_nomatch[uVar19].m_cumprobs[uVar12 + 1] - uVar23)
      ;
      uVar21 = (uVar21 >> 0xc) * uVar23 + uVar17;
      if (uVar21 < uVar17) {
        pcVar10 = (char *)((longlong)rStack_58.ptr + -1);
        cVar5 = *(char *)((longlong)rStack_58.ptr + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar22 < 0x1000000; uVar22 = uVar22 << 8) {
        *rStack_58.ptr = (char)(uVar21 >> 0x18);
        rStack_58.ptr = (uchar *)((longlong)rStack_58.ptr + 1);
        uVar21 = uVar21 << 8;
      }
      uStack_80 = (ulonglong)*(byte *)((longlong)param_3 + 2);
      uVar17 = (uint)param_1->m_coders_nomatch[uVar12].m_cumprobs[uStack_80];
      rStack_58.range =
           (uVar22 >> 0xc) * (param_1->m_coders_nomatch[uVar12].m_cumprobs[uStack_80 + 1] - uVar17);
      rStack_58.low = (uVar22 >> 0xc) * uVar17 + uVar21;
      puVar24 = (uint *)rStack_58.ptr;
      if (rStack_58.low < uVar21) {
        pcVar10 = (char *)((longlong)rStack_58.ptr + -1);
        cVar5 = *(char *)((longlong)rStack_58.ptr + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; rStack_58.range < 0x1000000; rStack_58.range = rStack_58.range << 8) {
        *(char *)puVar24 = (char)(rStack_58.low >> 0x18);
        rStack_58.low = rStack_58.low << 8;
        puVar24 = (uint *)((longlong)puVar24 + 1);
      }
      uVar21 = *(uint *)param_3;
      puVar16 = (ulonglong *)((longlong)param_3 + 3);
      uVar22 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar21 = uVar22 * -0x61c8864f;
      uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
      uVar17 = uVar21 & uVar6;
      pOVar25 = param_2->m_lzp_hash + uVar17;
      if (param_2->m_lzp_hash[uVar17].context != uVar22) {
        uVar21 = uVar21 + 1 & uVar6;
        pOVar25 = (ON1_HashEntry *)0x0;
        if (param_2->m_lzp_hash[uVar21].context == uVar22) {
          pOVar25 = param_2->m_lzp_hash + uVar21;
        }
      }
      rStack_58.ptr = (uchar *)puVar24;
      if (puVar16 < (ulonglong *)((longlong)puVar1 - 1U)) {
        do {
          if ((uint *)((longlong)param_5 + param_4 + -2) <= puVar24) goto LAB_14ff44b7f;
          uVar19 = (ulonglong)(byte)*puVar16;
          uVar21 = (uint)(byte)*puVar16;
          uVar4 = (undefined1)(rStack_58.low >> 0x18);
          iVar18 = (int)uStack_80;
          if (pOVar25 == (ON1_HashEntry *)0x0) {
            uVar17 = uVar22 | uVar21;
            puVar16 = (ulonglong *)((longlong)puVar16 + 1);
            uVar22 = uVar17 * 0x100;
            if (rStack_58.range < 0x1000000) {
              if (rStack_58.range < 0x10000) {
                *puVar24 = rStack_58.low >> 0x18 | (rStack_58.low & 0xff0000) >> 8 |
                           (rStack_58.low & 0xff00) << 8 | rStack_58.low << 0x18;
                puVar24 = (uint *)((longlong)rStack_58.ptr + 2);
                rStack_58.low = rStack_58.low << 0x10;
                rStack_58.range = rStack_58.range << 0x10;
                rStack_58.ptr = (uchar *)puVar24;
              }
              else {
                *(undefined1 *)puVar24 = uVar4;
                puVar24 = (uint *)((longlong)rStack_58.ptr + 1);
                rStack_58.low = rStack_58.low << 8;
                rStack_58.range = rStack_58.range << 8;
                rStack_58.ptr = (uchar *)puVar24;
              }
            }
            uVar17 = uVar17 * 0x3779b100;
            uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8;
            uVar23 = uVar17 & uVar6;
            pOVar25 = param_2->m_lzp_hash + uVar23;
            if (param_2->m_lzp_hash[uVar23].context != uVar22) {
              uVar17 = uVar17 + 1 & uVar6;
              pOVar25 = (ON1_HashEntry *)0x0;
              if (param_2->m_lzp_hash[uVar17].context == uVar22) {
                pOVar25 = param_2->m_lzp_hash + uVar17;
              }
            }
            uVar23 = rStack_58.range >> 0xc;
            uVar17 = (uint)param_1->m_coders_nomatch[iVar18].m_cumprobs[(int)uVar21];
            rStack_58.range =
                 uVar23 * (param_1->m_coders_nomatch[iVar18].m_cumprobs[(longlong)(int)uVar21 + 1] -
                          uVar17);
            uVar21 = uVar23 * uVar17 + rStack_58.low;
            bVar26 = uVar21 < rStack_58.low;
            uStack_80 = uVar19;
            rStack_58.low = uVar21;
            if (bVar26) {
              pcVar10 = (char *)((longlong)puVar24 + -1);
              cVar5 = *(char *)((longlong)puVar24 + -1);
              while (cVar5 == -1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + -1;
                cVar5 = *pcVar10;
              }
              *pcVar10 = cVar5 + '\x01';
              puVar24 = (uint *)rStack_58.ptr;
            }
          }
          else {
            uVar17._0_3_ = pOVar25->index;
            uVar17._3_1_ = pOVar25->mp0;
            puVar15 = (ulonglong *)(puVar2 + (uVar17 & 0xffffff));
            uVar23 = (iVar18 << 8 | uVar17 >> 0x18) * -0x61c8864f;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 & 0xfff;
            if (rStack_58.range < 0x1000000) {
              if (rStack_58.range < 0x10000) {
                *puVar24 = rStack_58.low >> 0x18 | (rStack_58.low & 0xff0000) >> 8 |
                           (rStack_58.low & 0xff00) << 8 | rStack_58.low << 0x18;
                puVar24 = (uint *)((longlong)rStack_58.ptr + 2);
                rStack_58.low = rStack_58.low << 0x10;
                rStack_58.range = rStack_58.range << 0x10;
                rStack_58.ptr = (uchar *)puVar24;
              }
              else {
                *(undefined1 *)puVar24 = uVar4;
                puVar24 = (uint *)((longlong)rStack_58.ptr + 1);
                rStack_58.low = rStack_58.low << 8;
                rStack_58.range = rStack_58.range << 8;
                rStack_58.ptr = (uchar *)puVar24;
              }
            }
            if ((uVar21 == uVar17 >> 0x18) &&
               (pbVar14 = (byte *)((longlong)puVar16 + 1),
               *pbVar14 == *(byte *)((longlong)puVar15 + 1))) {
              puVar20 = puVar16 + 2;
              if (puVar20 < puVar1) {
                if (*puVar16 == *puVar15) {
                  if (puVar16[1] == puVar15[1]) {
                    uVar19 = 0x10;
                    lVar13 = (longlong)puVar3 - (longlong)puVar15;
                    lVar9 = (longlong)puVar1 - (longlong)puVar16;
                    if (lVar13 <= (longlong)puVar1 - (longlong)puVar16) {
                      lVar9 = lVar13;
                    }
                    if (0x10 < lVar9) {
                      do {
                        if ((byte)*puVar20 !=
                            *(byte *)(((longlong)puVar15 - (longlong)puVar16) + (longlong)puVar20))
                        break;
                        uVar19 = uVar19 + 1;
                        puVar20 = (ulonglong *)((longlong)puVar20 + 1);
                      } while ((longlong)uVar19 < lVar9);
                    }
                  }
                  else {
                    uVar12 = puVar15[1] ^ puVar16[1];
                    uVar19 = 0;
                    if (uVar12 != 0) {
                      for (; (uVar12 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                      }
                    }
                    uVar19 = (ulonglong)(((uint)(uVar19 >> 3) & 0x1fffffff) + 8);
                  }
                }
                else {
                  uVar12 = *puVar15 ^ *puVar16;
                  uVar19 = 0;
                  if (uVar12 != 0) {
                    for (; (uVar12 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                    }
                  }
                  uVar19 = uVar19 >> 3;
                }
              }
              else {
                lVar13 = (longlong)puVar3 - (longlong)puVar15;
                uVar19 = 1;
                lVar9 = (longlong)puVar1 - (longlong)puVar16;
                if (lVar13 <= (longlong)puVar1 - (longlong)puVar16) {
                  lVar9 = lVar13;
                }
                if (1 < lVar9) {
                  do {
                    if (*pbVar14 != pbVar14[(longlong)puVar15 - (longlong)puVar16]) break;
                    uVar19 = uVar19 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while ((longlong)uVar19 < lVar9);
                }
              }
              puVar16 = (ulonglong *)((longlong)puVar16 + uVar19);
              if (puVar16 < puVar1) {
                uVar21 = *(uint *)((longlong)puVar16 + -3);
                uStack_80 = (ulonglong)*(byte *)((longlong)puVar16 + -1);
                uVar22 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
                uVar21 = uVar22 * -0x61c8864f;
                uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
                uVar17 = uVar21 & uVar6;
                pOVar25 = param_2->m_lzp_hash + uVar17;
                if (param_2->m_lzp_hash[uVar17].context != uVar22) {
                  uVar21 = uVar21 + 1 & uVar6;
                  pOVar25 = (ON1_HashEntry *)0x0;
                  if (param_2->m_lzp_hash[uVar21].context == uVar22) {
                    pOVar25 = param_2->m_lzp_hash + uVar21;
                  }
                }
              }
              uVar21 = rStack_58.range >> 0xc;
              iVar18 = (int)uVar19;
              if ((longlong)uVar19 < 0xe) {
                uVar17 = (uint)param_1->m_coders_match[uVar23].m_cumprobs[(longlong)iVar18 + 0xfe];
                rStack_58.range =
                     uVar21 * (param_1->m_coders_match[uVar23].m_cumprobs[(longlong)iVar18 + 0xff] -
                              uVar17);
                uVar21 = uVar21 * uVar17 + rStack_58.low;
                bVar26 = uVar21 < rStack_58.low;
                rStack_58.low = uVar21;
                if (bVar26) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  goto LAB_14ff447df;
                }
              }
              else {
                uVar17 = iVar18 - 0xc;
                iVar18 = 0x1f;
                if (uVar17 != 0) {
                  for (; uVar17 >> iVar18 == 0; iVar18 = iVar18 + -1) {
                  }
                }
                uVar11 = (uint)param_1->m_coders_match[uVar23].m_cumprobs[iVar18 + 0x10b];
                rStack_58.range =
                     uVar21 * (param_1->m_coders_match[uVar23].m_cumprobs
                               [(longlong)(iVar18 + 0x10b) + 1] - uVar11);
                uVar21 = uVar21 * uVar11 + rStack_58.low;
                if (uVar21 < rStack_58.low) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar24 = (uint *)rStack_58.ptr;
                }
                if (rStack_58.range < 0x1000000) {
                  if (rStack_58.range < 0x10000) {
                    *puVar24 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                               uVar21 * 0x1000000;
                    puVar24 = (uint *)((longlong)rStack_58.ptr + 2);
                    uVar21 = uVar21 * 0x10000;
                    rStack_58.range = rStack_58.range * 0x10000;
                    rStack_58.ptr = (uchar *)puVar24;
                  }
                  else {
                    *(char *)puVar24 = (char)(uVar21 >> 0x18);
                    puVar24 = (uint *)((longlong)rStack_58.ptr + 1);
                    uVar21 = uVar21 * 0x100;
                    rStack_58.range = rStack_58.range * 0x100;
                    rStack_58.ptr = (uchar *)puVar24;
                  }
                }
                rStack_58.range = rStack_58.range >> ((byte)iVar18 & 0x1f);
                rStack_58.low = rStack_58.range * (uVar17 - (1 << ((byte)iVar18 & 0x1f))) + uVar21;
                if (rStack_58.low < uVar21) {
                  pcVar10 = (char *)((longlong)puVar24 + -1);
                  cVar5 = *(char *)((longlong)puVar24 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar24 = (uint *)rStack_58.ptr;
                }
                for (; rStack_58.range < 0x1000000; rStack_58.range = rStack_58.range << 8) {
                  *(char *)puVar24 = (char)(rStack_58.low >> 0x18);
                  rStack_58.ptr = (uchar *)((longlong)rStack_58.ptr + 1);
                  rStack_58.low = rStack_58.low << 8;
                  puVar24 = (uint *)rStack_58.ptr;
                }
              }
            }
            else {
              uVar21 = uVar22 | uVar21;
              puVar16 = (ulonglong *)((longlong)puVar16 + 1);
              uVar22 = uVar21 * 0x100;
              uVar21 = uVar21 * 0x3779b100;
              uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
              uVar17 = uVar21 & uVar6;
              pOVar25 = param_2->m_lzp_hash + uVar17;
              if (param_2->m_lzp_hash[uVar17].context != uVar22) {
                uVar21 = uVar21 + 1 & uVar6;
                pOVar25 = (ON1_HashEntry *)0x0;
                if (param_2->m_lzp_hash[uVar21].context == uVar22) {
                  pOVar25 = param_2->m_lzp_hash + uVar21;
                }
              }
              uVar17 = rStack_58.range >> 0xc;
              uVar21 = (uint)param_1->m_coders_match[uVar23].m_cumprobs[uVar19];
              rStack_58.range =
                   uVar17 * (param_1->m_coders_match[uVar23].m_cumprobs[uVar19 + 1] - uVar21);
              uVar21 = uVar17 * uVar21 + rStack_58.low;
              bVar26 = uVar21 < rStack_58.low;
              uStack_80 = uVar19;
              rStack_58.low = uVar21;
              if (bVar26) {
                pcVar10 = (char *)((longlong)puVar24 + -1);
                cVar5 = *(char *)((longlong)puVar24 + -1);
                while (cVar5 == -1) {
                  *pcVar10 = '\0';
                  pcVar10 = pcVar10 + -1;
                  cVar5 = *pcVar10;
                }
LAB_14ff447df:
                *pcVar10 = cVar5 + '\x01';
                puVar24 = (uint *)rStack_58.ptr;
              }
            }
          }
        } while (puVar16 < (ulonglong *)((longlong)puVar1 - 1U));
      }
      if (rStack_58.range < 0x1000000) {
        if (rStack_58.range < 0x10000) {
          *puVar24 = rStack_58.low >> 0x18 | (rStack_58.low & 0xff0000) >> 8 |
                     (rStack_58.low & 0xff00) << 8 | rStack_58.low << 0x18;
          puVar24 = (uint *)((longlong)rStack_58.ptr + 2);
          rStack_58.low = rStack_58.low << 0x10;
          rStack_58.range = rStack_58.range << 0x10;
          rStack_58.ptr = (uchar *)puVar24;
        }
        else {
          *(char *)puVar24 = (char)(rStack_58.low >> 0x18);
          puVar24 = (uint *)((longlong)rStack_58.ptr + 1);
          rStack_58.low = rStack_58.low << 8;
          rStack_58.range = rStack_58.range << 8;
          rStack_58.ptr = (uchar *)puVar24;
        }
      }
      while (puVar16 < puVar1) {
        uVar19 = *puVar16;
        pbVar14 = (byte *)((longlong)puVar16 + -1);
        puVar16 = (ulonglong *)((longlong)puVar16 + 1);
        uVar21 = rStack_58.range >> 0xc;
        uVar6 = (uint)param_1->m_coders_nomatch[*pbVar14].m_cumprobs[(byte)uVar19];
        rStack_58.range =
             uVar21 * (param_1->m_coders_nomatch[*pbVar14].m_cumprobs[(ulonglong)(byte)uVar19 + 1] -
                      uVar6);
        uVar6 = uVar21 * uVar6 + rStack_58.low;
        bVar26 = uVar6 < rStack_58.low;
        rStack_58.low = uVar6;
        if (bVar26) {
          pcVar10 = (char *)((longlong)puVar24 + -1);
          cVar5 = *(char *)((longlong)puVar24 + -1);
          while (cVar5 == -1) {
            *pcVar10 = '\0';
            pcVar10 = pcVar10 + -1;
            cVar5 = *pcVar10;
          }
          *pcVar10 = cVar5 + '\x01';
          puVar24 = (uint *)rStack_58.ptr;
        }
        for (; rStack_58.range < 0x1000000; rStack_58.range = rStack_58.range << 8) {
          *(char *)puVar24 = (char)(rStack_58.low >> 0x18);
          rStack_58.ptr = (uchar *)((longlong)rStack_58.ptr + 1);
          rStack_58.low = rStack_58.low << 8;
          puVar24 = (uint *)rStack_58.ptr;
        }
      }
      lVar9 = oo2net::rrArithEncodeFlush(&rStack_58);
    }
    else {
      lVar7 = oo2net::OodleNetwork1UDP_State::Encode
                        (param_1,param_2,param_3,0x4000,(uchar *)((longlong)param_5 + 2));
      *(short *)param_5 = (short)lVar7;
      lVar8 = oo2net::OodleNetwork1UDP_State::Encode
                        (param_1,param_2,(uchar *)((longlong)param_3 + 0x4000),param_4 + -0x4000,
                         (uchar *)((longlong)param_5 + 2) + lVar7);
      lVar9 = lVar8 + 2 + lVar7;
    }
    if (lVar9 < param_4) {
      return lVar9;
    }
  }
LAB_14ff44b7f:
  memcpy(param_5,param_3,param_4);
  return param_4;
}

// OodleNetwork1UDP_StateCompacted_MaxSize @ 14ff4ab20

long64 __cdecl OodleNetwork1UDP_StateCompacted_MaxSize(void)

{
  return 0x2eb400;
}

// OodleNetwork1UDP_State_Compact @ 14ff4ab30

long64 __cdecl
OodleNetwork1UDP_State_Compact
          (OodleNetwork1UDP_StateCompacted *param_1,OodleNetwork1UDP_State *param_2)

{
  long64 lVar1;
  
  lVar1 = OodleNetwork1UDP_State_Compact_ForVersion(param_1,param_2,9);
  return lVar1;
}

// OodleNetwork1UDP_State_Compact_ForVersion @ 14ff4ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
OodleNetwork1UDP_State_Compact_ForVersion
          (OodleNetwork1UDP_StateCompacted *param_1,OodleNetwork1UDP_State *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *pOVar9;
  O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *pOVar10;
  O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *pOVar11;
  O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12> *pOVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  OodleNetwork1UDP_State *pOVar20;
  int *piVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *pOVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  OodleNetwork1UDP_State *pOVar29;
  O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *pOVar30;
  longlong lVar31;
  double dVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auStackY_e68 [32];
  _rrVarBits_ local_e28;
  int local_e08;
  uchar *local_e00;
  OodleNetwork1UDP_StateCompacted *local_df8;
  uint local_de8 [284];
  uint local_978 [252];
  int local_588 [28];
  int local_518 [4];
  uint local_508 [284];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_e68;
  local_e28.m_cur = param_1->buffer;
  local_e28.m_inv_bitlen = 0x3f;
  uVar23 = 0;
  local_e28.m_bits = 0;
  local_e08 = param_3;
  local_e00 = local_e28.m_cur;
  local_df8 = param_1;
  memset(local_de8,0,0x464);
  lVar28 = 0x1000;
  uVar22 = uVar23;
  pOVar20 = param_2;
  pOVar29 = param_2;
  do {
    do {
      local_de8[uVar22] =
           local_de8[uVar22] +
           ((uint)pOVar20->m_coders_match[0].m_cumprobs[1] -
           (uint)pOVar20->m_coders_match[0].m_cumprobs[0]);
      uVar22 = uVar22 + 1;
      pOVar20 = (OodleNetwork1UDP_State *)(pOVar20->m_coders_match[0].m_cumprobs + 1);
    } while ((longlong)uVar22 < 0x119);
    pOVar20 = (OodleNetwork1UDP_State *)(pOVar29->m_coders_match + 1);
    lVar28 = lVar28 + -1;
    uVar22 = uVar23;
    pOVar29 = pOVar20;
  } while (lVar28 != 0);
  uVar17 = oo2net::rrSumOfHistogram(local_de8,0x119);
  if (param_3 < 6) {
    oo2net::normalize_counts_v5(local_508,0x1000,local_de8,uVar17,0x119);
  }
  else {
    oo2net::normalize_counts_v6(local_508,0x1000,local_de8,uVar17,0x119);
  }
  oo2net::rrTANS_PackCounts(&local_e28,0xc,0x119,local_508,0x119,0x119,true);
  dVar16 = __real_4028000000000000;
  fVar15 = __real_40000000;
  fVar14 = __real_3f000000;
  dVar13 = __real_3fe0000000000000;
  puVar19 = param_2->m_total_match;
  puVar18 = puVar19;
  if (puVar19 <= param_2->m_total_nomatch) {
    iVar37 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    do {
      uVar23 = uVar23 + 8;
      iVar37 = iVar37 + *puVar18;
      iVar38 = iVar38 + puVar18[1];
      iVar39 = iVar39 + puVar18[2];
      iVar40 = iVar40 + puVar18[3];
      puVar1 = puVar18 + 4;
      puVar2 = puVar18 + 5;
      puVar3 = puVar18 + 6;
      puVar4 = puVar18 + 7;
      puVar18 = puVar18 + 8;
      iVar33 = iVar33 + *puVar1;
      iVar34 = iVar34 + *puVar2;
      iVar35 = iVar35 + *puVar3;
      iVar36 = iVar36 + *puVar4;
    } while (uVar23 != 0x1000);
    uVar23 = (ulonglong)
             (uint)(iVar33 + iVar37 + iVar35 + iVar39 + iVar34 + iVar38 + iVar36 + iVar40);
  }
  for (; puVar18 != param_2->m_total_nomatch; puVar18 = puVar18 + 1) {
    uVar23 = (ulonglong)((int)uVar23 + *puVar18);
  }
  lVar28 = 0x1000;
  pOVar20 = param_2;
  do {
    dVar32 = oo2net::rrlog2_F64((double)uVar23 / (double)(*puVar19 << 0xc));
    lVar31 = 0x119;
    iVar34 = (int)((double)(((float)(dVar32 * dVar16) - fVar15) * fVar14) + dVar13);
    iVar33 = 0x1f;
    if (iVar34 < 0x1f) {
      iVar33 = iVar34;
    }
    iVar34 = 0;
    if (0 < iVar33) {
      iVar34 = iVar33;
    }
    local_e28.m_inv_bitlen = local_e28.m_inv_bitlen + -5;
    local_e28.m_bits = local_e28.m_bits << 5 | (longlong)iVar34;
    iVar34 = iVar34 * 2 + 2;
    iVar33 = 0;
    lVar26 = 0;
    pOVar29 = pOVar20;
    do {
      iVar35 = (uint)pOVar29->m_coders_match[0].m_cumprobs[1] -
               (uint)pOVar29->m_coders_match[0].m_cumprobs[0];
      iVar36 = iVar35 - *(int *)((longlong)local_508 + lVar26);
      iVar35 = *(int *)((longlong)local_508 + lVar26) - iVar35;
      if (-1 < iVar36) {
        iVar35 = iVar36;
      }
      if (iVar34 < iVar35) {
        iVar35 = ((iVar35 / iVar34) * 2 + -1) - (iVar36 >> 0x1f);
        *(int *)((longlong)local_978 + lVar26) = iVar35;
        if (iVar35 != 0) {
          iVar33 = iVar33 + 1;
        }
      }
      else {
        *(undefined4 *)((longlong)local_978 + lVar26) = 0;
      }
      pOVar29 = (OodleNetwork1UDP_State *)(pOVar29->m_coders_match[0].m_cumprobs + 1);
      lVar26 = lVar26 + 4;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    iVar34 = 0x119;
    piVar21 = local_518;
    lVar31 = 0x119;
    do {
      if (*piVar21 != 0) break;
      iVar34 = iVar34 + -1;
      lVar31 = lVar31 + -1;
      piVar21 = piVar21 + -1;
    } while (0 < lVar31);
    oo2net::rrTANS_PackCounts(&local_e28,0xc,0x119,local_978,iVar34,iVar33,false);
    puVar19 = puVar19 + 1;
    pOVar20 = (OodleNetwork1UDP_State *)(pOVar20->m_coders_match + 1);
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  lVar28 = 8;
  puVar19 = local_de8;
  puVar18 = local_508;
  do {
    uVar5 = *(undefined8 *)(puVar18 + 2);
    uVar6 = *(undefined8 *)(puVar18 + 4);
    uVar7 = *(undefined8 *)(puVar18 + 6);
    *(undefined8 *)puVar19 = *(undefined8 *)puVar18;
    *(undefined8 *)(puVar19 + 2) = uVar5;
    uVar5 = *(undefined8 *)(puVar18 + 8);
    uVar8 = *(undefined8 *)(puVar18 + 10);
    *(undefined8 *)(puVar19 + 4) = uVar6;
    *(undefined8 *)(puVar19 + 6) = uVar7;
    uVar6 = *(undefined8 *)(puVar18 + 0xc);
    uVar7 = *(undefined8 *)(puVar18 + 0xe);
    *(undefined8 *)(puVar19 + 8) = uVar5;
    *(undefined8 *)(puVar19 + 10) = uVar8;
    uVar5 = *(undefined8 *)(puVar18 + 0x10);
    uVar8 = *(undefined8 *)(puVar18 + 0x12);
    *(undefined8 *)(puVar19 + 0xc) = uVar6;
    *(undefined8 *)(puVar19 + 0xe) = uVar7;
    uVar6 = *(undefined8 *)(puVar18 + 0x14);
    uVar7 = *(undefined8 *)(puVar18 + 0x16);
    *(undefined8 *)(puVar19 + 0x10) = uVar5;
    *(undefined8 *)(puVar19 + 0x12) = uVar8;
    uVar5 = *(undefined8 *)(puVar18 + 0x18);
    uVar8 = *(undefined8 *)(puVar18 + 0x1a);
    *(undefined8 *)(puVar19 + 0x14) = uVar6;
    *(undefined8 *)(puVar19 + 0x16) = uVar7;
    uVar6 = *(undefined8 *)(puVar18 + 0x1c);
    uVar7 = *(undefined8 *)(puVar18 + 0x1e);
    *(undefined8 *)(puVar19 + 0x18) = uVar5;
    *(undefined8 *)(puVar19 + 0x1a) = uVar8;
    *(undefined8 *)(puVar19 + 0x1c) = uVar6;
    *(undefined8 *)(puVar19 + 0x1e) = uVar7;
    lVar28 = lVar28 + -1;
    puVar19 = puVar19 + 0x20;
    puVar18 = puVar18 + 0x20;
  } while (lVar28 != 0);
  uVar17 = oo2net::rrSumOfHistogram(local_de8,0x100);
  if (local_e08 < 6) {
    oo2net::normalize_counts_v5(local_508,0x1000,local_de8,uVar17,0x100);
  }
  else {
    oo2net::normalize_counts_v6(local_508,0x1000,local_de8,uVar17,0x100);
  }
  uVar22 = 0;
  puVar19 = param_2->m_total_nomatch;
  pOVar20 = (OodleNetwork1UDP_State *)puVar19;
  uVar23 = uVar22;
  if (puVar19 <= param_2 + 1) {
    iVar37 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    do {
      uVar23 = uVar23 + 8;
      iVar37 = iVar37 + *(uint *)pOVar20->m_coders_match[0].m_cumprobs;
      iVar38 = iVar38 + *(uint *)((longlong)pOVar20->m_coders_match[0].m_cumprobs + 4);
      iVar39 = iVar39 + *(uint *)((longlong)pOVar20->m_coders_match[0].m_cumprobs + 8);
      iVar40 = iVar40 + *(uint *)((longlong)pOVar20->m_coders_match[0].m_cumprobs + 0xc);
      pOVar9 = pOVar20->m_coders_match;
      pOVar10 = pOVar20->m_coders_match;
      pOVar11 = pOVar20->m_coders_match;
      pOVar12 = pOVar20->m_coders_match;
      pOVar20 = (OodleNetwork1UDP_State *)((longlong)pOVar20->m_coders_match[0].m_cumprobs + 0x20);
      iVar33 = iVar33 + *(uint *)((longlong)pOVar9->m_cumprobs + 0x10);
      iVar34 = iVar34 + *(uint *)((longlong)pOVar10->m_cumprobs + 0x14);
      iVar35 = iVar35 + *(uint *)((longlong)pOVar11->m_cumprobs + 0x18);
      iVar36 = iVar36 + *(uint *)((longlong)pOVar12->m_cumprobs + 0x1c);
    } while (uVar23 != 0x100);
    uVar23 = (ulonglong)
             (uint)(iVar33 + iVar37 + iVar35 + iVar39 + iVar34 + iVar38 + iVar36 + iVar40);
  }
  for (; pOVar20 != param_2 + 1;
      pOVar20 = (OodleNetwork1UDP_State *)(pOVar20->m_coders_match[0].m_cumprobs + 2)) {
    pOVar9 = pOVar20->m_coders_match;
    uVar23 = (ulonglong)(uint)((int)uVar23 + *(int *)pOVar9->m_cumprobs);
  }
  pOVar25 = param_2->m_coders_nomatch;
  lVar28 = 0x100;
  do {
    dVar32 = oo2net::rrlog2_F64((double)uVar23 / (double)(*puVar19 << 8));
    lVar31 = 0x100;
    iVar34 = (int)((double)(((float)(dVar32 * dVar16) - fVar15) * fVar14) + dVar13);
    iVar33 = 0x1f;
    if (iVar34 < 0x1f) {
      iVar33 = iVar34;
    }
    iVar34 = 0;
    if (0 < iVar33) {
      iVar34 = iVar33;
    }
    local_e28.m_bits = local_e28.m_bits << 5 | (longlong)iVar34;
    local_e28.m_inv_bitlen = local_e28.m_inv_bitlen + -5;
    iVar33 = iVar34 * 2 + 2;
    uVar24 = uVar22;
    uVar27 = uVar22;
    pOVar30 = pOVar25;
    do {
      iVar34 = (uint)pOVar30->m_cumprobs[1] - (uint)pOVar30->m_cumprobs[0];
      iVar35 = iVar34 - *(int *)((longlong)local_508 + uVar27);
      iVar34 = *(int *)((longlong)local_508 + uVar27) - iVar34;
      if (-1 < iVar35) {
        iVar34 = iVar35;
      }
      if (iVar33 < iVar34) {
        iVar34 = ((iVar34 / iVar33) * 2 + -1) - (iVar35 >> 0x1f);
        *(int *)((longlong)local_978 + uVar27) = iVar34;
        if (iVar34 != 0) {
          uVar24 = (ulonglong)((int)uVar24 + 1);
        }
      }
      else {
        *(undefined4 *)((longlong)local_978 + uVar27) = 0;
      }
      pOVar30 = (O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *)
                (pOVar30->m_cumprobs + 1);
      uVar27 = uVar27 + 4;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    iVar33 = 0x100;
    piVar21 = local_588 + 2;
    lVar31 = 0x100;
    do {
      if (piVar21[1] != 0) break;
      if (*piVar21 != 0) {
        iVar33 = iVar33 + -1;
        break;
      }
      if (piVar21[-1] != 0) {
        iVar33 = iVar33 + -2;
        break;
      }
      if (piVar21[-2] != 0) {
        iVar33 = iVar33 + -3;
        break;
      }
      lVar31 = lVar31 + -4;
      piVar21 = piVar21 + -4;
      iVar33 = iVar33 + -4;
    } while (0 < lVar31);
    oo2net::rrTANS_PackCounts(&local_e28,0xc,0x100,local_978,iVar33,(int)uVar24,false);
    puVar19 = puVar19 + 1;
    pOVar25 = pOVar25 + 1;
    lVar28 = lVar28 + -1;
    if (lVar28 == 0) {
      lVar28 = 0x3f - local_e28.m_inv_bitlen >> 3;
      uVar23 = local_e28.m_bits << ((char)local_e28.m_inv_bitlen + 1U & 0x3f);
      *(ulonglong *)local_e28.m_cur =
           uVar23 >> 0x38 | (uVar23 & 0xff000000000000) >> 0x28 | (uVar23 & 0xff0000000000) >> 0x18
           | (uVar23 & 0xff00000000) >> 8 | (uVar23 & 0xff000000) << 8 | (uVar23 & 0xff0000) << 0x18
           | (uVar23 & 0xff00) << 0x28 | uVar23 << 0x38;
      local_e28.m_cur = local_e28.m_cur + lVar28;
      local_e28.m_inv_bitlen = local_e28.m_inv_bitlen + lVar28 * 8;
      if (-local_e28.m_inv_bitlen != -0x3f && -1 < -local_e28.m_inv_bitlen + 0x3f) {
        uVar17 = (int)local_e28.m_inv_bitlen + 1U & 7;
        if (uVar17 != 0) {
          local_e28.m_bits = local_e28.m_bits << (sbyte)uVar17;
          local_e28.m_inv_bitlen = local_e28.m_inv_bitlen - (ulonglong)uVar17;
        }
        while (7 < 0x3f - local_e28.m_inv_bitlen) {
          *local_e28.m_cur =
               (uchar)(local_e28.m_bits >> (0x37U - (char)local_e28.m_inv_bitlen & 0x3f));
          local_e28.m_inv_bitlen = local_e28.m_inv_bitlen + 8;
          local_e28.m_cur = local_e28.m_cur + 1;
          local_e28.m_bits =
               local_e28.m_bits &
               *(uint *)((longlong)oo2net::c_rrBitMask64 + local_e28.m_inv_bitlen * -4 + 0x5c);
        }
      }
      local_df8->bufSize =
           (uint)(local_e28.m_cur +
                 (((longlong)
                   ((0x46 - local_e28.m_inv_bitlen) +
                   (ulonglong)((uint)(0x46 - local_e28.m_inv_bitlen >> 0x3f) & 7)) >> 3) -
                 (longlong)local_e00));
      return (longlong)
             (local_e28.m_cur +
             (((longlong)
               ((0x46 - local_e28.m_inv_bitlen) +
               (ulonglong)((uint)(0x46 - local_e28.m_inv_bitlen >> 0x3f) & 7)) >> 3) -
             (longlong)local_e00)) + 4;
    }
  } while( true );
}

// OodleNetwork1UDP_State_Size @ 14ff4b2d0

long64 __cdecl OodleNetwork1UDP_State_Size(void)

{
  return 0x2eb400;
}

// OodleNetwork1UDP_State_Uncompact @ 14ff4b2e0

int __cdecl
OodleNetwork1UDP_State_Uncompact
          (OodleNetwork1UDP_State *param_1,OodleNetwork1UDP_StateCompacted *param_2)

{
  int iVar1;
  
  iVar1 = OodleNetwork1UDP_State_Uncompact_ForVersion(param_1,param_2,9);
  return iVar1;
}

// OodleNetwork1UDP_State_Uncompact_ForVersion @ 14ff4b300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
OodleNetwork1UDP_State_Uncompact_ForVersion
          (OodleNetwork1UDP_State *param_1,OodleNetwork1UDP_StateCompacted *param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uchar *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStackY_11d8 [32];
  _rrVarBits_ local_11a8;
  uint local_1188 [284];
  uint local_d18 [284];
  uint local_8a8 [284];
  uint local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  puVar14 = param_2->buffer;
  local_11a8.m_end = param_2->buffer + param_2->bufSize;
  if (local_11a8.m_end == puVar14 || (longlong)local_11a8.m_end - (longlong)puVar14 < 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (ulonglong)*puVar14;
  }
  puVar15 = &param_2->field_0x5;
  lVar19 = (longlong)local_11a8.m_end - (longlong)puVar15;
  if (lVar19 < 8) {
    if (lVar19 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(byte)*puVar15;
    }
    if (lVar19 == 1 || lVar19 + -1 < 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (ulonglong)(byte)param_2->field_0x6;
    }
    if (lVar19 == 2 || lVar19 + -2 < 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulonglong)(byte)param_2->field_0x7;
    }
    if (lVar19 == 3 || lVar19 + -3 < 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)(byte)param_2[1].bufSize;
    }
    pbVar1 = (byte *)((longlong)&param_2[1].bufSize + 1);
    lVar19 = (longlong)local_11a8.m_end - (longlong)pbVar1;
    if (lVar19 < 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = (ulonglong)*pbVar1;
    }
    if (lVar19 == 1 || lVar19 + -1 < 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = (ulonglong)*(byte *)((longlong)&param_2[1].bufSize + 2);
    }
    if (lVar19 == 2 || lVar19 + -2 < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)*(byte *)((longlong)&param_2[1].bufSize + 3);
    }
    uVar11 = ((((((uVar11 << 8 | uVar17) << 8 | uVar21) << 8 | uVar8) << 8 | uVar18) << 8 | uVar22)
              << 8 | uVar9) << 8;
  }
  else {
    uVar11 = *(ulonglong *)puVar15;
    uVar11 = (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
             (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18
             | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
  }
  local_11a8.m_cur = (uchar *)((longlong)&param_2[1].bufSize + 3);
  local_11a8.m_bits = uVar20 << 0x38 | uVar11 >> 8;
  local_11a8.m_inv_bitlen = 7;
  iVar6 = oo2net::rrTANS_UnPackCounts(&local_11a8,0xc,0x119,local_8a8,true);
  if (iVar6 != 0) {
    iVar6 = 0;
    do {
      local_11a8.m_inv_bitlen = local_11a8.m_inv_bitlen + 5;
      uVar16 = (uint)(local_11a8.m_bits >> 0x3b) * 2 + 2;
      local_11a8.m_bits = local_11a8.m_bits << 5;
      iVar7 = oo2net::rrTANS_UnPackCounts(&local_11a8,0xc,0x119,local_d18,false);
      if (iVar7 == 0) {
        return 0;
      }
      lVar19 = 0;
      do {
        if (*(int *)((longlong)local_d18 + lVar19) == 0) {
          iVar7 = 0;
        }
        else {
          uVar13 = *(int *)((longlong)local_d18 + lVar19) + 1;
          iVar7 = (((int)uVar13 >> 1) + 1) * uVar16 - (uVar16 >> 1);
          if ((uVar13 & 1) != 0) {
            iVar7 = -iVar7;
          }
        }
        iVar7 = iVar7 + *(int *)((longlong)local_8a8 + lVar19);
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        *(int *)((longlong)local_d18 + lVar19) = iVar7;
        lVar19 = lVar19 + 4;
      } while (lVar19 < 0x464);
      uVar16 = oo2net::rrSumOfHistogram(local_d18,0x119);
      if (param_3 < 6) {
        oo2net::normalize_counts_v5(local_1188,0x1000,local_d18,uVar16,0x119);
      }
      else {
        oo2net::normalize_counts_v6(local_1188,0x1000,local_d18,uVar16,0x119);
      }
      oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::
      set_from_histo_normalized(param_1->m_coders_match + iVar6,local_1188);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1000);
    lVar19 = 8;
    puVar10 = local_438;
    puVar12 = local_8a8;
    do {
      uVar2 = *(undefined8 *)(puVar12 + 2);
      uVar3 = *(undefined8 *)(puVar12 + 4);
      uVar4 = *(undefined8 *)(puVar12 + 6);
      *(undefined8 *)puVar10 = *(undefined8 *)puVar12;
      *(undefined8 *)(puVar10 + 2) = uVar2;
      uVar2 = *(undefined8 *)(puVar12 + 8);
      uVar5 = *(undefined8 *)(puVar12 + 10);
      *(undefined8 *)(puVar10 + 4) = uVar3;
      *(undefined8 *)(puVar10 + 6) = uVar4;
      uVar3 = *(undefined8 *)(puVar12 + 0xc);
      uVar4 = *(undefined8 *)(puVar12 + 0xe);
      *(undefined8 *)(puVar10 + 8) = uVar2;
      *(undefined8 *)(puVar10 + 10) = uVar5;
      uVar2 = *(undefined8 *)(puVar12 + 0x10);
      uVar5 = *(undefined8 *)(puVar12 + 0x12);
      *(undefined8 *)(puVar10 + 0xc) = uVar3;
      *(undefined8 *)(puVar10 + 0xe) = uVar4;
      uVar3 = *(undefined8 *)(puVar12 + 0x14);
      uVar4 = *(undefined8 *)(puVar12 + 0x16);
      *(undefined8 *)(puVar10 + 0x10) = uVar2;
      *(undefined8 *)(puVar10 + 0x12) = uVar5;
      uVar2 = *(undefined8 *)(puVar12 + 0x18);
      uVar5 = *(undefined8 *)(puVar12 + 0x1a);
      *(undefined8 *)(puVar10 + 0x14) = uVar3;
      *(undefined8 *)(puVar10 + 0x16) = uVar4;
      uVar3 = *(undefined8 *)(puVar12 + 0x1c);
      uVar4 = *(undefined8 *)(puVar12 + 0x1e);
      *(undefined8 *)(puVar10 + 0x18) = uVar2;
      *(undefined8 *)(puVar10 + 0x1a) = uVar5;
      *(undefined8 *)(puVar10 + 0x1c) = uVar3;
      *(undefined8 *)(puVar10 + 0x1e) = uVar4;
      lVar19 = lVar19 + -1;
      puVar10 = puVar10 + 0x20;
      puVar12 = puVar12 + 0x20;
    } while (lVar19 != 0);
    uVar16 = oo2net::rrSumOfHistogram(local_438,0x100);
    if (param_3 < 6) {
      oo2net::normalize_counts_v5(local_8a8,0x1000,local_438,uVar16,0x100);
    }
    else {
      oo2net::normalize_counts_v6(local_8a8,0x1000,local_438,uVar16,0x100);
    }
    iVar6 = 0;
    do {
      local_11a8.m_inv_bitlen = local_11a8.m_inv_bitlen + 5;
      uVar16 = (uint)(local_11a8.m_bits >> 0x3b) * 2 + 2;
      local_11a8.m_bits = local_11a8.m_bits << 5;
      iVar7 = oo2net::rrTANS_UnPackCounts(&local_11a8,0xc,0x100,local_1188,false);
      if (iVar7 == 0) {
        return 0;
      }
      lVar19 = 0;
      do {
        if (*(int *)((longlong)local_1188 + lVar19) == 0) {
          iVar7 = 0;
        }
        else {
          uVar13 = *(int *)((longlong)local_1188 + lVar19) + 1;
          iVar7 = (((int)uVar13 >> 1) + 1) * uVar16 - (uVar16 >> 1);
          if ((uVar13 & 1) != 0) {
            iVar7 = -iVar7;
          }
        }
        iVar7 = *(int *)((longlong)local_8a8 + lVar19) + iVar7;
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        *(int *)((longlong)local_1188 + lVar19) = iVar7;
        lVar19 = lVar19 + 4;
      } while (lVar19 < 0x400);
      uVar16 = oo2net::rrSumOfHistogram(local_1188,0x100);
      if (param_3 < 6) {
        oo2net::normalize_counts_v5(local_d18,0x1000,local_1188,uVar16,0x100);
      }
      else {
        oo2net::normalize_counts_v6(local_d18,0x1000,local_1188,uVar16,0x100);
      }
      oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::set_from_histo_normalized
                (param_1->m_coders_nomatch + iVar6,local_d18);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    if (local_11a8.m_cur +
        (-(longlong)param_2 -
        ((longlong)
         ((0x3f - local_11a8.m_inv_bitlen) +
         (ulonglong)((uint)(0x3f - local_11a8.m_inv_bitlen >> 0x3f) & 7)) >> 3)) + -4 ==
        (uchar *)(ulonglong)param_2->bufSize) {
      return 1;
    }
  }
  return 0;
}

// OodleNetwork1UDP_Train @ 14ff4b800

void __cdecl
OodleNetwork1UDP_Train
          (OodleNetwork1UDP_State *param_1,OodleNetwork1_Shared *param_2,void **param_3,int *param_4
          ,int param_5)

{
  undefined8 uVar1;
  OodleNetwork1UDP_CountingState *_Dst;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  OodleNetwork1UDP_State *this;
  O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this_00;
  OodleNetwork1UDP_CountingState *pOVar5;
  Histo_nomatch *pHVar6;
  
  _Dst = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(0x4a8400,0x10);
  if (_Dst == (OodleNetwork1UDP_CountingState *)0x0) {
                    /* WARNING: Subroutine does not return */
    oo2net::Oodle_Core_Malloc_Failed(0x4a8400);
  }
  memset(_Dst,0,0x4a8400);
  oo2net::OodleNetwork1UDP_Train_State_Counting(_Dst,param_2,param_3,param_4,param_5);
  if (param_1 != (OodleNetwork1UDP_State *)0x0) {
    memcpy(param_1->m_total_match,_Dst->m_total_match,0x4000);
    lVar4 = 8;
    puVar2 = param_1->m_total_nomatch;
    puVar3 = _Dst->m_total_nomatch;
    do {
      uVar1 = *(undefined8 *)(puVar3 + 2);
      *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
      *(undefined8 *)(puVar2 + 2) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 6);
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar3 + 4);
      *(undefined8 *)(puVar2 + 6) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 10);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar2 + 10) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0xe);
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
      *(undefined8 *)(puVar2 + 0xe) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0x12);
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 *)(puVar2 + 0x12) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0x16);
      *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar3 + 0x14);
      *(undefined8 *)(puVar2 + 0x16) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0x1a);
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar3 + 0x18);
      *(undefined8 *)(puVar2 + 0x1a) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0x1e);
      *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(puVar3 + 0x1c);
      *(undefined8 *)(puVar2 + 0x1e) = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x20;
      puVar3 = puVar3 + 0x20;
    } while (lVar4 != 0);
    lVar4 = 0x1000;
    this = param_1;
    pOVar5 = _Dst;
    do {
      oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::
      set_from_histo_normalized(this->m_coders_match,(uint *)pOVar5);
      pOVar5 = (OodleNetwork1UDP_CountingState *)(pOVar5->m_histos_match + 1);
      this = (OodleNetwork1UDP_State *)(this->m_coders_match + 1);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    this_00 = param_1->m_coders_nomatch;
    lVar4 = 0x100;
    pHVar6 = _Dst->m_histos_nomatch;
    do {
      oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::set_from_histo_normalized
                (this_00,pHVar6->counts);
      pHVar6 = pHVar6 + 1;
      this_00 = this_00 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ff4b98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*oo2net::g_fp_OodleNet_Plugin_Free)(_Dst);
  return;
}

// OodleNetwork1_CompressedBufferSizeNeeded @ 14ff4b9a0

long64 __cdecl OodleNetwork1_CompressedBufferSizeNeeded(long64 param_1)

{
  return param_1 + 8;
}

// OodleNetwork1_SelectDictionaryFromPackets @ 14ff4b9b0

int __cdecl
OodleNetwork1_SelectDictionaryFromPackets
          (void *param_1,int param_2,int param_3,void **param_4,int *param_5,int param_6,
          void **param_7,int *param_8,int param_9)

{
  int iVar1;
  
  iVar1 = OodleNetwork1_SelectDictionaryFromPackets_Trials
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,0.0,0
                    );
  return iVar1;
}

// OodleNetwork1_SelectDictionaryFromPackets_Trials @ 14ff4ba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
OodleNetwork1_SelectDictionaryFromPackets_Trials
          (void *param_1,int param_2,int param_3,void **param_4,int *param_5,int param_6,
          void **param_7,int *param_8,int param_9,int param_10,double param_11,int param_12)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  void **ppvVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar32;
  uint uVar19;
  longlong lVar20;
  rated_packet *prVar21;
  SuffixTrieMatcher *pSVar22;
  int *piVar23;
  uchar **ppuVar24;
  uchar **ppuVar25;
  OodleNetwork1_Shared *pOVar26;
  OodleNetwork1UDP_State *this;
  rated_packet *prVar27;
  rated_packet *prVar28;
  rated_packet *prVar29;
  OodleNetwork1UDP_CountingState *_Dst;
  uint *puVar30;
  uchar *puVar31;
  longlong lVar33;
  uint *puVar34;
  longlong lVar35;
  size_t _Size;
  ulong64 uVar36;
  uchar *puVar37;
  ulonglong uVar38;
  int *piVar39;
  OodleNetwork1UDP_State *this_00;
  O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12> *this_01;
  void *pvVar40;
  int *piVar41;
  OodleNetwork1UDP_CountingState *pOVar42;
  Histo_nomatch *pHVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  byte *pbVar47;
  void *_Dst_00;
  ON1_HashEntry *pOVar48;
  long64 lVar49;
  ulonglong uVar50;
  float fVar51;
  undefined1 auStackY_228 [32];
  stdless<oo2net::rated_packet> local_1e8;
  ulong64 local_1e0;
  int local_1d0;
  int local_1cc;
  void **local_1c8;
  vector<oo2net::rated_packet> local_1c0;
  int *local_1a8;
  int local_1a0;
  int *local_198;
  rated_packet *local_190;
  int *local_188;
  rated_packet *local_180;
  longlong local_178;
  SuffixTrieMatcher *local_170;
  void **local_168;
  longlong local_160;
  void *local_158;
  vector_storage<int> local_150;
  longlong local_140;
  vector_storage<unsigned_char> local_138;
  ulonglong local_128;
  vector_storage<unsigned_char_const_*> local_120;
  ulonglong local_110;
  longlong local_108;
  void *local_100;
  rated_packet *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ON1_HashEntry *local_c8;
  undefined8 local_c0;
  rrRandState local_b8;
  ulonglong local_a8;
  
  local_c0 = 0xfffffffffffffffe;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_198 = param_5;
  local_168 = param_7;
  local_188 = param_8;
  local_1d0 = param_2;
  local_1a0 = param_3;
  local_100 = param_1;
  if (0x1000000 < param_2) {
    oo2net::ooLogErrorPre();
    if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    {
      (*oo2net::g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x494,
                 "OODLE ERROR : dictionary_size larger than OODLENETWORK1_MAX_DICTIONARY_SIZE ; clamping!\n"
                );
    }
    oo2net::ooLogErrorPost();
    local_1d0 = 0x1000000;
  }
  iVar15 = 100;
  if (param_10 < 100) {
    iVar15 = param_10;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  local_1a8 = (int *)CONCAT44(local_1a8._4_4_,iVar13);
  iVar15 = 100;
  if (param_12 < 100) {
    iVar15 = param_12;
  }
  iVar13 = 0;
  if (0 < iVar15) {
    iVar13 = iVar15;
  }
  lVar35 = 0;
  lVar45 = 0;
  local_b8.x = 0x75bcd15;
  local_b8.y = 0x159a55a0;
  local_b8.z = 0x1f123bb5;
  local_b8.c = 0x74cbb1;
  lVar20 = 0;
  iVar15 = 0;
  local_160 = (longlong)param_9;
  lVar33 = 0;
  if (1 < local_160) {
    do {
      iVar16 = local_188[lVar33];
      if (iVar15 < iVar16) {
        iVar15 = iVar16;
      }
      lVar35 = lVar35 + iVar16;
      iVar16 = local_188[lVar33 + 1];
      if (iVar15 < iVar16) {
        iVar15 = iVar16;
      }
      lVar45 = lVar45 + iVar16;
      lVar33 = lVar33 + 2;
    } while (lVar33 < local_160 + -1);
  }
  if (lVar33 < local_160) {
    iVar16 = local_188[lVar33];
    lVar20 = (longlong)iVar16;
    if (iVar15 < iVar16) {
      iVar15 = iVar16;
    }
  }
  lVar49 = (longlong)(param_9 * 4) + lVar20 + lVar35 + lVar45;
  if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x4df,
               "SelectDictionaryFromPackets; test_packet_total_size = %lld\n");
  }
  if (((0x20000 < iVar15) &&
      (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0))
     && ((*oo2net::g_fp_OodleNet_Plugin_Printf)
                   (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x4e3,
                    "WARNING: largest_packet_size = %d\n"),
        oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0))
  {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x4e4,
               "consider excluding huge packets and compress them with OodleLZ\n");
  }
  if (0x40000000 < lVar49) {
    oo2net::ooLogErrorPre();
    if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    {
      (*oo2net::g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x4ee,
                 "OODLE ERROR : training data over 1 GB; SelectDictionaryFromPackets is not 64-bit safe.  Clamping...\n"
                );
    }
    oo2net::ooLogErrorPost();
    lVar49 = 0x40000000;
  }
  prVar21 = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(lVar49,0x10);
  lVar20 = local_160;
  ppvVar11 = local_168;
  piVar23 = local_188;
  local_190 = prVar21;
  if (prVar21 == (rated_packet *)0x0) {
                    /* WARNING: Subroutine does not return */
    oo2net::Oodle_Core_Malloc_Failed(lVar49);
  }
  prVar29 = (rated_packet *)((longlong)&prVar21->rating + lVar49);
  local_180 = prVar29;
  if (lVar49 == 0x40000000) {
    uVar14 = oo2net::rrRandState32(&local_b8);
    ppvVar11 = local_168;
    piVar23 = local_188;
    lVar20 = (longlong)(int)((ulonglong)uVar14 * (ulonglong)(uint)param_9 >> 0x20);
    _Size = (size_t)local_188[lVar20];
    puVar34 = (uint *)((longlong)&prVar21->rating + _Size);
    prVar27 = prVar21;
    while ((rated_packet *)(puVar34 + 1) <= prVar29) {
      memcpy(prVar21,ppvVar11[lVar20],_Size);
      uVar14 = oo2net::rrRandState32(&local_b8);
      *puVar34 = uVar14;
      prVar21 = (rated_packet *)(puVar34 + 1);
      uVar14 = oo2net::rrRandState32(&local_b8);
      lVar20 = (longlong)(int)((ulonglong)uVar14 * (ulonglong)(uint)param_9 >> 0x20);
      _Size = (size_t)piVar23[lVar20];
      prVar27 = local_190;
      puVar34 = (uint *)((longlong)&prVar21->rating + _Size);
    }
    memset(prVar21,0,(longlong)prVar29 - (longlong)prVar21);
  }
  else {
    lVar33 = 0;
    if (0 < local_160) {
      do {
        iVar15 = piVar23[lVar33];
        memcpy(prVar21,ppvVar11[lVar33],(longlong)iVar15);
        puVar34 = (uint *)((longlong)&prVar21->rating + (longlong)iVar15);
        uVar14 = oo2net::rrRandState32(&local_b8);
        *puVar34 = uVar14;
        prVar21 = (rated_packet *)(puVar34 + 1);
        lVar33 = lVar33 + 1;
      } while (lVar33 < lVar20);
    }
    prVar27 = local_190;
    if ((prVar21 != local_180) &&
       (iVar15 = oo2net::rrDisplayAssertion
                           ("v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x529,
                            "oo2net::OodleNetwork1_SelectDictionaryFromPackets_Trials",
                            "test_block_ptr == test_block_end"), iVar15 != 0)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
  }
  if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x52b,
               "SDFP : building Suffix Trie...\n");
  }
  pSVar22 = oo2net::SuffixTrieMatcher_Create((uchar *)prVar27,lVar49,(SuffixTrieSortData *)0x0);
  iVar15 = 1 << ((byte)local_1a0 & 0x1f);
  local_150.m_begin = (int *)0x0;
  local_150.m_capacity = 0;
  local_140 = 0;
  uVar36 = (ulong64)iVar15;
  local_170 = pSVar22;
  if (iVar15 != 0) {
    piVar23 = oo2net::vector_storage<int>::makefit1(&local_150,uVar36,0);
    if (uVar36 != 0) {
      memset(local_150.m_begin + local_140,-1,uVar36 << 2);
    }
    if (piVar23 != (int *)0x0) {
      (*oo2net::g_fp_OodleNet_Plugin_Free)(piVar23);
    }
  }
  piVar23 = local_150.m_begin;
  if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x53e,
               "SDFP : rating packets...\n");
  }
  local_1c0._0_8_ = (rated_packet *)0x0;
  local_1c0._8_8_ = 0;
  local_1c0._16_8_ = 0;
  if (((longlong)param_6 != 0) &&
     (prVar21 = oo2net::vector_storage<oo2net::rated_packet>::makefit1
                          ((vector_storage<oo2net::rated_packet> *)&local_1c0,(longlong)param_6,0),
     prVar21 != (rated_packet *)0x0)) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(prVar21);
  }
  uVar38 = local_1c0._16_8_;
  prVar21 = (rated_packet *)local_1c0._0_8_;
  local_120.m_begin = (uchar **)0x0;
  local_120.m_capacity = 0;
  local_110 = 0;
  ppuVar24 = oo2net::vector_storage<unsigned_char_const_*>::makefit1(&local_120,0x4000,0);
  if (ppuVar24 != (uchar **)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(ppuVar24);
  }
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  dVar8 = 0.0;
  local_1cc = 0;
  dVar7 = 0.0;
  local_1e0 = uVar38;
  local_1c8 = param_4;
  if (0 < param_6) {
    do {
      local_158 = *local_1c8;
      iVar16 = *local_198;
      local_178 = CONCAT44(local_178._4_4_,iVar16);
      if (7 < iVar16) {
        local_180 = (rated_packet *)((longlong)iVar16 + (longlong)local_158);
        dVar7 = 0.0;
        uVar50 = 0;
        local_110 = 0;
        puVar37 = (uchar *)((longlong)local_158 + 3);
        prVar29 = local_180 + -1;
        prVar21 = (rated_packet *)local_1c0._0_8_;
        ppuVar24 = local_120.m_begin;
        uVar38 = local_1e0;
        if (puVar37 < &prVar29->packet_size) {
          do {
            uVar14 = *(uint *)(puVar37 + -3);
            uVar14 = ((uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) *
                     -0x61c8864f;
            uVar14 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8) &
                     iVar15 - 1U;
            uVar44 = uVar50;
            if (piVar23[uVar14] != local_1cc) {
              piVar23[uVar14] = local_1cc;
              uVar44 = uVar50 + 1;
              if (local_120.m_capacity < uVar44) {
                ppuVar25 = oo2net::vector_storage<unsigned_char_const_*>::makefit1
                                     (&local_120,uVar44,uVar50);
                ppuVar24 = local_120.m_begin;
                if (local_120.m_begin + uVar50 != (uchar **)0x0) {
                  local_120.m_begin[uVar50] = puVar37;
                }
                piVar23 = local_150.m_begin;
                local_110 = uVar44;
                if (ppuVar25 != (uchar **)0x0) {
                  (*oo2net::g_fp_OodleNet_Plugin_Free)(ppuVar25);
                  piVar23 = local_150.m_begin;
                }
              }
              else {
                piVar23 = local_150.m_begin;
                local_110 = uVar44;
                if (ppuVar24 + uVar50 != (uchar **)0x0) {
                  ppuVar24[uVar50] = puVar37;
                }
              }
            }
            prVar27 = local_180;
            puVar37 = puVar37 + 1;
            uVar50 = uVar44;
          } while (puVar37 < &prVar29->packet_size);
          prVar21 = (rated_packet *)local_1c0._0_8_;
          if (uVar44 != 0) {
            lVar20 = 0;
            dVar9 = 0.0;
            if (0 < (longlong)uVar44) {
              do {
                lVar35 = 0;
                iVar16 = oo2net::SuffixTrieMatcher_LookupMatches
                                   (local_170,local_120.m_begin[lVar20] + -3,
                                    (int)prVar27 - (int)(local_120.m_begin[lVar20] + -3),
                                    (vector<oo2net::SuffixTrieMatch> *)&local_e0);
                lVar33 = lVar35;
                if (0 < iVar16) {
                  do {
                    uVar14 = *(uint *)((longlong)local_e0 + lVar33 + 8);
                    if ((int)uVar14 < 4) break;
                    iVar3 = *(int *)((longlong)local_e0 + lVar33 + 0xc);
                    fVar51 = oo2net::rrlog2_U32_approx(uVar14);
                    dVar7 = dVar7 + (double)(fVar51 * (float)iVar3);
                    lVar35 = lVar35 + 1;
                    lVar33 = lVar33 + 0x18;
                  } while (lVar35 < iVar16);
                }
                lVar20 = lVar20 + 1;
                dVar9 = dVar7;
              } while (lVar20 < (longlong)uVar44);
            }
            uVar38 = local_1e0 + 1;
            if ((ulonglong)local_1c0._8_8_ < uVar38) {
              prVar21 = oo2net::vector_storage<oo2net::rated_packet>::makefit1
                                  ((vector_storage<oo2net::rated_packet> *)&local_1c0,uVar38,
                                   local_1e0);
              prVar29 = (rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20);
              if (prVar29 != (rated_packet *)0x0) {
                prVar29->rating = 0.0;
                prVar29->base_rating = 0.0;
                prVar29->packet_ptr = (void *)0x0;
                *(undefined8 *)&prVar29->packet_size = 0;
              }
              local_1c0._16_8_ = uVar38;
              if (prVar21 != (rated_packet *)0x0) {
                (*oo2net::g_fp_OodleNet_Plugin_Free)(prVar21);
              }
            }
            else {
              prVar21 = (rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20);
              local_1c0._16_8_ = uVar38;
              if (prVar21 != (rated_packet *)0x0) {
                prVar21->rating = 0.0;
                prVar21->base_rating = 0.0;
                prVar21->packet_ptr = (void *)0x0;
                *(undefined8 *)&prVar21->packet_size = 0;
              }
            }
            ((rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20))->packet_ptr = local_158;
            ((rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20))->packet_size = (int)local_178;
            auVar2._8_4_ = SUB84(dVar9,0);
            auVar2._0_8_ = dVar9;
            auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            ((rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20))->rating = dVar9;
            ((rated_packet *)(local_1c0._0_8_ + local_1e0 * 0x20))->base_rating =
                 (double)auVar2._8_8_;
            dVar8 = dVar8 + dVar9;
            prVar21 = (rated_packet *)local_1c0._0_8_;
            local_1e0 = uVar38;
          }
        }
      }
      local_1cc = local_1cc + 1;
      local_1c8 = local_1c8 + 1;
      local_198 = local_198 + 1;
      piVar23 = local_150.m_begin;
      pSVar22 = local_170;
      dVar7 = dVar8;
    } while (local_1cc < param_6);
  }
  if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x5ce,
               "SDFP : building dictionary...\n");
  }
  oo2net::SuffixTrieMatcher_Destroy(pSVar22);
  (*oo2net::g_fp_OodleNet_Plugin_Free)(local_190);
  lVar20 = (longlong)local_1d0;
  pvVar40 = (void *)(longlong)(int)local_1a8;
  if ((int)local_1a8 < 2) {
    oo2net::stdsort<oo2net::rated_packet_*,oo2net::stdless<oo2net::rated_packet>_>
              (prVar21,prVar21 + uVar38,local_1e8);
    pvVar40 = (void *)((longlong)local_100 + lVar20);
    lVar20 = 0;
    _Dst_00 = local_100;
    if (0 < (longlong)uVar38) {
      piVar23 = &prVar21->packet_size;
      do {
        iVar15 = (int)pvVar40 - (int)_Dst_00;
        if (*piVar23 < iVar15) {
          iVar15 = *piVar23;
        }
        memcpy(_Dst_00,*(void **)(piVar23 + -2),(longlong)iVar15);
        _Dst_00 = (void *)((longlong)_Dst_00 + (longlong)iVar15);
        if (pvVar40 <= _Dst_00) goto LAB_14ff4cc36;
        lVar20 = lVar20 + 1;
        piVar23 = piVar23 + 8;
      } while (lVar20 < (longlong)uVar38);
    }
    if (_Dst_00 < pvVar40) {
      if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
         ) {
        (*oo2net::g_fp_OodleNet_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x47d,
                   "WARNING : OodleNetwork_SelectDictionaryFromPackets - not enough packets to fill dictionary!\n"
                  );
      }
      memset(_Dst_00,0,(longlong)pvVar40 - (longlong)_Dst_00);
    }
  }
  else {
    piVar23 = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(lVar20,0x10);
    local_1a8 = piVar23;
    if (piVar23 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      oo2net::Oodle_Core_Malloc_Failed(lVar20);
    }
    lVar20 = (1L << ((byte)local_1a0 & 0x3f)) * 8 + 0x20;
    pOVar26 = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(lVar20,0x10);
    if (pOVar26 == (OodleNetwork1_Shared *)0x0) {
                    /* WARNING: Subroutine does not return */
      oo2net::Oodle_Core_Malloc_Failed(lVar20);
    }
    this = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(0x2eb400,0x10);
    if (this == (OodleNetwork1UDP_State *)0x0) {
                    /* WARNING: Subroutine does not return */
      oo2net::Oodle_Core_Malloc_Failed(0x2eb400);
    }
    local_f8 = (rated_packet *)0x0;
    local_f0 = 0;
    local_e8 = 0;
    if (0 < iVar13) {
      oo2net::vector<oo2net::rated_packet>::operator=
                ((vector<oo2net::rated_packet> *)&local_f8,&local_1c0);
    }
    fVar51 = __real_2f800000;
    dVar8 = __real_3fe0000000000000;
    local_108 = 0x7fffffff;
    local_178 = 0;
    if (0 < iVar13) {
      dVar7 = ((dVar7 / (double)param_6) * param_11) / __real_4059000000000000;
      local_158 = pvVar40;
      do {
        lVar20 = local_178;
        if (oo2net::g_fp_OodleNet_Plugin_Printf !=
            (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*oo2net::g_fp_OodleNet_Plugin_Printf)
                    (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x602,
                     "Generation %d :\n");
        }
        prVar29 = local_f8;
        prVar21 = (rated_packet *)local_1c0._0_8_;
        if (lVar20 != 0) {
          local_1e0 = (local_e8 << 5) >> 5;
          if (uVar38 < local_1e0) {
            local_1c0._16_8_ = 0;
            if ((ulonglong)local_1c0._8_8_ < local_1e0) {
              prVar27 = oo2net::vector_storage<oo2net::rated_packet>::makefit1
                                  ((vector_storage<oo2net::rated_packet> *)&local_1c0,local_1e0,0);
              prVar21 = (rated_packet *)local_1c0._0_8_;
              if (local_1e0 != 0) {
                prVar28 = (rated_packet *)local_1c0._0_8_;
                uVar38 = local_1e0;
                do {
                  if (prVar28 != (rated_packet *)0x0) {
                    pdVar1 = (double *)((longlong)prVar28 + ((longlong)prVar29 - local_1c0._0_8_));
                    dVar9 = pdVar1[1];
                    prVar28->rating = *pdVar1;
                    prVar28->base_rating = dVar9;
                    *(undefined1 (*) [16])&prVar28->packet_ptr =
                         *(undefined1 (*) [16])
                          ((longlong)prVar28 + ((longlong)prVar29 - local_1c0._0_8_) + 0x10);
                  }
                  prVar28 = prVar28 + 1;
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              if (prVar27 != (rated_packet *)0x0) {
                (*oo2net::g_fp_OodleNet_Plugin_Free)(prVar27);
              }
            }
            else if (local_1e0 != 0) {
              prVar29 = (rated_packet *)local_1c0._0_8_;
              uVar38 = local_1e0;
              do {
                if (prVar29 != (rated_packet *)0x0) {
                  pdVar1 = (double *)((longlong)prVar29 + ((longlong)local_f8 - local_1c0._0_8_));
                  dVar9 = pdVar1[1];
                  prVar29->rating = *pdVar1;
                  prVar29->base_rating = dVar9;
                  *(undefined1 (*) [16])&prVar29->packet_ptr =
                       *(undefined1 (*) [16])
                        ((longlong)prVar29 + ((longlong)local_f8 - local_1c0._0_8_) + 0x10);
                }
                prVar29 = prVar29 + 1;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          else if ((rated_packet *)local_1c0._0_8_ != local_f8) {
            if (local_f8 < (ulonglong)local_1c0._0_8_) {
              lVar20 = local_1e0 - 1;
              if (-1 < lVar20) {
                prVar29 = (rated_packet *)(local_1c0._0_8_ + lVar20 * 0x20);
                do {
                  pdVar1 = (double *)(((longlong)local_f8 - local_1c0._0_8_) + (longlong)prVar29);
                  dVar9 = pdVar1[1];
                  prVar29->rating = *pdVar1;
                  prVar29->base_rating = dVar9;
                  *(undefined1 (*) [16])&prVar29->packet_ptr =
                       *(undefined1 (*) [16])
                        (((longlong)local_f8 - local_1c0._0_8_) + 0x10 + (longlong)prVar29);
                  prVar29 = prVar29 + -1;
                  lVar20 = lVar20 + -1;
                } while (-1 < lVar20);
              }
            }
            else if (local_1e0 != 0) {
              prVar29 = (rated_packet *)local_1c0._0_8_;
              uVar38 = local_1e0;
              do {
                pdVar1 = (double *)((longlong)prVar29 + ((longlong)local_f8 - local_1c0._0_8_));
                dVar9 = pdVar1[1];
                prVar29->rating = *pdVar1;
                prVar29->base_rating = dVar9;
                *(undefined1 (*) [16])&prVar29->packet_ptr =
                     *(undefined1 (*) [16])
                      ((longlong)prVar29 + ((longlong)local_f8 - local_1c0._0_8_) + 0x10);
                prVar29 = prVar29 + 1;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
        }
        lVar20 = iVar13 - local_178;
        local_190 = (rated_packet *)0x0;
        if (0 < (longlong)local_158) {
          bVar5 = (byte)local_1a0 & 0x1f;
          bVar6 = (byte)local_1a0 & 0x3f;
          local_180 = prVar21 + local_1e0;
          local_198 = (int *)((longlong)local_1d0 + (longlong)local_1a8);
          uVar14 = (1 << bVar5 | 1U >> 0x20 - bVar5) - 1;
          pOVar48 = pOVar26->m_lzp_hash;
          local_170 = (SuffixTrieMatcher *)((1L << bVar6 | 1UL >> 0x40 - bVar6) * 8);
          piVar23 = local_1a8;
          local_c8 = pOVar48;
          do {
            uVar38 = local_1e0;
            prVar29 = prVar21;
            if (0 < (longlong)local_1e0) {
              do {
                uVar17 = oo2net::rrRandState32(&local_b8);
                prVar29->rating =
                     (double)((float)uVar17 * fVar51) * ((double)lVar20 / (double)iVar13) * dVar7 +
                     prVar29->base_rating;
                uVar38 = uVar38 - 1;
                prVar29 = prVar29 + 1;
              } while (uVar38 != 0);
            }
            piVar41 = local_198;
            oo2net::stdsort<oo2net::rated_packet_*,oo2net::stdless<oo2net::rated_packet>_>
                      (prVar21,local_180,local_1e8);
            lVar33 = 0;
            if (0 < (longlong)local_1e0) {
              piVar39 = (int *)(local_1c0._0_8_ + 0x18);
              do {
                iVar15 = (int)piVar41 - (int)piVar23;
                if (*piVar39 < iVar15) {
                  iVar15 = *piVar39;
                }
                memcpy(piVar23,*(void **)(piVar39 + -2),(longlong)iVar15);
                piVar23 = (int *)((longlong)piVar23 + (longlong)iVar15);
                if (local_198 <= piVar23) goto LAB_14ff4c73e;
                lVar33 = lVar33 + 1;
                piVar39 = piVar39 + 8;
                piVar41 = local_198;
              } while (lVar33 < (longlong)local_1e0);
            }
            if (piVar23 < piVar41) {
              if (oo2net::g_fp_OodleNet_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*oo2net::g_fp_OodleNet_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x47d,
                           "WARNING : OodleNetwork_SelectDictionaryFromPackets - not enough packets to fill dictionary!\n"
                          );
              }
              memset(piVar23,0,(longlong)piVar41 - (longlong)piVar23);
            }
LAB_14ff4c73e:
            piVar23 = local_1a8;
            if (local_1d0 < 0x1000001) {
              pOVar26->m_lzp_window = (uchar *)local_1a8;
              pOVar26->m_lzp_window_end = (uchar *)((longlong)local_1a8 + (longlong)local_1d0);
              pOVar26->m_lzp_hash_mask = uVar14;
              oo2net::rrMemSetZero(pOVar48,(long64)local_170);
              iVar15 = local_1d0 + -0x100;
              if (4 < iVar15) goto LAB_14ff4c7e9;
            }
            else {
              oo2net::ooLogErrorPre();
              if (oo2net::g_fp_OodleNet_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*oo2net::g_fp_OodleNet_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x3e4,
                           "OODLE ERROR : window_size larger than OODLENETWORK1_MAX_DICTIONARY_SIZE ; clamping!\n"
                          );
              }
              oo2net::ooLogErrorPost();
              piVar23 = local_1a8;
              pOVar26->m_lzp_window = (uchar *)local_1a8;
              pOVar26->m_lzp_window_end = (uchar *)(local_1a8 + 0x400000);
              pOVar26->m_lzp_hash_mask = uVar14;
              oo2net::rrMemSetZero(pOVar48,(long64)local_170);
              iVar15 = 0xffff00;
LAB_14ff4c7e9:
              pbVar47 = (byte *)(piVar23 + 1);
              uVar17 = 4;
              do {
                uVar18 = *(uint *)(pbVar47 + -3);
                uVar46 = (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
                uVar18 = uVar46 * -0x61c8864f;
                uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8;
                uVar32 = uVar18 & uVar14;
                uVar19 = uVar18 + 1 & uVar14;
                bVar5 = *pbVar47;
                uVar18._0_3_ = pOVar48[uVar32].index;
                uVar18._3_1_ = pOVar48[uVar32].mp0;
                if ((uVar18 & 0xffffff) == 0) {
                  uVar18 = (uVar18 ^ uVar17) & 0xffffff ^ uVar18;
                  pOVar48[uVar32].index = (int3)uVar18;
                  pOVar48[uVar32].mp0 = (char)(uVar18 >> 0x18);
                  pOVar48[uVar32].context = uVar46;
                  pOVar48[uVar32].mp0 = bVar5;
                }
                else {
                  uVar32._0_3_ = pOVar48[uVar19].index;
                  uVar32._3_1_ = pOVar48[uVar19].mp0;
                  if ((uVar32 & 0xffffff) == 0) {
                    uVar32 = (uVar32 ^ uVar17) & 0xffffff ^ uVar32;
                    pOVar48[uVar19].index = (int3)uVar32;
                    pOVar48[uVar19].mp0 = (char)(uVar32 >> 0x18);
                    pOVar48[uVar19].context = uVar46;
                    pOVar48[uVar19].mp0 = bVar5;
                  }
                }
                uVar17 = uVar17 + 1;
                pbVar47 = pbVar47 + 1;
              } while ((int)uVar17 < iVar15);
            }
            _Dst = (*oo2net::g_fp_OodleNet_Plugin_MallocAligned)(0x4a8400,0x10);
            if (_Dst == (OodleNetwork1UDP_CountingState *)0x0) {
                    /* WARNING: Subroutine does not return */
              oo2net::Oodle_Core_Malloc_Failed(0x4a8400);
            }
            memset(_Dst,0,0x4a8400);
            oo2net::OodleNetwork1UDP_Train_State_Counting(_Dst,pOVar26,local_168,local_188,param_9);
            if (this != (OodleNetwork1UDP_State *)0x0) {
              memcpy(this->m_total_match,_Dst->m_total_match,0x4000);
              puVar34 = _Dst->m_total_nomatch;
              lVar33 = 8;
              puVar30 = this->m_total_nomatch;
              do {
                uVar10 = *(undefined8 *)(puVar34 + 2);
                *(undefined8 *)puVar30 = *(undefined8 *)puVar34;
                *(undefined8 *)(puVar30 + 2) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 6);
                *(undefined8 *)(puVar30 + 4) = *(undefined8 *)(puVar34 + 4);
                *(undefined8 *)(puVar30 + 6) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 10);
                *(undefined8 *)(puVar30 + 8) = *(undefined8 *)(puVar34 + 8);
                *(undefined8 *)(puVar30 + 10) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 0xe);
                *(undefined8 *)(puVar30 + 0xc) = *(undefined8 *)(puVar34 + 0xc);
                *(undefined8 *)(puVar30 + 0xe) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 0x12);
                *(undefined8 *)(puVar30 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
                *(undefined8 *)(puVar30 + 0x12) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 0x16);
                *(undefined8 *)(puVar30 + 0x14) = *(undefined8 *)(puVar34 + 0x14);
                *(undefined8 *)(puVar30 + 0x16) = uVar10;
                uVar10 = *(undefined8 *)(puVar34 + 0x1a);
                *(undefined8 *)(puVar30 + 0x18) = *(undefined8 *)(puVar34 + 0x18);
                *(undefined8 *)(puVar30 + 0x1a) = uVar10;
                *(undefined1 (*) [16])(puVar30 + 0x1c) = *(undefined1 (*) [16])(puVar34 + 0x1c);
                puVar34 = puVar34 + 0x20;
                lVar33 = lVar33 + -1;
                puVar30 = puVar30 + 0x20;
              } while (lVar33 != 0);
              lVar33 = 0x1000;
              this_00 = this;
              pOVar42 = _Dst;
              do {
                oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_short,281,12>::
                set_from_histo_normalized(this_00->m_coders_match,(uint *)pOVar42);
                this_00 = (OodleNetwork1UDP_State *)(this_00->m_coders_match + 1);
                pOVar42 = (OodleNetwork1UDP_CountingState *)(pOVar42->m_histos_match + 1);
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
              pHVar43 = _Dst->m_histos_nomatch;
              this_01 = this->m_coders_nomatch;
              lVar33 = 0x100;
              do {
                oo2net::O0ArithCoderJump_Const<unsigned_short,unsigned_char,256,12>::
                set_from_histo_normalized(this_01,pHVar43->counts);
                this_01 = this_01 + 1;
                pHVar43 = pHVar43 + 1;
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
            (*oo2net::g_fp_OodleNet_Plugin_Free)(_Dst);
            lVar33 = 0;
            local_138.m_begin = (uchar *)0x0;
            local_138.m_capacity = 0;
            local_128 = 0;
            puVar37 = oo2net::vector_storage<unsigned_char>::makefit1(&local_138,0x10000,0);
            if (puVar37 != (uchar *)0x0) {
              (*oo2net::g_fp_OodleNet_Plugin_Free)(puVar37);
            }
            uVar38 = local_128 + 0x10000;
            lVar35 = 0;
            local_128 = uVar38;
            if (0 < local_160) {
              do {
                puVar37 = local_168[lVar35];
                iVar15 = local_188[lVar35];
                uVar50 = (longlong)iVar15 + 0x1000;
                uVar44 = uVar38;
                uVar12 = local_128;
                if (((longlong)uVar38 <= (longlong)uVar50) &&
                   (uVar44 = uVar50, uVar12 = uVar50, uVar38 <= uVar50)) {
                  uVar44 = uVar38;
                  if ((local_138.m_capacity < uVar50) &&
                     (puVar31 = oo2net::vector_storage<unsigned_char>::makefit1
                                          (&local_138,uVar50,uVar38), uVar44 = local_128,
                     puVar31 != (uchar *)0x0)) {
                    (*oo2net::g_fp_OodleNet_Plugin_Free)(puVar31);
                    uVar44 = local_128;
                  }
                  uVar44 = uVar44 + (uVar50 - uVar38);
                  uVar12 = uVar44;
                }
                local_128 = uVar12;
                puVar31 = local_138.m_begin;
                if (uVar44 == 0) {
                  puVar31 = (uchar *)0x0;
                }
                lVar49 = oo2net::OodleNetwork1UDP_State::Encode
                                   (this,pOVar26,puVar37,(longlong)iVar15,puVar31);
                lVar33 = lVar33 + lVar49;
                lVar35 = lVar35 + 1;
                uVar38 = uVar44;
                pOVar48 = local_c8;
              } while (lVar35 < local_160);
            }
            if (local_138.m_begin != (uchar *)0x0) {
              (*oo2net::g_fp_OodleNet_Plugin_Free)(local_138.m_begin);
            }
            piVar23 = local_1a8;
            if (((lVar33 < local_108) &&
                (local_108 = lVar33, memcpy(local_100,local_1a8,(longlong)local_1d0), 0 < iVar13))
               && (0 < (longlong)local_1e0)) {
              lVar33 = (longlong)local_f8 - local_1c0._0_8_;
              prVar21 = (rated_packet *)local_1c0._0_8_;
              uVar36 = local_1e0;
              do {
                dVar9 = prVar21->base_rating;
                auVar2 = *(undefined1 (*) [16])&prVar21->packet_ptr;
                *(double *)((longlong)prVar21 + lVar33) = prVar21->rating;
                ((double *)((longlong)prVar21 + lVar33))[1] = dVar9;
                *(undefined1 (*) [16])((longlong)prVar21 + lVar33 + 0x10) = auVar2;
                *(double *)((longlong)prVar21 + lVar33 + 8) =
                     *(double *)
                      (local_1c0._0_8_ + (longlong)prVar21 + ((lVar33 + 8) - (longlong)local_f8)) *
                     dVar8 + prVar21->rating * dVar8;
                prVar21 = prVar21 + 1;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
            prVar21 = (rated_packet *)local_1c0._0_8_;
            if (oo2net::g_fp_OodleNet_Plugin_Printf !=
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
              (*oo2net::g_fp_OodleNet_Plugin_Printf)
                        (1,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x641,
                         "Trial %3d : %9d : %9d\n");
            }
            local_190 = (rated_packet *)((longlong)&local_190->rating + 1);
          } while ((longlong)local_190 < (longlong)local_158);
        }
        local_178 = local_178 + 1;
        piVar23 = local_1a8;
        uVar38 = local_1e0;
      } while (local_178 < iVar13);
    }
    prVar21 = local_f8;
    (*oo2net::g_fp_OodleNet_Plugin_Free)(piVar23);
    (*oo2net::g_fp_OodleNet_Plugin_Free)(pOVar26);
    (*oo2net::g_fp_OodleNet_Plugin_Free)(this);
    if (prVar21 != (rated_packet *)0x0) {
      (*oo2net::g_fp_OodleNet_Plugin_Free)(prVar21);
    }
  }
LAB_14ff4cc36:
  local_d0 = 0;
  if (local_e0 != (void *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(local_e0);
  }
  local_e0 = (void *)0x0;
  local_d8 = 0;
  if (local_120.m_begin != (uchar **)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(local_120.m_begin);
  }
  if ((rated_packet *)local_1c0._0_8_ != (rated_packet *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)((void *)local_1c0._0_8_);
  }
  if (local_150.m_begin != (int *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Free)(local_150.m_begin);
  }
  return 1;
}

// OodleNetwork1_SelectDictionarySupported @ 14ff4cce0

int __cdecl OodleNetwork1_SelectDictionarySupported(void)

{
  return 1;
}

// OodleNetwork1_Shared_SetWindow @ 14ff4cd00

void __cdecl
OodleNetwork1_Shared_SetWindow(OodleNetwork1_Shared *param_1,int param_2,void *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar4;
  uint uVar3;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (0x1000000 < param_4) {
    oo2net::ooLogErrorPre();
    if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    {
      (*oo2net::g_fp_OodleNet_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x3e4,
                 "OODLE ERROR : window_size larger than OODLENETWORK1_MAX_DICTIONARY_SIZE ; clamping!\n"
                );
    }
    oo2net::ooLogErrorPost();
    param_4 = 0x1000000;
  }
  param_1->m_lzp_window = param_3;
  uVar6 = (1 << ((byte)param_2 & 0x1f)) - 1;
  param_1->m_lzp_hash_mask = uVar6;
  param_1->m_lzp_window_end = (uchar *)((longlong)param_4 + (longlong)param_3);
  oo2net::rrMemSetZero(param_1->m_lzp_hash,(1L << ((byte)param_2 & 0x3f)) << 3);
  uVar3 = 4;
  if (4 < param_4 + -0x100) {
    pbVar8 = (byte *)((longlong)param_3 + 4);
    do {
      uVar4 = *(uint *)(pbVar8 + -3);
      bVar1 = *pbVar8;
      uVar7 = (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = uVar7 * -0x61c8864f;
      uVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
      uVar5 = (ulonglong)(uVar2 & uVar6);
      uVar4._0_3_ = param_1->m_lzp_hash[uVar5].index;
      uVar4._3_1_ = param_1->m_lzp_hash[uVar5].mp0;
      if ((uVar4 & 0xffffff) == 0) {
LAB_14ff4cdea:
        uVar4 = (uVar4 ^ uVar3) & 0xffffff ^ uVar4;
        param_1->m_lzp_hash[uVar5].index = (int3)uVar4;
        param_1->m_lzp_hash[uVar5].mp0 = (char)(uVar4 >> 0x18);
        param_1->m_lzp_hash[uVar5].mp0 = bVar1;
        param_1->m_lzp_hash[uVar5].context = uVar7;
      }
      else {
        uVar5 = (ulonglong)(uVar2 + 1 & uVar6);
        uVar4._0_3_ = param_1->m_lzp_hash[uVar5].index;
        uVar4._3_1_ = param_1->m_lzp_hash[uVar5].mp0;
        if ((uVar4 & 0xffffff) == 0) goto LAB_14ff4cdea;
      }
      uVar3 = uVar3 + 1;
      pbVar8 = pbVar8 + 1;
    } while ((int)uVar3 < param_4 + -0x100);
  }
  return;
}

// OodleNetwork1_Shared_Size @ 14ff4ce40

long64 __cdecl OodleNetwork1_Shared_Size(int param_1)

{
  return (1L << ((byte)param_1 & 0x3f)) * 8 + 0x20;
}

// dtor$0 @ 150325dc0

void `oo2net::OodleNetwork1UDP_MeasureTotalCompressedSize'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2net::vector<unsigned_char>::~vector<unsigned_char>((vector<unsigned_char> *)(param_2 + 0x38));
  return;
}

