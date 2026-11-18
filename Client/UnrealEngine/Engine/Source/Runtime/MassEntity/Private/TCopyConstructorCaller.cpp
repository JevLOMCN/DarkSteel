// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// Construct @ 147206880

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FMassEntityHandle>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 147206890

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FMassFragmentRequirements>::Construct
          (void *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  ushort uVar5;
  
  *(undefined8 *)param_1 = 0;
  iVar2 = *(int *)((longlong)param_2 + 8);
  pvVar3 = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,param_1,iVar2,(int *)((longlong)param_1 + 0xc));
    memcpy(*(void **)param_1,pvVar3,(longlong)iVar2 << 4);
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)((longlong)param_2 + 0x18);
  pvVar3 = *(void **)((longlong)param_2 + 0x10);
  *(int *)((longlong)param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)param_1 + 0x1c));
    memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 4);
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)((longlong)param_2 + 0x28);
  pvVar3 = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)param_1 + 0x2c));
    memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 4);
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)((longlong)param_2 + 0x38);
  pvVar3 = *(void **)((longlong)param_2 + 0x30);
  *(int *)((longlong)param_1 + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)param_1 + 0x3c));
    memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 4);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x40),
             (FBitSetContainer *)((longlong)param_2 + 0x40));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x60),
             (FBitSetContainer *)((longlong)param_2 + 0x60));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x80),
             (FBitSetContainer *)((longlong)param_2 + 0x80));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0xa0),
             (FBitSetContainer *)((longlong)param_2 + 0xa0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0xc0),
             (FBitSetContainer *)((longlong)param_2 + 0xc0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0xe0),
             (FBitSetContainer *)((longlong)param_2 + 0xe0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x100),
             (FBitSetContainer *)((longlong)param_2 + 0x100));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x120),
             (FBitSetContainer *)((longlong)param_2 + 0x120));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x140),
             (FBitSetContainer *)((longlong)param_2 + 0x140));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x160),
             (FBitSetContainer *)((longlong)param_2 + 0x160));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x180),
             (FBitSetContainer *)((longlong)param_2 + 0x180));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x1a0),
             (FBitSetContainer *)((longlong)param_2 + 0x1a0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x1c0),
             (FBitSetContainer *)((longlong)param_2 + 0x1c0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x1e0),
             (FBitSetContainer *)((longlong)param_2 + 0x1e0));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x200),
             (FBitSetContainer *)((longlong)param_2 + 0x200));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x220),
             (FBitSetContainer *)((longlong)param_2 + 0x220));
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)((longlong)param_1 + 0x240),
             (FBitSetContainer *)((longlong)param_2 + 0x240));
  *(undefined8 *)((longlong)param_1 + 0x260) = *(undefined8 *)((longlong)param_2 + 0x260);
  lVar4 = *(longlong *)((longlong)param_2 + 0x268);
  *(longlong *)((longlong)param_1 + 0x268) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar5 = (*(ushort *)((longlong)param_1 + 0x270) ^ *(ushort *)((longlong)param_2 + 0x270)) & 1 ^
          *(ushort *)((longlong)param_1 + 0x270);
  *(ushort *)((longlong)param_1 + 0x270) = uVar5;
  uVar5 = (uVar5 ^ *(ushort *)((longlong)param_2 + 0x270)) & 2 ^ uVar5;
  *(ushort *)((longlong)param_1 + 0x270) = uVar5;
  uVar5 = (uVar5 ^ *(ushort *)((longlong)param_2 + 0x270)) & 4 ^ uVar5;
  *(ushort *)((longlong)param_1 + 0x270) = uVar5;
  uVar5 = (uVar5 ^ *(ushort *)((longlong)param_2 + 0x270)) & 8 ^ uVar5;
  *(ushort *)((longlong)param_1 + 0x270) = uVar5;
  *(ushort *)((longlong)param_1 + 0x270) =
       (uVar5 ^ *(ushort *)((longlong)param_2 + 0x270)) & 0x10 ^ uVar5;
  *(undefined2 *)((longlong)param_1 + 0x272) = *(undefined2 *)((longlong)param_2 + 0x272);
  *(undefined1 *)((longlong)param_1 + 0x274) = *(undefined1 *)((longlong)param_2 + 0x274);
  return;
}

// Construct @ 1472068a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TObjectKey<UMassProcessor_const_>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1472068b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TObjectKey<UScriptStruct_const_>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

