// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 26

// CanHoldDoubleValueInternal @ 141f71be0

bool __thiscall FNumericProperty::CanHoldDoubleValueInternal(FNumericProperty *this,double param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x767,L"Pure virtual not implemented (%s)");
  return false;
}

// CanHoldSignedValueInternal @ 141f71ca0

bool __thiscall FNumericProperty::CanHoldSignedValueInternal(FNumericProperty *this,long64 param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x768,L"Pure virtual not implemented (%s)");
  return false;
}

// CanHoldUnsignedValueInternal @ 141f71e00

bool __thiscall
FNumericProperty::CanHoldUnsignedValueInternal(FNumericProperty *this,ulong64 param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x769,L"Pure virtual not implemented (%s)");
  return false;
}

// GetFieldSize @ 141f81c80

ulong64 __thiscall FNumericProperty::GetFieldSize(FNumericProperty *this)

{
  return 0x70;
}

// FNumericProperty @ 142161b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FNumericProperty * __thiscall
FNumericProperty::FNumericProperty
          (FNumericProperty *this,FFieldVariant param_1,FPropertyParamsBaseWithOffset *param_2,
          EPropertyFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7FNumericProperty__6B_;
  return this;
}

// FNumericProperty @ 142161bd0

FNumericProperty * __thiscall
FNumericProperty::FNumericProperty
          (FNumericProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7FNumericProperty__6B_;
  return this;
}

// Construct @ 14216c010

FField * __cdecl
FNumericProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FNumericProperty *this;
  FFieldClass *pFVar1;
  FNumericProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FNumericProperty *)0x0;
  if (this != (FNumericProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FNumericProperty__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FNumericProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ExportText_Internal @ 142176cd0

void __thiscall
FNumericProperty::ExportText_Internal
          (FNumericProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  void *local_18 [2];
  
  if ((param_3 == Container) && (cVar1 = (**(code **)(*(longlong *)this + 0x78))(), cVar1 != '\0'))
  {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)this + 0x240))(this,local_18,param_2);
  }
  else {
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)this + 0x238))(this,local_18,param_2);
  }
  iVar3 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)*puVar2,iVar3);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// GetFloatingPointPropertyValue @ 14217bdc0

double __thiscall
FNumericProperty::GetFloatingPointPropertyValue(FNumericProperty *this,void *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0x112,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    dVar2 = (double)(*pcVar1)();
    return dVar2;
  }
  return 0.0;
}

// GetIntPropertyEnum @ 14217c390

UEnum * __thiscall FNumericProperty::GetIntPropertyEnum(FNumericProperty *this)

{
  return (UEnum *)0x0;
}

// GetNumericPropertyValueToString @ 14217c820

