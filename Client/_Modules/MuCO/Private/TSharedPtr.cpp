// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 13

// operator= @ 14abc0200

TSharedPtr<FModelStreamableBulkData,1> * __thiscall
TSharedPtr<FModelStreamableBulkData,1>::operator=
          (TSharedPtr<FModelStreamableBulkData,1> *this,
          TSharedPtr<FModelStreamableBulkData,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FModelStreamableBulkData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14abc0240

TSharedPtr<UE::Mutable::Private::FModel,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FModel,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FModel,1> *this,
          TSharedPtr<UE::Mutable::Private::FModel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FModel *pFVar2;
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

// operator-> @ 14abc1b10

FExtensionData * __thiscall
TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FExtensionData *pFVar3;
  
  if (this->Object != (FExtensionData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FExtensionData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14abc1b60

FModelStreamableBulkData * __thiscall
TSharedPtr<FModelStreamableBulkData,1>::operator->(TSharedPtr<FModelStreamableBulkData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FModelStreamableBulkData *pFVar3;
  
  if (this->Object != (FModelStreamableBulkData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FModelStreamableBulkData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14abc1bb0

TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
* __thiscall
TSharedPtr<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
::operator->(TSharedPtr<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
             *this)

{
  code *pcVar1;
  bool bVar2;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar3;
  
  if (this->Object !=
      (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
       *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14abc1c00

FMutableUpdateImageContext * __thiscall
TSharedPtr<FMutableUpdateImageContext,1>::operator->(TSharedPtr<FMutableUpdateImageContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMutableUpdateImageContext *pFVar3;
  
  if (this->Object != (FMutableUpdateImageContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMutableUpdateImageContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 14ac0d290

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator=
          (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *this,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14ac0d2d0

TSharedPtr<FMutableImageOperationData,1> * __thiscall
TSharedPtr<FMutableImageOperationData,1>::operator=
          (TSharedPtr<FMutableImageOperationData,1> *this,FNullTag *param_1)

{
  TSharedPtr<FMutableImageOperationData,1> local_18;
  
  local_18.Object = (FMutableImageOperationData *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FMutableImageOperationData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14ac0d320

TSharedPtr<FArchive,1> * __thiscall
TSharedPtr<FArchive,1>::operator=(TSharedPtr<FArchive,1> *this,TSharedPtr<FArchive,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14ac0e0e0

FSystem * __thiscall
TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->
          (TSharedPtr<UE::Mutable::Private::FSystem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSystem *pFVar3;
  
  if (this->Object != (FSystem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSystem *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ac0e130

FUnrealMutableModelBulkReader * __thiscall
TSharedPtr<FUnrealMutableModelBulkReader,1>::operator->
          (TSharedPtr<FUnrealMutableModelBulkReader,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUnrealMutableModelBulkReader *pFVar3;
  
  if (this->Object != (FUnrealMutableModelBulkReader *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUnrealMutableModelBulkReader *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ac0e180

FUpdateContextPrivate * __thiscall
TSharedPtr<FUpdateContextPrivate,1>::operator->(TSharedPtr<FUpdateContextPrivate,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUpdateContextPrivate *pFVar3;
  
  if (this->Object != (FUpdateContextPrivate *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUpdateContextPrivate *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ac50db0

FMeshConversionContext * __thiscall
TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshConversionContext *pFVar3;
  
  if (*(longlong *)this != 0) {
    return *(FMeshConversionContext **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshConversionContext *)(*pcVar1)();
    return pFVar3;
  }
  return *(FMeshConversionContext **)this;
}

