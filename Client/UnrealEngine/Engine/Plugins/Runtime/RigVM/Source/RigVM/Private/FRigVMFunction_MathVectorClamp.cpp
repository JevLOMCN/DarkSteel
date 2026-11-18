// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a139790

UScriptStruct * __cdecl FRigVMFunction_MathVectorClamp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClamp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClamp,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorClamp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClamp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClamp.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClamp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a139820

UScriptStruct * __thiscall
FRigVMFunction_MathVectorClamp::GetExecuteContextStruct(FRigVMFunction_MathVectorClamp *this)

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

// Execute @ 14a1399e0

void __thiscall FRigVMFunction_MathVectorClamp::Execute(FRigVMFunction_MathVectorClamp *this)

{
  double dVar1;
  double dVar2;
  
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
  dVar2 = (this->Maximum).field0_0x0._s_0.X;
  dVar1 = (this->Value).field0_0x0._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.X = dVar2;
  dVar2 = (this->Value).field0_0x0._s_0.Y;
  dVar1 = (this->Maximum).field0_0x0._s_0.Y;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.Y;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Value).field0_0x0._s_0.Z;
  dVar1 = (this->Maximum).field0_0x0._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.Z = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2a90

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
FRigVMFunction_MathVectorClamp::Execute
          (FRigVMFunction_MathVectorClamp *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Value).field0_0x0._s_0.X;
  dVar1 = (this->Maximum).field0_0x0._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.X = dVar2;
  dVar2 = (this->Value).field0_0x0._s_0.Y;
  dVar1 = (this->Maximum).field0_0x0._s_0.Y;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.Y;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Value).field0_0x0._s_0.Z;
  dVar1 = (this->Maximum).field0_0x0._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->Minimum).field0_0x0._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (this->Result).field0_0x0._s_0.Z = dVar2;
  return;
}

// RigVMExecute @ 14a1cdba0

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
FRigVMFunction_MathVectorClamp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  FRigVMMemoryHandle *pFVar7;
  double *pdVar8;
  double dVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar4 = (double *)pFVar7->Ptr;
  }
  else {
    pdVar4 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar5 = (double *)pFVar7[1].Ptr;
  }
  else {
    pdVar5 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar7[2].Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pdVar8 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar9 = *pdVar6;
  if (*pdVar4 <= *pdVar6) {
    dVar9 = *pdVar4;
  }
  if (dVar9 <= *pdVar5) {
    dVar9 = *pdVar5;
  }
  *pdVar8 = dVar9;
  dVar9 = pdVar6[1];
  if (pdVar4[1] <= pdVar6[1]) {
    dVar9 = pdVar4[1];
  }
  if (dVar9 <= pdVar5[1]) {
    dVar9 = pdVar5[1];
  }
  pdVar8[1] = dVar9;
  dVar9 = pdVar6[2];
  if (pdVar4[2] <= pdVar6[2]) {
    dVar9 = pdVar4[2];
  }
  if (dVar9 <= pdVar5[2]) {
    dVar9 = pdVar5[2];
  }
  pdVar8[2] = dVar9;
  return;
}

// StaticExecute @ 14a1e4780

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
FRigVMFunction_MathVectorClamp::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_5->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_5->field0_0x0)._s_0.Y = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_5->field0_0x0)._s_0.Z = dVar2;
  return;
}

