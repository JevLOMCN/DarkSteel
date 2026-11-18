// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FindParameter<FActorLocatorFragmentResolveParameter> @ 1488a9c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorLocatorFragmentResolveParameter * __thiscall
UE::UniversalObjectLocator::FResolveParameterBuffer::
FindParameter<FActorLocatorFragmentResolveParameter>
          (FResolveParameterBuffer *this,
          TParameterTypeHandle<FActorLocatorFragmentResolveParameter> param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  FActorLocatorFragmentResolveParameter *pFVar5;
  ulonglong uVar6;
  
  uVar4 = 1 << ((byte)param_1 & 0x1f);
  if ((uVar4 & this->AllParameters) == 0) {
    return (FActorLocatorFragmentResolveParameter *)0x0;
  }
  uVar4 = uVar4 - 1 & this->AllParameters;
  uVar6 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  bVar2 = (byte)(uVar6 >> 0x38);
  if (bVar2 == 0xff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FActorLocatorFragmentResolveParameter *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (this->Num <= bVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                       ,0xd9,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FActorLocatorFragmentResolveParameter *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FActorLocatorFragmentResolveParameter *)
         (this->Memory + *(ushort *)(this->Memory + (uVar6 >> 0x38) * 4));
}

