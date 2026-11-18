// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 403

// `dynamic_initializer_for_'FJsonAutomationTestInstance'' @ 140f1c6d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FJsonAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FJsonAutomationTest");
  FJsonAutomationTest::FJsonAutomationTest(&FJsonAutomationTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FJsonAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FJsonConversionAutomationTestInstance'' @ 140f1c720

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FJsonConversionAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FJsonConversionAutomationTest");
  FJsonConversionAutomationTest::FJsonConversionAutomationTest
            (&FJsonConversionAutomationTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FJsonConversionAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FJsonPointerSpecAutomationSpecInstance'' @ 140f1c770

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FJsonPointerSpecAutomationSpecInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FJsonPointerSpec");
  FAutomationSpecBase::FAutomationSpecBase
            ((FAutomationSpecBase *)&FJsonPointerSpecAutomationSpecInstance,&local_18,false);
  FJsonPointerSpecAutomationSpecInstance._padding_ = (longlong)&___7FJsonPointerSpec__6B_;
  FJsonPointerSpecAutomationSpecInstance.JsonObject.Object = (FJsonObject *)0x0;
  FJsonPointerSpecAutomationSpecInstance.JsonObject.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FJsonPointerSpecAutomationSpecInstance__);
  return;
}

// `dynamic_initializer_for_'FJsonSerializerMacrosTestInstance'' @ 140f1c7e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FJsonSerializerMacrosTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FJsonSerializerMacrosTest");
  FJsonSerializerMacrosTest::FJsonSerializerMacrosTest(&FJsonSerializerMacrosTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FJsonSerializerMacrosTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRapidJsonUtilsErrorHandlingTestsInstance'' @ 140f1c830

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRapidJsonUtilsErrorHandlingTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRapidJsonUtilsErrorHandlingTests");
  FRapidJsonUtilsErrorHandlingTests::FRapidJsonUtilsErrorHandlingTests
            (&FRapidJsonUtilsErrorHandlingTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRapidJsonUtilsErrorHandlingTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FRapidJsonUtilsParseEmptyInstance'' @ 140f1c880

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRapidJsonUtilsParseEmptyInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRapidJsonUtilsParseEmpty");
  FRapidJsonUtilsParseEmpty::FRapidJsonUtilsParseEmpty(&FRapidJsonUtilsParseEmptyInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRapidJsonUtilsParseEmptyInstance__);
  return;
}

// `dynamic_initializer_for_'FRapidJsonUtilsTestsInstance'' @ 140f1c8d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FRapidJsonUtilsTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRapidJsonUtilsTests");
  FRapidJsonUtilsTests::FRapidJsonUtilsTests(&FRapidJsonUtilsTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRapidJsonUtilsTestsInstance__);
  return;
}

// `dynamic_initializer_for_'LogJson'' @ 140f1c920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogJson__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogJson,L"LogJson",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogJson__);
  return;
}

// `dynamic_initializer_for_'LogJsonConversion'' @ 140f1c960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogJsonConversion__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogJsonConversion,L"LogJsonConversion",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogJsonConversion__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantJson'' @ 140f1c9a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantJson__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Json";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Json",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FJsonModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 141d9f300

void * __thiscall FJsonModule::_scalar_deleting_destructor_(FJsonModule *this,uint param_1)

{
  *this = (FJsonModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d9f5b0

void * __thiscall
FJsonSerializerMacrosTest::_scalar_deleting_destructor_
          (FJsonSerializerMacrosTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d9f870

void * __thiscall
FRapidJsonUtilsTests::_scalar_deleting_destructor_(FRapidJsonUtilsTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d9fb30

void * __thiscall
FRapidJsonUtilsErrorHandlingTests::_scalar_deleting_destructor_
          (FRapidJsonUtilsErrorHandlingTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141d9fdf0

void * __thiscall
FRapidJsonUtilsParseEmpty::_scalar_deleting_destructor_
          (FRapidJsonUtilsParseEmpty *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141da0860

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpec,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpec>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationSpecBase::FSpec,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpec>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141da0b10

void * __thiscall
FJsonConversionAutomationTest::_scalar_deleting_destructor_
          (FJsonConversionAutomationTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141da0d20

void * __thiscall
FJsonPointerSpec::_scalar_deleting_destructor_(FJsonPointerSpec *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonObject).SharedReferenceCount.ReferenceController);
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141da0d70

void * __thiscall
FAutomationSpecBase::_scalar_deleting_destructor_(FAutomationSpecBase *this,uint param_1)

{
  ~FAutomationSpecBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141da1020

void * __thiscall
FJsonAutomationTest::_scalar_deleting_destructor_(FJsonAutomationTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_> @ 141da1a80

bool __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this,
          PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          *param_1)

{
  Number NVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *pSVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  ushort uVar8;
  uint uVar9;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar10;
  wchar_t *pwVar11;
  wchar_t wVar12;
  
  uVar8 = (this->data_).f.flags & 7;
  switch(uVar8) {
  case 0:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kNullType);
    bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::WriteNull((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                         *)param_1);
    break;
  case 1:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kFalseType);
    pSVar2 = (Stack<UE::Json::Private::FAllocatorImpl> *)param_1->_padding_;
    if ((longlong)pSVar2->stackEnd_ - (longlong)pSVar2->stackTop_ < 10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(pSVar2,5);
    }
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'f');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'a');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'l');
    wVar12 = L's';
    goto LAB_141da1b34;
  case 2:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kTrueType);
    pSVar2 = (Stack<UE::Json::Private::FAllocatorImpl> *)param_1->_padding_;
    if ((longlong)pSVar2->stackEnd_ - (longlong)pSVar2->stackTop_ < 8) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(pSVar2,4);
    }
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L't');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'r');
    wVar12 = L'u';
