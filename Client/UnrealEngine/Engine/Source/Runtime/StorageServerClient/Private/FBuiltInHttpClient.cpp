// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// FBuiltInHttpClient @ 148cb2e70

FBuiltInHttpClient * __thiscall
FBuiltInHttpClient::FBuiltInHttpClient
          (FBuiltInHttpClient *this,
          TUniquePtr<IBuiltInHttpClientSocketPool,TDefaultDelete<IBuiltInHttpClientSocketPool>_>
          param_1,FString *param_2)

{
  IBuiltInHttpClientSocketPool IVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClient__6B_;
  (this->SocketPool).Ptr = (IBuiltInHttpClientSocketPool *)*param_1.Ptr;
  *param_1.Ptr = (IBuiltInHttpClientSocketPool)0x0;
  ::FString::FString(&this->Hostname,param_2);
  IVar1 = *param_1.Ptr;
  if (IVar1 != (IBuiltInHttpClientSocketPool)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// ~FBuiltInHttpClient @ 148cb5cb0

void __thiscall FBuiltInHttpClient::~FBuiltInHttpClient(FBuiltInHttpClient *this)

{
  FScriptContainerElement *pFVar1;
  IBuiltInHttpClientSocketPool *pIVar2;
  
  pFVar1 = (this->Hostname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SocketPool).Ptr;
  if (pIVar2 != (IBuiltInHttpClientSocketPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cb5cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar2)(pIVar2,1);
    return;
  }
  return;
}

// RequestAsync @ 148cd9d80

void __thiscall
FBuiltInHttpClient::RequestAsync
          (FBuiltInHttpClient *this,
          TFunction<void___cdecl(TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType>)> *param_1
          ,TStringView<char> *param_2,EStorageServerContentType param_3,TStringView<char> *param_4,
          TOptional<FIoBuffer> *param_5,EStorageServerContentType param_6,
          TOptional<FIoBuffer> *param_7,float param_8,bool param_9)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  BufCore *pBVar4;
  TIoStatusOr<FIoBuffer> *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  TRefCountPtr<FIoBuffer::BufCore> local_90;
  char local_88;
  TRefCountPtr<FIoBuffer::BufCore> local_80;
  char local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  pcVar3 = *(code **)(this->_padding_ + 8);
  local_88 = param_7->bIsSet;
  if ((bool)local_88 != false) {
    local_90.Reference = (param_7->TypedValue).CorePtr.Reference;
    if (local_90.Reference != (BufCore *)0x0) {
      LOCK();
      (local_90.Reference)->NumRefs = (local_90.Reference)->NumRefs + 1;
      UNLOCK();
    }
  }
  local_78 = param_5->bIsSet;
  if ((bool)local_78 != false) {
    local_80.Reference = (param_5->TypedValue).CorePtr.Reference;
    if (local_80.Reference != (BufCore *)0x0) {
      LOCK();
      (local_80.Reference)->NumRefs = (local_80.Reference)->NumRefs + 1;
      UNLOCK();
    }
  }
  local_68 = *(undefined4 *)&param_4->DataPtr;
  uStack_64 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
  iStack_60 = param_4->Size;
  uStack_5c = *(undefined4 *)&param_4->field_0xc;
  local_58 = *(undefined4 *)&param_2->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_50 = param_2->Size;
  uStack_4c = *(undefined4 *)&param_2->field_0xc;
  this_00 = (TIoStatusOr<FIoBuffer> *)
            (*pcVar3)(local_68,local_48,&local_58,param_3,&local_68,&local_80,param_6,&local_90,
                      param_8,param_9);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar3 = *(code **)param_1;
  plVar6 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar6 = *(longlong **)&param_1->field_0x28;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5,this_00);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(this_00);
  if ((param_5->bIsSet != false) &&
     (pBVar4 = (param_5->TypedValue).CorePtr.Reference, pBVar4 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar4);
    LOCK();
    piVar1 = &pBVar4->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar4);
      ::operator_delete(pBVar4,0x20);
    }
  }
  if ((param_7->bIsSet != false) &&
     (pBVar4 = (param_7->TypedValue).CorePtr.Reference, pBVar4 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar4);
    LOCK();
    piVar1 = &pBVar4->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar4);
      ::operator_delete(pBVar4,0x20);
    }
  }
  return;
}

