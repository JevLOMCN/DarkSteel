// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// Free @ 141f2fcb0

void __thiscall FBulkData::FAllocatedPtr::Free(FAllocatedPtr *this,FBulkData *param_1)

{
  FOwnedBulkDataPtr *pFVar1;
  IMappedFileRegion *pIVar2;
  IMappedFileHandle *pIVar3;
  
  pFVar1 = (this->Allocation).MemoryMappedData;
  if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    FMemory::Free(pFVar1);
    (this->Allocation).RawData = (void *)0x0;
    return;
  }
  if (pFVar1 == (FOwnedBulkDataPtr *)0x0) {
    (this->Allocation).RawData = (void *)0x0;
    return;
  }
  if (pFVar1->AllocatedData == (void *)0x0) {
    pIVar2 = pFVar1->MappedRegion;
    if (pIVar2 == (IMappedFileRegion *)0x0) {
      if (pFVar1->MappedHandle == (IMappedFileHandle *)0x0) goto LAB_141f2fd25;
    }
    else {
      (**(code **)pIVar2->_padding_)(pIVar2,1);
    }
    pIVar3 = pFVar1->MappedHandle;
    if (pIVar3 != (IMappedFileHandle *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
  }
  else {
    FMemory::Free(pFVar1->AllocatedData);
  }
LAB_141f2fd25:
  ::operator_delete(pFVar1,0x18);
  (this->Allocation).RawData = (void *)0x0;
  return;
}

// GetAllocationForWrite @ 141f32cb0

void * __thiscall
FBulkData::FAllocatedPtr::GetAllocationForWrite(FAllocatedPtr *this,FBulkData *param_1)

{
  if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    return (this->Allocation).RawData;
  }
  return (void *)0x0;
}

// GetAllocationReadOnly @ 141f32cd0

void * __thiscall
FBulkData::FAllocatedPtr::GetAllocationReadOnly(FAllocatedPtr *this,FBulkData *param_1)

{
  FOwnedBulkDataPtr *pFVar1;
  IMappedFileRegion *pIVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    return (this->Allocation).RawData;
  }
  pFVar1 = (this->Allocation).MemoryMappedData;
  if (pFVar1 == (FOwnedBulkDataPtr *)0x0) {
    return (void *)0x0;
  }
  pvVar5 = pFVar1->AllocatedData;
  if (pvVar5 == (void *)0x0) {
    pIVar2 = pFVar1->MappedRegion;
    if (pIVar2 != (IMappedFileRegion *)0x0) {
      if ((pIVar2->MappedPtr == (uchar *)0x0) || (pIVar2->MappedSize == 0)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar5 = (void *)(*pcVar3)();
          return pvVar5;
        }
      }
      return pIVar2->MappedPtr;
    }
    pvVar5 = (void *)0x0;
  }
  return pvVar5;
}

// ReallocateData @ 141f41d30

void * __thiscall
FBulkData::FAllocatedPtr::ReallocateData(FAllocatedPtr *this,FBulkData *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x40000000) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Owner->IsDataMemoryMapped()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x1a3,
                       L"Trying to reallocate a memory mapped BulkData object without freeing it first!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = FMemory::Realloc((this->Allocation).RawData,param_2,0);
  (this->Allocation).RawData = pvVar3;
  return pvVar3;
}

// SetData @ 141f4d3b0

void __thiscall
FBulkData::FAllocatedPtr::SetData(FAllocatedPtr *this,FBulkData *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Allocation).RawData == (void *)0x0) {
    (this->Allocation).RawData = param_2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Allocation.RawData == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                     ,0x1ac,L"Trying to assign a BulkData object without freeing it first!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->Allocation).RawData = param_2;
  return;
}

// SetMemoryMappedData @ 141f4d480

void __thiscall
FBulkData::FAllocatedPtr::SetMemoryMappedData
          (FAllocatedPtr *this,FBulkData *param_1,IMappedFileHandle *param_2,
          IMappedFileRegion *param_3)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FOwnedBulkDataPtr *pFVar4;
  
  if ((this->Allocation).RawData != (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocation.MemoryMappedData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                       ,0x1b3,L"Trying to assign a BulkData object without freeing it first!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FOwnedBulkDataPtr *)0x0) {
    pFVar4->AllocatedData = (void *)0x0;
    pFVar4->MappedHandle = param_2;
    pFVar4->MappedRegion = param_3;
  }
  (this->Allocation).MemoryMappedData = pFVar4;
  puVar1 = (param_1->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 | 0x40000000;
  return;
}

// StealFileMapping @ 141f4dd20

FOwnedBulkDataPtr * __thiscall
FBulkData::FAllocatedPtr::StealFileMapping(FAllocatedPtr *this,FBulkData *param_1)

{
  uint uVar1;
  FOwnedBulkDataPtr *pFVar2;
  FAllocation *pFVar3;
  
  uVar1 = *(uint *)((param_1->BulkMeta).Data + 0xc);
  if ((uVar1 >> 0x1e & 1) != 0) {
    pFVar2 = (this->Allocation).RawData;
    *(uint *)((param_1->BulkMeta).Data + 0xc) = uVar1 & 0xbfffffff;
    (this->Allocation).RawData = (void *)0x0;
    return pFVar2;
  }
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FAllocation *)0x0) {
    *pFVar3 = this->Allocation;
    pFVar3[1].RawData = (IMappedFileHandle *)0x0;
    pFVar3[2].RawData = (IMappedFileRegion *)0x0;
    (this->Allocation).RawData = (void *)0x0;
    return (FOwnedBulkDataPtr *)pFVar3;
  }
  (this->Allocation).RawData = (void *)0x0;
  return (FOwnedBulkDataPtr *)0x0;
}

// Swap @ 141f4df40

void __thiscall
FBulkData::FAllocatedPtr::Swap(FAllocatedPtr *this,FBulkData *param_1,void **param_2)

{
  uchar *puVar1;
  FOwnedBulkDataPtr *pFVar2;
  IMappedFileRegion *pIVar3;
  IMappedFileHandle *pIVar4;
  void *pvVar5;
  ulonglong _Size;
  
  if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x40000000) == 0) {
    pvVar5 = *param_2;
    *param_2 = (void *)this->Allocation;
    (this->Allocation).RawData = pvVar5;
    return;
  }
  _Size = (ulonglong)*(uint5 *)(param_1->BulkMeta).Data;
  pvVar5 = FMemory::Malloc(_Size,0);
  *param_2 = pvVar5;
  pvVar5 = FOwnedBulkDataPtr::GetPointer((this->Allocation).MemoryMappedData);
  memcpy(*param_2,pvVar5,_Size);
  pFVar2 = (this->Allocation).MemoryMappedData;
  if (pFVar2 == (FOwnedBulkDataPtr *)0x0) goto LAB_141f4e029;
  if (pFVar2->AllocatedData == (void *)0x0) {
    pIVar3 = pFVar2->MappedRegion;
    if (pIVar3 == (IMappedFileRegion *)0x0) {
      if (pFVar2->MappedHandle == (IMappedFileHandle *)0x0) goto LAB_141f4e01c;
    }
    else {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
    pIVar4 = pFVar2->MappedHandle;
    if (pIVar4 != (IMappedFileHandle *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
  }
  else {
    FMemory::Free(pFVar2->AllocatedData);
  }
LAB_141f4e01c:
  ::operator_delete(pFVar2,0x18);
LAB_141f4e029:
  (this->Allocation).RawData = (void *)0x0;
  puVar1 = (param_1->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xbfffffff;
  return;
}

