// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> @ 14179c7c0

TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> * __thiscall
UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::
TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>
          (TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> *this,wchar_t *param_1,
          wchar_t *param_2,uchar *param_3,FLogTemplateOptions *param_4,FLogField *param_5,
          int param_6)

{
  FTextKey local_res8 [2];
  FTextKey local_38 [2];
  TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> *local_30;
  TFunctionWithContext<void_*___cdecl(int)> local_28;
  FText local_18;
  
  (this->Storage).Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  (this->Storage).Data.ArrayNum = 0;
  (this->Storage).Data.ArrayMax = 0x30;
  local_30 = this;
  ::FString::FString((FString *)&local_28,param_3);
  FTextKey::FTextKey(local_res8,param_2);
  FTextKey::FTextKey(local_38,param_1);
  FText::AsLocalizable_Advanced(&local_18,local_38,local_res8,(FString *)&local_28);
  if (local_28.Function != (_func___cdecl_void_ptr_void_ptr_int *)0x0) {
    FMemory::Free(local_28.Function);
  }
  local_28.Function =
       TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  local_28.Context = &local_30;
  FLogTemplate::CreateLocalized<char8_t>(&local_18,param_3,param_4,param_5,param_6,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// operator() @ 141bede50

void * __thiscall
`UE::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>::
TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *_Dst;
  undefined8 local_18 [2];
  
  puVar1 = *(undefined8 **)this;
  _Dst = operator_new__((longlong)param_1);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,(longlong)param_1);
  }
  if (puVar1 != local_18) {
    pvVar2 = (void *)*puVar1;
    *puVar1 = _Dst;
    _Dst = (void *)0x0;
    operator_delete__(pvVar2);
  }
  operator_delete__(_Dst);
  return (void *)*puVar1;
}

