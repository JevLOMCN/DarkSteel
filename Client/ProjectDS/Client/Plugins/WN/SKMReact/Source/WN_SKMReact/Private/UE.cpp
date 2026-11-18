// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 28

// Construct<FWN_SKMReact_TableRow> @ 14acd3530

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact_TableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_SKMReact_TableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWN_SKMReact_TableRow> @ 14acd3550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact_TableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_SKMReact_TableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWN_SKMReact_TableRow> @ 14acd3570

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact_TableRow>(void *param_1)

{
  DestructItems<FWN_SKMReact_Consumer,int>
            (*(FWN_SKMReact_Consumer **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_SKMReact_TableRow> @ 14acd35b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReact_TableRow>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FWN_SKMReact_Consumer *pFVar4;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pFVar6 = (ForAnyElementType *)((longlong)pvVar5 + 0x10);
    *(undefined8 *)((longlong)pvVar5 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar5);
    if (pFVar6 != pFVar1) {
      DestructItems<FWN_SKMReact_Consumer,int>
                ((FWN_SKMReact_Consumer *)pFVar6->Data,*(int *)((longlong)pvVar5 + 0x18));
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1c);
      pFVar4 = (FWN_SKMReact_Consumer *)pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
        ConstructItems<FWN_SKMReact_Consumer,FWN_SKMReact_Consumer,int>(pFVar6->Data,pFVar4,iVar3);
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x20);
  }
  return true;
}

// Construct<FWN_SKMReact_Consumer> @ 14acd36a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact_Consumer>(void *param_1)

{
  memset(param_1,0,0xe0);
  FWN_SKMReact_Consumer::FWN_SKMReact_Consumer(param_1);
  return;
}

// ConstructForTests<FWN_SKMReact_Consumer> @ 14acd36d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact_Consumer>(void *param_1)

{
  undefined8 uStackX_8;
  TVector4<float>_u_0 TStack_18;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x88))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x88),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x70),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xb0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xb0),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x98),(FObjectPtr)&uStackX_8);
  TStack_18._0_8_ = ___xmm_3f666666000000000000000000000000;
  TStack_18._8_8_ = _UNK_151e4ec98;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 200) = 0x100;
  FLinearColor::FLinearColor
            ((FLinearColor *)((longlong)param_1 + 0xcc),(TVector4<float> *)&TStack_18._s_0);
  return;
}

// Destruct<FWN_SKMReact_Consumer> @ 14acd36e0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact_Consumer>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FWN_SKMReact_Consumer> @ 14acd3970

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReact_Consumer>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  FString *pFVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x20),
                (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x20));
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x70),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x70));
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)
               &(((FString *)((longlong)param_1 + 0x90))->Data).ArrayNum,
               (TPersistentObjectPtr<FSoftObjectPath> *)
               &(((FString *)((longlong)param_2 + 0x90))->Data).ArrayNum);
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0xc0))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0xc0))->Data).AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0xc0))->Data).AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0xc0))->Data).AllocatorInstance.Data + 4);
    *(char *)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0xc0))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0xc0))->Data).ArrayNum + 1);
    pFVar2 = (FString *)((longlong)param_2 + 0xc0);
    uVar1 = *(undefined8 *)
             ((longlong)&(((FString *)((longlong)param_2 + 0xd0))->Data).AllocatorInstance.Data + 4)
    ;
    param_2 = (void *)((longlong)param_2 + 0xe0);
    *(undefined8 *)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayMax =
         *(undefined8 *)&(pFVar2->Data).ArrayMax;
    *(undefined8 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0xd0))->Data).AllocatorInstance.Data + 4) = uVar1
    ;
    param_1 = (FString *)((longlong)param_1 + 0xe0);
  }
  return true;
}

// Construct<FWN_SKMReact_Particle> @ 14acd3f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact_Particle>(void *param_1)

{
  memset(param_1,0,0xa0);
  FWN_SKMReact_Particle::FWN_SKMReact_Particle(param_1);
  return;
}

// ConstructForTests<FWN_SKMReact_Particle> @ 14acd3f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact_Particle>(void *param_1)

{
  TVector4<float>_u_0 TStack_18;
  
  TStack_18._0_8_ = ___xmm_3f666666000000000000000000000000;
  TStack_18._8_8_ = _UNK_151e4ec98;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x88) = 0x100;
  FLinearColor::FLinearColor
            ((FLinearColor *)((longlong)param_1 + 0x8c),(TVector4<float> *)&TStack_18._s_0);
  return;
}

