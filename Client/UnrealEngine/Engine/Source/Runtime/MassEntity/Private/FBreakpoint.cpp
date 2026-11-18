// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 17

// FBreakpoint @ 1471d5770

FBreakpoint * __thiscall UE::Mass::Debug::FBreakpoint::FBreakpoint(FBreakpoint *this)

{
  (this->Handle).Handle = 0;
  this->HitCount = 0;
  this->TriggerType = None;
  this->FilterType = None;
  *(undefined8 *)&this->Trigger = 0;
  (this->Trigger).TypeIndex = '\0';
  (this->Filter)._padding_ = 0;
  (this->Filter).TypeIndex = '\0';
  this->bEnabled = false;
  `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
  ::__l2::LastHandle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle + 1;
  (this->Handle).Handle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle;
  return this;
}

// ApplyEntityFilter @ 1471f3840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Debug::FBreakpoint::ApplyEntityFilter
          (FBreakpoint *this,FMassEntityManager *param_1,FMassEntityHandle *param_2)

{
  EFilterType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FEnvironment *pFVar5;
  TVariant<FMassEntityHandle,FMassFragmentRequirements> *pTVar6;
  FMassFragmentRequirements *this_00;
  FMassArchetypeHandle local_18;
  
  EVar1 = this->FilterType;
  if (EVar1 == None) {
    return true;
  }
  if (EVar1 == SpecificEntity) {
    pTVar6 = &this->Filter;
    if ((this->Filter).TypeIndex != '\0') {
      pTVar6 = (TVariant<FMassEntityHandle,FMassFragmentRequirements> *)0x0;
    }
    if (pTVar6 == (TVariant<FMassEntityHandle,FMassFragmentRequirements> *)0x0) {
      return false;
    }
    if ((int)pTVar6->_padding_ != (*param_2).Index) {
      return false;
    }
    bVar3 = *(int *)((longlong)&pTVar6->_padding_ + 4) == (*param_2).SerialNumber;
  }
  else {
    if (EVar1 != SelectedEntity) {
      if (EVar1 != Query) {
        return false;
      }
      this_00 = (FMassFragmentRequirements *)&this->Filter;
      if ((this->Filter).TypeIndex != '\x01') {
        this_00 = (FMassFragmentRequirements *)0x0;
      }
      if (this_00 == (FMassFragmentRequirements *)0x0) {
        return false;
      }
      FMassEntityManager::GetArchetypeForEntity(param_1,&local_18,*param_2);
      if (local_18.DataPtr.Object == (FMassArchetypeData *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.DataPtr.SharedReferenceCount.ReferenceController);
        return false;
      }
      if ((local_18.DataPtr.Object == (FMassArchetypeData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0xef,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                        (this_00,&(local_18.DataPtr.Object)->CompositionDescriptor);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.DataPtr.SharedReferenceCount.ReferenceController);
      return bVar3;
    }
    pFVar5 = FMassDebugger::GetActiveEnvironmentChecked(param_1);
    if ((pFVar5->SelectedEntity).Index != (*param_2).Index) {
      return false;
    }
    bVar3 = (pFVar5->SelectedEntity).SerialNumber == (*param_2).SerialNumber;
  }
  if (!bVar3) {
    return false;
  }
  return true;
}

// ApplyEntityFilterByArchetype @ 1471f3990

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Debug::FBreakpoint::ApplyEntityFilterByArchetype
          (FBreakpoint *this,FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassFragmentRequirements *this_00;
  
  if (this->FilterType == None) {
    return true;
  }
  if (this->FilterType == Query) {
    this_00 = (FMassFragmentRequirements *)&this->Filter;
    if ((this->Filter).TypeIndex != '\x01') {
      this_00 = (FMassFragmentRequirements *)0x0;
    }
    if (this_00 != (FMassFragmentRequirements *)0x0) {
      if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                           ,0xef,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                        (this_00,&((param_1->DataPtr).Object)->CompositionDescriptor);
      return bVar2;
    }
  }
  return false;
}

// ApplyEntityFilterByFragments @ 1471f39d0

bool __thiscall
UE::Mass::Debug::FBreakpoint::ApplyEntityFilterByFragments
          (FBreakpoint *this,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  EFilterType EVar2;
  uchar uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  TVariant<FMassEntityHandle,FMassFragmentRequirements> *pTVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  EVar2 = this->FilterType;
  if (EVar2 == None) {
    return true;
  }
  if ((EVar2 != SpecificEntity) && (EVar2 != SelectedEntity)) {
    if (EVar2 != Query) {
      return true;
    }
    uVar3 = (this->Filter).TypeIndex;
    pTVar9 = &this->Filter;
    if (uVar3 != '\x01') {
      pTVar9 = (TVariant<FMassEntityHandle,FMassFragmentRequirements> *)0x0;
    }
    if (pTVar9 != (TVariant<FMassEntityHandle,FMassFragmentRequirements> *)0x0) {
      iVar4 = (int)pTVar9->_padding_;
      plVar10 = (longlong *)pTVar9->_padding_;
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      plVar14 = plVar10 + (longlong)iVar4 * 2;
      for (; plVar10 != plVar14; plVar10 = plVar10 + 2) {
        if (*(char *)((longlong)plVar10 + 9) == '\0') {
          pFVar11 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar11 + (longlong)param_1->ArrayNum * 8;
          if (pFVar11 == pFVar1) {
            return false;
          }
          while (*(longlong *)pFVar11 != *plVar10) {
            pFVar11 = pFVar11 + 8;
            if (pFVar11 == pFVar1) {
              return false;
            }
          }
        }
        if (*(char *)((longlong)plVar10 + 9) == '\x02') {
          pFVar11 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar11 + (longlong)param_1->ArrayNum * 8;
          if (pFVar11 != pFVar1) {
            do {
              if (*(longlong *)pFVar11 == *plVar10) {
                return false;
              }
              pFVar11 = pFVar11 + 8;
            } while (pFVar11 != pFVar1);
          }
        }
      }
      plVar10 = &(this->Filter)._padding_;
      if (uVar3 != '\x01') {
        plVar10 = (longlong *)&DAT_00000010;
      }
      lVar6 = plVar10[1];
      plVar10 = (longlong *)*plVar10;
      if (((int)lVar6 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      plVar14 = plVar10 + (longlong)(int)lVar6 * 2;
      for (; plVar10 != plVar14; plVar10 = plVar10 + 2) {
        if (*(char *)((longlong)plVar10 + 9) == '\0') {
          pFVar11 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar11 + (longlong)param_1->ArrayNum * 8;
          if (pFVar11 == pFVar1) {
            return false;
          }
          while (*(longlong *)pFVar11 != *plVar10) {
            pFVar11 = pFVar11 + 8;
            if (pFVar11 == pFVar1) {
              return false;
            }
          }
        }
        if (*(char *)((longlong)plVar10 + 9) == '\x02') {
          pFVar11 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar11 + (longlong)param_1->ArrayNum * 8;
          if (pFVar11 != pFVar1) {
            do {
              if (*(longlong *)pFVar11 == *plVar10) {
                return false;
              }
              pFVar11 = pFVar11 + 8;
            } while (pFVar11 != pFVar1);
          }
        }
      }
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      plVar10 = &(this->Filter)._padding_;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      if (uVar3 != '\x01') {
        plVar10 = (longlong *)&DAT_00000040;
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_>
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)plVar10,&local_38);
      iVar4 = local_38.ArrayNum;
      uVar15 = (ulonglong)local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + uVar15 * 8;
      FVar13.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar4) {
          `TCheckedPointerIterator<UScriptStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
          uVar15 = local_38._8_8_ & 0xffffffff;
        }
        if (FVar13.Data == pFVar1) break;
        pFVar12 = (param_1->AllocatorInstance).Data;
        pFVar11 = pFVar12 + (longlong)param_1->ArrayNum * 8;
        while( true ) {
          if (pFVar12 == pFVar11) goto LAB_1471f3cc4;
          if (*(longlong *)pFVar12 == *(longlong *)FVar13.Data) break;
          pFVar12 = pFVar12 + 8;
        }
        FVar13.Data = FVar13.Data + 8;
      }
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      plVar10 = &(this->Filter)._padding_;
      if (uVar3 != '\x01') {
        plVar10 = (longlong *)&DAT_00000080;
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_>
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)plVar10,&local_48);
      iVar4 = local_48.ArrayNum;
      uVar15 = (ulonglong)local_48.ArrayNum;
      pFVar1 = local_48.AllocatorInstance.Data + uVar15 * 8;
      FVar13.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar4) {
          `TCheckedPointerIterator<UScriptStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          uVar15 = local_48._8_8_ & 0xffffffff;
        }
        if (FVar13.Data == pFVar1) break;
        pFVar12 = (param_1->AllocatorInstance).Data;
        pFVar11 = pFVar12 + (longlong)param_1->ArrayNum * 8;
        for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 8) {
          if (*(longlong *)pFVar12 == *(longlong *)FVar13.Data) goto LAB_1471f3cb5;
        }
        FVar13.Data = FVar13.Data + 8;
      }
LAB_1471f3cb5:
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
LAB_1471f3cc4:
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// CheckCreateEntityBreakpoints @ 1472012e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckCreateEntityBreakpoints(FMassArchetypeHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  
  FVar11.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  if (bHasBreakpoint) {
    lVar6 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
    if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar10 = FVar11.Data + lVar6 * 0x140;
    if (FVar11.Data != pFVar10) {
      pFVar9 = FVar11.Data + 0x90;
      do {
        if (pFVar9[-0x10] != (FScriptContainerElement)0x0) {
          iVar1 = *(int *)pFVar9;
          bVar3 = false;
          piVar7 = *(int **)(pFVar9 + -8);
          piVar8 = piVar7 + (longlong)iVar1 * 0xaa;
          while( true ) {
            if (*(int *)pFVar9 != iVar1) {
              `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res10);
            }
            if (piVar7 == piVar8) break;
            if (((char)piVar7[4] == '\x03') &&
               (((*(char *)((longlong)piVar7 + 0x11) == '\0' ||
                 (((*(char *)((longlong)piVar7 + 0x11) == '\x03' && ((char)piVar7[0xa6] == '\x01'))
                  && (bVar5 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                                        ((FMassFragmentRequirements *)(piVar7 + 8),param_1), bVar5))
                 )) && (*(longlong *)(piVar7 + 2) = *(longlong *)(piVar7 + 2) + 1,
                       (char)piVar7[0xa8] != '\0')))) {
              LastBreakpointHandle.Handle = *piVar7;
              bVar3 = true;
            }
            piVar7 = piVar7 + 0xaa;
          }
          if (bVar3) {
            return true;
          }
        }
        FVar11.Data = FVar11.Data + 0x140;
        pFVar9 = pFVar9 + 0x140;
      } while (FVar11.Data != pFVar10);
    }
  }
  return false;
}

