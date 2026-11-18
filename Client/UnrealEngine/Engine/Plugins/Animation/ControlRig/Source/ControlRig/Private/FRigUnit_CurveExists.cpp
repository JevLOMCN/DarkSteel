// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4e9a60

UScriptStruct * __cdecl FRigUnit_CurveExists::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CurveExists.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CurveExists.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CurveExists,(UObject *)pUVar1,
                         L"RigUnit_CurveExists");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CurveExists.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CurveExists.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e9b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_CurveExists::GetExecuteContextStruct(FRigUnit_CurveExists *this)

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

// Execute @ 14a4e9ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CurveExists::Execute(FRigUnit_CurveExists *this)

{
  bool bVar1;
  undefined1 auStack_298 [32];
  FRigElementKey local_278;
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  if (local_a0 != (URigHierarchy *)0x0) {
    local_278.Name = this->Curve;
    local_278.Type = Curve;
    bVar1 = FCachedRigElement::UpdateCache(&this->CachedCurveIndex,&local_278,local_a0);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14a4e9f68;
    }
  }
  bVar1 = false;
LAB_14a4e9f68:
  this->Exists = bVar1;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a526370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CurveExists::Execute(FRigUnit_CurveExists *this,FControlRigExecuteContext *param_1)

{
  bool bVar1;
  FRigElementKey local_18;
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    local_18.Name = this->Curve;
    local_18.Type = Curve;
    bVar1 = FCachedRigElement::UpdateCache(&this->CachedCurveIndex,&local_18,param_1->Hierarchy);
    if (bVar1) {
      this->Exists = true;
      return;
    }
  }
  this->Exists = false;
  return;
}

// RigVMExecute @ 14a53a070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CurveExists::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *this;
  FControlRigExecuteContext *pFVar8;
  FRigElementKey local_18;
  
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
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
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
  puVar3 = param_2->DataPtr[1].Ptr;
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
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  this = (FCachedRigElement *)
         FRigVMMemoryHandle::GetData_Internal
                   (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  if (pFVar8->Hierarchy != (URigHierarchy *)0x0) {
    local_18.Name = *pFVar6;
    local_18.Type = Curve;
    bVar5 = FCachedRigElement::UpdateCache(this,&local_18,pFVar8->Hierarchy);
    if (bVar5) {
      *puVar3 = '\x01';
      return;
    }
  }
  *puVar3 = '\0';
  return;
}

// StaticExecute @ 14a56a1a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CurveExists::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool *param_3,
          FCachedRigElement *param_4)

{
  bool bVar1;
  FRigElementKey local_18;
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    local_18.Name = *param_2;
    local_18.Type = Curve;
    bVar1 = FCachedRigElement::UpdateCache(param_4,&local_18,param_1->Hierarchy);
    if (bVar1) {
      *param_3 = true;
      return;
    }
  }
  *param_3 = false;
  return;
}

