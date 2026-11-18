// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 16

// Dequantize @ 144329fb0

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ulong64 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = param_2->Source;
  pfVar2 = (float *)param_2->Target;
  fVar4 = (float)*(ushort *)(uVar1 + 4) * __real_3bb40000;
  fVar3 = (float)*(ushort *)(uVar1 + 6) * __real_3bb40000;
  *pfVar2 = (float)*(ushort *)(uVar1 + 2) * __real_3bb40000;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar3;
  return;
}

// Dequantize @ 14432a010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = (double *)param_2->Target;
  uVar1 = *(uint *)(param_2->Source + 4);
  *pdVar2 = (double)*(ushort *)(param_2->Source + 2) * __real_3f76800000000000;
  dVar3 = (double)(uVar1 >> 0x10) * _UNK_150bc1af8;
  pdVar2[1] = (double)(uVar1 & 0xffff) * ___xmm_3f768000000000003f76800000000000;
  pdVar2[2] = dVar3;
  return;
}

// Deserialize @ 14432c310

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  undefined2 uStackX_a;
  undefined2 uStackX_c;
  undefined2 uStackX_e;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  if ((uVar1 & 1) == 0) {
    uStackX_a = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_a = (undefined2)uVar2;
  }
  if ((uVar1 & 2) == 0) {
    uStackX_c = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_c = (undefined2)uVar2;
  }
  if ((uVar1 & 4) == 0) {
    uStackX_e = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_e = (undefined2)uVar2;
  }
  *(ulonglong *)param_2->Target =
       CONCAT26(uStackX_e,CONCAT24(uStackX_c,CONCAT22(uStackX_a,(short)uVar1)));
  return;
}

// Deserialize @ 14432c3d0

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  undefined2 uStackX_a;
  undefined2 uStackX_c;
  undefined2 uStackX_e;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  if ((uVar1 & 1) == 0) {
    uStackX_a = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_a = (undefined2)uVar2;
  }
  if ((uVar1 & 2) == 0) {
    uStackX_c = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_c = (undefined2)uVar2;
  }
  if ((uVar1 & 4) == 0) {
    uStackX_e = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    uStackX_e = (undefined2)uVar2;
  }
  *(ulonglong *)param_2->Target =
       CONCAT26(uStackX_e,CONCAT24(uStackX_c,CONCAT22(uStackX_a,(short)uVar1)));
  return;
}

// DeserializeDelta @ 14432e720

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 local_res8;
  
  this = param_1->BitStreamReader;
  local_res8 = *(longlong *)param_2->Prev;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  sVar5 = (short)((ulonglong)local_res8 >> 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar5 = sVar5 + (short)uVar2;
    local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_res8 = (ulonglong)CONCAT42(local_res8._4_4_,sVar5) << 0x10;
  }
  sVar4 = local_res8._4_2_;
  if ((uVar1 & 2) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar4 = local_res8._4_2_ + (short)uVar2;
    local_res8._0_6_ = CONCAT24(sVar4,(undefined4)local_res8);
  }
  sVar3 = local_res8._6_2_;
  if ((uVar1 & 4) != 0) {
    uVar1 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar3 = local_res8._6_2_ + (short)uVar1;
    local_res8 = CONCAT26(sVar3,(undefined6)local_res8);
  }
  local_res8 = CONCAT62(local_res8._2_6_,
                        -(ushort)(sVar3 != 0) & 4 | -(ushort)(sVar4 != 0) & 2 | (ushort)(sVar5 != 0)
                       );
  *(longlong *)param_2->_padding_ = local_res8;
  return;
}

// DeserializeDelta @ 14432e820

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 local_res8;
  
  this = param_1->BitStreamReader;
  local_res8 = *(longlong *)param_2->Prev;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  sVar5 = (short)((ulonglong)local_res8 >> 0x10);
  if ((uVar1 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar5 = sVar5 + (short)uVar2;
    local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_res8 = (ulonglong)CONCAT42(local_res8._4_4_,sVar5) << 0x10;
  }
  sVar4 = local_res8._4_2_;
  if ((uVar1 & 2) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar4 = local_res8._4_2_ + (short)uVar2;
    local_res8._0_6_ = CONCAT24(sVar4,(undefined4)local_res8);
  }
  sVar3 = local_res8._6_2_;
  if ((uVar1 & 4) != 0) {
    uVar1 = FNetBitStreamReader::ReadBits(this,0x10);
    sVar3 = local_res8._6_2_ + (short)uVar1;
    local_res8 = CONCAT26(sVar3,(undefined6)local_res8);
  }
  local_res8 = CONCAT62(local_res8._2_6_,
                        -(ushort)(sVar3 != 0) & 4 | -(ushort)(sVar4 != 0) & 2 | (ushort)(sVar5 != 0)
                       );
  *(longlong *)param_2->_padding_ = local_res8;
  return;
}

// IsEqual @ 1443336d0

bool __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)param_2->Source0;
  pfVar2 = (float *)param_2->Source1;
  if (param_2->bStateIsQuantized != false) {
    return (*(short *)((longlong)pfVar1 + 2) == *(short *)((longlong)pfVar2 + 2) &&
           (*(short *)((longlong)pfVar1 + 6) == *(short *)((longlong)pfVar2 + 6) &&
           *(short *)(pfVar1 + 1) == *(short *)(pfVar2 + 1))) &&
           *(short *)pfVar1 == *(short *)pfVar2;
  }
  if (pfVar2[2] == pfVar1[2]) {
    return pfVar2[1] == pfVar1[1] && *pfVar2 == *pfVar1;
  }
  return false;
}

// IsEqual @ 144333760

