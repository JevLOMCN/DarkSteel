// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 6

// StaticStruct @ 14d360e10

UScriptStruct * __cdecl FRigUnit_LiveLinkEvaluateBasicValue::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue,
                         (UObject *)pUVar1,L"RigUnit_LiveLinkEvaluateBasicValue");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue.OuterSingleton;
}

// GetExecuteContextStruct @ 14d360e90

UScriptStruct * __thiscall
FRigUnit_LiveLinkEvaluateBasicValue::GetExecuteContextStruct
          (FRigUnit_LiveLinkEvaluateBasicValue *this)

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

// Execute @ 14d360ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluateBasicValue::Execute(FRigUnit_LiveLinkEvaluateBasicValue *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->SubjectName,&this->PropertyName,
                &this->Value);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14d361f90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluateBasicValue::Execute
          (FRigUnit_LiveLinkEvaluateBasicValue *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->SubjectName,&this->PropertyName,&this->Value);
  return;
}

// RigVMExecute @ 14d362100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluateBasicValue::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FName *pFVar7;
  FControlRigExecuteContext *pFVar8;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar2[1].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
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
  pfVar3 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar6,pFVar7,pfVar3);
  return;
}

// StaticExecute @ 14d362a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluateBasicValue::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,float *param_4)

{
  code *pcVar1;
  FName *pFVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ILiveLinkClient *pIVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  FName *pFVar11;
  UClass *local_68 [2];
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  pIVar6 = LiveLinkControlRigUtilities::TryGetLiveLinkClient();
  if (pIVar6 != (ILiveLinkClient *)0x0) {
    FStructOnScope::FStructOnScope(&local_58);
    FStructOnScope::FStructOnScope(&local_30);
    pcVar1 = *(code **)((longlong)*pIVar6 + 0x198);
    local_68[0] = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68[0]);
    }
    cVar3 = (*pcVar1)(pIVar6,*param_2,local_68,&local_58);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)(**(code **)(local_58._padding_ + 0x18))(&local_58);
      lVar8 = (**(code **)(local_58._padding_ + 0x20))(&local_58);
      if (lVar8 != 0) {
        Z_Construct_UClass_UScriptStruct_NoRegister();
      }
      if (plVar7 != (longlong *)0x0) {
        pFVar2 = (FName *)*plVar7;
        if (pFVar2 != pFVar2 + (int)plVar7[1]) {
          pFVar11 = pFVar2;
          do {
            if (*pFVar11 == *param_3) {
              uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 3);
              if (uVar10 != 0xffffffff) {
                lVar8 = (**(code **)(local_30._padding_ + 0x18))(&local_30);
                lVar9 = (**(code **)(local_30._padding_ + 0x20))(&local_30);
                if (lVar9 != 0) {
                  Z_Construct_UClass_UScriptStruct_NoRegister();
                }
                if ((int)plVar7[1] == *(int *)(lVar8 + 0x78)) {
                  uVar5 = 0;
                  if ((int)uVar10 < *(int *)(lVar8 + 0x78)) {
                    uVar5 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  *param_4 = *(float *)(*(longlong *)(lVar8 + 0x70) + (longlong)(int)uVar10 * 4);
                }
              }
              break;
            }
            pFVar11 = pFVar11 + 1;
          } while (pFVar11 != pFVar2 + (int)plVar7[1]);
        }
      }
    }
    FStructOnScope::~FStructOnScope(&local_30);
    FStructOnScope::~FStructOnScope(&local_58);
  }
  return;
}

