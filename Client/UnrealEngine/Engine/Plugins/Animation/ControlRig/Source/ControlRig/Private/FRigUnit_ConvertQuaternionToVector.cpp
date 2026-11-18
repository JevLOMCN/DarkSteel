// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a499400

UScriptStruct * __cdecl FRigUnit_ConvertQuaternionToVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertQuaternionToVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertQuaternionToVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector,
                         (UObject *)pUVar1,L"RigUnit_ConvertQuaternionToVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertQuaternionToVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConvertQuaternionToVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4994c0

UScriptStruct * __thiscall
FRigUnit_ConvertQuaternionToVector::GetExecuteContextStruct
          (FRigUnit_ConvertQuaternionToVector *this)

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

// Execute @ 14a4996c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertQuaternionToVector::Execute(FRigUnit_ConvertQuaternionToVector *this)

{
  double dVar1;
  TVector<double> *pTVar2;
  undefined1 auStack_2c8 [32];
  TVector<double>_u_0 local_2a8;
  TVector<double> local_288;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c8;
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
  local_2a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_2a8._s_0.Y = _UNK_150689518;
  local_2a8._s_0.Z = 0.0;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (&this->Input,&local_288,(TVector<double> *)&local_2a8._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4997c0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ConvertQuaternionToVector::GetUpgradeInfo
          (FRigUnit_ConvertQuaternionToVector *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a526140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertQuaternionToVector::Execute
          (FRigUnit_ConvertQuaternionToVector *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_48._s_0.Y = _UNK_150689518;
  local_48._s_0.Z = 0.0;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (&this->Input,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// RigVMExecute @ 14a539980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertQuaternionToVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TQuat<double> *this;
  TVector<double> *pTVar7;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
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
    this = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    this = (TQuat<double> *)
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
  local_48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_48._s_0.Y = _UNK_150689518;
  local_48._s_0.Z = 0.0;
  pTVar7 = UE::Math::TQuat<double>::RotateVector(this,&local_28,(TVector<double> *)&local_48._s_0);
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  *pdVar3 = (pTVar7->field0_0x0)._s_0.X;
  pdVar3[1] = dVar5;
  pdVar3[2] = (pTVar7->field0_0x0)._s_0.Z;
  return;
}

// StaticExecute @ 14a569fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertQuaternionToVector::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_48._s_0.Y = _UNK_150689518;
  local_48._s_0.Z = 0.0;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (param_2,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

