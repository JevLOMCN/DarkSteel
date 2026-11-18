// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 4

// Create @ 141dd0cb0

TSharedRef<TJsonReader<wchar_t>,1> * __cdecl
TJsonReaderFactory<wchar_t>::Create
          (TSharedRef<TJsonReader<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  TJsonStringReader<wchar_t> *this;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_18;
  
  this = ::operator_new(0x88);
  local_res8.Object = (TJsonStringReader<wchar_t> *)0x0;
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
    (this->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this->Content).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Content).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->Content).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    (this->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this);
    local_res8.Object = this;
  }
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_18,&local_res8);
  __return_storage_ptr__->Object = (TJsonReader<wchar_t> *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 141dd0da0

TSharedRef<TJsonReader<wchar_t>,1> * __cdecl
TJsonReaderFactory<wchar_t>::Create
          (TSharedRef<TJsonReader<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  TJsonStringReader<wchar_t> *this;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_18;
  
  this = ::operator_new(0x88);
  local_res8.Object = (TJsonStringReader<wchar_t> *)0x0;
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
    ::FString::FString(&this->Content,param_1);
    (this->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this);
    local_res8.Object = this;
  }
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_18,&local_res8);
  __return_storage_ptr__->Object = (TJsonReader<wchar_t> *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateFromView @ 141dd1960

TSharedRef<TJsonReader<char>,1> * __cdecl
TJsonReaderFactory<char>::CreateFromView
          (TSharedRef<TJsonReader<char>,1> *__return_storage_ptr__,TStringView<char> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<TJsonStringViewReader<char>,1> *pTVar2;
  TStringView<char> local_28;
  TSharedRef<TJsonStringViewReader<char>,1> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar2 = TJsonStringViewReader<char>::Create(&local_18,&local_28);
  __return_storage_ptr__->Object = (TJsonReader<char> *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateFromView @ 141dd19b0

TSharedRef<TJsonReader<char8_t>,1> * __cdecl
TJsonReaderFactory<char8_t>::CreateFromView
          (TSharedRef<TJsonReader<char8_t>,1> *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<TJsonStringViewReader<char8_t>,1> *pTVar2;
  TStringView<char8_t> local_28;
  TSharedRef<TJsonStringViewReader<char8_t>,1> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar2 = TJsonStringViewReader<char8_t>::Create(&local_18,&local_28);
  __return_storage_ptr__->Object = (TJsonReader<char8_t> *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

