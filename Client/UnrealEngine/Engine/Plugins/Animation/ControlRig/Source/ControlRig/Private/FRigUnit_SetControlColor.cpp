// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a49a090

UScriptStruct * __cdecl FRigUnit_SetControlColor::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlColor,(UObject *)pUVar1,
                         L"RigUnit_SetControlColor");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlColor.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlColor.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49a340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlColor::GetExecuteContextStruct(FRigUnit_SetControlColor *this)

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

// Execute @ 14a49a940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlColor::Execute(FRigUnit_SetControlColor *this)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FRigControlElement *pFVar5;
  undefined1 auStack_298 [32];
  undefined1 local_278 [8];
  uint uStack_270;
  undefined4 uStack_26c;
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
    local_278._4_4_ = (this->Control).ComparisonIndex;
    uStack_270 = (this->Control).Number;
    local_278[0] = Control;
    bVar3 = FCachedRigElement::UpdateCache
                      (&this->CachedControlIndex,(FRigElementKey *)local_278,local_a0);
    if (bVar3) {
      uVar1 = (this->CachedControlIndex).Index;
      uVar4 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar4 = (uint)uVar1;
      }
      pFVar5 = URigHierarchy::GetChecked<FRigControlElement>(local_a0,uVar4);
      uVar2 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      local_278._0_4_ = SUB84(pFVar5,0);
      local_278._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
      uStack_270 = 0;
      uStack_26c = 0;
      *(undefined8 *)&(pFVar5->Settings).ShapeColor.field0_0x0 =
           *(undefined8 *)&(this->Color).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar5->Settings).ShapeColor.field0_0x0 + 8) = uVar2;
      URigHierarchy::Notify(local_a0,ControlSettingChanged,(FRigNotificationSubject *)local_278);
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c8a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlColor::Execute(FRigUnit_SetControlColor *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->Color,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a550d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlColor::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FLinearColor *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FControlRigExecuteContext *pFVar9;
  
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
    pFVar5 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
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
    pFVar6 = (FLinearColor *)pFVar2[1].Ptr;
  }
  else {
    pFVar6 = (FLinearColor *)
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
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar5,pFVar6,pFVar8);
  return;
}

// StaticExecute @ 14a590c40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlColor::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FLinearColor *param_3,
          FCachedRigElement *param_4)

{
  URigHierarchy *this;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FRigControlElement *pFVar4;
  undefined1 local_18 [8];
  uint uStack_10;
  undefined4 uStack_c;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_18._4_4_ = (*param_2).ComparisonIndex;
    uStack_10 = (*param_2).Number;
    local_18[0] = Control;
    bVar2 = FCachedRigElement::UpdateCache(param_4,(FRigElementKey *)local_18,this);
    if (bVar2) {
      uVar3 = 0xffffffff;
      if (param_4->Index != 0xffff) {
        uVar3 = (uint)param_4->Index;
      }
      pFVar4 = URigHierarchy::GetChecked<FRigControlElement>(this,uVar3);
      uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      local_18._0_4_ = SUB84(pFVar4,0);
      local_18._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
      uStack_10 = 0;
      uStack_c = 0;
      *(undefined8 *)&(pFVar4->Settings).ShapeColor.field0_0x0 = *(undefined8 *)&param_3->field0_0x0
      ;
      *(undefined8 *)((longlong)&(pFVar4->Settings).ShapeColor.field0_0x0 + 8) = uVar1;
      URigHierarchy::Notify(this,ControlSettingChanged,(FRigNotificationSubject *)local_18);
    }
  }
  return;
}

