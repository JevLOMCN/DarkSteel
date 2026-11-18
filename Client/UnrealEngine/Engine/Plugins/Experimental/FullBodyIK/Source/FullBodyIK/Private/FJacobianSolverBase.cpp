// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 15

// FJacobianSolverBase @ 14df73730

FJacobianSolverBase * __thiscall FJacobianSolverBase::FJacobianSolverBase(FJacobianSolverBase *this)

{
  undefined1 *puVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  *(undefined8 *)&this->JacobianMatrix = 0;
  this->_padding_ = (longlong)&___7FJacobianSolverBase__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined8 *)&(this->JacobianMatrix).field_0x8 = 0;
  *(undefined8 *)&(this->JacobianMatrix).field_0x10 = 0;
  *(undefined8 *)&this->AnglePartialDerivatives = 0;
  *(undefined8 *)&(this->AnglePartialDerivatives).field_0x8 = 0;
  *(undefined8 *)&(this->AnglePartialDerivatives).field_0x10 = 0;
  *(undefined8 *)&this->OnCalculatePartialDerivativesDelegate = 0;
  *(undefined8 *)&(this->OnCalculatePartialDerivativesDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCalculatePartialDerivativesDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCalculateTargetVectorDelegate = 0;
  *(undefined8 *)&(this->OnCalculateTargetVectorDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCalculateTargetVectorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostProcessDelegateForIteration = 0;
  *(undefined8 *)&(this->OnPostProcessDelegateForIteration).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostProcessDelegateForIteration).field_0x10 = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name112,L"Animation/FBIK");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name112,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name112,true);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = ComputePartialDerivative;
    puVar5[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar4 = local_70.DelegateSize;
  FVar3 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCalculatePartialDerivativesDelegate,(FWriteAccessScope *)&local_60);
  puVar1 = &(this->OnCalculatePartialDerivativesDelegate).field_0x8;
  if ((*(int *)&(this->OnCalculatePartialDerivativesDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OnCalculatePartialDerivativesDelegate).field_0x8,0,0,
               0x10);
    *(undefined4 *)&(this->OnCalculatePartialDerivativesDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar3;
  *(int *)&(this->OnCalculatePartialDerivativesDelegate).field_0x10 = iVar4;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_6__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_7__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = ComputeTargetVector;
    puVar5[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar4 = local_70.DelegateSize;
  FVar3 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCalculateTargetVectorDelegate,(FWriteAccessScope *)&local_60);
  puVar1 = &(this->OnCalculateTargetVectorDelegate).field_0x8;
  if ((*(int *)&(this->OnCalculateTargetVectorDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OnCalculateTargetVectorDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->OnCalculateTargetVectorDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar3;
  *(int *)&(this->OnCalculateTargetVectorDelegate).field_0x10 = iVar4;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FJacobianSolverBase @ 14df74230

void __thiscall FJacobianSolverBase::~FJacobianSolverBase(FJacobianSolverBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FJacobianSolverBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostProcessDelegateForIteration);
  pvVar1 = *(void **)&(this->OnPostProcessDelegateForIteration).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostProcessDelegateForIteration);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCalculateTargetVectorDelegate);
  pvVar1 = *(void **)&(this->OnCalculateTargetVectorDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCalculateTargetVectorDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCalculatePartialDerivativesDelegate);
  pvVar1 = *(void **)&(this->OnCalculatePartialDerivativesDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCalculatePartialDerivativesDelegate);
  FMemory_Free(*(void **)&this->AnglePartialDerivatives);
  FMemory_Free(*(void **)&this->JacobianMatrix);
  return;
}

// operator= @ 14df747c0

FJacobianSolverBase * __thiscall
FJacobianSolverBase::operator=(FJacobianSolverBase *this,FJacobianSolverBase *param_1)

{
  assign_op<float,float> local_res8 [8];
  
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
            (&this->JacobianMatrix,&param_1->JacobianMatrix,local_res8);
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::Matrix<float,_1,_1,0,_1,_1>,Eigen::internal::assign_op<float,float>_>
            (&this->AnglePartialDerivatives,&param_1->AnglePartialDerivatives,local_res8);
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCalculatePartialDerivativesDelegate,
             &param_1->OnCalculatePartialDerivativesDelegate);
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCalculateTargetVectorDelegate,&param_1->OnCalculateTargetVectorDelegate);
  TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnPostProcessDelegateForIteration,&param_1->OnPostProcessDelegateForIteration);
  return this;
}

// ClampMag @ 14df7bf50

TVector<double> * __thiscall
FJacobianSolverBase::ClampMag
          (FJacobianSolverBase *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if ((double)(param_2 * param_2) < dVar4) {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar4);
    dVar4 = (double)param_2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar5 * dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar5 * dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar5 * dVar4;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ComputePartialDerivative @ 14df7c020

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
FJacobianSolverBase::ComputePartialDerivative
          (FJacobianSolverBase *this,TVector<double> *__return_storage_ptr__,FFBIKLinkData *param_1,
          bool param_2,int param_3,FFBIKLinkData *param_4,bool param_5,FSolverParameter *param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  FMotionBase *pFVar7;
  TVector<double> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [5];
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_2) {
    if (!param_5) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      return __return_storage_ptr__;
    }
    pFVar7 = FFBIKLinkData::GetMotionBase(param_1,param_3);
    fVar14 = __real_3f800000 - pFVar7->LinearStiffness;
    fVar1 = param_1->LinearMotionStrength;
    pTVar8 = FFBIKLinkData::GetRotationAxis(param_1,param_3);
    dVar10 = (double)(fVar14 * fVar1);
    dVar3 = (pTVar8->field0_0x0)._s_0.Y * dVar10;
    dVar11 = dVar10 * (pTVar8->field0_0x0)._s_0.Z;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (pTVar8->field0_0x0)._s_0.X * dVar10;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  }
  else {
    pTVar8 = FFBIKLinkData::GetRotationAxis(param_1,param_3);
    dVar3 = (pTVar8->field0_0x0)._s_0.X;
    dVar10 = (pTVar8->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    local_a8._s_0.X = dVar3;
    local_a8._s_0.Y = dVar10;
    if (param_5) {
      pFVar7 = FFBIKLinkData::GetMotionBase(param_1,param_3);
      fVar14 = __real_3f800000 - pFVar7->AngularStiffness;
      fVar1 = param_1->AngularMotionStrength;
      dVar4 = (param_4->LinkTransform).Translation.XY.m128d_f64[0] -
              (param_1->LinkTransform).Translation.XY.m128d_f64[0];
      dVar9 = (param_4->LinkTransform).Translation.ZW.m128d_f64[0] -
              (param_1->LinkTransform).Translation.ZW.m128d_f64[0];
      dVar11 = (param_4->LinkTransform).Translation.XY.m128d_f64[1] -
               (param_1->LinkTransform).Translation.XY.m128d_f64[1];
      local_90[0]._0_8_ = dVar4;
      local_90[0]._8_8_ = dVar11;
      local_90[0]._16_8_ = dVar9;
      bVar6 = FBIKUtil::CanCrossProduct
                        ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90[0]._s_0);
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (bVar6) {
        uVar12 = dVar4 * local_a8._s_0.Z - dVar9 * dVar3;
        uVar13 = dVar11 * dVar3 - dVar4 * dVar10;
        uVar5 = dVar9 * dVar10 - dVar11 * local_a8._s_0.Z;
      }
      dVar11 = (double)(fVar14 * fVar1);
      dVar3 = dVar11 * (double)uVar5;
      dVar9 = dVar11 * (double)uVar12;
      dVar11 = dVar11 * (double)uVar13;
    }
    else {
      pFVar7 = FFBIKLinkData::GetMotionBase(param_1,param_3);
      dVar9 = (double)((__real_3f800000 - pFVar7->AngularStiffness) * param_1->AngularMotionStrength
                      );
      dVar11 = dVar9 * local_a8._s_0.Z;
      dVar3 = dVar9 * dVar3;
      dVar9 = dVar9 * dVar10;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
  return __return_storage_ptr__;
}

// ComputeTargetVector @ 14df7c380

TVector<double> * __thiscall
FJacobianSolverBase::ComputeTargetVector
          (FJacobianSolverBase *this,TVector<double> *__return_storage_ptr__,FFBIKLinkData *param_1,
          FFBIKEffectorTarget *param_2,bool param_3,FSolverParameter *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  if (param_3) {
    dVar2 = (param_2->Position).field0_0x0._s_0.Z -
            (param_1->LinkTransform).Translation.ZW.m128d_f64[0];
    dVar11 = (param_2->Position).field0_0x0._s_0.X -
             (param_1->LinkTransform).Translation.XY.m128d_f64[0];
    dVar8 = (param_2->Position).field0_0x0._s_0.Y -
            (param_1->LinkTransform).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
    if (param_4->bClampToTarget) {
      fVar12 = param_2->TargetClampScale * param_2->ChainLength + param_2->AdjustedLength;
      dVar9 = dVar11 * dVar11 + dVar8 * dVar8 + dVar2 * dVar2;
      if (dVar9 <= (double)(fVar12 * fVar12)) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (__return_storage_ptr__->field0_0x0)._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (__return_storage_ptr__->field0_0x0)._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (__return_storage_ptr__->field0_0x0)._s_0.Z;
      }
      else {
        dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
        dVar10 = (double)fVar12;
        dVar8 = dVar9 * dVar8 * dVar10;
        auVar1._8_4_ = SUB84(dVar8,0);
        auVar1._0_8_ = dVar11 * dVar9 * dVar10;
        auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * dVar2 * dVar10;
      }
    }
  }
  else {
    dVar4 = (param_2->Rotation).X;
    dVar5 = (param_2->Rotation).Y;
    dVar8 = (param_1->LinkTransform).Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar11 = (param_1->LinkTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar10 = (param_1->LinkTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar3 = (param_1->LinkTransform).Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar6 = (param_2->Rotation).Z;
    dVar7 = (param_2->Rotation).W;
    dVar2 = dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar7 * dVar3 +
            dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar9 = dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar7 * dVar11 +
            dVar5 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_78._8_4_ = SUB84(dVar2,0);
    local_78._0_8_ =
         dVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar7 * dVar10 +
         dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar6 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_68._8_4_ = SUB84(dVar9,0);
    local_68._0_8_ =
         dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar7 * dVar8 +
         dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_68._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    FBIKUtil::GetScaledRotationAxis(__return_storage_ptr__,(TQuat<double> *)local_78);
  }
  return __return_storage_ptr__;
}

// DidConverge @ 14df7e490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FJacobianSolverBase::DidConverge
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2,float param_3,int param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  TVector<double> *pTVar19;
  TVector<double> *pTVar20;
  FStaticBasicLogRecord *pFVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TVector<double> local_b0;
  TVector<double> local_98 [4];
  
  fVar13 = __real_3dcccccd;
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_3f800000;
  iVar4 = *(int *)&param_2->field_0x28;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  iVar22 = 0;
  iVar23 = 0;
  uVar16 = 1;
  TStack_130.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar24 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar24 = (uint *)TStack_130.Array;
    }
    uVar17 = *puVar24;
    while (uVar17 == 0) {
      lVar18 = (longlong)iVar22;
      iVar23 = iVar23 + 0x20;
      iVar22 = iVar22 + 1;
      TStack_130.CurrentBitIndex = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar22) goto LAB_14df7e540;
      uVar17 = puVar24[lVar18 + 1];
    }
    uVar16 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    TStack_130.CurrentBitIndex = (int)lVar18 + -1 + iVar23;
    if (iVar4 < TStack_130.CurrentBitIndex) {
      TStack_130.CurrentBitIndex = iVar4;
    }
  }
