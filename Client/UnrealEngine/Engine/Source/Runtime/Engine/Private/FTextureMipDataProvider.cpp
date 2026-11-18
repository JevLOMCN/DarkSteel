// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTextureMipDataProvider @ 1488085b0

FTextureMipDataProvider * __thiscall
FTextureMipDataProvider::FTextureMipDataProvider
          (FTextureMipDataProvider *this,UTexture *param_1,ETickState param_2,ETickThread param_3)

{
  byte bVar1;
  byte bVar2;
  
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  (this->ResourceState).field0_0x0 = (FStreamableRenderResourceState_u_0)param_1->_padding_;
  this->CurrentFirstLODIdx =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 3);
  this->NextTickState = param_2;
  this->PendingFirstLODIdx = (uint)bVar2 - (uint)bVar1;
  this->NextTickThread = param_3;
  return this;
}

// PostprocessGPUMipData @ 14884e5c0

bool __thiscall
FTextureMipDataProvider::PostprocessGPUMipData
          (FTextureMipDataProvider *this,FTextureUpdateContext *param_1,
          TRefCountPtr<FRHITexture> *param_2,int param_3,int param_4,
          FTextureUpdateSyncOptions *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014884e5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x28))();
  return (bool)uVar1;
}

