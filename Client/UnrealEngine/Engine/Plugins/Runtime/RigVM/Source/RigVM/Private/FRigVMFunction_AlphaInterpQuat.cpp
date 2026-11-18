// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a17f670

UScriptStruct * __cdecl FRigVMFunction_AlphaInterpQuat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpQuat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpQuat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat,(UObject *)pUVar1,
                         L"RigVMFunction_AlphaInterpQuat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpQuat.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterpQuat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17f7f0

UScriptStruct * __thiscall
FRigVMFunction_AlphaInterpQuat::GetExecuteContextStruct(FRigVMFunction_AlphaInterpQuat *this)

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

// Execute @ 14a17fb50

void __thiscall FRigVMFunction_AlphaInterpQuat::Execute(FRigVMFunction_AlphaInterpQuat *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FInputRange FVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TQuat<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  TQuat<double> local_168 [11];
  
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
  fVar16 = this->ClampMin;
  fVar1 = this->InterpSpeedDecreasing;
  fVar2 = this->InterpSpeedIncreasing;
  fVar3 = this->ClampMax;
  auVar22 = ZEXT416((uint)fVar3);
  fVar4 = this->Bias;
  fVar5 = this->Scale;
  (this->ScaleBiasClamp).bMapRange = this->bMapRange;
  (this->ScaleBiasClamp).bClampResult = this->bClampResult;
  (this->ScaleBiasClamp).bInterpResult = this->bInterpResult;
  (this->ScaleBiasClamp).InRange = this->InRange;
  FVar6 = this->OutRange;
  (this->ScaleBiasClamp).ClampMin = fVar16;
  (this->ScaleBiasClamp).OutRange = FVar6;
  fVar16 = __real_3f800000;
  (this->ScaleBiasClamp).ClampMax = fVar3;
  (this->ScaleBiasClamp).Scale = fVar5;
  (this->ScaleBiasClamp).Bias = fVar4;
  (this->ScaleBiasClamp).InterpSpeedIncreasing = fVar2;
  (this->ScaleBiasClamp).InterpSpeedDecreasing = fVar1;
  fVar16 = FInputScaleBiasClamp::ApplyTo(&this->ScaleBiasClamp,fVar16,0.0);
  pTVar13 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (local_168,&UE::Math::TQuat<double>::Identity,&this->Value,(double)fVar16);
  dVar9 = pTVar13->X;
  dVar10 = pTVar13->Y;
  dVar11 = pTVar13->Z;
  dVar12 = pTVar13->W;
  dVar17 = dVar9 * dVar9 + dVar11 * dVar11;
  dVar19 = dVar10 * dVar10 + dVar12 * dVar12;
  dVar7 = dVar19 + dVar17;
  dVar17 = dVar17 + dVar19;
  auVar21._8_4_ = SUB84(dVar17,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar21 = sqrtpd(auVar22,auVar21);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar7);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
  uVar24 = (uint)(uVar14 >> 0x20);
  uVar25 = (uint)(uVar15 >> 0x20);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  auVar23._0_8_ = uVar14 & (ulonglong)(auVar22._0_8_ * dVar9);
  uVar8 = uVar15 & (ulonglong)(auVar22._8_8_ * dVar10);
  auVar23._8_4_ = (undefined4)uVar8;
  auVar23._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar22._4_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._12_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar20._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar20._4_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar20._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar20._12_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  (this->Result).X = (double)SUB168(auVar23 | auVar22,0);
  (this->Result).Y = (double)SUB168(auVar23 | auVar22,8);
  auVar18._0_8_ = (ulonglong)(auVar21._0_8_ * dVar11) & uVar14;
  uVar15 = (ulonglong)(auVar21._8_8_ * dVar12) & uVar15;
  auVar18._8_4_ = (undefined4)uVar15;
  auVar18._12_4_ = (undefined4)(uVar15 >> 0x20);
  (this->Result).Z = (double)SUB168(auVar20 | auVar18,0);
  (this->Result).W = (double)SUB168(auVar20 | auVar18,8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ProcessPinLabelForInjection @ 14a17fd90

FString * __thiscall
FRigVMFunction_AlphaInterpQuat::ProcessPinLabelForInjection
          (FRigVMFunction_AlphaInterpQuat *this,FString *__return_storage_ptr__,FString *param_1)

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

// FRigVMFunction_AlphaInterpQuat @ 14a18bc90

FRigVMFunction_AlphaInterpQuat * __thiscall
FRigVMFunction_AlphaInterpQuat::FRigVMFunction_AlphaInterpQuat(FRigVMFunction_AlphaInterpQuat *this)

{
  FInputRange FVar1;
  FInputRange FVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
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
  this->_padding_ = (longlong)&___7FRigVMFunction_AlphaInterpQuat__6B_;
  (this->InRange).Min = 0.0;
  (this->ScaleBiasClamp).bMapRange = false;
  (this->ScaleBiasClamp).bClampResult = false;
  (this->ScaleBiasClamp).bInterpResult = false;
  (this->ScaleBiasClamp).bInitialized = false;
  (this->ScaleBiasClamp).InRange.Min = 0.0;
  (this->ScaleBiasClamp).ClampMin = 0.0;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->Result).X = UE::Math::TQuat<double>::Identity.X;
  (this->Result).Y = dVar3;
  dVar5 = UE::Math::TQuat<double>::Identity.W;
  dVar4 = UE::Math::TQuat<double>::Identity.Z;
  (this->Result).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Result).W = dVar5;
  dVar3 = (this->Result).Y;
  (this->Value).X = (this->Result).X;
  (this->Value).Y = dVar3;
  (this->Value).Z = dVar4;
  (this->Value).W = dVar5;
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
  FVar1 = (this->ScaleBiasClamp).InRange;
  FVar2 = (this->ScaleBiasClamp).OutRange;
  this->bMapRange = (this->ScaleBiasClamp).bMapRange;
  this->bClampResult = (this->ScaleBiasClamp).bClampResult;
  this->bInterpResult = (this->ScaleBiasClamp).bInterpResult;
  this->Scale = (this->ScaleBiasClamp).Scale;
  this->Bias = (this->ScaleBiasClamp).Bias;
  this->ClampMin = (this->ScaleBiasClamp).ClampMin;
  this->ClampMax = (this->ScaleBiasClamp).ClampMax;
  this->InterpSpeedIncreasing = (this->ScaleBiasClamp).InterpSpeedIncreasing;
  this->InterpSpeedDecreasing = (this->ScaleBiasClamp).InterpSpeedDecreasing;
  this->InRange = FVar1;
  this->OutRange = FVar2;
  return this;
}

