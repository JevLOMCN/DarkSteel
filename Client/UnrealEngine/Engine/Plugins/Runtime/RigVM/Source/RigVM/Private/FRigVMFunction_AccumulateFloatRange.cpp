// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1425b0

UScriptStruct * __cdecl FRigVMFunction_AccumulateFloatRange::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatRange.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateFloatRange");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatRange.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatRange.OuterSingleton;
}

// GetExecuteContextStruct @ 14a142680

UScriptStruct * __thiscall
FRigVMFunction_AccumulateFloatRange::GetExecuteContextStruct
          (FRigVMFunction_AccumulateFloatRange *this)

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

// Initialize @ 14a142d50

void __thiscall
FRigVMFunction_AccumulateFloatRange::Initialize(FRigVMFunction_AccumulateFloatRange *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a142d90

void __thiscall
FRigVMFunction_AccumulateFloatRange::Execute(FRigVMFunction_AccumulateFloatRange *this)

{
  float fVar1;
  float fVar2;
  
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
  fVar1 = this->Value;
  if (this->bIsInitialized == false) {
    this->AccumulatedMaximum = fVar1;
    this->AccumulatedMinimum = fVar1;
    this->bIsInitialized = true;
  }
  fVar2 = fVar1;
  if (this->AccumulatedMinimum <= fVar1) {
    fVar2 = this->AccumulatedMinimum;
  }
  this->AccumulatedMinimum = fVar2;
  this->Minimum = fVar2;
  fVar2 = this->AccumulatedMaximum;
  if (this->AccumulatedMaximum <= fVar1) {
    fVar2 = fVar1;
  }
  this->AccumulatedMaximum = fVar2;
  this->Maximum = fVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19d9b0

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
FRigVMFunction_AccumulateFloatRange::Execute
          (FRigVMFunction_AccumulateFloatRange *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->Value;
  if (this->bIsInitialized == false) {
    this->AccumulatedMaximum = fVar1;
    this->AccumulatedMinimum = fVar1;
    this->bIsInitialized = true;
  }
  fVar2 = this->AccumulatedMinimum;
  if (fVar1 <= this->AccumulatedMinimum) {
    fVar2 = fVar1;
  }
  this->AccumulatedMinimum = fVar2;
  this->Minimum = fVar2;
  fVar2 = this->AccumulatedMaximum;
  if (this->AccumulatedMaximum <= fVar1) {
    fVar2 = fVar1;
  }
  this->AccumulatedMaximum = fVar2;
  this->Maximum = fVar2;
  return;
}

// RigVMExecute @ 14a1b4ab0

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
FRigVMFunction_AccumulateFloatRange::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigVMSlice *pFVar7;
  float *pfVar8;
  float *pfVar9;
  uchar *puVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = param_2->DataPtr;
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar5 = (float *)pFVar6->Ptr;
  }
  else {
    pfVar5 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  fVar12 = *pfVar5;
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar5 = (float *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar2 = (float *)param_2->DataPtr[2].Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar6,false,pFVar7->Offset + pFVar7->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar6,false,pFVar7->Offset + pFVar7->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar7->Offset + pFVar7->Index);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (*puVar10 == '\0') {
    *pfVar9 = fVar12;
    *pfVar2 = fVar12;
    *pfVar8 = fVar12;
    *pfVar5 = fVar12;
    *puVar10 = '\x01';
  }
  fVar11 = *pfVar8;
  if (fVar12 <= *pfVar8) {
    fVar11 = fVar12;
  }
  *pfVar8 = fVar11;
  *pfVar5 = fVar11;
  if (fVar12 <= *pfVar9) {
    fVar12 = *pfVar9;
  }
  *pfVar9 = fVar12;
  *pfVar2 = fVar12;
  return;
}

// StaticExecute @ 14a1d8e00

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
FRigVMFunction_AccumulateFloatRange::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float *param_3,float *param_4,float *param_5,
          float *param_6,bool *param_7)

{
  float fVar1;
  
  if (*param_7 == false) {
    *param_6 = param_2;
    *param_4 = param_2;
    *param_5 = param_2;
    *param_3 = param_2;
    *param_7 = true;
  }
  fVar1 = *param_5;
  if (param_2 <= *param_5) {
    fVar1 = param_2;
  }
  *param_5 = fVar1;
  *param_3 = fVar1;
  fVar1 = *param_6;
  if (*param_6 <= param_2) {
    fVar1 = param_2;
  }
  *param_6 = fVar1;
  *param_4 = fVar1;
  return;
}

