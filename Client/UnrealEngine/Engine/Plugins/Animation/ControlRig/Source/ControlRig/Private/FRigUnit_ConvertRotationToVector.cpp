// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a498c90

UScriptStruct * __cdecl FRigUnit_ConvertRotationToVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotationToVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotationToVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector,
                         (UObject *)pUVar1,L"RigUnit_ConvertRotationToVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotationToVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotationToVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a498d10

UScriptStruct * __thiscall
FRigUnit_ConvertRotationToVector::GetExecuteContextStruct(FRigUnit_ConvertRotationToVector *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a498e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ConvertRotationToVector::Execute(FRigUnit_ConvertRotationToVector *this)

{
  double dVar1;
  TVector<double> *pTVar2;
  undefined1 auStack_2b8 [32];
  TVector<double>_u_0 local_298;
  TVector<double> local_280;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_298._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_298._s_0.Y = _UNK_150689518;
  local_298._s_0.Z = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&this->Input,&local_280,(TVector<double> *)&local_298._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a498fd0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ConvertRotationToVector::GetUpgradeInfo
          (FRigUnit_ConvertRotationToVector *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a5261d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertRotationToVector::Execute
          (FRigUnit_ConvertRotationToVector *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_38._s_0.Y = _UNK_150689518;
  local_38._s_0.Z = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&this->Input,&local_20,(TVector<double> *)&local_38._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// RigVMExecute @ 14a539ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertRotationToVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TRotator<double> *this;
  TVector<double> *pTVar7;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TRotator<double> *)pFVar2->Ptr;
  }
  else {
    this = (TRotator<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar3 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  local_38._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_38._s_0.Y = _UNK_150689518;
  local_38._s_0.Z = 0.0;
  pTVar7 = UE::Math::TRotator<double>::RotateVector
                     (this,&local_20,(TVector<double> *)&local_38._s_0);
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  *pdVar3 = (pTVar7->field0_0x0)._s_0.X;
  pdVar3[1] = dVar5;
  pdVar3[2] = (pTVar7->field0_0x0)._s_0.Z;
  return;
}

// StaticExecute @ 14a56a020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertRotationToVector::StaticExecute
          (FControlRigExecuteContext *param_1,TRotator<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_38._s_0.Y = _UNK_150689518;
  local_38._s_0.Z = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (param_2,&local_20,(TVector<double> *)&local_38._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

