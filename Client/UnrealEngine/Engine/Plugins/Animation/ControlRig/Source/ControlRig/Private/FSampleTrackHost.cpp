// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 23

// ~FSampleTrackHost @ 14a2262a0

void __thiscall FSampleTrackHost::~FSampleTrackHost(FSampleTrackHost *this)

{
  FSampleTrackContainer *this_00;
  
  this->_padding_ = (longlong)&___7FSampleTrackHost__6B_;
  this_00 = (this->Container).Ptr;
  if (this_00 != (FSampleTrackContainer *)0x0) {
    FSampleTrackContainer::~FSampleTrackContainer(this_00);
    ::operator_delete(this_00,0x98);
    return;
  }
  return;
}

// Identical @ 14a2700c0

bool __thiscall
FSampleTrackHost::Identical(FSampleTrackHost *this,FSampleTrackHost *param_1,uint param_2)

{
  return false;
}

// StaticStruct @ 14a37b470

UScriptStruct * __cdecl FSampleTrackHost::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampleTrackHost,(UObject *)pUVar1,
                         L"SampleTrackHost");
  }
  return Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton;
}

// Reset @ 14a37b4d0

void __thiscall FSampleTrackHost::Reset(FSampleTrackHost *this)

{
  FSampleTrackContainer::Reset((this->Container).Ptr);
  return;
}

// Compact @ 14a37b4e0

void __thiscall FSampleTrackHost::Compact(FSampleTrackHost *this)

{
  FSampleTrackContainer::Compact((this->Container).Ptr,__real_38d1b717);
  return;
}

// Serialize @ 14a37b510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSampleTrackHost::Serialize(FSampleTrackHost *this,FArchive *param_1)

{
  TUniquePtr<FSampleTrackContainer,TDefaultDelete<FSampleTrackContainer>_> *this_00;
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong *plVar6;
  code *pcVar7;
  UScriptStruct *pUVar8;
  bool bVar9;
  FSampleTrackContainer *pFVar10;
  UPackage *pUVar11;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar12;
  FSampleTrackContainer *pFVar13;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  TDefaultDelete<FSampleTrackContainer> local_1d8 [16];
  FStructuredArchiveFromArchive local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  this_00 = &this->Container;
  pFVar13 = (FSampleTrackContainer *)0x0;
  if (this_00->Ptr == (FSampleTrackContainer *)0x0) {
    pFVar10 = ::operator_new(0x98);
    if (pFVar10 != (FSampleTrackContainer *)0x0) {
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      *(undefined8 *)&pFVar10->NameToIndex = 0;
      *(undefined8 *)&(pFVar10->NameToIndex).field_0x8 = 0;
      *(undefined8 *)&(pFVar10->NameToIndex).field_0x20 = 0;
      *(undefined4 *)&(pFVar10->NameToIndex).field_0x28 = 0;
      *(undefined4 *)&(pFVar10->NameToIndex).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar10->NameToIndex).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar10->NameToIndex).field_0x34 = 0;
      *(undefined8 *)&(pFVar10->NameToIndex).field_0x40 = 0;
      *(undefined4 *)&(pFVar10->NameToIndex).field_0x48 = 0;
      (pFVar10->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Tracks).ArrayNum = 0;
      (pFVar10->Tracks).ArrayMax = 0;
      pFVar10->bForceToUseCompression = false;
      FSampleTrackIndex::MakeSingleton(&pFVar10->TimeSampleTrackIndex);
      pFVar13 = pFVar10;
    }
    if ((TDefaultDelete<FSampleTrackContainer> *)this_00 == local_1d8) {
      if (pFVar13 != (FSampleTrackContainer *)0x0) {
        FVar3 = (pFVar13->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
        if (FVar3 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)FVar3);
        }
        DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
                  ((TSharedPtr<FSampleTrackBase,1> *)(pFVar13->Tracks).AllocatorInstance.Data,
                   (pFVar13->Tracks).ArrayNum);
        pFVar4 = (pFVar13->Tracks).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        *(undefined4 *)&(pFVar13->NameToIndex).field_0x48 = 0;
        pvVar5 = *(void **)&(pFVar13->NameToIndex).field_0x40;
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar13->NameToIndex);
        plVar6 = (longlong *)pFVar13->_padding_;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        ::operator_delete(pFVar13,0x98);
      }
    }
    else {
      pFVar10 = this_00->Ptr;
      this_00->Ptr = pFVar13;
      TDefaultDelete<FSampleTrackContainer>::operator()
                ((TDefaultDelete<FSampleTrackContainer> *)this_00,pFVar10);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampleTrackHost,(UObject *)pUVar11,
                         L"SampleTrackHost");
  }
  pUVar8 = Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton;
  pcVar7 = *(code **)((Z_Registration_Info_UScriptStruct_FSampleTrackHost.OuterSingleton)->_padding_
                     + 0x2e0);
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1c8,param_1);
  FVar12 = FStructuredArchiveFromArchive::GetSlot(this_01);
  local_1e0 = 0;
  local_1e8 = 0;
  (*pcVar7)(pUVar8,*(undefined8 *)FVar12,this,pUVar8);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1c8);
  bVar9 = FSampleTrackContainer::Serialize(this_00->Ptr,param_1);
  return bVar9;
}

