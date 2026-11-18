// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 44

// FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb26b00

FVariantData * __thiscall
FVariantData::FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FVariantData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  Type TVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  wchar_t *_Dst;
  
  this->Type = Empty;
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  TVar1 = this->Type;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  _Src = (param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = Blob;
  if (uVar2 != 0) {
    (this->Value).AsBlob.BlobSize = uVar2;
    _Dst = operator_new__((ulonglong)uVar2);
    (this->Value).AsTCHAR = _Dst;
    memcpy(_Dst,_Src,(ulonglong)uVar2);
  }
  return this;
}

// FVariantData<FString> @ 14eb26d70

FVariantData * __thiscall FVariantData::FVariantData<FString>(FVariantData *this,FString *param_1)

{
  Type TVar1;
  undefined1 auVar2 [16];
  size_t sVar3;
  ulong64 uVar4;
  wchar_t *_Dest;
  size_t _Count;
  wchar_t *_Str;
  
  this->Type = Empty;
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = String;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(_Str);
    _Count = (size_t)(int)sVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = _Count + 1;
    uVar4 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    _Dest = operator_new__(uVar4);
    (this->Value).AsTCHAR = _Dest;
    if ((int)sVar3 < 1) {
      *_Dest = L'\0';
    }
    else {
      wcsncpy(_Dest,_Str,_Count);
      _Dest[_Count] = L'\0';
    }
  }
  return this;
}

// FVariantData @ 14eb31220

FVariantData * __thiscall FVariantData::FVariantData(FVariantData *this,FVariantData *param_1)

{
  long64 lVar1;
  undefined7 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  this->Type = Empty;
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  uVar2 = *(undefined7 *)&param_1->field_0x1;
  lVar1 = (param_1->Value).AsInt64;
  this->Type = param_1->Type;
  *(undefined7 *)&this->field_0x1 = uVar2;
  (this->Value).AsInt64 = lVar1;
  iVar3 = param_1->CachedEstimatedMaxEscapedStringSize;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined8 *)((longlong)&this->Value + 8) = *(undefined8 *)((longlong)&param_1->Value + 8);
  this->CachedEstimatedMaxEscapedStringSize = iVar3;
  *(undefined4 *)&this->field_0x1c = uVar4;
  param_1->Type = Empty;
  (param_1->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&param_1->Value + 8) = 0;
  param_1->CachedEstimatedMaxEscapedStringSize = 0;
  return this;
}

// FVariantData @ 14eb31260

FVariantData * __thiscall FVariantData::FVariantData(FVariantData *this,FVariantData *param_1)

{
  Type TVar1;
  undefined1 auVar2 [16];
  long64 lVar3;
  undefined7 uVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  ulong64 uVar8;
  wchar_t *_Dest;
  size_t _Count;
  ForAnyElementType _Str;
  FString local_28;
  
  this->Type = Empty;
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  TVar1 = param_1->Type;
  if (TVar1 == String) {
    SetValue(this,(param_1->Value).AsTCHAR);
    return this;
  }
  if (TVar1 == Json) {
    ::FString::FString(&local_28,(param_1->Value).AsTCHAR);
    TVar1 = this->Type;
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      _Str.Data = local_28.Data.AllocatorInstance.Data;
    }
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->CachedEstimatedMaxEscapedStringSize = 0;
    this->Type = String;
    if (_Str.Data != (FScriptContainerElement *)0x0) {
      sVar7 = wcslen((wchar_t *)_Str.Data);
      _Count = (size_t)(int)sVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = _Count + 1;
      uVar8 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      _Dest = operator_new__(uVar8);
      (this->Value).AsTCHAR = _Dest;
      if ((int)sVar7 < 1) {
        *_Dest = L'\0';
      }
      else {
        wcsncpy(_Dest,(wchar_t *)_Str.Data,_Count);
        _Dest[_Count] = L'\0';
      }
    }
    this->Type = Json;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return this;
    }
  }
  else {
    if (TVar1 == Blob) {
      SetValue(this,(param_1->Value).AsBlob.BlobSize,(param_1->Value).AsBlob.BlobData);
      return this;
    }
    uVar4 = *(undefined7 *)&param_1->field_0x1;
    lVar3 = (param_1->Value).AsInt64;
    this->Type = param_1->Type;
    *(undefined7 *)&this->field_0x1 = uVar4;
    (this->Value).AsInt64 = lVar3;
    iVar5 = param_1->CachedEstimatedMaxEscapedStringSize;
    uVar6 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)((longlong)&this->Value + 8) = *(undefined8 *)((longlong)&param_1->Value + 8);
    this->CachedEstimatedMaxEscapedStringSize = iVar5;
    *(undefined4 *)&this->field_0x1c = uVar6;
  }
  return this;
}

// operator= @ 14eb35f10

FVariantData * __thiscall FVariantData::operator=(FVariantData *this,FVariantData *param_1)

{
  long64 lVar1;
  undefined7 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (this != param_1) {
    uVar2 = *(undefined7 *)&param_1->field_0x1;
    lVar1 = (param_1->Value).AsInt64;
    this->Type = param_1->Type;
    *(undefined7 *)&this->field_0x1 = uVar2;
    (this->Value).AsInt64 = lVar1;
    iVar3 = param_1->CachedEstimatedMaxEscapedStringSize;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)((longlong)&this->Value + 8) = *(undefined8 *)((longlong)&param_1->Value + 8);
    this->CachedEstimatedMaxEscapedStringSize = iVar3;
    *(undefined4 *)&this->field_0x1c = uVar4;
    param_1->Type = Empty;
    (param_1->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&param_1->Value + 8) = 0;
    param_1->CachedEstimatedMaxEscapedStringSize = 0;
  }
  return this;
}

// operator= @ 14eb35f40

FVariantData * __thiscall FVariantData::operator=(FVariantData *this,FVariantData *param_1)

{
  Type TVar1;
  long64 lVar2;
  undefined7 uVar3;
  int iVar4;
  undefined4 uVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  if (this != param_1) {
    TVar1 = param_1->Type;
    if (TVar1 == String) {
      SetValue(this,(param_1->Value).AsTCHAR);
      return this;
    }
    if (TVar1 == Json) {
      ::FString::FString(&local_18,(param_1->Value).AsTCHAR);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      SetValue(this,(wchar_t *)FVar6.Data);
      this->Type = Json;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return this;
      }
    }
    else {
      if (TVar1 == Blob) {
        SetValue(this,(param_1->Value).AsBlob.BlobSize,(param_1->Value).AsBlob.BlobData);
        return this;
      }
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      this->Type = Empty;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      uVar3 = *(undefined7 *)&param_1->field_0x1;
      lVar2 = (param_1->Value).AsInt64;
      this->Type = param_1->Type;
      *(undefined7 *)&this->field_0x1 = uVar3;
      (this->Value).AsInt64 = lVar2;
      iVar4 = param_1->CachedEstimatedMaxEscapedStringSize;
      uVar5 = *(undefined4 *)&param_1->field_0x1c;
      *(undefined8 *)((longlong)&this->Value + 8) = *(undefined8 *)((longlong)&param_1->Value + 8);
      this->CachedEstimatedMaxEscapedStringSize = iVar4;
      *(undefined4 *)&this->field_0x1c = uVar5;
    }
  }
  return this;
}

