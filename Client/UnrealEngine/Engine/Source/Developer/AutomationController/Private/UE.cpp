// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 34

// Construct<FAutomationArtifact> @ 148c4aa40

void __cdecl UE::CoreUObject::Private::Construct<FAutomationArtifact>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// ConstructForTests<FAutomationArtifact> @ 148c4aad0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomationArtifact>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FAutomationArtifact> @ 148c4ab60

void __cdecl UE::CoreUObject::Private::Destruct<FAutomationArtifact>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FAutomationArtifact> @ 148c4ab70

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomationArtifact>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x28),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x28));
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x78),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x78));
      param_2 = (void *)((longlong)param_2 + 200);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 200);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAutomationDeviceInfo> @ 148c4c450

void __cdecl UE::CoreUObject::Private::Construct<FAutomationDeviceInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  return;
}

// ConstructForTests<FAutomationDeviceInfo> @ 148c4c4d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomationDeviceInfo>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  return;
}

// Destruct<FAutomationDeviceInfo> @ 148c4c550

void __cdecl UE::CoreUObject::Private::Destruct<FAutomationDeviceInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FAutomationDeviceInfo> @ 148c4c560

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomationDeviceInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x60),(FString *)((longlong)param_2 + 0x60));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x70),(FString *)((longlong)param_2 + 0x70));
    *(undefined4 *)((longlong)param_1 + 0x80) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x80))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x88),(FString *)((longlong)param_2 + 0x88));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x98),(FString *)((longlong)param_2 + 0x98));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0xa8),(FString *)((longlong)param_2 + 0xa8));
    param_2 = (void *)((longlong)param_2 + 0xb8);
    param_1 = (int *)((longlong)param_1 + 0xb8);
  }
  return true;
}

// Construct<FAutomatedTestGroup> @ 148c4c680

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FAutomatedTestGroup> @ 148c4c6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAutomatedTestGroup> @ 148c4c6c0

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestGroup>(void *param_1)

{
  DestructItems<FAutomatedTestFilter,int>
            (*(FAutomatedTestFilter **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18)
            );
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FAutomatedTestGroup> @ 148c4c710

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestGroup>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAutomatedTestFilter> @ 148c4c790

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestFilter>(void *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"");
  FAutomatedTestFilter::FAutomatedTestFilter(param_1,pFVar1,false,false);
  *(undefined ***)param_1 = &___7FAutomatedTestFilter__6B_;
  return;
}

// ConstructForTests<FAutomatedTestFilter> @ 148c4c7e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestFilter>(void *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"");
  FAutomatedTestFilter::FAutomatedTestFilter(param_1,pFVar1,false,false);
  *(undefined ***)param_1 = &___7FAutomatedTestFilter__6B_;
  return;
}

// Destruct<FAutomatedTestFilter> @ 148c4c830

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestFilter>(void *param_1)

{
  DestructItems<FAutomatedTestTagFilter,int>
            (*(FAutomatedTestTagFilter **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FAutomatedTestFilterBase,int>
            (*(FAutomatedTestFilterBase **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FAutomatedTestFilter> @ 148c4c840

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestFilter>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FAutomatedTestFilterBase *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FAutomatedTestFilterBase,int>
                ((FAutomatedTestFilterBase *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar4 = (FAutomatedTestFilterBase *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FAutomatedTestFilterBase,FAutomatedTestFilterBase,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FAutomatedTestTagFilter> @ 148c4d140

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestTagFilter>(void *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  FAutomatedTestTagFilter::FAutomatedTestTagFilter(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)param_1 = &___7FAutomatedTestTagFilter__6B_;
  return;
}

// ConstructForTests<FAutomatedTestTagFilter> @ 148c4d190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestTagFilter>(void *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  FAutomatedTestTagFilter::FAutomatedTestTagFilter(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)param_1 = &___7FAutomatedTestTagFilter__6B_;
  return;
}

// Destruct<FAutomatedTestTagFilter> @ 148c4d1e0

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestTagFilter>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAutomatedTestTagFilter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FAutomatedTestTagFilter> @ 148c4d200

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestTagFilter>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    lVar2 = *(longlong *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar4);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10);
    *(undefined8 *)((longlong)pvVar4 + 8) = uVar1;
    *(longlong *)((longlong)pvVar4 + 0x10) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x18);
  }
  return true;
}

// Construct<FAutomatedTestFilterBase> @ 148c4d280

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestFilterBase>(void *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,L"");
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),pFVar2);
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  return;
}

// ConstructForTests<FAutomatedTestFilterBase> @ 148c4d290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestFilterBase>(void *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,L"");
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  ::FString::FString((FString *)((longlong)param_1 + 8),pFVar2);
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  return;
}

