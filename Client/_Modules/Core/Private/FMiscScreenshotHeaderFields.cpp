// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141988c20

uint __thiscall `FMiscScreenshotHeaderFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.NameSize = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.Name = "Id";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Name = "Name";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.Name = "Width";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.Name = "Height";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.Name = "TotalChunkNum";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.Name = "Size";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<263,28,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueOffset = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.TypeInfo = 0x89;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.ValueOffset = 0xc;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Width_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Height_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.NameSize = '\r';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TotalChunkNum_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.ValueOffset = 0x18;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Size_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x1c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Misc";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x10';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "ScreenshotHeader";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 2;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (MiscScreenshotHeaderEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 14199dc90

uint __cdecl FMiscScreenshotHeaderFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           `FMiscScreenshotHeaderFields::Initialize'::__l2::<lambda_1>::operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

