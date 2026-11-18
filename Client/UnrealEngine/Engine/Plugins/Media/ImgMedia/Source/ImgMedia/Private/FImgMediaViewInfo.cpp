// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 2

// FImgMediaViewInfo @ 14ea38fd0

FImgMediaViewInfo * __thiscall
FImgMediaViewInfo::FImgMediaViewInfo(FImgMediaViewInfo *this,FImgMediaViewInfo *param_1)

{
  undefined1 *_Dst;
  undefined1 *_Src;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  double dVar5;
  
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  pTVar1 = &this->PrimitiveComponentIds;
  pTVar2 = &param_1->PrimitiveComponentIds;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar5;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar5 = (param_1->ViewDirection).field0_0x0._s_0.Y;
  (this->ViewDirection).field0_0x0._s_0.X = (param_1->ViewDirection).field0_0x0._s_0.X;
  (this->ViewDirection).field0_0x0._s_0.Y = dVar5;
  (this->ViewDirection).field0_0x0._s_0.Z = (param_1->ViewDirection).field0_0x0._s_0.Z;
  dVar5 = (param_1->ViewProjectionMatrix).M[0][1];
  (this->ViewProjectionMatrix).M[0][0] = (param_1->ViewProjectionMatrix).M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[0][3];
  (this->ViewProjectionMatrix).M[0][2] = (param_1->ViewProjectionMatrix).M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[1][1];
  (this->ViewProjectionMatrix).M[1][0] = (param_1->ViewProjectionMatrix).M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[1][3];
  (this->ViewProjectionMatrix).M[1][2] = (param_1->ViewProjectionMatrix).M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[2][1];
  (this->ViewProjectionMatrix).M[2][0] = (param_1->ViewProjectionMatrix).M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[2][3];
  (this->ViewProjectionMatrix).M[2][2] = (param_1->ViewProjectionMatrix).M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[3][1];
  (this->ViewProjectionMatrix).M[3][0] = (param_1->ViewProjectionMatrix).M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = dVar5;
  dVar5 = (param_1->ViewProjectionMatrix).M[3][3];
  (this->ViewProjectionMatrix).M[3][2] = (param_1->ViewProjectionMatrix).M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[0][1];
  (this->OverscanViewProjectionMatrix).M[0][0] = (param_1->OverscanViewProjectionMatrix).M[0][0];
  (this->OverscanViewProjectionMatrix).M[0][1] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[0][3];
  (this->OverscanViewProjectionMatrix).M[0][2] = (param_1->OverscanViewProjectionMatrix).M[0][2];
  (this->OverscanViewProjectionMatrix).M[0][3] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[1][1];
  (this->OverscanViewProjectionMatrix).M[1][0] = (param_1->OverscanViewProjectionMatrix).M[1][0];
  (this->OverscanViewProjectionMatrix).M[1][1] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[1][3];
  (this->OverscanViewProjectionMatrix).M[1][2] = (param_1->OverscanViewProjectionMatrix).M[1][2];
  (this->OverscanViewProjectionMatrix).M[1][3] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[2][1];
  (this->OverscanViewProjectionMatrix).M[2][0] = (param_1->OverscanViewProjectionMatrix).M[2][0];
  (this->OverscanViewProjectionMatrix).M[2][1] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[2][3];
  (this->OverscanViewProjectionMatrix).M[2][2] = (param_1->OverscanViewProjectionMatrix).M[2][2];
  (this->OverscanViewProjectionMatrix).M[2][3] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[3][1];
  (this->OverscanViewProjectionMatrix).M[3][0] = (param_1->OverscanViewProjectionMatrix).M[3][0];
  (this->OverscanViewProjectionMatrix).M[3][1] = dVar5;
  dVar5 = (param_1->OverscanViewProjectionMatrix).M[3][3];
  (this->OverscanViewProjectionMatrix).M[3][2] = (param_1->OverscanViewProjectionMatrix).M[3][2];
  (this->OverscanViewProjectionMatrix).M[3][3] = dVar5;
  (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->MaterialTextureMipBias = param_1->MaterialTextureMipBias;
  this->bPrimitiveHiddenMode = param_1->bPrimitiveHiddenMode;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->PrimitiveComponentIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveComponentIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x34 = 0;
  (this->PrimitiveComponentIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrimitiveComponentIds).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->PrimitiveComponentIds).Elements.field_0x10;
    *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x8 =
         *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x8;
    _Src = &(param_1->PrimitiveComponentIds).Elements.field_0x10;
    *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0xc =
         *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0xc;
    *(undefined8 *)&(param_1->PrimitiveComponentIds).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->PrimitiveComponentIds).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->PrimitiveComponentIds).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->PrimitiveComponentIds).Elements.field_0x20 =
           *(undefined8 *)&(param_1->PrimitiveComponentIds).Elements.field_0x20;
      *(undefined8 *)&(param_1->PrimitiveComponentIds).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x28 =
           *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x28;
      *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x2c =
           *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x2c;
      *(undefined8 *)&(param_1->PrimitiveComponentIds).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x30 =
         *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x30;
    *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x34 =
         *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x34;
    *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PrimitiveComponentIds).Elements.field_0x34 = 0;
  }
  if ((param_1->PrimitiveComponentIds).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->PrimitiveComponentIds).Hash.InlineData =
         *(undefined4 *)(param_1->PrimitiveComponentIds).Hash.InlineData;
  }
  FVar4 = (this->PrimitiveComponentIds).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->PrimitiveComponentIds).Hash.SecondaryData =
       (param_1->PrimitiveComponentIds).Hash.SecondaryData;
  (param_1->PrimitiveComponentIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrimitiveComponentIds).HashSize = (param_1->PrimitiveComponentIds).HashSize;
  (param_1->PrimitiveComponentIds).HashSize = 0;
  return this;
}

