// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 12

// TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1><TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_> @ 146b92ae0

TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>::
TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1><TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *this,
          TRawPtrProxy<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray_PEAVUTranslationUnit__V__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_PEAVUTranslationUnit__V__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FInternationalizationArchive,1><FInternationalizationArchive> @ 146b92b50

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FInternationalizationArchive,1> * __thiscall
TSharedPtr<FInternationalizationArchive,1>::
TSharedPtr<FInternationalizationArchive,1><FInternationalizationArchive>
          (TSharedPtr<FInternationalizationArchive,1> *this,
          TRawPtrProxy<FInternationalizationArchive> *param_1)

{
  FInternationalizationArchive *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFInternationalizationArchive__U__DefaultDeleter_VFInternationalizationArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FInternationalizationManifest,1><FInternationalizationManifest> @ 146b92bc0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FInternationalizationManifest,1> * __thiscall
TSharedPtr<FInternationalizationManifest,1>::
TSharedPtr<FInternationalizationManifest,1><FInternationalizationManifest>
          (TSharedPtr<FInternationalizationManifest,1> *this,
          TRawPtrProxy<FInternationalizationManifest> *param_1)

{
  FInternationalizationManifest *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFInternationalizationManifest__U__DefaultDeleter_VFInternationalizationManifest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FTranslationPickerEditInputProcessor,1><FTranslationPickerEditInputProcessor> @ 146b92d30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerEditInputProcessor,1> * __thiscall
TSharedPtr<FTranslationPickerEditInputProcessor,1>::
TSharedPtr<FTranslationPickerEditInputProcessor,1><FTranslationPickerEditInputProcessor>
          (TSharedPtr<FTranslationPickerEditInputProcessor,1> *this,
          TSharedRef<FTranslationPickerEditInputProcessor,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<IInputProcessor,1><FTranslationPickerEditInputProcessor> @ 146b92d60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IInputProcessor,1> * __thiscall
TSharedPtr<IInputProcessor,1>::TSharedPtr<IInputProcessor,1><FTranslationPickerEditInputProcessor>
          (TSharedPtr<IInputProcessor,1> *this,
          TSharedPtr<FTranslationPickerEditInputProcessor,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (IInputProcessor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator=<FTranslationPickerSettingsManager> @ 146b92e90

TSharedPtr<FTranslationPickerSettingsManager,1> * __thiscall
TSharedPtr<FTranslationPickerSettingsManager,1>::operator=<FTranslationPickerSettingsManager>
          (TSharedPtr<FTranslationPickerSettingsManager,1> *this,
          TRawPtrProxy<FTranslationPickerSettingsManager> *param_1)

{
  FTranslationPickerSettingsManager *pFVar1;
  TSharedPtr<FTranslationPickerSettingsManager,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTranslationPickerSettingsManager__U__DefaultDeleter_VFTranslationPickerSettingsManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FTranslationPickerSettingsManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 146b99a00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerTextItem,1> * __thiscall
TSharedPtr<FTranslationPickerTextItem,1>::operator=
          (TSharedPtr<FTranslationPickerTextItem,1> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTranslationPickerTextItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 146b99a50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerEditInputProcessor,1> * __thiscall
TSharedPtr<FTranslationPickerEditInputProcessor,1>::operator=
          (TSharedPtr<FTranslationPickerEditInputProcessor,1> *this,
          TSharedPtr<FTranslationPickerEditInputProcessor,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FTranslationPickerEditInputProcessor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 146b99b10

/* WARNING: Enum "Type": Some values do not have unique names */

FTranslationPickerTextItem * __thiscall
TSharedPtr<FTranslationPickerTextItem,1>::operator->(TSharedPtr<FTranslationPickerTextItem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTranslationPickerTextItem *pFVar3;
  
  if (this->Object != (FTranslationPickerTextItem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTranslationPickerTextItem *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146b99b60

TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>::operator->
          (TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// ToSharedRef @ 146bc1f30

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedRef<FInternationalizationArchive,1> * __thiscall
TSharedPtr<FInternationalizationArchive,1>::ToSharedRef
          (TSharedPtr<FInternationalizationArchive,1> *this,
          TSharedRef<FInternationalizationArchive,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FInternationalizationArchive,1> *pTVar4;
  
  if (this->Object == (FInternationalizationArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternationalizationArchive,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FInternationalizationArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternationalizationArchive,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 146bc1fd0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedRef<FInternationalizationManifest,1> * __thiscall
TSharedPtr<FInternationalizationManifest,1>::ToSharedRef
          (TSharedPtr<FInternationalizationManifest,1> *this,
          TSharedRef<FInternationalizationManifest,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FInternationalizationManifest,1> *pTVar4;
  
  if (this->Object == (FInternationalizationManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternationalizationManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FInternationalizationManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternationalizationManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

