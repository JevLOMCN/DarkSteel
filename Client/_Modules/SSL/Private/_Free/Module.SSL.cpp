// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 19

// VerifySslCertificates'' @ 140f4c2f0

void __cdecl `dynamic_initializer_for_'FSslCertificateDelegates::VerifySslCertificates__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates,4000);
  FSslCertificateDelegates::VerifySslCertificates._40_8_ = 0;
  FSslCertificateDelegates::VerifySslCertificates._48_4_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FSslCertificateDelegates::VerifySslCertificates__);
  return;
}

// `dynamic_initializer_for_'LogSsl'' @ 140f4c330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSsl__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSsl,L"LogSsl",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogSsl__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSSL'' @ 140f4c370

void __cdecl _dynamic_initializer_for__ModuleRegistrantSSL__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SSL";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SSL",3);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSslModule>::InitializeModule);
  return;
}

// Count<FString,wchar_t> @ 143145aa0

ulong64 __cdecl Algo::Count<FString,wchar_t>(FString *param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  uVar4 = 0;
  pFVar5 = pFVar3 + (longlong)iVar1 * 2 + -2;
  if (iVar1 == 0) {
    pFVar5 = pFVar3 + (longlong)iVar1 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar1) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar5) break;
    uVar2 = uVar4 + 1;
    if (*(wchar_t *)pFVar3 != *param_2) {
      uVar2 = uVar4;
    }
    pFVar3 = pFVar3 + 2;
    uVar4 = uVar2;
  }
  return uVar4;
}

// DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int> @ 143145b30

void __cdecl
DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)&param_1->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x10);
    }
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSslCertificateDelegates::FCertInfo,int> @ 143145b80