LAB_14df7e540:
  TStack_130._padding_ = CONCAT44(uVar16,iVar22);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = TStack_130.CurrentBitIndex;
  TStack_130.BaseBitIndex = iVar23;
  if (TStack_130.CurrentBitIndex < iVar4) {
    do {
      lVar18 = *(longlong *)param_2;
      uVar16 = *(uint *)((longlong)TStack_130.CurrentBitIndex * 0xa0 + lVar18);
      lVar25 = (longlong)TStack_130.CurrentBitIndex * 0xa0;
      if (*(char *)(lVar25 + 0x10 + lVar18) != '\0') {
        uVar17 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar5 + (longlong)(int)uVar16 * 0x130 + 0x30;
        local_c8 = *(double *)pFVar2;
        dStack_c0 = *(double *)(pFVar2 + 8);
        local_b8 = *(double *)(pFVar5 + (longlong)(int)uVar16 * 0x130 + 0x40);
        dVar8 = *(double *)(lVar25 + 0x18 + lVar18) - local_c8;
        dVar10 = *(double *)(lVar25 + 0x20 + lVar18) - dStack_c0;
        dVar26 = *(double *)(lVar25 + 0x28 + lVar18) - local_b8;
        fVar29 = fVar11 - *(float *)(lVar25 + 0x68 + lVar18);
        auVar27._0_8_ = dVar26 * dVar26;
        auVar27._8_8_ = 0;
        if (fVar11 <= fVar29) {
          fVar29 = fVar11;
        }
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar10 * dVar10 + dVar8 * dVar8 + auVar27._0_8_;
        auVar27 = sqrtpd(auVar27,auVar9);
        if (param_3 < (float)((uint)((float)auVar27._0_8_ -
                                    fVar29 * *(float *)(lVar25 + 0x78 + lVar18)) & uVar12)) {
          if ((byte)LogIKSolver._0_1_ < 5) {
            return false;
          }
          pFVar21 = &::LOG_Static;
          goto LAB_14df7e7fd;
        }
      }
      if (*(char *)(lVar25 + 0x30 + lVar18) != '\0') {
        pdVar3 = (double *)(lVar25 + 0x40 + lVar18);
        local_108.X = *pdVar3;
        local_108.Y = pdVar3[1];
        pdVar3 = (double *)(lVar25 + 0x50 + lVar18);
        local_108.Z = *pdVar3;
        local_108.W = pdVar3[1];
        uVar17 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar5 + (longlong)(int)uVar16 * 0x130 + 0x10;
        local_e8.X = *(double *)pFVar2;
        local_e8.Y = *(double *)(pFVar2 + 8);
        pFVar5 = pFVar5 + (longlong)(int)uVar16 * 0x130 + 0x20;
        local_e8.Z = *(double *)pFVar5;
        local_e8.W = *(double *)(pFVar5 + 8);
        pTVar19 = FBIKUtil::GetScaledRotationAxis(&local_b0,&local_108);
        pTVar20 = FBIKUtil::GetScaledRotationAxis(local_98,&local_e8);
        dVar10 = (pTVar19->field0_0x0)._s_0.Y - (pTVar20->field0_0x0)._s_0.Y;
        dVar8 = (pTVar19->field0_0x0)._s_0.X - (pTVar20->field0_0x0)._s_0.X;
        dVar26 = (pTVar19->field0_0x0)._s_0.Z - (pTVar20->field0_0x0)._s_0.Z;
        auVar28._0_8_ = dVar26 * dVar26;
        auVar28._8_8_ = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar10 * dVar10 + dVar8 * dVar8 + auVar28._0_8_;
        auVar27 = sqrtpd(auVar28,auVar7);
        if (fVar13 < (float)auVar27._0_8_) {
          if ((byte)LogIKSolver._0_1_ < 5) {
            return false;
          }
          pFVar21 = &::LOG_Static;
LAB_14df7e7fd:
          UE::Logging::Private::BasicLog<5>(pFVar21,(FLogCategoryBase *)&LogIKSolver);
          return false;
        }
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
  }
  return true;
}

// GetDeltaPosition @ 14df7f5a0

TVector<double> * __thiscall
FJacobianSolverBase::GetDeltaPosition
          (FJacobianSolverBase *this,TVector<double> *__return_storage_ptr__,FFBIKLinkData *param_1,
          int *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar9 = (param_1->MotionBaseAxes).ArrayNum;
  uVar12 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar6 = __real_3f800000;
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      if ((((int)uVar12 < 0) || (iVar9 <= (int)uVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MotionBaseAxes.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                             ,0xd2,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar5)();
        return pTVar11;
      }
      uVar10 = 0;
      if ((int)uVar12 < (param_1->MotionBaseAxes).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar5)();
        return pTVar11;
      }
      pFVar4 = (param_1->MotionBaseAxes).AllocatorInstance.Data;
      pFVar1 = pFVar4 + lVar13 + 0x18;
      if (*(float *)pFVar1 <= fVar6 && fVar6 != *(float *)pFVar1) {
        if (((int)uVar12 < 0) || ((param_1->MotionBaseAxes).ArrayNum <= (int)uVar12)) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2320688628096827165>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                             ,0xe3,"false");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar5)();
            return pTVar11;
          }
          pTVar11 = &UE::Math::TVector<double>::ForwardVector;
        }
        else {
          uVar10 = 0;
          if ((int)uVar12 < (param_1->MotionBaseAxes).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar5)();
            return pTVar11;
          }
          pTVar11 = (TVector<double> *)
                    ((param_1->MotionBaseAxes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20
                    );
        }
        iVar9 = *param_2;
        *param_2 = iVar9 + 1;
        dVar14 = (double)(fVar6 - *(float *)(pFVar4 + lVar13 + 0x18));
        dVar15 = (double)*(float *)(*(longlong *)&this->AnglePartialDerivatives +
                                   (longlong)iVar9 * 4);
        dVar2 = *(double *)((longlong)pTVar11 + 8);
        dVar3 = *(double *)((longlong)pTVar11 + 0x10);
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             dVar15 * *(double *)pTVar11 * dVar14 + (__return_storage_ptr__->field0_0x0)._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             dVar15 * dVar2 * dVar14 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             dVar15 * dVar3 * dVar14 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
      }
      iVar9 = (param_1->MotionBaseAxes).ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while ((int)uVar12 < iVar9);
  }
  return __return_storage_ptr__;
}

