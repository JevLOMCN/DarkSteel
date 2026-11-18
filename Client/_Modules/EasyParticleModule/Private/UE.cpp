// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 49

// Construct<FEasyParticleComponentRuntime_Child_SubEmitter> @ 14aca5550

void __cdecl
UE::CoreUObject::Private::Construct<FEasyParticleComponentRuntime_Child_SubEmitter>(void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = rand();
  *(float *)((longlong)param_1 + 0x20) = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(float *)((longlong)param_1 + 0x24) = (float)(uVar1 & 0x7fff) * __real_38000100;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FEasyParticleComponentRuntime_Child_SubEmitter> @ 14aca5560

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEasyParticleComponentRuntime_Child_SubEmitter>
          (void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = rand();
  *(float *)((longlong)param_1 + 0x20) = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(float *)((longlong)param_1 + 0x24) = (float)(uVar1 & 0x7fff) * __real_38000100;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FEasyParticleComponentRuntime_Child_SubEmitter> @ 14aca5570

void __cdecl
UE::CoreUObject::Private::Destruct<FEasyParticleComponentRuntime_Child_SubEmitter>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FEasyParticleComponentRuntime_Child_SubEmitter> @ 14aca55b0

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticleComponentRuntime_Child_SubEmitter>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      *puVar6 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 << 3);
          }
        }
      }
      puVar6[3] = puVar3[3];
      pFVar1 = (ForAnyElementType *)(puVar6 + 7);
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0x24);
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(puVar3 + 5);
      *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar3 + 6);
      *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)((longlong)puVar3 + 0x34);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 7)) {
        iVar4 = *(int *)(puVar3 + 8);
        piVar2 = (int *)((longlong)puVar6 + 0x44);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 7))->Data;
        *(int *)(puVar6 + 8) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 << 2);
          }
        }
      }
      *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(puVar3 + 9);
      *(undefined4 *)((longlong)puVar6 + 0x4c) = *(undefined4 *)((longlong)puVar3 + 0x4c);
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleFactorParam> @ 14aca5bc0

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleFactorParam>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FUIParticleFactorParam> @ 14aca5bd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleFactorParam>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FUIParticleFactorParam> @ 14aca5be0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleFactorParam>(void *param_1)

{
  return;
}

// Copy<FUIParticleFactorParam> @ 14aca5bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleFactorParam>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleRandomFactor> @ 14aca5e30

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleRandomFactor>(void *param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  *(float *)param_1 = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// ConstructForTests<FUIParticleRandomFactor> @ 14aca5e70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleRandomFactor>(void *param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  *(float *)param_1 = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Destruct<FUIParticleRandomFactor> @ 14aca5eb0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleRandomFactor>(void *param_1)

{
  return;
}

// Copy<FUIParticleRandomFactor> @ 14aca5ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleRandomFactor>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEasyParticleLinearColorCurve> @ 14acb0640

void __cdecl UE::CoreUObject::Private::Construct<FEasyParticleLinearColorCurve>(void *param_1)

{
  memset(param_1,0,0x208);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(param_1);
  return;
}

// ConstructForTests<FEasyParticleLinearColorCurve> @ 14acb0670

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEasyParticleLinearColorCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x200) = 0;
  return;
}

// Destruct<FEasyParticleLinearColorCurve> @ 14acb0680

void __cdecl UE::CoreUObject::Private::Destruct<FEasyParticleLinearColorCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f0));
  }
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  if (*(void **)((longlong)param_1 + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x188));
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FEasyParticleLinearColorCurve> @ 14acb0690

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticleLinearColorCurve>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x70);
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6d - (longlong)param_1));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x7c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0xe8) = *(undefined4 *)((longlong)pvVar6 + 0xe8);
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0xf0);
    *(undefined1 *)((longlong)pvVar5 + 0xec) = *(undefined1 *)((longlong)pvVar6 + 0xec);
    *(undefined1 *)((longlong)pvVar5 + 0xed) = *(undefined1 *)((longlong)pvVar6 + 0xed);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0xf0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0xf8);
      piVar2 = (int *)((longlong)pvVar5 + 0xfc);
      pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0xf0))->Data;
      *(int *)((longlong)pvVar5 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x170 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x168) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x168 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x170);
    *(undefined1 *)((longlong)pvVar5 + 0x16c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x16d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x178 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x17c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x178) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x1f0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x1e8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x1e8 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x1ec) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ec - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x1ed) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ed - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x1f0);
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x1f8 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1fc);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x1f8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined1 *)((longlong)pvVar5 + 0x200) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x200 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x201) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x201 - (longlong)param_1));
    pvVar5 = (void *)((longlong)pvVar5 + 0x208);
    pvVar6 = (void *)((longlong)pvVar6 + 0x208);
  }
  return true;
}

