// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// Add @ 14710e920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMassCommandMakeRelation<FMassChildOfRelation>::Add
          (FMassCommandMakeRelation<FMassChildOfRelation> *this,
          TArrayView<FMassEntityHandle_const_,int> *param_1,
          TArrayView<FMassEntityHandle_const_,int> *param_2)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  
  if (((param_1->ArrayNum == 0) || (param_2->ArrayNum == 0)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2479148319746555939>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRelationCommands.h"
                         ,0x23,"ChildEntities.Num() != 0 && ParentEntities.Num() != 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this,&local_38);
  iVar4 = param_1->ArrayNum;
  iVar5 = param_2->ArrayNum;
  if (iVar5 < iVar4) {
    do {
      pFVar1 = param_2->DataPtr;
      if (((pFVar1 == (FMassEntityHandle *)0x0) && (iVar5 != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar5,&(this->Parents).AllocatorInstance,&(this->Parents).ArrayNum,
                         &(this->Parents).ArrayMax);
      if (iVar5 != 0) {
        memcpy((this->Parents).AllocatorInstance.Data + (longlong)iVar4 * 8,pFVar1,
               (longlong)iVar5 << 3);
      }
      iVar4 = (int)this->_padding_;
    } while ((this->Parents).ArrayNum < iVar4);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::SetNum(&this->Parents,iVar4,No);
  }
  else {
    pFVar1 = param_2->DataPtr;
    if (((pFVar1 == (FMassEntityHandle *)0x0) && (iVar4 != 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&(this->Parents).AllocatorInstance,&(this->Parents).ArrayNum,
                       &(this->Parents).ArrayMax);
    if (iVar4 != 0) {
      memcpy((this->Parents).AllocatorInstance.Data + (longlong)iVar5 * 8,pFVar1,
             (longlong)iVar4 << 3);
    }
  }
  return;
}

// GetAllocatedSize @ 14711f7f0

ulong64 __thiscall
FMassCommandMakeRelation<FMassChildOfRelation>::GetAllocatedSize
          (FMassCommandMakeRelation<FMassChildOfRelation> *this)

{
  return ((longlong)(this->Parents).ArrayMax + (longlong)*(int *)((longlong)&this->_padding_ + 4)) *
         8;
}

// Reset @ 14719b890

void __thiscall
FMassCommandMakeRelation<FMassChildOfRelation>::Reset
          (FMassCommandMakeRelation<FMassChildOfRelation> *this)

{
  int iVar1;
  
  (this->Parents).ArrayNum = 0;
  if ((this->Parents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Parents).AllocatorInstance,0,&(this->Parents).ArrayMax);
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Run @ 14719cab0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandMakeRelation<FMassChildOfRelation>::Run
          (FMassCommandMakeRelation<FMassChildOfRelation> *this,FMassEntityManager *param_1)

{
  int iVar1;
  int iVar2;
  FMassEntityHandle *pFVar3;
  FMassEntityHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res18;
  FObjectKey local_res20;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandMakeRelation<FMassChildOfRelation>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId68,"FMassCommandMakeRelation_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRelationCommands.h"
               ,0x44);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandMakeRelation<FMassChildOfRelation>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId68);
  }
  pFVar3 = (FMassEntityHandle *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (FMassEntityHandle *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res18 = FMassChildOfRelation::StaticStruct();
  if (local_res18 == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  UE::Mass::FTypeHandle::FTypeHandle
            ((FTypeHandle *)&local_res20,(TObjectKey<UStruct_const_>)local_res8);
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iVar1;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_38.DataPtr = pFVar3;
  local_28.DataPtr = pFVar4;
  FMassEntityManager::BatchCreateRelations(param_1,(FTypeHandle)local_res20,&local_28,&local_38);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

