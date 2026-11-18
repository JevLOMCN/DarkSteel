// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// Dequantize @ 144329f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ushort uVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = (double *)param_2->Target;
  uVar1 = *(ushort *)(param_2->Source + 2);
  *pdVar2 = (double)*(byte *)(param_2->Source + 1) * __real_3ff6800000000000;
  dVar3 = (double)(byte)(uVar1 >> 8) * _UNK_150bc1b08;
  pdVar2[1] = (double)(uVar1 & 0xff) * ___xmm_3ff68000000000003ff6800000000000;
  pdVar2[2] = dVar3;
  return;
}

// Deserialize @ 14432c260

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  undefined4 local_res8;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  if ((uVar1 & 1) == 0) {
    local_res8._0_2_ = (ushort)(byte)uVar1;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,8);
    local_res8._0_2_ = CONCAT11((char)uVar2,(byte)uVar1);
  }
  if ((uVar1 & 2) == 0) {
    local_res8._0_3_ = (uint3)(ushort)local_res8;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,8);
    local_res8._0_3_ = CONCAT12((char)uVar2,(ushort)local_res8);
  }
  if ((uVar1 & 4) == 0) {
    local_res8 = (uint)(uint3)local_res8;
  }
  else {
    uVar1 = FNetBitStreamReader::ReadBits(this,8);
    local_res8 = CONCAT13((char)uVar1,(uint3)local_res8);
  }
  *(uint *)param_2->Target = local_res8;
  return;
}

// DeserializeDelta @ 14432e650

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  int iVar1;
  FNetBitStreamReader *this;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  undefined4 local_res8;
  
  this = param_1->BitStreamReader;
  iVar1 = *(int *)param_2->Prev;
  uVar3 = FNetBitStreamReader::ReadBits(this,3);
  if ((uVar3 & 1) == 0) {
    local_res8._1_1_ = (char)((uint)iVar1 >> 8);
    cVar6 = local_res8._1_1_;
    local_res8 = iVar1;
  }
  else {
    uVar4 = FNetBitStreamReader::ReadBits(this,8);
    local_res8._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
    local_res8 = (uint)CONCAT21(local_res8._2_2_,(char)uVar4) << 8;
    cVar6 = (char)uVar4;
  }
  if ((uVar3 & 2) == 0) {
    cVar5 = local_res8._2_1_;
  }
  else {
    uVar4 = FNetBitStreamReader::ReadBits(this,8);
    local_res8._0_3_ = CONCAT12((char)uVar4,(undefined2)local_res8);
    cVar5 = (char)uVar4;
  }
  if ((uVar3 & 4) == 0) {
    cVar2 = local_res8._3_1_;
  }
  else {
    uVar3 = FNetBitStreamReader::ReadBits(this,8);
    local_res8 = CONCAT13((char)uVar3,(undefined3)local_res8);
    cVar2 = (char)uVar3;
  }
  local_res8 = CONCAT31(local_res8._1_3_,
                        -(cVar2 != '\0') & 4U | -(cVar5 != '\0') & 2U | cVar6 != '\0');
  *(int *)param_2->_padding_ = local_res8;
  return;
}

// IsEqual @ 144333640

bool __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = (double *)param_2->Source0;
  pdVar2 = (double *)param_2->Source1;
  if (param_2->bStateIsQuantized != false) {
    return (*(char *)((longlong)pdVar1 + 1) == *(char *)((longlong)pdVar2 + 1) &&
           (*(char *)((longlong)pdVar1 + 3) == *(char *)((longlong)pdVar2 + 3) &&
           *(char *)((longlong)pdVar1 + 2) == *(char *)((longlong)pdVar2 + 2))) &&
           *(char *)pdVar1 == *(char *)pdVar2;
  }
  if (pdVar2[2] == pdVar1[2]) {
    return pdVar2[1] == pdVar1[1] && *pdVar2 == *pdVar1;
  }
  return false;
}

// Quantize @ 1443358a0

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  double *pdVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 local_res10;
  
  pdVar1 = (double *)param_2->Source;
  cVar4 = (char)((longlong)ROUND(*pdVar1 * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1);
  cVar3 = (char)((longlong)ROUND(pdVar1[1] * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1
                );
  cVar2 = (char)((longlong)ROUND(pdVar1[2] * __real_3ff6c16c16c16c17 + __real_3fe0000000000000) >> 1
                );
  local_res10 = CONCAT31(CONCAT12(cVar2,CONCAT11(cVar3,cVar4)),
                         -(cVar2 != '\0') & 4U | -(cVar3 != '\0') & 2U | cVar4 != '\0');
  *(undefined4 *)param_2->Target = local_res10;
  return;
}

// Serialize @ 14433b790

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte *pbVar1;
  FNetBitStreamWriter *this;
  
  pbVar1 = (byte *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,(uint)*pbVar1,3);
  if ((*pbVar1 & 1) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)pbVar1[1],8);
  }
  if ((*pbVar1 & 2) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)pbVar1[2],8);
  }
  if ((*pbVar1 & 4) != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)pbVar1[3],8);
  }
  return;
}

// SerializeDelta @ 14433d600

void __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2->Prev;
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  uVar3 = 0;
  if (*(char *)(lVar2 + 2) != *(char *)(uVar1 + 2)) {
    uVar3 = 2;
  }
  uVar5 = (uint)(*(char *)(lVar2 + 1) != *(char *)(uVar1 + 1));
  uVar4 = 0;
  if (*(char *)(lVar2 + 3) != *(char *)(uVar1 + 3)) {
    uVar4 = 4;
  }
  FNetBitStreamWriter::WriteBits(this,uVar3 | uVar5 | uVar4,3);
  if (uVar5 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)*(byte *)(lVar2 + 1),8);
  }
  if (uVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)*(byte *)(lVar2 + 2),8);
  }
  if (uVar4 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)*(byte *)(lVar2 + 3),8);
  }
  return;
}

// Validate @ 14433f3e0

bool __cdecl
UE::Net::FRotatorAsByteNetSerializerBase<UE::Math::TRotator<double>_>::Validate
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

