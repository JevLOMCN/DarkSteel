// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FRDGTextureAccess @ 145e80f70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureAccess * __thiscall
FRDGTextureAccess::FRDGTextureAccess
          (FRDGTextureAccess *this,FRDGTexture *param_1,ERHIAccess param_2)

{
  if (param_1 != (FRDGTexture *)0x0) {
    this->SubresourceRange = param_1->WholeRange;
    this->Texture = param_1;
    this->Access = param_2;
    return this;
  }
  this->Texture = (FRDGTexture *)0x0;
  (this->SubresourceRange).MipIndex = 0;
  (this->SubresourceRange).PlaneSlice = 0;
  (this->SubresourceRange).ArraySlice = 0;
  (this->SubresourceRange).NumMips = 0;
  (this->SubresourceRange).NumPlaneSlices = 0;
  (this->SubresourceRange).NumArraySlices = 0;
  this->Access = param_2;
  return this;
}

// FRDGTextureAccess @ 145e80fb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureAccess * __thiscall
FRDGTextureAccess::FRDGTextureAccess
          (FRDGTextureAccess *this,FRDGTextureSRV *param_1,ERHIAccess param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  FRDGTexture *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FRDGTextureSubresourceRange local_res8;
  
  if (param_1 == (FRDGTextureSRV *)0x0) {
    this->Access = param_2;
    this->Texture = (FRDGTexture *)0x0;
    (this->SubresourceRange).MipIndex = 0;
    (this->SubresourceRange).PlaneSlice = 0;
    (this->SubresourceRange).ArraySlice = 0;
    (this->SubresourceRange).NumMips = 0;
    (this->SubresourceRange).NumPlaneSlices = 0;
    (this->SubresourceRange).NumArraySlices = 0;
    return this;
  }
  pFVar4 = (param_1->Desc).Texture;
  cVar1 = (char)(param_1->Desc)._padding_;
  uVar5 = (uint)*(ushort *)((longlong)&(param_1->Desc)._padding_ + 4) << 0x10 |
          (uint)*(byte *)((longlong)&(param_1->Desc)._padding_ + 1);
  if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (uVar6 = 0x100, cVar1 != '\x03')) {
    uVar6 = 0;
  }
  uVar6 = uVar5 | uVar6;
  local_res8._4_4_ = SUB84(pFVar4->WholeRange,4);
  local_res8.MipIndex = (char)uVar6;
  local_res8.PlaneSlice = (char)(uVar6 >> 8);
  local_res8.ArraySlice = (short)(uVar6 >> 0x10);
  uVar6 = local_res8._4_4_;
  if (((cVar1 == '\0') && (pFVar4 != (FRDGTexture *)0x0)) && ((pFVar4->Desc).field_0x33 == '\v')) {
    uVar6 = 0;
    if ((char)(param_1->Desc)._padding_ == ',') {
      uVar6 = 0x100;
    }
    uVar7 = local_res8._4_4_ & 0xffff01ff;
    local_res8 = (FRDGTextureSubresourceRange)
                 (CONCAT44(local_res8._4_4_,uVar6 | uVar5) & 0xffff01ffffffffff | 0x10000000000);
    uVar6 = uVar7 | 0x100;
  }
  bVar2 = *(byte *)((longlong)&(param_1->Desc)._padding_ + 2);
  if (bVar2 != 0) {
    uVar6 = uVar6 & 0xffffff00 | (uint)bVar2;
    local_res8.NumMips = (char)uVar6;
    local_res8.NumPlaneSlices = (char)(uVar6 >> 8);
    local_res8.NumArraySlices = (short)(uVar6 >> 0x10);
  }
  uVar3 = *(ushort *)((longlong)&(param_1->Desc)._padding_ + 6);
  if (uVar3 != 0) {
    uVar6 = (uint)uVar3 << 0x10 | uVar6 & 0xffff;
    local_res8.NumMips = (char)uVar6;
    local_res8.NumPlaneSlices = (char)(uVar6 >> 8);
    local_res8.NumArraySlices = (short)(uVar6 >> 0x10);
  }
  if (cVar1 != '\0') {
    local_res8 = (FRDGTextureSubresourceRange)
                 (CONCAT44(uVar6,local_res8._0_4_) & 0xffff01ffffffffff | 0x10000000000);
  }
  this->SubresourceRange = local_res8;
  this->Texture = pFVar4;
  this->Access = param_2;
  return this;
}

// FRDGTextureAccess @ 145e810c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureAccess * __thiscall
FRDGTextureAccess::FRDGTextureAccess
          (FRDGTextureAccess *this,FRDGTextureUAV *param_1,ERHIAccess param_2)

{
  char cVar1;
  ushort uVar2;
  FRDGTexture *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FRDGTextureSubresourceRange local_res8;
  
  if (param_1 != (FRDGTextureUAV *)0x0) {
    pFVar3 = (param_1->Desc).Texture;
    uVar4 = SUB84(pFVar3->WholeRange,4);
    cVar1 = *(char *)((longlong)&(param_1->Desc)._padding_ + 6);
    uVar5 = uVar4 & 0xffffff01 | 1;
    if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x03')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x100;
    }
    uVar6 = (uint)*(ushort *)((longlong)&(param_1->Desc)._padding_ + 2) << 0x10 |
            (uint)*(byte *)((longlong)&(param_1->Desc)._padding_ + 1) | uVar6;
    uVar2 = *(ushort *)((longlong)&(param_1->Desc)._padding_ + 4);
    local_res8 = (FRDGTextureSubresourceRange)
                 (CONCAT44(uVar4,uVar6) & 0xffffff01ffffffff | 0x100000000);
    if (uVar2 != 0) {
      uVar5 = (uint)uVar2 << 0x10 | uVar4 & 0xff01 | 1;
      local_res8.NumMips = (char)uVar5;
      local_res8.NumPlaneSlices = (char)(uVar5 >> 8);
      local_res8.NumArraySlices = (short)(uVar5 >> 0x10);
      local_res8.MipIndex = (char)uVar6;
      local_res8.PlaneSlice = (char)(uVar6 >> 8);
      local_res8.ArraySlice = (short)(uVar6 >> 0x10);
    }
    if (cVar1 != '\0') {
      local_res8 = (FRDGTextureSubresourceRange)
                   (CONCAT44(uVar5,local_res8._0_4_) & 0xffff01ffffffffff | 0x10000000000);
    }
    this->SubresourceRange = local_res8;
    this->Texture = pFVar3;
    this->Access = param_2;
    return this;
  }
  this->Access = param_2;
  this->Texture = (FRDGTexture *)0x0;
  (this->SubresourceRange).MipIndex = 0;
  (this->SubresourceRange).PlaneSlice = 0;
  (this->SubresourceRange).ArraySlice = 0;
  (this->SubresourceRange).NumMips = 0;
  (this->SubresourceRange).NumPlaneSlices = 0;
  (this->SubresourceRange).NumArraySlices = 0;
  return this;
}

