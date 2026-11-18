// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// TBaseKeyIterator<1> @ 14617de40

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
          *param_1,TObjectPtr<UObject_const_> param_2)

{
  UObject *pUVar1;
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  this->Set = param_1;
  pUVar1 = *(UObject **)param_2.field0_0x0;
  (this->Key).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = this->Set;
  this->Index = -1;
  iVar5 = pTVar2->HashSize;
  if (iVar5 != 0) {
    pUVar1 = (this->Key).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      iVar5 = pTVar2->HashSize;
    }
    FVar4 = (pTVar2->Hash).SecondaryData;
    uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    this->NextIndex =
         *(int *)((longlong)FVar4 +
                 (((ulonglong)(uVar3 >> 0x10) ^ (longlong)(int)uVar3) & (longlong)iVar5 - 1U) * 4);
    operator++(this);
    return this;
  }
  this->NextIndex = -1;
  return this;
}

// TBaseKeyIterator<0> @ 14617df30

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
          *param_1,TObjectPtr<UObject_const_> param_2)

{
  UObject *pUVar1;
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  this->Set = param_1;
  pUVar1 = *(UObject **)param_2.field0_0x0;
  (this->Key).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = this->Set;
  this->Index = -1;
  iVar5 = pTVar2->HashSize;
  if (iVar5 != 0) {
    pUVar1 = (this->Key).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      iVar5 = pTVar2->HashSize;
    }
    FVar4 = (pTVar2->Hash).SecondaryData;
    uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    this->NextIndex =
         *(int *)((longlong)FVar4 +
                 (((ulonglong)(uVar3 >> 0x10) ^ (longlong)(int)uVar3) & (longlong)iVar5 - 1U) * 4);
    operator++(this);
    return this;
  }
  this->NextIndex = -1;
  return this;
}

// operator++ @ 146188030

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  UObject *pUVar1;
  UObject *pUVar2;
  int iVar3;
  
  iVar3 = this->NextIndex;
  this->Index = iVar3;
  if (iVar3 == -1) {
    return this;
  }
  while( true ) {
    pUVar1 = (this->Key).field0_0x0.DebugPtr;
    this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar3 * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar2 = *(UObject **)(*(longlong *)&this->Set->Elements + (longlong)this->Index * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (pUVar2 == pUVar1) break;
    iVar3 = this->NextIndex;
    this->Index = iVar3;
    if (iVar3 == -1) {
      return this;
    }
  }
  return this;
}

// operator++ @ 1461880f0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  UObject *pUVar1;
  UObject *pUVar2;
  int iVar3;
  
  iVar3 = this->NextIndex;
  this->Index = iVar3;
  if (iVar3 == -1) {
    return this;
  }
  while( true ) {
    pUVar1 = (this->Key).field0_0x0.DebugPtr;
    this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar3 * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar2 = *(UObject **)(*(longlong *)&this->Set->Elements + (longlong)this->Index * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (pUVar2 == pUVar1) break;
    iVar3 = this->NextIndex;
    this->Index = iVar3;
    if (iVar3 == -1) {
      return this;
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 1461fc230

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FGuid_const_> param_2)

{
  FGuid *pFVar1;
  ulong64 uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar2 = CityHash64((char *)param_2.Ref,0x10);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar2) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar1 = this->Key;
      while( true ) {
        lVar3 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x14 + lVar3 * 0x1c);
        this->NextIndex = iVar6;
        puVar5 = (uint *)(*(longlong *)&this->Set->Elements + lVar3 * 0x1c);
        if (((puVar5[2] == pFVar1->C && puVar5[1] == pFVar1->B) && puVar5[3] == pFVar1->D) &&
            pFVar1->A == *puVar5) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 146200800

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  FGuid *pFVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  if (iVar4 != -1) {
    pFVar1 = this->Key;
    do {
      lVar2 = (longlong)iVar4;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x14 + lVar2 * 0x1c);
      this->NextIndex = iVar4;
      puVar3 = (uint *)(*(longlong *)&this->Set->Elements + lVar2 * 0x1c);
      if (((puVar3[3] == pFVar1->D && puVar3[2] == pFVar1->C) && puVar3[1] == pFVar1->B) &&
          pFVar1->A == *puVar3) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