LAB_141da1b34:
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,wVar12);
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'e');
    bVar6 = true;
    break;
  case 3:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kObjectType);
    if (param_1->_padding_ - param_1->_padding_ < 0x10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::
      Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level>
                ((Stack<UE::Json::Private::FAllocatorImpl> *)&param_1->_padding_,1);
    }
    if ((param_1->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((param_1->_padding_ - param_1->_padding_ < 0x10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    puVar3 = (undefined8 *)param_1->_padding_;
    param_1->_padding_ = (longlong)(puVar3 + 2);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'{');
    if (((this->data_).f.flags != 3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x4fd,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pGVar10 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              ((ulonglong)(this->data_).s.str & 0xffffffffffff);
    while( true ) {
      if (((this->data_).f.flags != 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x500,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (pGVar10 ==
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          ((ulonglong)(this->data_).s.length * 0x20 +
          ((ulonglong)(this->data_).s.str & 0xffffffffffff))) {
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Base::level_stack_.GetSize() >= sizeof(typename Base::Level)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                               ,0x8b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((*(char *)(param_1->_padding_ + -8) != '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Base::level_stack_.template Top<typename Base::Level>()->inArray",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                               ,0x8c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((*(byte *)(param_1->_padding_ + -0x10) & 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("0 == Base::level_stack_.template Top<typename Base::Level>()->valueCount % 2"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                               ,0x8d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= count * sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x8b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        param_1->_padding_ = param_1->_padding_ + -0x10;
        if (*(longlong *)param_1->_padding_ != 0) {
          GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                    ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      *)param_1->_padding_,L'\n');
          PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          ::WriteIndent(param_1);
        }
        GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                  ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    *)param_1->_padding_,L'}');
        return true;
      }
      if (((pGVar10->data_).f.flags & 0x400) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("m->name.IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x7af,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((((pGVar10->data_).f.flags & 0x400) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsString()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x74b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (((pGVar10->data_).f.flags & 0x1000) == 0) {
        uVar9 = (pGVar10->data_).s.length;
      }
      else {
        uVar9 = 6 - (ushort)(pGVar10->data_).ss.str[6];
      }
      pwVar11 = GetString(pGVar10);
      if ((pwVar11 == (wchar_t *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("str != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                             ,0x6f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
      ::PrettyPrefix(param_1,kStringType);
      bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                             *)param_1,pwVar11,uVar9);
      if ((!bVar6) ||
         (bVar6 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
                            (pGVar10 + 1,param_1), !bVar6)) break;
      pGVar10 = pGVar10 + 2;
    }
    goto LAB_141da203f;
  case 4:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kArrayType);
    if (param_1->_padding_ - param_1->_padding_ < 0x10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::
      Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level>
                ((Stack<UE::Json::Private::FAllocatorImpl> *)&param_1->_padding_,1);
    }
    if ((param_1->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((param_1->_padding_ - param_1->_padding_ < 0x10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    puVar3 = (undefined8 *)param_1->_padding_;
    param_1->_padding_ = (longlong)(puVar3 + 2);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 1;
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               param_1->_padding_,L'[');
    pGVar10 = Begin(this);
    while( true ) {
      if (((this->data_).f.flags != 4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x699,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (pGVar10 ==
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          ((ulonglong)(this->data_).s.length * 0x10 +
          ((ulonglong)(this->data_).s.str & 0xffffffffffff))) {
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Base::level_stack_.GetSize() >= sizeof(typename Base::Level)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                               ,0xa5,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((*(char *)(param_1->_padding_ + -8) == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Base::level_stack_.template Top<typename Base::Level>()->inArray",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                               ,0xa6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((ulonglong)(param_1->_padding_ - param_1->_padding_) < 0x10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= count * sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x8b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        param_1->_padding_ = param_1->_padding_ + -0x10;
        if ((*(longlong *)param_1->_padding_ != 0) &&
           ((param_1->formatOptions_ & kFormatSingleLineArray) == kFormatDefault)) {
          GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                    ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      *)param_1->_padding_,L'\n');
          PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          ::WriteIndent(param_1);
        }
        GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                  ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    *)param_1->_padding_,L']');
        return true;
      }
      bVar6 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
                        (pGVar10,param_1);
      if (!bVar6) break;
      pGVar10 = pGVar10 + 1;
    }
LAB_141da203f:
    bVar6 = false;
    break;
  case 5:
    uVar9 = GetStringLength(this);
    pwVar11 = GetString(this);
    if ((pwVar11 == (wchar_t *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("str != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                           ,0x6f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::PrettyPrefix(param_1,kStringType);
    bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                           *)param_1,pwVar11,uVar9);
    break;
  default:
    if ((uVar8 != 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetType() == kNumberType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x7c3,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar8 = (this->data_).f.flags;
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 & 0x20) == 0) {
        if ((uVar8 & 0x40) == 0) {
          uVar4 = *(ulong64 *)&this->data_;
          if ((char)uVar8 < '\0') {
            PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::PrettyPrefix(param_1,kNumberType);
            bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                    ::WriteInt64((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                                  *)param_1,uVar4);
          }
          else {
            PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::PrettyPrefix(param_1,kNumberType);
            bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                    ::WriteUint64((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                                   *)param_1,uVar4);
          }
        }
        else {
          uVar9 = (this->data_).s.length;
          PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          ::PrettyPrefix(param_1,kNumberType);
          bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                  ::WriteUint((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                               *)param_1,uVar9);
        }
      }
      else {
        uVar9 = (this->data_).s.length;
        PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
        ::PrettyPrefix(param_1,kNumberType);
        bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                ::WriteInt((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                            *)param_1,uVar9);
      }
    }
    else {
      NVar1 = (this->data_).n;
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
      ::PrettyPrefix(param_1,kNumberType);
      bVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              ::WriteDouble((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                             *)param_1,NVar1.d);
    }
  }
  return bVar6;
}

// Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_> @ 141da22b0

bool __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this,
          Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          *param_1)

{
  char **ppcVar1;
  Number NVar2;
  Stack<UE::Json::Private::FAllocatorImpl> *pSVar3;
  char *pcVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar11;
  wchar_t *pwVar12;
  wchar_t wVar13;
  
  uVar9 = (this->data_).f.flags & 7;
  switch(uVar9) {
  case 0:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kNullType);
    bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::WriteNull(param_1);
    break;
  case 1:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kFalseType);
    pSVar3 = &param_1->os_->stack_;
    if ((longlong)pSVar3->stackEnd_ - (longlong)pSVar3->stackTop_ < 10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(pSVar3,5);
    }
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L'f');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L'a');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L'l');
    wVar13 = L's';
    goto LAB_141da2364;
  case 2:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kTrueType);
    pSVar3 = &param_1->os_->stack_;
    if ((longlong)pSVar3->stackEnd_ - (longlong)pSVar3->stackTop_ < 8) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(pSVar3,4);
    }
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L't');
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L'r');
    wVar13 = L'u';
LAB_141da2364:
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,wVar13);
    PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1->os_,L'e');
    bVar7 = true;
    break;
  case 3:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kObjectType);
    if ((longlong)(param_1->level_stack_).stackEnd_ - (longlong)(param_1->level_stack_).stackTop_ <
        0x10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::
      Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level>
                (&param_1->level_stack_,1);
    }
    if (((param_1->level_stack_).stackTop_ == (char *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (((longlong)(param_1->level_stack_).stackEnd_ - (longlong)(param_1->level_stack_).stackTop_ <
         0x10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pcVar4 = (param_1->level_stack_).stackTop_;
    (param_1->level_stack_).stackTop_ = pcVar4 + 0x10;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar4[8] = '\0';
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              (param_1->os_,L'{');
    if (((this->data_).f.flags != 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x4fd,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pGVar11 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              ((ulonglong)(this->data_).s.str & 0xffffffffffff);
    while( true ) {
      if (((this->data_).f.flags != 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x500,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (pGVar11 ==
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          ((ulonglong)(this->data_).s.length * 0x20 +
          ((ulonglong)(this->data_).s.str & 0xffffffffffff))) {
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("level_stack_.GetSize() >= sizeof(Level)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                               ,0xea,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((param_1->level_stack_).stackTop_[-8] != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!level_stack_.template Top<Level>()->inArray",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if ((((param_1->level_stack_).stackTop_[-0x10] & 1U) != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("0 == level_stack_.template Top<Level>()->valueCount % 2",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                               ,0xec,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= count * sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x8b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        ppcVar1 = &(param_1->level_stack_).stackTop_;
        *ppcVar1 = *ppcVar1 + -0x10;
        GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                  (param_1->os_,L'}');
        return true;
      }
      if (((pGVar11->data_).f.flags & 0x400) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("m->name.IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x7af,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if ((((pGVar11->data_).f.flags & 0x400) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsString()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x74b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      if (((pGVar11->data_).f.flags & 0x1000) == 0) {
        uVar10 = (pGVar11->data_).s.length;
      }
      else {
        uVar10 = 6 - (ushort)(pGVar11->data_).ss.str[6];
      }
      pwVar12 = GetString(pGVar11);
      if ((pwVar12 == (wchar_t *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("str != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                             ,0xcd,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
      ::Prefix(param_1,kStringType);
      bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              ::WriteString(param_1,pwVar12,uVar10);
      if ((!bVar7) ||
         (bVar7 = Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
                            (pGVar11 + 1,param_1), !bVar7)) break;
      pGVar11 = pGVar11 + 2;
    }
    goto LAB_141da2857;
  case 4:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kArrayType);
    if ((longlong)(param_1->level_stack_).stackEnd_ - (longlong)(param_1->level_stack_).stackTop_ <
        0x10) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::
      Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level>
                (&param_1->level_stack_,1);
    }
    if (((param_1->level_stack_).stackTop_ == (char *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (((longlong)(param_1->level_stack_).stackEnd_ - (longlong)(param_1->level_stack_).stackTop_ <
         0x10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pcVar4 = (param_1->level_stack_).stackTop_;
    (param_1->level_stack_).stackTop_ = pcVar4 + 0x10;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar4[8] = '\x01';
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              (param_1->os_,L'[');
    pGVar11 = Begin(this);
    while( true ) {
      if (((this->data_).f.flags != 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x699,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (pGVar11 ==
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          ((ulonglong)(this->data_).s.length * 0x10 +
          ((ulonglong)(this->data_).s.str & 0xffffffffffff))) {
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("level_stack_.GetSize() >= sizeof(Level)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                               ,0xf9,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x92,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((param_1->level_stack_).stackTop_[-8] == '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("level_stack_.template Top<Level>()->inArray",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                               ,0xfa,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((ulonglong)
             ((longlong)(param_1->level_stack_).stackTop_ - (longlong)(param_1->level_stack_).stack_
             ) < 0x10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetSize() >= count * sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x8b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        ppcVar1 = &(param_1->level_stack_).stackTop_;
        *ppcVar1 = *ppcVar1 + -0x10;
        GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                  (param_1->os_,L']');
        return true;
      }
      bVar7 = Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
                        (pGVar11,param_1);
      if (!bVar7) break;
      pGVar11 = pGVar11 + 1;
    }
LAB_141da2857:
    bVar7 = false;
    break;
  case 5:
    uVar10 = GetStringLength(this);
    pwVar12 = GetString(this);
    if ((pwVar12 == (wchar_t *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("str != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                           ,0xcd,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
    ::Prefix(param_1,kStringType);
    bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::WriteString(param_1,pwVar12,uVar10);
    break;
  default:
    if ((uVar9 != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetType() == kNumberType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x7c3,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    uVar9 = (this->data_).f.flags;
    if ((uVar9 >> 9 & 1) == 0) {
      if ((uVar9 & 0x20) == 0) {
        if ((uVar9 & 0x40) == 0) {
          uVar5 = *(ulong64 *)&this->data_;
          if ((char)uVar9 < '\0') {
            Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::Prefix(param_1,kNumberType);
            bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                    ::WriteInt64(param_1,uVar5);
          }
          else {
            Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            ::Prefix(param_1,kNumberType);
            bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                    ::WriteUint64(param_1,uVar5);
          }
        }
        else {
          uVar10 = (this->data_).s.length;
          Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
          ::Prefix(param_1,kNumberType);
          bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                  ::WriteUint(param_1,uVar10);
        }
      }
      else {
        uVar10 = (this->data_).s.length;
        Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
        ::Prefix(param_1,kNumberType);
        bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
                ::WriteInt(param_1,uVar10);
      }
    }
    else {
      NVar2 = (this->data_).n;
      Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
      ::Prefix(param_1,kNumberType);
      bVar7 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              ::WriteDouble(param_1,NVar2.d);
    }
  }
  return bVar7;
}

// ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int> @ 141da2bd0

void __cdecl
ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
          (void *param_1,TSharedPtr<FJsonValue,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FJsonValue **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int> @ 141da2c10

void __cdecl
ConstructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
          (void *param_1,TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FSpecDefinitionScope **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<IAutomationLatentCommand,1>,TSharedRef<IAutomationLatentCommand,1>,int> @ 141da2c50

void __cdecl
ConstructItems<TSharedRef<IAutomationLatentCommand,1>,TSharedRef<IAutomationLatentCommand,1>,int>
          (void *param_1,TSharedRef<IAutomationLatentCommand,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IAutomationLatentCommand **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FJsonValue,1>,int> @ 141da5810

void __cdecl
DestructItems<TSharedPtr<FJsonValue,1>,int>(TSharedPtr<FJsonValue,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int> @ 141da5850

void __cdecl
DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FAutomationSpecBase::FSpec,1>,int> @ 141da5890

void __cdecl
DestructItems<TSharedRef<FAutomationSpecBase::FSpec,1>,int>
          (TSharedRef<FAutomationSpecBase::FSpec,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int> @ 141da58d0

void __cdecl
DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
          (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FAutomationSpecBase::FSpecIt,1>,int> @ 141da5910

void __cdecl
DestructItems<TSharedRef<FAutomationSpecBase::FSpecIt,1>,int>
          (TSharedRef<FAutomationSpecBase::FSpecIt,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,int> @ 141da5950

void __cdecl
DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,int>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IAutomationLatentCommand,1>,int> @ 141da5990

void __cdecl
DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
          (TSharedRef<IAutomationLatentCommand,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DoFindMember<UE::Json::Private::FAllocatorImpl> @ 141da59d0

GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
DoFindMember<UE::Json::Private::FAllocatorImpl>
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this,
          GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_1)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> GVar4;
  wchar_t *_Buf1;
  wchar_t *_Buf2;
  uint uVar5;
  uint uVar6;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *in_R8;
  
  if (((this->data_).f.flags != 3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x503,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 (*pcVar1)();
    return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
           GVar4.ptr_;
  }
  (param_1->data_).n = (Number)((ulonglong)(this->data_).s.str & 0xffffffffffff);
  while( true ) {
    if (((this->data_).f.flags != 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x506,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar4.ptr_;
    }
    this_00 = *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
               &param_1->data_;
    if (this_00 ==
        (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
        ((ulonglong)(this->data_).s.length * 0x20 +
        ((ulonglong)(this->data_).s.str & 0xffffffffffff))) {
      return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_1;
    }
    if ((((in_R8->data_).f.flags & 0x400) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x9ac,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar4.ptr_;
    }
    if ((((this_00->data_).f.flags & 0x400) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("rhs.IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x9ad,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar4.ptr_;
    }
    if ((((in_R8->data_).f.flags & 0x400) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x74b,L""), bVar2)) break;
    if (((in_R8->data_).f.flags & 0x1000) == 0) {
      uVar6 = (in_R8->data_).s.length;
    }
    else {
      uVar6 = 6 - (ushort)(in_R8->data_).ss.str[6];
    }
    if ((((this_00->data_).f.flags & 0x400) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsString()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x74b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar4.ptr_;
    }
    if (((this_00->data_).f.flags & 0x1000) == 0) {
      uVar5 = (this_00->data_).s.length;
    }
    else {
      uVar5 = 6 - (ushort)(this_00->data_).ss.str[6];
    }
    if (uVar6 == uVar5) {
      _Buf1 = GetString(in_R8);
      _Buf2 = GetString(this_00);
      if (_Buf1 == _Buf2) {
        return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
               )(GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                param_1;
      }
      iVar3 = memcmp(_Buf1,_Buf2,(ulonglong)uVar6 * 2);
      if (iVar3 == 0) {
        return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
               )(GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                param_1;
      }
    }
    (param_1->data_).n = (Number)((param_1->data_).n.i64 + 0x20);
  }
  pcVar1 = (code *)swi(3);
  GVar4.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar1)();
  return (GenericMemberIterator<0,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
         GVar4.ptr_;
}

// Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level> @ 141da6e00

void __thiscall
rapidjson::internal::Stack<UE::Json::Private::FAllocatorImpl>::
Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>::Level>
          (Stack<UE::Json::Private::FAllocatorImpl> *this,ulong64 param_1)

{
  FAllocatorImpl *pFVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  pcVar2 = (char *)0x0;
  pcVar3 = this->stack_;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar2;
    if (this->allocator_ == (FAllocatorImpl *)0x0) {
      pFVar1 = ::operator_new(1);
      pcVar3 = this->stack_;
      this->allocator_ = pFVar1;
      this->ownAllocator_ = pFVar1;
    }
    pcVar4 = (char *)this->initialCapacity_;
  }
  else {
    pcVar4 = this->stackEnd_ +
             (((ulonglong)(this->stackEnd_ + (1 - (longlong)pcVar3)) >> 1) - (longlong)pcVar3);
  }
  lVar6 = (longlong)this->stackTop_ - (longlong)pcVar3;
  pcVar5 = (char *)(param_1 * 0x10 + lVar6);
  if (pcVar5 <= pcVar4) {
    pcVar5 = pcVar4;
  }
  if (pcVar5 == (char *)0x0) {
    FMemory::Free(pcVar3);
  }
  else {
    pcVar2 = FMemory::Realloc(pcVar3,(ulong64)pcVar5,0);
  }
  this->stack_ = pcVar2;
  this->stackTop_ = pcVar2 + lVar6;
  this->stackEnd_ = pcVar2 + (longlong)pcVar5;
  return;
}

// Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_> @ 141da6ec0

void __thiscall
rapidjson::internal::Stack<rapidjson::CrtAllocator>::
Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          (Stack<rapidjson::CrtAllocator> *this,ulong64 param_1)

{
  CrtAllocator *pCVar1;
  char *pcVar2;
  char *_Memory;
  char *pcVar3;
  char *_NewSize;
  longlong lVar4;
  
  pcVar2 = (char *)0x0;
  _Memory = this->stack_;
  if (_Memory == (char *)0x0) {
    _Memory = pcVar2;
    if (this->allocator_ == (CrtAllocator *)0x0) {
      pCVar1 = ::operator_new(1);
      _Memory = this->stack_;
      this->allocator_ = pCVar1;
      this->ownAllocator_ = pCVar1;
    }
    pcVar3 = (char *)this->initialCapacity_;
  }
  else {
    pcVar3 = this->stackEnd_ +
             (((ulonglong)(this->stackEnd_ + (1 - (longlong)_Memory)) >> 1) - (longlong)_Memory);
  }
  lVar4 = (longlong)this->stackTop_ - (longlong)_Memory;
  _NewSize = (char *)(param_1 * 0x10 + lVar4);
  if (_NewSize <= pcVar3) {
    _NewSize = pcVar3;
  }
  if (_NewSize == (char *)0x0) {
    free(_Memory);
  }
  else {
    pcVar2 = realloc(_Memory,(size_t)_NewSize);
  }
  this->stack_ = pcVar2;
  this->stackTop_ = pcVar2 + lVar4;
  this->stackEnd_ = pcVar2 + (longlong)_NewSize;
  return;
}

// Expand<wchar_t> @ 141da6f80

void __thiscall
rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>
          (Stack<rapidjson::CrtAllocator> *this,ulong64 param_1)

{
  CrtAllocator *pCVar1;
  char *pcVar2;
  char *_Memory;
  char *pcVar3;
  char *_NewSize;
  longlong lVar4;
  
  pcVar2 = (char *)0x0;
  _Memory = this->stack_;
  if (_Memory == (char *)0x0) {
    _Memory = pcVar2;
    if (this->allocator_ == (CrtAllocator *)0x0) {
      pCVar1 = ::operator_new(1);
      _Memory = this->stack_;
      this->allocator_ = pCVar1;
      this->ownAllocator_ = pCVar1;
    }
    pcVar3 = (char *)this->initialCapacity_;
  }
  else {
    pcVar3 = this->stackEnd_ +
             (((ulonglong)(this->stackEnd_ + (1 - (longlong)_Memory)) >> 1) - (longlong)_Memory);
  }
  lVar4 = (longlong)this->stackTop_ - (longlong)_Memory;
  _NewSize = (char *)(lVar4 + param_1 * 2);
  if (_NewSize <= pcVar3) {
    _NewSize = pcVar3;
  }
  if (_NewSize == (char *)0x0) {
    free(_Memory);
  }
  else {
    pcVar2 = realloc(_Memory,(size_t)_NewSize);
  }
  this->stack_ = pcVar2;
  this->stackTop_ = pcVar2 + lVar4;
  this->stackEnd_ = pcVar2 + (longlong)_NewSize;
  return;
}

// Expand<wchar_t> @ 141da7040

void __thiscall
rapidjson::internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
          (Stack<UE::Json::Private::FAllocatorImpl> *this,ulong64 param_1)

{
  FAllocatorImpl *pFVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  pcVar2 = (char *)0x0;
  pcVar3 = this->stack_;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar2;
    if (this->allocator_ == (FAllocatorImpl *)0x0) {
      pFVar1 = ::operator_new(1);
      pcVar3 = this->stack_;
      this->allocator_ = pFVar1;
      this->ownAllocator_ = pFVar1;
    }
    pcVar4 = (char *)this->initialCapacity_;
  }
  else {
    pcVar4 = this->stackEnd_ +
             (((ulonglong)(this->stackEnd_ + (1 - (longlong)pcVar3)) >> 1) - (longlong)pcVar3);
  }
  lVar6 = (longlong)this->stackTop_ - (longlong)pcVar3;
  pcVar5 = (char *)(lVar6 + param_1 * 2);
  if (pcVar5 <= pcVar4) {
    pcVar5 = pcVar4;
  }
  if (pcVar5 == (char *)0x0) {
    FMemory::Free(pcVar3);
  }
  else {
    pcVar2 = FMemory::Realloc(pcVar3,(ulong64)pcVar5,0);
  }
  this->stack_ = pcVar2;
  this->stackTop_ = pcVar2 + lVar6;
  this->stackEnd_ = pcVar2 + (longlong)pcVar5;
  return;
}

// HasDestinationJsonStringCharRepresentation<char,char> @ 141da7fe0

bool __cdecl HasDestinationJsonStringCharRepresentation<char,char>(char param_1)

{
  return '\x1f' < param_1;
}

// HasDestinationJsonStringCharRepresentation<char,char8_t> @ 141da7ff0

bool __cdecl HasDestinationJsonStringCharRepresentation<char,char8_t>(uchar param_1)

{
  return (byte)(param_1 - 0x20) < 0x5f;
}

// HasDestinationJsonStringCharRepresentation<char,wchar_t> @ 141da8000

bool __cdecl HasDestinationJsonStringCharRepresentation<char,wchar_t>(wchar_t param_1)

{
  return (ushort)(param_1 + L'￠') < 0x5f;
}

// HasDestinationJsonStringCharRepresentation<char8_t,char> @ 141da8020

bool __cdecl HasDestinationJsonStringCharRepresentation<char8_t,char>(char param_1)

{
  return '\x1f' < param_1;
}

// HasDestinationJsonStringCharRepresentation<char8_t,char8_t> @ 141da8030

bool __cdecl HasDestinationJsonStringCharRepresentation<char8_t,char8_t>(uchar param_1)

{
  return 0x1f < param_1;
}

// HasDestinationJsonStringCharRepresentation<char8_t,wchar_t> @ 141da8040

bool __cdecl HasDestinationJsonStringCharRepresentation<char8_t,wchar_t>(wchar_t param_1)

{
  return 0x1f < (ushort)param_1;
}

// HasDestinationJsonStringCharRepresentation<wchar_t,char> @ 141da8050

bool __cdecl HasDestinationJsonStringCharRepresentation<wchar_t,char>(char param_1)

{
  return '\x1f' < param_1;
}

// HasDestinationJsonStringCharRepresentation<wchar_t,char8_t> @ 141da8060

bool __cdecl HasDestinationJsonStringCharRepresentation<wchar_t,char8_t>(uchar param_1)

{
  return 0x1f < param_1;
}

// HasDestinationJsonStringCharRepresentation<wchar_t,wchar_t> @ 141da8070

bool __cdecl HasDestinationJsonStringCharRepresentation<wchar_t,wchar_t>(wchar_t param_1)

{
  return 0x1f < (ushort)param_1;
}

// LexTryParseString<signed_char> @ 141da80d0

bool __cdecl LexTryParseString<signed_char>(schar *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = '\0';
    return false;
  }
  iVar1 = atoi((char *)param_2);
  *param_1 = (char)iVar1;
  if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (bVar2 == 0x2e) break;
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      return false;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (bVar2 == 0) {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<signed_char> @ 141da81d0

bool __cdecl LexTryParseString<signed_char>(schar *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t _C;
  bool bVar2;
  
  if (*param_2 == L'\0') {
    *param_1 = '\0';
    return false;
  }
  iVar1 = _wtoi(param_2);
  *param_1 = (char)iVar1;
  if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar2 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == L'.') break;
    if ((bVar2 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar2 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar2;
}

// LexTryParseString<unsigned_char> @ 141da82c0

bool __cdecl LexTryParseString<unsigned_char>(uchar *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = '\0';
    return false;
  }
  iVar1 = atoi((char *)param_2);
  *param_1 = (uchar)iVar1;
  if (((uchar)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (bVar2 == 0x2e) break;
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      return false;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (bVar2 == 0) {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<unsigned_char> @ 141da83c0

bool __cdecl LexTryParseString<unsigned_char>(uchar *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t _C;
  bool bVar2;
  
  if (*param_2 == L'\0') {
    *param_1 = '\0';
    return false;
  }
  iVar1 = _wtoi(param_2);
  *param_1 = (uchar)iVar1;
  if (((uchar)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar2 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == L'.') break;
    if ((bVar2 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar2 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar2;
}

// LexTryParseString<short> @ 141da84b0

bool __cdecl LexTryParseString<short>(short *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi((char *)param_2);
  *param_1 = (short)iVar1;
  if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (bVar2 == 0x2e) break;
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      return false;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (bVar2 == 0) {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<short> @ 141da85b0

bool __cdecl LexTryParseString<short>(short *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t _C;
  bool bVar2;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
    return false;
  }
  iVar1 = _wtoi(param_2);
  *param_1 = (short)iVar1;
  if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar2 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == L'.') break;
    if ((bVar2 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar2 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar2;
}

// LexTryParseString<unsigned_short> @ 141da86a0

bool __cdecl LexTryParseString<unsigned_short>(ushort *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi((char *)param_2);
  *param_1 = (ushort)iVar1;
  if (((ushort)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (bVar2 == 0x2e) break;
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      return false;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (bVar2 == 0) {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<unsigned_short> @ 141da87a0

bool __cdecl LexTryParseString<unsigned_short>(ushort *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t _C;
  bool bVar2;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
    return false;
  }
  iVar1 = _wtoi(param_2);
  *param_1 = (ushort)iVar1;
  if (((ushort)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar2 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar2;
    }
    if (_C == L'.') break;
    if ((bVar2 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar2 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar2;
}

// LexTryParseString<int> @ 141da8890

bool __cdecl LexTryParseString<int>(int *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  iVar1 = atoi((char *)param_2);
  *param_1 = iVar1;
  if ((iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (bVar2 == 0x2e) break;
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      return false;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (bVar2 == 0) {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<unsigned_int> @ 141da8990

bool __cdecl LexTryParseString<unsigned_int>(uint *param_1,uchar *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  lVar2 = _strtoi64((char *)param_2,(char **)0x0,10);
  *param_1 = (uint)lVar2;
  if (((uint)lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar3 = *param_2;
  bVar4 = false;
  while( true ) {
    if (bVar3 == 0) {
      return false;
    }
    if (((bVar3 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar3), iVar1 == 0)) break;
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar3 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (bVar3 == 0x2e) break;
    if ((bVar4 == false) && (bVar3 != 0x30)) {
      return false;
    }
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
    bVar4 = true;
    if (bVar3 == 0) {
      return true;
    }
  }
  return bVar4;
}

// LexTryParseString<unsigned_int> @ 141da8aa0

bool __cdecl LexTryParseString<unsigned_int>(uint *param_1,wchar_t *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t _C;
  bool bVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
    return false;
  }
  lVar2 = _wtoi64(param_2);
  *param_1 = (uint)lVar2;
  if (((uint)lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar3 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == L'.') break;
    if ((bVar3 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<float> @ 141da8b90

bool __cdecl LexTryParseString<float>(float *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  double dVar4;
  float fVar5;
  
  if (*param_2 == '\0') {
    *param_1 = 0.0;
    return false;
  }
  dVar4 = atof((char *)param_2);
  fVar5 = (float)dVar4;
  *param_1 = fVar5;
  if ((fVar5 != 0.0) || (iVar1 = _finite((double)fVar5), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  do {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      if (bVar2 != 0x2e) {
        return false;
      }
    }
    else {
      bVar3 = true;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  } while (bVar2 != 0);
  return bVar3;
}

// LexTryParseString<double> @ 141da8ca0

bool __cdecl LexTryParseString<double>(double *param_1,uchar *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  double dVar4;
  
  if (*param_2 == '\0') {
    *param_1 = 0.0;
    return false;
  }
  dVar4 = atof((char *)param_2);
  *param_1 = dVar4;
  if ((dVar4 != 0.0) || (iVar1 = _finite((double)(float)dVar4), iVar1 == 0)) {
    return true;
  }
  bVar2 = *param_2;
  bVar3 = false;
  while( true ) {
    if (bVar2 == 0) {
      return false;
    }
    if (((bVar2 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar2), iVar1 == 0)) break;
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar2 == 0) {
    return false;
  }
  do {
    iVar1 = isspace((uint)bVar2);
    if (iVar1 != 0) {
      return bVar3;
    }
    if ((bVar3 == false) && (bVar2 != 0x30)) {
      if (bVar2 != 0x2e) {
        return false;
      }
    }
    else {
      bVar3 = true;
    }
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
  } while (bVar2 != 0);
  return bVar3;
}

// LexTryParseString<double> @ 141da8db0

bool __cdecl LexTryParseString<double>(double *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t _C;
  double dVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0.0;
    return false;
  }
  dVar3 = wcstod(param_2,(wchar_t **)0x0);
  *param_1 = dVar3;
  if ((dVar3 != 0.0) || (iVar2 = _finite((double)(float)dVar3), iVar2 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar1 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(_C), iVar2 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  do {
    iVar2 = iswspace(_C);
    if (iVar2 != 0) {
      return bVar1;
    }
    if ((bVar1) || (_C == L'0')) {
      bVar1 = true;
    }
    else if (_C != L'.') {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
  } while (_C != L'\0');
  return bVar1;
}

// LexTryParseString<__int64> @ 141da8eb0

bool __cdecl LexTryParseString<__int64>(long64 *param_1,uchar *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  lVar2 = _strtoi64((char *)param_2,(char **)0x0,10);
  *param_1 = lVar2;
  if ((lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar3 = *param_2;
  bVar4 = false;
  while( true ) {
    if (bVar3 == 0) {
      return false;
    }
    if (((bVar3 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar3), iVar1 == 0)) break;
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar3 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (bVar3 == 0x2e) break;
    if ((bVar4 == false) && (bVar3 != 0x30)) {
      return false;
    }
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
    bVar4 = true;
    if (bVar3 == 0) {
      return true;
    }
  }
  return bVar4;
}

// LexTryParseString<__int64> @ 141da8fc0

bool __cdecl LexTryParseString<__int64>(long64 *param_1,wchar_t *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t _C;
  bool bVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
    return false;
  }
  lVar2 = _wtoi64(param_2);
  *param_1 = lVar2;
  if ((lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar3 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == L'.') break;
    if ((bVar3 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar3;
}

// LexTryParseString<unsigned___int64> @ 141da90c0

bool __cdecl LexTryParseString<unsigned___int64>(ulong64 *param_1,uchar *param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    return false;
  }
  uVar2 = _strtoui64((char *)param_2,(char **)0x0,0);
  *param_1 = uVar2;
  if ((uVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  bVar3 = *param_2;
  bVar4 = false;
  while( true ) {
    if (bVar3 == 0) {
      return false;
    }
    if (((bVar3 - 0x2b & 0xfd) != 0) && (iVar1 = isspace((uint)bVar3), iVar1 == 0)) break;
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
  }
  if (bVar3 == 0) {
    return false;
  }
  while( true ) {
    iVar1 = isspace((uint)bVar3);
    if (iVar1 != 0) {
      return bVar4;
    }
    if (bVar3 == 0x2e) break;
    if ((bVar4 == false) && (bVar3 != 0x30)) {
      return false;
    }
    bVar3 = param_2[1];
    param_2 = param_2 + 1;
    bVar4 = true;
    if (bVar3 == 0) {
      return true;
    }
  }
  return bVar4;
}

// LexTryParseString<unsigned___int64> @ 141da91d0

bool __cdecl LexTryParseString<unsigned___int64>(ulong64 *param_1,wchar_t *param_2)

{
  int iVar1;
  ulonglong uVar2;
  wchar_t _C;
  bool bVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
    return false;
  }
  uVar2 = _wcstoui64(param_2,(wchar_t **)0x0,0);
  *param_1 = uVar2;
  if ((uVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar3 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar1 = iswspace(_C), iVar1 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar1 = iswspace(_C);
    if (iVar1 != 0) {
      return bVar3;
    }
    if (_C == L'.') break;
    if ((bVar3 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar3 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar3;
}

// MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&> @ 141da92d0

TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> * __cdecl
MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *__return_storage_ptr__,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValueArray,1> *pTVar5;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar6;
  TSharedRef<FJsonValueArray,1> local_18;
  
  pTVar4 = operator_new(0x38);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
                       (&local_18,param_1);
    pTVar4[2]._padding_ = (longlong)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined2 *)&pTVar4[3]._padding_ = 0;
    __return_storage_ptr__->Object = (FElement *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FElement *)(pTVar4 + 1) == (FElement *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&> @ 141da93d0

TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> * __cdecl
MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *__return_storage_ptr__,
          TSharedPtr<FJsonObject,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar6;
  TSharedRef<FJsonValueObject,1> local_18;
  
  pTVar4 = operator_new(0x38);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>(&local_18,param_1);
    pTVar4[2]._padding_ = (longlong)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined2 *)&pTVar4[3]._padding_ = 0;
    __return_storage_ptr__->Object = (FElement *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FElement *)(pTVar4 + 1) == (FElement *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1> @ 141da94d0

TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> * __cdecl
MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *pTVar4;
  
  pTVar3 = operator_new(0x48);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (StackState *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UStackState_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    __return_storage_ptr__->Object = (StackState *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((StackState *)(pTVar3 + 1) == (StackState *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TJsonValueNumberString<char8_t>,1,FUtf8String_const_&> @ 141da9580

TSharedRef<TJsonValueNumberString<char8_t>,1> * __cdecl
MakeShared<TJsonValueNumberString<char8_t>,1,FUtf8String_const_&>
          (TSharedRef<TJsonValueNumberString<char8_t>,1> *__return_storage_ptr__,
          FUtf8String *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TJsonValueNumberString<char8_t>,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TJsonValueNumberString<char8_t> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueNumberString__Q___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueNumberString__Q__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    FUtf8String::FUtf8String((FUtf8String *)(pTVar3 + 2),param_1);
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x3;
    __return_storage_ptr__->Object = (TJsonValueNumberString<char8_t> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TJsonValueNumberString<char8_t> *)(pTVar3 + 1) == (TJsonValueNumberString<char8_t> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TJsonValueNumberString<char8_t>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TJsonValueString<char8_t>,1,FUtf8String> @ 141da9660

TSharedRef<TJsonValueString<char8_t>,1> * __cdecl
MakeShared<TJsonValueString<char8_t>,1,FUtf8String>
          (TSharedRef<TJsonValueString<char8_t>,1> *__return_storage_ptr__,FUtf8String *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TJsonValueString<char8_t>,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TJsonValueString<char8_t> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__Q___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueString__Q__6B_;
    pTVar3[2]._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)(param_1->Data).ArrayNum;
    pTVar3[2].WeakReferenceCount = (atomic<int>)(param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x2;
    __return_storage_ptr__->Object = (TJsonValueString<char8_t> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TJsonValueString<char8_t> *)(pTVar3 + 1) == (TJsonValueString<char8_t> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TJsonValueString<char8_t>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TJsonValueString<wchar_t>,1,FString> @ 141da9740

TSharedRef<TJsonValueString<wchar_t>,1> * __cdecl
MakeShared<TJsonValueString<wchar_t>,1,FString>
          (TSharedRef<TJsonValueString<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
    pTVar3[2]._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)(param_1->Data).ArrayNum;
    pTVar3[2].WeakReferenceCount = (atomic<int>)(param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x2;
    __return_storage_ptr__->Object = (TJsonValueString<wchar_t> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TJsonValueString<wchar_t> *)(pTVar3 + 1) == (TJsonValueString<wchar_t> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TJsonValueString<wchar_t>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonObject,1> @ 141da9820

TSharedRef<FJsonObject,1> * __cdecl
MakeShared<FJsonObject,1>(TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  
  pTVar3 = operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonObject *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[4]._padding_ = 0xffffffff;
    pTVar3[5]._padding_ = 0;
    __return_storage_ptr__->Object = (FJsonObject *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonObject,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&> @ 141da98f0

TSharedRef<FJsonValueArray,1> * __cdecl
MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
          (TSharedRef<FJsonValueArray,1> *__return_storage_ptr__,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueArray,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueArray *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FJsonValueArray *)(pTVar3 + 1);
    if ((FJsonValueArray *)(pTVar3 + 1) == (FJsonValueArray *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueArray,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&> @ 141da99b0

TSharedRef<FJsonValueArray,1> * __cdecl
MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
          (TSharedRef<FJsonValueArray,1> *__return_storage_ptr__,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueArray,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueArray *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FJsonValueArray *)(pTVar3 + 1);
    if ((FJsonValueArray *)(pTVar3 + 1) == (FJsonValueArray *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueArray,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> @ 141da9a70

TSharedRef<FJsonValueArray,1> * __cdecl
MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>
          (TSharedRef<FJsonValueArray,1> *__return_storage_ptr__,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueArray,1> *pTVar4;
  
  pTVar3 = operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueArray *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueArray__6B_;
    pTVar3[2]._padding_ = (longlong)(param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)param_1->ArrayNum;
    pTVar3[2].WeakReferenceCount = (atomic<int>)param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x5;
    __return_storage_ptr__->Object = (FJsonValueArray *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FJsonValueArray *)(pTVar3 + 1) == (FJsonValueArray *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueArray,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueBoolean,1,bool> @ 141da9b50

TSharedRef<FJsonValueBoolean,1> * __cdecl
MakeShared<FJsonValueBoolean,1,bool>
          (TSharedRef<FJsonValueBoolean,1> *__return_storage_ptr__,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueBoolean,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueBoolean *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_;
    bVar2 = *param_1;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
    *(bool *)&pTVar3[2]._padding_ = bVar2;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x4;
    __return_storage_ptr__->Object = (FJsonValueBoolean *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FJsonValueBoolean *)(pTVar3 + 1) == (FJsonValueBoolean *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueBoolean,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueNull,1> @ 141da9c10

TSharedRef<FJsonValueNull,1> * __cdecl
MakeShared<FJsonValueNull,1>(TSharedRef<FJsonValueNull,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValueNull,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueNull *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNull___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueNull__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x1;
    __return_storage_ptr__->Object = (FJsonValueNull *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValueNull,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueNumber,1,double> @ 141da9cb0

TSharedRef<FJsonValueNumber,1> * __cdecl
MakeShared<FJsonValueNumber,1,double>
          (TSharedRef<FJsonValueNumber,1> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValueNumber,1> *pTVar5;
  
  pTVar4 = operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueNumber *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    dVar1 = *param_1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
    pTVar4[2]._padding_ = (longlong)dVar1;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x3;
    __return_storage_ptr__->Object = (FJsonValueNumber *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FJsonValueNumber *)(pTVar4 + 1) == (FJsonValueNumber *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FJsonValueNumber,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&> @ 141da9d70

TSharedRef<FJsonValueObject,1> * __cdecl
MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&>
          (TSharedRef<FJsonValueObject,1> *__return_storage_ptr__,TSharedPtr<FJsonObject,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FJsonValueObject,1> *pTVar6;
  
  pTVar5 = operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueObject *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5[2]._padding_ = (longlong)pFVar2;
    pTVar5[1]._padding_ = (longlong)&___7FJsonValueObject__6B_;
    *(TReferenceControllerBase<1> **)&pTVar5[2].SharedReferenceCount = pTVar1;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    __return_storage_ptr__->Object = (FJsonValueObject *)(pTVar5 + 1);
    if ((FJsonValueObject *)(pTVar5 + 1) == (FJsonValueObject *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonValueObject,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&> @ 141da9e60

TSharedRef<FJsonValueObject,1> * __cdecl
MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
          (TSharedRef<FJsonValueObject,1> *__return_storage_ptr__,TSharedPtr<FJsonObject,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FJsonValueObject,1> *pTVar6;
  
  pTVar5 = operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValueObject *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5[2]._padding_ = (longlong)pFVar2;
    pTVar5[1]._padding_ = (longlong)&___7FJsonValueObject__6B_;
    *(TReferenceControllerBase<1> **)&pTVar5[2].SharedReferenceCount = pTVar1;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    __return_storage_ptr__->Object = (FJsonValueObject *)(pTVar5 + 1);
    if ((FJsonValueObject *)(pTVar5 + 1) == (FJsonValueObject *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonValueObject,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// ParseArray<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141da9f50

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseArray<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  MemoryStream *pMVar1;
  byte *pbVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  char *pcVar7;
  ulong64 uVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  
  if ((param_1->current_ != L'[') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'[\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x329,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar1 = param_1->is_;
  pbVar2 = (byte *)pMVar1->src_;
  if (pbVar2 == (byte *)pMVar1->end_) {
    uVar10 = 0;
    bVar12 = 0;
  }
  else {
    uVar10 = (ushort)*pbVar2;
    pbVar6 = pbVar2 + 1;
    pMVar1->src_ = (char *)pbVar6;
    if (pbVar6 == (byte *)pMVar1->end_) {
      bVar12 = 0;
    }
    else {
      bVar12 = *pbVar6;
      pMVar1->src_ = (char *)(pbVar2 + 2);
    }
  }
  param_1->current_ = (ushort)bVar12 << 8 | uVar10;
  bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          ::StartArray(param_2);
  if (bVar5) {
    SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
              (param_1);
    if ((this->parseResult_).code_ != kParseErrorNone) {
      return;
    }
    if (param_1->current_ != L']') {
      uVar11 = 0;
      ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                (this,param_1,param_2);
      if ((this->parseResult_).code_ != kParseErrorNone) {
        return;
      }
      do {
        uVar11 = uVar11 + 1;
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        if (param_1->current_ != L',') {
          pMVar1 = param_1->is_;
          pcVar3 = pMVar1->src_;
          if (param_1->current_ != L']') {
            uVar8 = (longlong)pcVar3 - (longlong)pMVar1->begin_;
            (this->parseResult_).code_ = kParseErrorArrayMissCommaOrSquareBracket;
            goto LAB_141daa249;
          }
          if (pcVar3 == pMVar1->end_) {
            cVar9 = '\0';
            cVar13 = '\0';
          }
          else {
            cVar9 = *pcVar3;
            pcVar7 = pcVar3 + 1;
            pMVar1->src_ = pcVar7;
            if (pcVar7 == pMVar1->end_) {
              cVar13 = '\0';
            }
            else {
              cVar13 = *pcVar7;
              pMVar1->src_ = pcVar3 + 2;
            }
          }
          param_1->current_ = CONCAT11(cVar13,cVar9);
          bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  ::EndArray(param_2,uVar11);
          if (bVar5) {
            return;
          }
          if ((this->parseResult_).code_ != kParseErrorNone) {
            iVar14 = 0x346;
            goto LAB_141daa197;
          }
LAB_141daa1b7:
          uVar8 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
          (this->parseResult_).code_ = kParseErrorTermination;
LAB_141daa249:
          (this->parseResult_).offset_ = uVar8;
          return;
        }
        pMVar1 = param_1->is_;
        pcVar3 = pMVar1->src_;
        if (pcVar3 == pMVar1->end_) {
          cVar9 = '\0';
          cVar13 = '\0';
        }
        else {
          cVar9 = *pcVar3;
          pcVar7 = pcVar3 + 1;
          pMVar1->src_ = pcVar7;
          if (pcVar7 == pMVar1->end_) {
            cVar13 = '\0';
          }
          else {
            cVar13 = *pcVar7;
            pMVar1->src_ = pcVar3 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar13,cVar9);
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        if (param_1->current_ == L']') {
          bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  ::EndArray(param_2,uVar11);
          if (bVar5) {
            EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>::Take(param_1);
            return;
          }
          if ((this->parseResult_).code_ != kParseErrorNone) {
            iVar14 = 0x34f;
LAB_141daa197:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,iVar14,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          goto LAB_141daa1b7;
        }
        ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                  (this,param_1,param_2);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
      } while( true );
    }
    pMVar1 = param_1->is_;
    pbVar2 = (byte *)pMVar1->src_;
    if (pbVar2 == (byte *)pMVar1->end_) {
      uVar10 = 0;
      bVar12 = 0;
    }
    else {
      uVar10 = (ushort)*pbVar2;
      pbVar6 = pbVar2 + 1;
      pMVar1->src_ = (char *)pbVar6;
      if (pbVar6 == (byte *)pMVar1->end_) {
        bVar12 = 0;
      }
      else {
        bVar12 = *pbVar6;
        pMVar1->src_ = (char *)(pbVar2 + 2);
      }
    }
    param_1->current_ = (ushort)bVar12 << 8 | uVar10;
    bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::EndArray(param_2,0);
    if (bVar5) {
      return;
    }
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141daa012;
    iVar14 = 0x334;
  }
  else {
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141daa012;
    iVar14 = 0x32d;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!HasParseError()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                     ,iVar14,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141daa012:
  pcVar3 = param_1->is_->src_;
  pcVar7 = param_1->is_->begin_;
  (this->parseResult_).code_ = kParseErrorTermination;
  (this->parseResult_).offset_ = (longlong)pcVar3 - (longlong)pcVar7;
  return;
}

// ParseArray<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141daa270

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseArray<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  wchar_t wVar1;
  ParseErrorCode PVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  int iVar9;
  
  if ((*param_1->src_ != L'[') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'[\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x329,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->src_ = param_1->src_ + 1;
  bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          ::StartArray(param_2);
  if (bVar4) {
    for (pwVar6 = param_1->src_;
        (wVar1 = *pwVar6, wVar1 == L' ' ||
        (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e')))); pwVar6 = pwVar6 + 1) {
    }
    param_1->src_ = pwVar6;
    param_1->dst_ = param_1->dst_;
    param_1->head_ = param_1->head_;
    if ((this->parseResult_).code_ == kParseErrorNone) {
      if (*param_1->src_ == L']') {
        param_1->src_ = param_1->src_ + 1;
        bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                ::EndArray(param_2,0);
        if (!bVar4) {
          if (((this->parseResult_).code_ != kParseErrorNone) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasParseError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                 ,0x334,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->parseResult_).offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
          (this->parseResult_).code_ = kParseErrorTermination;
        }
      }
      else {
        uVar8 = 0;
        ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                  (this,param_1,param_2);
        PVar2 = (this->parseResult_).code_;
        while (PVar2 == kParseErrorNone) {
          uVar8 = uVar8 + 1;
          pwVar6 = param_1->head_;
          for (pwVar7 = param_1->src_;
              (wVar1 = *pwVar7, wVar1 == L' ' ||
              (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e')))); pwVar7 = pwVar7 + 1) {
          }
          param_1->src_ = pwVar7;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar6;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          pwVar7 = param_1->src_;
          if (*pwVar7 != L',') {
            if (*pwVar7 != L']') {
              lVar5 = (longlong)pwVar7 - (longlong)param_1->head_;
              (this->parseResult_).code_ = kParseErrorArrayMissCommaOrSquareBracket;
              goto LAB_141daa568;
            }
            param_1->src_ = pwVar7 + 1;
            bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    ::EndArray(param_2,uVar8);
            if (bVar4) {
              return;
            }
            if ((this->parseResult_).code_ != kParseErrorNone) {
              iVar9 = 0x346;
              goto LAB_141daa4fe;
            }
LAB_141daa51e:
            lVar5 = (longlong)param_1->src_ - (longlong)param_1->head_;
            (this->parseResult_).code_ = kParseErrorTermination;
LAB_141daa568:
            (this->parseResult_).offset_ = lVar5 >> 1;
            return;
          }
          param_1->src_ = pwVar7 + 1;
          for (pwVar7 = param_1->src_;
              (wVar1 = *pwVar7, wVar1 == L' ' ||
              (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e')))); pwVar7 = pwVar7 + 1) {
          }
          param_1->src_ = pwVar7;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar6;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          if (*param_1->src_ == L']') {
            bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    ::EndArray(param_2,uVar8);
            if (bVar4) {
              param_1->src_ = param_1->src_ + 1;
              return;
            }
            if ((this->parseResult_).code_ != kParseErrorNone) {
              iVar9 = 0x34f;
LAB_141daa4fe:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasParseError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                 ,iVar9,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            goto LAB_141daa51e;
          }
          ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                    (this,param_1,param_2);
          PVar2 = (this->parseResult_).code_;
        }
      }
    }
  }
  else {
    if (((this->parseResult_).code_ != kParseErrorNone) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasParseError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x32d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->parseResult_).offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
    (this->parseResult_).code_ = kParseErrorTermination;
  }
  return;
}

// ParseFalse<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141daa5a0

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseFalse<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  MemoryStream *pMVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  ulong64 uVar6;
  char cVar7;
  char cVar8;
  
  if ((param_1->current_ != L'f') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'f\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x373,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar1 = param_1->is_;
  pcVar2 = pMVar1->src_;
  if (pcVar2 == pMVar1->end_) {
    cVar7 = '\0';
    cVar8 = '\0';
  }
  else {
    cVar7 = *pcVar2;
    pcVar5 = pcVar2 + 1;
    pMVar1->src_ = pcVar5;
    if (pcVar5 == pMVar1->end_) {
      cVar8 = '\0';
    }
    else {
      cVar8 = *pcVar5;
      pMVar1->src_ = pcVar2 + 2;
    }
  }
  param_1->current_ = CONCAT11(cVar8,cVar7);
  if (CONCAT11(cVar8,cVar7) == L'a') {
    pMVar1 = param_1->is_;
    pcVar2 = pMVar1->src_;
    if (pcVar2 == pMVar1->end_) {
      cVar7 = '\0';
      cVar8 = '\0';
    }
    else {
      cVar7 = *pcVar2;
      pcVar5 = pcVar2 + 1;
      pMVar1->src_ = pcVar5;
      if (pcVar5 == pMVar1->end_) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *pcVar5;
        pMVar1->src_ = pcVar2 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar8,cVar7);
    if (CONCAT11(cVar8,cVar7) == L'l') {
      pMVar1 = param_1->is_;
      pcVar2 = pMVar1->src_;
      if (pcVar2 == pMVar1->end_) {
        cVar7 = '\0';
        cVar8 = '\0';
      }
      else {
        cVar7 = *pcVar2;
        pcVar5 = pcVar2 + 1;
        pMVar1->src_ = pcVar5;
        if (pcVar5 == pMVar1->end_) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *pcVar5;
          pMVar1->src_ = pcVar2 + 2;
        }
      }
      param_1->current_ = CONCAT11(cVar8,cVar7);
      if (CONCAT11(cVar8,cVar7) == L's') {
        pMVar1 = param_1->is_;
        pcVar2 = pMVar1->src_;
        if (pcVar2 == pMVar1->end_) {
          cVar7 = '\0';
          cVar8 = '\0';
        }
        else {
          cVar7 = *pcVar2;
          pcVar5 = pcVar2 + 1;
          pMVar1->src_ = pcVar5;
          if (pcVar5 == pMVar1->end_) {
            cVar8 = '\0';
          }
          else {
            cVar8 = *pcVar5;
            pMVar1->src_ = pcVar2 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar8,cVar7);
        if (CONCAT11(cVar8,cVar7) == L'e') {
          pMVar1 = param_1->is_;
          pcVar2 = pMVar1->src_;
          if (pcVar2 == pMVar1->end_) {
            cVar7 = '\0';
            cVar8 = '\0';
          }
          else {
            cVar7 = *pcVar2;
            pcVar5 = pcVar2 + 1;
            pMVar1->src_ = pcVar5;
            if (pcVar5 == pMVar1->end_) {
              cVar8 = '\0';
            }
            else {
              cVar8 = *pcVar5;
              pMVar1->src_ = pcVar2 + 2;
            }
          }
          param_1->current_ = CONCAT11(cVar8,cVar7);
          bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  ::Bool(param_2,false);
          if (bVar4) {
            return;
          }
          if (((this->parseResult_).code_ != kParseErrorNone) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasParseError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                 ,0x378,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
          (this->parseResult_).code_ = kParseErrorTermination;
          goto LAB_141daa7f4;
        }
      }
    }
  }
  if (((this->parseResult_).code_ != kParseErrorNone) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasParseError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x37b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
  (this->parseResult_).code_ = kParseErrorValueInvalid;
LAB_141daa7f4:
  (this->parseResult_).offset_ = uVar6;
  return;
}

// ParseHex4<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_> @ 141daa810

uint __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseHex4<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,ulong64 param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = 0;
  do {
    wVar1 = *param_1->src_;
    iVar4 = uVar5 * 0x10 + (uint)(ushort)wVar1;
    if ((ushort)(wVar1 + L'￐') < 10) {
      uVar5 = iVar4 - 0x30;
    }
    else if ((ushort)(wVar1 + L'﾿') < 6) {
      uVar5 = iVar4 - 0x37;
    }
    else {
      if (5 < (ushort)(wVar1 + L'ﾟ')) {
        if ((this->parseResult_).code_ != kParseErrorNone) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x397,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
        }
        (this->parseResult_).code_ = kParseErrorStringUnicodeEscapeInvalidHex;
        (this->parseResult_).offset_ = param_2;
        return 0;
      }
      uVar5 = iVar4 - 0x57;
    }
    iVar6 = iVar6 + 1;
    param_1->src_ = param_1->src_ + 1;
  } while (iVar6 < 4);
  return uVar5;
}

// ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_> @ 141daa8d0

uint __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          ulong64 param_2)

{
  wchar_t wVar1;
  MemoryStream *pMVar2;
  byte *pbVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ushort uVar9;
  byte bVar10;
  int iVar11;
  
  uVar7 = 0;
  iVar11 = 0;
  do {
    wVar1 = param_1->current_;
    iVar6 = uVar7 * 0x10 + (uint)(ushort)wVar1;
    if ((ushort)(wVar1 + L'￐') < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((ushort)(wVar1 + L'﾿') < 6) {
      uVar7 = iVar6 - 0x37;
    }
    else {
      if (5 < (ushort)(wVar1 + L'ﾟ')) {
        if ((this->parseResult_).code_ != kParseErrorNone) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x397,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return uVar7;
          }
        }
        (this->parseResult_).code_ = kParseErrorStringUnicodeEscapeInvalidHex;
        (this->parseResult_).offset_ = param_2;
        return 0;
      }
      uVar7 = iVar6 - 0x57;
    }
    pMVar2 = param_1->is_;
    pbVar3 = (byte *)pMVar2->src_;
    if (pbVar3 == (byte *)pMVar2->end_) {
      uVar9 = 0;
      bVar10 = 0;
    }
    else {
      uVar9 = (ushort)*pbVar3;
      pbVar8 = pbVar3 + 1;
      pMVar2->src_ = (char *)pbVar8;
      if (pbVar8 == (byte *)pMVar2->end_) {
        bVar10 = 0;
      }
      else {
        bVar10 = *pbVar8;
        pMVar2->src_ = (char *)(pbVar3 + 2);
      }
    }
    iVar11 = iVar11 + 1;
    param_1->current_ = (ushort)bVar10 << 8 | uVar9;
  } while (iVar11 < 4);
  return uVar7;
}

// ParseNull<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141daa9e0

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseNull<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  MemoryStream *pMVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  ulong64 uVar6;
  char cVar7;
  char cVar8;
  
  if ((param_1->current_ != L'n') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'n\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x359,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar1 = param_1->is_;
  pcVar2 = pMVar1->src_;
  if (pcVar2 == pMVar1->end_) {
    cVar7 = '\0';
    cVar8 = '\0';
  }
  else {
    cVar7 = *pcVar2;
    pcVar5 = pcVar2 + 1;
    pMVar1->src_ = pcVar5;
    if (pcVar5 == pMVar1->end_) {
      cVar8 = '\0';
    }
    else {
      cVar8 = *pcVar5;
      pMVar1->src_ = pcVar2 + 2;
    }
  }
  param_1->current_ = CONCAT11(cVar8,cVar7);
  if (CONCAT11(cVar8,cVar7) == L'u') {
    pMVar1 = param_1->is_;
    pcVar2 = pMVar1->src_;
    if (pcVar2 == pMVar1->end_) {
      cVar7 = '\0';
      cVar8 = '\0';
    }
    else {
      cVar7 = *pcVar2;
      pcVar5 = pcVar2 + 1;
      pMVar1->src_ = pcVar5;
      if (pcVar5 == pMVar1->end_) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *pcVar5;
        pMVar1->src_ = pcVar2 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar8,cVar7);
    if (CONCAT11(cVar8,cVar7) == L'l') {
      pMVar1 = param_1->is_;
      pcVar2 = pMVar1->src_;
      if (pcVar2 == pMVar1->end_) {
        cVar7 = '\0';
        cVar8 = '\0';
      }
      else {
        cVar7 = *pcVar2;
        pcVar5 = pcVar2 + 1;
        pMVar1->src_ = pcVar5;
        if (pcVar5 == pMVar1->end_) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *pcVar5;
          pMVar1->src_ = pcVar2 + 2;
        }
      }
      param_1->current_ = CONCAT11(cVar8,cVar7);
      if (CONCAT11(cVar8,cVar7) == L'l') {
        pMVar1 = param_1->is_;
        pcVar2 = pMVar1->src_;
        if (pcVar2 == pMVar1->end_) {
          cVar7 = '\0';
          cVar8 = '\0';
        }
        else {
          cVar7 = *pcVar2;
          pcVar5 = pcVar2 + 1;
          pMVar1->src_ = pcVar5;
          if (pcVar5 == pMVar1->end_) {
            cVar8 = '\0';
          }
          else {
            cVar8 = *pcVar5;
            pMVar1->src_ = pcVar2 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar8,cVar7);
        bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                ::Null(param_2);
        if (bVar4) {
          return;
        }
        if (((this->parseResult_).code_ != kParseErrorNone) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,0x35e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
        (this->parseResult_).code_ = kParseErrorTermination;
        goto LAB_141daabe3;
      }
    }
  }
  if (((this->parseResult_).code_ != kParseErrorNone) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasParseError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x361,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
  (this->parseResult_).code_ = kParseErrorValueInvalid;
LAB_141daabe3:
  (this->parseResult_).offset_ = uVar6;
  return;
}

// ParseNumber<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141daac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseNumber<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  ushort uVar14;
  uint uVar15;
  ulong64 uVar16;
  char cVar17;
  byte bVar18;
  ulong64 uVar19;
  MemoryStream *pMVar20;
  MemoryStream *pMVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  byte bVar26;
  wchar_t wVar27;
  char cVar28;
  wchar_t wVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  int iVar34;
  double dVar35;
  
  pMVar21 = param_1->is_;
  dVar35 = 0.0;
  wVar27 = param_1->current_;
  pbVar1 = (byte *)pMVar21->src_;
  uVar16 = (longlong)pbVar1 - (longlong)pMVar21->begin_;
  if (wVar27 == L'-') {
    if (pbVar1 == (byte *)pMVar21->end_) {
      uVar14 = 0;
      bVar26 = 0;
    }
    else {
      uVar14 = (ushort)*pbVar1;
      pbVar13 = pbVar1 + 1;
      pMVar21->src_ = (char *)pbVar13;
      if (pbVar13 == (byte *)pMVar21->end_) {
        bVar26 = 0;
      }
      else {
        bVar26 = *pbVar13;
        pMVar21->src_ = (char *)(pbVar1 + 2);
      }
    }
    bVar10 = true;
    wVar27 = (ushort)bVar26 << 8 | uVar14;
    param_1->current_ = wVar27;
  }
  else {
    bVar10 = false;
  }
  dVar8 = __real_4024000000000000;
  uVar23 = 0;
  bVar5 = false;
  iVar34 = 0;
  uVar24 = 0;
  uVar30 = 0;
  uVar31 = uVar23;
  if (wVar27 != L'0') {
    if (8 < (ushort)(wVar27 + L'ￏ')) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x60c,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorValueInvalid;
      goto LAB_141dab86c;
    }
    pMVar21 = param_1->is_;
    pcVar2 = pMVar21->src_;
    if (pcVar2 == pMVar21->end_) {
      cVar28 = '\0';
      cVar17 = '\0';
    }
    else {
      cVar28 = *pcVar2;
      pcVar12 = pcVar2 + 1;
      pMVar21->src_ = pcVar12;
      if (pcVar12 == pMVar21->end_) {
        cVar17 = '\0';
      }
      else {
        cVar17 = *pcVar12;
        pMVar21->src_ = pcVar2 + 2;
      }
    }
    uVar33 = (ulonglong)((ushort)wVar27 - 0x30);
    wVar27 = CONCAT11(cVar17,cVar28);
    uVar15 = (uint)(ushort)wVar27;
    param_1->current_ = wVar27;
    uVar25 = uVar24;
    if (bVar10) {
      uVar25 = uVar23;
      if (0x2f < (ushort)wVar27) {
        while (uVar31 = uVar30, uVar25 = uVar24, (ushort)wVar27 < 0x3a) {
          uVar32 = (uint)uVar33;
          if ((0xccccccb < uVar32) && ((uVar32 != 0xccccccc || (0x38 < (ushort)uVar15))))
          goto LAB_141daaec2;
          pMVar21 = param_1->is_;
          pcVar2 = pMVar21->src_;
          if (pcVar2 == pMVar21->end_) {
            cVar28 = '\0';
            cVar17 = '\0';
          }
          else {
            cVar28 = *pcVar2;
            pcVar12 = pcVar2 + 1;
            pMVar21->src_ = pcVar12;
            if (pcVar12 == pMVar21->end_) {
              cVar17 = '\0';
            }
            else {
              cVar17 = *pcVar12;
              pMVar21->src_ = pcVar2 + 2;
            }
          }
          uVar31 = (ulonglong)((int)uVar31 + 1);
          wVar27 = CONCAT11(cVar17,cVar28);
          param_1->current_ = wVar27;
          uVar33 = (ulonglong)(uVar15 + (uVar32 * 5 + -0x18) * 2);
          if ((ushort)wVar27 < 0x30) break;
          uVar15 = (uint)(ushort)wVar27;
          uVar30 = uVar31;
        }
      }
    }
    else {
      uVar31 = uVar30;
      if (0x2f < (ushort)wVar27) {
        while ((ushort)wVar27 < 0x3a) {
          uVar32 = (uint)uVar33;
          if ((0x19999998 < uVar32) && ((uVar32 != 0x19999999 || (0x35 < (ushort)uVar15))))
          goto LAB_141daaec2;
          pMVar21 = param_1->is_;
          pcVar2 = pMVar21->src_;
          if (pcVar2 == pMVar21->end_) {
            cVar28 = '\0';
            cVar17 = '\0';
          }
          else {
            cVar28 = *pcVar2;
            pcVar12 = pcVar2 + 1;
            pMVar21->src_ = pcVar12;
            if (pcVar12 == pMVar21->end_) {
              cVar17 = '\0';
            }
            else {
              cVar17 = *pcVar12;
              pMVar21->src_ = pcVar2 + 2;
            }
          }
          uVar31 = (ulonglong)((int)uVar31 + 1);
          wVar27 = CONCAT11(cVar17,cVar28);
          param_1->current_ = wVar27;
          uVar33 = (ulonglong)(uVar15 + (uVar32 * 5 + -0x18) * 2);
          if ((ushort)wVar27 < 0x30) break;
          uVar15 = (uint)(ushort)wVar27;
        }
      }
    }
    goto LAB_141daaec8;
  }
  pMVar21 = param_1->is_;
  pbVar1 = (byte *)pMVar21->src_;
  if (pbVar1 == (byte *)pMVar21->end_) {
    uVar14 = 0;
    bVar26 = 0;
  }
  else {
    uVar14 = (ushort)*pbVar1;
    pbVar13 = pbVar1 + 1;
    pMVar21->src_ = (char *)pbVar13;
    if (pbVar13 == (byte *)pMVar21->end_) {
      bVar26 = 0;
    }
    else {
      bVar26 = *pbVar13;
      pMVar21->src_ = (char *)(pbVar1 + 2);
    }
  }
  wVar27 = (ushort)bVar26 << 8 | uVar14;
  param_1->current_ = wVar27;
  bVar6 = false;
  uVar25 = uVar23;
  uVar33 = uVar23;
  dVar4 = 0.0;
  goto LAB_141dab123;
LAB_141daaec2:
  bVar5 = true;
  uVar25 = uVar33;
LAB_141daaec8:
  bVar6 = false;
  dVar4 = 0.0;
  if (!bVar5) goto LAB_141dab123;
  if (bVar10) {
    dVar4 = 0.0;
    if (((ushort)wVar27 < 0x30) || (dVar4 = 0.0, 0x39 < (ushort)wVar27)) goto LAB_141dab123;
    do {
      uVar15 = (uint)(ushort)wVar27;
      if ((0xccccccccccccccb < uVar25) && ((uVar25 != 0xccccccccccccccc || (0x38 < (ushort)wVar27)))
         ) goto LAB_141daafc2;
      pMVar21 = param_1->is_;
      pbVar1 = (byte *)pMVar21->src_;
      if (pbVar1 == (byte *)pMVar21->end_) {
        uVar14 = 0;
        bVar26 = 0;
      }
      else {
        uVar14 = (ushort)*pbVar1;
        pbVar13 = pbVar1 + 1;
        pMVar21->src_ = (char *)pbVar13;
        if (pbVar13 == (byte *)pMVar21->end_) {
          bVar26 = 0;
        }
        else {
          bVar26 = *pbVar13;
          pMVar21->src_ = (char *)(pbVar1 + 2);
        }
      }
      uVar31 = (ulonglong)((int)uVar31 + 1);
      uVar15 = (uint)(ushort)wVar27;
      wVar27 = (ushort)bVar26 << 8 | uVar14;
      param_1->current_ = wVar27;
      uVar25 = (ulonglong)(uVar15 - 0x30) + uVar25 * 10;
      dVar4 = 0.0;
      if ((ushort)wVar27 < 0x30) goto LAB_141dab123;
    } while ((ushort)wVar27 < 0x3a);
  }
  else {
    dVar4 = 0.0;
    if (((ushort)wVar27 < 0x30) || (dVar4 = 0.0, 0x39 < (ushort)wVar27)) goto LAB_141dab123;
    do {
      uVar15 = (uint)(ushort)wVar27;
      if ((0x1999999999999998 < uVar25) &&
         ((uVar25 != 0x1999999999999999 || (0x35 < (ushort)wVar27)))) goto LAB_141daafc2;
      pMVar21 = param_1->is_;
      pcVar2 = pMVar21->src_;
      if (pcVar2 == pMVar21->end_) {
        cVar28 = '\0';
        cVar17 = '\0';
      }
      else {
        cVar28 = *pcVar2;
        pcVar12 = pcVar2 + 1;
        pMVar21->src_ = pcVar12;
        if (pcVar12 == pMVar21->end_) {
          cVar17 = '\0';
        }
        else {
          cVar17 = *pcVar12;
          pMVar21->src_ = pcVar2 + 2;
        }
      }
      uVar31 = (ulonglong)((int)uVar31 + 1);
      uVar15 = (uint)(ushort)wVar27;
      wVar27 = CONCAT11(cVar17,cVar28);
      param_1->current_ = wVar27;
      uVar25 = (ulonglong)(uVar15 - 0x30) + uVar25 * 10;
      dVar4 = dVar35;
      if ((ushort)wVar27 < 0x30) goto LAB_141dab123;
    } while ((ushort)wVar27 < 0x3a);
  }
  iVar22 = 0;
  goto LAB_141daaf92;
LAB_141daafc2:
  bVar6 = true;
  dVar4 = (double)uVar25;
  wVar29 = (wchar_t)uVar15;
  while ((wVar27 = (wchar_t)uVar15, 0x2f < (ushort)wVar29 && ((ushort)wVar27 < 0x3a))) {
    pMVar21 = param_1->is_;
    pbVar1 = (byte *)pMVar21->src_;
    if (pbVar1 == (byte *)pMVar21->end_) {
      uVar14 = 0;
      bVar26 = 0;
    }
    else {
      uVar14 = (ushort)*pbVar1;
      pbVar13 = pbVar1 + 1;
      pMVar21->src_ = (char *)pbVar13;
      if (pbVar13 == (byte *)pMVar21->end_) {
        bVar26 = 0;
      }
      else {
        bVar26 = *pbVar13;
        pMVar21->src_ = (char *)(pbVar1 + 2);
      }
    }
    wVar29 = (ushort)bVar26 << 8 | uVar14;
    param_1->current_ = wVar29;
    dVar4 = dVar4 * dVar8 + (double)(int)(uVar15 - 0x30);
    uVar15 = (uint)(ushort)wVar29;
  }
LAB_141dab123:
  iVar22 = 0;
  dVar35 = dVar4;
  if (wVar27 == L'.') {
    pMVar21 = param_1->is_;
    pcVar2 = pMVar21->src_;
    if (pcVar2 == pMVar21->end_) {
      cVar28 = '\0';
      cVar17 = '\0';
    }
    else {
      cVar28 = *pcVar2;
      pcVar12 = pcVar2 + 1;
      pMVar21->src_ = pcVar12;
      if (pcVar12 == pMVar21->end_) {
        cVar17 = '\0';
      }
      else {
        cVar17 = *pcVar12;
        pMVar21->src_ = pcVar2 + 2;
      }
    }
    wVar27 = CONCAT11(cVar17,cVar28);
    param_1->current_ = wVar27;
    if (9 < (ushort)(wVar27 + L'￐')) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x637,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorNumberMissFraction;
      goto LAB_141dab86c;
    }
    if (!bVar6) {
      if (!bVar5) {
        uVar25 = uVar33;
      }
      do {
        uVar15 = (uint)(ushort)wVar27;
        if ((0x39 < (ushort)wVar27) || (0x1fffffffffffff < uVar25)) break;
        pMVar21 = param_1->is_;
        pbVar1 = (byte *)pMVar21->src_;
        if (pbVar1 == (byte *)pMVar21->end_) {
          bVar26 = 0;
          uVar14 = 0;
        }
        else {
          bVar26 = *pbVar1;
          pbVar13 = pbVar1 + 1;
          pMVar21->src_ = (char *)pbVar13;
          if (pbVar13 == (byte *)pMVar21->end_) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ushort)*pbVar13;
            pMVar21->src_ = (char *)(pbVar1 + 2);
          }
        }
        uVar23 = (ulonglong)((int)uVar23 - 1);
        wVar27 = uVar14 << 8 | (ushort)bVar26;
        uVar25 = (ulonglong)(uVar15 - 0x30) + uVar25 * 10;
        param_1->current_ = wVar27;
        if (uVar25 != 0) {
          uVar31 = (ulonglong)((int)uVar31 + 1);
        }
      } while (0x2f < (ushort)wVar27);
      dVar4 = (double)uVar25;
      bVar6 = true;
    }
    iVar22 = (int)uVar23;
    dVar35 = dVar4;
    while (0x2f < (ushort)wVar27) {
      uVar15 = (uint)(ushort)wVar27;
      iVar22 = (int)uVar23;
      if (0x39 < (ushort)wVar27) break;
      pMVar21 = param_1->is_;
      pbVar1 = (byte *)pMVar21->src_;
      pbVar13 = (byte *)pMVar21->end_;
      if ((int)uVar31 < 0x11) {
        if (pbVar1 == pbVar13) {
          uVar14 = 0;
          bVar26 = 0;
        }
        else {
          uVar14 = (ushort)*pbVar1;
          pbVar11 = pbVar1 + 1;
          pMVar21->src_ = (char *)pbVar11;
          if (pbVar11 == pbVar13) {
            bVar26 = 0;
          }
          else {
            bVar26 = *pbVar11;
            pMVar21->src_ = (char *)(pbVar1 + 2);
          }
        }
        uVar23 = (ulonglong)(iVar22 - 1);
        wVar27 = (ushort)bVar26 << 8 | uVar14;
        param_1->current_ = wVar27;
        dVar35 = (double)(int)(uVar15 - 0x30) + dVar35 * dVar8;
        if (0.0 < dVar35) {
          uVar31 = (ulonglong)((int)uVar31 + 1);
        }
      }
      else {
        if (pbVar1 == pbVar13) {
          bVar26 = 0;
          bVar18 = 0;
        }
        else {
          bVar26 = *pbVar1;
          pbVar11 = pbVar1 + 1;
          pMVar21->src_ = (char *)pbVar11;
          if (pbVar11 == pbVar13) {
            bVar18 = 0;
          }
          else {
            bVar18 = *pbVar11;
            pMVar21->src_ = (char *)(pbVar1 + 2);
          }
        }
        wVar27 = CONCAT11(bVar18,bVar26);
        param_1->current_ = wVar27;
      }
      iVar22 = (int)uVar23;
    }
  }
LAB_141daaf92:
  if ((wVar27 == L'e') || (wVar27 == L'E')) {
    pMVar21 = param_1->is_;
    pbVar1 = (byte *)pMVar21->src_;
    if (pbVar1 == (byte *)pMVar21->end_) {
      uVar14 = 0;
      bVar26 = 0;
    }
    else {
      uVar14 = (ushort)*pbVar1;
      pbVar13 = pbVar1 + 1;
      pMVar21->src_ = (char *)pbVar13;
      if (pbVar13 == (byte *)pMVar21->end_) {
        bVar26 = 0;
      }
      else {
        bVar26 = *pbVar13;
        pMVar21->src_ = (char *)(pbVar1 + 2);
      }
    }
    wVar27 = (ushort)bVar26 << 8 | uVar14;
    param_1->current_ = wVar27;
    if (!bVar6) {
      uVar19 = uVar25;
      if (!bVar5) {
        uVar19 = uVar33;
      }
      dVar35 = (double)uVar19;
      bVar6 = true;
    }
    bVar7 = false;
    bVar9 = false;
    if (wVar27 == L'+') {
      pMVar21 = param_1->is_;
      pbVar1 = (byte *)pMVar21->src_;
      bVar9 = bVar7;
      if (pbVar1 == (byte *)pMVar21->end_) {
        uVar14 = 0;
        bVar26 = 0;
      }
      else {
        uVar14 = (ushort)*pbVar1;
        pbVar13 = pbVar1 + 1;
        pMVar21->src_ = (char *)pbVar13;
        if (pbVar13 == (byte *)pMVar21->end_) {
          bVar26 = 0;
        }
        else {
          bVar26 = *pbVar13;
          pMVar21->src_ = (char *)(pbVar1 + 2);
        }
      }
LAB_141dab450:
      wVar27 = (ushort)bVar26 << 8 | uVar14;
      param_1->current_ = wVar27;
    }
    else if (wVar27 == L'-') {
      pMVar21 = param_1->is_;
      pbVar1 = (byte *)pMVar21->src_;
      if (pbVar1 == (byte *)pMVar21->end_) {
        uVar14 = 0;
        bVar26 = 0;
      }
      else {
        uVar14 = (ushort)*pbVar1;
        pbVar13 = pbVar1 + 1;
        pMVar21->src_ = (char *)pbVar13;
        if (pbVar13 == (byte *)pMVar21->end_) {
          bVar26 = 0;
        }
        else {
          bVar26 = *pbVar13;
          pMVar21->src_ = (char *)(pbVar1 + 2);
        }
      }
      bVar9 = true;
      goto LAB_141dab450;
    }
    if (9 < (ushort)(wVar27 + L'￐')) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x68c,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorNumberMissExponent;
LAB_141dab86c:
      (this->parseResult_).offset_ = uVar16;
      return;
    }
    pMVar21 = param_1->is_;
    pcVar2 = pMVar21->src_;
    if (pcVar2 == pMVar21->end_) {
      cVar28 = '\0';
      cVar17 = '\0';
    }
    else {
      cVar28 = *pcVar2;
      pcVar12 = pcVar2 + 1;
      pMVar21->src_ = pcVar12;
      if (pcVar12 == pMVar21->end_) {
        cVar17 = '\0';
      }
      else {
        cVar17 = *pcVar12;
        pMVar21->src_ = pcVar2 + 2;
      }
    }
    iVar34 = (ushort)wVar27 - 0x30;
    param_1->current_ = CONCAT11(cVar17,cVar28);
    if (bVar9) {
      if ((0 < iVar22) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("expFrac <= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x677,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      wVar27 = param_1->current_;
      while ((0x2f < (ushort)wVar27 && ((ushort)wVar27 < 0x3a))) {
        pMVar21 = param_1->is_;
        pbVar1 = (byte *)pMVar21->src_;
        if (pbVar1 == (byte *)pMVar21->end_) {
          uVar14 = 0;
          bVar26 = 0;
          pMVar20 = pMVar21;
        }
        else {
          uVar14 = (ushort)*pbVar1;
          pbVar13 = pbVar1 + 1;
          pMVar21->src_ = (char *)pbVar13;
          pMVar20 = param_1->is_;
          if (pbVar13 == (byte *)pMVar21->end_) {
            bVar26 = 0;
          }
          else {
            bVar26 = *pbVar13;
            pMVar21->src_ = (char *)(pbVar1 + 2);
            pMVar20 = param_1->is_;
          }
        }
        wVar29 = (ushort)bVar26 << 8 | uVar14;
        param_1->current_ = wVar29;
        iVar34 = (uint)(ushort)wVar27 + (iVar34 * 5 + -0x18) * 2;
        wVar27 = wVar29;
        if ((iVar22 + 0x7ffffff7) / 10 < iVar34) {
          while ((0x2f < (ushort)wVar27 && ((ushort)wVar27 < 0x3a))) {
            pbVar1 = (byte *)pMVar20->src_;
            if (pbVar1 == (byte *)pMVar20->end_) {
              uVar14 = 0;
              bVar26 = 0;
              pMVar21 = pMVar20;
            }
            else {
              uVar14 = (ushort)*pbVar1;
              pbVar13 = pbVar1 + 1;
              pMVar20->src_ = (char *)pbVar13;
              pMVar21 = param_1->is_;
              if (pbVar13 == (byte *)pMVar20->end_) {
                bVar26 = 0;
              }
              else {
                bVar26 = *pbVar13;
                pMVar20->src_ = (char *)(pbVar1 + 2);
                pMVar21 = param_1->is_;
              }
            }
            wVar27 = (ushort)bVar26 << 8 | uVar14;
            param_1->current_ = wVar27;
            pMVar20 = pMVar21;
          }
        }
      }
      iVar34 = -iVar34;
      goto LAB_141dab611;
    }
    wVar27 = CONCAT11(cVar17,cVar28);
    do {
      if (((ushort)wVar27 < 0x30) || (0x39 < (ushort)wVar27)) goto LAB_141dab611;
      pMVar21 = param_1->is_;
      pbVar1 = (byte *)pMVar21->src_;
      if (pbVar1 == (byte *)pMVar21->end_) {
        uVar14 = 0;
        bVar26 = 0;
      }
      else {
        uVar14 = (ushort)*pbVar1;
        pbVar13 = pbVar1 + 1;
        pMVar21->src_ = (char *)pbVar13;
        if (pbVar13 == (byte *)pMVar21->end_) {
          bVar26 = 0;
        }
        else {
          bVar26 = *pbVar13;
          pMVar21->src_ = (char *)(pbVar1 + 2);
        }
      }
      wVar29 = (ushort)bVar26 << 8 | uVar14;
      param_1->current_ = wVar29;
      iVar34 = (uint)(ushort)wVar27 + (iVar34 * 5 + -0x18) * 2;
      wVar27 = wVar29;
    } while (iVar34 <= 0x134 - iVar22);
    if ((this->parseResult_).code_ != kParseErrorNone) {
      iVar34 = 0x687;
      goto LAB_141dab659;
    }
LAB_141dab679:
    (this->parseResult_).code_ = kParseErrorNumberTooBig;
    (this->parseResult_).offset_ = uVar16;
  }
  else {
LAB_141dab611:
    if (bVar6) {
      iVar34 = iVar34 + iVar22;
      if (iVar34 < -0x134) {
        dVar35 = dVar35 * ___real_000730d67819e8d2;
        iVar34 = iVar34 + 0x134;
      }
      dVar35 = internal::FastPath(dVar35,iVar34);
      if (__real_7fefffffffffffff < dVar35) {
        if ((this->parseResult_).code_ != kParseErrorNone) {
          iVar34 = 0x6bb;
LAB_141dab659:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,iVar34,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        goto LAB_141dab679;
      }
      if (bVar10) {
        dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar35,0) ^ (uint)__xmm_80000000000000008000000000000000);
      }
      bVar10 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
               ::Double(param_2,dVar35);
    }
    else if (bVar5) {
      if (bVar10) {
        bVar10 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                 ::Int64(param_2,-uVar25);
      }
      else {
        bVar10 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                 ::Uint64(param_2,uVar25);
      }
    }
    else if (bVar10) {
      bVar10 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
               ::Int(param_2,-(uint)uVar33);
    }
    else {
      bVar10 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
               ::Uint(param_2,(uint)uVar33);
    }
    if (bVar10 == false) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x6d3,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->parseResult_).code_ = kParseErrorTermination;
      (this->parseResult_).offset_ = uVar16;
    }
  }
  return;
}

// ParseNumber<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dab8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseNumber<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t wVar12;
  wchar_t wVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  bool bVar24;
  double dVar25;
  uint local_84;
  wchar_t *local_70;
  
  pwVar17 = param_1->src_;
  pwVar3 = param_1->dst_;
  pwVar1 = param_1->head_;
  uVar14 = (longlong)pwVar17 - (longlong)pwVar1 >> 1;
  wVar13 = *pwVar17;
  dVar25 = 0.0;
  bVar24 = wVar13 == L'-';
  local_70 = pwVar17;
  wVar12 = wVar13;
  if (bVar24) {
    local_70 = pwVar17 + 1;
    wVar12 = pwVar17[1];
  }
  pwVar20 = pwVar17 + 1;
  if (wVar13 != L'-') {
    pwVar20 = pwVar17;
  }
  uVar22 = 0;
  bVar5 = false;
  iVar21 = 0;
  uVar18 = 0;
  uVar16 = 0;
  if (wVar12 == L'0') {
    local_70 = pwVar20 + 1;
    local_84 = 0;
    bVar4 = false;
    uVar11 = uVar22;
    uVar16 = uVar22;
    uVar19 = uVar22;
    bVar5 = false;
    goto LAB_141dabb80;
  }
  if ((ushort)(wVar12 + L'ￏ') < 9) {
    wVar13 = pwVar20[1];
    local_70 = pwVar20 + 1;
    uVar11 = (ulonglong)((ushort)wVar12 - 0x30);
    uVar7 = uVar22;
    uVar19 = uVar18;
    if (bVar24) {
      while ((uVar16 = uVar7, uVar19 = 0, 0x2f < (ushort)wVar13 &&
             (uVar19 = uVar18, (ushort)wVar13 < 0x3a))) {
        uVar9 = (uint)uVar11;
        if ((0xccccccb < uVar9) && ((uVar9 != 0xccccccc || (0x38 < (ushort)wVar13))))
        goto LAB_141dab9fd;
        local_70 = local_70 + 1;
        uVar11 = (ulonglong)(((uint)(ushort)wVar13 + uVar9 * 10) - 0x30);
        uVar7 = (ulonglong)((int)uVar16 + 1);
        wVar13 = *local_70;
      }
    }
    else {
      while ((0x2f < (ushort)wVar13 && ((ushort)wVar13 < 0x3a))) {
        uVar9 = (uint)uVar11;
        if ((0x19999998 < uVar9) && ((uVar9 != 0x19999999 || (0x35 < (ushort)wVar13))))
        goto LAB_141dab9fd;
        local_70 = local_70 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar11 = (ulonglong)(((uint)(ushort)wVar13 + uVar9 * 10) - 0x30);
        wVar13 = *local_70;
      }
    }
    goto LAB_141daba02;
  }
  if (((this->parseResult_).code_ != kParseErrorNone) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasParseError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                          ,0x60c,L""), bVar24)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->parseResult_).code_ = kParseErrorValueInvalid;
LAB_141dac011:
  (this->parseResult_).offset_ = (longlong)local_70 - (longlong)pwVar1 >> 1;
LAB_141dac01b:
  param_1->src_ = local_70;
  param_1->dst_ = pwVar3;
  param_1->head_ = pwVar1;
  return;
LAB_141dab9fd:
  bVar5 = true;
  uVar19 = uVar11;
LAB_141daba02:
  bVar4 = false;
  local_84 = (uint)uVar11;
  if (bVar5) {
    wVar13 = *local_70;
    if (bVar24) {
      while( true ) {
        bVar4 = false;
        dVar25 = 0.0;
        if (((ushort)wVar13 < 0x30) || (bVar4 = false, dVar25 = 0.0, 0x39 < (ushort)wVar13))
        goto LAB_141dabaa6;
        if ((0xccccccccccccccb < uVar19) &&
           ((uVar19 != 0xccccccccccccccc || (0x38 < (ushort)wVar13)))) break;
        local_70 = local_70 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar19 = (ulonglong)((ushort)wVar13 - 0x30) + uVar19 * 10;
        wVar13 = *local_70;
      }
      dVar25 = (double)uVar19;
      bVar4 = true;
LAB_141dabaa6:
      if (bVar4) {
LAB_141dabb47:
        wVar13 = *local_70;
        while ((0x2f < (ushort)wVar13 && ((ushort)wVar13 < 0x3a))) {
          local_70 = local_70 + 1;
          dVar25 = dVar25 * __real_4024000000000000 + (double)(int)((ushort)wVar13 - 0x30);
          wVar13 = *local_70;
        }
      }
    }
    else {
      while ((bVar4 = false, 0x2f < (ushort)wVar13 && (bVar4 = false, (ushort)wVar13 < 0x3a))) {
        if ((0x1999999999999998 < uVar19) &&
           ((uVar19 != 0x1999999999999999 || (0x35 < (ushort)wVar13)))) {
          dVar25 = (double)uVar19;
          bVar4 = true;
          goto LAB_141dabb47;
        }
        local_70 = local_70 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar19 = (ulonglong)((ushort)wVar13 - 0x30) + uVar19 * 10;
        wVar13 = *local_70;
      }
    }
  }
LAB_141dabb80:
  uVar18 = uVar19;
  iVar23 = iVar21;
  if (*local_70 == L'.') {
    wVar13 = local_70[1];
    local_70 = local_70 + 1;
    if (((ushort)wVar13 < 0x30) || (0x39 < (ushort)wVar13)) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x637,L""), bVar24)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->parseResult_).code_ = kParseErrorNumberMissFraction;
      goto LAB_141dac011;
    }
    if (!bVar4) {
      uVar18 = uVar11;
      if (bVar5) {
        uVar18 = uVar19;
      }
      do {
        if ((0x39 < (ushort)wVar13) || (0x1fffffffffffff < uVar18)) break;
        local_70 = local_70 + 1;
        uVar22 = (ulonglong)((int)uVar22 - 1);
        uVar18 = (ulonglong)((ushort)wVar13 - 0x30) + uVar18 * 10;
        wVar13 = *local_70;
        uVar9 = (uint)uVar16 + 1;
        if (uVar18 == 0) {
          uVar9 = (uint)uVar16;
        }
        uVar16 = (ulonglong)uVar9;
      } while (0x2f < (ushort)wVar13);
      iVar23 = (int)uVar22;
      dVar25 = (double)uVar18;
      bVar4 = true;
      if ((ushort)*local_70 < 0x30) goto LAB_141dabc98;
    }
    do {
      iVar23 = (int)uVar22;
      if (0x39 < (ushort)*local_70) break;
      uVar9 = (uint)uVar16;
      if ((int)uVar9 < 0x11) {
        uVar22 = (ulonglong)(iVar23 - 1);
        dVar25 = (double)(int)((ushort)*local_70 - 0x30) + dVar25 * __real_4024000000000000;
        uVar10 = uVar9 + 1;
        if (dVar25 <= 0.0) {
          uVar10 = uVar9;
        }
        uVar16 = (ulonglong)uVar10;
      }
      iVar23 = (int)uVar22;
      pwVar17 = local_70 + 1;
      local_70 = local_70 + 1;
    } while (0x2f < (ushort)*pwVar17);
  }
LAB_141dabc98:
  if ((*local_70 == L'e') || (*local_70 == L'E')) {
    pwVar17 = local_70 + 1;
    if (!bVar4) {
      uVar15 = uVar18;
      if (!bVar5) {
        uVar15 = (ulonglong)local_84;
      }
      dVar25 = (double)uVar15;
      bVar4 = true;
    }
    wVar13 = *pwVar17;
    bVar8 = false;
    bVar6 = false;
    if (wVar13 == L'+') {
LAB_141dabd45:
      bVar8 = bVar6;
      wVar13 = local_70[2];
      pwVar17 = local_70 + 2;
    }
    else if (wVar13 == L'-') {
      bVar6 = true;
      goto LAB_141dabd45;
    }
    if (9 < (ushort)(wVar13 + L'￐')) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasParseError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                              ,0x68c,L""), bVar24)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->parseResult_).code_ = kParseErrorNumberMissExponent;
      local_70 = pwVar17;
      goto LAB_141dac011;
    }
    local_70 = pwVar17 + 1;
    iVar21 = (ushort)wVar13 - 0x30;
    if (bVar8) {
      if ((0 < iVar23) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("expFrac <= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x677,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      wVar13 = *local_70;
      while ((0x2f < (ushort)wVar13 && (wVar13 = *local_70, (ushort)wVar13 < 0x3a))) {
        local_70 = local_70 + 1;
        iVar21 = (uint)(ushort)wVar13 + (iVar21 * 5 + -0x18) * 2;
        if ((iVar23 + 0x7ffffff7) / 10 < iVar21) {
          wVar13 = *local_70;
          while( true ) {
            if ((ushort)wVar13 < 0x30) goto LAB_141dabe20;
            if (0x39 < (ushort)*local_70) break;
            wVar13 = local_70[1];
            local_70 = local_70 + 1;
          }
        }
        wVar13 = *local_70;
      }
LAB_141dabe20:
      iVar21 = -iVar21;
    }
    else {
      wVar13 = *local_70;
      while ((0x2f < (ushort)wVar13 && (wVar13 = *local_70, (ushort)wVar13 < 0x3a))) {
        local_70 = local_70 + 1;
        iVar21 = (uint)(ushort)wVar13 + (iVar21 * 5 + -0x18) * 2;
        if (0x134 - iVar23 < iVar21) {
          if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dabe8b;
          iVar21 = 0x687;
          goto LAB_141dabe6b;
        }
        wVar13 = *local_70;
      }
    }
  }
  if (bVar4) {
    iVar21 = iVar21 + iVar23;
    if (iVar21 < -0x134) {
      dVar25 = dVar25 * ___real_000730d67819e8d2;
      iVar21 = iVar21 + 0x134;
    }
    dVar25 = internal::FastPath(dVar25,iVar21);
    if (__real_7fefffffffffffff < dVar25) {
      if ((this->parseResult_).code_ != kParseErrorNone) {
        iVar21 = 0x6bb;
LAB_141dabe6b:
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("!HasParseError()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                            ,iVar21,L"");
        if (bVar24) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_141dabe8b:
      (this->parseResult_).code_ = kParseErrorNumberTooBig;
      (this->parseResult_).offset_ = uVar14;
      goto LAB_141dac01b;
    }
    if (bVar24) {
      dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar25,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    bVar24 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
             ::Double(param_2,dVar25);
  }
  else if (bVar5) {
    if (bVar24) {
      bVar24 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
               ::Int64(param_2,-uVar18);
    }
    else {
      bVar24 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
               ::Uint64(param_2,uVar18);
    }
  }
  else if (bVar24) {
    bVar24 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
             ::Int(param_2,-local_84);
  }
  else {
    bVar24 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
             ::Uint(param_2,local_84);
  }
  if (bVar24 == false) {
    if (((this->parseResult_).code_ != kParseErrorNone) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("!HasParseError()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                            ,0x6d3,L""), bVar24)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->parseResult_).code_ = kParseErrorTermination;
    (this->parseResult_).offset_ = uVar14;
  }
  goto LAB_141dac01b;
}

// ParseObject<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dac060

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseObject<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  MemoryStream *pMVar1;
  byte *pbVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t wVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong64 uVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  
  if ((param_1->current_ != L'{') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x2e5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar1 = param_1->is_;
  pbVar2 = (byte *)pMVar1->src_;
  if (pbVar2 == (byte *)pMVar1->end_) {
    uVar11 = 0;
    bVar13 = 0;
  }
  else {
    uVar11 = (ushort)*pbVar2;
    pbVar7 = pbVar2 + 1;
    pMVar1->src_ = (char *)pbVar7;
    if (pbVar7 == (byte *)pMVar1->end_) {
      bVar13 = 0;
    }
    else {
      bVar13 = *pbVar7;
      pMVar1->src_ = (char *)(pbVar2 + 2);
    }
  }
  param_1->current_ = (ushort)bVar13 << 8 | uVar11;
  bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          ::StartObject(param_2);
  if (bVar5) {
    SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
              (param_1);
    if ((this->parseResult_).code_ != kParseErrorNone) {
      return;
    }
    wVar6 = param_1->current_;
    if (wVar6 != L'}') {
      uVar12 = 0;
      while( true ) {
        if (wVar6 != L'\"') {
          uVar9 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
          (this->parseResult_).code_ = kParseErrorObjectMissName;
          goto LAB_141dac3ce;
        }
        ParseString<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                  (this,param_1,param_2,true);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        pMVar1 = param_1->is_;
        pcVar3 = pMVar1->src_;
        if (param_1->current_ != L':') {
          (this->parseResult_).offset_ = (longlong)pcVar3 - (longlong)pMVar1->begin_;
          (this->parseResult_).code_ = kParseErrorObjectMissColon;
          return;
        }
        if (pcVar3 == pMVar1->end_) {
          cVar10 = '\0';
          cVar14 = '\0';
        }
        else {
          cVar10 = *pcVar3;
          pcVar8 = pcVar3 + 1;
          pMVar1->src_ = pcVar8;
          if (pcVar8 == pMVar1->end_) {
            cVar14 = '\0';
          }
          else {
            cVar14 = *pcVar8;
            pMVar1->src_ = pcVar3 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar14,cVar10);
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                  (this,param_1,param_2);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        uVar12 = uVar12 + 1;
        if (param_1->current_ != L',') break;
        pMVar1 = param_1->is_;
        pcVar3 = pMVar1->src_;
        if (pcVar3 == pMVar1->end_) {
          cVar10 = '\0';
          cVar14 = '\0';
        }
        else {
          cVar10 = *pcVar3;
          pcVar8 = pcVar3 + 1;
          pMVar1->src_ = pcVar8;
          if (pcVar8 == pMVar1->end_) {
            cVar14 = '\0';
          }
          else {
            cVar14 = *pcVar8;
            pMVar1->src_ = pcVar3 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar14,cVar10);
        SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                  (param_1);
        if ((this->parseResult_).code_ != kParseErrorNone) {
          return;
        }
        wVar6 = param_1->current_;
        if (wVar6 == L'}') {
          bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  ::EndObject(param_2,uVar12);
          if (bVar5) {
            EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>::Take(param_1);
            return;
          }
          if ((this->parseResult_).code_ != kParseErrorNone) {
            iVar15 = 0x31e;
LAB_141dac332:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,iVar15,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
LAB_141dac352:
          uVar9 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
          (this->parseResult_).code_ = kParseErrorTermination;
LAB_141dac3ce:
          (this->parseResult_).offset_ = uVar9;
          return;
        }
      }
      if (param_1->current_ != L'}') {
        uVar9 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
        (this->parseResult_).code_ = kParseErrorObjectMissCommaOrCurlyBracket;
        goto LAB_141dac3ce;
      }
      EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>::Take(param_1);
      bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              ::EndObject(param_2,uVar12);
      if (bVar5) {
        return;
      }
      if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dac352;
      iVar15 = 0x315;
      goto LAB_141dac332;
    }
    pMVar1 = param_1->is_;
    pbVar2 = (byte *)pMVar1->src_;
    if (pbVar2 == (byte *)pMVar1->end_) {
      uVar11 = 0;
      bVar13 = 0;
    }
    else {
      uVar11 = (ushort)*pbVar2;
      pbVar7 = pbVar2 + 1;
      pMVar1->src_ = (char *)pbVar7;
      if (pbVar7 == (byte *)pMVar1->end_) {
        bVar13 = 0;
      }
      else {
        bVar13 = *pbVar7;
        pMVar1->src_ = (char *)(pbVar2 + 2);
      }
    }
    param_1->current_ = (ushort)bVar13 << 8 | uVar11;
    bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::EndObject(param_2,0);
    if (bVar5) {
      return;
    }
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dac1ae;
    iVar15 = 0x2f0;
  }
  else {
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dac1ae;
    iVar15 = 0x2e9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!HasParseError()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                     ,iVar15,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141dac1ae:
  pcVar3 = param_1->is_->src_;
  pcVar8 = param_1->is_->begin_;
  (this->parseResult_).code_ = kParseErrorTermination;
  (this->parseResult_).offset_ = (longlong)pcVar3 - (longlong)pcVar8;
  return;
}

// ParseObject<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dac3f0

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseObject<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  uint uVar8;
  
  if ((*param_1->src_ != L'{') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x2e5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->src_ = param_1->src_ + 1;
  bVar2 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          ::StartObject(param_2);
  if (bVar2) {
    for (pwVar5 = param_1->src_;
        (wVar3 = *pwVar5, wVar3 == L' ' ||
        (((wVar3 + L'\xfff7' & 0xfffaU) == 0 && (wVar3 != L'\x0e')))); pwVar5 = pwVar5 + 1) {
    }
    param_1->src_ = pwVar5;
    param_1->dst_ = param_1->dst_;
    param_1->head_ = param_1->head_;
    if ((this->parseResult_).code_ == kParseErrorNone) {
      wVar3 = *param_1->src_;
      if (wVar3 == L'}') {
        param_1->src_ = param_1->src_ + 1;
        bVar2 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                ::EndObject(param_2,0);
        if (!bVar2) {
          if (((this->parseResult_).code_ != kParseErrorNone) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasParseError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                 ,0x2f0,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (this->parseResult_).offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
          (this->parseResult_).code_ = kParseErrorTermination;
        }
      }
      else {
        uVar8 = 0;
        do {
          if (wVar3 != L'\"') {
            lVar4 = (longlong)param_1->src_ - (longlong)param_1->head_;
            (this->parseResult_).code_ = kParseErrorObjectMissName;
            goto LAB_141dac7b2;
          }
          ParseString<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                    (this,param_1,param_2,true);
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          pwVar5 = param_1->head_;
          for (pwVar6 = param_1->src_;
              (wVar3 = *pwVar6, wVar3 == L' ' ||
              (((wVar3 + L'\xfff7' & 0xfffaU) == 0 && (wVar3 != L'\x0e')))); pwVar6 = pwVar6 + 1) {
          }
          param_1->src_ = pwVar6;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar5;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          pwVar6 = param_1->src_;
          if (*pwVar6 != L':') {
            lVar4 = (longlong)pwVar6 - (longlong)param_1->head_;
            (this->parseResult_).code_ = kParseErrorObjectMissColon;
            goto LAB_141dac7b2;
          }
          param_1->src_ = pwVar6 + 1;
          for (pwVar6 = param_1->src_;
              (wVar3 = *pwVar6, wVar3 == L' ' ||
              (((wVar3 + L'\xfff7' & 0xfffaU) == 0 && (wVar3 != L'\x0e')))); pwVar6 = pwVar6 + 1) {
          }
          param_1->src_ = pwVar6;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar5;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                    (this,param_1,param_2);
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          pwVar5 = param_1->head_;
          for (pwVar6 = param_1->src_;
              (wVar3 = *pwVar6, wVar3 == L' ' ||
              (((wVar3 + L'\xfff7' & 0xfffaU) == 0 && (wVar3 != L'\x0e')))); pwVar6 = pwVar6 + 1) {
          }
          param_1->src_ = pwVar6;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar5;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          pwVar6 = param_1->src_;
          uVar8 = uVar8 + 1;
          if (*pwVar6 != L',') {
            if (*pwVar6 != L'}') {
              lVar4 = (longlong)pwVar6 - (longlong)param_1->head_;
              (this->parseResult_).code_ = kParseErrorObjectMissCommaOrCurlyBracket;
              goto LAB_141dac7b2;
            }
            param_1->src_ = pwVar6 + 1;
            bVar2 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    ::EndObject(param_2,uVar8);
            if (bVar2) {
              return;
            }
            if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dac74a;
            iVar7 = 0x315;
            goto LAB_141dac72a;
          }
          param_1->src_ = pwVar6 + 1;
          for (pwVar6 = param_1->src_;
              (wVar3 = *pwVar6, wVar3 == L' ' ||
              (((wVar3 + L'\xfff7' & 0xfffaU) == 0 && (wVar3 != L'\x0e')))); pwVar6 = pwVar6 + 1) {
          }
          param_1->src_ = pwVar6;
          param_1->dst_ = param_1->dst_;
          param_1->head_ = pwVar5;
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          wVar3 = *param_1->src_;
        } while (wVar3 != L'}');
        bVar2 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                ::EndObject(param_2,uVar8);
        if (bVar2) {
          param_1->src_ = param_1->src_ + 1;
        }
        else {
          if ((this->parseResult_).code_ != kParseErrorNone) {
            iVar7 = 0x31e;
LAB_141dac72a:
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,iVar7,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
LAB_141dac74a:
          lVar4 = (longlong)param_1->src_ - (longlong)param_1->head_;
          (this->parseResult_).code_ = kParseErrorTermination;
LAB_141dac7b2:
          (this->parseResult_).offset_ = lVar4 >> 1;
        }
      }
    }
  }
  else {
    if (((this->parseResult_).code_ != kParseErrorNone) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasParseError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x2e9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->parseResult_).offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
    (this->parseResult_).code_ = kParseErrorTermination;
  }
  return;
}

// ParseStream<128,rapidjson::UTF16LE<wchar_t>,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_> @ 141dac7f0

/* WARNING: Removing unreachable block (ram,0x000141dac870) */
/* WARNING: Removing unreachable block (ram,0x000141dac895) */
/* WARNING: Removing unreachable block (ram,0x000141dac8dd) */
/* WARNING: Removing unreachable block (ram,0x000141dac902) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
* __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::
ParseStream<128,rapidjson::UTF16LE<wchar_t>,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
          (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1)

{
  char **ppcVar1;
  CrtAllocator *pCVar2;
  code *pcVar3;
  Number NVar4;
  wchar_t *pwVar5;
  bool bVar6;
  GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
  *pGVar7;
  Number *pNVar8;
  char *_Memory;
  char *pcVar9;
  Data local_88;
  GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
  local_78;
  
  pCVar2 = (this->stack_).allocator_;
  local_78.stack_.ownAllocator_ = (CrtAllocator *)0x0;
  local_78.stack_.stackEnd_ = ___xmm_00000000000001000000000000000000;
  local_78.stack_.initialCapacity_ = _UNK_1507b1c78;
  local_78.stack_.stack_ = (char *)0x0;
  local_78.stack_.stackTop_ = (char *)0x0;
  local_78.stack_.allocator_ = (CrtAllocator *)0x0;
  if (pCVar2 != (CrtAllocator *)0x0) {
    local_78.stack_.allocator_ = pCVar2;
  }
  local_78.state_ = IterativeParsingStartState;
  local_78.parseResult_.code_ = kParseErrorNone;
  local_78.parseResult_.offset_ = 0;
  SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
            (param_1);
  if (local_78.parseResult_.code_ == kParseErrorNone) {
    if (param_1->current_ == L'\0') {
      local_78.parseResult_.offset_ = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      local_78.parseResult_.code_ = kParseErrorDocumentEmpty;
    }
    else {
      GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
      ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                (&local_78,param_1,this);
      if (((local_78.parseResult_.code_ == kParseErrorNone) &&
          (SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                     (param_1), local_78.parseResult_.code_ == kParseErrorNone)) &&
         (param_1->current_ != L'\0')) {
        local_78.parseResult_.offset_ =
             (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
        local_78.parseResult_.code_ = kParseErrorDocumentRootNotSingular;
      }
    }
  }
  *(ulonglong *)&this->parseResult_ =
       CONCAT44(local_78.parseResult_._4_4_,local_78.parseResult_.code_);
  (this->parseResult_).offset_ = local_78.parseResult_.offset_;
  local_78.stack_.stackTop_ = local_78.stack_.stack_;
  if ((this->parseResult_).code_ == kParseErrorNone) {
    if (((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_ != 0x10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("stack_.GetSize() == sizeof(ValueType)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0xa61,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pGVar7 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)(*pcVar3)();
      return pGVar7;
    }
    if (((ulonglong)((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_) < 0x10)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("GetSize() >= count * sizeof(T)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                              ,0x8b,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pGVar7 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)(*pcVar3)();
      return pGVar7;
    }
    pcVar9 = (this->stack_).stackTop_;
    pNVar8 = (Number *)(pcVar9 + -0x10);
    (this->stack_).stackTop_ = (char *)pNVar8;
    if ((Number *)this != pNVar8) {
      NVar4 = *pNVar8;
      pwVar5 = *(wchar_t **)(pcVar9 + -8);
      pcVar9[-2] = '\0';
      pcVar9[-1] = '\0';
      local_88.n = NVar4;
      local_88.s.str = pwVar5;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)this);
      local_88.s.str = (wchar_t *)((ulonglong)local_88.s.str & 0xffffffffffff);
      this->_padding_ = (longlong)NVar4;
      this->_padding_ = (longlong)pwVar5;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
    }
  }
  pcVar9 = (this->stack_).stackTop_;
  _Memory = (this->stack_).stack_;
  if (pcVar9 != _Memory) {
    do {
      if (((ulonglong)((longlong)pcVar9 - (longlong)_Memory) < 0x10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSize() >= count * sizeof(T)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x8b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pGVar7 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)(*pcVar3)();
        return pGVar7;
      }
      ppcVar1 = &(this->stack_).stackTop_;
      *ppcVar1 = *ppcVar1 + -0x10;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 (this->stack_).stackTop_);
      pcVar9 = (this->stack_).stackTop_;
      _Memory = (this->stack_).stack_;
    } while (pcVar9 != _Memory);
  }
  free(_Memory);
  (this->stack_).stack_ = (char *)0x0;
  (this->stack_).stackTop_ = (char *)0x0;
  (this->stack_).stackEnd_ = (char *)0x0;
  free(local_78.stack_.stack_);
  ::operator_delete(local_78.stack_.ownAllocator_,1);
  return this;
}

// ParseStream<129,rapidjson::UTF16<wchar_t>,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_> @ 141daca90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
* __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::
ParseStream<129,rapidjson::UTF16<wchar_t>,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
          (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1)

{
  char **ppcVar1;
  wchar_t wVar2;
  CrtAllocator *pCVar3;
  code *pcVar4;
  Number NVar5;
  wchar_t *pwVar6;
  bool bVar7;
  GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
  *pGVar8;
  Number *pNVar9;
  char *_Memory;
  char *pcVar10;
  GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
  local_c8;
  Data local_78;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  wchar_t *local_58;
  wchar_t *local_48;
  wchar_t *pwStack_40;
  wchar_t *local_38;
  
  pCVar3 = (this->stack_).allocator_;
  local_c8.stack_.stack_ = (char *)0x0;
  local_c8.stack_.stackTop_ = (char *)0x0;
  local_68 = param_1->src_;
  pwStack_60 = param_1->dst_;
  local_c8.stack_.stackEnd_ = ___xmm_00000000000001000000000000000000;
  local_c8.stack_.initialCapacity_ = _UNK_1507b1c78;
  local_c8.stack_.allocator_ = (CrtAllocator *)0x0;
  if (pCVar3 != (CrtAllocator *)0x0) {
    local_c8.stack_.allocator_ = pCVar3;
  }
  local_58 = param_1->head_;
  local_c8.stack_.ownAllocator_ = (CrtAllocator *)0x0;
  local_c8.state_ = IterativeParsingStartState;
  local_c8.parseResult_.code_ = kParseErrorNone;
  local_c8.parseResult_.offset_ = 0;
  for (; (wVar2 = *local_68, wVar2 == L' ' ||
         (((wVar2 + L'\xfff7' & 0xfffaU) == 0 && (wVar2 != L'\x0e')))); local_68 = local_68 + 1) {
  }
  param_1->src_ = local_68;
  param_1->dst_ = pwStack_60;
  param_1->head_ = local_58;
  if (*param_1->src_ == L'\0') {
    local_c8.parseResult_.offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
    local_c8.parseResult_.code_ = kParseErrorDocumentEmpty;
  }
  else {
    GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
    ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (&local_c8,param_1,this);
    if (local_c8.parseResult_.code_ == kParseErrorNone) {
      pwStack_40 = param_1->dst_;
      local_38 = param_1->head_;
      for (local_48 = param_1->src_;
          (wVar2 = *local_48, wVar2 == L' ' ||
          (((wVar2 + L'\xfff7' & 0xfffaU) == 0 && (wVar2 != L'\x0e')))); local_48 = local_48 + 1) {
      }
      param_1->src_ = local_48;
      param_1->dst_ = pwStack_40;
      param_1->head_ = local_38;
      if (*param_1->src_ != L'\0') {
        local_c8.parseResult_.offset_ = (longlong)param_1->src_ - (longlong)param_1->head_ >> 1;
        local_c8.parseResult_.code_ = kParseErrorDocumentRootNotSingular;
      }
    }
    local_c8.stack_.stackTop_ = local_c8.stack_.stack_;
  }
  *(ulonglong *)&this->parseResult_ =
       CONCAT44(local_c8.parseResult_._4_4_,local_c8.parseResult_.code_);
  (this->parseResult_).offset_ = local_c8.parseResult_.offset_;
  local_c8.stack_.stack_ = local_c8.stack_.stackTop_;
  if ((this->parseResult_).code_ == kParseErrorNone) {
    if ((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_ != 0x10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("stack_.GetSize() == sizeof(ValueType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0xa61,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pGVar8 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)(*pcVar4)();
        return pGVar8;
      }
    }
    if ((ulonglong)((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_) < 0x10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSize() >= count * sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x8b,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pGVar8 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)(*pcVar4)();
        return pGVar8;
      }
    }
    pcVar10 = (this->stack_).stackTop_;
    pNVar9 = (Number *)(pcVar10 + -0x10);
    (this->stack_).stackTop_ = (char *)pNVar9;
    if ((Number *)this != pNVar9) {
      NVar5 = *pNVar9;
      pwVar6 = *(wchar_t **)(pcVar10 + -8);
      pcVar10[-2] = '\0';
      pcVar10[-1] = '\0';
      local_78.n = NVar5;
      local_78.s.str = pwVar6;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)this);
      local_78.s.str = (wchar_t *)((ulonglong)local_78.s.str & 0xffffffffffff);
      this->_padding_ = (longlong)NVar5;
      this->_padding_ = (longlong)pwVar6;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  pcVar10 = (this->stack_).stackTop_;
  _Memory = (this->stack_).stack_;
  if (pcVar10 != _Memory) {
    do {
      if ((ulonglong)((longlong)pcVar10 - (longlong)_Memory) < 0x10) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetSize() >= count * sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x8b,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pGVar8 = (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    *)(*pcVar4)();
          return pGVar8;
        }
      }
      ppcVar1 = &(this->stack_).stackTop_;
      *ppcVar1 = *ppcVar1 + -0x10;
      GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 (this->stack_).stackTop_);
      pcVar10 = (this->stack_).stackTop_;
      _Memory = (this->stack_).stack_;
    } while (pcVar10 != _Memory);
  }
  free(_Memory);
  (this->stack_).stack_ = (char *)0x0;
  (this->stack_).stackTop_ = (char *)0x0;
  (this->stack_).stackEnd_ = (char *)0x0;
  free(local_c8.stack_.stack_);
  ::operator_delete(local_c8.stack_.ownAllocator_,1);
  return this;
}

// ParseString<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dacd40

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseString<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2,bool param_3)

{
  char **ppcVar1;
  ParseErrorCode PVar2;
  MemoryStream *pMVar3;
  byte *pbVar4;
  short *psVar5;
  char *pcVar6;
  code *pcVar7;
  Stack<rapidjson::CrtAllocator> *pSVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  wchar_t wVar14;
  char cVar15;
  ushort uVar16;
  ulong64 uVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  ulonglong uVar21;
  uint local_res8 [2];
  StackStream<wchar_t> local_38;
  
  if ((param_1->current_ != L'\"') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("s.Peek() == \'\\\"\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x3c3,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pMVar3 = param_1->is_;
  pbVar4 = (byte *)pMVar3->src_;
  if (pbVar4 == (byte *)pMVar3->end_) {
    uVar16 = 0;
    bVar18 = 0;
  }
  else {
    uVar16 = (ushort)*pbVar4;
    pbVar12 = pbVar4 + 1;
    pMVar3->src_ = (char *)pbVar12;
    if (pbVar12 == (byte *)pMVar3->end_) {
      bVar18 = 0;
    }
    else {
      bVar18 = *pbVar12;
      pMVar3->src_ = (char *)(pbVar4 + 2);
    }
  }
  param_1->current_ = (ushort)bVar18 << 8 | uVar16;
  local_38.length_ = 0;
  local_38.stack_ = &this->stack_;
LAB_141dacdf1:
  pSVar8 = local_38.stack_;
  wVar14 = param_1->current_;
  if (wVar14 == L'\\') {
    pMVar3 = param_1->is_;
    pbVar4 = (byte *)pMVar3->src_;
    uVar17 = (longlong)pbVar4 - (longlong)pMVar3->begin_;
    if (pbVar4 == (byte *)pMVar3->end_) {
      bVar18 = 0;
      bVar19 = 0;
    }
    else {
      bVar18 = *pbVar4;
      pbVar12 = pbVar4 + 1;
      pMVar3->src_ = (char *)pbVar12;
      if (pbVar12 == (byte *)pMVar3->end_) {
        bVar19 = 0;
      }
      else {
        bVar19 = *pbVar12;
        pMVar3->src_ = (char *)(pbVar4 + 2);
      }
    }
    wVar14 = CONCAT11(bVar19,bVar18);
    param_1->current_ = wVar14;
    if (((ushort)wVar14 < 0x100) &&
       (*(char *)((longlong)
                  &`private:_void___cdecl_rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::ParseStringToStream<128,rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_>(rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>&___ptr64,rapidjson::GenericReader<struct_rapidjson::UTF16LE<wchar_t>,struct_rapidjson::UTF16<wchar_t>,class_rapidjson::CrtAllocator>::StackStream<wchar_t>&___ptr64)___ptr64'
                   ::__l2::escape + (ulonglong)bVar18) != '\0')) {
      pMVar3 = param_1->is_;
      pbVar4 = (byte *)pMVar3->src_;
      if (pbVar4 == (byte *)pMVar3->end_) {
        uVar16 = 0;
        bVar19 = 0;
      }
      else {
        uVar16 = (ushort)*pbVar4;
        pbVar12 = pbVar4 + 1;
        pMVar3->src_ = (char *)pbVar12;
        if (pbVar12 == (byte *)pMVar3->end_) {
          bVar19 = 0;
        }
        else {
          bVar19 = *pbVar12;
          pMVar3->src_ = (char *)(pbVar4 + 2);
        }
      }
      param_1->current_ = (ushort)bVar19 << 8 | uVar16;
      cVar15 = *(char *)((longlong)
                         &`private:_void___cdecl_rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::ParseStringToStream<128,rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_>(rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>&___ptr64,rapidjson::GenericReader<struct_rapidjson::UTF16LE<wchar_t>,struct_rapidjson::UTF16<wchar_t>,class_rapidjson::CrtAllocator>::StackStream<wchar_t>&___ptr64)___ptr64'
                          ::__l2::escape + (ulonglong)bVar18);
      if ((longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stackEnd_ -
          (longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stackTop_ <
          2) {
        internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>(local_38.stack_,1);
      }
      if ((((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ == (char *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("stackTop_",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x82,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((longlong)((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackEnd_ -
           (longlong)((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ < 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x83,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      psVar5 = (short *)((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_;
      local_38.length_ = local_38.length_ + 1;
      ((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ = (char *)(psVar5 + 1);
      *psVar5 = (short)cVar15;
      goto LAB_141dacdf1;
    }
    if (wVar14 != L'u') {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x417,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->parseResult_).code_ = kParseErrorStringEscapeInvalid;
      (this->parseResult_).offset_ = uVar17;
      goto LAB_141dad31d;
    }
    pMVar3 = param_1->is_;
    pcVar6 = pMVar3->src_;
    if (pcVar6 == pMVar3->end_) {
      cVar15 = '\0';
      cVar20 = '\0';
    }
    else {
      cVar15 = *pcVar6;
      pcVar13 = pcVar6 + 1;
      pMVar3->src_ = pcVar13;
      if (pcVar13 == pMVar3->end_) {
        cVar20 = '\0';
      }
      else {
        cVar20 = *pcVar13;
        pMVar3->src_ = pcVar6 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar20,cVar15);
    uVar10 = ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                       (this,param_1,uVar17);
    if ((this->parseResult_).code_ != kParseErrorNone) {
      return;
    }
    if (0x7ff < uVar10 - 0xd800) {
LAB_141dad0a3:
      UTF16<wchar_t>::
      Encode<rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_>
                (&local_38,uVar10);
      goto LAB_141dacdf1;
    }
    if (uVar10 < 0xdc00) {
      if (param_1->current_ == L'\\') {
        pMVar3 = param_1->is_;
        pcVar6 = pMVar3->src_;
        if (pcVar6 == pMVar3->end_) {
          cVar15 = '\0';
          cVar20 = '\0';
        }
        else {
          cVar15 = *pcVar6;
          pcVar13 = pcVar6 + 1;
          pMVar3->src_ = pcVar13;
          if (pcVar13 == pMVar3->end_) {
            cVar20 = '\0';
          }
          else {
            cVar20 = *pcVar13;
            pMVar3->src_ = pcVar6 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar20,cVar15);
        if (CONCAT11(cVar20,cVar15) == L'u') {
          pMVar3 = param_1->is_;
          pcVar6 = pMVar3->src_;
          if (pcVar6 == pMVar3->end_) {
            cVar15 = '\0';
            cVar20 = '\0';
          }
          else {
            cVar15 = *pcVar6;
            pcVar13 = pcVar6 + 1;
            pMVar3->src_ = pcVar13;
            if (pcVar13 == pMVar3->end_) {
              cVar20 = '\0';
            }
            else {
              cVar20 = *pcVar13;
              pMVar3->src_ = pcVar6 + 2;
            }
          }
          param_1->current_ = CONCAT11(cVar20,cVar15);
          uVar11 = ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                             (this,param_1,uVar17);
          if ((this->parseResult_).code_ != kParseErrorNone) {
            return;
          }
          if (uVar11 - 0xdc00 < 0x400) {
            uVar10 = ((uVar10 - 0xd800) * 0x400 | uVar11 - 0xdc00) + 0x10000;
            goto LAB_141dad0a3;
          }
          goto LAB_141dad126;
        }
      }
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x407,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
LAB_141dad126:
    (this->parseResult_).code_ = kParseErrorStringUnicodeSurrogateInvalid;
    (this->parseResult_).offset_ = uVar17;
  }
  else if (wVar14 == L'\"') {
    pMVar3 = param_1->is_;
    pcVar6 = pMVar3->src_;
    if (pcVar6 == pMVar3->end_) {
      cVar15 = '\0';
      cVar20 = '\0';
    }
    else {
      cVar15 = *pcVar6;
      pcVar13 = pcVar6 + 1;
      pMVar3->src_ = pcVar13;
      if (pcVar13 == pMVar3->end_) {
        cVar20 = '\0';
      }
      else {
        cVar20 = *pcVar13;
        pMVar3->src_ = pcVar6 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar20,cVar15);
    if ((longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stackEnd_ -
        (longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stackTop_ < 2)
    {
      internal::Stack<rapidjson::CrtAllocator>::Expand<wchar_t>(local_38.stack_,1);
    }
    if ((((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ == (char *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((longlong)((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackEnd_ -
         (longlong)((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar6 = ((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_;
    local_38.length_ = local_38.length_ + 1;
    ((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_ = pcVar6 + 2;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
  }
  else {
    if (0x1f < (ushort)wVar14) {
      pcVar6 = param_1->is_->src_;
      pcVar13 = param_1->is_->begin_;
      bVar9 = UTF16<wchar_t>::
              Decode<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
                        (param_1,local_res8);
      if (!bVar9) {
        if (((this->parseResult_).code_ != kParseErrorNone) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,0x429,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->parseResult_).code_ = kParseErrorStringInvalidEncoding;
        (this->parseResult_).offset_ = (longlong)pcVar6 - (longlong)pcVar13;
        goto LAB_141dad31d;
      }
      UTF16<wchar_t>::
      Encode<rapidjson::GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::StackStream<wchar_t>_>
                (&local_38,local_res8[0]);
      goto LAB_141dacdf1;
    }
    PVar2 = (this->parseResult_).code_;
    if (wVar14 == L'\0') {
      if ((PVar2 != kParseErrorNone) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x420,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->parseResult_).offset_ = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorStringMissQuotationMark;
    }
    else {
      if ((PVar2 != kParseErrorNone) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x422,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->parseResult_).offset_ = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorStringInvalidEncoding;
    }
  }
LAB_141dad31d:
  uVar10 = local_38.length_;
  pSVar8 = local_38.stack_;
  if ((this->parseResult_).code_ == kParseErrorNone) {
    uVar21 = (ulonglong)local_38.length_;
    if (((ulonglong)
         ((longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stackTop_ -
         (longlong)((Stack<rapidjson::CrtAllocator> *)&(local_38.stack_)->allocator_)->stack_) <
         uVar21 * 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetSize() >= count * sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x8b,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ppcVar1 = &((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_;
    *ppcVar1 = *ppcVar1 + uVar21 * -2;
    bVar9 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::String(param_2,(wchar_t *)
                             ((Stack<rapidjson::CrtAllocator> *)&pSVar8->allocator_)->stackTop_,
                     uVar10 - 1,true);
    if (!bVar9) {
      if (((this->parseResult_).code_ != kParseErrorNone) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x3d9,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->parseResult_).offset_ = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
      (this->parseResult_).code_ = kParseErrorTermination;
    }
  }
  return;
}

// ParseString<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dad400

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseString<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2,bool param_3)

{
  ulonglong uVar1;
  char cVar2;
  wchar_t wVar3;
  ParseErrorCode PVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ParseResult *pPVar13;
  wchar_t *pwVar14;
  int iVar15;
  ulong64 uVar16;
  GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> local_48;
  GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *local_30;
  
  pwVar10 = param_1->src_;
  local_48.dst_ = param_1->dst_;
  local_48.head_ = param_1->head_;
  local_30 = param_1;
  if ((*pwVar10 != L'\"') &&
     (local_48.src_ = pwVar10,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("s.Peek() == \'\\\"\'",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                        ,0x3c3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pwVar10 = pwVar10 + 1;
  pwVar12 = pwVar10;
  local_48.src_ = pwVar10;
  local_48.dst_ = pwVar10;
  while( true ) {
    while( true ) {
      while (pwVar14 = local_48.dst_, wVar3 = *pwVar12, wVar3 != L'\\') {
        if (wVar3 == L'\"') {
          pwVar12 = pwVar12 + 1;
          local_48.src_ = pwVar12;
          if ((local_48.dst_ == (wchar_t *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("dst_ != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                                 ,199,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *pwVar14 = L'\0';
          local_48.dst_ = pwVar14 + 1;
          pwVar14 = local_48.dst_;
          goto LAB_141dad81b;
        }
        if ((ushort)wVar3 < 0x20) {
          PVar4 = (this->parseResult_).code_;
          if (wVar3 == L'\0') {
            if ((PVar4 != kParseErrorNone) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!HasParseError()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                   ,0x420,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->parseResult_).code_ = kParseErrorStringMissQuotationMark;
            (this->parseResult_).offset_ = (longlong)pwVar12 - (longlong)local_48.head_ >> 1;
          }
          else {
            if ((PVar4 != kParseErrorNone) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!HasParseError()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                   ,0x422,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->parseResult_).code_ = kParseErrorStringInvalidEncoding;
            (this->parseResult_).offset_ = (longlong)pwVar12 - (longlong)local_48.head_ >> 1;
          }
          goto LAB_141dad81b;
        }
        pwVar12 = pwVar12 + 1;
        local_48.src_ = pwVar12;
        if ((local_48.dst_ == (wchar_t *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("dst_ != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                               ,199,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *pwVar14 = wVar3;
        local_48.dst_ = pwVar14 + 1;
      }
      wVar3 = pwVar12[1];
      pwVar11 = pwVar12 + 1;
      uVar16 = (longlong)pwVar12 - (longlong)local_48.head_ >> 1;
      if ((0xff < (ushort)wVar3) ||
         (cVar2 = *(char *)((longlong)
                            &`private:_void___cdecl_rapidjson::GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::ParseStringToStream<129,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericInsituStringStream<struct_rapidjson::UTF16LE<wchar_t>_>_>(rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>&___ptr64,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>&___ptr64)___ptr64'
                             ::__l2::escape + ((ulonglong)(ushort)wVar3 & 0xff)), cVar2 == '\0'))
      break;
      pwVar12 = pwVar12 + 2;
      local_48.src_ = pwVar12;
      if ((local_48.dst_ == (wchar_t *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("dst_ != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\stream.h"
                             ,199,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *pwVar14 = (short)cVar2;
      local_48.dst_ = pwVar14 + 1;
    }
    pPVar13 = &this->parseResult_;
    if (wVar3 != L'u') {
      local_48.src_ = pwVar11;
      if ((pPVar13->code_ != kParseErrorNone) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasParseError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                             ,0x417,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pPVar13->code_ = kParseErrorStringEscapeInvalid;
      (this->parseResult_).offset_ = uVar16;
      pwVar12 = pwVar11;
      goto LAB_141dad81b;
    }
    local_48.src_ = pwVar12 + 2;
    uVar8 = ParseHex4<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
                      (this,&local_48,uVar16);
    pwVar12 = local_48.src_;
    pwVar14 = local_48.dst_;
    if (pPVar13->code_ != kParseErrorNone) goto LAB_141dad81b;
    if (uVar8 - 0xd800 < 0x800) break;
LAB_141dad646:
    UTF16<wchar_t>::Encode<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
              (&local_48,uVar8);
    pwVar12 = local_48.src_;
  }
  pwVar14 = local_48.src_;
  if (((uVar8 < 0xdc00) && (*local_48.src_ == L'\\')) &&
     (pwVar12 = local_48.src_ + 1, pwVar14 = pwVar12, *pwVar12 == L'u')) {
    pwVar12 = local_48.src_ + 2;
    iVar9 = 0;
    iVar15 = 0;
    do {
      wVar3 = *pwVar12;
      iVar9 = iVar9 * 0x10 + (uint)(ushort)wVar3;
      if ((ushort)(wVar3 + L'￐') < 10) {
        iVar9 = iVar9 + -0x30;
      }
      else if ((ushort)(wVar3 + L'﾿') < 6) {
        iVar9 = iVar9 + -0x37;
      }
      else {
        if (5 < (ushort)(wVar3 + L'ﾟ')) {
          local_48.src_ = pwVar12;
          if ((pPVar13->code_ != kParseErrorNone) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasParseError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                                 ,0x397,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pPVar13->code_ = kParseErrorStringUnicodeEscapeInvalidHex;
          iVar9 = 0;
          (this->parseResult_).offset_ = uVar16;
          break;
        }
        iVar9 = iVar9 + -0x57;
      }
      pwVar12 = pwVar12 + 1;
      iVar15 = iVar15 + 1;
      local_48.src_ = pwVar12;
    } while (iVar15 < 4);
    pwVar14 = local_48.dst_;
    if (pPVar13->code_ != kParseErrorNone) goto LAB_141dad81b;
    pwVar14 = local_48.src_;
    if (iVar9 - 0xdc00U < 0x400) {
      uVar8 = ((uVar8 - 0xd800) * 0x400 | iVar9 - 0xdc00U) + 0x10000;
      goto LAB_141dad646;
    }
  }
  local_48.src_ = pwVar14;
  pPVar13->code_ = kParseErrorStringUnicodeSurrogateInvalid;
  (this->parseResult_).offset_ = uVar16;
  pwVar14 = local_48.dst_;
LAB_141dad81b:
  pPVar13 = &this->parseResult_;
  if (pPVar13->code_ == kParseErrorNone) {
    uVar1 = ((longlong)pwVar14 - (longlong)pwVar10 >> 1) - 1;
    if ((0xffffffff < uVar1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("length <= 0xFFFFFFFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x3cc,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = (uint)uVar1;
    if (param_3) {
      if ((longlong)(param_2->stack_).stackEnd_ - (longlong)(param_2->stack_).stackTop_ < 0x10) {
        internal::Stack<rapidjson::CrtAllocator>::
        Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                  (&param_2->stack_,1);
      }
      if (((param_2->stack_).stackTop_ == (char *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("stackTop_",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x82,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((longlong)(param_2->stack_).stackEnd_ - (longlong)(param_2->stack_).stackTop_ < 0x10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x83,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar5 = (uint *)(param_2->stack_).stackTop_;
      pwVar12 = L"";
      if (pwVar10 != (wchar_t *)0x0) {
        pwVar12 = pwVar10;
      }
      (param_2->stack_).stackTop_ = (char *)(puVar5 + 4);
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      if (((pwVar10 == (wchar_t *)0x0) && (uVar8 != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("str != 0 || len == 0u",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x1a1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ((char *)((longlong)puVar5 + 0xe))[0] = '\x05';
      ((char *)((longlong)puVar5 + 0xe))[1] = '\x04';
      *(ulonglong *)(puVar5 + 2) = *(ulonglong *)(puVar5 + 2) & 0xffff000000000000;
      *(ulonglong *)(puVar5 + 2) = *(ulonglong *)(puVar5 + 2) | (ulonglong)pwVar12;
      *puVar5 = uVar8;
    }
    else {
      bVar7 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              ::String(param_2,pwVar10,uVar8,false);
      if (!bVar7) {
        if ((pPVar13->code_ != kParseErrorNone) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,0x3d9,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (this->parseResult_).offset_ = (longlong)pwVar12 - (longlong)local_48.head_ >> 1;
        pPVar13->code_ = kParseErrorTermination;
      }
    }
  }
  local_30->src_ = local_48.src_;
  local_30->dst_ = local_48.dst_;
  local_30->head_ = local_48.head_;
  return;
}

// ParseTrue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dad9f0

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseTrue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  MemoryStream *pMVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  ulong64 uVar6;
  char cVar7;
  char cVar8;
  
  if ((param_1->current_ != L't') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("is.Peek() == \'t\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x366,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar1 = param_1->is_;
  pcVar2 = pMVar1->src_;
  if (pcVar2 == pMVar1->end_) {
    cVar7 = '\0';
    cVar8 = '\0';
  }
  else {
    cVar7 = *pcVar2;
    pcVar5 = pcVar2 + 1;
    pMVar1->src_ = pcVar5;
    if (pcVar5 == pMVar1->end_) {
      cVar8 = '\0';
    }
    else {
      cVar8 = *pcVar5;
      pMVar1->src_ = pcVar2 + 2;
    }
  }
  param_1->current_ = CONCAT11(cVar8,cVar7);
  if (CONCAT11(cVar8,cVar7) == L'r') {
    pMVar1 = param_1->is_;
    pcVar2 = pMVar1->src_;
    if (pcVar2 == pMVar1->end_) {
      cVar7 = '\0';
      cVar8 = '\0';
    }
    else {
      cVar7 = *pcVar2;
      pcVar5 = pcVar2 + 1;
      pMVar1->src_ = pcVar5;
      if (pcVar5 == pMVar1->end_) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *pcVar5;
        pMVar1->src_ = pcVar2 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar8,cVar7);
    if (CONCAT11(cVar8,cVar7) == L'u') {
      pMVar1 = param_1->is_;
      pcVar2 = pMVar1->src_;
      if (pcVar2 == pMVar1->end_) {
        cVar7 = '\0';
        cVar8 = '\0';
      }
      else {
        cVar7 = *pcVar2;
        pcVar5 = pcVar2 + 1;
        pMVar1->src_ = pcVar5;
        if (pcVar5 == pMVar1->end_) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *pcVar5;
          pMVar1->src_ = pcVar2 + 2;
        }
      }
      param_1->current_ = CONCAT11(cVar8,cVar7);
      if (CONCAT11(cVar8,cVar7) == L'e') {
        pMVar1 = param_1->is_;
        pcVar2 = pMVar1->src_;
        if (pcVar2 == pMVar1->end_) {
          cVar7 = '\0';
          cVar8 = '\0';
        }
        else {
          cVar7 = *pcVar2;
          pcVar5 = pcVar2 + 1;
          pMVar1->src_ = pcVar5;
          if (pcVar5 == pMVar1->end_) {
            cVar8 = '\0';
          }
          else {
            cVar8 = *pcVar5;
            pMVar1->src_ = pcVar2 + 2;
          }
        }
        param_1->current_ = CONCAT11(cVar8,cVar7);
        bVar4 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                ::Bool(param_2,true);
        if (bVar4) {
          return;
        }
        if (((this->parseResult_).code_ != kParseErrorNone) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!HasParseError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                               ,0x36b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
        (this->parseResult_).code_ = kParseErrorTermination;
        goto LAB_141dadbf5;
      }
    }
  }
  if (((this->parseResult_).code_ != kParseErrorNone) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasParseError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,0x36e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (longlong)param_1->is_->src_ - (longlong)param_1->is_->begin_;
  (this->parseResult_).code_ = kParseErrorValueInvalid;
LAB_141dadbf5:
  (this->parseResult_).offset_ = uVar6;
  return;
}

// ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dadc10

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseValue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16LE<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  switch(param_1->current_) {
  case L'\"':
    ParseString<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2,false);
    return;
  default:
    ParseNumber<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'[':
    ParseArray<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'f':
    ParseFalse<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'n':
    ParseNull<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L't':
    ParseTrue<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'{':
    ParseObject<128,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  }
}

// ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_> @ 141dadce0

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>::
ParseValue<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
          (GenericReader<rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,rapidjson::CrtAllocator>
           *this,GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  wVar1 = *param_1->src_;
  switch(wVar1) {
  case L'\"':
    ParseString<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2,false);
    return;
  default:
    ParseNumber<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'[':
    ParseArray<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  case L'f':
    if ((wVar1 != L'f') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("is.Peek() == \'f\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x373,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pwVar3 = param_1->src_;
    param_1->src_ = pwVar3 + 1;
    if ((((pwVar3[1] != L'a') || (param_1->src_ = pwVar3 + 2, pwVar3[2] != L'l')) ||
        (param_1->src_ = pwVar3 + 3, pwVar3[3] != L's')) ||
       (param_1->src_ = pwVar3 + 4, pwVar3[4] != L'e')) {
      if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dade16;
      iVar6 = 0x37b;
LAB_141daddf6:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasParseError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                         ,iVar6,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_141dade16:
      pwVar3 = param_1->src_;
      pwVar2 = param_1->head_;
      (this->parseResult_).code_ = kParseErrorValueInvalid;
      (this->parseResult_).offset_ = (longlong)pwVar3 - (longlong)pwVar2 >> 1;
      return;
    }
    param_1->src_ = pwVar3 + 5;
    bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::Bool(param_2,false);
    if (bVar5) {
      return;
    }
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141daddc5;
    iVar6 = 0x378;
    break;
  case L'n':
    if ((wVar1 != L'n') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("is.Peek() == \'n\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x359,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pwVar3 = param_1->src_;
    param_1->src_ = pwVar3 + 1;
    if (((pwVar3[1] != L'u') || (param_1->src_ = pwVar3 + 2, pwVar3[2] != L'l')) ||
       (param_1->src_ = pwVar3 + 3, pwVar3[3] != L'l')) {
      if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dade16;
      iVar6 = 0x361;
      goto LAB_141daddf6;
    }
    param_1->src_ = pwVar3 + 4;
    bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::Null(param_2);
    if (bVar5) {
      return;
    }
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141daddc5;
    iVar6 = 0x35e;
    break;
  case L't':
    if ((wVar1 != L't') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("is.Peek() == \'t\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                           ,0x366,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pwVar3 = param_1->src_;
    param_1->src_ = pwVar3 + 1;
    if (((pwVar3[1] != L'r') || (param_1->src_ = pwVar3 + 2, pwVar3[2] != L'u')) ||
       (param_1->src_ = pwVar3 + 3, pwVar3[3] != L'e')) {
      if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141dade16;
      iVar6 = 0x36e;
      goto LAB_141daddf6;
    }
    param_1->src_ = pwVar3 + 4;
    bVar5 = GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            ::Bool(param_2,true);
    if (bVar5) {
      return;
    }
    if ((this->parseResult_).code_ == kParseErrorNone) goto LAB_141daddc5;
    iVar6 = 0x36b;
    break;
  case L'{':
    ParseObject<129,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              (this,param_1,param_2);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!HasParseError()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\reader.h"
                     ,iVar6,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141daddc5:
  pwVar3 = param_1->src_;
  pwVar2 = param_1->head_;
  (this->parseResult_).code_ = kParseErrorTermination;
  (this->parseResult_).offset_ = (longlong)pwVar3 - (longlong)pwVar2 >> 1;
  return;
}

// PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> @ 141dae150

void __cdecl
rapidjson::PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
          (GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_1
          ,wchar_t param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((longlong)(param_1->stack_).stackEnd_ - (longlong)(param_1->stack_).stackTop_ < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pwVar1 = (wchar_t *)(param_1->stack_).stackTop_;
  (param_1->stack_).stackTop_ = (char *)(pwVar1 + 1);
  *pwVar1 = param_2;
  return;
}

// Realloc<rapidjson::GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,UE::Json::Private::FAllocatorImpl> @ 141dae1f0

GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> * __cdecl
rapidjson::
Realloc<rapidjson::GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,UE::Json::Private::FAllocatorImpl>
          (FAllocatorImpl *param_1,
          GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_2,
          ulong64 param_3,ulong64 param_4)

{
  code *pcVar1;
  bool bVar2;
  GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  
  if ((0x7ffffffffffffff < param_3) || (0x7ffffffffffffff < param_4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("old_n <= (std::numeric_limits<size_t>::max)() / sizeof(T) && new_n <= (std::numeric_limits<size_t>::max)() / sizeof(T)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\allocators.h"
                       ,0x1b5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pGVar3 = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar1)();
      return pGVar3;
    }
  }
  if (param_4 << 5 == 0) {
    FMemory::Free(param_2);
    return (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)0x0;
  }
  pGVar3 = FMemory::Realloc(param_2,param_4 << 5,0);
  return pGVar3;
}

// SkipWhitespace<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_> @ 141db4e50

void __cdecl
rapidjson::SkipWhitespace<rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
          (GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  for (pwVar2 = param_1->src_;
      (wVar1 = *pwVar2, wVar1 == L' ' ||
      (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e')))); pwVar2 = pwVar2 + 1) {
  }
  param_1->src_ = pwVar2;
  param_1->dst_ = param_1->dst_;
  param_1->head_ = param_1->head_;
  return;
}

// SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_> @ 141db4eb0

void __cdecl
rapidjson::
SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
          (EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *param_1)

{
  wchar_t wVar1;
  MemoryStream *pMVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  
  while ((wVar1 = param_1->current_, wVar1 == L' ' ||
         (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e'))))) {
    pMVar2 = param_1->is_;
    pcVar3 = pMVar2->src_;
    if (pcVar3 == pMVar2->end_) {
      cVar5 = '\0';
      cVar6 = '\0';
    }
    else {
      cVar5 = *pcVar3;
      pcVar4 = pcVar3 + 1;
      pMVar2->src_ = pcVar4;
      if (pcVar4 == pMVar2->end_) {
        cVar6 = '\0';
      }
      else {
        cVar6 = *pcVar4;
        pMVar2->src_ = pcVar3 + 2;
      }
    }
    param_1->current_ = CONCAT11(cVar6,cVar5);
  }
  return;
}

// TryConvertNumber<signed_char> @ 141db5310

bool __cdecl TryConvertNumber<signed_char>(FJsonValue *param_1,schar *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (__real_c060000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_405fc00000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (schar)(int)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<unsigned_char> @ 141db5370

bool __cdecl TryConvertNumber<unsigned_char>(FJsonValue *param_1,uchar *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_406fe00000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (uchar)(int)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<short> @ 141db53d0

bool __cdecl TryConvertNumber<short>(FJsonValue *param_1,short *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (__real_c0e0000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_40dfffc000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (short)(int)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<unsigned_short> @ 141db5430

bool __cdecl TryConvertNumber<unsigned_short>(FJsonValue *param_1,ushort *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_40efffe000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (ushort)(int)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<int> @ 141db5490

bool __cdecl TryConvertNumber<int>(FJsonValue *param_1,int *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (__real_c1e0000000000000 <= local_res8[0])) &&
     (local_res8[0] <= __real_41dfffffffc00000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (int)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<unsigned_int> @ 141db54f0

bool __cdecl TryConvertNumber<unsigned_int>(FJsonValue *param_1,uint *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] <= __real_41efffffffe00000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (uint)(longlong)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<__int64> @ 141db5550

bool __cdecl TryConvertNumber<__int64>(FJsonValue *param_1,long64 *param_2)

{
  char cVar1;
  double dVar2;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (__real_c3e0000000000000 <= local_res8[0])) &&
     (local_res8[0] < __real_43e0000000000000)) {
    dVar2 = FMath::RoundHalfFromZero(local_res8[0]);
    *param_2 = (longlong)dVar2;
    return true;
  }
  return false;
}

// TryConvertNumber<unsigned___int64> @ 141db55b0

bool __cdecl TryConvertNumber<unsigned___int64>(FJsonValue *param_1,ulong64 *param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double local_res8 [4];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,local_res8);
  if (((cVar1 != '\0') && (0.0 <= local_res8[0])) && (local_res8[0] < __real_43f0000000000000)) {
    dVar3 = FMath::RoundHalfFromZero(local_res8[0]);
    lVar2 = 0;
    if ((__real_43e0000000000000 <= dVar3) &&
       (dVar3 = dVar3 - __real_43e0000000000000, dVar3 < __real_43e0000000000000)) {
      lVar2 = -0x8000000000000000;
    }
    *param_2 = (longlong)dVar3 + lVar2;
    return true;
  }
  return false;
}

// Visit<`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pFVar1;
  TStringView<wchar_t> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined1 auStack_18 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x01':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Name;
    uStack_40 = 0x141db58bc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x02':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x03':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x04':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(uint *)param_2);
    return;
  case '\x05':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x06':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\a':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  case '\t':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Name;
    uStack_40 = 0x141db5e2c;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\n':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x70);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6388;
    }
    uStack_40 = 0x141db6388;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6388:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db63a4;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\v':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6feb;
    }
    uStack_40 = 0x141db6feb;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6feb:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db7007;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\f':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x88);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\r':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x80);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db618b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x0e':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x58);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6728:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x0f':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x50);
    if (param_1->Name->Size == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = param_1->Name->DataPtr;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x10':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x11':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Name;
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x12':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x13':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x14':
    auStack_18._0_8_ = __security_cookie.value ^ (ulonglong)auStack_e8;
    pTVar2 = param_1->Name;
    this = (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
           (param_1->__this->JsonWriter).Object;
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = pTVar2->DataPtr;
    TStack_98.Size = pTVar2->Size;
    TStack_98._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)auStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\x15':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x16':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\x17':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  case '\x18':
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(param_1->Name->DataPtr + 0x108))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = param_1->Name;
    if (pTVar2 != (TStringView<wchar_t> *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)pTVar2->DataPtr)(pTVar2,1);
    }
    if (param_1[2].Name != (TStringView<wchar_t> *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(param_1[2].Name);
    }
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (param_1[1].__this !=
        (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(param_1[1].__this);
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x19':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset((FUtf8String *)param_1[3].Name,*(int *)&param_1[3].__this);
    uVar10 = 0;
    if (0 < *(int *)&param_1[3].__this) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&param_1[3].__this) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          auStack_18._0_8_ = SEXT48((int)uVar10);
          uStack_40 = 0x141dce943;
          auStack_18._8_8_ = (longlong)*(int *)&param_1[3].__this;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  ((FUtf8String *)param_1[3].Name,
                   *(uchar *)((longlong)&(param_1[2].Name)->DataPtr + lVar9));
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)&param_1[3].__this);
    }
    if (((*(int *)&param_1[2].__this == 0) || ((*(int *)&param_1[2].__this - 3U & 0xfffffffd) == 0))
       && (*(int *)&param_1[1].Name == 0)) {
      return;
    }
    return;
  case '\x1a':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\x1b':
    uStack_40 = 0x141e0186d;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\x1c':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\x1d':
    uStack_40 = 0x141e018dd;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\x1e':
    uStack_40 = 0x141e017fd;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)auStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar3 = *(code **)(pFVar1->_padding_ + 0x78);
  if (param_1->Name->Size == 0) {
    auStack_18._0_8_ = L"";
  }
  else {
    auStack_18._0_8_ = param_1->Name->DataPtr;
    iVar6 = 0;
    if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db71e8;
  }
  uStack_40 = 0x141db71e8;
  sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
  iVar6 = (int)sVar7;
LAB_141db71e8:
  auStack_18._8_4_ = iVar6;
  uStack_40 = 0x141db7204;
  (*pcVar3)(pFVar1,auStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  TStringView<wchar_t> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined1 auStack_18 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x01':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Name;
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x02':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x03':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x05':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x06':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\a':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  case '\b':
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(param_1->Name->DataPtr + 0x108))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = param_1->Name;
    if (pTVar2 != (TStringView<wchar_t> *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)pTVar2->DataPtr)(pTVar2,1);
    }
    if (param_1[2].Name != (TStringView<wchar_t> *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(param_1[2].Name);
    }
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (param_1[1].__this != (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)0x0)
    {
      uStack_30 = 0x141dcc989;
      FMemory::Free(param_1[1].__this);
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\t':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset((FUtf8String *)param_1[3].Name,*(int *)&param_1[3].__this);
    uVar8 = 0;
    if (0 < *(int *)&param_1[3].__this) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[3].__this) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          auStack_18._0_8_ = SEXT48((int)uVar8);
          uStack_40 = 0x141dce943;
          auStack_18._8_8_ = (longlong)*(int *)&param_1[3].__this;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  ((FUtf8String *)param_1[3].Name,
                   *(uchar *)((longlong)&(param_1[2].Name)->DataPtr + lVar7));
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar8 < *(int *)&param_1[3].__this);
    }
    if (((*(int *)&param_1[2].__this == 0) || ((*(int *)&param_1[2].__this - 3U & 0xfffffffd) == 0))
       && (*(int *)&param_1[1].Name == 0)) {
      return;
    }
    return;
  case '\n':
    auStack_18._0_8_ = param_2->_padding_;
    iVar1 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar1 + -1;
    if (iVar1 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\v':
    uStack_40 = 0x141e0186d;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\f':
    auStack_18._0_8_ = param_2->_padding_;
    iVar1 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar1 + -1;
    if (iVar1 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\r':
    uStack_40 = 0x141e018dd;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  case '\x0e':
    uStack_40 = 0x141e017fd;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)auStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(param_1->Name->DataPtr + 0xc4))(param_1->Name,&stack0x00000008,1);
    return;
  }
  auStack_18._0_8_ = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar2 = param_1->Name;
  this = (param_1->__this->JsonWriter).Object;
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar6 < iVar1) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    lStack_c8 = (longlong)(int)uVar6;
    lStack_c0 = (longlong)iVar1;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TStack_98.DataPtr = pTVar2->DataPtr;
  TStack_98.Size = pTVar2->Size;
  TStack_98._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98);
  auStack_b8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
  TStack_78.Base = awStack_58;
  TStack_78.CurPos = awStack_58;
  TStack_78.bIsDynamic = false;
  TStack_78.bIsExternal = false;
  TStack_78.End = (wchar_t *)auStack_18;
  TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
  pwStack_a8 = TStack_78.Base;
  iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
  TStack_88._12_4_ = uStack_9c;
  TStack_88.Size = iStack_a0;
  TStack_88.DataPtr = TStack_78.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
  this->PreviousTokenWritten = Number;
  return;
}

// Visit<`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5670

void __cdecl
Visit<_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFStack_18;
  TStringView<wchar_t> *pTStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x01':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Name;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x02':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x03':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x04':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(uint *)param_2);
    return;
  case '\x05':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x06':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\a':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  case '\t':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Name;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\n':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6488;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6488:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\v':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x90);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db70eb;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db70eb:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\f':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x88);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db5d8b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\r':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x80);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db628b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x0e':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6828;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x0f':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    if (param_1->Name->Size == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                   param_1->Name->DataPtr;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6c58;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x10':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x11':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Name;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x12':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x13':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x14':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(uint *)param_2);
    return;
  case '\x15':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x16':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\x17':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (param_1->Name->Size == 0) {
    pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
  }
  else {
    pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)
                 param_1->Name->DataPtr;
    uVar3 = 0;
    if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
    goto LAB_141db72e8;
  }
  sVar4 = wcslen((wchar_t *)pFStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db72e8:
  pTStack_10 = (TStringView<wchar_t> *)CONCAT44(pTStack_10._4_4_,uVar3);
  (*pcVar2)(pFVar1,&pFStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5690

void __cdecl
Visit<_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pFStack_18;
  TStringView<wchar_t> *pTStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
    return;
  case '\x01':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Name;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x02':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
    return;
  case '\x03':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(int *)param_2);
    return;
  case '\x04':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(uint *)param_2);
    return;
  case '\x05':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,&param_2->_padding_);
    return;
  case '\x06':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(float *)param_2);
    return;
  case '\a':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,param_1->Name,(double *)param_2);
    return;
  }
}

// Visit<``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db56b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  TStringView<wchar_t> TStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x01':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\x02':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               &param_2->_padding_);
    return;
  case '\x03':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2)
    ;
    return;
  case '\x04':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2
              );
    return;
  case '\x06':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db5e2c;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\a':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x70);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6388;
    }
    uStack_40 = 0x141db6388;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6388:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db63a4;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\b':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x90);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6feb;
    }
    uStack_40 = 0x141db6feb;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6feb:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db7007;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\t':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\n':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db618b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\v':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6728:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\f':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\r':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x0e':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\x0f':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\x10':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x11':
    TStack_18.DataPtr = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_e8);
    puVar2 = *(undefined8 **)(param_1 + 8);
    this = *(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8);
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = (wchar_t *)*puVar2;
    TStack_98._8_8_ = puVar2[1];
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)&TStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\x12':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x13':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x14':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  case '\x15':
    *(undefined ***)param_1 = &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(*(void **)(param_1 + 0x28));
    }
    *(undefined ***)param_1 = &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(*(void **)(param_1 + 0x10));
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x16':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset(*(FUtf8String **)(param_1 + 0x38),*(int *)(param_1 + 0x30));
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(param_1 + 0x30)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          TStack_18.DataPtr = (wchar_t *)(longlong)(int)uVar10;
          uStack_40 = 0x141dce943;
          TStack_18._8_8_ = (longlong)*(int *)(param_1 + 0x30);
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  (*(FUtf8String **)(param_1 + 0x38),
                   *(uchar *)(*(longlong *)(param_1 + 0x28) + lVar9));
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x30));
    }
    if (((*(int *)(param_1 + 0x20) == 0) || ((*(int *)(param_1 + 0x20) - 3U & 0xfffffffd) == 0)) &&
       (*(int *)(param_1 + 0x18) == 0)) {
      return;
    }
    return;
  case '\x17':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x18':
    uStack_40 = 0x141e0186d;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x19':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x1a':
    uStack_40 = 0x141e018dd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x1b':
    uStack_40 = 0x141e017fd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)&TStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar3 = *(code **)(*plVar1 + 0x78);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    TStack_18.DataPtr = L"";
  }
  else {
    TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
    iVar6 = 0;
    if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db71e8;
  }
  uStack_40 = 0x141db71e8;
  sVar7 = wcslen(TStack_18.DataPtr);
  iVar6 = (int)sVar7;
LAB_141db71e8:
  TStack_18.Size = iVar6;
  uStack_40 = 0x141db7204;
  (*pcVar3)(plVar1,&TStack_18,param_2);
  return;
}

// Visit<``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db56d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  TStringView<wchar_t> TStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x02':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x03':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x04':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  case '\x05':
    *(undefined ***)param_1 = &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(*(void **)(param_1 + 0x28));
    }
    *(undefined ***)param_1 = &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(*(void **)(param_1 + 0x10));
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x06':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset(*(FUtf8String **)(param_1 + 0x38),*(int *)(param_1 + 0x30));
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(param_1 + 0x30)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          TStack_18.DataPtr = (wchar_t *)(longlong)(int)uVar8;
          uStack_40 = 0x141dce943;
          TStack_18._8_8_ = (longlong)*(int *)(param_1 + 0x30);
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  (*(FUtf8String **)(param_1 + 0x38),
                   *(uchar *)(*(longlong *)(param_1 + 0x28) + lVar7));
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar8 < *(int *)(param_1 + 0x30));
    }
    if (((*(int *)(param_1 + 0x20) == 0) || ((*(int *)(param_1 + 0x20) - 3U & 0xfffffffd) == 0)) &&
       (*(int *)(param_1 + 0x18) == 0)) {
      return;
    }
    return;
  case '\a':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\b':
    uStack_40 = 0x141e0186d;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\t':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\n':
    uStack_40 = 0x141e018dd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\v':
    uStack_40 = 0x141e017fd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)&TStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  }
  TStack_18.DataPtr = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  puVar2 = *(undefined8 **)(param_1 + 8);
  this = *(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8);
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar6 < iVar1) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    lStack_c8 = (longlong)(int)uVar6;
    lStack_c0 = (longlong)iVar1;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
       6) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TStack_98.DataPtr = (wchar_t *)*puVar2;
  TStack_98._8_8_ = puVar2[1];
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98);
  auStack_b8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
  TStack_78.Base = awStack_58;
  TStack_78.CurPos = awStack_58;
  TStack_78.bIsDynamic = false;
  TStack_78.bIsExternal = false;
  TStack_78.End = (wchar_t *)&TStack_18;
  TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
  pwStack_a8 = TStack_78.Base;
  iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
  TStack_88._12_4_ = uStack_9c;
  TStack_88.Size = iStack_a0;
  TStack_88.DataPtr = TStack_78.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
  this->PreviousTokenWritten = Number;
  return;
}

// Visit<``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db56f0

void __cdecl
Visit<__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  wchar_t *pwStack_18;
  undefined8 uStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x01':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\x02':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               &param_2->_padding_);
    return;
  case '\x03':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2)
    ;
    return;
  case '\x04':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2
              );
    return;
  case '\x06':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\a':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x70);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6488;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6488:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\b':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x90);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db70eb;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db70eb:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\t':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db5d8b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\n':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db628b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\v':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6828;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\f':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6c58;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\r':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x0e':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\x0f':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\x10':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x11':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\x12':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x13':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x14':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x78);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    pwStack_18 = L"";
  }
  else {
    pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uVar3 = 0;
    if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db72e8;
  }
  sVar4 = wcslen(pwStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db72e8:
  uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
  (*pcVar2)(plVar1,&pwStack_18,param_2);
  return;
}

// Visit<``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5710

void __cdecl
Visit<__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x01':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\x02':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x03':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x04':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  }
}

// Visit<``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  TStringView<wchar_t> TStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db5c0b;
    }
    uStack_40 = 0x141db5c0b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db5c0b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db5c27;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x02':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db610b;
    }
    uStack_40 = 0x141db610b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db610b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6127;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x03':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db66a8;
    }
    uStack_40 = 0x141db66a8;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db66a8:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db66c4;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x04':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6ad8;
    }
    uStack_40 = 0x141db6ad8;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6ad8:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6af4;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x05':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x06':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db58bc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\a':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               (FString *)param_2);
    return;
  case '\b':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\t':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\n':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               &param_2->_padding_);
    return;
  case '\v':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2)
    ;
    return;
  case '\f':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2
              );
    return;
  case '\r':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x78);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db71e8;
    }
    uStack_40 = 0x141db71e8;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db71e8:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db7204;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x0e':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db5e2c;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\x0f':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x70);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6388;
    }
    uStack_40 = 0x141db6388;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6388:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db63a4;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x10':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x90);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6feb;
    }
    uStack_40 = 0x141db6feb;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6feb:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db7007;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x11':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x12':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db618b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x13':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6728:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x14':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x15':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x16':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\x17':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\x18':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x19':
    TStack_18.DataPtr = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_e8);
    puVar2 = *(undefined8 **)(param_1 + 8);
    this = *(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8);
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = (wchar_t *)*puVar2;
    TStack_98._8_8_ = puVar2[1];
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)&TStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\x1a':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x1b':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x1c':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  case '\x1d':
    *(undefined ***)param_1 = &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(*(void **)(param_1 + 0x28));
    }
    *(undefined ***)param_1 = &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(*(void **)(param_1 + 0x10));
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x1e':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset(*(FUtf8String **)(param_1 + 0x38),*(int *)(param_1 + 0x30));
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(param_1 + 0x30)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          TStack_18.DataPtr = (wchar_t *)(longlong)(int)uVar10;
          uStack_40 = 0x141dce943;
          TStack_18._8_8_ = (longlong)*(int *)(param_1 + 0x30);
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  (*(FUtf8String **)(param_1 + 0x38),
                   *(uchar *)(*(longlong *)(param_1 + 0x28) + lVar9));
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x30));
    }
    if (((*(int *)(param_1 + 0x20) == 0) || ((*(int *)(param_1 + 0x20) - 3U & 0xfffffffd) == 0)) &&
       (*(int *)(param_1 + 0x18) == 0)) {
      return;
    }
    return;
  case '\x1f':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case ' ':
    uStack_40 = 0x141e0186d;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '!':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\"':
    uStack_40 = 0x141e018dd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '#':
    uStack_40 = 0x141e017fd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)&TStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar3 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    TStack_18.DataPtr = L"";
  }
  else {
    TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
    iVar6 = 0;
    if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6f6b;
  }
  uStack_40 = 0x141db6f6b;
  sVar7 = wcslen(TStack_18.DataPtr);
  iVar6 = (int)sVar7;
LAB_141db6f6b:
  TStack_18.Size = iVar6;
  uStack_40 = 0x141db6f87;
  (*pcVar3)(plVar1,&TStack_18,param_2);
  return;
}

// Visit<``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  TStringView<wchar_t> TStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x02':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db618b:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x03':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6728:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x04':
    plVar1 = *(longlong **)param_1;
    pcVar3 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      TStack_18.DataPtr = L"";
    }
    else {
      TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
      iVar6 = 0;
      if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen(TStack_18.DataPtr);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    TStack_18.Size = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(plVar1,&TStack_18,param_2);
    return;
  case '\x05':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x06':
    TStack_18.DataPtr = *(wchar_t **)param_1;
    TStack_18._8_8_ = *(undefined8 *)(param_1 + 8);
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&TStack_18,param_2);
    return;
  case '\a':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\b':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\t':
    TStack_18.DataPtr = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_e8);
    puVar2 = *(undefined8 **)(param_1 + 8);
    this = *(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8);
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = (wchar_t *)*puVar2;
    TStack_98._8_8_ = puVar2[1];
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)&TStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\n':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\v':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\f':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  case '\r':
    *(undefined ***)param_1 = &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_30 = 0x141dcc963;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(*(void **)(param_1 + 0x28));
    }
    *(undefined ***)param_1 = &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(*(void **)(param_1 + 0x10));
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x0e':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset(*(FUtf8String **)(param_1 + 0x38),*(int *)(param_1 + 0x30));
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(param_1 + 0x30)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          TStack_18.DataPtr = (wchar_t *)(longlong)(int)uVar10;
          uStack_40 = 0x141dce943;
          TStack_18._8_8_ = (longlong)*(int *)(param_1 + 0x30);
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  (*(FUtf8String **)(param_1 + 0x38),
                   *(uchar *)(*(longlong *)(param_1 + 0x28) + lVar9));
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x30));
    }
    if (((*(int *)(param_1 + 0x20) == 0) || ((*(int *)(param_1 + 0x20) - 3U & 0xfffffffd) == 0)) &&
       (*(int *)(param_1 + 0x18) == 0)) {
      return;
    }
    return;
  case '\x0f':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x10':
    uStack_40 = 0x141e0186d;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)&TStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x11':
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18.Size = *(int *)&param_2->TypeIndex + -1;
    if (*(int *)&param_2->TypeIndex == 0) {
      TStack_18.Size = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x12':
    uStack_40 = 0x141e018dd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,&TStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  case '\x13':
    uStack_40 = 0x141e017fd;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    TStack_18.DataPtr = (wchar_t *)param_2->_padding_;
    TStack_18._8_8_ = *(undefined8 *)&param_2->TypeIndex;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)&TStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
              (*(longlong **)(param_1 + 8),&stack0x00000008,1);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar3 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    TStack_18.DataPtr = L"";
  }
  else {
    TStack_18.DataPtr = (wchar_t *)**(longlong **)(param_1 + 8);
    iVar6 = 0;
    if (TStack_18.DataPtr == (wchar_t *)0x0) goto LAB_141db6feb;
  }
  uStack_40 = 0x141db6feb;
  sVar7 = wcslen(TStack_18.DataPtr);
  iVar6 = (int)sVar7;
LAB_141db6feb:
  TStack_18.Size = iVar6;
  uStack_40 = 0x141db7007;
  (*pcVar3)(plVar1,&TStack_18,param_2);
  return;
}

// Visit<``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5770

void __cdecl
Visit<__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  wchar_t *pwStack_18;
  undefined8 uStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db5d0b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d0b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x02':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db620b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db620b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x03':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db67a8;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db67a8:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x04':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6bd8;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6bd8:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x05':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x06':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\a':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               (FString *)param_2);
    return;
  case '\b':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\t':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\n':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),
               &param_2->_padding_);
    return;
  case '\v':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2)
    ;
    return;
  case '\f':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2
              );
    return;
  case '\r':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x78);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db72e8;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db72e8:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x0e':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\x0f':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x70);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6488;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6488:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x10':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x90);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db70eb;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db70eb:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x11':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db5d8b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x12':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db628b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x13':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6828;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x14':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6c58;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x15':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x16':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\x17':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\x18':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\x19':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\x1a':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\x1b':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\x1c':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    pwStack_18 = L"";
  }
  else {
    pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uVar3 = 0;
    if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db706b;
  }
  sVar4 = wcslen(pwStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db706b:
  uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
  (*pcVar2)(plVar1,&pwStack_18,param_2);
  return;
}

// Visit<``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5790

void __cdecl
Visit<__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  wchar_t *pwStack_18;
  undefined8 uStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x88);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db5d8b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x02':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x80);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db628b;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x03':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x58);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6828;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x04':
    plVar1 = *(longlong **)param_1;
    pcVar2 = *(code **)(*plVar1 + 0x50);
    if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
      pwStack_18 = L"";
    }
    else {
      pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
      uVar3 = 0;
      if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db6c58;
    }
    sVar4 = wcslen(pwStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
    (*pcVar2)(plVar1,&pwStack_18,param_2);
    return;
  case '\x05':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(bool *)param_2);
    return;
  case '\x06':
    pwStack_18 = *(wchar_t **)param_1;
    uStack_10 = *(undefined8 *)(param_1 + 8);
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])((<lambda_1> *)&pwStack_18,param_2);
    return;
  case '\a':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(FString *)param_2);
    return;
  case '\b':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
    return;
  case '\t':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
    return;
  case '\n':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
    return;
  case '\v':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
    return;
  case '\f':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8)
               ,*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
    return;
  }
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    pwStack_18 = L"";
  }
  else {
    pwStack_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uVar3 = 0;
    if (pwStack_18 == (wchar_t *)0x0) goto LAB_141db70eb;
  }
  sVar4 = wcslen(pwStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db70eb:
  uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
  (*pcVar2)(plVar1,&pwStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db57b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pFVar1;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined1 auStack_18 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db5dec;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x02':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6308;
    }
    uStack_40 = 0x141db6308;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6308:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6324;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x03':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6f6b;
    }
    uStack_40 = 0x141db6f6b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6f6b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6f87;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x04':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db5c0b;
    }
    uStack_40 = 0x141db5c0b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db5c0b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db5c27;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x05':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db610b;
    }
    uStack_40 = 0x141db610b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db610b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6127;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x06':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db66a8;
    }
    uStack_40 = 0x141db66a8;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db66a8:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db66c4;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\a':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6ad8;
    }
    uStack_40 = 0x141db6ad8;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6ad8:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6af4;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\b':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\t':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db58bc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\n':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\v':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\f':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (uint *)param_2);
    return;
  case '\r':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x0e':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x0f':
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  case '\x10':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x78);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db71e8;
    }
    uStack_40 = 0x141db71e8;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db71e8:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db7204;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x11':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db5e2c;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x12':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6388;
    }
    uStack_40 = 0x141db6388;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6388:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db63a4;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x13':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6feb;
    }
    uStack_40 = 0x141db6feb;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6feb:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db7007;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x14':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x15':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db618b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x16':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6728:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x17':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x18':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\x19':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x1a':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\x1b':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\x1c':
    auStack_18._0_8_ = __security_cookie.value ^ (ulonglong)auStack_e8;
    pTVar2 = param_1->Pair;
    this = (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
           (param_1->__this->JsonWriter).Object;
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = *(wchar_t **)pTVar2;
    TStack_98.Size = *(int *)&pTVar2->field_0x8;
    TStack_98._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)auStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\x1d':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x1e':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x1f':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  case ' ':
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(*(longlong *)param_1->Pair + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = param_1->Pair;
    if (pTVar2 != (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                   *)0x0) {
      uStack_30 = 0x141dcc963;
      (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
    }
    if (param_1[2].Pair !=
        (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
        0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(param_1[2].Pair);
    }
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (param_1[1].__this !=
        (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *)0x0) {
      uStack_30 = 0x141dcc989;
      FMemory::Free(param_1[1].__this);
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '!':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset((FUtf8String *)param_1[3].Pair,*(int *)&param_1[3].__this);
    uVar10 = 0;
    if (0 < *(int *)&param_1[3].__this) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&param_1[3].__this) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          auStack_18._0_8_ = SEXT48((int)uVar10);
          uStack_40 = 0x141dce943;
          auStack_18._8_8_ = (longlong)*(int *)&param_1[3].__this;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  ((FUtf8String *)param_1[3].Pair,(&(param_1[2].Pair)->field_0x0)[lVar9]);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)&param_1[3].__this);
    }
    if (((*(int *)&param_1[2].__this == 0) || ((*(int *)&param_1[2].__this - 3U & 0xfffffffd) == 0))
       && (*(int *)&param_1[1].Pair == 0)) {
      return;
    }
    return;
  case '\"':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '#':
    uStack_40 = 0x141e0186d;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '$':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '%':
    uStack_40 = 0x141e018dd;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '&':
    uStack_40 = 0x141e017fd;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)auStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar3 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    auStack_18._0_8_ = L"";
  }
  else {
    auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
    iVar6 = 0;
    if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db7168;
  }
  uStack_40 = 0x141db7168;
  sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
  iVar6 = (int)sVar7;
LAB_141db7168:
  auStack_18._8_4_ = iVar6;
  uStack_40 = 0x141db7184;
  (*pcVar3)(pFVar1,auStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db57d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Visit<_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *pFVar1;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [16];
  wchar_t *pwStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringBuilderBase<wchar_t> TStack_78;
  wchar_t awStack_58 [12];
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined1 auStack_18 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db5e2c;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\x02':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6388;
    }
    uStack_40 = 0x141db6388;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6388:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db63a4;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x03':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6feb;
    }
    uStack_40 = 0x141db6feb;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6feb:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db7007;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x04':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db5c8b;
    }
    uStack_40 = 0x141db5c8b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db5c8b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db5ca7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x05':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db618b;
    }
    uStack_40 = 0x141db618b;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db618b:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db61a7;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\x06':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6728;
    }
    uStack_40 = 0x141db6728;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6728:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6744;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\a':
    pFVar1 = param_1->__this;
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      auStack_18._0_8_ = L"";
    }
    else {
      auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
      iVar6 = 0;
      if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db6b58;
    }
    uStack_40 = 0x141db6b58;
    sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
    iVar6 = (int)sVar7;
LAB_141db6b58:
    auStack_18._8_4_ = iVar6;
    uStack_40 = 0x141db6b74;
    (*pcVar3)(pFVar1,auStack_18,param_2);
    return;
  case '\b':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\t':
    auStack_18._0_8_ = param_1->__this;
    auStack_18._8_8_ = param_1->Pair;
    uStack_40 = 0x141db58fc;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)auStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
    return;
  case '\n':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\v':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\f':
    auStack_18._0_8_ = __security_cookie.value ^ (ulonglong)auStack_e8;
    pTVar2 = param_1->Pair;
    this = (param_1->__this->JsonWriter).Object;
    iVar6 = (this->Stack).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar10 = 0;
    if ((int)uVar8 < iVar6) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      lStack_c8 = (longlong)(int)uVar8;
      lStack_c0 = (longlong)iVar6;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4)
         != 6) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_98.DataPtr = *(wchar_t **)pTVar2;
    TStack_98.Size = *(int *)&pTVar2->field_0x8;
    TStack_98._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&TStack_98)
    ;
    auStack_b8[0] = 0x20;
    (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,auStack_b8,1);
    TStack_78.Base = awStack_58;
    TStack_78.CurPos = awStack_58;
    TStack_78.bIsDynamic = false;
    TStack_78.bIsExternal = false;
    TStack_78.End = (wchar_t *)auStack_18;
    TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_78,L"%llu");
    pwStack_a8 = TStack_78.Base;
    iStack_a0 = (int)((longlong)TStack_78.CurPos - (longlong)TStack_78.Base >> 1);
    TStack_88._12_4_ = uStack_9c;
    TStack_88.Size = iStack_a0;
    TStack_88.DataPtr = TStack_78.Base;
    TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&TStack_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_78);
    this->PreviousTokenWritten = Number;
    return;
  case '\r':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x0e':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x0f':
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  case '\x10':
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
    uStack_30 = 0x141dcc926;
    cVar4 = (**(code **)(*(longlong *)param_1->Pair + 0x210))();
    if (cVar4 == '\0') {
      uStack_30 = 0x141dcc94a;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = param_1->Pair;
    if (pTVar2 != (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                   *)0x0) {
      uStack_30 = 0x141dcc963;
      (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
    }
    if (param_1[2].Pair !=
        (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *)
        0x0) {
      uStack_30 = 0x141dcc971;
      FMemory::Free(param_1[2].Pair);
    }
    param_1->__this =
         (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)
         &___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
    if (param_1[1].__this != (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)0x0)
    {
      uStack_30 = 0x141dcc989;
      FMemory::Free(param_1[1].__this);
    }
    if (((ulonglong)param_2 & 1) != 0) {
      uStack_30 = 0x141dcc99c;
      operator_delete(param_1,0x40);
    }
    return;
  case '\x11':
    uStack_40 = 0x141dce8ea;
    FUtf8String::Reset((FUtf8String *)param_1[3].Pair,*(int *)&param_1[3].__this);
    uVar10 = 0;
    if (0 < *(int *)&param_1[3].__this) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&param_1[3].__this) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          auStack_18._0_8_ = SEXT48((int)uVar10);
          uStack_40 = 0x141dce943;
          auStack_18._8_8_ = (longlong)*(int *)&param_1[3].__this;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uStack_40 = 0x141dce95a;
        FUtf8String::AppendChar
                  ((FUtf8String *)param_1[3].Pair,(&(param_1[2].Pair)->field_0x0)[lVar9]);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < *(int *)&param_1[3].__this);
    }
    if (((*(int *)&param_1[2].__this == 0) || ((*(int *)&param_1[2].__this - 3U & 0xfffffffd) == 0))
       && (*(int *)&param_1[1].Pair == 0)) {
      return;
    }
    return;
  case '\x12':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0178f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    uStack_40 = 0x141e017a7;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e017c4;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '\x13':
    uStack_40 = 0x141e0186d;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01882;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char8_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char8_t> *)auStack_18);
    uStack_40 = 0x141e0189f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '\x14':
    auStack_18._0_8_ = param_2->_padding_;
    iVar6 = (int)param_2->_padding_;
    auStack_18._8_4_ = iVar6 + -1;
    if (iVar6 == 0) {
      auStack_18._8_4_ = 0;
    }
    uStack_40 = 0x141e0170f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    uStack_40 = 0x141e01727;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e01744;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '\x15':
    uStack_40 = 0x141e018dd;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e018f2;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<wchar_t>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<wchar_t> *)auStack_18);
    uStack_40 = 0x141e0190f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  case '\x16':
    uStack_40 = 0x141e017fd;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    auStack_18._0_8_ = param_2->_padding_;
    auStack_18._8_8_ = param_2->_padding_;
    uStack_40 = 0x141e01812;
    TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteEscapedString<char>
              ((TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *)param_1,
               (TStringView<char> *)auStack_18);
    uStack_40 = 0x141e0182f;
    (**(code **)(*(longlong *)param_1->Pair + 0x188))(param_1->Pair,&stack0x00000008,1);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar3 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    auStack_18._0_8_ = L"";
  }
  else {
    auStack_18._0_8_ = *(undefined8 *)param_1->Pair;
    iVar6 = 0;
    if ((wchar_t *)auStack_18._0_8_ == (wchar_t *)0x0) goto LAB_141db71e8;
  }
  uStack_40 = 0x141db71e8;
  sVar7 = wcslen((wchar_t *)auStack_18._0_8_);
  iVar6 = (int)sVar7;
LAB_141db71e8:
  auStack_18._8_4_ = iVar6;
  uStack_40 = 0x141db7204;
  (*pcVar3)(pFVar1,auStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db57f0

void __cdecl
Visit<_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFStack_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
  *pTStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x02':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6408;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6408:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x03':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db706b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db706b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x04':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db5d0b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d0b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x05':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db620b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db620b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x06':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db67a8;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db67a8:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\a':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6bd8;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6bd8:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\b':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\t':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\n':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\v':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\f':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (uint *)param_2);
    return;
  case '\r':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x0e':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x0f':
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  case '\x10':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db72e8;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db72e8:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x11':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x12':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6488;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6488:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x13':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db70eb;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db70eb:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x14':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db5d8b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x15':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db628b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x16':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6828;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x17':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c
      ;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6c58;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x18':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\x19':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x1a':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\x1b':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\x1c':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (uint *)param_2);
    return;
  case '\x1d':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x1e':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x1f':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)
               (param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    pFStack_18 = (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
  }
  else {
    pFStack_18 = *(FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
                  param_1->Pair;
    uVar3 = 0;
    if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0)
    goto LAB_141db7268;
  }
  sVar4 = wcslen((wchar_t *)pFStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db7268:
  pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                *)CONCAT44(pTStack_10._4_4_,uVar3);
  (*pcVar2)(pFVar1,&pFStack_18,param_2);
  return;
}

// Visit<`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5810

void __cdecl
Visit<_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pFStack_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
  *pTStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\x02':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6488;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6488:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x03':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x90);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db70eb;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db70eb:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x04':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x88);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db5d8b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db5d8b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x05':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x80);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db628b;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db628b:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\x06':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6828;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6828:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\a':
    pFVar1 = param_1->__this;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    if (*(int *)&param_1->Pair->field_0x8 == 0) {
      pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
    }
    else {
      pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)
                    param_1->Pair;
      uVar3 = 0;
      if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
      goto LAB_141db6c58;
    }
    sVar4 = wcslen((wchar_t *)pFStack_18);
    uVar3 = (undefined4)sVar4;
LAB_141db6c58:
    pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                  *)CONCAT44(pTStack_10._4_4_,uVar3);
    (*pcVar2)(pFVar1,&pFStack_18,param_2);
    return;
  case '\b':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (bool *)param_2);
    return;
  case '\t':
    pFStack_18 = param_1->__this;
    pTStack_10 = param_1->Pair;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
      ::__l2::Invokers[(byte)param_2->_padding_])
              ((<lambda_1> *)&pFStack_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2)
    ;
    return;
  case '\n':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<FString_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (FString *)param_2);
    return;
  case '\v':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (int *)param_2);
    return;
  case '\f':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (uint *)param_2);
    return;
  case '\r':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<__int64_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               &param_2->_padding_);
    return;
  case '\x0e':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<float_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (float *)param_2);
    return;
  case '\x0f':
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
    WriteValue<double_&,TStringView<wchar_t>_&>
              ((param_1->__this->JsonWriter).Object,(TStringView<wchar_t> *)param_1->Pair,
               (double *)param_2);
    return;
  }
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    pFStack_18 = (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x15060d16c;
  }
  else {
    pFStack_18 = *(FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)param_1->Pair;
    uVar3 = 0;
    if (pFStack_18 == (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0)
    goto LAB_141db72e8;
  }
  sVar4 = wcslen((wchar_t *)pFStack_18);
  uVar3 = (undefined4)sVar4;
LAB_141db72e8:
  pTStack_10 = (TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
                *)CONCAT44(pTStack_10._4_4_,uVar3);
  (*pcVar2)(pFVar1,&pFStack_18,param_2);
  return;
}

// VisitApplyEncoded<1,0,`operator=='::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5830

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  return (ulonglong)(uint)param_2->_padding_;
}

// VisitApplyEncoded<1,0,`operator=='::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5840

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(uint)param_2->_padding_;
  if ((param_1->Rhs).Data.ArrayNum != 0) {
    uVar1 = _wtoi64((wchar_t *)(param_1->Rhs).Data.AllocatorInstance.Data);
    return uVar2 == uVar1;
  }
  uVar1 = _wtoi64(L"");
  return uVar2 == uVar1;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5890

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *local_18;
  TStringView<wchar_t> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Name;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db58d0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *local_18;
  TStringView<wchar_t> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Name;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5910

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *local_18;
  TStringView<wchar_t> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Name;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5950

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_18;
  TStringView<wchar_t> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Name;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`ToString'::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5990

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (FString *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db59c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db59e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  puVar2 = *(undefined8 **)(param_1 + 8);
  this = *(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8);
  iVar1 = (this->Stack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    local_c8 = (longlong)(int)uVar6;
    local_c0 = (longlong)iVar1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)((this->Stack).AllocatorInstance.Data + (longlong)(this->Stack).ArrayNum * 4 + -4) !=
      6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Top() == EJson::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x110,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_98.DataPtr = (wchar_t *)*puVar2;
  local_98._8_8_ = puVar2[1];
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteIdentifier<wchar_t>(this,&local_98);
  local_b8[0] = 0x20;
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_b8,1);
  local_78.Base = local_58;
  local_78.CurPos = local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  local_78.End = (wchar_t *)local_18;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%llu");
  local_a8 = local_78.Base;
  iStack_a0 = (int)((longlong)local_78.CurPos - (longlong)local_78.Base >> 1);
  local_88._12_4_ = uStack_9c;
  local_88.Size = iStack_a0;
  local_88.DataPtr = local_78.Base;
  TJsonPrintPolicy<char8_t>::WriteString(this->Stream,&local_88);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  this->PreviousTokenWritten = Number;
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5b80

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5ba0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<unsigned_int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(uint *)param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5bc0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x88);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db5c0b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db5c0b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5c40

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x88);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db5c8b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db5c8b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5cc0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x88);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db5d0b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db5d0b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<1,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db5d40

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x88);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db5d8b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db5d8b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5dc0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *local_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Pair;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5e00

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *local_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Pair;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5e40

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *local_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Pair;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5e80

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_18;
  TTuple<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> *local_10;
  
  local_18 = param_1->__this;
  local_10 = param_1->Pair;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[(byte)param_2->_padding_])
            ((<lambda_1> *)&local_18,(TVariant<int,unsigned_int,__int64,float,double> *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`operator=='::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5ec0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar2 = param_1->Lhs;
  if (pTVar2->TypeIndex != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = (int)param_2->_padding_;
  if ((char)pTVar2->_padding_ != '\0') {
    return iVar1 == 1;
  }
  return iVar1 == 0;
}

// VisitApplyEncoded<2,0,`operator=='::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5f30

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<2,0,`operator=='::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db5f40

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong lVar1;
  
  if ((param_1->Rhs).Data.ArrayNum != 0) {
    lVar1 = _wtoi64((wchar_t *)(param_1->Rhs).Data.AllocatorInstance.Data);
    return param_2->_padding_ == lVar1;
  }
  lVar1 = _wtoi64(L"");
  return param_2->_padding_ == lVar1;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5f90

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5fb0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5fd0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db5ff0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<FString_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(FString *)param_2);
  return;
}

// VisitApplyEncoded<2,0,`ToString'::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6010

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (FString *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6040

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_
            );
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6060

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6080

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_
            );
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db60a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::
  WriteValue<__int64_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),&param_2->_padding_);
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db60c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x80);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db610b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db610b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6140

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x80);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db618b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db618b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db61c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x80);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db620b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db620b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6240

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x80);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db628b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db628b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db62c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6308;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6308:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6340

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6388;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6388:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db63c0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6408;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6408:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6440

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x70);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6488;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6488:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<2,0,`operator=='::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db64c0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->Lhs;
  if (pTVar1->TypeIndex != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((char)pTVar1->_padding_ != '\0') {
    return param_2->_padding_ == 1;
  }
  return param_2->_padding_ == 0;
}

// VisitApplyEncoded<3,0,`operator=='::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6530

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  return (longlong)*(float *)&param_2->_padding_;
}

// VisitApplyEncoded<3,0,`operator=='::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6540

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_18;
  
  pFVar3 = ::FString::SanitizeFloat(&local_18,(double)*(float *)&param_2->_padding_,0);
  iVar2 = (param_1->Rhs).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_1->Rhs).Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// VisitApplyEncoded<3,0,`ToString'::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db65b0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (FString *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)*(float *)&param_2->_padding_,0);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db65e0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<float_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6600

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6620

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<float_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6640

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<float_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(float *)param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6660

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x58);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db66a8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db66a8:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db66e0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x58);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6728;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6728:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6760

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x58);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db67a8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db67a8:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<3,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db67e0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x58);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6828;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6828:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<3,0,`operator=='::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6860

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *this;
  longlong lVar6;
  FString local_18;
  
  this = ::FString::SanitizeFloat(&local_18,(double)*(float *)&param_2->_padding_,0);
  iVar5 = ::FString::Find(this,L".",1,IgnoreCase,FromStart,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar5 != -1) {
    return false;
  }
  pTVar1 = param_1->Lhs;
  lVar6 = (longlong)
          ROUND(*(float *)&param_2->_padding_ + *(float *)&param_2->_padding_ + __real_3f000000) >>
          1;
  if (pTVar1->TypeIndex != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((char)pTVar1->_padding_ != '\0') {
    return lVar6 == 1;
  }
  return lVar6 == 0;
}

// VisitApplyEncoded<4,0,`operator=='::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6960

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  return (longlong)(double)param_2->_padding_;
}

// VisitApplyEncoded<4,0,`operator=='::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6970

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_18;
  
  pFVar3 = ::FString::SanitizeFloat(&local_18,(double)param_2->_padding_,0);
  iVar2 = (param_1->Rhs).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar4 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_1->Rhs).Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// VisitApplyEncoded<4,0,`ToString'::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db69e0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (FString *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)param_2->_padding_,0);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6a10

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<double_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6a30

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6a50

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<double_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6a70

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<double_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(double *)param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6a90

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x50);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6ad8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6ad8:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6b10

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x50);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6b58;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6b58:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6b90

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x50);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6bd8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6bd8:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<4,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6c10

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x50);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6c58;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6c58:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<4,0,`operator=='::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6c90

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *this;
  longlong lVar6;
  FString local_18;
  
  this = ::FString::SanitizeFloat(&local_18,(double)param_2->_padding_,0);
  iVar5 = ::FString::Find(this,L".",1,IgnoreCase,FromStart,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar5 != -1) {
    return false;
  }
  pTVar1 = param_1->Lhs;
  lVar6 = (longlong)
          ROUND((double)param_2->_padding_ + (double)param_2->_padding_ + __real_3fe0000000000000)
          >> 1;
  if (pTVar1->TypeIndex != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((char)pTVar1->_padding_ != '\0') {
    return lVar6 == 1;
  }
  return lVar6 == 0;
}

// VisitApplyEncoded<0,0,`operator=='::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6d90

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  return (longlong)(int)param_2->_padding_;
}

// VisitApplyEncoded<0,0,`operator=='::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6da0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(int)param_2->_padding_;
  if ((param_1->Rhs).Data.ArrayNum != 0) {
    lVar1 = _wtoi64((wchar_t *)(param_1->Rhs).Data.AllocatorInstance.Data);
    return lVar2 == lVar1;
  }
  lVar1 = _wtoi64(L"");
  return lVar2 == lVar1;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6df0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
  WriteValue<bool_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6e10

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6e30

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
  WriteValue<bool_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db6e50

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<bool_&,TStringView<wchar_t>_&>
            ((param_1->__this->JsonWriter).Object,param_1->Name,(bool *)param_2);
  return;
}

// VisitApplyEncoded<0,0,`ToString'::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db6e70

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (FString *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6ea0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6ec0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6ee0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> **)
              (*(longlong *)param_1 + 8),*(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6f00

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValue<int_&,TStringView<wchar_t>_&>
            (*(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> **)(*(longlong *)param_1 + 8),
             *(TStringView<wchar_t> **)(param_1 + 8),(int *)param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6f20

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6f6b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6f6b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db6fa0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db6feb;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db6feb:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7020

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db706b;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db706b:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db70a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  if ((int)(*(longlong **)(param_1 + 8))[1] == 0) {
    local_18 = L"";
  }
  else {
    local_18 = (wchar_t *)**(longlong **)(param_1 + 8);
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db70eb;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db70eb:
  (*pcVar2)(plVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7120

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db7168;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db7168:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db71a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db71e8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db71e8:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7220

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db7268;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db7268:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db72a0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (<lambda_1> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pFVar1;
  code *pcVar2;
  size_t sVar3;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  pFVar1 = param_1->__this;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x78);
  if (*(int *)&param_1->Pair->field_0x8 == 0) {
    local_18 = L"";
  }
  else {
    local_18 = *(wchar_t **)param_1->Pair;
    uStack_10 = 0;
    if (local_18 == (wchar_t *)0x0) goto LAB_141db72e8;
  }
  sVar3 = wcslen(local_18);
  uStack_10 = (undefined4)sVar3;
LAB_141db72e8:
  (*pcVar2)(pFVar1,&local_18,param_2);
  return;
}

// VisitApplyEncoded<0,0,`operator=='::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&> @ 141db7320

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>
          (<lambda_1> *param_1,TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  int iVar1;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar2 = param_1->Lhs;
  if (pTVar2->TypeIndex != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = (int)param_2->_padding_;
  if ((char)pTVar2->_padding_ != '\0') {
    return iVar1 == 1;
  }
  return iVar1 == 0;
}

// VisitImpl<`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7390

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db73a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db73b0

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db73c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db73d0

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db73e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db73f0

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<bool,class_TVariant<int,unsigned_int,__int64,float,double>,class_FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7410

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7430

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7450

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize'::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7470

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize_::__l2::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Serialize(TStringView<wchar_t>,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db7490

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db74a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db74b0

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db74c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db74d0

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db74e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<``FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>'::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&> @ 141db74f0

void __cdecl
UE::Core::Private::
VisitImpl<__FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>_::__l3::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<int,unsigned_int,__int64,float,double> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>,0,1,2,3,4,0,TVariant<int,unsigned_int,__int64,float,double>&___ptr64>(unsigned___int64,`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()<TVariant<int,unsigned_int,__int64,float,double>_>(TVariant<int,unsigned_int,__int64,float,double>&___ptr64)const___ptr64'::`3'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<int,unsigned_int,__int64,float,double>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7510

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap'::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7530

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap_::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7550

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap'::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&> @ 141db7570

void __cdecl
UE::Core::Private::
VisitImpl<_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap_::__l6::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141db7586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>,0,1,2,0,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64>(unsigned___int64,`public:_virtual_void___cdecl_FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::SerializeMap(TStringView<wchar_t>,TMap<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>,0>_>&___ptr64)___ptr64'::`6'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// WriteToString<32,__int64_&> @ 141dc18b0

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,__int64_&>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,long64 *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// WriteToString<32,unsigned___int64_&> @ 141dc18f0

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,unsigned___int64_&>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,ulong64 *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> @ 141dc5540

void __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar5;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar6;
  
  uVar1 = (this->data_).f.flags;
  if (uVar1 == 3) {
    pGVar5 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             ((ulonglong)(this->data_).s.str & 0xffffffffffff);
    while( true ) {
      if (((this->data_).f.flags != 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x506,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar4 = (void *)((ulonglong)(this->data_).s.str & 0xffffffffffff);
      if (pGVar5 == (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)(this->data_).s.length * 0x20 + (longlong)pvVar4)) break;
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar5 + 1);
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar5);
      pGVar5 = pGVar5 + 2;
    }
  }
  else {
    if (uVar1 == 4) {
      pGVar6 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               ((ulonglong)(this->data_).s.str & 0xffffffffffff);
      pGVar5 = pGVar6;
      if (pGVar6 != pGVar6 + (this->data_).s.length) {
        do {
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar5);
          pGVar5 = pGVar5 + 1;
        } while (pGVar5 != pGVar6 + (this->data_).s.length);
      }
      FMemory::Free(pGVar6);
      return;
    }
    if (uVar1 != 0xc05) {
      return;
    }
    pvVar4 = (void *)((ulonglong)(this->data_).s.str & 0xffffffffffff);
  }
  FMemory::Free(pvVar4);
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 141dc56b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0> @ 141dc56d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_3>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0> @ 141dc56f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<___FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0> @ 141dc5710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_1>,0,0> @ 141dc5730

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_FJsonPointerSpec::Define_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,0,1> @ 141dc5750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAutomationSpecBase::Describe_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Describe_FAutomationSpecBase__QEAAXAEBVFString__V__TFunction___A6AXXZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000141dc5773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0> @ 141dc5780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0> @ 141dc57a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_3>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0> @ 141dc57c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<___FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0> @ 141dc57e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_4>::operator()_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_2>,0,0> @ 141dc5800

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_2>,0,0>
::~TFunction_OwnedObject<_FJsonPointerSpec::Define_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0> @ 141dc5820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_3>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0> @ 141dc5840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,0,0> @ 141dc5860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<___FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_3>,0,0> @ 141dc5880

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_3>,0,0>
::~TFunction_OwnedObject<_FJsonPointerSpec::Define_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,0,0> @ 141dc58a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<___FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0> @ 141dc58c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0> @ 141dc58e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<__FJsonPointerSpec::Define_::__l2::<lambda_3>::operator()_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_4>,0,0> @ 141dc5900

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_4>,0,0>
::~TFunction_OwnedObject<_FJsonPointerSpec::Define_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,0,0> @ 141dc5920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,0,0>
::
~TFunction_OwnedObject<___FJsonPointerSpec::Define_::__l2::<lambda_2>::operator()_::__l2::<lambda_4>::operator()_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// operator== @ 141dc6880

bool __cdecl
operator==(TVariant<int,unsigned_int,__int64,float,double> *param_1,
          TVariant<int,unsigned_int,__int64,float,double> *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  
  bVar1 = param_1->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,int,unsigned_int,__int64,float,double>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    bVar1 = param_1->TypeIndex;
    if (4 < (ulonglong)bVar1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') goto LAB_141dc6913;
    bVar3 = false;
  }
  else {
LAB_141dc6913:
    bVar3 = true;
  }
  bVar1 = param_2->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,int,unsigned_int,__int64,float,double>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    bVar1 = param_2->TypeIndex;
    if (4 < (ulonglong)bVar1) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
      bVar5 = false;
      goto LAB_141dc6992;
    }
  }
  bVar5 = true;
LAB_141dc6992:
  if ((!bVar3) && (!bVar5)) {
    lVar7 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6d10
                      )[param_1->TypeIndex])(local_res8,param_1);
    lVar8 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,_operator___::__l7::<lambda_1>_&,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6d10
                      )[param_2->TypeIndex])(local_res8,param_2);
    return lVar7 == lVar8;
  }
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6ce8
            )[param_2->TypeIndex])(&local_38,local_res10,param_2);
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6ce8
            )[param_1->TypeIndex])(&local_48,local_res18,param_1);
  if (local_40 == local_30) {
    if (local_40 < 2) {
      bVar3 = true;
    }
    else {
      iVar6 = FGenericPlatformStricmp::Stricmp(local_48,local_38);
      bVar3 = iVar6 == 0;
    }
  }
  else {
    bVar3 = local_40 + local_30 == 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar3;
}

// operator== @ 141dc6a80

bool __cdecl operator==(TVariant<int,unsigned_int,__int64,float,double> *param_1,FString *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FString local_18;
  
  bVar3 = false;
  bVar1 = FString::IsNumeric(param_2);
  if (bVar1) {
    FString::FString(&local_18,param_2);
    bVar3 = true;
    cVar2 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6cc0
                      )[param_1->TypeIndex])(&local_18,param_1);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_141dc6adf;
    }
  }
  bVar1 = false;
LAB_141dc6adf:
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// operator== @ 141dc6b10

bool __cdecl
operator==(TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_1,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  TVariant<int,unsigned_int,__int64,float,double> *pTVar10;
  TVariant<int,unsigned_int,__int64,float,double> *pTVar11;
  FString *pFVar12;
  FString *pFVar13;
  bool *pbVar14;
  bool bVar15;
  ulonglong uVar16;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar7 = false;
LAB_141dc6b40:
  do {
    this = param_1;
    param_1 = param_2;
    bVar1 = this->TypeIndex;
    if ((2 < (ulonglong)bVar1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
      bVar1 = param_1->TypeIndex;
      if ((2 < (ulonglong)bVar1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
        if ((this->TypeIndex != '\0') &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        lVar4 = this->_padding_;
        if ((param_1->TypeIndex != '\0') &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        return (char)lVar4 == (char)param_1->_padding_;
      }
      bVar1 = param_1->TypeIndex;
      if ((2 < (ulonglong)bVar1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TVariant<int,unsigned_int,__int64,float,double>,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
        pTVar10 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<TVariant<int,unsigned_int,__int64,float,double>_>(param_1);
        local_res18[0] = this;
        uVar6 = (*(code *)(&
                          PTR_VisitApplyEncoded<0,0,_operator___::__l19::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6d38
                          )[pTVar10->TypeIndex])(local_res18,pTVar10);
        return (bool)uVar6;
      }
      pbVar14 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Get<bool>
                          (this);
      if (*pbVar14 == false) {
        pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<FString>(param_1);
        FString::FString(&local_48,L"false");
        iVar9 = (pFVar12->Data).ArrayNum;
        if (iVar9 == local_48.Data.ArrayNum) {
          if (1 < iVar9) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                               (wchar_t *)local_48.Data.AllocatorInstance.Data);
            bVar7 = iVar9 == 0;
            goto LAB_141dc6f40;
          }
          bVar5 = false;
LAB_141dc6fac:
          bVar15 = true;
          if (!bVar5) goto LAB_141dc6eed;
        }
        else {
          bVar7 = local_48.Data.ArrayNum + iVar9 == 1;
LAB_141dc6f40:
          bVar5 = false;
          if (bVar7) goto LAB_141dc6fac;
          pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                    Get<FString>(param_1);
          FString::FString(&local_58,L"0");
          iVar9 = (pFVar12->Data).ArrayNum;
          if (iVar9 == local_58.Data.ArrayNum) {
            if (iVar9 < 2) {
              bVar5 = true;
              goto LAB_141dc6fac;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                               (wchar_t *)local_58.Data.AllocatorInstance.Data);
            bVar7 = iVar9 == 0;
          }
          else {
            bVar7 = local_58.Data.ArrayNum + iVar9 == 1;
          }
          bVar5 = true;
          if (bVar7) goto LAB_141dc6fac;
          bVar15 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_141dc6eed;
      }
      pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Get<FString>
                          (param_1);
      FString::FString(&local_68,L"true");
      iVar9 = (pFVar12->Data).ArrayNum;
      if (iVar9 == local_68.Data.ArrayNum) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                             (wchar_t *)local_68.Data.AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
          goto LAB_141dc6e67;
        }
        bVar5 = false;
LAB_141dc6ed3:
        bVar15 = true;
        local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        if (!bVar5) goto LAB_141dc6eed;
      }
      else {
        bVar7 = local_68.Data.ArrayNum + iVar9 == 1;
LAB_141dc6e67:
        bVar5 = false;
        if (bVar7) goto LAB_141dc6ed3;
        pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<FString>(param_1);
        FString::FString(&local_78,L"1");
        iVar9 = (pFVar12->Data).ArrayNum;
        if (iVar9 == local_78.Data.ArrayNum) {
          if (iVar9 < 2) {
            bVar5 = true;
            goto LAB_141dc6ed3;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                             (wchar_t *)local_78.Data.AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
        }
        else {
          bVar7 = local_78.Data.ArrayNum + iVar9 == 1;
        }
        bVar5 = true;
        if (bVar7) goto LAB_141dc6ed3;
        bVar15 = false;
      }
      local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      }
      goto LAB_141dc6eed;
    }
    bVar1 = this->TypeIndex;
    if ((2 < (ulonglong)bVar1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar16 = (ulonglong)param_1->TypeIndex;
    param_2 = this;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TVariant<int,unsigned_int,__int64,float,double>,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      if ((2 < uVar16) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TVariant<int,unsigned_int,__int64,float,double>,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar16 + 4) != '\0') {
        pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<FString>(this);
        pFVar13 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<FString>(param_1);
        iVar9 = (pFVar12->Data).ArrayNum;
        iVar2 = (pFVar13->Data).ArrayNum;
        if (iVar9 != iVar2) {
          return iVar2 + iVar9 == 1;
        }
        if (1 < iVar9) {
          iVar9 = wcscmp((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
          return iVar9 == 0;
        }
        return true;
      }
      bVar5 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsType<bool>
                        (param_1);
      if (!bVar5) {
        pFVar12 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<FString>(this);
        pTVar10 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                  Get<TVariant<int,unsigned_int,__int64,float,double>_>(param_1);
        bVar5 = FString::IsNumeric(pFVar12);
        if (bVar5) {
          FString::FString(&local_38,pFVar12);
          bVar7 = true;
          cVar8 = (*(code *)(&
                            PTR_VisitApplyEncoded<0,0,_operator___::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6cc0
                            )[pTVar10->TypeIndex])(&local_38,pTVar10);
          if (cVar8 == '\0') goto LAB_141dc6cd2;
          bVar15 = true;
        }
        else {
LAB_141dc6cd2:
          bVar15 = false;
        }
        local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        if (!bVar7) {
          return bVar15;
        }
LAB_141dc6eed:
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar15;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return bVar15;
      }
      goto LAB_141dc6b40;
    }
    if ((2 < uVar16) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TVariant<int,unsigned_int,__int64,float,double>,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar16) != '\0') {
      pTVar10 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                Get<TVariant<int,unsigned_int,__int64,float,double>_>(param_1);
      pTVar11 = TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
                Get<TVariant<int,unsigned_int,__int64,float,double>_>(this);
      bVar7 = operator==(pTVar11,pTVar10);
      return bVar7;
    }
  } while( true );
}

// operator() @ 141dc7150

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FJsonPointer local_58;
  TSharedPtr<FJsonValue,1> local_48;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TSharedRef<FJsonValueObject,1> local_18;
  
  local_38 = L"#/someNumber";
  uStack_30 = 0xc;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 0xc;
  local_28.DataPtr = L"#/someNumber";
  UE::Json::FJsonPointer::FJsonPointer(&local_58,&local_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_48.Object = (FJsonValue *)pTVar5->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (local_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &local_48;
    pTVar8 = pTVar9;
    if (0 < local_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < local_58.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc7284;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_58.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    pTVar10 = (TReferenceControllerBase<1> *)pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
LAB_141dc7284:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar3);
  if (bVar3) {
    this_00 = *(FAutomationTestBase **)this;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar2 = FJsonValue::AsNumber((FJsonValue *)pTVar10);
    FAutomationTestBase::TestEqual(this_00,L"Value equals 42",(int)dVar2,0x2a);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_58.PathParts.AllocatorInstance.Data,local_58.PathParts.ArrayNum);
  if (local_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc7360

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FJsonPointer local_58;
  TSharedPtr<FJsonValue,1> local_48;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TSharedRef<FJsonValueObject,1> local_18;
  
  local_38 = L"#/someArray/2";
  uStack_30 = 0xd;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 0xd;
  local_28.DataPtr = L"#/someArray/2";
  UE::Json::FJsonPointer::FJsonPointer(&local_58,&local_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_48.Object = (FJsonValue *)pTVar5->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (local_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &local_48;
    pTVar8 = pTVar9;
    if (0 < local_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < local_58.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc7494;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_58.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    pTVar10 = (TReferenceControllerBase<1> *)pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
LAB_141dc7494:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar3);
  if (bVar3) {
    this_00 = *(FAutomationTestBase **)this;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar2 = FJsonValue::AsNumber((FJsonValue *)pTVar10);
    FAutomationTestBase::TestEqual(this_00,L"Value equals 22",(int)dVar2,0x16);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_58.PathParts.AllocatorInstance.Data,local_58.PathParts.ArrayNum);
  if (local_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc7570

bool __thiscall
```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  bool bVar2;
  TJsonStringReader<wchar_t> *this_00;
  undefined8 *puVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  FString local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_18;
  
  lVar1 = *(longlong *)this;
  pTVar4 = (TJsonStringReader<wchar_t> *)0x0;
  puVar3 = (undefined8 *)(lVar1 + 0x198);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar3 != &local_28) {
    *puVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1a0),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  ::FString::FString(&local_38,
                     L"\n\t\t\t\t{\n\t\t\t\t    \"0\": \"foo\",\n\t\t\t\t\t\"nested\": {\n\t\t\t\t\t\t\"1\": \"bar\"\n\t\t\t\t\t},\n\t\t\t\t\t\"2\": {\n\t\t\t\t\t\t\"bla\": false\n\t\t\t\t\t},\n\t\t\t\t\t\"someArray\": [\n\t\t\t\t\t{\n\t\t\t\t\t\t\"Foo\": \"foo\",\n\t\t\t\t\t\t\"Bar\": \"bar\"\n\t\t\t\t\t}]\n\t\t\t\t}"
                    );
  this_00 = ::operator_new(0x88);
  if (this_00 != (TJsonStringReader<wchar_t> *)0x0) {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined4 *)&this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 1;
    *(undefined2 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this_00->Content).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Content).Data.ArrayNum = local_38.Data.ArrayNum;
    (this_00->Content).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    (this_00->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_00);
    pTVar4 = this_00;
  }
  local_res8.Object = pTVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_18,&local_res8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TSharedRef<TJsonReader<wchar_t>,1> *)&local_18,
                     (TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198),None);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// operator() @ 141dc76e0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  FString *this_01;
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"Some~part/with~escapable//Characters");
  this_01 = ::FString::Replace(&local_38,&local_18,L"~",L"~0",IgnoreCase);
  ::FString::Replace(this_01,&local_28,L"/",L"~1",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_38,L"Some~0part~1with~0escapable~1~1Characters");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this_00,L"\"~\" and \"/\" are replaced with \"~0\" and \"~1\" respectively",
             (wchar_t *)FVar1.Data,(wchar_t *)FVar2.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc99b0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FJsonPointer local_58;
  TSharedPtr<FJsonValue,1> local_48;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TSharedRef<FJsonValueObject,1> local_18;
  
  local_38 = L"#/someObject/someNestedNumber";
  uStack_30 = 0x1d;
  local_28._12_4_ = uStack_2c;
  local_28.Size = 0x1d;
  local_28.DataPtr = L"#/someObject/someNestedNumber";
  UE::Json::FJsonPointer::FJsonPointer(&local_58,&local_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_48.Object = (FJsonValue *)pTVar5->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (local_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &local_48;
    pTVar8 = pTVar9;
    if (0 < local_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < local_58.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc9ae4;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_58.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    pTVar10 = (TReferenceControllerBase<1> *)pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
LAB_141dc9ae4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar3);
  if (bVar3) {
    this_00 = *(FAutomationTestBase **)this;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar2 = FJsonValue::AsNumber((FJsonValue *)pTVar10);
    FAutomationTestBase::TestEqual(this_00,L"Value equals 42",(int)dVar2,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_58.PathParts.AllocatorInstance.Data,local_58.PathParts.ArrayNum);
  if (local_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc9bc0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer local_68;
  TSharedPtr<FJsonValue,1> local_58;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  FString local_18;
  TReferenceControllerBase<1> *pTVar8;
  
  local_48 = L"#/someArray/5";
  uStack_40 = 0xd;
  local_38._12_4_ = uStack_3c;
  local_38.Size = 0xd;
  local_38.DataPtr = L"#/someArray/5";
  UE::Json::FJsonPointer::FJsonPointer(&local_68,&local_38);
  this_00 = *(FAutomationTestBase **)this;
  pFVar4 = ::FString::FString(&local_18,L"out of range");
  FAutomationTestBase::AddExpectedError(this_00,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_58.Object = (FJsonValue *)pTVar5->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_68.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &local_58;
    pTVar8 = pTVar9;
    if (0 < local_68.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < local_68.PathParts.ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_68.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dc9d21;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_68.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
LAB_141dc9d21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)this,L"Value is not found",bVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_68.PathParts.AllocatorInstance.Data,local_68.PathParts.ArrayNum);
  if (local_68.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc9da0

void __thiscall
```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::
<lambda_2>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  wchar_t *pwVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  FJsonValue *this_01;
  wchar_t *local_98;
  undefined8 local_90;
  FJsonPointer local_88;
  TSharedPtr<FJsonValue,1> local_78;
  FString local_68;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  
  uStack_50 = 3;
  local_58 = L"#/0";
  local_38._12_4_ = uStack_4c;
  local_38.Size = 3;
  local_38.DataPtr = L"#/0";
  UE::Json::FJsonPointer::FJsonPointer(&local_88,&local_38);
  this_01 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_78.Object = (FJsonValue *)pTVar5->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88.PathParts.ArrayNum < 1) {
LAB_141dc9e2a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &local_78;
    if (0 < local_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < local_88.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dc9e2a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_01 = pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_68,L"foo");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar2);
  if (bVar2) {
    this_00 = *(FAutomationTestBase **)this;
    if ((this_01 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    cVar3 = (**(code **)(this_01->_padding_ + 0x58))(this_01,&local_98);
    if (cVar3 == '\0') {
      ::FString::FString(&local_48,L"String");
      FJsonValue::ErrorMessage(this_01,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)local_90 != 0) {
      pwVar8 = local_98;
    }
    FAutomationTestBase::TestEqual(this_00,L"Value equals \"foo\"",pwVar8,(wchar_t *)FVar10.Data);
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free(local_98);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_88.PathParts.AllocatorInstance.Data,local_88.PathParts.ArrayNum);
  if (local_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dca020

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  FString *this_01;
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"Some~0part~1with~0escapable~1~1Characters");
  this_01 = ::FString::Replace(&local_38,&local_18,L"~1",L"/",IgnoreCase);
  ::FString::Replace(this_01,&local_28,L"~0",L"~",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_38,L"Some~part/with~escapable//Characters");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this_00,L"\"~0\" and \"~1\" are replaced with \"~\" and \"/\" respectively",
             (wchar_t *)FVar1.Data,(wchar_t *)FVar2.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dca330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>::operator()(void *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FJsonValue *this_00;
  bool bVar6;
  uint uVar7;
  TJsonStringReader<wchar_t> *this_01;
  wchar_t *_Str;
  uint uVar8;
  TJsonStringReader<wchar_t> *pTVar9;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString local_c8;
  FJsonPointer local_b8;
  StackState local_a8;
  TSharedPtr<FJsonValue,1> local_70;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_60;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  pTVar9 = (TJsonStringReader<wchar_t> *)0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  ::FString::FString(&local_c8,L"[ 5, 9, 7, 2 ]");
  this_01 = ::operator_new(0x88);
  if (this_01 != (TJsonStringReader<wchar_t> *)0x0) {
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    *(undefined4 *)&this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 1;
    *(undefined2 *)&this_01->_padding_ = 0;
    this_01->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this_01->Content).Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Content).Data.ArrayNum = local_c8.Data.ArrayNum;
    (this_01->Content).Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    (this_01->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_01);
    pTVar9 = this_01;
  }
  local_res8.Object = pTVar9;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_60,&local_res8);
  if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  local_a8.Object.Object = (FJsonObject *)0x0;
  local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Identifier.Data.ArrayNum = 0;
  local_a8.Identifier.Data.ArrayMax = 0;
  local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Array.ArrayNum = 0;
  local_a8.Array.ArrayMax = 0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)local_60.Object,&local_a8,None);
  if (bVar6) {
    if (local_a8.Type == Array) {
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_d8.Data,(int)local_d0);
      FVar4.Data = local_a8.Array.AllocatorInstance.Data;
      iVar5 = local_a8.Array.ArrayNum;
      local_d0 = CONCAT44(local_d0._4_4_,local_a8.Array.ArrayNum);
      if ((local_a8.Array.ArrayNum != 0) || (local_d0._4_4_ != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_a8.Array.ArrayNum,local_d0._4_4_,&local_d8,local_a8.Array.ArrayNum,
                   (int *)((longlong)&local_d0 + 4));
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_d8.Data,(TSharedPtr<FJsonValue,1> *)FVar4.Data,iVar5);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
    bVar6 = false;
  }
  bVar6 = FAutomationTestBase::TestTrue(pFVar1,L"Deserialized when root is array",bVar6);
  if (!bVar6) goto LAB_141dca735;
  uStack_40 = 3;
  local_48 = L"#/2";
  local_38._12_4_ = uStack_3c;
  local_38.Size = 3;
  local_38.DataPtr = L"#/2";
  UE::Json::FJsonPointer::FJsonPointer(&local_b8,&local_38);
  FVar4.Data = local_b8.PathParts.AllocatorInstance.Data;
  local_70.Object = (FJsonValue *)0x0;
  local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_b8.PathParts.ArrayNum < 1) {
LAB_141dca69e:
    bVar6 = false;
  }
  else {
    bVar6 = ::FString::IsNumeric((FString *)local_b8.PathParts.AllocatorInstance.Data);
    if (!bVar6) {
      if (2 < (byte)LogJson._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      }
      goto LAB_141dca69e;
    }
    if (*(int *)(FVar4.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)FVar4.Data;
    }
    uVar7 = _wtoi(_Str);
    if (((int)uVar7 < 0) || ((int)local_d0 <= (int)uVar7)) {
      if (2 < (byte)LogJson._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      }
      goto LAB_141dca69e;
    }
    uVar8 = 0;
    if ((int)uVar7 < (int)local_d0) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = UE::Json::FJsonPointer::TryGet
                      (&local_b8,
                       (TSharedPtr<FJsonValue,1> *)(local_d8.Data + (longlong)(int)uVar7 * 0x10),
                       &local_70);
  }
  bVar6 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar6);
  this_00 = local_70.Object;
  if (bVar6) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((local_70.Object == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar3 = FJsonValue::AsNumber(this_00);
    FAutomationTestBase::TestEqual(pFVar1,L"Value equals 7",(int)dVar3,7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)local_b8.PathParts.AllocatorInstance.Data,local_b8.PathParts.ArrayNum);
  if (local_b8.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PathParts.AllocatorInstance.Data);
  }
LAB_141dca735:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_d8.Data,(int)local_d0);
  if ((TSharedPtr<FJsonValue,1> *)local_d8.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// operator() @ 141dca7a0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer local_68;
  TSharedPtr<FJsonValue,1> local_58;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  FString local_18;
  TReferenceControllerBase<1> *pTVar8;
  
  local_48 = L"#/foo/doesnt/exist";
  uStack_40 = 0x12;
  local_38._12_4_ = uStack_3c;
  local_38.Size = 0x12;
  local_38.DataPtr = L"#/foo/doesnt/exist";
  UE::Json::FJsonPointer::FJsonPointer(&local_68,&local_38);
  this_00 = *(FAutomationTestBase **)this;
  pFVar4 = ::FString::FString(&local_18,L"not found");
  FAutomationTestBase::AddExpectedError(this_00,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_58.Object = (FJsonValue *)pTVar5->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_68.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &local_58;
    pTVar8 = pTVar9;
    if (0 < local_68.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < local_68.PathParts.ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_68.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dca901;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_68.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
LAB_141dca901:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)this,L"Value is not found",bVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_68.PathParts.AllocatorInstance.Data,local_68.PathParts.ArrayNum);
  if (local_68.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dca980

void __thiscall
```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::
<lambda_3>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  wchar_t *pwVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  FJsonValue *this_01;
  wchar_t *local_98;
  undefined8 local_90;
  FJsonPointer local_88;
  TSharedPtr<FJsonValue,1> local_78;
  FString local_68;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  
  uStack_50 = 10;
  local_58 = L"#/nested/1";
  local_38._12_4_ = uStack_4c;
  local_38.Size = 10;
  local_38.DataPtr = L"#/nested/1";
  UE::Json::FJsonPointer::FJsonPointer(&local_88,&local_38);
  this_01 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_78.Object = (FJsonValue *)pTVar5->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88.PathParts.ArrayNum < 1) {
LAB_141dcaa0a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &local_78;
    if (0 < local_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < local_88.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcaa0a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_01 = pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_68,L"bar");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar2);
  if (bVar2) {
    this_00 = *(FAutomationTestBase **)this;
    if ((this_01 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    cVar3 = (**(code **)(this_01->_padding_ + 0x58))(this_01,&local_98);
    if (cVar3 == '\0') {
      ::FString::FString(&local_48,L"String");
      FJsonValue::ErrorMessage(this_01,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)local_90 != 0) {
      pwVar8 = local_98;
    }
    FAutomationTestBase::TestEqual(this_00,L"Value equals \"bar\"",pwVar8,(wchar_t *)FVar10.Data);
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free(local_98);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_88.PathParts.AllocatorInstance.Data,local_88.PathParts.ArrayNum);
  if (local_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcae40

void __thiscall
```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::
<lambda_4>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedRef<FJsonValueObject,1> *pTVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  uint uVar8;
  TReferenceControllerBase<1> *this_00;
  char local_res8 [8];
  FJsonPointer local_88;
  TSharedPtr<FJsonValue,1> local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  TReferenceControllerBase<1> *pTVar9;
  
  uStack_60 = 7;
  local_68 = L"#/2/bla";
  local_38._12_4_ = uStack_5c;
  local_38.Size = 7;
  local_38.DataPtr = L"#/2/bla";
  UE::Json::FJsonPointer::FJsonPointer(&local_88,&local_38);
  this_00 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_78.Object = (FJsonValue *)pTVar6->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88.PathParts.ArrayNum < 1) {
LAB_141dcaeca:
    bVar3 = false;
    pTVar9 = this_00;
  }
  else {
    pTVar7 = &local_78;
    pTVar9 = this_00;
    if (0 < local_88.PathParts.ArrayNum) {
      do {
        uVar8 = (uint)pTVar9;
        uVar5 = 0;
        if ((int)uVar8 < local_88.PathParts.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar7 = UE::Json::FindPartInJsonValue
                           (pTVar7,(FString *)
                                   (local_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar8 * 0x10));
        if (pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcaeca;
        pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < local_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    this_00 = (TReferenceControllerBase<1> *)pTVar7->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar3);
  if (bVar3) {
    plVar1 = *(longlong **)this;
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8[0] = '\0';
    cVar4 = (**(code **)(this_00->_padding_ + 0x68))(this_00,local_res8);
    if (cVar4 == '\0') {
      ::FString::FString(&local_58,L"Boolean");
      FJsonValue::ErrorMessage((FJsonValue *)this_00,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_res8[0] != '\0') {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar2)(plVar1,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_88.PathParts.AllocatorInstance.Data,local_88.PathParts.ArrayNum);
  if (local_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcb0a0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  FAutomationSpecBase *local_60;
  undefined8 local_50;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  local_60 = *(FAutomationSpecBase **)this;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = 0;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  FAutomationSpecBase::BeforeEach(local_60,(TFunction<void___cdecl(void)> *)local_78);
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_88,
                     L"Existing value with numeric field name \"0\" is found and returned as a value, rather than an item in an array"
                    );
  local_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68 = (undefined **)0x1507a97f0;
  local_78._0_8_ = 0x40000006c;
  FAutomationSpecBase::It
            (pFVar1,&local_88,(TFunction<void___cdecl(void)> *)local_48,(FSourceLocation *)local_78)
  ;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_88,
                     L"Existing nested value with numeric field name \"1\" is found and returned as a value, rather than an item in an array"
                    );
  local_78._0_8_ = 0x40000007b;
  local_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&local_88,(TFunction<void___cdecl(void)> *)local_48,(FSourceLocation *)local_78)
  ;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_88,
                     L"Existing nested value where the parent has a numeric field name \"2\" is found and returned"
                    );
  local_78._0_8_ = 0x40000008a;
  local_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&local_88,(TFunction<void___cdecl(void)> *)local_48,(FSourceLocation *)local_78)
  ;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_88,
                     L"Existing value within an object, within an array is found and returned");
  local_78._0_8_ = 0x400000099;
  local_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&local_88,(TFunction<void___cdecl(void)> *)local_48,(FSourceLocation *)local_78)
  ;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcb2d0

void __thiscall
``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer local_78;
  TSharedPtr<FJsonValue,1> local_68;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TSharedRef<FJsonValueObject,1> local_38;
  FString local_28;
  FString local_18;
  TReferenceControllerBase<1> *pTVar8;
  
  local_58 = L"#/someArray/Bar";
  uStack_50 = 0xf;
  local_48._12_4_ = uStack_4c;
  local_48.Size = 0xf;
  local_48.DataPtr = L"#/someArray/Bar";
  UE::Json::FJsonPointer::FJsonPointer(&local_78,&local_48);
  this_00 = *(FAutomationTestBase **)this;
  pFVar4 = ::FString::FString(&local_18,L"expected a numeric part");
  FAutomationTestBase::AddExpectedError(this_00,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_38,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_68.Object = (FJsonValue *)pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_78.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &local_68;
    pTVar8 = pTVar9;
    if (0 < local_78.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < local_78.PathParts.ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_78.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dcb431;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < local_78.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
LAB_141dcb431:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_28,L"bar");
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)this,L"Value is found",bVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_78.PathParts.AllocatorInstance.Data,local_78.PathParts.ArrayNum);
  if (local_78.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.PathParts.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcb600

void __thiscall
```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::
<lambda_5>::operator()(void *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  wchar_t *pwVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  FJsonValue *this_01;
  wchar_t *local_98;
  undefined8 local_90;
  FJsonPointer local_88;
  TSharedPtr<FJsonValue,1> local_78;
  FString local_68;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  TStringView<wchar_t> local_38;
  TSharedRef<FJsonValueObject,1> local_28;
  
  uStack_50 = 0x11;
  local_58 = L"#/someArray/0/Bar";
  local_38._12_4_ = uStack_4c;
  local_38.Size = 0x11;
  local_38.DataPtr = L"#/someArray/0/Bar";
  UE::Json::FJsonPointer::FJsonPointer(&local_88,&local_38);
  this_01 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&local_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198));
  local_78.Object = (FJsonValue *)pTVar5->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88.PathParts.ArrayNum < 1) {
LAB_141dcb68a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &local_78;
    if (0 < local_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < local_88.PathParts.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar6 = UE::Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (local_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcb68a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_01 = pTVar6->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_68,L"bar");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)this,L"Value is found",bVar2);
  if (bVar2) {
    this_00 = *(FAutomationTestBase **)this;
    if ((this_01 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    cVar3 = (**(code **)(this_01->_padding_ + 0x58))(this_01,&local_98);
    if (cVar3 == '\0') {
      ::FString::FString(&local_48,L"String");
      FJsonValue::ErrorMessage(this_01,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)local_90 != 0) {
      pwVar8 = local_98;
    }
    FAutomationTestBase::TestEqual(this_00,L"Value equals false",pwVar8,(wchar_t *)FVar10.Data);
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free(local_98);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)local_88.PathParts.AllocatorInstance.Data,local_88.PathParts.ArrayNum);
  if (local_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 141dcb880

void * __thiscall
FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (FJsonSerializerWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcb8d0

void * __thiscall
FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (FJsonSerializerWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcb920

void * __thiscall
FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (FJsonSerializerWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcb970

void * __thiscall
FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (FJsonSerializerWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__FJsonSerializerWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcb9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcba00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcba40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcba80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbac0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbb00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Describe_FAutomationSpecBase__QEAAXAEBVFString__V__TFunction___A6AXXZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbc60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbd60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbe20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbe60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FJsonPointerSpec::Define'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbee0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::FElement,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::FElement,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbf20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::StackState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::StackState,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbf60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueNumberString<char8_t>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TJsonValueNumberString<char8_t>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbfa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueNumberString<wchar_t>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TJsonValueNumberString<wchar_t>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcbfe0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueString<char8_t>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TJsonValueString<char8_t>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueString<wchar_t>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TJsonValueString<wchar_t>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc060

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonObject,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FJsonObject,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc0a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueArray,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FJsonValueArray,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc0e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueBoolean,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FJsonValueBoolean,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueNull,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FJsonValueNull,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueNumber,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FJsonValueNumber,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc1a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueObject,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FJsonValueObject,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc1e0

void * __thiscall
TJsonReader<char>::_scalar_deleting_destructor_(TJsonReader<char> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc260

void * __thiscall
TJsonReader<char8_t>::_scalar_deleting_destructor_(TJsonReader<char8_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc2e0

void * __thiscall
TJsonReader<wchar_t>::_scalar_deleting_destructor_(TJsonReader<wchar_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParseState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc360

void * __thiscall
TJsonStringReader<wchar_t>::_scalar_deleting_destructor_
          (TJsonStringReader<wchar_t> *this,uint param_1)

{
  FBufferReader *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  pFVar1 = (this->Content).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc450

void * __thiscall
TJsonStringViewReader<char>::_scalar_deleting_destructor_
          (TJsonStringViewReader<char> *this,uint param_1)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc530

void * __thiscall
TJsonStringViewReader<char8_t>::_scalar_deleting_destructor_
          (TJsonStringViewReader<char8_t> *this,uint param_1)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc610

void * __thiscall
TJsonStringViewReader<wchar_t>::_scalar_deleting_destructor_
          (TJsonStringViewReader<wchar_t> *this,uint param_1)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc6f0

void * __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>::_scalar_deleting_destructor_
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy_D____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TCondensedJsonPrintPolicy_D____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc7a0

void * __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__Q____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc850

void * __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc900

void * __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcc9b0

void * __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcca60

void * __thiscall
TJsonValueNumberString<char8_t>::_scalar_deleting_destructor_
          (TJsonValueNumberString<char8_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccab0

void * __thiscall
TJsonValueNumberString<wchar_t>::_scalar_deleting_destructor_
          (TJsonValueNumberString<wchar_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccb00

void * __thiscall
TJsonValueString<char8_t>::_scalar_deleting_destructor_
          (TJsonValueString<char8_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccb50

void * __thiscall
TJsonValueString<wchar_t>::_scalar_deleting_destructor_
          (TJsonValueString<wchar_t> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccba0

void * __thiscall
TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::_scalar_deleting_destructor_
          (TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TCondensedJsonPrintPolicy_D____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccbf0

void * __thiscall
TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccc40

void * __thiscall
TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_>::_scalar_deleting_destructor_
          (TJsonWriter<char8_t,TPrettyJsonPrintPolicy<char8_t>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccc90

void * __thiscall
TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccce0

void * __thiscall
TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccd30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecDefinitionScope,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecDefinitionScope>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecDefinitionScope,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecDefinitionScope>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccd70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecIt,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecIt>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecIt,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecIt>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccdb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringReader<wchar_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringReader<wchar_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccdf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<char>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringViewReader<char>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcce30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char8_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringViewReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char8_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcce70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<wchar_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringViewReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<wchar_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcceb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccef0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccf30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccf70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccfb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dccff0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd030

void * __thiscall FBufferReader::_scalar_deleting_destructor_(FBufferReader *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferReader__6B_;
  if (this->field_0xa8 != '\0') {
    FMemory::Free(*(void **)&this->field_0x90);
    *(undefined8 *)&this->field_0x90 = 0;
  }
  *(undefined ***)this = &___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd0b0

void * __thiscall
FJsonSerializable::_scalar_deleting_destructor_(FJsonSerializable *this,uint param_1)

{
  *this = (FJsonSerializable)&___7FJsonSerializable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd0f0

void * __thiscall
FJsonSerializerReader::_scalar_deleting_destructor_(FJsonSerializerReader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJsonSerializerReader__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonObject).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd140

void * __thiscall
`FJsonSerializerMacrosTest::TestBody'::__l2::FJsonStruct::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  *(undefined ***)((longlong)this + 0x10) = &___7FJsonSerializable__6B_;
  *(undefined ***)this = &___7FJsonSerializable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd1a0

void * __thiscall FJsonValue::_scalar_deleting_destructor_(FJsonValue *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd1e0

void * __thiscall FJsonValueArray::_scalar_deleting_destructor_(FJsonValueArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FJsonValueArray__6B_;
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)(this->Value).AllocatorInstance.Data,(this->Value).ArrayNum
            );
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd250

void * __thiscall
FJsonValueBoolean::_scalar_deleting_destructor_(FJsonValueBoolean *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd290

void * __thiscall FJsonValueNull::_scalar_deleting_destructor_(FJsonValueNull *this,uint param_1)

{
  *(undefined ***)this = &___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd2d0

void * __thiscall
FJsonValueNumber::_scalar_deleting_destructor_(FJsonValueNumber *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd310

void * __thiscall
FJsonValueObject::_scalar_deleting_destructor_(FJsonValueObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJsonValueObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd370

void * __thiscall
FAutomationSpecBase::FSingleExecuteLatentCommand::_scalar_deleting_destructor_
          (FSingleExecuteLatentCommand *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FSingleExecuteLatentCommand_FAutomationSpecBase__6B_;
  if (*(longlong *)&this->Predicate != 0) {
    plVar3 = *(longlong **)&(this->Predicate).field_0x28;
    plVar4 = (longlong *)&(this->Predicate).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd400

void * __thiscall
FAutomationSpecBase::FSpecDefinitionScope::_scalar_deleting_destructor_
          (FSpecDefinitionScope *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>,int>
            ((TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
            ((TSharedRef<IAutomationLatentCommand,1> *)(this->AfterEach).AllocatorInstance.Data,
             (this->AfterEach).ArrayNum);
  pFVar1 = (this->AfterEach).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FAutomationSpecBase::FSpecIt,1>,int>
            ((TSharedRef<FAutomationSpecBase::FSpecIt,1> *)(this->It).AllocatorInstance.Data,
             (this->It).ArrayNum);
  pFVar1 = (this->It).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
            ((TSharedRef<IAutomationLatentCommand,1> *)(this->BeforeEach).AllocatorInstance.Data,
             (this->BeforeEach).ArrayNum);
  pFVar1 = (this->BeforeEach).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd4b0

void * __thiscall
`FJsonSerializerMacrosTest::TestBody'::__l2::FJsonStruct::FSubJsonStruct::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  *(undefined ***)this = &___7FJsonSerializable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141dcd500

void * __thiscall
IAutomationLatentCommand::_scalar_deleting_destructor_(IAutomationLatentCommand *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Begin @ 141dcde10

GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> * __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Begin
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  code *pcVar1;
  bool bVar2;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  
  if ((this->data_).f.flags != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsArray()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x696,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pGVar3 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar1)();
      return pGVar3;
    }
  }
  return (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
         ((ulonglong)(this->data_).s.str & 0xffffffffffff);
}

// Bool @ 141dcde70

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Bool(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
       *this,bool param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  (this->stack_).stackTop_ = pcVar1 + 0x10;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  *(ushort *)(pcVar1 + 0xe) = param_1 + 9;
  return true;
}

// DigitGen @ 141dd2f50

void __cdecl
rapidjson::internal::DigitGen
          (DiyFp *param_1,DiyFp *param_2,ulong64 param_3,char *param_4,int *param_5,int *param_6)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  __uint64 *p_Var12;
  int iVar13;
  __uint64 *p_Var14;
  ulonglong uVar15;
  __uint64 *p_Var7;
  
  uVar10 = param_2->f;
  cVar1 = (char)param_2->e;
  bVar2 = -cVar1;
  iVar13 = 1;
  uVar15 = 1L << (bVar2 & 0x3f);
  uVar11 = uVar10 - param_1->f;
  uVar9 = uVar10 >> (bVar2 & 0x3f);
  uVar10 = uVar15 - 1 & uVar10;
  uVar6 = (uint)uVar9;
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar13 = 2;
    }
    else if (uVar6 < 1000) {
      iVar13 = 3;
    }
    else if (uVar6 < 10000) {
      iVar13 = 4;
    }
    else if (uVar6 < 100000) {
      iVar13 = 5;
    }
    else if (uVar6 < 1000000) {
      iVar13 = 6;
    }
    else if (uVar6 < 10000000) {
      iVar13 = 7;
    }
    else {
      iVar13 = 9 - (uint)(uVar6 < 100000000);
    }
  }
  p_Var14 = (__uint64 *)0x0;
  *param_5 = 0;
  p_Var12 = p_Var14;
  do {
    iVar8 = (int)uVar9;
    p_Var7 = p_Var14;
    switch(iVar13) {
    case 1:
      p_Var7 = (__uint64 *)(uVar9 & 0xffffffff);
      uVar9 = 0;
      break;
    case 2:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 10);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -10);
      break;
    case 3:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 100);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -100);
      break;
    case 4:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 1000);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -1000);
      break;
    case 5:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 10000);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -10000);
      break;
    case 6:
      iVar4 = (int)((uVar9 & 0xffffffff) * 0x4f8b588f >> 0x20);
      uVar6 = ((uint)(iVar8 - iVar4) >> 1) + iVar4 >> 0x10;
      p_Var7 = (__uint64 *)(ulonglong)uVar6;
      uVar9 = (ulonglong)(iVar8 + uVar6 * -100000);
      break;
    case 7:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 1000000);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -1000000);
      break;
    case 8:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 10000000);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -10000000);
      break;
    case 9:
      p_Var7 = (__uint64 *)((uVar9 & 0xffffffff) / 100000000);
      uVar9 = (ulonglong)(uint)(iVar8 + (int)p_Var7 * -100000000);
      break;
    default:
      goto switchD_141dd3041_default;
    }
    if ((int)p_Var7 == 0) {
switchD_141dd3041_default:
      if ((int)p_Var12 != 0) goto LAB_141dd310e;
    }
    else {
LAB_141dd310e:
      param_4[(int)p_Var12] = (char)p_Var7 + '0';
      *param_5 = *param_5 + 1;
      p_Var12 = (__uint64 *)(ulonglong)(uint)*param_5;
    }
    iVar13 = iVar13 + -1;
    uVar5 = ((uVar9 & 0xffffffff) << (bVar2 & 0x3f)) + uVar10;
    if (uVar5 <= param_3) {
      *param_6 = *param_6 + iVar13;
      uVar10 = (longlong)
               (&`void___cdecl_rapidjson::internal::DigitGen(rapidjson::internal::DiyFp_const&___ptr64,rapidjson::internal::DiyFp_const&___ptr64,unsigned___int64,char*___ptr64,int*___ptr64,int*___ptr64)'
                 ::__l2::kPow10)[iVar13] << (bVar2 & 0x3f);
      if (uVar11 <= uVar5) {
        return;
      }
      iVar13 = *param_5;
      while( true ) {
        if (param_3 - uVar5 < uVar10) {
          return;
        }
        uVar9 = uVar5 + uVar10;
        if ((uVar11 <= uVar9) && (uVar11 - uVar5 <= (uVar5 - uVar11) + uVar10)) break;
        param_4[(longlong)iVar13 + -1] = param_4[(longlong)iVar13 + -1] + -1;
        uVar5 = uVar9;
        if (uVar11 <= uVar9) {
          return;
        }
      }
      return;
    }
    if (iVar13 < 1) {
      do {
        param_3 = param_3 * 10;
        cVar3 = (char)(uVar10 * 10 >> (-cVar1 & 0x3fU));
        if ((cVar3 != '\0') || ((int)p_Var12 != 0)) {
          param_4[(int)p_Var12] = cVar3 + '0';
          *param_5 = *param_5 + 1;
          p_Var12 = (__uint64 *)(ulonglong)(uint)*param_5;
        }
        uVar10 = uVar10 * 10 & uVar15 - 1;
        iVar13 = iVar13 + -1;
      } while (param_3 <= uVar10);
      *param_6 = *param_6 + iVar13;
      if (-iVar13 < 0x14) {
        p_Var14 = (&`void___cdecl_rapidjson::internal::DigitGen(rapidjson::internal::DiyFp_const&___ptr64,rapidjson::internal::DiyFp_const&___ptr64,unsigned___int64,char*___ptr64,int*___ptr64,int*___ptr64)'
                    ::__l2::kPow10)[-iVar13];
      }
      uVar11 = uVar11 * (longlong)p_Var14;
      if (uVar10 < uVar11) {
        iVar13 = *param_5;
        do {
          if (param_3 - uVar10 < uVar15) {
            return;
          }
          uVar9 = uVar15 + uVar10;
          if ((uVar11 <= uVar9) && (uVar11 - uVar10 <= (uVar15 - uVar11) + uVar10)) {
            return;
          }
          param_4[(longlong)iVar13 + -1] = param_4[(longlong)iVar13 + -1] + -1;
          uVar10 = uVar9;
        } while (uVar9 < uVar11);
      }
      return;
    }
  } while( true );
}

// Double @ 141dd32b0

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Double(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
         *this,double param_1)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pdVar1 = (double *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(pdVar1 + 2);
  *pdVar1 = 0.0;
  pdVar1[1] = 0.0;
  ((char *)((longlong)pdVar1 + 0xe))[0] = '\x16';
  ((char *)((longlong)pdVar1 + 0xe))[1] = '\x02';
  *pdVar1 = param_1;
  return true;
}

// EndArray @ 141dd3db0

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::EndArray(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
           *this,uint param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  void *_Dst;
  char *_Src;
  ulonglong _Size;
  
  _Size = (ulonglong)param_1 * 0x10;
  if ((ulonglong)((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_) < _Size) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= count * sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x8b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  _Src = (this->stack_).stackTop_ + (ulonglong)param_1 * -0x10;
  (this->stack_).stackTop_ = _Src;
  if ((ulonglong)((longlong)_Src - (longlong)(this->stack_).stack_) < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x92,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  if (this->allocator_ == (FAllocatorImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("allocator_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0xaf5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1[-2] = '\x04';
  pcVar1[-1] = '\0';
  if (param_1 == 0) {
    *(ulonglong *)(pcVar1 + -8) = *(ulonglong *)(pcVar1 + -8) & 0xffff000000000000;
  }
  else {
    _Dst = FMemory::Malloc(_Size,0);
    *(ulonglong *)(pcVar1 + -8) = *(ulonglong *)(pcVar1 + -8) & 0xffff000000000000 | (ulonglong)_Dst
    ;
    memcpy(_Dst,_Src,_Size);
  }
  *(uint *)(pcVar1 + -0xc) = param_1;
  *(uint *)(pcVar1 + -0x10) = param_1;
  return true;
}

// EndObject @ 141dd3f40

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::EndObject(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
            *this,uint param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong _Size;
  char *_Src;
  
  uVar5 = (ulonglong)param_1;
  _Size = uVar5 * 0x20;
  if ((ulonglong)((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_) < _Size) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= count * sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x8b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  _Src = (this->stack_).stackTop_ + uVar5 * -0x20;
  (this->stack_).stackTop_ = _Src;
  if ((ulonglong)((longlong)_Src - (longlong)(this->stack_).stack_) < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x92,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  if (this->allocator_ == (FAllocatorImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("allocator_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0xaf5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1[-2] = '\x03';
  pcVar1[-1] = '\0';
  if (param_1 == 0) {
    *(ulonglong *)(pcVar1 + -8) = *(ulonglong *)(pcVar1 + -8) & 0xffff000000000000;
  }
  else {
    if (uVar5 == 0) {
      FMemory::Free((void *)0x0);
      _Dst = (void *)0x0;
    }
    else {
      _Dst = FMemory::Realloc((void *)0x0,_Size,0);
    }
    *(ulonglong *)(pcVar1 + -8) = *(ulonglong *)(pcVar1 + -8) & 0xffff000000000000;
    *(ulonglong *)(pcVar1 + -8) = *(ulonglong *)(pcVar1 + -8) | (ulonglong)_Dst;
    memcpy(_Dst,_Src,_Size);
  }
  *(uint *)(pcVar1 + -0xc) = param_1;
  *(uint *)(pcVar1 + -0x10) = param_1;
  return true;
}

// FastPath @ 141dd42b0

double __cdecl rapidjson::internal::FastPath(double param_1,int param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  
  if (param_2 < -0x134) {
    return 0.0;
  }
  if (-1 < param_2) {
    if (0x134 < param_2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("n >= 0 && n <= 308",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\pow10.h"
                         ,0x30,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        dVar2 = (double)(*pcVar1)();
        return dVar2;
      }
    }
    return param_1 * (double)(&`double___cdecl_rapidjson::internal::Pow10(int)'::__l2::e)[param_2];
  }
  iVar4 = -param_2;
  if ((iVar4 < 0) || (0x134 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("n >= 0 && n <= 308",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\pow10.h"
                       ,0x30,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  return param_1 / (double)(&`double___cdecl_rapidjson::internal::Pow10(int)'::__l2::e)[iVar4];
}

// FindMember @ 141dd4590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> __thiscall
rapidjson::
GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
::FindMember(GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
             *this,wchar_t *param_1)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this_00;
  code *pcVar1;
  bool bVar2;
  GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> GVar3;
  size_t sVar4;
  wchar_t *in_R8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = this->value_;
  if (in_R8 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("str != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x1ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      GVar3.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar3.ptr_;
    }
  }
  sVar4 = wcslen(in_R8);
  local_28._8_8_ = sVar4 & 0xffffffff;
  uStack_18 = (ulonglong)in_R8 | 0x405000000000000;
  if ((this_00->data_).f.flags != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x558,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      GVar3.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar3.ptr_;
    }
  }
  if ((uStack_18 & 0x400000000000000) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("name.IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x559,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      GVar3.ptr_ = (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   (*pcVar1)();
      return (GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
             GVar3.ptr_;
    }
  }
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  DoFindMember<UE::Json::Private::FAllocatorImpl>
            (this_00,(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     local_28);
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             (local_28 + 8));
  *(undefined8 *)param_1 = local_28._0_8_;
  return (GenericMemberIterator<1,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>)
         (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_1;
}

// GetDouble @ 141dd5990

double __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::GetDouble
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  ushort uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  
  if ((*(byte *)((longlong)&this->data_ + 0xe) & 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsNumber()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x72b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar5 = (double)(*pcVar3)();
      return dVar5;
    }
  }
  uVar1 = (this->data_).f.flags;
  if ((uVar1 >> 9 & 1) != 0) {
    return (this->data_).n.d;
  }
  if ((uVar1 & 0x20) != 0) {
    return (double)(int)(this->data_).s.length;
  }
  if ((uVar1 & 0x40) != 0) {
    return (double)(this->data_).s.length;
  }
  if ((char)uVar1 < '\0') {
    return (double)*(longlong *)&this->data_;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(data_.f.flags & kUint64Flag) != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x730,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar5 = (double)(*pcVar3)();
      return dVar5;
    }
  }
  uVar2 = *(ulonglong *)&this->data_;
  if (-1 < (longlong)uVar2) {
    return (double)(longlong)uVar2;
  }
  return (double)uVar2;
}

// GetInt64 @ 141dd6580

long64 __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::GetInt64
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((*(byte *)((longlong)&this->data_ + 0xe) & 0x80) != 0) {
    return (this->data_).n.i64;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("data_.f.flags & kInt64Flag",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                     ,0x724,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return (this->data_).n.i64;
}

// GetString @ 141dd6b90

wchar_t * __thiscall
rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
GetString(GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  char **ppcVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar3)();
      return pwVar5;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar3)();
      return pwVar5;
    }
  }
  pcVar2 = (this->stack_).stackTop_;
  (this->stack_).stackTop_ = pcVar2 + 2;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  if ((ulonglong)((longlong)(this->stack_).stackTop_ - (longlong)(this->stack_).stack_) < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= count * sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar3)();
      return pwVar5;
    }
  }
  ppcVar1 = &(this->stack_).stackTop_;
  *ppcVar1 = *ppcVar1 + -2;
  return (wchar_t *)(this->stack_).stack_;
}

// GetString @ 141dd6c70

wchar_t * __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::GetString
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (((this->data_).f.flags & 0x400) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x746,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  if (((this->data_).f.flags & 0x1000) != 0) {
    return (wchar_t *)this;
  }
  return (wchar_t *)((ulonglong)(this->data_).s.str & 0xffffffffffff);
}

// GetStringLength @ 141dd6fd0

uint __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
GetStringLength(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((this->data_).f.flags & 0x400) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x74b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (((this->data_).f.flags & 0x1000) != 0) {
    return 6 - (ushort)(this->data_).ss.str[6];
  }
  return (this->data_).s.length;
}

// GetUint64 @ 141dd7510

ulong64 __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::GetUint64
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (((this->data_).f.flags & 0x100) != 0) {
    return (this->data_).n.i64;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("data_.f.flags & kUint64Flag",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                     ,0x725,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (this->data_).n.i64;
}

// Grisu2 @ 141dd7af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rapidjson::internal::Grisu2(double param_1,char *param_2,int *param_3,int *param_4)

{
  ulonglong uVar1;
  __uint64 *p_Var2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  double dVar21;
  DiyFp local_58;
  DiyFp local_48;
  
  uVar13 = (uint)((ulonglong)param_1 >> 0x34) & 0x7ff;
  iVar18 = uVar13 - 0x433;
  if (uVar13 == 0) {
    iVar18 = -0x432;
  }
  iVar14 = iVar18 + -1;
  uVar19 = ((ulonglong)param_1 & 0xfffffffffffff) + 0x10000000000000;
  if (uVar13 == 0) {
    uVar19 = (ulonglong)param_1 & 0xfffffffffffff;
  }
  uVar1 = uVar19 * 2 + 1;
  uVar3 = uVar1 >> 0x35;
  iVar12 = iVar14;
  while (uVar3 == 0) {
    iVar12 = iVar12 + -1;
    uVar3 = (uVar1 & 0x7fffffffffffffff) >> 0x34 & 1;
    uVar1 = uVar1 * 2;
  }
  iVar12 = iVar12 + -10;
  if (uVar19 == 0x10000000000000) {
    iVar14 = iVar18 + -2;
  }
  lVar17 = 0x40000000000000;
  if (uVar19 != 0x10000000000000) {
    lVar17 = uVar19 * 2;
  }
  dVar21 = (double)(-0x3d - iVar12) * ___real_3fd34413509f79fe + ___real_4075b00000000000;
  iVar15 = (int)dVar21;
  iVar20 = iVar15 + 1;
  if (dVar21 - (double)iVar15 <= 0.0) {
    iVar20 = iVar15;
  }
  uVar13 = (iVar20 >> 3) + 1;
  *param_4 = uVar13 * -8 + 0x15c;
  if ((0x56 < uVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("index < 87",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\diyfp.h"
                          ,0xe0,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  p_Var2 = (&`struct_rapidjson::internal::DiyFp___cdecl_rapidjson::internal::GetCachedPowerByIndex(unsigned___int64)'
             ::__l2::kCachedPowers_F)[uVar13];
  iVar20 = (int)*(short *)((longlong)
                           &`struct_rapidjson::internal::DiyFp___cdecl_rapidjson::internal::GetCachedPowerByIndex(unsigned___int64)'
                            ::__l2::kCachedPowers_E + (ulonglong)uVar13 * 2);
  if ((uVar19 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("x != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\clzll.h"
                          ,0x23,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar16 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  iVar15 = 0x3f - (int)lVar16;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = p_Var2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar19 << ((byte)iVar15 & 0x3f);
  local_48.f = SUB168(auVar5 * auVar8,8);
  if (SUB168(auVar5 * auVar8,0) < 0) {
    local_48.f = local_48.f + 1;
  }
  local_48.e = iVar20 + 0x40 + (iVar18 - iVar15);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = p_Var2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1 << 10;
  lVar16 = SUB168(auVar6 * auVar9,8);
  if (SUB168(auVar6 * auVar9,0) < 0) {
    lVar16 = lVar16 + 1;
  }
  local_58.e = iVar20 + 0x40 + iVar12;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = p_Var2;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = lVar17 + -1 << ((char)iVar14 - (char)iVar12 & 0x3fU);
  lVar17 = SUB168(auVar7 * auVar10,8);
  if (SUB168(auVar7 * auVar10,0) < 0) {
    lVar17 = lVar17 + 1;
  }
  local_58.f = lVar16 - 1;
  DigitGen(&local_48,&local_58,(local_58.f - lVar17) - 1,param_2,param_3,param_4);
  return;
}

// Int64 @ 141dd7f90

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Int64(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
        *this,long64 param_1)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = (long64 *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(plVar1 + 2);
  *plVar1 = 0;
  plVar1[1] = 0;
  *plVar1 = param_1;
  ((char *)((longlong)plVar1 + 0xe))[0] = -0x6a;
  ((char *)((longlong)plVar1 + 0xe))[1] = '\0';
  if (param_1 < 0) {
    if (-0x80000001 < param_1) {
      ((char *)((longlong)plVar1 + 0xe))[0] = -0x4a;
      ((char *)((longlong)plVar1 + 0xe))[1] = '\0';
    }
  }
  else {
    uVar5 = 0x196;
    ((char *)((longlong)plVar1 + 0xe))[0] = -0x6a;
    ((char *)((longlong)plVar1 + 0xe))[1] = '\x01';
    if ((param_1 & 0xffffffff00000000U) == 0) {
      uVar5 = 0x1d6;
      ((char *)((longlong)plVar1 + 0xe))[0] = -0x2a;
      ((char *)((longlong)plVar1 + 0xe))[1] = '\x01';
    }
    if ((param_1 & 0xffffffff80000000U) == 0) {
      *(ushort *)((longlong)plVar1 + 0xe) = uVar5 | 0x20;
      return true;
    }
  }
  return true;
}

// Int @ 141dd80a0

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Int(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
      *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = (longlong *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(plVar1 + 2);
  uVar5 = 0xb6;
  if (-1 < param_1) {
    uVar5 = 0x1f6;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(undefined2 *)((longlong)plVar1 + 0xe) = uVar5;
  *plVar1 = (longlong)param_1;
  return true;
}

// IsError @ 141dd8170

bool __thiscall rapidjson::ParseResult::IsError(ParseResult *this)

{
  return this->code_ != kParseErrorNone;
}

// Null @ 141dd9a60

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Null(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
       *this)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  (this->stack_).stackTop_ = pcVar1 + 0x10;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  return true;
}

// Prefix @ 141ddd0a0

void __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::Prefix(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
         *this,Type param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t wVar5;
  
  pcVar1 = (this->level_stack_).stackTop_;
  pcVar2 = (this->level_stack_).stack_;
  if (pcVar1 == pcVar2) {
    if (this->hasRoot_ != false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!hasRoot_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                         ,0x1ee,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->hasRoot_ = true;
    return;
  }
  if ((ulonglong)((longlong)pcVar1 - (longlong)pcVar2) < 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSize() >= sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x92,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar1 = (this->level_stack_).stackTop_;
  if (*(ulonglong *)(pcVar1 + -0x10) != 0) {
    if (pcVar1[-8] == '\0') {
      wVar5 = L':';
      if ((*(ulonglong *)(pcVar1 + -0x10) & 1) == 0) {
        wVar5 = L',';
      }
    }
    else {
      wVar5 = L',';
    }
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              (this->os_,wVar5);
  }
  if (((pcVar1[-8] == '\0') && ((pcVar1[-0x10] & 1U) == 0)) && (param_1 != kStringType)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("type == kStringType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\writer.h"
                       ,0x1ea,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(longlong *)(pcVar1 + -0x10) = *(longlong *)(pcVar1 + -0x10) + 1;
  return;
}

// Prettify @ 141ddd1b0

char * __cdecl rapidjson::internal::Prettify(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  
  _Size = (size_t)param_2;
  iVar4 = param_2 + param_3;
  if ((param_3 < 0) || (0x15 < iVar4)) {
    if (iVar4 - 1U < 0x15) {
      memmove(param_1 + (iVar4 + 1),param_1 + iVar4,(longlong)(param_2 - iVar4));
      param_1[iVar4] = '.';
      if (param_3 + param_4 < 0) {
        iVar3 = iVar4 + param_4;
        for (lVar2 = (longlong)iVar3; iVar4 + 1 < lVar2; lVar2 = lVar2 + -1) {
          if (param_1[lVar2] != '0') goto LAB_141ddd2e7;
          iVar3 = iVar3 + -1;
        }
        pcVar1 = param_1 + (iVar4 + 2);
      }
      else {
        pcVar1 = param_1 + (param_2 + 1);
      }
    }
    else {
      if (iVar4 + 5U < 6) {
        iVar3 = -iVar4 + 2;
        pcVar1 = param_1;
        memmove(param_1 + iVar3,param_1,_Size);
        param_1[0] = '0';
        param_1[1] = '.';
        if (2 < iVar3) {
          memset(param_1 + 2,(int)CONCAT71((int7)((ulonglong)pcVar1 >> 8),0x30),(longlong)-iVar4);
        }
        if (param_2 - iVar4 <= param_4) {
          return param_1 + (iVar3 + param_2);
        }
        iVar3 = param_4 + 1;
        lVar2 = (longlong)iVar3;
        if (2 < lVar2) {
          while (param_1[lVar2] == '0') {
            iVar3 = iVar3 + -1;
            lVar2 = lVar2 + -1;
            if (lVar2 < 3) {
              return param_1 + 3;
            }
          }
LAB_141ddd2e7:
          return param_1 + (iVar3 + 1);
        }
      }
      else {
        pcVar1 = param_1 + 2;
        if (-param_4 <= iVar4) {
          if (param_2 == 1) {
            param_1[1] = 'e';
          }
          else {
            memmove(pcVar1,param_1 + 1,(longlong)(param_2 + -1));
            param_1[1] = '.';
            pcVar1 = param_1 + (param_2 + 2);
            param_1[_Size + 1] = 'e';
          }
          pcVar1 = WriteExponent(iVar4 - 1U,pcVar1);
          return pcVar1;
        }
        param_1[0] = '0';
        param_1[1] = '.';
        *pcVar1 = '0';
      }
      pcVar1 = param_1 + 3;
    }
  }
  else {
    if (param_2 < iVar4) {
      memset(param_1 + _Size,(int)CONCAT71((uint7)(uint3)((uint)param_2 >> 8),0x30),
             (longlong)param_3);
    }
    (param_1 + iVar4)[0] = '.';
    (param_1 + iVar4)[1] = '0';
    pcVar1 = param_1 + (iVar4 + 2);
  }
  return pcVar1;
}

// PrettyPrefix @ 141ddd380

void __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::PrettyPrefix(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
               *this,Type param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t wVar5;
  
  if (this->_padding_ == this->_padding_) {
    if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Base::hasRoot_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                           ,0xf7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    return;
  }
  if (((ulonglong)(this->_padding_ - this->_padding_) < 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSize() >= sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x92,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = this->_padding_;
  uVar2 = *(ulonglong *)(lVar1 + -0x10);
  if (*(char *)(lVar1 + -8) == '\0') {
    if (uVar2 == 0) {
      wVar5 = L'\n';
    }
    else {
      wVar5 = L',';
      if ((uVar2 & 1) != 0) {
        wVar5 = L':';
      }
      GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                 )this->_padding_,wVar5);
      wVar5 = L'\n';
      if ((uVar2 & 1) != 0) {
        wVar5 = L' ';
      }
    }
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               this->_padding_,wVar5);
    if ((*(byte *)(lVar1 + -0x10) & 1) != 0) goto LAB_141ddd467;
  }
  else {
    if (uVar2 == 0) {
LAB_141ddd406:
      if ((this->formatOptions_ & kFormatSingleLineArray) != kFormatDefault) goto LAB_141ddd467;
    }
    else {
      GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                 )this->_padding_,L',');
      if ((this->formatOptions_ & kFormatSingleLineArray) != kFormatDefault) {
        GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
                  ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    *)this->_padding_,L' ');
        goto LAB_141ddd406;
      }
    }
    GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
              ((GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               this->_padding_,L'\n');
  }
  WriteIndent(this);
LAB_141ddd467:
  if ((((*(char *)(lVar1 + -8) == '\0') && ((*(byte *)(lVar1 + -0x10) & 1) == 0)) &&
      (param_1 != kStringType)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("type == kStringType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\prettywriter.h"
                         ,0xf3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(longlong *)(lVar1 + -0x10) = *(longlong *)(lVar1 + -0x10) + 1;
  return;
}

// Put @ 141ddd670

void __thiscall
rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::Put
          (GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this,
          wchar_t param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pwVar1 = (wchar_t *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(pwVar1 + 1);
  *pwVar1 = param_1;
  return;
}

// SetStringRaw @ 141debbe0

void __thiscall
rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::SetStringRaw
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this,
          GenericStringRef<wchar_t> *param_1,FAllocatorImpl *param_2)

{
  wchar_t **ppwVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *_Dst;
  
  if (param_1->length < 7) {
    (this->data_).f.flags = 0x1c05;
    (this->data_).ss.str[6] = L'\x06' - (short)param_1->length;
    _Dst = this;
  }
  else {
    (this->data_).f.flags = 0xc05;
    (this->data_).s.length = param_1->length;
    _Dst = FMemory::Malloc((ulonglong)(param_1->length + 1) * 2,0);
    ppwVar1 = &(this->data_).s.str;
    *ppwVar1 = (wchar_t *)((ulonglong)*ppwVar1 & 0xffff000000000000);
    ppwVar1 = &(this->data_).s.str;
    *ppwVar1 = (wchar_t *)((ulonglong)*ppwVar1 | (ulonglong)_Dst);
  }
  memcpy(_Dst,param_1->s,(ulonglong)param_1->length * 2);
  *(undefined2 *)((longlong)&_Dst->data_ + (ulonglong)param_1->length * 2) = 0;
  return;
}

// Size @ 141debc80

uint __thiscall
rapidjson::
GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
::Size(GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
       *this)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pGVar1 = this->value_;
  if ((pGVar1->data_).f.flags != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsArray()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x674,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (pGVar1->data_).s.length;
}

// StartArray @ 141debd90

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::StartArray(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
             *this)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  (this->stack_).stackTop_ = pcVar1 + 0x10;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0xe] = '\x04';
  pcVar1[0xf] = '\0';
  return true;
}

// StartObject @ 141debf20

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::StartObject(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              *this)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar1 = (this->stack_).stackTop_;
  (this->stack_).stackTop_ = pcVar1 + 0x10;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0xe] = '\x03';
  pcVar1[0xf] = '\0';
  return true;
}

// String @ 141dec140

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::String(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
         *this,wchar_t *param_1,uint param_2,bool param_3)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this_00;
  FAllocatorImpl *pFVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  GenericStringRef<wchar_t> local_18;
  
  lVar6 = (longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_;
  if (param_3) {
    if (lVar6 < 0x10) {
      internal::Stack<rapidjson::CrtAllocator>::
      Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                (&this->stack_,1);
    }
    if ((this->stack_).stackTop_ == (char *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("stackTop_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x82,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x83,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    this_00 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              (this->stack_).stackTop_;
    (this->stack_).stackTop_ = (char *)(this_00 + 1);
    if (this->allocator_ == (FAllocatorImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("allocator_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0xaf5,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar1 = this->allocator_;
    local_18.s = L"";
    if (param_1 != (wchar_t *)0x0) {
      local_18.s = param_1;
    }
    (this_00->data_).n = (Number)0x0;
    (this_00->data_).s.str = (wchar_t *)0x0;
    local_18.length = param_2;
    if ((param_1 == (wchar_t *)0x0) && (param_2 != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("str != 0 || len == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x1a1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::SetStringRaw
              (this_00,&local_18,pFVar1);
  }
  else {
    if (lVar6 < 0x10) {
      internal::Stack<rapidjson::CrtAllocator>::
      Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                (&this->stack_,1);
    }
    if ((this->stack_).stackTop_ == (char *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("stackTop_",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x82,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                         ,0x83,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    puVar2 = (uint *)(this->stack_).stackTop_;
    pwVar7 = L"";
    if (param_1 != (wchar_t *)0x0) {
      pwVar7 = param_1;
    }
    (this->stack_).stackTop_ = (char *)(puVar2 + 4);
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if ((param_1 == (wchar_t *)0x0) && (param_2 != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("str != 0 || len == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x1a1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    ((char *)((longlong)puVar2 + 0xe))[0] = '\x05';
    ((char *)((longlong)puVar2 + 0xe))[1] = '\x04';
    *(ulonglong *)(puVar2 + 2) = *(ulonglong *)(puVar2 + 2) & 0xffff000000000000;
    *(ulonglong *)(puVar2 + 2) = *(ulonglong *)(puVar2 + 2) | (ulonglong)pwVar7;
    *puVar2 = param_2;
  }
  return true;
}

// Take @ 141dec390

wchar_t __thiscall
rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>::Take
          (EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> *this)

{
  wchar_t wVar1;
  MemoryStream *pMVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;
  
  pMVar2 = this->is_;
  wVar1 = this->current_;
  pcVar3 = pMVar2->src_;
  if (pcVar3 == pMVar2->end_) {
    cVar4 = '\0';
    cVar6 = '\0';
  }
  else {
    cVar4 = *pcVar3;
    pcVar5 = pcVar3 + 1;
    pMVar2->src_ = pcVar5;
    if (pcVar5 == pMVar2->end_) {
      cVar6 = '\0';
    }
    else {
      cVar6 = *pcVar5;
      pMVar2->src_ = pcVar3 + 2;
    }
  }
  this->current_ = CONCAT11(cVar6,cVar4);
  return wVar1;
}

// ToString @ 141df9530

FString * __cdecl
ToString(FString *__return_storage_ptr__,TVariant<int,unsigned_int,__int64,float,double> *param_1)

{
  undefined1 local_res8 [32];
  
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_ToString_::__l2::<lambda_1>,TVariant<int,unsigned_int,__int64,float,double>_const_&>_1507a6ce8
            )[param_1->TypeIndex])(__return_storage_ptr__,local_res8,param_1);
  return __return_storage_ptr__;
}

// Uint64 @ 141dfccc0

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Uint64(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
         *this,ulong64 param_1)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  puVar1 = (ulong64 *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(puVar1 + 2);
  uVar5 = 0x116;
  *puVar1 = 0;
  puVar1[1] = 0;
  ((char *)((longlong)puVar1 + 0xe))[0] = '\x16';
  ((char *)((longlong)puVar1 + 0xe))[1] = '\x01';
  *puVar1 = param_1;
  if (-1 < (longlong)param_1) {
    uVar5 = 0x196;
    ((char *)((longlong)puVar1 + 0xe))[0] = -0x6a;
    ((char *)((longlong)puVar1 + 0xe))[1] = '\x01';
  }
  if ((param_1 & 0xffffffff00000000) == 0) {
    uVar5 = uVar5 | 0x40;
    *(ushort *)((longlong)puVar1 + 0xe) = uVar5;
  }
  if ((param_1 & 0xffffffff80000000) == 0) {
    *(ushort *)((longlong)puVar1 + 0xe) = uVar5 | 0x20;
  }
  return true;
}

// Uint @ 141dfcdc0

bool __thiscall
rapidjson::
GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
::Uint(GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
       *this,uint param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              (&this->stack_,1);
  }
  if ((this->stack_).stackTop_ == (char *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("stackTop_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((longlong)(this->stack_).stackEnd_ - (longlong)(this->stack_).stackTop_ < 0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  puVar1 = (ulonglong *)(this->stack_).stackTop_;
  (this->stack_).stackTop_ = (char *)(puVar1 + 2);
  uVar5 = 0x1f6;
  if ((int)param_1 < 0) {
    uVar5 = 0x1d6;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)((longlong)puVar1 + 0xe) = uVar5;
  *puVar1 = (ulonglong)param_1;
  return true;
}

// WriteDouble @ 141dfdfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteDouble(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              *this,double param_1)

{
  char cVar1;
  int iVar2;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  short *psVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  double local_70;
  double local_68;
  char local_60 [32];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    bVar7 = false;
  }
  else {
    iVar2 = this->maxDecimalPlaces_;
    local_70 = param_1;
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("maxDecimalPlaces >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\dtoa.h"
                           ,0xdd,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_68 = param_1;
    if (ABS(param_1) == 0.0) {
      pcVar10 = local_60;
      if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
        local_60[0] = '-';
        pcVar10 = local_60 + 1;
      }
      pcVar10[0] = '0';
      pcVar10[1] = '.';
      pcVar9 = pcVar10 + 3;
      pcVar10[2] = '0';
    }
    else {
      pcVar9 = local_60;
      dVar6 = param_1;
      if (param_1 < 0.0) {
        local_60[0] = '-';
        dVar6 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
        pcVar9 = local_60 + 1;
      }
      internal::Grisu2(dVar6,pcVar9,&local_74,&local_78);
      pcVar9 = internal::Prettify(pcVar9,local_74,local_78,iVar2);
    }
    this_00 = &this->os_->stack_;
    if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ <
        ((longlong)pcVar9 - (longlong)local_60) * 2) {
      internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
                (this_00,(longlong)pcVar9 - (longlong)local_60);
    }
    for (pcVar10 = local_60; pcVar10 != pcVar9; pcVar10 = pcVar10 + 1) {
      pGVar3 = this->os_;
      cVar1 = *pcVar10;
      if (((pGVar3->stack_).stackTop_ == (char *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("stackTop_",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x82,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((longlong)(pGVar3->stack_).stackEnd_ - (longlong)(pGVar3->stack_).stackTop_ < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                             ,0x83,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      psVar4 = (short *)(pGVar3->stack_).stackTop_;
      (pGVar3->stack_).stackTop_ = (char *)(psVar4 + 1);
      *psVar4 = (short)cVar1;
    }
    bVar7 = true;
  }
  return bVar7;
}

// WriteExponent @ 141dfe200

char * __cdecl rapidjson::internal::WriteExponent(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  if (param_1 < 0) {
    pcVar2 = param_2 + 1;
    *param_2 = '-';
    param_1 = -param_1;
  }
  if (99 < param_1) {
    *pcVar2 = (char)(param_1 / 100) + '0';
    iVar1 = (param_1 % 100) * 2;
    pcVar2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                  cDigitsLut)[iVar1];
    pcVar2[2] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                [iVar1];
    return pcVar2 + 3;
  }
  if (9 < param_1) {
    *pcVar2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                cDigitsLut)[param_1 * 2];
    pcVar2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                [param_1 * 2];
    return pcVar2 + 2;
  }
  *pcVar2 = (char)param_1 + '0';
  return pcVar2 + 1;
}

// WriteIndent @ 141dfeba0

void __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteIndent(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              *this)

{
  wchar_t wVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  
  this_00 = (Stack<UE::Json::Private::FAllocatorImpl> *)this->_padding_;
  wVar1 = this->indentChar_;
  uVar5 = ((ulonglong)(this->_padding_ - this->_padding_) >> 4) * (ulonglong)this->indentCharCount_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ < (longlong)(uVar5 * 2)) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(this_00,uVar5);
  }
  while( true ) {
    if (uVar5 == 0) {
      return;
    }
    if ((this_00->stackTop_ == (char *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar4)) break;
    if (((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pwVar2 = (wchar_t *)this_00->stackTop_;
    this_00->stackTop_ = (char *)(pwVar2 + 1);
    *pwVar2 = wVar1;
    uVar5 = uVar5 - 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// WriteInt64 @ 141dfec80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteInt64(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
             *this,long64 param_1)

{
  char cVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  ulong64 uVar8;
  char *pcVar9;
  undefined1 auStack_58 [32];
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar7 = local_38;
  if (param_1 < 0) {
    local_38[0] = '-';
    pcVar7 = local_38 + 1;
  }
  uVar8 = -param_1;
  if (-1 < param_1) {
    uVar8 = param_1;
  }
  pcVar7 = internal::u64toa(uVar8,pcVar7);
  this_00 = &this->os_->stack_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ <
      ((longlong)pcVar7 - (longlong)local_38) * 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
              (this_00,(longlong)pcVar7 - (longlong)local_38);
  }
  pcVar9 = local_38;
  while( true ) {
    if (pcVar9 == pcVar7) {
      return true;
    }
    pGVar2 = this->os_;
    cVar1 = *pcVar9;
    if (((pGVar2->stack_).stackTop_ == (char *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar5)) break;
    if (((longlong)(pGVar2->stack_).stackEnd_ - (longlong)(pGVar2->stack_).stackTop_ < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    psVar3 = (short *)(pGVar2->stack_).stackTop_;
    pcVar9 = pcVar9 + 1;
    (pGVar2->stack_).stackTop_ = (char *)(psVar3 + 1);
    *psVar3 = (short)cVar1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// WriteInt @ 141dfedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteInt(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
           *this,int param_1)

{
  char cVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 auStack_58 [32];
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar7 = local_38;
  if (param_1 < 0) {
    local_38[0] = '-';
    pcVar7 = local_38 + 1;
  }
  uVar8 = -param_1;
  if (-1 < param_1) {
    uVar8 = param_1;
  }
  pcVar7 = internal::u32toa(uVar8,pcVar7);
  this_00 = &this->os_->stack_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ <
      ((longlong)pcVar7 - (longlong)local_38) * 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
              (this_00,(longlong)pcVar7 - (longlong)local_38);
  }
  pcVar9 = local_38;
  while( true ) {
    if (pcVar9 == pcVar7) {
      return true;
    }
    pGVar2 = this->os_;
    cVar1 = *pcVar9;
    if (((pGVar2->stack_).stackTop_ == (char *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar5)) break;
    if (((longlong)(pGVar2->stack_).stackEnd_ - (longlong)(pGVar2->stack_).stackTop_ < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    psVar3 = (short *)(pGVar2->stack_).stackTop_;
    pcVar9 = pcVar9 + 1;
    (pGVar2->stack_).stackTop_ = (char *)(psVar3 + 1);
    *psVar3 = (short)cVar1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// WriteNull @ 141dfef00

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteNull(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            *this)

{
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  
  this_00 = &this->os_->stack_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ < 8) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(this_00,4);
  }
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'n');
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'u');
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'l');
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'l');
  return true;
}

// WriteString @ 141e00fe0

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteString(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  wchar_t wVar3;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar4;
  char *pcVar5;
  short *psVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  longlong lVar11;
  
  this_00 = &this->os_->stack_;
  uVar1 = param_2 * 6 + 2;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ < (longlong)((ulonglong)uVar1 * 2)
     ) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>(this_00,(ulonglong)uVar1);
  }
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'\"');
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      wVar3 = *param_1;
      if ((ushort)wVar3 < 0x100) {
        bVar10 = (byte)wVar3;
        if ("uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar10] == '\0') goto LAB_141e011ca;
        pGVar4 = this->os_;
        if (((pGVar4->stack_).stackTop_ == (char *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("stackTop_",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x82,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((longlong)(pGVar4->stack_).stackEnd_ - (longlong)(pGVar4->stack_).stackTop_ < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x83,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pcVar5 = (pGVar4->stack_).stackTop_;
        (pGVar4->stack_).stackTop_ = pcVar5 + 2;
        pcVar5[0] = '\\';
        pcVar5[1] = '\0';
        pGVar4 = this->os_;
        cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar10];
        if (((pGVar4->stack_).stackTop_ == (char *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("stackTop_",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x82,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((longlong)(pGVar4->stack_).stackEnd_ - (longlong)(pGVar4->stack_).stackTop_ < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                               ,0x83,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        psVar6 = (short *)(pGVar4->stack_).stackTop_;
        (pGVar4->stack_).stackTop_ = (char *)(psVar6 + 1);
        *psVar6 = (short)cVar2;
        if ("uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar10] == 'u') {
          PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'0');
          PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'0');
          PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    (this->os_,L"0123456789ABCDEF"[bVar10 >> 4]);
          PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    (this->os_,L"0123456789ABCDEF"[bVar10 & 0xf]);
        }
      }
      else {
LAB_141e011ca:
        PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,wVar3);
      }
      lVar11 = lVar11 + 2;
      param_1 = param_1 + 1;
    } while ((ulonglong)(lVar11 >> 1) < (ulonglong)param_2);
  }
  PutUnsafe<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(this->os_,L'\"');
  return true;
}

// WriteUint64 @ 141e01f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteUint64(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
              *this,ulong64 param_1)

{
  char cVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_58 [32];
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar7 = internal::u64toa(param_1,local_38);
  this_00 = &this->os_->stack_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ <
      ((longlong)pcVar7 - (longlong)local_38) * 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
              (this_00,(longlong)pcVar7 - (longlong)local_38);
  }
  pcVar8 = local_38;
  while( true ) {
    if (pcVar8 == pcVar7) {
      return true;
    }
    pGVar2 = this->os_;
    cVar1 = *pcVar8;
    if (((pGVar2->stack_).stackTop_ == (char *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar5)) break;
    if (((longlong)(pGVar2->stack_).stackEnd_ - (longlong)(pGVar2->stack_).stackTop_ < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    psVar3 = (short *)(pGVar2->stack_).stackTop_;
    pcVar8 = pcVar8 + 1;
    (pGVar2->stack_).stackTop_ = (char *)(psVar3 + 1);
    *psVar3 = (short)cVar1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// WriteUint @ 141e02040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
::WriteUint(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
            *this,uint param_1)

{
  char cVar1;
  Stack<UE::Json::Private::FAllocatorImpl> *this_00;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_58 [32];
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar7 = internal::u32toa(param_1,local_38);
  this_00 = &this->os_->stack_;
  if ((longlong)this_00->stackEnd_ - (longlong)this_00->stackTop_ <
      ((longlong)pcVar7 - (longlong)local_38) * 2) {
    internal::Stack<UE::Json::Private::FAllocatorImpl>::Expand<wchar_t>
              (this_00,(longlong)pcVar7 - (longlong)local_38);
  }
  pcVar8 = local_38;
  while( true ) {
    if (pcVar8 == pcVar7) {
      return true;
    }
    pGVar2 = this->os_;
    cVar1 = *pcVar8;
    if (((pGVar2->stack_).stackTop_ == (char *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("stackTop_",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x82,L""), bVar5)) break;
    if (((longlong)(pGVar2->stack_).stackEnd_ - (longlong)(pGVar2->stack_).stackTop_ < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<std::ptrdiff_t>(sizeof(T) * count) <= (stackEnd_ - stackTop_)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\stack.h"
                           ,0x83,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    psVar3 = (short *)(pGVar2->stack_).stackTop_;
    pcVar8 = pcVar8 + 1;
    (pGVar2->stack_).stackTop_ = (char *)(psVar3 + 1);
    *psVar3 = (short)cVar1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// u32toa @ 141e026c0

char * __cdecl rapidjson::internal::u32toa(uint param_1,char *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 == (char *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("buffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\itoa.h"
                       ,0x28,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pcVar7 = (char *)(*pcVar1)();
      return pcVar7;
    }
  }
  if (9999 < param_1) {
    if (99999999 < param_1) {
      pcVar7 = param_2 + 1;
      uVar10 = (uint)((ulonglong)param_1 / 100000000);
      uVar11 = param_1 + uVar10 * -100000000;
      if (uVar10 < 10) {
        *param_2 = (char)((ulonglong)param_1 / 100000000) + '0';
      }
      else {
        *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar10 * 2];
        *pcVar7 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar10 * 2 + 1];
        pcVar7 = param_2 + 2;
      }
      uVar2 = (ulonglong)uVar11 / 10000;
      iVar8 = (int)uVar2;
      uVar11 = uVar11 + iVar8 * -10000;
      iVar9 = (int)(uVar2 / 100);
      uVar4 = iVar9 * 2;
      uVar3 = (iVar8 + iVar9 * -100) * 2;
      uVar5 = (uVar11 / 100) * 2;
      *pcVar7 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                  cDigitsLut)[uVar4];
      uVar10 = (uVar11 % 100) * 2;
      pcVar7[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar4 + 1];
      pcVar7[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar3];
      pcVar7[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar3 + 1];
      pcVar7[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar5];
      pcVar7[5] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar5 + 1];
      pcVar7[6] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar10];
      pcVar7[7] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                    cDigitsLut)[uVar10 + 1];
      return pcVar7 + 8;
    }
    iVar8 = (int)((ulonglong)param_1 / 10000);
    uVar11 = param_1 + iVar8 * -10000;
    iVar9 = (int)(((ulonglong)param_1 / 10000) / 100);
    uVar3 = iVar9 * 2;
    uVar10 = (iVar8 + iVar9 * -100) * 2;
    uVar4 = (uVar11 / 100) * 2;
    uVar11 = (uVar11 % 100) * 2;
    if (param_1 < 10000000) {
      if (param_1 < 1000000) {
        if (param_1 < 100000) goto LAB_141e0281c;
      }
      else {
        *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar3 + 1];
        param_2 = param_2 + 1;
      }
    }
    else {
      *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar3];
      param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar3 + 1];
      param_2 = param_2 + 2;
    }
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar10];
    param_2 = param_2 + 1;
LAB_141e0281c:
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar10 + 1];
    param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar4];
    param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar4 + 1];
    param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar11];
    param_2[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar11 + 1];
    return param_2 + 5;
  }
  uVar11 = (param_1 / 100) * 2;
  uVar10 = (param_1 % 100) * 2;
  if (param_1 < 1000) {
    if (param_1 < 100) {
      if (param_1 < 10) goto LAB_141e02766;
    }
    else {
      *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar11 + 1];
      param_2 = param_2 + 1;
    }
  }
  else {
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar11];
    param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar11 + 1];
    param_2 = param_2 + 2;
  }
  *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
               cDigitsLut)[uVar10];
  param_2 = param_2 + 1;
LAB_141e02766:
  *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
               cDigitsLut)[uVar10 + 1];
  return param_2 + 1;
}

// u64toa @ 141e02940

char * __cdecl rapidjson::internal::u64toa(ulong64 param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  
  if ((param_2 == (char *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("buffer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\internal\\itoa.h"
                         ,0x7f,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pcVar10 = (char *)(*pcVar3)();
    return pcVar10;
  }
  uVar13 = (uint)param_1;
  if (99999999 < param_1) {
    if (9999999999999999 < param_1) {
      pcVar10 = param_2 + 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1;
      auVar2 = auVar1 / ZEXT816(10000000000000000);
      auVar1 = auVar1 % ZEXT816(10000000000000000);
      uVar13 = auVar2._0_4_;
      if (uVar13 < 10) {
        *param_2 = auVar2[0] + '0';
      }
      else if (uVar13 < 100) {
        *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar13 * 2];
        *pcVar10 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar13 * 2 + 1];
        pcVar10 = param_2 + 2;
      }
      else {
        uVar14 = (auVar2._0_8_ & 0xffffffff) / 100;
        iVar11 = (int)uVar14;
        uVar4 = (uVar13 + iVar11 * -100) * 2;
        if (uVar13 < 1000) {
          *param_2 = (char)uVar14 + '0';
          *pcVar10 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar4];
          param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar4 + 1];
          pcVar10 = param_2 + 3;
        }
        else {
          uVar13 = iVar11 * 2;
          *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar13];
          *pcVar10 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar13 + 1];
          param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar4];
          param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar4 + 1];
          pcVar10 = param_2 + 4;
        }
      }
      uVar14 = auVar1._0_8_ / 100000000;
      iVar15 = (int)uVar14;
      uVar13 = auVar1._0_4_ + iVar15 * -100000000;
      uVar14 = uVar14 / 10000;
      iVar11 = (int)uVar14;
      uVar12 = iVar15 + iVar11 * -10000;
      iVar15 = (int)(uVar14 / 100);
      uVar5 = iVar15 * 2;
      uVar4 = (iVar11 + iVar15 * -100) * 2;
      uVar6 = (uVar12 / 100) * 2;
      uVar12 = (uVar12 % 100) * 2;
      uVar14 = (ulonglong)uVar13 / 10000;
      iVar11 = (int)uVar14;
      uVar13 = uVar13 + iVar11 * -10000;
      iVar15 = (int)(uVar14 / 100);
      uVar7 = iVar15 * 2;
      uVar16 = (iVar11 + iVar15 * -100) * 2;
      uVar8 = (uVar13 / 100) * 2;
      *pcVar10 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar5];
      uVar13 = (uVar13 % 100) * 2;
      pcVar10[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar5 + 1];
      pcVar10[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar4];
      pcVar10[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar4 + 1];
      pcVar10[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar6];
      pcVar10[5] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar6 + 1];
      pcVar10[6] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar12];
      pcVar10[7] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar12 + 1];
      pcVar10[8] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar7];
      pcVar10[9] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar7 + 1];
      pcVar10[10] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                      cDigitsLut)[uVar16];
      pcVar10[0xb] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar16 + 1];
      pcVar10[0xc] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar8];
      pcVar10[0xd] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar8 + 1];
      pcVar10[0xe] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar13];
      pcVar10[0xf] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar13 + 1];
      return pcVar10 + 0x10;
    }
    iVar11 = (int)(param_1 / 100000000);
    uVar13 = uVar13 + iVar11 * -100000000;
    uVar14 = (param_1 / 100000000 & 0xffffffff) / 10000;
    iVar15 = (int)uVar14;
    uVar12 = iVar11 + iVar15 * -10000;
    iVar11 = (int)(uVar14 / 100);
    uVar5 = iVar11 * 2;
    uVar4 = (iVar15 + iVar11 * -100) * 2;
    uVar6 = (uVar12 / 100) * 2;
    uVar12 = (uVar12 % 100) * 2;
    uVar16 = uVar13 / 10000;
    uVar13 = uVar13 % 10000;
    uVar7 = (uVar16 / 100) * 2;
    uVar16 = (uVar16 % 100) * 2;
    uVar8 = (uVar13 / 100) * 2;
    uVar13 = (uVar13 % 100) * 2;
    if (param_1 < 1000000000000000) {
      if (param_1 < 100000000000000) {
        if (param_1 < 10000000000000) {
          if (param_1 < 1000000000000) {
            if (param_1 < 100000000000) {
              if (param_1 < 10000000000) {
                if (param_1 < 1000000000) goto LAB_141e02d25;
              }
              else {
                *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::
                             __l2::cDigitsLut)[uVar6 + 1];
                param_2 = param_2 + 1;
              }
            }
            else {
              *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::
                           __l2::cDigitsLut)[uVar6];
              param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::
                             __l2::cDigitsLut)[uVar6 + 1];
              param_2 = param_2 + 2;
            }
          }
          else {
            *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar4 + 1];
            param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::
                           __l2::cDigitsLut)[uVar6];
            param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::
                           __l2::cDigitsLut)[uVar6 + 1];
            param_2 = param_2 + 3;
          }
        }
        else {
          *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar4];
          param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar4 + 1];
          param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar6];
          param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2
                         ::cDigitsLut)[uVar6 + 1];
          param_2 = param_2 + 4;
        }
      }
      else {
        *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar5 + 1];
        param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar4];
        param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar4 + 1];
        param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar6];
        param_2[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                       cDigitsLut)[uVar6 + 1];
        param_2 = param_2 + 5;
      }
    }
    else {
      *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar5];
      param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar5 + 1];
      param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar4];
      param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar4 + 1];
      param_2[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar6];
      param_2[5] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar6 + 1];
      param_2 = param_2 + 6;
    }
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar12];
    param_2 = param_2 + 1;
LAB_141e02d25:
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar12 + 1];
    param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar7];
    param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar7 + 1];
    param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar16];
    param_2[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar16 + 1];
    param_2[5] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar8];
    param_2[6] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar8 + 1];
    param_2[7] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar13];
    param_2[8] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar13 + 1];
    return param_2 + 9;
  }
  if (9999 < uVar13) {
    uVar14 = (param_1 & 0xffffffff) / 10000;
    iVar11 = (int)uVar14;
    uVar13 = uVar13 + iVar11 * -10000;
    iVar15 = (int)(uVar14 / 100);
    uVar12 = iVar15 * 2;
    uVar4 = (iVar11 + iVar15 * -100) * 2;
    uVar16 = (uVar13 / 100) * 2;
    uVar13 = (uVar13 % 100) * 2;
    if (param_1 < 10000000) {
      if (param_1 < 1000000) {
        if (param_1 < 100000) goto LAB_141e02a9d;
      }
      else {
        *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar12 + 1];
        param_2 = param_2 + 1;
      }
    }
    else {
      *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar12];
      param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                     cDigitsLut)[uVar12 + 1];
      param_2 = param_2 + 2;
    }
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar4];
    param_2 = param_2 + 1;
LAB_141e02a9d:
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar4 + 1];
    param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar16];
    param_2[2] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar16 + 1];
    param_2[3] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar13];
    param_2[4] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar13 + 1];
    return param_2 + 5;
  }
  iVar11 = (int)((param_1 & 0xffffffff) / 100);
  uVar12 = iVar11 * 2;
  uVar4 = (uVar13 + iVar11 * -100) * 2;
  if (uVar13 < 1000) {
    if (uVar13 < 100) {
      if (uVar13 < 10) goto LAB_141e029f3;
    }
    else {
      *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar12 + 1];
      param_2 = param_2 + 1;
    }
  }
  else {
    *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                 cDigitsLut)[uVar12];
    param_2[1] = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
                   cDigitsLut)[uVar12 + 1];
    param_2 = param_2 + 2;
  }
  *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
               cDigitsLut)[uVar4];
  param_2 = param_2 + 1;
LAB_141e029f3:
  *param_2 = (&`char_const*___ptr64___cdecl_rapidjson::internal::GetDigitsLut(void)'::__l2::
               cDigitsLut)[uVar4 + 1];
  return param_2 + 1;
}

// IMPLEMENT_MODULE_Json @ 141e02fa0

void __cdecl IMPLEMENT_MODULE_Json(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 15034cb60

void __cdecl `FJsonValue::AsArray'::__l5::_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)::EmptyArray.AllocatorInstance.Data,::EmptyArray.ArrayNum);
  if (::EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::EmptyArray.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyObject'' @ 15034cba0

void __cdecl `FJsonValue::AsObject'::__l5::_dynamic_atexit_destructor_for__EmptyObject__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (EmptyObject.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'FJsonAutomationTestInstance'' @ 15034cbc0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FJsonAutomationTestInstance__(void)

{
  if (FJsonAutomationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FJsonAutomationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FJsonAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FJsonConversionAutomationTestInstance'' @ 15034cbf0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FJsonConversionAutomationTestInstance__(void)

{
  if (FJsonConversionAutomationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FJsonConversionAutomationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FJsonConversionAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FJsonPointerSpecAutomationSpecInstance'' @ 15034cc20

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FJsonPointerSpecAutomationSpecInstance__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FJsonPointerSpecAutomationSpecInstance.JsonObject.SharedReferenceCount.
             ReferenceController);
  FAutomationSpecBase::~FAutomationSpecBase
            ((FAutomationSpecBase *)&FJsonPointerSpecAutomationSpecInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FJsonSerializerMacrosTestInstance'' @ 15034cc50

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FJsonSerializerMacrosTestInstance__(void)

{
  if (FJsonSerializerMacrosTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FJsonSerializerMacrosTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FJsonSerializerMacrosTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRapidJsonUtilsErrorHandlingTestsInstance'' @ 15034cc80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRapidJsonUtilsErrorHandlingTestsInstance__
          (void)

{
  if (FRapidJsonUtilsErrorHandlingTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRapidJsonUtilsErrorHandlingTestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRapidJsonUtilsErrorHandlingTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRapidJsonUtilsParseEmptyInstance'' @ 15034ccb0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRapidJsonUtilsParseEmptyInstance__(void)

{
  if (FRapidJsonUtilsParseEmptyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRapidJsonUtilsParseEmptyInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRapidJsonUtilsParseEmptyInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRapidJsonUtilsTestsInstance'' @ 15034cce0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRapidJsonUtilsTestsInstance__(void)

{
  if (FRapidJsonUtilsTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRapidJsonUtilsTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FRapidJsonUtilsTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogJson'' @ 15034cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogJson__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogJson);
  return;
}

// `dynamic_atexit_destructor_for_'LogJsonConversion'' @ 15034cd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogJsonConversion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogJsonConversion);
  return;
}

