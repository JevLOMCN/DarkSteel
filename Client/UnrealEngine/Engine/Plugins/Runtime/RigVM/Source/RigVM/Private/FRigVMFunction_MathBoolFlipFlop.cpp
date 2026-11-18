// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a16fbe0

UScriptStruct * __cdecl FRigVMFunction_MathBoolFlipFlop::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolFlipFlop.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolFlipFlop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop,(UObject *)pUVar1
                         ,L"RigVMFunction_MathBoolFlipFlop");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolFlipFlop.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoolFlipFlop.OuterSingleton;
}

// GetExecuteContextStruct @ 14a16fc60

UScriptStruct * __thiscall
FRigVMFunction_MathBoolFlipFlop::GetExecuteContextStruct(FRigVMFunction_MathBoolFlipFlop *this)

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

// Execute @ 14a16fcd0

void __thiscall FRigVMFunction_MathBoolFlipFlop::Execute(FRigVMFunction_MathBoolFlipFlop *this)

{
  float fVar1;
  
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
  fVar1 = this->TimeLeft - 0.0;
  this->TimeLeft = fVar1;
  if (fVar1 <= 0.0) {
    this->LastValue = this->LastValue == false;
    this->TimeLeft = this->Duration;
  }
  this->Result = this->LastValue;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19ebb0

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
FRigVMFunction_MathBoolFlipFlop::Execute
          (FRigVMFunction_MathBoolFlipFlop *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  
  fVar1 = this->TimeLeft - (float)param_1->DeltaTime;
  this->TimeLeft = fVar1;
  if (fVar1 <= 0.0) {
    this->LastValue = this->LastValue == false;
    this->TimeLeft = this->Duration;
  }
  this->Result = this->LastValue;
  return;
}

// RigVMExecute @ 14a1ba5f0

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
FRigVMFunction_MathBoolFlipFlop::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  uchar *puVar9;
  FRigVMExecuteContext *pFVar10;
  float fVar11;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  if (iVar2 < 2) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar6 = (float *)pFVar7[1].Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  fVar1 = *pfVar6;
  if (iVar2 < 3) {
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
  puVar3 = param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar6 = (float *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  fVar11 = *pfVar6 - (float)pFVar10->DeltaTime;
  *pfVar6 = fVar11;
  if (fVar11 <= 0.0) {
    *puVar9 = *puVar9 == '\0';
    *pfVar6 = fVar1;
  }
  *puVar3 = *puVar9;
  return;
}

// StaticExecute @ 14a1dc580

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
FRigVMFunction_MathBoolFlipFlop::StaticExecute
          (FRigVMExecuteContext *param_1,bool param_2,float param_3,bool *param_4,bool *param_5,
          float *param_6)

{
  float fVar1;
  
  fVar1 = *param_6 - (float)param_1->DeltaTime;
  *param_6 = fVar1;
  if (fVar1 <= 0.0) {
    *param_5 = *param_5 == false;
    *param_6 = param_3;
    *param_4 = *param_5;
    return;
  }
  *param_4 = *param_5;
  return;
}

