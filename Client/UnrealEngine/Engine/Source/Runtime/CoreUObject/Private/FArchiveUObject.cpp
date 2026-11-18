// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// operator<< @ 141ed7020

FArchive * __thiscall FArchiveUObject::operator<<(FArchiveUObject *this,FLazyObjectPtr *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->field_0x2b & 3) == 1) {
    return (FArchive *)this;
  }
  pUStackX_8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((pUStackX_8 != (UObject *)0x0) ||
     (((*(int *)&param_1->field_0x14 == 0 && *(int *)&param_1->field_0x10 == 0) &&
      *(int *)&param_1->field_0xc == 0) && *(int *)&param_1->field_0x8 == 0)) goto LAB_141f10b7e;
  pUVar2 = FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&param_1->field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
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
  (**(code **)(*(longlong *)this + 0x168))(this,&pUStackX_8);
  pUVar2 = pUStackX_8;
  if (((this->field_0x28 & 1) != 0) ||
     ((pUStackX_8 != (UObject *)0x0 && ((this->field_0x2b & 2) != 0)))) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStackX_8);
    }
    apUStackX_18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    TPersistentObjectPtr<FUniqueObjectGuid>::operator=
              ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1,(FObjectPtr)apUStackX_18);
  }
  return (FArchive *)this;
}

// operator<< @ 141ed7030

FArchive * __thiscall FArchiveUObject::operator<<(FArchiveUObject *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->field_0x28 & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(*(longlong *)this + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->field_0x28 & 1) != 0) || ((this->field_0x2b & 2) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 141ed7040

FArchive * __thiscall FArchiveUObject::operator<<(FArchiveUObject *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 141ed7070

FArchive * __thiscall FArchiveUObject::operator<<(FArchiveUObject *this,FSoftObjectPtr *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  byte bVar4;
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  bVar4 = this->field_0x28 & 1;
  if ((this->field_0x28 & 4) == 0) {
    if (bVar4 == 0) {
      if ((this->field_0x2b & 3) == 1) {
        return (FArchive *)this;
      }
      pUStackX_8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
      if ((pUStackX_8 != (UObject *)0x0) || (*(longlong *)&param_1->field_0x8 == 0))
      goto LAB_141f10f12;
      pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&param_1->field_0x8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
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
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
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
      (**(code **)(*(longlong *)this + 0x168))(this,&pUStackX_8);
      if ((this->field_0x28 & 1) == 0) {
        if (pUStackX_8 == (UObject *)0x0) {
          return (FArchive *)this;
        }
        if ((this->field_0x2b & 2) == 0) {
          return (FArchive *)this;
        }
      }
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FSoftObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
      return (FArchive *)this;
    }
  }
  else if (bVar4 == 0) goto LAB_141f10f78;
  *(undefined8 *)param_1 = 0;
LAB_141f10f78:
  (**(code **)(*(longlong *)this + 0x140))(this,&param_1->field_0x8);
  return (FArchive *)this;
}

// operator<< @ 141ed7080

FArchive * __thiscall FArchiveUObject::operator<<(FArchiveUObject *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->field_0x2b & 3) != 1) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(*(longlong *)this + 0x168))(this,&pUStackX_8);
    if (((this->field_0x28 & 1) != 0) || ((this->field_0x2b & 2) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// SerializeLazyObjectPtr @ 141f10aa0

FArchive * __cdecl
FArchiveUObject::SerializeLazyObjectPtr(FArchive *param_1,FLazyObjectPtr *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *local_res8;
  UObject *local_res18 [2];
  
  if ((param_1->field_0x2b & 3) == 1) {
    return param_1;
  }
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if ((local_res8 != (UObject *)0x0) ||
     (((*(int *)&param_2->field_0x14 == 0 && *(int *)&param_2->field_0x10 == 0) &&
      *(int *)&param_2->field_0xc == 0) && *(int *)&param_2->field_0x8 == 0)) goto LAB_141f10b7e;
  pUVar2 = FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&param_2->field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
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
    local_res18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)local_res18);
    if (pUVar2 != (UObject *)0x0) goto LAB_141f10b68;
LAB_141f10b76:
    bVar1 = false;
  }
  local_res8 = (UObject *)0x0;
  if (bVar1) {
    local_res8 = pUVar2;
  }