// GetDeltaRotation @ 14df7f7e0

TQuat<double> * __thiscall
FJacobianSolverBase::GetDeltaRotation
          (FJacobianSolverBase *this,TQuat<double> *__return_storage_ptr__,FFBIKLinkData *param_1,
          int *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  TQuat<double> *pTVar23;
  TVector<double> *pTVar24;
  uint uVar25;
  longlong lVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar27;
  double dVar28;
  
  dVar27 = UE::Math::TQuat<double>::Identity.Y;
  uVar25 = 0;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar27;
  dVar27 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar27;
  fVar19 = __real_3f800000;
  iVar21 = (param_1->MotionBaseAxes).ArrayNum;
  if (0 < iVar21) {
    lVar26 = 0;
    do {
      if ((((int)uVar25 < 0) || (iVar21 <= (int)uVar25)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("MotionBaseAxes.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                              ,0xd2,L""), bVar20)) {
        pcVar2 = (code *)swi(3);
        pTVar23 = (TQuat<double> *)(*pcVar2)();
        return pTVar23;
      }
      uVar22 = 0;
      if ((int)uVar25 < (param_1->MotionBaseAxes).ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar2 = (code *)swi(3);
        pTVar23 = (TQuat<double> *)(*pcVar2)();
        return pTVar23;
      }
      pFVar1 = (param_1->MotionBaseAxes).AllocatorInstance.Data + lVar26 + 0x1c;
      if (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1) {
        *param_2 = *param_2 + 1;
        if (((int)uVar25 < 0) || ((param_1->MotionBaseAxes).ArrayNum <= (int)uVar25)) {
          bVar20 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2320688628096827165>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                              ,0xe3,"false");
          if (bVar20) {
            pcVar2 = (code *)swi(3);
            pTVar23 = (TQuat<double> *)(*pcVar2)();
            return pTVar23;
          }
          pTVar24 = &UE::Math::TVector<double>::ForwardVector;
        }
        else {
          if (((int)uVar25 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar2 = (code *)swi(3);
            pTVar23 = (TQuat<double> *)(*pcVar2)();
            return pTVar23;
          }
          pTVar24 = (TVector<double> *)
                    ((param_1->MotionBaseAxes).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x20
                    );
        }
        dVar28 = *(double *)pTVar24;
        dVar8 = *(double *)((longlong)pTVar24 + 8);
        dVar27 = *(double *)((longlong)pTVar24 + 0x10);
        __libm_sse2_sincos_();
        dVar15 = __return_storage_ptr__->X;
        dVar16 = __return_storage_ptr__->Y;
        dVar17 = __return_storage_ptr__->Z;
        dVar18 = __return_storage_ptr__->W;
        dVar27 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar27;
        dVar10 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        dVar28 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar28;
        dVar8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar8;
        dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar11 = dVar15 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar28 * dVar18 +
                 dVar27 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar17 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar12 = dVar15 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar8 * dVar18 +
                 dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar17 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar9._8_4_ = SUB84(dVar12,0);
        auVar9._0_8_ = dVar11;
        auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        __return_storage_ptr__->X = dVar11;
        __return_storage_ptr__->Y = (double)auVar9._8_8_;
        dVar14 = dVar15 * dVar8 * dVar14 + dVar27 * dVar18 + dVar28 * dVar16 * dVar3 +
                 dVar17 * dVar10 * dVar4;
        dVar27 = dVar15 * dVar28 * dVar5 + dVar10 * dVar18 + dVar8 * dVar16 * dVar6 +
                 dVar17 * dVar27 * dVar7;
        auVar13._8_4_ = SUB84(dVar27,0);
        auVar13._0_8_ = dVar14;
        auVar13._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        __return_storage_ptr__->Z = dVar14;
        __return_storage_ptr__->W = (double)auVar13._8_8_;
      }
      iVar21 = (param_1->MotionBaseAxes).ArrayNum;
      uVar25 = uVar25 + 1;
      lVar26 = lVar26 + 0x20;
    } while ((int)uVar25 < iVar21);
  }
  return __return_storage_ptr__;
}

// InitializeSolver @ 14df7ffd0

void __thiscall
FJacobianSolverBase::InitializeSolver
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  return;
}

// PreSolve @ 14df81090

void __thiscall
FJacobianSolverBase::PreSolve
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  return;
}

// RunJacobianIK @ 14df82c10

bool __thiscall
FJacobianSolverBase::RunJacobianIK
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2,FSolverParameter *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  local_68;
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  local_50;
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  local_38;
  
  iVar13 = param_1->ArrayNum;
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < iVar13) {
    do {
      uVar10 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar10 < iVar13) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar3 = *(undefined8 *)(pFVar1 + uVar12 + 0x10 + 8);
      uVar4 = *(undefined8 *)(pFVar1 + uVar12 + 0x20);
      uVar5 = *(undefined8 *)(pFVar1 + uVar12 + 0x20 + 8);
      *(undefined8 *)(pFVar1 + uVar12 + 0x70) = *(undefined8 *)(pFVar1 + uVar12 + 0x10);
      *(undefined8 *)(pFVar1 + uVar12 + 0x70 + 8) = uVar3;
      uVar3 = *(undefined8 *)(pFVar1 + uVar12 + 0x30);
      uVar6 = *(undefined8 *)(pFVar1 + uVar12 + 0x30 + 8);
      *(undefined8 *)(pFVar1 + uVar12 + 0x80) = uVar4;
      *(undefined8 *)(pFVar1 + uVar12 + 0x80 + 8) = uVar5;
      uVar4 = *(undefined8 *)(pFVar1 + uVar12 + 0x40);
      uVar5 = *(undefined8 *)(pFVar1 + uVar12 + 0x40 + 8);
      *(undefined8 *)(pFVar1 + uVar12 + 0x90) = uVar3;
      *(undefined8 *)(pFVar1 + uVar12 + 0x90 + 8) = uVar6;
      uVar3 = *(undefined8 *)(pFVar1 + uVar12 + 0x50);
      uVar6 = *(undefined8 *)(pFVar1 + uVar12 + 0x50 + 8);
      *(undefined8 *)(pFVar1 + uVar12 + 0xa0) = uVar4;
      *(undefined8 *)(pFVar1 + uVar12 + 0xa0 + 8) = uVar5;
      uVar4 = *(undefined8 *)(pFVar1 + uVar12 + 0x60);
      uVar5 = *(undefined8 *)(pFVar1 + uVar12 + 0x60 + 8);
      *(undefined8 *)(pFVar1 + uVar12 + 0xb0) = uVar3;
      *(undefined8 *)(pFVar1 + uVar12 + 0xb0 + 8) = uVar6;
      *(undefined8 *)(pFVar1 + uVar12 + 0xc0) = uVar4;
      *(undefined8 *)(pFVar1 + uVar12 + 0xc0 + 8) = uVar5;
      iVar13 = param_1->ArrayNum;
      uVar12 = uVar12 + 0x130;
    } while ((int)(uVar10 + 1) < iVar13);
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  local_68._16_4_ = 0;
  TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&local_68,&this->OnCalculatePartialDerivativesDelegate);
  bVar7 = JacobianIK::CreateJacobianMatrix(param_1,param_2,&this->JacobianMatrix,&local_68,param_3);
  if (bVar7) {
    if (param_3->JacobianSolver == JacobianTranspose) {
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      local_50._16_4_ = 0;
      TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(&local_50,&this->OnCalculateTargetVectorDelegate);
      bVar7 = JacobianIK::CreateAnglePartialDerivativesUsingJT
                        (param_1,param_2,&this->JacobianMatrix,&this->AnglePartialDerivatives,
                         &local_50,param_3);
    }
    else {
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      local_38._16_4_ = 0;
      TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(&local_38,&this->OnCalculateTargetVectorDelegate);
      bVar7 = JacobianIK::CreateAnglePartialDerivativesUsingJPIDLS
                        (param_1,param_2,&this->JacobianMatrix,&this->AnglePartialDerivatives,
                         &local_38,param_3);
    }
    if (bVar7 != false) {
      UpdateLinkData(this,param_1,&this->AnglePartialDerivatives);
      return true;
    }
  }
  return false;
}

