// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ToString @ 142520600

FString * __thiscall EVisibility::ToString(EVisibility *this,FString *__return_storage_ptr__)

{
  uchar uVar1;
  ForAnyElementType _Src;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&VisibleString,"Visible");
      atexit(`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__VisibleString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&HiddenString,"Hidden");
      atexit(`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__HiddenString__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar3 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FString::FString(&CollapsedString,"Collapsed");
      atexit(`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__CollapsedString__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar3 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ::FString::FString(&HitTestInvisibleString,"HitTestInvisible");
      atexit(`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__HitTestInvisibleString__
            );
      _Init_thread_footer(&::_TSS3);
    }
  }
  if (*piVar3 < ::_TSS4) {
    _Init_thread_header(&::_TSS4);
    if (::_TSS4 == -1) {
      ::FString::FString(&SelfHitTestInvisibleString,"SelfHitTestInvisible");
      atexit(`EVisibility::ToString'::__l2::
             _dynamic_atexit_destructor_for__SelfHitTestInvisibleString__);
      _Init_thread_footer(&::_TSS4);
    }
  }
  uVar1 = (this->Value).Value;
  if (uVar1 == '\x19') {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = VisibleString.Data.ArrayNum;
    _Src = VisibleString.Data.AllocatorInstance;
  }
  else {
    if (uVar1 != '\x02') {
      if (uVar1 == '\x04') {
        ::FString::FString(__return_storage_ptr__,&HiddenString);
        return __return_storage_ptr__;
      }
      if (uVar1 == '\x01') {
        ::FString::FString(__return_storage_ptr__,&HitTestInvisibleString);
        return __return_storage_ptr__;
      }
      if (uVar1 == '\x11') {
        ::FString::FString(__return_storage_ptr__,&SelfHitTestInvisibleString);
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = CollapsedString.Data.ArrayNum;
    _Src = CollapsedString.Data.AllocatorInstance;
  }
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  piVar3 = &(__return_storage_ptr__->Data).ArrayMax;
  if (iVar2 == 0) {
    *piVar3 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar3);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

