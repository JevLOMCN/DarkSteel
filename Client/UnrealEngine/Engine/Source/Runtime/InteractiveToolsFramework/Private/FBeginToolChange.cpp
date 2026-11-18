// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// Apply @ 1496d7290

void __thiscall FBeginToolChange::Apply(FBeginToolChange *this,UObject *param_1)

{
  return;
}

// HasExpired @ 1496dea90

bool __thiscall FBeginToolChange::HasExpired(FBeginToolChange *this,UObject *param_1)

{
  char cVar1;
  UInteractiveToolManager *pUVar2;
  
  pUVar2 = CastChecked<UInteractiveToolManager,UObject>(param_1);
  if ((pUVar2 != (UInteractiveToolManager *)0x0) && (pUVar2->bIsActive != false)) {
    cVar1 = (**(code **)(pUVar2->_padding_ + 0x318))(pUVar2);
    if (cVar1 != '\0') {
      return false;
    }
  }
  return true;
}

// Revert @ 1496e5620

void __thiscall FBeginToolChange::Revert(FBeginToolChange *this,UObject *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  UInteractiveToolManager *pUVar2;
  
  pUVar2 = CastChecked<UInteractiveToolManager,UObject>(param_1);
  cVar1 = (**(code **)(pUVar2->_padding_ + 0x318))(pUVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x3b0);
                    /* WARNING: Could not recover jumptable at 0x0001496e565e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar2,1,2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// ToString @ 1496e6ba0

FString * __thiscall
FBeginToolChange::ToString(FBeginToolChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Begin Tool");
  return __return_storage_ptr__;
}

