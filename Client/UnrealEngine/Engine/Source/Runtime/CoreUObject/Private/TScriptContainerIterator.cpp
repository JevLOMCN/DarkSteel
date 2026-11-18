// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Advance @ 141e90170

void __thiscall
TScriptContainerIterator<FScriptSetHelper>::Advance
          (TScriptContainerIterator<FScriptSetHelper> *this)

{
  int iVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  
  uVar7 = this->InternalIndex + 1;
  this->InternalIndex = uVar7;
  iVar1 = (this->Container->Set->Elements).Data.ArrayNum;
  if (iVar1 <= (int)uVar7) {
    this->LogicalIndex = this->LogicalIndex + 1;
    return;
  }
  do {
    pTVar2 = this->Container->Set;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (pTVar2->Elements).AllocationFlags.NumBits)) {
      if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar3;
      }
      uVar6 = uVar7 & 0x1f;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar7 >> 5) * 4) >> uVar6 & 1) != 0) break;
    }
    this->InternalIndex = this->InternalIndex + 1;
    uVar7 = this->InternalIndex;
  } while ((int)uVar7 < iVar1);
  this->LogicalIndex = this->LogicalIndex + 1;
  return;
}

// TScriptContainerIterator<FScriptMapHelper> @ 14215f6a0

TScriptContainerIterator<FScriptMapHelper> * __thiscall
TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
          (TScriptContainerIterator<FScriptMapHelper> *this,FScriptMapHelper *param_1)

{
  int iVar1;
  bool bVar2;
  int local_res8 [2];
  
  this->Container = param_1;
  this->LogicalIndex = -1;
  local_res8[0] = 0;
  this->InternalIndex = 0;
  iVar1 = (((param_1->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if (0 < iVar1) {
    do {
      bVar2 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this->Container,(<lambda_1> *)local_res8);
      if (bVar2) break;
      this->InternalIndex = this->InternalIndex + 1;
      local_res8[0] = this->InternalIndex;
    } while (local_res8[0] < iVar1);
  }
  this->LogicalIndex = this->LogicalIndex + 1;
  return this;
}

// TScriptContainerIterator<FScriptMapHelper> @ 14215f710

TScriptContainerIterator<FScriptMapHelper> * __thiscall
TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
          (TScriptContainerIterator<FScriptMapHelper> *this,FScriptMapHelper *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar3;
  bool bVar4;
  int local_res8 [2];
  
  this->Container = param_1;
  this->InternalIndex = -1;
  this->LogicalIndex = -1;
  local_res8[0] = -1;
  pTVar3 = (param_1->field2_0x10).FreezableMap;
  iVar1 = (pTVar3->Pairs).Elements.Data.ArrayNum;
  if ((param_1->MapFlags & UsesMemoryImageAllocator) == None) {
    iVar2 = *(int *)&(pTVar3->Pairs).field_0x34;
  }
  else {
    iVar2 = (pTVar3->Pairs).Elements.NumFreeIndices;
  }
  if (iVar1 == iVar1 - iVar2) {
    this->InternalIndex = param_2;
    this->LogicalIndex = param_2;
    return this;
  }
  do {
    local_res8[0] = local_res8[0] + 1;
    this->InternalIndex = local_res8[0];
    iVar2 = (((this->Container->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
    while ((local_res8[0] < iVar2 &&
           (bVar4 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (this->Container,(<lambda_1> *)local_res8), !bVar4))) {
      this->InternalIndex = this->InternalIndex + 1;
      local_res8[0] = this->InternalIndex;
    }
    this->LogicalIndex = this->LogicalIndex + 1;
  } while ((this->LogicalIndex < param_2) &&
          (local_res8[0] = this->InternalIndex, local_res8[0] < iVar1));
  return this;
}

// TScriptContainerIterator<FScriptSetHelper> @ 14215f7e0

TScriptContainerIterator<FScriptSetHelper> * __thiscall
TScriptContainerIterator<FScriptSetHelper>::TScriptContainerIterator<FScriptSetHelper>
          (TScriptContainerIterator<FScriptSetHelper> *this,FScriptSetHelper *param_1,int param_2)

{
  int iVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  TScriptContainerIterator<FScriptSetHelper> *pTVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  
  this->Container = param_1;
  iVar7 = -1;
  this->InternalIndex = -1;
  this->LogicalIndex = -1;
  iVar1 = (param_1->Set->Elements).Data.ArrayNum;
  if ((param_1->Set->Elements).NumFreeIndices == 0) {
    this->InternalIndex = param_2;
    this->LogicalIndex = param_2;
    return this;
  }
  do {
    uVar9 = iVar7 + 1;
    this->InternalIndex = uVar9;
    iVar7 = (this->Container->Set->Elements).Data.ArrayNum;
    while ((int)uVar9 < iVar7) {
      pTVar2 = this->Container->Set;
      if ((-1 < (int)uVar9) && ((int)uVar9 < (pTVar2->Elements).AllocationFlags.NumBits)) {
        if (((pTVar2->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar6 = (TScriptContainerIterator<FScriptSetHelper> *)(*pcVar4)();
          return pTVar6;
        }
        FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        uVar8 = uVar9 & 0x1f;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4) >> uVar8 & 1) != 0)
        break;
      }
      this->InternalIndex = this->InternalIndex + 1;
      uVar9 = this->InternalIndex;
    }
    this->LogicalIndex = this->LogicalIndex + 1;
    if ((param_2 <= this->LogicalIndex) || (iVar7 = this->InternalIndex, iVar1 <= iVar7)) {
      return this;
    }
  } while( true );
}

// operator++ @ 142164860

TScriptContainerIterator<FScriptMapHelper> * __thiscall
TScriptContainerIterator<FScriptMapHelper>::operator++
          (TScriptContainerIterator<FScriptMapHelper> *this)

{
  int iVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = this->InternalIndex + 1;
  this->InternalIndex = local_res8[0];
  iVar1 = (((this->Container->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
  while ((local_res8[0] < iVar1 &&
         (bVar2 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (this->Container,(<lambda_1> *)local_res8), !bVar2))) {
    this->InternalIndex = this->InternalIndex + 1;
    local_res8[0] = this->InternalIndex;
  }
  this->LogicalIndex = this->LogicalIndex + 1;
  return this;
}