void __cdecl DestructItems<FSslCertificateDelegates::FCertInfo,int>(FCertInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Issuer;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(ForElementType<unsigned_char> *)(pFVar2 + -1) != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)*(ForElementType<unsigned_char> *)(pFVar2 + -1));
      }
      if (*(ForElementType<unsigned_char> *)((longlong)(pFVar2 + -4) + 8) !=
          (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)*(ForElementType<unsigned_char> *)((longlong)(pFVar2 + -4) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 7) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAll<`FSslCertificateManager::SetPinnedPublicKeys'::__l8::<lambda_1>_> @ 143145f50

int __thiscall
TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAll<_FSslCertificateManager::SetPinnedPublicKeys_::__l8::<lambda_1>_>
          (TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  iVar1 = this->ArrayNum;
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar10 = 0;
  pFVar3 = (this->AllocatorInstance).Data;
  iVar4 = (param_1->Domain->Data).ArrayNum;
  iVar8 = *(int *)(pFVar3 + 8);
  if (iVar8 == iVar4) {
    if (iVar8 < 2) {
      bVar11 = false;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar3,
                         (wchar_t *)(param_1->Domain->Data).AllocatorInstance.Data);
      bVar11 = iVar4 != 0;
    }
  }
  else {
    bVar11 = iVar8 + iVar4 != 1;
  }
  lVar9 = 0;
  iVar4 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar8 = iVar4 + 1;
    if (lVar9 < lVar6) {
      pFVar7 = pFVar3 + lVar9 * 0x20;
      do {
        iVar5 = *(int *)(pFVar7 + 8);
        iVar2 = (param_1->Domain->Data).ArrayNum;
        if (iVar5 == iVar2) {
          if (iVar5 < 2) {
            bVar12 = false;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar7,
                               (wchar_t *)(param_1->Domain->Data).AllocatorInstance.Data);
            bVar12 = iVar5 != 0;
          }
        }
        else {
          bVar12 = iVar2 + iVar5 != 1;
        }
        if (bVar11 != bVar12) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
        pFVar7 = pFVar7 + 0x20;
      } while (lVar9 < lVar6);
    }
    iVar5 = iVar8 - iVar4;
    if (bVar11 == false) {
      DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                  *)(pFVar3 + (longlong)iVar4 * 0x20),iVar5);
    }
    else {
      if (iVar10 != iVar4) {
        memmove(pFVar3 + (longlong)iVar10 * 0x20,pFVar3 + (longlong)iVar4 * 0x20,
                (longlong)iVar5 << 5);
      }
      iVar10 = iVar10 + iVar5;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar4 = iVar8;
    if (lVar6 <= lVar9) {
      this->ArrayNum = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 1431462b0

void * __thiscall
FSslCertificateManager::_scalar_deleting_destructor_(FSslCertificateManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
              *)(this->PinnedPublicKeys).AllocatorInstance.Data,(this->PinnedPublicKeys).ArrayNum);
  pFVar1 = (this->PinnedPublicKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootCertificateArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISslCertificateManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143146320

void * __thiscall FSslManager::_scalar_deleting_destructor_(FSslManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISslManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143146360

void * __thiscall FSslModule::_scalar_deleting_destructor_(FSslModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431463a0

void * __thiscall
FWindowsPlatformSslCertificateManager::_scalar_deleting_destructor_
          (FWindowsPlatformSslCertificateManager *this,uint param_1)

{
  DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int>
            (*(TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
               **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this = &___7ISslCertificateManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143146410

void * __thiscall
ISslCertificateManager::_scalar_deleting_destructor_(ISslCertificateManager *this,uint param_1)

{
  *this = (ISslCertificateManager)&___7ISslCertificateManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143146450

void * __thiscall ISslManager::_scalar_deleting_destructor_(ISslManager *this,uint param_1)

{
  *this = (ISslManager)&___7ISslManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DomainLessThan @ 1431474f0

bool __cdecl DomainLessThan(FString *param_1,FString *param_2)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar5 = (param_1->Data).ArrayNum;
  uVar12 = 0;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  sVar1 = *(short *)(param_1->Data).AllocatorInstance.Data;
  iVar7 = (param_2->Data).ArrayNum;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar10 = (param_2->Data).AllocatorInstance.Data;
  bVar3 = *(short *)pFVar10 == 0x2e;
  if ((sVar1 == 0x2e) == bVar3) {
    if (sVar1 == 0x2e) {
      pFVar10 = (param_1->Data).AllocatorInstance.Data;
      iVar5 = (param_1->Data).ArrayNum;
      uVar11 = uVar12;
      pFVar13 = pFVar10 + (longlong)iVar5 * 2 + -2;
      if (iVar5 == 0) {
        pFVar13 = pFVar10 + (longlong)iVar5 * 2;
      }
      while( true ) {
        if ((param_1->Data).ArrayNum != iVar5) {
          `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar10 == pFVar13) break;
        uVar6 = uVar11 + 1;
        if (*(short *)pFVar10 != 0x2e) {
          uVar6 = uVar11;
        }
        pFVar10 = pFVar10 + 2;
        uVar11 = uVar6;
      }
      iVar5 = (param_2->Data).ArrayNum;
      pFVar10 = (param_2->Data).AllocatorInstance.Data;
      pFVar13 = pFVar10 + (longlong)iVar5 * 2 + -2;
      if (iVar5 == 0) {
        pFVar13 = pFVar10 + (longlong)iVar5 * 2;
      }
      while( true ) {
        if ((param_2->Data).ArrayNum != iVar5) {
          `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar10 == pFVar13) break;
        uVar6 = uVar12 + 1;
        if (*(short *)pFVar10 != 0x2e) {
          uVar6 = uVar12;
        }
        pFVar10 = pFVar10 + 2;
        uVar12 = uVar6;
      }
      if (uVar11 != uVar12) {
        return uVar12 < uVar11;
      }
      if ((param_2->Data).ArrayNum == 0) {
        bVar3 = (param_1->Data).ArrayNum == 0;
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        bVar3 = (param_1->Data).ArrayNum == 0;
      }
    }
    else {
      pwVar9 = L"";
      if ((param_2->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)pFVar10;
      }
      bVar3 = (param_1->Data).ArrayNum == 0;
    }
    pwVar8 = L"";
    if (!bVar3) {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar9);
    bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
  }
  return bVar3;
}

// GetCertificateName @ 143147850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
`anonymous_namespace'::GetCertificateName(FString *__return_storage_ptr__,x509_st *param_1)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined1 auStack_958 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  char local_818 [2048];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_958;
  uVar1 = X509_get_subject_name(param_1);
  X509_NAME_oneline(uVar1,local_818,0x800);
  local_938._padding_ = 0;
  sVar2 = strlen(local_818);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_938,local_818,(int)sVar2,Yes);
  ::FString::FString(__return_storage_ptr__,local_938.Ptr);
  if ((void *)local_938._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_938._padding_);
  }
  return __return_storage_ptr__;
}

// GetSslErrorString @ 143147910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetSslErrorString(FString *__return_storage_ptr__)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_258 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_238;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = ERR_get_error();
  if (iVar1 != 0) {
    ERR_error_string_n(iVar1,local_118,0xff);
    local_19 = 0;
    local_238._padding_ = 0;
    sVar2 = strlen(local_118);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_238,local_118,(int)sVar2,Yes);
    FString::operator=(__return_storage_ptr__,local_238.Ptr);
    if ((void *)local_238._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_238._padding_);
    }
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_SSL @ 143148f70

void __cdecl IMPLEMENT_MODULE_SSL(void)

{
  return;
}

// VerifySslCertificates'' @ 1503604a0

void __cdecl `dynamic_atexit_destructor_for_'FSslCertificateDelegates::VerifySslCertificates__(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  if ((FSslCertificateDelegates::VerifySslCertificates._48_4_ != 0) &&
     (FSslCertificateDelegates::VerifySslCertificates._40_8_ != 0)) {
    (*(code *)**(undefined8 **)FSslCertificateDelegates::VerifySslCertificates._40_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FSslCertificateDelegates::VerifySslCertificates.field_0x28,0,0,
               0x10);
    FSslCertificateDelegates::VerifySslCertificates._48_4_ = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  if (FSslCertificateDelegates::VerifySslCertificates._40_8_ != 0) {
    FMemory::Free((void *)FSslCertificateDelegates::VerifySslCertificates._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150360517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  return;
}

// `dynamic_atexit_destructor_for_'LogSsl'' @ 150360530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSsl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSsl);
  return;
}

