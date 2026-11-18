// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// GetBindingType @ 14e04e790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EHairBindingType __thiscall
FHairGroupPublicData::GetBindingType(FHairGroupPublicData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EHairBindingType EVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->BindingTypes).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->BindingTypes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return *(EHairBindingType *)
            ((this->BindingTypes).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return NoneBinding;
}

// IsGlobalInterpolationEnable @ 14e058f00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FHairGroupPublicData::IsGlobalInterpolationEnable(FHairGroupPublicData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODGlobalInterpolations).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODGlobalInterpolations).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(this->LODGlobalInterpolations).AllocatorInstance.Data[param_1];
  }
  return false;
}