// RequestSync @ 148cd9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cdaa3b) */
/* WARNING: Removing unreachable block (ram,0x000148cdaa4f) */
/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> * __thiscall
FBuiltInHttpClient::RequestSync
          (FBuiltInHttpClient *this,
          TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *__return_storage_ptr__,
          TStringView<char> *param_1,EStorageServerContentType param_2,TStringView<char> *param_3,
          TOptional<FIoBuffer> *param_4,EStorageServerContentType param_5,
          TOptional<FIoBuffer> *param_6,float param_7,bool param_8)

{
  int *piVar1;
  uchar *puVar2;
  uchar uVar3;
  IBuiltInHttpClientSocketPool *pIVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  TOptional<FIoBuffer> *pTVar7;
  BufCore *this_00;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FIoBuffer *pFVar13;
  void *pvVar14;
  TStringBuilderBase<char> *pTVar15;
  char *pcVar16;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar17;
  size_t sVar18;
  TStringView<char> *pTVar19;
  longlong *plVar20;
  TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *pTVar21;
  FIoStatus *pFVar22;
  ulong64 uVar23;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar24;
  FString *pFVar25;
  int iVar26;
  wchar_t *pwVar27;
  ulong64 uVar28;
  FBuiltInHttpClient *pFVar29;
  ulong64 uVar30;
  BufCore *pBVar31;
  int iVar32;
  EIoErrorCode EVar33;
  ulonglong uVar34;
  char *pcVar35;
  undefined4 uVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 auStack_c28 [32];
  int local_c08;
  int local_c00;
  undefined1 local_bf8;
  undefined4 local_bf0;
  ulonglong local_be8;
  TOptional<FIoBuffer> *local_be0;
  ulonglong local_bd8;
  FBuiltInHttpClient *local_bd0;
  TOptional<FIoBuffer> *local_bc8;
  TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *local_bc0;
  longlong local_bb8;
  longlong local_bb0;
  undefined8 local_ba8;
  FIoBuffer local_ba0;
  FIoBuffer local_b98;
  FIoBuffer local_b90;
  undefined *local_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  undefined *local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  uchar *local_b68;
  int iStack_b60;
  undefined4 uStack_b5c;
  TStringView<wchar_t> local_b58;
  TStringView<char> local_b48;
  TStringView<char> local_b38;
  TStringView<char8_t> local_b28;
  FString local_b18;
  FString local_b08;
  char *local_af8;
  undefined8 uStack_af0;
  TStringView<char> local_ae8;
  TStringView<char> local_ad8;
  FIoStatus local_ac8;
  FIoStatus local_ab8;
  FIoStatus local_aa8;
  BufCore *local_a98;
  FIoStatus local_a90;
  BufCore *local_a80;
  FIoStatus local_a78;
  BufCore *local_a68;
  TStringBuilderBase<char> local_a58;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_a38 [6];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_638;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_598;
  uchar local_478 [9];
  char local_46f [7];
  char local_468 [1008];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_c28;
  local_bc8 = param_6;
  local_be0 = param_4;
  local_bf0 = 0;
  local_bd0 = this;
  local_bc0 = __return_storage_ptr__;
  if ((param_4->bIsSet == false) ||
     (pFVar13 = TOptional<FIoBuffer>::operator->(param_4), pBVar31 = (pFVar13->CorePtr).Reference,
     pBVar31->DataSizeHigh == '\0' && pBVar31->DataSizeLow == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_a58.Base = (char *)local_a38;
  local_a58.bIsDynamic = false;
  local_a58.bIsExternal = false;
  local_a58.End = (char *)&local_638;
  local_a58.CurPos = (char *)local_a38;
  pcVar16 = param_3->DataPtr;
  uStack_af0 = *(undefined8 *)&param_3->Size;
  iVar12 = (int)*(undefined8 *)&param_3->Size;
  uVar28 = (ulong64)iVar12;
  local_af8 = pcVar16;
  if (&local_638 <
      (TStringConversion<TStringConvert<wchar_t,char>,128> *)
      ((longlong)&local_a38[0]._padding_ + uVar28)) {
    TStringBuilderBase<char>::Extend(&local_a58,uVar28);
  }
  if (iVar12 != 0) {
    pvVar14 = FGenericPlatformString::Memcpy(local_a58.CurPos,pcVar16,uVar28);
    local_a58.CurPos = (char *)((longlong)pvVar14 + uVar28);
  }
  pTVar15 = TStringBuilderBase<char>::Append<char,0>(&local_a58," ",1);
  pTVar15 = operator<<<char,TStringView<char>_&>(pTVar15,param_1);
  pTVar15 = TStringBuilderBase<char>::Append<char,0>(pTVar15," HTTP/1.1\r\n",0xb);
  local_be8 = 6;
  pcVar16 = pTVar15->CurPos;
  if (pTVar15->End < pcVar16 + 6) {
    TStringBuilderBase<char>::Extend(pTVar15,6);
    pcVar16 = pTVar15->CurPos;
  }
  pvVar14 = FGenericPlatformString::Memcpy(pcVar16,"Host: ",6);
  pTVar15->CurPos = (char *)((longlong)pvVar14 + 6);
  if ((this->Hostname).Data.ArrayNum == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = (wchar_t *)(this->Hostname).Data.AllocatorInstance.Data;
  }
  pTVar17 = StringCast<char,128,wchar_t>(&local_638,pwVar27);
  iVar12 = 0;
  pcVar16 = pTVar17->Ptr;
  if (pcVar16 != (char *)0x0) {
    sVar18 = strlen(pcVar16);
    iVar12 = (int)sVar18;
  }
  pcVar35 = pTVar15->CurPos;
  uVar28 = (ulong64)iVar12;
  if (pTVar15->End < pcVar35 + uVar28) {
    TStringBuilderBase<char>::Extend(pTVar15,uVar28);
    pcVar35 = pTVar15->CurPos;
  }
  if (iVar12 != 0) {
    pvVar14 = FGenericPlatformString::Memcpy(pcVar35,pcVar16,uVar28);
    pcVar35 = (char *)((longlong)pvVar14 + uVar28);
    pTVar15->CurPos = pcVar35;
  }
  if (pTVar15->End < pcVar35 + 2) {
    TStringBuilderBase<char>::Extend(pTVar15,2);
    pcVar35 = pTVar15->CurPos;
  }
  pvVar14 = FGenericPlatformString::Memcpy(pcVar35,&::s___,2);
  pTVar15->CurPos = (char *)((longlong)pvVar14 + 2);
  if (pTVar15->End < (char *)((longlong)pvVar14 + 0x1a)) {
    TStringBuilderBase<char>::Extend(pTVar15,0x18);
  }
  pvVar14 = FGenericPlatformString::Memcpy(pTVar15->CurPos,"Connection: Keep-Alive\r\n",0x18);
  pTVar15->CurPos = (char *)((longlong)pvVar14 + 0x18);
  if ((void *)local_638._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_638._padding_);
  }
  if (param_2 != Unknown) {
    if (local_a58.End < (longlong *)((longlong)local_a58.CurPos + 8)) {
      TStringBuilderBase<char>::Extend(&local_a58,8);
    }
    pvVar14 = FGenericPlatformString::Memcpy(local_a58.CurPos,"Accept: ",8);
    local_a58.CurPos = (char *)((longlong)pvVar14 + 8);
    pTVar19 = GetMimeTypeString(&local_ae8,param_2);
    pTVar15 = operator<<<char,TStringView<char>_>(&local_a58,pTVar19);
    local_b88 = &::s___;
    uStack_b80 = 2;
    local_b48._12_4_ = uStack_b7c;
    local_b48.Size = 2;
    local_b48.DataPtr = "\r\n";
    TStringBuilderBase<char>::Append<TStringView<char>_>(pTVar15,&local_b48);
  }
  if (bVar10) {
    if (local_a58.End < (longlong *)((longlong)local_a58.CurPos + 0x10)) {
      TStringBuilderBase<char>::Extend(&local_a58,0x10);
    }
    pvVar14 = FGenericPlatformString::Memcpy(local_a58.CurPos,"Content-Length: ",0x10);
    local_a58.CurPos = (char *)((longlong)pvVar14 + 0x10);
    TOptional<FIoBuffer>::operator->(local_be0);
    pTVar15 = TStringBuilderBase<char>::AppendfImpl(&local_a58,"%llu");
    local_b78 = &::s___;
    uStack_b70 = 2;
    local_b38._12_4_ = uStack_b6c;
    local_b38.Size = 2;
    local_b38.DataPtr = "\r\n";
    TStringBuilderBase<char>::Append<TStringView<char>_>(pTVar15,&local_b38);
  }
  if (param_5 != Unknown) {
    if (local_a58.End <
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)
        ((longlong)((longlong)local_a58.CurPos + 8) + 6U)) {
      TStringBuilderBase<char>::Extend(&local_a58,0xe);
    }
    pvVar14 = FGenericPlatformString::Memcpy(local_a58.CurPos,"Content-Type: ",0xe);
    local_a58.CurPos = (char *)((longlong)pvVar14 + 0xe);
    pTVar19 = GetMimeTypeString(&local_ad8,param_5);
    pTVar15 = operator<<<char,TStringView<char>_>(&local_a58,pTVar19);
    TStringBuilderBase<char>::Append<char,0>(pTVar15,"\r\n",2);
  }
  if (local_a58.End <
      (TStringConversion<TStringConvert<wchar_t,char>,128> *)
      ((longlong)(longlong *)local_a58.CurPos + 2U)) {
    TStringBuilderBase<char>::Extend(&local_a58,2);
  }
  pvVar14 = FGenericPlatformString::Memcpy(local_a58.CurPos,&::s___,2);
  local_a58.CurPos = (char *)((longlong)pvVar14 + 2);
  iVar12 = 1;
  if (param_7 <= 0.0) {
    iVar12 = 10;
  }
  iVar32 = 0;
  pFVar29 = local_bd0;
  do {
    pIVar4 = (pFVar29->SocketPool).Ptr;
    plVar20 = (longlong *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,param_7);
    if (plVar20 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar20 + 8))
                        (plVar20,local_a58.Base,
                         (longlong)((int)local_a58.CurPos - (int)local_a58.Base));
      pTVar7 = local_be0;
      if (cVar8 != '\0') {
        if (bVar10) {
          pcVar5 = *(code **)(*plVar20 + 8);
          if ((local_be0->bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
            return pTVar21;
          }
          pBVar31 = (pTVar7->TypedValue).CorePtr.Reference;
          uVar3 = pBVar31->DataSizeHigh;
          uVar38 = pBVar31->DataSizeLow;
          if ((pTVar7->bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
            return pTVar21;
          }
          cVar8 = (*pcVar5)(plVar20,((pTVar7->TypedValue).CorePtr.Reference)->DataPtr,
                            (ulonglong)CONCAT14(uVar3,uVar38));
          if (cVar8 == '\0') goto LAB_148cda496;
        }
        lVar37 = 500;
        local_bb0 = 500;
        local_bf8 = 0;
        uVar36 = 1;
        uVar28 = 0;
        goto LAB_148cda6c0;
      }
LAB_148cda496:
      pIVar4 = (local_bd0->SocketPool).Ptr;
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,plVar20,0);
      pFVar29 = local_bd0;
    }
    iVar32 = iVar32 + 1;
  } while (iVar32 < iVar12);
  if (param_8) {
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
  }
  pFVar22 = FIoStatus::FIoStatus(&local_ab8,WriteError);
  FIoStatus::FIoStatus(&local_a78);
  if ((pFVar22->ErrorCode == Ok) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InStatus.IsOk()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                          ,0x102,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
    return pTVar21;
  }
  FIoStatus::operator=(&local_a78,pFVar22);
  FIoStatus::~FIoStatus(pFVar22);
  pTVar21 = local_bc0;
  FIoStatus::FIoStatus((FIoStatus *)local_bc0);
  FIoStatus::operator=((FIoStatus *)pTVar21,&local_a78);
  if (*(int *)&pTVar21->field_0x8 == 0) {
    *(BufCore **)&pTVar21->field_0x10 = local_a68;
    local_a68 = (BufCore *)0x0;
    FIoStatus::operator=(&local_a78,Unknown);
  }
  pTVar21->field_0x18 = 0;
  FIoStatus::operator=(&local_a78,Unknown);
  pBVar31 = local_a68;
  if ((local_a78.ErrorCode == Ok) && (local_a68 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(local_a68);
    LOCK();
    piVar1 = &pBVar31->NumRefs;
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar31);
      ::operator_delete(pBVar31,0x20);
    }
  }
  pFVar22 = &local_a78;
  goto LAB_148cda5e0;