// FSampleTrackHost @ 14a3b82a0

FSampleTrackHost * __thiscall
FSampleTrackHost::FSampleTrackHost(FSampleTrackHost *this,FSampleTrackHost *param_1)

{
  FSampleTrackContainer *pFVar1;
  
  this->_padding_ = (longlong)&___7FSampleTrackHost__6B_;
  pFVar1 = ::operator_new(0x98);
  if (pFVar1 != (FSampleTrackContainer *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined8 *)&pFVar1->NameToIndex = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x48 = 0;
    (pFVar1->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Tracks).ArrayNum = 0;
    (pFVar1->Tracks).ArrayMax = 0;
    pFVar1->bForceToUseCompression = false;
    FSampleTrackIndex::MakeSingleton(&pFVar1->TimeSampleTrackIndex);
  }
  (this->Container).Ptr = pFVar1;
  operator=(this,param_1);
  return this;
}

// FSampleTrackHost @ 14a3b8350

FSampleTrackHost * __thiscall FSampleTrackHost::FSampleTrackHost(FSampleTrackHost *this)

{
  FSampleTrackContainer *pFVar1;
  
  this->_padding_ = (longlong)&___7FSampleTrackHost__6B_;
  pFVar1 = ::operator_new(0x98);
  if (pFVar1 != (FSampleTrackContainer *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined8 *)&pFVar1->NameToIndex = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->NameToIndex).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->NameToIndex).field_0x48 = 0;
    (pFVar1->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Tracks).ArrayNum = 0;
    (pFVar1->Tracks).ArrayMax = 0;
    pFVar1->bForceToUseCompression = false;
    FSampleTrackIndex::MakeSingleton(&pFVar1->TimeSampleTrackIndex);
    (this->Container).Ptr = pFVar1;
    return this;
  }
  (this->Container).Ptr = (FSampleTrackContainer *)0x0;
  return this;
}

// operator= @ 14a3bde70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSampleTrackHost * __thiscall
FSampleTrackHost::operator=(FSampleTrackHost *this,FSampleTrackHost *param_1)

