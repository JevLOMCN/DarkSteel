// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// FArchiveRemoteObjectWriter @ 1421b19d0

FArchiveRemoteObjectWriter * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::FArchiveRemoteObjectWriter
          (FArchiveRemoteObjectWriter *this,UObject *param_1,FRemoteObjectData *param_2,
          FUObjectMigrationContext *param_3,wchar_t *param_4,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_5)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchiveRemoteObjectWriter *pFVar6;
  wchar_t *pwVar7;
  UObject *local_res10;
  
  pwVar7 = L"RemoteObjectWriter";
  if (param_4 != (wchar_t *)0x0) {
    pwVar7 = param_4;
  }
  local_res10 = param_1;
  TArchiveRemoteObjectBase<FMemoryWriter>::TArchiveRemoteObjectBase<FMemoryWriter>
            ((TArchiveRemoteObjectBase<FMemoryWriter> *)this,param_2,param_3,pwVar7);
  pTVar1 = &this->ObjectsToSerialize;
  this->_padding_ = (longlong)&___7FArchiveRemoteObjectWriter_Serialization_RemoteObject_UE__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToSerialize).ArrayNum = 0;
  (this->ObjectsToSerialize).ArrayMax = 0;
  *(undefined8 *)&(this->SerializedObjects).Elements = 0;
  *(undefined8 *)&(this->SerializedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SerializedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SerializedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SerializedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SerializedObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SerializedObjects).Elements.field_0x30 = 0xffffffff;
  (this->SerializedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SerializedObjects).HashSize = 0;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  *(undefined8 *)&this->PathNameMap = 0;
  *(undefined8 *)&(this->PathNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->PathNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->PathNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->PathNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathNameMap).field_0x34 = 0;
  *(undefined4 *)&(this->PathNameMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PathNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->PathNameMap).field_0x48 = 0;
  *(undefined8 *)&this->RemoteIdMap = 0;
  *(undefined8 *)&(this->RemoteIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->RemoteIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->RemoteIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->RemoteIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemoteIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->RemoteIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RemoteIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->RemoteIdMap).field_0x48 = 0;
  this->ReferencedObjectsSet =
       (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0;
  this->_padding_ = (longlong)local_res10;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar2 + (longlong)(this->ObjectsToSerialize).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchiveRemoteObjectWriter *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->ObjectsToSerialize).ArrayNum;
  if (iVar5 == (this->ObjectsToSerialize).ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->ObjectsToSerialize).ArrayMax);
  }
  (this->ObjectsToSerialize).ArrayNum = iVar5 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10;
  this->ReferencedObjectsSet = param_5;
  return this;
}

// ~FArchiveRemoteObjectWriter @ 1421b5ef0

void __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::~FArchiveRemoteObjectWriter
          (FArchiveRemoteObjectWriter *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->RemoteIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RemoteIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RemoteIdMap);
  *(undefined4 *)&(this->PathNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PathNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PathNameMap);
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameMap);
  (this->SerializedObjects).HashSize = 0;
  FVar2 = (this->SerializedObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SerializedObjects).Elements);
  pFVar3 = (this->ObjectsToSerialize).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TArchiveRemoteObjectBase<FMemoryWriter>::~TArchiveRemoteObjectBase<FMemoryWriter>
            ((TArchiveRemoteObjectBase<FMemoryWriter> *)this);
  return;
}

// operator<< @ 1421b7430

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,UObject **param_1)

{
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0].Handle = *param_1;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8[0].Handle != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8[0].Handle);
  }
  WriteObjectPtr(this,(FObjectPtr *)local_res8);
  return (FArchive *)this;
}

// operator<< @ 1421b7470

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FLazyObjectPtr *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->_padding_ & 0x3000000) == 0x1000000) {
    return (FArchive *)this;
  }
  pUStackX_8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((pUStackX_8 != (UObject *)0x0) ||
     (((*(int *)&param_1->field_0x14 == 0 && *(int *)&param_1->field_0x10 == 0) &&
      *(int *)&param_1->field_0xc == 0) && *(int *)&param_1->field_0x8 == 0)) goto LAB_141f10b7e;
  pUVar2 = FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&param_1->field_0x8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if ((bVar1) && (pUVar2 != (UObject *)0x0)) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
    if (((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_141f10b3b;
LAB_141f10b68:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) != 0) goto LAB_141f10b76;
  }
  else {
LAB_141f10b3b:
    apUStackX_18[0] = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)apUStackX_18);
    if (pUVar2 != (UObject *)0x0) goto LAB_141f10b68;