LAB_148cda6c0:
  do {
    do {
      local_c08 = 2;
      (**(code **)(*plVar20 + 0x10))(plVar20,local_478,0x400,&local_bd8);
      local_b68 = local_478;
      iVar12 = (int)local_bd8;
      local_b28._12_4_ = uStack_b5c;
      local_b28.Size = iVar12;
      iStack_b60 = iVar12;
      local_b28.DataPtr = local_b68;
      iVar32 = UE::String::FindFirstChar(&local_b28,'\r',CaseSensitive);
    } while (iVar32 == -1);
    uVar34 = (ulonglong)(iVar32 + 2);
  } while (local_bd8 < uVar34);
  iVar11 = iVar32 + 1;
  if (((iVar11 < 0) || (iVar12 <= iVar11)) &&
     (local_c08 = iVar11, local_c00 = iVar12,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
    return pTVar21;
  }
  if ((local_478[(longlong)iVar32 + 1] != '\n') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResponseView[LineEndIndex + 1] == \'\\n\'",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\BuiltInHttpClient\\BuiltInHttpClient.cpp"
                          ,0x82,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
    return pTVar21;
  }
  local_c08 = 0;
  cVar8 = (**(code **)(*plVar20 + 0x10))(plVar20,local_478,uVar34,&local_bd8);
  if (cVar8 == '\0') {
    uVar36 = 0;
  }
  if ((local_bd8 != uVar34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesRead == LineEndIndex + 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\BuiltInHttpClient\\BuiltInHttpClient.cpp"
                          ,0x87,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
    return pTVar21;
  }
  pTVar7 = local_bc8;
  if (iVar32 < iVar12) {
    iVar12 = iVar32;
  }
  EVar33 = Ok;
  iVar32 = 0;
  if (0 < iVar12) {
    iVar32 = iVar12;
  }
  if (iVar32 != 0) {
    iVar12 = iVar32;
    if (9 < iVar32) {
      iVar12 = 9;
    }
    iVar26 = 0;
    iVar11 = iVar26;
    if (0 < iVar12) {
      iVar11 = iVar12;
    }
    if ((iVar11 == 9) &&
       (iVar12 = FGenericPlatformStricmp::Strnicmp("HTTP/1.1 ",(char *)local_478,9), iVar12 == 0)) {
      lVar37 = _strtoi64(local_46f,(char **)0x0,10);
      goto LAB_148cda6c0;
    }
    iVar12 = iVar32;
    if (0x10 < iVar32) {
      iVar12 = 0x10;
    }
    iVar11 = iVar26;
    if (0 < iVar12) {
      iVar11 = iVar12;
    }
    if ((iVar11 == 0x10) &&
       (iVar12 = FGenericPlatformStricmp::Strnicmp("Content-Length: ",(char *)local_478,0x10),
       iVar12 == 0)) {
      uVar28 = _strtoi64(local_468,(char **)0x0,10);
      if ((longlong)uVar28 < 0) {
        uVar28 = 0;
      }
      goto LAB_148cda6c0;
    }
    iVar12 = iVar32;
    if (0xe < iVar32) {
      iVar12 = 0xe;
    }
    iVar11 = iVar26;
    if (0 < iVar12) {
      iVar11 = iVar12;
    }
    if ((iVar11 != 0xe) ||
       (iVar12 = FGenericPlatformStricmp::Strnicmp("Content-Type: ",(char *)local_478,0xe),
       iVar12 != 0)) goto LAB_148cda6c0;
    iVar12 = iVar32;
    if (iVar32 + -0xe < iVar32) {
      iVar12 = iVar32 + -0xe;
    }
    if (0 < iVar12) {
      iVar26 = iVar12;
    }
    puVar2 = local_478 + ((longlong)iVar32 - (longlong)iVar26);
    if (iVar26 == 0x18) {
      iVar12 = FGenericPlatformStricmp::Strnicmp((char *)puVar2,"application/octet-stream",0x18);
      if (iVar12 == 0) {
        local_bf8 = 2;
        goto LAB_148cda6c0;
      }
    }
    else if (iVar26 == 0x15) {
      iVar12 = FGenericPlatformStricmp::Strnicmp((char *)puVar2,"application/x-ue-comp",0x15);
      if (iVar12 == 0) {
        local_bf8 = 3;
        goto LAB_148cda6c0;
      }
    }
    else if ((iVar26 == 0x13) &&
            (iVar12 = FGenericPlatformStricmp::Strnicmp((char *)puVar2,"application/x-ue-cb",0x13),
            iVar12 == 0)) {
      local_bf8 = 1;
      goto LAB_148cda6c0;
    }
    local_bf8 = 0;
    goto LAB_148cda6c0;
  }
  if ((299 < (int)lVar37) && (EVar33 = Unknown, (int)lVar37 == 0x194)) {
    EVar33 = NotFound;
  }
  local_bf0 = uVar36;
  local_bb0 = lVar37;
  if ((longlong)uVar28 < 1) {
    pFVar13 = FIoBuffer::FIoBuffer(&local_b90,0);
    local_be8 = 0;
    pBVar31 = (pFVar13->CorePtr).Reference;
    (pFVar13->CorePtr).Reference = (BufCore *)0x0;
    if (local_b90.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_b90.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_b90.CorePtr.Reference + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_b90.CorePtr.Reference);
        ::operator_delete((void *)local_b90.CorePtr.Reference,0x20);
      }
    }
    if (uVar28 != 0) goto LAB_148cdab49;
    cVar8 = (char)local_bf0;
  }
  else {
    if ((local_bc8->bIsSet == false) ||
       (pFVar13 = TOptional<FIoBuffer>::operator->(local_bc8),
       pBVar31 = (pFVar13->CorePtr).Reference,
       (longlong)(ulonglong)CONCAT14(pBVar31->DataSizeHigh,pBVar31->DataSizeLow) < (longlong)uVar28)
       ) {
      pFVar13 = FIoBuffer::FIoBuffer(&local_ba0,uVar28);
      uVar34 = 6;
      pBVar31 = (pFVar13->CorePtr).Reference;
    }
    else {
      pFVar13 = TOptional<FIoBuffer>::GetValue(pTVar7);
      pBVar31 = (pFVar13->CorePtr).Reference;
      if (pBVar31 != (BufCore *)0x0) {
        LOCK();
        pBVar31->NumRefs = pBVar31->NumRefs + 1;
        UNLOCK();
      }
      uVar34 = 5;
      pFVar13 = &local_b98;
      local_be8 = 5;
    }
    (pFVar13->CorePtr).Reference = (BufCore *)0x0;
    local_ba8 = 0;
    if ((uVar34 & 4) != 0) {
      uVar34 = (ulonglong)((uint)uVar34 & 0xfffffffb);
      local_be8 = uVar34;
    }
    if (((uVar34 & 2) != 0) &&
       (uVar34 = (ulonglong)((uint)uVar34 & 0xfffffffd), local_be8 = uVar34,
       local_ba0.CorePtr.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_ba0.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_ba0.CorePtr.Reference + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_ba0.CorePtr.Reference);
        ::operator_delete((void *)local_ba0.CorePtr.Reference,0x20);
      }
    }
    if (((uVar34 & 1) == 0) ||
       (local_be8 = (ulonglong)((uint)uVar34 & 0xfffffffe),
       local_b98.CorePtr.Reference == (BufCore *)0x0)) {
LAB_148cdab49:
      uVar23 = 0;
      uVar30 = 0;
      if (0 < (longlong)uVar28) goto LAB_148cdab60;
    }
    else {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_b98.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_b98.CorePtr.Reference + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 != 1) goto LAB_148cdab49;
      FIoBuffer::BufCore::~BufCore((BufCore *)local_b98.CorePtr.Reference);
      ::operator_delete((void *)local_b98.CorePtr.Reference,0x20);
      uVar30 = 0;
