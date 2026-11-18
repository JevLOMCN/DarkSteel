// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// GetFieldSize @ 141f81c70

ulong64 __thiscall FNameProperty::GetFieldSize(FNameProperty *this)

{
  return 0x70;
}

// FNameProperty @ 1421619b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FNameProperty * __thiscall
FNameProperty::FNameProperty
          (FNameProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_VFName__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FNameProperty__6B_;
  return this;
}

// FNameProperty @ 142161a90

FNameProperty * __thiscall
FNameProperty::FNameProperty
          (FNameProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_VFName__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FNameProperty__6B_;
  return this;
}

// Construct @ 14216bdf0

FField * __cdecl
FNameProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  if (this == (FProperty *)0x0) {
    return (FField *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FNameProperty",0x2000,
                 CASTCLASS_FProperty|CASTCLASS_FNameProperty|CASTCLASS_UField,pFVar2,Construct);
      atexit(`FNameProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this->_padding_ = (longlong)&___7FNameProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216bedc;
      goto LAB_14216bef5;
    }
LAB_14216bf19:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216bf38;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216bedc:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14216bef5:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216bf19;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216bf19;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216bf38:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_VFName__VFProperty____6B_;
  FProperty::SetElementSize(this,8);
  this->_padding_ = (longlong)&___7FNameProperty__6B_;
  return (FField *)this;
}

// ConvertFromType @ 14216fe50

EConvertFromTypeResult __thiscall
FNameProperty::ConvertFromType
          (FNameProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FNameEntryId FVar5;
  EConvertFromTypeResult EVar6;
  undefined4 extraout_var;
  FName *pFVar7;
  undefined4 extraout_var_00;
  FString *pFVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FName FVar12;
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  FName local_50;
  FName local_48;
  FString local_40;
  FText local_30;
  
  FVar2 = param_1->Type;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar12.Number = 0;
  FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (FVar2 == FVar12) {
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_40);
    iVar1 = param_1->ArrayIndex;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar10.Data = local_40.Data.AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_48,(wchar_t *)FVar10.Data);
    FVar2 = *pFVar7;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    *(FName *)(param_3 +
              (longlong)*(int *)&this->field_0x44 +
              (longlong)iVar1 * (longlong)*(int *)&this->field_0x34) = FVar2;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return Converted;
    }
  }
  else {
    FVar2 = param_1->Type;
    FVar5 = FNameEntryId::FromValidEName((EName)local_58);
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    if (FVar2 != FVar9) {
      return UseSerializeItem;
    }
    FText::FText(&local_30);
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x170))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_30);
    pFVar8 = FText::ToString(&local_30);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_50,pwVar11);
    iVar1 = param_1->ArrayIndex;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    *(FName *)(param_3 +
              (longlong)*(int *)&this->field_0x44 +
              (longlong)iVar1 * (longlong)*(int *)&this->field_0x34) = local_50;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
  }
  return Converted;
}

// ExportText_Internal @ 142176b50

void __thiscall
FNameProperty::ExportText_Internal
          (FNameProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FName local_38;
  FString local_30;
  FString local_20;
  
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  if (param_3 == Container) {
    cVar2 = (**(code **)(*(longlong *)this + 0x78))();
    if (cVar2 != '\0') {
      FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_38);
      goto LAB_142176baf;
    }
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  local_38 = *(FName *)param_2;
LAB_142176baf:
  if ((param_6 & 1U) == 0) {
    pFVar3 = ::FName::ToString(&local_38,&local_30);
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else if (local_38 == (FName)0x0) {
    ::FString::AppendChars(param_1,L"\"\"",2);
  }
  else {
    pFVar3 = ::FName::ToString(&local_38,&local_20);
    ::FString::ReplaceCharWithEscapedCharInline
              (pFVar3,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&local_30,L"\"%s\"");
    iVar5 = local_30.Data.ArrayNum + -1;
    if (local_30.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_30.Data.AllocatorInstance.Data,iVar5);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetValueTypeHashInternal @ 14217de50

uint __thiscall FNameProperty::GetValueTypeHashInternal(FNameProperty *this,void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// ImportText_Internal @ 142181320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
FNameProperty::ImportText_Internal
          (FNameProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  FName *pFVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined1 auStack_278 [32];
  FName local_258;
  FName local_250;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((param_5 & 1U) == 0) {
    pFVar2 = ::FName::FName(&local_250,param_1);
    local_258 = *pFVar2;
    sVar3 = wcslen(param_1);
    pwVar4 = param_1 + (int)sVar3;
  }
  else {
    local_248.Base = local_228;
    local_248.bIsDynamic = false;
    local_248.bIsExternal = false;
    local_248.CurPos = local_228;
    local_248.End = (wchar_t *)local_28;
    pwVar4 = FPropertyHelpers::ReadToken(param_1,&local_248,true);
    if (pwVar4 == (wchar_t *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
      return (wchar_t *)0x0;
    }
    pFVar2 = ::FName::FName(&local_250,
                            (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1),
                            local_248.Base,FNAME_Add);
    local_258 = *pFVar2;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  }
  if (param_3 == Container) {
    cVar1 = (**(code **)(*(longlong *)this + 0x70))(this);
    if (cVar1 != '\0') {
      FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_258);
      return pwVar4;
    }
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  *(FName *)param_2 = local_258;
  return pwVar4;
}

// StaticClass @ 142193ac0

FFieldClass * __cdecl FNameProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FNameProperty",0x2000,
                 CASTCLASS_FProperty|CASTCLASS_FNameProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FNameProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

