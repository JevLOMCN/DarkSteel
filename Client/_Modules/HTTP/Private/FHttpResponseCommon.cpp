// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 17

// FHttpResponseCommon @ 14314d4f0

FHttpResponseCommon * __thiscall
FHttpResponseCommon::FHttpResponseCommon(FHttpResponseCommon *this,FHttpRequestCommon *param_1)

{
  EHttpFailureReason EVar1;
  Type TVar2;
  FString *pFVar3;
  
  this->_padding_ = (longlong)&___7FHttpResponseCommon__6B_;
  pFVar3 = (FString *)(**(code **)param_1->_padding_)(param_1);
  ::FString::FString(&this->URL,pFVar3);
  pFVar3 = (FString *)(**(code **)(param_1->_padding_ + 8))(param_1);
  ::FString::FString(&this->EffectiveURL,pFVar3);
  TVar2 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  this->CompletionStatus = TVar2;
  EVar1 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  this->FailureReason = EVar1;
  (this->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Payload).ArrayNum = 0;
  (this->Payload).ArrayMax = 0;
  *(undefined8 *)&this->Headers = 0;
  *(undefined8 *)&(this->Headers).field_0x8 = 0;
  *(undefined8 *)&(this->Headers).field_0x20 = 0;
  this->ResponseCode = 0;
  *(undefined4 *)&(this->Headers).field_0x28 = 0;
  *(undefined4 *)&(this->Headers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Headers).field_0x34 = 0;
  *(undefined4 *)&(this->Headers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Headers).field_0x40 = 0;
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  this->bIsReady = false;
  return this;
}

// ~FHttpResponseCommon @ 143150a10

void __thiscall FHttpResponseCommon::~FHttpResponseCommon(FHttpResponseCommon *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Headers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Headers);
  pFVar2 = (this->Payload).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EffectiveURL).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AppendToPayload @ 143155470

void __thiscall
FHttpResponseCommon::AppendToPayload(FHttpResponseCommon *this,uchar *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if ((param_1 == (uchar *)0x0) && (iVar4 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&(this->Payload).AllocatorInstance,&(this->Payload).ArrayNum,
                     &(this->Payload).ArrayMax);
  if (iVar4 != 0) {
    memcpy((this->Payload).AllocatorInstance.Data + iVar3,param_1,(longlong)iVar4);
  }
  return;
}

// GetContent @ 143161bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FHttpResponseCommon::GetContent(FHttpResponseCommon *this)

{
  if ((this->bIsReady == false) && (2 < (byte)LogHttp._0_1_)) {
    (**(code **)this->_padding_)();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    return &this->Payload;
  }
  return &this->Payload;
}

// GetContentAsString @ 143161d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FHttpResponseCommon::GetContentAsString(FHttpResponseCommon *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_168 [32];
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar2 = 0;
  pFVar1 = (this->Payload).AllocatorInstance.Data;
  iVar3 = (this->Payload).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_143161e19;
  }
  if ((0 < iVar3) && (pFVar1[(longlong)iVar3 + -1] == (FScriptContainerElement)0x0)) {
    iVar2 = 1;
    iVar3 = iVar3 + -1;
  }
  local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pFVar1,iVar3);
  uVar5 = local_38 + iVar2;
  uVar4 = uVar5;
  if (uVar5 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar4 = 0;
      goto LAB_143161dae;
    }
  }
  else {
LAB_143161dae:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_40,uVar5,(uchar *)pFVar1,iVar2 + iVar3);
LAB_143161e19:
  ::FString::FString(__return_storage_ptr__,local_38,(wchar_t *)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// GetContentAsUtf8StringView @ 143161e90

TStringView<char8_t> * __thiscall
FHttpResponseCommon::GetContentAsUtf8StringView
          (FHttpResponseCommon *this,TStringView<char8_t> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (uchar *)(this->Payload).AllocatorInstance.Data;
  __return_storage_ptr__->Size = (this->Payload).ArrayNum;
  return __return_storage_ptr__;
}

// GetEffectiveURL @ 1431626a0

FString * __thiscall FHttpResponseCommon::GetEffectiveURL(FHttpResponseCommon *this)

{
  return &this->EffectiveURL;
}

// GetFailureReason @ 1431628f0

EHttpFailureReason __thiscall FHttpResponseCommon::GetFailureReason(FHttpResponseCommon *this)

{
  return this->FailureReason;
}

// GetHeader @ 143162bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FHttpResponseCommon::GetHeader
          (FHttpResponseCommon *this,FString *__return_storage_ptr__,FString *param_1)

{
  TTuple<FString,FString> *pTVar1;
  FString *pFVar2;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (this->bIsReady == false) {
    if (2 < (byte)LogHttp._0_1_) {
      (**(code **)this->_padding_)();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return __return_storage_ptr__;
    }
  }
  else {
    pTVar1 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&this->Headers,param_1);
    pFVar2 = (FString *)&pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FString,FString> *)0x0) {
      pFVar2 = (FString *)0x0;
    }
    if (pFVar2 != (FString *)0x0) {
      ::FString::operator=(__return_storage_ptr__,pFVar2);
    }
  }
  return __return_storage_ptr__;
}

// GetResponseCode @ 1431648e0

int __thiscall FHttpResponseCommon::GetResponseCode(FHttpResponseCommon *this)

{
  return this->ResponseCode;
}

// GetStatus @ 143164c30

Type __thiscall FHttpResponseCommon::GetStatus(FHttpResponseCommon *this)

{
  return this->CompletionStatus;
}

// GetURL @ 143164fc0

FString * __thiscall FHttpResponseCommon::GetURL(FHttpResponseCommon *this)

{
  return &this->URL;
}

// GetURLParameter @ 143165250

FString * __thiscall
FHttpResponseCommon::GetURLParameter
          (FHttpResponseCommon *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  TOptional<FString>_u_0 local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(this->URL).Data.AllocatorInstance.Data;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  iVar1 = (this->URL).Data.ArrayNum;
  local_28.Size = iVar4;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  FGenericPlatformHttp::GetUrlParameter
            ((TOptional<FString> *)&local_38.TypedValue,&local_18,&local_28);
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     ((TOptional<FString>_u_0 *)__return_storage_ptr__ != &local_38)) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)local_38.TypedValue.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayMax = local_38.TypedValue.Data.ArrayMax;
    (__return_storage_ptr__->Data).ArrayNum = local_38.TypedValue.Data.ArrayNum;
    local_38.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_38.TypedValue.Data.ArrayMax = 0;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetEffectiveURL @ 14317dfc0

void __thiscall FHttpResponseCommon::SetEffectiveURL(FHttpResponseCommon *this,FString *param_1)

{
  ::FString::operator=(&this->EffectiveURL,param_1);
  return;
}

// SetRequestFailureReason @ 14317f030

void __thiscall
FHttpResponseCommon::SetRequestFailureReason(FHttpResponseCommon *this,EHttpFailureReason param_1)

{
  this->FailureReason = param_1;
  return;
}

// SetRequestStatus @ 14317f040

void __thiscall FHttpResponseCommon::SetRequestStatus(FHttpResponseCommon *this,Type param_1)

{
  this->CompletionStatus = param_1;
  return;
}

// SetResponseCode @ 14317f530

void __thiscall FHttpResponseCommon::SetResponseCode(FHttpResponseCommon *this,int param_1)

{
  this->ResponseCode = param_1;
  return;
}

