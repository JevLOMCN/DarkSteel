// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// GetCurrentLineColor @ 1496a0940

FLinearColor * __thiscall
UGizmoElementBase::FRenderTraversalState::GetCurrentLineColor
          (FRenderTraversalState *this,FLinearColor *__return_storage_ptr__)

{
  EGizmoElementInteractionState EVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  EVar1 = this->InteractionState;
  if (EVar1 == Hovering) {
    if ((this->LineRenderState).HoverLineColor.bHasValue != false) {
      uVar2 = *(undefined8 *)
               ((longlong)&(this->LineRenderState).HoverLineColor.Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->LineRenderState).HoverLineColor.Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
LAB_1496a0a4e:
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
    return __return_storage_ptr__;
  }
  if (EVar1 == Interacting) {
    if ((this->LineRenderState).InteractLineColor.bHasValue != false) {
      uVar2 = *(undefined8 *)
               ((longlong)&(this->LineRenderState).InteractLineColor.Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->LineRenderState).InteractLineColor.Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
    goto LAB_1496a0a4e;
  }
  if (EVar1 == Selected) {
    if ((this->LineRenderState).SelectLineColor.bHasValue != false) {
      fVar3 = (this->LineRenderState).SelectLineColor.Value.field0_0x0._s_0.R;
      fVar4 = (this->LineRenderState).SelectLineColor.Value.field0_0x0._s_0.G;
      fVar5 = (this->LineRenderState).SelectLineColor.Value.field0_0x0._s_0.B;
      fVar6 = (this->LineRenderState).SelectLineColor.Value.field0_0x0._s_0.A;
      goto LAB_1496a09de;
    }
    if ((this->LineRenderState).InteractLineColor.bHasValue != false) {
      fVar3 = (this->LineRenderState).InteractLineColor.Value.field0_0x0._s_0.R;
      fVar4 = (this->LineRenderState).InteractLineColor.Value.field0_0x0._s_0.G;
      fVar5 = (this->LineRenderState).InteractLineColor.Value.field0_0x0._s_0.B;
      fVar6 = (this->LineRenderState).InteractLineColor.Value.field0_0x0._s_0.A;
      goto LAB_1496a09de;
    }
  }
  else {
    if (EVar1 != Subdued) {
      if ((this->LineRenderState).LineColor.bHasValue != false) {
        uVar2 = *(undefined8 *)((longlong)&(this->LineRenderState).LineColor.Value.field0_0x0 + 8);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)&(this->LineRenderState).LineColor.Value.field0_0x0;
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
        return __return_storage_ptr__;
      }
      goto LAB_1496a0a4e;
    }
    if ((this->LineRenderState).SubdueLineColor.bHasValue != false) {
      uVar2 = *(undefined8 *)
               ((longlong)&(this->LineRenderState).SubdueLineColor.Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->LineRenderState).SubdueLineColor.Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
    if ((this->LineRenderState).LineColor.bHasValue != false) {
      uVar2 = *(undefined8 *)((longlong)&(this->LineRenderState).LineColor.Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->LineRenderState).LineColor.Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
  }
  fVar3 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._0_4_;
  fVar4 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._4_4_;
  fVar5 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._8_4_;
  fVar6 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._12_4_;
LAB_1496a09de:
  local_18 = CONCAT44(fVar4,fVar3);
  uStack_10 = CONCAT44(fVar6,fVar5);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

