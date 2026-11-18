// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 10

// Construct @ 1472068c0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  if (*(longlong *)((longlong)param_2 + 0x10) == 0) {
    memmove(param_1,param_2,0x10);
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return;
}

// Construct @ 1472068d0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  if (*(longlong *)((longlong)param_2 + 0x10) == 0) {
    memmove(param_1,param_2,0x10);
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return;
}

// Construct @ 1472068e0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 1472068f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Mass::FEmptyTypeTraits>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 147206900

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Mass::FEntityCollection>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  return;
}

// Construct @ 147206950

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FMassArchetypeCompositionDescriptor>::Construct
          (void *param_1,void *param_2)

{
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer(param_1,param_2);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x20),
             (FBitSetContainer *)((longlong)param_2 + 0x20));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x40),
             (FBitSetContainer *)((longlong)param_2 + 0x40));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x60),
             (FBitSetContainer *)((longlong)param_2 + 0x60));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x80),
             (FBitSetContainer *)((longlong)param_2 + 0x80));
  return;
}

// Construct @ 1472069b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FMassEntityHandle>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1472069c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Mass::Relations::FRelationTypeTraits>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x28);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x38);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x38) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x40) = *(undefined1 *)((longlong)param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar1 = *(longlong *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(longlong *)((longlong)param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)((longlong)param_2 + 0x60);
    if (*(undefined8 **)((longlong)param_2 + 0x78) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)((longlong)param_2 + 0x78);
    }
    (**(code **)*puVar5)();
  }
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
  ::FString::FString((FString *)((longlong)param_1 + 0xa0),(FString *)((longlong)param_2 + 0xa0));
  return;
}

// Construct @ 1472069d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Mass::FSharedFragmentTypeTraits>::Construct
          (void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 1472069e0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Mass::FSubsystemTypeTraits>::Construct
          (void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

