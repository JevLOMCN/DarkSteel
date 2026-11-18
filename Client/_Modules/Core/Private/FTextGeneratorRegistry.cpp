// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FindRegisteredTextGenerator @ 141758380

TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
* __thiscall
FTextGeneratorRegistry::FindRegisteredTextGenerator
          (FTextGeneratorRegistry *this,
          TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
          *__return_storage_ptr__,FName param_1)

{
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *pTVar1;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  int local_40;
  FDestructionSentinel local_38;
  
  if (this != (FTextGeneratorRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    pTVar1 = TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
             ::Find((TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
                     *)&this->TextGeneratorFactoryMap,param_1);
    if (pTVar1 == (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                   *)0x0) {
      local_58 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.Data = (FScriptContainerElement *)0x0;
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
      ::
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                (__return_storage_ptr__,
                 (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                  *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_68;
    }
    else {
      pTVar1 = TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
               ::
               TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                         ((TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                           *)local_50,pTVar1);
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
      ::
      TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                (__return_storage_ptr__,pTVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
      if ((local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_48.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_50;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 14175b6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTextGeneratorRegistry * __cdecl FTextGeneratorRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance,4000);
      ::Instance.TextGeneratorFactoryMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Instance.TextGeneratorFactoryMap._48_8_ = _UNK_150631d98;
      ::Instance.TextGeneratorFactoryMap._0_8_ = 0;
      ::Instance.TextGeneratorFactoryMap._8_8_ = 0;
      ::Instance.TextGeneratorFactoryMap._32_8_ = 0;
      ::Instance.TextGeneratorFactoryMap._64_8_ = 0;
      ::Instance.TextGeneratorFactoryMap._72_4_ = 0;
      atexit(`FTextGeneratorRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// RegisterTextGenerator @ 141773610

void __thiscall
FTextGeneratorRegistry::RegisterTextGenerator
          (FTextGeneratorRegistry *this,FName param_1,
          TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
          *param_2)

{
  code *pcVar1;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *pTVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  TPairInitializer<FName_const_&,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_&&>
  local_res8;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  **local_48;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *local_40;
  FReadAccessScope local_38;
  
  local_res8.Value =
       (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
        *)param_1;
  if (this == (FTextGeneratorRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar3 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FactoryFunction.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextGeneratorRegistry.cpp"
                       ,0x19,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  pTVar2 = local_res8.Value;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)local_res8.Value);
  if (*(int *)&(this->TextGeneratorFactoryMap).field_0x8 !=
      *(int *)&(this->TextGeneratorFactoryMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TextGeneratorFactoryMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TextGeneratorFactoryMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->TextGeneratorFactoryMap).field_0x48 - 1U &
                              (uint)((ulonglong)pTVar2 >> 0x20) + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->TextGeneratorFactoryMap + (longlong)iVar6 * 0x28) ==
            (FName)pTVar2) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6848333578334371814>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextGeneratorRegistry.cpp"
                             ,0x1a,"!TextGeneratorFactoryMap.Contains(TypeID)");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->TextGeneratorFactoryMap + 0x20 + (longlong)iVar6 * 0x28
                        );
      } while (iVar6 != -1);
    }
  }
  local_48 = &local_res8.Value;
  local_40 = param_2;
  TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_&&>_>
            ((TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->TextGeneratorFactoryMap,&local_res8,(bool *)&local_48);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// UnregisterTextGenerator @ 141782080

void __thiscall
FTextGeneratorRegistry::UnregisterTextGenerator(FTextGeneratorRegistry *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  if (this != (FTextGeneratorRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    local_res8 = param_1;
    if (*(int *)&(this->TextGeneratorFactoryMap).field_0x8 !=
        *(int *)&(this->TextGeneratorFactoryMap).field_0x34) {
      uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                           *)&this->TextGeneratorFactoryMap,local_res10.Number + uVar1,&local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001417820df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