// CheckCreateEntityBreakpoints @ 147201430

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckCreateEntityBreakpoints
          (TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FBreakpoint *this;
  FBreakpoint *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  
  FVar10.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  if (bHasBreakpoint) {
    lVar6 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
    if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar9 = FVar10.Data + lVar6 * 0x140;
    if (FVar10.Data != pFVar9) {
      pFVar8 = FVar10.Data + 0x90;
      do {
        if (pFVar8[-0x10] != (FScriptContainerElement)0x0) {
          iVar1 = *(int *)pFVar8;
          bVar3 = false;
          this = *(FBreakpoint **)(pFVar8 + -8);
          pFVar7 = this + iVar1;
          while( true ) {
            if (*(int *)pFVar8 != iVar1) {
              `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res10);
            }
            if (this == pFVar7) break;
            if (((this->TriggerType == EntityCreate) &&
                (bVar5 = ApplyEntityFilterByFragments(this,param_1), bVar5)) &&
               (this->HitCount = this->HitCount + 1, this->bEnabled != false)) {
              LastBreakpointHandle.Handle = (this->Handle).Handle;
              bVar3 = true;
            }
            this = this + 1;
          }
          if (bVar3) {
            pFVar9 = (param_1->AllocatorInstance).Data;
            if (pFVar9 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9);
            }
            return true;
          }
        }
        FVar10.Data = FVar10.Data + 0x140;
        pFVar8 = pFVar8 + 0x140;
      } while (FVar10.Data != pFVar9);
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
  }
  else {
    pFVar9 = (param_1->AllocatorInstance).Data;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return false;
}

// CheckDestroyEntityBreakpoints @ 147201580

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(FMassEntityHandle *param_1)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  atomic<int> aVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FBreakpoint *this;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  ForAnyElementType FVar13;
  FBreakpoint *pFVar14;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  FScriptContainerElement *local_res20;
  
  FVar13.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  if (bHasBreakpoint) {
    lVar9 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
    local_res18 = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
    if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar10 = FVar13.Data + lVar9 * 0x140;
    if (FVar13.Data != pFVar10) {
      pFVar11 = FVar13.Data + 0x90;
      local_res20 = pFVar10;
      do {
        if (pFVar11[-0x10] != (FScriptContainerElement)0x0) {
          pTVar12 = *(TReferenceControllerBase<1> **)(pFVar11 + -0x88);
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar12->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                pTVar12 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_147201630;
              }
              LOCK();
              aVar8 = pTVar12->SharedReferenceCount;
              bVar5 = aVar4 == aVar8;
              if (bVar5) {
                pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar8 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar8;
            } while (!bVar5);
            pFVar2 = *(FMassEntityManager **)FVar13.Data;
            if (pFVar2 != (FMassEntityManager *)0x0) {
              iVar1 = *(int *)pFVar11;
              bVar5 = false;
              this = *(FBreakpoint **)(pFVar11 + -8);
              pFVar14 = this + iVar1;
              while( true ) {
                if (*(int *)pFVar11 != iVar1) {
                  `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_res10);
                }
                if (this == pFVar14) break;
                if (((this->TriggerType == EntityDestroy) &&
                    (bVar7 = ApplyEntityFilter(this,pFVar2,param_1), bVar7)) &&
                   (this->HitCount = this->HitCount + 1, this->bEnabled != false)) {
                  LastBreakpointHandle.Handle = (this->Handle).Handle;
                  bVar5 = true;
                }
                this = this + 1;
              }
              pFVar10 = local_res20;
              FVar13.Data = local_res18;
              if (bVar5) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
                return true;
              }
            }
          }
LAB_147201630:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
        }
        FVar13.Data = FVar13.Data + 0x140;
        pFVar11 = pFVar11 + 0x140;
        local_res18 = FVar13.Data;
      } while (FVar13.Data != pFVar10);
    }
  }
  return false;
}