{
  TUniquePtr<FSampleTrackContainer,TDefaultDelete<FSampleTrackContainer>_> *this_00;
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong *plVar6;
  FSampleTrackContainer *pFVar7;
  FSampleTrackContainer *pFVar8;
  undefined1 auStack_2b8 [32];
  FSampleTrackMemoryData local_298;
  TDefaultDelete<FSampleTrackContainer> local_268 [16];
  FSampleTrackMemoryReader local_258;
  undefined1 local_198 [240];
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this_00 = &this->Container;
  pFVar8 = (FSampleTrackContainer *)0x0;
  if (this_00->Ptr == (FSampleTrackContainer *)0x0) {
    pFVar7 = ::operator_new(0x98);
    if (pFVar7 != (FSampleTrackContainer *)0x0) {
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      *(undefined8 *)&pFVar7->NameToIndex = 0;
      *(undefined8 *)&(pFVar7->NameToIndex).field_0x8 = 0;
      *(undefined8 *)&(pFVar7->NameToIndex).field_0x20 = 0;
      *(undefined4 *)&(pFVar7->NameToIndex).field_0x28 = 0;
      *(undefined4 *)&(pFVar7->NameToIndex).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar7->NameToIndex).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar7->NameToIndex).field_0x34 = 0;
      *(undefined8 *)&(pFVar7->NameToIndex).field_0x40 = 0;
      *(undefined4 *)&(pFVar7->NameToIndex).field_0x48 = 0;
      (pFVar7->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->Tracks).ArrayNum = 0;
      (pFVar7->Tracks).ArrayMax = 0;
      pFVar7->bForceToUseCompression = false;
      FSampleTrackIndex::MakeSingleton(&pFVar7->TimeSampleTrackIndex);
      pFVar8 = pFVar7;
    }
    if ((TDefaultDelete<FSampleTrackContainer> *)this_00 == local_268) {
      if (pFVar8 != (FSampleTrackContainer *)0x0) {
        FVar3 = (pFVar8->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
        if (FVar3 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)FVar3);
        }
        DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
                  ((TSharedPtr<FSampleTrackBase,1> *)(pFVar8->Tracks).AllocatorInstance.Data,
                   (pFVar8->Tracks).ArrayNum);
        pFVar4 = (pFVar8->Tracks).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        *(undefined4 *)&(pFVar8->NameToIndex).field_0x48 = 0;
        pvVar5 = *(void **)&(pFVar8->NameToIndex).field_0x40;
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar8->NameToIndex);
        plVar6 = (longlong *)pFVar8->_padding_;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        ::operator_delete(pFVar8,0x98);
      }
    }
    else {
      pFVar7 = this_00->Ptr;
      this_00->Ptr = pFVar8;
      TDefaultDelete<FSampleTrackContainer>::operator()
                ((TDefaultDelete<FSampleTrackContainer> *)this_00,pFVar7);
    }
  }
  if ((param_1->Container).Ptr == (FSampleTrackContainer *)0x0) {
    FSampleTrackContainer::Reset(this_00->Ptr);
  }
  else {
    local_298.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Buffer.ArrayNum = 0;
    local_298.Buffer.ArrayMax = 0;
    local_298.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Names.ArrayNum = 0;
    local_298.Names.ArrayMax = 0;
    local_298.ObjectPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ObjectPaths.ArrayNum = 0;
    local_298.ObjectPaths.ArrayMax = 0;
    FSampleTrackMemoryWriter::FSampleTrackMemoryWriter
              ((FSampleTrackMemoryWriter *)local_198,&local_298,false);
    FSampleTrackContainer::Serialize((param_1->Container).Ptr,(FArchive *)local_198);
    FSampleTrackMemoryReader::FSampleTrackMemoryReader(&local_258,&local_298,false);
    FSampleTrackContainer::Serialize(this_00->Ptr,(FArchive *)&local_258);
    if (local_258.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Objects.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_258);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_198 + 0xb0));
    FArchive::~FArchive((FArchive *)local_198);
    DestructItems<FString,int>
              ((FString *)local_298.ObjectPaths.AllocatorInstance.Data,
               local_298.ObjectPaths.ArrayNum);
    if (local_298.ObjectPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.ObjectPaths.AllocatorInstance.Data);
    }
    if (local_298.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Names.AllocatorInstance.Data);
    }
    if (local_298.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Buffer.AllocatorInstance.Data);
    }
  }
  return this;
}