// Execute @ 14a19ddd0

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
FRigVMFunction_AlphaInterpQuat::Execute
          (FRigVMFunction_AlphaInterpQuat *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->Scale,this->Bias,this->bMapRange,&this->InRange,
                &this->OutRange,this->bClampResult,this->ClampMin,this->ClampMax,this->bInterpResult
                ,this->InterpSpeedIncreasing,this->InterpSpeedDecreasing,&this->Result,
                &this->ScaleBiasClamp);
  return;
}

// RigVMExecute @ 14a1b61a0

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
FRigVMFunction_AlphaInterpQuat::RigVMExecute
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
  TQuat<double> *pTVar12;
  float *pfVar13;
  FRigVMMemoryHandle *pFVar14;
  uchar *puVar15;
  FInputRange *pFVar16;
  FInputRange *pFVar17;
  TQuat<double> *pTVar18;
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
    pTVar12 = (TQuat<double> *)pFVar14->Ptr;
  }
  else {
    pTVar12 = (TQuat<double> *)
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
  pTVar18 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar14,false,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar19 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar20 = (FInputScaleBiasClamp *)
            FRigVMMemoryHandle::GetData_Internal(pFVar14,false,pFVar19->Offset + pFVar19->Index);
  pFVar21 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar21,pTVar12,fVar1,fVar2,bVar11,pFVar16,pFVar17,bVar7,fVar3,fVar4,bVar8,fVar5,
                fVar6,pTVar18,pFVar20);
  return;
}

// StaticExecute @ 14a1d9c80

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
FRigVMFunction_AlphaInterpQuat::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,float param_3,float param_4,
          bool param_5,FInputRange *param_6,FInputRange *param_7,bool param_8,float param_9,
          float param_10,bool param_11,float param_12,float param_13,TQuat<double> *param_14,
          FInputScaleBiasClamp *param_15)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  param_15->bMapRange = param_5;
  param_15->bClampResult = param_8;
  param_15->bInterpResult = param_11;
  param_15->InRange = *param_6;
  param_15->OutRange = *param_7;
  param_15->ClampMax = param_10;
  param_15->ClampMin = param_9;
  param_15->InterpSpeedDecreasing = param_13;
  fVar10 = __real_3f800000;
  param_15->Scale = param_3;
  param_15->Bias = param_4;
  param_15->InterpSpeedIncreasing = param_12;
  fVar10 = FInputScaleBiasClamp::ApplyTo(param_15,fVar10,(float)param_1->DeltaTime);
  pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized
                     (local_48,&UE::Math::TQuat<double>::Identity,param_2,(double)fVar10);
  dVar3 = pTVar7->X;
  dVar4 = pTVar7->Y;
  dVar5 = pTVar7->Z;
  dVar6 = pTVar7->W;
  dVar11 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar11);
  uVar18 = (uint)(uVar8 >> 0x20);
  uVar19 = (uint)(uVar9 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar8 & (ulonglong)(auVar16._0_8_ * dVar3);
  uVar2 = uVar9 & (ulonglong)(auVar16._8_8_ * dVar4);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar5) & uVar8;
  uVar9 = (ulonglong)(auVar15._8_8_ * dVar6) & uVar9;
  auVar12._8_4_ = (undefined4)uVar9;
  auVar12._12_4_ = (undefined4)(uVar9 >> 0x20);
  param_14->X = (double)SUB168(auVar17 | auVar16,0);
  param_14->Y = (double)SUB168(auVar17 | auVar16,8);
  param_14->Z = (double)SUB168(auVar14 | auVar12,0);
  param_14->W = (double)SUB168(auVar14 | auVar12,8);
  return;
}

