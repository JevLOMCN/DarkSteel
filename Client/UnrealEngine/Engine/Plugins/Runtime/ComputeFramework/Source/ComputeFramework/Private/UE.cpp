// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 55

// Construct<FComputeKernelPermutationVector> @ 1494badf0

void __cdecl UE::CoreUObject::Private::Construct<FComputeKernelPermutationVector>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  return;
}

// ConstructForTests<FComputeKernelPermutationVector> @ 1494bae30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationVector>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FComputeKernelPermutationVector> @ 1494bae70

void __cdecl UE::CoreUObject::Private::Destruct<FComputeKernelPermutationVector>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FComputeKernelPermutationVector> @ 1494baeb0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeKernelPermutationVector>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
      ::operator=(this,pTVar1);
      *(undefined4 *)&this[1].Elements = *(undefined4 *)&pTVar1[1].Elements;
      param_3 = param_3 + -1;
      this = (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&this[1].Elements.field_0x8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeKernelDefinitionSet> @ 1494bb070

void __cdecl UE::CoreUObject::Private::Construct<FComputeKernelDefinitionSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FComputeKernelDefinitionSet> @ 1494bb080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComputeKernelDefinitionSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FComputeKernelDefinitionSet> @ 1494bb090

void __cdecl UE::CoreUObject::Private::Destruct<FComputeKernelDefinitionSet>(void *param_1)

{
  DestructItems<FComputeKernelDefinition,int>
            (*(FComputeKernelDefinition **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FComputeKernelDefinitionSet> @ 1494bb0d0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeKernelDefinitionSet>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FComputeKernelDefinition *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FComputeKernelDefinition,int>
                  ((FComputeKernelDefinition *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FComputeKernelDefinition *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FComputeKernelDefinition,FComputeKernelDefinition,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeKernelDefinition> @ 1494bb4c0

void __cdecl UE::CoreUObject::Private::Construct<FComputeKernelDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FComputeKernelDefinition> @ 1494bb4e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComputeKernelDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FComputeKernelDefinition> @ 1494bb500

void __cdecl UE::CoreUObject::Private::Destruct<FComputeKernelDefinition>(void *param_1)

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

// Copy<FComputeKernelDefinition> @ 1494bb580

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeKernelDefinition>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeKernelPermutationSet> @ 1494bb920

void __cdecl UE::CoreUObject::Private::Construct<FComputeKernelPermutationSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FComputeKernelPermutationSet> @ 1494bb930

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FComputeKernelPermutationSet> @ 1494bb940

void __cdecl UE::CoreUObject::Private::Destruct<FComputeKernelPermutationSet>(void *param_1)

{
  DestructItems<FComputeKernelPermutationBool,int>
            (*(FComputeKernelPermutationBool **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FComputeKernelPermutationSet> @ 1494bb9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeKernelPermutationSet>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FComputeKernelPermutationBool *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FComputeKernelPermutationBool,int>
                  ((FComputeKernelPermutationBool *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FComputeKernelPermutationBool *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FComputeKernelPermutationBool,FComputeKernelPermutationBool,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeKernelPermutationBool> @ 1494bbbd0

void __cdecl UE::CoreUObject::Private::Construct<FComputeKernelPermutationBool>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FComputeKernelPermutationBool> @ 1494bbbf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FComputeKernelPermutationBool>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FComputeKernelPermutationBool> @ 1494bbc10

void __cdecl UE::CoreUObject::Private::Destruct<FComputeKernelPermutationBool>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FComputeKernelPermutationBool> @ 1494bbcf0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeKernelPermutationBool>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeGraphInstance> @ 1494bbf30

void __cdecl UE::CoreUObject::Private::Construct<FComputeGraphInstance>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FComputeGraphInstance> @ 1494bbf50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComputeGraphInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FComputeGraphInstance> @ 1494bbf70

void __cdecl UE::CoreUObject::Private::Destruct<FComputeGraphInstance>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FComputeGraphInstance> @ 1494bbf90

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeGraphInstance>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<UComputeDataProvider>,TObjectPtr<UComputeDataProvider>,int>
                    (pFVar6->Data,(TObjectPtr<UComputeDataProvider> *)pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      *(undefined1 *)((longlong)&pFVar6[2].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 1);
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComputeGraphEdge> @ 1494bc140

void __cdecl UE::CoreUObject::Private::Construct<FComputeGraphEdge>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FComputeGraphEdge> @ 1494bc170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComputeGraphEdge>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FComputeGraphEdge> @ 1494bc1a0

void __cdecl UE::CoreUObject::Private::Destruct<FComputeGraphEdge>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FComputeGraphEdge> @ 1494bc2f0

bool __cdecl
UE::CoreUObject::Private::Copy<FComputeGraphEdge>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
      param_2 = (void *)((longlong)param_2 + 0x38);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FShaderFunctionDefinition> @ 1494bc420

void __cdecl UE::CoreUObject::Private::Construct<FShaderFunctionDefinition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FShaderFunctionDefinition> @ 1494bc450

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShaderFunctionDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FShaderFunctionDefinition> @ 1494bc470

void __cdecl UE::CoreUObject::Private::Destruct<FShaderFunctionDefinition>(void *param_1)

{
  DestructItems<FShaderParamTypeDefinition,int>
            (*(FShaderParamTypeDefinition **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FShaderFunctionDefinition> @ 1494bc4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FShaderFunctionDefinition>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FShaderParamTypeDefinition *pFVar3;
  FString *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar4 = (FString *)((longlong)param_1 + 0x10);
    if (pFVar4 != (FString *)((longlong)param_2 + 0x10)) {
      DestructItems<FShaderParamTypeDefinition,int>
                ((FShaderParamTypeDefinition *)(pFVar4->Data).AllocatorInstance.Data,
                 *(int *)((longlong)param_1 + 0x18));
      iVar2 = *(int *)((longlong)param_2 + 0x18);
      piVar1 = (int *)((longlong)param_1 + 0x1c);
      pFVar3 = (FShaderParamTypeDefinition *)
               (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
      *(int *)((longlong)param_1 + 0x18) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar2,*piVar1,(ForAnyElementType *)pFVar4,iVar2,piVar1);
        ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
                  ((pFVar4->Data).AllocatorInstance.Data,pFVar3,iVar2);
      }
    }
    pFVar4 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar4->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FShaderParamTypeDefinition> @ 1494bce60

void __cdecl UE::CoreUObject::Private::Construct<FShaderParamTypeDefinition>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FShaderParamTypeDefinition> @ 1494bce90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShaderParamTypeDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FShaderParamTypeDefinition> @ 1494bcec0

void __cdecl UE::CoreUObject::Private::Destruct<FShaderParamTypeDefinition>(void *param_1)

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

// Copy<FShaderParamTypeDefinition> @ 1494bcf00

bool __cdecl
UE::CoreUObject::Private::Copy<FShaderParamTypeDefinition>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(short *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (short)(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum + 2) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum + 2);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum + 3) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum + 3);
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x30);
    *(char *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax =
         (char)(pFVar1->Data).ArrayMax;
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FShaderValueType> @ 1494bcff0

void __cdecl UE::CoreUObject::Private::Construct<FShaderValueType>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FShaderValueType> @ 1494bd020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShaderValueType>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FShaderValueType> @ 1494bd040

void __cdecl UE::CoreUObject::Private::Destruct<FShaderValueType>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FShaderValueType> @ 1494bd060

bool __cdecl
UE::CoreUObject::Private::Copy<FShaderValueType>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar4 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar4 + 2);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar4 + 2);
      *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)((longlong)param_1 + lVar4 + 3);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_1 + lVar4 + 4);
      *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + lVar4 + 0xc);
      if (pFVar3 != (ForAnyElementType *)((longlong)param_1 + lVar4 + 0x10)) {
        iVar2 = *(int *)((longlong)param_1 + lVar4 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        _Src = ((ForAnyElementType *)((longlong)param_1 + lVar4 + 0x10))->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar2,*piVar1,pFVar3,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FShaderValueType> @ 1494bd1c0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FShaderValueType>(void *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStackX_8 [8];
  undefined8 *puStackX_10;
  
  bVar1 = *(byte *)param_1;
  if (bVar1 == 4) {
    uVar3 = *(undefined8 *)((longlong)param_1 + 4);
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar10 = *(uint *)((longlong)param_1 + 0x18);
    uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
    uVar9 = 4 - uVar5 ^ uVar5 >> 0xd;
    uVar6 = (-0x61c88647 - uVar5) - uVar9 ^ uVar9 << 8;
    uVar7 = (uVar5 - uVar6) - uVar9 ^ uVar6 >> 0xd;
    uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xc;
    uVar5 = (uVar6 - uVar9) - uVar7 ^ uVar9 << 0x10;
    uVar6 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 5;
    uVar7 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
    uVar6 = ((uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar10 ^ uVar10 >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - uVar10 ^ uVar6 << 8;
    uVar7 = (uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
    puVar11 = *(undefined8 **)((longlong)param_1 + 0x10);
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 10;
    uVar5 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 0xf;
    puStackX_10 = puVar11 + (longlong)(int)uVar10 * 2;
    while( true ) {
      puVar4 = puStackX_10;
      if (*(uint *)((longlong)param_1 + 0x18) != uVar10) {
        `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (puVar11 == puVar4) break;
      uVar3 = *puVar11;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
      uVar5 = uVar5 - uVar6 ^ uVar6 >> 0xd;
      uVar7 = (-0x61c88647 - uVar6) - uVar5 ^ uVar5 << 8;
      uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xd;
      uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xc;
      uVar9 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 0x10;
      uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar9 >> 5;
      uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 3;
      uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 << 10;
      uVar5 = ::GetTypeHash((FShaderValueType *)puVar11[1]);
      uVar9 = ((uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
      uVar6 = (-0x61c88647 - uVar9) - uVar5 ^ uVar9 << 8;
      uVar7 = (uVar5 - uVar6) - uVar9 ^ uVar6 >> 0xd;
      uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xc;
      uVar5 = (uVar6 - uVar9) - uVar7 ^ uVar9 << 0x10;
      uVar6 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 5;
      uVar7 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 3;
      uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
      uVar5 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf;
      puVar11 = puVar11 + 2;
    }
  }
  else {
    bVar2 = *(byte *)((longlong)param_1 + 1);
    iVar8 = (uint)bVar1 - (uint)bVar2;
    uVar10 = iVar8 * 0x100 ^ 0x9e3779b9 - bVar1;
    uVar6 = (bVar2 - uVar10) - iVar8 ^ uVar10 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar10 ^ uVar6 >> 0xc;
    uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar10 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 >> 3;
    uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar5 << 10;
    uVar5 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 0xf;
    if (bVar2 == 1) {
      bVar1 = *(byte *)((longlong)param_1 + 2);
      iVar8 = uVar5 - bVar1;
      uVar5 = 0x9e3779b9 - uVar5;
      uVar10 = iVar8 * 0x100;
    }
    else {
      if (bVar2 != 2) goto LAB_1494d340f;
      iVar8 = uVar5 - *(byte *)((longlong)param_1 + 2);
      uVar5 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
      uVar6 = (*(byte *)((longlong)param_1 + 2) - uVar5) - iVar8 ^ uVar5 >> 0xd;
      uVar10 = (iVar8 - uVar6) - uVar5 ^ uVar6 >> 0xc;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 << 0x10;
      uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar5 >> 5;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 3;
      bVar1 = *(byte *)((longlong)param_1 + 3);
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 << 10;
      uVar10 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 0xf;
      iVar8 = uVar10 - bVar1;
      uVar5 = iVar8 * 0x100;
      uVar10 = 0x9e3779b9 - uVar10;
    }
    uVar5 = uVar5 ^ uVar10;
    uVar7 = (bVar1 - uVar5) - iVar8 ^ uVar5 >> 0xd;
    uVar10 = (iVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar6 = (uVar5 - uVar10) - uVar7 ^ uVar10 << 0x10;
    uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar6 >> 5;
    uVar5 = (uVar10 - uVar7) - uVar6 ^ uVar7 >> 3;
    uVar10 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
    uVar5 = (uVar7 - uVar10) - uVar5 ^ uVar10 >> 0xf;
  }
LAB_1494d340f:
  iVar8 = uVar5 - *(byte *)((longlong)param_1 + 0xc);
  uVar6 = 0x9e3779b9 - uVar5 ^ iVar8 * 0x100;
  uVar10 = (*(byte *)((longlong)param_1 + 0xc) - uVar6) - iVar8 ^ uVar6 >> 0xd;
  uVar5 = (iVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 0x10;
  uVar10 = (uVar10 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
  return (uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf;
}

// Construct<FShaderValueContainer> @ 1494bd330

void __cdecl UE::CoreUObject::Private::Construct<FShaderValueContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FShaderValueContainer> @ 1494bd350

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShaderValueContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FShaderValueContainer> @ 1494bd370

void __cdecl UE::CoreUObject::Private::Destruct<FShaderValueContainer>(void *param_1)

{
  DestructItems<FArrayShaderValue,int>
            (*(FArrayShaderValue **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FShaderValueContainer> @ 1494bd3c0

bool __cdecl
UE::CoreUObject::Private::Copy<FShaderValueContainer>(void *param_1,void *param_2,int param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(this,pTVar3);
      pTVar1 = this + 1;
      if (pTVar1 != pTVar3 + 1) {
        DestructItems<FArrayShaderValue,int>
                  ((FArrayShaderValue *)(pTVar1->AllocatorInstance).Data,this[1].ArrayNum);
        iVar4 = pTVar3[1].ArrayNum;
        piVar2 = &this[1].ArrayMax;
        pFVar5 = pTVar3[1].AllocatorInstance.Data;
        this[1].ArrayNum = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
          ConstructItems<FArrayShaderValue,FArrayShaderValue,int>
                    ((pTVar1->AllocatorInstance).Data,(FArrayShaderValue *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FArrayShaderValue> @ 1494bd4b0

void __cdecl UE::CoreUObject::Private::Construct<FArrayShaderValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FArrayShaderValue> @ 1494bd4c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FArrayShaderValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FArrayShaderValue> @ 1494bd4d0

void __cdecl UE::CoreUObject::Private::Destruct<FArrayShaderValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FArrayShaderValue> @ 1494bd4f0

bool __cdecl
UE::CoreUObject::Private::Copy<FArrayShaderValue>(void *param_1,void *param_2,int param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FShaderValueTypeHandle> @ 1494bd540

void __cdecl UE::CoreUObject::Private::Construct<FShaderValueTypeHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FShaderValueTypeHandle> @ 1494bd550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShaderValueTypeHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FShaderValueTypeHandle> @ 1494bd560

void __cdecl UE::CoreUObject::Private::Destruct<FShaderValueTypeHandle>(void *param_1)

{
  return;
}

// SerializeArchive<FShaderValueTypeHandle> @ 1494bd570

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FShaderValueTypeHandle>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  ::operator<<(param_1,param_2);
  return true;
}

// Identical<FShaderValueTypeHandle> @ 1494bd590

bool __cdecl
UE::CoreUObject::Private::Identical<FShaderValueTypeHandle>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)param_1 == *(longlong *)param_2;
  return true;
}

// GetStructTypeHash<FShaderValueTypeHandle> @ 1494bd670

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FShaderValueTypeHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = ::GetTypeHash(*(FShaderValueType **)param_1);
  return uVar1;
}

