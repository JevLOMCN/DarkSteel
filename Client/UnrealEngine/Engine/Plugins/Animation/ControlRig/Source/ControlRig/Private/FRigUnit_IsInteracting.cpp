// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a49bd00

UScriptStruct * __cdecl FRigUnit_IsInteracting::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IsInteracting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IsInteracting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsInteracting,(UObject *)pUVar1,
                         L"RigUnit_IsInteracting");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_IsInteracting.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_IsInteracting.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49bda0

UScriptStruct * __thiscall
FRigUnit_IsInteracting::GetExecuteContextStruct(FRigUnit_IsInteracting *this)

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

// Execute @ 14a49c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_IsInteracting::Execute(FRigUnit_IsInteracting *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [360];
  byte local_100;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_f8 [14];
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
  this->bIsInteracting = local_100 != 0;
  this->bIsTranslating = (bool)(local_100 & 1);
  this->bIsScaling = (bool)(local_100 >> 2 & 1);
  this->bIsRotating = (bool)(local_100 >> 1 & 1);
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(&this->Items,local_f8);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52a4a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_IsInteracting::Execute(FRigUnit_IsInteracting *this,FControlRigExecuteContext *param_1)

{
  this->bIsInteracting = (param_1->UnitContext).InteractionType != '\0';
  this->bIsTranslating = (bool)((param_1->UnitContext).InteractionType & 1);
  this->bIsRotating = (bool)((param_1->UnitContext).InteractionType >> 1 & 1);
  this->bIsScaling = (bool)((param_1->UnitContext).InteractionType >> 2 & 1);
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->Items,&(param_1->UnitContext).ElementsBeingInteracted);
  return;
}

// RigVMExecute @ 14a549870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IsInteracting::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  FRigVMMemoryHandle *pFVar7;
  byte *pbVar8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this;
  FControlRigExecuteContext *pFVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar2 = param_2->DataPtr->Ptr;
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar3 = param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar4 = param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  this = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  *puVar2 = (pFVar9->UnitContext).InteractionType != '\0';
  *pbVar3 = (pFVar9->UnitContext).InteractionType & 1;
  *pbVar4 = (pFVar9->UnitContext).InteractionType >> 1 & 1;
  *pbVar8 = (pFVar9->UnitContext).InteractionType >> 2 & 1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (this,&(pFVar9->UnitContext).ElementsBeingInteracted);
  return;
}

// StaticExecute @ 14a5828b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IsInteracting::StaticExecute
          (FControlRigExecuteContext *param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_6)

{
  *param_2 = (param_1->UnitContext).InteractionType != '\0';
  *param_3 = (bool)((param_1->UnitContext).InteractionType & 1);
  *param_4 = (bool)((param_1->UnitContext).InteractionType >> 1 & 1);
  *param_5 = (bool)((param_1->UnitContext).InteractionType >> 2 & 1);
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (param_6,&(param_1->UnitContext).ElementsBeingInteracted);
  return;
}

