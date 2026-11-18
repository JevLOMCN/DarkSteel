// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FMassCommandAddFragmentsInternal<0,FTestFragment_Float> @ 1470f0a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassCommandAddFragmentsInternal<0,FTestFragment_Float> * __thiscall
FMassCommandAddFragmentsInternal<0,FTestFragment_Float>::
FMassCommandAddFragmentsInternal<0,FTestFragment_Float>
          (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *this)

{
  FName *pFVar1;
  undefined1 auStack_38 [32];
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  pFVar1 = ::FName::FName(&local_18,L"AddFragments");
  *(FName *)((longlong)&this->_padding_ + 4) = *pFVar1;
  *(undefined2 *)&this->_padding_ = 0x200;
  *(undefined8 *)&(this->FragmentsAffected).field_0x10 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FMassCommandAddFragmentsInternal__0A_UFTestFragment_Float____6B_;
  *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x1c = 0x80;
  UE::Mass::TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (&this->FragmentsAffected);
  return this;
}

// FMassCommandAddFragmentsInternal<0,FTestFragment_Int> @ 1470f0ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassCommandAddFragmentsInternal<0,FTestFragment_Int> * __thiscall
FMassCommandAddFragmentsInternal<0,FTestFragment_Int>::
FMassCommandAddFragmentsInternal<0,FTestFragment_Int>
          (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *this)

{
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *pFVar8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *_Dst;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [4];
  FName local_54;
  TBitArray<FDefaultBitArrayAllocator> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pFVar6 = ::FName::FName(&local_54,L"AddFragments");
  this_00 = &this->FragmentsAffected;
  *(FName *)((longlong)&this->_padding_ + 4) = *pFVar6;
  *(undefined2 *)&this->_padding_ = 0x200;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FMassCommandAddFragmentsInternal__0A_UFTestFragment_Int____6B_;
  *(undefined8 *)&(this->FragmentsAffected).field_0x10 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x1c = 0x80;
  pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 == pTVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48.NumBits = 0;
  local_48.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,pTVar7,&local_48,MaxSize,local_58);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_48) {
    iVar1 = *(int *)&(this->FragmentsAffected).field_0x1c;
    *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
    uVar5 = local_48.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar5) || (0x80 < iVar1)) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)&(this->FragmentsAffected).field_0x1c = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    *(int *)&(this->FragmentsAffected).field_0x18 = local_48.NumBits;
    if (local_48.NumBits != 0) {
      _Dst = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(this->FragmentsAffected).field_0x10;
      _Src = (ForElementType<unsigned_int>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_48.AllocatorInstance.SecondaryData;
      }
      if (_Dst == (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
        _Dst = this_00;
      }
      memcpy(_Dst,(void *)_Src,(ulonglong)(local_48.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  return this;
}

// Run @ 14719c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddFragmentsInternal<0,FTestFragment_Float>::Run
          (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *this,FMassEntityManager *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_98;
  FMassEntityHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassArchetypeEntityCollection *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_58;
  undefined1 local_48 [16];
  void *pvStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddFragmentsInternal<0,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId262,"MassCommandAddFragments_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x106);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddFragmentsInternal<0,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId262);
  }
  local_88 = (FMassEntityHandle *)this->_padding_;
  iVar1 = (int)this->_padding_;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = local_88;
  iStack_80 = iVar1;
  UE::Mass::Utils::CreateEntityCollections(param_1,&local_68,FoldDuplicates,&local_98);
  iStack_70 = local_98.ArrayNum;
  local_78 = (FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data;
  local_48._0_8_ = 0;
  local_30 = 0;
  local_2c = 0x80;
  local_48._8_8_ = 0;
  pvStack_38 = (void *)0x0;
  if ((local_98.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iStack_70;
  local_58.DataPtr = local_78;
  FMassEntityManager::BatchChangeFragmentCompositionForEntities
            (param_1,&local_58,&this->FragmentsAffected,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_48);
  if (pvStack_38 != (void *)0x0) {
    FMemory::Free(pvStack_38);
  }
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Run @ 14719c5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddFragmentsInternal<0,FTestFragment_Int>::Run
          (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *this,FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_98;
  FMassEntityHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassArchetypeEntityCollection *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_58;
  undefined1 local_48 [16];
  void *pvStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddFragmentsInternal<0,FTestFragment_Int>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId262,"MassCommandAddFragments_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x106);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddFragmentsInternal<0,FTestFragment_Int>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId262);
  }
  local_88 = (FMassEntityHandle *)this->_padding_;
  iVar1 = (int)this->_padding_;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = local_88;
  iStack_80 = iVar1;
  UE::Mass::Utils::CreateEntityCollections(param_1,&local_68,FoldDuplicates,&local_98);
  iStack_70 = local_98.ArrayNum;
  local_78 = (FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data;
  local_48._0_8_ = 0;
  local_30 = 0;
  local_2c = 0x80;
  local_48._8_8_ = 0;
  pvStack_38 = (void *)0x0;
  if ((local_98.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iStack_70;
  local_58.DataPtr = local_78;
  FMassEntityManager::BatchChangeFragmentCompositionForEntities
            (param_1,&local_58,&this->FragmentsAffected,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_48);
  if (pvStack_38 != (void *)0x0) {
    FMemory::Free(pvStack_38);
  }
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_98.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