// Construct<FUIParticleRange_FloatCurve> @ 14acb0a70

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleRange_FloatCurve>(void *param_1)

{
  memset(param_1,0,0x110);
  FUIParticleRange_FloatCurve::FUIParticleRange_FloatCurve(param_1);
  return;
}

// ConstructForTests<FUIParticleRange_FloatCurve> @ 14acb0aa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleRange_FloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined ***)((longlong)param_1 + 0x88) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FUIParticleRange_FloatCurve> @ 14acb0ab0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleRange_FloatCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  *(undefined ***)((longlong)param_1 + 0x88) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FUIParticleRange_FloatCurve> @ 14acb0b80

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleRange_FloatCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FRichCurve::operator=(param_1,param_2);
    *(char *)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_ =
         (char)((FRichCurve *)((longlong)param_2 + 0x80))->_padding_;
    *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_ + 1) =
         *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_2 + 0x80))->_padding_ + 1);
    FRichCurve::operator=
              ((FRichCurve *)&((FRichCurve *)((longlong)param_1 + 0x80))->_padding_,
               (FRichCurve *)&((FRichCurve *)((longlong)param_2 + 0x80))->_padding_);
    *(char *)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ =
         (char)((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    pFVar1 = (FRichCurve *)((longlong)param_2 + 0x100);
    param_2 = &((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    *(undefined1 *)((longlong)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ + 1) =
         *(undefined1 *)((longlong)&pFVar1->_padding_ + 1);
    param_1 = &((FRichCurve *)((longlong)param_1 + 0x100))->_padding_;
  }
  return true;
}

// Construct<FEasyParticleFloatCurve> @ 14acb0cc0

void __cdecl UE::CoreUObject::Private::Construct<FEasyParticleFloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x82) = 0;
  *(undefined2 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FEasyParticleFloatCurve> @ 14acb0d40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEasyParticleFloatCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FEasyParticleFloatCurve> @ 14acb0da0

void __cdecl UE::CoreUObject::Private::Destruct<FEasyParticleFloatCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FEasyParticleFloatCurve> @ 14acb0e00

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticleFloatCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FRichCurve::operator=(this,pFVar1);
      *(char *)&this[1]._padding_ = (char)pFVar1[1]._padding_;
      *(undefined1 *)((longlong)&this[1]._padding_ + 1) =
           *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 1);
      param_3 = param_3 + -1;
      this = (FRichCurve *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEasyParticleStateRuntime> @ 14acb2770

void __cdecl UE::CoreUObject::Private::Construct<FEasyParticleStateRuntime>(void *param_1)

{
  FLinearColor FVar1;
  TVector2<double> TVar2;
  
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)param_1 = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FVar1 = FLinearColor::White;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x40))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3fe0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FEasyParticleStateRuntime> @ 14acb2810

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEasyParticleStateRuntime>(void *param_1)

{
  FLinearColor FVar1;
  TVector2<double> TVar2;
  
  *(undefined4 *)param_1 = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  FVar1 = FLinearColor::White;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x40))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3fe0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FEasyParticleStateRuntime> @ 14acb2880

void __cdecl UE::CoreUObject::Private::Destruct<FEasyParticleStateRuntime>(void *param_1)

{
  return;
}

// Copy<FEasyParticleStateRuntime> @ 14acb2890

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticleStateRuntime>(void *param_1,void *param_2,int param_3)

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
  longlong lVar18;
  
  if (param_3 != 0) {
    lVar18 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar18 + 0x80 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar18 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x70 + (longlong)param_1);
      uVar16 = *puVar1;
      uVar17 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar18 + (longlong)param_1);
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
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x88);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEasyParticlePropertyColor> @ 14acb2e00

void __cdecl UE::CoreUObject::Private::Construct<FEasyParticlePropertyColor>(void *param_1)

