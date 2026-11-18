// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// StaticStruct @ 14d4da0e0

UScriptStruct * __cdecl FStateTreeActiveStates::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeActiveStates,(UObject *)pUVar1,
                         L"StateTreeActiveStates");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.OuterSingleton;
}

// operator[] @ 14d4ed9e0

FStateTreeStateHandle * __thiscall
FStateTreeActiveStates::operator[](FStateTreeActiveStates *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeStateHandle *pFVar3;
  
  if ((param_1 < 0) || ((int)(uint)this->NumStates <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < (int32)NumStates",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                       ,0x220,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeStateHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->States + param_1;
}

// operator[] @ 14d4eda40

FStateTreeStateHandle * __thiscall
FStateTreeActiveStates::operator[](FStateTreeActiveStates *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeStateHandle *pFVar3;
  
  if ((param_1 < 0) || ((int)(uint)this->NumStates <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < (int32)NumStates",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                       ,0x219,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeStateHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->States + param_1;
}

// IndexOfReverse @ 14d500cd0

int __thiscall
FStateTreeActiveStates::IndexOfReverse(FStateTreeActiveStates *this,FStateTreeStateHandle param_1)

{
  byte bVar1;
  longlong lVar2;
  FStateTreeStateHandle *pFVar3;
  uint uVar4;
  
  bVar1 = this->NumStates;
  uVar4 = (uint)bVar1;
  lVar2 = (ulonglong)bVar1 - 1;
  if (-1 < lVar2) {
    pFVar3 = this->States + ((ulonglong)bVar1 - 1);
    do {
      uVar4 = uVar4 - 1;
      if (pFVar3->Index == param_1.Index) {
        return uVar4;
      }
      pFVar3 = pFVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return -1;
}