// SolveJacobianIK @ 14df82e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FJacobianSolverBase::SolveJacobianIK
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2,FSolverParameter *param_3,int param_4,float param_5,
          TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  undefined8 *puVar4;
  FFBIKLinkData *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *pTVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_298 [32];
  int local_248;
  double local_230;
  double dStack_228;
  double local_220;
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *local_218;
  FJacobianSolverBase *local_210;
  undefined4 local_208;
  int local_204;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  longlong *local_1d8;
  undefined1 auStack_1d0 [16];
  uint uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_1b0;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *local_1a8;
  undefined2 local_1a0;
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [32];
  longlong local_128;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_120;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_c0;
  int local_b0 [2];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b0[0] = 0;
  local_218 = param_1;
  local_210 = this;
  if ((TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
       *)local_f8 != param_2) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_c0,local_b0,(ForElementType<FSetElementId> *)&param_2->field_0x38,
               *(int *)&param_2->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_f8,
                (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_2);
  }
  (**(code **)(this->_padding_ + 8))(this,param_1,local_f8);
  if (param_3->bUpdateClampMagnitude) {
    TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_148,
               (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                *)local_f8);
    fVar29 = __real_41200000;
    local_1a8 = (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
                 *)local_f8;
    local_1a0 = 0;
    stack0xfffffffffffffe38 = local_148._16_16_;
    local_1d8 = (longlong *)local_148._0_8_;
    auStack_1d0._0_8_ = local_148._8_8_;
    local_1b8 = local_128;
    pTStack_1b0 = pTStack_120;
    uVar16 = local_148._24_8_ >> 0x20;
    if (local_148._28_4_ < *(int *)(local_148._16_8_ + 0x18)) {
      do {
        lVar19 = (longlong)(int)uVar16 * 0xa0;
        uStack_1c0 = uStack_1c0 & ~auStack_1d0._4_4_;
        *(float *)(lVar19 + 0x74 + *local_1d8) = *(float *)(lVar19 + 0x6c + *local_1d8) * fVar29;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1d0);
        uVar16 = (ulonglong)uStack_1bc;
      } while ((int)uStack_1bc < *(int *)(auStack_1d0._8_8_ + 0x18));
      if (((char)local_1a0 != '\0') && (local_1a0._1_1_ != '\0')) {
        uVar22 = *(int *)&(local_1a8->Elements).field_0x8 -
                 *(int *)&(local_1a8->Elements).field_0x34;
        if (uVar22 < 4) {
          iVar13 = 1;
        }
        else {
          uVar16 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_208 = (undefined4)lVar19;
          iVar13 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((0 < (int)uVar22) && (local_1a8->HashSize < iVar13)) || (iVar13 < local_1a8->HashSize))
        {
          local_1a8->HashSize = iVar13;
          TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
          ::Rehash(local_1a8);
        }
      }
    }
  }
  dVar10 = __real_3ff0000000000000;
  local_248 = 0;
  if (0 < param_4) {
    fVar29 = __real_3f800000 / (float)param_4;
    do {
      bVar11 = RunJacobianIK(this,param_1,
                             (TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
                              *)local_f8,param_3,(float)local_248 * fVar29);
      if (bVar11) {
        if (param_6 != (TArray<FJacobianDebugData,TSizedDefaultAllocator<32>_> *)0x0) {
          uVar22 = param_6->ArrayNum;
          if (uVar22 == param_6->ArrayMax) {
            uVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          param_6->ArrayNum = uVar22 + 1;
          pFVar23 = (param_6->AllocatorInstance).Data;
          uVar25 = ~uVar22 >> 0x1f;
          lVar19 = (longlong)(int)uVar22 * 0x30;
          *(undefined8 *)(pFVar23 + lVar19) = 0;
          *(undefined8 *)(pFVar23 + lVar19 + 8) = 0;
          *(undefined8 *)(pFVar23 + lVar19 + 0x10) = 0;
          *(undefined8 *)(pFVar23 + lVar19 + 0x10 + 8) = 0;
          *(undefined8 *)(pFVar23 + lVar19 + 0x20) = 0;
          *(undefined8 *)(pFVar23 + lVar19 + 0x20 + 8) = 0;
          uVar14 = 0;
          if ((int)uVar22 < param_6->ArrayNum) {
            uVar14 = uVar25;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          pTVar20 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)
                    ((param_6->AllocatorInstance).Data + lVar19);
          if (pTVar20 != param_1) {
            DestructItems<FFBIKLinkData,int>
                      ((FFBIKLinkData *)(pTVar20->AllocatorInstance).Data,pTVar20->ArrayNum);
            iVar13 = param_1->ArrayNum;
            piVar1 = &pTVar20->ArrayMax;
            pFVar5 = (FFBIKLinkData *)(param_1->AllocatorInstance).Data;
            pTVar20->ArrayNum = iVar13;
            if ((iVar13 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x130,0x10,iVar13,*piVar1,(ForAnyElementType *)pTVar20,iVar13,piVar1);
              ConstructItems<FFBIKLinkData,FFBIKLinkData,int>
                        ((pTVar20->AllocatorInstance).Data,pFVar5,iVar13);
            }
          }
          uVar14 = 0;
          if ((int)uVar22 < param_6->ArrayNum) {
            uVar14 = uVar25;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          pFVar23 = (param_6->AllocatorInstance).Data + lVar19 + 0x10;
          iVar13 = *(int *)(pFVar23 + 0xc);
          *(undefined4 *)&pFVar23[8].field_0x0 = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,0,(ForAnyElementType *)pFVar23,0,(int *)(pFVar23 + 0xc));
          }
          uVar14 = 0;
          if ((int)uVar22 < param_6->ArrayNum) {
            uVar14 = uVar25;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          iVar26 = 0;
          pFVar23 = (param_6->AllocatorInstance).Data + lVar19 + 0x20;
          iVar13 = *(int *)(pFVar23 + 0xc);
          *(undefined4 *)&pFVar23[8].field_0x0 = 0;
          if (iVar13 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,(ForAnyElementType *)pFVar23,0,(int *)(pFVar23 + 0xc));
          }
          uStack_18c = 1;
          iVar13 = iVar26;
          iStack_190 = iVar26;
          if (local_d0 != 0) {
            puVar24 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar24 = local_d8;
            }
            uVar14 = *puVar24;
            while (uVar14 == 0) {
              lVar17 = (longlong)iStack_190;
              iVar26 = iVar26 + 0x20;
              iStack_190 = iStack_190 + 1;
              if ((int)(local_d0 + -1 + (local_d0 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
              goto LAB_14df83349;
              uVar14 = puVar24[lVar17 + 1];
            }
            uStack_18c = -uVar14 & uVar14;
            uVar16 = (ulonglong)uStack_18c * 2 + 1;
            lVar17 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_204 = (int)lVar17;
            iVar13 = local_204 + -1 + iVar26;
            if (local_d0 < iVar13) {
LAB_14df83349:
              iVar13 = local_d0;
            }
          }
          local_200 = (longlong *)local_f8;
          TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
          uStack_180 = 0xffffffff;
          uStack_174 = local_fc;
          TStack_1f8._padding_ = CONCAT44(uStack_18c,iStack_190);
          TStack_1f8.CurrentBitIndex = iVar13;
          TStack_1f8.UnvisitedBitMask = 0xffffffff;
          TStack_1f8._28_4_ = local_fc;
          TStack_1f8.BaseBitIndex = iVar26;
          this = local_210;
          local_198 = local_200;
          local_188 = TStack_1f8.Array;
          iStack_17c = iVar13;
          local_178 = iVar26;
          if (iVar13 < local_d0) {
            do {
              lVar17 = *local_200;
              lVar21 = (longlong)iVar13 * 0xa0;
              if (*(char *)(lVar21 + 0x10 + lVar17) != '\0') {
                uVar14 = *(uint *)((longlong)iVar13 * 0xa0 + lVar17);
                uVar15 = 0;
                if ((int)uVar14 < param_1->ArrayNum) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                pFVar23 = (local_218->AllocatorInstance).Data;
                uVar15 = 0;
                if ((int)uVar22 < param_6->ArrayNum) {
                  uVar15 = uVar25;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                pFVar6 = (param_6->AllocatorInstance).Data;
                pFVar2 = pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x70;
                if (((*(FScriptContainerElement **)(pFVar6 + lVar19 + 0x10) <= pFVar2) &&
                    (pFVar2 < *(FScriptContainerElement **)(pFVar6 + lVar19 + 0x10) +
                              (longlong)*(int *)(pFVar6 + lVar19 + 0x1c) * 0x60)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                iVar13 = *(int *)(pFVar6 + lVar19 + 0x18);
                if (iVar13 == *(int *)(pFVar6 + lVar19 + 0x1c)) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1060,(ForAnyElementType *)(pFVar6 + lVar19 + 0x10),
                                      (int *)(pFVar6 + lVar19 + 0x1c));
                }
                *(int *)(pFVar6 + lVar19 + 0x18) = iVar13 + 1;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x78);
                lVar7 = *(longlong *)(pFVar6 + lVar19 + 0x10);
                lVar18 = (longlong)iVar13 * 0x60;
                *(undefined8 *)(lVar18 + lVar7) = *(undefined8 *)pFVar2;
                ((undefined8 *)(lVar18 + lVar7))[1] = uVar9;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x88);
                puVar4 = (undefined8 *)(lVar18 + 0x10 + lVar7);
                *puVar4 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x80);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x98);
                puVar4 = (undefined8 *)(lVar18 + 0x20 + lVar7);
                *puVar4 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x90);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0xa8);
                puVar4 = (undefined8 *)(lVar18 + 0x30 + lVar7);
                *puVar4 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0xa0);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0xb8);
                puVar4 = (undefined8 *)(lVar18 + 0x40 + lVar7);
                *puVar4 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0xb0);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 200);
                puVar4 = (undefined8 *)(lVar18 + 0x50 + lVar7);
                *puVar4 = *(undefined8 *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0xc0);
                puVar4[1] = uVar9;
                uVar15 = 0;
                if ((int)uVar22 < param_6->ArrayNum) {
                  uVar15 = uVar25;
                }
                if ((uVar15 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                local_160 = *(double *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x30);
                dStack_158 = *(double *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x38);
                local_150 = *(double *)(pFVar23 + (longlong)(int)uVar14 * 0x130 + 0x40);
                local_230 = *(double *)(lVar21 + 0x18 + lVar17) - local_160;
                local_220 = *(double *)(lVar21 + 0x28 + lVar17) - local_150;
                pFVar23 = (param_6->AllocatorInstance).Data;
                dStack_228 = *(double *)(lVar21 + 0x20 + lVar17) - dStack_158;
                if (param_3->bClampToTarget) {
                  fVar28 = *(float *)(lVar21 + 0x70 + lVar17) * *(float *)(lVar21 + 0x6c + lVar17) +
                           *(float *)(lVar21 + 0x74 + lVar17);
                  dVar27 = local_230 * local_230 + dStack_228 * dStack_228 + local_220 * local_220;
                  if ((double)(fVar28 * fVar28) < dVar27) {
                    local_168 = dVar10 / SQRT(dVar27);
                    dVar27 = (double)fVar28;
                    local_220 = local_220 * local_168 * dVar27;
                    dStack_228 = dStack_228 * local_168 * dVar27;
                    local_230 = local_230 * local_168 * dVar27;
                  }
                }
                if (((*(double **)(pFVar23 + lVar19 + 0x20) <= &local_230) &&
                    (&local_230 <
                     *(double **)(pFVar23 + lVar19 + 0x20) +
                     (longlong)*(int *)(pFVar23 + lVar19 + 0x2c) * 3)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                iVar13 = *(int *)(pFVar23 + lVar19 + 0x28);
                if (iVar13 == *(int *)(pFVar23 + lVar19 + 0x2c)) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,(ForAnyElementType *)(pFVar23 + lVar19 + 0x20),
                                      (int *)(pFVar23 + lVar19 + 0x2c));
                }
                *(int *)(pFVar23 + lVar19 + 0x28) = iVar13 + 1;
                lVar17 = *(longlong *)(pFVar23 + lVar19 + 0x20);
                pdVar3 = (double *)(lVar17 + (longlong)iVar13 * 0x18);
                *pdVar3 = local_230;
                pdVar3[1] = dStack_228;
                *(double *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_220;
                param_1 = local_218;
              }
              TStack_1f8.UnvisitedBitMask =
                   TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
              this = local_210;
              iVar13 = TStack_1f8.CurrentBitIndex;
            } while (TStack_1f8.CurrentBitIndex < (TStack_1f8.Array)->NumBits);
          }
        }
        bVar11 = DidConverge(this,param_1,
                             (TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
                              *)local_f8,param_5,local_248);
        if (bVar11) {
          bVar11 = true;
          goto LAB_14df837b4;
        }
        if (param_3->bUpdateClampMagnitude) {
          UpdateClampMag(this,param_1,
                         (TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
                          *)local_f8);
        }
      }
      local_248 = local_248 + 1;
    } while (local_248 < param_4);
  }
  bVar11 = false;
