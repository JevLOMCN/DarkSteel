// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 9

// ~FHandle @ 14a977f80

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
FHandle::~FHandle(FHandle *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
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
        goto LAB_14a977fb0;
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
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar7->RefCount = pFVar7->RefCount - 1;
      if (pFVar7->RefCount == 0) {
        if (*(int *)&(pTVar4->KeyIndex).field_0x8 != *(int *)&(pTVar4->KeyIndex).field_0x34) {
          uVar6 = UE::Mutable::Private::GetTypeHash((pFVar7->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar4->KeyIndex,uVar6,&pFVar7->KeyContainer);
        }
        local_res8[0] = uVar3;
        if (*(int *)&(pTVar4->Entries).field_0x8 != *(int *)&(pTVar4->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar4->Entries,uVar3,local_res8);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14a977fb0:
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

// ~FHandle @ 14a978090

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::FHandle::~FHandle(FHandle *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
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
        goto LAB_14a9780c0;
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
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar7->RefCount = pFVar7->RefCount - 1;
      if (pFVar7->RefCount == 0) {
        if (*(int *)&(pTVar4->KeyIndex).field_0x8 != *(int *)&(pTVar4->KeyIndex).field_0x34) {
          uVar6 = UE::Mutable::Private::GetTypeHash((pFVar7->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar4->KeyIndex,uVar6,&pFVar7->KeyContainer);
        }
        local_res8[0] = uVar3;
        if (*(int *)&(pTVar4->Entries).field_0x8 != *(int *)&(pTVar4->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar4->Entries,uVar3,local_res8);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14a9780c0:
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

// ~FHandle @ 14a9781a0

void __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle
::~FHandle(FHandle *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
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
        goto LAB_14a9781d0;
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
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar7 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar7->RefCount = pFVar7->RefCount - 1;
      if (pFVar7->RefCount == 0) {
        if (*(int *)&(pTVar4->KeyIndex).field_0x8 != *(int *)&(pTVar4->KeyIndex).field_0x34) {
          uVar6 = UE::Mutable::Private::GetTypeHash((pFVar7->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar4->KeyIndex,uVar6,&pFVar7->KeyContainer);
        }
        local_res8[0] = uVar3;
        if (*(int *)&(pTVar4->Entries).field_0x8 != *(int *)&(pTVar4->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar4->Entries,uVar3,local_res8);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14a9781d0:
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

// operator= @ 14a978d30

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::FHandle::operator=(FHandle *this,FHandle *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
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
        goto LAB_14a978db6;
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
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar8->RefCount = pFVar8->RefCount + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14a978db6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// operator= @ 14a978e30

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle
::operator=(FHandle *this,FHandle *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
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
        goto LAB_14a978eb6;
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
    if (pTVar4 != (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar4->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                              *)&pTVar4->Entries,uVar3);
      pFVar8->RefCount = pFVar8->RefCount + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14a978eb6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// FHandle @ 14aa92910

FHandle * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
FHandle::FHandle(FHandle *this,FHandle *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
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
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14aa929a7;
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
    if (pTVar5 != (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                   *)0x0) {
      uVar3 = this->Id;
      lpCriticalSection = &pTVar5->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                              *)&pTVar5->Entries,uVar3);
      pFVar8->RefCount = pFVar8->RefCount + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
LAB_14aa929a7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// GetKey @ 14ab76020

FGeneratedImageKey * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
FHandle::GetKey(FHandle *this)

{
  FGeneratedImageKey *pFVar1;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar2;
  int iVar3;
  int iVar4;
  FEntry *pFVar5;
  FGeneratedImageKey *pFVar6;
  FGeneratedImageKey *pFVar7;
  bool bVar8;
  
  pFVar1 = (FGeneratedImageKey *)(this->WeakRegistry).WeakReferenceCount.ReferenceController;
  pFVar7 = (FGeneratedImageKey *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FGeneratedImageKey *)0x0) {
    iVar3 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14ab76051;
      LOCK();
      iVar4 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pTVar2 = (this->WeakRegistry).Object;
    pFVar6 = pFVar1;
    if (pTVar2 != (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                   *)0x0) {
      pFVar5 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                              *)&pTVar2->Entries,this->Id);
      pFVar7 = (pFVar5->KeyContainer).Key.Object;
    }
  }
LAB_14ab76051:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar7;
}

// GetKey @ 14ab76090

FGeneratedMaterialKey * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
::FHandle::GetKey(FHandle *this)

{
  FGeneratedMaterialKey *pFVar1;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar2;
  int iVar3;
  int iVar4;
  FEntry *pFVar5;
  FGeneratedMaterialKey *pFVar6;
  FGeneratedMaterialKey *pFVar7;
  bool bVar8;
  
  pFVar1 = (FGeneratedMaterialKey *)(this->WeakRegistry).WeakReferenceCount.ReferenceController;
  pFVar7 = (FGeneratedMaterialKey *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FGeneratedMaterialKey *)0x0) {
    iVar3 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14ab760c1;
      LOCK();
      iVar4 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pTVar2 = (this->WeakRegistry).Object;
    pFVar6 = pFVar1;
    if (pTVar2 != (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                   *)0x0) {
      pFVar5 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                              *)&pTVar2->Entries,this->Id);
      pFVar7 = (pFVar5->KeyContainer).Key.Object;
    }
  }
LAB_14ab760c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar7;
}

// GetKey @ 14ab76100

FGeneratedMeshKey * __thiscall
TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle
::GetKey(FHandle *this)

{
  FGeneratedMeshKey *pFVar1;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar2;
  int iVar3;
  int iVar4;
  FEntry *pFVar5;
  FGeneratedMeshKey *pFVar6;
  FGeneratedMeshKey *pFVar7;
  bool bVar8;
  
  pFVar1 = (FGeneratedMeshKey *)(this->WeakRegistry).WeakReferenceCount.ReferenceController;
  pFVar7 = (FGeneratedMeshKey *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FGeneratedMeshKey *)0x0) {
    iVar3 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14ab76131;
      LOCK();
      iVar4 = (int)(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&(pFVar1->ParameterValuesBlob).AllocatorInstance._padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pTVar2 = (this->WeakRegistry).Object;
    pFVar6 = pFVar1;
    if (pTVar2 != (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
      pFVar5 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
               ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                              *)&pTVar2->Entries,this->Id);
      pFVar7 = (pFVar5->KeyContainer).Key.Object;
    }
  }
LAB_14ab76131:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar7;
}

