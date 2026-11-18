// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 6

// GetTestFlags @ 14455cab0

EAutomationTestFlags __thiscall FXmlFileSpec::GetTestFlags(FXmlFileSpec *this)

{
  return ProductFilter|EditorContext;
}

// GetTestSourceFileName @ 14455cac0

FString * __thiscall
FXmlFileSpec::GetTestSourceFileName(FXmlFileSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14455caf0

int __thiscall FXmlFileSpec::GetTestSourceFileLine(FXmlFileSpec *this)

{
  return 5;
}

// GetBeautifiedTestName @ 14455cb00

FString * __thiscall
FXmlFileSpec::GetBeautifiedTestName(FXmlFileSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.XmlFile");
  return __return_storage_ptr__;
}

// Define @ 14455cb30

void __thiscall FXmlFileSpec::Define(FXmlFileSpec *this)

{
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FXmlFileSpec *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FXmlFileSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FXmlFileSpec::Define'::__l2::<lambda_1>,void>::Call;
  local_20 = this;
  ::FString::FString(&local_48,"FXmlFileSpec");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14455d290

void __thiscall `FXmlFileSpec::Define'::__l2::<lambda_1>::operator()(void *this)

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
              TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should return no root node for an empty file");
  local_68.Impl._Line = 0xd;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  local_68.Impl._Function = "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  local_68.Impl._Column = 3;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should return error if the file does not contain a root node");
  local_68.Impl._Line = 0x14;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  local_68.Impl._Function = "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should parse single and double quoted attributes");
  local_68.Impl._Line = 0x1d;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  local_68.Impl._Function = "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FXmlFileSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FXmlFileSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should parse nested text and nodes inside a node");
  local_68.Impl._Line = 0x3b;
  local_68.Impl._Column = 3;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\XmlFile.spec.cpp";
  local_68.Impl._Function = "auto __cdecl FXmlFileSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