{
  float fVar1;
  FLinearColor FVar2;
  FRichCurve *pFVar3;
  undefined1 in_R9B;
  float fVar4;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar5;
  
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar2 = FLinearColor::White;
  fVar4 = FLinearColor::White.field0_0x0._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x24))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x40));
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x248));
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x450));
  *(undefined4 *)((longlong)param_1 + 0x658) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined1 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar1 = __real_3f800000;
  FVar5.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x40),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0xc0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x140),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,__real_3f000000,(bool)in_R9B,
                     FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x248),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x2c8),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x348),fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (FRichCurve *)((longlong)param_1 + 0x3c8);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x450),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x4d0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x550),fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (FRichCurve *)((longlong)param_1 + 0x5d0);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,(FKeyHandle)(FVar5.Index & 0xffffff00));
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x430) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x638) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x228) = 0x3f800000;
  return;
}

// ConstructForTests<FEasyParticlePropertyColor> @ 14acb2e10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEasyParticlePropertyColor>(void *param_1)

{
  float fVar1;
  FLinearColor FVar2;
  FRichCurve *pFVar3;
  undefined1 in_R9B;
  float fVar4;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar5;
  
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar2 = FLinearColor::White;
  fVar4 = FLinearColor::White.field0_0x0._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x24))->_s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x40));
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x248));
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x450));
  *(undefined4 *)((longlong)param_1 + 0x658) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined1 *)param_1 = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 4))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FKeyHandle::FKeyHandle(aFStackX_8);
  fVar1 = __real_3f800000;
  FVar5.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x40),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0xc0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x140),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,__real_3f000000,(bool)in_R9B,
                     FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x1c0),fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x248),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x2c8),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x348),fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (FRichCurve *)((longlong)param_1 + 0x3c8);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x450),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x4d0),fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x550),fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (FRichCurve *)((longlong)param_1 + 0x5d0);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,(FKeyHandle)(FVar5.Index & 0xffffff00));
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x430) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x638) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x228) = 0x3f800000;
  return;
}

// Destruct<FEasyParticlePropertyColor> @ 14acb2e20

void __cdecl UE::CoreUObject::Private::Destruct<FEasyParticlePropertyColor>(void *param_1)

{
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x450));
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x248));
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x40));
  return;
}

// Copy<FEasyParticlePropertyColor> @ 14acb2e60

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticlePropertyColor>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_2 + 4);
      *(undefined8 *)((longlong)param_1 + 0xc) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
      *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
      *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x2c) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
      FEasyParticleLinearColorCurve::operator=
                ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x40),
                 (FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x40));
      FUIParticleRange_LinearColorCurve::operator=
                ((FUIParticleRange_LinearColorCurve *)((longlong)param_1 + 0x248),
                 (FUIParticleRange_LinearColorCurve *)((longlong)param_2 + 0x248));
      param_2 = (void *)((longlong)param_2 + 0x660);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x660);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEasyParticlePropertyFloat> @ 14acb3160

void __cdecl UE::CoreUObject::Private::Construct<FEasyParticlePropertyFloat>(void *param_1)

{
  FRichCurve *this;
  FRichCurve *this_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar1;
  
  this = (FRichCurve *)((longlong)param_1 + 0x98);
  this_00 = (FRichCurve *)((longlong)param_1 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0x404;
  this->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0x404;
  this_00->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),in_XMM1_Da,__real_3f800000,
                     (bool)in_R9B,FVar1);
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar1);
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x41a00000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return;
}

// ConstructForTests<FEasyParticlePropertyFloat> @ 14acb31b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEasyParticlePropertyFloat>(void *param_1)

{
  FRichCurve *this;
  FRichCurve *this_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar1;
  
  this = (FRichCurve *)((longlong)param_1 + 0x98);
  this_00 = (FRichCurve *)((longlong)param_1 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0x404;
  this->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0x404;
  this_00->_padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)((longlong)param_1 + 0x10),in_XMM1_Da,__real_3f800000,
                     (bool)in_R9B,FVar1);
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x41200000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar1);
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x41a00000;
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return;
}

// Destruct<FEasyParticlePropertyFloat> @ 14acb31c0

void __cdecl UE::CoreUObject::Private::Destruct<FEasyParticlePropertyFloat>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 400));
  }
  *(undefined ***)((longlong)param_1 + 0x120) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x178) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x178));
  }
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x128));
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  *(undefined ***)((longlong)param_1 + 0x98) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FEasyParticlePropertyFloat> @ 14acb31d0

