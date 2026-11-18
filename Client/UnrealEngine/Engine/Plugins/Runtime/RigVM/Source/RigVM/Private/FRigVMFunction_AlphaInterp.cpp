// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a17c620

UScriptStruct * __cdecl FRigVMFunction_AlphaInterp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp,(UObject *)pUVar1,
                         L"RigVMFunction_AlphaInterp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterp.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AlphaInterp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17c710

UScriptStruct * __thiscall
FRigVMFunction_AlphaInterp::GetExecuteContextStruct(FRigVMFunction_AlphaInterp *this)

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

// Execute @ 14a17cbb0

void __thiscall FRigVMFunction_AlphaInterp::Execute(FRigVMFunction_AlphaInterp *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
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
  fVar7 = this->InterpSpeedDecreasing;
  fVar1 = this->InterpSpeedIncreasing;
  fVar2 = this->ClampMax;
  fVar3 = this->ClampMin;
  fVar4 = this->Bias;
  fVar5 = this->Scale;
  fVar6 = this->Value;
  (this->ScaleBiasClamp).bMapRange = this->bMapRange;
  (this->ScaleBiasClamp).bClampResult = this->bClampResult;
  (this->ScaleBiasClamp).bInterpResult = this->bInterpResult;
  (this->ScaleBiasClamp).InRange = this->InRange;
  (this->ScaleBiasClamp).OutRange = this->OutRange;
  (this->ScaleBiasClamp).ClampMin = fVar3;
  (this->ScaleBiasClamp).ClampMax = fVar2;
  (this->ScaleBiasClamp).Scale = fVar5;
  (this->ScaleBiasClamp).Bias = fVar4;
  (this->ScaleBiasClamp).InterpSpeedIncreasing = fVar1;
  (this->ScaleBiasClamp).InterpSpeedDecreasing = fVar7;
  fVar7 = FInputScaleBiasClamp::ApplyTo(&this->ScaleBiasClamp,fVar6,0.0);
  this->Result = fVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ProcessPinLabelForInjection @ 14a17ce10

FString * __thiscall
FRigVMFunction_AlphaInterp::ProcessPinLabelForInjection
          (FRigVMFunction_AlphaInterp *this,FString *__return_storage_ptr__,FString *param_1)

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

// Execute @ 14a19dd10

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
FRigVMFunction_AlphaInterp::Execute(FRigVMFunction_AlphaInterp *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = this->InterpSpeedDecreasing;
  fVar1 = this->InterpSpeedIncreasing;
  fVar2 = this->ClampMax;
  fVar3 = this->ClampMin;
  fVar4 = this->Bias;
  fVar5 = this->Scale;
  fVar6 = this->Value;
  (this->ScaleBiasClamp).bMapRange = this->bMapRange;
  (this->ScaleBiasClamp).bClampResult = this->bClampResult;
  (this->ScaleBiasClamp).bInterpResult = this->bInterpResult;
  (this->ScaleBiasClamp).InRange = this->InRange;
  (this->ScaleBiasClamp).OutRange = this->OutRange;
  (this->ScaleBiasClamp).ClampMin = fVar3;
  (this->ScaleBiasClamp).ClampMax = fVar2;
  (this->ScaleBiasClamp).Scale = fVar5;
  (this->ScaleBiasClamp).Bias = fVar4;
  (this->ScaleBiasClamp).InterpSpeedIncreasing = fVar1;
  (this->ScaleBiasClamp).InterpSpeedDecreasing = fVar7;
  fVar7 = FInputScaleBiasClamp::ApplyTo(&this->ScaleBiasClamp,fVar6,(float)param_1->DeltaTime);
  this->Result = fVar7;
  return;
}

// RigVMExecute @ 14a1b5e10

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
FRigVMFunction_AlphaInterp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  float *pfVar13;
  FRigVMMemoryHandle *pFVar14;
  uchar *puVar15;
  FInputRange *pFVar16;
  FInputRange *pFVar17;
  FRigVMSlice *pFVar18;
  FInputScaleBiasClamp *pFVar19;
  FRigVMExecuteContext *pFVar20;
  
  iVar10 = param_2->ArrayNum;
  if (iVar10 < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar14 = param_2->DataPtr;
  if (pFVar14->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar13 = (float *)pFVar14->Ptr;
  }
  else {
    pfVar13 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar14->PropertyPath,pFVar14->Ptr,pFVar14->Property);
  }
  fVar1 = *pfVar13;
  if (iVar10 < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
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
  fVar2 = *pfVar13;
  if (iVar10 < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
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
  fVar3 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar12 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar16 = (FInputRange *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar17 = (FInputRange *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar8 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar4 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar5 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  bVar9 = (bool)*puVar15;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar6 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,true,-1);
  fVar7 = *pfVar13;
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar14,false,-1);
  pFVar14 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar18 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar19 = (FInputScaleBiasClamp *)
            FRigVMMemoryHandle::GetData_Internal(pFVar14,false,pFVar18->Offset + pFVar18->Index);
  pFVar20 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar20,fVar1,fVar2,fVar3,bVar12,pFVar16,pFVar17,bVar8,fVar4,fVar5,bVar9,fVar6,fVar7
                ,pfVar13,pFVar19);
  return;
}

// StaticExecute @ 14a1d9bd0

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
FRigVMFunction_AlphaInterp::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,float param_4,bool param_5,
          FInputRange *param_6,FInputRange *param_7,bool param_8,float param_9,float param_10,
          bool param_11,float param_12,float param_13,float *param_14,FInputScaleBiasClamp *param_15
          )

{
  FInputRange FVar1;
  float fVar2;
  
  param_15->bMapRange = param_5;
  param_15->bClampResult = param_8;
  param_15->bInterpResult = param_11;
  param_15->InRange = *param_6;
  FVar1 = *param_7;
  param_15->ClampMax = param_10;
  param_15->ClampMin = param_9;
  param_15->InterpSpeedDecreasing = param_13;
  param_15->OutRange = FVar1;
  param_15->InterpSpeedIncreasing = param_12;
  param_15->Scale = param_3;
  param_15->Bias = param_4;
  fVar2 = FInputScaleBiasClamp::ApplyTo(param_15,param_2,(float)param_1->DeltaTime);
  *param_14 = fVar2;
  return;
}

