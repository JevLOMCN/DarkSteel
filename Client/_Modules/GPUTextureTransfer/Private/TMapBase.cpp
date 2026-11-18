// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 2

// Find @ 14d7593f0

FTextureInfo * __thiscall
TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
::Find(TMapBase<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITexture_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureInfo,0>_>
       *this,FRHITexture *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FTextureInfo *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FRHITexture *)*plVar2 == param_1) {
          pFVar4 = (FTextureInfo *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FTextureInfo *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FTextureInfo *)0x0;
}

// Find @ 14d759490

FExternalBufferInfo * __thiscall
TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
::Find(TMapBase<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo,0>_>
       *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FExternalBufferInfo *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == param_1) {
          pFVar4 = (FExternalBufferInfo *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FExternalBufferInfo *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FExternalBufferInfo *)0x0;
}

