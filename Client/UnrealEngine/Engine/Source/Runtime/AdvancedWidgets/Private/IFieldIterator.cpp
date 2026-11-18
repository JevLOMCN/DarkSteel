// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// ~IFieldIterator @ 14d83aca0

void __thiscall UE::PropertyViewer::IFieldIterator::~IFieldIterator(IFieldIterator *this)

{
  return;
}

// GetFields @ 14d8679a0

TArray<FFieldVariant,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::IFieldIterator::GetFields
          (IFieldIterator *this,
          TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UStruct *param_1
          )

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFields @ 14d8679c0

TArray<FFieldVariant,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::IFieldIterator::GetFields
          (IFieldIterator *this,
          TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UStruct *param_1
          ,FName param_2,UStruct *param_3)

{
  (**(code **)((longlong)*this + 8))();
  return __return_storage_ptr__;
}

