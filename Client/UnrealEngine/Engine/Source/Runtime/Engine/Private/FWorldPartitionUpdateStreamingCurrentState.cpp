// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 148aa9040

UScriptStruct * __cdecl FWorldPartitionUpdateStreamingCurrentState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState,
                         (UObject *)pUVar1,L"WorldPartitionUpdateStreamingCurrentState");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.OuterSingleton
  ;
}

// FWorldPartitionUpdateStreamingCurrentState @ 148ab4cc0

FWorldPartitionUpdateStreamingCurrentState * __thiscall
FWorldPartitionUpdateStreamingCurrentState::FWorldPartitionUpdateStreamingCurrentState
          (FWorldPartitionUpdateStreamingCurrentState *this)

{
  (this->StreamingSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSources).ArrayNum = 0;
  (this->StreamingSources).ArrayMax = 0;
  *(undefined8 *)&(this->LoadedCells).Elements = 0;
  *(undefined8 *)&(this->LoadedCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadedCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadedCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadedCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedCells).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LoadedCells).Elements.field_0x30 = 0xffffffff;
  (this->LoadedCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadedCells).HashSize = 0;
  *(undefined8 *)&(this->ActivatedCells).Cells.Elements = 0;
  *(undefined8 *)&(this->ActivatedCells).Cells.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActivatedCells).Cells.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActivatedCells).Cells.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActivatedCells).Cells.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivatedCells).Cells.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActivatedCells).Cells.Elements.field_0x30 = 0xffffffff;
  (this->ActivatedCells).Cells.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActivatedCells).Cells.HashSize = 0;
  *(undefined8 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements = 0;
  *(undefined8 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActivatedCells).PendingAddToWorldCells.Elements.field_0x30 = 0xffffffff;
  (this->ActivatedCells).PendingAddToWorldCells.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActivatedCells).PendingAddToWorldCells.HashSize = 0;
  return this;
}

// ~FWorldPartitionUpdateStreamingCurrentState @ 148ab7180

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionUpdateStreamingCurrentState::~FWorldPartitionUpdateStreamingCurrentState
          (FWorldPartitionUpdateStreamingCurrentState *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->ActivatedCells).PendingAddToWorldCells.HashSize = 0;
  FVar1 = (this->ActivatedCells).PendingAddToWorldCells.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActivatedCells).PendingAddToWorldCells.Elements);
  (this->ActivatedCells).Cells.HashSize = 0;
  FVar1 = (this->ActivatedCells).Cells.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActivatedCells);
  (this->LoadedCells).HashSize = 0;
  FVar1 = (this->LoadedCells).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadedCells).Elements);
  DestructItems<FWorldPartitionStreamingSource,int>
            ((FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data,
             (this->StreamingSources).ArrayNum);
  pFVar2 = (this->StreamingSources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CopyFrom @ 148ac2fb0

void __thiscall
FWorldPartitionUpdateStreamingCurrentState::CopyFrom
          (FWorldPartitionUpdateStreamingCurrentState *this,
          FWorldPartitionUpdateStreamingCurrentState *param_1)

{
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>::operator=
            (&this->StreamingSources,&param_1->StreamingSources);
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::operator=(&this->LoadedCells,&param_1->LoadedCells);
  FActivatedCells::operator=(&this->ActivatedCells,&param_1->ActivatedCells);
  return;
}

// Reset @ 148ad9c10

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionUpdateStreamingCurrentState::Reset(FWorldPartitionUpdateStreamingCurrentState *this)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionStreamingSource *pFVar3;
  
  piVar1 = &(this->StreamingSources).ArrayMax;
  pFVar3 = (FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data;
  iVar2 = (this->StreamingSources).ArrayNum;
  if ((this->StreamingSources).ArrayMax < 0) {
    DestructItems<FWorldPartitionStreamingSource,int>(pFVar3,iVar2);
    (this->StreamingSources).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FWorldPartitionStreamingSource,int>(pFVar3,iVar2);
    (this->StreamingSources).ArrayNum = 0;
  }
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Reset(&this->LoadedCells);
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Reset(&(this->ActivatedCells).Cells);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Reset(&(this->ActivatedCells).PendingAddToWorldCells);
  return;
}

