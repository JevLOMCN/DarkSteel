// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 10

// GetAllHeaders @ 143161770

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FNullHttpResponse::GetAllHeaders
          (FNullHttpResponse *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContent @ 143161c30

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FNullHttpResponse::GetContent(FNullHttpResponse *this)

{
  return &this->Payload;
}

// GetContentAsString @ 143161e70

FString * __thiscall
FNullHttpResponse::GetContentAsString(FNullHttpResponse *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContentAsUtf8StringView @ 143161eb0

TStringView<char8_t> * __thiscall
FNullHttpResponse::GetContentAsUtf8StringView
          (FNullHttpResponse *this,TStringView<char8_t> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  return __return_storage_ptr__;
}

// GetContentLength @ 143162080

ulong64 __thiscall FNullHttpResponse::GetContentLength(FNullHttpResponse *this)

{
  return 0;
}

// GetContentType @ 143162330

FString * __thiscall
FNullHttpResponse::GetContentType(FNullHttpResponse *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetHeader @ 143162cf0

FString * __thiscall
FNullHttpResponse::GetHeader
          (FNullHttpResponse *this,FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetResponseCode @ 1431648f0

int __thiscall FNullHttpResponse::GetResponseCode(FNullHttpResponse *this)

{
  return 0;
}

// GetURL @ 143164fe0

FString * __thiscall FNullHttpResponse::GetURL(FNullHttpResponse *this)

{
  return &this->URL;
}

// GetURLParameter @ 143165350

FString * __thiscall
FNullHttpResponse::GetURLParameter
          (FNullHttpResponse *this,FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