LAB_14df837b4:
  local_b0[0] = 0;
  if (local_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return bVar11;
}

// UpdateClampMag @ 14df87b80

void __thiscall
FJacobianSolverBase::UpdateClampMag
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined1 local_60 [32];
  longlong local_40;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_38;
  double local_20;
  
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_60,
             (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2);
  local_80 = 0;
  stack0xffffffffffffff58 = local_60._16_16_;
  auStack_b0._0_8_ = local_60._8_8_;
  local_98 = local_40;
  pTStack_90 = pTStack_38;
  uVar11 = local_60._24_8_ >> 0x20;
  uVar12 = local_60._28_4_;
  local_88 = (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2;
  if ((int)uVar12 < *(int *)(local_60._16_8_ + 0x18)) {
    do {
      lVar4 = *(longlong *)local_60._0_8_;
      uVar3 = *(uint *)((longlong)(int)uVar11 * 0xa0 + lVar4);
      if (*(char *)((longlong)(int)uVar12 * 0xa0 + 0x10 + lVar4) != '\0') {
        uVar9 = 0;
        if ((int)uVar3 < param_1->ArrayNum) {
          uVar9 = ~uVar3 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        lVar13 = (longlong)(int)uVar3 * 0x130;
        pFVar1 = pFVar5 + lVar13 + 0x90;
        local_78 = *(double *)pFVar1;
        dVar14 = *(double *)(pFVar1 + 8);
        local_68 = *(double *)(pFVar5 + lVar13 + 0xa0);
        uVar9 = 0;
        if ((int)uVar3 < param_1->ArrayNum) {
          uVar9 = ~uVar3 >> 0x1f;
        }
        dStack_70 = dVar14;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , dVar14 = extraout_XMM0_Qb, bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        auVar2 = *(undefined1 (*) [16])(pFVar1 + lVar13 + 0x30);
        local_20 = *(double *)(pFVar1 + lVar13 + 0x40);
        auVar7._4_8_ = dVar14;
        auVar7._0_4_ = auVar2._4_4_;
        auVar15._0_8_ = auVar7._0_8_ << 0x20;
        auVar15._8_4_ = auVar2._8_4_;
        auVar15._12_4_ = auVar2._12_4_;
        dVar14 = auVar15._8_8_ - dStack_70;
        dVar16 = auVar2._0_8_ - local_78;
        *(float *)((longlong)(int)uVar12 * 0xa0 + 0x74 + lVar4) =
             (float)SQRT(dVar16 * dVar16 + dVar14 * dVar14 +
                         (local_20 - local_68) * (local_20 - local_68));
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar11 = (ulonglong)uStack_9c;
      uVar12 = uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar10 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_88->HashSize < iVar10)) || (iVar10 < local_88->HashSize)) {
        local_88->HashSize = iVar10;
        TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

// UpdateLinkData @ 14df87df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FJacobianSolverBase::UpdateLinkData
          (FJacobianSolverBase *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          Matrix<float,_1,_1,0,_1,_1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  TTransform<double> *pTVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar53;
  double dVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  double dVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined1 auStackY_2a8 [32];
  int local_274;
  TTransform<double> *local_270;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_268;
  longlong local_258;
  FJacobianSolverBase *local_250;
  FScriptContainerElement *local_248;
  longlong local_240;
  FScriptContainerElement *local_238;
  Matrix<float,_1,_1,0,_1,_1> *local_230;
  TVector<double>_u_0 local_228;
  TQuat<double> local_208;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  FReadAccessScope local_1b8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar37 = 0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_250 = this;
  local_230 = param_2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_268,param_1->ArrayNum,Default);
  iVar22 = param_1->ArrayNum;
  uVar19 = 0;
  uVar24 = uVar37;
  uVar33 = uVar37;
  uVar34 = uVar37;
  if (0 < iVar22) {
    do {
      uVar27 = (uint)uVar33;
      uVar29 = ~uVar27 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar27 < iVar22) {
        uVar30 = uVar29;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar30 = *(uint *)((param_1->AllocatorInstance).Data + uVar34);
      if (uVar30 == 0xffffffff) {
        uVar30 = uVar19;
        if ((int)uVar27 < param_1->ArrayNum) {
          uVar30 = uVar29;
        }
        if ((uVar30 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar25 = (param_1->AllocatorInstance).Data;
        pFVar26 = pFVar25 + uVar34 + 0x10;
        uVar73 = *(undefined4 *)pFVar26;
        uVar74 = *(undefined4 *)(pFVar26 + 4);
        uVar75 = *(undefined4 *)(pFVar26 + 8);
        uVar76 = *(undefined4 *)(pFVar26 + 0xc);
        pFVar26 = pFVar25 + uVar34 + 0x20;
        uVar77 = *(undefined4 *)pFVar26;
        uVar78 = *(undefined4 *)(pFVar26 + 4);
        uVar79 = *(undefined4 *)(pFVar26 + 8);
        uVar80 = *(undefined4 *)(pFVar26 + 0xc);
        pFVar26 = pFVar25 + uVar34 + 0x30;
        uVar81 = *(undefined4 *)pFVar26;
        uVar82 = *(undefined4 *)(pFVar26 + 4);
        uVar83 = *(undefined4 *)(pFVar26 + 8);
        uVar84 = *(undefined4 *)(pFVar26 + 0xc);
        pFVar26 = pFVar25 + uVar34 + 0x40;
        uVar85 = *(undefined4 *)pFVar26;
        uVar86 = *(undefined4 *)(pFVar26 + 4);
        uVar87 = *(undefined4 *)(pFVar26 + 8);
        uVar88 = *(undefined4 *)(pFVar26 + 0xc);
        pFVar26 = pFVar25 + uVar34 + 0x50;
        uVar89 = *(undefined4 *)pFVar26;
        uVar90 = *(undefined4 *)(pFVar26 + 4);
        uVar91 = *(undefined4 *)(pFVar26 + 8);
        uVar92 = *(undefined4 *)(pFVar26 + 0xc);
        pFVar25 = pFVar25 + uVar34 + 0x60;
        uVar93 = *(undefined4 *)pFVar25;
        uVar94 = *(undefined4 *)(pFVar25 + 4);
        uVar95 = *(undefined4 *)(pFVar25 + 8);
        uVar96 = *(undefined4 *)(pFVar25 + 0xc);
        uVar30 = uVar19;
        if ((int)uVar27 < local_268.ArrayNum) {
          uVar30 = uVar29;
        }
        if ((uVar30 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        uVar28 = uVar19;
        if ((int)uVar27 < param_1->ArrayNum) {
          uVar28 = uVar29;
        }
        if ((uVar28 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_248 = (param_1->AllocatorInstance).Data;
        uVar28 = uVar19;
        if ((int)uVar30 < param_1->ArrayNum) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar21 = UE::Math::TTransform<double>::GetRelativeTransform
                            ((TTransform<double> *)
                             (local_248 + (longlong)(int)uVar27 * 0x130 + 0x10),&local_138,
                             (TTransform<double> *)
                             ((param_1->AllocatorInstance).Data +
                             (longlong)(int)uVar30 * 0x130 + 0x10));
        uVar73 = *(undefined4 *)(pTVar21->Rotation).XY.m128d_f64;
        uVar74 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 4);
        uVar75 = *(undefined4 *)((pTVar21->Rotation).XY.m128d_f64 + 1);
        uVar76 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 0xc);
        uVar77 = *(undefined4 *)(pTVar21->Rotation).ZW.m128d_f64;
        uVar78 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 4);
        uVar79 = *(undefined4 *)((pTVar21->Rotation).ZW.m128d_f64 + 1);
        uVar80 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 0xc);
        uVar81 = *(undefined4 *)(pTVar21->Translation).XY.m128d_f64;
        uVar82 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 4);
        uVar83 = *(undefined4 *)((pTVar21->Translation).XY.m128d_f64 + 1);
        uVar84 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 0xc);
        uVar85 = *(undefined4 *)(pTVar21->Translation).ZW.m128d_f64;
        uVar86 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 4);
        uVar87 = *(undefined4 *)((pTVar21->Translation).ZW.m128d_f64 + 1);
        uVar88 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 0xc);
        uVar89 = *(undefined4 *)(pTVar21->Scale3D).XY.m128d_f64;
        uVar90 = *(undefined4 *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 4);
        uVar91 = *(undefined4 *)((pTVar21->Scale3D).XY.m128d_f64 + 1);
        uVar92 = *(undefined4 *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 0xc);
        uVar93 = *(undefined4 *)(pTVar21->Scale3D).ZW.m128d_f64;
        uVar94 = *(undefined4 *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4);
        uVar95 = *(undefined4 *)((pTVar21->Scale3D).ZW.m128d_f64 + 1);
        uVar96 = *(undefined4 *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc);
        uVar30 = uVar19;
        if ((int)uVar27 < local_268.ArrayNum) {
          uVar30 = uVar29;
        }
        if ((uVar30 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar26 = local_268.AllocatorInstance.Data + uVar24;
      *(undefined4 *)pFVar26 = uVar73;
      *(undefined4 *)(pFVar26 + 4) = uVar74;
      *(undefined4 *)(pFVar26 + 8) = uVar75;
      *(undefined4 *)(pFVar26 + 0xc) = uVar76;
      pFVar26 = local_268.AllocatorInstance.Data + uVar24 + 0x10;
      *(undefined4 *)pFVar26 = uVar77;
      *(undefined4 *)(pFVar26 + 4) = uVar78;
      *(undefined4 *)(pFVar26 + 8) = uVar79;
      *(undefined4 *)(pFVar26 + 0xc) = uVar80;
      pFVar26 = local_268.AllocatorInstance.Data + uVar24 + 0x20;
      *(undefined4 *)pFVar26 = uVar81;
      *(undefined4 *)(pFVar26 + 4) = uVar82;
      *(undefined4 *)(pFVar26 + 8) = uVar83;
      *(undefined4 *)(pFVar26 + 0xc) = uVar84;
      pFVar26 = local_268.AllocatorInstance.Data + uVar24 + 0x30;
      *(undefined4 *)pFVar26 = uVar85;
      *(undefined4 *)(pFVar26 + 4) = uVar86;
      *(undefined4 *)(pFVar26 + 8) = uVar87;
      *(undefined4 *)(pFVar26 + 0xc) = uVar88;
      pFVar26 = local_268.AllocatorInstance.Data + uVar24 + 0x40;
      *(undefined4 *)pFVar26 = uVar89;
      *(undefined4 *)(pFVar26 + 4) = uVar90;
      *(undefined4 *)(pFVar26 + 8) = uVar91;
      *(undefined4 *)(pFVar26 + 0xc) = uVar92;
      pFVar26 = local_268.AllocatorInstance.Data + uVar24 + 0x50;
      *(undefined4 *)pFVar26 = uVar93;
      *(undefined4 *)(pFVar26 + 4) = uVar94;
      *(undefined4 *)(pFVar26 + 8) = uVar95;
      *(undefined4 *)(pFVar26 + 0xc) = uVar96;
      uVar30 = uVar19;
      if ((int)uVar27 < local_268.ArrayNum) {
        uVar30 = uVar29;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar23 = (longlong)(int)uVar27 * 0x60;
      dVar10 = *(double *)(local_268.AllocatorInstance.Data + lVar23);
      dVar53 = *(double *)(local_268.AllocatorInstance.Data + lVar23 + 8);
      dVar62 = *(double *)(local_268.AllocatorInstance.Data + lVar23 + 0x10);
      dVar13 = *(double *)(local_268.AllocatorInstance.Data + lVar23 + 0x10 + 8);
      auVar54._0_8_ = dVar62 * dVar62 + dVar10 * dVar10;
      auVar54._8_8_ = dVar13 * dVar13 + dVar53 * dVar53;
      auVar55._8_4_ = SUB84(auVar54._8_8_,0);
      auVar55._0_8_ = auVar54._0_8_;
      auVar55._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar38._0_8_ = auVar55._8_8_ + auVar54._0_8_;
      auVar38._8_8_ = auVar54._0_8_ + auVar54._8_8_;
      auVar55 = sqrtpd(auVar54,auVar38);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar38._0_8_)
      ;
      uVar35 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar38._8_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar38._0_8_)
      ;
      uVar36 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar38._8_8_)
      ;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
      auVar40._0_8_ = uVar32 & (ulonglong)(auVar39._0_8_ * dVar10);
      uVar33 = uVar36 & (ulonglong)(auVar39._8_8_ * dVar53);
      auVar40._8_4_ = (undefined4)uVar33;
      auVar40._12_4_ = (undefined4)(uVar33 >> 0x20);
      auVar68._0_8_ = uVar31 & (ulonglong)(auVar55._0_8_ * dVar62);
      uVar33 = uVar35 & (ulonglong)(auVar55._8_8_ * dVar13);
      auVar68._8_4_ = (undefined4)uVar33;
      auVar68._12_4_ = (undefined4)(uVar33 >> 0x20);
      auVar39._4_4_ =
           ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar39._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar39._8_4_ = ~(uint)uVar36 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar39._12_4_ =
           ~(uint)(uVar36 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar63._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar63._4_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar63._8_4_ = ~(uint)uVar35 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar63._12_4_ =
           ~(uint)(uVar35 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(local_268.AllocatorInstance.Data + lVar23) = auVar40 | auVar39;
      *(undefined1 (*) [16])(local_268.AllocatorInstance.Data + lVar23 + 0x10) = auVar68 | auVar63;
      iVar22 = param_1->ArrayNum;
      uVar24 = uVar24 + 0x60;
      uVar33 = (ulonglong)(uVar27 + 1);
      this = local_250;
      uVar34 = uVar34 + 0x130;
    } while ((int)(uVar27 + 1) < iVar22);
  }
  local_274 = 0;
  if (0 < iVar22) {
    local_258 = 0;
    local_248 = (FScriptContainerElement *)0x0;
    local_238 = (FScriptContainerElement *)0x60;
    do {
      pFVar26 = local_248;
      uVar29 = (uint)uVar37;
      uVar27 = ~uVar29 >> 0x1f;
      uVar30 = uVar19;
      if ((int)uVar29 < iVar22) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_270 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
      uVar30 = uVar19;
      if ((int)uVar29 < param_1->ArrayNum) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar25 = (param_1->AllocatorInstance).Data;
      dVar10 = *(double *)(pFVar26 + 0x10 + (longlong)pFVar25);
      dVar53 = *(double *)(pFVar26 + 0x10 + (longlong)pFVar25 + 8);
      dVar62 = *(double *)(pFVar26 + 0x20 + (longlong)pFVar25);
      dVar13 = *(double *)(pFVar26 + 0x20 + (longlong)pFVar25 + 8);
      dVar5 = *(double *)(pFVar26 + 0x30 + (longlong)pFVar25);
      dVar6 = *(double *)(pFVar26 + 0x30 + (longlong)pFVar25 + 8);
      dVar7 = *(double *)(pFVar26 + 0x40 + (longlong)pFVar25);
      uVar14 = *(undefined8 *)(pFVar26 + 0x50 + (longlong)pFVar25);
      uVar15 = *(undefined8 *)(pFVar26 + 0x50 + (longlong)pFVar25 + 8);
      uVar16 = *(undefined8 *)(pFVar26 + 0x60 + (longlong)pFVar25);
      uVar17 = *(undefined8 *)(pFVar26 + 0x60 + (longlong)pFVar25 + 8);
      uVar30 = uVar19;
      if ((int)uVar29 < param_1->ArrayNum) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      GetDeltaPosition(local_250,(TVector<double> *)&local_228._s_0,
                       (FFBIKLinkData *)
                       ((param_1->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x130),
                       &local_274);
      dVar12 = local_228._s_0.X + dVar5;
      dVar52 = local_228._s_0.Z + dVar7;
      uVar30 = uVar19;
      if ((int)uVar29 < param_1->ArrayNum) {
        uVar30 = uVar27;
      }
      uVar73 = SUB84(local_228._s_0.Y + dVar6,0);
      uVar74 = (undefined4)((ulonglong)(local_228._s_0.Y + dVar6) >> 0x20);
      local_1d0._8_4_ = uVar73;
      local_1d0._0_8_ = dVar12;
      local_1d0._12_4_ = uVar74;
      local_1e8 = dVar5;
      dStack_1e0 = dVar6;
      local_1d8 = dVar7;
      local_1c0 = dVar52;
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = local_250;
      GetDeltaRotation(local_250,&local_208,
                       (FFBIKLinkData *)
                       ((param_1->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x130),
                       &local_274);
      dVar67 = local_208.X;
      dVar72 = local_208.Y;
      dVar8 = local_208.W;
      auVar41._8_4_ = local_208.W._0_4_;
      auVar41._0_8_ = dVar8;
      auVar41._12_4_ = local_208.W._4_4_;
      auVar56._8_4_ = local_208.Y._0_4_;
      auVar56._0_8_ = dVar72;
      auVar56._12_4_ = local_208.Y._4_4_;
      dVar7 = local_208.Z;
      auVar42._8_4_ = local_208.Z._0_4_;
      auVar42._0_8_ = dVar7;
      auVar42._12_4_ = local_208.Z._4_4_;
      dVar5 = dVar67 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar8 * dVar10 +
              dVar72 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar7 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar6 = dVar67 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar41._8_8_ * dVar53 +
              auVar56._8_8_ * dVar13 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar42._8_8_ * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar43._8_4_ = SUB84(dVar6,0);
      auVar43._0_8_ = dVar5;
      auVar43._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar9 = dVar67 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar8 * dVar62 +
              dVar72 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar10 = dVar67 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar8 * dVar13 +
               dVar72 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar7 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar57._8_4_ = SUB84(dVar10,0);
      auVar57._0_8_ = dVar9;
      auVar57._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar53 = dVar9 * dVar9 + dVar5 * dVar5;
      dVar62 = auVar57._8_8_ * dVar10 + auVar43._8_8_ * dVar6;
      auVar44._8_4_ = SUB84(dVar62,0);
      auVar44._0_8_ = dVar53;
      auVar44._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      auVar45._0_8_ = auVar44._8_8_ + dVar53;
      auVar45._8_8_ = dVar53 + dVar62;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar45._0_8_)
      ;
      uVar37 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar45._8_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar45._0_8_)
      ;
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar45._8_8_)
      ;
      auVar39 = sqrtpd(auVar45,auVar45);
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
      auVar64._0_8_ = uVar33 & (ulonglong)(auVar55._0_8_ * dVar5);
      uVar24 = uVar37 & (ulonglong)(auVar55._8_8_ * dVar6);
      auVar64._8_4_ = (undefined4)uVar24;
      auVar64._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar58._0_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar58._4_4_ =
           ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar58._8_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar58._12_4_ =
           ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
      auVar59._0_8_ = (ulonglong)(auVar39._0_8_ * dVar9) & uVar34;
      uVar24 = uVar31 & (ulonglong)(auVar39._8_8_ * dVar10);
      auVar59._8_4_ = (undefined4)uVar24;
      auVar59._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar69._0_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar69._4_4_ =
           ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar69._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar69._12_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar26 + 0x10 + (longlong)local_270) = auVar64 | auVar58;
      *(undefined1 (*) [16])(pFVar26 + 0x20 + (longlong)local_270) = auVar59 | auVar69;
      auVar11._8_4_ = uVar73;
      auVar11._0_8_ = dVar12;
      auVar11._12_4_ = uVar74;
      *(undefined1 (*) [16])(pFVar26 + 0x30 + (longlong)local_270) = auVar11;
      *(double *)(pFVar26 + 0x40 + (longlong)local_270) = dVar52;
      *(undefined8 *)(pFVar26 + 0x40 + (longlong)local_270 + 8) = 0;
      *(undefined8 *)(pFVar26 + 0x50 + (longlong)local_270) = uVar14;
      *(undefined8 *)(pFVar26 + 0x50 + (longlong)local_270 + 8) = uVar15;
      *(undefined8 *)(pFVar26 + 0x60 + (longlong)local_270) = uVar16;
      *(undefined8 *)(pFVar26 + 0x60 + (longlong)local_270 + 8) = uVar17;
      dVar10 = *(double *)(pFVar26 + 0x10 + (longlong)local_270);
      dVar53 = *(double *)(pFVar26 + 0x10 + (longlong)local_270 + 8);
      dVar62 = *(double *)(pFVar26 + 0x20 + (longlong)local_270);
      dVar13 = *(double *)(pFVar26 + 0x20 + (longlong)local_270 + 8);
      uVar29 = uVar29 + 1;
      auVar60._0_8_ = dVar62 * dVar62 + dVar10 * dVar10;
      auVar60._8_8_ = dVar13 * dVar13 + dVar53 * dVar53;
      auVar46._8_4_ = SUB84(auVar60._8_8_,0);
      auVar46._0_8_ = auVar60._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar47._0_8_ = auVar46._8_8_ + auVar60._0_8_;
      auVar47._8_8_ = auVar60._0_8_ + auVar60._8_8_;
      auVar55 = sqrtpd(auVar60,auVar47);
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar47._0_8_)
      ;
      uVar37 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar47._8_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar47._0_8_)
      ;
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar47._8_8_)
      ;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
      auVar48._0_8_ = uVar34 & (ulonglong)(auVar39._0_8_ * dVar10);
      uVar24 = uVar31 & (ulonglong)(auVar39._8_8_ * dVar53);
      auVar48._8_4_ = (undefined4)uVar24;
      auVar48._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar70._0_8_ = uVar33 & (ulonglong)(auVar55._0_8_ * dVar62);
      uVar24 = uVar37 & (ulonglong)(auVar55._8_8_ * dVar13);
      auVar70._8_4_ = (undefined4)uVar24;
      auVar70._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar3._4_4_ = ~(uint)(uVar34 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar3._0_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar3._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar3._12_4_ =
           ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar65._0_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar65._4_4_ =
           ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar65._8_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar65._12_4_ =
           ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar26 + 0x10 + (longlong)local_270) = auVar48 | auVar3;
      *(undefined1 (*) [16])(pFVar26 + 0x20 + (longlong)local_270) = auVar70 | auVar65;
      iVar22 = param_1->ArrayNum;
      local_258 = local_258 + 1;
      local_240 = local_258;
      if ((int)uVar29 < iVar22) {
        local_270 = (TTransform<double> *)local_238;
        uVar30 = uVar29;
        pFVar25 = pFVar26;
        do {
          uVar28 = ~uVar30 >> 0x1f;
          uVar27 = uVar19;
          if ((int)uVar30 < iVar22) {
            uVar27 = uVar28;
          }
          if ((uVar27 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar27 = *(uint *)(pFVar25 + 0x130 + (longlong)(param_1->AllocatorInstance).Data);
          if ((uVar27 == 0xffffffff) &&
             (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3407442588096003734>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\JacobianSolver.cpp"
                                  ,0x16a,"ParentIndex != INDEX_NONE"), bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar20 = uVar19;
          if ((int)uVar30 < param_1->ArrayNum) {
            uVar20 = uVar28;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar26 = (param_1->AllocatorInstance).Data;
          uVar20 = uVar19;
          if ((int)uVar30 < local_268.ArrayNum) {
            uVar20 = uVar28;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar21 = local_270;
          local_270 = (TTransform<double> *)(local_268.AllocatorInstance.Data + (longlong)local_270)
          ;
          uVar28 = uVar19;
          if ((int)uVar27 < param_1->ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_198.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_198.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_198.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_198.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_198,local_270,
                     (TTransform<double> *)
                     ((param_1->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x130 + 0x10));
          local_270 = (TTransform<double> *)((longlong)pTVar21 + 0x60);
          *(double *)(pFVar25 + 0x140 + (longlong)pFVar26) = local_198.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar25 + 0x140 + (longlong)pFVar26 + 8) = local_198.Rotation.XY.m128d_f64[1];
          uVar30 = uVar30 + 1;
          local_240 = local_240 + 1;
          *(double *)(pFVar25 + 0x150 + (longlong)pFVar26) = local_198.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar25 + 0x150 + (longlong)pFVar26 + 8) = local_198.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar25 + 0x160 + (longlong)pFVar26) = local_198.Translation.XY.m128d_f64[0];
          *(double *)(pFVar25 + 0x160 + (longlong)pFVar26 + 8) =
               local_198.Translation.XY.m128d_f64[1];
          *(double *)(pFVar25 + 0x170 + (longlong)pFVar26) = local_198.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar25 + 0x170 + (longlong)pFVar26 + 8) =
               local_198.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar25 + 0x180 + (longlong)pFVar26) = local_198.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar25 + 0x180 + (longlong)pFVar26 + 8) = local_198.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar25 + 400 + (longlong)pFVar26) = local_198.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar25 + 400 + (longlong)pFVar26 + 8) = local_198.Scale3D.ZW.m128d_f64[1];
          dVar10 = *(double *)(pFVar25 + 0x140 + (longlong)pFVar26);
          dVar53 = *(double *)(pFVar25 + 0x140 + (longlong)pFVar26 + 8);
          dVar62 = *(double *)(pFVar25 + 0x150 + (longlong)pFVar26);
          dVar13 = *(double *)(pFVar25 + 0x150 + (longlong)pFVar26 + 8);
          auVar61._0_8_ = dVar62 * dVar62 + dVar10 * dVar10;
          auVar61._8_8_ = dVar13 * dVar13 + dVar53 * dVar53;
          auVar49._8_4_ = SUB84(auVar61._8_8_,0);
          auVar49._0_8_ = auVar61._0_8_;
          auVar49._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
          auVar50._0_8_ = auVar49._8_8_ + auVar61._0_8_;
          auVar50._8_8_ = auVar61._0_8_ + auVar61._8_8_;
          auVar55 = sqrtpd(auVar61,auVar50);
          uVar33 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar50._0_8_);
          uVar37 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar50._8_8_);
          uVar34 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar50._0_8_);
          uVar31 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar50._8_8_);
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
          auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
          auVar51._0_8_ = uVar34 & (ulonglong)(auVar39._0_8_ * dVar10);
          uVar24 = uVar31 & (ulonglong)(auVar39._8_8_ * dVar53);
          auVar51._8_4_ = (undefined4)uVar24;
          auVar51._12_4_ = (undefined4)(uVar24 >> 0x20);
          auVar71._0_8_ = uVar33 & (ulonglong)(auVar55._0_8_ * dVar62);
          uVar24 = uVar37 & (ulonglong)(auVar55._8_8_ * dVar13);
          auVar71._8_4_ = (undefined4)uVar24;
          auVar71._12_4_ = (undefined4)(uVar24 >> 0x20);
          auVar4._4_4_ = ~(uint)(uVar34 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar4._0_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar4._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar4._12_4_ =
               ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar66._0_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar66._4_4_ =
               ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar66._8_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar66._12_4_ =
               ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar25 + 0x140 + (longlong)pFVar26) = auVar51 | auVar4;
          *(undefined1 (*) [16])(pFVar25 + 0x150 + (longlong)pFVar26) = auVar71 | auVar66;
          iVar22 = param_1->ArrayNum;
          pFVar26 = local_248;
          this = local_250;
          pFVar25 = pFVar25 + 0x130;
        } while ((int)uVar30 < iVar22);
      }
      uVar37 = (ulonglong)uVar29;
      local_238 = local_238 + 0x60;
      local_248 = pFVar26 + 0x130;
    } while ((int)uVar29 < iVar22);
  }
  if (((longlong)local_274 != *(longlong *)&local_230->field_0x8) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3407442588096003729>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\JacobianSolver.cpp"
                          ,0x16f,"PartialDerivatiesOffset == InAnglePartialDerivatives.rows()"),
     bVar18)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPostProcessDelegateForIteration,&local_1b8);
  if ((*(int *)&(this->OnPostProcessDelegateForIteration).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPostProcessDelegateForIteration).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1b8);
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  return;
}