LAB_141f10b76:
    bVar1 = false;
  }
  pUStackX_8 = (UObject *)0x0;
  if (bVar1) {
    pUStackX_8 = pUVar2;
  }
LAB_141f10b7e:
  (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
  pUVar2 = pUStackX_8;
  if (((this->_padding_ & 1) != 0) ||
     ((pUStackX_8 != (UObject *)0x0 && ((this->_padding_ & 0x2000000) != 0)))) {
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUStackX_8);
    }
    apUStackX_18[0] = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    TPersistentObjectPtr<FUniqueObjectGuid>::operator=
              ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1,(FObjectPtr)apUStackX_18);
  }
  return (FArchive *)this;
}

// operator<< @ 1421b7480

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FObjectPtr *param_1)

{
  WriteObjectPtr(this,param_1);
  return (FArchive *)this;
}

// operator<< @ 1421b74a0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 1421b74b0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FSoftObjectPtr *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  byte bVar4;
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  bVar4 = (byte)this->_padding_ & 1;
  if ((this->_padding_ & 4) == 0) {
    if (bVar4 == 0) {
      if ((this->_padding_ & 0x3000000) == 0x1000000) {
        return (FArchive *)this;
      }
      pUStackX_8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
      if ((pUStackX_8 != (UObject *)0x0) || (*(longlong *)&param_1->field_0x8 == 0))
      goto LAB_141f10f12;
      pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&param_1->field_0x8);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      bVar1 = (*IsInAsyncLoadingThread)();
      if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
         (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
         ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_141f10ef7:
        bVar1 = true;
        if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) != 0) goto LAB_141f10f05;
      }
      else {
        apUStackX_18[0] = pUVar2;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)apUStackX_18);
        if (pUVar2 != (UObject *)0x0) goto LAB_141f10ef7;
LAB_141f10f05:
        bVar1 = false;
      }
      pUStackX_8 = (UObject *)0x0;
      if (bVar1) {
        pUStackX_8 = pUVar2;
      }
LAB_141f10f12:
      (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
      if ((this->_padding_ & 1) == 0) {
        if (pUStackX_8 == (UObject *)0x0) {
          return (FArchive *)this;
        }
        if ((this->_padding_ & 0x2000000) == 0) {
          return (FArchive *)this;
        }
      }
      apUStackX_18[0] = pUStackX_8;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUStackX_8);
      }
      FSoftObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
      return (FArchive *)this;
    }
  }
  else if (bVar4 == 0) goto LAB_141f10f78;
  *(undefined8 *)param_1 = 0;
LAB_141f10f78:
  (**(code **)(this->_padding_ + 0x140))(this,&param_1->field_0x8);
  return (FArchive *)this;
}

