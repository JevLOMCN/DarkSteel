// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e28d0

UScriptStruct * __cdecl FRigUnit_SpringInterpQuaternionV2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpQuaternionV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpQuaternionV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2,
                         (UObject *)pUVar1,L"RigUnit_SpringInterpQuaternionV2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpQuaternionV2.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpQuaternionV2.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e2950

UScriptStruct * __thiscall
FRigUnit_SpringInterpQuaternionV2::GetExecuteContextStruct(FRigUnit_SpringInterpQuaternionV2 *this)

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

// Execute @ 14a4e3450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_SpringInterpQuaternionV2::Execute(FRigUnit_SpringInterpQuaternionV2 *this)

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
  StaticExecute(&local_118,&this->Target,this->Strength,this->CriticalDamping,&this->Torque,
                this->bUseCurrentInput,&this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->AngularVelocity,
                &this->SimulatedResult,&this->SpringState);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigUnit_SpringInterpQuaternionV2 @ 14a516500

FRigUnit_SpringInterpQuaternionV2 * __thiscall
FRigUnit_SpringInterpQuaternionV2::FRigUnit_SpringInterpQuaternionV2
          (FRigUnit_SpringInterpQuaternionV2 *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = uStack_10 & 0xffffff00;
  this->_padding_ = (longlong)&___7FRigUnit_SpringInterpQuaternionV2__6B_;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->SpringState).PrevTarget.X = UE::Math::TQuat<double>::Identity.X;
  (this->SpringState).PrevTarget.Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->SpringState).PrevTarget.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SpringState).PrevTarget.W = dVar1;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringState).AngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).AngularVelocity.field0_0x0._s_0.Y = (double)uVar3;
  (this->SpringState).AngularVelocity.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->SpringState).bPrevTargetValid = false;
  this->bUseCurrentInput = false;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->SimulatedResult).X = UE::Math::TQuat<double>::Identity.X;
  (this->SimulatedResult).Y = dVar1;
  dVar8 = UE::Math::TQuat<double>::Identity.W;
  dVar7 = UE::Math::TQuat<double>::Identity.Z;
  (this->SimulatedResult).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SimulatedResult).W = dVar8;
  dVar1 = (this->SimulatedResult).X;
  dVar2 = (this->SimulatedResult).Y;
  (this->Result).X = dVar1;
  (this->Result).Y = dVar2;
  (this->Target).X = dVar1;
  (this->Target).Y = dVar2;
  (this->Current).X = dVar1;
  (this->Current).Y = dVar2;
  (this->Result).Z = dVar7;
  (this->Result).W = dVar8;
  (this->Target).Z = dVar7;
  (this->Target).W = dVar8;
  (this->Current).Z = dVar7;
  (this->Current).W = dVar8;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar3;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  this->Strength = 4.0;
  this->CriticalDamping = 1.0;
  this->TargetVelocityAmount = 0.0;
  this->bInitializeFromTarget = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Torque).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Torque).field0_0x0._s_0.Y = (double)uVar3;
  (this->Torque).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringState).PrevTarget.X = UE::Math::TQuat<double>::Identity.X;
  (this->SpringState).PrevTarget.Y = dVar1;
  (this->SpringState).PrevTarget.Z = dVar2;
  (this->SpringState).PrevTarget.W = dVar7;
  (this->SpringState).AngularVelocity.field0_0x0._s_0.X = (double)uVar3;
  (this->SpringState).AngularVelocity.field0_0x0._s_0.Y = (double)uVar4;
  *(undefined4 *)((longlong)&(this->SpringState).AngularVelocity.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(this->SpringState).AngularVelocity.field0_0x0 + 0x14) = uVar6;
  *(uint *)&(this->SpringState).bPrevTargetValid = uStack_10;
  *(undefined4 *)&(this->SpringState).field_0x3c = uStack_c;
  return this;
}

// Execute @ 14a52e6a0

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
FRigUnit_SpringInterpQuaternionV2::Execute
          (FRigUnit_SpringInterpQuaternionV2 *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Target,this->Strength,this->CriticalDamping,&this->Torque,
                this->bUseCurrentInput,&this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->AngularVelocity,
                &this->SimulatedResult,&this->SpringState);
  return;
}

