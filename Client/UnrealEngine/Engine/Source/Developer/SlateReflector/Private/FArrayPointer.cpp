// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 12

// GetItems @ 142e9f910

TArrayView<TSharedPtr<int,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<int,1>_>::GetItems
          (FArrayPointer<TSharedPtr<int,1>_> *this,
          TArrayView<TSharedPtr<int,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<int,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr = (TSharedPtr<int,1> *)(this->ItemsSource->AllocatorInstance).Data
  ;
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
    pTVar4 = (TArrayView<TSharedPtr<int,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142e9f980

TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
          TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142e9f9f0

TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
GetItems(FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
        TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int>
        *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
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
    pTVar4 = (TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> *)
             (*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142e9fa60

TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FWidgetReflectorNodeBase,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142e9fad0

TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetItems
          (FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
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
    pTVar4 = (TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int>
              *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142e9fb40

TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetItems
          (FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 142ebeed0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<int,1>_>::IsSame
          (FArrayPointer<TSharedPtr<int,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142ebeee0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142ebeef0

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
IsSame(FArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142ebef00

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142ebef10

bool __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::IsSame
          (FArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *this,
          void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142ebef20

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::IsSame
          (FArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

