// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// TBaseKeyIterator<0> @ 144265930

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
          *param_1,UObject *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(UObject **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 144265a00

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Net::FNetRefHandle_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
    return this;
  }
  FVar4 = (param_1->Hash).SecondaryData;
  uVar3 = ((param_2.Ref)->field0_0x0).Value & 0x3fffffffffffff;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
  }
  iVar1 = *(int *)((longlong)FVar4 +
                  ((longlong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3) &
                  (longlong)param_1->HashSize - 1U) * 4);
  this->NextIndex = iVar1;
  this->Index = iVar1;
  while( true ) {
    if (iVar1 == -1) {
      return this;
    }
    lVar2 = (longlong)iVar1;
    iVar1 = *(int *)(*(longlong *)&param_1->Elements + 0x38 + lVar2 * 0x40);
    this->NextIndex = iVar1;
    if (((*(ulonglong *)(*(longlong *)&param_1->Elements + lVar2 * 0x40) ^
         ((param_2.Ref)->field0_0x0).Value) & 0x3fffffffffffff) == 0) break;
    this->Index = iVar1;
  }
  return this;
}

// TBaseKeyIterator<0> @ 144265ac0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Net::FNetRefHandle_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
    return this;
  }
  FVar4 = (param_1->Hash).SecondaryData;
  uVar3 = ((param_2.Ref)->field0_0x0).Value & 0x3fffffffffffff;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
  }
  iVar1 = *(int *)((longlong)FVar4 +
                  ((longlong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3) &
                  (longlong)param_1->HashSize - 1U) * 4);
  this->NextIndex = iVar1;
  this->Index = iVar1;
  while( true ) {
    if (iVar1 == -1) {
      return this;
    }
    lVar2 = (longlong)iVar1;
    iVar1 = *(int *)(*(longlong *)&param_1->Elements + 0x18 + lVar2 * 0x20);
    this->NextIndex = iVar1;
    if (((*(ulonglong *)(*(longlong *)&param_1->Elements + lVar2 * 0x20) ^
         ((param_2.Ref)->field0_0x0).Value) & 0x3fffffffffffff) == 0) break;
    this->Index = iVar1;
  }
  return this;
}

// TBaseKeyIterator<1> @ 1442ad250

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
          *param_1,FReplicationStateDescriptor *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(FReplicationStateDescriptor **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) ==
            param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 1442ad320

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Net::FNetRefHandle_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
    return this;
  }
  FVar4 = (param_1->Hash).SecondaryData;
  uVar3 = ((param_2.Ref)->field0_0x0).Value & 0x3fffffffffffff;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
  }
  iVar1 = *(int *)((longlong)FVar4 +
                  ((longlong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3) &
                  (longlong)param_1->HashSize - 1U) * 4);
  this->NextIndex = iVar1;
  this->Index = iVar1;
  while( true ) {
    if (iVar1 == -1) {
      return this;
    }
    lVar2 = (longlong)iVar1;
    iVar1 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar2 * 0x18);
    this->NextIndex = iVar1;
    if (((*(ulonglong *)(*(longlong *)&param_1->Elements + lVar2 * 0x18) ^
         ((param_2.Ref)->field0_0x0).Value) & 0x3fffffffffffff) == 0) break;
    this->Index = iVar1;
  }
  return this;
}

// TBaseKeyIterator<0> @ 1442ad3e0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
          *param_1,FReplicationStateDescriptor *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(FReplicationStateDescriptor **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) ==
            param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 1442ad4b0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UE::Net::FNetRefHandle_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
    return this;
  }
  FVar4 = (param_1->Hash).SecondaryData;
  uVar3 = ((param_2.Ref)->field0_0x0).Value & 0x3fffffffffffff;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
  }
  iVar1 = *(int *)((longlong)FVar4 +
                  ((longlong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3) &
                  (longlong)param_1->HashSize - 1U) * 4);
  this->NextIndex = iVar1;
  this->Index = iVar1;
  while( true ) {
    if (iVar1 == -1) {
      return this;
    }
    lVar2 = (longlong)iVar1;
    iVar1 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar2 * 0x18);
    this->NextIndex = iVar1;
    if (((*(ulonglong *)(*(longlong *)&param_1->Elements + lVar2 * 0x18) ^
         ((param_2.Ref)->field0_0x0).Value) & 0x3fffffffffffff) == 0) break;
    this->Index = iVar1;
  }
  return this;
}

