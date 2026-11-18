// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// Get @ 1432d1560

IChunkDataAccess * __thiscall
BuildPatchServices::FFakeChunkStore::Get(FFakeChunkStore *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar10;
  IChunkDataAccess *pIVar11;
  longlong lVar12;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar11 = (IChunkDataAccess *)0x0;
    uVar9 = CityHash64((char *)param_1,0x10);
    iVar8 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                        *)&this->Store,(uint)uVar9,param_1);
    if (iVar8 != -1) {
      pTVar10 = TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                ::FindChecked((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                               *)&this->Store,param_1);
      pIVar11 = pTVar10->Ptr;
    }
    dVar4 = FStatsCollector::GetSeconds();
    iVar8 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar8 + 1;
    lVar3 = this->_padding_;
    lVar12 = (longlong)iVar8 * 0x20;
    *(double *)(lVar12 + lVar3) = dVar4;
    *(IChunkDataAccess **)(lVar12 + 8 + lVar3) = pIVar11;
    uVar5 = param_1->B;
    uVar6 = param_1->C;
    uVar7 = param_1->D;
    puVar2 = (uint *)(lVar12 + 0x10 + lVar3);
    *puVar2 = param_1->A;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pIVar11;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSize @ 1432d94c0

int __thiscall BuildPatchServices::FFakeChunkStore::GetSize(FFakeChunkStore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (this->StoreMax - *(int *)&(this->Store).field_0x8) + *(int *)&(this->Store).field_0x34;
    dVar5 = FStatsCollector::GetSeconds();
    iVar3 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar3 + 1;
    lVar2 = this->_padding_;
    *(double *)(lVar2 + (longlong)iVar3 * 0x10) = dVar5;
    *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10) = iVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Put @ 1432e2810

void __thiscall
BuildPatchServices::FFakeChunkStore::Put
          (FFakeChunkStore *this,FGuid *param_1,
          TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
          param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  IChunkDataAccess IVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FGuid *local_28;
  IChunkDataAccess *local_20;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = param_1;
    local_20 = param_2.Ptr;
    TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_&&>_>
              ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                *)&this->Store,
               (TPairInitializer<FGuid_const_&,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_&&>
                *)&stack0x00000008,(bool *)&local_28);
    dVar5 = FStatsCollector::GetSeconds();
    iVar9 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar3 = this->_padding_;
    *(double *)(lVar3 + (longlong)iVar9 * 0x18) = dVar5;
    uVar6 = param_1->B;
    uVar7 = param_1->C;
    uVar8 = param_1->D;
    puVar2 = (uint *)(lVar3 + 8 + (longlong)iVar9 * 0x18);
    *puVar2 = param_1->A;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    IVar4 = *param_2.Ptr;
    if (IVar4 != (IChunkDataAccess)0x0) {
      (*(code *)**(undefined8 **)IVar4)(IVar4,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Remove @ 1432e92a0

TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
 __thiscall BuildPatchServices::FFakeChunkStore::Remove(FFakeChunkStore *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FGuid *pFVar11;
  FGuid *in_R8;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->A = 0;
    param_1->B = 0;
    uVar10 = CityHash64((char *)in_R8,0x10);
    iVar9 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                        *)&this->Store,(uint)uVar10,in_R8);
    if (iVar9 != -1) {
      pFVar11 = (FGuid *)TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                         ::FindChecked((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                                        *)&this->Store,in_R8);
      if (param_1 != pFVar11) {
        puVar3 = *(undefined8 **)param_1;
        uVar6 = pFVar11->B;
        param_1->A = pFVar11->A;
        param_1->B = uVar6;
        *(IChunkDataAccess **)pFVar11 = (IChunkDataAccess *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      if (*(int *)&(this->Store).field_0x8 != *(int *)&(this->Store).field_0x34) {
        uVar10 = CityHash64((char *)in_R8,0x10);
        TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                             *)&this->Store,(uint)uVar10,in_R8);
      }
    }
    dVar5 = FStatsCollector::GetSeconds();
    iVar9 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar4 = this->_padding_;
    *(double *)(lVar4 + (longlong)iVar9 * 0x18) = dVar5;
    uVar6 = in_R8->B;
    uVar7 = in_R8->C;
    uVar8 = in_R8->D;
    puVar2 = (uint *)(lVar4 + 8 + (longlong)iVar9 * 0x18);
    *puVar2 = in_R8->A;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
            )(IChunkDataAccess *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

