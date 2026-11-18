// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// <lambda_invoker_cdecl> @ 141722090

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
`FTextFormatter::FTextFormatter'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2)

{
  FTextFormatArgumentModifier_PluralForm::Create(__return_storage_ptr__,Cardinal,param_1,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1417220c0

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
`FTextFormatter::FTextFormatter'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2)

{
  FTextFormatArgumentModifier_PluralForm::Create(__return_storage_ptr__,Ordinal,param_1,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1417220f0

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
`FTextFormatter::FTextFormatter'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2)

{
  FTextFormatArgumentModifier_GenderForm::Create(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141722130

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
`FTextFormatter::FTextFormatter'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2)

{
  FTextFormatArgumentModifier_HangulPostPositions::Create(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FTextFormatter @ 1417365f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextFormatter * __thiscall FTextFormatter::FTextFormatter(FTextFormatter *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  FTextFormatString local_78;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.StringLen = 6;
  (this->TextArgumentModifiers).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextArgumentModifiers).Pairs.ArrayNum = 0;
  (this->TextArgumentModifiers).Pairs.ArrayMax = 0;
  (this->TextArgumentModifiersRW).Mutex.Mutex.Ptr = (void *)0x0;
  local_30 = (undefined ***)0x0;
  local_40 = `FTextFormatter::FTextFormatter'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VITextFormatArgumentModifier___00__AEBVFTextFormatString__AEBV__TSharedRef___CBVFTextFormatPatternDefinition___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),TSharedPtr<ITextFormatArgumentModifier,1>,FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                ::Call;
  local_78.StringPtr = L"plural";
  local_78.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.InternalString.Data.ArrayNum = 0;
  local_78.InternalString.Data.ArrayMax = 0;
  TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  ::
  Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            (&this->TextArgumentModifiers,&local_78,
             (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
              *)local_58);
  if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = `FTextFormatter::FTextFormatter'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VITextFormatArgumentModifier___00__AEBVFTextFormatString__AEBV__TSharedRef___CBVFTextFormatPatternDefinition___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),TSharedPtr<ITextFormatArgumentModifier,1>,FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                ::Call;
  local_78.StringPtr = L"ordinal";
  local_78.StringLen = 7;
  local_78.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.InternalString.Data.ArrayNum = 0;
  local_78.InternalString.Data.ArrayMax = 0;
  TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  ::
  Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            (&this->TextArgumentModifiers,&local_78,
             (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
              *)local_58);
  if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = `FTextFormatter::FTextFormatter'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VITextFormatArgumentModifier___00__AEBVFTextFormatString__AEBV__TSharedRef___CBVFTextFormatPatternDefinition___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),TSharedPtr<ITextFormatArgumentModifier,1>,FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                ::Call;
  local_78.StringPtr = L"gender";
  local_78.StringLen = 6;
  local_78.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.InternalString.Data.ArrayNum = 0;
  local_78.InternalString.Data.ArrayMax = 0;
  TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  ::
  Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            (&this->TextArgumentModifiers,&local_78,
             (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
              *)local_58);
  if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = `FTextFormatter::FTextFormatter'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VITextFormatArgumentModifier___00__AEBVFTextFormatString__AEBV__TSharedRef___CBVFTextFormatPatternDefinition___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),TSharedPtr<ITextFormatArgumentModifier,1>,FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                ::Call;
  local_78.StringPtr = L"hpp";
  local_78.StringLen = 3;
  local_78.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.InternalString.Data.ArrayNum = 0;
  local_78.InternalString.Data.ArrayMax = 0;
  TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  ::
  Emplace<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            (&this->TextArgumentModifiers,&local_78,
             (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
              *)local_58);
  if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return this;
}

// operator() @ 14173c290

FFormatArgumentValue * __thiscall
`FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()
          (void *this,FArgumentTokenSpecifier *param_1,int param_2)

{
  FFormatArgumentData *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FFormatArgumentValue *pFVar6;
  wchar_t *_Str2;
  FFormatArgumentData *this_00;
  undefined1 local_res8 [8];
  FFormatArgumentValue local_48;
  
  plVar2 = *(longlong **)this;
  lVar3 = plVar2[1];
  this_00 = (FFormatArgumentData *)*plVar2;
  pFVar1 = this_00 + (int)lVar3;
  do {
    if ((int)plVar2[1] != (int)lVar3) {
      `TCheckedPointerIterator<FFormatArgumentData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      return (FFormatArgumentValue *)0x0;
    }
    iVar5 = (this_00->ArgumentName).Data.ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (param_1->ArgumentNameLen == iVar4) {
      if (iVar5 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(this_00->ArgumentName).Data.AllocatorInstance.Data;
      }
      iVar5 = wcsncmp(param_1->ArgumentNameStartPos,_Str2,(longlong)param_1->ArgumentNameLen);
      if (iVar5 == 0) {
        pFVar6 = FFormatArgumentData::ToArgumentValue(this_00,&local_48);
        FFormatArgumentValue::operator=
                  ((FFormatArgumentValue *)**(undefined8 **)((longlong)this + 8),pFVar6);
        if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        return (FFormatArgumentValue *)**(undefined8 **)((longlong)this + 8);
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// operator() @ 14173c370

/* WARNING: Enum "Type": Some values do not have unique names */

FFormatArgumentValue * __thiscall
`FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()
          (void *this,FArgumentTokenSpecifier *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FFormatArgumentValue *pFVar4;
  int iVar5;
  FString local_18;
  
  iVar5 = param_1->ArgumentIndex;
  if ((param_1->ArgumentIndex == -1) && (iVar5 = param_2, 2 < (byte)LogTextFormatter._0_1_)) {
    ::FString::ConstructFromPtrSize
              (&local_18,param_1->ArgumentNameStartPos,param_1->ArgumentNameLen);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTextFormatter);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((-1 < iVar5) && (plVar1 = *(longlong **)this, iVar5 < (int)plVar1[1])) {
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFormatArgumentValue *)(*pcVar2)();
      return pFVar4;
    }
    return (FFormatArgumentValue *)((longlong)iVar5 * 0x20 + *plVar1);
  }
  return (FFormatArgumentValue *)0x0;
}

// operator() @ 14173c490

FFormatArgumentValue * __thiscall
`FTextFormatter::FormatStr'::__l2::<lambda_1>::operator()
          (void *this,FArgumentTokenSpecifier *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Str2;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)this;
  lVar2 = plVar1[1];
  puVar5 = (undefined8 *)*plVar1;
  puVar6 = puVar5 + (longlong)(int)lVar2 * 6;
  do {
    if ((int)plVar1[1] != (int)lVar2) {
      `TCheckedPointerIterator<TTuple<FString,FFormatArgumentValue>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar6) {
      return (FFormatArgumentValue *)0x0;
    }
    iVar4 = *(int *)(puVar5 + 1);
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    if (param_1->ArgumentNameLen == iVar3) {
      if (iVar4 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)*puVar5;
      }
      iVar4 = wcsncmp(param_1->ArgumentNameStartPos,_Str2,(longlong)param_1->ArgumentNameLen);
      if (iVar4 == 0) {
        return (FFormatArgumentValue *)(puVar5 + 2);
      }
    }
    puVar5 = puVar5 + 6;
  } while( true );
}

// ArgumentValueToFormattedString @ 1417455f0

void __cdecl
FTextFormatter::ArgumentValueToFormattedString
          (FFormatArgumentValue *param_1,FPrivateTextFormatArguments *param_2,FString *param_3)

{
  FFormatArgumentValue::ToFormattedString
            (param_1,param_2->bRebuildText,param_2->bRebuildAsSource,param_3);
  return;
}

// EstimateArgumentValueLength @ 141754510

int __cdecl FTextFormatter::EstimateArgumentValueLength(FFormatArgumentValue *param_1)

{
  Type TVar1;
  int iVar2;
  FText *this;
  longlong lVar3;
  
  TVar1 = param_1->Type;
  if ((((TVar1 != Int) && (TVar1 != UInt)) && (TVar1 != Float)) && (TVar1 != Double)) {
    if (TVar1 != Text) {
      return 0;
    }
    this = FFormatArgumentValue::GetTextValue(param_1);
    FText::Rebuild(this);
    lVar3 = (**(code **)((longlong)*(this->TextData).Reference + 0x28))();
    iVar2 = *(int *)(lVar3 + 8) + -1;
    if (*(int *)(lVar3 + 8) == 0) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0x14;
}

// FindTextArgumentModifier @ 141758650

TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
* __thiscall
FTextFormatter::FindTextArgumentModifier
          (FTextFormatter *this,
          TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *__return_storage_ptr__,FTextFormatString *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
  *pTVar3;
  undefined8 *puVar4;
  
  SRWLock = &this->TextArgumentModifiersRW;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar3 = TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           ::Find(&this->TextArgumentModifiers,param_1);
  if (pTVar3 == (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                 *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar3;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    if (*(longlong *)__return_storage_ptr__ != 0) {
      puVar4 = (undefined8 *)&pTVar3->field_0x10;
      if (*(undefined8 **)&pTVar3->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&pTVar3->field_0x28;
      }
      (**(code **)*puVar4)();
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// Format @ 141759220

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __cdecl
FTextFormatter::Format
          (FString *__return_storage_ptr__,FTextFormat *param_1,FPrivateTextFormatArguments *param_2
          )

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  ETextFormatFlags EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  FString *pFVar8;
  FSharedReferencer<1> FVar9;
  FTextFormatData *this_00;
  ETextFormatFlags local_res8 [8];
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_58;
  TSharedRef<FTextFormatData,1> local_48;
  FText local_38;
  FString local_28;
  
  pTVar3 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->TextFormatData).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar9.ReferenceController = pTVar3;
  this_00 = pFVar4;
  if (param_2->bRebuildAsSource != false) {
    FTextFormat::GetSourceText(param_1,&local_38);
    if (param_2->bRebuildText != false) {
      FText::Rebuild(&local_38);
    }
    local_58.Object = (pFVar4->PatternDef).Object;
    EVar2 = pFVar4->FormatFlags;
    local_58.SharedReferenceCount.ReferenceController =
         (pFVar4->PatternDef).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar7 = (longlong *)
             (**(code **)((longlong)*local_38.TextData.Reference + 0x48))
                       (local_38.TextData.Reference);
    (**(code **)(*plVar7 + 0x68))(plVar7,&local_28);
    local_res8[0] = EVar2;
    MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
              (&local_48,&local_28,local_res8,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FVar9.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    this_00 = local_48.Object;
    local_48.Object = pFVar4;
    local_48.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
    }
  }
  this = &this_00->CompiledDataMutex;
  if ((this == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar5)();
    return pFVar8;
  }
  LOCK();
  bVar6 = this->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this);
  }
  FTextFormatData::Format_NoLock(this_00,__return_storage_ptr__,param_2);
  if (this != (FMutex *)0x0) {
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return __return_storage_ptr__;
}

// Format @ 1417593d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FTextFormatter::Format
          (FText *__return_storage_ptr__,FTextFormat *param_1,
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FTextHistory *this;
  FTextHistory *pFVar2;
  FString local_18;
  
  FormatStr(&local_18,param_1,param_2,param_3,param_4);
  this = ::operator_new(0x48);
  pFVar2 = (FTextHistory *)0x0;
  if (this != (FTextHistory *)0x0) {
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_18.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_18.Data.ArrayMax;
    this[1].LocalRevision = local_18.Data.ArrayMax._2_2_;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_ArgumentDataFormat__6B_;
    *(FTextFormatData **)&this[1].Mutex = (param_1->TextFormatData).Object;
    pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
    this[2]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(FScriptContainerElement **)&this[2]._padding_ = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = param_2->ArrayNum;
    *(int *)&this[2].field_0x14 = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar2 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar2;
  __return_storage_ptr__->Flags = 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Format @ 1417594e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FTextFormatter::Format
          (FText *__return_storage_ptr__,FTextFormat *param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FTextHistory *this;
  FTextHistory *pFVar2;
  FString local_18;
  
  FormatStr(&local_18,param_1,param_2,param_3,param_4);
  this = ::operator_new(0x48);
  pFVar2 = (FTextHistory *)0x0;
  if (this != (FTextHistory *)0x0) {
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_18.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_18.Data.ArrayMax;
    this[1].LocalRevision = local_18.Data.ArrayMax._2_2_;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_OrderedFormat__6B_;
    *(FTextFormatData **)&this[1].Mutex = (param_1->TextFormatData).Object;
    pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
    this[2]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(FScriptContainerElement **)&this[2]._padding_ = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = param_2->ArrayNum;
    *(int *)&this[2].field_0x14 = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar2 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar2;
  __return_storage_ptr__->Flags = 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Format @ 1417595f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FTextFormatter::Format
          (FText *__return_storage_ptr__,FTextFormat *param_1,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_2,bool param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FTextHistory *this;
  FTextHistory *pFVar2;
  FString local_18;
  
  FormatStr(&local_18,param_1,param_2,param_3,param_4);
  this = ::operator_new(0x48);
  pFVar2 = (FTextHistory *)0x0;
  if (this != (FTextHistory *)0x0) {
    this->_padding_ = 0;
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
    (this->Mutex).State = (atomic<unsigned_char>)0x0;
    this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    this[1]._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = local_18.Data.ArrayNum;
    this[1].GlobalRevision = (undefined2)local_18.Data.ArrayMax;
    this[1].LocalRevision = local_18.Data.ArrayMax._2_2_;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(this);
    this->_padding_ = (longlong)&___7FTextHistory_NamedFormat__6B_;
    *(FTextFormatData **)&this[1].Mutex = (param_1->TextFormatData).Object;
    pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
    this[2]._padding_ = (longlong)pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    this[2]._padding_ = 0;
    this[2].GlobalRevision = 0;
    this[2].LocalRevision = 0;
    *(FScriptContainerElement **)&this[2]._padding_ = (param_2->Pairs).AllocatorInstance.Data;
    (param_2->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this[2].Mutex = (param_2->Pairs).ArrayNum;
    *(int *)&this[2].field_0x14 = (param_2->Pairs).ArrayMax;
    (param_2->Pairs).ArrayNum = 0;
    (param_2->Pairs).ArrayMax = 0;
    LOCK();
    this->_padding_ = this->_padding_ + 1;
    UNLOCK();
    pFVar2 = this;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar2;
  __return_storage_ptr__->Flags = 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FormatStr @ 141759760

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FTextFormatter::FormatStr
          (FString *__return_storage_ptr__,FTextFormat *param_1,
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FInternationalization *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  FText *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined4 *local_b8;
  TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *local_b0;
  undefined4 **local_a8;
  code *local_a0;
  TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> **local_98;
  int local_90;
  bool local_8c;
  bool local_8b;
  int local_88;
  TOptional<FText>_u_0 local_78;
  undefined4 local_68 [4];
  TOptional<FText>_u_0 local_58;
  
  local_res20 = param_3;
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (((bVar5) && (pFVar7 = FInternationalization::Get(), pFVar7->bIsInitialized != true)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FInternationalization::Get().IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextFormatter.cpp"
                         ,0x465,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  iVar2 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  iVar11 = 0;
  pFVar1 = pFVar12 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FFormatArgumentData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar1) break;
    local_88 = 4;
    TOptional<FText>::TOptional<FText>
              ((TOptional<FText> *)&local_78.TypedValue,(FText *)(pFVar12 + 0x18));
    uVar4 = local_78.TypedValue.TextData.Reference;
    if (((local_88 == 0) || (local_88 == 1)) || ((local_88 == 2 || (local_88 == 3)))) {
      iVar6 = 0x14;
    }
    else if (local_88 == 4) {
      if ((local_78.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      FText::Rebuild(&local_78.TypedValue);
      lVar9 = (**(code **)((longlong)*(ITextData *)uVar4 + 0x28))(uVar4);
      iVar6 = *(int *)(lVar9 + 8) + -1;
      if (*(int *)(lVar9 + 8) == 0) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0;
    }
    iVar11 = iVar11 + iVar6;
    if ((ITextData *)uVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)uVar4 + 0x10))(uVar4);
    }
    pFVar12 = pFVar12 + 0x48;
  }
  local_68[0] = 4;
  pFVar10 = FText::GetEmpty();
  TOptional<FText>::TOptional<FText>((TOptional<FText> *)&local_58.TypedValue,pFVar10);
  local_b8 = local_68;
  local_a8 = &local_b8;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
             ::Call;
  local_98 = &local_b0;
  local_8c = (bool)local_res20;
  local_8b = param_4;
  local_b0 = param_2;
  local_90 = iVar11;
  Format(__return_storage_ptr__,param_1,(FPrivateTextFormatArguments *)&local_a0);
  if (local_58.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58.TypedValue.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// FormatStr @ 141759970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FTextFormatter::FormatStr
          (FString *__return_storage_ptr__,FTextFormat *param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  Type TVar2;
  FTextFormatData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FInternationalization *pFVar7;
  FString *pFVar8;
  FText *this;
  longlong lVar9;
  FFormatArgumentValue *pFVar10;
  int iVar11;
  FFormatArgumentValue *this_00;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *local_68;
  FString *local_60;
  code *local_58;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> **local_50;
  int local_48;
  bool local_44;
  bool local_43;
  
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar5) {
    pFVar7 = FInternationalization::Get();
    if (pFVar7->bIsInitialized != true) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FInternationalization::Get().IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextFormatter.cpp"
                         ,0x445,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  iVar1 = param_2->ArrayNum;
  this_00 = (FFormatArgumentValue *)(param_2->AllocatorInstance).Data;
  iVar11 = 0;
  pFVar10 = this_00 + iVar1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFormatArgumentValue_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar10) break;
    TVar2 = this_00->Type;
    if ((((TVar2 == Int) || (TVar2 == UInt)) || (TVar2 == Float)) || (TVar2 == Double)) {
      iVar11 = iVar11 + 0x14;
      this_00 = this_00 + 1;
    }
    else if (TVar2 == Text) {
      this = FFormatArgumentValue::GetTextValue(this_00);
      FText::Rebuild(this);
      lVar9 = (**(code **)((longlong)*(this->TextData).Reference + 0x28))();
      iVar6 = *(int *)(lVar9 + 8) + -1;
      if (*(int *)(lVar9 + 8) == 0) {
        iVar6 = 0;
      }
      iVar11 = iVar11 + iVar6;
      this_00 = this_00 + 1;
    }
    else {
      this_00 = this_00 + 1;
    }
  }
  pFVar3 = (param_1->TextFormatData).Object;
  if (pFVar3->SourceType == Text) {
    FText::Rebuild(&pFVar3->SourceText);
    local_60 = (FString *)(**(code **)((longlong)*(pFVar3->SourceText).TextData.Reference + 0x28))()
    ;
  }
  else {
    local_60 = &pFVar3->SourceExpression;
  }
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
             ::Call;
  local_50 = &local_68;
  local_43 = param_4;
  local_68 = param_2;
  local_48 = iVar11;
  local_44 = param_3;
  Format(__return_storage_ptr__,param_1,(FPrivateTextFormatArguments *)&local_58);
  return __return_storage_ptr__;
}

// FormatStr @ 141759b10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FTextFormatter::FormatStr
          (FString *__return_storage_ptr__,FTextFormat *param_1,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_2,bool param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  FText *this;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
  *local_res8;
  FTextFormat *local_res10;
  undefined1 local_res20 [8];
  code *local_58;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
  **local_50;
  int local_48;
  bool local_44;
  bool local_43;
  
  local_res10 = param_1;
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar3) {
    pFVar5 = FInternationalization::Get();
    if (pFVar5->bIsInitialized != true) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FInternationalization::Get().IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextFormatter.cpp"
                         ,0x429,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  iVar1 = (param_2->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar10 = (param_2->Pairs).AllocatorInstance.Data;
  pFVar8 = pFVar10 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_2->Pairs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,FFormatArgumentValue>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar8) break;
    iVar4 = *(int *)(pFVar10 + 0x10);
    if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || (iVar4 == 3)) {
      iVar9 = iVar9 + 0x14;
      pFVar10 = pFVar10 + 0x30;
    }
    else if (iVar4 == 4) {
      this = FFormatArgumentValue::GetTextValue((FFormatArgumentValue *)(pFVar10 + 0x10));
      FText::Rebuild(this);
      lVar7 = (**(code **)((longlong)*(this->TextData).Reference + 0x28))();
      iVar4 = *(int *)(lVar7 + 8) + -1;
      if (*(int *)(lVar7 + 8) == 0) {
        iVar4 = 0;
      }
      iVar9 = iVar9 + iVar4;
      pFVar10 = pFVar10 + 0x30;
    }
    else {
      pFVar10 = pFVar10 + 0x30;
    }
  }
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextFormatter::FormatStr'::__l2::<lambda_1>,FFormatArgumentValue_const_*,TextFormatTokens::FArgumentTokenSpecifier_const_&,int>
             ::Call;
  local_50 = &local_res8;
  local_43 = param_4;
  local_res8 = param_2;
  local_48 = iVar9;
  local_44 = param_3;
  Format(__return_storage_ptr__,local_res10,(FPrivateTextFormatArguments *)&local_58);
  return __return_storage_ptr__;
}

// Get @ 14175b610

FTextFormatter * __cdecl FTextFormatter::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTextFormatter(&TextFormatter);
      atexit(`FTextFormatter::Get'::__l2::_dynamic_atexit_destructor_for__TextFormatter__);
      _Init_thread_footer(&::_TSS0);
      return &TextFormatter;
    }
  }
  return &TextFormatter;
}

// RegisterTextArgumentModifier @ 1417733c0

void __thiscall
FTextFormatter::RegisterTextArgumentModifier
          (FTextFormatter *this,FTextFormatString *param_1,
          TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
          *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  SRWLock = &this->TextArgumentModifiersRW;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  ::
  Emplace<FTextFormatString_const_&,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
            (&this->TextArgumentModifiers,param_1,param_2);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// UnregisterTextArgumentModifier @ 141781e90

void __thiscall
FTextFormatter::UnregisterTextArgumentModifier(FTextFormatter *this,FTextFormatString *param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  SRWLock = &this->TextArgumentModifiersRW;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
                      *)this,param_1,local_res8,(TLess<FTextFormatString_const_&>)local_res8);
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < (this->TextArgumentModifiers).Pairs.ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    _Dst = (this->TextArgumentModifiers).Pairs.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50;
    if (*(longlong *)(_Dst + 0x20) != 0) {
      pFVar7 = _Dst + 0x30;
      if (*(FScriptContainerElement **)(_Dst + 0x48) != (FScriptContainerElement *)0x0) {
        pFVar7 = *(FScriptContainerElement **)(_Dst + 0x48);
      }
      (**(code **)(*(longlong *)pFVar7 + 0x10))();
    }
    if (*(void **)(_Dst + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 0x10));
    }
    iVar6 = (this->TextArgumentModifiers).Pairs.ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x50,(longlong)iVar6 * 0x50);
    }
    piVar1 = &(this->TextArgumentModifiers).Pairs.ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,(ForAnyElementType *)this,(this->TextArgumentModifiers).Pairs.ArrayNum,
               &(this->TextArgumentModifiers).Pairs.ArrayMax);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141781fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  return;
}

