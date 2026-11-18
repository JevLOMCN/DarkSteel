// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FGeometryCollectionResults @ 1440fd080

FGeometryCollectionResults * __thiscall
FGeometryCollectionResults::FGeometryCollectionResults(FGeometryCollectionResults *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = (longlong)&___7FGeometryCollectionResults__6B_;
  (this->ModifiedTransformIndices).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ModifiedTransformIndices).NumBits = 0;
  (this->ModifiedTransformIndices).MaxBits = 0x80;
  this->IsObjectDynamic = '\0';
  this->IsRootBroken = '\0';
  this->IsObjectLoading = '\0';
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  (this->States).ArrayMax = 0;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = 0;
  (this->Positions).ArrayMax = 0;
  (this->Velocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Velocities).ArrayNum = 0;
  (this->Velocities).ArrayMax = 0;
  return this;
}

// AddEntry @ 144105850

int __thiscall FGeometryCollectionResults::AddEntry(FGeometryCollectionResults *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  
  if ((param_1 < 0) || ((this->ModifiedTransformIndices).NumBits <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  FVar7 = (this->ModifiedTransformIndices).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->ModifiedTransformIndices;
  }
  puVar2 = (uint *)((longlong)FVar7 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  piVar1 = &(this->States).ArrayMax;
  *puVar2 = *puVar2 | 1 << ((byte)param_1 & 0x1f);
  iVar5 = (this->States).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->States).AllocatorInstance,piVar1);
  }
  (this->States).ArrayNum = iVar5 + 1;
  iVar6 = GetEntryIndexByTransformIndex(this,param_1);
  if (iVar6 != iVar5) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1350036477446192806>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollectionProxyData.h"
                       ,0x15a,"GetEntryIndexByTransformIndex(TransformIndex) == EntryIndex");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar6 = (this->Positions).ArrayNum;
  piVar1 = &(this->Positions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Positions).AllocatorInstance,piVar1);
  }
  (this->Positions).ArrayNum = iVar6 + 1;
  DefaultConstructItems<FGeometryCollectionResults::FPositionData,int>
            ((this->Positions).AllocatorInstance.Data + (longlong)iVar6 * 0x40,1);
  iVar6 = (this->Velocities).ArrayNum;
  piVar1 = &(this->Velocities).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&(this->Velocities).AllocatorInstance,piVar1);
  }
  (this->Velocities).ArrayNum = iVar6 + 1;
  return iVar5;
}

// GetEntryIndexByTransformIndex @ 14411ae00

int __thiscall
FGeometryCollectionResults::GetEntryIndexByTransformIndex
          (FGeometryCollectionResults *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  
  if (((param_1 < 0) || ((this->ModifiedTransformIndices).NumBits <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar11 = (this->ModifiedTransformIndices).AllocatorInstance.SecondaryData;
  FVar10 = FVar11;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar10 = (ForElementType<unsigned_int>)&this->ModifiedTransformIndices;
  }
  if ((*(uint *)((longlong)FVar10 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) == 0) {
    return -1;
  }
  uVar8 = param_1 + 1;
  if (uVar8 == 0xffffffff) {
    uVar8 = (this->ModifiedTransformIndices).NumBits;
  }
  iVar6 = 0;
  uVar12 = 0;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&this->ModifiedTransformIndices;
  }
  iVar7 = (int)(uVar8 + 0x1f + ((int)(uVar8 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
  uVar8 = uVar8 & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar8) & 0x1f);
  if (0x1f < (int)(0x20 - uVar8)) {
    uVar3 = 0xffffffff;
  }
  uVar8 = 0xffffffff;
  if (iVar7 == 1) {
    uVar8 = uVar3;
  }
  if (0 < iVar7) {
    do {
      uVar1 = *(uint *)((longlong)FVar11 + (ulonglong)uVar12 * 4);
      uVar4 = uVar8 & uVar1;
      if (uVar8 == 0xffffffff) {
        uVar4 = uVar1;
      }
      uVar12 = uVar12 + 1;
      uVar9 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      iVar6 = iVar6 + (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                  0x38);
      uVar8 = 0xffffffff;
      if (uVar12 == iVar7 - 1U) {
        uVar8 = uVar3;
      }
    } while ((int)uVar12 < iVar7);
  }
  return iVar6 + -1;
}

// GetPositions @ 14411be70

FPositionData * __thiscall
FGeometryCollectionResults::GetPositions(FGeometryCollectionResults *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPositionData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Positions).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPositionData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPositionData *)((this->Positions).AllocatorInstance.Data + (longlong)param_1 * 0x40);
}

// GetVelocities @ 14411c720

FVelocityData * __thiscall
FGeometryCollectionResults::GetVelocities(FGeometryCollectionResults *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVelocityData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Velocities).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVelocityData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVelocityData *)((this->Velocities).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// Reset @ 14412b9d0

void __thiscall FGeometryCollectionResults::Reset(FGeometryCollectionResults *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  this->SolverDt = 0.0;
  (this->ModifiedTransformIndices).NumBits = 0;
  piVar1 = &(this->States).ArrayMax;
  (this->States).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->States).AllocatorInstance,0,piVar1);
  }
  (this->Positions).ArrayNum = 0;
  if ((this->Positions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->Positions).AllocatorInstance,0,&(this->Positions).ArrayMax);
  }
  (this->Velocities).ArrayNum = 0;
  if ((this->Velocities).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->Velocities).AllocatorInstance,0,&(this->Velocities).ArrayMax);
  }
  this->IsObjectDynamic = '\0';
  this->IsRootBroken = '\0';
  this->IsObjectLoading = '\0';
  return;
}

