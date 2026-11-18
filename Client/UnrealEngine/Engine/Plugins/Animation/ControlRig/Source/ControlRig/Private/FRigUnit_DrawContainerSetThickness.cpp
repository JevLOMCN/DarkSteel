// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a49ba40

UScriptStruct * __cdecl FRigUnit_DrawContainerSetThickness::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetThickness.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetThickness.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness,
                         (UObject *)pUVar1,L"RigUnit_DrawContainerSetThickness");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetThickness.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetThickness.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49bac0

UScriptStruct * __thiscall
FRigUnit_DrawContainerSetThickness::GetExecuteContextStruct
          (FRigUnit_DrawContainerSetThickness *this)

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

// Execute @ 14a49bc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerSetThickness::Execute(FRigUnit_DrawContainerSetThickness *this)

{
  float fVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  undefined1 auStack_298 [32];
  undefined1 local_278 [96];
  FRigVMDrawContainer *local_218;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  if ((FRigVMNameCache *)local_278._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_278._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  fVar1 = this->Thickness;
  if (local_218 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex(local_218,&this->InstructionName);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](local_218,iVar2);
      pFVar3->Thickness = fVar1;
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  return;
}

// GetUpgradeInfo @ 14a49bd80

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DrawContainerSetThickness::GetUpgradeInfo
          (FRigUnit_DrawContainerSetThickness *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a5273b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerSetThickness::Execute
          (FRigUnit_DrawContainerSetThickness *this,FControlRigExecuteContext *param_1)

{
  float fVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  
  fVar1 = this->Thickness;
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex
                      (*(FRigVMDrawContainer **)&param_1->field_0x60,&this->InstructionName);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&param_1->field_0x60,iVar2);
      pFVar3->Thickness = fVar1;
    }
  }
  return;
}

// RigVMExecute @ 14a53dd70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetThickness::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  float *pfVar7;
  FControlRigExecuteContext *pFVar8;
  FRigVMDrawInstruction *pFVar9;
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
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
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar5 < 2) {
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
    pfVar7 = (float *)pFVar2[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  if (*(FRigVMDrawContainer **)&pFVar8->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar5 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&pFVar8->field_0x60,pFVar6);
    if (iVar5 != -1) {
      pFVar9 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&pFVar8->field_0x60,iVar5);
      pFVar9->Thickness = fVar1;
    }
  }
  return;
}

// StaticExecute @ 14a56ed90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetThickness::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3)

{
  int iVar1;
  FRigVMDrawInstruction *pFVar2;
  
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar1 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&param_1->field_0x60,param_2);
    if (iVar1 != -1) {
      pFVar2 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&param_1->field_0x60,iVar1);
      pFVar2->Thickness = param_3;
    }
  }
  return;
}

