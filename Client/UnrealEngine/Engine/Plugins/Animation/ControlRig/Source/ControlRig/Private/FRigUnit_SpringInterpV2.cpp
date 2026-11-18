// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4df5f0

UScriptStruct * __cdecl FRigUnit_SpringInterpV2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2,(UObject *)pUVar1,
                         L"RigUnit_SpringInterpV2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpV2.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringInterpV2.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4df6f0

UScriptStruct * __thiscall
FRigUnit_SpringInterpV2::GetExecuteContextStruct(FRigUnit_SpringInterpV2 *this)

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

// Execute @ 14a4e0470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigUnit_SpringInterpV2::Execute(FRigUnit_SpringInterpV2 *this)

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
  StaticExecute(&local_118,this->Target,this->Strength,this->CriticalDamping,this->Force,
                this->bUseCurrentInput,this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->Velocity,&this->SimulatedResult,
                &this->SpringState);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a52e740

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
FRigUnit_SpringInterpV2::Execute(FRigUnit_SpringInterpV2 *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,this->Target,this->Strength,this->CriticalDamping,this->Force,
                this->bUseCurrentInput,this->Current,this->TargetVelocityAmount,
                this->bInitializeFromTarget,&this->Result,&this->Velocity,&this->SimulatedResult,
                &this->SpringState);
  return;
}

// RigVMExecute @ 14a558440

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
FRigUnit_SpringInterpV2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  FRigVMMemoryHandle *pFVar12;
  uchar *puVar13;
  float *pfVar14;
  FRigVMSlice *pFVar15;
  float *pfVar16;
  FFloatSpringState *pFVar17;
  FRigVMExecuteContext *pFVar18;
  
  iVar8 = param_2->ArrayNum;
  if (iVar8 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar11 = (float *)pFVar12->Ptr;
  }
  else {
    pfVar11 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  fVar1 = *pfVar11;
  if (iVar8 < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar11 = (float *)pFVar12[1].Ptr;
  }
  else {
    pfVar11 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12[1].PropertyPath,pFVar12[1].Ptr,pFVar12[1].Property);
  }
  fVar2 = *pfVar11;
  if (iVar8 < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar11 = (float *)pFVar12[2].Ptr;
  }
  else {
    pfVar11 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12[2].PropertyPath,pFVar12[2].Ptr,pFVar12[2].Property);
  }
  fVar3 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar4 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar10 = (bool)*puVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar5 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar6 = *pfVar11;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar7 = (bool)*puVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar16 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar12,false,pFVar15->Offset + pFVar15->Index);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar15 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FFloatSpringState *)
            FRigVMMemoryHandle::GetData_Internal(pFVar12,false,pFVar15->Offset + pFVar15->Index);
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar18,fVar1,fVar2,fVar3,fVar4,bVar10,fVar5,fVar6,bVar7,pfVar11,pfVar14,pfVar16,
                pFVar17);
  return;
}

// StaticExecute @ 14a59cdb0

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
FRigUnit_SpringInterpV2::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,float param_4,float param_5,
          bool param_6,float param_7,float param_8,bool param_9,float *param_10,float *param_11,
          float *param_12,FFloatSpringState *param_13)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_3 * param_3 * ___real_421de9e7;
  if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    param_13->Velocity = (float)((double)param_5 * param_1->DeltaTime + (double)param_13->Velocity);
  }
  else {
    param_2 = param_5 / fVar3 + param_2;
  }
  if ((!param_6) || (param_9)) {
    bVar1 = true;
    fVar2 = (float)param_1->DeltaTime;
    if (!param_6) {
      param_7 = *param_12;
    }
  }
  else {
    bVar1 = false;
    fVar2 = (float)param_1->DeltaTime;
  }
  fVar3 = UKismetMathLibrary::FloatSpringInterp
                    (param_7,param_2,param_13,fVar3,param_4,fVar2,__real_3f800000,param_8,false,0.0,
                     0.0,bVar1);
  *param_12 = fVar3;
  *param_10 = fVar3;
  *param_11 = param_13->Velocity;
  return;
}