FString * __thiscall
FNumericProperty::GetNumericPropertyValueToString
          (FNumericProperty *this,FString *__return_storage_ptr__,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0x11e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNumericPropertyValueToString_InContainer @ 14217c960

FString * __thiscall
FNumericProperty::GetNumericPropertyValueToString_InContainer
          (FNumericProperty *this,FString *__return_storage_ptr__,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0x124,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSignedIntPropertyValue @ 14217d710

long64 __thiscall FNumericProperty::GetSignedIntPropertyValue(FNumericProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xf2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return 0;
}

// GetSignedIntPropertyValue_InContainer @ 14217d7e0

long64 __thiscall
FNumericProperty::GetSignedIntPropertyValue_InContainer(FNumericProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xf7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return 0;
}

// GetUnsignedIntPropertyValue @ 14217dad0

ulong64 __thiscall
FNumericProperty::GetUnsignedIntPropertyValue(FNumericProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0x102,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// GetUnsignedIntPropertyValue_InContainer @ 14217dba0

ulong64 __thiscall
FNumericProperty::GetUnsignedIntPropertyValue_InContainer(FNumericProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0x107,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// ImportText_Internal @ 142181470

wchar_t * __thiscall
FNumericProperty::ImportText_Internal
          (FNumericProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  wchar_t wVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *local_res10;
  long64 local_18 [2];
  
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_res10 = param_1;
  cVar3 = (**(code **)(*(longlong *)this + 0x1d8))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(longlong *)this + 0x1d0))(this);
    if ((cVar3 == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFloatingPoint()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                           ,0x8d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar2)();
      return pwVar6;
    }
    for (; ((wVar1 = *local_res10, wVar1 == L'+' || ((ushort)(wVar1 + L'ￓ') < 2)) ||
           ((ushort)(wVar1 + L'￐') < 10)); local_res10 = local_res10 + 1) {
    }
    if ((wVar1 + L'ﾺ' & 0xffdfU) == 0) {
      local_res10 = local_res10 + 1;
    }
    goto LAB_142181671;
  }
  iVar5 = iswalpha(*local_res10);
  if (iVar5 != 0) {
    local_18[0] = UEnum::ParseEnum(&local_res10);
    if (local_18[0] == -1) {
      return (wchar_t *)0x0;
    }
    if ((param_3 == Container) &&
       (cVar3 = (**(code **)(*(longlong *)this + 0x70))(this), cVar3 != '\0')) {
      FProperty::SetValue_InContainer((FProperty *)this,param_2,local_18);
      return local_res10;
    }
    if (param_3 != Container) {
      (**(code **)(*(longlong *)this + 0x1e8))(this,param_2,local_18[0]);
      return local_res10;
    }
    (**(code **)(*(longlong *)this + 0x1e8))
              (this,(longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    return local_res10;
  }
  iVar5 = FGenericPlatformStricmp::Strnicmp(param_1,L"0x",2);
  if (iVar5 == 0) {
    for (local_res10 = local_res10 + 2; local_res10 != (wchar_t *)0x0; local_res10 = local_res10 + 1
        ) {
      wVar1 = *local_res10;
      if ((ushort)(wVar1 + L'￐') < 10) {
        iVar5 = (ushort)wVar1 - 0x30;
LAB_14218158f:
        if (iVar5 == 0) goto LAB_142181593;
      }
      else {
        if ((ushort)(wVar1 + L'ﾟ') < 6) {
          iVar5 = (ushort)wVar1 - 0x57;
          goto LAB_14218158f;
        }
        if ((ushort)(wVar1 + L'﾿') < 6) {
          iVar5 = (ushort)wVar1 - 0x37;
          goto LAB_14218158f;
        }
LAB_142181593:
        if (wVar1 != L'0') break;
      }
    }
  }
  else {
    for (; local_res10 != (wchar_t *)0x0; local_res10 = local_res10 + 1) {
      if ((*local_res10 != L'-') && (*local_res10 != L'+')) goto LAB_1421815d0;
    }
  }
  goto LAB_1421815ed;
  while (local_res10 = local_res10 + 1, local_res10 != (wchar_t *)0x0) {
LAB_1421815d0:
    iVar5 = iswdigit(*local_res10);
    if (iVar5 == 0) break;
  }
LAB_1421815ed:
  if (param_1 == local_res10) {
    return (wchar_t *)0x0;
  }
LAB_142181671:
  if ((param_3 == Container) &&
     (cVar3 = (**(code **)(*(longlong *)this + 0x70))(this), cVar3 != '\0')) {
    (**(code **)(*(longlong *)this + 0x208))(this,param_2,param_1);
    return local_res10;
  }
  if (param_3 == Container) {
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  (**(code **)(*(longlong *)this + 0x200))(this,param_2,param_1);
  return local_res10;
}

// IsFloatingPoint @ 142183f70

bool __thiscall FNumericProperty::IsFloatingPoint(FNumericProperty *this)

{
  return false;
}

// IsInteger @ 142183fb0

bool __thiscall FNumericProperty::IsInteger(FNumericProperty *this)

{
  return true;
}

// ReadEnumAsInt64 @ 142188050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FNumericProperty::ReadEnumAsInt64
          (FStructuredArchiveSlot param_1,UStruct *param_2,FPropertyTag *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  size_t sVar6;
  UEnum *this;
  FArchive *pFVar7;
  FString *pFVar8;
  UEnum *pUVar9;
  FName FVar10;
  uint uVar11;
  uint uVar12;
  UEnum *pUVar13;
  FSlotBase local_res8 [3];
  undefined1 auStackY_1f8 [32];
  TStringView<wchar_t> local_1c8;
  FName local_1b8;
  TFieldIterator<UEnum> local_1b0;
  FName local_198;
  FString local_190;
  FName local_180;
  FString local_178;
  FString local_168;
  TStringBuilderBase<wchar_t> local_158;
  FScriptContainerElement local_138 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar13 = (UEnum *)0x0;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),&local_1b8);
  uVar1 = (param_3->TypeName).Index;
  uVar12 = 0;
  uVar11 = uVar12;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar1 >> 0xd] + 8 +
                  (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
    uVar11 = uVar1 + 1;
  }
  FVar10 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar11 >> 0xd] +
                     (ulonglong)(uVar11 & 0x1fff) * 0xc);
  local_198 = FVar10;
  if (param_2 != (UStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      param_2 = (UStruct *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar5);
    }
    this = pUVar13;
    if (FVar10 != (FName)0x0) {
      if (param_2 == (UStruct *)0x0) {
        local_1b0.Field = (UField *)0x0;
      }
      else {
        local_1b0.Field = (param_2->Children).field0_0x0.DebugPtr;
      }
      local_1b0.InterfaceIndex = -1;
      local_1b0.bIncludeSuper = true;
      local_1b0.bIncludeDeprecated = true;
      local_1b0.bIncludeInterface = false;
      local_1b0.Struct = param_2;
      TFieldIterator<UEnum>::IterateToNext(&local_1b0);
      while ((this = pUVar13, (UEnum *)local_1b0.Field != (UEnum *)0x0 &&
             (this = (UEnum *)local_1b0.Field,
             (FName)((UEnum *)local_1b0.Field)->_padding_ != FVar10))) {
        local_1b0.Field =
             (((TObjectPtr<UField> *)&((UEnum *)local_1b0.Field)->_padding_)->field0_0x0).DebugPtr;
        TFieldIterator<UEnum>::IterateToNext(&local_1b0);
      }
    }
    if (this != (UEnum *)0x0) goto LAB_1421882c9;
  }
  local_158.Base = (wchar_t *)local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.CurPos = (wchar_t *)local_138;
  local_158.End = (wchar_t *)local_38;
  ::FName::AppendString(&local_198,&local_158);
  if (local_158.End < (FScriptContainerElement *)((longlong)local_158.CurPos + 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = 0;
  local_1c8.DataPtr = local_158.Base;
  if ((FScriptContainerElement *)local_158.Base != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(local_158.Base);
    uVar12 = (uint)sVar6;
  }
  local_1c8.Size = uVar12;
  pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindFirstObject(pUVar5,&local_1c8,NativeFirst,NoLogging,(wchar_t *)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  if (this == (UEnum *)0x0) {
    if (2 < (byte)LogClass._0_1_) {
      ::FName::ToString(&param_3->Name,&local_190);
      ::FName::ToString(&local_198,(FString *)&local_1c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.DataPtr);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    return 0;
  }
LAB_1421882c9:
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  (**(code **)(*(longlong *)pFVar7 + 0x1b0))(pFVar7,this);
  pFVar8 = ::FName::ToString(&local_1b8,&local_190);
  local_1c8.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  iVar2 = (pFVar8->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  local_1c8.Size = iVar4;
  pUVar9 = (UEnum *)UEnum::GetValueOrBitfieldFromString(this,&local_1c8,None);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  bVar3 = UEnum::IsValidEnumValueOrBitfield(this,(long64)pUVar9);
  if (!bVar3) {
    pUVar9 = pUVar13;
    if ((this->EnumFlags & Flags) == None) {
      pUVar9 = (UEnum *)UEnum::GetMaxEnumValue(this);
    }
    if (2 < (byte)LogClass._0_1_) {
      FVar10 = UEnum::GetNameByValue(this,(long64)&local_190);
      ::FName::ToString((FName *)FVar10,(FString *)&local_1b0);
      ::FName::ToString(&param_3->Name,&local_168);
      local_180 = (FName)this->_padding_;
      ::FName::ToString(&local_180,(FString *)&local_1c8);
      ::FName::ToString(&local_1b8,&local_178);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.DataPtr);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_1b0.Struct != (UStruct *)0x0) {
        FMemory::Free(local_1b0.Struct);
      }
    }
  }
  return (long64)pUVar9;
}

// SetFloatingPointPropertyValue @ 142191760

void __thiscall
FNumericProperty::SetFloatingPointPropertyValue(FNumericProperty *this,void *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xda,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetIntPropertyValue @ 142191800

void __thiscall
FNumericProperty::SetIntPropertyValue(FNumericProperty *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xd0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetIntPropertyValue @ 142191840

void __thiscall
FNumericProperty::SetIntPropertyValue(FNumericProperty *this,void *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xc6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetNumericPropertyValueFromString @ 1421921a0

void __thiscall
FNumericProperty::SetNumericPropertyValueFromString
          (FNumericProperty *this,void *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xe5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetNumericPropertyValueFromString_InContainer @ 1421922a0

void __thiscall
FNumericProperty::SetNumericPropertyValueFromString_InContainer
          (FNumericProperty *this,void *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyNumeric.cpp"
                     ,0xe9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticClass @ 142193b70

FFieldClass * __cdecl FNumericProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FNumericProperty",0x1000000,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FNumericProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

