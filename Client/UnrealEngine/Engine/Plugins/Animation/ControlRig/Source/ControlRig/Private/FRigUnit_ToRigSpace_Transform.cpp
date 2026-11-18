// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4aea20

UScriptStruct * __cdecl FRigUnit_ToRigSpace_Transform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Transform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Transform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform,(UObject *)pUVar1,
                         L"RigUnit_ToRigSpace_Transform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Transform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Transform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4aeaa0

UScriptStruct * __thiscall
FRigUnit_ToRigSpace_Transform::GetExecuteContextStruct(FRigUnit_ToRigSpace_Transform *this)

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

// Execute @ 14a4aed10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ToRigSpace_Transform::Execute(FRigUnit_ToRigSpace_Transform *this)

{
  undefined1 auStack_2e8 [32];
  TTransform<double> local_2c8;
  undefined1 local_268 [112];
  TTransform<double> local_1f8 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2e8;
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
  UE::Math::TTransform<double>::GetRelativeTransform(&this->Value,&local_2c8,local_1f8);
  (this->Global).Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
  (this->Global).Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
  (this->Global).Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
  (this->Global).Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
  (this->Global).Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
  (this->Global).Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
  (this->Global).Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
  (this->Global).Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
  (this->Global).Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
  (this->Global).Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
  (this->Global).Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
  (this->Global).Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52eab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ToRigSpace_Transform::Execute
          (FRigUnit_ToRigSpace_Transform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Global);
  return;
}

// RigVMExecute @ 14a559530

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToRigSpace_Transform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  FControlRigExecuteContext *pFVar7;
  
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
    pTVar6 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pTVar6,pTVar3);
  return;
}

// StaticExecute @ 14a59da00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToRigSpace_Transform::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UE::Math::TTransform<double>::GetRelativeTransform
            (param_2,&local_78,(TTransform<double> *)&param_1->field_0x70);
  (param_3->Rotation).XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  return;
}

