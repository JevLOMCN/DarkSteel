// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 49

// StaticStruct @ 1471b5a30

UScriptStruct * __cdecl FMassObserverManager::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassObserverManager,(UObject *)pUVar1,
                         L"MassObserverManager");
  }
  return Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton;
}

// OnCompositionChanged<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471d1c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::
OnCompositionChanged<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (FMassObserverManager *this,FMassArchetypeEntityCollection *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,EMassObservedOperation param_3,FProcessingContext *param_4)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [48];
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)param_2);
  local_9c = 0x80;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_7c = 0x80;
  local_5c = 0x80;
  local_3c = 0x80;
  bVar1 = OnCompositionChanged
                    (this,param_1,(FMassArchetypeCompositionDescriptor *)local_d8,param_3,param_4);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  return bVar1;
}

// OnCompositionChanged<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471d1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::
OnCompositionChanged<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (FMassObserverManager *this,FMassArchetypeEntityCollection *param_1,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_2,
          EMassObservedOperation param_3,FProcessingContext *param_4)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [16];
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [48];
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_bc = 0x80;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,(FBitSetContainer *)param_2);
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  bVar1 = OnCompositionChanged
                    (this,param_1,(FMassArchetypeCompositionDescriptor *)local_d8,param_3,param_4);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return bVar1;
}

// FMassObserverManager @ 1471da550

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassObserverManager * __thiscall
FMassObserverManager::FMassObserverManager(FMassObserverManager *this,FMassEntityManager *param_1)

{
  (this->ActiveObserverLock).Object = (FObserverLock *)0x0;
  (this->ActiveObserverLock).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LocksCount = 0;
  (this->ActiveCreationContext).Object = (FCreationContext *)0x0;
  (this->ActiveCreationContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ObservedFragments[0].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[0].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[0].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[1].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[1].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[1].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[2].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[2].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[2].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[3].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[3].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[3].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[0].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[0].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[0].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[1].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[1].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[1].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[2].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[2].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[2].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[3].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[3].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[3].field_0x1c = 0x80;
  *(undefined8 *)&this->FragmentObservers[0].Container = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[0].Container = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[1].Container = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[2].Container = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[3].Container = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  (this->ModulesUnloadedHandle).ID = 0;
  this->EntityManager = param_1;
  this->LockedNotificationSerialNumber = 1;
  this->DebugNonTrivialResumeExecutionCount = 0;
  return this;
}

// FMassObserverManager @ 1471da840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassObserverManager * __thiscall
FMassObserverManager::FMassObserverManager(FMassObserverManager *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  FMassObserverManager *pFVar4;
  
  (this->ActiveObserverLock).Object = (FObserverLock *)0x0;
  (this->ActiveObserverLock).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LocksCount = 0;
  (this->ActiveCreationContext).Object = (FCreationContext *)0x0;
  (this->ActiveCreationContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ObservedFragments[0].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[0].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[0].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[1].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[1].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[1].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[2].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[2].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[2].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedFragments[3].field_0x10 = 0;
  *(undefined4 *)&this->ObservedFragments[3].field_0x18 = 0;
  *(undefined4 *)&this->ObservedFragments[3].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[0].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[0].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[0].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[1].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[1].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[1].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[2].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[2].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[2].field_0x1c = 0x80;
  *(undefined8 *)&this->ObservedTags[3].field_0x10 = 0;
  *(undefined4 *)&this->ObservedTags[3].field_0x18 = 0;
  *(undefined4 *)&this->ObservedTags[3].field_0x1c = 0x80;
  *(undefined8 *)&this->FragmentObservers[0].Container = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[0].Container = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[1].Container = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[2].Container = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[3].Container = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  (this->ModulesUnloadedHandle).ID = 0;
  this_00 = UMassEntitySubsystem::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(longlong *)&pUVar1[1].field_0x18 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMassObserverManager *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->EntityManager = *(FMassEntityManager **)&pUVar1[1].field_0x18;
  this->LockedNotificationSerialNumber = 1;
  this->DebugNonTrivialResumeExecutionCount = 0;
  return this;
}

// ~FMassObserverManager @ 1471e0310

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassObserverManager::~FMassObserverManager(FMassObserverManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->TagObservers[3].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 3));
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->TagObservers[2].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 2));
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->TagObservers[1].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 1));
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->TagObservers[0].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->TagObservers);
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->FragmentObservers[3].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 3));
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->FragmentObservers[2].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 2));
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->FragmentObservers[1].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 1));
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  pvVar3 = *(void **)&this->FragmentObservers[0].Container.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->FragmentObservers);
  pvVar3 = *(void **)&this->ObservedTags[3].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedTags[2].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedTags[1].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedTags[0].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedFragments[3].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedFragments[2].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedFragments[1].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&this->ObservedFragments[0].field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar4 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// operator() @ 1471e5210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassObserverManager::OnCompositionChanged'::__l67::<lambda_2>::operator()
          (void *this,FMassArchetypeEntityCollection *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FProcessingContext *this_00;
  undefined1 auStackY_788 [32];
  undefined4 uStack_74c;
  undefined4 uStack_73c;
  undefined4 uStack_72c;
  undefined4 uStack_71c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_718;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_708;
  FMassObserverExecutionContext local_6f8;
  FMassObserverExecutionContext local_6d8;
  FMassArchetypeEntityCollection local_6b8;
  FMassArchetypeEntityCollection local_690;
  TArray<UScriptStruct_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_668;
  FProcessingContext local_618;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_788;
  local_668.AllocatorInstance.SecondaryData = (ForElementType<UScriptStruct_const_*>)0x0;
  local_668.ArrayNum = 0;
  local_668.ArrayMax = 8;
  this_00 = (FProcessingContext *)**(longlong **)this;
  if (this_00 == (FProcessingContext *)0x0) {
    this_00 = UE::Mass::FProcessingContext::FProcessingContext
                        (&local_618,
                         *(FMassEntityManager **)(*(longlong *)((longlong)this + 8) + 0x3b0),0.0,
                         false);
  }
  if (**(char **)((longlong)this + 0x10) != '\0') {
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (*(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)((longlong)this + 0x18),&local_668);
    iVar4 = local_668.ArrayNum;
    iVar1 = **(int **)((longlong)this + 0x28);
    lVar2 = *(longlong *)((longlong)this + 8);
    local_6f8.TypesInOperation.DataPtr = (UScriptStruct **)&local_668;
    if (local_668.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
      local_6f8.TypesInOperation.DataPtr =
           (UScriptStruct **)local_668.AllocatorInstance.SecondaryData;
    }
    if (local_668.ArrayNum < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_6f8.TypesInOperation._12_4_ = uStack_74c;
    local_6f8.TypesInOperation.ArrayNum = iVar4;
    local_6f8.CurrentTypeIndex = -1;
    local_6f8.Operation = **(EMassObservedOperation **)((longlong)this + 0x20);
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_6b8,param_1);
    local_718.DataPtr = &local_6b8;
    local_718._12_4_ = uStack_73c;
    local_718.ArrayNum = 1;
    FMassObserverManager::HandleElementsImpl
              (this_00,&local_718,&local_6f8,
               (FMassObserversMap *)((longlong)iVar1 * 0x50 + lVar2 + 0x128));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)
    ;
    if (local_6b8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Ranges.AllocatorInstance.Data);
    }
  }
  if (**(char **)((longlong)this + 0x30) != '\0') {
    local_668.ArrayNum = 0;
    if (local_668.ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                (8,8,0,&local_668.AllocatorInstance,0,&local_668.ArrayMax);
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (*(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 **)((longlong)this + 0x38),&local_668);
    iVar4 = local_668.ArrayNum;
    iVar1 = **(int **)((longlong)this + 0x28);
    lVar2 = *(longlong *)((longlong)this + 8);
    local_6d8.TypesInOperation.DataPtr = (UScriptStruct **)&local_668;
    if (local_668.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
      local_6d8.TypesInOperation.DataPtr =
           (UScriptStruct **)local_668.AllocatorInstance.SecondaryData;
    }
    if (local_668.ArrayNum < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_6d8.TypesInOperation._12_4_ = uStack_72c;
    local_6d8.TypesInOperation.ArrayNum = iVar4;
    local_6d8.CurrentTypeIndex = -1;
    local_6d8.Operation = **(EMassObservedOperation **)((longlong)this + 0x20);
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_690,param_1);
    local_708.DataPtr = &local_690;
    local_708._12_4_ = uStack_71c;
    local_708.ArrayNum = 1;
    FMassObserverManager::HandleElementsImpl
              (this_00,&local_708,&local_6d8,
               (FMassObserversMap *)((longlong)iVar1 * 0x50 + lVar2 + 0x268));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_690.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)
    ;
    if (local_690.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.Ranges.AllocatorInstance.Data);
    }
  }
  if (**(longlong **)this == 0) {
    UE::Mass::FProcessingContext::~FProcessingContext(this_00);
  }
  if (local_668.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FMemory::Free((void *)local_668.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddObserverInstance @ 1471ee630

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserverManager::AddObserverInstance
          (FMassObserverManager *this,UScriptStruct *param_1,EMassObservedOperation param_2,
          UMassProcessor *param_3)

{
  code *pcVar1;
  bool bVar2;
  EMassObservedOperationFlags EVar3;
  
  if (CreateEntity < param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_988180934387826017>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x29f,"Operation < EMassObservedOperation::MAX");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Operation != EMassObservedOperation::MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x2a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 < MAX) {
    EVar3 = '\x01' << (param_2 & 0x1f);
    goto LAB_1471ee6bf;
  }
  EVar3 = Remove;
  if (param_2 == Add) {
    EVar3 = Add;
  }
LAB_1471ee6bf:
  if ((param_3 != (UMassProcessor *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    AddObserverInstance(this,(TNotNull<UScriptStruct_const_*>)param_1,EVar3,
                        (TNotNull<UMassProcessor_*>)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddObserverInstance @ 1471ee710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserverManager::AddObserverInstance
          (FMassObserverManager *this,TNotNull<UMassObserverProcessor_*> param_1)

{
  TNotNull<UScriptStruct_const_*> TVar1;
  
  TVar1.Val = (UScriptStruct *)((param_1.Val)->ObservedType).field0_0x0.ObjectPtr.field0_0x0.Handle;
  if (TVar1.Val != (UScriptStruct *)0x0) {
    AddObserverInstance(this,TVar1,(param_1.Val)->ObservedOperations,
                        (TNotNull<UMassProcessor_*>)param_1.Val);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddObserverInstance @ 1471ee750

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMassObserverManager::AddObserverInstance
          (FMassObserverManager *this,TNotNull<UScriptStruct_const_*> param_1,
          EMassObservedOperationFlags param_2,TNotNull<UMassProcessor_*> param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  UStruct *pUVar5;
  TNotNull<UObject_*> TVar6;
  TSharedRef<FMassEntityManager,1> *pTVar7;
  uint uVar8;
  FBitSetContainer *this_00;
  FIdentityFunctor FVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  longlong lVar11;
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *this_01;
  byte bVar12;
  <lambda_1> local_67;
  undefined1 local_66 [2];
  int local_64;
  TObjectPtr<UScriptStruct_const_>_u_0 local_60;
  FBitSetContainer *local_58;
  TObjectPtr<UMassProcessor>_u_0 local_50;
  TSharedRef<FMassEntityManager,1> local_48;
  
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar4,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1471ee7e4;
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FVar9 = (FIdentityFunctor)0x1;
      goto LAB_1471ee7e6;
    }
  }
LAB_1471ee7e4:
  FVar9 = (FIdentityFunctor)0x0;
LAB_1471ee7e6:
  local_58 = (FBitSetContainer *)this->ObservedTags;
  bVar12 = 0;
  bVar1 = false;
  lVar11 = 0x128;
  if (FVar9 == (FIdentityFunctor)0x0) {
    lVar11 = 0x268;
  }
  this_01 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
             *)((longlong)this->ObservedFragments + lVar11 + -0x28);
  do {
    this_00 = local_58;
    if ((param_2 & '\x01' << (bVar12 & 0x1f)) != None) {
      if (FVar9 == (FIdentityFunctor)0x0) {
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 != (UStruct *)0x0) {
          iVar3 = (int)pUVar5->_padding_;
          if (((int)(param_1.Val)->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1471ee8cc;
LAB_1471ee8df:
          iVar3 = FStructTracker::FindOrAddStructTypeIndex
                            (&FMassTagBitSetStructTrackerWrapper::StructTracker,
                             (UStruct *)param_1.Val);
          goto LAB_1471ee8f1;
        }
LAB_1471ee8cc:
        local_60.DebugPtr = param_1.Val;
        bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_60);
        if (bVar2) goto LAB_1471ee8df;
      }
      else {
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471ee876:
          local_60.DebugPtr = param_1.Val;
          bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_60);
          if (!bVar2) goto LAB_1471ee8f8;
        }
        else {
          iVar3 = (int)pUVar5->_padding_;
          if (((int)(param_1.Val)->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1471ee876;
        }
        iVar3 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                           (UStruct *)param_1.Val);
        this_00 = this_00 + -4;
LAB_1471ee8f1:
        FStructTypeBitSet::FBitSetContainer::AddAtIndex(this_00,iVar3);
      }
LAB_1471ee8f8:
      TVar10.DebugPtr = param_1.Val;
      local_60.DebugPtr = param_1.Val;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (param_1.Val != (UScriptStruct *)0x0) {
          UE::GC::MarkAsReachable((UObject *)param_1.Val);
        }
        TVar10 = local_60;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_60.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_60.DebugPtr);
        }
      }
      uVar8 = ((uint)((ulonglong)TVar10.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar10.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      iVar3 = TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                        (this_01,uVar8,(TObjectPtr<UScriptStruct_const_> *)&local_60.ObjectPtr);
      if ((iVar3 == -1) ||
         (lVar11 = *(longlong *)&this_01->Elements + (longlong)iVar3 * 0x28, lVar11 == 0)) {
        local_50.DebugPtr = (UMassProcessor *)&local_60;
        TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&>_>
                  (this_01,(uint)&local_64,
                   (TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&> *)(ulonglong)uVar8,
                   (bool *)&local_50);
        lVar11 = *(longlong *)&this_01->Elements + (longlong)local_64 * 0x28;
      }
      iVar3 = *(int *)(lVar11 + 0x10);
      local_50.DebugPtr = param_3.Val;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_3.Val != (UMassProcessor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_3.Val);
      }
      TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UMassProcessor>_>
                ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)(lVar11 + 8),
                 (TObjectPtr<UMassProcessor> *)&local_50.ObjectPtr);
      if ((iVar3 != *(int *)(lVar11 + 0x10)) && (!bVar1)) {
        TVar6.Val = FWeakObjectPtr::Get(&(this->EntityManager->Owner).WeakPtr);
        if (TVar6.Val != (UObject *)0x0) {
          pTVar7 = TSharedFromThis<FMassEntityManager,1>::AsShared
                             ((TSharedFromThis<FMassEntityManager,1> *)
                              &this->EntityManager->_padding_,&local_48);
          UMassProcessor::CallInitialize(param_3.Val,TVar6,pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          bVar1 = true;
        }
        if (*(int *)(lVar11 + 0x10) != 0) {
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          RemoveAllSwap<_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_1>_>
                    ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)(lVar11 + 8),
                     &local_67,Default);
          AlgoImpl::
          IntroSortInternal<TObjectPtr<UMassProcessor>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMassProcessor>,_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_2>_>_>
                    (*(TObjectPtr<UMassProcessor> **)(lVar11 + 8),*(int *)(lVar11 + 0x10),FVar9,
                     (<lambda_2> *)local_66);
        }
      }
    }
    local_58 = local_58 + 1;
    bVar12 = bVar12 + 1;
    this_01 = this_01 + 1;
    if (3 < bVar12) {
      return;
    }
  } while( true );
}

