// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46cb20

UScriptStruct * __cdecl FRigUnit_SetVector2DAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetVector2DAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a46cbb0

UScriptStruct * __thiscall
FRigUnit_SetVector2DAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetVector2DAnimationChannelFromItem *this)

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

// Execute @ 14a46cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetVector2DAnimationChannelFromItem::Execute
          (FRigUnit_SetVector2DAnimationChannelFromItem *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Value,
                (FRigElementKey *)&this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52ddf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetVector2DAnimationChannelFromItem::Execute
          (FRigUnit_SetVector2DAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a555fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetVector2DAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
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
    pTVar5 = (TVector2<double> *)pFVar2->Ptr;
  }
  else {
    pTVar5 = (TVector2<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar2[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  if (pFVar2[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar2[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[2].PropertyPath,pFVar2[2].Ptr,pFVar2[2].Property);
  }
  bVar4 = (bool)*puVar7;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar5,pFVar6,bVar4);
  return;
}

// StaticExecute @ 14a595220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetVector2DAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,TVector2<double> *param_2,FRigElementKey *param_3,
          bool param_4)

{
  URigHierarchy *this;
  int iVar1;
  FRigControlElement *pFVar2;
  FRigControlValueStorage local_128;
  FRigControlValueStorage local_98;
  
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar1 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar2 = URigHierarchy::Get<FRigControlElement>(this,iVar1);
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Vector2D)) {
      local_98._128_4_ = 1;
      local_98.Float02 = 0.0;
      local_98.Float03 = 0.0;
      local_128.Float10 = 0.0;
      local_128.Float11 = 0.0;
      local_128.Float12 = 0.0;
      local_128.Float13 = 0.0;
      local_128.Float01 = (float)(param_2->field0_0x0)._s_0.Y;
      local_128.Float00 = (float)(param_2->field0_0x0)._s_0.X;
      local_128.Float02 = 0.0;
      local_128.Float03 = 0.0;
      local_128.Float20 = 0.0;
      local_128.Float21 = 0.0;
      local_128.Float22 = 0.0;
      local_128.Float23 = 0.0;
      local_128.Float30 = 0.0;
      local_128.Float31 = 0.0;
      local_128.Float32 = 0.0;
      local_128.Float33 = 0.0;
      local_128.Float00_2 = 0.0;
      local_128.Float01_2 = 0.0;
      local_128.Float02_2 = 0.0;
      local_128.Float03_2 = 0.0;
      local_128.Float10_2 = 0.0;
      local_128.Float11_2 = 0.0;
      local_128.Float12_2 = 0.0;
      local_128.Float13_2 = 0.0;
      local_128.Float20_2 = 0.0;
      local_128.Float21_2 = 0.0;
      local_128.Float22_2 = 0.0;
      local_128.Float23_2 = 0.0;
      local_128.Float30_2 = 0.0;
      local_128.Float31_2 = 0.0;
      local_128.Float32_2 = 0.0;
      local_128.Float33_2 = 0.0;
      local_128.bValid = true;
      local_128._129_3_ = 0;
      local_98._0_8_ = local_128._0_8_;
      URigHierarchy::SetControlValueByIndex
                (param_1->Hierarchy,*(int *)&pFVar2->field_0x1c,(FRigControlValue *)&local_128,
                 !param_4,false,false);
    }
  }
  return;
}

