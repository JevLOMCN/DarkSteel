// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// ~FFormatArgumentValue @ 141589b80

void __thiscall FFormatArgumentValue::~FFormatArgumentValue(FFormatArgumentValue *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&(this->TextValue).field0_0x0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141589b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// FFormatArgumentValue @ 141734030

FFormatArgumentValue * __thiscall
FFormatArgumentValue::FFormatArgumentValue(FFormatArgumentValue *this,FFormatArgumentValue *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this->Type = param_1->Type;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  (this->field1_0x8).FloatValue = (param_1->field1_0x8).FloatValue;
  this->field1_0x8 = param_1->field1_0x8;
  (this->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->TextValue).field0_0x0.TypedValue.Flags = 0;
  if ((param_1->TextValue).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (this->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&(param_1->TextValue).field0_0x0;
    (this->TextValue).field0_0x0.TypedValue.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    (this->TextValue).field0_0x0.TypedValue.Flags = (param_1->TextValue).field0_0x0.TypedValue.Flags
    ;
  }
  return this;
}

// FFormatArgumentValue @ 1417340b0

FFormatArgumentValue * __thiscall
FFormatArgumentValue::FFormatArgumentValue(FFormatArgumentValue *this,FCbValue *param_1)

{
  TOptional<FText> *this_00;
  byte bVar1;
  byte *pbVar2;
  ITextData *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  FText *pFVar8;
  FFormatArgumentValue *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  FString local_38;
  FText local_28;
  
  this_00 = &this->TextValue;
  (this_00->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->TextValue).field0_0x0.TypedValue.Flags = 0;
  switch(param_1->Type) {
  case String:
    this->Type = Text;
    pbVar2 = param_1->Data;
    local_40 = 0;
    local_48 = 0;
    pbVar12 = pbVar2 + 1;
    uVar10 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = -(int)lVar4 + 9;
    uVar11 = 0xff >> ((byte)uVar13 & 0x1f) & 0xffU & (uint)*pbVar2;
    switch(-(int)lVar4) {
    case 0:
      pbVar12 = pbVar2 + 2;
    case -1:
      pbVar12 = pbVar12 + 1;
    case -2:
      pbVar12 = pbVar12 + 1;
    case -3:
      pbVar12 = pbVar12 + 1;
    case -4:
      uVar11 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    case -5:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (uint)bVar1;
    case -6:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar11 = uVar11 << 8 | (uint)bVar1;
    case -7:
      uVar11 = uVar11 << 8 | (uint)*pbVar12;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar7 = ::FString::ConstructFromPtrSize(&local_38,pbVar2 + uVar13,uVar11);
    if (&local_58 != pFVar7) {
      local_58.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = FText::FromString(&local_28,&local_58);
    if (pFVar8 != (FText *)this_00) {
      if (*(longlong **)&this_00->field0_0x0 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this_00->field0_0x0 + 0x10))();
      }
      FText::FText((FText *)this_00,pFVar8);
      if (((this_00->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FFormatArgumentValue *)(*pcVar5)();
        return pFVar9;
      }
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    break;
  case IntegerPositive:
    this->Type = UInt;
    pbVar2 = param_1->Data;
    pbVar12 = pbVar2 + 1;
    uVar10 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = (ulonglong)(0xff >> ((char)-(int)lVar4 + 9U & 0x1f) & 0xff) & (ulonglong)*pbVar2;
    switch(-(int)lVar4) {
    case 0:
      uVar10 = (ulonglong)*pbVar12;
      pbVar12 = pbVar2 + 2;
    case -1:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -7:
      uVar10 = uVar10 << 8 | (ulonglong)*pbVar12;
    default:
      (this->field1_0x8).UIntValue = uVar10;
    }
    break;
  case IntegerNegative:
    this->Type = Int;
    pbVar2 = param_1->Data;
    pbVar12 = pbVar2 + 1;
    uVar10 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = (ulonglong)(0xff >> ((char)-(int)lVar4 + 9U & 0x1f) & 0xff) & (ulonglong)*pbVar2;
    switch(-(int)lVar4) {
    case 0:
      uVar10 = (ulonglong)*pbVar12;
      pbVar12 = pbVar2 + 2;
    case -1:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)bVar1;
    case -7:
      uVar10 = uVar10 << 8 | (ulonglong)*pbVar12;
    default:
      (this->field1_0x8).UIntValue = ~uVar10;
    }
    break;
  case Float32:
    this->Type = Float;
    uVar11 = *(uint *)param_1->Data;
    (this->field1_0x8).FloatValue =
         (float)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                );
    break;
  case Float64:
    this->Type = Double;
    uVar10 = *(ulonglong *)param_1->Data;
    (this->field1_0x8).UIntValue =
         uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
         (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
         (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
    break;
  case BoolFalse:
    this->Type = Int;
    (this->field1_0x8).IntValue = 0;
    break;
  case BoolTrue:
    this->Type = Int;
    (this->field1_0x8).IntValue = 1;
    break;
  default:
    this->Type = Text;
    pFVar8 = FText::GetEmpty();
    if (pFVar8 != (FText *)this_00) {
      if (*(longlong **)&this_00->field0_0x0 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this_00->field0_0x0 + 0x10))();
      }
      (this_00->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      pIVar3 = (pFVar8->TextData).Reference;
      (this_00->field0_0x0).TypedValue.TextData.Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
      }
      (this->TextValue).field0_0x0.TypedValue.Flags = pFVar8->Flags;
      if (((this_00->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FFormatArgumentValue *)(*pcVar5)();
        return pFVar9;
      }
    }
  }
  return this;
}

// operator= @ 141739e00

FFormatArgumentValue * __thiscall
FFormatArgumentValue::operator=(FFormatArgumentValue *this,FFormatArgumentValue *param_1)

{
  TOptional<FText> *pTVar1;
  TOptional<FText> *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FFormatArgumentValue *pFVar5;
  
  pTVar1 = &param_1->TextValue;
  this->Type = param_1->Type;
  this_00 = &this->TextValue;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  (this->field1_0x8).FloatValue = (param_1->field1_0x8).FloatValue;
  this->field1_0x8 = param_1->field1_0x8;
  if (pTVar1 != this_00) {
    plVar2 = *(longlong **)&this_00->field0_0x0;
    if ((pTVar1->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        (this_00->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (this->TextValue).field0_0x0.TypedValue.Flags = 0;
      }
    }
    else {
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      FText::FText((FText *)this_00,(FText *)pTVar1);
      if ((this_00->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FFormatArgumentValue *)(*pcVar3)();
          return pFVar5;
        }
      }
    }
  }
  return this;
}

// FromExportedString @ 14175a0b0

wchar_t * __thiscall
FFormatArgumentValue::FromExportedString(FFormatArgumentValue *this,wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ITextData *pIVar5;
  FText *pFVar6;
  ITextData *pIVar7;
  wchar_t *pwVar8;
  TRefCountPtr<ITextData> TVar9;
  TOptional<FText> *pTVar10;
  ITextData *pIVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_48;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&TextGenderMarker,L"ETextGender::");
    atexit(`FFormatArgumentValue::FromExportedString'::__l3::
           _dynamic_atexit_destructor_for__TextGenderMarker__);
    _Init_thread_footer(&::_TSS0);
  }
  pIVar11 = (ITextData *)0x0;
  iVar4 = TextGenderMarker.Data.ArrayNum + -1;
  FVar12.Data = TextGenderMarker.Data.AllocatorInstance.Data;
  if (TextGenderMarker.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  iVar4 = FGenericPlatformStricmp::Strnicmp(param_1,(wchar_t *)FVar12.Data,(longlong)iVar4);
  if (iVar4 == 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    iVar4 = TextGenderMarker.Data.ArrayNum + -1;
    if (TextGenderMarker.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pIVar5 = (ITextData *)(param_1 + iVar4);
    ::FString::Reset(&local_38,0);
    wVar1 = *(wchar_t *)pIVar5;
    while ((wVar1 != L'\0' &&
           ((iVar4 = iswalnum(wVar1), iVar4 != 0 || (*(wchar_t *)pIVar5 == L'_'))))) {
      wVar1 = *(wchar_t *)pIVar5;
      pIVar5 = (ITextData *)&pIVar5->field_0x2;
      ::FString::AppendChar(&local_38,wVar1);
      wVar1 = *(wchar_t *)pIVar5;
    }
    pIVar7 = pIVar11;
    if (1 < local_38.Data.ArrayNum) {
      pIVar7 = pIVar5;
    }
    if (pIVar7 != (ITextData *)0x0) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar12.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Masculine");
      if (iVar4 == 0) {
LAB_14175a1ec:
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        this->Type = Gender;
        (this->field1_0x8).IntValue = (long64)pIVar11;
        return (wchar_t *)pIVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Feminine");
      if (iVar4 == 0) {
        pIVar11 = (ITextData *)&DAT_00000001;
        goto LAB_14175a1ec;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Neuter");
      if (iVar4 == 0) {
        pIVar11 = (ITextData *)&DAT_00000002;
        goto LAB_14175a1ec;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pIVar5 = (ITextData *)TextStringificationUtil::ReadNumberFromBuffer(param_1,this);
  if (pIVar5 == (ITextData *)0x0) {
    pFVar6 = FText::GetEmpty();
    local_48.TextData.Reference = (pFVar6->TextData).Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res10);
    }
    local_48.Flags = 0;
    pIVar7 = (ITextData *)
             FTextStringHelper::ReadFromBuffer(param_1,&local_48,(wchar_t *)0x0,(wchar_t *)0x0,true)
    ;
    TVar9.Reference = local_48.TextData.Reference;
    pIVar5 = pIVar11;
    if (pIVar7 != (ITextData *)0x0) {
      this->Type = Text;
      pTVar10 = &this->TextValue;
      pIVar5 = pIVar7;
      if (&local_48 != (FText *)pTVar10) {
        if (*(longlong **)&pTVar10->field0_0x0 != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pTVar10->field0_0x0 + 0x10))();
        }
        *(ITextData **)&pTVar10->field0_0x0 = local_48.TextData.Reference;
        (this->TextValue).field0_0x0.TypedValue.Flags = local_48.Flags;
        local_48.TextData.Reference = (ITextData *)0x0;
        pFVar6 = FText::GetEmpty();
        pIVar7 = (pFVar6->TextData).Reference;
        if (pIVar7 != (ITextData *)0x0) {
          local_48.TextData.Reference = pIVar7;
          (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res18);
          pIVar11 = pIVar7;
        }
        local_48.Flags = 0;
        TVar9.Reference = pIVar11;
        if (((pTVar10->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pwVar8 = (wchar_t *)(*pcVar2)();
          return pwVar8;
        }
      }
    }
    if (TVar9.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar9.Reference + 0x10))(TVar9.Reference);
    }
  }
  return (wchar_t *)pIVar5;
}

// GetDoubleValue @ 14175cda0

double __thiscall FFormatArgumentValue::GetDoubleValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (this->Type == Double) {
    return (double)(this->field1_0x8).IntValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EFormatArgumentType::Double",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                     ,0x404,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)(this->field1_0x8).IntValue;
}

// GetFloatValue @ 14175d1d0

float __thiscall FFormatArgumentValue::GetFloatValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->Type == Float) {
    return (this->field1_0x8).FloatValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EFormatArgumentType::Float",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                     ,0x3fe,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field1_0x8).FloatValue;
}

// GetGenderValue @ 14175d5f0

ETextGender __thiscall FFormatArgumentValue::GetGenderValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  ETextGender EVar3;
  
  if (this->Type == Gender) {
    return *(ETextGender *)&this->field1_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EFormatArgumentType::Gender",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                     ,0x410,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return *(ETextGender *)&this->field1_0x8;
}

// GetIntValue @ 14175e550

long64 __thiscall FFormatArgumentValue::GetIntValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (this->Type == Int) {
    return (this->field1_0x8).IntValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EFormatArgumentType::Int",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                     ,0x3f2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return (this->field1_0x8).IntValue;
}

// GetTextValue @ 141761980

FText * __thiscall FFormatArgumentValue::GetTextValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if (this->Type != Text) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EFormatArgumentType::Text",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                       ,0x40a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->TextValue).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FText *)&this->TextValue;
}

// GetUIntValue @ 1417621c0

ulong64 __thiscall FFormatArgumentValue::GetUIntValue(FFormatArgumentValue *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->Type == UInt) {
    return (this->field1_0x8).IntValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EFormatArgumentType::UInt",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                     ,0x3f8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (this->field1_0x8).IntValue;
}

// IdenticalTo @ 141762be0

bool __thiscall
FFormatArgumentValue::IdenticalTo
          (FFormatArgumentValue *this,FFormatArgumentValue *param_1,ETextIdenticalModeFlags param_2)

{
  bool bVar1;
  ETextGender EVar2;
  ETextGender EVar3;
  FText *this_00;
  FText *pFVar4;
  
  if (this->Type == param_1->Type) {
    switch(this->Type) {
    case Int:
    case UInt:
      return (this->field1_0x8).IntValue == (param_1->field1_0x8).IntValue;
    case Float:
      if ((param_1->field1_0x8).FloatValue == (this->field1_0x8).FloatValue) {
        return true;
      }
      break;
    case Double:
      if ((param_1->field1_0x8).DoubleValue == (this->field1_0x8).DoubleValue) {
        return true;
      }
      break;
    case Text:
      this_00 = GetTextValue(this);
      pFVar4 = GetTextValue(param_1);
      bVar1 = FText::IdenticalTo(this_00,pFVar4,param_2);
      return bVar1;
    case Gender:
      EVar2 = GetGenderValue(this);
      EVar3 = GetGenderValue(param_1);
      return EVar2 == EVar3;
    }
  }
  return false;
}

// ToExportedString @ 14177f140

FString * __thiscall
FFormatArgumentValue::ToExportedString
          (FFormatArgumentValue *this,FString *__return_storage_ptr__,bool param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ToExportedString(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ToExportedString @ 14177f170

void __thiscall
FFormatArgumentValue::ToExportedString(FFormatArgumentValue *this,FString *param_1,bool param_2)

{
  ETextGender EVar1;
  FText *pFVar2;
  size_t sVar3;
  wchar_t *_Str;
  int iVar4;
  FString local_18;
  
  switch(this->Type) {
  case Int:
    ::FString::PrintfImpl(&local_18,L"%lld");
    break;
  case UInt:
    ::FString::PrintfImpl(&local_18,L"%llu");
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L'u');
    return;
  case Float:
    ::FString::PrintfImpl(&local_18,L"%f");
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L'f');
    return;
  case Double:
    ::FString::PrintfImpl(&local_18,L"%f");
    break;
  case Text:
    pFVar2 = GetTextValue(this);
    FTextStringHelper::WriteToBuffer(param_1,pFVar2,true,param_2);
    return;
  case Gender:
    EVar1 = GetGenderValue(this);
    ::FString::AppendChars(param_1,L"ETextGender::",0xd);
    if (EVar1 == Masculine) {
      _Str = L"Masculine";
    }
    else if (EVar1 == Feminine) {
      _Str = L"Feminine";
    }
    else if (EVar1 == Neuter) {
      _Str = L"Neuter";
    }
    else {
      _Str = L"<Unknown ETextGender>";
    }
    sVar3 = wcslen(_Str);
    ::FString::AppendChars(param_1,_Str,(int)sVar3);
  default:
    goto switchD_14177f19f_default;
  }
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
switchD_14177f19f_default:
  return;
}

// ToFormattedString @ 14177f380

FString * __thiscall
FFormatArgumentValue::ToFormattedString
          (FFormatArgumentValue *this,FString *__return_storage_ptr__,bool param_1,bool param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ToFormattedString(this,param_1,param_2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToFormattedString @ 14177f3c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FFormatArgumentValue::ToFormattedString
          (FFormatArgumentValue *this,bool param_1,bool param_2,FString *param_3)

{
  FNumberFormattingOptions *pFVar1;
  Type TVar2;
  void *_Src;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FText *this_01;
  longlong *plVar6;
  undefined8 *puVar7;
  FInternationalization *pFVar8;
  FDecimalNumberFormattingRules *pFVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  wchar_t *local_88;
  int local_80;
  FNumberFormattingOptions local_78;
  FNumberFormattingOptions local_58;
  FNumberFormattingOptions local_38;
  
  if (this->Type == Text) {
    this_01 = GetTextValue(this);
    if (param_1) {
      FText::Rebuild(this_01);
    }
    if (param_2) {
      plVar6 = (longlong *)(**(code **)((longlong)*(this_01->TextData).Reference + 0x48))();
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_88);
      iVar11 = local_80 + -1;
      if (local_80 == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars(param_3,local_88,iVar11);
      if (local_88 != (wchar_t *)0x0) {
        FMemory::Free(local_88);
      }
    }
    else {
      FText::Rebuild(this_01);
      puVar7 = (undefined8 *)(**(code **)((longlong)*(this_01->TextData).Reference + 0x28))();
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = *(int *)(puVar7 + 1);
      lVar10 = (longlong)local_90;
      _Src = (void *)*puVar7;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90,0,&local_98,local_90,&local_8c);
        memcpy(local_98.Data,_Src,lVar10 * 2);
      }
      iVar11 = local_90 + -1;
      if (local_90 == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars(param_3,(wchar_t *)local_98.Data,iVar11);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
  }
  else if (this->Type != Gender) {
    pFVar8 = FInternationalization::Get();
    if (pFVar8->bIsInitialized != true) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x60c,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pFVar8->CurrentLocale).Object == (FCulture *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = (pFVar8->CurrentLocale).Object;
    pTVar3 = (pFVar8->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCulture *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar9 = FCulture::GetDecimalNumberFormattingRules(this_00);
    TVar2 = this->Type;
    pFVar1 = &pFVar9->CultureDefaultFormattingOptions;
    if (TVar2 == Int) {
      FastDecimalFormat::NumberToString<__int64>((this->field1_0x8).IntValue,pFVar9,pFVar1,param_3);
    }
    else if (TVar2 == UInt) {
      local_38.AlwaysSign = pFVar1->AlwaysSign;
      local_38.UseGrouping = pFVar1->UseGrouping;
      local_38.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
      local_38._3_1_ = pFVar1->field_0x3;
      local_38.RoundingMode = pFVar1->RoundingMode;
      local_38.MinimumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumIntegralDigits;
      local_38.MaximumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumIntegralDigits;
      local_38.MinimumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumFractionalDigits;
      local_38.MaximumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumFractionalDigits;
      FastDecimalFormat::Internal::IntegralToString
                (false,(this->field1_0x8).UIntValue,pFVar9,&local_38,param_3);
    }
    else if (TVar2 == Float) {
      local_58.AlwaysSign = pFVar1->AlwaysSign;
      local_58.UseGrouping = pFVar1->UseGrouping;
      local_58.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
      local_58._3_1_ = pFVar1->field_0x3;
      local_58.RoundingMode = pFVar1->RoundingMode;
      local_58.MinimumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumIntegralDigits;
      local_58.MaximumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumIntegralDigits;
      local_58.MinimumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumFractionalDigits;
      local_58.MaximumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumFractionalDigits;
      FastDecimalFormat::Internal::FractionalToString
                ((double)(this->field1_0x8).FloatValue,pFVar9,&local_58,param_3);
    }
    else if (TVar2 == Double) {
      local_78.AlwaysSign = pFVar1->AlwaysSign;
      local_78.UseGrouping = pFVar1->UseGrouping;
      local_78.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
      local_78._3_1_ = pFVar1->field_0x3;
      local_78.RoundingMode = pFVar1->RoundingMode;
      local_78.MinimumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumIntegralDigits;
      local_78.MaximumIntegralDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumIntegralDigits;
      local_78.MinimumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MinimumFractionalDigits;
      local_78.MaximumFractionalDigits =
           (pFVar9->CultureDefaultFormattingOptions).MaximumFractionalDigits;
      FastDecimalFormat::Internal::FractionalToString
                ((this->field1_0x8).DoubleValue,pFVar9,&local_78,param_3);
    }
  }
  return;
}

// FFormatArgumentValue @ 141be2ab0

FFormatArgumentValue * __thiscall
FFormatArgumentValue::FFormatArgumentValue(FFormatArgumentValue *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFormatArgumentValue *pFVar3;
  
  this->Type = Text;
  FText::FText((FText *)&this->TextValue,param_1);
  if ((this->TextValue).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFormatArgumentValue *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FFormatArgumentValue @ 141be2b10

FFormatArgumentValue * __thiscall
FFormatArgumentValue::FFormatArgumentValue(FFormatArgumentValue *this,FText *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FFormatArgumentValue *pFVar4;
  undefined1 local_res8 [8];
  
  this->Type = Text;
  (this->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->TextValue).field0_0x0.TypedValue.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->TextValue).field0_0x0.TypedValue.Flags = param_1->Flags;
  if ((this->TextValue).field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFormatArgumentValue *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

