// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 8

// GetItems @ 142fd3500

TArrayView<TSharedPtr<FTestData,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTestData,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FTestData,1>_> *this,
          TArrayView<TSharedPtr<FTestData,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FTestData,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FTestData,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FTestData,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 142fd3570

TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetItems
          (void *this,
          TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *pTVar4;
  
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<ESelectionMode::Type,1> *)**(undefined8 **)((longlong)this + 8);
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
    pTVar4 = (TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 142fe5050

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTestData,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FTestData,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 142fe5060

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::IsSame
          (void *this,void *param_1)

{
  return param_1 == *(void **)((longlong)this + 8);
}

// GetItems @ 1430c96b0

TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetItems
          (FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FTextStyles::FFontFamily,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetItems @ 1430c9720

TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::GetItems
          (FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
          TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *__return_storage_ptr__
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *pTVar4;
  
  iVar1 = this->ItemsSource->ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(this->ItemsSource->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSame @ 1430d5000

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::IsSame
          (FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

// IsSame @ 1430d5010

bool __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::IsSame
          (FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,void *param_1)

{
  return param_1 == this->ItemsSource;
}

