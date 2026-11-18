// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 21

// Add @ 14710f290

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14710f2e1;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_14710f2e1:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Add @ 14710f310

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14710f361;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_14710f361:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Add @ 14710f390

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14710f3e1;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_14710f3e1:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Add @ 14710f410

void __thiscall
TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
::Add(TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
      *this,UClass *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UClass *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14710f461;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
          ::Add'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return;
  }
LAB_14710f461:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex(&this->StructTypesBitArray,iVar2);
  return;
}

// Contains @ 14711b6f0

bool __thiscall
TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains(TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = GetBaseUStruct();
  if (pUVar3 != (UStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14711b741;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return false;
  }
LAB_14711b741:
  iVar2 = FStructTracker::FindStructTypeIndex
                    (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  if ((iVar2 != -1) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)this,iVar2), bVar1)) {
    return true;
  }
  return false;
}

// GetBaseUStruct @ 14711fbf0

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassChunkFragment::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fc60

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassConstSharedFragment::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fcd0

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassFragment::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fd40

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassSharedFragment::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fdb0

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassTag::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fe20

UStruct * __cdecl
TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)Z_Construct_UClass_USubsystem_NoRegister();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711fe90

UStruct * __cdecl
TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassFragment::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// GetBaseUStruct @ 14711ff00

UStruct * __cdecl
TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
::GetBaseUStruct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
      ::__l5::Instance = (UStruct *)FMassTag::StaticStruct();
      _Init_thread_footer(&`public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_UStruct_const*___ptr64___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::GetBaseUStruct(void)'
         ::__l5::Instance;
}

// operator() @ 150501660

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Add(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050170b;
    }
  }
  bVar4 = false;
LAB_15050170b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501760

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Add(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050180b;
    }
  }
  bVar4 = false;
LAB_15050180b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501860

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Add(UScriptStruct_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050190b;
    }
  }
  bVar4 = false;
LAB_15050190b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501960

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
::Add'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095868>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095868>,
                       &`public:___cdecl_`public:_void___cdecl_TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>::Add(UClass_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501a0b;
    }
  }
  bVar4 = false;
LAB_150501a0b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501a60

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501b0b;
    }
  }
  bVar4 = false;
LAB_150501b0b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501b60

bool __thiscall
`TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501c0b;
    }
  }
  bVar4 = false;
LAB_150501c0b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501c60

bool __thiscall
`TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501d0b;
    }
  }
  bVar4 = false;
LAB_150501d0b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150501d60

bool __thiscall
`TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
::Contains'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UStruct *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6289920888494095807>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6289920888494095807>,
                       &`public:___cdecl_`public:_bool___cdecl_TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer&___ptr64,1>::Contains(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501e0b;
    }
  }
  bVar4 = false;
LAB_150501e0b:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

