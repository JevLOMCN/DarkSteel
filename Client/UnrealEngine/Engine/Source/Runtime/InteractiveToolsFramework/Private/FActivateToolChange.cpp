// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// Apply @ 1496d7220

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall FActivateToolChange::Apply(FActivateToolChange *this,UObject *param_1)

{
  UInteractiveToolManager *pUVar1;
  
  pUVar1 = CastChecked<UInteractiveToolManager,UObject>(param_1);
  if (pUVar1 != (UInteractiveToolManager *)0x0) {
    if (this->bIsDeactivate != false) {
                    /* WARNING: Could not recover jumptable at 0x0001496d725b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0x3b0))(pUVar1,this->Side,this->ShutdownType);
      return;
    }
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,this->Side,&this->ToolType);
    (**(code **)(pUVar1->_padding_ + 0x3a8))(pUVar1,this->Side);
  }
  return;
}

// HasExpired @ 1496dea60

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall FActivateToolChange::HasExpired(FActivateToolChange *this,UObject *param_1)

{
  UInteractiveToolManager *pUVar1;
  
  pUVar1 = CastChecked<UInteractiveToolManager,UObject>(param_1);
  if ((pUVar1 != (UInteractiveToolManager *)0x0) && (pUVar1->bIsActive != false)) {
    return false;
  }
  return true;
}

// Revert @ 1496e55b0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall FActivateToolChange::Revert(FActivateToolChange *this,UObject *param_1)

{
  UInteractiveToolManager *pUVar1;
  
  pUVar1 = CastChecked<UInteractiveToolManager,UObject>(param_1);
  if (pUVar1 != (UInteractiveToolManager *)0x0) {
    if (this->bIsDeactivate != false) {
      (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,this->Side,&this->ToolType);
                    /* WARNING: Could not recover jumptable at 0x0001496e55f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0x3a8))(pUVar1,this->Side);
      return;
    }
    (**(code **)(pUVar1->_padding_ + 0x3b0))(pUVar1,this->Side,this->ShutdownType);
  }
  return;
}

// ToString @ 1496e6b70

/* WARNING: Enum "EToolSide": Some values do not have unique names */

FString * __thiscall
FActivateToolChange::ToString(FActivateToolChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Change Tool");
  return __return_storage_ptr__;
}