LAB_148cdab60:
      do {
        local_bb8 = 0;
        local_c08 = 0x100;
        cVar8 = (**(code **)(*plVar20 + 0x10))
                          (plVar20,pBVar31->DataPtr + uVar30,uVar28 - uVar30,&local_bb8);
        if (cVar8 == '\0') {
          cVar8 = '\0';
          FIoBuffer::BufCore::SetSize(pBVar31,uVar30);
          goto LAB_148cdabc1;
        }
        uVar30 = uVar30 + local_bb8;
        uVar23 = uVar30;
      } while ((longlong)uVar30 < (longlong)uVar28);
    }
    cVar8 = (char)local_bf0;
    FIoBuffer::BufCore::SetSize(pBVar31,uVar23);
  }
LAB_148cdabc1:
  uVar38 = pBVar31->DataSizeLow;
  uVar3 = pBVar31->DataSizeHigh;
  pIVar4 = (local_bd0->SocketPool).Ptr;
  (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,plVar20,cVar8 != '\0');
  if (299 < (int)local_bb0) {
    if (CONCAT14(uVar3,uVar38) == 0) {
      uVar38 = (uint)local_be8 | 0x40;
      pFVar25 = ::FString::FString(&local_b18,L"Unknown error");
    }
    else {
      uVar38 = pBVar31->DataSizeLow;
      pTVar24 = StringCast<wchar_t,128,char>(&local_598,(char *)pBVar31->DataPtr);
      pFVar25 = ::FString::ConstructFromPtrSize(&local_b08,pTVar24->Ptr,uVar38);
      uVar38 = (uint)local_be8 | 0x30;
    }
    pFVar6 = (pFVar25->Data).AllocatorInstance.Data;
    (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar25->Data).ArrayNum;
    (pFVar25->Data).ArrayNum = 0;
    (pFVar25->Data).ArrayMax = 0;
    if (((uVar38 & 0x40) != 0) &&
       (uVar38 = uVar38 & 0xffffffbf,
       local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b18.Data.AllocatorInstance.Data);
    }
    if (((uVar38 & 0x20) != 0) &&
       (uVar38 = uVar38 & 0xffffffdf,
       local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b08.Data.AllocatorInstance.Data);
    }
    if (((uVar38 & 0x10) != 0) && ((void *)local_598._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_598._padding_);
    }
    local_b58.Size = iVar12 + -1;
    if (iVar12 == 0) {
      local_b58.Size = 0;
    }
    local_b58.DataPtr = (wchar_t *)pFVar6;
    pFVar22 = FIoStatus::FIoStatus(&local_ac8,EVar33,&local_b58);
    FIoStatus::FIoStatus(&local_a90);
    if ((pFVar22->ErrorCode == Ok) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InStatus.IsOk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                            ,0x102,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)(*pcVar5)();
      return pTVar21;
    }
    FIoStatus::operator=(&local_a90,pFVar22);
    FIoStatus::~FIoStatus(pFVar22);
    pTVar21 = local_bc0;
    FIoStatus::FIoStatus((FIoStatus *)local_bc0);
    FIoStatus::operator=((FIoStatus *)pTVar21,&local_a90);
    if (*(int *)&pTVar21->field_0x8 == 0) {
      *(BufCore **)&pTVar21->field_0x10 = local_a80;
      local_a80 = (BufCore *)0x0;
      FIoStatus::operator=(&local_a90,Unknown);
    }
    pTVar21->field_0x18 = local_bf8;
    FIoStatus::operator=(&local_a90,Unknown);
    this_00 = local_a80;
    if ((local_a90.ErrorCode == Ok) && (local_a80 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(local_a80);
      LOCK();
      piVar1 = &this_00->NumRefs;
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_a90);
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    if (pBVar31 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(pBVar31);
      LOCK();
      piVar1 = &pBVar31->NumRefs;
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar31);
        ::operator_delete(pBVar31,0x20);
      }
    }
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a58);
    if ((local_be0->bIsSet != false) &&
       (pBVar31 = (local_be0->TypedValue).CorePtr.Reference, pBVar31 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(pBVar31);
      LOCK();
      piVar1 = &pBVar31->NumRefs;
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar31);
        ::operator_delete(pBVar31,0x20);
      }
    }
    cVar8 = local_bc8->bIsSet;
    goto LAB_148cda636;
  }
  FIoStatus::FIoStatus(&local_aa8);
  FIoStatus::operator=(&local_aa8,&FIoStatus::Ok);
  pTVar21 = local_bc0;
  local_a98 = pBVar31;
  FIoStatus::FIoStatus((FIoStatus *)local_bc0);
  FIoStatus::operator=((FIoStatus *)pTVar21,&local_aa8);
  if (*(int *)&pTVar21->field_0x8 == 0) {
    *(BufCore **)&pTVar21->field_0x10 = local_a98;
    local_a98 = (BufCore *)0x0;
    FIoStatus::operator=(&local_aa8,Unknown);
  }
  pTVar21->field_0x18 = local_bf8;
  FIoStatus::operator=(&local_aa8,Unknown);
  pBVar31 = local_a98;
  if ((local_aa8.ErrorCode == Ok) && (local_a98 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(local_a98);
    LOCK();
    piVar1 = &pBVar31->NumRefs;
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar31);
      ::operator_delete(pBVar31,0x20);
    }
  }
  pFVar22 = &local_aa8;
LAB_148cda5e0:
  FIoStatus::~FIoStatus(pFVar22);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a58);
  if ((local_be0->bIsSet != false) &&
     (pBVar31 = (local_be0->TypedValue).CorePtr.Reference, pBVar31 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar31);
    LOCK();
    piVar1 = &pBVar31->NumRefs;
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar31);
      ::operator_delete(pBVar31,0x20);
    }
  }
  cVar8 = local_bc8->bIsSet;
LAB_148cda636:
  if ((cVar8 != '\0') &&
     (pBVar31 = (local_bc8->TypedValue).CorePtr.Reference, pBVar31 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar31);
    LOCK();
    piVar1 = &pBVar31->NumRefs;
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar31);
      ::operator_delete(pBVar31,0x20);
    }
  }
  return pTVar21;
}

