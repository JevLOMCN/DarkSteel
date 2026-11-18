// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// SetValue<int> @ 14a3aef40

void __thiscall FRigVMExternalVariable::SetValue<int>(FRigVMExternalVariable *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)this->Memory = *param_1;
  return;
}

// SetValue<float> @ 14a3aefe0

void __thiscall FRigVMExternalVariable::SetValue<float>(FRigVMExternalVariable *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(float *)this->Memory = *param_1;
  return;
}

// SetValue<double> @ 14a3af080

void __thiscall
FRigVMExternalVariable::SetValue<double>(FRigVMExternalVariable *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(double *)this->Memory = *param_1;
  return;
}

// SetValue<FName> @ 14a3af120

void __thiscall FRigVMExternalVariable::SetValue<FName>(FRigVMExternalVariable *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(FName *)this->Memory = *param_1;
  return;
}

// SetValue<FString> @ 14a3af1c0

void __thiscall
FRigVMExternalVariable::SetValue<FString>(FRigVMExternalVariable *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::operator=((FString *)this->Memory,param_1);
  return;
}

// SetValue<bool> @ 14a3af260

void __thiscall FRigVMExternalVariable::SetValue<bool>(FRigVMExternalVariable *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if (((((!bVar2) || (this->_padding_ == 0)) ||
       (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), !bVar2)) ||
      (((this->_padding_ == 0 || (this->Memory == (uchar *)0x0)) || ((char)this->_padding_ != '\0'))
      )) && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2446534962325749315>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                                ,0x1bd,"IsValid() && !bIsArray"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *this->Memory = *param_1;
  return;
}