// operator== @ 14eb37340

bool __thiscall FVariantData::operator==(FVariantData *this,FVariantData *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (this->Type == param_1->Type) {
    switch(this->Type) {
    case Int32:
    case UInt32:
      return (this->Value).AsInt == (param_1->Value).AsInt;
    case Int64:
    case UInt64:
      return (this->Value).AsInt64 == (param_1->Value).AsInt64;
    case Double:
      if ((param_1->Value).AsDouble == (this->Value).AsDouble) {
        return true;
      }
      break;
    case String:
    case Json:
      iVar2 = wcscmp((this->Value).AsTCHAR,(param_1->Value).AsTCHAR);
      return iVar2 == 0;
    case Float:
      if ((param_1->Value).AsFloat == (this->Value).AsFloat) {
        return true;
      }
      break;
    case Blob:
      uVar1 = (this->Value).AsBlob.BlobSize;
      if ((uVar1 == (param_1->Value).AsBlob.BlobSize) &&
         (iVar2 = memcmp((this->Value).AsTCHAR,(param_1->Value).AsTCHAR,(ulonglong)uVar1),
         iVar2 == 0)) {
        return true;
      }
      break;
    case Bool:
      return (this->Value).AsBool == (param_1->Value).AsBool;
    }
  }
  return false;
}

// operator!= @ 14eb37480

