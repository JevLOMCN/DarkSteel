// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 148aa84e0

UScriptStruct * __cdecl FActivatedCells::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActivatedCells.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActivatedCells.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActivatedCells,(UObject *)pUVar1,
                         L"ActivatedCells");
  }
  return Z_Registration_Info_UScriptStruct_FActivatedCells.OuterSingleton;
}

// operator= @ 148ab8220

FActivatedCells * __thiscall
FActivatedCells::operator=(FActivatedCells *this,FActivatedCells *param_1)

{
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::operator=(&this->Cells,&param_1->Cells);
  this_00 = &this->PendingAddToWorldCells;
  if (this_00 != &param_1->PendingAddToWorldCells) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->PendingAddToWorldCells).Hash,&(this->PendingAddToWorldCells).HashSize,
               &(param_1->PendingAddToWorldCells).Hash,(param_1->PendingAddToWorldCells).HashSize);
    iVar2 = *(int *)&(param_1->PendingAddToWorldCells).Elements.field_0x8;
    TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,(ForAnyElementType *)this_00,
               (int *)&(this->PendingAddToWorldCells).Elements.field_0x8,
               (int *)&(this->PendingAddToWorldCells).Elements.field_0xc);
    puVar1 = &(param_1->PendingAddToWorldCells).Elements.field_0x10;
    this_01 = &(this->PendingAddToWorldCells).Elements.field_0x10;
    *(undefined4 *)&(this->PendingAddToWorldCells).Elements.field_0x30 =
         *(undefined4 *)&(param_1->PendingAddToWorldCells).Elements.field_0x30;
    *(undefined4 *)&(this->PendingAddToWorldCells).Elements.field_0x34 =
         *(undefined4 *)&(param_1->PendingAddToWorldCells).Elements.field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this_00->Elements,*(void **)&(param_1->PendingAddToWorldCells).Elements,
             (longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

// Add @ 148abf200

void __thiscall FActivatedCells::Add(FActivatedCells *this,UWorldPartitionRuntimeCell *param_1)

{
  char cVar1;
  TObjectPtr<UWorldPartitionRuntimeCell_const_> local_res8;
  UWorldPartitionRuntimeCell *local_res10;
  UWorldPartitionRuntimeCell *local_res18;
  
  local_res10 = param_1;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorldPartitionRuntimeCell *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
            (&this->Cells,&local_res8,(bool *)&local_res18);
  cVar1 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
  if (cVar1 == '\0') {
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
              (&this->PendingAddToWorldCells,(UWorldPartitionRuntimeCell **)&local_res8,
               (bool *)&local_res10);
  }
  return;
}

// OnAddedToWorld @ 148ad5470

void __thiscall
FActivatedCells::OnAddedToWorld(FActivatedCells *this,UWorldPartitionRuntimeCell *param_1)

{
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Remove(&this->PendingAddToWorldCells,param_1);
  return;
}

// OnRemovedFromWorld @ 148ad5650

void __thiscall
FActivatedCells::OnRemovedFromWorld(FActivatedCells *this,UWorldPartitionRuntimeCell *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_res8;
  UWorldPartitionRuntimeCell *local_res10;
  
  local_res8.DebugPtr = param_1;
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UWorldPartitionRuntimeCell *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                    (&this->Cells,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
    if (cVar1 == '\0') {
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                (&this->PendingAddToWorldCells,&local_res8.DebugPtr,(bool *)&local_res10);
    }
  }
  return;
}

// Remove @ 148ad8360

void __thiscall FActivatedCells::Remove(FActivatedCells *this,UWorldPartitionRuntimeCell *param_1)

{
  UWorldPartitionRuntimeCell *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorldPartitionRuntimeCell *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Remove(&this->Cells,(TObjectPtr<UWorldPartitionRuntimeCell_const_>)&local_res8);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Remove(&this->PendingAddToWorldCells,param_1);
  return;
}

// Reset @ 148ad9be0

void __thiscall FActivatedCells::Reset(FActivatedCells *this)

{
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Reset(&this->Cells);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Reset(&this->PendingAddToWorldCells);
  return;
}

