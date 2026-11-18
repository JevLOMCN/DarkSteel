// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FPendingUpload @ 147abc0c0

FPendingUpload * __thiscall
FLandscapeTextureAtlas::FPendingUpload::FPendingUpload
          (FPendingUpload *this,UTexture2D *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6)

{
  FRHITexture *pFVar1;
  FTextureResource *pFVar2;
  
  pFVar2 = UTexture::GetResource((UTexture *)param_1);
  pFVar1 = (FRHITexture *)pFVar2->_padding_;
  (this->SizesAndMipBias).field0_0x0._s_0.Z = param_4;
  this->SourceTexture = pFVar1;
  (this->SizesAndMipBias).field0_0x0._s_0.X = param_2;
  (this->SizesAndMipBias).field0_0x0._s_0.Y = param_3;
  this->VisibilityChannel = param_6;
  this->Handle = param_5;
  return this;
}

// SetCommonShaderParameters @ 147b11bc0

TIntPoint<int> __thiscall
FLandscapeTextureAtlas::FPendingUpload::SetCommonShaderParameters
          (FPendingUpload *this,void *param_1,FLandscapeTextureAtlas *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong in_R9;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar1 = (this->SizesAndMipBias).field0_0x0._s_0.X;
  uVar2 = (this->SizesAndMipBias).field0_0x0._s_0.Y;
  uVar3 = (this->SizesAndMipBias).field0_0x0._s_0.Z;
  uVar4 = *(uint *)(in_R9 + 0x24);
  iVar5 = uVar4 * 2;
  iVar6 = iVar5 + uVar1;
  iVar5 = iVar5 + uVar2;
  fVar8 = __real_3f800000 / (float)uVar1;
  fVar9 = __real_3f800000 / (float)uVar2;
  FSubAllocator::GetStartOffset((FSubAllocator *)(in_R9 + 0x20),(uint)&local_res8);
  *(undefined4 *)&param_2->_padding_ = local_res8;
  *(undefined4 *)((longlong)&param_2->_padding_ + 4) = local_resc;
  *(int *)&param_2->_padding_ = iVar6;
  *(int *)((longlong)&param_2->_padding_ + 4) = iVar5;
  fVar7 = __real_3f000000;
  *(float *)&param_2->_padding_ = fVar8;
  *(float *)((longlong)&param_2->_padding_ + 4) = fVar9;
  fVar7 = fVar7 - (float)uVar4;
  *(float *)&param_2->_padding_ = fVar7 * fVar8;
  *(float *)((longlong)&param_2->_padding_ + 4) = fVar7 * fVar9;
  (param_2->AddrSpaceAllocator).TileSize = uVar3;
  *(FRHITexture **)&(param_2->AddrSpaceAllocator).TileSizeWithBorder = this->SourceTexture;
  *(FRHISamplerState **)&(param_2->AddrSpaceAllocator).DimInTilesShift =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  *(uint *)param_1 = iVar6 + 7U >> 3;
  *(uint *)((longlong)param_1 + 4) = iVar5 + 7U >> 3;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// SetShaderParameters @ 147b13ed0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall
FLandscapeTextureAtlas::FPendingUpload::SetShaderParameters
          (FPendingUpload *this,void *param_1,FLandscapeTextureAtlas *param_2,
          FRDGTextureUAV *param_3)

{
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((int)param_3[6]._padding_ == 0) {
    (param_2->AddrSpaceAllocator).TexelSize = (float)uStack0000000000000028;
    (param_2->AddrSpaceAllocator).TileScale = (float)uStack000000000000002c;
    SetCommonShaderParameters(this,param_1,param_2);
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  local_18 = 0;
  uStack_10 = 0;
  *(undefined4 *)((longlong)&local_18 + this->VisibilityChannel * 4) = 0x3f800000;
  (param_2->AddrSpaceAllocator).TexelSize = (float)(undefined4)local_18;
  (param_2->AddrSpaceAllocator).TileScale = (float)local_18._4_4_;
  *(undefined8 *)(param_2->AddrSpaceAllocator).MarkerQuadTree.AllocatorInstance.InlineData =
       uStack_10;
  *(undefined8 *)((param_2->AddrSpaceAllocator).MarkerQuadTree.AllocatorInstance.InlineData + 8) =
       _uStack0000000000000028;
  SetCommonShaderParameters(this,param_1,param_2);
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

