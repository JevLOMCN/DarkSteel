// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// ApplyAfter<void_(__cdecl_USlateFXSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),USlateFXSubsystem_*_&,UWorld_*,FWorldInitializationValues> @ 145fdb700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<void_(__cdecl_USlateFXSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),USlateFXSubsystem_*_&,UWorld_*,FWorldInitializationValues>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,pmf_66aa6c63 *param_1,
          USlateFXSubsystem **param_2,UWorld **param_3,FWorldInitializationValues *param_4)

{
  undefined4 uVar1;
  pmf_66aa6c63 pVar2;
  USlateFXSubsystem *pUVar3;
  uint local_18 [2];
  UClass *local_10;
  
  pVar2 = *param_1;
  pUVar3 = DereferenceIfNecessary<USlateFXSubsystem,USlateFXSubsystem_*_&>(param_2);
  uVar1 = *(undefined4 *)param_4;
  local_18[0] = (((undefined4 *)param_4)->bInitializeScenes ^ local_18[0]) & 1 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 2 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 4 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 8 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x10 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x20 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x40 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x80 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x100 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x200 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x400 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x800 ^ local_18[0];
  local_18[0] = (local_18[0] ^ uVar1) & 0x1000 ^ local_18[0];
  local_10 = (param_4->DefaultGameMode).Class.field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_10);
  }
  (*(code *)pVar2)(pUVar3,*param_3,local_18);
  return;
}

