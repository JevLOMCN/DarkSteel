// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147bd80a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSimpleReticle::Draw(FSimpleReticle *this,UCanvas *param_1,FLinearColor *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  FCanvasLineItem local_a8;
  
  fVar1 = param_1->OrgX;
  local_a8.Origin.field0_0x0._s_0.Z = 0.0;
  local_a8.EndPos.field0_0x0._s_0.Z = 0.0;
  local_a8._padding_ = 0;
  local_a8._padding_._0_1_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_a8.LineThickness = 0.0;
  dVar3 = (double)((param_1->ClipX - fVar1) * __real_3f000000 + fVar1);
  dVar2 = (double)((param_1->ClipY - param_1->OrgY) * __real_3f000000 + fVar1);
  local_a8._padding_ = *(longlong *)&param_2->field0_0x0;
  local_a8._padding_ = *(longlong *)((longlong)&param_2->field0_0x0 + 8);
  local_a8.Origin.field0_0x0._s_0.Y = dVar2 - (this->HorizontalOffsetMin).field0_0x0._s_0.Y;
  local_a8.Origin.field0_0x0._s_0.X = dVar3 - (this->HorizontalOffsetMin).field0_0x0._s_0.X;
  local_a8.EndPos.field0_0x0._s_0.Y = dVar2 - (this->HorizontalOffsetMax).field0_0x0._s_0.Y;
  local_a8.EndPos.field0_0x0._s_0.X = dVar3 - (this->HorizontalOffsetMax).field0_0x0._s_0.X;
  local_a8._padding_ = (longlong)dVar3;
  local_a8._padding_ = (longlong)dVar2;
  FCanvasLineItem::Draw(&local_a8,param_1->Canvas);
  local_a8.Origin.field0_0x0._s_0.X = dVar3 + (this->HorizontalOffsetMin).field0_0x0._s_0.X;
  local_a8.Origin.field0_0x0._s_0.Y = dVar2 + (this->HorizontalOffsetMin).field0_0x0._s_0.Y;
  local_a8.EndPos.field0_0x0._s_0.X = dVar3 + (this->HorizontalOffsetMax).field0_0x0._s_0.X;
  local_a8.EndPos.field0_0x0._s_0.Y = dVar2 + (this->HorizontalOffsetMax).field0_0x0._s_0.Y;
  (**(code **)(local_a8._padding_ + 0x18))(&local_a8,param_1->Canvas);
  local_a8.Origin.field0_0x0._s_0.X = dVar3 - (this->VerticalOffsetMin).field0_0x0._s_0.X;
  local_a8.Origin.field0_0x0._s_0.Y = dVar2 - (this->VerticalOffsetMin).field0_0x0._s_0.Y;
  local_a8.EndPos.field0_0x0._s_0.X = dVar3 - (this->VerticalOffsetMax).field0_0x0._s_0.X;
  local_a8.EndPos.field0_0x0._s_0.Y = dVar2 - (this->VerticalOffsetMax).field0_0x0._s_0.Y;
  (**(code **)(local_a8._padding_ + 0x18))(&local_a8,param_1->Canvas);
  local_a8.Origin.field0_0x0._s_0.X = dVar3 + (this->VerticalOffsetMin).field0_0x0._s_0.X;
  local_a8.Origin.field0_0x0._s_0.Y = dVar2 + (this->VerticalOffsetMin).field0_0x0._s_0.Y;
  local_a8.EndPos.field0_0x0._s_0.X = dVar3 + (this->VerticalOffsetMax).field0_0x0._s_0.X;
  local_a8.EndPos.field0_0x0._s_0.Y = dVar2 + (this->VerticalOffsetMax).field0_0x0._s_0.Y;
  (**(code **)(local_a8._padding_ + 0x18))(&local_a8,param_1->Canvas);
  return;
}

