// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46c040

UScriptStruct * __cdecl FRigUnit_SetIntAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetIntAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a46c0d0

UScriptStruct * __thiscall
FRigUnit_SetIntAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetIntAnimationChannelFromItem *this)

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

// Execute @ 14a46c620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetIntAnimationChannelFromItem::Execute(FRigUnit_SetIntAnimationChannelFromItem *this)

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

// Execute @ 14a52cd10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetIntAnimationChannelFromItem::Execute
          (FRigUnit_SetIntAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a552bc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetIntAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FRigElementKey *pFVar7;
  uchar *puVar8;
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar3->Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  iVar2 = *piVar6;
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar3[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar3[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[2].PropertyPath,pFVar3[2].Ptr,pFVar3[2].Property);
  }
  bVar5 = (bool)*puVar8;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,iVar2,pFVar7,bVar5);
  return;
}

// StaticExecute @ 14a592a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetIntAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,int param_2,FRigElementKey *param_3,bool param_4)

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
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Integer)) {
      uStack_90 = 0;
      local_98 = (ulonglong)(uint)param_2;
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

