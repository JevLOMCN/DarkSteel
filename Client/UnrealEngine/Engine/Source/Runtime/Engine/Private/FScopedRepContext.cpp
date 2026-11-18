// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FScopedRepContext @ 147fa54b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedRepContext * __thiscall
FScopedRepContext::FScopedRepContext
          (FScopedRepContext *this,UNetConnection *param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  FScopedRepContext *pFVar3;
  ULevel *pUVar4;
  
  this->Connection = param_1;
  if (param_1 != (UNetConnection *)0x0) {
    if (param_1->RepContextActor != (AActor *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Connection->RepContextActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1958,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FScopedRepContext *)(*pcVar1)();
        return pFVar3;
      }
    }
    if (this->Connection->RepContextLevel != (ULevel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Connection->RepContextLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1959,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FScopedRepContext *)(*pcVar1)();
        return pFVar3;
      }
    }
    this->Connection->RepContextActor = param_2;
    if (param_2 != (AActor *)0x0) {
      pUVar4 = AActor::GetLevel(param_2);
      this->Connection->RepContextLevel = pUVar4;
    }
  }
  return this;
}

