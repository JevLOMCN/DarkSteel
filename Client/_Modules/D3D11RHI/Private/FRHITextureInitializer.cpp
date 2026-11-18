// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// FRHITextureInitializer @ 14596e0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FRHITextureInitializer::FRHITextureInitializer
          (FRHITextureInitializer *this,FRHITextureInitializer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort uVar9;
  ETextureDimension EVar10;
  EPixelFormat EVar11;
  undefined2 uVar12;
  longlong *plVar13;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
  *(undefined8 *)&this->FinalizeCallback = *(undefined8 *)&param_1->FinalizeCallback;
  *(undefined8 *)&(this->FinalizeCallback).field_0x28 =
       *(undefined8 *)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x28 = 0;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x18;
  *(undefined8 *)&(this->FinalizeCallback).field_0x10 =
       *(undefined8 *)&(param_1->FinalizeCallback).field_0x10;
  *(undefined8 *)&(this->FinalizeCallback).field_0x18 = uVar5;
  *(undefined8 *)&(this->FinalizeCallback).field_0x20 =
       *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  if (*(longlong *)&this->FinalizeCallback != 0) {
    *(undefined8 *)&param_1->FinalizeCallback = 0;
  }
  *(undefined8 *)&this->GetSubresourceCallback = *(undefined8 *)&param_1->GetSubresourceCallback;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x28 =
       *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x28;
  *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x28 = 0;
  uVar5 = *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x18;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x10 =
       *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x10;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x18 = uVar5;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x20 =
       *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x20;
  if (*(longlong *)&this->GetSubresourceCallback != 0) {
    *(undefined8 *)&param_1->GetSubresourceCallback = 0;
  }
  this->CommandList = param_1->CommandList;
  this->Texture = param_1->Texture;
  this->WritableData = param_1->WritableData;
  this->WritableSize = param_1->WritableSize;
  uVar8 = (param_1->Desc).Depth;
  uVar9 = (param_1->Desc).ArraySize;
  EVar10 = (param_1->Desc).Dimension;
  EVar11 = (param_1->Desc).Format;
  uVar12 = *(undefined2 *)&(param_1->Desc).field_0xe;
  (this->Desc).Extent.field0_0x0 = (param_1->Desc).Extent.field0_0x0;
  (this->Desc).Depth = uVar8;
  (this->Desc).ArraySize = uVar9;
  (this->Desc).Dimension = EVar10;
  (this->Desc).Format = EVar11;
  *(undefined2 *)&(this->Desc).field_0xe = uVar12;
  lVar6 = *(longlong *)&param_1->FinalizeCallback;
  uVar7 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x8;
  uVar1 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x10;
  uVar2 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x14;
  uVar3 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x18;
  uVar4 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  plStack_10 = *(longlong **)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&param_1->FinalizeCallback = 0;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x8 = uStack_30;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x10 = local_28;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x14 = uStack_24;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x18 = uStack_20;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c = uStack_1c;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x20 = (undefined4)local_18;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x24 = local_18._4_4_;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x28 = 0;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x2c = 0;
  local_28 = uVar1;
  uStack_24 = uVar2;
  uStack_20 = uVar3;
  uStack_1c = uVar4;
  local_18 = uVar5;
  if (lVar6 != 0) {
    plVar13 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar13 = plStack_10;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  lVar6 = *(longlong *)&param_1->GetSubresourceCallback;
  uVar1 = *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x10;
  uVar2 = *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x14;
  uVar3 = *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x18;
  uVar4 = *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x20;
  plStack_10 = *(longlong **)&(param_1->GetSubresourceCallback).field_0x28;
  *(undefined8 *)&param_1->GetSubresourceCallback = 0;
  *(undefined8 *)&(param_1->GetSubresourceCallback).field_0x8 = uVar7;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x10 = local_28;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x14 = uStack_24;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x18 = uStack_20;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x1c = uStack_1c;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x20 = (undefined4)local_18;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x24 = local_18._4_4_;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x28 = 0;
  *(undefined4 *)&(param_1->GetSubresourceCallback).field_0x2c = 0;
  local_28 = uVar1;
  uStack_24 = uVar2;
  uStack_20 = uVar3;
  uStack_1c = uVar4;
  local_18 = uVar5;
  if (lVar6 != 0) {
    plVar13 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar13 = plStack_10;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  param_1->CommandList = (FRHICommandListBase *)0x0;
  param_1->Texture = (FRHITexture *)0x0;
  param_1->WritableData = (void *)0x0;
  param_1->WritableSize = 0;
  (param_1->Desc).Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  (param_1->Desc).Depth = 1;
  (param_1->Desc).ArraySize = 1;
  (param_1->Desc).Dimension = Texture2D;
  (param_1->Desc).Format = PF_Unknown;
  *(undefined2 *)&(param_1->Desc).field_0xe = 0;
  return this;
}