bool __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = (double *)param_2->Source0;
  pdVar2 = (double *)param_2->Source1;
  if (param_2->bStateIsQuantized != false) {
    return (*(short *)((longlong)pdVar1 + 2) == *(short *)((longlong)pdVar2 + 2) &&
           (*(short *)((longlong)pdVar1 + 6) == *(short *)((longlong)pdVar2 + 6) &&
           *(short *)((longlong)pdVar1 + 4) == *(short *)((longlong)pdVar2 + 4))) &&
           *(short *)pdVar1 == *(short *)pdVar2;
  }
  if (pdVar2[2] == pdVar1[2]) {
    return pdVar2[1] == pdVar1[1] && *pdVar2 == *pdVar1;
  }
  return false;
}

// Quantize @ 144335940

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 local_res10;
  
  pfVar1 = (float *)param_2->Source;
  iVar4 = (int)ROUND(*pfVar1 * __real_43b60b61 + __real_3f000000) >> 1;
  sVar3 = (short)((int)ROUND(pfVar1[1] * __real_43b60b61 + __real_3f000000) >> 1);
  sVar2 = (short)((int)ROUND(pfVar1[2] * __real_43b60b61 + __real_3f000000) >> 1);
  local_res10 = CONCAT26(sVar2,CONCAT24(sVar3,iVar4 << 0x10));
  local_res10 = CONCAT62(local_res10._2_6_,
                         -(ushort)(sVar2 != 0) & 4 | -(ushort)(sVar3 != 0) & 2 |
                         (ushort)((short)iVar4 != 0));
  *(undefined8 *)param_2->Target = local_res10;
  return;
}

// Quantize @ 1443359f0

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  double *pdVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined8 local_res10;
  
  pdVar1 = (double *)param_2->Source;
  sVar4 = (short)((longlong)ROUND(*pdVar1 * __real_4076c16c16c16c17 + __real_3fe0000000000000) >> 1)
  ;
  sVar3 = (short)((longlong)ROUND(pdVar1[1] * __real_4076c16c16c16c17 + __real_3fe0000000000000) >>
                 1);
  sVar2 = (short)((longlong)ROUND(pdVar1[2] * __real_4076c16c16c16c17 + __real_3fe0000000000000) >>
                 1);
  local_res10 = CONCAT62(CONCAT24(sVar2,CONCAT22(sVar3,sVar4)),
                         -(ushort)(sVar2 != 0) & 4 | -(ushort)(sVar3 != 0) & 2 |
                         (ushort)(sVar4 != 0));
  *(undefined8 *)param_2->Target = local_res10;
  return;
}

// Serialize @ 14433b810

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort *puVar1;
  FNetBitStreamWriter *this;
  
  puVar1 = (ushort *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,(uint)*puVar1,3);
  if ((*puVar1 & 1) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[1],0x10);
  }
  if ((*puVar1 & 2) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[2],0x10);
  }
  if ((*puVar1 & 4) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[3],0x10);
  }
  return;
}

// Serialize @ 14433b890

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort *puVar1;
  FNetBitStreamWriter *this;
  
  puVar1 = (ushort *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,(uint)*puVar1,3);
  if ((*puVar1 & 1) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[1],0x10);
  }
  if ((*puVar1 & 2) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[2],0x10);
  }
  if ((*puVar1 & 4) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)puVar1[3],0x10);
  }
  return;
}

// SerializeDelta @ 14433d6d0

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_2->Prev;
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  uVar3 = *(short *)(lVar2 + 2) - *(short *)(uVar1 + 2);
  uVar4 = *(short *)(lVar2 + 4) - *(short *)(uVar1 + 4);
  uVar5 = *(short *)(lVar2 + 6) - *(short *)(uVar1 + 6);
  uVar7 = -(uint)(uVar5 != 0) & 4;
  uVar6 = -(uint)(uVar4 != 0) & 2;
  FNetBitStreamWriter::WriteBits(this,uVar7 | uVar6 | (uint)(uVar3 != 0),3);
  if (uVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar3,0x10);
  }
  if (uVar6 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar4,0x10);
  }
  if (uVar7 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar5,0x10);
  }
  return;
}

// SerializeDelta @ 14433d7b0

void __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_2->Prev;
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  uVar3 = *(short *)(lVar2 + 2) - *(short *)(uVar1 + 2);
  uVar4 = *(short *)(lVar2 + 4) - *(short *)(uVar1 + 4);
  uVar5 = *(short *)(lVar2 + 6) - *(short *)(uVar1 + 6);
  uVar7 = -(uint)(uVar5 != 0) & 4;
  uVar6 = -(uint)(uVar4 != 0) & 2;
  FNetBitStreamWriter::WriteBits(this,uVar7 | uVar6 | (uint)(uVar3 != 0),3);
  if (uVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar3,0x10);
  }
  if (uVar6 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar4,0x10);
  }
  if (uVar7 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar5,0x10);
  }
  return;
}

// Validate @ 14433f430

bool __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<float>_>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)param_2->Source;
  iVar2 = _finite((double)*pfVar1);
  if (iVar2 != 0) {
    iVar2 = _finite((double)pfVar1[1]);
    if (iVar2 != 0) {
      iVar2 = _finite((double)pfVar1[2]);
      if (iVar2 != 0) {
        return true;
      }
    }
  }
  return false;
}

// Validate @ 14433f490

bool __cdecl
UE::Net::FRotatorAsShortNetSerializerBase<UE::Math::TRotator<double>_>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  double *pdVar1;
  int iVar2;
  
  pdVar1 = (double *)param_2->Source;
  iVar2 = _finite(*pdVar1);
  if (iVar2 != 0) {
    iVar2 = _finite(pdVar1[1]);
    if (iVar2 != 0) {
      iVar2 = _finite(pdVar1[2]);
      if (iVar2 != 0) {
        return true;
      }
    }
  }
  return false;
}

