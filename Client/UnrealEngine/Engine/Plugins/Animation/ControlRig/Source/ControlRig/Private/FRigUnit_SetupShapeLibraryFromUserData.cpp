// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47a700

UScriptStruct * __cdecl FRigUnit_SetupShapeLibraryFromUserData::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData,
                         (UObject *)pUVar1,L"RigUnit_SetupShapeLibraryFromUserData");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47a780

UScriptStruct * __thiscall
FRigUnit_SetupShapeLibraryFromUserData::GetExecuteContextStruct
          (FRigUnit_SetupShapeLibraryFromUserData *this)

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

// Execute @ 14a47a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetupShapeLibraryFromUserData::Execute(FRigUnit_SetupShapeLibraryFromUserData *this)

{
  undefined1 auStack_298 [32];
  undefined1 local_268 [592];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->NameSpace,&this->Path,
                &this->LibraryName,this->LogShapeLibraries);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52deb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetupShapeLibraryFromUserData::Execute
          (FRigUnit_SetupShapeLibraryFromUserData *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->NameSpace,&this->Path,&this->LibraryName,this->LogShapeLibraries);
  return;
}

// RigVMExecute @ 14a5564b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetupShapeLibraryFromUserData::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  uchar *puVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FString *)pFVar7->Ptr;
  }
  else {
    pFVar4 = (FString *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FString *)pFVar7[1].Ptr;
  }
  else {
    pFVar5 = (FString *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FString *)pFVar7[2].Ptr;
  }
  else {
    pFVar6 = (FString *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  bVar3 = (bool)*puVar8;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar4,pFVar5,pFVar6,bVar3);
  return;
}

// StaticExecute @ 14a595540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_SetupShapeLibraryFromUserData::StaticExecute
          (FControlRigExecuteContext *param_1,FString *param_2,FString *param_3,FString *param_4,
          bool param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  UNameSpacedUserData *pUVar5;
  longlong lVar6;
  UClass *pUVar7;
  longlong *plVar8;
  bool bVar9;
  int local_res8;
  undefined4 uStackX_c;
  FControlRigExecuteContext *local_58;
  FString local_50;
  FReadAccessScope local_40;
  
  lVar6 = *(longlong *)&param_1->field_0x8;
  if (lVar6 != 0) {
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    if (lVar6 != CONCAT44(uStackX_c,local_res8)) {
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,(FString *)&local_40);
      local_res8 = 4;
      uStackX_c = CONCAT31(uStackX_c._1_3_,1);
      ::FString::PrintfImpl
                (&local_50,
                 L"It\'s recommended to use this node in the %s event. When using it in other events please consider caching the results."
                );
      puVar1 = *(undefined8 **)&param_1->field_0x40;
      if (puVar1 == (undefined8 *)0x0) {
        if (local_res8 == 1) {
          if (1 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (local_res8 == 3) {
          if (2 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l33::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (3 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                      ::__l53::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
      }
      else {
        local_58 = param_1;
        UE::Core::Private::Function::CheckCallable((void *)*puVar1);
        pcVar2 = (code *)*puVar1;
        plVar8 = puVar1 + 2;
        if ((longlong *)puVar1[5] != (longlong *)0x0) {
          plVar8 = (longlong *)puVar1[5];
        }
        uVar4 = (**(code **)(*plVar8 + 8))();
        (*pcVar2)(uVar4,&local_res8,&local_58,&local_50);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((void *)local_40.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_40.DestructionSentinel._0_8_);
      }
    }
    pUVar5 = FControlRigExecuteContext::FindUserData(param_1,param_2);
    if (pUVar5 != (UNameSpacedUserData *)0x0) {
      plVar8 = (longlong *)0x0;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      lVar6 = (**(code **)(pUVar5->_padding_ + 0x2d0))(pUVar5,param_3,&local_50);
      if (((lVar6 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x18), lVar3 != 0)) &&
         ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) >> 0x10 & 1) != 0)) {
        pUVar7 = Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
        if (*(UClass **)(lVar3 + 0x70) == (UClass *)0x0) {
          bVar9 = pUVar7 == (UClass *)0x0;
        }
        else {
          bVar9 = *(UClass **)(lVar3 + 0x70) == pUVar7;
        }
        if ((bVar9) &&
           (bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                               &param_1->OnAddShapeLibraryDelegate), bVar9)) {
          uVar4 = *(undefined8 *)(lVar6 + 0x20);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &param_1->OnAddShapeLibraryDelegate,&local_40);
          if (*(int *)&(param_1->OnAddShapeLibraryDelegate).field_0x10 != 0) {
            plVar8 = *(longlong **)&(param_1->OnAddShapeLibraryDelegate).field_0x8;
          }
          (**(code **)(*plVar8 + 0x60))(plVar8,param_1,param_4,uVar4,param_5);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_40);
        }
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

