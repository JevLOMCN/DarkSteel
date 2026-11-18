// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ~FHittestGrid @ 1429be760

void __thiscall FHittestGrid::~FHittestGrid(FHittestGrid *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  
  FInstancedStruct::Reset(&(this->LastNavigationMethod).InstancedStruct);
  DestructItems<FHittestGrid::FAppendedGridData,int>
            ((FAppendedGridData *)(this->AppendedGridArray).AllocatorInstance.Data,
             (this->AppendedGridArray).ArrayNum);
  pFVar3 = (this->AppendedGridArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FHittestGrid::FCell,int>
            ((FCell *)(this->Cells).AllocatorInstance.Data,(this->Cells).ArrayNum);
  pFVar3 = (this->Cells).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::DestroyElements
            (&this->WidgetArray,0,*(int *)&(this->WidgetArray).field_0x8);
  puVar1 = &(this->WidgetArray).field_0xc;
  *(undefined4 *)&(this->WidgetArray).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->WidgetArray,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WidgetArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetArray).field_0x34 = 0;
  iVar2 = *(int *)&(this->WidgetArray).field_0x2c;
  *(undefined4 *)&(this->WidgetArray).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WidgetArray).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetArray).field_0x10,0);
  }
  pvVar4 = *(void **)&(this->WidgetArray).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (*(void **)&this->WidgetArray != (void *)0x0) {
    FMemory::Free(*(void **)&this->WidgetArray);
  }
  *(undefined4 *)&(this->WidgetMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->WidgetMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