// Destruct<FAutomatedTestFilterBase> @ 148c4d2a0

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestFilterBase>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FAutomatedTestFilterBase__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
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

// Copy<FAutomatedTestFilterBase> @ 148c4d2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestFilterBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x19) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x19 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FAutomatedTestPassResults> @ 148c4d390

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestPassResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FAutomatedTestPassResults> @ 148c4d410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestPassResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FAutomatedTestPassResults> @ 148c4d490

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestPassResults>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  DestructItems<FAutomatedTestResult,int>
            (*(FAutomatedTestResult **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50)
            );
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<FAutomationDeviceInfo,int>
            (*(FAutomationDeviceInfo **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FAutomatedTestPassResults> @ 148c4d4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestPassResults>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FAutomationDeviceInfo *pFVar6;
  FAutomatedTestResult *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar3) {
        DestructItems<FAutomationDeviceInfo,int>
                  ((FAutomationDeviceInfo *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = (FAutomationDeviceInfo *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb8,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<FAutomationDeviceInfo,FAutomationDeviceInfo,int>(pFVar8->Data,pFVar6,iVar4)
          ;
        }
      }
      pFVar8[2].Data = pFVar3[2].Data;
      *(undefined4 *)&pFVar8[3].Data = *(undefined4 *)&pFVar3[3].Data;
      *(undefined4 *)((longlong)&pFVar8[3].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[3].Data + 4);
      *(undefined4 *)&pFVar8[4].Data = *(undefined4 *)&pFVar3[4].Data;
      *(undefined4 *)((longlong)&pFVar8[4].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[4].Data + 4);
      *(undefined4 *)&pFVar8[5].Data = *(undefined4 *)&pFVar3[5].Data;
      *(undefined4 *)((longlong)&pFVar8[5].Data + 4) =
           *(undefined4 *)((longlong)&pFVar3[5].Data + 4);
      *(undefined1 *)&pFVar8[6].Data = *(undefined1 *)&pFVar3[6].Data;
      ::FString::operator=((FString *)(pFVar8 + 7),(FString *)(pFVar3 + 7));
      pFVar2 = pFVar8 + 9;
      if (pFVar2 != pFVar3 + 9) {
        DestructItems<FAutomatedTestResult,int>
                  ((FAutomatedTestResult *)pFVar2->Data,*(int *)&pFVar8[10].Data);
        iVar4 = *(int *)&pFVar3[10].Data;
        piVar1 = (int *)((longlong)&pFVar8[10].Data + 4);
        pFVar7 = (FAutomatedTestResult *)pFVar3[9].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[10].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FAutomatedTestResult,FAutomatedTestResult,int>(pFVar2->Data,pFVar7,iVar4);
        }
      }
      TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                   *)(pFVar8 + 0xb),
                  (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                   *)(pFVar3 + 0xb));
      *(undefined1 *)&pFVar8[0x15].Data = *(undefined1 *)&pFVar3[0x15].Data;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAutomatedTestResult> @ 148c4d6a0

void __cdecl UE::CoreUObject::Private::Construct<FAutomatedTestResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FAutomatedTestResult> @ 148c4d700

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutomatedTestResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FAutomatedTestResult> @ 148c4d760

void __cdecl UE::CoreUObject::Private::Destruct<FAutomatedTestResult>(void *param_1)

{
  DestructItems<FAutomationArtifact,int>
            (*(FAutomationArtifact **)((longlong)param_1 + 0x80),*(int *)((longlong)param_1 + 0x88))
  ;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FAutomationExecutionEntry,int>
            (*(FAutomationExecutionEntry **)((longlong)param_1 + 0x68),
             *(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FAutomatedTestResult> @ 148c4d770

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomatedTestResult>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      lVar2 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar5);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      uVar3 = *puVar1;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[1];
      *puVar5 = uVar3;
      puVar5[1] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      ::FString::operator=((FString *)(puVar5 + 2),(FString *)(puVar1 + 2));
      ::FString::operator=((FString *)(puVar5 + 4),(FString *)(puVar1 + 4));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 6),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar1 + 6));
      *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(puVar1 + 8);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 9),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar1 + 9));
      *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
      puVar5[0xc] = puVar1[0xc];
      TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)(puVar5 + 0xd),
                 (TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)(puVar1 + 0xd));
      *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(puVar1 + 0xf);
      *(undefined4 *)((longlong)puVar5 + 0x7c) = *(undefined4 *)((longlong)puVar1 + 0x7c);
      TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(puVar5 + 0x10),
                 (TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(puVar1 + 0x10));
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x12;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_*_&> @ 148c4faf0

TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_*_&>
          (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&> @ 148c4fb10

FAutomationExecCmd * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&>
          (FAutomationExecCmd **param_1)

{
  return *param_1;
}

