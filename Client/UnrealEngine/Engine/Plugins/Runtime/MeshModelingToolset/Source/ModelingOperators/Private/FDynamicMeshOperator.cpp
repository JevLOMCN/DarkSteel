// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// FDynamicMeshOperator @ 14c946210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDynamicMeshOperator * __thiscall
UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator(FDynamicMeshOperator *this)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FDynamicMesh3 *pFVar11;
  FDynamicMesh3 *pFVar12;
  undefined8 *puVar13;
  longlong local_68 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pFVar12 = (FDynamicMesh3 *)0x0;
  pTVar1 = &this->ResultMesh;
  pTVar1->Ptr = (FDynamicMesh3 *)0x0;
  this->_padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar4;
  (this->ResultTransform).Translation.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar4;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->ResultInfo).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultInfo).Errors.ArrayNum = 0;
  (this->ResultInfo).Errors.ArrayMax = 0;
  (this->ResultInfo).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultInfo).Warnings.ArrayNum = 0;
  (this->ResultInfo).Warnings.ArrayMax = 0;
  (this->ResultInfo).Result = Success;
  pFVar11 = ::operator_new(0x230);
  if (pFVar11 != (FDynamicMesh3 *)0x0) {
    pFVar12 = FDynamicMesh3::FDynamicMesh3(pFVar11);
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)local_68) {
    if (pFVar12 == (FDynamicMesh3 *)0x0) goto LAB_14c9462de;
    puVar13 = (undefined8 *)pFVar12->_padding_;
  }
  else {
    pFVar11 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar12;
    if (pFVar11 == (FDynamicMesh3 *)0x0) goto LAB_14c9462de;
    puVar13 = (undefined8 *)pFVar11->_padding_;
    pFVar12 = pFVar11;
  }
  (*(code *)*puVar13)(pFVar12,1);
LAB_14c9462de:
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  local_28 = (undefined4)uVar8;
  uStack_24 = (undefined4)((ulonglong)uVar8 >> 0x20);
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = dVar2;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = dVar3;
  uStack_20 = (undefined4)uVar9;
  uStack_1c = (undefined4)((ulonglong)uVar9 >> 0x20);
  (this->ResultTransform).Translation.field0_0x0._s_0.X = (double)uVar4;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar5;
  *(undefined4 *)((longlong)&(this->ResultTransform).Translation.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->ResultTransform).Translation.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->ResultTransform).Scale3D.field0_0x0 = local_28;
  *(undefined4 *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 4) = uStack_24;
  *(undefined4 *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 8) = uStack_20;
  *(undefined4 *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 0xc) = uStack_1c;
  *(int *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 0x10) = (int)uVar10;
  *(int *)((longlong)&(this->ResultTransform).Scale3D.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar10 >> 0x20);
  return this;
}

// ~FDynamicMeshOperator @ 14c949480

void __thiscall
UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator(FDynamicMeshOperator *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMesh3 *pFVar2;
  
  this->_padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)(this->ResultInfo).Warnings.AllocatorInstance.Data,
             (this->ResultInfo).Warnings.ArrayNum);
  pFVar1 = (this->ResultInfo).Warnings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)(this->ResultInfo).Errors.AllocatorInstance.Data,
             (this->ResultInfo).Errors.ArrayNum);
  pFVar1 = (this->ResultInfo).Errors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->ResultMesh).Ptr;
  if (pFVar2 != (FDynamicMesh3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c9494e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar2->_padding_)(pFVar2,1);
    return;
  }
  return;
}

// SetResultInfo @ 14c9855f0

void __thiscall
UE::Geometry::FDynamicMeshOperator::SetResultInfo
          (FDynamicMeshOperator *this,FGeometryResult *param_1)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FGeometryError *pFVar6;
  FGeometryWarning *pFVar7;
  
  pTVar1 = &(this->ResultInfo).Errors;
  (this->ResultInfo).Result = param_1->Result;
  if (pTVar1 != &param_1->Errors) {
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)(pTVar1->AllocatorInstance).Data,(this->ResultInfo).Errors.ArrayNum
              );
    iVar4 = (param_1->Errors).ArrayNum;
    piVar2 = &(this->ResultInfo).Errors.ArrayMax;
    pFVar6 = (FGeometryError *)(param_1->Errors).AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->ResultInfo).Errors.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<UE::Geometry::FGeometryError,UE::Geometry::FGeometryError,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  pTVar3 = &(this->ResultInfo).Warnings;
  if (pTVar3 != &param_1->Warnings) {
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)(pTVar3->AllocatorInstance).Data,
               (this->ResultInfo).Warnings.ArrayNum);
    iVar4 = (param_1->Warnings).ArrayNum;
    piVar2 = &(this->ResultInfo).Warnings.ArrayMax;
    pFVar7 = (FGeometryWarning *)(param_1->Warnings).AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->ResultInfo).Warnings.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<UE::Geometry::FGeometryWarning,UE::Geometry::FGeometryWarning,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar4);
  }
  return;
}

// SetResultTransform @ 14c985710

void __thiscall
UE::Geometry::FDynamicMeshOperator::SetResultTransform
          (FDynamicMeshOperator *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = (param_1->Rotation).field0_0x0._s_0.X;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  (this->ResultTransform).Translation.field0_0x0._s_0.X = (param_1->Translation).field0_0x0._s_0.X;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  (this->ResultTransform).Translation.field0_0x0._s_0.Z = (param_1->Translation).field0_0x0._s_0.Z;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = (param_1->Scale3D).field0_0x0._s_0.Y;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z = dVar1;
  return;
}

