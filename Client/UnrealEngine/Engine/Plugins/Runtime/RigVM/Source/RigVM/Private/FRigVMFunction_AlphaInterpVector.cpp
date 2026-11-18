// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a17e090

UScriptStruct * __cdecl FRigVMFunction_AlphaInterpVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector,
                         (UObject *)pUVar1,L"RigVMFunction_AlphaInterpVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17e130

UScriptStruct * __thiscall
FRigVMFunction_AlphaInterpVector::GetExecuteContextStruct(FRigVMFunction_AlphaInterpVector *this)

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

// Execute @ 14a17e480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_AlphaInterpVector::Execute(FRigVMFunction_AlphaInterpVector *this)

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
  StaticExecute(&local_118,&this->Value,this->Scale,this->Bias,this->bMapRange,&this->InRange,
                &this->OutRange,this->bClampResult,this->ClampMin,this->ClampMax,this->bInterpResult
                ,this->InterpSpeedIncreasing,this->InterpSpeedDecreasing,&this->Result,
                &this->ScaleBiasClamp);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ProcessPinLabelForInjection @ 14a17e650

FString * __thiscall
FRigVMFunction_AlphaInterpVector::ProcessPinLabelForInjection
          (FRigVMFunction_AlphaInterpVector *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  iVar1 = 0;
  if (this->bMapRange != false) {
    ::FString::PrintfImpl(&local_18,L" Map(%.02f, %.02f, %.02f, %.02f)");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->bInterpResult != false) {
    ::FString::PrintfImpl(&local_18,L" Interp(%.02f, %.02f)");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->bClampResult != false) {
    ::FString::PrintfImpl(&local_18,L" Clamp(%.02f, %.02f)");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  else {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigVMFunction_AlphaInterpVector @ 14a18bdf0

FRigVMFunction_AlphaInterpVector * __thiscall
FRigVMFunction_AlphaInterpVector::FRigVMFunction_AlphaInterpVector
          (FRigVMFunction_AlphaInterpVector *this)

{
  double dVar1;
  FInputRange FVar2;
  FInputRange FVar3;
  double dVar4;
  undefined8 uVar5;
  
  *(undefined8 *)&(this->InRange).Max = 0x3f800000;
  (this->OutRange).Max = 1.0;
  *(undefined8 *)&(this->ScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->ScaleBiasClamp).OutRange.Max = 1.0;
  (this->ScaleBiasClamp).Scale = 1.0;
  (this->ScaleBiasClamp).Bias = 0.0;
  (this->ScaleBiasClamp).ClampMax = 1.0;
  (this->ScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->ScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->ScaleBiasClamp).InterpolatedResult = 0.0;
  this->_padding_ = (longlong)&___7FRigVMFunction_AlphaInterpVector__6B_;
  (this->InRange).Min = 0.0;
  (this->ScaleBiasClamp).bMapRange = false;
  (this->ScaleBiasClamp).bClampResult = false;
  (this->ScaleBiasClamp).bInterpResult = false;
  (this->ScaleBiasClamp).bInitialized = false;
  (this->ScaleBiasClamp).InRange.Min = 0.0;
  (this->ScaleBiasClamp).ClampMin = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar5;
  (this->Result).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar4 = (this->Result).field0_0x0._s_0.Y;
  dVar1 = (this->Result).field0_0x0._s_0.Z;
  (this->Value).field0_0x0._s_0.X = (this->Result).field0_0x0._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar4;
  (this->Value).field0_0x0._s_0.Z = dVar1;
  (this->ScaleBiasClamp).bClampResult = false;
  (this->ScaleBiasClamp).bInterpResult = false;
  (this->ScaleBiasClamp).bInitialized = false;
  (this->ScaleBiasClamp).InRange.Min = 0.0;
  *(undefined8 *)&(this->ScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->ScaleBiasClamp).OutRange.Max = 1.0;
  (this->ScaleBiasClamp).Scale = 1.0;
  (this->ScaleBiasClamp).Bias = 0.0;
  (this->ScaleBiasClamp).ClampMin = 0.0;
  (this->ScaleBiasClamp).ClampMax = 1.0;
  (this->ScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->ScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->ScaleBiasClamp).InterpolatedResult = 0.0;
  FVar2 = (this->ScaleBiasClamp).InRange;
  FVar3 = (this->ScaleBiasClamp).OutRange;
  this->bMapRange = (this->ScaleBiasClamp).bMapRange;
  this->bClampResult = (this->ScaleBiasClamp).bClampResult;
  this->bInterpResult = (this->ScaleBiasClamp).bInterpResult;
  this->Scale = (this->ScaleBiasClamp).Scale;
  this->Bias = (this->ScaleBiasClamp).Bias;
  this->ClampMin = (this->ScaleBiasClamp).ClampMin;
  this->ClampMax = (this->ScaleBiasClamp).ClampMax;
  this->InterpSpeedIncreasing = (this->ScaleBiasClamp).InterpSpeedIncreasing;
  this->InterpSpeedDecreasing = (this->ScaleBiasClamp).InterpSpeedDecreasing;
  this->InRange = FVar2;
  this->OutRange = FVar3;
  return this;
}

// Execute @ 14a19de70

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
FRigVMFunction_AlphaInterpVector::Execute
          (FRigVMFunction_AlphaInterpVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->Scale,this->Bias,this->bMapRange,&this->InRange,
                &this->OutRange,this->bClampResult,this->ClampMin,this->ClampMax,this->bInterpResult
                ,this->InterpSpeedIncreasing,this->InterpSpeedDecreasing,&this->Result,
                &this->ScaleBiasClamp);
  return;
}

// RigVMExecute @ 14a1b6530

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
FRigVMFunction_AlphaInterpVector::RigVMExecute
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
  bool bVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  TVector<double> *pTVar12;
  float *pfVar13;
  FRigVMMemoryHandle *pFVar14;
  uchar *puVar15;
  FInputRange *pFVar16;
  FInputRange *pFVar17;
  TVector<double> *pTVar18;
  FRigVMSlice *pFVar19;
  FInputScaleBiasClamp *pFVar20;
  FRigVMExecuteContext *pFVar21;
  
  iVar9 = param_2->ArrayNum;
  if (iVar9 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar12 = (TVector<double> *)pFVar14->Ptr;
  }
  else {
    pTVar12 = (TVector<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar14->PropertyPath,pFVar14->Ptr,pFVar14->Property);
  }
  if (iVar9 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar13 = (float *)pFVar14[1].Ptr;
  }
  else {
    pfVar13 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar14[1].PropertyPath,pFVar14[1].Ptr,pFVar14[1].Property);
  }
  fVar1 = *pfVar13;
  if (iVar9 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar13 = (float *)pFVar14[2].Ptr;
  }
  else {
    pfVar13 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar14[2].PropertyPath,pFVar14[2].Ptr,pFVar14[2].Property);
  }
  fVar2 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar11 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar16 = (FInputRange *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar17 = (FInputRange *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar7 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar3 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar4 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar8 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar5 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar6 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pTVar18 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar14,false,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar19 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar20 = (FInputScaleBiasClamp *)
            FRigVMMemoryHandle::GetData_Internal(pFVar14,false,pFVar19->Offset + pFVar19->Index);
  pFVar21 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar21,pTVar12,fVar1,fVar2,bVar11,pFVar16,pFVar17,bVar7,fVar3,fVar4,bVar8,fVar5,
                fVar6,pTVar18,pFVar20);
  return;
}

