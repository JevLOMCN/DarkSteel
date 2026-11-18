// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 32

// Construct<FPBIKSolver> @ 14ded3810

void __cdecl UE::CoreUObject::Private::Construct<FPBIKSolver>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FPBIKSolver> @ 14ded3850

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKSolver>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FPBIKSolver> @ 14ded3880

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKSolver>(void *param_1)

{
  DestructItems<PBIK::FEffector,int>
            (*(FEffector **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<TSharedPtr<PBIK::FConstraint,1>,int>
            (*(TSharedPtr<PBIK::FConstraint,1> **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<PBIK::FBone,int>
            (*(FBone **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPBIKSolver> @ 14ded3910

bool __cdecl UE::CoreUObject::Private::Copy<FPBIKSolver>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 0x49) = 0;
    param_1 = (void *)((longlong)param_1 + 0x58);
  }
  return true;
}

// Construct<FPBIKSolverSettings> @ 14ded3dc0

void __cdecl UE::CoreUObject::Private::Construct<FPBIKSolverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)param_1 = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// ConstructForTests<FPBIKSolverSettings> @ 14ded3e30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKSolverSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x14;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Destruct<FPBIKSolverSettings> @ 14ded3ea0

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKSolverSettings>(void *param_1)

{
  return;
}

// Copy<FPBIKSolverSettings> @ 14ded3eb0

bool __cdecl
UE::CoreUObject::Private::Copy<FPBIKSolverSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigUnit_PBIK> @ 14ded3f00

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_PBIK>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_PBIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined2 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  return;
}

// ConstructForTests<FRigUnit_PBIK> @ 14ded3f10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_PBIK>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_PBIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined2 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  return;
}

// Destruct<FRigUnit_PBIK> @ 14ded3f20

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_PBIK>(void *param_1)

{
  FPBIKSolver::~FPBIKSolver((FPBIKSolver *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_PBIK> @ 14ded3f30

bool __cdecl UE::CoreUObject::Private::Copy<FRigUnit_PBIK>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      iVar3 = *(int *)((longlong)param_2 + 0x20);
      piVar2 = (int *)((longlong)param_1 + 0x24);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x90);
        }
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x38);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x38)) {
      iVar3 = *(int *)((longlong)param_2 + 0x40);
      piVar2 = (int *)((longlong)param_1 + 0x44);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x38))->Data;
      *(int *)((longlong)param_1 + 0x40) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x50);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x48);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x48)) {
      iVar3 = *(int *)((longlong)param_2 + 0x50);
      piVar2 = (int *)((longlong)param_1 + 0x54);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x48))->Data;
      *(int *)((longlong)param_1 + 0x50) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 3);
        }
      }
    }
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x60) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x90) = uVar5;
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined1 *)((longlong)param_1 + 0xa0) = *(undefined1 *)((longlong)param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa8),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa8));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb8),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xb8));
    *(undefined1 *)((longlong)param_1 + 0x111) = 0;
    param_1 = (void *)((longlong)param_1 + 0x120);
    param_2 = (void *)((longlong)param_2 + 0x120);
  }
  return true;
}

// Construct<FRootPrePullSettings> @ 14ded4180

void __cdecl UE::CoreUObject::Private::Construct<FRootPrePullSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// ConstructForTests<FRootPrePullSettings> @ 14ded41c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRootPrePullSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return;
}

// Destruct<FRootPrePullSettings> @ 14ded4200

void __cdecl UE::CoreUObject::Private::Destruct<FRootPrePullSettings>(void *param_1)

{
  return;
}

// Copy<FRootPrePullSettings> @ 14ded4210

bool __cdecl
UE::CoreUObject::Private::Copy<FRootPrePullSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FPBIKWorkData> @ 14ded4420

void __cdecl UE::CoreUObject::Private::Construct<FPBIKWorkData>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// ConstructForTests<FPBIKWorkData> @ 14ded4470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKWorkData>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// Destruct<FPBIKWorkData> @ 14ded44c0

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKWorkData>(void *param_1)

{
  FPBIKSolver::~FPBIKSolver((FPBIKSolver *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPBIKWorkData> @ 14ded4500

bool __cdecl UE::CoreUObject::Private::Copy<FPBIKWorkData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x18));
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      param_2 = (void *)((longlong)param_2 + 0x80);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x80);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPBIKBoneSetting> @ 14ded4660

void __cdecl UE::CoreUObject::Private::Construct<FPBIKBoneSetting>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FPBIKBoneSetting> @ 14ded46a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKBoneSetting>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FPBIKBoneSetting> @ 14ded46e0

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKBoneSetting>(void *param_1)

{
  return;
}

// Copy<FPBIKBoneSetting> @ 14ded46f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPBIKBoneSetting>(void *param_1,void *param_2,int param_3)

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
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPBIKEffector> @ 14ded4740

void __cdecl UE::CoreUObject::Private::Construct<FPBIKEffector>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  return;
}

// ConstructForTests<FPBIKEffector> @ 14ded47c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKEffector>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  return;
}

// Destruct<FPBIKEffector> @ 14ded4840

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKEffector>(void *param_1)

{
  return;
}

// Copy<FPBIKEffector> @ 14ded4850

bool __cdecl UE::CoreUObject::Private::Copy<FPBIKEffector>(void *param_1,void *param_2,int param_3)

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
  longlong lVar19;
  
  if (param_3 != 0) {
    lVar19 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar19 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar19 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + 0x80 + (longlong)param_1);
      uVar17 = *puVar1;
      uVar18 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar19 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar17;
      *(undefined8 *)((longlong)param_1 + 0x88) = uVar18;
      param_1 = (void *)((longlong)param_1 + 0x90);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPBIKDebug> @ 14ded4b10

void __cdecl UE::CoreUObject::Private::Construct<FPBIKDebug>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  return;
}

// ConstructForTests<FPBIKDebug> @ 14ded4b30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPBIKDebug>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FPBIKDebug> @ 14ded4b90

void __cdecl UE::CoreUObject::Private::Destruct<FPBIKDebug>(void *param_1)

{
  return;
}

// Copy<FPBIKDebug> @ 14ded4ba0

bool __cdecl UE::CoreUObject::Private::Copy<FPBIKDebug>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

