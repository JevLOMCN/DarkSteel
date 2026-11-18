// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e12b0

UScriptStruct * __cdecl FRigUnit_SpringInterpVectorV2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVectorV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVectorV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2,(UObject *)pUVar1,
                         L"RigUnit_SpringInterpVectorV2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVectorV2.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpVectorV2.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e1330

UScriptStruct * __thiscall
FRigUnit_SpringInterpVectorV2::GetExecuteContextStruct(FRigUnit_SpringInterpVectorV2 *this)

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

// Execute @ 14a4e1890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_SpringInterpVectorV2::Execute(FRigUnit_SpringInterpVectorV2 *this)

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
  StaticExecute(&local_118,&this->Target,this->Strength,this->CriticalDamping,&this->Force,
                this->bUseCurrentInput,&this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->Velocity,&this->SimulatedResult,
                &this->SpringState);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigUnit_SpringInterpVectorV2 @ 14a516730

FRigUnit_SpringInterpVectorV2 * __thiscall
FRigUnit_SpringInterpVectorV2::FRigUnit_SpringInterpVectorV2(FRigUnit_SpringInterpVectorV2 *this)

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
  
  this->_padding_ = (longlong)&___7FRigUnit_SpringInterpVectorV2__6B_;
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
  this->bUseCurrentInput = false;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimulatedResult).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimulatedResult).field0_0x0._s_0.Y = (double)uVar4;
  (this->SimulatedResult).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar2 = (this->SimulatedResult).field0_0x0._s_0.X;
  dVar3 = (this->SimulatedResult).field0_0x0._s_0.Y;
  this->Strength = 4.0;
  dVar1 = (this->SimulatedResult).field0_0x0._s_0.Z;
  (this->Result).field0_0x0._s_0.X = dVar2;
  (this->Result).field0_0x0._s_0.Y = dVar3;
  this->CriticalDamping = 1.0;
  (this->Velocity).field0_0x0._s_0.X = dVar2;
  (this->Velocity).field0_0x0._s_0.Y = dVar3;
  this->TargetVelocityAmount = 0.0;
  (this->Target).field0_0x0._s_0.X = dVar2;
  (this->Target).field0_0x0._s_0.Y = dVar3;
  this->bInitializeFromTarget = false;
  (this->Current).field0_0x0._s_0.X = dVar2;
  (this->Current).field0_0x0._s_0.Y = dVar3;
  (this->Result).field0_0x0._s_0.Z = dVar1;
  (this->Velocity).field0_0x0._s_0.Z = dVar1;
  (this->Target).field0_0x0._s_0.Z = dVar1;
  (this->Current).field0_0x0._s_0.Z = dVar1;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Force).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Force).field0_0x0._s_0.Y = (double)uVar4;
  (this->Force).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
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

// Execute @ 14a52e810

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
FRigUnit_SpringInterpVectorV2::Execute
          (FRigUnit_SpringInterpVectorV2 *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Target,this->Strength,this->CriticalDamping,&this->Force,
                this->bUseCurrentInput,&this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->Velocity,&this->SimulatedResult,
                &this->SpringState);
  return;
}

// RigVMExecute @ 14a5589d0

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
FRigUnit_SpringInterpVectorV2::RigVMExecute
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
  TVector<double> *pTVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  TVector<double> *pTVar11;
  uchar *puVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  FRigVMSlice *pFVar16;
  TVector<double> *pTVar17;
  FVectorSpringState *pFVar18;
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
    pTVar8 = (TVector<double> *)pFVar10->Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
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
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pTVar15 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar17 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar16->Offset + pFVar16->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar18 = (FVectorSpringState *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar16->Offset + pFVar16->Index);
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar19,pTVar8,fVar1,fVar2,pTVar11,bVar7,pTVar13,fVar3,bVar4,pTVar14,pTVar15,pTVar17
                ,pFVar18);
  return;
}

// StaticExecute @ 14a59d1a0

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
FRigUnit_SpringInterpVectorV2::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,float param_3,float param_4,
          TVector<double> *param_5,bool param_6,TVector<double> *param_7,float param_8,bool param_9,
          TVector<double> *param_10,TVector<double> *param_11,TVector<double> *param_12,
          FVectorSpringState *param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  bool bVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double> local_38 [2];
  
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  auVar4 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar6 = auVar4._0_8_;
  uVar10 = auVar4._8_4_;
  uVar11 = auVar4._12_4_;
  fVar12 = param_3 * param_3 * ___real_421de9e7;
  local_b8._s_0.Y = auVar4._8_8_;
  if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    dVar5 = param_1->DeltaTime;
    dVar9 = (param_5->field0_0x0)._s_0.Z;
    dVar1 = (param_5->field0_0x0)._s_0.X;
    dVar2 = (param_13->Velocity).field0_0x0._s_0.Z;
    dVar3 = (param_13->Velocity).field0_0x0._s_0.X;
    (param_13->Velocity).field0_0x0._s_0.Y =
         dVar5 * (param_5->field0_0x0)._s_0.Y + (param_13->Velocity).field0_0x0._s_0.Y;
    (param_13->Velocity).field0_0x0._s_0.Z = dVar5 * dVar9 + dVar2;
    (param_13->Velocity).field0_0x0._s_0.X = dVar5 * dVar1 + dVar3;
  }
  else {
    dVar9 = __real_3ff0000000000000 / (double)fVar12;
    dVar6 = dVar6 + dVar9 * (param_5->field0_0x0)._s_0.X;
    dVar5 = local_b8._s_0.Y + dVar9 * (param_5->field0_0x0)._s_0.Y;
    local_98._s_0.Z = local_98._s_0.Z + dVar9 * (param_5->field0_0x0)._s_0.Z;
    uVar10 = SUB84(dVar5,0);
    uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  if ((!param_6) || (param_9)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  local_b8._0_16_ = ZEXT816(0);
  if (!param_6) {
    param_7 = param_12;
  }
  local_b8._s_0.Z = 0.0;
  local_58._s_0.X = 0.0;
  local_58._s_0.Y = 0.0;
  local_78._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  local_58._s_0.Z = 0.0;
  local_78._s_0.X = (param_7->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_7->field0_0x0)._s_0.Y;
  local_98._8_4_ = uVar10;
  local_98._0_8_ = dVar6;
  local_98._12_4_ = uVar11;
  pTVar7 = UKismetMathLibrary::VectorSpringInterp
                     (local_38,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_98._s_0,
                      param_13,fVar12,param_4,(float)param_1->DeltaTime,__real_3f800000,param_8,
                      false,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_b8._s_0,
                      bVar8);
  dVar6 = (pTVar7->field0_0x0)._s_0.Y;
  (param_12->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (param_12->field0_0x0)._s_0.Y = dVar6;
  (param_12->field0_0x0)._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  dVar6 = (param_12->field0_0x0)._s_0.Y;
  (param_10->field0_0x0)._s_0.X = (param_12->field0_0x0)._s_0.X;
  (param_10->field0_0x0)._s_0.Y = dVar6;
  (param_10->field0_0x0)._s_0.Z = (param_12->field0_0x0)._s_0.Z;
  return;
}