// FImgMediaViewInfo @ 14ea39220

FImgMediaViewInfo * __thiscall
FImgMediaViewInfo::FImgMediaViewInfo(FImgMediaViewInfo *this,FImgMediaViewInfo *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar1;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar1 = (param_1->ViewDirection).field0_0x0._s_0.Y;
  (this->ViewDirection).field0_0x0._s_0.X = (param_1->ViewDirection).field0_0x0._s_0.X;
  (this->ViewDirection).field0_0x0._s_0.Y = dVar1;
  (this->ViewDirection).field0_0x0._s_0.Z = (param_1->ViewDirection).field0_0x0._s_0.Z;
  dVar1 = (param_1->ViewProjectionMatrix).M[0][1];
  (this->ViewProjectionMatrix).M[0][0] = (param_1->ViewProjectionMatrix).M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[0][3];
  (this->ViewProjectionMatrix).M[0][2] = (param_1->ViewProjectionMatrix).M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[1][1];
  (this->ViewProjectionMatrix).M[1][0] = (param_1->ViewProjectionMatrix).M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[1][3];
  (this->ViewProjectionMatrix).M[1][2] = (param_1->ViewProjectionMatrix).M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[2][1];
  (this->ViewProjectionMatrix).M[2][0] = (param_1->ViewProjectionMatrix).M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[2][3];
  (this->ViewProjectionMatrix).M[2][2] = (param_1->ViewProjectionMatrix).M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[3][1];
  (this->ViewProjectionMatrix).M[3][0] = (param_1->ViewProjectionMatrix).M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = dVar1;
  dVar1 = (param_1->ViewProjectionMatrix).M[3][3];
  (this->ViewProjectionMatrix).M[3][2] = (param_1->ViewProjectionMatrix).M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[0][1];
  (this->OverscanViewProjectionMatrix).M[0][0] = (param_1->OverscanViewProjectionMatrix).M[0][0];
  (this->OverscanViewProjectionMatrix).M[0][1] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[0][3];
  (this->OverscanViewProjectionMatrix).M[0][2] = (param_1->OverscanViewProjectionMatrix).M[0][2];
  (this->OverscanViewProjectionMatrix).M[0][3] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[1][1];
  (this->OverscanViewProjectionMatrix).M[1][0] = (param_1->OverscanViewProjectionMatrix).M[1][0];
  (this->OverscanViewProjectionMatrix).M[1][1] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[1][3];
  (this->OverscanViewProjectionMatrix).M[1][2] = (param_1->OverscanViewProjectionMatrix).M[1][2];
  (this->OverscanViewProjectionMatrix).M[1][3] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[2][1];
  (this->OverscanViewProjectionMatrix).M[2][0] = (param_1->OverscanViewProjectionMatrix).M[2][0];
  (this->OverscanViewProjectionMatrix).M[2][1] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[2][3];
  (this->OverscanViewProjectionMatrix).M[2][2] = (param_1->OverscanViewProjectionMatrix).M[2][2];
  (this->OverscanViewProjectionMatrix).M[2][3] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[3][1];
  (this->OverscanViewProjectionMatrix).M[3][0] = (param_1->OverscanViewProjectionMatrix).M[3][0];
  (this->OverscanViewProjectionMatrix).M[3][1] = dVar1;
  dVar1 = (param_1->OverscanViewProjectionMatrix).M[3][3];
  (this->OverscanViewProjectionMatrix).M[3][2] = (param_1->OverscanViewProjectionMatrix).M[3][2];
  (this->OverscanViewProjectionMatrix).M[3][3] = dVar1;
  (this->ViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->MaterialTextureMipBias = param_1->MaterialTextureMipBias;
  this->bPrimitiveHiddenMode = param_1->bPrimitiveHiddenMode;
  *(undefined8 *)&(this->PrimitiveComponentIds).Elements = 0;
  *(undefined8 *)&(this->PrimitiveComponentIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveComponentIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveComponentIds).Elements.field_0x34 = 0;
  (this->PrimitiveComponentIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrimitiveComponentIds).HashSize = 0;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(&this->PrimitiveComponentIds,&param_1->PrimitiveComponentIds);
  return this;
}

