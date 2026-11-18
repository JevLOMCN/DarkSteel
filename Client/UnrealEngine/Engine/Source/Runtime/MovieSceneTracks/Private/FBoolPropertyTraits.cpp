// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// GetObjectPropertyValue @ 14668e260

void __cdecl
UE::MovieScene::FBoolPropertyTraits::GetObjectPropertyValue
          (UObject *param_1,FBoolMetaData param_2,ushort param_3,bool *param_4)

{
  ushort uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(&param_1->field_0x0 + param_3);
  uVar1 = (ushort)param_2 & 0xff;
  if (param_2.BitFieldSize == '\0') {
    *param_4 = SUB81(*puVar2,0);
  }
  else {
    if (uVar1 == 1) {
      *param_4 = (byte)((byte)*puVar2 & (byte)(1 << (param_2.BitIndex & 0x1f))) != 0;
      return;
    }
    if (uVar1 == 2) {
      *param_4 = ((ushort)*puVar2 >> ((ushort)param_2 >> 8 & 0x1f) & 1) != 0;
      return;
    }
    if (uVar1 == 4) {
      *param_4 = ((uint)*puVar2 >> ((ushort)param_2 >> 8 & 0x1f) & 1) != 0;
      return;
    }
    if (uVar1 == 8) {
      *param_4 = (*puVar2 >> ((ulonglong)((ushort)param_2 >> 8) & 0x3f) & 1) != 0;
      return;
    }
  }
  return;
}

// SetObjectPropertyValue @ 1466fab70

void __cdecl
UE::MovieScene::FBoolPropertyTraits::SetObjectPropertyValue
          (UObject *param_1,FBoolMetaData param_2,ushort param_3,bool param_4)

{
  byte bVar1;
  ushort uVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)(&param_1->field_0x0 + param_3);
  uVar2 = (ushort)param_2 & 0xff;
  if (param_2.BitFieldSize == '\0') {
    *(bool *)puVar3 = param_4;
  }
  else {
    bVar1 = param_2.BitIndex;
    if (uVar2 == 1) {
      *(byte *)puVar3 =
           (byte)*puVar3 & ~(byte)(1 << ((ushort)param_2 >> 8 & 0x1f)) | param_4 << (bVar1 & 0x1f);
      return;
    }
    if (uVar2 == 2) {
      *(ushort *)puVar3 =
           (ushort)*puVar3 & ~(ushort)(1 << ((ushort)param_2 >> 8 & 0x1f)) |
           (ushort)param_4 << (bVar1 & 0x1f);
      return;
    }
    if (uVar2 == 4) {
      *(uint *)puVar3 =
           (uint)param_4 << (bVar1 & 0x1f) | (uint)*puVar3 & ~(1 << ((ushort)param_2 >> 8 & 0x1f));
      return;
    }
    if (uVar2 == 8) {
      *puVar3 = (ulonglong)param_4 << (bVar1 & 0x3f) | *puVar3 & ~(1L << ((ulonglong)bVar1 & 0x3f));
      return;
    }
  }
  return;
}

