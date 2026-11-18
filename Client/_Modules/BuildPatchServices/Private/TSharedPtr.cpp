// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest> @ 1431a8f80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __thiscall
TSharedPtr<FBuildPatchAppManifest,1>::TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
          (TSharedPtr<FBuildPatchAppManifest,1> *this,TRawPtrProxy<FBuildPatchAppManifest> *param_1)

{
  FBuildPatchAppManifest *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBuildPatchAppManifest__U__DefaultDeleter_VFBuildPatchAppManifest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FBuildPatchCustomField> @ 1431a9130

TSharedPtr<IManifestField,1> * __thiscall
TSharedPtr<IManifestField,1>::operator=<FBuildPatchCustomField>
          (TSharedPtr<IManifestField,1> *this,TRawPtrProxy<FBuildPatchCustomField> *param_1)

{
  FBuildPatchCustomField *pFVar1;
  TSharedPtr<IManifestField,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IManifestField *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBuildPatchCustomField__U__DefaultDeleter_VFBuildPatchCustomField___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IManifestField *)pFVar1;
    local_18.Object = (IManifestField *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator*<FBuildPatchAppManifest> @ 1431a9590

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
TSharedPtr<FBuildPatchAppManifest,1>::operator*<FBuildPatchAppManifest>
          (TSharedPtr<FBuildPatchAppManifest,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FBuildPatchAppManifest *pFVar3;
  
  if (this->Object != (FBuildPatchAppManifest *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBuildPatchAppManifest *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<BuildPatchServices::FDataMessage,1><BuildPatchServices::FDataMessage> @ 1431fff50

TSharedPtr<BuildPatchServices::FDataMessage,1> * __thiscall
TSharedPtr<BuildPatchServices::FDataMessage,1>::
TSharedPtr<BuildPatchServices::FDataMessage,1><BuildPatchServices::FDataMessage>
          (TSharedPtr<BuildPatchServices::FDataMessage,1> *this,
          TRawPtrProxy<BuildPatchServices::FDataMessage> *param_1)

{
  FDataMessage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDataMessage_BuildPatchServices__U__DefaultDeleter_UFDataMessage_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 143229780

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __thiscall
TSharedPtr<FBuildPatchAppManifest,1>::operator=
          (TSharedPtr<FBuildPatchAppManifest,1> *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FBuildPatchAppManifest *pFVar2;
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

// operator-> @ 14322bc70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
TSharedPtr<FBuildPatchAppManifest,1>::operator->(TSharedPtr<FBuildPatchAppManifest,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FBuildPatchAppManifest *pFVar3;
  
  if (this->Object != (FBuildPatchAppManifest *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBuildPatchAppManifest *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14326ae60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<FBuildPatchAppManifest,1> * __thiscall
TSharedPtr<FBuildPatchAppManifest,1>::ToSharedRef
          (TSharedPtr<FBuildPatchAppManifest,1> *this,
          TSharedRef<FBuildPatchAppManifest,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar4;
  
  if (this->Object == (FBuildPatchAppManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FBuildPatchAppManifest,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FBuildPatchAppManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FBuildPatchAppManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14326af00

TSharedRef<IBuildManifest,1> * __thiscall
TSharedPtr<IBuildManifest,1>::ToSharedRef
          (TSharedPtr<IBuildManifest,1> *this,TSharedRef<IBuildManifest,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<IBuildManifest,1> *pTVar4;
  
  if (this->Object == (IBuildManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<IBuildManifest,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (IBuildManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<IBuildManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IManifestField,1><BuildPatchServices::FMockManifestField> @ 143270b30

TSharedPtr<IManifestField,1> * __thiscall
TSharedPtr<IManifestField,1>::TSharedPtr<IManifestField,1><BuildPatchServices::FMockManifestField>
          (TSharedPtr<IManifestField,1> *this,
          TRawPtrProxy<BuildPatchServices::FMockManifestField> *param_1)

{
  FMockManifestField *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IManifestField *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockManifestField_BuildPatchServices__U__DefaultDeleter_VFMockManifestField_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<BuildPatchServices::FMockManifest> @ 143270ba0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<BuildPatchServices::FMockManifest,1> * __thiscall
TSharedPtr<BuildPatchServices::FMockManifest,1>::operator=<BuildPatchServices::FMockManifest>
          (TSharedPtr<BuildPatchServices::FMockManifest,1> *this,
          TRawPtrProxy<BuildPatchServices::FMockManifest> *param_1)

{
  FMockManifest *pFVar1;
  TSharedPtr<BuildPatchServices::FMockManifest,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockManifest_BuildPatchServices__U__DefaultDeleter_VFMockManifest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FMockManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// ToSharedRef @ 1432f4580

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<BuildPatchServices::FMockManifest,1> * __thiscall
TSharedPtr<BuildPatchServices::FMockManifest,1>::ToSharedRef
          (TSharedPtr<BuildPatchServices::FMockManifest,1> *this,
          TSharedRef<BuildPatchServices::FMockManifest,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<BuildPatchServices::FMockManifest,1> *pTVar4;
  
  if (this->Object == (FMockManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<BuildPatchServices::FMockManifest,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FMockManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<BuildPatchServices::FMockManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator-> @ 1432fded0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FMockManifest * __thiscall
TSharedPtr<BuildPatchServices::FMockManifest,1>::operator->
          (TSharedPtr<BuildPatchServices::FMockManifest,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMockManifest *pFVar3;
  
  if (this->Object != (FMockManifest *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMockManifest *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

