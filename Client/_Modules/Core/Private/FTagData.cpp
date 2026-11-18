// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 34

// FTagData @ 14167aa70

FTagData * __thiscall
UE::LLMPrivate::FTagData::FTagData
          (FTagData *this,FName param_1,ELLMTagSet param_2,FName param_3,FName param_4,FName param_5
          ,FName param_6,bool param_7,ELLMTag param_8,ETagReferenceSource param_9)

{
  (this->field2_0x10).ParentName = param_4;
  this->StatName = param_5;
  this->SummaryStatName = param_6;
  this->EnumTag = param_8;
  this->ReferenceSource = param_9;
  this->bHasEnumTag = param_7;
  this->Name = param_1;
  this->DisplayName = param_3;
  this->TagSet = param_2;
  this->bIsFinishConstructed = false;
  this->bParentIsName = true;
  this->bIsReportable = true;
  return this;
}

// FTagData @ 14167aad0

FTagData * __thiscall
UE::LLMPrivate::FTagData::FTagData
          (FTagData *this,FName param_1,ELLMTagSet param_2,FName param_3,FTagData *param_4,
          FName param_5,FName param_6,bool param_7,ELLMTag param_8,ETagReferenceSource param_9)

{
  this->StatName = param_5;
  this->SummaryStatName = param_6;
  this->EnumTag = param_8;
  this->ReferenceSource = param_9;
  this->bHasEnumTag = param_7;
  (this->field2_0x10).Parent = param_4;
  this->Name = param_1;
  this->DisplayName = param_3;
  this->TagSet = param_2;
  this->bIsFinishConstructed = false;
  this->bParentIsName = false;
  this->bIsReportable = true;
  return this;
}

// FTagData @ 14167ab30

FTagData * __thiscall UE::LLMPrivate::FTagData::FTagData(FTagData *this,ELLMTag param_1)

{
  this->EnumTag = param_1;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  (this->field2_0x10).Parent = (FTagData *)0x0;
  (this->StatName).ComparisonIndex = 0;
  (this->StatName).Number = 0;
  (this->SummaryStatName).ComparisonIndex = 0;
  (this->SummaryStatName).Number = 0;
  this->ReferenceSource = EnumTag;
  this->TagSet = None;
  this->bIsFinishConstructed = false;
  this->bParentIsName = true;
  this->bHasEnumTag = true;
  this->bIsReportable = true;
  return this;
}

// ~FTagData @ 14167c570

void __thiscall UE::LLMPrivate::FTagData::~FTagData(FTagData *this)

{
  if (this->bParentIsName != false) {
    this->bParentIsName = false;
  }
  return;
}

// AppendDisplayPath @ 1416820f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::LLMPrivate::FTagData::AppendDisplayPath
          (FTagData *this,TStringBuilderBase<wchar_t> *param_1,int param_2)

{
  FTagData *this_00;
  wchar_t *pwVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  int iVar6;
  undefined1 auStack_888 [32];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_888;
  this_00 = (this->field2_0x10).Parent;
  if ((this_00 != (FTagData *)0x0) &&
     ((this_00->bHasEnumTag == false || (this_00->EnumTag != CustomName)))) {
    AppendDisplayPath(this_00,param_1,param_2);
    if ((-1 < param_2) &&
       (param_2 <= (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) + 1)) {
      return;
    }
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,&u__,2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar3 + 2);
  }
  if (-1 < param_2) {
    iVar6 = param_2 - (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
    uVar2 = ::FName::GetStringLength(&this->DisplayName);
    if (iVar6 < (int)(uVar2 + 1)) {
      if (iVar6 < 2) {
        return;
      }
      local_868.Base = local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_868.CurPos = local_848;
      local_868.End = local_32;
      ::FName::AppendString(&this->DisplayName,&local_868);
      pwVar1 = local_868.Base;
      iVar4 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
      if (iVar6 + -1 < iVar4) {
        iVar4 = iVar6 + -1;
      }
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      uVar5 = (ulong64)iVar6;
      if (param_1->End < param_1->CurPos + uVar5) {
        TStringBuilderBase<wchar_t>::Extend(param_1,uVar5);
      }
      if (iVar6 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar1,uVar5 * 2);
        param_1->CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return;
    }
  }
  ::FName::AppendString(&this->DisplayName,param_1);
  return;
}

// GetContainingEnum @ 1416992a0

ELLMTag __thiscall UE::LLMPrivate::FTagData::GetContainingEnum(FTagData *this)

