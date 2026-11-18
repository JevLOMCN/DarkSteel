// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 14

// Construct<FProcMeshSection> @ 14d261940

void __cdecl UE::CoreUObject::Private::Construct<FProcMeshSection>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// ConstructForTests<FProcMeshSection> @ 14d261980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProcMeshSection>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Destruct<FProcMeshSection> @ 14d2619c0

void __cdecl UE::CoreUObject::Private::Destruct<FProcMeshSection>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FProcMeshSection> @ 14d261a00

bool __cdecl
UE::CoreUObject::Private::Copy<FProcMeshSection>(void *param_1,void *param_2,int param_3)

{
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    iVar2 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->
            ArrayNum;
    iVar3 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->
            ArrayMax;
    (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    AllocatorInstance).Data =
         (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->
         AllocatorInstance).Data;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayNum =
         iVar2;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayMax =
         iVar3;
    iVar2 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->
            ArrayNum;
    iVar3 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->
            ArrayMax;
    (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
    AllocatorInstance).Data =
         (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->
         AllocatorInstance).Data;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->ArrayNum =
         iVar2;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->ArrayMax =
         iVar3;
    iVar2 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
            ArrayNum;
    iVar3 = ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
            ArrayMax;
    (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
    AllocatorInstance).Data =
         (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
         AllocatorInstance).Data;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->ArrayNum =
         iVar2;
    ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->ArrayMax =
         iVar3;
    (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
    AllocatorInstance).Data =
         (((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
         AllocatorInstance).Data;
    *(char *)&((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
              ArrayNum =
         (char)((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
               ArrayNum;
    pTVar1 = (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50);
    param_2 = (void *)((longlong)param_2 + 0x60);
    *(undefined1 *)
     ((longlong)
      &((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->ArrayNum
     + 1) = *(undefined1 *)((longlong)&pTVar1->ArrayNum + 1);
    param_1 = (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60);
  }
  return true;
}

// Construct<FProcMeshVertex> @ 14d261e40

void __cdecl UE::CoreUObject::Private::Construct<FProcMeshVertex>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FProcMeshVertex> @ 14d261ef0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProcMeshVertex>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FProcMeshVertex> @ 14d261fa0

void __cdecl UE::CoreUObject::Private::Destruct<FProcMeshVertex>(void *param_1)

{
  return;
}

// Copy<FProcMeshVertex> @ 14d261ff0

bool __cdecl
UE::CoreUObject::Private::Copy<FProcMeshVertex>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  
  if (param_3 != 0) {
    lVar20 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar20 + 0x90 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar20 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x70 + (longlong)param_1);
      uVar16 = *puVar1;
      uVar17 = puVar1[1];
      puVar1 = (undefined8 *)(lVar20 + 0x80 + (longlong)param_1);
      uVar18 = *puVar1;
      uVar19 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar20 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar16;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar17;
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar18;
      *(undefined8 *)((longlong)param_1 + 0x88) = uVar19;
      *(undefined8 *)((longlong)param_1 + 0x90) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x98);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProcMeshTangent> @ 14d2621e0

void __cdecl UE::CoreUObject::Private::Construct<FProcMeshTangent>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FProcMeshTangent> @ 14d262210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProcMeshTangent>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FProcMeshTangent> @ 14d262280

void __cdecl UE::CoreUObject::Private::Destruct<FProcMeshTangent>(void *param_1)

{
  return;
}

// Copy<FProcMeshTangent> @ 14d262290

bool __cdecl
UE::CoreUObject::Private::Copy<FProcMeshTangent>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UProceduralMeshComponent>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UProceduralMeshComponent>_>,UProceduralMeshComponent_*> @ 14d262c10

UProceduralMeshComponent ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UProceduralMeshComponent>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UProceduralMeshComponent>_>,UProceduralMeshComponent_*>
          (TObjectPtr<UProceduralMeshComponent> *param_1)

{
  return (UProceduralMeshComponent **)param_1;
}

// DereferenceIfNecessary<UProceduralMeshComponent,UProceduralMeshComponent_*_&> @ 14d262c80

UProceduralMeshComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UProceduralMeshComponent,UProceduralMeshComponent_*_&>
          (UProceduralMeshComponent **param_1)

{
  return *param_1;
}

