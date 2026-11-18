// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 14

// CacheResponse @ 14458a160

FIoStatus * __cdecl
UE::FHttpIoDispatcher::CacheResponse(FIoStatus *__return_storage_ptr__,FIoHttpResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIoStatus *pFVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3293635725802602826>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x14a,"GHttpIoDispatcher.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoStatus *)(*pcVar1)();
      return pFVar3;
    }
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FIoStatus *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x60))
            (GHttpIoDispatcher.Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// EvictFromCache @ 14458bd90

FIoStatus * __cdecl
UE::FHttpIoDispatcher::EvictFromCache(FIoStatus *__return_storage_ptr__,FIoHttpResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIoStatus *pFVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3293635725802602832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x150,"GHttpIoDispatcher.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoStatus *)(*pcVar1)();
      return pFVar3;
    }
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FIoStatus *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x68))
            (GHttpIoDispatcher.Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Get @ 14458c120

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __cdecl
UE::FHttpIoDispatcher::Get
          (FName *param_1,FIoRelativeUrl *param_2,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_3)

{
  FIoHttpRange local_18;
  undefined8 local_10;
  
  local_18.Min = 0;
  local_18.Max = 0;
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  Get(param_1,param_2,(FIoHttpHeaders *)param_3,(FIoHttpOptions *)&local_18,
      (TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *)&FIoHttpOptions::Default);
  DestructItems<FAnsiString,int>((FAnsiString *)local_18,(int)local_10);
  if (local_18 != (FIoHttpRange)0x0) {
    FMemory::Free((void *)local_18);
  }
  return (FIoHttpRequest)(ulong64)param_1;
}

// Get @ 14458c180

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __cdecl
UE::FHttpIoDispatcher::Get
          (FName *param_1,FIoRelativeUrl *param_2,FIoHttpHeaders *param_3,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_4)

{
  Get(param_1,param_2,param_3,(FIoHttpOptions *)param_4,
      (TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *)&FIoHttpOptions::Default);
  return (FIoHttpRequest)(ulong64)param_1;
}

// Get @ 14458c1c0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __cdecl
UE::FHttpIoDispatcher::Get
          (FName *param_1,FIoRelativeUrl *param_2,FIoHttpHeaders *param_3,FIoHttpOptions *param_4,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpRequest FVar3;
  FName local_res8;
  undefined8 in_stack_00000030;
  undefined8 local_18 [2];
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3293635725802602790>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x126,"GHttpIoDispatcher.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FIoHttpRequest)FVar3.Handle;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_18[0] = 0;
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FIoHttpRequest)FVar3.Handle;
    }
  }
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x30))
            (GHttpIoDispatcher.Object,&local_res8,local_18,param_2,param_3,param_5,param_4,
             in_stack_00000030,0);
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FIoHttpRequest)FVar3.Handle;
    }
  }
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x38))(GHttpIoDispatcher.Object,local_res8);
  *param_1 = local_res8;
  return (FIoHttpRequest)(ulong64)param_1;
}

// Initialize @ 14458eb90

/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __cdecl
UE::FHttpIoDispatcher::Initialize
          (FIoStatus *__return_storage_ptr__,TSharedPtr<UE::IHttpIoDispatcher,1> *param_1)

{
  wchar_t *pwVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedString<wchar_t> TVar3;
  FSharedReferencer<1> FVar4;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    if (4 < (byte)LogHttpIoDispatcher._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    GHttpIoDispatcher.Object = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar4.ReferenceController = GHttpIoDispatcher.SharedReferenceCount.ReferenceController;
    GHttpIoDispatcher.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    TVar3 = FIoStatus::Ok.ErrorMessage;
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar3.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar3.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  else {
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidCode);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// IsHostGroupOk @ 14458f120

bool __cdecl UE::FHttpIoDispatcher::IsHostGroupOk(FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    return false;
  }
  if ((GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014458f177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x20))
                    (GHttpIoDispatcher.Object,param_1);
  return (bool)uVar3;
}

// IsHostGroupRegistered @ 14458f190

bool __cdecl UE::FHttpIoDispatcher::IsHostGroupRegistered(FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    return false;
  }
  if ((GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014458f1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x18))
                    (GHttpIoDispatcher.Object,param_1);
  return (bool)uVar3;
}