// DeInitialize @ 14720d790

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassObserverManager::DeInitialize(FMassObserverManager *this)

{
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *pTVar1;
  int iVar2;
  FDelegateHandle FVar3;
  int *piVar4;
  longlong lVar5;
  
  FVar3.ID = (this->ModulesUnloadedHandle).ID;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,FVar3);
    (this->ModulesUnloadedHandle).ID = 0;
  }
  piVar4 = (int *)&this->FragmentObservers[0].Container.field_0x2c;
  lVar5 = 4;
  do {
    iVar2 = piVar4[7];
    pTVar1 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              *)(piVar4 + -0xb);
    if (1 >= iVar2) {
      TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar1,0,piVar4[-9]);
    piVar4[-9] = 0;
    if (piVar4[-8] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)pTVar1,0,piVar4 + -8);
    }
    piVar4[1] = -1;
    piVar4[2] = 0;
    piVar4[-1] = 0;
    if ((*piVar4 < 0) || (0x80 < *piVar4)) {
      *piVar4 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar4 + -7),0);
    }
    if (1 < iVar2) {
      piVar4[7] = 1;
      TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
      ::Rehash(pTVar1);
    }
    iVar2 = piVar4[0x57];
    pTVar1 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              *)(piVar4 + 0x45);
    if (1 >= iVar2) {
      TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar1,0,piVar4[0x47]);
    piVar4[0x47] = 0;
    if (piVar4[0x48] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)pTVar1,0,piVar4 + 0x48);
    }
    piVar4[0x51] = -1;
    piVar4[0x52] = 0;
    piVar4[0x4f] = 0;
    if ((piVar4[0x50] < 0) || (0x80 < piVar4[0x50])) {
      piVar4[0x50] = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar4 + 0x49),0);
    }
    if (1 < iVar2) {
      piVar4[0x57] = 1;
      TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
      ::Rehash(pTVar1);
    }
    piVar4 = piVar4 + 0x14;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// DebugGatherUniqueProcessors @ 14720e260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserverManager::DebugGatherUniqueProcessors
          (FMassObserverManager *this,
          TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined8 *puVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_e0;
  UMassProcessor *local_c8;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  puVar17 = (undefined8 *)&this->FragmentObservers[0].Container.field_0x20;
  local_e0 = 4;
  do {
    uVar13 = *(uint *)(puVar17 + 1);
    iStack_b0 = 0;
    local_98 = 0;
    uStack_ac = 1;
    uStack_9c = 0;
    if (uVar13 != 0) {
      puVar15 = (uint *)*puVar17;
      if ((uint *)*puVar17 == (uint *)0x0) {
        puVar15 = (uint *)(puVar17 + -2);
      }
      uVar12 = *puVar15;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        uStack_9c = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b0)
        goto LAB_14720e31f;
        uVar12 = puVar15[lVar8 + 1];
      }
      uStack_ac = -uVar12 & uVar12;
      uVar4 = (ulonglong)uStack_ac * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_9c = local_98 + -1 + (int)lVar8;
      if ((int)uVar13 < (int)uStack_9c) {
        uStack_9c = uVar13;
      }
    }
LAB_14720e31f:
    plVar1 = puVar17 + -4;
    pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar17 + -2);
    local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar17 + -2);
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_94 = local_3c;
    uVar12 = uVar13 & 0xffffffe0;
    iStack_90 = *(int *)(puVar17 + -3) - *(int *)((longlong)puVar17 + 0x14);
    uStack_a0 = 0xffffffff;
    TStack_80.CurrentBitIndex = uStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar13 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_c0 = pTVar16;
    local_b8 = plVar1;
    local_88 = plVar1;
    TStack_80.Array = local_a8;
    if (((int)uVar13 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)(puVar17 + 1);
    if (uVar13 != uVar5) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar17;
      if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar17 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar16;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
      while (uVar13 == 0) {
        lVar8 = (longlong)iVar9;
        uVar12 = uVar12 + 0x20;
        iVar9 = iVar9 + 1;
        uVar13 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14720e430;
        uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar13 = (int)lVar8 + -1 + uVar12;
      if ((int)uVar5 < (int)uVar13) {
        uVar13 = uVar5;
      }
    }
LAB_14720e430:
    while( true ) {
      plVar11 = local_88;
      if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_80.CurrentBitIndex == uVar13) && (TStack_80.Array == pTVar16)) &&
         (plVar11 == plVar1)) break;
      lVar8 = *plVar11;
      lVar10 = *(longlong *)(lVar8 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x28);
      lVar8 = lVar8 + (longlong)TStack_80.CurrentBitIndex * 0x28;
      iVar9 = *(int *)(lVar8 + 0x10);
      lVar2 = lVar10 + (longlong)iVar9 * 8;
      while( true ) {
        if (*(int *)(lVar8 + 0x10) != iVar9) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (lVar10 == lVar2) break;
        lVar10 = lVar10 + 8;
      }
      plVar11 = *(longlong **)(lVar8 + 8);
      iVar9 = *(int *)(lVar8 + 0x10);
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar3 = plVar11 + iVar9;
      for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
        local_c8 = (UMassProcessor *)*plVar11;
        if ((local_c8 == (UMassProcessor *)0x0) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_988180934387826410>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                               ,0x116,"Processor"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UMassProcessor_const_*_const_&>(param_1,&local_c8);
        pTVar16 = local_c0;
      }
      TStack_80._padding_._4_4_ = (uint)((ulonglong)TStack_80._padding_ >> 0x20);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    FMassObserversMap::DebugAddUniqueProcessors((FMassObserversMap *)(puVar17 + 0x24),param_1);
    puVar17 = puVar17 + 10;
    local_e0 = local_e0 + -1;
    if (local_e0 == 0) {
      return;
    }
  } while( true );
}

// GetOrMakeCreationContext @ 147223e10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassObserverManager::GetOrMakeCreationContext
          (FMassObserverManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          TArrayView<FMassEntityHandle_const_,int> *param_1,FMassArchetypeEntityCollection *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FObserverLock *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  int iVar7;
  FCreationContext *pFVar8;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *pTVar9;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  
  pTVar12 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController;
  bVar5 = false;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147223e60;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar2 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar13);
    pFVar8 = (this->ActiveCreationContext).Object;
    if (pFVar8 != (FCreationContext *)0x0) {
      pTVar11 = (pFVar8->Lock).SharedReferenceCount.ReferenceController;
      this_00 = (pFVar8->Lock).Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.DataPtr = param_1->DataPtr;
      local_58.ArrayNum = param_1->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UE::Mass::ObserverManager::FObserverLock::AddCreatedEntities(this_00,&local_58,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      __return_storage_ptr__->Object = pFVar8;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      if ((__return_storage_ptr__->Object == (FCreationContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar4)();
        return pTVar10;
      }
      goto LAB_147223fef;
    }
  }
LAB_147223e60:
  pFVar8 = ::operator_new(0x18);
  if (pFVar8 == (FCreationContext *)0x0) {
    pFVar8 = (FCreationContext *)0x0;
  }
  else {
    pTVar9 = GetOrMakeObserverLock(this,&local_48);
    (pFVar8->Lock).Object = pTVar9->Object;
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    (pFVar8->Lock).SharedReferenceCount.ReferenceController = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    (pFVar8->CreationHandle).SerialNumber = 0;
    bVar5 = true;
    (pFVar8->CreationHandle).OpIndex = -1;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (pFVar8->CreationHandle).SerialNumber = this->LockedNotificationSerialNumber;
  iVar7 = UE::Mass::ObserverManager::FObserverLock::AddCreatedEntities
                    ((pFVar8->Lock).Object,&local_38,param_2);
  (pFVar8->CreationHandle).OpIndex = iVar7;
  pTVar11 = ::operator_new(0x18);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFCreationContext_ObserverManager_Mass_UE__U__DefaultDeleter_UFCreationContext_ObserverManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ = (longlong)pFVar8;
  }
  (this->ActiveCreationContext).Object = pFVar8;
  if (pTVar11 != (this->ActiveCreationContext).WeakReferenceCount.ReferenceController) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    (this->ActiveCreationContext).WeakReferenceCount.ReferenceController = pTVar11;
  }
  __return_storage_ptr__->Object = pFVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_147223fef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// GetOrMakeCreationContext @ 147224020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassObserverManager::GetOrMakeCreationContext
          (FMassObserverManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__)

