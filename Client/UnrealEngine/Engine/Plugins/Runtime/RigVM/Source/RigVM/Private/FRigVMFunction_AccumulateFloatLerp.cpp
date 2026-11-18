// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13ebd0

UScriptStruct * __cdecl FRigVMFunction_AccumulateFloatLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateFloatLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatLerp.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13ec50

UScriptStruct * __thiscall
FRigVMFunction_AccumulateFloatLerp::GetExecuteContextStruct
          (FRigVMFunction_AccumulateFloatLerp *this)

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

// Initialize @ 14a13ef30

void __thiscall
FRigVMFunction_AccumulateFloatLerp::Initialize(FRigVMFunction_AccumulateFloatLerp *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a13ef40

void __thiscall
FRigVMFunction_AccumulateFloatLerp::Execute(FRigVMFunction_AccumulateFloatLerp *this)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  fVar1 = this->Blend;
  fVar2 = this->InitialValue;
  if (this->bIsInitialized == false) {
    this->bIsInitialized = true;
  }
  else {
    fVar2 = this->AccumulatedValue;
  }
  if (this->bIntegrateDeltaTime != false) {
    fVar1 = fVar1 * 0.0;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = fVar1 * (this->TargetValue - fVar2) + fVar2;
  this->AccumulatedValue = fVar2;
  this->Result = fVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19d850

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
FRigVMFunction_AccumulateFloatLerp::Execute
          (FRigVMFunction_AccumulateFloatLerp *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->Blend;
  fVar2 = this->InitialValue;
  if (this->bIsInitialized == false) {
    this->AccumulatedValue = fVar2;
    this->Result = fVar2;
    this->bIsInitialized = true;
  }
  else {
    fVar2 = this->AccumulatedValue;
  }
  if (this->bIntegrateDeltaTime != false) {
    fVar1 = (float)param_1->DeltaTime * fVar1;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = fVar1 * (this->TargetValue - fVar2) + fVar2;
  this->AccumulatedValue = fVar2;
  this->Result = fVar2;
  return;
}

// RigVMExecute @ 14a1b4620

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
FRigVMFunction_AccumulateFloatLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  FRigVMSlice *pFVar10;
  float *pfVar11;
  bool *pbVar12;
  FRigVMExecuteContext *pFVar13;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  fVar1 = *pfVar7;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  fVar2 = *pfVar7;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar3 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar6 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar7 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar12 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar13,fVar1,fVar2,fVar3,bVar6,pfVar7,pfVar11,pbVar12);
  return;
}

// StaticExecute @ 14a1d8d30

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
FRigVMFunction_AccumulateFloatLerp::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,float param_4,bool param_5,
          float *param_6,float *param_7,bool *param_8)

{
  float fVar1;
  
  if (*param_8 == false) {
    *param_7 = param_3;
    *param_6 = param_3;
    *param_8 = true;
  }
  if (param_5) {
    param_4 = (float)param_1->DeltaTime * param_4;
  }
  if (__real_3f800000 <= param_4) {
    param_4 = __real_3f800000;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  fVar1 = param_4 * (param_2 - *param_7) + *param_7;
  *param_7 = fVar1;
  *param_6 = fVar1;
  return;
}

