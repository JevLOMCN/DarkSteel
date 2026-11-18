// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 20

// Call @ 141dcdf30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonPointer FStack_58;
  TSharedPtr<FJsonValue,1> TStack_48;
  wchar_t *pwStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> TStack_28;
  TSharedRef<FJsonValueObject,1> TStack_18;
  
  pwStack_38 = L"#/someNumber";
  uStack_30 = 0xc;
  TStack_28._12_4_ = uStack_2c;
  TStack_28.Size = 0xc;
  TStack_28.DataPtr = L"#/someNumber";
  Json::FJsonPointer::FJsonPointer(&FStack_58,&TStack_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_48.Object = (FJsonValue *)pTVar5->Object;
  TStack_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (FStack_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &TStack_48;
    pTVar8 = pTVar9;
    if (0 < FStack_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < FStack_58.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc7284;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_58.PathParts.ArrayNum);
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
            (TStack_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar3);
  if (bVar3) {
    this = *(FAutomationTestBase **)param_1;
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
    FAutomationTestBase::TestEqual(this,L"Value equals 42",(int)dVar2,0x2a);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_58.PathParts.AllocatorInstance.Data,FStack_58.PathParts.ArrayNum);
  if (FStack_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dcdf40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonPointer FStack_58;
  TSharedPtr<FJsonValue,1> TStack_48;
  wchar_t *pwStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> TStack_28;
  TSharedRef<FJsonValueObject,1> TStack_18;
  
  pwStack_38 = L"#/someArray/2";
  uStack_30 = 0xd;
  TStack_28._12_4_ = uStack_2c;
  TStack_28.Size = 0xd;
  TStack_28.DataPtr = L"#/someArray/2";
  Json::FJsonPointer::FJsonPointer(&FStack_58,&TStack_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_48.Object = (FJsonValue *)pTVar5->Object;
  TStack_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (FStack_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &TStack_48;
    pTVar8 = pTVar9;
    if (0 < FStack_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < FStack_58.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc7494;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_58.PathParts.ArrayNum);
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
            (TStack_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar3);
  if (bVar3) {
    this = *(FAutomationTestBase **)param_1;
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
    FAutomationTestBase::TestEqual(this,L"Value equals 22",(int)dVar2,0x16);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_58.PathParts.AllocatorInstance.Data,FStack_58.PathParts.ArrayNum);
  if (FStack_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dcdf50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TJsonStringReader<wchar_t> *this;
  undefined8 *puVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> TStackX_8;
  FString FStack_38;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TJsonStringReader<wchar_t>,1> TStack_18;
  
  lVar1 = *(longlong *)param_1;
  pTVar3 = (TJsonStringReader<wchar_t> *)0x0;
  puVar2 = (undefined8 *)(lVar1 + 0x198);
  uStack_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &uStack_28) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x1a0),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  ::FString::FString(&FStack_38,
                     L"\n\t\t\t\t{\n\t\t\t\t    \"0\": \"foo\",\n\t\t\t\t\t\"nested\": {\n\t\t\t\t\t\t\"1\": \"bar\"\n\t\t\t\t\t},\n\t\t\t\t\t\"2\": {\n\t\t\t\t\t\t\"bla\": false\n\t\t\t\t\t},\n\t\t\t\t\t\"someArray\": [\n\t\t\t\t\t{\n\t\t\t\t\t\t\"Foo\": \"foo\",\n\t\t\t\t\t\t\"Bar\": \"bar\"\n\t\t\t\t\t}]\n\t\t\t\t}"
                    );
  this = ::operator_new(0x88);
  if (this != (TJsonStringReader<wchar_t> *)0x0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 1;
    *(undefined2 *)&this->_padding_ = 0;
    this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this->Content).Data.AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Content).Data.ArrayNum = FStack_38.Data.ArrayNum;
    (this->Content).Data.ArrayMax = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    (this->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this);
    pTVar3 = this;
  }
  TStackX_8.Object = pTVar3;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&TStack_18,&TStackX_8);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
            ((TSharedRef<TJsonReader<wchar_t>,1> *)&TStack_18,
             (TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198),None);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 141dcdf60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  FString *this_00;
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  ::FString::FString(&FStack_38,L"Some~part/with~escapable//Characters");
  this_00 = ::FString::Replace(&FStack_38,&FStack_18,L"~",L"~0",IgnoreCase);
  ::FString::Replace(this_00,&FStack_28,L"/",L"~1",IgnoreCase);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_38,L"Some~0part~1with~0escapable~1~1Characters");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (FStack_28.Data.ArrayNum != 0) {
    FVar1.Data = FStack_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this,L"\"~\" and \"/\" are replaced with \"~0\" and \"~1\" respectively",
             (wchar_t *)FVar1.Data,(wchar_t *)FVar2.Data);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dcdf70

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  TJsonStringReader<wchar_t> *this;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> TStackX_8;
  FString FStack_28;
  TSharedRef<TJsonStringReader<wchar_t>,1> TStack_18;
  
  ::FString::FString(&FStack_28,
                     L"\n\t\t{\n\t\t    \"someNumber\": 42,\n\t\t\t\"someObject\": {\n\t\t\t\t\"someNestedNumber\": 24\n\t\t\t},\n\t\t\t\"someArray\": [\n\t\t\t\t5,\n\t\t\t\t3,\n\t\t\t\t22,\n\t\t\t\t2,\n\t\t\t\t44\n\t\t\t]\n\t\t}"
                    );
  this = ::operator_new(0x88);
  TStackX_8.Object = (TJsonStringReader<wchar_t> *)0x0;
  if (this != (TJsonStringReader<wchar_t> *)0x0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 1;
    *(undefined2 *)&this->_padding_ = 0;
    this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this->Content).Data.AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Content).Data.ArrayNum = FStack_28.Data.ArrayNum;
    (this->Content).Data.ArrayMax = FStack_28.Data.ArrayMax;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
    (this->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this);
    TStackX_8.Object = this;
  }
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&TStack_18,&TStackX_8);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
            ((TSharedRef<TJsonReader<wchar_t>,1> *)&TStack_18,
             (TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198),None);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 141dcdf80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAutomationSpecBase::Describe'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000141dcdfbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 141dcdfd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonPointer FStack_58;
  TSharedPtr<FJsonValue,1> TStack_48;
  wchar_t *pwStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> TStack_28;
  TSharedRef<FJsonValueObject,1> TStack_18;
  
  pwStack_38 = L"#/someObject/someNestedNumber";
  uStack_30 = 0x1d;
  TStack_28._12_4_ = uStack_2c;
  TStack_28.Size = 0x1d;
  TStack_28.DataPtr = L"#/someObject/someNestedNumber";
  Json::FJsonPointer::FJsonPointer(&FStack_58,&TStack_28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_18,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_48.Object = (FJsonValue *)pTVar5->Object;
  TStack_48.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar9;
  if (FStack_58.PathParts.ArrayNum < 1) {
    bVar3 = false;
  }
  else {
    pTVar6 = &TStack_48;
    pTVar8 = pTVar9;
    if (0 < FStack_58.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar4 = 0;
        if ((int)uVar7 < FStack_58.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_58.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar3 = false;
          goto LAB_141dc9ae4;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_58.PathParts.ArrayNum);
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
            (TStack_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar3);
  if (bVar3) {
    this = *(FAutomationTestBase **)param_1;
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
    FAutomationTestBase::TestEqual(this,L"Value equals 42",(int)dVar2,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_58.PathParts.AllocatorInstance.Data,FStack_58.PathParts.ArrayNum);
  if (FStack_58.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dcdfe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer FStack_68;
  TSharedPtr<FJsonValue,1> TStack_58;
  wchar_t *pwStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  FString FStack_18;
  TReferenceControllerBase<1> *pTVar8;
  
  pwStack_48 = L"#/someArray/5";
  uStack_40 = 0xd;
  TStack_38._12_4_ = uStack_3c;
  TStack_38.Size = 0xd;
  TStack_38.DataPtr = L"#/someArray/5";
  Json::FJsonPointer::FJsonPointer(&FStack_68,&TStack_38);
  this = *(FAutomationTestBase **)param_1;
  pFVar4 = ::FString::FString(&FStack_18,L"out of range");
  FAutomationTestBase::AddExpectedError(this,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_58.Object = (FJsonValue *)pTVar5->Object;
  TStack_58.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_68.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &TStack_58;
    pTVar8 = pTVar9;
    if (0 < FStack_68.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < FStack_68.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_68.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dc9d21;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_68.PathParts.ArrayNum);
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
            (TStack_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)param_1,L"Value is not found",bVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_68.PathParts.AllocatorInstance.Data,FStack_68.PathParts.ArrayNum);
  if (FStack_68.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dcdff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonValue *this_00;
  wchar_t *pwStack_98;
  undefined8 uStack_90;
  FJsonPointer FStack_88;
  TSharedPtr<FJsonValue,1> TStack_78;
  FString FStack_68;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString FStack_48;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  
  uStack_50 = 3;
  pwStack_58 = L"#/0";
  TStack_38._12_4_ = uStack_4c;
  TStack_38.Size = 3;
  TStack_38.DataPtr = L"#/0";
  Json::FJsonPointer::FJsonPointer(&FStack_88,&TStack_38);
  this_00 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_78.Object = (FJsonValue *)pTVar5->Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_88.PathParts.ArrayNum < 1) {
LAB_141dc9e2a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &TStack_78;
    if (0 < FStack_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < FStack_88.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dc9e2a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < FStack_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_00 = pTVar6->Object;
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
            (TStack_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&FStack_68,L"foo");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar2);
  if (bVar2) {
    this = *(FAutomationTestBase **)param_1;
    if ((this_00 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwStack_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    cVar3 = (**(code **)(this_00->_padding_ + 0x58))(this_00,&pwStack_98);
    if (cVar3 == '\0') {
      ::FString::FString(&FStack_48,L"String");
      FJsonValue::ErrorMessage(this_00,&FStack_48);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_68.Data.ArrayNum != 0) {
      FVar10.Data = FStack_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)uStack_90 != 0) {
      pwVar8 = pwStack_98;
    }
    FAutomationTestBase::TestEqual(this,L"Value equals \"foo\"",pwVar8,(wchar_t *)FVar10.Data);
    if (pwStack_98 != (wchar_t *)0x0) {
      FMemory::Free(pwStack_98);
    }
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_88.PathParts.AllocatorInstance.Data,FStack_88.PathParts.ArrayNum);
  if (FStack_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  FString *this_00;
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  ::FString::FString(&FStack_38,L"Some~0part~1with~0escapable~1~1Characters");
  this_00 = ::FString::Replace(&FStack_38,&FStack_18,L"~1",L"/",IgnoreCase);
  ::FString::Replace(this_00,&FStack_28,L"~0",L"~",IgnoreCase);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_38,L"Some~part/with~escapable//Characters");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (FStack_28.Data.ArrayNum != 0) {
    FVar1.Data = FStack_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (this,L"\"~0\" and \"~1\" are replaced with \"~\" and \"/\" respectively",
             (wchar_t *)FVar1.Data,(wchar_t *)FVar2.Data);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce010

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_2>,void>::
Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Existing value is found and returned");
  FStack_68.Impl._Line = 0x27;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  FStack_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Existing nested value is found and returned");
  FStack_68.Impl._Line = 0x36;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Non-existent value logs a warning");
  FStack_68.Impl._Line = 0x45;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,
                     L"Values with numeric field names are distinguised from array values");
  FAutomationSpecBase::Describe(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FJsonValue *this;
  bool bVar6;
  uint uVar7;
  TJsonStringReader<wchar_t> *this_00;
  wchar_t *_Str;
  uint uVar8;
  TJsonStringReader<wchar_t> *pTVar9;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> TStackX_8;
  ForAnyElementType FStack_d8;
  undefined8 uStack_d0;
  FString FStack_c8;
  FJsonPointer FStack_b8;
  StackState SStack_a8;
  TSharedPtr<FJsonValue,1> TStack_70;
  TSharedRef<TJsonStringReader<wchar_t>,1> TStack_60;
  wchar_t *pwStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> TStack_38;
  
  pTVar9 = (TJsonStringReader<wchar_t> *)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  uStack_d0 = 0;
  ::FString::FString(&FStack_c8,L"[ 5, 9, 7, 2 ]");
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
    (this_00->Content).Data.AllocatorInstance.Data = FStack_c8.Data.AllocatorInstance.Data;
    FStack_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Content).Data.ArrayNum = FStack_c8.Data.ArrayNum;
    (this_00->Content).Data.ArrayMax = FStack_c8.Data.ArrayMax;
    FStack_c8.Data.ArrayNum = 0;
    FStack_c8.Data.ArrayMax = 0;
    (this_00->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_00);
    pTVar9 = this_00;
  }
  TStackX_8.Object = pTVar9;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&TStack_60,&TStackX_8);
  if (TStack_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_60.SharedReferenceCount.ReferenceController);
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationTestBase **)param_1;
  SStack_a8.Object.Object = (FJsonObject *)0x0;
  SStack_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SStack_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SStack_a8.Identifier.Data.ArrayNum = 0;
  SStack_a8.Identifier.Data.ArrayMax = 0;
  SStack_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SStack_a8.Array.ArrayNum = 0;
  SStack_a8.Array.ArrayMax = 0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)TStack_60.Object,&SStack_a8,None);
  if (bVar6) {
    if (SStack_a8.Type == Array) {
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)FStack_d8.Data,(int)uStack_d0);
      FVar4.Data = SStack_a8.Array.AllocatorInstance.Data;
      iVar5 = SStack_a8.Array.ArrayNum;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,SStack_a8.Array.ArrayNum);
      if ((SStack_a8.Array.ArrayNum != 0) || (uStack_d0._4_4_ != 0)) {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,SStack_a8.Array.ArrayNum,uStack_d0._4_4_,&FStack_d8,
                   SStack_a8.Array.ArrayNum,(int *)((longlong)&uStack_d0 + 4));
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (FStack_d8.Data,(TSharedPtr<FJsonValue,1> *)FVar4.Data,iVar5);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (SStack_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)SStack_a8.Array.AllocatorInstance.Data,
               SStack_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)SStack_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(SStack_a8.Array.AllocatorInstance.Data);
    }
    if (SStack_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(SStack_a8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (SStack_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)SStack_a8.Array.AllocatorInstance.Data,
               SStack_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)SStack_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(SStack_a8.Array.AllocatorInstance.Data);
    }
    if (SStack_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(SStack_a8.Identifier.Data.AllocatorInstance.Data);
    }
    bVar6 = false;
  }
  bVar6 = FAutomationTestBase::TestTrue(pFVar1,L"Deserialized when root is array",bVar6);
  if (!bVar6) goto LAB_141dca735;
  uStack_40 = 3;
  pwStack_48 = L"#/2";
  TStack_38._12_4_ = uStack_3c;
  TStack_38.Size = 3;
  TStack_38.DataPtr = L"#/2";
  Json::FJsonPointer::FJsonPointer(&FStack_b8,&TStack_38);
  FVar4.Data = FStack_b8.PathParts.AllocatorInstance.Data;
  TStack_70.Object = (FJsonValue *)0x0;
  TStack_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (FStack_b8.PathParts.ArrayNum < 1) {
LAB_141dca69e:
    bVar6 = false;
  }
  else {
    bVar6 = ::FString::IsNumeric((FString *)FStack_b8.PathParts.AllocatorInstance.Data);
    if (!bVar6) {
      if (2 < (byte)LogJson._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
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
    if (((int)uVar7 < 0) || ((int)uStack_d0 <= (int)uVar7)) {
      if (2 < (byte)LogJson._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      }
      goto LAB_141dca69e;
    }
    uVar8 = 0;
    if ((int)uVar7 < (int)uStack_d0) {
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
    bVar6 = Json::FJsonPointer::TryGet
                      (&FStack_b8,
                       (TSharedPtr<FJsonValue,1> *)(FStack_d8.Data + (longlong)(int)uVar7 * 0x10),
                       &TStack_70);
  }
  bVar6 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar6);
  this = TStack_70.Object;
  if (bVar6) {
    pFVar1 = *(FAutomationTestBase **)param_1;
    if ((TStack_70.Object == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar3 = FJsonValue::AsNumber(this);
    FAutomationTestBase::TestEqual(pFVar1,L"Value equals 7",(int)dVar3,7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_70.SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)FStack_b8.PathParts.AllocatorInstance.Data,FStack_b8.PathParts.ArrayNum);
  if (FStack_b8.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.PathParts.AllocatorInstance.Data);
  }
LAB_141dca735:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)FStack_d8.Data,(int)uStack_d0);
  if ((TSharedPtr<FJsonValue,1> *)FStack_d8.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  return;
}

// Call @ 141dce030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer FStack_68;
  TSharedPtr<FJsonValue,1> TStack_58;
  wchar_t *pwStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  FString FStack_18;
  TReferenceControllerBase<1> *pTVar8;
  
  pwStack_48 = L"#/foo/doesnt/exist";
  uStack_40 = 0x12;
  TStack_38._12_4_ = uStack_3c;
  TStack_38.Size = 0x12;
  TStack_38.DataPtr = L"#/foo/doesnt/exist";
  Json::FJsonPointer::FJsonPointer(&FStack_68,&TStack_38);
  this = *(FAutomationTestBase **)param_1;
  pFVar4 = ::FString::FString(&FStack_18,L"not found");
  FAutomationTestBase::AddExpectedError(this,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_58.Object = (FJsonValue *)pTVar5->Object;
  TStack_58.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_68.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &TStack_58;
    pTVar8 = pTVar9;
    if (0 < FStack_68.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < FStack_68.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_68.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dca901;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_68.PathParts.ArrayNum);
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
            (TStack_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)param_1,L"Value is not found",bVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_68.PathParts.AllocatorInstance.Data,FStack_68.PathParts.ArrayNum);
  if (FStack_68.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonValue *this_00;
  wchar_t *pwStack_98;
  undefined8 uStack_90;
  FJsonPointer FStack_88;
  TSharedPtr<FJsonValue,1> TStack_78;
  FString FStack_68;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString FStack_48;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  
  uStack_50 = 10;
  pwStack_58 = L"#/nested/1";
  TStack_38._12_4_ = uStack_4c;
  TStack_38.Size = 10;
  TStack_38.DataPtr = L"#/nested/1";
  Json::FJsonPointer::FJsonPointer(&FStack_88,&TStack_38);
  this_00 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_78.Object = (FJsonValue *)pTVar5->Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_88.PathParts.ArrayNum < 1) {
LAB_141dcaa0a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &TStack_78;
    if (0 < FStack_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < FStack_88.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcaa0a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < FStack_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_00 = pTVar6->Object;
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
            (TStack_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&FStack_68,L"bar");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar2);
  if (bVar2) {
    this = *(FAutomationTestBase **)param_1;
    if ((this_00 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwStack_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    cVar3 = (**(code **)(this_00->_padding_ + 0x58))(this_00,&pwStack_98);
    if (cVar3 == '\0') {
      ::FString::FString(&FStack_48,L"String");
      FJsonValue::ErrorMessage(this_00,&FStack_48);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_68.Data.ArrayNum != 0) {
      FVar10.Data = FStack_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)uStack_90 != 0) {
      pwVar8 = pwStack_98;
    }
    FAutomationTestBase::TestEqual(this,L"Value equals \"bar\"",pwVar8,(wchar_t *)FVar10.Data);
    if (pwStack_98 != (wchar_t *)0x0) {
      FMemory::Free(pwStack_98);
    }
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_88.PathParts.AllocatorInstance.Data,FStack_88.PathParts.ArrayNum);
  if (FStack_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce050

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_3>,void>::
Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Existing value is found and returned at index 2");
  FStack_68.Impl._Line = 0xac;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FStack_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Out of range index 5 logs a warning");
  FStack_68.Impl._Line = 0xbb;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Existing value in root is found and returned at index 2");
  FStack_68.Impl._Line = 200;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Path part immediately following an array field must be an index");
  FStack_68.Impl._Line = 0xdf;
  FStack_68.Impl._Column = 3;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedRef<FJsonValueObject,1> *pTVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  uint uVar8;
  TReferenceControllerBase<1> *this;
  char acStackX_8 [8];
  FJsonPointer FStack_88;
  TSharedPtr<FJsonValue,1> TStack_78;
  wchar_t *pwStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FString FStack_58;
  FString FStack_48;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  TReferenceControllerBase<1> *pTVar9;
  
  uStack_60 = 7;
  pwStack_68 = L"#/2/bla";
  TStack_38._12_4_ = uStack_5c;
  TStack_38.Size = 7;
  TStack_38.DataPtr = L"#/2/bla";
  Json::FJsonPointer::FJsonPointer(&FStack_88,&TStack_38);
  this = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_78.Object = (FJsonValue *)pTVar6->Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_88.PathParts.ArrayNum < 1) {
LAB_141dcaeca:
    bVar3 = false;
    pTVar9 = this;
  }
  else {
    pTVar7 = &TStack_78;
    pTVar9 = this;
    if (0 < FStack_88.PathParts.ArrayNum) {
      do {
        uVar8 = (uint)pTVar9;
        uVar5 = 0;
        if ((int)uVar8 < FStack_88.PathParts.ArrayNum) {
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
        pTVar7 = Json::FindPartInJsonValue
                           (pTVar7,(FString *)
                                   (FStack_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar8 * 0x10));
        if (pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcaeca;
        pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < FStack_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    this = (TReferenceControllerBase<1> *)pTVar7->Object;
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
            (TStack_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  bVar3 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar3);
  if (bVar3) {
    plVar1 = *(longlong **)param_1;
    if ((this == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    acStackX_8[0] = '\0';
    cVar4 = (**(code **)(this->_padding_ + 0x68))(this,acStackX_8);
    if (cVar4 == '\0') {
      ::FString::FString(&FStack_58,L"Boolean");
      FJsonValue::ErrorMessage((FJsonValue *)this,&FStack_58);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
    }
    if (acStackX_8[0] != '\0') {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      ::FString::PrintfImpl(&FStack_48,L"%s: The two values are not equal.");
      (*pcVar2)(plVar1,&FStack_48,0);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_88.PathParts.AllocatorInstance.Data,FStack_88.PathParts.ArrayNum);
  if (FStack_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_88;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  FAutomationSpecBase *pFStack_60;
  undefined8 uStack_50;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFStack_60 = *(FAutomationSpecBase **)param_1;
  ppuStack_68 = &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_50 = 0;
  auStack_78._0_8_ =
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  FAutomationSpecBase::BeforeEach(pFStack_60,(TFunction<void___cdecl(void)> *)auStack_78);
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_88,
                     L"Existing value with numeric field name \"0\" is found and returned as a value, rather than an item in an array"
                    );
  auStack_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  ppuStack_68 = (undefined **)0x1507a97f0;
  auStack_78._0_8_ = 0x40000006c;
  FAutomationSpecBase::It
            (pFVar1,&FStack_88,(TFunction<void___cdecl(void)> *)apcStack_48,
             (FSourceLocation *)auStack_78);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_88,
                     L"Existing nested value with numeric field name \"1\" is found and returned as a value, rather than an item in an array"
                    );
  auStack_78._0_8_ = 0x40000007b;
  auStack_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  ppuStack_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&FStack_88,(TFunction<void___cdecl(void)> *)apcStack_48,
             (FSourceLocation *)auStack_78);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_88,
                     L"Existing nested value where the parent has a numeric field name \"2\" is found and returned"
                    );
  auStack_78._0_8_ = 0x40000008a;
  auStack_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  ppuStack_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&FStack_88,(TFunction<void___cdecl(void)> *)apcStack_48,
             (FSourceLocation *)auStack_78);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_5>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_88,
                     L"Existing value within an object, within an array is found and returned");
  auStack_78._0_8_ = 0x400000099;
  auStack_78._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  ppuStack_68 = (undefined **)0x1507a97f0;
  FAutomationSpecBase::It
            (pFVar1,&FStack_88,(TFunction<void___cdecl(void)> *)apcStack_48,
             (FSourceLocation *)auStack_78);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  TSharedRef<FJsonValueObject,1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar9;
  FJsonPointer FStack_78;
  TSharedPtr<FJsonValue,1> TStack_68;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> TStack_48;
  TSharedRef<FJsonValueObject,1> TStack_38;
  FString FStack_28;
  FString FStack_18;
  TReferenceControllerBase<1> *pTVar8;
  
  pwStack_58 = L"#/someArray/Bar";
  uStack_50 = 0xf;
  TStack_48._12_4_ = uStack_4c;
  TStack_48.Size = 0xf;
  TStack_48.DataPtr = L"#/someArray/Bar";
  Json::FJsonPointer::FJsonPointer(&FStack_78,&TStack_48);
  this = *(FAutomationTestBase **)param_1;
  pFVar4 = ::FString::FString(&FStack_18,L"expected a numeric part");
  FAutomationTestBase::AddExpectedError(this,pFVar4,Contains,1,true);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_38,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_68.Object = (FJsonValue *)pTVar5->Object;
  TStack_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_78.PathParts.ArrayNum < 1) {
    bVar2 = false;
  }
  else {
    pTVar6 = &TStack_68;
    pTVar8 = pTVar9;
    if (0 < FStack_78.PathParts.ArrayNum) {
      do {
        uVar7 = (uint)pTVar8;
        uVar3 = 0;
        if ((int)uVar7 < FStack_78.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_78.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) {
          bVar2 = false;
          goto LAB_141dcb431;
        }
        pTVar8 = (TReferenceControllerBase<1> *)(ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < FStack_78.PathParts.ArrayNum);
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
            (TStack_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_38.SharedReferenceCount.ReferenceController);
  ::FString::FString(&FStack_28,L"bar");
  FAutomationTestBase::TestFalse(*(FAutomationTestBase **)param_1,L"Value is found",bVar2);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_78.PathParts.AllocatorInstance.Data,FStack_78.PathParts.ArrayNum);
  if (FStack_78.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.PathParts.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce090

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_4>,void>::
Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_68;
  FSourceLocation FStack_58;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Escapes ~ and /");
  FStack_58.Impl._Line = 0xf1;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_4>::operator ()(void) const";
  FStack_58.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&FStack_68,(TFunction<void___cdecl(void)> *)apcStack_38,&FStack_58)
  ;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Unescapes ~ and /");
  FStack_58.Impl._Line = 0xfc;
  FStack_58.Impl._Column = 3;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_4>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&FStack_68,(TFunction<void___cdecl(void)> *)apcStack_38,&FStack_58)
  ;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 141dce0a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_5>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
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
  FJsonValue *this_00;
  wchar_t *pwStack_98;
  undefined8 uStack_90;
  FJsonPointer FStack_88;
  TSharedPtr<FJsonValue,1> TStack_78;
  FString FStack_68;
  wchar_t *pwStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString FStack_48;
  TStringView<wchar_t> TStack_38;
  TSharedRef<FJsonValueObject,1> TStack_28;
  
  uStack_50 = 0x11;
  pwStack_58 = L"#/someArray/0/Bar";
  TStack_38._12_4_ = uStack_4c;
  TStack_38.Size = 0x11;
  TStack_38.DataPtr = L"#/someArray/0/Bar";
  Json::FJsonPointer::FJsonPointer(&FStack_88,&TStack_38);
  this_00 = (FJsonValue *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                     (&TStack_28,(TSharedPtr<FJsonObject,1> *)(*(longlong *)param_1 + 0x198));
  TStack_78.Object = (FJsonValue *)pTVar5->Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_88.PathParts.ArrayNum < 1) {
LAB_141dcb68a:
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    pTVar6 = &TStack_78;
    if (0 < FStack_88.PathParts.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < FStack_88.PathParts.ArrayNum) {
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
        pTVar6 = Json::FindPartInJsonValue
                           (pTVar6,(FString *)
                                   (FStack_88.PathParts.AllocatorInstance.Data +
                                   (longlong)(int)uVar7 * 0x10));
        if (pTVar6 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141dcb68a;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < FStack_88.PathParts.ArrayNum);
    }
    pTVar9 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_00 = pTVar6->Object;
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
            (TStack_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_28.SharedReferenceCount.ReferenceController);
  ::FString::FString(&FStack_68,L"bar");
  bVar2 = FAutomationTestBase::TestTrue(*(FAutomationTestBase **)param_1,L"Value is found",bVar2);
  if (bVar2) {
    this = *(FAutomationTestBase **)param_1;
    if ((this_00 == (FJsonValue *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pwStack_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    cVar3 = (**(code **)(this_00->_padding_ + 0x58))(this_00,&pwStack_98);
    if (cVar3 == '\0') {
      ::FString::FString(&FStack_48,L"String");
      FJsonValue::ErrorMessage(this_00,&FStack_48);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_68.Data.ArrayNum != 0) {
      FVar10.Data = FStack_68.Data.AllocatorInstance.Data;
    }
    pwVar8 = L"";
    if ((int)uStack_90 != 0) {
      pwVar8 = pwStack_98;
    }
    FAutomationTestBase::TestEqual(this,L"Value equals false",pwVar8,(wchar_t *)FVar10.Data);
    if (pwStack_98 != (wchar_t *)0x0) {
      FMemory::Free(pwStack_98);
    }
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<FString,int>
            ((FString *)FStack_88.PathParts.AllocatorInstance.Data,FStack_88.PathParts.ArrayNum);
  if (FStack_88.PathParts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.PathParts.AllocatorInstance.Data);
  }
  return;
}