// CheckDestroyEntityBreakpoints @ 147201710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints
          (TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  FMassEntityHandle *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  bool bVar9;
  atomic<int> aVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FBreakpoint *this;
  bool bVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMassEntityHandle *pFVar16;
  ForAnyElementType FVar17;
  FBreakpoint *pFVar18;
  undefined1 local_res18 [8];
  FMassEntityHandle *local_res20;
  
  if (!bHasBreakpoint) {
    return false;
  }
  bVar13 = false;
  pFVar16 = param_1->DataPtr;
  pFVar1 = pFVar16 + param_1->ArrayNum;
  FVar17.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  do {
    if (pFVar16 == pFVar1) {
      FMassDebugger::ActiveEnvironments.AllocatorInstance.Data = FVar17.Data;
      return bVar13;
    }
    FMassDebugger::ActiveEnvironments.AllocatorInstance.Data = FVar17.Data;
    if (bHasBreakpoint != false) {
      lVar11 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
      local_res20 = pFVar16;
      if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar12 = FVar17.Data + lVar11 * 0x140;
      if (FVar17.Data != pFVar12) {
        pFVar14 = FVar17.Data + 0x90;
        do {
          pFVar16 = local_res20;
          if (pFVar14[-0x10] != (FScriptContainerElement)0x0) {
            pTVar15 = *(TReferenceControllerBase<1> **)(pFVar14 + -0x88);
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              aVar10 = pTVar15->SharedReferenceCount;
              if (aVar10 != (atomic<int>)0x0) {
LAB_147201800:
                LOCK();
                aVar2 = pTVar15->SharedReferenceCount;
                bVar6 = aVar10 == aVar2;
                if (bVar6) {
                  pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
                  aVar2 = aVar10;
                }
                aVar10 = aVar2;
                UNLOCK();
                if (!bVar6) goto code_r0x00014720180e;
                pFVar4 = *(FMassEntityManager **)FVar17.Data;
                if (pFVar4 != (FMassEntityManager *)0x0) {
                  iVar3 = *(int *)pFVar14;
                  bVar6 = false;
                  this = *(FBreakpoint **)(pFVar14 + -8);
                  pFVar18 = this + iVar3;
                  while( true ) {
                    if (*(int *)pFVar14 != iVar3) {
                      local_res18[0] = 0;
                      `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(local_res18);
                    }
                    if (this == pFVar18) break;
                    if (((this->TriggerType == EntityDestroy) &&
                        (bVar9 = ApplyEntityFilter(this,pFVar4,pFVar16), bVar9)) &&
                       (this->HitCount = this->HitCount + 1, this->bEnabled != false)) {
                      LastBreakpointHandle.Handle = (this->Handle).Handle;
                      bVar6 = true;
                    }
                    this = this + 1;
                  }
                  if (!bVar6) goto LAB_147201814;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar15);
                  bVar8 = 1;
                  goto LAB_147201846;
                }
                goto LAB_147201814;
              }
LAB_147201812:
              pTVar15 = (TReferenceControllerBase<1> *)0x0;
            }
LAB_147201814:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar15);
          }
          FVar17.Data = FVar17.Data + 0x140;
          pFVar14 = pFVar14 + 0x140;
          pFVar16 = local_res20;
        } while (FVar17.Data != pFVar12);
      }
    }
    local_res20 = pFVar16;
    bVar8 = 0;
LAB_147201846:
    bVar13 = (bool)(bVar13 | bVar8);
    pFVar16 = local_res20 + 1;
    FVar17.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  } while( true );
code_r0x00014720180e:
  if (aVar10 == (atomic<int>)0x0) goto LAB_147201812;
  goto LAB_147201800;
}

// CheckFragmentAddBreakpoints @ 147201960

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckFragmentAddBreakpoints
          (FMassEntityHandle *param_1,UScriptStruct *param_2)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  atomic<int> aVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  TReferenceControllerBase<1> *pTVar18;
  ForAnyElementType FVar19;
  FBreakpoint *this;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FBreakpoint *pFVar25;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FScriptContainerElement *local_70;
  UScriptStruct *local_68;
  FMassEntityManager *local_60;
  TReferenceControllerBase<1> *local_58;
  FScriptContainerElement *local_50;
  
  FVar19.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  if (bHasBreakpoint) {
    lVar15 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
    local_70 = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
    if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar16 = FVar19.Data + lVar15 * 0x140;
    if (FVar19.Data != pFVar16) {
      pFVar24 = FVar19.Data + 0xf0;
      local_50 = pFVar16;
      do {
        pTVar21 = (TReferenceControllerBase<1> *)0x0;
        if (pFVar24[-0x70] != (FScriptContainerElement)0x0) {
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar24 + -0xe8);
          pTVar18 = pTVar2;
          local_58 = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar2->SharedReferenceCount;
            do {
              pTVar18 = pTVar21;
              if (aVar4 == (atomic<int>)0x0) goto LAB_147201a16;
              LOCK();
              aVar8 = pTVar2->SharedReferenceCount;
              bVar5 = aVar4 == aVar8;
              if (bVar5) {
                pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar8 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar8;
            } while (!bVar5);
            local_60 = *(FMassEntityManager **)FVar19.Data;
            pTVar18 = pTVar2;
            if (local_60 != (FMassEntityManager *)0x0) {
              pTVar22 = pTVar21;
              if (param_2 != (UScriptStruct *)0x0) {
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)param_2);
                }
                local_res20.ObjectIndex = 0;
                local_res20.ObjectSerialNumber = 0;
                local_68 = param_2;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)param_2);
                }
                FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
                pTVar21 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 >> 0x20);
                pTVar22 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffff);
              }
              iVar20 = (int)pTVar21;
              uVar12 = (int)pTVar22 - iVar20 ^ (uint)((ulonglong)pTVar21 >> 0xd);
              uVar11 = (-0x61c88647 - uVar12) - iVar20 ^ uVar12 << 8;
              uVar23 = (iVar20 - uVar11) - uVar12 ^ uVar11 >> 0xd;
              uVar12 = (uVar12 - uVar23) - uVar11 ^ uVar23 >> 0xc;
              uVar11 = (uVar11 - uVar12) - uVar23 ^ uVar12 << 0x10;
              uVar23 = (uVar23 - uVar11) - uVar12 ^ uVar11 >> 5;
              uVar12 = (uVar12 - uVar23) - uVar11 ^ uVar23 >> 3;
              uVar11 = (uVar11 - uVar12) - uVar23 ^ uVar12 << 10;
              if (*(int *)pFVar24 != *(int *)(pFVar24 + 0x2c)) {
                pFVar14 = *(FScriptContainerElement **)(pFVar24 + 0x38);
                if (pFVar14 == (FScriptContainerElement *)0x0) {
                  pFVar14 = pFVar24 + 0x30;
                }
                iVar13 = *(int *)(pFVar14 +
                                 (ulonglong)
                                 (*(int *)(pFVar24 + 0x40) - 1U &
                                 ((uVar23 - uVar11) - uVar12 ^ uVar11 >> 0xf)) * 4);
                if (iVar13 != -1) {
                  lVar15 = *(longlong *)(pFVar24 + -8);
                  do {
                    lVar9 = (longlong)iVar13;
                    if ((*(int *)(lVar15 + lVar9 * 0x10) == (int)pTVar22) &&
                       (*(int *)(lVar15 + 4 + lVar9 * 0x10) == iVar20)) {
                      if (iVar13 != -1) {
                        this = *(FBreakpoint **)(pFVar24 + -0x68);
                        bVar5 = false;
                        iVar20 = *(int *)(pFVar24 + -0x60);
                        piVar17 = (int *)&(this->Trigger).field_0x4;
                        pFVar25 = this + iVar20;
                        while( true ) {
                          if (*(int *)(pFVar24 + -0x60) != iVar20) {
                            local_res18[0] = 0;
                            `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::
                            operator!='::__l2::<lambda_1>::operator()(local_res18);
                          }
                          if (this == pFVar25) break;
                          if ((char)piVar17[-2] == '\x05') {
                            bVar1 = *(byte *)(piVar17 + 1);
                            if ((1 < (ulonglong)bVar1) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                                  ,0x12f,L""), bVar7)) {
                              pcVar3 = (code *)swi(3);
                              uVar6 = (*pcVar3)();
                              return (bool)uVar6;
                            }
                            if (*(char *)((longlong)
                                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TObjectKey<UScriptStruct_const_>,TObjectKey<UMassProcessor_const_>,TObjectKey<class_UScriptStruct_const_>_>::IsSame(unsigned___int64)'
                                           ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
                              if (((char)piVar17[1] != '\x01') &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Index == TypeIndex",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                                  ,0x97,L""), bVar7)) {
                                pcVar3 = (code *)swi(3);
                                uVar6 = (*pcVar3)();
                                return (bool)uVar6;
                              }
                              local_78.ObjectIndex = piVar17[-1];
                              local_78.ObjectSerialNumber = *piVar17;
                              pUVar10 = (UScriptStruct *)FWeakObjectPtr::Get(&local_78);
                              if (((pUVar10 == param_2) &&
                                  (bVar7 = ApplyEntityFilter(this,local_60,param_1), bVar7)) &&
                                 (*(longlong *)(piVar17 + -4) = *(longlong *)(piVar17 + -4) + 1,
                                 (char)piVar17[0xa2] != '\0')) {
                                LastBreakpointHandle.Handle = (this->Handle).Handle;
                                bVar5 = true;
                              }
                            }
                          }
                          this = this + 1;
                          piVar17 = piVar17 + 0xaa;
                        }
                        pFVar16 = local_50;
                        pTVar18 = local_58;
                        FVar19.Data = local_70;
                        if (bVar5) {
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(local_58);
                          return true;
                        }
                      }
                      break;
                    }
                    iVar13 = *(int *)(lVar15 + 8 + lVar9 * 0x10);
                  } while (iVar13 != -1);
                }
              }
            }
          }
