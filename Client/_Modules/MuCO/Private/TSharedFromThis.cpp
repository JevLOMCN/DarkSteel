// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// AsShared @ 14abc61c0

TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
* __thiscall
TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
::AsShared(TSharedFromThis<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
           *this,TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                 *__return_storage_ptr__)

{
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
  *pTVar5;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar6;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar7;
  bool bVar8;
  
  pTVar1 = (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar7 = (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            *)0x0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                 *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar1->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar7;
      if (iVar3 == 0) goto LAB_14abc6201;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pTVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pTVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pTVar7 = (this->WeakThis).Object;
    pTVar6 = pTVar1;
  }
LAB_14abc6201:
  if ((pTVar7 != (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                  *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
              *)(*pcVar2)();
    return pTVar5;
  }
  if ((pTVar7 == (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                  *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
              *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                  *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
              *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14abc62c0

TSharedRef<FMutableStreamableManager,1> * __thiscall
TSharedFromThis<FMutableStreamableManager,1>::AsShared
          (TSharedFromThis<FMutableStreamableManager,1> *this,
          TSharedRef<FMutableStreamableManager,1> *__return_storage_ptr__)

{
  FMutableStreamableManager *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FMutableStreamableManager,1> *pTVar5;
  FMutableStreamableManager *pFVar6;
  FMutableStreamableManager *pFVar7;
  bool bVar8;
  
  pFVar1 = (FMutableStreamableManager *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FMutableStreamableManager *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMutableStreamableManager *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14abc6301;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_14abc6301:
  if ((pFVar7 != (FMutableStreamableManager *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMutableStreamableManager,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FMutableStreamableManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMutableStreamableManager,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMutableStreamableManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMutableStreamableManager,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