bool __thiscall FVariantData::operator!=(FVariantData *this,FVariantData *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// AddToJsonObject @ 14ebb7710

void __thiscall
FVariantData::AddToJsonObject
          (FVariantData *this,TSharedRef<FJsonObject,1> *param_1,FString *param_2,bool param_3)

{
  Type TVar1;
  FString *pFVar2;
  FString *pFVar3;
  FJsonObject *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  double dVar10;
  TSharedPtr<FJsonObject,1> local_58;
  FString local_48;
  FString local_38 [2];
  
  TVar1 = this->Type;
  uVar7 = 0;
  iVar6 = 0;
  switch(TVar1) {
  case Int32:
    if (TVar1 == Int32) {
      iVar6 = (this->Value).AsInt;
    }
    pFVar4 = param_1->Object;
    dVar10 = (double)iVar6;
    if (param_3) {
      ::FString::ConcatFC((FString *)&local_58,param_2,L"_i");
      FJsonObject::SetNumberField(pFVar4,(FString *)&local_58,dVar10);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Object;
    }
    else {
LAB_14ebb7838:
      pFVar3 = ::FString::FString(&local_48,param_2);
      FJsonObject::SetNumberField(pFVar4,pFVar3,dVar10);
    }
    break;
  case UInt32:
    if (TVar1 == UInt32) {
      uVar7 = (this->Value).AsUInt;
    }
    pFVar4 = param_1->Object;
    dVar10 = (double)uVar7;
    if (!param_3) goto LAB_14ebb7838;
    ::FString::ConcatFC((FString *)&local_58,param_2,L"_u");
    FJsonObject::SetNumberField(pFVar4,(FString *)&local_58,dVar10);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Object;
    break;
  case Int64:
    pFVar4 = param_1->Object;
    pFVar3 = ToString(this,(FString *)&local_58);
    if (!param_3) goto LAB_14ebb79a6;
    pwVar5 = L"_I";
LAB_14ebb7988:
    ::FString::ConcatFC(&local_48,param_2,pwVar5);
    FJsonObject::SetStringField(pFVar4,&local_48,pFVar3);
    goto LAB_14ebb79c1;
  case UInt64:
    pFVar4 = param_1->Object;
    pFVar3 = ToString(this,(FString *)&local_58);
    if (param_3) {
      pwVar5 = L"_U";
      goto LAB_14ebb7988;
    }
LAB_14ebb79a6:
    pFVar2 = ::FString::FString(local_38,param_2);
    FJsonObject::SetStringField(pFVar4,pFVar2,pFVar3);
    local_48.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
LAB_14ebb79c1:
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58.Object != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Object);
    }
    goto switchD_14ebb775e_caseD_8;
  case Double:
    if (TVar1 == Double) {
      dVar10 = (this->Value).AsDouble;
    }
    else {
      dVar10 = 0.0;
    }
    pFVar4 = param_1->Object;
    if (!param_3) {
      pFVar3 = ::FString::FString(local_38,param_2);
      FJsonObject::SetNumberField(pFVar4,pFVar3,dVar10);
      local_48.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
      break;
    }
    ::FString::ConcatFC(&local_48,param_2,L"_d");
    FJsonObject::SetNumberField(pFVar4,&local_48,dVar10);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    goto switchD_14ebb775e_caseD_8;
  case String:
    local_58.Object = (FJsonObject *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (((TVar1 - String & 0xfb) == 0) && ((this->Value).AsTCHAR != (wchar_t *)0x0)) {
      ::FString::operator=((FString *)&local_58,(this->Value).AsTCHAR);
    }
    else {
      ::FString::Reset((FString *)&local_58,0);
    }
    pFVar4 = param_1->Object;
    if (param_3) {
      ::FString::ConcatFC(&local_48,param_2,L"_s");
      FJsonObject::SetStringField(pFVar4,&local_48,(FString *)&local_58);
      local_38[0].Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      pFVar3 = ::FString::FString(local_38,param_2);
      FJsonObject::SetStringField(pFVar4,pFVar3,(FString *)&local_58);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Object;
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Object;
    }
    break;
  case Float:
    if (TVar1 == Float) {
      fVar9 = (this->Value).AsFloat;
    }
    else {
      fVar9 = 0.0;
    }
    pFVar4 = param_1->Object;
    dVar10 = (double)fVar9;
    if (!param_3) goto LAB_14ebb7838;
    ::FString::ConcatFC((FString *)&local_58,param_2,L"_f");
    FJsonObject::SetNumberField(pFVar4,(FString *)&local_58,dVar10);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Object;
    break;
  case Blob:
    goto switchD_14ebb775e_caseD_8;
  case Bool:
    if (TVar1 == Bool) {
      bVar8 = (this->Value).AsBool;
    }
    else {
      bVar8 = false;
    }
    pFVar4 = param_1->Object;
    if (param_3) {
      ::FString::ConcatFC(&local_48,param_2,L"_b");
      FJsonObject::SetBoolField(pFVar4,&local_48,bVar8);
    }
    else {
      pFVar3 = ::FString::FString(local_38,param_2);
      FJsonObject::SetBoolField(pFVar4,pFVar3,bVar8);
      local_48.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
    }
    break;
  case Json:
    local_58.Object = (FJsonObject *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    GetValue(this,&local_58);
    pFVar4 = param_1->Object;
    if (param_3) {
      ::FString::ConcatFC(&local_48,param_2,L"_j");
      FJsonObject::SetObjectField(pFVar4,&local_48,&local_58);
    }
    else {
      pFVar3 = ::FString::FString(local_38,param_2);
      FJsonObject::SetObjectField(pFVar4,pFVar3,&local_58);
      local_48.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    goto switchD_14ebb775e_caseD_8;
  default:
    goto switchD_14ebb775e_default;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
switchD_14ebb775e_caseD_8:
switchD_14ebb775e_default:
  return;
}

// Decrement @ 14ebeca30

void __thiscall FVariantData::Decrement(FVariantData *this)

{
  Type TVar1;
  
  TVar1 = this->Type;
  switch(TVar1) {
  case Int32:
    if (TVar1 == Int32) {
      (this->Value).AsInt = (this->Value).AsInt + -1;
      return;
    }
    break;
  case UInt32:
    if (TVar1 == UInt32) {
      (this->Value).AsInt = (this->Value).AsInt + -1;
      return;
    }
    break;
  case Int64:
    if (TVar1 == Int64) {
      (this->Value).AsTCHAR = (wchar_t *)((this->Value).AsInt64 + -1);
      return;
    }
    break;
  case UInt64:
    if (TVar1 == UInt64) {
      (this->Value).AsTCHAR = (wchar_t *)((this->Value).AsInt64 + -1);
      return;
    }
    break;
  case Double:
    if (TVar1 == Double) {
      (this->Value).AsDouble = (this->Value).AsDouble - __real_3ff0000000000000;
      return;
    }
    break;
  case Float:
    if (TVar1 == Float) {
      (this->Value).AsFloat = (this->Value).AsFloat - __real_3f800000;
    }
  }
  return;
}

// Empty @ 14ebf0cd0

void __thiscall FVariantData::Empty(FVariantData *this)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  this->Type = Empty;
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  return;
}

// FromJson @ 14ebf9e30

bool __thiscall FVariantData::FromJson(FVariantData *this,TSharedRef<FJsonObject,1> *param_1)

{
  Type TVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  ulong64 uVar8;
  ForAnyElementType FVar9;
  size_t _Count;
  bool bVar10;
  undefined8 local_res10;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48 [2];
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1506ed7d0;
  local_58.Data.ArrayNum = 4;
  bVar4 = false;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_48[0].DataPtr = L"Type";
  local_48[0].Size = 4;
  local_48[0]._12_4_ = local_58.Data.ArrayMax;
  bVar3 = FJsonObject::TryGetStringField(param_1->Object,local_48,&local_68);
  bVar10 = bVar4;
  if ((!bVar3) || (bVar10 = false, local_68.Data.ArrayNum < 2)) goto LAB_14ebfa522;
  pwVar6 = EOnlineKeyValuePairDataType::ToString(Int32);
  ::FString::FString(&local_58,pwVar6);
  FVar9.Data = local_58.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == local_58.Data.ArrayNum) {
    if (local_68.Data.ArrayNum < 2) {
      bVar10 = true;
    }
    else {
      iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                     (wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar10 = iVar5 == 0;
    }
  }
  else {
    bVar10 = local_68.Data.ArrayNum + local_58.Data.ArrayNum == 1;
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (bVar10) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15069d088;
    local_58.Data.ArrayNum = 5;
    local_48[0].DataPtr = L"Value";
    local_48[0].Size = 5;
    local_48[0]._12_4_ = local_58.Data.ArrayMax;
    bVar3 = FJsonObject::TryGetNumberField(param_1->Object,local_48,(int *)&local_res10);
    bVar10 = bVar4;
    if (bVar3) {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      (this->Value).AsInt = (uint)local_res10;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = Int32;
      bVar10 = true;
    }
    goto LAB_14ebfa522;
  }
  pwVar6 = EOnlineKeyValuePairDataType::ToString(UInt32);
  ::FString::FString(&local_58,pwVar6);
  FVar9.Data = local_58.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == local_58.Data.ArrayNum) {
    if (local_68.Data.ArrayNum < 2) {
      bVar10 = true;
    }
    else {
      iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                     (wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar10 = iVar5 == 0;
    }
  }
  else {
    bVar10 = local_68.Data.ArrayNum + local_58.Data.ArrayNum == 1;
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (bVar10) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15069d088;
    local_58.Data.ArrayNum = 5;
    local_48[0].DataPtr = L"Value";
    local_48[0].Size = 5;
    local_48[0]._12_4_ = local_58.Data.ArrayMax;
    bVar3 = FJsonObject::TryGetNumberField(param_1->Object,local_48,(uint *)&local_res10);
    bVar10 = bVar4;
    if (bVar3) {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      (this->Value).AsInt = (uint)local_res10;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = UInt32;
      bVar10 = true;
    }
    goto LAB_14ebfa522;
  }
  pwVar6 = EOnlineKeyValuePairDataType::ToString(Float);
  ::FString::FString(&local_58,pwVar6);
  FVar9.Data = local_58.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == local_58.Data.ArrayNum) {
    if (local_68.Data.ArrayNum < 2) {
      bVar10 = true;
    }
    else {
      iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                     (wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar10 = iVar5 == 0;
    }
  }
  else {
    bVar10 = local_68.Data.ArrayNum + local_58.Data.ArrayNum == 1;
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (bVar10) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15069d088;
    local_58.Data.ArrayNum = 5;
    local_48[0].DataPtr = L"Value";
    local_48[0].Size = 5;
    local_48[0]._12_4_ = local_58.Data.ArrayMax;
    bVar3 = FJsonObject::TryGetNumberField(param_1->Object,local_48,(double *)&local_res10);
    bVar10 = bVar4;
    if (!bVar3) goto LAB_14ebfa522;
    TVar1 = this->Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->Type = Float;
    (this->Value).AsFloat = (float)(double)CONCAT44(local_res10._4_4_,(uint)local_res10);
LAB_14ebfa50a:
    this->CachedEstimatedMaxEscapedStringSize = 0;
    bVar10 = true;
  }
  else {
    pwVar6 = EOnlineKeyValuePairDataType::ToString(String);
    ::FString::FString(&local_58,pwVar6);
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == local_58.Data.ArrayNum) {
      if (local_68.Data.ArrayNum < 2) {
        bVar10 = true;
      }
      else {
        iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar10 = iVar5 == 0;
      }
    }
    else {
      bVar10 = local_68.Data.ArrayNum + local_58.Data.ArrayNum == 1;
    }
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    if (bVar10) {
      local_48[0].Size = 5;
      local_48[0].DataPtr = L"Value";
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      bVar10 = FJsonObject::TryGetStringField(param_1->Object,local_48,&local_58);
      if (bVar10) {
        TVar1 = this->Type;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
          operator_delete__((this->Value).AsTCHAR);
        }
        (this->Value).AsInt64 = 0;
        *(undefined8 *)((longlong)&this->Value + 8) = 0;
        this->CachedEstimatedMaxEscapedStringSize = 0;
        this->Type = String;
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          sVar7 = wcslen((wchar_t *)FVar9.Data);
          _Count = (size_t)(int)sVar7;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = _Count + 1;
          uVar8 = SUB168(ZEXT816(2) * auVar2,0);
          if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
            uVar8 = 0xffffffffffffffff;
          }
          pwVar6 = operator_new__(uVar8);
          (this->Value).AsTCHAR = pwVar6;
          if (0 < (int)sVar7) {
            wcsncpy(pwVar6,(wchar_t *)FVar9.Data,_Count);
            pwVar6[_Count] = L'\0';
            bVar4 = true;
            goto LAB_14ebfa43d;
          }
          *pwVar6 = L'\0';
        }
        bVar4 = true;
      }
    }
    else {
      pwVar6 = EOnlineKeyValuePairDataType::ToString(Bool);
      ::FString::FString((FString *)local_48,pwVar6);
      pwVar6 = local_48[0].DataPtr;
      if (local_68.Data.ArrayNum == (int)local_48[0]._8_8_) {
        if (local_68.Data.ArrayNum < 2) {
          bVar10 = true;
        }
        else {
          iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,local_48[0].DataPtr);
          bVar10 = iVar5 == 0;
        }
      }
      else {
        bVar10 = local_68.Data.ArrayNum + (int)local_48[0]._8_8_ == 1;
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
      if (bVar10) {
        local_48[0].Size = 5;
        local_48[0].DataPtr = L"Value";
        bVar3 = FJsonObject::TryGetBoolField(param_1->Object,local_48,(bool *)&local_res10);
        bVar10 = bVar4;
        if (!bVar3) goto LAB_14ebfa522;
        TVar1 = this->Type;
        if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
          operator_delete__((this->Value).AsTCHAR);
        }
        (this->Value).AsInt64 = 0;
        *(undefined8 *)((longlong)&this->Value + 8) = 0;
        this->Type = Bool;
        (this->Value).AsBool = local_res10._0_1_;
        goto LAB_14ebfa50a;
      }
      pwVar6 = EOnlineKeyValuePairDataType::ToString(Int64);
      ::FString::FString((FString *)local_48,pwVar6);
      pwVar6 = local_48[0].DataPtr;
      if (local_68.Data.ArrayNum == (int)local_48[0]._8_8_) {
        if (local_68.Data.ArrayNum < 2) {
          bVar10 = true;
        }
        else {
          iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,local_48[0].DataPtr);
          bVar10 = iVar5 == 0;
        }
      }
      else {
        bVar10 = local_68.Data.ArrayNum + (int)local_48[0]._8_8_ == 1;
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
      if (bVar10) {
        local_48[0].Size = 5;
        local_48[0].DataPtr = L"Value";
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        bVar10 = FJsonObject::TryGetStringField(param_1->Object,local_48,&local_58);
        if (bVar10) {
          this->Type = Int64;
LAB_14ebfa42e:
          bVar4 = FromString(this,&local_58);
        }
      }
      else {
        pwVar6 = EOnlineKeyValuePairDataType::ToString(UInt64);
        ::FString::FString((FString *)local_48,pwVar6);
        pwVar6 = local_48[0].DataPtr;
        if (local_68.Data.ArrayNum == (int)local_48[0]._8_8_) {
          if (local_68.Data.ArrayNum < 2) {
            bVar10 = true;
          }
          else {
            iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,local_48[0].DataPtr);
            bVar10 = iVar5 == 0;
          }
        }
        else {
          bVar10 = local_68.Data.ArrayNum + (int)local_48[0]._8_8_ == 1;
        }
        if (pwVar6 != (wchar_t *)0x0) {
          FMemory::Free(pwVar6);
        }
        if (!bVar10) {
          pwVar6 = EOnlineKeyValuePairDataType::ToString(Double);
          ::FString::FString((FString *)local_48,pwVar6);
          pwVar6 = local_48[0].DataPtr;
          if (local_68.Data.ArrayNum == (int)local_48[0]._8_8_) {
            if (local_68.Data.ArrayNum < 2) {
              bVar3 = true;
            }
            else {
              iVar5 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,local_48[0].DataPtr);
              bVar3 = iVar5 == 0;
            }
          }
          else {
            bVar3 = local_68.Data.ArrayNum + (int)local_48[0]._8_8_ == 1;
          }
          if (pwVar6 != (wchar_t *)0x0) {
            FMemory::Free(pwVar6);
          }
          bVar10 = bVar4;
          if (!bVar3) goto LAB_14ebfa522;
          local_48[0].Size = 5;
          local_48[0].DataPtr = L"Value";
          bVar3 = FJsonObject::TryGetNumberField(param_1->Object,local_48,(double *)&local_res10);
          if (!bVar3) goto LAB_14ebfa522;
          TVar1 = this->Type;
          if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
            operator_delete__((this->Value).AsTCHAR);
          }
          (this->Value).AsInt64 = 0;
          *(undefined8 *)((longlong)&this->Value + 8) = 0;
          this->Type = Double;
          (this->Value).AsInt64 = CONCAT44(local_res10._4_4_,(uint)local_res10);
          goto LAB_14ebfa50a;
        }
        local_48[0].Size = 5;
        local_48[0].DataPtr = L"Value";
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        bVar10 = FJsonObject::TryGetStringField(param_1->Object,local_48,&local_58);
        if (bVar10) {
          this->Type = UInt64;
          goto LAB_14ebfa42e;
        }
      }
    }