LAB_147201a16:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
        }
        FVar19.Data = FVar19.Data + 0x140;
        pFVar24 = pFVar24 + 0x140;
        local_70 = FVar19.Data;
      } while (FVar19.Data != pFVar16);
    }
  }
  return false;
}

// CheckFragmentAddBreakpoints @ 147201cf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckFragmentAddBreakpoints
          (TArrayView<FMassEntityHandle_const_,int> *param_1,UScriptStruct *param_2)

{
  FMassEntityHandle *pFVar1;
  byte bVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  atomic<int> aVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  TReferenceControllerBase<1> *pTVar19;
  ForAnyElementType FVar20;
  FBreakpoint *this;
  int iVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FMassEntityHandle *pFVar26;
  FBreakpoint *pFVar27;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  FScriptContainerElement *local_60;
  UScriptStruct *local_58;
  FMassEntityManager *local_50;
  TReferenceControllerBase<1> *local_48;
  FScriptContainerElement *local_40;
  
  if (bHasBreakpoint) {
    pFVar26 = param_1->DataPtr;
    pFVar1 = pFVar26 + param_1->ArrayNum;
    FVar20.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
    for (; FMassDebugger::ActiveEnvironments.AllocatorInstance.Data = FVar20.Data, pFVar26 != pFVar1
        ; pFVar26 = pFVar26 + 1) {
      if (bHasBreakpoint != false) {
        lVar16 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
        local_60 = FVar20.Data;
        if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar17 = FVar20.Data + lVar16 * 0x140;
        local_40 = pFVar17;
        if (FVar20.Data != pFVar17) {
          pFVar25 = FVar20.Data + 0xf0;
          do {
            pTVar22 = (TReferenceControllerBase<1> *)0x0;
            if (pFVar25[-0x70] != (FScriptContainerElement)0x0) {
              pTVar3 = *(TReferenceControllerBase<1> **)(pFVar25 + -0xe8);
              pTVar19 = pTVar3;
              local_48 = pTVar3;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                aVar5 = pTVar3->SharedReferenceCount;
                do {
                  pTVar19 = pTVar22;
                  if (aVar5 == (atomic<int>)0x0) goto LAB_147201de1;
                  LOCK();
                  aVar9 = pTVar3->SharedReferenceCount;
                  bVar6 = aVar5 == aVar9;
                  if (bVar6) {
                    pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                    aVar9 = aVar5;
                  }
                  UNLOCK();
                  aVar5 = aVar9;
                } while (!bVar6);
                local_50 = *(FMassEntityManager **)FVar20.Data;
                pTVar19 = pTVar3;
                if (local_50 != (FMassEntityManager *)0x0) {
                  pTVar23 = pTVar22;
                  if (param_2 != (UScriptStruct *)0x0) {
                    if (GC::GIsIncrementalReachabilityPending != false) {
                      GC::MarkAsReachable((UObject *)param_2);
                    }
                    local_res20.ObjectIndex = 0;
                    local_res20.ObjectSerialNumber = 0;
                    local_58 = param_2;
                    if (GC::GIsIncrementalReachabilityPending != false) {
                      GC::MarkAsReachable((UObject *)param_2);
                    }
                    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
                    pTVar22 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 >> 0x20);
                    pTVar23 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffff);
                  }
                  iVar21 = (int)pTVar22;
                  uVar13 = (int)pTVar23 - iVar21 ^ (uint)((ulonglong)pTVar22 >> 0xd);
                  uVar12 = (-0x61c88647 - uVar13) - iVar21 ^ uVar13 << 8;
                  uVar24 = (iVar21 - uVar12) - uVar13 ^ uVar12 >> 0xd;
                  uVar13 = (uVar13 - uVar24) - uVar12 ^ uVar24 >> 0xc;
                  uVar12 = (uVar12 - uVar13) - uVar24 ^ uVar13 << 0x10;
                  uVar24 = (uVar24 - uVar12) - uVar13 ^ uVar12 >> 5;
                  uVar13 = (uVar13 - uVar24) - uVar12 ^ uVar24 >> 3;
                  uVar12 = (uVar12 - uVar13) - uVar24 ^ uVar13 << 10;
                  if (*(int *)pFVar25 != *(int *)(pFVar25 + 0x2c)) {
                    pFVar15 = *(FScriptContainerElement **)(pFVar25 + 0x38);
                    if (pFVar15 == (FScriptContainerElement *)0x0) {
                      pFVar15 = pFVar25 + 0x30;
                    }
                    iVar14 = *(int *)(pFVar15 +
                                     (ulonglong)
                                     (*(int *)(pFVar25 + 0x40) - 1U &
                                     ((uVar24 - uVar12) - uVar13 ^ uVar12 >> 0xf)) * 4);
                    if (iVar14 != -1) {
                      lVar16 = *(longlong *)(pFVar25 + -8);
                      do {
                        lVar10 = (longlong)iVar14;
                        if ((*(int *)(lVar16 + lVar10 * 0x10) == (int)pTVar23) &&
                           (*(int *)(lVar16 + 4 + lVar10 * 0x10) == iVar21)) {
                          if (iVar14 != -1) {
                            this = *(FBreakpoint **)(pFVar25 + -0x68);
                            bVar6 = false;
                            iVar21 = *(int *)(pFVar25 + -0x60);
                            piVar18 = (int *)&(this->Trigger).field_0x4;
                            pFVar27 = this + iVar21;
                            while( true ) {
                              if (*(int *)(pFVar25 + -0x60) != iVar21) {
                                local_res18[0] = 0;
                                `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>
                                ::operator!='::__l2::<lambda_1>::operator()(local_res18);
                              }
                              if (this == pFVar27) break;
                              if ((char)piVar18[-2] == '\x05') {
                                bVar2 = *(byte *)(piVar18 + 1);
                                if ((1 < (ulonglong)bVar2) &&
                                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                      (
                                                  "TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                                  ,0x12f,L""), bVar8)) {
                                  pcVar4 = (code *)swi(3);
                                  uVar7 = (*pcVar4)();
                                  return (bool)uVar7;
                                }
                                if (*(char *)((longlong)
                                              &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TObjectKey<UScriptStruct_const_>,TObjectKey<UMassProcessor_const_>,TObjectKey<class_UScriptStruct_const_>_>::IsSame(unsigned___int64)'
                                               ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
                                  if (((char)piVar18[1] != '\x01') &&
                                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("Index == TypeIndex",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                                  ,0x97,L""), bVar8)) {
                                    pcVar4 = (code *)swi(3);
                                    uVar7 = (*pcVar4)();
                                    return (bool)uVar7;
                                  }
                                  local_68.ObjectIndex = piVar18[-1];
                                  local_68.ObjectSerialNumber = *piVar18;
                                  pUVar11 = (UScriptStruct *)FWeakObjectPtr::Get(&local_68);
                                  if (((pUVar11 == param_2) &&
                                      (bVar8 = ApplyEntityFilter(this,local_50,pFVar26), bVar8)) &&
                                     (*(longlong *)(piVar18 + -4) = *(longlong *)(piVar18 + -4) + 1,
                                     (char)piVar18[0xa2] != '\0')) {
                                    LastBreakpointHandle.Handle = (this->Handle).Handle;
                                    bVar6 = true;
                                  }
                                }
                              }
                              this = this + 1;
                              piVar18 = piVar18 + 0xaa;
                            }
                            pFVar17 = local_40;
                            pTVar19 = local_48;
                            FVar20.Data = local_60;
                            if (bVar6) {
                              SharedPointerInternals::TReferenceControllerBase<1>::
                              ReleaseSharedReferenceNoInline(local_48);
                              return true;
                            }
                          }
                          break;
                        }
                        iVar14 = *(int *)(lVar16 + 8 + lVar10 * 0x10);
                      } while (iVar14 != -1);
                    }
                  }
                }
              }
LAB_147201de1:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
            }
            FVar20.Data = FVar20.Data + 0x140;
            pFVar25 = pFVar25 + 0x140;
            local_60 = FVar20.Data;
          } while (FVar20.Data != pFVar17);
        }
      }
      FVar20.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
    }
  }
  return false;
}

// CheckFragmentRemoveBreakpoints @ 1472020e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Debug::FBreakpoint::CheckFragmentRemoveBreakpoints
          (FMassEntityHandle *param_1,UScriptStruct *param_2)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  atomic<int> aVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  TReferenceControllerBase<1> *pTVar18;
  ForAnyElementType FVar19;
  FBreakpoint *this;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FBreakpoint *pFVar25;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FScriptContainerElement *local_70;
  UScriptStruct *local_68;
  FMassEntityManager *local_60;
  TReferenceControllerBase<1> *local_58;
  FScriptContainerElement *local_50;
  
  FVar19.Data = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
  if (bHasBreakpoint) {
    lVar15 = (longlong)FMassDebugger::ActiveEnvironments.ArrayNum;
    local_70 = FMassDebugger::ActiveEnvironments.AllocatorInstance.Data;
    if ((FMassDebugger::ActiveEnvironments.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar16 = FVar19.Data + lVar15 * 0x140;
    if (FVar19.Data != pFVar16) {
      pFVar24 = FVar19.Data + 0xf0;
      local_50 = pFVar16;
      do {
        pTVar21 = (TReferenceControllerBase<1> *)0x0;
        if (pFVar24[-0x70] != (FScriptContainerElement)0x0) {
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar24 + -0xe8);
          pTVar18 = pTVar2;
          local_58 = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar2->SharedReferenceCount;
            do {
              pTVar18 = pTVar21;
              if (aVar4 == (atomic<int>)0x0) goto LAB_147202196;
              LOCK();
              aVar8 = pTVar2->SharedReferenceCount;
              bVar5 = aVar4 == aVar8;
              if (bVar5) {
                pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar8 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar8;
            } while (!bVar5);
            local_60 = *(FMassEntityManager **)FVar19.Data;
            pTVar18 = pTVar2;
            if (local_60 != (FMassEntityManager *)0x0) {
              pTVar22 = pTVar21;
              if (param_2 != (UScriptStruct *)0x0) {
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)param_2);
                }
                local_res20.ObjectIndex = 0;
                local_res20.ObjectSerialNumber = 0;
                local_68 = param_2;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)param_2);
                }
                FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
                pTVar21 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 >> 0x20);
                pTVar22 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffff);
              }
              iVar20 = (int)pTVar21;
              uVar12 = (int)pTVar22 - iVar20 ^ (uint)((ulonglong)pTVar21 >> 0xd);
              uVar11 = (-0x61c88647 - uVar12) - iVar20 ^ uVar12 << 8;
              uVar23 = (iVar20 - uVar11) - uVar12 ^ uVar11 >> 0xd;
              uVar12 = (uVar12 - uVar23) - uVar11 ^ uVar23 >> 0xc;
              uVar11 = (uVar11 - uVar12) - uVar23 ^ uVar12 << 0x10;
              uVar23 = (uVar23 - uVar11) - uVar12 ^ uVar11 >> 5;
              uVar12 = (uVar12 - uVar23) - uVar11 ^ uVar23 >> 3;
              uVar11 = (uVar11 - uVar12) - uVar23 ^ uVar12 << 10;
              if (*(int *)pFVar24 != *(int *)(pFVar24 + 0x2c)) {
                pFVar14 = *(FScriptContainerElement **)(pFVar24 + 0x38);
                if (pFVar14 == (FScriptContainerElement *)0x0) {
                  pFVar14 = pFVar24 + 0x30;
                }
                iVar13 = *(int *)(pFVar14 +
                                 (ulonglong)
                                 (*(int *)(pFVar24 + 0x40) - 1U &
                                 ((uVar23 - uVar11) - uVar12 ^ uVar11 >> 0xf)) * 4);
                if (iVar13 != -1) {
                  lVar15 = *(longlong *)(pFVar24 + -8);
                  do {
                    lVar9 = (longlong)iVar13;
                    if ((*(int *)(lVar15 + lVar9 * 0x10) == (int)pTVar22) &&
                       (*(int *)(lVar15 + 4 + lVar9 * 0x10) == iVar20)) {
                      if (iVar13 != -1) {
                        this = *(FBreakpoint **)(pFVar24 + -0x68);
                        bVar5 = false;
                        iVar20 = *(int *)(pFVar24 + -0x60);
                        piVar17 = (int *)&(this->Trigger).field_0x4;
                        pFVar25 = this + iVar20;
                        while( true ) {
                          if (*(int *)(pFVar24 + -0x60) != iVar20) {
                            local_res18[0] = 0;
                            `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint_const_,int,0>::
                            operator!='::__l2::<lambda_1>::operator()(local_res18);
                          }
                          if (this == pFVar25) break;
                          if ((char)piVar17[-2] == '\x06') {
                            bVar1 = *(byte *)(piVar17 + 1);
                            if ((1 < (ulonglong)bVar1) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                                  ,0x12f,L""), bVar7)) {
                              pcVar3 = (code *)swi(3);
                              uVar6 = (*pcVar3)();
                              return (bool)uVar6;
                            }
                            if (*(char *)((longlong)
                                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TObjectKey<UScriptStruct_const_>,TObjectKey<UMassProcessor_const_>,TObjectKey<class_UScriptStruct_const_>_>::IsSame(unsigned___int64)'
                                           ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
                              if (((char)piVar17[1] != '\x01') &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Index == TypeIndex",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                                  ,0x97,L""), bVar7)) {
                                pcVar3 = (code *)swi(3);
                                uVar6 = (*pcVar3)();
                                return (bool)uVar6;
                              }
                              local_78.ObjectIndex = piVar17[-1];
                              local_78.ObjectSerialNumber = *piVar17;
                              pUVar10 = (UScriptStruct *)FWeakObjectPtr::Get(&local_78);
                              if (((pUVar10 == param_2) &&
                                  (bVar7 = ApplyEntityFilter(this,local_60,param_1), bVar7)) &&
                                 (*(longlong *)(piVar17 + -4) = *(longlong *)(piVar17 + -4) + 1,
                                 (char)piVar17[0xa2] != '\0')) {
                                LastBreakpointHandle.Handle = (this->Handle).Handle;
                                bVar5 = true;
                              }
                            }
                          }
                          this = this + 1;
                          piVar17 = piVar17 + 0xaa;
                        }
                        pFVar16 = local_50;
                        pTVar18 = local_58;
                        FVar19.Data = local_70;
                        if (bVar5) {
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(local_58);
                          return true;
                        }
                      }
                      break;
                    }
                    iVar13 = *(int *)(lVar15 + 8 + lVar9 * 0x10);
                  } while (iVar13 != -1);
                }
              }
            }
          }
LAB_147202196:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
        }
        FVar19.Data = FVar19.Data + 0x140;
        pFVar24 = pFVar24 + 0x140;
        local_70 = FVar19.Data;
      } while (FVar19.Data != pFVar16);
    }
  }
  return false;
}

