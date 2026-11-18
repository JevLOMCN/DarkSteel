// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// FTextFilterString @ 141918970

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,FTextFilterString *param_1)

{
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.AllocatorInstance.Data =
       (param_1->InternalString).Data.AllocatorInstance.Data;
  (param_1->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = (param_1->InternalString).Data.ArrayNum;
  (this->InternalString).Data.ArrayMax = (param_1->InternalString).Data.ArrayMax;
  (param_1->InternalString).Data.ArrayNum = 0;
  (param_1->InternalString).Data.ArrayMax = 0;
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).AllocatorInstance.Data =
       (param_1->InternalStringAnsi).AllocatorInstance.Data;
  (param_1->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = (param_1->InternalStringAnsi).ArrayNum;
  (this->InternalStringAnsi).ArrayMax = (param_1->InternalStringAnsi).ArrayMax;
  (param_1->InternalStringAnsi).ArrayNum = 0;
  (param_1->InternalStringAnsi).ArrayMax = 0;
  return this;
}

// FTextFilterString @ 1419189c0

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,FString *param_1)

{
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->InternalString).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  UppercaseInternalString(this);
  return this;
}

// FTextFilterString @ 141918a10

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,FTextFilterString *param_1)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString(&this->InternalString,&param_1->InternalString);
  pTVar1 = &this->InternalStringAnsi;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InternalStringAnsi).ArrayMax;
  iVar3 = (param_1->InternalStringAnsi).ArrayNum;
  _Src = (param_1->InternalStringAnsi).AllocatorInstance.Data;
  (this->InternalStringAnsi).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// FTextFilterString @ 141918aa0

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,FString *param_1)

{
  ::FString::FString(&this->InternalString,param_1);
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  UppercaseInternalString(this);
  return this;
}

// FTextFilterString @ 141918ad0

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,wchar_t *param_1)

{
  ::FString::FString(&this->InternalString,param_1);
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  UppercaseInternalString(this);
  return this;
}

// FTextFilterString @ 141918b00

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FTextFilterString *pFVar4;
  FString local_18;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = 0;
  (this->InternalString).Data.ArrayMax = 0;
  pFVar4 = (FTextFilterString *)::FString::ConstructFromPtrSize(&local_18,pwVar2,(int)uVar1);
  if (this != pFVar4) {
    pFVar3 = (this->InternalString).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->InternalString).Data.AllocatorInstance.Data =
         (pFVar4->InternalString).Data.AllocatorInstance.Data;
    (pFVar4->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InternalString).Data.ArrayNum = (pFVar4->InternalString).Data.ArrayNum;
    (this->InternalString).Data.ArrayMax = (pFVar4->InternalString).Data.ArrayMax;
    (pFVar4->InternalString).Data.ArrayNum = 0;
    (pFVar4->InternalString).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  UppercaseInternalString(this);
  return this;
}

// FTextFilterString @ 141918ba0

FTextFilterString * __thiscall
FTextFilterString::FTextFilterString(FTextFilterString *this,FName param_1)

{
  FName local_res10 [3];
  
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = 0;
  (this->InternalString).Data.ArrayMax = 0;
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  local_res10[0] = param_1;
  ::FName::AppendString(local_res10,&this->InternalString);
  UppercaseInternalString(this);
  return this;
}

// FTextFilterString @ 141918bf0

FTextFilterString * __thiscall FTextFilterString::FTextFilterString(FTextFilterString *this)

{
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = 0;
  (this->InternalString).Data.ArrayMax = 0;
  (this->InternalStringAnsi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalStringAnsi).ArrayNum = 0;
  (this->InternalStringAnsi).ArrayMax = 0;
  return this;
}

// operator= @ 14191dbc0

FTextFilterString * __thiscall
FTextFilterString::operator=(FTextFilterString *this,FTextFilterString *param_1)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->InternalString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->InternalString).Data.AllocatorInstance.Data =
         (param_1->InternalString).Data.AllocatorInstance.Data;
    (param_1->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InternalString).Data.ArrayNum = (param_1->InternalString).Data.ArrayNum;
    (this->InternalString).Data.ArrayMax = (param_1->InternalString).Data.ArrayMax;
    (param_1->InternalString).Data.ArrayNum = 0;
    (param_1->InternalString).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->InternalStringAnsi;
  pTVar1 = &this->InternalStringAnsi;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InternalStringAnsi).ArrayNum = (param_1->InternalStringAnsi).ArrayNum;
    (this->InternalStringAnsi).ArrayMax = (param_1->InternalStringAnsi).ArrayMax;
    (param_1->InternalStringAnsi).ArrayNum = 0;
    (param_1->InternalStringAnsi).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14191dc60

FTextFilterString * __thiscall
FTextFilterString::operator=(FTextFilterString *this,FTextFilterString *param_1)

{
  ::FString::operator=(&this->InternalString,&param_1->InternalString);
  TArray<char,TSizedDefaultAllocator<32>_>::operator=
            (&this->InternalStringAnsi,&param_1->InternalStringAnsi);
  return this;
}

// operator= @ 14191dca0

FTextFilterString * __thiscall
FTextFilterString::operator=(FTextFilterString *this,FString *param_1)

