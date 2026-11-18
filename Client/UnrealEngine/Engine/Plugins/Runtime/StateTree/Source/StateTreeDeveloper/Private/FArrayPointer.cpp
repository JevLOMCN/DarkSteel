// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 4

// GetItems @ 14d72f410

TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
::GetItems(FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
          TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
       (this->ItemsSource->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> *)
             (*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 14d72f480

TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
GetItems(FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,
        TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int>
        *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
       (this->ItemsSource->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> *)
             (*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 14d732a30

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
::IsSame(FArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this,
        void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 14d732a40

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::
IsSame(FArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *this,void *param_1
      )

{
  return param_1 == this->ItemsSource;
}