LAB_14ebfa43d:
    bVar10 = bVar4;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_14ebfa522:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// FromJsonValue @ 14ebfa6b0

bool __thiscall
FVariantData::FromJsonValue
          (FVariantData *this,FString *param_1,TSharedRef<FJsonValue,1> *param_2,FString *param_3)

{
  Type TVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  ulong64 uVar12;
  TSharedRef<FJsonObject,1> *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  bool bVar18;
  FScriptContainerElement *pFVar19;
  size_t sVar20;
  bool bVar21;
  bool local_res10 [8];
  FString local_d0;
  int local_c0;
  int local_bc;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  double local_78;
  long64 local_70;
  TSharedPtr<FJsonObject,1> *local_68;
  TSharedPtr<FJsonObject,1> local_60;
  TSharedRef<FJsonObject,1> local_50 [2];
  
  bVar18 = false;
  bVar21 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsrchr(pwVar14,L'_');
  pFVar16 = (param_1->Data).AllocatorInstance.Data;
  iVar10 = (param_1->Data).ArrayNum;
  pFVar19 = pFVar16 + (longlong)iVar10 * 2;
  do {
    if (pFVar19 == pFVar16) {
      return false;
    }
    pFVar19 = pFVar19 + -2;
  } while (*(short *)pFVar19 != 0x5f);
  iVar17 = (int)((longlong)pFVar19 - (longlong)pFVar16 >> 1);
  if (iVar17 == -1) {
    return false;
  }
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  if (iVar9 <= iVar17 + 1) {
    return false;
  }
  if ((iVar17 + 1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar9 = (param_1->Data).ArrayNum;
  pFVar19 = (param_1->Data).AllocatorInstance.Data;
  uVar2 = *(undefined2 *)(pFVar19 + ((longlong)iVar17 + 1) * 2);
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  if (iVar17 < iVar10) {
    iVar10 = iVar17;
  }
  iVar17 = 0;
  if (0 < iVar10) {
    iVar17 = iVar10;
  }
  pFVar16 = (FScriptContainerElement *)L"";
  if (iVar9 != 0) {
    pFVar16 = pFVar19;
  }
  ::FString::ConstructFromPtrSize(&local_d0,(wchar_t *)pFVar16,iVar17);
  if (param_3 != &local_d0) {
    pFVar19 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (param_3->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_d0.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_d0.Data.ArrayMax;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  switch(uVar2) {
  case 0x49:
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x58))(param_2->Object,&local_98);
    FVar15.Data = local_98.Data.AllocatorInstance.Data;
    bVar21 = bVar18;
    if (cVar8 != '\0') {
      this->Type = Int64;
      bVar21 = FromString(this,&local_98);
      FVar15.Data = local_98.Data.AllocatorInstance.Data;
    }
    goto LAB_14ebfabee;
  case 0x55:
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x58))(param_2->Object,&local_88);
    FVar15.Data = local_88.Data.AllocatorInstance.Data;
    bVar21 = bVar18;
    if (cVar8 != '\0') {
      this->Type = UInt64;
      bVar21 = FromString(this,&local_88);
      FVar15.Data = local_88.Data.AllocatorInstance.Data;
    }
    goto LAB_14ebfabee;
  case 0x62:
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x68))(param_2->Object,local_res10);
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      bVar21 = true;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = Bool;
      (this->Value).AsBool = local_res10[0];
    }
    break;
  case 100:
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x50))(param_2->Object,&local_70);
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      bVar21 = true;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      (this->Value).AsInt64 = local_70;
      this->Type = Double;
    }
    break;
  case 0x66:
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x50))(param_2->Object,&local_78);
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      bVar21 = true;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      (this->Value).AsFloat = (float)local_78;
      this->Type = Float;
    }
    break;
  case 0x69:
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x30))(param_2->Object,&local_c0);
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      bVar21 = true;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = Int32;
      (this->Value).AsInt = local_c0;
    }
    break;
  case 0x6a:
    local_a8 = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x88))(param_2->Object,&local_68);
    if (cVar8 == '\0') {
      cVar8 = (**(code **)(param_2->Object->_padding_ + 0x58))(param_2->Object,&local_a8);
      FVar15.Data = local_a8;
      bVar21 = bVar18;
      if (cVar8 != '\0') {
        TVar1 = this->Type;
        pFVar19 = (FScriptContainerElement *)L"";
        if ((int)local_a0 != 0) {
          pFVar19 = local_a8;
        }
        if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
          operator_delete__((this->Value).AsTCHAR);
        }
        (this->Value).AsInt64 = 0;
        *(undefined8 *)((longlong)&this->Value + 8) = 0;
        this->CachedEstimatedMaxEscapedStringSize = 0;
        this->Type = String;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          sVar11 = wcslen((wchar_t *)pFVar19);
          sVar20 = (size_t)(int)sVar11;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = sVar20 + 1;
          uVar12 = SUB168(ZEXT816(2) * auVar5,0);
          if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
            uVar12 = 0xffffffffffffffff;
          }
          pwVar14 = operator_new__(uVar12);
          (this->Value).AsTCHAR = pwVar14;
          if ((int)sVar11 < 1) {
            *pwVar14 = L'\0';
          }
          else {
            wcsncpy(pwVar14,(wchar_t *)pFVar19,sVar20);
            pwVar14[sVar20] = L'\0';
          }
        }
        this->Type = Json;
        local_60.Object = (FJsonObject *)0x0;
        local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        GetValue(this,&local_60);
        bVar21 = local_60.Object != (FJsonObject *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        FVar15.Data = local_a8;
      }
    }
    else {
      pTVar13 = TSharedPtr<FJsonObject,1>::ToSharedRef(local_68,local_50);
      SetValue(this,pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50[0].SharedReferenceCount.ReferenceController);
      FVar15.Data = local_a8;
      bVar21 = true;
    }
    goto LAB_14ebfabee;
  case 0x73:
    local_b8 = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x58))(param_2->Object,&local_b8);
    FVar15.Data = local_b8;
    bVar21 = bVar18;
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      pFVar19 = (FScriptContainerElement *)L"";
      if ((int)local_b0 != 0) {
        pFVar19 = local_b8;
      }
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = String;
      if (pFVar19 != (FScriptContainerElement *)0x0) {
        sVar11 = wcslen((wchar_t *)pFVar19);
        sVar20 = (size_t)(int)sVar11;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = sVar20 + 1;
        uVar12 = SUB168(ZEXT816(2) * auVar4,0);
        if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pwVar14 = operator_new__(uVar12);
        (this->Value).AsTCHAR = pwVar14;
        if (0 < (int)sVar11) {
          wcsncpy(pwVar14,(wchar_t *)pFVar19,sVar20);
          pwVar14[sVar20] = L'\0';
          FVar15.Data = local_b8;
          bVar21 = true;
          goto LAB_14ebfabee;
        }
        *pwVar14 = L'\0';
      }
      FVar15.Data = local_b8;
      bVar21 = true;
    }
