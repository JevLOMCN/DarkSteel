// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator++ @ 146f314e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::FConstItemIterator::operator++(FConstItemIterator *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FEnvQueryInstance *pFVar5;
  
  pFVar5 = this->Instance;
  uVar4 = this->CurrentItem + 1;
  this->CurrentItem = uVar4;
  if ((int)uVar4 < (int)pFVar5->_padding_) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (int)pFVar5->_padding_) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)(pFVar5->_padding_ + 4 + (longlong)(int)uVar4 * 8);
      if (((uVar4 >> 0x1e & 1) == 0) && (-1 < (int)uVar4)) {
        return;
      }
      this->CurrentItem = this->CurrentItem + 1;
      pFVar5 = this->Instance;
      uVar4 = this->CurrentItem;
    } while ((int)uVar4 < (int)pFVar5->_padding_);
  }
  return;
}

