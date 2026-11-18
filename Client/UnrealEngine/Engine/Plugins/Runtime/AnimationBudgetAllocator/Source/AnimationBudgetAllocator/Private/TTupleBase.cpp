// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// ApplyAfter<void_(__cdecl_FAnimationBudgetAllocatorModule::*const_&)(UWorld_*,FWorldInitializationValues),FAnimationBudgetAllocatorModule_*_&,UWorld_*,FWorldInitializationValues> @ 14a690c60

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
ApplyAfter<void_(__cdecl_FAnimationBudgetAllocatorModule::*const_&)(UWorld_*,FWorldInitializationValues),FAnimationBudgetAllocatorModule_*_&,UWorld_*,FWorldInitializationValues>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,pmf_05a5f538 *param_1,
          FAnimationBudgetAllocatorModule **param_2,UWorld **param_3,
          FWorldInitializationValues *param_4)

{
  undefined4 uVar1;
  FAnimationBudgetAllocatorModule *pFVar2;
  longlong lVar3;
  uint local_28 [2];
  UClass *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  local_18 = *(code **)param_1;
  uStack_10 = *(undefined8 *)&param_1->field_0x8;
  pFVar2 = DereferenceIfNecessary<FAnimationBudgetAllocatorModule,FAnimationBudgetAllocatorModule_*_&>
                     (param_2);
  uVar1 = *(undefined4 *)param_4;
  lVar3 = (longlong)(int)uStack_10;
  local_28[0] = (((undefined4 *)param_4)->bInitializeScenes ^ local_28[0]) & 1 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 2 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 4 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 8 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x10 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x20 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x40 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x80 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x100 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x200 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x400 ^ local_28[0];
  local_28[0] = (local_28[0] ^ uVar1) & 0x800 ^ local_28[0];
  local_20 = (param_4->DefaultGameMode).Class.field0_0x0.DebugPtr;
  local_28[0] = (local_28[0] ^ uVar1) & 0x1000 ^ local_28[0];
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_20);
  }
  (*local_18)((longlong)&pFVar2->_padding_ + lVar3,*param_3,local_28);
  return;
}

