// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&> @ 14ad28e60

TDataReference<Metasound::FAudioBuffer> * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::
TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
          (TDataReference<Metasound::FAudioBuffer> *this,EDataRefShouldConstruct param_1,
          FOperatorSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TReferenceControllerBase<0> *pTVar5;
  TDataReference<Metasound::FAudioBuffer> *pTVar6;
  
  this->_padding_ = (longlong)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<0> *)0x0) {
    (this->ObjectReference).Object = (FAudioBuffer *)0x10;
    (this->ObjectReference).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<0> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = 1;
    pTVar5->WeakReferenceCount = 1;
    pTVar5[1].WeakReferenceCount = 0;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = 0;
    iVar1 = param_2->NumFramesPerBlock;
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar1,(ForAnyElementType *)(pTVar5 + 1),&pTVar5[1].SharedReferenceCount,
                       &pTVar5[1].WeakReferenceCount);
    memset((void *)(pTVar5[1]._padding_ + (longlong)iVar4 * 4),0,(longlong)iVar1 << 2);
    *(int *)&pTVar5[2]._padding_ = pTVar5[1].SharedReferenceCount;
    (this->ObjectReference).Object = (FAudioBuffer *)(pTVar5 + 1);
    (this->ObjectReference).SharedReferenceCount.ReferenceController = pTVar5;
    if ((FAudioBuffer *)(pTVar5 + 1) == (FAudioBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDataReference<Metasound::FAudioBuffer> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return this;
}

// GetDataTypeId @ 14ad54fe0

void * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::GetDataTypeId
          (TDataReference<Metasound::FAudioBuffer> *this)

{
  return &TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypePtr;
}

// GetDataTypeName @ 14ad55040

FName * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::GetDataTypeName
          (TDataReference<Metasound::FAudioBuffer> *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
          ::__l2::TypeName;
}

// GetRaw @ 14ad56710

void * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::GetRaw
          (TDataReference<Metasound::FAudioBuffer> *this)

{
  return (this->ObjectReference).Object;
}

