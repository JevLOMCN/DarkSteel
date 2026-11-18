// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4995b0

UScriptStruct * __cdecl FRigUnit_GetControlColor::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlColor,(UObject *)pUVar1,
                         L"RigUnit_GetControlColor");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlColor.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlColor.OuterSingleton;
}

// GetExecuteContextStruct @ 14a499630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlColor::GetExecuteContextStruct(FRigUnit_GetControlColor *this)

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

// Execute @ 14a4997e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlColor::Execute(FRigUnit_GetControlColor *this)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FRigControlElement *pFVar5;
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
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  if (local_a0 != (URigHierarchy *)0x0) {
    local_278.Name = this->Control;
    local_278.Type = Control;
    bVar3 = FCachedRigElement::UpdateCache(&this->CachedControlIndex,&local_278,local_a0);
    if (bVar3) {
      uVar1 = (this->CachedControlIndex).Index;
      uVar4 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar4 = (uint)uVar1;
      }
      pFVar5 = URigHierarchy::GetChecked<FRigControlElement>(local_a0,uVar4);
      uVar2 = *(undefined8 *)((longlong)&(pFVar5->Settings).ShapeColor.field0_0x0 + 8);
      *(undefined8 *)&(this->Color).field0_0x0 =
           *(undefined8 *)&(pFVar5->Settings).ShapeColor.field0_0x0;
      *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar2;
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527eb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlColor::Execute(FRigUnit_GetControlColor *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->Color,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a540720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlColor::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FLinearColor *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FControlRigExecuteContext *pFVar9;
  
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
  pFVar3 = (FLinearColor *)param_2->DataPtr[1].Ptr;
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
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar6,pFVar3,pFVar8);
  return;
}

// StaticExecute @ 14a576210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlColor::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FLinearColor *param_3,
          FCachedRigElement *param_4)

{
  URigHierarchy *this;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FRigControlElement *pFVar4;
  FRigElementKey local_18;
  
  (param_3->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_18.Name = *param_2;
    local_18.Type = Control;
    bVar2 = FCachedRigElement::UpdateCache(param_4,&local_18,this);
    if (bVar2) {
      uVar3 = 0xffffffff;
      if (param_4->Index != 0xffff) {
        uVar3 = (uint)param_4->Index;
      }
      pFVar4 = URigHierarchy::GetChecked<FRigControlElement>(this,uVar3);
      uVar1 = *(undefined8 *)((longlong)&(pFVar4->Settings).ShapeColor.field0_0x0 + 8);
      *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)&(pFVar4->Settings).ShapeColor.field0_0x0
      ;
      *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uVar1;
    }
  }
  return;
}

