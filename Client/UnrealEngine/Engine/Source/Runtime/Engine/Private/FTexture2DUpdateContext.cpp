// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTexture2DUpdateContext @ 148808330

FTexture2DUpdateContext * __thiscall
FTexture2DUpdateContext::FTexture2DUpdateContext
          (FTexture2DUpdateContext *this,UStreamableRenderAsset *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  FTextureResource *pFVar4;
  FTexture2DResource *this_00;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar5;
  TArrayView<FTexture2DMipMap_const_*,int> local_18;
  
  if (param_1 != (UStreamableRenderAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14880837a;
  }
  param_1 = (UStreamableRenderAsset *)(UTexture2D *)0x0;
LAB_14880837a:
  this->Texture = (UTexture2D *)param_1;
  this->Resource = (FTexture2DResource *)0x0;
  (this->MipsView).DataPtr = (FTexture2DMipMap **)0x0;
  (this->MipsView).ArrayNum = 0;
  this->CurrentThread = param_2;
  if ((UTexture2D *)param_1 != (UTexture2D *)0x0) {
    pFVar4 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar4 == (FTextureResource *)0x0) {
      this->Resource = (FTexture2DResource *)0x0;
    }
    else {
      pFVar4 = UTexture::GetResource((UTexture *)this->Texture);
      this_00 = (FTexture2DResource *)(**(code **)(pFVar4->_padding_ + 0x58))(pFVar4);
      this->Resource = this_00;
      if (this_00 != (FTexture2DResource *)0x0) {
        pTVar5 = FStreamableTextureResource::GetPlatformMipsView
                           ((FStreamableTextureResource *)this_00,&local_18);
        iVar1 = pTVar5->ArrayNum;
        uVar2 = *(undefined4 *)&pTVar5->field_0xc;
        (this->MipsView).DataPtr = pTVar5->DataPtr;
        (this->MipsView).ArrayNum = iVar1;
        *(undefined4 *)&(this->MipsView).field_0xc = uVar2;
      }
    }
  }
  return this;
}

// FTexture2DUpdateContext @ 148808400

FTexture2DUpdateContext * __thiscall
FTexture2DUpdateContext::FTexture2DUpdateContext
          (FTexture2DUpdateContext *this,UTexture2D *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  FTextureResource *pFVar3;
  FTexture2DResource *this_00;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar4;
  TArrayView<FTexture2DMipMap_const_*,int> local_18;
  
  this->Texture = param_1;
  this->Resource = (FTexture2DResource *)0x0;
  (this->MipsView).DataPtr = (FTexture2DMipMap **)0x0;
  (this->MipsView).ArrayNum = 0;
  this->CurrentThread = param_2;
  if (param_1 != (UTexture2D *)0x0) {
    pFVar3 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar3 == (FTextureResource *)0x0) {
      this->Resource = (FTexture2DResource *)0x0;
    }
    else {
      pFVar3 = UTexture::GetResource((UTexture *)this->Texture);
      this_00 = (FTexture2DResource *)(**(code **)(pFVar3->_padding_ + 0x58))(pFVar3);
      this->Resource = this_00;
      if (this_00 != (FTexture2DResource *)0x0) {
        pTVar4 = FStreamableTextureResource::GetPlatformMipsView
                           ((FStreamableTextureResource *)this_00,&local_18);
        iVar1 = pTVar4->ArrayNum;
        uVar2 = *(undefined4 *)&pTVar4->field_0xc;
        (this->MipsView).DataPtr = pTVar4->DataPtr;
        (this->MipsView).ArrayNum = iVar1;
        *(undefined4 *)&(this->MipsView).field_0xc = uVar2;
        return this;
      }
    }
  }
  return this;
}

