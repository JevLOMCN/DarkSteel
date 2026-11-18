// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StoreUndo @ 14a29ae70

void __cdecl
UE::ControlRig::FControlRigCommandChange::StoreUndo
          (UObject *param_1,
          TUniquePtr<UE::ControlRig::FControlRigCommandChange,TDefaultDelete<UE::ControlRig::FControlRigCommandChange>_>
          param_2,FText *param_3)

{
  FControlRigCommandChange FVar1;
  
  FVar1 = *param_2.Ptr;
  if (FVar1 != (FControlRigCommandChange)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a29ae80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)FVar1 + 0x48))(FVar1,1);
    return;
  }
  return;
}

// ToString @ 14a359b40

FString * __thiscall
UE::ControlRig::FControlRigCommandChange::ToString
          (FControlRigCommandChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRigCommand");
  return __return_storage_ptr__;
}

