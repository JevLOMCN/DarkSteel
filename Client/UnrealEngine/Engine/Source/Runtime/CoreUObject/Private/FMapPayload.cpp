// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetPackage @ 141f35080

TWeakObjectPtr<UPackage,FWeakObjectPtr> __thiscall
FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(FMapPayload *this)

{
  FWeakObjectPtr *pFVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  TWeakObjectPtr<UPackage,FWeakObjectPtr> TVar8;
  UObject *pUVar9;
  FString *this_00;
  undefined4 extraout_var;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr *pFVar10;
  int iVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FName local_78;
  undefined8 local_70;
  UObject *local_68;
  FName local_60;
  undefined8 local_58;
  FString local_50;
  
  iVar3 = (this->LoadedPackages).ArrayNum;
  if (iVar3 == 0) {
    *(undefined8 *)in_RDX = 0;
    local_70 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_70);
    return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)in_RDX;
  }
  if (!CVar_TransactionallySafeAsyncLoadingLegacyTrashedPackages) {
    pFVar10 = (FWeakObjectPtr *)(this->LoadedPackages).AllocatorInstance.Data;
    pFVar1 = pFVar10 + iVar3;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((this->LoadedPackages).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TWeakObjectPtr<UPackage,FWeakObjectPtr>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) {
        *(undefined8 *)in_RDX = 0;
        local_58 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_58);
        return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)in_RDX;
      }
      local_res20 = *pFVar10;
      bVar6 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar6) {
        if ((*(int *)(*plVar2 + 0x9d4c) <
             `public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
             ::__l15::_thread_safe_static_guard_1__) &&
           (_Init_thread_header(&`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
                                 ::__l15::_thread_safe_static_guard_1__),
           `public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
           ::__l15::_thread_safe_static_guard_1__ == -1)) {
          FVar7 = FNameEntryId::FromValidEName((EName)local_res18);
          local_78.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
          local_78.Number = 0;
          ::FName::ToString(&local_78,
                            &`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
                             ::__l15::TrashedPackage);
          atexit(`FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage'::__l15::
                 _dynamic_atexit_destructor_for__TrashedPackage__);
          _Init_thread_footer(&`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
                               ::__l15::_thread_safe_static_guard_1__);
        }
        pUVar9 = FWeakObjectPtr::Get(&local_res20);
        local_60.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
        local_60.Number = *(uint *)&pUVar9->field_0x1c;
        this_00 = ::FName::ToString(&local_60,&local_50);
        iVar11 = `public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
                 ::__l15::TrashedPackage.Data.ArrayNum + -1;
        FVar5 = `public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
                ::__l15::TrashedPackage.Data.AllocatorInstance;
        if (`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
            ::__l15::TrashedPackage.Data.ArrayNum == 0) {
          iVar11 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        bVar6 = ::FString::StartsWith(this_00,(wchar_t *)FVar5.Data,iVar11,IgnoreCase);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (!bVar6) {
          *(FWeakObjectPtr *)in_RDX = local_res20;
          return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)in_RDX;
        }
      }
      pFVar10 = pFVar10 + 1;
    } while( true );
  }
  if ((1 < iVar3) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4163318125946733091>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\TransactionallySafeAsyncLoading.cpp"
                         ,0x223,"LoadedPackages.Num() <= 1"), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar4)();
    return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)TVar8.WeakPtr;
  }
  if (((this->LoadedPackages).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar4)();
    return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)TVar8.WeakPtr;
  }
  local_68 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->LoadedPackages).AllocatorInstance.Data);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  *(undefined8 *)in_RDX = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_68);
  return (TWeakObjectPtr<UPackage,FWeakObjectPtr>)in_RDX;
}

