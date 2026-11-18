// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 9

// GetTestFlags @ 141da0b60

EAutomationTestFlags __thiscall FJsonPointerSpec::GetTestFlags(FJsonPointerSpec *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 141da0b70

FString * __thiscall
FJsonPointerSpec::GetTestSourceFileName(FJsonPointerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141da0ba0

int __thiscall FJsonPointerSpec::GetTestSourceFileLine(FJsonPointerSpec *this)

{
  return 10;
}

// GetBeautifiedTestName @ 141da0bb0

FString * __thiscall
FJsonPointerSpec::GetBeautifiedTestName(FJsonPointerSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"JsonPointer");
  return __return_storage_ptr__;
}

// Define @ 141da0be0

void __thiscall FJsonPointerSpec::Define(FJsonPointerSpec *this)

{
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FJsonPointerSpec *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,L"Value");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,L"Array Value");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FJsonPointerSpec::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FJsonPointerSpec::Define'::__l2::<lambda_4>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,L"Syntax");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dc77d0

bool __thiscall `FJsonPointerSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  TJsonStringReader<wchar_t> *this_00;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  FString local_28;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_18;
  
  ::FString::FString(&local_28,
                     L"\n\t\t{\n\t\t    \"someNumber\": 42,\n\t\t\t\"someObject\": {\n\t\t\t\t\"someNestedNumber\": 24\n\t\t\t},\n\t\t\t\"someArray\": [\n\t\t\t\t5,\n\t\t\t\t3,\n\t\t\t\t22,\n\t\t\t\t2,\n\t\t\t\t44\n\t\t\t]\n\t\t}"
                    );
  this_00 = ::operator_new(0x88);
  local_res8.Object = (TJsonStringReader<wchar_t> *)0x0;
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
    (this_00->Content).Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Content).Data.ArrayNum = local_28.Data.ArrayNum;
    (this_00->Content).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    (this_00->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_00);
    local_res8.Object = this_00;
  }
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
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar1 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TSharedRef<TJsonReader<wchar_t>,1> *)&local_18,
                     (TSharedPtr<FJsonObject,1> *)(*(longlong *)this + 0x198),None);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// operator() @ 141dca110

void __thiscall `FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_78;
  FSourceLocation local_68;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Existing value is found and returned");
  local_68.Impl._Line = 0x27;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  local_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Existing nested value is found and returned");
  local_68.Impl._Line = 0x36;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Non-existent value logs a warning");
  local_68.Impl._Line = 0x45;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_2>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Values with numeric field names are distinguised from array values"
                    );
  FAutomationSpecBase::Describe(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcac00

void __thiscall `FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_78;
  FSourceLocation local_68;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Existing value is found and returned at index 2");
  local_68.Impl._Line = 0xac;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  local_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Out of range index 5 logs a warning");
  local_68.Impl._Line = 0xbb;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Existing value in root is found and returned at index 2");
  local_68.Impl._Line = 200;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,L"Path part immediately following an array field must be an index");
  local_68.Impl._Line = 0xdf;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_3>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141dcb4d0

void __thiscall `FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Escapes ~ and /");
  local_58.Impl._Line = 0xf1;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_4>::operator ()(void) const";
  local_58.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&local_68,(TFunction<void___cdecl(void)> *)local_38,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FJsonPointerSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FJsonPointerSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,L"Unescapes ~ and /");
  local_58.Impl._Line = 0xfc;
  local_58.Impl._Column = 3;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\JsonPointer.spec.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl FJsonPointerSpec::Define::<lambda_4>::operator ()(void) const";
  FAutomationSpecBase::It(pFVar1,&local_68,(TFunction<void___cdecl(void)> *)local_38,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

