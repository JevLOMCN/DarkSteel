// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FMarshalledText @ 141e85480

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::FMarshalledText(FMarshalledText *this,FText *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FString local_28;
  FUtf8String local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FTextStringHelper::WriteToBuffer(&local_28,param_1,false,true);
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = FUtf8String::ConstructFromPtrSize
                     (&local_18,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (&this->String != pFVar2) {
    pFVar1 = (this->String).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->String).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->String).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->String).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// FMarshalledText @ 141e85540

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::FMarshalledText(FMarshalledText *this,FUtf8String *param_1)

{
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->String).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return this;
}

// FMarshalledText @ 141e85570

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::FMarshalledText(FMarshalledText *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FUtf8String *pFVar3;
  int iVar4;
  FUtf8String local_18;
  
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = FUtf8String::ConstructFromPtrSize
                     (&local_18,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  if (&this->String != pFVar3) {
    pFVar2 = (this->String).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->String).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->String).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->String).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FMarshalledText @ 141e85600

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::FMarshalledText(FMarshalledText *this,FText *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FString local_28;
  FUtf8String local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FTextStringHelper::WriteToBuffer(&local_28,param_1,false,true);
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = FUtf8String::ConstructFromPtrSize
                     (&local_18,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (&this->String != pFVar2) {
    pFVar1 = (this->String).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->String).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->String).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->String).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// FMarshalledText @ 141e856c0

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::FMarshalledText(FMarshalledText *this,FUtf8String *param_1)

{
  FUtf8String::FUtf8String(&this->String,param_1);
  return this;
}

// operator= @ 141e887d0

FMarshalledText * __thiscall
FixedTagPrivate::FMarshalledText::operator=(FMarshalledText *this,FMarshalledText *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->String).Data.ArrayMax;
    piVar1 = &(this->String).Data.ArrayMax;
    _Src = (param_1->String).Data.AllocatorInstance.Data;
    iVar3 = (param_1->String).Data.ArrayNum;
    (this->String).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->String).Data.AllocatorInstance.Data,_Src,(longlong)iVar3);
    }
  }
  return this;
}

// CompareToCaseIgnored @ 141e920f0

int __thiscall
FixedTagPrivate::FMarshalledText::CompareToCaseIgnored
          (FMarshalledText *this,FMarshalledText *param_1)

{
  int iVar1;
  char *_Str1;
  char *_Str2;
  
  _Str1 = "";
  if ((param_1->String).Data.ArrayNum == 0) {
    _Str2 = "";
  }
  else {
    _Str2 = (char *)(param_1->String).Data.AllocatorInstance.Data;
  }
  if ((this->String).Data.ArrayNum != 0) {
    _Str1 = (char *)(this->String).Data.AllocatorInstance.Data;
  }
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}

// GetAsComplexString @ 141e9f4e0

FUtf8String * __thiscall FixedTagPrivate::FMarshalledText::GetAsComplexString(FMarshalledText *this)

{
  return &this->String;
}

// GetAsText @ 141e9f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
FixedTagPrivate::FMarshalledText::GetAsText(FMarshalledText *this,FText *__return_storage_ptr__)

{
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar1;
  char *pcVar2;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((this->String).Data.ArrayNum == 0) {
    pcVar2 = "";
  }
  else {
    pcVar2 = (char *)(this->String).Data.AllocatorInstance.Data;
  }
  pTVar1 = StringCast<wchar_t,128,char8_t>(&local_138,(uchar *)pcVar2);
  FTextStringHelper::CreateFromBuffer
            (__return_storage_ptr__,pTVar1->Ptr,(wchar_t *)0x0,(wchar_t *)0x0,false);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetResourceSize @ 141ea2540

long64 __thiscall FixedTagPrivate::FMarshalledText::GetResourceSize(FMarshalledText *this)

{
  return (longlong)(this->String).Data.ArrayMax;
}

