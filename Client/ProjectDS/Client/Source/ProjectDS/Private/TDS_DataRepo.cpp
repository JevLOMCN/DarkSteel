// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// Init @ 14b5f1be0

bool __thiscall TDS_DataRepo<FDS_RaidPartyRepo>::Init(TDS_DataRepo<FDS_RaidPartyRepo> *this)

{
  int *piVar1;
  int iVar2;
  UDS_DataManager *pUVar3;
  
  pUVar3 = UDS_DataManager::GetInst();
  if (pUVar3 == (UDS_DataManager *)0x0) {
    return false;
  }
  iVar2 = (pUVar3->RepoArray).ArrayNum;
  piVar1 = &(pUVar3->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar3->RepoArray).AllocatorInstance,piVar1);
  }
  (pUVar3->RepoArray).ArrayNum = iVar2 + 1;
  *(TDS_DataRepo<FDS_RaidPartyRepo> **)
   ((pUVar3->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8) = this;
  return true;
}

// Init @ 14b85b6d0

bool __thiscall TDS_DataRepo<FDS_AuthData>::Init(TDS_DataRepo<FDS_AuthData> *this)

{
  int *piVar1;
  int iVar2;
  UDS_DataManager *pUVar3;
  
  pUVar3 = UDS_DataManager::GetInst();
  if (pUVar3 == (UDS_DataManager *)0x0) {
    return false;
  }
  iVar2 = (pUVar3->RepoArray).ArrayNum;
  piVar1 = &(pUVar3->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar3->RepoArray).AllocatorInstance,piVar1);
  }
  (pUVar3->RepoArray).ArrayNum = iVar2 + 1;
  *(TDS_DataRepo<FDS_AuthData> **)((pUVar3->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8)
       = this;
  return true;
}

// Init @ 14b8a56c0

bool __thiscall TDS_DataRepo<FDS_PlayerRepo>::Init(TDS_DataRepo<FDS_PlayerRepo> *this)

{
  int *piVar1;
  int iVar2;
  UDS_DataManager *pUVar3;
  
  pUVar3 = UDS_DataManager::GetInst();
  if (pUVar3 == (UDS_DataManager *)0x0) {
    return false;
  }
  iVar2 = (pUVar3->RepoArray).ArrayNum;
  piVar1 = &(pUVar3->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar3->RepoArray).AllocatorInstance,piVar1);
  }
  (pUVar3->RepoArray).ArrayNum = iVar2 + 1;
  *(TDS_DataRepo<FDS_PlayerRepo> **)
   ((pUVar3->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8) = this;
  return true;
}

// Init @ 14b8a5860

bool __thiscall TDS_DataRepo<FDS_UIData>::Init(TDS_DataRepo<FDS_UIData> *this)

{
  int *piVar1;
  int iVar2;
  UDS_DataManager *pUVar3;
  
  pUVar3 = UDS_DataManager::GetInst();
  if (pUVar3 == (UDS_DataManager *)0x0) {
    return false;
  }
  iVar2 = (pUVar3->RepoArray).ArrayNum;
  piVar1 = &(pUVar3->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar3->RepoArray).AllocatorInstance,piVar1);
  }
  (pUVar3->RepoArray).ArrayNum = iVar2 + 1;
  *(TDS_DataRepo<FDS_UIData> **)((pUVar3->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8) =
       this;
  return true;
}

// Init @ 14b8a5920

bool __thiscall TDS_DataRepo<FDS_PartyRepo>::Init(TDS_DataRepo<FDS_PartyRepo> *this)

{
  int *piVar1;
  int iVar2;
  UDS_DataManager *pUVar3;
  
  pUVar3 = UDS_DataManager::GetInst();
  if (pUVar3 == (UDS_DataManager *)0x0) {
    return false;
  }
  iVar2 = (pUVar3->RepoArray).ArrayNum;
  piVar1 = &(pUVar3->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar3->RepoArray).AllocatorInstance,piVar1);
  }
  (pUVar3->RepoArray).ArrayNum = iVar2 + 1;
  *(TDS_DataRepo<FDS_PartyRepo> **)
   ((pUVar3->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8) = this;
  return true;
}

