// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a15e1d0

UScriptStruct * __cdecl FRigVMFunction_MathBoxIsInside::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxIsInside.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxIsInside.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside,(UObject *)pUVar1,
                         L"RigVMFunction_MathBoxIsInside");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxIsInside.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxIsInside.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15e270

UScriptStruct * __thiscall
FRigVMFunction_MathBoxIsInside::GetExecuteContextStruct(FRigVMFunction_MathBoxIsInside *this)

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

// Execute @ 14a15e4b0

void __thiscall FRigVMFunction_MathBoxIsInside::Execute(FRigVMFunction_MathBoxIsInside *this)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  
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
  if (((((this->Box).IsValid != '\0') &&
       (dVar3 = (this->Position).field0_0x0._s_0.X, (this->Box).Min.field0_0x0._s_0.X <= dVar3)) &&
      (pTVar1 = &(this->Box).Max,
      dVar3 < (pTVar1->field0_0x0)._s_0.X || dVar3 == (pTVar1->field0_0x0)._s_0.X)) &&
     (((dVar3 = (this->Position).field0_0x0._s_0.Y, (this->Box).Min.field0_0x0._s_0.Y <= dVar3 &&
       (pdVar2 = &(this->Box).Max.field0_0x0._s_0.Y, dVar3 < *pdVar2 || dVar3 == *pdVar2)) &&
      ((dVar3 = (this->Position).field0_0x0._s_0.Z, (this->Box).Min.field0_0x0._s_0.Z <= dVar3 &&
       (pdVar2 = &(this->Box).Max.field0_0x0._s_0.Z, dVar3 < *pdVar2 || dVar3 == *pdVar2)))))) {
    this->Result = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  this->Result = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f020

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
FRigVMFunction_MathBoxIsInside::Execute
          (FRigVMFunction_MathBoxIsInside *this,FRigVMExecuteContext *param_1)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  
  if ((this->Box).IsValid == '\0') {
    this->Result = false;
    return;
  }
  dVar3 = (this->Position).field0_0x0._s_0.X;
  if (((((this->Box).Min.field0_0x0._s_0.X <= dVar3) &&
       (pTVar1 = &(this->Box).Max,
       dVar3 < (pTVar1->field0_0x0)._s_0.X || dVar3 == (pTVar1->field0_0x0)._s_0.X)) &&
      (dVar3 = (this->Position).field0_0x0._s_0.Y, (this->Box).Min.field0_0x0._s_0.Y <= dVar3)) &&
     (((pdVar2 = &(this->Box).Max.field0_0x0._s_0.Y, dVar3 < *pdVar2 || dVar3 == *pdVar2 &&
       (dVar3 = (this->Position).field0_0x0._s_0.Z, (this->Box).Min.field0_0x0._s_0.Z <= dVar3)) &&
      (pdVar2 = &(this->Box).Max.field0_0x0._s_0.Z, dVar3 < *pdVar2 || dVar3 == *pdVar2)))) {
    this->Result = true;
    return;
  }
  this->Result = false;
  return;
}

// RigVMExecute @ 14a1bbd70

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
FRigVMFunction_MathBoxIsInside::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  bool *pbVar4;
  code *pcVar5;
  bool bVar6;
  TBox<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TBox<double> *)pFVar2->Ptr;
  }
  else {
    pTVar7 = (TBox<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
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
  pbVar4 = (bool *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar7,pTVar3,pbVar4);
  return;
}

// StaticExecute @ 14a1dcc60

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
FRigVMFunction_MathBoxIsInside::StaticExecute
          (FRigVMExecuteContext *param_1,TBox<double> *param_2,TVector<double> *param_3,
          bool *param_4)

{
  double *pdVar1;
  double dVar2;
  
  if (param_2->IsValid == '\0') {
    *param_4 = false;
    return;
  }
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if (((((param_2->Min).field0_0x0._s_0.X <= dVar2) &&
       (dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X)) &&
      (dVar2 = (param_3->field0_0x0)._s_0.Y, (param_2->Min).field0_0x0._s_0.Y <= dVar2)) &&
     (((pdVar1 = &(param_2->Max).field0_0x0._s_0.Y, dVar2 < *pdVar1 || dVar2 == *pdVar1 &&
       (dVar2 = (param_3->field0_0x0)._s_0.Z, (param_2->Min).field0_0x0._s_0.Z <= dVar2)) &&
      (pdVar1 = &(param_2->Max).field0_0x0._s_0.Z, dVar2 < *pdVar1 || dVar2 == *pdVar1)))) {
    *param_4 = true;
    return;
  }
  *param_4 = false;
  return;
}