// IsInitialized @ 14458f200

bool __cdecl UE::FHttpIoDispatcher::IsInitialized(void)

{
  return GHttpIoDispatcher.Object != (IHttpIoDispatcher *)0x0;
}

// NewBatch @ 144592210

FIoHttpBatch * __cdecl UE::FHttpIoDispatcher::NewBatch(FIoHttpBatch *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpBatch *pFVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3293635725802602779>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x11b,"GHttpIoDispatcher.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoHttpBatch *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->First = 0;
  __return_storage_ptr__->Last = 0;
  return __return_storage_ptr__;
}

// OnHostGroupRegistered @ 144592530

TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> * __cdecl
UE::FHttpIoDispatcher::OnHostGroupRegistered(void)

{
  code *pcVar1;
  bool bVar2;
  TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3293635725802602838>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                       ,0x156,"GHttpIoDispatcher.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *)
               (*pcVar1)();
      return pTVar3;
    }
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001445925a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x28))();
  return pTVar3;
}

// RegisterHostGroup @ 144592f40

FIoStatus * __cdecl
UE::FHttpIoDispatcher::RegisterHostGroup
          (FIoStatus *__return_storage_ptr__,FName *param_1,
          TArrayView<FAnsiString_const_,int> *param_2,TStringView<char> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FIoStatus *pFVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidCode);
  }
  else {
    if ((GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoStatus *)(*pcVar1)();
      return pFVar3;
    }
    local_28 = *(undefined4 *)&param_3->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iStack_20 = param_3->Size;
    uStack_1c = *(undefined4 *)&param_3->field_0xc;
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x10))
              (local_28,__return_storage_ptr__,param_1,&local_18,&local_28);
  }
  return __return_storage_ptr__;
}

// RegisterHostGroup @ 144593000

FIoStatus * __cdecl
UE::FHttpIoDispatcher::RegisterHostGroup
          (FIoStatus *__return_storage_ptr__,FName *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FAnsiString *pFVar5;
  FIoStatus *pFVar6;
  FAnsiString local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FAnsiString local_58;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *local_28;
  undefined8 uStack_20;
  
  local_28 = param_2->DataPtr;
  uStack_20 = *(undefined8 *)&param_2->Size;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar5 = FAnsiString::ConstructFromPtrSize
                     (&local_58,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_78 != pFVar5) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_68 = &local_78;
  pcVar2 = param_3->DataPtr;
  uVar3 = *(undefined8 *)&param_3->Size;
  uStack_5c = uStack_20._4_4_;
  uStack_60 = 1;
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidCode);
  }
  else {
    if ((GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FIoStatus *)(*pcVar1)();
      return pFVar6;
    }
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48 = pcVar2;
    uStack_40 = uVar3;
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x10))
              ((undefined4)local_68,__return_storage_ptr__,param_1,&local_38,&local_48);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Shutdown @ 144593620

/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __cdecl UE::FHttpIoDispatcher::Shutdown(FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  code *pcVar2;
  TSharedString<wchar_t> TVar3;
  bool bVar4;
  FIoStatus *pFVar5;
  FSharedReferencer<1> local_10;
  
  TVar3.Chars = FIoStatus::Invalid.ErrorMessage.Chars;
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Invalid.ErrorMessage.Chars;
    if (TVar3.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar1 = TVar3.Chars + -4;
      *(int *)pwVar1 = *(int *)pwVar1 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Invalid.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Invalid.SystemErrorCode;
    return __return_storage_ptr__;
  }
  if (4 < (byte)LogHttpIoDispatcher._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
  }
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FIoStatus *)(*pcVar2)();
      return pFVar5;
    }
  }
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 8))();
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  GHttpIoDispatcher.Object = (IHttpIoDispatcher *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&GHttpIoDispatcher.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  TVar3 = FIoStatus::Ok.ErrorMessage;
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar3.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar3.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  return __return_storage_ptr__;
}

