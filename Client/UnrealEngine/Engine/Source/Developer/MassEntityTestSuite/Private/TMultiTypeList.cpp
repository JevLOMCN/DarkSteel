// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ec060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FTestFragment_Array_&>::
PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::GetTypeIndex<FTestFragment_Array>();
      DAT_1551dba98 =
           (TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbaa0 = 0;
      _DAT_1551dbaa4 = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbaa0) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dba98 !=
          (TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dba98;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
             ::GetTypeBitSet<FTestFragment_Array>'::__l2::
             _dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Array>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&param_1->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        param_1 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    **)&param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ec2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FTestFragment_Float>::
PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::GetTypeIndex<FTestFragment_Float>();
      DAT_1551dba70 =
           (TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dba78 = 0;
      _DAT_1551dba7c = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dba78) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dba70 !=
          (TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dba70;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
             ::GetTypeBitSet<FTestFragment_Float>'::__l2::
             _dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassFragment,struct_FMassFragmentBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Float>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&param_1->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        param_1 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                    **)&param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ec540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FFarmJustBecameReadyToHarvestTag>::
PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FFarmJustBecameReadyToHarvestTag>();
      DAT_1551dbb88 =
           (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbb90 = 0;
      _DAT_1551dbb94 = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbb90) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dbb88 !=
          (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dbb88;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
             GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>'::__l2::
             _dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmJustBecameReadyToHarvestTag>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
           &param_1->field_0x10 !=
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        param_1 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                   &param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ec7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FFarmReadyToHarvestTag>::
PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FFarmReadyToHarvestTag>();
      DAT_1551dbb60 =
           (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbb68 = 0;
      _DAT_1551dbb6c = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbb68) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dbb60 !=
          (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dbb60;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
             GetTypeBitSet<FFarmReadyToHarvestTag>'::__l2::
             _dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FFarmReadyToHarvestTag>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
           &param_1->field_0x10 !=
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        param_1 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                   &param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470eca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FTestFragment_Tag>::
PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FTestFragment_Tag>();
      DAT_1551dbae8 =
           (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbaf0 = 0;
      _DAT_1551dbaf4 = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbaf0) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dbae8 !=
          (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dbae8;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
             GetTypeBitSet<FTestFragment_Tag>'::__l2::_dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestFragment_Tag>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
           &param_1->field_0x10 !=
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        param_1 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                   &param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ecc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FTestTag_A>::
PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FTestTag_A>();
      DAT_1551dbb10 =
           (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbb18 = 0;
      _DAT_1551dbb1c = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbb18) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dbb10 !=
          (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dbb10;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
             GetTypeBitSet<FTestTag_A>'::__l2::_dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_A>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
           &param_1->field_0x10 !=
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        param_1 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                   &param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1470ecf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mass::TMultiTypeList<FTestTag_B>::
PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Src;
  int iVar7;
  TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
  *pTVar8;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FTestTag_B>();
      DAT_1551dbb38 =
           (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
            *)0x0;
      _DAT_1551dbb40 = 0;
      _DAT_1551dbb44 = 0x80;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                           ,0xe5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = (iVar4 - _DAT_1551dbb40) + 1;
      if (0 < iVar7) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
                            ::__l2::TypeBitSet,iVar7);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
                    ::__l2::TypeBitSet,iVar5,iVar7,false);
      }
      pTVar8 = &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
                ::__l2::TypeBitSet;
      if (DAT_1551dbb38 !=
          (TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>
           *)0x0) {
        pTVar8 = DAT_1551dbb38;
      }
      uVar6 = iVar4 >> 0x1f & 0x1f;
      uVar3 = iVar4 + uVar6;
      uVar6 = (uVar3 & 0x1f) - uVar6;
      *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) =
           ~(1 << ((byte)uVar6 & 0x1f)) & *(uint *)(pTVar8 + (longlong)((int)uVar3 >> 5) * 4) |
           1 << (uVar6 & 0x1f);
      atexit(`TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
             GetTypeBitSet<FTestTag_B>'::__l2::_dynamic_atexit_destructor_for__TypeBitSet__);
      _Init_thread_footer(&`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 ==
      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
      &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
       ::__l2::TypeBitSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)param_1,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &`public:_static_struct_TStructTypeBitSet<struct_FMassTag,struct_FMassTagBitSetStructTrackerWrapper,class_UScriptStruct>_const&___ptr64___cdecl_TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::GetTypeBitSet<FTestTag_B>(void)'
              ::__l2::TypeBitSet,&local_40,MaxSize,local_48);
  if ((TBitArray<FDefaultBitArrayAllocator> *)param_1 != &local_40) {
    *(undefined4 *)&param_1->field_0x18 = 0;
    uVar3 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&param_1->field_0x1c < (int)uVar3) || (0x80 < *(int *)&param_1->field_0x1c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)&param_1->field_0x1c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)param_1,0);
    }
    *(int *)&param_1->field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_40.AllocatorInstance.SecondaryData;
      }
      if (*(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
           &param_1->field_0x10 !=
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)0x0) {
        param_1 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                   &param_1->field_0x10;
      }
      memcpy(param_1,(void *)_Src,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

