// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 8

// StaticStruct @ 14d0d0f50

UScriptStruct * __cdecl FNamingTokenData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NamingTokens();
    Z_Registration_Info_UScriptStruct_FNamingTokenData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamingTokenData,(UObject *)pUVar1,
                         L"NamingTokenData");
  }
  return Z_Registration_Info_UScriptStruct_FNamingTokenData.OuterSingleton;
}

// FNamingTokenData @ 14d0d48f0

FNamingTokenData * __thiscall
FNamingTokenData::FNamingTokenData(FNamingTokenData *this,FNamingTokenData *param_1)

{
  (this->TokenKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenKey).Data.AllocatorInstance.Data = (param_1->TokenKey).Data.AllocatorInstance.Data;
  (param_1->TokenKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenKey).Data.ArrayNum = (param_1->TokenKey).Data.ArrayNum;
  (this->TokenKey).Data.ArrayMax = (param_1->TokenKey).Data.ArrayMax;
  (param_1->TokenKey).Data.ArrayNum = 0;
  (param_1->TokenKey).Data.ArrayMax = 0;
  FText::FText(&this->DisplayName,&param_1->DisplayName);
  FText::FText(&this->Description,&param_1->Description);
  this->FunctionName = param_1->FunctionName;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TokenProcessorNative,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->TokenProcessorNative);
  return this;
}

// FNamingTokenData @ 14d0d4970

FNamingTokenData * __thiscall
FNamingTokenData::FNamingTokenData(FNamingTokenData *this,FNamingTokenData *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  ::FString::FString(&this->TokenKey,&param_1->TokenKey);
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  (this->DisplayName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Description).Flags = (param_1->Description).Flags;
  this->FunctionName = param_1->FunctionName;
  *(undefined8 *)&this->TokenProcessorNative = 0;
  *(undefined8 *)&(this->TokenProcessorNative).field_0x8 = 0;
  *(undefined4 *)&(this->TokenProcessorNative).field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->TokenProcessorNative,&param_1->TokenProcessorNative);
  return this;
}

// FNamingTokenData @ 14d0d4a10

FNamingTokenData * __thiscall
FNamingTokenData::FNamingTokenData(FNamingTokenData *this,FString *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  (this->TokenKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenKey).Data.ArrayNum = 0;
  (this->TokenKey).Data.ArrayMax = 0;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Description);
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  *(undefined8 *)&this->TokenProcessorNative = 0;
  *(undefined8 *)&(this->TokenProcessorNative).field_0x8 = 0;
  *(undefined4 *)&(this->TokenProcessorNative).field_0x10 = 0;
  ::FString::operator=(&this->TokenKey,param_1);
  pFVar1 = FText::FromString(&local_18,param_1);
  FText::operator=(&this->DisplayName,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// FNamingTokenData @ 14d0d4ab0

FNamingTokenData * __thiscall
FNamingTokenData::FNamingTokenData
          (FNamingTokenData *this,FString *param_1,FText *param_2,FText *param_3,
          TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  FNamingTokenData(this,param_1,param_2,param_4);
  pIVar1 = (param_3->TextData).Reference;
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Description).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Description).Flags = param_3->Flags;
  return this;
}

// FNamingTokenData @ 14d0d4b20

FNamingTokenData * __thiscall
FNamingTokenData::FNamingTokenData
          (FNamingTokenData *this,FString *param_1,FText *param_2,
          TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  (this->TokenKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenKey).Data.ArrayNum = 0;
  (this->TokenKey).Data.ArrayMax = 0;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Description);
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  *(undefined8 *)&this->TokenProcessorNative = 0;
  *(undefined8 *)&(this->TokenProcessorNative).field_0x8 = 0;
  *(undefined4 *)&(this->TokenProcessorNative).field_0x10 = 0;
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = param_2->Flags;
  ::FString::operator=(&this->TokenKey,param_1);
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->TokenProcessorNative,param_3);
  return this;
}

// operator== @ 14d0d55c0

bool __thiscall FNamingTokenData::operator==(FNamingTokenData *this,FNamingTokenData *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->TokenKey).Data.ArrayNum;
  iVar1 = (param_1->TokenKey).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = wcscmp((wchar_t *)(this->TokenKey).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->TokenKey).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// Equals @ 14d0d9b60

bool __thiscall
FNamingTokenData::Equals(FNamingTokenData *this,FNamingTokenData *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *_Str2;
  FScriptContainerElement *_Str1;
  int iVar2;
  
  iVar2 = (this->TokenKey).Data.ArrayNum;
  iVar1 = (param_1->TokenKey).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    _Str2 = (param_1->TokenKey).Data.AllocatorInstance.Data;
    _Str1 = (this->TokenKey).Data.AllocatorInstance.Data;
    if (param_2) {
      iVar2 = wcscmp((wchar_t *)_Str1,(wchar_t *)_Str2);
      return iVar2 == 0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)_Str1,(wchar_t *)_Str2);
    return iVar2 == 0;
  }
  return true;
}

