// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a149ba0

UScriptStruct * __cdecl FRigVMFunction_MathMatrixMul::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixMul.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixMul.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul,(UObject *)pUVar1,
                         L"RigVMFunction_MathMatrixMul");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixMul.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixMul.OuterSingleton;
}

// GetExecuteContextStruct @ 14a149c20

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixMul::GetExecuteContextStruct(FRigVMFunction_MathMatrixMul *this)

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

// Execute @ 14a149d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRigVMFunction_MathMatrixMul::Execute(FRigVMFunction_MathMatrixMul *this)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
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
  VectorMatrixMultiply
            (&local_98,(TMatrix<double> *)&this->field_0x10,(TMatrix<double> *)&this->field_0x90);
  *(double *)&this->field_0x110 = local_98.M[0][0];
  *(double *)&this->field_0x118 = local_98.M[0][1];
  *(double *)&this->field_0x120 = local_98.M[0][2];
  *(double *)&this->field_0x128 = local_98.M[0][3];
  *(double *)&this->field_0x130 = local_98.M[1][0];
  *(double *)&this->field_0x138 = local_98.M[1][1];
  *(double *)&this->field_0x140 = local_98.M[1][2];
  *(double *)&this->field_0x148 = local_98.M[1][3];
  *(double *)&this->field_0x150 = local_98.M[2][0];
  *(double *)&this->field_0x158 = local_98.M[2][1];
  *(double *)&this->field_0x160 = local_98.M[2][2];
  *(double *)&this->field_0x168 = local_98.M[2][3];
  *(double *)&this->field_0x170 = local_98.M[3][0];
  *(double *)&this->field_0x178 = local_98.M[3][1];
  *(double *)&this->field_0x180 = local_98.M[3][2];
  *(double *)&this->field_0x188 = local_98.M[3][3];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0bb0

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
FRigVMFunction_MathMatrixMul::Execute
          (FRigVMFunction_MathMatrixMul *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,(TMatrix<double> *)&this->field_0x10,(TMatrix<double> *)&this->field_0x90,
                (TMatrix<double> *)&this->field_0x110);
  return;
}

// RigVMExecute @ 14a1c6990

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
FRigVMFunction_MathMatrixMul::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TMatrix<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TMatrix<double> *pTVar6;
  TMatrix<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
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
    pTVar6 = (TMatrix<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TMatrix<double> *)
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
    pTVar7 = (TMatrix<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TMatrix<double> *)
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
  pTVar3 = (TMatrix<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1def00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRigVMFunction_MathMatrixMul::StaticExecute
          (FRigVMExecuteContext *param_1,TMatrix<double> *param_2,TMatrix<double> *param_3,
          TMatrix<double> *param_4)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  VectorMatrixMultiply(&local_98,param_2,param_3);
  param_4->M[0][0] = local_98.M[0][0];
  param_4->M[0][1] = local_98.M[0][1];
  param_4->M[0][2] = local_98.M[0][2];
  param_4->M[0][3] = local_98.M[0][3];
  param_4->M[1][0] = local_98.M[1][0];
  param_4->M[1][1] = local_98.M[1][1];
  param_4->M[1][2] = local_98.M[1][2];
  param_4->M[1][3] = local_98.M[1][3];
  param_4->M[2][0] = local_98.M[2][0];
  param_4->M[2][1] = local_98.M[2][1];
  param_4->M[2][2] = local_98.M[2][2];
  param_4->M[2][3] = local_98.M[2][3];
  param_4->M[3][0] = local_98.M[3][0];
  param_4->M[3][1] = local_98.M[3][1];
  param_4->M[3][2] = local_98.M[3][2];
  param_4->M[3][3] = local_98.M[3][3];
  return;
}

