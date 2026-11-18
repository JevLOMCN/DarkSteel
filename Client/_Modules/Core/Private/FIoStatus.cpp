// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FIoStatus @ 1417a2220

FIoStatus * __thiscall FIoStatus::FIoStatus(FIoStatus *this,EIoErrorCode param_1)

{
  this->ErrorCode = param_1;
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  this->SystemErrorCode = 0;
  return this;
}

// FIoStatus @ 1417a2240

FIoStatus * __thiscall
FIoStatus::FIoStatus(FIoStatus *this,EIoErrorCode param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  wchar_t *_Src;
  undefined4 *puVar2;
  longlong lVar3;
  
  _Src = param_2->DataPtr;
  iVar1 = param_2->Size;
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  if (iVar1 != 0) {
    lVar3 = (longlong)iVar1;
    puVar2 = FMemory::Malloc(lVar3 * 2 + 10,0);
    *puVar2 = 1;
    puVar2[1] = iVar1;
    (this->ErrorMessage).Chars = (wchar_t *)(puVar2 + 2);
    if (0 < iVar1) {
      memcpy(puVar2 + 2,_Src,lVar3 * 2);
    }
    (this->ErrorMessage).Chars[lVar3] = L'\0';
  }
  this->ErrorCode = param_1;
  this->SystemErrorCode = 0;
  return this;
}

// FIoStatus @ 1417a22f0

FIoStatus * __thiscall FIoStatus::FIoStatus(FIoStatus *this,EIoErrorCode param_1,uint param_2)

{
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  this->ErrorCode = param_1;
  this->SystemErrorCode = param_2;
  return this;
}

// FIoStatus @ 1417a2310

FIoStatus * __thiscall
FIoStatus::FIoStatus
          (FIoStatus *this,EIoErrorCode param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  int iVar1;
  wchar_t *_Src;
  undefined4 *puVar2;
  longlong lVar3;
  
  _Src = param_3->DataPtr;
  iVar1 = param_3->Size;
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  if (iVar1 != 0) {
    lVar3 = (longlong)iVar1;
    puVar2 = FMemory::Malloc(lVar3 * 2 + 10,0);
    *puVar2 = 1;
    puVar2[1] = iVar1;
    (this->ErrorMessage).Chars = (wchar_t *)(puVar2 + 2);
    if (0 < iVar1) {
      memcpy(puVar2 + 2,_Src,lVar3 * 2);
    }
    (this->ErrorMessage).Chars[lVar3] = L'\0';
  }
  this->SystemErrorCode = param_2;
  this->ErrorCode = param_1;
  return this;
}

// FIoStatus @ 1417a23c0

FIoStatus * __thiscall FIoStatus::FIoStatus(FIoStatus *this)

{
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  this->ErrorCode = Ok;
  this->SystemErrorCode = 0;
  return this;
}

// ~FIoStatus @ 1417a7340

void __thiscall FIoStatus::~FIoStatus(FIoStatus *this)

{
  int iVar1;
  FLowLevelMemTracker *this_00;
  wchar_t *pwVar2;
  
  pwVar2 = (this->ErrorMessage).Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (pwVar2 != (wchar_t *)0x0) {
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this_00 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_00 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pwVar2,FMalloc,true);
        }
        if (UE::Private::GMalloc == (FMalloc *)0x0) {
          FMemory::GCreateMalloc();
        }
        else {
          DoGamethreadHook(2);
        }
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pwVar2);
      }
      return;
    }
  }
  return;
}

// operator= @ 1417a8030

FIoStatus * __thiscall FIoStatus::operator=(FIoStatus *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar3 = (this->ErrorMessage).Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = pwVar3 + -4;
    LOCK();
    iVar1 = *(int *)pwVar3;
    *(int *)pwVar3 = *(int *)pwVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar3);
    }
  }
  (this->ErrorMessage).Chars = pwVar2;
  this->ErrorCode = param_1->ErrorCode;
  this->SystemErrorCode = param_1->SystemErrorCode;
  return this;
}