{
  FSharedReferencer<1> *pFVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar9;
  FCreationContext *pFVar10;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *pTVar11;
  FCreationContext *pFVar12;
  FCreationContext *pFVar13;
  FCreationContext *pFVar14;
  bool bVar15;
  uint uStack_3c;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  pFVar13 = (FCreationContext *)0x0;
  if ((((this->ActiveCreationContext).Object == (FCreationContext *)0x0) ||
      (pTVar5 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    pFVar10 = ::operator_new(0x18);
    pFVar12 = pFVar13;
    pFVar14 = pFVar13;
    if (pFVar10 != (FCreationContext *)0x0) {
      pTVar11 = GetOrMakeObserverLock(this,&local_38);
      (pFVar10->Lock).Object = pTVar11->Object;
      pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
      (pFVar10->Lock).SharedReferenceCount.ReferenceController = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      (pFVar10->CreationHandle).SerialNumber = 0;
      (pFVar10->CreationHandle).OpIndex = -1;
      pFVar12 = (FCreationContext *)&DAT_00000001;
      pFVar14 = pFVar10;
    }
    if (pFVar12 != (FCreationContext *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    local_28._8_8_ = (ulonglong)uStack_3c << 0x20;
    local_28.DataPtr = (FMassEntityHandle *)0x0;
    (pFVar14->CreationHandle).SerialNumber = this->LockedNotificationSerialNumber;
    iVar8 = UE::Mass::ObserverManager::FObserverLock::AddCreatedEntities
                      ((pFVar14->Lock).Object,&local_28);
    (pFVar14->CreationHandle).OpIndex = iVar8;
    pFVar12 = ::operator_new(0x18);
    if (pFVar12 != (FCreationContext *)0x0) {
      *(undefined4 *)&(pFVar12->Lock).SharedReferenceCount.ReferenceController = 1;
      *(undefined4 *)((longlong)&(pFVar12->Lock).SharedReferenceCount.ReferenceController + 4) = 1;
      (pFVar12->Lock).Object =
           (FObserverLock *)
           &
           ___7__TReferenceControllerWithDeleter_UFCreationContext_ObserverManager_Mass_UE__U__DefaultDeleter_UFCreationContext_ObserverManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(FCreationContext **)&(pFVar12->CreationHandle).SerialNumber = pFVar14;
      pFVar13 = pFVar12;
    }
    (this->ActiveCreationContext).Object = pFVar14;
    if (pFVar13 !=
        (FCreationContext *)(this->ActiveCreationContext).WeakReferenceCount.ReferenceController) {
      if (pFVar13 != (FCreationContext *)0x0) {
        LOCK();
        puVar2 = (undefined1 *)
                 ((longlong)&(pFVar13->Lock).SharedReferenceCount.ReferenceController + 4);
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
      }
      pTVar5 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &pTVar5->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      (this->ActiveCreationContext).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar13;
    }
    __return_storage_ptr__->Object = pFVar14;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pFVar13;
    if (pFVar13 != (FCreationContext *)0x0) {
      LOCK();
      pFVar1 = &(pFVar13->Lock).SharedReferenceCount;
      *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
      UNLOCK();
    }
    goto LAB_147224209;
  }
  pFVar12 = (FCreationContext *)(this->ActiveCreationContext).WeakReferenceCount.ReferenceController
  ;
  pFVar14 = pFVar12;
  if (pFVar12 == (FCreationContext *)0x0) {
LAB_147224081:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    pFVar12 = pFVar14;
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  else {
    iVar8 = *(int *)&(pFVar12->Lock).SharedReferenceCount.ReferenceController;
    do {
      pFVar14 = pFVar13;
      if (iVar8 == 0) goto LAB_147224081;
      pFVar1 = &(pFVar12->Lock).SharedReferenceCount;
      LOCK();
      iVar7 = *(int *)&pFVar1->ReferenceController;
      bVar15 = iVar8 == iVar7;
      if (bVar15) {
        *(int *)&pFVar1->ReferenceController = iVar8 + 1;
        iVar7 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar7;
    } while (!bVar15);
    pFVar13 = (this->ActiveCreationContext).Object;
    pFVar14 = pFVar12;
    if (pFVar13 == (FCreationContext *)0x0) goto LAB_147224081;
  }
  __return_storage_ptr__->Object = pFVar13;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar12;
  if ((pFVar13 == (FCreationContext *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar13 = (FCreationContext *)0x0;
LAB_147224209:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return __return_storage_ptr__;
}

// GetOrMakeObserverLock @ 147224230

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> * __thiscall
FMassObserverManager::GetOrMakeObserverLock
          (FMassObserverManager *this,
          TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *pTVar7;
  FObserverLock *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FObserverLock *pFVar11;
  FObserverLock *pFVar12;
  bool bVar13;
  
  if ((((this->ActiveObserverLock).Object == (FObserverLock *)0x0) ||
      (pTVar10 = (this->ActiveObserverLock).WeakReferenceCount.ReferenceController,
      pTVar10 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar10->SharedReferenceCount < 1)) {
    pFVar8 = ::operator_new(0x38);
    if (pFVar8 == (FObserverLock *)0x0) {
      pFVar8 = (FObserverLock *)0x0;
    }
    else {
      DVar6 = GetCurrentThreadId();
      pFVar8->CreationNotificationIndex = -1;
      pFVar8->OwnerThreadId = DVar6;
      (pFVar8->BufferedNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->BufferedNotifications).ArrayNum = 0;
      (pFVar8->BufferedNotifications).ArrayMax = 0;
      pFVar8->CollectionCreationDuplicatesHandling = NoDuplicates;
      TSharedFromThis<FMassEntityManager,1>::AsWeak
                ((TSharedFromThis<FMassEntityManager,1> *)&this->EntityManager->_padding_,
                 &pFVar8->WeakEntityManager);
      pFVar8->LockSerialNumber = this->LockedNotificationSerialNumber;
      this->LocksCount = this->LocksCount + 1;
    }
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFObserverLock_ObserverManager_Mass_UE__U__DefaultDeleter_UFObserverLock_ObserverManager_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)pFVar8;
      pTVar10 = pTVar9;
    }
    if ((pFVar8 == (FObserverLock *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InRawPtrProxy.Object != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0xe3,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar3)();
      return pTVar7;
    }
    (this->ActiveObserverLock).Object = pFVar8;
    if (pTVar10 != (this->ActiveObserverLock).WeakReferenceCount.ReferenceController) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = (this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar9->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      (this->ActiveObserverLock).WeakReferenceCount.ReferenceController = pTVar10;
    }
    __return_storage_ptr__->Object = pFVar8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_147224407;
  }
  pFVar8 = (FObserverLock *)(this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  pFVar12 = (FObserverLock *)0x0;
  pFVar11 = pFVar8;
  if (pFVar8 == (FObserverLock *)0x0) {
LAB_147224291:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    pFVar8 = pFVar11;
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    iVar4 = *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data;
    do {
      pFVar11 = pFVar12;
      if (iVar4 == 0) goto LAB_147224291;
      LOCK();
      iVar5 = *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data;
      bVar13 = iVar4 == iVar5;
      if (bVar13) {
        *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar5;
    } while (!bVar13);
    pFVar12 = (this->ActiveObserverLock).Object;
    pFVar11 = pFVar8;
    if (pFVar12 == (FObserverLock *)0x0) goto LAB_147224291;
  }
  __return_storage_ptr__->Object = pFVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar8;
  if ((pFVar12 == (FObserverLock *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
LAB_147224407:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// HandleElementsImpl @ 147229330

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
FMassObserverManager::HandleElementsImpl
          (FProcessingContext *param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2,
          FMassObserverExecutionContext *param_3,FMassObserversMap *param_4)

{
  atomic<int> *paVar1;
  FMassEntityManager *pFVar2;
  UScriptStruct *pUVar3;
  UMassProcessor **ppUVar4;
  code *pcVar5;
  undefined8 uVar6;
  FMassArchetypeEntityCollection *pFVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  UPackage *pUVar16;
  byte *pbVar17;
  UScriptStruct **ppUVar18;
  TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *pTVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined1 local_res8 [8];
  UScriptStruct *local_res10;
  undefined4 uStack_6c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  TArrayView<UMassProcessor_*_const,int> local_58 [2];
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId612,"MassObserver_HandleElementsImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x264);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId612);
  }
  if (((param_3->TypesInOperation).ArrayNum == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObserverContext.GetTypesInOperation().Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                          ,0x266,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2->ArrayNum == 0) {
    local_res8[0] = 0;
    `FMassObserverManager::HandleElementsImpl'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar2 = (param_1->EntityManager).Object;
  LOCK();
  paVar1 = &pFVar2->ProcessingScopeCount;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (Z_Registration_Info_UScriptStruct_FMassObserverExecutionContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar16 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassObserverExecutionContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassObserverExecutionContext,(UObject *)pUVar16,
                         L"MassObserverExecutionContext");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FMassObserverExecutionContext.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FMassObserverExecutionContext.OuterSingleton ==
      (param_1->AuxData).ScriptStruct.field0_0x0.DebugPtr) {
    pbVar17 = (param_1->AuxData).StructMemory;
  }
  else {
    FInstancedStruct::Reset(&param_1->AuxData);
    uVar21 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar20 = (int)pUVar3->_padding_ + -1 + uVar21 & -uVar21;
    if ((int)uVar20 < 1) {
      uVar20 = 1;
    }
    pbVar17 = FMemory::Malloc((longlong)(int)uVar20,uVar21);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (param_1->AuxData).ScriptStruct.field0_0x0.DebugPtr = pUVar3;
    (param_1->AuxData).StructMemory = pbVar17;
  }
  if ((pbVar17 == (byte *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Memory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0x74,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = param_3->field_0x1;
  uVar9 = param_3->field_0x2;
  uVar10 = param_3->field_0x3;
  uVar11 = param_3->field_0x4;
  uVar12 = param_3->field_0x5;
  uVar13 = param_3->field_0x6;
  uVar14 = param_3->field_0x7;
  ppUVar18 = (param_3->TypesInOperation).DataPtr;
  iVar22 = 0;
  pbVar17[0] = param_3->Operation;
  pbVar17[1] = uVar8;
  pbVar17[2] = uVar9;
  pbVar17[3] = uVar10;
  pbVar17[4] = uVar11;
  pbVar17[5] = uVar12;
  pbVar17[6] = uVar13;
  pbVar17[7] = uVar14;
  *(UScriptStruct ***)(pbVar17 + 8) = ppUVar18;
  uVar6 = *(undefined8 *)&param_3->CurrentTypeIndex;
  *(undefined8 *)(pbVar17 + 0x10) = *(undefined8 *)&(param_3->TypesInOperation).ArrayNum;
  *(undefined8 *)(pbVar17 + 0x18) = uVar6;
  pbVar17[0x18] = 0;
  pbVar17[0x19] = 0;
  pbVar17[0x1a] = 0;
  pbVar17[0x1b] = 0;
  while( true ) {
    if (((3 < *pbVar17) || (iVar22 < 0)) || (*(int *)(pbVar17 + 0x10) <= iVar22)) {
      LOCK();
      paVar1 = &pFVar2->ProcessingScopeCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    ppUVar18 = TArrayView<UScriptStruct_const_*,int>::operator[]
                         ((TArrayView<UScriptStruct_const_*,int> *)(pbVar17 + 8),iVar22);
    pUVar3 = *ppUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pTVar19 = TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                      *)param_4,(TObjectPtr<UScriptStruct_const_>)&local_res10);
    if ((pTVar19 == (TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar15)) break;
    ppUVar4 = *(UMassProcessor ***)&pTVar19->field_0x8;
    iVar22 = *(int *)&pTVar19->field_0x10;
    pFVar7 = param_2->DataPtr;
    uVar6._0_4_ = param_2->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&param_2->field_0xc;
    if ((iVar22 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58[0]._12_4_ = uStack_6c;
    local_58[0].ArrayNum = iVar22;
    local_68.DataPtr = pFVar7;
    local_68._8_8_ = uVar6;
    local_58[0].DataPtr = ppUVar4;
    UE::Mass::Executor::RunProcessorsView(local_58,param_1,&local_68);
    *(int *)(pbVar17 + 0x18) = *(int *)(pbVar17 + 0x18) + 1;
    iVar22 = *(int *)(pbVar17 + 0x18);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// HandleElementsImpl @ 147229630

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassObserverManager::HandleElementsImpl
          (FProcessingContext *param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2,
          TArrayView<UScriptStruct_const_*,int> *param_3,FMassObserversMap *param_4)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct **ppUVar5;
  UPackage *pUVar6;
  FMassObserversMap *pFVar7;
  EMassObservedOperation EVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_38;
  FMassObserverExecutionContext local_28;
  
  if (param_3->ArrayNum == 0) {
    return;
  }
  ppUVar5 = TArrayView<UScriptStruct_const_*,int>::operator[](param_3,0);
  if (*ppUVar5 == (UScriptStruct *)0x0) {
    return;
  }
  ppUVar5 = TArrayView<UScriptStruct_const_*,int>::operator[](param_3,0);
  pUVar2 = *ppUVar5;
  if (pUVar2 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar6,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1472296e9;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pFVar7 = (((param_1->EntityManager).Object)->ObserverManager).FragmentObservers;
      goto LAB_14722972e;
    }
  }
LAB_1472296e9:
  ppUVar5 = TArrayView<UScriptStruct_const_*,int>::operator[](param_3,0);
  bVar4 = UE::Mass::IsA<FMassTag>((UStruct *)*ppUVar5);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsFragment || UE::Mass::IsA<FMassTag>(ObservedTypes[0])",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                         ,0x3d2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (((param_1->EntityManager).Object)->ObserverManager).TagObservers;
LAB_14722972e:
  if (param_4 == pFVar7) {
    EVar8 = AddElement;
  }
  else {
    EVar8 = MAX;
    if (param_4 == pFVar7 + 1) {
      EVar8 = RemoveElement;
    }
  }
  if ((CreateEntity < EVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operation < EMassObservedOperation::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                         ,0x3d9,L"Unable to determine the legacy operation type"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.TypesInOperation.DataPtr = param_3->DataPtr;
  local_28.TypesInOperation.ArrayNum = param_3->ArrayNum;
  local_28.TypesInOperation._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.CurrentTypeIndex = -1;
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.Operation = EVar8;
  HandleElementsImpl(param_1,&local_38,&local_28,param_4);
  return;
}

// HandleFragmentsImpl @ 1472297d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassObserverManager::HandleFragmentsImpl
          (FProcessingContext *param_1,FMassArchetypeEntityCollection *param_2,
          TArrayView<UScriptStruct_const_*,int> *param_3,FMassObserversMap *param_4)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  TArrayView<UScriptStruct_const_*,int> local_58;
  FMassArchetypeEntityCollection local_48;
  
  local_48.Ranges.ArrayNum = (param_2->Ranges).ArrayNum;
  lVar1 = (longlong)local_48.Ranges.ArrayNum;
  _Src = (param_2->Ranges).AllocatorInstance.Data;
  local_48.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Ranges.ArrayNum == 0) {
    local_48.Ranges.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_48.Ranges.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_48.Ranges.ArrayNum,&local_48.Ranges.ArrayMax);
    memcpy(local_48.Ranges.AllocatorInstance.Data,_Src,lVar1 * 0xc);
  }
  local_48.Archetype.ArchetypeHandle.DataPtr.Object =
       (param_2->Archetype).ArchetypeHandle.DataPtr.Object;
  local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  if (local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Archetype.HandleVersion = (param_2->Archetype).HandleVersion;
  local_58.DataPtr = param_3->DataPtr;
  local_58.ArrayNum = param_3->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_68.ArrayNum = 1;
  local_68.DataPtr = &local_48;
  HandleElementsImpl(param_1,&local_68,&local_58,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_48.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ranges.AllocatorInstance.Data);
  }
  return;
}

// HandleSingleEntityImpl @ 14722a380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::HandleSingleEntityImpl
          (FMassObserverManager *this,UScriptStruct *param_1,FMassArchetypeEntityCollection *param_2
          ,FMassObserversMap *param_3)

{
  if (this != (FMassObserverManager *)0x0) {
    UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
              ((TNotNull<FMassObserverManager_*>)this,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 14722cbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMassObserverManager::Initialize(FMassObserverManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  ENetMode EVar6;
  UClass *this_00;
  UObject *pUVar7;
  UWorld *this_01;
  TWeakPtr<FMassEntityManager,1> *pTVar8;
  TSharedRef<FMassEntityManager,1> *pTVar9;
  FName *pFVar10;
  FDelegateHandle FVar11;
  undefined ***pppuVar12;
  EProcessorExecutionFlags EVar13;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar14;
  longlong lVar15;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar16;
  undefined1 auStackY_138 [32];
  FName local_f0;
  undefined1 local_e8 [24];
  TWeakPtr<FMassEntityManager,1> local_d0;
  code *local_b8 [2];
  undefined **local_a8;
  FMassEntityManager *local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined ***local_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined1 local_60 [24];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this_00 = UMassObserverRegistry::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = FWeakObjectPtr::Get(&(this->EntityManager->Owner).WeakPtr);
  if (pUVar7 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x13f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_01 = (UWorld *)(**(code **)(*(longlong *)pUVar7 + 0x180))(pUVar7);
  if (this_01 == (UWorld *)0x0) {
    EVar13 = All;
  }
  else {
    EVar6 = UWorld::InternalGetNetMode(this_01);
    if (EVar6 == NM_Standalone) {
      EVar13 = Standalone;
    }
    else if (EVar6 == NM_DedicatedServer) {
      EVar13 = Server;
    }
    else if (EVar6 == NM_ListenServer) {
      EVar13 = Client|Server;
    }
    else if (EVar6 == NM_Client) {
      EVar13 = Client;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                         ,0x24,
                         L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar13 = None;
    }
  }
  local_60._4_4_ = 0x80;
  local_88._0_8_ = 0;
  pTVar14 = (TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
             *)&pUVar3[1].field_0x8;
  local_88._8_8_ = 0;
  pTVar16 = this->ObservedTags;
  local_68 = 0;
  local_60._0_4_ = 0;
  local_60._12_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_60._8_4_ = 0xffffffff;
  lVar15 = 4;
  do {
    UE::Mass::ObserverManager::Private::
    AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
              (this->EntityManager,EVar13,pUVar7,pTVar14,
               (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(pTVar16 + -4),
               (FMassObserversMap *)((longlong)this + (0xf8 - (longlong)pUVar3) + (longlong)pTVar14)
               ,(TMap<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>_>
                 *)local_88);
    UE::Mass::ObserverManager::Private::
    AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
              (this->EntityManager,EVar13,pUVar7,pTVar14 + 4,pTVar16,
               (FMassObserversMap *)
               ((longlong)this + (0x238 - (longlong)pUVar3) + (longlong)pTVar14),
               (TMap<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>_>
                *)local_88);
    pTVar14 = pTVar14 + 1;
    pTVar16 = pTVar16 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  pTVar8 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                     ((TSharedFromThis<FMassEntityManager,1> *)&this->EntityManager->_padding_,
                      &local_d0);
  local_a0 = pTVar8->Object;
  local_98 = (pTVar8->WeakReferenceCount).ReferenceController;
  (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8->Object = (FMassEntityManager *)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMassObserverManager::Initialize'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMassObserverManager::Initialize'::__l2::<lambda_1>,void,TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&>
                ::Call;
  local_90 = (undefined ***)0x0;
  pTVar9 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&this->EntityManager->_padding_,
                      (TSharedRef<FMassEntityManager,1> *)(local_e8 + 8));
  pFVar10 = ::FName::FName(&local_f0,L"Observers");
  FMassDebugger::RegisterProcessorDataProvider
            (*pFVar10,pTVar9,
             (TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
              *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._16_8_);
  if (local_b8[0] != (code *)0x0) {
    pppuVar12 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar12 = local_90;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_d0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_d0.WeakReferenceCount.ReferenceController,1);
    }
  }
  if ((this->ModulesUnloadedHandle).ID == 0) {
    FVar11 = TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
             ::AddRaw<FMassObserverManager>
                       ((TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                         *)&FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,
                        (FMassObserverManager *)local_e8,(pmf_454431ae)this);
                    /* WARNING: Load size is inaccurate */
    (this->ModulesUnloadedHandle).ID = *FVar11.ID;
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// OnCollectionsCreatedImpl @ 147235e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCollectionsCreatedImpl
          (FMassObserverManager *this,FProcessingContext *param_1,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FMassArchetypeEntityCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (FMassArchetypeEntityCollection *)(param_2->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  bVar4 = OnCollectionsCreatedImpl(this,param_1,&local_18);
  return bVar4;
}

// OnCollectionsCreatedImpl @ 147235ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCollectionsCreatedImpl
          (FMassObserverManager *this,FProcessingContext *param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2)

{
  FMassArchetypeEntityCollection *pFVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  FMassArchetypeEntityCollection *pFVar11;
  longlong lVar12;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar13;
  bool bVar14;
  undefined1 auStackY_298 [32];
  <lambda_1> local_258;
  <lambda_1> local_257;
  <lambda_1> local_256;
  <lambda_1> local_255 [5];
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  FMassArchetypeData *local_240;
  TReferenceControllerBase<1> *local_238;
  uint local_230;
  FProcessingContext *local_228;
  ForElementType<UScriptStruct_const_*> local_220;
  int iStack_218;
  undefined4 uStack_214;
  ForElementType<UScriptStruct_const_*> local_210;
  int iStack_208;
  undefined4 uStack_204;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1f8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1e8;
  FMassObserverExecutionContext local_1d8;
  FMassObserverExecutionContext local_1b8;
  undefined1 local_198 [16];
  ForElementType<unsigned_int> local_188;
  int local_180;
  uint local_17c;
  undefined1 local_178 [16];
  ForElementType<unsigned_int> local_168;
  int local_160;
  uint local_15c;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  TBitArray<FDefaultBitArrayAllocator> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_118;
  TBitArray<FDefaultBitArrayAllocator> local_f8;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  TArray<UScriptStruct_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar14 = -1 < CpuChannel->Enabled;
  local_228 = param_1;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId564,"MassObserver_OnCollectionsCreatedImpl_Collection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x234);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId564);
  }
  if ((this->LocksCount != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocksCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                         ,0x236,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar11 = param_2->DataPtr;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_188 = (ForElementType<unsigned_int>)0x0;
  pFVar1 = pFVar11 + param_2->ArrayNum;
  local_180 = 0;
  local_17c = 0x80;
  while( true ) {
    if (pFVar11 == pFVar1) {
      local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_d8.NumBits = 0;
      local_d8.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)(this->ObservedFragments + 3),
                 (TBitArray<FDefaultBitArrayAllocator> *)local_178,&local_d8,MinSize,&local_256);
      local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_158.NumBits = 0;
      local_158.MaxBits = 0x80;
      if (0x80 < (int)(local_d8.NumBits + 0x1fU & 0xffffffe0)) {
        local_158._24_8_ = ((ulonglong)(local_d8.NumBits + 0x1fU) & 0xffffffe0) << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
      }
      local_158.NumBits = local_d8.NumBits;
      if (local_d8.NumBits != 0) {
        FVar10 = (ForElementType<unsigned_int>)&local_d8;
        if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_d8.AllocatorInstance.SecondaryData;
        }
        FVar9 = (ForElementType<unsigned_int>)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_158.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar9,(void *)FVar10,(ulonglong)(local_d8.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
      }
      if (local_158.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        local_178[0] = local_158.AllocatorInstance.InlineData[0];
        local_178[1] = local_158.AllocatorInstance.InlineData[1];
        local_178[2] = local_158.AllocatorInstance.InlineData[2];
        local_178[3] = local_158.AllocatorInstance.InlineData[3];
        local_178[4] = local_158.AllocatorInstance.InlineData[4];
        local_178[5] = local_158.AllocatorInstance.InlineData[5];
        local_178[6] = local_158.AllocatorInstance.InlineData[6];
        local_178[7] = local_158.AllocatorInstance.InlineData[7];
        local_178[8] = local_158.AllocatorInstance.InlineData[8];
        local_178[9] = local_158.AllocatorInstance.InlineData[9];
        local_178[10] = local_158.AllocatorInstance.InlineData[10];
        local_178[0xb] = local_158.AllocatorInstance.InlineData[0xb];
        local_178[0xc] = local_158.AllocatorInstance.InlineData[0xc];
        local_178[0xd] = local_158.AllocatorInstance.InlineData[0xd];
        local_178[0xe] = local_158.AllocatorInstance.InlineData[0xe];
        local_178[0xf] = local_158.AllocatorInstance.InlineData[0xf];
      }
      FVar10 = local_158.AllocatorInstance.SecondaryData;
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_168);
        FVar10 = local_158.AllocatorInstance.SecondaryData;
      }
      local_160 = local_158.NumBits;
      local_15c = local_158.MaxBits;
      local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_158.NumBits = 0;
      local_158.MaxBits = 0;
      local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_b8.NumBits = 0;
      local_b8.MaxBits = 0x80;
      local_168 = FVar10;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)(this->ObservedTags + 3),
                 (TBitArray<FDefaultBitArrayAllocator> *)local_198,&local_b8,MinSize,local_255);
      local_138.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_138.NumBits = 0;
      local_138.MaxBits = 0x80;
      if (0x80 < (int)(local_b8.NumBits + 0x1fU & 0xffffffe0)) {
        local_138._24_8_ = ((ulonglong)(local_b8.NumBits + 0x1fU) & 0xffffffe0) << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_138,0);
      }
      local_138.NumBits = local_b8.NumBits;
      if (local_b8.NumBits != 0) {
        FVar10 = (ForElementType<unsigned_int>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_b8.AllocatorInstance.SecondaryData;
        }
        FVar9 = (ForElementType<unsigned_int>)&local_138;
        if (local_138.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_138.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar9,(void *)FVar10,(ulonglong)(local_b8.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
      }
      if (local_138.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        local_198[0] = local_138.AllocatorInstance.InlineData[0];
        local_198[1] = local_138.AllocatorInstance.InlineData[1];
        local_198[2] = local_138.AllocatorInstance.InlineData[2];
        local_198[3] = local_138.AllocatorInstance.InlineData[3];
        local_198[4] = local_138.AllocatorInstance.InlineData[4];
        local_198[5] = local_138.AllocatorInstance.InlineData[5];
        local_198[6] = local_138.AllocatorInstance.InlineData[6];
        local_198[7] = local_138.AllocatorInstance.InlineData[7];
        local_198[8] = local_138.AllocatorInstance.InlineData[8];
        local_198[9] = local_138.AllocatorInstance.InlineData[9];
        local_198[10] = local_138.AllocatorInstance.InlineData[10];
        local_198[0xb] = local_138.AllocatorInstance.InlineData[0xb];
        local_198[0xc] = local_138.AllocatorInstance.InlineData[0xc];
        local_198[0xd] = local_138.AllocatorInstance.InlineData[0xd];
        local_198[0xe] = local_138.AllocatorInstance.InlineData[0xe];
        local_198[0xf] = local_138.AllocatorInstance.InlineData[0xf];
      }
      FVar10 = local_138.AllocatorInstance.SecondaryData;
      if (local_188 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_188);
        FVar10 = local_138.AllocatorInstance.SecondaryData;
      }
      local_180 = local_138.NumBits;
      local_17c = local_138.MaxBits;
      local_138.NumBits = 0;
      local_138.MaxBits = 0;
      local_138.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_188 = FVar10;
      bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)local_178);
      bVar7 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)local_198);
      if ((bVar5) && (bVar7)) {
        bVar5 = false;
      }
      else {
        local_98.AllocatorInstance.SecondaryData = (ForElementType<UScriptStruct_const_*>)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 8;
        if (!bVar5) {
          TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)local_178,&local_98);
          iStack_218 = local_98.ArrayNum;
          local_220 = (ForElementType<UScriptStruct_const_*>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0
             ) {
            local_220 = local_98.AllocatorInstance.SecondaryData;
          }
          if ((local_98.ArrayNum < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_1d8.TypesInOperation._12_4_ = uStack_214;
          local_1d8.TypesInOperation.ArrayNum = iStack_218;
          local_1d8.Operation = CreateEntity;
          local_1d8.CurrentTypeIndex = -1;
          local_1d8.TypesInOperation.DataPtr = (UScriptStruct **)local_220;
          local_1f8.DataPtr = param_2->DataPtr;
          local_1f8.ArrayNum = param_2->ArrayNum;
          local_1f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
          HandleElementsImpl(param_1,&local_1f8,&local_1d8,this->FragmentObservers + 3);
        }
        if (!bVar7) {
          local_98.ArrayNum = 0;
          if ((local_98.ArrayMax < 0) && (local_98.ArrayMax != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
                      (8,8,0,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
          }
          TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)local_198,&local_98);
          iStack_208 = local_98.ArrayNum;
          local_210 = (ForElementType<UScriptStruct_const_*>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0
             ) {
            local_210 = local_98.AllocatorInstance.SecondaryData;
          }
          if ((local_98.ArrayNum < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_1b8.TypesInOperation._12_4_ = uStack_204;
          local_1b8.TypesInOperation.ArrayNum = iStack_208;
          local_1b8.Operation = CreateEntity;
          local_1b8.CurrentTypeIndex = -1;
          local_1b8.TypesInOperation.DataPtr = (UScriptStruct **)local_210;
          local_1e8.DataPtr = param_2->DataPtr;
          local_1e8.ArrayNum = param_2->ArrayNum;
          local_1e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
          HandleElementsImpl(param_1,&local_1e8,&local_1b8,this->TagObservers + 3);
        }
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0)
        {
          FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
        }
        bVar5 = true;
      }
      if (local_188 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_188);
      }
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_168);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar5;
    }
    _Src = (pFVar11->Ranges).AllocatorInstance.Data;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = (pFVar11->Ranges).ArrayNum;
    lVar12 = (longlong)local_248;
    if (local_248 == 0) {
      local_244 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_248,0,&local_250,local_248,&local_244);
      memcpy(local_250.Data,_Src,lVar12 * 0xc);
    }
    pTVar2 = (pFVar11->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar11->Archetype).ArchetypeHandle.DataPtr.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_230 = (pFVar11->Archetype).HandleVersion;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_240 = pFVar3;
    local_238 = pTVar2;
    if ((pFVar3 == (FMassArchetypeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), bVar5)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (((FMassArchetypeData *)local_178 == pFVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_118.MaxBits = 0x80;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_118.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)local_178,
               (TBitArray<FDefaultBitArrayAllocator> *)pFVar3,&local_118,MaxSize,&local_258);
    local_160 = 0;
    uVar8 = local_118.NumBits + 0x1fU & 0xffffffe0;
    if (((int)local_15c < (int)uVar8) || (0x80 < (int)local_15c)) {
      local_15c = 0x80;
      if (0x80 < (int)uVar8) {
        local_15c = uVar8;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_178,0);
    }
    local_160 = local_118.NumBits;
    if (local_118.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_118;
      if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_118.AllocatorInstance.SecondaryData;
      }
      FVar9 = (ForElementType<unsigned_int>)local_178;
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_168;
      }
      memcpy((void *)FVar9,(void *)FVar10,(ulonglong)(local_118.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
    pTVar13 = &(pFVar3->CompositionDescriptor).Tags;
    if (((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)local_198
         == pTVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_f8.NumBits = 0;
    local_f8.MaxBits = 0x80;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              ((TBitArray<FDefaultBitArrayAllocator> *)local_198,
               (TBitArray<FDefaultBitArrayAllocator> *)pTVar13,&local_f8,MaxSize,&local_257);
    local_180 = 0;
    uVar8 = local_f8.NumBits + 0x1fU & 0xffffffe0;
    if (((int)local_17c < (int)uVar8) || (0x80 < (int)local_17c)) {
      local_17c = 0x80;
      if (0x80 < (int)uVar8) {
        local_17c = uVar8;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_198,0);
    }
    local_180 = local_f8.NumBits;
    if (local_f8.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_f8;
      if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_f8.AllocatorInstance.SecondaryData;
      }
      FVar9 = (ForElementType<unsigned_int>)local_198;
      if (local_188 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_188;
      }
      memcpy((void *)FVar9,(void *)FVar10,(ulonglong)(local_f8.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_238);
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    pFVar11 = pFVar11 + 1;
    param_1 = local_228;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// OnCompositionChanged @ 1472366e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCompositionChanged
          (FMassObserverManager *this,FCollectionRefOrHandle *param_1,
          FMassArchetypeCompositionDescriptor *param_2,EMassObservedOperation param_3,
          FProcessingContext *param_4)

{
  atomic<int> *paVar1;
  FMassArchetypeEntityCollection *pFVar2;
  FMassArchetypeData *pFVar3;
  FCreationContext *pFVar4;
  FCreationNotificationHandle FVar5;
  FObserverLock *pFVar6;
  atomic<int> aVar7;
  bool bVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  int iVar11;
  UObject *pUVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  FEntityCollection *pFVar16;
  ForElementType<unsigned_int> FVar17;
  int *piVar18;
  uint uVar19;
  FEntityCollection *pFVar20;
  ulonglong uVar21;
  code *pcVar22;
  undefined1 *puVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  FEntityCollection *pFVar26;
  bool bVar27;
  undefined1 auStackY_318 [32];
  FScriptContainerElement local_2d8 [8];
  bool local_2d0;
  bool local_2cf [3];
  <lambda_1> local_2cc;
  <lambda_1> local_2cb [3];
  uint local_2c8 [2];
  FArchetypeEntityRange local_2c0;
  undefined1 local_2b4 [4];
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_2b0;
  TSharedPtr<UE::Mass::ObserverManager::FObserverLock,1> local_2a0;
  FCreationNotificationHandle local_290;
  FMassArchetypeHandle local_288;
  FMassArchetypeEntityCollection local_278;
  initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> local_248;
  FProcessingContext **local_238;
  FMassObserverManager *local_230;
  bool *local_228;
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  FScriptContainerElement *local_218;
  uint *local_210;
  bool *local_208;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  TBitArray<FDefaultBitArrayAllocator> local_1f8;
  TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> local_1d8;
  TBitArray<FDefaultBitArrayAllocator> local_1a8;
  TBitArray<FDefaultBitArrayAllocator> local_188;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined1 local_148 [16];
  void *pvStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  void *pvStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  void *pvStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  FMassArchetypeCompositionDescriptor local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2d8[0] = (FScriptContainerElement)param_3;
  if (((((param_1->EntityHandle).Index == 0) || ((param_1->EntityHandle).SerialNumber == 0)) &&
      ((pFVar2 = param_1->EntityCollection, (pFVar2->Ranges).ArrayNum != 0 ||
       ((pFVar2->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)))) &&
     ((pFVar3 = (pFVar2->Archetype).ArchetypeHandle.DataPtr.Object,
      pFVar3 == (FMassArchetypeData *)0x0 ||
      (pFVar3->EntityOrderVersion != (pFVar2->Archetype).HandleVersion)))) {
    local_2cf[1] = false;
    `FMassObserverManager::OnCompositionChanged'::__l2::<lambda_1>::operator()(local_2cf + 1);
  }
  bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if ((((bVar8) &&
       (bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&param_2->Tags), bVar8)) &&
      (bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->ChunkFragments), bVar8)) &&
     ((bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->SharedFragments), bVar8 &&
      (bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->ConstSharedFragments), bVar8)))) {
    return false;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId436,"MassObserver_OnCompositionChanged",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x1b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId436);
  }
  pFVar20 = (FEntityCollection *)0x0;
  uVar19 = 0;
  if (0 < this->LocksCount) {
    pFVar26 = (FEntityCollection *)
              (this->ActiveCreationContext).WeakReferenceCount.ReferenceController;
    pFVar16 = pFVar26;
    if (pFVar26 != (FEntityCollection *)0x0) {
      aVar7 = *(atomic<int> *)&(pFVar26->EntityHandles).ArrayNum;
      do {
        pFVar16 = pFVar20;
        if (aVar7 == (atomic<int>)0x0) goto LAB_147236835;
        paVar1 = (atomic<int> *)&(pFVar26->EntityHandles).ArrayNum;
        LOCK();
        aVar10 = *paVar1;
        bVar27 = aVar7 == aVar10;
        if (bVar27) {
          *paVar1 = (atomic<int>)((int)aVar7 + 1);
          aVar10 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar10;
      } while (!bVar27);
      pFVar4 = (this->ActiveCreationContext).Object;
      pFVar16 = pFVar26;
      if (pFVar4 != (FCreationContext *)0x0) {
        FVar5 = pFVar4->CreationHandle;
        pFVar6 = (pFVar4->Lock).Object;
        local_290 = FVar5;
        if (FVar5.OpIndex != pFVar6->CreationNotificationIndex) {
          local_2cf[2] = false;
          `UE::Mass::ObserverManager::FObserverLock::MarkCreationNotificationDirty'::__l2::
          <lambda_1>::operator()(local_2cf + 2);
        }
        if ((((longlong)FVar5 < 0) || ((pFVar6->BufferedNotifications).ArrayNum <= FVar5.OpIndex))
           && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BufferedNotifications.IsValidIndex(CreationHandle)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                                   ,0xe9,L"Given CreationHandle doesn\'t match stored notifications"
                                  ), bVar27)) {
          pcVar22 = (code *)swi(3);
          uVar9 = (*pcVar22)();
          return (bool)uVar9;
        }
        lVar24 = (longlong)local_290.OpIndex;
        uVar19 = 0;
        if (local_290.OpIndex < (pFVar6->BufferedNotifications).ArrayNum) {
          uVar19 = (uint)~local_290.OpIndex >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar22 = (code *)swi(3);
          uVar9 = (*pcVar22)();
          return (bool)uVar9;
        }
        pFVar25 = (pFVar6->BufferedNotifications).AllocatorInstance.Data;
        pFVar16 = (FEntityCollection *)(pFVar25 + lVar24 * 0xe0 + 0xb0);
        if (pFVar25[lVar24 * 0xe0 + 0xd8] != (FScriptContainerElement)0x0) {
          pFVar16 = pFVar20;
        }
        if (pFVar16 != (FEntityCollection *)0x0) {
          UE::Mass::FEntityCollection::MarkDirty(pFVar16);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar26);
        bVar27 = false;
        goto LAB_1472373bc;
      }
    }
LAB_147236835:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar16);
    if ((byte)((char)local_2d8[0] - RemoveElement) < 2) {
      if (FVisualLogger::bIsRecording != 0) {
        pUVar12 = FWeakObjectPtr::Get(&(this->EntityManager->Owner).WeakPtr);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar12,(FName *)&LogMass.field_0x4,Log,
                   L"%hs: Remove operation while observers are locked - the remove-observer will be executed after the data has already been removed."
                  );
      }
      if (4 < (byte)LogMass._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      }
    }
  }
  local_2c8[0] = (uint)(byte)local_2d8[0];
  local_188.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_188.NumBits = 0;
  local_188.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)(this->ObservedFragments + local_2c8[0]),
             (TBitArray<FDefaultBitArrayAllocator> *)param_2,&local_188,MinSize,&local_2cc);
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1f8.NumBits = 0;
  local_1f8.MaxBits = 0x80;
  if (0x80 < (int)(local_188.NumBits + 0x1fU & 0xffffffe0)) {
    local_1f8._24_8_ = ((ulonglong)(local_188.NumBits + 0x1fU) & 0xffffffe0) << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1f8,0);
  }
  local_1f8.NumBits = local_188.NumBits;
  if (local_188.NumBits != 0) {
    FVar17 = (ForElementType<unsigned_int>)&local_188;
    if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_188.AllocatorInstance.SecondaryData;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_1f8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar15,(void *)FVar17,(ulonglong)(local_188.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
  }
  local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.NumBits = 0;
  local_168.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)(this->ObservedTags + (int)local_2c8[0]),
             (TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags,&local_168,MinSize,local_2cb);
  local_1a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1a8.MaxBits = 0x80;
  local_1a8.NumBits = 0;
  uVar13 = local_168.NumBits + 0x1fU & 0xffffffe0;
  if (0x80 < (int)uVar13) {
    local_1a8.MaxBits = uVar13;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1a8,0);
  }
  local_1a8.NumBits = local_168.NumBits;
  if (local_168.NumBits != 0) {
    FVar17 = (ForElementType<unsigned_int>)&local_168;
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_168.AllocatorInstance.SecondaryData;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_1a8;
    if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_1a8.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar15,(void *)FVar17,(ulonglong)(local_168.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  bVar27 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)&local_1f8);
  local_2d0 = !bVar27;
  local_2cf[0] = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                           ((FConstBitSetContainer *)&local_1a8);
  local_2cf[0] = !local_2cf[0];
  if ((!bVar27) || (local_2cf[0])) {
    if (0 < this->LocksCount) {
      local_2a0.SharedReferenceCount.ReferenceController =
           (this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
      local_2a0.Object = (FObserverLock *)0x0;
      if (local_2a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        aVar7 = (local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            local_2a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_147236ac6;
          }
          LOCK();
          aVar10 = (local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar27 = aVar7 == aVar10;
          if (bVar27) {
            (local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar27);
        local_2a0.Object = (this->ActiveObserverLock).Object;
      }
LAB_147236ac6:
      TSharedPtr<UE::Mass::ObserverManager::FObserverLock,1>::ToSharedRef(&local_2a0,&local_2b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
      iVar14 = CpuChannel->Enabled;
      if (UE::Mass::ObserverManager::bCoalesceBufferedNotifications == false) {
        if (-1 < iVar14) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId484,"MassObserver_Notify_Emplace",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                     ,0x1e4);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
        }
        local_1d8._padding_ = 0;
        local_1d8._padding_._0_4_ = 0;
        local_1d8._padding_._4_4_ = 0;
        local_1d8._padding_ = 0;
        local_1d8._padding_ = 0;
        local_1d8._padding_ = 0;
        local_1d8.TypeIndex = '\0';
        if (((param_1->EntityHandle).Index == 0) || ((param_1->EntityHandle).SerialNumber == 0)) {
          TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>::
          Emplace<UE::Mass::FEntityCollection,FMassArchetypeEntityCollection_const_&>
                    (&local_1d8,param_1->EntityCollection);
        }
        else {
          DestructItems<FMassArchetypeEntityCollection,int>((FMassArchetypeEntityCollection *)0x0,0)
          ;
          if ((FMassArchetypeEntityCollection *)local_1d8._padding_ !=
              (FMassArchetypeEntityCollection *)0x0) {
            FMemory::Free((void *)local_1d8._padding_);
          }
          if ((FMassEntityHandle)local_1d8._padding_ != (FMassEntityHandle)0x0) {
            FMemory::Free((void *)local_1d8._padding_);
          }
          local_1d8._padding_ = *(longlong *)&param_1->EntityHandle;
          local_1d8.TypeIndex = '\x01';
        }
        if (local_2d0 == false) {
          piVar18 = &((local_2b0.Object)->BufferedNotifications).ArrayMax;
          iVar11 = ((local_2b0.Object)->BufferedNotifications).ArrayNum;
          if (iVar11 == *piVar18) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8e0,&((local_2b0.Object)->BufferedNotifications).AllocatorInstance
                                ,piVar18);
          }
          ((local_2b0.Object)->BufferedNotifications).ArrayNum = iVar11 + 1;
          pFVar25 = ((local_2b0.Object)->BufferedNotifications).AllocatorInstance.Data +
                    (longlong)iVar11 * 0xe0;
          *pFVar25 = local_2d8[0];
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 8),(FBitSetContainer *)&local_1a8);
          pFVar25[0xa8] = (FScriptContainerElement)0x3;
          uVar21 = (ulonglong)local_1d8.TypeIndex;
          pFVar25[0xd8] = (FScriptContainerElement)local_1d8.TypeIndex;
          if ((1 < local_1d8.TypeIndex) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x105,L""), bVar27)) {
            pcVar22 = (code *)swi(3);
            uVar9 = (*pcVar22)();
            return (bool)uVar9;
          }
          pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                              ::__l2::MoveConstructors)[uVar21];
          if (pcVar22 == UE::Core::Private::TMoveConstructorCaller<FMassEntityHandle>::Construct) {
            *(undefined4 *)(pFVar25 + 0xb0) = (undefined4)local_1d8._padding_;
            *(undefined4 *)(pFVar25 + 0xb4) = local_1d8._padding_._4_4_;
          }
          else {
LAB_14723711c:
            (*pcVar22)(pFVar25 + 0xb0,&local_1d8);
          }
        }
        else if (local_2cf[0] == false) {
          piVar18 = &((local_2b0.Object)->BufferedNotifications).ArrayMax;
          iVar11 = ((local_2b0.Object)->BufferedNotifications).ArrayNum;
          if (iVar11 == *piVar18) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8e0,&((local_2b0.Object)->BufferedNotifications).AllocatorInstance
                                ,piVar18);
          }
          ((local_2b0.Object)->BufferedNotifications).ArrayNum = iVar11 + 1;
          pFVar25 = ((local_2b0.Object)->BufferedNotifications).AllocatorInstance.Data +
                    (longlong)iVar11 * 0xe0;
          *pFVar25 = local_2d8[0];
          *(undefined8 *)(pFVar25 + 0x18) = AddElement;
          if (local_1f8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
            memmove(pFVar25 + 8,&local_1f8,0x10);
          }
          if (*(void **)(pFVar25 + 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar25 + 0x18));
          }
          *(ForElementType<unsigned_int> *)(pFVar25 + 0x18) =
               local_1f8.AllocatorInstance.SecondaryData;
          local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          *(int *)(pFVar25 + 0x20) = local_1f8.NumBits;
          *(int *)(pFVar25 + 0x24) = local_1f8.MaxBits;
          local_1f8.NumBits = 0;
          local_1f8.MaxBits = 0;
          pFVar25[0xa8] = (FScriptContainerElement)0x2;
          uVar21 = (ulonglong)local_1d8.TypeIndex;
          pFVar25[0xd8] = (FScriptContainerElement)local_1d8.TypeIndex;
          if ((1 < local_1d8.TypeIndex) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x105,L""), bVar27)) {
            pcVar22 = (code *)swi(3);
            uVar9 = (*pcVar22)();
            return (bool)uVar9;
          }
          pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                              ::__l2::MoveConstructors)[uVar21];
          if (pcVar22 != UE::Core::Private::TMoveConstructorCaller<FMassEntityHandle>::Construct)
          goto LAB_14723711c;
          *(undefined4 *)(pFVar25 + 0xb0) = (undefined4)local_1d8._padding_;
          *(undefined4 *)(pFVar25 + 0xb4) = local_1d8._padding_._4_4_;
        }
        else {
          local_108._0_8_ = 0;
          local_f0 = 0;
          local_ec = 0x80;
          local_108._8_8_ = 0;
          pvStack_f8 = (void *)0x0;
          local_128._0_8_ = 0;
          local_128._8_8_ = 0;
          pvStack_118 = (void *)0x0;
          local_110 = 0;
          local_148._8_8_ = 0;
          pvStack_138 = (void *)0x0;
          local_10c = 0x80;
          local_148._0_8_ = 0;
          local_130 = 0;
          local_12c = 0x80;
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_e8,(FBitSetContainer *)&local_1f8);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_e8.Tags,(FBitSetContainer *)&local_1a8);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_e8.ChunkFragments,(FBitSetContainer *)local_148);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_e8.SharedFragments,(FBitSetContainer *)local_128);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_e8.ConstSharedFragments,
                     (FBitSetContainer *)local_108);
          if (pvStack_138 != (void *)0x0) {
            FMemory::Free(pvStack_138);
          }
          if (pvStack_118 != (void *)0x0) {
            FMemory::Free(pvStack_118);
          }
          if (pvStack_f8 != (void *)0x0) {
            FMemory::Free(pvStack_f8);
          }
          piVar18 = &((local_2b0.Object)->BufferedNotifications).ArrayMax;
          iVar11 = ((local_2b0.Object)->BufferedNotifications).ArrayNum;
          if (iVar11 == *piVar18) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8e0,&((local_2b0.Object)->BufferedNotifications).AllocatorInstance
                                ,piVar18);
          }
          ((local_2b0.Object)->BufferedNotifications).ArrayNum = iVar11 + 1;
          pFVar25 = ((local_2b0.Object)->BufferedNotifications).AllocatorInstance.Data +
                    (longlong)iVar11 * 0xe0;
          *pFVar25 = local_2d8[0];
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 8),(FBitSetContainer *)&local_e8);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 0x28),(FBitSetContainer *)&local_e8.Tags);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 0x48),
                     (FBitSetContainer *)&local_e8.ChunkFragments);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 0x68),
                     (FBitSetContainer *)&local_e8.SharedFragments);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(pFVar25 + 0x88),
                     (FBitSetContainer *)&local_e8.ConstSharedFragments);
          pFVar25[0xa8] = (FScriptContainerElement)0x1;
          uVar21 = (ulonglong)local_1d8.TypeIndex;
          pFVar25[0xd8] = (FScriptContainerElement)local_1d8.TypeIndex;
          if ((1 < local_1d8.TypeIndex) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x105,L""), bVar27)) {
            pcVar22 = (code *)swi(3);
            uVar9 = (*pcVar22)();
            return (bool)uVar9;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[uVar21] ==
              UE::Core::Private::TMoveConstructorCaller<FMassEntityHandle>::Construct) {
            *(undefined4 *)(pFVar25 + 0xb0) = (undefined4)local_1d8._padding_;
            *(undefined4 *)(pFVar25 + 0xb4) = local_1d8._padding_._4_4_;
            FMassArchetypeCompositionDescriptor::~FMassArchetypeCompositionDescriptor(&local_e8);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[uVar21])(pFVar25 + 0xb0,&local_1d8);
            FMassArchetypeCompositionDescriptor::~FMassArchetypeCompositionDescriptor(&local_e8);
          }
        }
        uVar21 = (ulonglong)local_1d8.TypeIndex;
        if ((1 < uVar21) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar27)) {
          pcVar22 = (code *)swi(3);
          uVar9 = (*pcVar22)();
          return (bool)uVar9;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar21] ==
            UE::Core::Private::TDestructorCaller<UE::Mass::FEntityCollection>::Destruct) {
          DestructItems<FMassArchetypeEntityCollection,int>
                    ((FMassArchetypeEntityCollection *)local_1d8._padding_,(int)local_1d8._padding_)
          ;
          if ((FMassArchetypeEntityCollection *)local_1d8._padding_ !=
              (FMassArchetypeEntityCollection *)0x0) {
            FMemory::Free((void *)local_1d8._padding_);
          }
          if ((FMassEntityHandle)local_1d8._padding_ != (FMassEntityHandle)0x0) {
            FMemory::Free((void *)local_1d8._padding_);
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar21])(&local_1d8);
        }
      }
      else {
        if (-1 < iVar14) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId467,"MassObserver_Notify_Coalesced",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                     ,0x1d3);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId467);
        }
        if (((param_1->EntityHandle).Index == 0) || ((param_1->EntityHandle).SerialNumber == 0)) {
          UE::Mass::ObserverManager::FObserverLock::
          AddNotification<FMassArchetypeEntityCollection_const_&>
                    (local_2b0.Object,(EMassObservedOperation)local_2d8[0],param_1->EntityCollection
                     ,local_2d0,
                     (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)&local_1f8,local_2cf[0],
                     (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *
                     )&local_1a8);
        }
        else {
          UE::Mass::ObserverManager::FObserverLock::AddNotification<FMassEntityHandle_&>
                    (local_2b0.Object,(EMassObservedOperation)local_2d8[0],&param_1->EntityHandle,
                     local_2d0,
                     (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)&local_1f8,local_2cf[0],
                     (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *
                     )&local_1a8);
        }
      }
      if (-1 < iVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b0.SharedReferenceCount.ReferenceController);
      goto LAB_1472371ab;
    }
    local_238 = &param_4;
    local_228 = &local_2d0;
    local_220 = &local_1f8;
    local_218 = local_2d8;
    local_210 = local_2c8;
    local_208 = local_2cf;
    local_200 = &local_1a8;
    local_230 = this;
    if (((param_1->EntityHandle).Index == 0) || ((param_1->EntityHandle).SerialNumber == 0)) {
      `FMassObserverManager::OnCompositionChanged'::__l67::<lambda_2>::operator()
                (&local_238,param_1->EntityCollection);
    }
    else {
      FMassEntityManager::GetArchetypeForEntity
                (this->EntityManager,&local_288,param_1->EntityHandle);
      pFVar3 = local_288.DataPtr.Object;
      local_2c0.SubchunkStart = (param_1->EntityHandle).Index;
      if (local_288.DataPtr.Object == (FMassArchetypeData *)0x0) {
        local_2c0.ChunkIndex = 0;
      }
      else {
        pFVar26 = pFVar20;
        if (*(int *)&((local_288.DataPtr.Object)->EntityMap).field_0x8 !=
            *(int *)&((local_288.DataPtr.Object)->EntityMap).field_0x34) {
          puVar23 = *(undefined1 **)&((local_288.DataPtr.Object)->EntityMap).field_0x40;
          if (puVar23 == (undefined1 *)0x0) {
            puVar23 = &((local_288.DataPtr.Object)->EntityMap).field_0x38;
          }
          iVar14 = *(int *)(puVar23 +
                           ((ulonglong)
                            (*(int *)&((local_288.DataPtr.Object)->EntityMap).field_0x48 - 1) &
                           (ulonglong)param_1->EntityHandle & 0xffffffff) * 4);
          if (iVar14 != -1) {
            do {
              piVar18 = (int *)((longlong)iVar14 * 0x10 +
                               *(longlong *)&(local_288.DataPtr.Object)->EntityMap);
              if (*piVar18 == local_2c0.SubchunkStart) {
                pFVar26 = (FEntityCollection *)(piVar18 + 1);
                if (piVar18 == (int *)0x0) {
                  pFVar26 = pFVar20;
                }
                if (pFVar26 != (FEntityCollection *)0x0) goto LAB_1472372af;
                break;
              }
              iVar14 = piVar18[2];
            } while (iVar14 != -1);
          }
        }
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrueIndexPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                            ,0x2e,L"");
        if (bVar27) {
          pcVar22 = (code *)swi(3);
          uVar9 = (*pcVar22)();
          return (bool)uVar9;
        }
LAB_1472372af:
        iVar14 = *(int *)&(pFVar26->EntityHandles).AllocatorInstance.Data;
        if ((iVar14 < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("TrueIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                                ,0x30,L"Negative values are unexpected here"), bVar27)) {
          pcVar22 = (code *)swi(3);
          uVar9 = (*pcVar22)();
          return (bool)uVar9;
        }
        local_2c0.ChunkIndex = iVar14 / pFVar3->NumEntitiesPerChunk;
        local_2c0.SubchunkStart = iVar14 % pFVar3->NumEntitiesPerChunk;
      }
      local_248._First = &local_2c0;
      local_2c0.Length = 1;
      local_248._Last = (FArchetypeEntityRange *)local_2b4;
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
      TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                (&local_278.Ranges,&local_248);
      local_278.Archetype.ArchetypeHandle.DataPtr.Object = local_288.DataPtr.Object;
      local_278.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
           local_288.DataPtr.SharedReferenceCount.ReferenceController;
      if (local_288.DataPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_288.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_288.DataPtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_288.DataPtr.Object != (FMassArchetypeData *)0x0) {
        uVar19 = (local_288.DataPtr.Object)->EntityOrderVersion;
      }
      local_278.Archetype.HandleVersion = uVar19;
      `FMassObserverManager::OnCompositionChanged'::__l67::<lambda_2>::operator()
                (&local_238,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController);
      if (local_278.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Ranges.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.DataPtr.SharedReferenceCount.ReferenceController);
    }
    bVar27 = true;
  }
  else {
LAB_1472371ab:
    bVar27 = false;
  }
  if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
  }
  if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
  }
LAB_1472373bc:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar27;
}

// OnCompositionChanged @ 147237410

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCompositionChanged
          (FMassObserverManager *this,FProcessingContext *param_1,
          FMassArchetypeEntityCollection *param_2,FMassArchetypeCompositionDescriptor *param_3,
          EMassObservedOperation param_4)

{
  bool bVar1;
  
  bVar1 = OnCompositionChanged(this,param_2,param_3,param_4,(FProcessingContext *)0x0);
  return bVar1;
}

// OnCompositionChanged @ 147237440

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCompositionChanged
          (FMassObserverManager *this,FMassArchetypeEntityCollection *param_1,
          FMassArchetypeCompositionDescriptor *param_2,EMassObservedOperation param_3,
          FProcessingContext *param_4)

{
  bool bVar1;
  bool bVar2;
  FCollectionRefOrHandle local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassArchetypeEntityCollection_const&___ptr64,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId166,"MassObserver_OnCompositionChanged_Collection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverManager.h"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassArchetypeEntityCollection_const&___ptr64,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId166);
  }
  local_18.EntityHandle.Index = 0;
  local_18.EntityHandle.SerialNumber = 0;
  local_18.EntityCollection = param_1;
  bVar1 = OnCompositionChanged(this,&local_18,param_2,param_3,param_4);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// OnCompositionChanged @ 147237510

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnCompositionChanged
          (FMassObserverManager *this,FMassEntityHandle param_1,
          FMassArchetypeCompositionDescriptor *param_2,EMassObservedOperation param_3,
          FProcessingContext *param_4)

{
  bool bVar1;
  FCollectionRefOrHandle local_18;
  
  local_18.EntityHandle = param_1;
  if (CpuChannel->Enabled < 0) {
    local_18.EntityCollection = &FCollectionRefOrHandle::DummyCollection;
    bVar1 = OnCompositionChanged(this,&local_18,param_2,param_3,param_4);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassEntityHandle,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId173,"MassObserver_OnCompositionChanged_Entity",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverManager.h"
               ,0xad);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassEntityHandle,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId173);
    local_18.EntityCollection = &FCollectionRefOrHandle::DummyCollection;
    bVar1 = OnCompositionChanged(this,&local_18,param_2,param_3,param_4);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// OnFragmentOrTagOperation @ 147237610

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::OnFragmentOrTagOperation
          (FMassObserverManager *this,UScriptStruct *param_1,FMassArchetypeEntityCollection *param_2
          ,EMassObservedOperation param_3)

{
  if (this != (FMassObserverManager *)0x0) {
    UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
              ((TNotNull<FMassObserverManager_*>)this,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnModulePackagesUnloaded @ 147237630

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassObserverManager::OnModulePackagesUnloaded
          (FMassObserverManager *this,TArrayView<UPackage_*_const,int> *param_1)

{
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *pTVar1;
  UPackage **ppUVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  UPackage **ppUVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  FName local_res20;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId805,"FMassObserverManager::OnModulePackagesUnloaded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x325);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId805);
  }
  uVar10 = 0;
  do {
    pTVar1 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              *)(this->FragmentObservers + (int)uVar10);
    TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_78,pTVar1);
    uVar5 = local_78._0_8_;
    local_c0._0_1_ = '\0';
    local_c0._1_1_ = '\0';
    stack0xffffffffffffff18 = local_78._16_16_;
    auStack_f0._0_8_ = local_78._8_8_;
    local_d8 = local_58;
    pTStack_d0 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_c8 = pTVar1;
    if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      iVar6 = param_1->ArrayNum;
      ppUVar2 = param_1->DataPtr;
      uVar11 = local_78._28_4_;
      do {
        pUVar3 = *(UObject **)(*(longlong *)uVar5 + (longlong)(int)uVar8 * 0x28);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar3);
        for (ppUVar9 = ppUVar2; ppUVar9 != ppUVar2 + iVar6; ppUVar9 = ppUVar9 + 1) {
          if (*ppUVar9 == pUVar7) {
            if (5 < (byte)LogMass._0_1_) {
              local_res20 = (FName)pUVar7->_padding_;
              ::FName::ToString(&local_res20,&local_a8);
              local_res20.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
              local_res20.Number = *(uint *)&pUVar3->field_0x1c;
              ::FName::ToString(&local_res20,&local_b8);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u__hs__removed_ob_15157a3f0,
                         (FLogCategoryBase *)&LogMass);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_d0,uVar11);
            local_c0._0_1_ = '\x01';
            break;
          }
        }
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        uVar8 = (ulonglong)uStack_dc;
        uVar11 = uStack_dc;
      } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar6 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_c8->HashSize < iVar6)) || (iVar6 < local_c8->HashSize)) {
          local_c8->HashSize = iVar6;
          TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
    pTVar1 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
              *)(this->TagObservers + (int)uVar10);
    TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_78,pTVar1);
    uVar5 = local_78._0_8_;
    local_c0 = 0;
    stack0xffffffffffffff18 = local_78._16_16_;
    auStack_f0._0_8_ = local_78._8_8_;
    local_d8 = local_58;
    pTStack_d0 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_c8 = pTVar1;
    if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      iVar6 = param_1->ArrayNum;
      ppUVar2 = param_1->DataPtr;
      uVar11 = local_78._28_4_;
      do {
        pUVar3 = *(UObject **)(*(longlong *)uVar5 + (longlong)(int)uVar8 * 0x28);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar3);
        for (ppUVar9 = ppUVar2; ppUVar9 != ppUVar2 + iVar6; ppUVar9 = ppUVar9 + 1) {
          if (*ppUVar9 == pUVar7) {
            if (5 < (byte)LogMass._0_1_) {
              local_res20 = (FName)pUVar7->_padding_;
              ::FName::ToString(&local_res20,&local_88);
              local_res20.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
              local_res20.Number = *(uint *)&pUVar3->field_0x1c;
              ::FName::ToString(&local_res20,&local_98);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u__hs__removed_ob_15157a3f0,
                         (FLogCategoryBase *)&LogMass);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_d0,uVar11);
            local_c0 = CONCAT11(local_c0._1_1_,1);
            break;
          }
        }
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        uVar8 = (ulonglong)uStack_dc;
        uVar11 = uStack_dc;
      } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar6 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_c8->HashSize < iVar6)) || (iVar6 < local_c8->HashSize)) {
          local_c8->HashSize = iVar6;
          TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (3 < uVar10) {
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  } while( true );
}

// OnPostEntitiesCreated @ 147238fa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPostEntitiesCreated
          (FMassObserverManager *this,FProcessingContext *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  bool bVar1;
  
  bVar1 = OnPostEntitiesCreated(this,param_2);
  return bVar1;
}

// OnPostEntitiesCreated @ 147238fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPostEntitiesCreated
          (FMassObserverManager *this,FProcessingContext *param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2)

{
  FMassArchetypeEntityCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  FMassArchetypeEntityCollection *pFVar9;
  bool bVar10;
  FCollectionRefOrHandle local_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId895,"OnPostEntitiesCreated",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x37f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId895);
  }
  pFVar9 = param_2->DataPtr;
  bVar8 = false;
  pFVar1 = pFVar9 + param_2->ArrayNum;
  while( true ) {
    if (pFVar9 == pFVar1) {
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar8;
    }
    pTVar2 = (pFVar9->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar9->Archetype).ArchetypeHandle.DataPtr.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FMassArchetypeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), bVar5)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassArchetypeEntityCollection_const&___ptr64,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId166,"MassObserver_OnCompositionChanged_Collection"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverManager.h"
                 ,0xa6);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_bool___cdecl_FMassObserverManager::OnCompositionChanged(FMassArchetypeEntityCollection_const&___ptr64,FMassArchetypeCompositionDescriptor_const&___ptr64,EMassObservedOperation,UE::Mass::FProcessingContext*___ptr64)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId166);
    }
    local_38.EntityHandle.Index = 0;
    local_38.EntityHandle.SerialNumber = 0;
    local_38.EntityCollection = pFVar9;
    bVar7 = OnCompositionChanged
                      (this,&local_38,&pFVar3->CompositionDescriptor,CreateEntity,
                       (FProcessingContext *)0x0);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar8 = (bool)(bVar8 | bVar7);
    pFVar9 = pFVar9 + 1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// OnPostEntitiesCreated @ 147239150

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPostEntitiesCreated
          (FMassObserverManager *this,FMassArchetypeEntityCollection *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  FObserverLock *this_00;
  FObserverLock *pFVar7;
  FObserverLock *pFVar8;
  bool bVar9;
  bool bVar10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId366,"MassObserver_OnPostEntitiesCreated_Collection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x16e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId366);
  }
  if (this->LocksCount < 1) {
    pTVar1 = (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->Archetype).ArchetypeHandle.DataPtr.Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 == (FMassArchetypeData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArchetypeHandle.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                            ,0x1ff,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar10 = OnCompositionChanged
                       (this,param_1,&pFVar2->CompositionDescriptor,CreateEntity,
                        (FProcessingContext *)0x0);
    goto LAB_1472392c9;
  }
  pFVar8 = (FObserverLock *)(this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  this_00 = (FObserverLock *)0x0;
  pFVar7 = pFVar8;
  if (pFVar8 == (FObserverLock *)0x0) {
LAB_1472391e6:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar8 = pFVar7;
    if ((this_00 == (FObserverLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    iVar4 = *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data;
    do {
      pFVar7 = this_00;
      if (iVar4 == 0) goto LAB_1472391e6;
      LOCK();
      iVar6 = *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data;
      bVar10 = iVar4 == iVar6;
      if (bVar10) {
        *(int *)&(pFVar8->BufferedNotifications).AllocatorInstance.Data = iVar4 + 1;
        iVar6 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar6;
    } while (!bVar10);
    this_00 = (this->ActiveObserverLock).Object;
    pFVar7 = pFVar8;
    if (this_00 == (FObserverLock *)0x0) goto LAB_1472391e6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  UE::Mass::ObserverManager::FObserverLock::
  AddCreatedEntitiesCollection<FMassArchetypeEntityCollection_const_&>(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  bVar10 = false;
LAB_1472392c9:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// OnPostEntityCreated @ 147239300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPostEntityCreated
          (FMassObserverManager *this,FMassEntityHandle param_1,
          FMassArchetypeCompositionDescriptor *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FObserverLock *pFVar11;
  FObserverLock *pFVar12;
  FObserverLock *pFVar13;
  bool bVar14;
  bool bVar15;
  FMassArchetypeHandle local_28;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"MassObserver_OnPostEntitiesCreated_Collection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
  }
  if (this->LocksCount < 1) {
    bVar15 = FMassArchetypeCompositionDescriptor::IsEmpty(param_2);
    if (bVar15) {
      FMassEntityManager::GetArchetypeForEntity(this->EntityManager,&local_28,param_1);
      if ((local_28.DataPtr.Object == (FMassArchetypeData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArchetypeHandle.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                              ,0x1ff,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar15 = OnCompositionChanged
                         (this,param_1,&(local_28.DataPtr.Object)->CompositionDescriptor,
                          CreateEntity,(FProcessingContext *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.DataPtr.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar15 = OnCompositionChanged(this,param_1,param_2,CreateEntity,(FProcessingContext *)0x0);
    }
    goto LAB_1472395af;
  }
  pFVar12 = (FObserverLock *)(this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  pFVar11 = pFVar12;
  pFVar13 = (FObserverLock *)0x0;
  if (pFVar12 == (FObserverLock *)0x0) {
LAB_1472393a6:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar12 = pFVar11;
    if ((pFVar13 == (FObserverLock *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    iVar8 = *(int *)&(pFVar12->BufferedNotifications).AllocatorInstance.Data;
    do {
      pFVar11 = (FObserverLock *)0x0;
      pFVar13 = (FObserverLock *)0x0;
      if (iVar8 == 0) goto LAB_1472393a6;
      LOCK();
      iVar6 = *(int *)&(pFVar12->BufferedNotifications).AllocatorInstance.Data;
      bVar15 = iVar8 == iVar6;
      if (bVar15) {
        *(int *)&(pFVar12->BufferedNotifications).AllocatorInstance.Data = iVar8 + 1;
        iVar6 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar6;
    } while (!bVar15);
    pFVar13 = (this->ActiveObserverLock).Object;
    pFVar11 = pFVar12;
    if (pFVar13 == (FObserverLock *)0x0) goto LAB_1472393a6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DVar7 = GetCurrentThreadId();
  if ((pFVar13->OwnerThreadId != DVar7) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                          ,0x118,
                          L"%hs: all FObserverLock operations are expected to be run in a single thread"
                         ), bVar15)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar1 = pFVar13->CreationNotificationIndex;
  iVar8 = (pFVar13->BufferedNotifications).ArrayNum;
  if (uVar1 == 0xffffffff) {
    piVar4 = &(pFVar13->BufferedNotifications).ArrayMax;
    pFVar13->CreationNotificationIndex = iVar8;
    if (iVar8 == *piVar4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&(pFVar13->BufferedNotifications).AllocatorInstance,piVar4);
    }
    (pFVar13->BufferedNotifications).ArrayNum = iVar8 + 1;
    lVar9 = (longlong)iVar8 * 0xe0;
    pFVar2 = (pFVar13->BufferedNotifications).AllocatorInstance.Data;
    pFVar2[lVar9] = (FScriptContainerElement)0x3;
    pFVar2[lVar9 + 0xa8] = (FScriptContainerElement)0x0;
    *(FMassEntityHandle *)(pFVar2 + lVar9 + 0xb0) = param_1;
    pFVar2[lVar9 + 0xd8] = (FScriptContainerElement)0x1;
  }
  else {
    uVar10 = 0;
    if ((int)uVar1 < iVar8) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    UE::Mass::ObserverManager::FBufferedNotification::AddHandle
              ((FBufferedNotification *)
               ((pFVar13->BufferedNotifications).AllocatorInstance.Data +
               (longlong)(int)uVar1 * 0xe0),param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  bVar15 = false;
LAB_1472395af:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar15;
}

// OnPostFork @ 147239770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::OnPostFork(FMassObserverManager *this,EForkProcessRole param_1)

{
  FObserverLock *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  DWORD DVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1472397a0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar1 = (this->ActiveObserverLock).Object;
    if (pFVar1 != (FObserverLock *)0x0) {
      DVar4 = GetCurrentThreadId();
      pFVar1->OwnerThreadId = DVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return;
    }
  }
LAB_1472397a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnPostFragmentOrTagAdded @ 1472397e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::OnPostFragmentOrTagAdded
          (FMassObserverManager *this,UScriptStruct *param_1,FMassArchetypeEntityCollection *param_2
          )

{
  if (this != (FMassObserverManager *)0x0) {
    UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
              ((TNotNull<FMassObserverManager_*>)this,param_1,param_2,AddElement);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnPreEntitiesDestroyed @ 147239810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPreEntitiesDestroyed
          (FMassObserverManager *this,FProcessingContext *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId409,"OnPreEntitiesDestroyed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId409);
  }
  pTVar1 = (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_2->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar4 = OnCompositionChanged(this,param_2,&pFVar2->CompositionDescriptor,DestroyEntity,param_1);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// OnPreEntitiesDestroyed @ 147239900

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPreEntitiesDestroyed
          (FMassObserverManager *this,FMassArchetypeEntityCollection *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId402,"OnPreEntitiesDestroyed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x192);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId402);
  }
  pTVar1 = (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar4 = OnCompositionChanged
                    (this,param_1,&pFVar2->CompositionDescriptor,DestroyEntity,
                     (FProcessingContext *)0x0);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// OnPreEntityDestroyed @ 147239a00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassObserverManager::OnPreEntityDestroyed
          (FMassObserverManager *this,FMassArchetypeCompositionDescriptor *param_1,
          FMassEntityHandle param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId416,"OnPreEntityDestroyed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
               ,0x1a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId416);
  }
  bVar1 = OnCompositionChanged(this,param_2,param_1,DestroyEntity,(FProcessingContext *)0x0);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// OnPreFragmentOrTagRemoved @ 147239ab0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::OnPreFragmentOrTagRemoved
          (FMassObserverManager *this,UScriptStruct *param_1,FMassArchetypeEntityCollection *param_2
          )

{
  if (this != (FMassObserverManager *)0x0) {
    UE::Mass::ObserverManager::FDeprecationHelper::HandleSingleElement
              ((TNotNull<FMassObserverManager_*>)this,param_1,param_2,RemoveElement);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseCreationHandle @ 147243ef0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::ReleaseCreationHandle
          (FMassObserverManager *this,FCreationNotificationHandle param_1)

{
  FObserverLock *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  DWORD DVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  iVar5 = param_1.OpIndex;
  if (iVar5 == -1) {
    local_res8[0] = 0;
    `FMassObserverManager::ReleaseCreationHandle'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (param_1.SerialNumber != this->LockedNotificationSerialNumber) {
    local_res10[0] = 0;
    `FMassObserverManager::ReleaseCreationHandle'::__l2::<lambda_2>::operator()(local_res10);
  }
  pTVar10 = (this->ActiveObserverLock).WeakReferenceCount.ReferenceController;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_147243f60:
    pcVar8 = "LockInstance";
    iVar5 = 0x36e;
    paVar9 = &bGEnsureHasExecuted<_988180934387825810>;
  }
  else {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147243f60;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar4 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar11);
    pFVar1 = (this->ActiveObserverLock).Object;
    if (pFVar1 == (FObserverLock *)0x0) goto LAB_147243f60;
    DVar7 = GetCurrentThreadId();
    if ((pFVar1->OwnerThreadId != DVar7) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                            ,0x108,
                            L"%hs: all FObserverLock operations are expected to be run in a single thread"
                           ), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((((longlong)param_1 < 0) || ((pFVar1->BufferedNotifications).ArrayNum <= iVar5)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferedNotifications.IsValidIndex(CreationHandle)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                            ,0x109,L"Given CreationHandle doesn\'t match stored notifications"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pFVar1->CreationNotificationIndex == iVar5) {
      pFVar1->CreationNotificationIndex = -1;
    }
    else {
      local_res18[0] = 0;
      `UE::Mass::ObserverManager::FObserverLock::ReleaseCreationNotification'::__l2::<lambda_1>::
      operator()(local_res18);
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_988180934387825808>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                          ,0x370,
                          "LockInstance->ReleaseCreationNotification(InCreationNotificationHandle)")
      ;
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((((this->ActiveCreationContext).Object == (FCreationContext *)0x0) ||
        (pTVar2 = (this->ActiveCreationContext).WeakReferenceCount.ReferenceController,
        pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1))
    goto LAB_147243f8d;
    pcVar8 = "ActiveCreationContext.IsValid() == false";
    iVar5 = 0x371;
    paVar9 = &bGEnsureHasExecuted<_988180934387825807>;
  }
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (paVar9,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                      ,iVar5,pcVar8);
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147243f8d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// RemoveObserverInstance @ 1472473b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserverManager::RemoveObserverInstance
          (FMassObserverManager *this,UScriptStruct *param_1,EMassObservedOperation param_2,
          UMassProcessor *param_3)

{
  code *pcVar1;
  bool bVar2;
  EMassObservedOperationFlags EVar3;
  
  if (CreateEntity < param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_988180934387825960>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x2d8,"Operation < EMassObservedOperation::MAX");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == MAX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Operation != EMassObservedOperation::MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                       ,0x2d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 < MAX) {
    EVar3 = '\x01' << (param_2 & 0x1f);
    goto LAB_14724743f;
  }
  EVar3 = Remove;
  if (param_2 == Add) {
    EVar3 = Add;
  }
LAB_14724743f:
  if ((param_3 != (UMassProcessor *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    RemoveObserverInstance
              (this,(TNotNull<UScriptStruct_const_*>)param_1,EVar3,
               (TNotNull<UMassProcessor_*>)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveObserverInstance @ 147247490

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassObserverManager::RemoveObserverInstance
          (FMassObserverManager *this,TNotNull<UScriptStruct_const_*> param_1,
          EMassObservedOperationFlags param_2,TNotNull<UMassProcessor_*> param_3)

{
  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
  *this_00;
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UPackage *pUVar9;
  TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *pTVar10;
  UStruct *pUVar11;
  ForElementType<FSetElementId> FVar12;
  UScriptStruct *pUVar13;
  FMassRuntimePipeline *this_01;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  undefined1 local_58 [8];
  UScriptStruct *local_50;
  longlong local_48;
  UScriptStruct *local_40;
  
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar9,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147247514;
    }
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      bVar6 = true;
      bVar5 = true;
      goto LAB_14724758a;
    }
  }
LAB_147247514:
  bVar5 = false;
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar9,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147247827;
    }
    bVar6 = false;
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
LAB_14724758a:
      pUVar13 = (UScriptStruct *)this->ObservedTags;
      lVar16 = 0x128;
      if (!bVar6) {
        lVar16 = 0x268;
      }
      lVar16 = (longlong)this->ObservedFragments + lVar16 + -0x28;
      bVar15 = 0;
      lVar14 = 0;
      local_48 = lVar16;
      do {
        if ((param_2 & '\x01' << (bVar15 & 0x1f)) != None) {
          local_50 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1.Val != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1.Val);
          }
          local_40 = param_1.Val;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1.Val != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1.Val);
          }
          pTVar10 = TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                            *)(lVar16 + lVar14),(TObjectPtr<UScriptStruct_const_>)&local_40);
          this_01 = (FMassRuntimePipeline *)&pTVar10->field_0x8;
          if (pTVar10 == (TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *)0x0) {
            this_01 = (FMassRuntimePipeline *)0x0;
          }
          if (((this_01 != (FMassRuntimePipeline *)0x0) ||
              (bVar6 = `FMassObserverManager::RemoveObserverInstance'::__l11::<lambda_1>::operator()
                                 (local_58), bVar6)) &&
             (FMassRuntimePipeline::RemoveProcessor(this_01,param_3.Val),
             (this_01->Processors).ArrayNum == 0)) {
            this_00 = (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                       *)(lVar16 + lVar14);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (param_1.Val != (UScriptStruct *)0x0) {
                UE::GC::MarkAsReachable((UObject *)param_1.Val);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (param_1.Val != (UScriptStruct *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)param_1.Val);
              }
            }
            if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (param_1.Val != (UScriptStruct *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)param_1.Val);
              }
              uVar7 = ((uint)((ulonglong)param_1.Val >> 0x14) & 0xffff ^
                      (uint)((ulonglong)param_1.Val >> 4)) * -0x7a143595;
              uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
              FVar2 = (this_00->Hash).SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)&this_00->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar2;
              }
              iVar8 = *(int *)((longlong)FVar12 +
                              ((longlong)this_00->HashSize - 1U &
                              (longlong)(int)(uVar7 >> 0x10 ^ uVar7)) * 4);
              while (pUVar13 = local_50, iVar8 != -1) {
                puVar1 = (undefined8 *)(*(longlong *)&this_00->Elements + (longlong)iVar8 * 0x28);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (param_1.Val != (UScriptStruct *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)param_1.Val);
                }
                pUVar13 = (UScriptStruct *)*puVar1;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar13 != (UScriptStruct *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                if (pUVar13 == param_1.Val) {
                  TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(this_00,iVar8);
                  pUVar13 = local_50;
                  lVar16 = local_48;
                  break;
                }
                lVar16 = local_48;
                iVar8 = *(int *)(puVar1 + 4);
              }
            }
            if (bVar5) {
              pUVar11 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                        ::GetBaseUStruct();
              if (pUVar11 == (UStruct *)0x0) {
LAB_1472477a9:
                local_50 = param_1.Val;
                bVar6 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                        ::Remove'::__l6::<lambda_1>::operator()(&local_50);
                if (!bVar6) goto LAB_1472477ec;
              }
              else {
                iVar8 = (int)pUVar11->_padding_;
                if (((int)(param_1.Val)->_padding_ < iVar8) ||
                   ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar8 * 8) !=
                    &pUVar11->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (!bVar6) goto LAB_1472477a9;
              }
              iVar8 = FStructTracker::FindOrAddStructTypeIndex
                                (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                                 (UStruct *)param_1.Val);
              FStructTypeBitSet::FBitSetContainer::RemoveAtIndex
                        ((FBitSetContainer *)&pUVar13[-1]._padding_,iVar8);
            }
            else {
              TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Remove((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                        *)pUVar13,param_1.Val);
            }
          }
        }
LAB_1472477ec:
        pUVar13 = (UScriptStruct *)&pUVar13->_padding_;
        bVar15 = bVar15 + 1;
        lVar14 = lVar14 + 0x50;
        if (3 < bVar15) {
          return;
        }
      } while( true );
    }
  }
LAB_147247827:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_988180934387825996>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                     ,0x2b4,"bIsFragment || UE::Mass::IsA<FMassTag>(ElementType)");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// ResumeExecution @ 147249fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassObserverManager::ResumeExecution(FMassObserverManager *this,FObserverLock *param_1)

{
  int iVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 auStack_6c8 [32];
  undefined1 local_6a8 [8];
  FBufferedCreationNotificationExecutioner local_6a0;
  FNotificationContext local_698;
  TSharedRef<FMassEntityManager,1> local_688;
  FBufferedNotificationExecutioner local_678;
  FProcessingContext local_618;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  if (this->LocksCount != 0) {
    `FMassObserverManager::ResumeExecution'::__l2::<lambda_1>::operator()(local_6a8);
  }
  if (param_1->LockSerialNumber != this->LockedNotificationSerialNumber) {
    `FMassObserverManager::ResumeExecution'::__l2::<lambda_2>::operator()(local_6a8);
  }
  this->LockedNotificationSerialNumber = this->LockedNotificationSerialNumber + 1;
  if ((param_1->BufferedNotifications).ArrayNum != 0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId842,"MassObserver_ResumeExecution",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                 ,0x34a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId842);
    }
    pTVar2 = TSharedFromThis<FMassEntityManager,1>::AsShared
                       ((TSharedFromThis<FMassEntityManager,1> *)&this->EntityManager->_padding_,
                        &local_688);
    local_618.EntityManager.Object = pTVar2->Object;
    local_618.EntityManager.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    if (local_618.EntityManager.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_618.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_618.EntityManager.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_618.DeltaSeconds = 0.0;
    FInstancedStruct::FInstancedStruct(&local_618.AuxData);
    local_618.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
    local_618.CommandBuffer.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_618.bFlushCommandBuffer = true;
    local_618.ExecutionContextPtr = (FMassExecutionContext *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_688.SharedReferenceCount.ReferenceController);
    iVar1 = (param_1->BufferedNotifications).ArrayNum;
    local_698.ProcessingContext = &local_618;
    local_678.NotificationContext = &local_698;
    local_678.ObservedTypesOverlap.AllocatorInstance.SecondaryData =
         (ForElementType<UScriptStruct_const_*>)0x0;
    local_678.ObservedTypesOverlap.ArrayNum = 0;
    pFVar3 = (param_1->BufferedNotifications).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0xe0;
    local_6a0.NotificationContext = &local_698;
    local_678.ObservedTypesOverlap.ArrayMax = 8;
    local_698.ObserverManager = this;
    while( true ) {
      if ((param_1->BufferedNotifications).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Mass::ObserverManager::FBufferedNotification,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_6a8);
      }
      if (pFVar3 == pFVar4) break;
      if (*pFVar3 == (FScriptContainerElement)0x3) {
        (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner&___ptr64,0,1,0,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64>(unsigned___int64,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64)'
          ::__l2::Invokers[(byte)pFVar3[0xd8]])
                  (&local_6a0,
                   (TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *)(pFVar3 + 0xb0));
        pFVar3 = pFVar3 + 0xe0;
      }
      else {
        local_678.OpType = (EMassObservedOperation)*pFVar3;
        (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::ObserverManager::FBufferedNotificationExecutioner&___ptr64,0,1,2,3,4,5,6,7,0,1,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64>(unsigned___int64,UE::Mass::ObserverManager::FBufferedNotificationExecutioner&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64)'
          ::__l2::Invokers[(ulonglong)(byte)pFVar3[0xa8] + (ulonglong)(byte)pFVar3[0xd8] * 4])
                  (&local_678,
                   (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                    *)(pFVar3 + 8),
                   (TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *)(pFVar3 + 0xb0));
        pFVar3 = pFVar3 + 0xe0;
      }
    }
    this->DebugNonTrivialResumeExecutionCount = this->DebugNonTrivialResumeExecutionCount + 1;
    if (local_678.ObservedTypesOverlap.AllocatorInstance.SecondaryData !=
        (ForElementType<UScriptStruct_const_*>)0x0) {
      FMemory::Free((void *)local_678.ObservedTypesOverlap.AllocatorInstance.SecondaryData);
    }
    UE::Mass::FProcessingContext::~FProcessingContext(&local_618);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// operator() @ 150502fe0

bool __thiscall `FMassObserverManager::HandleElementsImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387826073>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387826073>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503100

bool __thiscall
`FMassObserverManager::OnCompositionChanged'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387826263>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387826263>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505033b0

bool __thiscall
`FMassObserverManager::ReleaseCreationHandle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387825817>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387825817>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503440

bool __thiscall `FMassObserverManager::ResumeExecution'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387825855>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387825855>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505480

bool __thiscall
`FMassObserverManager::RemoveObserverInstance'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387825982>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387825982>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505830

bool __thiscall
`FMassObserverManager::ReleaseCreationHandle'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387825814>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387825814>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505870

bool __thiscall `FMassObserverManager::ResumeExecution'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_988180934387825852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_988180934387825852>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