// operator<< @ 1421b74c0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FWeakObjectPtr *param_1)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArchive *pFVar7;
  UObject *local_res8;
  UObject *local_res18 [2];
  UObject *local_38;
  UObject **local_30;
  FArchiveRemoteObjectWriter *local_28;
  undefined1 local_20 [16];
  char local_10;
  char local_f;
  
  local_res18[0] = FWeakObjectPtr::Get(param_1,true);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res18[0]);
  }
  (**(code **)(this->_padding_ + 0x268))(this,local_20,local_res18);
  (**(code **)(this->_padding_ + 0x278))(this,local_20);
  if (local_res18[0] != (UObject *)0x0) {
    local_38 = local_res18[0];
    if (this->ReferencedObjectsSet !=
        (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                (this->ReferencedObjectsSet,&local_res8,(bool *)&local_38);
    }
    if ((local_10 == '\x01') && (local_f != '\0')) {
      bVar5 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)local_38,(UObject *)this->_padding_);
      if (!bVar5) {
        local_30 = &local_38;
        local_28 = this;
        `UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectPtr'::__l15::
        <lambda_1>::operator()(&local_30);
      }
      pTVar2 = &this->ObjectsToSerialize;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 <
          pFVar3 + (longlong)(this->ObjectsToSerialize).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar6 = (this->ObjectsToSerialize).ArrayNum;
      piVar1 = &(this->ObjectsToSerialize).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ObjectsToSerialize).ArrayNum = iVar6 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 1421b7660

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::operator<<
          (FArchiveRemoteObjectWriter *this,FName *param_1)

{
  longlong *plVar1;
  ushort local_res8 [16];
  
  local_res8[0] = AddNameToNameMap(this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (*plVar1 + 2U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 2;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,2);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
  return (FArchive *)this;
}

// AddNameToNameMap @ 1421bc840

ushort __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::AddNameToNameMap
          (FArchiveRemoteObjectWriter *this,FName *param_1)

{
  uint *puVar1;
  longlong lVar2;
  FName FVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ushort local_res8 [8];
  FName *local_28;
  ushort *local_20;
  
  FVar3 = *param_1;
  uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (*(int *)&(this->NameMap).field_0x8 != *(int *)&(this->NameMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->NameMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->NameMap).field_0x38;
    }
    iVar10 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->NameMap).field_0x48 - 1U & FVar3.Number + uVar9) *
                     4);
    if (iVar10 != -1) {
      lVar4 = *(longlong *)&(this->NameMap).field_0x0;
      do {
        lVar2 = lVar4 + (longlong)iVar10 * 0x14;
        if (*(FName *)(lVar4 + (longlong)iVar10 * 0x14) == FVar3) {
          puVar11 = (ushort *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar11 = (ushort *)0x0;
          }
          if (puVar11 != (ushort *)0x0) {
            return *puVar11;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0xc);
      } while (iVar10 != -1);
    }
  }
  pFVar5 = (ForAnyElementType *)this->_padding_;
  if (((FName *)pFVar5->Data <= param_1) &&
     (param_1 < (FName *)pFVar5->Data + *(int *)((longlong)&pFVar5[1].Data + 4))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
  }
  uVar9 = *(uint *)&pFVar5[1].Data;
  puVar1 = (uint *)((longlong)&pFVar5[1].Data + 4);
  if (uVar9 == *puVar1) {
    uVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar5,(int *)puVar1);
  }
  *(uint *)&pFVar5[1].Data = uVar9 + 1;
  *(FName *)(pFVar5->Data + (longlong)(int)uVar9 * 8) = *param_1;
  if ((uVar9 != (uVar9 & 0xffff)) || ((int)uVar9 < 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
  }
  local_20 = local_res8;
  local_res8[0] = (ushort)uVar9;
  local_28 = param_1;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->NameMap,
             (TPairInitializer<FName_const_&,unsigned_short_const_&> *)(local_res8 + 4),
             (bool *)&local_28);
  return local_res8[0];
}

// AddPathNameToNameMap @ 1421bca00

ushort __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::AddPathNameToNameMap
          (FArchiveRemoteObjectWriter *this,UObject *param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  ForAnyElementType *pFVar16;
  uint uVar17;
  UObject *pUVar18;
  undefined2 local_res8 [4];
  UObject *local_res10;
  undefined2 local_res18 [4];
  ushort local_res20 [4];
  undefined2 local_a8;
  undefined2 local_a6 [3];
  FRemoteObjectId_u_0 local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  TPairInitializer<UObject_*_const_&,unsigned_short_const_&> local_88;
  FRemoteObjectId_u_0 *local_78;
  undefined2 *local_70;
  longlong *local_68;
  undefined2 *local_60;
  UObject **local_58;
  ushort *local_50;
  
  uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  if (*(int *)&(this->PathNameMap).field_0x8 != *(int *)&(this->PathNameMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->PathNameMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->PathNameMap).field_0x38;
    }
    iVar10 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->PathNameMap).field_0x48 - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4)
    ;
    if (iVar10 != -1) {
      lVar5 = *(longlong *)&(this->PathNameMap).field_0x0;
      do {
        lVar3 = lVar5 + (longlong)iVar10 * 0x18;
        if (*(UObject **)(lVar5 + (longlong)iVar10 * 0x18) == param_1) {
          puVar12 = (ushort *)(lVar3 + 8);
          if (lVar3 == 0) {
            puVar12 = (ushort *)0x0;
          }
          if (puVar12 != (ushort *)0x0) {
            return *puVar12;
          }
          break;
        }
        iVar10 = *(int *)(lVar3 + 0x10);
      } while (iVar10 != -1);
    }
  }
  lVar5 = this->_padding_;
  uVar17 = *(uint *)(lVar5 + 0x28);
  local_res10 = param_1;
  if (uVar17 == *(uint *)(lVar5 + 0x2c)) {
    uVar17 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)(lVar5 + 0x20),(int *)(lVar5 + 0x2c));
  }
  *(uint *)(lVar5 + 0x28) = uVar17 + 1;
  DefaultConstructItems<FPackedRemoteObjectPathName,int>
            ((void *)((longlong)(int)uVar17 * 0x20 + *(longlong *)(lVar5 + 0x20)),1);
  uVar15 = uVar17 & 0xffff;
  if (((uVar17 != uVar15) || ((int)uVar17 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return uVar9;
  }
  lVar5 = this->_padding_;
  local_res20[0] = (ushort)uVar17;
  if ((*(int *)(lVar5 + 0x28) <= (int)uVar15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return uVar9;
  }
  pFVar16 = (ForAnyElementType *)((ulonglong)uVar15 * 0x20 + *(longlong *)(lVar5 + 0x20));
  if (local_res10 != (UObject *)0x0) {
    pUVar18 = local_res10;
    do {
      local_res8[0] = 0xffff;
      uVar17 = 0;
      local_a0.Id = 0;
      if (FRemoteServerId::GlobalServerId.Id == 0) {
        uVar17 = 0xeec00000;
      }
      iVar10 = TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FRemoteObjectId>
                         ((TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
                           *)&this->RemoteIdMap,uVar17,(FRemoteObjectId *)&local_a0._s_0);
      if (iVar10 == -1) {
LAB_1421bcc39:
        lVar5 = this->_padding_;
        if (((*(FRemoteObjectId_u_0 **)(lVar5 + 0x10) <= &local_a0) &&
            (&local_a0 < *(FRemoteObjectId_u_0 **)(lVar5 + 0x10) + *(int *)(lVar5 + 0x1c))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return uVar9;
        }
        uVar17 = *(uint *)(lVar5 + 0x18);
        if (uVar17 == *(uint *)(lVar5 + 0x1c)) {
          uVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar5 + 0x10),(int *)(lVar5 + 0x1c));
        }
        *(uint *)(lVar5 + 0x18) = uVar17 + 1;
        ((FRemoteObjectId_u_0 *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar17 * 8))->Id =
             (ulong64)local_a0;
        if (((uVar17 != (uVar17 & 0xffff)) || ((int)uVar17 < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return uVar9;
        }
        local_78 = &local_a0;
        local_res8[0] = (undefined2)uVar17;
        local_70 = local_res8;
        TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FRemoteObjectId_const_&,unsigned_short_const_&>_>
                  ((TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
                    *)&this->RemoteIdMap,
                   (TPairInitializer<FRemoteObjectId_const_&,unsigned_short_const_&> *)local_90,
                   (bool *)&local_78);
      }
      else {
        lVar5 = *(longlong *)&(this->RemoteIdMap).field_0x0 + (longlong)iVar10 * 0x18;
        puVar11 = (undefined2 *)(lVar5 + 8);
        if (lVar5 == 0) {
          puVar11 = (undefined2 *)0x0;
        }
        if (puVar11 == (undefined2 *)0x0) goto LAB_1421bcc39;
        local_res8[0] = *puVar11;
      }
      local_a8 = local_res8[0];
      if (((pFVar16->Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar16->Data + (longlong)*(int *)((longlong)&pFVar16[1].Data + 4) * 2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return uVar9;
      }
      iVar10 = *(int *)&pFVar16[1].Data;
      if (iVar10 == *(int *)((longlong)&pFVar16[1].Data + 4)) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,pFVar16,(int *)((longlong)&pFVar16[1].Data + 4));
      }
      *(int *)&pFVar16[1].Data = iVar10 + 1;
      *(undefined2 *)(pFVar16->Data + (longlong)iVar10 * 2) = local_a8;
      lVar5 = *(longlong *)&pUVar18->field_0x18;
      local_res18[0] = 0xffff;
      local_98 = lVar5;
      uVar17 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
      if (*(int *)&(this->NameMap).field_0x8 != *(int *)&(this->NameMap).field_0x34) {
        puVar13 = *(undefined1 **)&(this->NameMap).field_0x40;
        puVar14 = &(this->NameMap).field_0x38;
        if (puVar13 != (undefined1 *)0x0) {
          puVar14 = puVar13;
        }
        iVar10 = *(int *)(puVar14 +
                         (ulonglong)
                         (*(int *)&(this->NameMap).field_0x48 - 1U &
                         (int)((ulonglong)lVar5 >> 0x20) + uVar17) * 4);
        if (iVar10 != -1) {
          lVar3 = *(longlong *)&(this->NameMap).field_0x0;
          do {
            lVar4 = lVar3 + (longlong)iVar10 * 0x14;
            if (*(longlong *)(lVar3 + (longlong)iVar10 * 0x14) == lVar5) {
              puVar11 = (undefined2 *)(lVar4 + 8);
              if (lVar4 == 0) {
                puVar11 = (undefined2 *)0x0;
              }
              if (puVar11 != (undefined2 *)0x0) {
                local_res18[0] = *puVar11;
                goto LAB_1421bcf49;
              }
              break;
            }
            iVar10 = *(int *)(lVar4 + 0xc);
          } while (iVar10 != -1);
        }
      }
      pFVar6 = (ForAnyElementType *)this->_padding_;
      if (((pFVar6->Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return uVar9;
      }
      uVar17 = *(uint *)&pFVar6[1].Data;
      puVar1 = (uint *)((longlong)&pFVar6[1].Data + 4);
      if (uVar17 == *puVar1) {
        uVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,pFVar6,(int *)puVar1);
      }
      *(uint *)&pFVar6[1].Data = uVar17 + 1;
      *(longlong *)(pFVar6->Data + (longlong)(int)uVar17 * 8) = local_98;
      if (((uVar17 != (uVar17 & 0xffff)) || ((int)uVar17 < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8
         )) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return uVar9;
      }
      local_68 = &local_98;
      local_res18[0] = (undefined2)uVar17;
      local_60 = local_res18;
      TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,unsigned_short_const_&>_>
                ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                  *)&this->NameMap,
                 (TPairInitializer<FName_const_&,unsigned_short_const_&> *)(local_90 + 4),
                 (bool *)&local_68);
LAB_1421bcf49:
      piVar2 = (int *)((longlong)&pFVar16[3].Data + 4);
      local_a6[0] = local_res18[0];
      if (((pFVar16[2].Data <= (FScriptContainerElement *)local_a6) &&
          ((FScriptContainerElement *)local_a6 < pFVar16[2].Data + (longlong)*piVar2 * 2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return uVar9;
      }
      iVar10 = *(int *)&pFVar16[3].Data;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,pFVar16 + 2,piVar2);
      }
      *(int *)&pFVar16[3].Data = iVar10 + 1;
      *(undefined2 *)(pFVar16[2].Data + (longlong)iVar10 * 2) = local_a6[0];
      pUVar18 = *(UObject **)&pUVar18->field_0x20;
    } while (pUVar18 != (UObject *)0x0);
  }
  local_58 = &local_res10;
  local_50 = local_res20;
  TSet<TTuple<UObject_*,unsigned_short>,TDefaultMapHashableKeyFuncs<UObject_*,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UObject_*,unsigned_short>,TDefaultMapHashableKeyFuncs<UObject_*,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->PathNameMap,&local_88,(bool *)&local_58);
  return local_res20[0];
}

// AddRemoteIdToIdMap @ 1421bd090

ushort __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::AddRemoteIdToIdMap
          (FArchiveRemoteObjectWriter *this,FRemoteObjectId param_1)

{
  TMap<FRemoteObjectId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ushort local_res8 [4];
  FRemoteObjectId_u_0 local_res10;
  FRemoteObjectId_u_0 local_res18;
  FRemoteObjectId_u_0 *local_18;
  ushort *local_10;
  
  this_00 = &this->RemoteIdMap;
  uVar6 = param_1.field0_0x0._4_4_ >> 0x16;
  if (uVar6 == FRemoteServerId::GlobalServerId.Id) {
    uVar6 = 0x3fd;
  }
  uVar7 = (ulonglong)param_1.field0_0x0 >> 1 & 0x1fffffffffffff;
  local_res10 = param_1.field0_0x0;
  iVar5 = TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRemoteObjectId>
                    ((TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_00,
                     (int)(((ulonglong)uVar6 << 0x35 | uVar7) >> 0x1f) * 0x17 + (int)uVar7 * 2,
                     (FRemoteObjectId *)&local_res10._s_0);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
    puVar8 = (ushort *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar8 = (ushort *)0x0;
    }
    if (puVar8 != (ushort *)0x0) {
      return *puVar8;
    }
  }
  lVar1 = this->_padding_;
  if ((*(FRemoteObjectId_u_0 **)(lVar1 + 0x10) <= &local_res10) &&
     (&local_res10 < *(FRemoteObjectId_u_0 **)(lVar1 + 0x10) + *(int *)(lVar1 + 0x1c))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar6 = *(uint *)(lVar1 + 0x18);
  if (uVar6 == *(uint *)(lVar1 + 0x1c)) {
    uVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(uint *)(lVar1 + 0x18) = uVar6 + 1;
  ((FRemoteObjectId_u_0 *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar6 * 8))->_s_0 =
       (FRemoteObjectId_u_0_s_0)local_res10;
  if ((uVar6 != (uVar6 & 0xffff)) || ((int)uVar6 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  local_18 = &local_res10;
  local_res8[0] = (ushort)uVar6;
  local_10 = local_res8;
  TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRemoteObjectId_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<FRemoteObjectId,unsigned_short>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,unsigned_short,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FRemoteObjectId_const_&,unsigned_short_const_&> *)&local_res18._s_0,
             (bool *)&local_18);
  return local_res8[0];
}

// GetArchetypeFromLoader @ 1421cef90

UObject * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::GetArchetypeFromLoader
          (FArchiveRemoteObjectWriter *this,UObject *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  uint uVar3;
  bool bVar4;
  
  if (GUseImmutableArchetypes != 0) {
    bVar4 = true;
    pUVar2 = param_1;
    if (param_1 != (UObject *)0x0) {
      do {
        if (!bVar4) goto LAB_1421cefd2;
        puVar1 = &pUVar2->field_0x10;
        pUVar2 = *(UObject **)&pUVar2->field_0x20;
        uVar3 = *(uint *)(*(longlong *)puVar1 + 0xd4) & 0x40000;
        bVar4 = uVar3 == 0;
      } while (pUVar2 != (UObject *)0x0);
      if (uVar3 != 0) goto LAB_1421cefd2;
    }
    pUVar2 = FindImmutableArchetype(param_1);
    return pUVar2;
  }
LAB_1421cefd2:
  pUVar2 = UObject::GetArchetype(param_1);
  return pUVar2;
}

// GetReferenceInfo @ 1421d05f0

FRemoteObjectReferenceInfo * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::GetReferenceInfo
          (FArchiveRemoteObjectWriter *this,FRemoteObjectReferenceInfo *__return_storage_ptr__,
          FObjectPtr *param_1)

{
  UObjectBaseUtility *this_00;
  UObject *pUVar1;
  UObjectBaseUtility *local_28;
  undefined1 local_18;
  bool bStack_17;
  undefined6 uStack_16;
  
  this_00 = (UObjectBaseUtility *)(param_1->field0_0x0).Handle;
  pUVar1 = (UObject *)this->_padding_;
  local_28 = (UObjectBaseUtility *)0x0;
  local_18 = 0;
  bStack_17 = false;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    bStack_17 = UObjectBaseUtility::IsIn(this_00,pUVar1);
    local_28 = this_00;
    if ((this_00 == (UObjectBaseUtility *)pUVar1) || (local_18 = 2, bStack_17)) {
      local_18 = 1;
    }
  }
  __return_storage_ptr__->Object = (UObject *)local_28;
  (__return_storage_ptr__->Id).field0_0x0.Id = 0;
  __return_storage_ptr__->Type = local_18;
  __return_storage_ptr__->bIsSubobject = bStack_17;
  *(undefined6 *)&__return_storage_ptr__->field_0x12 = uStack_16;
  return __return_storage_ptr__;
}

// PopulateObjectHeader @ 1421d87f0

bool __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::PopulateObjectHeader
          (FArchiveRemoteObjectWriter *this,UObject *param_1,FRemoteObjectHeader *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  pFVar8 = (FUObjectItem *)0x0;
  (param_2->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (param_2->Name).Number = uVar4;
  (param_2->RemoteId).field0_0x0.Id = 0;
  pUVar2 = *(UClass **)&param_1->field_0x10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_2->Class).field0_0x0.DebugPtr = pUVar2;
  pUVar7 = *(UObject **)&param_1->field_0x20;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar7);
  }
  (param_2->Outer).field0_0x0.DebugPtr = pUVar7;
  pUVar7 = UObject::GetArchetype(param_1);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar7);
  }
  (param_2->Archetype).field0_0x0.DebugPtr = pUVar7;
  iVar1 = *(int *)&param_1->field_0xc;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  param_2->InternalFlags =
       (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) & 0x200000;
  return true;
}

// SerializeRemoteObject @ 1421e7a40

void __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::SerializeRemoteObject
          (FArchiveRemoteObjectWriter *this,UObject *param_1,FRemoteObjectHeader *param_2)

{
  AddNameToNameMap(this,&param_2->Name);
                    /* WARNING: Could not recover jumptable at 0x0001421e7a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  return;
}

// WriteObjectPtr @ 1421f1230

void __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectPtr
          (FArchiveRemoteObjectWriter *this,FObjectPtr *param_1)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *local_res8;
  FObjectPtr_u_0 local_38;
  FObjectPtr_u_0 *local_30;
  FArchiveRemoteObjectWriter *local_28;
  undefined1 local_20 [16];
  char local_10;
  char local_f;
  
  (**(code **)(this->_padding_ + 0x268))(this,local_20,param_1);
  (**(code **)(this->_padding_ + 0x278))(this,local_20);
  local_38 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  if (local_38.Handle != (UObject *)0x0) {
    if (this->ReferencedObjectsSet !=
        (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                (this->ReferencedObjectsSet,&local_res8,(bool *)&local_38);
    }
    if ((local_10 == '\x01') && (local_f != '\0')) {
      bVar5 = UObjectBaseUtility::IsIn
                        ((UObjectBaseUtility *)local_38.Handle,(UObject *)this->_padding_);
      if (!bVar5) {
        local_30 = &local_38;
        local_28 = this;
        `UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectPtr'::__l15::
        <lambda_1>::operator()(&local_30);
      }
      pTVar2 = &this->ObjectsToSerialize;
      pFVar3 = (FObjectPtr_u_0 *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= &local_38) && (&local_38 < pFVar3 + (this->ObjectsToSerialize).ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->ObjectsToSerialize).ArrayNum;
      piVar1 = &(this->ObjectsToSerialize).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ObjectsToSerialize).ArrayNum = iVar6 + 1;
      ((FObjectPtr_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8))->Handle =
           (UObject *)local_38;
    }
  }
  return;
}

