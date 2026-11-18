// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 5

// StaticStruct @ 14df6c750

UScriptStruct * __cdecl FRigUnit_FullbodyIK_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FullBodyIK();
    Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData,(UObject *)pUVar1,
                         L"RigUnit_FullbodyIK_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FullbodyIK_WorkData.OuterSingleton;
}

// FRigUnit_FullbodyIK_WorkData @ 14df73e00

FRigUnit_FullbodyIK_WorkData * __thiscall
FRigUnit_FullbodyIK_WorkData::FRigUnit_FullbodyIK_WorkData(FRigUnit_FullbodyIK_WorkData *this)

{
  (this->LinkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkData).ArrayNum = 0;
  (this->LinkData).ArrayMax = 0;
  *(undefined8 *)&this->EffectorTargets = 0;
  *(undefined8 *)&(this->EffectorTargets).field_0x8 = 0;
  *(undefined8 *)&(this->EffectorTargets).field_0x20 = 0;
  *(undefined4 *)&(this->EffectorTargets).field_0x28 = 0;
  *(undefined4 *)&(this->EffectorTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->EffectorTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EffectorTargets).field_0x34 = 0;
  *(undefined8 *)&(this->EffectorTargets).field_0x40 = 0;
  *(undefined4 *)&(this->EffectorTargets).field_0x48 = 0;
  (this->EffectorLinkIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectorLinkIndices).ArrayNum = 0;
  (this->EffectorLinkIndices).ArrayMax = 0;
  *(undefined8 *)&this->LinkDataToHierarchyIndices = 0;
  *(undefined8 *)&(this->LinkDataToHierarchyIndices).field_0x8 = 0;
  *(undefined8 *)&(this->LinkDataToHierarchyIndices).field_0x20 = 0;
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x28 = 0;
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x34 = 0;
  *(undefined8 *)&(this->LinkDataToHierarchyIndices).field_0x40 = 0;
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x48 = 0;
  *(undefined8 *)&this->HierarchyToLinkDataMap = 0;
  *(undefined8 *)&(this->HierarchyToLinkDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->HierarchyToLinkDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->HierarchyToLinkDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x48 = 0;
  (this->InternalConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalConstraints).ArrayNum = 0;
  (this->InternalConstraints).ArrayMax = 0;
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)&this->IKSolver);
  *(undefined ***)&this->IKSolver = &___7FJacobianSolver_FullbodyIK__6B_;
  (this->DebugData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).ArrayNum = 0;
  (this->DebugData).ArrayMax = 0;
  return this;
}

// ~FRigUnit_FullbodyIK_WorkData @ 14df742d0