// StaticExecute @ 14a1d9e10

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
FRigVMFunction_AlphaInterpVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,float param_3,float param_4,
          bool param_5,FInputRange *param_6,FInputRange *param_7,bool param_8,float param_9,
          float param_10,bool param_11,float param_12,float param_13,TVector<double> *param_14,
          FInputScaleBiasClamp *param_15)

{
  float fVar1;
  
  param_15->bMapRange = param_5;
  param_15->bClampResult = param_8;
  param_15->bInterpResult = param_11;
  param_15->InRange = *param_6;
  param_15->OutRange = *param_7;
  param_15->ClampMax = param_10;
  param_15->ClampMin = param_9;
  param_15->InterpSpeedDecreasing = param_13;
  param_15->Scale = param_3;
  param_15->Bias = param_4;
  param_15->InterpSpeedIncreasing = param_12;
  fVar1 = FInputScaleBiasClamp::ApplyTo
                    (param_15,(float)(param_2->field0_0x0)._s_0.X,(float)param_1->DeltaTime);
  (param_14->field0_0x0)._s_0.X = (double)fVar1;
  fVar1 = FInputScaleBiasClamp::ApplyTo
                    (param_15,(float)(param_2->field0_0x0)._s_0.Y,(float)param_1->DeltaTime);
  (param_14->field0_0x0)._s_0.Y = (double)fVar1;
  fVar1 = FInputScaleBiasClamp::ApplyTo
                    (param_15,(float)(param_2->field0_0x0)._s_0.Z,(float)param_1->DeltaTime);
  (param_14->field0_0x0)._s_0.Z = (double)fVar1;
  return;
}

