// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 4

// Destruct @ 141dd2ec0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141dd2ed0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141dd2ee0

void __cdecl
UE::Core::Private::
TDestructorCaller<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
::Destruct(void *param_1)

{
  if (*(longlong *)((longlong)param_1 + 0x18) != 0) {
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  ::operator_delete(*(void **)((longlong)param_1 + 0x18),1);
  free(*(void **)((longlong)param_1 + 0x30));
  ::operator_delete(*(void **)((longlong)param_1 + 0x28),1);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(param_1);
  return;
}

// Destruct @ 141dd2f40

void __cdecl
UE::Core::Private::TDestructorCaller<TVariant<int,unsigned_int,__int64,float,double>_>::Destruct
          (void *param_1)

{
  return;
}

