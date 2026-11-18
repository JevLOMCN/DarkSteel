// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 16

// Add<FTestFragment_Bool> @ 1470d25e0

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
Add<FTestFragment_Bool>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestFragment_Bool>(this);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// Add<FTestFragment_Int> @ 1470d2730

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
Add<FTestFragment_Int>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestFragment_Int>(this);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// Add<FTestTag_B> @ 1470d2980

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::Add<FTestTag_B>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestTag_B>(this);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// Add<FTestTag_C> @ 1470d2b10

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::Add<FTestTag_C>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestTag_C>(this);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// Contains<FTestFragment_Float> @ 1470d8f20

bool __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
Contains<FTestFragment_Float>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar2,
                             L"TestFragment_Float");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)this->_padding_,
                     `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Float>(void)const___ptr64'
                     ::__l2::TypeIndex);
  return bVar1;
}

// Contains<FTestTag_A> @ 1470d8fd0

bool __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
Contains<FTestTag_A>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar2,L"TestTag_A");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)this->_padding_,
                     `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_A>(void)const___ptr64'
                     ::__l2::TypeIndex);
  return bVar1;
}

// GetTypeIndex<FTestFragment_Bool> @ 1470e4330

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
GetTypeIndex<FTestFragment_Bool>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar1,
                             L"TestFragment_Bool");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Bool>(void)const___ptr64'
         ::__l2::TypeIndex;
}

// GetTypeIndex<FTestFragment_Int> @ 1470e4510

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
GetTypeIndex<FTestFragment_Int>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                             L"TestFragment_Int");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestFragment_Int>(void)const___ptr64'
         ::__l2::TypeIndex;
}

// GetTypeIndex<FTestTag_B> @ 1470e48d0

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
GetTypeIndex<FTestTag_B>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar1,L"TestTag_B");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_B>(void)const___ptr64'
         ::__l2::TypeIndex;
}

// GetTypeIndex<FTestTag_C> @ 1470e4970

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
GetTypeIndex<FTestTag_C>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar1,L"TestTag_C");
      }
      `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
      ::__l2::TypeIndex =
           GetTypeIndex(this,Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton);
      _Init_thread_footer(&`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex<FTestTag_C>(void)const___ptr64'
         ::__l2::TypeIndex;
}

// Remove<FTestFragment_Bool> @ 1470ee880

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
Remove<FTestFragment_Bool>
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestFragment_Bool>(this);
  FStructTypeBitSet::FBitSetContainer::RemoveAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// Remove<FTestTag_C> @ 1470ee8c0

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::Remove<FTestTag_C>
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this)

{
  int iVar1;
  
  iVar1 = GetTypeIndex<FTestTag_C>(this);
  FStructTypeBitSet::FBitSetContainer::RemoveAtIndex((FBitSetContainer *)this->_padding_,iVar1);
  return iVar1;
}

// GetTypeIndex @ 147122040

int __thiscall
TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex
          (TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>
           *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
           ::GetBaseUStruct();
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
    if (bVar1) goto LAB_1471220a1;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
          GetTypeIndex'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return -1;
  }
LAB_1471220a1:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex(this->StructTracker,(UStruct *)param_1);
  return iVar2;
}

// GetTypeIndex @ 1471220c0

int __thiscall
TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex
          (TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer> *this,
          UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UStruct *pUVar3;
  UScriptStruct *local_res18 [2];
  
  pUVar3 = TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
           ::GetBaseUStruct();
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
    if (bVar1) goto LAB_147122121;
  }
  local_res18[0] = param_1;
  bVar1 = `TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
          GetTypeIndex'::__l6::<lambda_1>::operator()(local_res18);
  if (!bVar1) {
    return -1;
  }
LAB_147122121:
  iVar2 = FStructTracker::FindOrAddStructTypeIndex(this->StructTracker,(UStruct *)param_1);
  return iVar2;
}

// operator() @ 150501e60

bool __thiscall
`TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::
GetTypeIndex'::__l6::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2187044544518815612>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2187044544518815612>,
                       &`public:___cdecl_`public:_int___cdecl_TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150501f0b;
    }
  }
  bVar4 = false;
LAB_150501f0b:
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

// operator() @ 150501f60

bool __thiscall
`TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex'::
__l6::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2187044544518815612>);
  if (bVar4) {
    pUVar6 = TTypeBitSetBase<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer_&,1>
             ::GetBaseUStruct();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2187044544518815612>,
                       &`public:___cdecl_`public:_int___cdecl_TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::GetTypeIndex(UScriptStruct_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050200b;
    }
  }
  bVar4 = false;
LAB_15050200b:
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