// operator= @ 1417a80a0

FIoStatus * __thiscall FIoStatus::operator=(FIoStatus *this,EIoErrorCode param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (this->ErrorMessage).Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  (this->ErrorMessage).Chars = (wchar_t *)0x0;
  this->SystemErrorCode = 0;
  this->ErrorCode = param_1;
  return this;
}

// operator== @ 1417aa080

bool __thiscall FIoStatus::operator==(FIoStatus *this,FIoStatus *param_1)

{
  bool bVar1;
  
  bVar1 = UE::operator==(&this->ErrorMessage,&param_1->ErrorMessage);
  if (((bVar1) && (this->ErrorCode == param_1->ErrorCode)) &&
     (this->SystemErrorCode == param_1->SystemErrorCode)) {
    return true;
  }
  return false;
}

// ToString @ 1418070f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall FIoStatus::ToString(FIoStatus *this,FString *__return_storage_ptr__)

{
  EIoErrorCode EVar1;
  wchar_t *pwVar2;
  undefined1 auStackY_c8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pwVar2 = (this->ErrorMessage).Chars;
  if (pwVar2 == (wchar_t *)0x0) {
    EVar1 = this->ErrorCode;
    if (this->SystemErrorCode == 0) {
      if ((int)EVar1 < 0x1c) {
        pwVar2 = GetIoErrorText_ErrorCodeText[EVar1];
      }
      else {
        pwVar2 = GetIoErrorText_ErrorCodeText[1];
      }
      FStringFormatArg::FStringFormatArg(&local_78,pwVar2);
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_88.AllocatorInstance.Data,&local_78,1);
      ::FString::FormatImpl(__return_storage_ptr__,L"({0})",&local_88);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      local_58.StringValue.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
      goto LAB_141807418;
    }
    if ((int)EVar1 < 0x1c) {
      pwVar2 = GetIoErrorText_ErrorCodeText[EVar1];
    }
    else {
      pwVar2 = GetIoErrorText_ErrorCodeText[1];
    }
    FStringFormatArg::FStringFormatArg(&local_78,pwVar2);
    FStringFormatArg::FStringFormatArg(&local_58,this->SystemErrorCode);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_78,2);
    ::FString::FormatImpl(__return_storage_ptr__,L"({0}, SystemErrorCode={1})",&local_88);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    local_38.StringValue.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
  }
  else if (this->SystemErrorCode == 0) {
    FStringFormatArg::FStringFormatArg(&local_78,pwVar2);
    if ((int)this->ErrorCode < 0x1c) {
      pwVar2 = GetIoErrorText_ErrorCodeText[this->ErrorCode];
    }
    else {
      pwVar2 = GetIoErrorText_ErrorCodeText[1];
    }
    FStringFormatArg::FStringFormatArg(&local_58,pwVar2);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_78,2);
    ::FString::FormatImpl(__return_storage_ptr__,L"{0} ({1})",&local_88);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    local_38.StringValue.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
  }
  else {
    FStringFormatArg::FStringFormatArg(&local_78,pwVar2);
    if ((int)this->ErrorCode < 0x1c) {
      pwVar2 = GetIoErrorText_ErrorCodeText[this->ErrorCode];
    }
    else {
      pwVar2 = GetIoErrorText_ErrorCodeText[1];
    }
    FStringFormatArg::FStringFormatArg(&local_58,pwVar2);
    FStringFormatArg::FStringFormatArg(&local_38,this->SystemErrorCode);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_88.AllocatorInstance,3,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_78,3);
    ::FString::FormatImpl(__return_storage_ptr__,L"{0} ({1}, SystemErrorCode={2})",&local_88);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  if ((FStringFormatArg *)local_38.StringValue.Data.AllocatorInstance.Data !=
      (FStringFormatArg *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
LAB_141807418:
  if ((FStringFormatArg *)local_58.StringValue.Data.AllocatorInstance.Data !=
      (FStringFormatArg *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

