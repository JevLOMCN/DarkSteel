// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FNaniteRasterEntry @ 145036af0

FNaniteRasterEntry * __thiscall
FNaniteRasterEntry::FNaniteRasterEntry(FNaniteRasterEntry *this,FNaniteRasterEntry *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  FDisplacementScaling FVar2;
  undefined8 uVar3;
  undefined1 *_Src;
  
  *(undefined8 *)&this->CacheMap = 0;
  *(undefined8 *)&(this->CacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->CacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->CacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->CacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CacheMap).field_0x34 = 0;
  *(undefined8 *)&(this->CacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->CacheMap).field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)&this->CacheMap = *(undefined8 *)&param_1->CacheMap;
    *(undefined8 *)&param_1->CacheMap = 0;
    *(undefined4 *)&(this->CacheMap).field_0x8 = *(undefined4 *)&(param_1->CacheMap).field_0x8;
    *(undefined4 *)&(this->CacheMap).field_0xc = *(undefined4 *)&(param_1->CacheMap).field_0xc;
    *(undefined8 *)&(param_1->CacheMap).field_0x8 = 0;
    _Src = &(param_1->CacheMap).field_0x10;
    _Dst = &(this->CacheMap).field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->CacheMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->CacheMap).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->CacheMap).field_0x20 = *(undefined8 *)&(param_1->CacheMap).field_0x20;
      *(undefined8 *)&(param_1->CacheMap).field_0x20 = 0;
      *(undefined4 *)&(this->CacheMap).field_0x28 = *(undefined4 *)&(param_1->CacheMap).field_0x28;
      *(undefined4 *)&(this->CacheMap).field_0x2c = *(undefined4 *)&(param_1->CacheMap).field_0x2c;
      *(undefined8 *)&(param_1->CacheMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->CacheMap).field_0x30 = *(undefined4 *)&(param_1->CacheMap).field_0x30;
    *(undefined4 *)&(this->CacheMap).field_0x34 = *(undefined4 *)&(param_1->CacheMap).field_0x34;
    *(undefined4 *)&(param_1->CacheMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CacheMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->CacheMap).field_0x40 == 0) {
    *(undefined4 *)&(this->CacheMap).field_0x38 = *(undefined4 *)&(param_1->CacheMap).field_0x38;
  }
  pvVar1 = *(void **)&(this->CacheMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)&(this->CacheMap).field_0x40 = *(undefined8 *)&(param_1->CacheMap).field_0x40;
  *(undefined8 *)&(param_1->CacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->CacheMap).field_0x48 = *(undefined4 *)&(param_1->CacheMap).field_0x48;
  *(undefined4 *)&(param_1->CacheMap).field_0x48 = 0;
  FVar2 = (param_1->RasterPipeline).DisplacementScaling;
  (this->RasterPipeline).RasterMaterial = (param_1->RasterPipeline).RasterMaterial;
  (this->RasterPipeline).DisplacementScaling = FVar2;
  uVar3 = *(undefined8 *)&(param_1->RasterPipeline).field_0x18;
  (this->RasterPipeline).DisplacementFadeRange = (param_1->RasterPipeline).DisplacementFadeRange;
  *(undefined8 *)&(this->RasterPipeline).field_0x18 = uVar3;
  this->ReferenceCount = param_1->ReferenceCount;
  this->BinIndex = param_1->BinIndex;
  return this;
}

