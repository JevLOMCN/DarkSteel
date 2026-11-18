// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// StaticStruct @ 14966d230

UScriptStruct * __cdecl FGizmoElementLineRenderStateAttributes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes,
                         (UObject *)pUVar1,L"GizmoElementLineRenderStateAttributes");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoElementLineRenderStateAttributes.OuterSingleton;
}

// GetLineColor @ 1496a3120

FLinearColor * __thiscall
FGizmoElementLineRenderStateAttributes::GetLineColor
          (FGizmoElementLineRenderStateAttributes *this,FLinearColor *__return_storage_ptr__,
          EGizmoElementInteractionState param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == Hovering) {
    if ((this->HoverLineColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->HoverLineColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->HoverLineColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
LAB_1496a31fa:
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
    return __return_storage_ptr__;
  }
  if (param_1 == Interacting) {
    if ((this->InteractLineColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->InteractLineColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->InteractLineColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
    goto LAB_1496a31fa;
  }
  if (param_1 == Selected) {
    if ((this->SelectLineColor).bHasValue != false) {
      fVar2 = (this->SelectLineColor).Value.field0_0x0._s_0.R;
      fVar3 = (this->SelectLineColor).Value.field0_0x0._s_0.G;
      fVar4 = (this->SelectLineColor).Value.field0_0x0._s_0.B;
      fVar5 = (this->SelectLineColor).Value.field0_0x0._s_0.A;
      goto LAB_1496a31a2;
    }
    if ((this->InteractLineColor).bHasValue != false) {
      fVar2 = (this->InteractLineColor).Value.field0_0x0._s_0.R;
      fVar3 = (this->InteractLineColor).Value.field0_0x0._s_0.G;
      fVar4 = (this->InteractLineColor).Value.field0_0x0._s_0.B;
      fVar5 = (this->InteractLineColor).Value.field0_0x0._s_0.A;
      goto LAB_1496a31a2;
    }
  }
  else {
    if (param_1 != Subdued) {
      if ((this->LineColor).bHasValue != false) {
        uVar1 = *(undefined8 *)((longlong)&(this->LineColor).Value.field0_0x0 + 8);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)&(this->LineColor).Value.field0_0x0;
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
        return __return_storage_ptr__;
      }
      goto LAB_1496a31fa;
    }
    if ((this->SubdueLineColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->SubdueLineColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->SubdueLineColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
    if ((this->LineColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->LineColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->LineColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
  }
  fVar2 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._0_4_;
  fVar3 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._4_4_;
  fVar4 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._8_4_;
  fVar5 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._12_4_;
LAB_1496a31a2:
  local_18 = CONCAT44(fVar3,fVar2);
  uStack_10 = CONCAT44(fVar5,fVar4);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

// Update @ 1496c3640

void __thiscall
FGizmoElementLineRenderStateAttributes::Update
          (FGizmoElementLineRenderStateAttributes *this,
          FGizmoElementLineRenderStateAttributes *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((param_1->LineColor).bHasValue != false) &&
     (((this->LineColor).bOverridesChildState == false || ((this->LineColor).bHasValue == false))))
  {
    uVar1 = *(undefined8 *)&(param_1->LineColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->LineColor).Value.field0_0x0 + 8);
    (this->LineColor).bHasValue = true;
    *(undefined8 *)&(this->LineColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->LineColor).Value.field0_0x0 + 8) = uVar2;
    (this->LineColor).bOverridesChildState = (param_1->LineColor).bOverridesChildState;
  }
  if (((param_1->HoverLineColor).bHasValue != false) &&
     (((this->HoverLineColor).bOverridesChildState == false ||
      ((this->HoverLineColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->HoverLineColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->HoverLineColor).Value.field0_0x0 + 8);
    (this->HoverLineColor).bHasValue = true;
    *(undefined8 *)&(this->HoverLineColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->HoverLineColor).Value.field0_0x0 + 8) = uVar2;
    (this->HoverLineColor).bOverridesChildState = (param_1->HoverLineColor).bOverridesChildState;
  }
  if (((param_1->InteractLineColor).bHasValue != false) &&
     (((this->InteractLineColor).bOverridesChildState == false ||
      ((this->InteractLineColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->InteractLineColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->InteractLineColor).Value.field0_0x0 + 8);
    (this->InteractLineColor).bHasValue = true;
    *(undefined8 *)&(this->InteractLineColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->InteractLineColor).Value.field0_0x0 + 8) = uVar2;
    (this->InteractLineColor).bOverridesChildState =
         (param_1->InteractLineColor).bOverridesChildState;
  }
  if (((param_1->SelectLineColor).bHasValue != false) &&
     (((this->SelectLineColor).bOverridesChildState == false ||
      ((this->SelectLineColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->SelectLineColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->SelectLineColor).Value.field0_0x0 + 8);
    (this->SelectLineColor).bHasValue = true;
    *(undefined8 *)&(this->SelectLineColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->SelectLineColor).Value.field0_0x0 + 8) = uVar2;
    (this->SelectLineColor).bOverridesChildState = (param_1->SelectLineColor).bOverridesChildState;
  }
  if (((param_1->SubdueLineColor).bHasValue != false) &&
     (((this->SubdueLineColor).bOverridesChildState == false ||
      ((this->SubdueLineColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->SubdueLineColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->SubdueLineColor).Value.field0_0x0 + 8);
    (this->SubdueLineColor).bHasValue = true;
    *(undefined8 *)&(this->SubdueLineColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->SubdueLineColor).Value.field0_0x0 + 8) = uVar2;
    (this->SubdueLineColor).bOverridesChildState = (param_1->SubdueLineColor).bOverridesChildState;
  }
  return;
}

