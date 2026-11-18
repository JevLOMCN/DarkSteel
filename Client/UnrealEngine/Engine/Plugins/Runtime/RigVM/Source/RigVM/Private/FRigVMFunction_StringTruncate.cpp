// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11b6a0

UScriptStruct * __cdecl FRigVMFunction_StringTruncate::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_StringTruncate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_StringTruncate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate,(UObject *)pUVar1,
                         L"RigVMFunction_StringTruncate");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_StringTruncate.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_StringTruncate.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11b720

UScriptStruct * __thiscall
FRigVMFunction_StringTruncate::GetExecuteContextStruct(FRigVMFunction_StringTruncate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a11b9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_StringTruncate::Execute(FRigVMFunction_StringTruncate *this)

{
  FRigVMExecuteContext local_118;
  
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
  StaticExecute(&local_118,&this->Name,this->Count,this->FromEnd,&this->Remainder,&this->Chopped);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a4060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_StringTruncate::Execute
          (FRigVMFunction_StringTruncate *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Name,this->Count,this->FromEnd,&this->Remainder,&this->Chopped);
  return;
}

// RigVMExecute @ 14a1d4360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_StringTruncate::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int *piVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FRigVMExecuteContext *pFVar11;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FString *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FString *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar8[1].Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  iVar2 = *piVar6;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  bVar4 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FString *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FString *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,iVar2,bVar4,pFVar9,pFVar10);
  return;
}

// StaticExecute @ 14a1e7ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_StringTruncate::StaticExecute
          (FRigVMExecuteContext *param_1,FString *param_2,int param_3,bool param_4,FString *param_5,
          FString *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::operator=(param_5,param_2);
  if (param_6 != &local_28) {
    pFVar1 = (param_6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_6->Data).ArrayNum = 0;
    (param_6->Data).ArrayMax = 0;
  }
  iVar4 = (param_2->Data).ArrayNum;
  if ((1 < iVar4) && (0 < param_3)) {
    iVar2 = 0;
    if (param_4) {
      iVar4 = iVar4 + -1;
      iVar7 = 0;
      if (iVar4 - param_3 < iVar4) {
        iVar4 = iVar4 - param_3;
      }
      iVar8 = iVar7;
      if (0 < iVar4) {
        iVar8 = iVar4;
      }
      ::FString::ConstructFromPtrSize
                (&local_68,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar8);
      if (param_5 != &local_68) {
        pFVar1 = (param_5->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_5->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (param_5->Data).ArrayNum = local_68.Data.ArrayNum;
        (param_5->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      iVar4 = (param_2->Data).ArrayNum;
      if (iVar4 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        iVar7 = iVar4 + -1;
      }
      iVar4 = iVar7;
      if (param_3 < iVar7) {
        iVar4 = param_3;
      }
      if (0 < iVar4) {
        iVar2 = iVar4;
      }
      ::FString::FString(&local_58,
                         (wchar_t *)((longlong)pwVar5 + ((longlong)iVar7 - (longlong)iVar2) * 2));
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
      if (param_6 != &local_58) {
        pFVar1 = (param_6->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_6->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (param_6->Data).ArrayNum = local_58.Data.ArrayNum;
        (param_6->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      pFVar3 = ::FString::RightChop(param_2,&local_38,param_3);
      ::FString::operator=(param_5,pFVar3);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar4 = (param_2->Data).ArrayNum;
      iVar7 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar7 = iVar2;
      }
      if (param_3 < iVar7) {
        iVar7 = param_3;
      }
      if (0 < iVar7) {
        iVar2 = iVar7;
      }
      if (iVar4 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,pwVar5,iVar2);
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
      if (param_6 != &local_48) {
        pFVar1 = (param_6->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_6->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_6->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_6->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
  return;
}