LAB_14ebfabee:
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    break;
  case 0x75:
    cVar8 = (**(code **)(param_2->Object->_padding_ + 0x10))(param_2->Object,&local_bc);
    if (cVar8 != '\0') {
      TVar1 = this->Type;
      if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
        operator_delete__((this->Value).AsTCHAR);
      }
      bVar21 = true;
      (this->Value).AsInt64 = 0;
      *(undefined8 *)((longlong)&this->Value + 8) = 0;
      this->CachedEstimatedMaxEscapedStringSize = 0;
      this->Type = UInt32;
      (this->Value).AsInt = local_bc;
    }
  }
  return bVar21;
}

// FromString @ 14ebfac90

bool __thiscall FVariantData::FromString(FVariantData *this,FString *param_1)

{
  Type TVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t sVar6;
  ulong64 uVar7;
  wchar_t *_Dest;
  wchar_t *pwVar8;
  size_t _Count;
  bool bVar9;
  double dVar10;
  FString local_28;
  
  TVar1 = this->Type;
  switch(TVar1) {
  case Int32:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = _wtoi(pwVar8);
    SetValue(this,iVar3);
    return true;
  case UInt32:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar5 = _wcstoui64(pwVar8,(wchar_t **)0x0,10);
    SetValue(this,(uint)uVar5);
    return true;
  case Int64:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    lVar4 = _wtoi64(pwVar8);
    TVar1 = this->Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->CachedEstimatedMaxEscapedStringSize = 0;
    this->Type = Int64;
    (this->Value).AsInt64 = lVar4;
    return true;
  case UInt64:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar5 = _wcstoui64(pwVar8,(wchar_t **)0x0,10);
    TVar1 = this->Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->CachedEstimatedMaxEscapedStringSize = 0;
    this->Type = UInt64;
    (this->Value).AsUInt64 = uVar5;
    return true;
  case Double:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    dVar10 = wcstod(pwVar8,(wchar_t **)0x0);
    SetValue(this,dVar10);
    return true;
  case String:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->CachedEstimatedMaxEscapedStringSize = 0;
    this->Type = String;
    if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(pwVar8);
      _Count = (size_t)(int)sVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = _Count + 1;
      uVar7 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      _Dest = operator_new__(uVar7);
      (this->Value).AsTCHAR = _Dest;
      if ((int)sVar6 < 1) {
        *_Dest = L'\0';
      }
      else {
        wcsncpy(_Dest,pwVar8,_Count);
        _Dest[_Count] = L'\0';
      }
    }
    break;
  case Float:
    if ((param_1->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    dVar10 = _wtof(pwVar8);
    SetValue(this,(float)dVar10);
    return true;
  default:
    return false;
  case Bool:
    ::FString::FString(&local_28,L"true");
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar3 == local_28.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar9 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar9 = iVar3 == 0;
      }
    }
    else {
      bVar9 = iVar3 + local_28.Data.ArrayNum == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    TVar1 = this->Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((this->Value).AsTCHAR);
    }
    (this->Value).AsInt64 = 0;
    *(undefined8 *)((longlong)&this->Value + 8) = 0;
    this->CachedEstimatedMaxEscapedStringSize = 0;
    this->Type = Bool;
    (this->Value).AsBool = bVar9;
    return true;
  }
  return true;
}

