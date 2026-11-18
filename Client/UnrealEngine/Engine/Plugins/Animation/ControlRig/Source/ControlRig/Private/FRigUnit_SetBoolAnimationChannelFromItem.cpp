// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4fbc70

UScriptStruct * __cdecl FRigUnit_SetBoolAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetBoolAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fbcf0

UScriptStruct * __thiscall
FRigUnit_SetBoolAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetBoolAnimationChannelFromItem *this)

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

// Execute @ 14a4fc270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoolAnimationChannelFromItem::Execute(FRigUnit_SetBoolAnimationChannelFromItem *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  StaticExecute((FControlRigExecuteContext *)local_268,this->Value,
                (FRigElementKey *)&this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c7e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoolAnimationChannelFromItem::Execute
          (FRigUnit_SetBoolAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a550940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoolAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  FRigElementKey *pFVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  bVar4 = (bool)*puVar6;
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar2[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[2].PropertyPath,pFVar2[2].Ptr,pFVar2[2].Property);
  }
  bVar5 = (bool)*puVar6;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,bVar4,pFVar7,bVar5);
  return;
}

// StaticExecute @ 14a590900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoolAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,bool param_2,FRigElementKey *param_3,bool param_4)

{
  URigHierarchy *this;
  int iVar1;
  FRigControlElement *pFVar2;
  FRigControlValue local_128;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined4 local_18;
  
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar1 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar2 = URigHierarchy::Get<FRigControlElement>(this,iVar1);
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Bool)) {
      uStack_90 = 0;
      local_98 = (ulonglong)param_2;
      local_18 = 1;
      local_128.FloatStorage.Float00 = (float)(undefined4)local_98;
      local_128.FloatStorage.Float01 = (float)local_98._4_4_;
      local_128.FloatStorage.Float02 = 0.0;
      local_128.FloatStorage.Float03 = 0.0;
      local_128.FloatStorage.Float10 = 0.0;
      local_128.FloatStorage.Float11 = 0.0;
      local_128.FloatStorage.Float12 = 0.0;
      local_128.FloatStorage.Float13 = 0.0;
      local_128.FloatStorage.Float20 = 0.0;
      local_128.FloatStorage.Float21 = 0.0;
      local_128.FloatStorage.Float22 = 0.0;
      local_128.FloatStorage.Float23 = 0.0;
      local_128.FloatStorage.Float30 = 0.0;
      local_128.FloatStorage.Float31 = 0.0;
      local_128.FloatStorage.Float32 = 0.0;
      local_128.FloatStorage.Float33 = 0.0;
      local_128.FloatStorage.Float00_2 = 0.0;
      local_128.FloatStorage.Float01_2 = 0.0;
      local_128.FloatStorage.Float02_2 = 0.0;
      local_128.FloatStorage.Float03_2 = 0.0;
      local_128.FloatStorage.Float10_2 = 0.0;
      local_128.FloatStorage.Float11_2 = 0.0;
      local_128.FloatStorage.Float12_2 = 0.0;
      local_128.FloatStorage.Float13_2 = 0.0;
      local_128.FloatStorage.Float20_2 = 0.0;
      local_128.FloatStorage.Float21_2 = 0.0;
      local_128.FloatStorage.Float22_2 = 0.0;
      local_128.FloatStorage.Float23_2 = 0.0;
      local_128.FloatStorage.Float30_2 = 0.0;
      local_128.FloatStorage.Float31_2 = 0.0;
      local_128.FloatStorage.Float32_2 = 0.0;
      local_128.FloatStorage.Float33_2 = 0.0;
      local_128.FloatStorage.bValid = true;
      local_128.FloatStorage._129_3_ = 0;
      URigHierarchy::SetControlValueByIndex
                (param_1->Hierarchy,*(int *)&pFVar2->field_0x1c,&local_128,!param_4,false,false);
    }
  }
  return;
}

