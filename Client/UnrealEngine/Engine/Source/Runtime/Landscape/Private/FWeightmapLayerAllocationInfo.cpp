// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// StaticStruct @ 145f22f20

UScriptStruct * __cdecl FWeightmapLayerAllocationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo,(UObject *)pUVar1,
                         L"WeightmapLayerAllocationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWeightmapLayerAllocationInfo.OuterSingleton;
}

// GetHash @ 145f2e4c0

uint __thiscall FWeightmapLayerAllocationInfo::GetHash(FWeightmapLayerAllocationInfo *this)

{
  ULandscapeLayerInfoObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = (this->LayerInfo).field0_0x0.DebugPtr;
  uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = this->WeightmapTextureIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = this->WeightmapTextureChannel - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetLayerName @ 145f2e600

FName __thiscall FWeightmapLayerAllocationInfo::GetLayerName(FWeightmapLayerAllocationInfo *this)

{
  ULandscapeLayerInfoObject *pUVar1;
  FName in_RDX;
  
  pUVar1 = (this->LayerInfo).field0_0x0.DebugPtr;
  if (pUVar1 != (ULandscapeLayerInfoObject *)0x0) {
    *(FName *)in_RDX = pUVar1->LayerName;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