// RigVMExecute @ 14a558110

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
FRigUnit_SpringInterpQuaternionV2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  TQuat<double> *pTVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  TVector<double> *pTVar11;
  uchar *puVar12;
  TQuat<double> *pTVar13;
  TQuat<double> *pTVar14;
  TVector<double> *pTVar15;
  FRigVMSlice *pFVar16;
  TQuat<double> *pTVar17;
  FQuaternionSpringState *pFVar18;
  FRigVMExecuteContext *pFVar19;
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TQuat<double> *)pFVar10->Ptr;
  }
  else {
    pTVar8 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  if (iVar5 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[1].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  fVar1 = *pfVar9;
  if (iVar5 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
  fVar2 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar7 = (bool)*puVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar13 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar14 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pTVar15 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar17 = (TQuat<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar16->Offset + pFVar16->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar18 = (FQuaternionSpringState *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar16->Offset + pFVar16->Index);
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar19,pTVar8,fVar1,fVar2,pTVar11,bVar7,pTVar13,fVar3,bVar4,pTVar14,pTVar15,pTVar17
                ,pFVar18);
  return;
}

// StaticExecute @ 14a59cc40

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
FRigUnit_SpringInterpQuaternionV2::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,float param_3,float param_4,
          TVector<double> *param_5,bool param_6,TQuat<double> *param_7,float param_8,bool param_9,
          TQuat<double> *param_10,TVector<double> *param_11,TQuat<double> *param_12,
          FQuaternionSpringState *param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TQuat<double> *pTVar6;
  bool bVar7;
  float fVar8;
  TQuat<double> local_68;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  dVar1 = param_1->DeltaTime;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  dVar3 = (param_5->field0_0x0)._s_0.X;
  fVar8 = param_3 * param_3 * ___real_421de9e7;
  dVar4 = (param_13->AngularVelocity).field0_0x0._s_0.X;
  dVar5 = (param_13->AngularVelocity).field0_0x0._s_0.Z;
  (param_13->AngularVelocity).field0_0x0._s_0.Y =
       dVar1 * (param_5->field0_0x0)._s_0.Y + (param_13->AngularVelocity).field0_0x0._s_0.Y;
  (param_13->AngularVelocity).field0_0x0._s_0.X = dVar1 * dVar3 + dVar4;
  (param_13->AngularVelocity).field0_0x0._s_0.Z = dVar1 * dVar2 + dVar5;
  if ((!param_6) || (param_9)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_68.X = param_2->X;
  local_68.Y = param_2->Y;
  local_68.Z = param_2->Z;
  local_68.W = param_2->W;
  if (!param_6) {
    param_7 = param_12;
  }
  local_48.X = param_7->X;
  local_48.Y = param_7->Y;
  local_48.Z = param_7->Z;
  local_48.W = param_7->W;
  pTVar6 = UKismetMathLibrary::QuaternionSpringInterp
                     (&local_28,&local_48,&local_68,param_13,fVar8,param_4,(float)param_1->DeltaTime
                      ,__real_3f800000,param_8,bVar7);
  dVar1 = pTVar6->Y;
  param_12->X = pTVar6->X;
  param_12->Y = dVar1;
  dVar1 = pTVar6->W;
  param_12->Z = pTVar6->Z;
  param_12->W = dVar1;
  dVar1 = param_12->Y;
  param_10->X = param_12->X;
  param_10->Y = dVar1;
  dVar1 = param_12->W;
  param_10->Z = param_12->Z;
  param_10->W = dVar1;
  dVar1 = (param_13->AngularVelocity).field0_0x0._s_0.Y;
  (param_11->field0_0x0)._s_0.X = (param_13->AngularVelocity).field0_0x0._s_0.X;
  (param_11->field0_0x0)._s_0.Y = dVar1;
  (param_11->field0_0x0)._s_0.Z = (param_13->AngularVelocity).field0_0x0._s_0.Z;
  return;
}

