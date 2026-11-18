// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a49af30

UScriptStruct * __cdecl FRigUnit_DrawContainerSetColor::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor,(UObject *)pUVar1,
                         L"RigUnit_DrawContainerSetColor");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetColor.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetColor.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49afb0

UScriptStruct * __thiscall
FRigUnit_DrawContainerSetColor::GetExecuteContextStruct(FRigUnit_DrawContainerSetColor *this)

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

// Execute @ 14a49b190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DrawContainerSetColor::Execute(FRigUnit_DrawContainerSetColor *this)

{
  undefined8 uVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [96];
  FRigVMDrawContainer *local_208;
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
  if (local_208 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex(local_208,&this->InstructionName);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](local_208,iVar2);
      uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      *(undefined8 *)&(pFVar3->Color).field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar3->Color).field0_0x0 + 8) = uVar1;
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a49b460

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DrawContainerSetColor::GetUpgradeInfo
          (FRigUnit_DrawContainerSetColor *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a527360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerSetColor::Execute
          (FRigUnit_DrawContainerSetColor *this,FControlRigExecuteContext *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex
                      (*(FRigVMDrawContainer **)&param_1->field_0x60,&this->InstructionName);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&param_1->field_0x60,iVar2);
      uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      *(undefined8 *)&(pFVar3->Color).field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar3->Color).field0_0x0 + 8) = uVar1;
    }
  }
  return;
}

// RigVMExecute @ 14a53dc40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetColor::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  uchar *puVar7;
  FControlRigExecuteContext *pFVar8;
  FRigVMDrawInstruction *pFVar9;
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar1->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
  }
  if (iVar5 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar1[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar1[1].PropertyPath,pFVar1[1].Ptr,pFVar1[1].Property);
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  if (*(FRigVMDrawContainer **)&pFVar8->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar5 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&pFVar8->field_0x60,pFVar6);
    if (iVar5 != -1) {
      pFVar9 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&pFVar8->field_0x60,iVar5);
      uVar3 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)&(pFVar9->Color).field0_0x0 = *(undefined8 *)puVar7;
      *(undefined8 *)((longlong)&(pFVar9->Color).field0_0x0 + 8) = uVar3;
    }
  }
  return;
}

// StaticExecute @ 14a56ed40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetColor::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FLinearColor *param_3)

{
  undefined8 uVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&param_1->field_0x60,param_2);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&param_1->field_0x60,iVar2);
      uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined8 *)&(pFVar3->Color).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
      *(undefined8 *)((longlong)&(pFVar3->Color).field0_0x0 + 8) = uVar1;
    }
  }
  return;
}

