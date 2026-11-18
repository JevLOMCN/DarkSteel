// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// operator<< @ 1421b7250

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,UObject **param_1)

{
  FObjectPtr_u_0 local_res8;
  
  local_res8.Handle = (UObject *)0x0;
  ReadObjectReference(this,(FObjectPtr *)&local_res8);
  *param_1 = (UObject *)local_res8;
  return (FArchive *)this;
}

// operator<< @ 1421b7290

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FLazyObjectPtr *param_1)

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

// operator<< @ 1421b72a0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FObjectPtr *param_1)

{
  ReadObjectReference(this,param_1);
  return (FArchive *)this;
}

// operator<< @ 1421b72c0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 1421b72d0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FSoftObjectPtr *param_1)

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

// operator<< @ 1421b72e0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FWeakObjectPtr *param_1)

{
  FObjectPtr_u_0 local_res8;
  
  local_res8.Handle = (UObject *)0x0;
  ReadObjectReference(this,(FObjectPtr *)&local_res8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8.Handle != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8.Handle);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  return (FArchive *)this;
}

// operator<< @ 1421b7350

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::operator<<
          (FArchiveRemoteObjectReader *this,FName *param_1)

{
  longlong *plVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ulonglong uVar6;
  ushort local_res8 [4];
  
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = 0;
  if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(ushort *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  pTVar2 = this->Names;
  uVar6 = (ulonglong)local_res8[0];
  if (pTVar2->ArrayNum <= (int)(uint)local_res8[0]) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  *param_1 = *(FName *)((pTVar2->AllocatorInstance).Data + uVar6 * 8);
  return (FArchive *)this;
}

// ReadObjectReference @ 1421dd020

ERemoteReferenceType __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::ReadObjectReference
          (FArchiveRemoteObjectReader *this,FObjectPtr *param_1)

{
  longlong *plVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ERemoteReferenceType EVar5;
  ulonglong uVar6;
  ERemoteReferenceType local_res8 [8];
  ushort local_res18 [4];
  ushort local_res20 [4];
  FObjectPtr_u_0 local_28 [2];
  
  plVar1 = (longlong *)this->_padding_;
  if ((ERemoteReferenceType *)plVar1[1] < (ERemoteReferenceType *)*plVar1 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
  }
  else {
    local_res8[0] = *(ERemoteReferenceType *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  EVar5 = local_res8[0];
  if (local_res8[0] != None) {
    plVar1 = (longlong *)this->_padding_;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    if (this->RemoteIds->ArrayNum <= (int)(uint)local_res20[0]) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    if (EVar5 == PathName) {
      plVar1 = (longlong *)this->_padding_;
      local_res18[0] = 0xffff;
      if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
        if ((this->_padding_ & 0x10000) == 0) {
          (**(code **)(this->_padding_ + 0x188))(this,local_res18,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
        }
      }
      else {
        local_res18[0] = *(ushort *)*plVar1;
        *plVar1 = *plVar1 + 2;
      }
      pTVar2 = this->ResolvedPathNameObjects;
      uVar6 = (ulonglong)local_res18[0];
      if (pTVar2->ArrayNum <= (int)(uint)local_res18[0]) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      local_28[0] = (FObjectPtr_u_0)
                    ((FObjectPtr_u_0 *)((pTVar2->AllocatorInstance).Data + uVar6 * 8))->Handle;
      if (local_28[0].Handle != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(local_28[0].Handle);
        }
        FObjectPtr::operator=(param_1,(FObjectPtr *)local_28);
      }
    }
    return EVar5;
  }
  (param_1->field0_0x0).Handle = (UObject *)0x0;
  return None;
}