// AddTimeSample @ 14a3e5e10

int __thiscall FSampleTrackHost::AddTimeSample(FSampleTrackHost *this,float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FSampleTrackContainer::AddTimeSample((this->Container).Ptr,param_1,param_2);
  return iVar1;
}

// AddTimeSampleFromDeltaTime @ 14a3e5e70

int __thiscall FSampleTrackHost::AddTimeSampleFromDeltaTime(FSampleTrackHost *this,float param_1)

{
  FSampleTrackContainer *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (this->Container).Ptr;
  fVar2 = FSampleTrackContainer::GetLastAbsoluteTime(this_00);
  fVar3 = FSampleTrackContainer::GetLastDeltaTime(this_00);
  iVar1 = FSampleTrackContainer::AddTimeSample(this_00,fVar2 + fVar3,param_1);
  return iVar1;
}

// GetAbsoluteTime @ 14a4108a0

float __thiscall FSampleTrackHost::GetAbsoluteTime(FSampleTrackHost *this,int param_1)

{
  FSampleTrackContainer *this_00;
  float fVar1;
  
  this_00 = (this->Container).Ptr;
  fVar1 = FSampleTrackContainer::GetAbsoluteTime(this_00,param_1,&this_00->TimeSampleTrackIndex);
  return fVar1;
}

// GetAbsoluteTime @ 14a4108c0

float __thiscall
FSampleTrackHost::GetAbsoluteTime(FSampleTrackHost *this,int param_1,FSampleTrackIndex *param_2)

{
  float fVar1;
  
  fVar1 = FSampleTrackContainer::GetAbsoluteTime((this->Container).Ptr,param_1,param_2);
  return fVar1;
}

// GetContainer @ 14a4125a0

FSampleTrackContainer * __thiscall FSampleTrackHost::GetContainer(FSampleTrackHost *this)

{
  return (this->Container).Ptr;
}

// GetContainer @ 14a4125b0

FSampleTrackContainer * __thiscall FSampleTrackHost::GetContainer(FSampleTrackHost *this)

{
  return (this->Container).Ptr;
}

// GetDeltaTime @ 14a4139c0

float __thiscall FSampleTrackHost::GetDeltaTime(FSampleTrackHost *this,int param_1)

{
  FSampleTrackContainer *this_00;
  float fVar1;
  
  this_00 = (this->Container).Ptr;
  fVar1 = FSampleTrackContainer::GetDeltaTime(this_00,param_1,&this_00->TimeSampleTrackIndex);
  return fVar1;
}

// GetDeltaTime @ 14a4139e0

float __thiscall
FSampleTrackHost::GetDeltaTime(FSampleTrackHost *this,int param_1,FSampleTrackIndex *param_2)

{
  float fVar1;
  
  fVar1 = FSampleTrackContainer::GetDeltaTime((this->Container).Ptr,param_1,param_2);
  return fVar1;
}

// GetLastAbsoluteTime @ 14a4158b0

float __thiscall FSampleTrackHost::GetLastAbsoluteTime(FSampleTrackHost *this)

{
  float fVar1;
  
  fVar1 = FSampleTrackContainer::GetLastAbsoluteTime((this->Container).Ptr);
  return fVar1;
}

// GetLastDeltaTime @ 14a415a00

float __thiscall FSampleTrackHost::GetLastDeltaTime(FSampleTrackHost *this)

{
  float fVar1;
  
  fVar1 = FSampleTrackContainer::GetLastDeltaTime((this->Container).Ptr);
  return fVar1;
}

// GetNumTimes @ 14a4168f0

int __thiscall FSampleTrackHost::GetNumTimes(FSampleTrackHost *this)

