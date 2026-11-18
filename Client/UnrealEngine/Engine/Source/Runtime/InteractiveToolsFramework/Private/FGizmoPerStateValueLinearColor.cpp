// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// StaticStruct @ 14966cd10

UScriptStruct * __cdecl FGizmoPerStateValueLinearColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoPerStateValueLinearColor,(UObject *)pUVar1,
                         L"GizmoPerStateValueLinearColor");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoPerStateValueLinearColor.OuterSingleton;
}

// GetValueForState @ 1496a95c0

FLinearColor * __thiscall
FGizmoPerStateValueLinearColor::GetValueForState
          (FGizmoPerStateValueLinearColor *this,EGizmoElementInteractionState param_1)

{
  if (param_1 != None) {
    if (param_1 == Hovering) {
      if ((this->Hover).bIsSet != false) {
        return &(this->Hover).TypedValue;
      }
    }
    else if (param_1 == Interacting) {
      if ((this->Interact).bIsSet != false) {
        return &(this->Interact).TypedValue;
      }
    }
    else if (param_1 == Selected) {
      if ((this->Select).bIsSet != false) {
        return &(this->Select).TypedValue;
      }
    }
    else if ((param_1 == Subdued) && ((this->Subdue).bIsSet != false)) {
      return &(this->Subdue).TypedValue;
    }
  }
  if ((this->Default).bIsSet == false) {
    this = (FGizmoPerStateValueLinearColor *)&FLinearColor::Transparent;
  }
  return (FLinearColor *)this;
}