// Destruct<FWN_SKMReact_Particle> @ 14acd3f40

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact_Particle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FWN_SKMReact_Particle> @ 14acd3fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReact_Particle>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x20),
                (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x20));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x70))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((FString *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x70))->Data).AllocatorInstance.Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)&(((FString *)((longlong)param_2 + 0x70))->Data).ArrayNum,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    iVar3 = (((FString *)((longlong)param_2 + 0x70))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x70))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayMax = iVar3;
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x80))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x80))->Data).AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x80))->Data).AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x80))->Data).AllocatorInstance.Data + 4);
    *(char *)&(((FString *)((longlong)param_1 + 0x80))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0x80))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x80))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x80))->Data).ArrayNum + 1);
    uVar2 = *(undefined8 *)
             ((longlong)&(((FString *)((longlong)param_2 + 0x90))->Data).AllocatorInstance.Data + 4)
    ;
    *(undefined8 *)&(((FString *)((longlong)param_1 + 0x80))->Data).ArrayMax =
         *(undefined8 *)&(((FString *)((longlong)param_2 + 0x80))->Data).ArrayMax;
    *(undefined8 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x90))->Data).AllocatorInstance.Data + 4) = uVar2
    ;
    param_1 = (FString *)((longlong)param_1 + 0xa0);
    param_2 = (FString *)((longlong)param_2 + 0xa0);
  }
  return true;
}

// Construct<FWN_SKMReact> @ 14acd4240

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x38d1b717;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x4030000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x4030000000000000;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x41200000;
  return;
}

// ConstructForTests<FWN_SKMReact> @ 14acd4330

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x4030000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x4030000000000000;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x38d1b717;
  return;
}

// Destruct<FWN_SKMReact> @ 14acd43c0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FWN_SKMReact> @ 14acd4400

bool __cdecl UE::CoreUObject::Private::Copy<FWN_SKMReact>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      if ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)param_1 + 8) !=
          (TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)param_1 + lVar2 + 8)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x40),
                   (int *)((longlong)param_1 + 0x50),
                   (ForElementType<FSetElementId> *)((longlong)param_1 + lVar2 + 0x40),
                   *(int *)((longlong)param_1 + lVar2 + 0x50));
        TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)param_1 + 8),
                    (TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)param_1 + lVar2 + 8));
      }
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x68);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x80);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x98);
      *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xa0);
      *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xa4);
      *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xa8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0xb0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_SKMReactInfo> @ 14acd45a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReactInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xc056800000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4056800000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FWN_SKMReactInfo> @ 14acd45e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReactInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xc056800000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4056800000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FWN_SKMReactInfo> @ 14acd4620

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReactInfo>(void *param_1)

{
  return;
}

// Copy<FWN_SKMReactInfo> @ 14acd4630

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReactInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      puVar3[3] = puVar1[3];
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_SKMReact_BoneTraceInfo> @ 14acd46e0

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact_BoneTraceInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined4 *)param_1 = 0xc1a00000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FWN_SKMReact_BoneTraceInfo> @ 14acd4720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact_BoneTraceInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc1a00000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FWN_SKMReact_BoneTraceInfo> @ 14acd4750

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact_BoneTraceInfo>(void *param_1)

{
  return;
}

// Copy<FWN_SKMReact_BoneTraceInfo> @ 14acd4760

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReact_BoneTraceInfo>(void *param_1,void *param_2,int param_3)

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
  longlong lVar12;
  
  if (param_3 != 0) {
    lVar12 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar12 + 0x50 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar12 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar12 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar12 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x58);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_SKMReact_AnimNotifySetting> @ 14acd48e0

void __cdecl UE::CoreUObject::Private::Construct<FWN_SKMReact_AnimNotifySetting>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  return;
}

// ConstructForTests<FWN_SKMReact_AnimNotifySetting> @ 14acd4940

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_SKMReact_AnimNotifySetting>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  return;
}

// Destruct<FWN_SKMReact_AnimNotifySetting> @ 14acd4990

void __cdecl UE::CoreUObject::Private::Destruct<FWN_SKMReact_AnimNotifySetting>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FWN_SKMReact_AnimNotifySetting> @ 14acd49d0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_SKMReact_AnimNotifySetting>
          (void *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      this = (TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar3 + 2);
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)((longlong)pvVar2 + 4);
      *(undefined1 *)((longlong)puVar3 + 5) = *(undefined1 *)((longlong)pvVar2 + 5);
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)pvVar2 + 8)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0x10),puVar3 + 0x14,
                   (ForElementType<FSetElementId> *)((longlong)pvVar2 + 0x40),
                   *(int *)((longlong)pvVar2 + 0x50));
        iVar1 = *(int *)((longlong)pvVar2 + 0x10);
        TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar1);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar1,(ForAnyElementType *)this,puVar3 + 4,puVar3 + 5);
        puVar3[0xe] = *(undefined4 *)((longlong)pvVar2 + 0x38);
        puVar3[0xf] = *(undefined4 *)((longlong)pvVar2 + 0x3c);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 6) !=
            (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 0x18)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 6),
                     (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar2 + 0x18));
        }
        if (iVar1 != 0) {
          memcpy(*(void **)this,*(void **)((longlong)pvVar2 + 8),(longlong)iVar1 * 0x14);
        }
      }
      puVar3[0x16] = *(undefined4 *)((longlong)pvVar2 + 0x58);
      puVar3[0x17] = *(undefined4 *)((longlong)pvVar2 + 0x5c);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x60);
      puVar3 = puVar3 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

