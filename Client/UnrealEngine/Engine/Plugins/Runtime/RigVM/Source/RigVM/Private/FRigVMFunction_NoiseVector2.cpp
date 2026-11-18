// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a15ec40

UScriptStruct * __cdecl FRigVMFunction_NoiseVector2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseVector2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseVector2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2,(UObject *)pUVar1,
                         L"RigVMFunction_NoiseVector2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseVector2.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_NoiseVector2.OuterSingleton;
}

// Execute @ 14a1a35c0

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
FRigVMFunction_NoiseVector2::Execute
          (FRigVMFunction_NoiseVector2 *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Speed,&this->Frequency,this->Minimum,this->Maximum,
                &this->Result,&this->Time);
  return;
}

// Execute @ 14a1a3610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_NoiseVector2::Execute(FRigVMFunction_NoiseVector2 *this)

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
  StaticExecute(&local_118,&this->Value,&this->Speed,&this->Frequency,this->Minimum,this->Maximum,
                &this->Result,&this->Time);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetExecuteContextStruct @ 14a1ab860

UScriptStruct * __thiscall
FRigVMFunction_NoiseVector2::GetExecuteContextStruct(FRigVMFunction_NoiseVector2 *this)

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

// RigVMExecute @ 14a1d1da0

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
FRigVMFunction_NoiseVector2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  double *pdVar10;
  TVector<double> *pTVar11;
  FRigVMSlice *pFVar12;
  TVector<double> *pTVar13;
  FRigVMExecuteContext *pFVar14;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar9->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TVector<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pdVar10 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  dVar1 = *pdVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pdVar10 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  dVar2 = *pdVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TVector<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar14,pTVar6,pTVar7,pTVar8,dVar1,dVar2,pTVar11,pTVar13);
  return;
}

// StaticExecute @ 14a1e64c0

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
FRigVMFunction_NoiseVector2::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,double param_5,double param_6,TVector<double> *param_7,
          TVector<double> *param_8)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar3 = FMath::PerlinNoise1D
                    ((float)((param_2->field0_0x0)._s_0.X * (param_4->field0_0x0)._s_0.X +
                            (param_8->field0_0x0)._s_0.X));
  dVar2 = (double)fVar3 + __real_3fe0000000000000;
  fVar3 = FMath::PerlinNoise1D
                    ((float)((param_2->field0_0x0)._s_0.Y * (param_4->field0_0x0)._s_0.Y +
                            (param_8->field0_0x0)._s_0.Y));
  dVar1 = (double)fVar3 + __real_3fe0000000000000;
  fVar3 = FMath::PerlinNoise1D
                    ((float)((param_2->field0_0x0)._s_0.Z * (param_4->field0_0x0)._s_0.Z +
                            (param_8->field0_0x0)._s_0.Z));
  dVar5 = param_6 - param_5;
  dVar4 = (double)fVar3 + __real_3fe0000000000000;
  (param_7->field0_0x0)._s_0.X = dVar5 * dVar2 + param_5;
  (param_7->field0_0x0)._s_0.Y = dVar5 * dVar1 + param_5;
  (param_7->field0_0x0)._s_0.Z = dVar5 * dVar4 + param_5;
  dVar4 = (double)(float)param_1->DeltaTime;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  (param_8->field0_0x0)._s_0.Y = dVar4 * (param_3->field0_0x0)._s_0.Y + (param_8->field0_0x0)._s_0.Y
  ;
  (param_8->field0_0x0)._s_0.Z = dVar4 * dVar1 + (param_8->field0_0x0)._s_0.Z;
  (param_8->field0_0x0)._s_0.X = dVar4 * dVar2 + (param_8->field0_0x0)._s_0.X;
  return;
}

