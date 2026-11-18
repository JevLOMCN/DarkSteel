// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 9

// GetTypeDisplayText @ 14ad56950

FText * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Audio_Array_Variable",
                 L"Audio:Array:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14ad569f0

FText * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Audio_Variable",L"Audio:Variable");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14ad56a90

FText * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Audio_Array",L"Audio:Array");
      atexit(`Metasound::
             TDataReferenceTypeInfo<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14ad56b30

FText * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeDisplayText(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Audio",L"Audio");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeDisplayText'::__l2
             ::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetTypeDisplayText @ 14ad56bd0

FText * __cdecl Metasound::TDataReferenceTypeInfo<void>::GetTypeDisplayText(void)

{
  ITextData *pIVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar1 = ::operator_new(0x38);
    StaticEmptyText.TextData.Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      *(undefined4 *)&pIVar1[2].field_0x1 = 0;
      *(undefined2 *)&pIVar1[2].field_0x5 = 0;
      pIVar1[2].field_0x7 = 0;
      pIVar1[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar1 + 2) = 0;
      *pIVar1 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar1[3] = (ITextData)0xffffffffffffffff;
      pIVar1[4] = (ITextData)0x0;
      pIVar1[5] = (ITextData)0x0;
      pIVar1[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar1 + 1) = *(int *)(pIVar1 + 1) + 1;
      UNLOCK();
      StaticEmptyText.TextData.Reference = pIVar1;
    }
    StaticEmptyText.Flags = 0;
    atexit(`FText::GetEmpty'::__l2::_dynamic_atexit_destructor_for__StaticEmptyText__);
    _Init_thread_footer(&::_TSS0);
    return &StaticEmptyText;
  }
  return &StaticEmptyText;
}

// GetTypeId @ 14ad56be0

void * __cdecl
Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>_>
::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14ad56bf0

void * __cdecl
Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14ad56c00

void * __cdecl
Metasound::TDataReferenceTypeInfo<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>::
GetTypeId(void)

{
  return &TypePtr;
}

// GetTypeId @ 14ad56c10

void * __cdecl Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeId(void)

{
  return &TypePtr;
}

