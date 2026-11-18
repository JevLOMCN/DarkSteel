// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a475300

UScriptStruct * __cdecl FRigUnit_HierarchyAddControl_ProxySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControl_ProxySettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings.OuterSingleton
  ;
}

// Configure @ 14a520230

void __thiscall
FRigUnit_HierarchyAddControl_ProxySettings::Configure
          (FRigUnit_HierarchyAddControl_ProxySettings *this,FRigControlSettings *param_1)

{
  if (this->bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&this->DrivenControls);
  param_1->ShapeVisibility = this->ShapeVisibility;
  return;
}

// ConfigureFrom @ 14a520c80

void __thiscall
FRigUnit_HierarchyAddControl_ProxySettings::ConfigureFrom
          (FRigUnit_HierarchyAddControl_ProxySettings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  this->bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->DrivenControls,&param_2->DrivenControls);
  this->ShapeVisibility = param_2->ShapeVisibility;
  return;
}

