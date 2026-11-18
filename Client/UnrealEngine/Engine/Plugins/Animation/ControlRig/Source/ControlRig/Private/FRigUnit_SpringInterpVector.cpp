// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4de410

UScriptStruct * __cdecl FRigUnit_SpringInterpVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector,(UObject *)pUVar1,
                         L"RigUnit_SpringInterpVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4de510

UScriptStruct * __thiscall
FRigUnit_SpringInterpVector::GetExecuteContextStruct(FRigUnit_SpringInterpVector *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a4de8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_SpringInterpVector::Execute(FRigUnit_SpringInterpVector *this)

{
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  StaticExecute(&local_118,&this->Current,&this->Target,this->Stiffness,this->CriticalDamping,
                this->Mass,&this->Result,&this->SpringState);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a4dec60

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SpringInterpVector::GetUpgradeInfo
          (FRigUnit_SpringInterpVector *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_SpringInterpVector @ 14a516640

FRigUnit_SpringInterpVector * __thiscall
FRigUnit_SpringInterpVector::FRigUnit_SpringInterpVector(FRigUnit_SpringInterpVector *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint7 uStack_17;
  
  this->_padding_ = (longlong)&___7FRigUnit_SpringInterpVector__6B_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringState).PrevTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).PrevTarget.field0_0x0._s_0.Y = (double)uVar4;
  (this->SpringState).PrevTarget.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringState).Velocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).Velocity.field0_0x0._s_0.Y = (double)uVar4;
  (this->SpringState).Velocity.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->SpringState).bPrevTargetValid = false;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar4;
  (this->Result).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar2 = (this->Result).field0_0x0._s_0.X;
  dVar3 = (this->Result).field0_0x0._s_0.Y;
  this->Stiffness = 10.0;
  dVar1 = (this->Result).field0_0x0._s_0.Z;
  (this->Target).field0_0x0._s_0.X = dVar2;
  (this->Target).field0_0x0._s_0.Y = dVar3;
  this->CriticalDamping = 2.0;
  (this->Current).field0_0x0._s_0.X = dVar2;
  (this->Current).field0_0x0._s_0.Y = dVar3;
  this->Mass = 10.0;
  (this->Target).field0_0x0._s_0.Z = dVar1;
  (this->Current).field0_0x0._s_0.Z = dVar1;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).PrevTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).PrevTarget.field0_0x0._s_0.Y = (double)uVar5;
  local_30 = (undefined4)uVar4;
  uStack_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_28 = (undefined4)uVar5;
  uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)((longlong)&(this->SpringState).PrevTarget.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->SpringState).PrevTarget.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->SpringState).Velocity.field0_0x0 = local_30;
  *(undefined4 *)((longlong)&(this->SpringState).Velocity.field0_0x0 + 4) = uStack_2c;
  *(undefined4 *)((longlong)&(this->SpringState).Velocity.field0_0x0 + 8) = uStack_28;
  *(undefined4 *)((longlong)&(this->SpringState).Velocity.field0_0x0 + 0xc) = uStack_24;
  *(undefined4 *)((longlong)&(this->SpringState).Velocity.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->SpringState).Velocity.field0_0x0 + 0x14) = uVar7;
  *(ulonglong *)&(this->SpringState).bPrevTargetValid = (ulonglong)uStack_17 << 8;
  return this;
}

// Execute @ 14a52e7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigUnit_SpringInterpVector::Execute
          (FRigUnit_SpringInterpVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Current,&this->Target,this->Stiffness,this->CriticalDamping,
                this->Mass,&this->Result,&this->SpringState);
  return;
}

// RigVMExecute @ 14a558790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_SpringInterpVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  TVector<double> *pTVar11;
  FRigVMSlice *pFVar12;
  FVectorSpringState *pFVar13;
  FRigVMExecuteContext *pFVar14;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar10->Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TVector<double> *)pFVar10[1].Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar1 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FVectorSpringState *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar12->Offset + pFVar12->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar7,pTVar8,fVar1,fVar2,fVar3,pTVar11,pFVar13);
  return;
}

// StaticExecute @ 14a59cf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_SpringInterpVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,float param_5,float param_6,TVector<double> *param_7,
          FVectorSpringState *param_8)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  TVector<double> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double> local_c8 [8];
  
  dVar8 = _UNK_15076c718;
  dVar7 = ___xmm_bff0000000000000bff0000000000000;
  dVar6 = _UNK_150689688;
  dVar5 = ___xmm_3ff00000000000003ff0000000000000;
  dVar4 = __real_bff0000000000000;
  fVar3 = __real_3c888889;
  dVar2 = __real_3ff0000000000000;
  dVar1 = param_1->DeltaTime;
  uVar11 = SUB84(dVar1,0);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (__real_3fb99999a0000000 <= dVar1) {
    uVar11 = SUB84(__real_3fb99999a0000000,0);
    uVar12 = (undefined4)((ulonglong)__real_3fb99999a0000000 >> 0x20);
  }
  fVar13 = (float)(double)CONCAT44(uVar12,uVar11);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_7->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_7->field0_0x0)._s_0.Y = dVar1;
  (param_7->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  fVar9 = __real_bc888889;
  while (fVar3 <= fVar13) {
    local_108._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_108._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_108._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_e8._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_e8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    local_148._s_0.Z = dVar2;
    local_128._s_0.Z = dVar4;
    local_148._s_0.X = dVar5;
    local_148._s_0.Y = dVar6;
    local_128._s_0.X = dVar7;
    local_128._s_0.Y = dVar8;
    pTVar10 = UKismetMathLibrary::VectorSpringInterp
                        (local_c8,(TVector<double> *)&local_e8._s_0,
                         (TVector<double> *)&local_108._s_0,param_8,param_4,param_5,fVar3,param_6,
                         __real_3f800000,false,(TVector<double> *)&local_128._s_0,
                         (TVector<double> *)&local_148._s_0,false);
    fVar13 = fVar13 + fVar9;
    dVar1 = (pTVar10->field0_0x0)._s_0.Y;
    (param_7->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (param_7->field0_0x0)._s_0.Y = dVar1;
    (param_7->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
  }
  local_128._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_128._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_128._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_148._s_0.X = (param_7->field0_0x0)._s_0.X;
  local_148._s_0.Y = (param_7->field0_0x0)._s_0.Y;
  local_148._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  local_e8._s_0.Z = dVar2;
  local_108._s_0.Z = dVar4;
  local_e8._s_0.X = dVar5;
  local_e8._s_0.Y = dVar6;
  local_108._s_0.X = dVar7;
  local_108._s_0.Y = dVar8;
  pTVar10 = UKismetMathLibrary::VectorSpringInterp
                      (local_c8,(TVector<double> *)&local_148._s_0,
                       (TVector<double> *)&local_128._s_0,param_8,param_4,param_5,fVar13,param_6,
                       __real_3f800000,false,(TVector<double> *)&local_108._s_0,
                       (TVector<double> *)&local_e8._s_0,false);
  dVar1 = (pTVar10->field0_0x0)._s_0.Y;
  (param_7->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  (param_7->field0_0x0)._s_0.Y = dVar1;
  (param_7->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
  return;
}