{
  ::FString::operator=(&this->InternalString,param_1);
  UppercaseInternalString(this);
  return this;
}

// operator= @ 14191dcd0

FTextFilterString * __thiscall
FTextFilterString::operator=(FTextFilterString *this,wchar_t *param_1)

{
  ::FString::operator=(&this->InternalString,param_1);
  UppercaseInternalString(this);
  return this;
}

// operator= @ 14191dd00

FTextFilterString * __thiscall
FTextFilterString::operator=(FTextFilterString *this,TStringView<wchar_t> *param_1)

{
  ::FString::AssignRange(&this->InternalString,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  UppercaseInternalString(this);
  return this;
}

// operator= @ 14191dd30

FTextFilterString * __thiscall FTextFilterString::operator=(FTextFilterString *this,FName param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  ::FString::Reset(&this->InternalString,0);
  ::FName::AppendString(local_res10,&this->InternalString);
  UppercaseInternalString(this);
  return this;
}

// CanCompareNumeric @ 14192c820

bool __thiscall
FTextFilterString::CanCompareNumeric(FTextFilterString *this,FTextFilterString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::IsNumeric(&this->InternalString);
  if (bVar1) {
    bVar1 = ::FString::IsNumeric(&param_1->InternalString);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// CompareFString @ 14192dd30

bool __thiscall
FTextFilterString::CompareFString
          (FTextFilterString *this,FString *param_1,ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar4 = (this->InternalString).Data.ArrayNum;
  pwVar3 = L"";
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = TextFilterInternal::CompareStrings<wchar_t>
                    (pwVar3,iVar4,pwVar5,iVar6,param_2,CaseSensitive);
  return bVar2;
}

// CompareFStringView @ 14192dd90

bool __thiscall
FTextFilterString::CompareFStringView
          (FTextFilterString *this,TStringView<wchar_t> *param_1,
          ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (this->InternalString).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  bVar2 = TextFilterInternal::CompareStrings<wchar_t>
                    (param_1->DataPtr,param_1->Size,pwVar3,iVar4,param_2,CaseSensitive);
  return bVar2;
}

// CompareName @ 14192dde0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FTextFilterString::CompareName
          (FTextFilterString *this,FName *param_1,ETextFilterTextComparisonMode param_2)

{
  uint uVar1;
  FScriptContainerElement *_Str2;
  int iVar2;
  FNameEntry *pFVar3;
  size_t sVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  FNameBufferWithNumber_u_2 *pFVar10;
  bool bVar11;
  FNameBufferWithNumber local_838;
  
  uVar1 = param_1->Number;
  local_838.bIsWide = false;
  pFVar3 = ::FName::GetDisplayNameEntry(param_1);
  TextFilterUtils::FNameBufferWithNumber::Init(&local_838,pFVar3,uVar1);
  if (local_838.bIsWide == false) {
    iVar2 = (this->InternalStringAnsi).ArrayNum;
    if (iVar2 < 2) {
      return false;
    }
    pFVar10 = &local_838.field1_0x2;
    for (lVar8 = 0x410; (local_838.field1_0x2.AnsiName[0] != '\0' && (lVar8 != 0));
        lVar8 = lVar8 + -1) {
      pFVar10->AnsiName[0] =
           pFVar10->AnsiName[0] - (-((int)pFVar10->AnsiName[0] - 0x61U < 0x1a) & 0x20U);
      pFVar10 = (FNameBufferWithNumber_u_2 *)(pFVar10->AnsiName + 1);
      local_838.field1_0x2.AnsiName[0] = pFVar10->AnsiName[0];
    }
    _Str2 = (this->InternalStringAnsi).AllocatorInstance.Data;
    iVar2 = iVar2 + -1;
    if (param_2 == Exact) {
      iVar2 = strcmp(local_838.field1_0x2.AnsiName,(char *)_Str2);
      return iVar2 == 0;
    }
    if (param_2 == Partial) {
      pcVar7 = strstr(local_838.field1_0x2.AnsiName,(char *)_Str2);
      return pcVar7 != (char *)0x0;
    }
    if (param_2 == StartsWith) {
      iVar2 = strncmp(local_838.field1_0x2.AnsiName,(char *)_Str2,(longlong)iVar2);
      return iVar2 == 0;
    }
    if (param_2 != EndsWith) {
      return false;
    }
    sVar4 = strlen(local_838.field1_0x2.AnsiName);
    iVar9 = (int)sVar4;
    if (iVar9 < 1) {
      return false;
    }
    if (iVar9 < iVar2) {
      return false;
    }
    iVar2 = strncmp(local_838.field1_0x2.AnsiName + (iVar9 - iVar2),(char *)_Str2,(longlong)iVar2);
  }
  else {
    pFVar10 = &local_838.field1_0x2;
    for (lVar8 = 0x410; (local_838.field1_0x2.WideName[0] != L'\0' && (lVar8 != 0));
        lVar8 = lVar8 + -1) {
      pFVar10->WideName[0] =
           pFVar10->WideName[0] - (-(ushort)((ushort)pFVar10->WideName[0] - 0x61 < 0x1a) & 0x20);
      pFVar10 = (FNameBufferWithNumber_u_2 *)(pFVar10->WideName + 1);
      local_838.field1_0x2.WideName[0] = pFVar10->WideName[0];
    }
    iVar2 = (this->InternalString).Data.ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
    }
    if (param_2 == Exact) {
      iVar2 = wcscmp(local_838.field1_0x2.WideName,pwVar6);
      return iVar2 == 0;
    }
    if (param_2 == Partial) {
      pwVar6 = wcsstr(local_838.field1_0x2.WideName,pwVar6);
      return pwVar6 != (wchar_t *)0x0;
    }
    if (param_2 == StartsWith) {
      bVar11 = false;
      if (iVar9 < 0) {
        sVar4 = wcslen(pwVar6);
        iVar9 = (int)sVar4;
        bVar11 = iVar9 < 0;
      }
      if (iVar9 == 0 || bVar11) {
        return false;
      }
      pFVar10 = &local_838.field1_0x2;
    }
    else {
      if (param_2 != EndsWith) {
        return false;
      }
      sVar4 = wcslen(local_838.field1_0x2.WideName);
      if (iVar9 < 0) {
        sVar5 = wcslen(pwVar6);
        iVar9 = (int)sVar5;
      }
      iVar2 = (int)sVar4;
      if (iVar2 < 1) {
        return false;
      }
      if (iVar2 < iVar9) {
        return false;
      }
      pFVar10 = (FNameBufferWithNumber_u_2 *)
                (local_838.field1_0x2.AnsiName + (longlong)(iVar2 - iVar9) * 2);
    }
    iVar2 = wcsncmp(pFVar10->WideName,pwVar6,(longlong)iVar9);
  }
  if (iVar2 != 0) {
    return false;
  }
  return true;
}

// CompareNumeric @ 14192e040

bool __thiscall
FTextFilterString::CompareNumeric
          (FTextFilterString *this,FTextFilterString *param_1,ETextFilterComparisonOperation param_2
          )

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  if ((this->InternalString).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  dVar7 = wcstod(pwVar5,(wchar_t **)0x0);
  if ((param_1->InternalString).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
  }
  dVar8 = wcstod(pwVar5,(wchar_t **)0x0);
  if (dVar7 - dVar8 <= 0.0) {
    iVar6 = (0.0 <= dVar7 - dVar8) - 1;
  }
  else {
    iVar6 = 1;
  }
  bVar2 = (byte)((uint)iVar6 >> 0x18);
  switch(param_2) {
  case Equal:
    return iVar6 == 0;
  case NotEqual:
    return iVar6 != 0;
  case Less:
    return (bool)(bVar2 >> 7);
  case LessOrEqual:
    return iVar6 < 1;
  case Greater:
    return 0 < iVar6;
  case GreaterOrEqual:
    return (bool)(bVar2 >> 7 ^ 1);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TextFilterUtils.cpp"
                     ,0x164,L"");
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// CompareText @ 14192e1b0

bool __thiscall
FTextFilterString::CompareText
          (FTextFilterString *this,FTextFilterString *param_1,ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar4 = (param_1->InternalString).Data.ArrayNum;
  pwVar3 = L"";
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
  }
  iVar1 = (this->InternalString).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar3 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  bVar2 = TextFilterInternal::CompareStrings<wchar_t>
                    (pwVar3,iVar4,pwVar5,iVar6,param_2,CaseSensitive);
  return bVar2;
}

// UppercaseInternalString @ 14197c2c0

void __thiscall FTextFilterString::UppercaseInternalString(FTextFilterString *this)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  pwVar8 = L"";
  if ((this->InternalString).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  uVar3 = *pwVar7;
  while (uVar3 != 0) {
    if (uVar3 < 0x80) {
      sVar5 = (short)FastToUpper::ToUpperAdjustmentTable[uVar3];
    }
    else {
      sVar5 = -(-(ushort)(uVar3 - 0x61 < 0x1a) & 0x20);
    }
    *pwVar7 = uVar3 + sVar5;
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
    uVar3 = *pwVar7;
  }
  piVar1 = &(this->InternalStringAnsi).ArrayMax;
  piVar2 = &(this->InternalStringAnsi).ArrayNum;
  *piVar2 = 0;
  if ((this->InternalStringAnsi).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->InternalStringAnsi).AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->InternalString).Data.ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
  }
  uVar3 = *pwVar7;
  while( true ) {
    if (uVar3 == 0) {
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar4,&(this->InternalStringAnsi).AllocatorInstance,piVar2,piVar1);
        iVar4 = (this->InternalString).Data.ArrayNum;
        if (iVar4 != 0) {
          pwVar8 = (wchar_t *)(this->InternalString).Data.AllocatorInstance.Data;
        }
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        FGenericPlatformString::Convert<wchar_t,char>
                  ((char *)(this->InternalStringAnsi).AllocatorInstance.Data,*piVar2,pwVar8,iVar4);
      }
      return;
    }
    if (0x7f < uVar3) break;
    uVar3 = *(ushort *)((longlong)pwVar7 + 2);
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
  }
  return;
}

