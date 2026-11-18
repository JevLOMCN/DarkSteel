// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// StaticStruct @ 14966cba0

UScriptStruct * __cdecl FGizmoPerStateValueDouble::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoPerStateValueDouble,(UObject *)pUVar1,
                         L"GizmoPerStateValueDouble");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoPerStateValueDouble.OuterSingleton;
}

// GetValueForState @ 1496a9500

double __thiscall
FGizmoPerStateValueDouble::GetValueForState
          (FGizmoPerStateValueDouble *this,EGizmoElementInteractionState param_1)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  if (param_1 != None) {
    if (param_1 == Hovering) {
      pFVar1 = (FGizmoPerStateValueDouble *)&this->Hover;
      if (((this->Hover).bIsSet == false) && (pFVar1 = this, (this->Default).bIsSet == false)) {
        pFVar1 = (FGizmoPerStateValueDouble *)&ValueDefault;
      }
    }
    else if (param_1 == Interacting) {
      pFVar1 = (FGizmoPerStateValueDouble *)&this->Interact;
      if ((this->Interact).bIsSet == false) {
        if ((this->Default).bIsSet == false) {
          this = (FGizmoPerStateValueDouble *)&ValueDefault;
        }
        return (this->Default).TypedValue;
      }
    }
    else if (param_1 == Selected) {
      pFVar1 = (FGizmoPerStateValueDouble *)&this->Select;
      if ((this->Select).bIsSet == false) {
        if ((this->Default).bIsSet == false) {
          this = (FGizmoPerStateValueDouble *)&ValueDefault;
        }
        return (this->Default).TypedValue;
      }
    }
    else {
      if (param_1 != Subdued) goto LAB_1496a95a4;
      pFVar1 = (FGizmoPerStateValueDouble *)&this->Subdue;
      if ((this->Subdue).bIsSet == false) {
        if ((this->Default).bIsSet == false) {
          this = (FGizmoPerStateValueDouble *)&ValueDefault;
        }
        return (this->Default).TypedValue;
      }
    }
    return (pFVar1->Default).TypedValue;
  }
LAB_1496a95a4:
  if ((this->Default).bIsSet == false) {
    this = (FGizmoPerStateValueDouble *)&ValueDefault;
  }
  return (this->Default).TypedValue;
}

