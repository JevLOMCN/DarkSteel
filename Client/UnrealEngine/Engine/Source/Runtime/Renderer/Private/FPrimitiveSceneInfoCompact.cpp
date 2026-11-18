// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FPrimitiveSceneInfoCompact @ 145295a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfoCompact * __thiscall
FPrimitiveSceneInfoCompact::FPrimitiveSceneInfoCompact
          (FPrimitiveSceneInfoCompact *this,FPrimitiveSceneInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FPrimitiveSceneProxy *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  FPrimitiveFlagsCompact FVar9;
  
  pFVar5 = param_1->Proxy;
  FVar9 = (FPrimitiveFlagsCompact)
          ((pFVar5->bCastDynamicShadow ^ (this->PrimitiveFlagsCompact).bCastDynamicShadow) & 1 ^
          (byte)this->PrimitiveFlagsCompact);
  this->PrimitiveFlagsCompact = FVar9;
  FVar9 = (FPrimitiveFlagsCompact)(((byte)pFVar5->field_0x7a >> 5 ^ (byte)FVar9) & 2 ^ (byte)FVar9);
  this->PrimitiveFlagsCompact = FVar9;
  FVar9 = (FPrimitiveFlagsCompact)(((byte)pFVar5->field_0x7d >> 5 ^ (byte)FVar9) & 4 ^ (byte)FVar9);
  this->PrimitiveFlagsCompact = FVar9;
  FVar9 = (FPrimitiveFlagsCompact)((pFVar5->field_0x81 << 2 ^ (byte)FVar9) & 8 ^ (byte)FVar9);
  this->PrimitiveFlagsCompact = FVar9;
  FVar9 = (FPrimitiveFlagsCompact)((pFVar5->field_0x81 << 2 ^ (byte)FVar9) & 0x10 ^ (byte)FVar9);
  this->PrimitiveFlagsCompact = FVar9;
  this->PrimitiveFlagsCompact =
       (FPrimitiveFlagsCompact)(((byte)pFVar5->field_0x81 >> 1 ^ (byte)FVar9) & 0x20 ^ (byte)FVar9);
  this->PrimitiveSceneInfo = param_1;
  this->Proxy = param_1->Proxy;
  pFVar5 = param_1->Proxy;
  dVar1 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar2 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.Y;
  uVar6 = *(undefined4 *)((longlong)&(pFVar5->Bounds).Origin.field0_0x0 + 0x10);
  uVar7 = *(undefined4 *)((longlong)&(pFVar5->Bounds).Origin.field0_0x0 + 0x14);
  dVar3 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar4 = (pFVar5->Bounds).SphereRadius;
  dVar8 = (pFVar5->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (pFVar5->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar8;
  *(undefined4 *)((longlong)&(this->Bounds).Origin.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->Bounds).Origin.field0_0x0 + 0x14) = uVar7;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = (float)dVar1;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (float)dVar2;
  *(ulonglong *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 8) =
       CONCAT44((float)dVar4,(float)dVar3);
  this->MinDrawDistance = param_1->Proxy->MinDrawDistance;
  this->MaxDrawDistance = param_1->Proxy->MaxDrawDistance;
  this->VisibilityId = param_1->Proxy->VisibilityId;
  return this;
}

