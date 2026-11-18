// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a4720e0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControl_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_Settings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControl_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControl_Settings.OuterSingleton;
}

// ConfigureFrom @ 14a472200

void __thiscall
FRigUnit_HierarchyAddControl_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControl_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  this->DisplayName = param_2->DisplayName;
  this->bSelectable = param_2->AnimationType != VisualCue;
  return;
}

// Configure @ 14a472260

void __thiscall
FRigUnit_HierarchyAddControl_Settings::Configure
          (FRigUnit_HierarchyAddControl_Settings *this,FRigControlSettings *param_1)

{
  ERigControlAnimationType EVar1;
  
  param_1->DisplayName = this->DisplayName;
  EVar1 = VisualCue;
  if (this->bSelectable != false) {
    EVar1 = AnimationControl;
  }
  param_1->AnimationType = EVar1;
  return;
}

// ~FRigUnit_HierarchyAddControl_Settings @ 14a5188d0

void __thiscall
FRigUnit_HierarchyAddControl_Settings::~FRigUnit_HierarchyAddControl_Settings
          (FRigUnit_HierarchyAddControl_Settings *this)

{
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControl_Settings__6B_;
  return;
}