void __thiscall
FRigUnit_FullbodyIK_WorkData::~FRigUnit_FullbodyIK_WorkData(FRigUnit_FullbodyIK_WorkData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FJacobianDebugData,int>
            ((FJacobianDebugData *)(this->DebugData).AllocatorInstance.Data,
             (this->DebugData).ArrayNum);
  pFVar1 = (this->DebugData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJacobianSolverBase::~FJacobianSolverBase((FJacobianSolverBase *)&this->IKSolver);
  pFVar1 = (this->InternalConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HierarchyToLinkDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HierarchyToLinkDataMap);
  *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LinkDataToHierarchyIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LinkDataToHierarchyIndices);
  pFVar1 = (this->EffectorLinkIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EffectorTargets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EffectorTargets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EffectorTargets);
  DestructItems<FFBIKLinkData,int>
            ((FFBIKLinkData *)(this->LinkData).AllocatorInstance.Data,(this->LinkData).ArrayNum);
  pFVar1 = (this->LinkData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14df74830

FRigUnit_FullbodyIK_WorkData * __thiscall
FRigUnit_FullbodyIK_WorkData::operator=
          (FRigUnit_FullbodyIK_WorkData *this,FRigUnit_FullbodyIK_WorkData *param_1)

{
  TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
  *pTVar1;
  TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
  *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
  *pTVar6;
  TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
  *pTVar7;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar8;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar9;
  TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
  *pTVar11;
  TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  void *pvVar14;
  TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *pTVar15;
  
  if (this != param_1) {
    DestructItems<FFBIKLinkData,int>
              ((FFBIKLinkData *)(this->LinkData).AllocatorInstance.Data,(this->LinkData).ArrayNum);
    pFVar13 = (this->LinkData).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (this->LinkData).AllocatorInstance.Data = (param_1->LinkData).AllocatorInstance.Data;
    (param_1->LinkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LinkData).ArrayNum = (param_1->LinkData).ArrayNum;
    (this->LinkData).ArrayMax = (param_1->LinkData).ArrayMax;
    (param_1->LinkData).ArrayNum = 0;
    (param_1->LinkData).ArrayMax = 0;
  }
  pTVar1 = &param_1->EffectorTargets;
  this_00 = &this->EffectorTargets;
  if (this_00 != pTVar1) {
    TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->EffectorTargets).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar2 = &(param_1->EffectorTargets).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar1;
    puVar3 = &(this->EffectorTargets).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->EffectorTargets).field_0x8 =
         *(undefined4 *)&(param_1->EffectorTargets).field_0x8;
    *(undefined4 *)&(this->EffectorTargets).field_0xc =
         *(undefined4 *)&(param_1->EffectorTargets).field_0xc;
    *(undefined8 *)&(param_1->EffectorTargets).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->EffectorTargets).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar14 = *(void **)&(this->EffectorTargets).field_0x20;
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
      *(undefined8 *)&(this->EffectorTargets).field_0x20 =
           *(undefined8 *)&(param_1->EffectorTargets).field_0x20;
      *(undefined8 *)&(param_1->EffectorTargets).field_0x20 = 0;
      *(undefined4 *)&(this->EffectorTargets).field_0x28 =
           *(undefined4 *)&(param_1->EffectorTargets).field_0x28;
      *(undefined4 *)&(this->EffectorTargets).field_0x2c =
           *(undefined4 *)&(param_1->EffectorTargets).field_0x2c;
      *(undefined8 *)&(param_1->EffectorTargets).field_0x28 = 0;
    }
    *(undefined4 *)&(this->EffectorTargets).field_0x30 =
         *(undefined4 *)&(param_1->EffectorTargets).field_0x30;
    *(undefined4 *)&(this->EffectorTargets).field_0x34 =
         *(undefined4 *)&(param_1->EffectorTargets).field_0x34;
    *(undefined4 *)&(param_1->EffectorTargets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->EffectorTargets).field_0x34 = 0;
    if (*(longlong *)&(param_1->EffectorTargets).field_0x40 == 0) {
      *(undefined4 *)&(this->EffectorTargets).field_0x38 =
           *(undefined4 *)&(param_1->EffectorTargets).field_0x38;
    }
    pvVar14 = *(void **)&(this->EffectorTargets).field_0x40;
    if (pvVar14 != (void *)0x0) {
      FMemory::Free(pvVar14);
    }
    *(undefined8 *)&(this->EffectorTargets).field_0x40 =
         *(undefined8 *)&(param_1->EffectorTargets).field_0x40;
    *(undefined8 *)&(param_1->EffectorTargets).field_0x40 = 0;
    *(undefined4 *)&(this->EffectorTargets).field_0x48 =
         *(undefined4 *)&(param_1->EffectorTargets).field_0x48;
    *(undefined4 *)&(param_1->EffectorTargets).field_0x48 = 0;
  }
  pTVar4 = &param_1->EffectorLinkIndices;
  pTVar5 = &this->EffectorLinkIndices;
  if (pTVar5 != pTVar4) {
    pFVar13 = (pTVar5->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EffectorLinkIndices).ArrayNum = (param_1->EffectorLinkIndices).ArrayNum;
    (this->EffectorLinkIndices).ArrayMax = (param_1->EffectorLinkIndices).ArrayMax;
    (param_1->EffectorLinkIndices).ArrayNum = 0;
    (param_1->EffectorLinkIndices).ArrayMax = 0;
  }
  pTVar6 = &param_1->LinkDataToHierarchyIndices;
  pTVar7 = &this->LinkDataToHierarchyIndices;
  if (pTVar7 != pTVar6) {
    if (*(void **)pTVar7 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar7);
    }
    puVar2 = &(param_1->LinkDataToHierarchyIndices).field_0x10;
    *(undefined8 *)pTVar7 = *(undefined8 *)pTVar6;
    puVar3 = &(this->LinkDataToHierarchyIndices).field_0x10;
    *(undefined8 *)pTVar6 = 0;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x8 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x8;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0xc =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0xc;
    *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->LinkDataToHierarchyIndices).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar14 = *(void **)&(this->LinkDataToHierarchyIndices).field_0x20;
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
      *(undefined8 *)&(this->LinkDataToHierarchyIndices).field_0x20 =
           *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x20;
      *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x20 = 0;
      *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x28 =
           *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x28;
      *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x2c =
           *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x2c;
      *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x28 = 0;
    }
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x30 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x30;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x34 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x34;
    *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x34 = 0;
    if (*(longlong *)&(param_1->LinkDataToHierarchyIndices).field_0x40 == 0) {
      *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x38 =
           *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x38;
    }
    pvVar14 = *(void **)&(this->LinkDataToHierarchyIndices).field_0x40;
    if (pvVar14 != (void *)0x0) {
      FMemory::Free(pvVar14);
    }
    *(undefined8 *)&(this->LinkDataToHierarchyIndices).field_0x40 =
         *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x40;
    *(undefined8 *)&(param_1->LinkDataToHierarchyIndices).field_0x40 = 0;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x48 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x48;
    *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x48 = 0;
  }
  pTVar8 = &param_1->HierarchyToLinkDataMap;
  pTVar9 = &this->HierarchyToLinkDataMap;
  if (pTVar9 != pTVar8) {
    if (*(void **)pTVar9 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar9);
    }
    puVar2 = &(param_1->HierarchyToLinkDataMap).field_0x10;
    *(undefined8 *)pTVar9 = *(undefined8 *)pTVar8;
    puVar3 = &(this->HierarchyToLinkDataMap).field_0x10;
    *(undefined8 *)pTVar8 = 0;
    *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x8 =
         *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x8;
    *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0xc =
         *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0xc;
    *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->HierarchyToLinkDataMap).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar14 = *(void **)&(this->HierarchyToLinkDataMap).field_0x20;
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
      *(undefined8 *)&(this->HierarchyToLinkDataMap).field_0x20 =
           *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x20;
      *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x20 = 0;
      *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x28 =
           *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x28;
      *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x2c =
           *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x2c;
      *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x30 =
         *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x30;
    *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x34 =
         *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x34;
    *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->HierarchyToLinkDataMap).field_0x40 == 0) {
      *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x38 =
           *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x38;
    }
    pvVar14 = *(void **)&(this->HierarchyToLinkDataMap).field_0x40;
    if (pvVar14 != (void *)0x0) {
      FMemory::Free(pvVar14);
    }
    *(undefined8 *)&(this->HierarchyToLinkDataMap).field_0x40 =
         *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x40;
    *(undefined8 *)&(param_1->HierarchyToLinkDataMap).field_0x40 = 0;
    *(undefined4 *)&(this->HierarchyToLinkDataMap).field_0x48 =
         *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x48;
    *(undefined4 *)&(param_1->HierarchyToLinkDataMap).field_0x48 = 0;
  }
  pTVar10 = &param_1->InternalConstraints;
  pTVar11 = &this->InternalConstraints;
  if (pTVar11 != pTVar10) {
    pFVar13 = (pTVar11->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar11->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InternalConstraints).ArrayNum = (param_1->InternalConstraints).ArrayNum;
    (this->InternalConstraints).ArrayMax = (param_1->InternalConstraints).ArrayMax;
    (param_1->InternalConstraints).ArrayNum = 0;
    (param_1->InternalConstraints).ArrayMax = 0;
  }
  FJacobianSolverBase::operator=
            ((FJacobianSolverBase *)&this->IKSolver,(FJacobianSolverBase *)&param_1->IKSolver);
  pTVar12 = &this->DebugData;
  pTVar15 = &param_1->DebugData;
  if (pTVar12 != pTVar15) {
    DestructItems<FJacobianDebugData,int>
              ((FJacobianDebugData *)(pTVar12->AllocatorInstance).Data,(this->DebugData).ArrayNum);
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugData).ArrayNum = (param_1->DebugData).ArrayNum;
    (this->DebugData).ArrayMax = (param_1->DebugData).ArrayMax;
    (param_1->DebugData).ArrayNum = 0;
    (param_1->DebugData).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14df74c10

