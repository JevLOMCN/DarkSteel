// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147aa7100

UScriptStruct * __cdecl FDPMatchingRulestructE::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDPMatchingRulestructE.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDPMatchingRulestructE.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructE,(UObject *)pUVar1,
                         L"DPMatchingRulestructE");
  }
  return Z_Registration_Info_UScriptStruct_FDPMatchingRulestructE.OuterSingleton;
}

// GetOnTrue @ 147aa7280

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructE::GetOnTrue(FDPMatchingRulestructE *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDPMatchingRulestructBase *pFVar4;
  
  iVar1 = (this->OnTrue).ArrayNum;
  if (iVar1 == 0) {
    return (FDPMatchingRulestructBase *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDPMatchingRulestructBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FDPMatchingRulestructBase *)(this->OnTrue).AllocatorInstance.Data;
}

// GetOnFalse @ 147aa72e0

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructE::GetOnFalse(FDPMatchingRulestructE *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDPMatchingRulestructBase *pFVar4;
  
  iVar1 = (this->OnFalse).ArrayNum;
  if (iVar1 == 0) {
    return (FDPMatchingRulestructBase *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDPMatchingRulestructBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FDPMatchingRulestructBase *)(this->OnFalse).AllocatorInstance.Data;
}

