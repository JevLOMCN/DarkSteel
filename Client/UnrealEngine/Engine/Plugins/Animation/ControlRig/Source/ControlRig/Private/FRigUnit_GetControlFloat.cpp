// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4816e0

UScriptStruct * __cdecl FRigUnit_GetControlFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlFloat,(UObject *)pUVar1,
                         L"RigUnit_GetControlFloat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlFloat.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlFloat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a481760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlFloat::GetExecuteContextStruct(FRigUnit_GetControlFloat *this)

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

// Execute @ 14a481990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlFloat::Execute(FRigUnit_GetControlFloat *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,&this->FloatValue,
                &this->Minimum,&this->Maximum,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlFloat::Execute(FRigUnit_GetControlFloat *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->FloatValue,&this->Minimum,&this->Maximum,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a5409e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlFloat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  float *pfVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
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
  pfVar2 = (float *)param_2->DataPtr[1].Ptr;
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
  pfVar3 = (float *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,pfVar2,pfVar3,pfVar8,pFVar10);
  return;
}

// StaticExecute @ 14a576370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlFloat::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float *param_3,float *param_4,
          float *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FRigElementKey local_a8;
  FRigControlValue local_9c;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_a8.Name = *param_2;
    local_a8.Type = Control;
    bVar1 = FCachedRigElement::UpdateCache(param_6,&local_a8,this);
    if (bVar1) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      uVar2 = uVar3;
      if (param_6->Index != 0xffff) {
        uVar2 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_9c,uVar2,Current);
      *param_3 = local_9c.FloatStorage.Float00;
      if (param_6->Index != 0xffff) {
        uVar3 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_9c,uVar3,Minimum);
      *param_4 = local_9c.FloatStorage.Float00;
      if (param_6->Index != 0xffff) {
        uVar4 = (uint)param_6->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_9c,uVar4,Maximum);
      *param_5 = local_9c.FloatStorage.Float00;
    }
  }
  return;
}

