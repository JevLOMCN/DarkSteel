// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1388a0

UScriptStruct * __cdecl FRigVMFunction_AccumulateFloatAdd::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatAdd.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatAdd.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd,
                         (UObject *)pUVar1,L"RigVMFunction_AccumulateFloatAdd");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatAdd.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AccumulateFloatAdd.OuterSingleton;
}

// GetExecuteContextStruct @ 14a138920

UScriptStruct * __thiscall
FRigVMFunction_AccumulateFloatAdd::GetExecuteContextStruct(FRigVMFunction_AccumulateFloatAdd *this)

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

// Initialize @ 14a138bc0

void __thiscall
FRigVMFunction_AccumulateFloatAdd::Initialize(FRigVMFunction_AccumulateFloatAdd *this)

{
  this->bIsInitialized = false;
  return;
}

// Execute @ 14a138c50

void __thiscall FRigVMFunction_AccumulateFloatAdd::Execute(FRigVMFunction_AccumulateFloatAdd *this)

{
  float fVar1;
  
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
  fVar1 = this->Increment;
  if (this->bIsInitialized == false) {
    this->AccumulatedValue = this->InitialValue;
    this->bIsInitialized = true;
  }
  if (this->bIntegrateDeltaTime != false) {
    fVar1 = fVar1 * 0.0;
  }
  fVar1 = this->AccumulatedValue + fVar1;
  this->AccumulatedValue = fVar1;
  this->Result = fVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19d770

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
FRigVMFunction_AccumulateFloatAdd::Execute
          (FRigVMFunction_AccumulateFloatAdd *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  
  if (this->bIsInitialized == false) {
    this->AccumulatedValue = this->InitialValue;
    this->Result = this->InitialValue;
    this->bIsInitialized = true;
  }
  if (this->bIntegrateDeltaTime != false) {
    fVar1 = this->AccumulatedValue + (float)param_1->DeltaTime * this->Increment;
    this->AccumulatedValue = fVar1;
    this->Result = fVar1;
    return;
  }
  fVar1 = this->AccumulatedValue + this->Increment;
  this->AccumulatedValue = fVar1;
  this->Result = fVar1;
  return;
}

// RigVMExecute @ 14a1b43f0

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
FRigVMFunction_AccumulateFloatAdd::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  float *pfVar10;
  FRigVMExecuteContext *pFVar11;
  float fVar12;
  
  iVar3 = param_2->ArrayNum;
  if ((iVar3 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar6 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  fVar12 = *pfVar6;
  if ((iVar3 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar6 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  fVar1 = *pfVar6;
  if ((iVar3 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  uVar2 = *puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar6 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (*puVar7 == '\0') {
    *pfVar10 = fVar1;
    *pfVar6 = fVar1;
    *puVar7 = '\x01';
  }
  if (uVar2 != '\0') {
    fVar12 = (float)pFVar11->DeltaTime * fVar12;
  }
  fVar1 = *pfVar10;
  *pfVar10 = fVar12 + fVar1;
  *pfVar6 = fVar12 + fVar1;
  return;
}

// StaticExecute @ 14a1d8ce0

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
FRigVMFunction_AccumulateFloatAdd::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,float param_3,bool param_4,float *param_5,
          float *param_6,bool *param_7)

{
  float fVar1;
  
  if (*param_7 == false) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_7 = true;
  }
  fVar1 = *param_6;
  if (param_4) {
    param_2 = (float)param_1->DeltaTime * param_2;
  }
  *param_6 = fVar1 + param_2;
  *param_5 = fVar1 + param_2;
  return;
}