// DebugBreak @ 14720dcd0

/* WARNING: Removing unreachable block (ram,0x00014720dcf2) */

void __cdecl UE::Mass::Debug::FBreakpoint::DebugBreak(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DisableActiveBreakpoint @ 147212ae0

void __cdecl UE::Mass::Debug::FBreakpoint::DisableActiveBreakpoint(void)

{
  FMassDebugger::SetBreakpointEnabled(LastBreakpointHandle,false);
  return;
}

// FilterTypeToString @ 147219f40

FString * __cdecl
UE::Mass::Debug::FBreakpoint::FilterTypeToString
          (FString *__return_storage_ptr__,EFilterType param_1)

{
  if (param_1 == None) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  if (param_1 == SpecificEntity) {
    ::FString::FString(__return_storage_ptr__,L"SpecificEntity");
    return __return_storage_ptr__;
  }
  if (param_1 == SelectedEntity) {
    ::FString::FString(__return_storage_ptr__,L"SelectedEntity");
    return __return_storage_ptr__;
  }
  if (param_1 != Query) {
    ::FString::FString(__return_storage_ptr__,L"UnknownFilter");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Query");
  return __return_storage_ptr__;
}

// StringToFilterType @ 147250f40

bool __cdecl UE::Mass::Debug::FBreakpoint::StringToFilterType(FString *param_1,EFilterType *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"None");
  if (iVar1 == 0) {
    *param_2 = None;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"SpecificEntity");
  if (iVar1 == 0) {
    *param_2 = SpecificEntity;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"SelectedEntity");
  if (iVar1 == 0) {
    *param_2 = SelectedEntity;
    return true;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Query");
  if (iVar1 == 0) {
    *param_2 = Query;
    return true;
  }
  return false;
}

// StringToTriggerType @ 147251040

bool __cdecl
UE::Mass::Debug::FBreakpoint::StringToTriggerType(FString *param_1,ETriggerType *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"None");
  if (iVar1 == 0) {
    *param_2 = None;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"ProcessorExecute");
  if (iVar1 == 0) {
    *param_2 = ProcessorExecute;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"FragmentWrite");
  if (iVar1 == 0) {
    *param_2 = FragmentWrite;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"EntityCreate");
  if (iVar1 == 0) {
    *param_2 = EntityCreate;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"EntityDestroy");
  if (iVar1 == 0) {
    *param_2 = EntityDestroy;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"FragmentAdd");
  if (iVar1 == 0) {
    *param_2 = FragmentAdd;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"FragmentRemove");
  if (iVar1 == 0) {
    *param_2 = FragmentRemove;
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"TagAdd");
  if (iVar1 == 0) {
    *param_2 = TagAdd;
    return true;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"TagRemove");
  if (iVar1 == 0) {
    *param_2 = TagRemove;
    return true;
  }
  return false;
}

// TriggerTypeToString @ 1472522b0

FString * __cdecl
UE::Mass::Debug::FBreakpoint::TriggerTypeToString
          (FString *__return_storage_ptr__,ETriggerType param_1)

{
  switch(param_1) {
  case None:
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  case ProcessorExecute:
    ::FString::FString(__return_storage_ptr__,L"ProcessorExecute");
    return __return_storage_ptr__;
  case FragmentWrite:
    ::FString::FString(__return_storage_ptr__,L"FragmentWrite");
    return __return_storage_ptr__;
  case EntityCreate:
    ::FString::FString(__return_storage_ptr__,L"EntityCreate");
    return __return_storage_ptr__;
  case EntityDestroy:
    ::FString::FString(__return_storage_ptr__,L"EntityDestroy");
    return __return_storage_ptr__;
  case FragmentAdd:
    ::FString::FString(__return_storage_ptr__,L"FragmentAdd");
    return __return_storage_ptr__;
  case FragmentRemove:
    ::FString::FString(__return_storage_ptr__,L"FragmentRemove");
    return __return_storage_ptr__;
  case TagAdd:
    ::FString::FString(__return_storage_ptr__,L"TagAdd");
    return __return_storage_ptr__;
  case TagRemove:
    ::FString::FString(__return_storage_ptr__,L"TagRemove");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"UnknownTrigger");
    return __return_storage_ptr__;
  }
}

