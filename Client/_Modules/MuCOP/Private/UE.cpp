// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 24

// Construct<FCustomizableObjectPopulationCharacteristic> @ 14d363a50

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectPopulationCharacteristic>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectPopulationCharacteristic> @ 14d363a70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectPopulationCharacteristic>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCustomizableObjectPopulationCharacteristic> @ 14d363a90

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectPopulationCharacteristic>(void *param_1)

{
  DestructItems<FCustomizableObjectPopulationConstraint,int>
            (*(FCustomizableObjectPopulationConstraint **)((longlong)param_1 + 0x10),
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

// Copy<FCustomizableObjectPopulationCharacteristic> @ 14d363ae0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectPopulationCharacteristic>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FCustomizableObjectPopulationConstraint *pFVar6;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar3 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar3);
      pFVar1 = this + 1;
      if (pFVar1 != pFVar3 + 1) {
        DestructItems<FCustomizableObjectPopulationConstraint,int>
                  ((FCustomizableObjectPopulationConstraint *)(pFVar1->Data).AllocatorInstance.Data,
                   this[1].Data.ArrayNum);
        iVar4 = pFVar3[1].Data.ArrayNum;
        piVar2 = &this[1].Data.ArrayMax;
        pFVar6 = (FCustomizableObjectPopulationConstraint *)pFVar3[1].Data.AllocatorInstance.Data;
        iVar5 = *piVar2;
        this[1].Data.ArrayNum = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,iVar4,iVar5,(ForAnyElementType *)pFVar1,iVar4,piVar2);
          ConstructItems<FCustomizableObjectPopulationConstraint,FCustomizableObjectPopulationConstraint,int>
                    ((pFVar1->Data).AllocatorInstance.Data,pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectPopulationConstraint> @ 14d3640a0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectPopulationConstraint>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectPopulationConstraint> @ 14d3640b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectPopulationConstraint>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FCustomizableObjectPopulationConstraint> @ 14d3640c0

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectPopulationConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FCustomizableObjectPopulationConstraint> @ 14d3640d0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectPopulationConstraint>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = puVar6[(longlong)param_2 - (longlong)param_1];
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)pvVar5 + 4);
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)((longlong)pvVar5 + 8);
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)((longlong)pvVar5 + 0xc);
      ::FString::operator=((FString *)(puVar6 + 0x10),(FString *)((longlong)pvVar5 + 0x10));
      uVar4 = *(undefined8 *)((longlong)pvVar5 + 0x28);
      *(undefined8 *)(puVar6 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
      *(undefined8 *)(puVar6 + 0x28) = uVar4;
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x30),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x30));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x40),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x40));
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x50);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x50)) {
        iVar3 = *(int *)((longlong)pvVar5 + 0x58);
        piVar2 = (int *)(puVar6 + 0x5c);
        _Src = ((ForAnyElementType *)((longlong)pvVar5 + 0x50))->Data;
        *(int *)(puVar6 + 0x58) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0xc);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar5 + 0x60) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar5 + 0x60));
      }
      *(undefined8 *)(puVar6 + 0x60) = *(undefined8 *)((longlong)pvVar5 + 0x60);
      puVar6[0x68] = *(undefined1 *)((longlong)pvVar5 + 0x68);
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x70);
      puVar6 = puVar6 + 0x70;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintRanges> @ 14d364240

void __cdecl UE::CoreUObject::Private::Construct<FConstraintRanges>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FConstraintRanges> @ 14d364260

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintRanges>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FConstraintRanges> @ 14d364280

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintRanges>(void *param_1)

{
  return;
}

// Copy<FConstraintRanges> @ 14d364290

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintRanges>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPopulationClassParameter> @ 14d364400

void __cdecl UE::CoreUObject::Private::Construct<FPopulationClassParameter>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FPopulationClassParameter> @ 14d364450

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPopulationClassParameter>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FPopulationClassParameter> @ 14d364490

void __cdecl UE::CoreUObject::Private::Destruct<FPopulationClassParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FPopulationClassParameter> @ 14d3644f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPopulationClassParameter>(void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      if ((TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(this + 1) !=
          (TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(pTVar1 + 1)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&this[4].ArrayNum,&this[5].ArrayNum,
                   (ForElementType<FSetElementId> *)&pTVar1[4].ArrayNum,pTVar1[5].ArrayNum);
        TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(this + 1),
                    (TSparseArray<TSparseSetElement<TTuple<FString,FPopulationClassParameterOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(pTVar1 + 1));
      }
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPopulationClassParameterOptions> @ 14d364590

void __cdecl UE::CoreUObject::Private::Construct<FPopulationClassParameterOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPopulationClassParameterOptions> @ 14d3645a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPopulationClassParameterOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPopulationClassParameterOptions> @ 14d3645b0

void __cdecl UE::CoreUObject::Private::Destruct<FPopulationClassParameterOptions>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPopulationClassParameterOptions> @ 14d3645f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPopulationClassParameterOptions>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClassWeightPair> @ 14d364640

void __cdecl UE::CoreUObject::Private::Construct<FClassWeightPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FClassWeightPair> @ 14d364660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClassWeightPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FClassWeightPair> @ 14d364680

void __cdecl UE::CoreUObject::Private::Destruct<FClassWeightPair>(void *param_1)

{
  return;
}

// Copy<FClassWeightPair> @ 14d364690

bool __cdecl
UE::CoreUObject::Private::Copy<FClassWeightPair>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