{
  int iVar1;
  FSampleTrackContainer *this_00;
  TTuple<FName,int> *pTVar2;
  int *piVar3;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_18;
  
  this_00 = (this->Container).Ptr;
  FLazyName::Resolve(&FSampleTrackContainer::AbsoluteTimeName);
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this_00->NameToIndex,local_res8);
  piVar3 = (int *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 == (int *)0x0) || (iVar1 = *piVar3, iVar1 < 0)) ||
     ((this_00->Tracks).ArrayNum <= iVar1)) {
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,&local_18,iVar1);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((local_18.Object != (FSampleTrackBase *)0x0) &&
       (iVar1 = (local_18.Object)->NumTimesInContainer, iVar1 != 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return iVar1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return 0;
}

// GetTimeIndex @ 14a419f50

int __thiscall FSampleTrackHost::GetTimeIndex(FSampleTrackHost *this,float param_1)

{
  FSampleTrackContainer *this_00;
  int iVar1;
  
  this_00 = (this->Container).Ptr;
  iVar1 = FSampleTrackContainer::GetTimeIndex(this_00,param_1,&this_00->TimeSampleTrackIndex);
  return iVar1;
}

// GetTimeIndex @ 14a419f70

int __thiscall
FSampleTrackHost::GetTimeIndex(FSampleTrackHost *this,float param_1,FSampleTrackIndex *param_2)

{
  int iVar1;
  
  iVar1 = FSampleTrackContainer::GetTimeIndex((this->Container).Ptr,param_1,param_2);
  return iVar1;
}

// GetTimeRange @ 14a41a0e0

TVector2<float> __thiscall FSampleTrackHost::GetTimeRange(FSampleTrackHost *this)

{
  undefined4 uVar1;
  EMode EVar2;
  FSampleTrackContainer *this_00;
  int iVar3;
  TTuple<FName,int> *pTVar4;
  undefined4 *puVar5;
  float *pfVar6;
  TVector2<float>_u_0 in_RDX;
  int iVar7;
  int *piVar8;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  this_00 = (this->Container).Ptr;
  FLazyName::Resolve(&FSampleTrackContainer::AbsoluteTimeName);
  pTVar4 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this_00->NameToIndex,local_res8);
  iVar7 = 0;
  piVar8 = (int *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,int> *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (((piVar8 == (int *)0x0) || (iVar3 = *piVar8, iVar3 < 0)) ||
     ((this_00->Tracks).ArrayNum <= iVar3)) {
    local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,local_28,iVar3);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (local_28[0].Object != (FSampleTrackBase *)0x0) {
      EVar2 = (local_28[0].Object)->Mode;
      if (EVar2 != EMode_Singleton) {
        if (EVar2 == EMode_Sampled) {
          iVar3 = ((local_28[0].Object)->TimeIndices).ArrayNum;
        }
        else {
          if (EVar2 != EMode_Complete) goto LAB_14a41a206;
          iVar3 = (local_28[0].Object)->NumTimesInContainer;
        }
        if (iVar3 == 0) goto LAB_14a41a206;
      }
      puVar5 = (undefined4 *)
               (**(code **)((local_28[0].Object)->_padding_ + 0xd0))(local_28[0].Object,0);
      EVar2 = (local_28[0].Object)->Mode;
      uVar1 = *puVar5;
      if (EVar2 == EMode_Singleton) {
        iVar7 = 1;
      }
      else if (EVar2 == EMode_Sampled) {
        iVar7 = ((local_28[0].Object)->TimeIndices).ArrayNum;
      }
      else if (EVar2 == EMode_Complete) {
        iVar7 = (local_28[0].Object)->NumTimesInContainer;
      }
      pfVar6 = (float *)(**(code **)((local_28[0].Object)->_padding_ + 0xd0))
                                  (local_28[0].Object,iVar7 + -1);
      *(undefined4 *)in_RDX = uVar1;
      *(float *)((longlong)in_RDX + 4) = *pfVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      return (TVector2<float>)in_RDX;
    }
  }
LAB_14a41a206:
  *(TVector2<float>_u_0 *)in_RDX =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return (TVector2<float>)in_RDX;
}

