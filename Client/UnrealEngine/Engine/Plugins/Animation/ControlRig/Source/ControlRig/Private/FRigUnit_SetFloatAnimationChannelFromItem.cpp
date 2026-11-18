// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4fcb40

UScriptStruct * __cdecl FRigUnit_SetFloatAnimationChannelFromItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem,
                         (UObject *)pUVar1,L"RigUnit_SetFloatAnimationChannelFromItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fcbd0

UScriptStruct * __thiscall
FRigUnit_SetFloatAnimationChannelFromItem::GetExecuteContextStruct
          (FRigUnit_SetFloatAnimationChannelFromItem *this)

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

// Execute @ 14a4fcfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetFloatAnimationChannelFromItem::Execute(FRigUnit_SetFloatAnimationChannelFromItem *this)

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

// Execute @ 14a52cc70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetFloatAnimationChannelFromItem::Execute
          (FRigUnit_SetFloatAnimationChannelFromItem *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->Value,(FRigElementKey *)&this->_padding_,
                *(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// RigVMExecute @ 14a552830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetFloatAnimationChannelFromItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  FRigElementKey *pFVar7;
  uchar *puVar8;
  FControlRigExecuteContext *pFVar9;
  
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar6 = (float *)pFVar3->Ptr;
  }
  else {
    pfVar6 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  fVar1 = *pfVar6;
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar3[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
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
  StaticExecute(pFVar9,fVar1,pFVar7,bVar5);
  return;
}

// StaticExecute @ 14a592880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute
          (FControlRigExecuteContext *param_1,float param_2,FRigElementKey *param_3,bool param_4)

{
  ERigControlType EVar1;
  URigHierarchy *this;
  int iVar2;
  FRigControlElement *pFVar3;
  undefined1 local_138 [16];
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_28;
  
  if ((param_1->Hierarchy != (URigHierarchy *)0x0) &&
     (((uint)param_1->Hierarchy->_padding_ >> 0x1e & 1) == 0)) {
    this = param_1->Hierarchy;
    iVar2 = URigHierarchy::GetIndex(this,param_3,true);
    pFVar3 = URigHierarchy::Get<FRigControlElement>(this,iVar2);
    if ((pFVar3 != (FRigControlElement *)0x0) &&
       ((EVar1 = (pFVar3->Settings).ControlType, EVar1 == Float || (EVar1 == ScaleFloat)))) {
      local_28 = 1;
      local_b8._0_1_ = true;
      local_b8._1_3_ = 0;
      local_138 = ZEXT416((uint)param_2);
      local_128._0_4_ = 0.0;
      local_128._4_4_ = 0.0;
      uStack_120._0_4_ = 0.0;
      uStack_120._4_4_ = 0.0;
      local_118._0_4_ = 0.0;
      local_118._4_4_ = 0.0;
      uStack_110._0_4_ = 0.0;
      uStack_110._4_4_ = 0.0;
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
      local_c8._0_4_ = 0.0;
      local_c8._4_4_ = 0.0;
      uStack_c0._0_4_ = 0.0;
      uStack_c0._4_4_ = 0.0;
      URigHierarchy::SetControlValueByIndex
                (param_1->Hierarchy,*(int *)&pFVar3->field_0x1c,(FRigControlValue *)local_138,
                 !param_4,false,false);
    }
  }
  return;
}

