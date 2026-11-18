// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FRegexPattern @ 1416d67f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRegexPattern * __thiscall
FRegexPattern::FRegexPattern(FRegexPattern *this,FString *param_1,ERegexPatternFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<FRegexPatternImplementation,1> *pTVar3;
  FRegexPattern *pFVar4;
  ERegexPatternFlags local_res18 [4];
  
  local_res18[0] = param_2;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TIntrusiveReferenceController<FRegexPatternImplementation,1> *)0x0) {
    (this->Implementation).Object = (FRegexPatternImplementation *)0x10;
    (this->Implementation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = SharedPointerInternals::TIntrusiveReferenceController<FRegexPatternImplementation,1>::
             TIntrusiveReferenceController<FRegexPatternImplementation,1><FString_const_&,enum_ERegexPatternFlags_&>
                       (pTVar3,param_1,local_res18);
    (this->Implementation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    (this->Implementation).Object = (FRegexPatternImplementation *)&pTVar3->ObjectStorage;
    if (&pTVar3->ObjectStorage == (TTypeCompatibleBytes<FRegexPatternImplementation> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRegexPattern *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

