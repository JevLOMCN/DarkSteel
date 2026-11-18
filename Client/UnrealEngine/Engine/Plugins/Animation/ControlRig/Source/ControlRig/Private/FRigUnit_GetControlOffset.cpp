// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47a5a0

UScriptStruct * __cdecl FRigUnit_GetControlOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlOffset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlOffset,(UObject *)pUVar1,
                         L"RigUnit_GetControlOffset");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlOffset_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlOffset.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlOffset.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47a620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlOffset::GetExecuteContextStruct(FRigUnit_GetControlOffset *this)

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

// Execute @ 14a47a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlOffset::Execute(FRigUnit_GetControlOffset *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Space,
                &this->OffsetTransform,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlOffset::Execute
          (FRigUnit_GetControlOffset *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Space,&this->OffsetTransform,&this->CachedIndex);
  return;
}

// RigVMExecute @ 14a540ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlOffset::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar7;
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,EVar1,pTVar3,pFVar10);
  return;
}

// StaticExecute @ 14a5766f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlOffset::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigVMTransformSpace param_3,
          TTransform<double> *param_4,FCachedRigElement *param_5)

{
  URigHierarchy *this;
  double dVar1;
  bool bVar2;
  uint uVar3;
  FRigControlElement *pFVar4;
  TTransform<double> *pTVar5;
  Type TVar6;
  undefined1 auStack_b8 [32];
  FRigElementKey local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_98.Name = *param_2;
    local_98.Type = Control;
    bVar2 = FCachedRigElement::UpdateCache(param_5,&local_98,this);
    if (bVar2) {
      uVar3 = 0xffffffff;
      if (param_5->Index != 0xffff) {
        uVar3 = (uint)param_5->Index;
      }
      pFVar4 = URigHierarchy::Get<FRigControlElement>(this,uVar3);
      if (param_3 == LocalSpace) {
        TVar6 = InitialLocal;
      }
      else {
        if (param_3 != GlobalSpace) {
          return;
        }
        TVar6 = InitialGlobal;
      }
      pTVar5 = URigHierarchy::GetControlOffsetTransform(this,&local_88,pFVar4,TVar6);
      dVar1 = (pTVar5->Rotation).XY.m128d_f64[1];
      (param_4->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
      (param_4->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Rotation).ZW.m128d_f64[1];
      (param_4->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
      (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Translation).XY.m128d_f64[1];
      (param_4->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
      (param_4->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Translation).ZW.m128d_f64[1];
      (param_4->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
      (param_4->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Scale3D).XY.m128d_f64[1];
      (param_4->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
      (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Scale3D).ZW.m128d_f64[1];
      (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
    }
  }
  return;
}

