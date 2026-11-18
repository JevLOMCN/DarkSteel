// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149376580

UScriptStruct * __cdecl FNiagaraScriptHighlight::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptHighlight,(UObject *)pUVar1,
                         L"NiagaraScriptHighlight");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.OuterSingleton;
}

// FNiagaraScriptHighlight @ 149386f70

FNiagaraScriptHighlight * __thiscall
FNiagaraScriptHighlight::FNiagaraScriptHighlight(FNiagaraScriptHighlight *this)

{
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  FText::FText(&this->DisplayName);
  return this;
}

// operator== @ 14938c1b0

bool __thiscall
FNiagaraScriptHighlight::operator==(FNiagaraScriptHighlight *this,FNiagaraScriptHighlight *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((((param_1->Color).field0_0x0._s_0.R == (this->Color).field0_0x0._s_0.R) &&
       ((param_1->Color).field0_0x0._s_0.G == (this->Color).field0_0x0._s_0.G)) &&
      ((param_1->Color).field0_0x0._s_0.B == (this->Color).field0_0x0._s_0.B)) &&
     ((param_1->Color).field0_0x0._s_0.A == (this->Color).field0_0x0._s_0.A)) {
    bVar1 = FText::IdenticalTo(&this->DisplayName,&param_1->DisplayName,None);
    if ((!bVar1) &&
       (iVar2 = FText::CompareTo(&this->DisplayName,&param_1->DisplayName,Default), iVar2 != 0)) {
      return false;
    }
    return true;
  }
  return false;
}

// IsValid @ 1493aa6a0

bool __thiscall FNiagaraScriptHighlight::IsValid(FNiagaraScriptHighlight *this)

{
  bool bVar1;
  
  if ((((FLinearColor::Transparent.field0_0x0._s_0.R != (this->Color).field0_0x0._s_0.R) ||
       (FLinearColor::Transparent.field0_0x0._s_0.G != (this->Color).field0_0x0._s_0.G)) ||
      (FLinearColor::Transparent.field0_0x0._s_0.B != (this->Color).field0_0x0._s_0.B)) ||
     (FLinearColor::Transparent.field0_0x0._s_0.A != (this->Color).field0_0x0._s_0.A)) {
    bVar1 = FText::IsEmpty(&this->DisplayName);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