{
  FTagData *this_00;
  
  this_00 = this;
  do {
    if (this_00->bHasEnumTag != false) {
      return this_00->EnumTag;
    }
    this_00 = GetParent(this_00);
  } while (this_00 != (FTagData *)0x0);
  HandleAssert(true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nTagData is not a descendent of an ELLMTag TagData. All TagDatas must be descendents of ELLMTag::CustomName if they are not descendets of any other ELLMTag\r\n"
              );
  FWindowsPlatformMisc::RaiseException(1);
  return this->EnumTag;
}

// GetContainingEnumTagData @ 141699310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTagData * __thiscall UE::LLMPrivate::FTagData::GetContainingEnumTagData(FTagData *this)

{
  FTagData *this_00;
  undefined1 auStack_888 [32];
  undefined4 local_868;
  wchar_t *local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  this_00 = this;
  do {
    if (this_00->bHasEnumTag != false) {
      return this_00;
    }
    if (this_00->bParentIsName != false) {
      local_858.Base = local_838;
      local_858.bIsDynamic = false;
      local_858.bIsExternal = false;
      local_858.CurPos = local_838;
      local_858.End = local_22;
      ::FName::AppendString(&this_00->Name,&local_858);
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      *local_858.CurPos = L'\0';
      local_860 = local_858.Base;
      local_868 = 0x11f6;
      HandleAssert(true,
                   L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetParent called on TagData %s before SetParent was called\r\n"
                  );
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
      FWindowsPlatformMisc::RaiseException(1);
    }
    this_00 = (this_00->field2_0x10).Parent;
  } while (this_00 != (FTagData *)0x0);
  local_868 = 0x1232;
  HandleAssert(true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nTagData is not a descendent of an ELLMTag TagData. All TagDatas must be descendents of ELLMTag::CustomName if they are not descendets of any other ELLMTag\r\n"
              );
  FWindowsPlatformMisc::RaiseException(1);
  return this;
}

// GetDisplayName @ 1416995a0

FName __thiscall UE::LLMPrivate::FTagData::GetDisplayName(FTagData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DisplayName;
  return in_RDX;
}

// GetDisplayPath @ 1416995c0

void __thiscall
UE::LLMPrivate::FTagData::GetDisplayPath
          (FTagData *this,TStringBuilderBase<wchar_t> *param_1,int param_2)

{
  param_1->CurPos = param_1->Base;
  AppendDisplayPath(this,param_1,param_2);
  return;
}

// GetEnumTag @ 1416995e0

ELLMTag __thiscall UE::LLMPrivate::FTagData::GetEnumTag(FTagData *this)

{
  return this->EnumTag;
}

// GetIndex @ 141699910

int __thiscall UE::LLMPrivate::FTagData::GetIndex(FTagData *this)

{
  return this->Index;
}

// GetName @ 141699a70