// WriteObjectReference @ 1421f1510

void __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectReference
          (FArchiveRemoteObjectWriter *this,FRemoteObjectReferenceInfo *param_1)

{
  ERemoteReferenceType *pEVar1;
  longlong *plVar2;
  ushort local_res8 [4];
  ushort local_res10 [4];
  
  pEVar1 = *(ERemoteReferenceType **)this->_padding_;
  if ((ERemoteReferenceType *)((undefined8 *)this->_padding_)[1] < pEVar1 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,&param_1->Type,1);
  }
  else {
    param_1->Type = *pEVar1;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 1;
  }
  if (param_1->Type != None) {
    local_res8[0] =
         AddRemoteIdToIdMap(this,(FRemoteObjectId)
                                 *(FRemoteObjectId_u_0 *)&(param_1->Id).field0_0x0._s_0);
    plVar2 = (longlong *)this->_padding_;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    if (param_1->Type == PathName) {
      local_res10[0] = AddPathNameToNameMap(this,param_1->Object);
      plVar2 = (longlong *)this->_padding_;
      if (*plVar2 + 2U <= (ulonglong)plVar2[1]) {
        *plVar2 = *plVar2 + 2;
        return;
      }
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res10,2);
        return;
      }
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
    }
  }
  return;
}

// operator() @ 150488240

bool __thiscall
`UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectPtr'::__l15::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1713887926166748683>);
  if (bVar4) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)((longlong)this + 8) + 0xa8),&local_18,
               (UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1713887926166748683>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::WriteObjectPtr(FObjectPtr_const&___ptr64)___ptr64'::`15'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504882e9;
    }
  }
  bVar4 = false;
LAB_1504882e9:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

