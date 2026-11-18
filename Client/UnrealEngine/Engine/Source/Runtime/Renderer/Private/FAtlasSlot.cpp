// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator= @ 144afc840

FAtlasSlot * __thiscall IESAtlas::FAtlasSlot::operator=(FAtlasSlot *this,FAtlasSlot *param_1)

{
  TRefCountPtr<FRHITextureReference> *pTVar1;
  FRHITextureReference *this_00;
  TRefCountPtr<FRHITextureReference> *pTVar2;
  
  pTVar1 = &this->SourceTexture;
  this->Id = param_1->Id;
  this->SliceIndex = param_1->SliceIndex;
  this->RefCount = param_1->RefCount;
  pTVar2 = &param_1->SourceTexture;
  (this->CachedResolution).field0_0x0 = (param_1->CachedResolution).field0_0x0;
  if (pTVar1 != pTVar2) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHITextureReference *)0x0;
    if (this_00 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this->bForceRefresh = param_1->bForceRefresh;
  return this;
}

// operator= @ 145364160

FAtlasSlot * __thiscall RectLightAtlas::FAtlasSlot::operator=(FAtlasSlot *this,FAtlasSlot *param_1)

{
  TRefCountPtr<FRHITextureReference> *pTVar1;
  FRHITextureReference *this_00;
  TIntPoint<int>_u_0 TVar2;
  undefined8 uVar3;
  TRefCountPtr<FRHITextureReference> *pTVar4;
  
  pTVar1 = &this->SourceTexture;
  this->Id = param_1->Id;
  TVar2 = (param_1->Rect).Resolution.field0_0x0;
  (this->Rect).Origin.field0_0x0 = (param_1->Rect).Origin.field0_0x0;
  (this->Rect).Resolution.field0_0x0 = TVar2;
  uVar3 = *(undefined8 *)((longlong)&(param_1->SourceScaleOffset).field0_0x0 + 8);
  pTVar4 = &param_1->SourceTexture;
  *(undefined8 *)&(this->SourceScaleOffset).field0_0x0 =
       *(undefined8 *)&(param_1->SourceScaleOffset).field0_0x0;
  *(undefined8 *)((longlong)&(this->SourceScaleOffset).field0_0x0 + 8) = uVar3;
  if (pTVar1 != pTVar4) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar4->Reference;
    pTVar4->Reference = (FRHITextureReference *)0x0;
    if (this_00 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  (this->CachedSourceTextureResolution).field0_0x0 =
       (param_1->CachedSourceTextureResolution).field0_0x0;
  this->RefCount = param_1->RefCount;
  this->bForceRefresh = param_1->bForceRefresh;
  return this;
}

