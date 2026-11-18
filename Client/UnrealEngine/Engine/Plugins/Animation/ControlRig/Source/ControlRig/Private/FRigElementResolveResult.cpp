// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// StaticStruct @ 14a2bd4d0

UScriptStruct * __cdecl FRigElementResolveResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElementResolveResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElementResolveResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElementResolveResult,(UObject *)pUVar1,
                         L"RigElementResolveResult");
  }
  return Z_Registration_Info_UScriptStruct_FRigElementResolveResult.OuterSingleton;
}

// IsValid @ 14a328f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigElementResolveResult::IsValid(FRigElementResolveResult *this)

{
  if ((this->State != PossibleTarget) && (this->State != DefaultTarget)) {
    return false;
  }
  return true;
}

// SetDefaultTarget @ 14a34d9c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigElementResolveResult::SetDefaultTarget(FRigElementResolveResult *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->State = DefaultTarget;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Message).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Message).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->Message).Flags = param_1->Flags;
    return;
  }
  (this->Message).Flags = param_1->Flags;
  return;
}

// SetInvalidTarget @ 14a34e570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigElementResolveResult::SetInvalidTarget(FRigElementResolveResult *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->State = InvalidTarget;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Message).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Message).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->Message).Flags = param_1->Flags;
    return;
  }
  (this->Message).Flags = param_1->Flags;
  return;
}

// SetPossibleTarget @ 14a3511a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigElementResolveResult::SetPossibleTarget(FRigElementResolveResult *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->State = PossibleTarget;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Message).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Message).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->Message).Flags = param_1->Flags;
    return;
  }
  (this->Message).Flags = param_1->Flags;
  return;
}

