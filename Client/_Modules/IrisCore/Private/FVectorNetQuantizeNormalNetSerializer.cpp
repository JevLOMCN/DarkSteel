// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// Dequantize @ 14432b3e0

void __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (uint *)param_2->Source;
  pdVar2 = (double *)param_2->Target;
  fVar3 = DequantizeSignedUnitFloat(*puVar1,0x10);
  fVar4 = DequantizeSignedUnitFloat(puVar1[1],0x10);
  fVar5 = DequantizeSignedUnitFloat(puVar1[2],0x10);
  *pdVar2 = (double)fVar3;
  pdVar2[1] = (double)fVar4;
  pdVar2[2] = (double)fVar5;
  return;
}

// Deserialize @ 14432dcc0

void __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = param_1->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x10);
  uVar3 = FNetBitStreamReader::ReadBits(this,0x10);
  uVar4 = FNetBitStreamReader::ReadBits(this,0x10);
  puVar1 = (undefined8 *)param_2->Target;
  *puVar1 = CONCAT44((uVar3 ^ 0x8000) - 0x8000,(uVar2 ^ 0x8000) - 0x8000);
  puVar1[1] = (ulonglong)((uVar4 ^ 0x8000) - 0x8000);
  return;
}

// IsEqual @ 1443346f0

bool __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  
  pdVar2 = (double *)param_2->Source0;
  pdVar3 = (double *)param_2->Source1;
  if (param_2->bStateIsQuantized != false) {
    return (*(int *)((longlong)pdVar2 + 4) == *(int *)((longlong)pdVar3 + 4) &&
           (*(int *)((longlong)pdVar2 + 0xc) == *(int *)((longlong)pdVar3 + 0xc) &&
           *(int *)(pdVar2 + 1) == *(int *)(pdVar3 + 1))) && *(int *)pdVar2 == *(int *)pdVar3;
  }
  uVar4 = QuantizeSignedUnitFloat((float)*pdVar3,0x10);
  uVar5 = QuantizeSignedUnitFloat((float)*pdVar2,0x10);
  if (uVar5 == uVar4) {
    dVar1 = pdVar3[1];
    uVar4 = QuantizeSignedUnitFloat((float)pdVar2[1],0x10);
    uVar5 = QuantizeSignedUnitFloat((float)dVar1,0x10);
    if (uVar4 == uVar5) {
      uVar4 = QuantizeSignedUnitFloat((float)pdVar3[2],0x10);
      uVar5 = QuantizeSignedUnitFloat((float)pdVar2[2],0x10);
      return uVar5 == uVar4;
    }
  }
  return false;
}

// Quantize @ 1443375e0

void __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pdVar1 = (double *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  uVar3 = QuantizeSignedUnitFloat((float)*pdVar1,0x10);
  uVar4 = QuantizeSignedUnitFloat((float)pdVar1[1],0x10);
  uVar5 = QuantizeSignedUnitFloat((float)pdVar1[2],0x10);
  *puVar2 = CONCAT44(uVar4,uVar3);
  puVar2[1] = (ulonglong)uVar5;
  return;
}

// Serialize @ 14433cda0

void __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  
  puVar1 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*puVar1,0x10);
  FNetBitStreamWriter::WriteBits(this,puVar1[1],0x10);
  FNetBitStreamWriter::WriteBits(this,puVar1[2],0x10);
  return;
}

// Validate @ 14433fa50

bool __cdecl
UE::Net::FVectorNetQuantizeNormalNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  
  pdVar3 = (double *)param_2->Source;
  iVar4 = _finite(*pdVar3);
  if (iVar4 != 0) {
    iVar4 = _finite(pdVar3[1]);
    if (iVar4 != 0) {
      iVar4 = _finite(pdVar3[2]);
      if (iVar4 != 0) {
        dVar5 = *pdVar3;
        if (__real_3ff0000000000000 <= *pdVar3) {
          dVar5 = __real_3ff0000000000000;
        }
        dVar1 = pdVar3[1];
        dVar2 = pdVar3[2];
        if (dVar5 <= __real_bff0000000000000) {
          dVar5 = __real_bff0000000000000;
        }
        if (dVar5 == *pdVar3) {
          dVar5 = dVar1;
          if (__real_3ff0000000000000 <= dVar1) {
            dVar5 = __real_3ff0000000000000;
          }
          if (dVar5 <= __real_bff0000000000000) {
            dVar5 = __real_bff0000000000000;
          }
          if (dVar5 == dVar1) {
            dVar5 = dVar2;
            if (__real_3ff0000000000000 <= dVar2) {
              dVar5 = __real_3ff0000000000000;
            }
            if (dVar5 <= __real_bff0000000000000) {
              dVar5 = __real_bff0000000000000;
            }
            if (dVar5 == dVar2) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

