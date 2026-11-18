// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetMinimumVoxelSize @ 148384310

int __thiscall FVolumetricLightmapBrickData::GetMinimumVoxelSize(FVolumetricLightmapBrickData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->field_0x1c == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AmbientVector.Format != PF_Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return GPixelFormats[(byte)this->field_0x1dc].BlockBytes +
         GPixelFormats[(byte)this->field_0x16c].BlockBytes +
         GPixelFormats[(byte)this->field_0x134].BlockBytes +
         GPixelFormats[(byte)this->field_0xfc].BlockBytes +
         GPixelFormats[(byte)this->field_0xc4].BlockBytes +
         GPixelFormats[(byte)this->field_0x8c].BlockBytes +
         GPixelFormats[(byte)this->field_0x54].BlockBytes +
         GPixelFormats[(byte)this->field_0x1c].BlockBytes;
}

// ReleaseRHI @ 14839df30

void __thiscall FVolumetricLightmapBrickData::ReleaseRHI(FVolumetricLightmapBrickData *this)

{
  FRHIResource *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  pFVar1 = *(FRHIResource **)&this->field_0x20;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x20 = 0;
    FRHIResource::Release(pFVar1);
  }
  puVar2 = (undefined8 *)&this->field_0x58;
  uVar3 = uVar4;
  do {
    pFVar1 = (FRHIResource *)*puVar2;
    if (pFVar1 != (FRHIResource *)0x0) {
      *puVar2 = 0;
      FRHIResource::Release(pFVar1);
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 7;
  } while (uVar3 < 6);
  pFVar1 = *(FRHIResource **)&this->field_0x1a8;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1a8 = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)&this->field_0x1e0;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1e0 = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)&this->field_0x28;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x28 = 0;
    FRHIResource::Release(pFVar1);
  }
  puVar2 = (undefined8 *)&this->field_0x60;
  do {
    pFVar1 = (FRHIResource *)*puVar2;
    if (pFVar1 != (FRHIResource *)0x0) {
      *puVar2 = 0;
      FRHIResource::Release(pFVar1);
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 7;
  } while (uVar4 < 6);
  pFVar1 = *(FRHIResource **)&this->field_0x1b0;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1b0 = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)&this->field_0x1e8;
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)&this->field_0x1e8 = 0;
    FRHIResource::Release(pFVar1);
  }
  return;
}