// GetEstimatedMaxEscapedStringSize @ 14ebffe50

int __thiscall FVariantData::GetEstimatedMaxEscapedStringSize(FVariantData *this)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar5 = this->CachedEstimatedMaxEscapedStringSize;
  if (iVar5 == 0) {
    switch(this->Type) {
    default:
      this->CachedEstimatedMaxEscapedStringSize = 0;
      iVar5 = 0;
      break;
    case Int32:
      iVar5 = GetStringDigitCount((longlong)(this->Value).AsInt);
      this->CachedEstimatedMaxEscapedStringSize = iVar5;
      return iVar5;
    case UInt32:
      fVar7 = logf((float)(this->Value).AsUInt);
      iVar5 = -(int)((longlong)
                     ROUND(__real_bfe0000000000000 -
                           ((double)(fVar7 * __real_3ede5bd8) + (double)(fVar7 * __real_3ede5bd8)))
                    >> 1);
      this->CachedEstimatedMaxEscapedStringSize = iVar5;
      return iVar5;
    case Int64:
      iVar5 = GetStringDigitCount((this->Value).AsInt64);
      this->CachedEstimatedMaxEscapedStringSize = iVar5;
      return iVar5;
    case UInt64:
      fVar7 = logf((float)(ulonglong)(this->Value).AsInt64);
      iVar5 = -(int)((longlong)
                     ROUND(__real_bfe0000000000000 -
                           ((double)(fVar7 * __real_3ede5bd8) + (double)(fVar7 * __real_3ede5bd8)))
                    >> 1);
      this->CachedEstimatedMaxEscapedStringSize = iVar5;
      return iVar5;
    case Double:
      this->CachedEstimatedMaxEscapedStringSize = 0x435;
      return 0x435;
    case String:
    case Json:
      if (((this->Value).AsInt64 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value.AsTCHAR",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineKeyValuePair.cpp"
                             ,0x248,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pwVar2 = (this->Value).AsTCHAR;
      iVar5 = this->CachedEstimatedMaxEscapedStringSize;
      wVar1 = *pwVar2;
      while (wVar1 != L'\0') {
        iVar6 = 0;
        pwVar2 = pwVar2 + 1;
        if (wVar1 == L'\\') {
          iVar6 = 2;
        }
        iVar5 = iVar5 + iVar6 + (wVar1 == L'\"') + 1;
        this->CachedEstimatedMaxEscapedStringSize = iVar5;
        wVar1 = *pwVar2;
      }
      return iVar5;
    case Float:
      this->CachedEstimatedMaxEscapedStringSize = 0x98;
      return 0x98;
    case Bool:
      this->CachedEstimatedMaxEscapedStringSize = 5;
      return 5;
    }
  }
  return iVar5;
}

// GetTypeSuffix @ 14ec03500

FString * __thiscall FVariantData::GetTypeSuffix(FVariantData *this,FString *__return_storage_ptr__)

{
  switch(this->Type) {
  case Int32:
    ::FString::FString(__return_storage_ptr__,L"_i");
    return __return_storage_ptr__;
  case UInt32:
    ::FString::FString(__return_storage_ptr__,L"_u");
    return __return_storage_ptr__;
  case Int64:
    ::FString::FString(__return_storage_ptr__,L"_I");
    return __return_storage_ptr__;
  case UInt64:
    ::FString::FString(__return_storage_ptr__,L"_U");
    return __return_storage_ptr__;
  case Double:
    ::FString::FString(__return_storage_ptr__,L"_d");
    return __return_storage_ptr__;
  case String:
    ::FString::FString(__return_storage_ptr__,L"_s");
    return __return_storage_ptr__;
  case Float:
    ::FString::FString(__return_storage_ptr__,L"_f");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  case Bool:
    ::FString::FString(__return_storage_ptr__,L"_b");
    return __return_storage_ptr__;
  case Json:
    ::FString::FString(__return_storage_ptr__,L"_j");
    return __return_storage_ptr__;
  }
}

// GetValue @ 14ec05070

void __thiscall FVariantData::GetValue(FVariantData *this,int *param_1)

{
  if (this->Type == Int32) {
    *param_1 = (this->Value).AsInt;
    return;
  }
  *param_1 = 0;
  return;
}

// GetValue @ 14ec05090

void __thiscall FVariantData::GetValue(FVariantData *this,uint *param_1)

{
  if (this->Type == UInt32) {
    *param_1 = (this->Value).AsInt;
    return;
  }
  *param_1 = 0;
  return;
}

// GetValue @ 14ec050b0

void __thiscall FVariantData::GetValue(FVariantData *this,uint *param_1,uchar **param_2)

{
  uint uVar1;
  uchar *_Dst;
  
  if (this->Type == Blob) {
    uVar1 = (this->Value).AsBlob.BlobSize;
    *param_1 = uVar1;
    _Dst = operator_new__((ulonglong)uVar1);
    *param_2 = _Dst;
    memcpy(_Dst,(this->Value).AsTCHAR,(ulonglong)*param_1);
    return;
  }
  *param_1 = 0;
  *param_2 = (uchar *)0x0;
  return;
}

// GetValue @ 14ec05120

void __thiscall FVariantData::GetValue(FVariantData *this,float *param_1)

{
  if (this->Type == Float) {
    *param_1 = (float)(this->Value).AsInt;
    return;
  }
  *param_1 = 0.0;
  return;
}

// GetValue @ 14ec05140

void __thiscall FVariantData::GetValue(FVariantData *this,double *param_1)

{
  if (this->Type == Double) {
    *param_1 = (double)(this->Value).AsInt64;
    return;
  }
  *param_1 = 0.0;
  return;
}

// GetValue @ 14ec05160

void __thiscall
FVariantData::GetValue
          (FVariantData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (this->Type != Blob) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    return;
  }
  uVar2 = (this->Value).AsBlob.BlobSize;
  if (-1 < (int)uVar2) {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&param_1->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(this->Value).AsBlob.BlobSize,&param_1->AllocatorInstance,&param_1->ArrayNum,
               piVar1);
    memcpy((param_1->AllocatorInstance).Data,(this->Value).AsTCHAR,
           (ulonglong)(this->Value).AsBlob.BlobSize);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetValue @ 14ec05240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVariantData::GetValue
          (FVariantData *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  FString local_68;
  TSharedRef<TJsonReader<wchar_t>,1> local_58;
  StackState local_48;
  
  if (this->Type != Json) {
    return;
  }
  ::FString::FString(&local_68,(this->Value).AsTCHAR);
  TJsonReaderFactory<wchar_t>::Create(&local_58,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_58.Object,&local_48,None);
  if (bVar1) {
    bVar1 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar1) goto LAB_14ec053a3;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
  }
  if (2 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_68,L"Invalid serialized json in FVariantData: %s, Error: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
LAB_14ec053a3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// GetValue @ 14ec053d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVariantData::GetValue(FVariantData *this,TSharedPtr<FJsonObject,1> *param_1)

{
  bool bVar1;
  TSharedRef<FJsonObject,1> *pTVar2;
  TSharedPtr<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonObject,1> local_28;
  TSharedRef<TJsonReader<wchar_t>,1> local_18;
  
  if (this->Type == Json) {
    ::FString::FString((FString *)&local_28,(this->Value).AsTCHAR);
    TJsonReaderFactory<wchar_t>::Create(&local_18,(FString *)&local_28);
    if (local_28.Object != (FJsonObject *)0x0) {
      FMemory::Free(local_28.Object);
    }
    bVar1 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      (&local_18,param_1,None);
    if (!bVar1) {
      pTVar2 = MakeShared<FJsonObject,1>(&local_28);
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar2->SharedReferenceCount).ReferenceController;
      local_48.Object = pTVar2->Object;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_1 != &local_48) {
        param_1->Object = local_48.Object;
        local_48.Object = (FJsonObject *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_1->SharedReferenceCount,&local_48.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                          local_28.SharedReferenceCount.ReferenceController._0_4_));
      if (2 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl((FString *)&local_28,L"Invalid serialized json in FVariantData: %s");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_28.Object != (FJsonObject *)0x0) {
          FMemory::Free(local_28.Object);
        }
      }
    }
  }
  else {
    pTVar2 = MakeShared<FJsonObject,1>((TSharedRef<FJsonObject,1> *)&local_18);
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    local_38.Object = pTVar2->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1 != &local_38) {
      param_1->Object = local_38.Object;
      local_38.Object = (FJsonObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetValue @ 14ec05550

void __thiscall FVariantData::GetValue(FVariantData *this,FString *param_1)

{
  if (((this->Type == String) || (this->Type == Json)) && ((this->Value).AsTCHAR != (wchar_t *)0x0))
  {
    ::FString::operator=(param_1,(this->Value).AsTCHAR);
    return;
  }
  ::FString::Reset(param_1,0);
  return;
}

// GetValue @ 14ec05590

void __thiscall FVariantData::GetValue(FVariantData *this,long64 *param_1)

{
  if (this->Type == Int64) {
    *param_1 = (this->Value).AsInt64;
    return;
  }
  *param_1 = 0;
  return;
}

// GetValue @ 14ec055b0

void __thiscall FVariantData::GetValue(FVariantData *this,ulong64 *param_1)

{
  if (this->Type == UInt64) {
    *param_1 = (this->Value).AsInt64;
    return;
  }
  *param_1 = 0;
  return;
}

// GetValue @ 14ec055d0

void __thiscall FVariantData::GetValue(FVariantData *this,bool *param_1)

{
  if (this->Type == Bool) {
    *param_1 = (this->Value).AsBool;
    return;
  }
  *param_1 = false;
  return;
}

// Increment @ 14ec09600

void __thiscall FVariantData::Increment(FVariantData *this)

{
  Type TVar1;
  
  TVar1 = this->Type;
  switch(TVar1) {
  case Int32:
    if (TVar1 == Int32) {
      (this->Value).AsInt = (this->Value).AsInt + 1;
      return;
    }
    break;
  case UInt32:
    if (TVar1 == UInt32) {
      (this->Value).AsInt = (this->Value).AsInt + 1;
      return;
    }
    break;
  case Int64:
    if (TVar1 == Int64) {
      (this->Value).AsTCHAR = (wchar_t *)((this->Value).AsInt64 + 1);
      return;
    }
    break;
  case UInt64:
    if (TVar1 == UInt64) {
      (this->Value).AsTCHAR = (wchar_t *)((this->Value).AsInt64 + 1);
      return;
    }
    break;
  case Double:
    if (TVar1 == Double) {
      (this->Value).AsDouble = (this->Value).AsDouble + __real_3ff0000000000000;
      return;
    }
    break;
  case Float:
    if (TVar1 == Float) {
      (this->Value).AsFloat = (this->Value).AsFloat + __real_3f800000;
    }
  }
  return;
}

// SetJsonValueFromString @ 14ec121f0

void __thiscall FVariantData::SetJsonValueFromString(FVariantData *this,FString *param_1)

{
  if ((param_1->Data).ArrayNum != 0) {
    SetValue(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    this->Type = Json;
    return;
  }
  SetValue(this,L"");
  this->Type = Json;
  return;
}

// SetValue @ 14ec127f0

void __thiscall
FVariantData::SetValue
          (FVariantData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  SetValue(this,param_1->ArrayNum,(uchar *)(param_1->AllocatorInstance).Data);
  return;
}

// SetValue @ 14ec12810

void __thiscall FVariantData::SetValue(FVariantData *this,TSharedRef<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ForAnyElementType FVar2;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_18,&local_38,0);
  local_28.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,&local_18,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  SetValue(this,(wchar_t *)FVar2.Data);
  this->Type = Json;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SetValue @ 14ec128c0

void __thiscall FVariantData::SetValue(FVariantData *this,FString *param_1)

{
  if ((param_1->Data).ArrayNum != 0) {
    SetValue(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return;
  }
  SetValue(this,L"");
  return;
}

// SetValue @ 14ec128e0

void __thiscall FVariantData::SetValue(FVariantData *this,int param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = Int32;
  (this->Value).AsInt = param_1;
  return;
}

// SetValue @ 14ec12930

void __thiscall FVariantData::SetValue(FVariantData *this,uint param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = UInt32;
  (this->Value).AsUInt = param_1;
  return;
}

// SetValue @ 14ec12980

void __thiscall FVariantData::SetValue(FVariantData *this,uint param_1,uchar *param_2)

{
  Type TVar1;
  wchar_t *_Dst;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = Blob;
  if (param_1 != 0) {
    (this->Value).AsBlob.BlobSize = param_1;
    _Dst = operator_new__((ulonglong)param_1);
    (this->Value).AsTCHAR = _Dst;
    memcpy(_Dst,param_2,(ulonglong)param_1);
  }
  return;
}

// SetValue @ 14ec12a00

void __thiscall FVariantData::SetValue(FVariantData *this,float param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  (this->Value).AsFloat = param_1;
  this->Type = Float;
  return;
}

// SetValue @ 14ec12a50

void __thiscall FVariantData::SetValue(FVariantData *this,double param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  (this->Value).AsDouble = param_1;
  this->Type = Double;
  return;
}

// SetValue @ 14ec12aa0

void __thiscall FVariantData::SetValue(FVariantData *this,wchar_t *param_1)

{
  Type TVar1;
  undefined1 auVar2 [16];
  size_t sVar3;
  ulong64 uVar4;
  wchar_t *_Dest;
  size_t _Count;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = String;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    _Count = (size_t)(int)sVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = _Count + 1;
    uVar4 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    _Dest = operator_new__(uVar4);
    (this->Value).AsTCHAR = _Dest;
    if ((int)sVar3 < 1) {
      *_Dest = L'\0';
    }
    else {
      wcsncpy(_Dest,param_1,_Count);
      _Dest[_Count] = L'\0';
    }
  }
  return;
}

// SetValue @ 14ec12b70

void __thiscall FVariantData::SetValue(FVariantData *this,long64 param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = Int64;
  (this->Value).AsInt64 = param_1;
  return;
}

// SetValue @ 14ec12bc0

void __thiscall FVariantData::SetValue(FVariantData *this,ulong64 param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = UInt64;
  (this->Value).AsUInt64 = param_1;
  return;
}

// SetValue @ 14ec12c10

void __thiscall FVariantData::SetValue(FVariantData *this,bool param_1)

{
  Type TVar1;
  
  TVar1 = this->Type;
  if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
    operator_delete__((this->Value).AsTCHAR);
  }
  (this->Value).AsInt64 = 0;
  *(undefined8 *)((longlong)&this->Value + 8) = 0;
  this->CachedEstimatedMaxEscapedStringSize = 0;
  this->Type = Bool;
  (this->Value).AsBool = param_1;
  return;
}

// ToJson @ 14ec15910

TSharedRef<FJsonObject,1> * __thiscall
FVariantData::ToJson(FVariantData *this,TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  Type TVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FJsonObject,1> *pTVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  TReferenceControllerBase<1> *pTVar12;
  
  pTVar5 = ::operator_new(0x50);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  iVar11 = 0;
  pTVar10 = pTVar12;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar5->_padding_ = 0;
    pTVar5->SharedReferenceCount = (atomic<int>)0x0;
    pTVar5->WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar5[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[3]._padding_ + 4) = 0;
    pTVar5[4]._padding_ = 0;
    pTVar10 = pTVar5;
  }
  __return_storage_ptr__->Object = (FJsonObject *)pTVar10;
  pTVar6 = ::operator_new(0x18);
  pTVar5 = pTVar12;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    *(undefined ***)&pTVar6->_padding_ =
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pTVar10;
    pTVar5 = pTVar6;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
    return pTVar7;
  }
  pFVar2 = __return_storage_ptr__->Object;
  pwVar8 = EOnlineKeyValuePairDataType::ToString(this->Type);
  ::FString::FString(&local_f8,L"Type");
  pFVar9 = ::FString::FString(&local_58,pwVar8);
  FJsonObject::SetStringField(pFVar2,&local_f8,pFVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  TVar1 = this->Type;
  switch(TVar1) {
  default:
    pFVar2 = __return_storage_ptr__->Object;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    ::FString::FString(&local_68,L"Value");
    FJsonObject::SetStringField(pFVar2,&local_68,&local_108);
    local_a8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    }
    break;
  case Int32:
    if (TVar1 == Int32) {
      iVar11 = (this->Value).AsInt;
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_e8,L"Value");
    FJsonObject::SetNumberField(pFVar2,&local_e8,(double)iVar11);
    local_a8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    break;
  case UInt32:
    if (TVar1 == UInt32) {
      pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)(this->Value).AsUInt;
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_d8,L"Value");
    FJsonObject::SetNumberField(pFVar2,&local_d8,(double)(longlong)pTVar12);
    local_a8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    break;
  case Int64:
    pFVar2 = __return_storage_ptr__->Object;
    pFVar9 = ToString(this,&local_48);
    ::FString::FString(&local_98,L"Value");
    FJsonObject::SetStringField(pFVar2,&local_98,pFVar9);
    local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    break;
  case UInt64:
    pFVar2 = __return_storage_ptr__->Object;
    pFVar9 = ToString(this,local_38);
    ::FString::FString(&local_88,L"Value");
    FJsonObject::SetStringField(pFVar2,&local_88,pFVar9);
    local_a8.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_38[0].Data.AllocatorInstance.Data;
    }
    break;
  case Double:
    if (TVar1 == Double) {
      uVar14 = (undefined4)(this->Value).AsInt64;
      uVar15 = (undefined4)((ulonglong)(this->Value).AsInt64 >> 0x20);
    }
    else {
      uVar14 = 0;
      uVar15 = 0;
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_78,L"Value");
    FJsonObject::SetNumberField(pFVar2,&local_78,(double)CONCAT44(uVar15,uVar14));
    local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    break;
  case String:
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    if ((TVar1 == String) && ((this->Value).AsTCHAR != (wchar_t *)0x0)) {
      ::FString::operator=(&local_118,(this->Value).AsTCHAR);
    }
    else {
      ::FString::Reset(&local_118,0);
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_b8,L"Value");
    FJsonObject::SetStringField(pFVar2,&local_b8,&local_118);
    local_a8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
    break;
  case Float:
    if (TVar1 == Float) {
      fVar13 = (this->Value).AsFloat;
    }
    else {
      fVar13 = 0.0;
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_c8,L"Value");
    FJsonObject::SetNumberField(pFVar2,&local_c8,(double)fVar13);
    local_a8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    break;
  case Bool:
    if (TVar1 == Bool) {
      bVar4 = (this->Value).AsBool;
    }
    else {
      bVar4 = false;
    }
    pFVar2 = __return_storage_ptr__->Object;
    ::FString::FString(&local_a8,L"Value");
    FJsonObject::SetBoolField(pFVar2,&local_a8,bVar4);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14ec17ed0

FString * __thiscall FVariantData::ToString(FVariantData *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  switch(this->Type) {
  case Int32:
    break;
  case UInt32:
    break;
  case Int64:
    goto LAB_14ec17fa5;
  case UInt64:
LAB_14ec17fa5:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
    return __return_storage_ptr__;
  case Double:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
    return __return_storage_ptr__;
  case String:
  case Json:
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if (((this->Type - String & 0xfb) == 0) && ((this->Value).AsTCHAR != (wchar_t *)0x0)) {
      ::FString::operator=(&local_18,(this->Value).AsTCHAR);
    }
    else {
      ::FString::Reset(&local_18,0);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  case Float:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
    return __return_storage_ptr__;
  case Blob:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d byte blob");
    return __return_storage_ptr__;
  case Bool:
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

