// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 6

// FHandle @ 14abbc450

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle
::FHandle(FHandle *this,FHandle *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar5;
  undefined4 uVar6;
  atomic<int> aVar7;
  FEntry *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar10;
  
  this->Id = 0xffffffff;
  (this->WeakRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Id = param_1->Id;
  pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar5 = (param_1->WeakRegistry).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = *(undefined4 *)&(this->WeakRegistry).Object;
  pTVar9 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  (this->WeakRegistry).Object = pTVar5;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1,in_R8,in_R9,uVar6);
    }
  }
  pTVar4 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar9 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14abbc4e7;
      LOCK();
      aVar7 = pTVar4->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar10);
    pTVar5 = (this->WeakRegistry).Object;
    pTVar9 = pTVar4;
    if (pTVar5 != (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar5->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                              *)&pTVar5->Entries,uVar3);
      pFVar8->RefCount = pFVar8->RefCount + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14abbc4e7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// ~FHandle @ 14abbecc0

void __thiscall
TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
::FHandle::~FHandle(FHandle *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar4;
  atomic<int> aVar5;
  uint uVar6;
  FEntry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uint local_res8 [2];
  
  pTVar8 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14abbecf0;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
    pTVar4 = (this->WeakRegistry).Object;
    if (pTVar4 != (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar7->RefCount = pFVar7->RefCount - 1;
      if (pFVar7->RefCount == 0) {
        if (*(int *)&(pTVar4->KeyIndex).field_0x8 != *(int *)&(pTVar4->KeyIndex).field_0x34) {
          uVar6 = GetTypeHash<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle>
                            ((pFVar7->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar4->KeyIndex,uVar6,&pFVar7->KeyContainer);
        }
        local_res8[0] = uVar3;
        if (*(int *)&(pTVar4->Entries).field_0x8 != *(int *)&(pTVar4->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar4->Entries,uVar3,local_res8);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14abbecf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  return;
}

// operator= @ 14abc0cc0

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
FHandle::operator=(FHandle *this,FHandle *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar4;
  undefined4 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> aVar7;
  FEntry *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar10;
  
  this->Id = param_1->Id;
  pTVar9 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar4 = (param_1->WeakRegistry).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = *(undefined4 *)&(this->WeakRegistry).Object;
  pTVar6 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  (this->WeakRegistry).Object = pTVar4;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar9;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1,in_R8,in_R9,uVar5);
    }
  }
  pTVar9 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14abc0d46;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar10);
    pTVar4 = (this->WeakRegistry).Object;
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar8->RefCount = pFVar8->RefCount + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14abc0d46:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// operator= @ 14ac0d510

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
FHandle::operator=(FHandle *this,FHandle *param_1)

{
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_18 [2];
  
  pTVar1 = &param_1->WeakRegistry;
  this->Id = param_1->Id;
  param_1->Id = 0xffffffff;
  pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  (this->WeakRegistry).Object = pTVar5;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar1 != (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                 *)local_18) {
    pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
    pTVar1->Object =
         (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          *)0x0;
    (param_1->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

// operator= @ 14ac0d5c0

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::FHandle::operator=(FHandle *this,FHandle *param_1)

{
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_18 [2];
  
  pTVar1 = &param_1->WeakRegistry;
  this->Id = param_1->Id;
  param_1->Id = 0xffffffff;
  pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  (this->WeakRegistry).Object = pTVar5;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar1 != (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                 *)local_18) {
    pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
    pTVar1->Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
          *)0x0;
    (param_1->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

// operator= @ 14ac0d670

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle
::operator=(FHandle *this,FHandle *param_1)

{
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
  *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_18 [2];
  
  pTVar1 = &param_1->WeakRegistry;
  this->Id = param_1->Id;
  param_1->Id = 0xffffffff;
  pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->WeakRegistry).WeakReferenceCount.ReferenceController;
  (this->WeakRegistry).Object = pTVar5;
  (this->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar1 != (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                 *)local_18) {
    pTVar4 = (param_1->WeakRegistry).WeakReferenceCount.ReferenceController;
    pTVar1->Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          *)0x0;
    (param_1->WeakRegistry).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

