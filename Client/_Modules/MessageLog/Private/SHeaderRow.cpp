// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 2

// ~SHeaderRow @ 142bccea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::~SHeaderRow(SHeaderRow *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHiddenColumnsListChanged);
  pvVar1 = *(void **)&(this->OnHiddenColumnsListChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHiddenColumnsListChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxRowSizeForColumn);
  pvVar1 = *(void **)&(this->OnGetMaxRowSizeForColumn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMaxRowSizeForColumn);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ColumnsChanged).field_0x8,*(int *)&(this->ColumnsChanged).field_0x10);
  pvVar1 = *(void **)&(this->ColumnsChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ColumnsChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollBarVisibility).Getter);
  pvVar1 = *(void **)&(this->ScrollBarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ScrollBarVisibility).Getter);
  DestructItems<TSharedPtr<STableColumnHeader,1>,int>
            ((TSharedPtr<STableColumnHeader,1> *)(this->HeaderWidgets).AllocatorInstance.Data,
             (this->HeaderWidgets).ArrayNum);
  pFVar2 = (this->HeaderWidgets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_>(&this->Columns);
  SBorder::~SBorder((SBorder *)this);
  return;
}

// Column @ 142bd72a0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __cdecl SHeaderRow::Column(FArguments *__return_storage_ptr__,FName *param_1)

{
  FColumn::FArguments::FArguments(__return_storage_ptr__);
  __return_storage_ptr__->_ColumnId = *param_1;
  return __return_storage_ptr__;
}