FRigUnit_FullbodyIK_WorkData * __thiscall
FRigUnit_FullbodyIK_WorkData::operator=
          (FRigUnit_FullbodyIK_WorkData *this,FRigUnit_FullbodyIK_WorkData *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
  *this_00;
  undefined1 *puVar3;
  undefined1 *this_01;
  TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *_Src;
  TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint> *pTVar7;
  FJacobianDebugData *pFVar8;
  
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>::operator=(&this->LinkData,&param_1->LinkData);
  if (&this->EffectorTargets != &param_1->EffectorTargets) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->EffectorTargets).field_0x38,
               (int *)&(this->EffectorTargets).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->EffectorTargets).field_0x38,
               *(int *)&(param_1->EffectorTargets).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->EffectorTargets,
                (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->EffectorTargets);
  }
  pTVar1 = &this->EffectorLinkIndices;
  if (pTVar1 != &param_1->EffectorLinkIndices) {
    iVar6 = (param_1->EffectorLinkIndices).ArrayNum;
    piVar2 = &(this->EffectorLinkIndices).ArrayMax;
    _Src = (param_1->EffectorLinkIndices).AllocatorInstance.Data;
    (this->EffectorLinkIndices).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar6 << 2);
      }
    }
  }
  this_00 = &this->LinkDataToHierarchyIndices;
  if (this_00 != &param_1->LinkDataToHierarchyIndices) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->LinkDataToHierarchyIndices).field_0x38,
               (int *)&(this->LinkDataToHierarchyIndices).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->LinkDataToHierarchyIndices).field_0x38,
               *(int *)&(param_1->LinkDataToHierarchyIndices).field_0x48);
    iVar6 = *(int *)&(param_1->LinkDataToHierarchyIndices).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar6,(ForAnyElementType *)this_00,
               (int *)&(this->LinkDataToHierarchyIndices).field_0x8,
               (int *)&(this->LinkDataToHierarchyIndices).field_0xc);
    puVar3 = &(param_1->LinkDataToHierarchyIndices).field_0x10;
    this_01 = &(this->LinkDataToHierarchyIndices).field_0x10;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x30 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x30;
    *(undefined4 *)&(this->LinkDataToHierarchyIndices).field_0x34 =
         *(undefined4 *)&(param_1->LinkDataToHierarchyIndices).field_0x34;
    if (this_01 != puVar3) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->LinkDataToHierarchyIndices,(longlong)iVar6 * 0x18
            );
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->HierarchyToLinkDataMap,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->HierarchyToLinkDataMap);
  pTVar4 = &this->InternalConstraints;
  if (pTVar4 != &param_1->InternalConstraints) {
    iVar6 = (param_1->InternalConstraints).ArrayNum;
    piVar2 = &(this->InternalConstraints).ArrayMax;
    pTVar7 = (TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint> *)
             (param_1->InternalConstraints).AllocatorInstance.Data;
    (this->InternalConstraints).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      ConstructItems<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,int>
                ((pTVar4->AllocatorInstance).Data,pTVar7,iVar6);
    }
  }
  FJacobianSolverBase::operator=
            ((FJacobianSolverBase *)&this->IKSolver,(FJacobianSolverBase *)&param_1->IKSolver);
  pTVar5 = &this->DebugData;
  if (pTVar5 != &param_1->DebugData) {
    DestructItems<FJacobianDebugData,int>
              ((FJacobianDebugData *)(pTVar5->AllocatorInstance).Data,(this->DebugData).ArrayNum);
    iVar6 = (param_1->DebugData).ArrayNum;
    piVar2 = &(this->DebugData).ArrayMax;
    pFVar8 = (FJacobianDebugData *)(param_1->DebugData).AllocatorInstance.Data;
    (this->DebugData).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FJacobianDebugData,FJacobianDebugData,int>
                ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
    }
  }
  return this;
}

