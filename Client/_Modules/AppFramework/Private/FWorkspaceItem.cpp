// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// AddGroup @ 14306e570

TSharedRef<FWorkspaceItem,1> * __thiscall
FWorkspaceItem::AddGroup
          (FWorkspaceItem *this,TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__,FText *param_1,
          FSlateIcon *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pTVar1 = ::operator_new(0x118);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWorkspaceItem___00_SharedPointerInternals__6B_;
    FWorkspaceItem((FWorkspaceItem *)(pTVar1 + 1),&local_res10,param_1,param_2,param_3);
  }
  TSharedRef<FWorkspaceItem,1>::TSharedRef<FWorkspaceItem,1>
            (__return_storage_ptr__,(FWorkspaceItem *)(pTVar1 + 1),pTVar1);
  AddItem(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewGroup @ 1430d8750

TSharedRef<FWorkspaceItem,1> * __cdecl
FWorkspaceItem::NewGroup
          (TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__,FText *param_1,FSlateIcon *param_2,
          bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FName local_res8;
  
  pTVar1 = ::operator_new(0x118);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWorkspaceItem___00_SharedPointerInternals__6B_;
    FWorkspaceItem((FWorkspaceItem *)(pTVar1 + 1),&local_res8,param_1,param_2,param_3);
  }
  TSharedRef<FWorkspaceItem,1>::TSharedRef<FWorkspaceItem,1>
            (__return_storage_ptr__,(FWorkspaceItem *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

