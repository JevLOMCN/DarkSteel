// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 229

// GetDataTypeName @ 14afc3da0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afc3db0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::TypePtr;
}

// GetRaw @ 14afc3dc0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14afc7390

FName * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::GetDataTypeName
          (TDataReference<Metasound::FMonoAudioFormat> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FMonoAudioFormat>::TypeName
                    );
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afc73a0

void * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::GetDataTypeId
          (TDataReference<Metasound::FMonoAudioFormat> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FMonoAudioFormat>::TypePtr;
}

// GetRaw @ 14afc73b0

void * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::GetRaw
          (TDataReference<Metasound::FMonoAudioFormat> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14afc8f40

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afc8f80

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::TypePtr;
}

// GetRaw @ 14afc8f90

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14afcda30

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afcda40

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          ::TypePtr;
}

// GetRaw @ 14afcda50

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14afce790

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afce7a0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
          TypePtr;
}

// GetRaw @ 14afce7b0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14afd63e0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::GetDataTypeName
          (TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afd6480

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::GetDataTypeId
          (TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::TypePtr;
}

// GetRaw @ 14afd6490

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::GetRaw
          (TDataReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *this)

{
  return (this->ObjectReference).Object;
}

// GetDataTypeName @ 14afd67c0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afd67d0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14afd67e0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14afdbf50

FName * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::GetDataTypeName
          (TDataReference<Metasound::FStereoAudioFormat> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::FStereoAudioFormat>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14afdbf60

void * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::GetDataTypeId
          (TDataReference<Metasound::FStereoAudioFormat> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FStereoAudioFormat>::TypePtr;
}

// GetRaw @ 14afdbf70

void * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::GetRaw
          (TDataReference<Metasound::FStereoAudioFormat> *this)

{
  return (this->ObjectReference).Object;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><> @ 14afdee70

TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(puVar3 + 2,FourPole);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><> @ 14afdef30

TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (puVar3 + 2,Lowpass);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><int_const_&> @ 14afdfa10

TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><int_const_&> @ 14afdfae0

TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FMonoAudioFormat><int_const_&> @ 14afdfbb0

TDataReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::
TDataReference<Metasound::FMonoAudioFormat><int_const_&>
          (TDataReference<Metasound::FMonoAudioFormat> *this,EDataRefShouldConstruct param_1,
          int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMonoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMonoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
              ((TStaticChannelAudioFormat<1> *)(pTVar3 + 1),*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FMonoAudioFormat *)(pTVar3 + 1);
    if ((FMonoAudioFormat *)(pTVar3 + 1) == (FMonoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FStereoAudioFormat><int_const_&> @ 14afdfc80

TDataReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::
TDataReference<Metasound::FStereoAudioFormat><int_const_&>
          (TDataReference<Metasound::FStereoAudioFormat> *this,EDataRefShouldConstruct param_1,
          int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FStereoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStereoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
              ((TStaticChannelAudioFormat<2> *)(pTVar3 + 1),*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FStereoAudioFormat *)(pTVar3 + 1);
    if ((FStereoAudioFormat *)(pTVar3 + 1) == (FStereoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><float_const_&> @ 14afdfd50

TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><float_const_&> @ 14afdfe20

TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FMonoAudioFormat><float_const_&> @ 14afdfef0

TDataReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::
TDataReference<Metasound::FMonoAudioFormat><float_const_&>
          (TDataReference<Metasound::FMonoAudioFormat> *this,EDataRefShouldConstruct param_1,
          float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMonoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMonoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
              ((TStaticChannelAudioFormat<1> *)(pTVar3 + 1),(int)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FMonoAudioFormat *)(pTVar3 + 1);
    if ((FMonoAudioFormat *)(pTVar3 + 1) == (FMonoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FStereoAudioFormat><float_const_&> @ 14afdffc0

TDataReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::
TDataReference<Metasound::FStereoAudioFormat><float_const_&>
          (TDataReference<Metasound::FStereoAudioFormat> *this,EDataRefShouldConstruct param_1,
          float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FStereoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStereoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
              ((TStaticChannelAudioFormat<2> *)(pTVar3 + 1),(int)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FStereoAudioFormat *)(pTVar3 + 1);
    if ((FStereoAudioFormat *)(pTVar3 + 1) == (FStereoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&> @ 14afe0090

TDataReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::
TDataReference<Metasound::FMonoAudioFormat><Metasound::FOperatorSettings_const_&>
          (TDataReference<Metasound::FMonoAudioFormat> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMonoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMonoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
              ((TStaticChannelAudioFormat<1> *)(pTVar3 + 1),param_2->NumFramesPerBlock);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FMonoAudioFormat *)(pTVar3 + 1);
    if ((FMonoAudioFormat *)(pTVar3 + 1) == (FMonoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&> @ 14afe0160

TDataReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::
TDataReference<Metasound::FStereoAudioFormat><Metasound::FOperatorSettings_const_&>
          (TDataReference<Metasound::FStereoAudioFormat> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FStereoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStereoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
              ((TStaticChannelAudioFormat<2> *)(pTVar3 + 1),param_2->NumFramesPerBlock);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FStereoAudioFormat *)(pTVar3 + 1);
    if ((FStereoAudioFormat *)(pTVar3 + 1) == (FStereoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><FString_const_&> @ 14afe0230

TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><FString_const_&> @ 14afe0320

TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><bool_const_&> @ 14afe0410

TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
    TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><bool_const_&> @ 14afe04e0

TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FMonoAudioFormat><bool_const_&> @ 14afe05b0

TDataReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FMonoAudioFormat>::
TDataReference<Metasound::FMonoAudioFormat><bool_const_&>
          (TDataReference<Metasound::FMonoAudioFormat> *this,EDataRefShouldConstruct param_1,
          bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FMonoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMonoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
              ((TStaticChannelAudioFormat<1> *)(pTVar3 + 1),(uint)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FMonoAudioFormat *)(pTVar3 + 1);
    if ((FMonoAudioFormat *)(pTVar3 + 1) == (FMonoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FMonoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::FStereoAudioFormat><bool_const_&> @ 14afe0680

TDataReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TDataReference<Metasound::FStereoAudioFormat>::
TDataReference<Metasound::FStereoAudioFormat><bool_const_&>
          (TDataReference<Metasound::FStereoAudioFormat> *this,EDataRefShouldConstruct param_1,
          bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TDataReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  pTVar3 = ::operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FStereoAudioFormat *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStereoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
              ((TStaticChannelAudioFormat<2> *)(pTVar3 + 1),(uint)*param_2);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar3;
    (this->ObjectReference).Object = (FStereoAudioFormat *)(pTVar3 + 1);
    if ((FStereoAudioFormat *)(pTVar3 + 1) == (FStereoAudioFormat *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::FStereoAudioFormat> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeName @ 14b03b530

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b03b540

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypePtr;
}

// GetRaw @ 14b03b550

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b03bd10

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b03bda0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b03bdb0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><> @ 14b044ca0

TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (puVar3 + 2,Bell);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><int_const_&> @ 14b044fa0

TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><float_const_&> @ 14b045070

TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><FString_const_&> @ 14b045140

TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><bool_const_&> @ 14b045230

TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeId @ 14b070090

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::TypePtr;
}

// GetDataTypeName @ 14b0700a0

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetRaw @ 14b0763c0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b07ee10

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b07ee20

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b07ee30

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b087be0

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EKneeMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b087bf0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::TypePtr;
}

// GetRaw @ 14b087c00

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b089ea0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b089eb0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b089ec0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b08da60

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b08da70

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b08da80

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b095800

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b095810

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::TypePtr;
}

// GetRaw @ 14b095820

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b095ef0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b095f00

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          ::TypePtr;
}

// GetRaw @ 14b095f10

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b096460

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b096470

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          ::TypePtr;
}

// GetRaw @ 14b096480

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><> @ 14b099a50

TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
              (puVar3 + 2,Gaussian);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><> @ 14b099b10

TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,Peak);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><> @ 14b099bd0

TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(puVar3 + 2,Hard);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><> @ 14b099c90

TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(puVar3 + 2,Cubic);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int_const_&> @ 14b09a650

TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int_const_&> @ 14b09a720

TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int_const_&> @ 14b09a7f0

TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int_const_&> @ 14b09a8c0

TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><float_const_&> @ 14b09a990

TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><float_const_&> @ 14b09aa60

TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><float_const_&> @ 14b09ab30

TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(puVar3 + 2,(int)*param_2)
    ;
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><float_const_&> @ 14b09ac00

TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><FString_const_&> @ 14b09acd0

TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>(puVar3 + 2,*pFVar4)
    ;
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><FString_const_&> @ 14b09adc0

TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><FString_const_&> @ 14b09aeb0

TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><FString_const_&> @ 14b09afa0

TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><bool_const_&> @ 14b09b090

TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><bool_const_&> @ 14b09b160

TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><bool_const_&> @ 14b09b230

TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><bool_const_&> @ 14b09b300

TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
    TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeName @ 14b0e9a50

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0e9a60

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
          TypePtr;
}

// GetRaw @ 14b0e9a70

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0ebf00

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESawGenerationType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0ebf10

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::TypePtr;
}

// GetRaw @ 14b0ebf20

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0f0c00

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0f0c10

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          ::TypePtr;
}

// GetRaw @ 14b0f0c20

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0f2b60

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0f2b70

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b0f2b80

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0f89f0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0f8a60

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b0f8a70

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0fb9c0

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0fb9d0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::TypePtr;
}

// GetRaw @ 14b0fba60

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0fc550

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0fc560

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::TypePtr;
}

// GetRaw @ 14b0fc570

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b0fe6a0

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESineGenerationType,3>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b0fe6b0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::TypePtr;
}

// GetRaw @ 14b0fe6c0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b100630

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b100640

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b100650

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b101210

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b101220

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
          TypePtr;
}

// GetRaw @ 14b101230

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b102180

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b102250

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b102260

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b10dbe0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b10dbf0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b10dc00

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b10fbb0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b10fbc0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b10fc30

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b111fa0

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ENoiseType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b111fb0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::TypePtr;
}

// GetRaw @ 14b112020

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><> @ 14b1144d0

TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (puVar3 + 2,Sine);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><> @ 14b114590

TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(puVar3 + 2,Pink);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><> @ 14b114650

TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (puVar3 + 2,PolySmooth);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><> @ 14b114710

TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (puVar3 + 2,Wavetable);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><> @ 14b1147d0

TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (puVar3 + 2,PolySmooth);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><> @ 14b114890

TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(puVar3 + 2,PolySmooth);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><> @ 14b114950

TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (puVar3 + 2,Major);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int_const_&> @ 14b1159d0

TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int_const_&> @ 14b115aa0

TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><int_const_&> @ 14b115b70

TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int_const_&> @ 14b115c40

TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><int_const_&> @ 14b115d10

TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><int_const_&> @ 14b115de0

TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int_const_&> @ 14b115eb0

TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><float_const_&> @ 14b116020

TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><float_const_&> @ 14b1160f0

TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><float_const_&> @ 14b1161c0

TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><float_const_&> @ 14b116290

TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><float_const_&> @ 14b116360

TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><float_const_&> @ 14b116430

TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><float_const_&> @ 14b116500

TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><FString_const_&> @ 14b1165d0

TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><FString_const_&> @ 14b1166c0

TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><FString_const_&> @ 14b1167b0

TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><FString_const_&> @ 14b1168a0

TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><FString_const_&> @ 14b116990

TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><FString_const_&> @ 14b116a80

TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><FString_const_&> @ 14b116b70

TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><bool_const_&> @ 14b116c60

TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><bool_const_&> @ 14b116d30

TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><bool_const_&> @ 14b116e00

TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><bool_const_&> @ 14b116ed0

TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESineGenerationType,3>::TEnum<enum_Metasound::ESineGenerationType,3>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><bool_const_&> @ 14b116fa0

TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ESquareGenerationType,0>::TEnum<enum_Metasound::ESquareGenerationType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><bool_const_&> @ 14b117070

TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriangleGenerationType,0>::
    TEnum<enum_Metasound::ETriangleGenerationType,0>(puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><bool_const_&> @ 14b117140

TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TDataReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeName @ 14b1b0d10

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1b0d20

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::TypePtr;
}

// GetRaw @ 14b1b0d30

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1b1ef0

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1b1f00

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b1b1f10

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1b4d70

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1b4d80

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::TypePtr;
}

// GetRaw @ 14b1b4da0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1b64d0

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1b64e0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b1b64f0

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><> @ 14b1bbb40

TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
              (puVar3 + 2,EqualPower);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><> @ 14b1bbc00

TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (puVar3 + 2,Normal);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int_const_&> @ 14b1bc140

TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int_const_&> @ 14b1bc210

TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><float_const_&> @ 14b1bc2e0

TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><float_const_&> @ 14b1bc3b0

TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><FString_const_&> @ 14b1bc520

TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><FString_const_&> @ 14b1bc610

TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><bool_const_&> @ 14b1bc700

TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><bool_const_&> @ 14b1bc7d0

TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// GetDataTypeName @ 14b1ec100

FName * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1ec110

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          ::TypePtr;
}

// GetRaw @ 14b1ec120

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1eda80

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1eda90

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b1edaa0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1fc230

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1fc240

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
          TypePtr;
}

// GetRaw @ 14b1fc250

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b1fc290

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b1fc2a0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::TypePtr;
}

// GetRaw @ 14b1fc2b0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetRaw
          (void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b201680

FName * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>::
GetDataTypeName(void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b201690

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>::
GetDataTypeId(void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          ::TypePtr;
}

// GetRaw @ 14b2016a0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>::
GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// GetDataTypeName @ 14b209c90

FName * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDataTypeName
          (void *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EWaveShaperType,1>_>(void)'
          ::__l2::TypeName;
}

// GetDataTypeId @ 14b209ca0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDataTypeId
          (void *this)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::TypePtr;
}

// GetRaw @ 14b209cb0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetRaw(void *this)

{
  return *(void **)((longlong)this + 8);
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><> @ 14b2169a0

TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (puVar3 + 2,RisingEdge);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><> @ 14b216a60

TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (puVar3 + 2,Equals);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><> @ 14b216b20

TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
          (void *this,EDataRefShouldConstruct param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>(puVar3 + 2,ATan);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int_const_&> @ 14b217300

TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int_const_&> @ 14b2173d0

TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int_const_&> @ 14b2174a0

TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int_const_&>
          (void *this,EDataRefShouldConstruct param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>(puVar3 + 2,*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><float_const_&> @ 14b217570

TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><float_const_&> @ 14b217640

TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><float_const_&> @ 14b217710

TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><float_const_&>
          (void *this,EDataRefShouldConstruct param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>
              (puVar3 + 2,(int)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><FString_const_&> @ 14b217880

TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><FString_const_&> @ 14b217970

TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><FString_const_&> @ 14b217a60

TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><FString_const_&>
          (void *this,EDataRefShouldConstruct param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res8,pwVar6);
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>(puVar3 + 2,*pFVar4);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><bool_const_&> @ 14b217b50

TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><bool_const_&> @ 14b217c20

TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TDataReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::ETriggerComparisonType,0>::TEnum<enum_Metasound::ETriggerComparisonType,0>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><bool_const_&> @ 14b217cf0

TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TDataReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><bool_const_&>
          (void *this,EDataRefShouldConstruct param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  *(undefined ***)this =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 8) = 0x10;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>
              (puVar3 + 2,(uint)*param_2);
    *(undefined8 **)((longlong)this + 0x10) = puVar3;
    *(undefined8 **)((longlong)this + 8) = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

