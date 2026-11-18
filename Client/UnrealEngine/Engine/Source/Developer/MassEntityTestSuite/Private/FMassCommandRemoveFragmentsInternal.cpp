// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> @ 1470f1090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> * __thiscall
FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>::
FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>
          (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *this)

{
  FName *pFVar1;
  undefined1 auStack_38 [32];
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  pFVar1 = ::FName::FName(&local_18,L"RemoveFragments");
  *(FName *)((longlong)&this->_padding_ + 4) = *pFVar1;
  *(undefined2 *)&this->_padding_ = 0x300;
  *(undefined8 *)&(this->FragmentsAffected).field_0x10 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FMassCommandRemoveFragmentsInternal__0A_UFTestFragment_Float____6B_;
  *(undefined4 *)&(this->FragmentsAffected).field_0x18 = 0;
  *(undefined4 *)&(this->FragmentsAffected).field_0x1c = 0x80;
  UE::Mass::TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (&this->FragmentsAffected);
  return this;
}

// Run @ 14719cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>::Run
          (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *this,
          FMassEntityManager *param_1)

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
              (&`protected:_virtual_void___cdecl_FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId293,"MassCommandRemoveFragments_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x125);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId293);
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
            (param_1,&local_58,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_48,&this->FragmentsAffected);
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