LAB_141f10b7e:
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
  pUVar2 = local_res8;
  if (((param_1->field_0x28 & 1) != 0) ||
     ((local_res8 != (UObject *)0x0 && ((param_1->field_0x2b & 2) != 0)))) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    TPersistentObjectPtr<FUniqueObjectGuid>::operator=
              ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_2,(FObjectPtr)local_res18);
  }
  return param_1;
}

// SerializeObjectPtr @ 141f10d50

FArchive * __cdecl FArchiveUObject::SerializeObjectPtr(FArchive *param_1,FObjectPtr *param_2)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 local_res8;
  
  local_res8.Handle = (UObject *)0xfffffefbf1234567;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8 = (FObjectPtr_u_0)(param_2->field0_0x0).Handle;
  }
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
  FVar1 = local_res8;
  if ((((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 2) != 0)) &&
     (local_res8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    (param_2->field0_0x0).Handle = (UObject *)FVar1;
  }
  return param_1;
}

// SerializeSoftObjectPath @ 141f10df0

FArchive * __cdecl
FArchiveUObject::SerializeSoftObjectPath(FArchive *param_1,FSoftObjectPath *param_2)

{
  FSoftObjectPath::SerializePath(param_2,param_1);
  return param_1;
}

// SerializeSoftObjectPtr @ 141f10e20

FArchive * __cdecl
FArchiveUObject::SerializeSoftObjectPtr(FArchive *param_1,FSoftObjectPtr *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  byte bVar4;
  UObject *local_res8;
  UObject *local_res18 [2];
  
  bVar4 = param_1->field_0x28 & 1;
  if ((param_1->field_0x28 & 4) == 0) {
    if (bVar4 == 0) {
      if ((param_1->field_0x2b & 3) == 1) {
        return param_1;
      }
      local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      if ((local_res8 != (UObject *)0x0) || (*(longlong *)&param_2->field_0x8 == 0))
      goto LAB_141f10f12;
      pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&param_2->field_0x8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
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
        local_res18[0] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)local_res18);
        if (pUVar2 != (UObject *)0x0) goto LAB_141f10ef7;
LAB_141f10f05:
        bVar1 = false;
      }
      local_res8 = (UObject *)0x0;
      if (bVar1) {
        local_res8 = pUVar2;
      }
LAB_141f10f12:
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
      if ((param_1->field_0x28 & 1) == 0) {
        if (local_res8 == (UObject *)0x0) {
          return param_1;
        }
        if ((param_1->field_0x2b & 2) == 0) {
          return param_1;
        }
      }
      local_res18[0] = local_res8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FSoftObjectPtr::operator=(param_2,(FObjectPtr)local_res18);
      return param_1;
    }
  }
  else if (bVar4 == 0) goto LAB_141f10f78;
  *(undefined8 *)param_2 = 0;
LAB_141f10f78:
  (**(code **)(*(longlong *)param_1 + 0x140))(param_1,&param_2->field_0x8);
  return param_1;
}

// SerializeWeakObjectPtr @ 141f11050

FArchive * __cdecl
FArchiveUObject::SerializeWeakObjectPtr(FArchive *param_1,FWeakObjectPtr *param_2)

{
  UObject *local_res8;
  UObject *local_res18 [2];
  
  if ((param_1->field_0x2b & 3) != 1) {
    local_res8 = FWeakObjectPtr::Get(param_2,true);
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
    if (((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 2) != 0)) {
      local_res18[0] = local_res8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(param_2,(FObjectPtr)local_res18);
    }
  }
  return param_1;
}

