// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// TBaseKeyIterator<1> @ 141e82d20

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<1> @ 141e82df0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<0> @ 141e82ec0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<0> @ 141e82f90

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<1> @ 141ed1250

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FEventLoadNodePtr_const_> param_2)

{
  longlong *plVar1;
  FAsyncPackage *pFVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    pFVar2 = ((param_2.Ref)->WaitingPackage).Package;
    FVar6 = (param_1->Hash).SecondaryData;
    uVar4 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 +
                    ((longlong)
                     (int)(((param_2.Ref)->Phase << 0xe ^ ((param_2.Ref)->ImportOrExportIndex).Index
                           ) << 0xd ^ uVar4 >> 0x10 ^ uVar4) & (longlong)param_1->HashSize - 1U) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar3 = (longlong)iVar5;
        iVar5 = *(int *)(*(longlong *)&param_1->Elements + 0x20 + lVar3 * 0x28);
        this->NextIndex = iVar5;
        plVar1 = (longlong *)(*(longlong *)&param_1->Elements + lVar3 * 0x28);
        if ((((FAsyncPackage *)*plVar1 == ((param_2.Ref)->WaitingPackage).Package) &&
            ((int)plVar1[1] == ((param_2.Ref)->ImportOrExportIndex).Index)) &&
           (*(EEventLoadNode *)((longlong)plVar1 + 0xc) == (param_2.Ref)->Phase)) break;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 141ed1340

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,FEDLBootWaitingPackage>,TDefaultMapHashableKeyFuncs<FName,FEDLBootWaitingPackage,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x18 + lVar2 * 0x20);
        this->NextIndex = iVar3;
        if (*(FName *)(lVar2 * 0x20 + *(longlong *)&this->Set->Elements) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 141ed77b0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong *plVar1;
  FEventLoadNodePtr *pFVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  if (iVar4 != -1) {
    pFVar2 = this->Key;
    do {
      lVar3 = (longlong)iVar4;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar3 * 0x28);
      this->NextIndex = iVar4;
      plVar1 = (longlong *)(*(longlong *)&this->Set->Elements + lVar3 * 0x28);
      if ((((FAsyncPackage *)*plVar1 == (pFVar2->WaitingPackage).Package) &&
          ((int)plVar1[1] == (pFVar2->ImportOrExportIndex).Index)) &&
         (*(EEventLoadNode *)((longlong)plVar1 + 0xc) == pFVar2->Phase)) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

// TBaseKeyIterator<1> @ 141f20430

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<0> @ 141f20500

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
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

// TBaseKeyIterator<1> @ 1421fd6d0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
          *param_1,FLinkerLoad *param_2)

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
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x20 + lVar1 * 0x28);
        this->NextIndex = iVar4;
        if (*(FLinkerLoad **)(*(longlong *)&param_1->Elements + lVar1 * 0x28) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 1423071d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
          *param_1,FEventLoadNode2 *param_2)

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
        if (*(FEventLoadNode2 **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 1423072a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
          *param_1,FEventLoadNode2 *param_2)

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
        if (*(FEventLoadNode2 **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