bool __cdecl
UE::CoreUObject::Private::Copy<FEasyParticlePropertyFloat>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      FRichCurve::operator=
                ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x90) = *(undefined1 *)((longlong)param_2 + 0x90);
      *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
      FUIParticleRange_FloatCurve::operator=
                ((FUIParticleRange_FloatCurve *)((longlong)param_1 + 0x98),
                 (FUIParticleRange_FloatCurve *)((longlong)param_2 + 0x98));
      param_2 = (void *)((longlong)param_2 + 0x1a8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x1a8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleRange_Float> @ 14acb34b0

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleRange_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FUIParticleRange_Float> @ 14acb34c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleRange_Float>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FUIParticleRange_Float> @ 14acb34d0

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleRange_Float>(void *param_1)

{
  return;
}

// Copy<FUIParticleRange_Float> @ 14acb34e0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleRange_Float>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleRange_Color> @ 14acb3720

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleRange_Color>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FLinearColor_u_0 *)param_1 = FLinearColor::White.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FUIParticleRange_Color> @ 14acb3750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIParticleRange_Color>(void *param_1)

{
  FLinearColor FVar1;
  
  *(FLinearColor_u_0 *)param_1 = FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FUIParticleRange_Color> @ 14acb3780

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleRange_Color>(void *param_1)

{
  return;
}

// Copy<FUIParticleRange_Color> @ 14acb3790

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleRange_Color>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIParticleRange_LinearColorCurve> @ 14acb39d0

void __cdecl UE::CoreUObject::Private::Construct<FUIParticleRange_LinearColorCurve>(void *param_1)

{
  memset(param_1,0,0x418);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(param_1);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  *(undefined4 *)((longlong)param_1 + 0x410) = 0;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  return;
}

// ConstructForTests<FUIParticleRange_LinearColorCurve> @ 14acb3a20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUIParticleRange_LinearColorCurve>(void *param_1)

{
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(param_1);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  *(undefined4 *)((longlong)param_1 + 0x410) = 0;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  return;
}

// Destruct<FUIParticleRange_LinearColorCurve> @ 14acb3a60

void __cdecl UE::CoreUObject::Private::Destruct<FUIParticleRange_LinearColorCurve>(void *param_1)

{
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x208));
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve(param_1);
  return;
}

// Copy<FUIParticleRange_LinearColorCurve> @ 14acb3a90

bool __cdecl
UE::CoreUObject::Private::Copy<FUIParticleRange_LinearColorCurve>
          (void *param_1,void *param_2,int param_3)

{
  FEasyParticleLinearColorCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FEasyParticleLinearColorCurve::operator=(param_1,param_2);
    FEasyParticleLinearColorCurve::operator=
              ((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x208),
               (FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x208));
    *(char *)&((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0].
              _padding_ =
         (char)((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
               _padding_;
    *(undefined1 *)
     ((longlong)
      &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 1)
         = *(undefined1 *)
            ((longlong)
             &((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
              _padding_ + 1);
    *(undefined1 *)
     ((longlong)
      &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 2)
         = *(undefined1 *)
            ((longlong)
             &((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
              _padding_ + 2);
    *(undefined1 *)
     ((longlong)
      &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 3)
         = *(undefined1 *)
            ((longlong)
             &((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
              _padding_ + 3);
    *(undefined1 *)
     ((longlong)
      &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 4)
         = *(undefined1 *)
            ((longlong)
             &((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
              _padding_ + 4);
    pFVar1 = (FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410);
    param_2 = &((FEasyParticleLinearColorCurve *)((longlong)param_2 + 0x410))->ColorCurves[0].
               _padding_;
    *(undefined1 *)
     ((longlong)
      &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0]._padding_ + 5)
         = *(undefined1 *)((longlong)&pFVar1->ColorCurves[0]._padding_ + 5);
    param_1 = &((FEasyParticleLinearColorCurve *)((longlong)param_1 + 0x410))->ColorCurves[0].
               _padding_;
  }
  return true;
}

// DereferenceIfNecessary<UEasyParticle,UEasyParticle_*_&> @ 14acbf720

UEasyParticle * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEasyParticle,UEasyParticle_*_&>(UEasyParticle **param_1)

{
  return *param_1;
}

