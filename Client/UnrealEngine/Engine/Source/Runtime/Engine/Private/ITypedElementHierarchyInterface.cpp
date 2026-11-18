// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~ITypedElementHierarchyInterface @ 147b3d380

void __thiscall
ITypedElementHierarchyInterface::~ITypedElementHierarchyInterface
          (ITypedElementHierarchyInterface *this)

{
  *this = (ITypedElementHierarchyInterface)&___7ITypedElementHierarchyInterface__6B_;
  return;
}

// GetChildElements @ 147b643e0

void __thiscall
ITypedElementHierarchyInterface::GetChildElements
          (ITypedElementHierarchyInterface *this,FTypedElementHandle *param_1,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  return;
}

// GetParentElement @ 147b6a740

FTypedElementHandle * __thiscall
ITypedElementHierarchyInterface::GetParentElement
          (ITypedElementHierarchyInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,bool param_2)

{
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  return __return_storage_ptr__;
}

// _getUObject @ 147b91ed0

UObject * __thiscall
ITypedElementHierarchyInterface::_getUObject(ITypedElementHierarchyInterface *this)

{
  return (UObject *)0x0;
}

