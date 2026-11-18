// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// TBaseKeyIterator<1> @ 146e7fcd0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          *param_1,TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->Set = param_1;
  (this->Key).WeakPtr = param_2.WeakPtr;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(param_2.WeakPtr.ObjectSerialNumber ^ param_2.WeakPtr.ObjectIndex) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar2;
    this->Index = iVar2;
    if (iVar2 != -1) {
      while( true ) {
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar2 * 0x18);
        local_res8 = (this->Key).WeakPtr;
        local_res10[0] =
             *(FWeakObjectPtr *)((longlong)iVar2 * 0x18 + *(longlong *)&this->Set->Elements);
        bVar1 = TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>::
                UEOpEquals<UBlackboardData_const_,bool>
                          ((TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)local_res10,
                           (TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar1) break;
        iVar2 = this->NextIndex;
        this->Index = iVar2;
        if (iVar2 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 146e7fda0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          *param_1,TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->Set = param_1;
  (this->Key).WeakPtr = param_2.WeakPtr;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(param_2.WeakPtr.ObjectSerialNumber ^ param_2.WeakPtr.ObjectIndex) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar2;
    this->Index = iVar2;
    if (iVar2 != -1) {
      while( true ) {
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar2 * 0x18);
        local_res8 = (this->Key).WeakPtr;
        local_res10[0] =
             *(FWeakObjectPtr *)((longlong)iVar2 * 0x18 + *(longlong *)&this->Set->Elements);
        bVar1 = TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>::
                UEOpEquals<UBlackboardData_const_,bool>
                          ((TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)local_res10,
                           (TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res8);
        if (bVar1) break;
        iVar2 = this->NextIndex;
        this->Index = iVar2;
        if (iVar2 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 146e822b0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  iVar1 = this->NextIndex;
  this->Index = iVar1;
  while( true ) {
    if (iVar1 == -1) {
      return this;
    }
    this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar1 * 0x18);
    local_res8 = (this->Key).WeakPtr;
    local_res10[0] = *(FWeakObjectPtr *)((longlong)iVar1 * 0x18 + *(longlong *)&this->Set->Elements)
    ;
    bVar2 = TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>::
            UEOpEquals<UBlackboardData_const_,bool>
                      ((TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)local_res10,
                       (TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res8);
    if (bVar2) break;
    iVar1 = this->NextIndex;
    this->Index = iVar1;
  }
  return this;
}

// TBaseKeyIterator<0> @ 146ec4450

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
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

