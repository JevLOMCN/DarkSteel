// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// StaticStruct @ 14966ced0

UScriptStruct * __cdecl FGizmoElementColorAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementColorAttribute,(UObject *)pUVar1,
                         L"GizmoElementColorAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoElementColorAttribute.OuterSingleton;
}

// GetColor @ 1496a0680

FLinearColor * __thiscall
FGizmoElementColorAttribute::GetColor
          (FGizmoElementColorAttribute *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if (this->bHasValue != false) {
    uVar1 = *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Value).field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)DefaultColor;
  return __return_storage_ptr__;
}

// Reset @ 1496bbb50

void __thiscall FGizmoElementColorAttribute::Reset(FGizmoElementColorAttribute *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = DefaultColor.field0_0x0;
  this->bHasValue = false;
  this->bOverridesChildState = false;
  (this->Value).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// SetColor @ 1496bd3c0

void __thiscall
FGizmoElementColorAttribute::SetColor
          (FGizmoElementColorAttribute *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->bHasValue = true;
  this->bOverridesChildState = param_2;
  *(undefined8 *)&(this->Value).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar2;
  return;
}

// UpdateState @ 1496c5990

void __thiscall
FGizmoElementColorAttribute::UpdateState
          (FGizmoElementColorAttribute *this,FGizmoElementColorAttribute *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_1->bHasValue != false) &&
     ((this->bOverridesChildState == false || (this->bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->Value).field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->Value).field0_0x0 + 8);
    this->bHasValue = true;
    *(undefined8 *)&(this->Value).field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar2;
    this->bOverridesChildState = param_1->bOverridesChildState;
  }
  return;
}

