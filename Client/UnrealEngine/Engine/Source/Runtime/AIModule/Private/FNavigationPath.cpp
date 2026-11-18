// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// GetLength @ 146f56db0

double __thiscall FNavigationPath::GetLength(FNavigationPath *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  bool bVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  iVar1 = (this->PathPoints).ArrayNum;
  if (iVar1 == 0) {
    return 0.0;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x58);
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      dVar4 = (double)(*pcVar2)();
      return dVar4;
    }
  }
  pFVar3 = (this->PathPoints).AllocatorInstance.Data;
  local_28 = *(undefined4 *)pFVar3;
  uStack_24 = *(undefined4 *)(pFVar3 + 4);
  uStack_20 = *(undefined4 *)(pFVar3 + 8);
  uStack_1c = *(undefined4 *)(pFVar3 + 0xc);
  local_18 = *(undefined8 *)(pFVar3 + 0x10);
  dVar4 = (double)(*pcVar2)(this,&local_28,1);
  return dVar4;
}

// CastPath<FAbstractNavigationPath> @ 146f87d80

FAbstractNavigationPath * __thiscall
FNavigationPath::CastPath<FAbstractNavigationPath>(FNavigationPath *this)

{
  FNavPathType *this_00;
  bool bVar1;
  FNavigationPath *pFVar2;
  
  if ((this->PathType).Id == FAbstractNavigationPath::Type.Id) {
LAB_146f87db7:
    bVar1 = true;
  }
  else {
    this_00 = (this->PathType).ParentType;
    if (this_00 != (FNavPathType *)0x0) {
      bVar1 = FNavPathType::IsA(this_00,&FAbstractNavigationPath::Type);
      if (bVar1) goto LAB_146f87db7;
    }
    bVar1 = false;
  }
  pFVar2 = (FNavigationPath *)0x0;
  if (bVar1) {
    pFVar2 = this;
  }
  return (FAbstractNavigationPath *)pFVar2;
}

// CastPath<FMetaNavMeshPath> @ 146f87de0

FMetaNavMeshPath * __thiscall FNavigationPath::CastPath<FMetaNavMeshPath>(FNavigationPath *this)

{
  FNavPathType *this_00;
  bool bVar1;
  FMetaNavMeshPath *pFVar2;
  
  if ((this->PathType).Id == FMetaNavMeshPath::Type.Id) {
LAB_146f87e17:
    bVar1 = true;
  }
  else {
    this_00 = (this->PathType).ParentType;
    if (this_00 != (FNavPathType *)0x0) {
      bVar1 = FNavPathType::IsA(this_00,&FMetaNavMeshPath::Type);
      if (bVar1) goto LAB_146f87e17;
    }
    bVar1 = false;
  }
  pFVar2 = (FMetaNavMeshPath *)0x0;
  if (bVar1) {
    pFVar2 = (FMetaNavMeshPath *)this;
  }
  return pFVar2;
}

// GetDestinationLocation @ 146fafdd0

TVector<double> * __thiscall
FNavigationPath::GetDestinationLocation
          (FNavigationPath *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  
  if (((this->bIsReady == 0) || ((this->PathPoints).ArrayNum < 2)) || (this->bUpToDate == 0)) {
    pTVar7 = &UE::Math::TVector<double>::ZeroVector;
  }
  else {
    iVar2 = (this->PathPoints).ArrayNum;
    uVar8 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar2) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pTVar7 = (TVector<double> *)
             ((this->PathPoints).AllocatorInstance.Data +
             (longlong)((this->PathPoints).ArrayNum + -1) * 0x30);
  }
  dVar4 = *(double *)((longlong)pTVar7 + 8);
  dVar1 = *(double *)((longlong)pTVar7 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pTVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetGoalActorAsNavAgent @ 146fb0d80

INavAgentInterface * __thiscall FNavigationPath::GetGoalActorAsNavAgent(FNavigationPath *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  if (bVar1) {
    return this->GoalActorAsNavAgent;
  }
  return (INavAgentInterface *)0x0;
}

