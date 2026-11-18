// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1369b0

UScriptStruct * __cdecl FRigVMFunction_MathVectorMax::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMax.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMax.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMax,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorMax");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMax_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMax.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorMax.OuterSingleton;
}

// GetExecuteContextStruct @ 14a136a30

UScriptStruct * __thiscall
FRigVMFunction_MathVectorMax::GetExecuteContextStruct(FRigVMFunction_MathVectorMax *this)

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

// Execute @ 14a136bb0

void __thiscall FRigVMFunction_MathVectorMax::Execute(FRigVMFunction_MathVectorMax *this)

{
  double dVar1;
  
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
  dVar1 = *(double *)&this->field_0x8;
  if (*(double *)&this->field_0x8 <= *(double *)&this->field_0x20) {
    dVar1 = *(double *)&this->field_0x20;
  }
  *(double *)&this->field_0x38 = dVar1;
  dVar1 = *(double *)&this->field_0x10;
  if (*(double *)&this->field_0x10 <= *(double *)&this->field_0x28) {
    dVar1 = *(double *)&this->field_0x28;
  }
  *(double *)&this->field_0x40 = dVar1;
  dVar1 = *(double *)&this->field_0x18;
  if (*(double *)&this->field_0x18 <= *(double *)&this->field_0x30) {
    dVar1 = *(double *)&this->field_0x30;
  }
  *(double *)&this->field_0x48 = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3000

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
FRigVMFunction_MathVectorMax::Execute
          (FRigVMFunction_MathVectorMax *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&this->field_0x8;
  if (*(double *)&this->field_0x8 <= *(double *)&this->field_0x20) {
    dVar1 = *(double *)&this->field_0x20;
  }
  *(double *)&this->field_0x38 = dVar1;
  dVar1 = *(double *)&this->field_0x10;
  if (*(double *)&this->field_0x10 <= *(double *)&this->field_0x28) {
    dVar1 = *(double *)&this->field_0x28;
  }
  *(double *)&this->field_0x40 = dVar1;
  dVar1 = *(double *)&this->field_0x18;
  if (*(double *)&this->field_0x18 <= *(double *)&this->field_0x30) {
    dVar1 = *(double *)&this->field_0x30;
  }
  *(double *)&this->field_0x48 = dVar1;
  return;
}

// RigVMExecute @ 14a1cf950

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
FRigVMFunction_MathVectorMax::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar2[1].Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  pdVar3 = (double *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar8 = *pdVar6;
  if (*pdVar6 <= *pdVar7) {
    dVar8 = *pdVar7;
  }
  *pdVar3 = dVar8;
  dVar8 = pdVar7[1];
  if (pdVar7[1] <= pdVar6[1]) {
    dVar8 = pdVar6[1];
  }
  pdVar3[1] = dVar8;
  dVar8 = pdVar7[2];
  if (pdVar7[2] <= pdVar6[2]) {
    dVar8 = pdVar6[2];
  }
  pdVar3[2] = dVar8;
  return;
}

// StaticExecute @ 14a1e5730

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
FRigVMFunction_MathVectorMax::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_4->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_4->field0_0x0)._s_0.Y = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_4->field0_0x0)._s_0.Z = dVar2;
  return;
}

