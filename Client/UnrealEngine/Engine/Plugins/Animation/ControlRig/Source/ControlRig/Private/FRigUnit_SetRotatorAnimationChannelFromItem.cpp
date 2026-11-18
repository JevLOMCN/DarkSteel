// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a46db50

UScriptStruct * __cdecl FRigUnit_SetRotatorAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetRotatorAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a46dbd0

UScriptStruct * __thiscall
FRigUnit_SetRotatorAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetRotatorAnimationChannelFromItem *this)

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

// Execute @ 14a46dd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRotatorAnimationChannelFromItem::Execute
          (FRigUnit_SetRotatorAnimationChannelFromItem *this)

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

// Execute @ 14a52d570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRotatorAnimationChannelFromItem::Execute
          (FRigUnit_SetRotatorAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a554780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetRotatorAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRotator<double> *pTVar5;
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
    pTVar5 = (TRotator<double> *)pFVar2->Ptr;
  }
  else {
    pTVar5 = (TRotator<double> *)
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

// StaticExecute @ 14a593fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetRotatorAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,TRotator<double> *param_2,FRigElementKey *param_3,
          bool param_4)

{
  URigHierarchy *this;
  int iVar1;
  FRigControlElement *pFVar2;
  TVector<double> *pTVar3;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_38;
  TVector<double> local_28;
  
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar1 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar2 = URigHierarchy::Get<FRigControlElement>(this,iVar1);
    if ((pFVar2 != (FRigControlElement *)0x0) && ((pFVar2->Settings).ControlType == Rotator)) {
      pTVar3 = UE::Math::TRotator<double>::Euler(param_2,&local_28);
      local_38 = 1;
      local_c8._0_1_ = true;
      local_c8._1_3_ = 0;
      local_138._0_4_ = 0.0;
      local_138._4_4_ = 0.0;
      uStack_130._0_4_ = 0.0;
      uStack_130._4_4_ = 0.0;
      local_128._0_4_ = 0.0;
      local_128._4_4_ = 0.0;
      uStack_120._0_4_ = 0.0;
      uStack_120._4_4_ = 0.0;
      local_118._0_4_ = 0.0;
      local_118._4_4_ = 0.0;
      uStack_110._0_4_ = 0.0;
      uStack_110._4_4_ = 0.0;
      local_148._4_4_ = (float)(pTVar3->field0_0x0)._s_0.Y;
      local_148._0_4_ = (float)(pTVar3->field0_0x0)._s_0.X;
      local_148._8_4_ = (float)(pTVar3->field0_0x0)._s_0.Z;
      local_148._12_4_ = 0;
      local_108._0_4_ = 0.0;
      local_108._4_4_ = 0.0;
      uStack_100._0_4_ = 0.0;
      uStack_100._4_4_ = 0.0;
      local_f8._0_4_ = 0.0;
      local_f8._4_4_ = 0.0;
      uStack_f0._0_4_ = 0.0;
      uStack_f0._4_4_ = 0.0;
      local_e8._0_4_ = 0.0;
      local_e8._4_4_ = 0.0;
      uStack_e0._0_4_ = 0.0;
      uStack_e0._4_4_ = 0.0;
      local_d8._0_4_ = 0.0;
      local_d8._4_4_ = 0.0;
      uStack_d0._0_4_ = 0.0;
      uStack_d0._4_4_ = 0.0;
      URigHierarchy::SetControlValueByIndex
                (param_1->Hierarchy,*(int *)&pFVar2->field_0x1c,(FRigControlValue *)local_148,
                 !param_4,false,false);
    }
  }
  return;
}