FName __thiscall UE::LLMPrivate::FTagData::GetName(FTagData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetParent @ 14169aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTagData * __thiscall UE::LLMPrivate::FTagData::GetParent(FTagData *this)

{
  FTagData *pFVar1;
  undefined1 auStack_888 [32];
  undefined4 local_868;
  wchar_t *local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  if (this->bParentIsName == false) {
    pFVar1 = (this->field2_0x10).Parent;
  }
  else {
    local_858.Base = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    ::FName::AppendString(&this->Name,&local_858);
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    local_860 = local_858.Base;
    local_868 = 0x11f6;
    HandleAssert(true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetParent called on TagData %s before SetParent was called\r\n"
                );
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    FWindowsPlatformMisc::RaiseException(1);
    pFVar1 = (this->field2_0x10).Parent;
  }
  return pFVar1;
}

// GetParentName @ 14169ab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall UE::LLMPrivate::FTagData::GetParentName(FTagData *this)

{
  FName in_RDX;
  undefined1 auStack_888 [32];
  undefined4 local_868;
  wchar_t *local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  if (this->bParentIsName == false) {
    local_858.Base = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    ::FName::AppendString(&this->Name,&local_858);
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    local_860 = local_858.Base;
    local_868 = 0x11fd;
    HandleAssert(true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetParentName called on TagData %s after SetParent was called\r\n"
                );
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    FWindowsPlatformMisc::RaiseException(1);
  }
  *(FTagData_u_16 *)in_RDX = this->field2_0x10;
  return in_RDX;
}

// GetParentNameSafeBeforeFinishConstruct @ 14169ac40

FName __thiscall UE::LLMPrivate::FTagData::GetParentNameSafeBeforeFinishConstruct(FTagData *this)

{
  FTagData *pFVar1;
  FName in_RDX;
  
  pFVar1 = (this->field2_0x10).Parent;
  if (this->bParentIsName != false) {
    *(FTagData **)in_RDX = pFVar1;
    return in_RDX;
  }
  if (pFVar1 != (FTagData *)0x0) {
    *(FName *)in_RDX = pFVar1->Name;
    return in_RDX;
  }
  *(longlong *)in_RDX = 0;
  return in_RDX;
}

// GetReferenceSource @ 14169ac70

ETagReferenceSource __thiscall UE::LLMPrivate::FTagData::GetReferenceSource(FTagData *this)

{
  return this->ReferenceSource;
}

// GetStatName @ 1416a02a0

FName __thiscall UE::LLMPrivate::FTagData::GetStatName(FTagData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->StatName;
  return in_RDX;
}

// GetSummaryStatName @ 1416a03a0

FName __thiscall UE::LLMPrivate::FTagData::GetSummaryStatName(FTagData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->SummaryStatName;
  return in_RDX;
}

// GetTagSet @ 1416a0b30

ELLMTagSet __thiscall UE::LLMPrivate::FTagData::GetTagSet(FTagData *this)

{
  return this->TagSet;
}

// HasEnumTag @ 1416a2120

bool __thiscall UE::LLMPrivate::FTagData::HasEnumTag(FTagData *this)

{
  return this->bHasEnumTag;
}

// IsFinishConstructed @ 1416b0b60

bool __thiscall UE::LLMPrivate::FTagData::IsFinishConstructed(FTagData *this)

{
  return this->bIsFinishConstructed;
}

// IsParentConstructed @ 1416b0be0

bool __thiscall UE::LLMPrivate::FTagData::IsParentConstructed(FTagData *this)

{
  return this->bParentIsName == false;
}

// IsReportable @ 1416b0c80

bool __thiscall UE::LLMPrivate::FTagData::IsReportable(FTagData *this)

{
  if ((this->bIsReportable != false) && (this->TagSet == None)) {
    return true;
  }
  return false;
}

// IsStatsReportable @ 1416b0d00

bool __thiscall UE::LLMPrivate::FTagData::IsStatsReportable(FTagData *this)

{
  return this->bIsReportable;
}

// IsUsedAsDisplayParent @ 1416b0e70

bool __thiscall UE::LLMPrivate::FTagData::IsUsedAsDisplayParent(FTagData *this)

{
  if ((this->bHasEnumTag != false) && (this->EnumTag == CustomName)) {
    return false;
  }
  return true;
}

// SetDisplayName @ 1416c0380

void __thiscall UE::LLMPrivate::FTagData::SetDisplayName(FTagData *this,FName param_1)

{
  this->DisplayName = param_1;
  return;
}

// SetFinishConstructed @ 1416c0390

void __thiscall UE::LLMPrivate::FTagData::SetFinishConstructed(FTagData *this)

{
  this->bIsFinishConstructed = true;
  return;
}

// SetIndex @ 1416c03a0

void __thiscall UE::LLMPrivate::FTagData::SetIndex(FTagData *this,int param_1)

{
  this->Index = param_1;
  return;
}

// SetIsReportable @ 1416c03b0

void __thiscall UE::LLMPrivate::FTagData::SetIsReportable(FTagData *this,bool param_1)

{
  this->bIsReportable = param_1;
  return;
}

// SetName @ 1416c04b0

void __thiscall UE::LLMPrivate::FTagData::SetName(FTagData *this,FName param_1)

{
  this->Name = param_1;
  return;
}

// SetParent @ 1416c0790

void __thiscall UE::LLMPrivate::FTagData::SetParent(FTagData *this,FTagData *param_1)

{
  (this->field2_0x10).Parent = param_1;
  if (this->bParentIsName != false) {
    this->bParentIsName = false;
  }
  return;
}

// SetParentName @ 1416c07b0

void __thiscall UE::LLMPrivate::FTagData::SetParentName(FTagData *this,FName param_1)

{
  if (this->bParentIsName == false) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
    (this->field2_0x10).ParentName = param_1;
    return;
  }
  (this->field2_0x10).ParentName = param_1;
  return;
}

// SetStatName @ 1416c0940

void __thiscall UE::LLMPrivate::FTagData::SetStatName(FTagData *this,FName param_1)

{
  this->StatName = param_1;
  return;
}

// SetSummaryStatName @ 1416c0950

void __thiscall UE::LLMPrivate::FTagData::SetSummaryStatName(FTagData *this,FName param_1)

{
  this->SummaryStatName = param_1;
  return;
}

