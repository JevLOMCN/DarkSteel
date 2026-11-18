// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a128000

UScriptStruct * __cdecl FRigVMFunction_StringJoin::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_StringJoin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_StringJoin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringJoin,(UObject *)pUVar1,
                         L"RigVMFunction_StringJoin");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_StringJoin.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_StringJoin.OuterSingleton;
}

// GetExecuteContextStruct @ 14a128080

UScriptStruct * __thiscall
FRigVMFunction_StringJoin::GetExecuteContextStruct(FRigVMFunction_StringJoin *this)

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

// Execute @ 14a1282f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_StringJoin::Execute(FRigVMFunction_StringJoin *this)

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
  Execute(this,&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3a80

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
FRigVMFunction_StringJoin::Execute(FRigVMFunction_StringJoin *this,FRigVMExecuteContext *param_1)

{
  FString *this_00;
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  uint uVar12;
  wchar_t *_Str;
  FScriptContainerElement *pFVar13;
  FString local_68;
  TStringBuilderBase<wchar_t> local_58;
  
  iVar1 = (this->Values).ArrayNum;
  _Str = L"";
  pFVar13 = (this->Values).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->Result;
  ::FString::Reset(this_00,0);
  if (iVar1 != 0) {
    if ((this->Separator).Data.ArrayNum != 0) {
      _Str = (wchar_t *)(this->Separator).Data.AllocatorInstance.Data;
    }
    sVar6 = wcslen(_Str);
    uVar12 = 0;
    iVar9 = 0;
    for (pFVar10 = pFVar13; pFVar10 != pFVar13 + (longlong)iVar1 * 0x10; pFVar10 = pFVar10 + 0x10) {
      iVar8 = iVar9 + -1 + *(int *)(pFVar10 + 8);
      if (*(int *)(pFVar10 + 8) == 0) {
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
    }
    local_58.End = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    iVar9 = iVar9 + 1 + (iVar1 + -1) * (int)sVar6;
    if (0 < iVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,(longlong)iVar9);
    }
    if (0 < iVar1) {
      do {
        if (0 < (int)uVar12) {
          iVar9 = 0;
          if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
            sVar6 = wcslen(_Str);
            iVar9 = (int)sVar6;
          }
          uVar11 = (ulong64)iVar9;
          if (local_58.End < local_58.CurPos + uVar11) {
            TStringBuilderBase<wchar_t>::Extend(&local_58,uVar11);
          }
          if (iVar9 != 0) {
            pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,_Str,uVar11 * 2);
            local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
          }
        }
        uVar5 = 0;
        if ((int)uVar12 < iVar1) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar7 = *(void **)pFVar13;
        uVar5 = *(int *)(pFVar13 + 8) - 1;
        if (*(int *)(pFVar13 + 8) == 0) {
          uVar5 = 0;
        }
        uVar11 = (ulong64)(int)uVar5;
        if (local_58.End < local_58.CurPos + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,uVar11);
        }
        if (uVar5 != 0) {
          pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,pvVar7,uVar11 * 2);
          local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
        }
        uVar12 = uVar12 + 1;
        pFVar13 = pFVar13 + 0x10;
      } while ((int)uVar12 < iVar1);
    }
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FString::FString(&local_68,local_58.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
    if (this_00 != &local_68) {
      pFVar13 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      FVar3.Data = local_68.Data.AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Data).AllocatorInstance.Data = FVar3.Data;
      (this->Result).Data.ArrayNum = local_68.Data.ArrayNum;
      (this->Result).Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RigVMExecute @ 14a1d2ff0

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
FRigVMFunction_StringJoin::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FString *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FString *pFVar7;
  FRigVMExecuteContext *pFVar8;
  TArrayView<FString_const_,int> local_18;
  
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
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
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
    pFVar7 = (FString *)pFVar2[1].Ptr;
  }
  else {
    pFVar7 = (FString *)
             FRigVMPropertyPath::GetData_Internal
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
  iVar1 = *(int *)(puVar6 + 8);
  pFVar3 = (FString *)param_2->DataPtr[2].Ptr;
  local_18.DataPtr = *(FString **)puVar6;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,&local_18,pFVar7,pFVar3);
  return;
}

// StaticExecute @ 14a1e6e60

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
FRigVMFunction_StringJoin::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<FString_const_,int> *param_2,FString *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  ::FString::Reset(param_4,0);
  if (param_2->ArrayNum != 0) {
    if ((param_3->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    pFVar2 = RigVMStringUtils::JoinStringsConst
                       (&local_18,param_2,pwVar3,(wchar_t *)0x0,(wchar_t *)0x0);
    if (param_4 != pFVar2) {
      pFVar1 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_4->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->Data).ArrayNum = (pFVar2->Data).ArrayNum;
      (param_4->Data).ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

