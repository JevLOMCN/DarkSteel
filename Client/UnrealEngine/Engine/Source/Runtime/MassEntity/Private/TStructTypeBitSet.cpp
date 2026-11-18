// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// GetTypeIndex<FMassDebugLogFragment> @ 1471c8c80

int __cdecl
TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
GetTypeIndex<FMassDebugLogFragment>(void)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassDebugLogFragment,(UObject *)pUVar1,
                             L"MassDebugLogFragment");
      }
      `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
      ::__l2::TypeIndex =
           GetTypeIndex(Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton);
      _Init_thread_footer(&`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassDebugLogFragment>(void)'
         ::__l2::TypeIndex;
}

// GetTypeIndex<FMassRelationFragment> @ 1471c8d20

int __cdecl
TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
GetTypeIndex<FMassRelationFragment>(void)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar1,
                             L"MassRelationFragment");
      }
      `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
      ::__l2::TypeIndex =
           GetTypeIndex(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton);
      _Init_thread_footer(&`public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_int___cdecl_TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::GetTypeIndex<FMassRelationFragment>(void)'
         ::__l2::TypeIndex;
}

// operator+ @ 1471e2ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::operator+
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *this,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 *__return_storage_ptr__,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  uint uVar4;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  TBitArray<FDefaultBitArrayAllocator> local_70;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.MaxBits = 0x80;
  if (this == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50.NumBits = 0;
  local_50.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1,&local_50,MaxSize,local_78);
  local_70.NumBits = 0;
  uVar4 = local_50.NumBits + 0x1fU & 0xffffffe0;
  if ((local_70.MaxBits < (int)uVar4) || (0x80 < local_70.MaxBits)) {
    local_70.MaxBits = 0x80;
    if (0x80 < (int)uVar4) {
      local_70.MaxBits = uVar4;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  local_70.NumBits = local_50.NumBits;
  if (local_50.NumBits != 0) {
    _Src = (ForElementType<unsigned_int>)&local_50;
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Src = local_50.AllocatorInstance.SecondaryData;
    }
    _Dst = (ForElementType<unsigned_int>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_70.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  if (local_70.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    __return_storage_ptr__->field_0x0 = local_70.AllocatorInstance.InlineData[0];
    __return_storage_ptr__->field_0x1 = local_70.AllocatorInstance.InlineData[1];
    __return_storage_ptr__->field_0x2 = local_70.AllocatorInstance.InlineData[2];
    __return_storage_ptr__->field_0x3 = local_70.AllocatorInstance.InlineData[3];
    __return_storage_ptr__->field_0x4 = local_70.AllocatorInstance.InlineData[4];
    __return_storage_ptr__->field_0x5 = local_70.AllocatorInstance.InlineData[5];
    __return_storage_ptr__->field_0x6 = local_70.AllocatorInstance.InlineData[6];
    __return_storage_ptr__->field_0x7 = local_70.AllocatorInstance.InlineData[7];
    __return_storage_ptr__->field_0x8 = local_70.AllocatorInstance.InlineData[8];
    __return_storage_ptr__->field_0x9 = local_70.AllocatorInstance.InlineData[9];
    __return_storage_ptr__->field_0xa = local_70.AllocatorInstance.InlineData[10];
    __return_storage_ptr__->field_0xb = local_70.AllocatorInstance.InlineData[0xb];
    __return_storage_ptr__->field_0xc = local_70.AllocatorInstance.InlineData[0xc];
    __return_storage_ptr__->field_0xd = local_70.AllocatorInstance.InlineData[0xd];
    __return_storage_ptr__->field_0xe = local_70.AllocatorInstance.InlineData[0xe];
    __return_storage_ptr__->field_0xf = local_70.AllocatorInstance.InlineData[0xf];
  }
  *(ForElementType<unsigned_int> *)&__return_storage_ptr__->field_0x10 =
       local_70.AllocatorInstance.SecondaryData;
  *(int *)&__return_storage_ptr__->field_0x18 = local_70.NumBits;
  *(int *)&__return_storage_ptr__->field_0x1c = local_70.MaxBits;
  return __return_storage_ptr__;
}

// operator+ @ 1471e2c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::operator+
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *this,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
          *__return_storage_ptr__,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  uint uVar4;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  TBitArray<FDefaultBitArrayAllocator> local_70;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.MaxBits = 0x80;
  if (this == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50.NumBits = 0;
  local_50.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this,
             (TBitArray<FDefaultBitArrayAllocator> *)param_1,&local_50,MaxSize,local_78);
  local_70.NumBits = 0;
  uVar4 = local_50.NumBits + 0x1fU & 0xffffffe0;
  if ((local_70.MaxBits < (int)uVar4) || (0x80 < local_70.MaxBits)) {
    local_70.MaxBits = 0x80;
    if (0x80 < (int)uVar4) {
      local_70.MaxBits = uVar4;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  local_70.NumBits = local_50.NumBits;
  if (local_50.NumBits != 0) {
    _Src = (ForElementType<unsigned_int>)&local_50;
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Src = local_50.AllocatorInstance.SecondaryData;
    }
    _Dst = (ForElementType<unsigned_int>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      _Dst = local_70.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  if (local_70.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    __return_storage_ptr__->field_0x0 = local_70.AllocatorInstance.InlineData[0];
    __return_storage_ptr__->field_0x1 = local_70.AllocatorInstance.InlineData[1];
    __return_storage_ptr__->field_0x2 = local_70.AllocatorInstance.InlineData[2];
    __return_storage_ptr__->field_0x3 = local_70.AllocatorInstance.InlineData[3];
    __return_storage_ptr__->field_0x4 = local_70.AllocatorInstance.InlineData[4];
    __return_storage_ptr__->field_0x5 = local_70.AllocatorInstance.InlineData[5];
    __return_storage_ptr__->field_0x6 = local_70.AllocatorInstance.InlineData[6];
    __return_storage_ptr__->field_0x7 = local_70.AllocatorInstance.InlineData[7];
    __return_storage_ptr__->field_0x8 = local_70.AllocatorInstance.InlineData[8];
    __return_storage_ptr__->field_0x9 = local_70.AllocatorInstance.InlineData[9];
    __return_storage_ptr__->field_0xa = local_70.AllocatorInstance.InlineData[10];
    __return_storage_ptr__->field_0xb = local_70.AllocatorInstance.InlineData[0xb];
    __return_storage_ptr__->field_0xc = local_70.AllocatorInstance.InlineData[0xc];
    __return_storage_ptr__->field_0xd = local_70.AllocatorInstance.InlineData[0xd];
    __return_storage_ptr__->field_0xe = local_70.AllocatorInstance.InlineData[0xe];
    __return_storage_ptr__->field_0xf = local_70.AllocatorInstance.InlineData[0xf];
  }
  *(ForElementType<unsigned_int> *)&__return_storage_ptr__->field_0x10 =
       local_70.AllocatorInstance.SecondaryData;
  *(int *)&__return_storage_ptr__->field_0x18 = local_70.NumBits;
  *(int *)&__return_storage_ptr__->field_0x1c = local_70.MaxBits;
  return __return_storage_ptr__;
}

