// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// ~IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> @ 14d8381c0

void __thiscall
IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
~IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
  *this = (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
          &___7__IFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_;
  return;
}

// GetName @ 14d869280

FString * __thiscall
IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GetName
          (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

