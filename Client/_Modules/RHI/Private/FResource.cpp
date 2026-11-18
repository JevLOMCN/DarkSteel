// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// EnumerateSubresources @ 145cdadc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FResource::EnumerateSubresources
          (FResource *this,FSubresourceRange *param_1,
          TFunctionRef<void___cdecl(RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&)>
          *param_2,bool param_3)

{
  int *piVar1;
  FSubresourceState *pFVar2;
  TArray<RHIValidation::FSubresourceState,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int *piVar22;
  undefined8 local_5c;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  if (((((param_1->MipIndex == 0) && (param_1->ArraySlice == 0)) && (param_1->PlaneIndex == 0)) &&
      ((param_1->NumMips == this->NumMips && (param_1->NumArraySlices == this->NumArraySlices)))) &&
     (param_1->NumPlanes == this->NumPlanes)) {
    bVar12 = true;
    if ((this->SubresourceStates).ArrayNum == 0) {
      local_5c = 0xffffffffffffffff;
      local_54 = 0xffffffff;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&this->WholeResourceState,&local_5c);
      goto LAB_145cdb0c4;
    }
  }
  else {
    bVar12 = false;
  }
  piVar22 = &(this->SubresourceStates).ArrayNum;
  if (*piVar22 == 0) {
    pTVar3 = &this->SubresourceStates;
    uVar18 = this->NumPlanes * this->NumArraySlices * this->NumMips;
    uVar20 = (ulonglong)uVar18;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar1 = &(this->SubresourceStates).ArrayMax;
    if ((this->SubresourceStates).ArrayMax < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar18,&pTVar3->AllocatorInstance,0,piVar1);
    }
    if (uVar18 != 0) {
      pFVar2 = &this->WholeResourceState;
      do {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar8 <= pFVar2) && (pFVar2 < pFVar8 + (longlong)*piVar1 * 0x60)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = (this->SubresourceStates).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x860,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->SubresourceStates).ArrayNum = iVar13 + 1;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).LastTransitionFences.field_0x8;
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        lVar16 = (longlong)iVar13 * 0x60;
        *(undefined8 *)(pFVar8 + lVar16) = *(undefined8 *)&pFVar2->LastTransitionFences;
        *(undefined8 *)(pFVar8 + lVar16 + 8) = uVar10;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).States.field_0x8;
        *(undefined8 *)(pFVar8 + lVar16 + 0x10) = *(undefined8 *)&(this->WholeResourceState).States;
        *(undefined8 *)(pFVar8 + lVar16 + 0x10 + 8) = uVar10;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).States.field_0x18;
        *(undefined8 *)(pFVar8 + lVar16 + 0x20) =
             *(undefined8 *)&(this->WholeResourceState).States.field_0x10;
        *(undefined8 *)(pFVar8 + lVar16 + 0x20 + 8) = uVar10;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).States.field_0x28;
        *(undefined8 *)(pFVar8 + lVar16 + 0x30) =
             *(undefined8 *)&(this->WholeResourceState).States.field_0x20;
        *(undefined8 *)(pFVar8 + lVar16 + 0x30 + 8) = uVar10;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).States.field_0x38;
        *(undefined8 *)(pFVar8 + lVar16 + 0x40) =
             *(undefined8 *)&(this->WholeResourceState).States.field_0x30;
        *(undefined8 *)(pFVar8 + lVar16 + 0x40 + 8) = uVar10;
        uVar10 = *(undefined8 *)&(this->WholeResourceState).States.field_0x48;
        *(undefined8 *)(pFVar8 + lVar16 + 0x50) =
             *(undefined8 *)&(this->WholeResourceState).States.field_0x40;
        *(undefined8 *)(pFVar8 + lVar16 + 0x50 + 8) = uVar10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (*piVar22 != 0) {
    uVar18 = param_1->PlaneIndex;
    uVar4 = param_1->NumMips;
    uVar5 = param_1->MipIndex;
    uVar6 = param_1->NumArraySlices;
    uVar7 = param_1->ArraySlice;
    uVar14 = param_1->NumPlanes + uVar18;
    for (; uVar18 < uVar14; uVar18 = uVar18 + 1) {
      for (uVar19 = param_1->MipIndex; uVar19 < uVar4 + uVar5; uVar19 = uVar19 + 1) {
        for (uVar17 = param_1->ArraySlice; uVar17 < uVar6 + uVar7; uVar17 = uVar17 + 1) {
          uVar21 = (uVar17 * this->NumMips + uVar19) * this->NumPlanes + uVar18;
          uVar15 = 0;
          if ((int)uVar21 < (this->SubresourceStates).ArrayNum) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          local_50 = uVar19;
          local_4c = uVar17;
          local_48 = uVar18;
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (**(code **)param_2)
                    (*(undefined8 *)&param_2->field_0x8,
                     (this->SubresourceStates).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x60
                     ,&local_50);
        }
      }
    }
  }
  if (!bVar12) {
    return;
  }
LAB_145cdb0c4:
  if ((param_3) && (iVar13 = (this->SubresourceStates).ArrayNum, iVar13 != 0)) {
    if ((iVar13 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = (this->SubresourceStates).AllocatorInstance.Data;
    piVar22 = &(this->SubresourceStates).ArrayMax;
    uVar10 = *(undefined8 *)(pFVar8 + 8);
    *(undefined8 *)&(this->WholeResourceState).LastTransitionFences = *(undefined8 *)pFVar8;
    *(undefined8 *)&(this->WholeResourceState).LastTransitionFences.field_0x8 = uVar10;
    uVar10 = *(undefined8 *)(pFVar8 + 0x18);
    *(undefined8 *)&(this->WholeResourceState).States = *(undefined8 *)(pFVar8 + 0x10);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x8 = uVar10;
    uVar10 = *(undefined8 *)(pFVar8 + 0x28);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x10 = *(undefined8 *)(pFVar8 + 0x20);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x18 = uVar10;
    uVar10 = *(undefined8 *)(pFVar8 + 0x38);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x20 = *(undefined8 *)(pFVar8 + 0x30);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x28 = uVar10;
    uVar10 = *(undefined8 *)(pFVar8 + 0x48);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x30 = *(undefined8 *)(pFVar8 + 0x40);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x38 = uVar10;
    uVar10 = *(undefined8 *)(pFVar8 + 0x58);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x40 = *(undefined8 *)(pFVar8 + 0x50);
    *(undefined8 *)&(this->WholeResourceState).States.field_0x48 = uVar10;
    (this->SubresourceStates).ArrayNum = 0;
    if (*piVar22 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->SubresourceStates).AllocatorInstance,0,piVar22);
    }
  }
  return;
}

// InitBarrierTracking @ 145cdf380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FResource::InitBarrierTracking
          (FResource *this,int param_1,int param_2,int param_3,ERHIAccess param_4,wchar_t *param_5)

{
  code *pcVar1;
  int6 iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uStackX_c;
  undefined2 uStack_1a;
  
  if (param_4 == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceState != ERHIAccess::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x904,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = (uint6)(param_4 == Discard) << 0x20;
  this->TrackedState = (FState)(CONCAT44(uStackX_c,param_4) & 0xffffff00ffffffff);
  bVar4 = 3;
  (this->TransientState).AcquireBacktrace = (void *)0x0;
  (this->TransientState).NumAcquiredSubresources = (int)iVar2;
  (this->TransientState).bTransient = (bool)(char)((uint6)iVar2 >> 0x20);
  (this->TransientState).Status = (char)((uint6)iVar2 >> 0x28);
  *(undefined2 *)&(this->TransientState).field_0xe = uStack_1a;
  this->NumMips = param_1;
  this->NumArraySlices = param_2;
  this->NumPlanes = param_3;
  do {
    bVar5 = ~bVar4 + 1 & bVar4;
    if ((bVar5 == 1) || (bVar5 != 2)) {
      lVar6 = 0x50;
      lVar7 = 0x54;
      lVar8 = 0x48;
    }
    else {
      lVar6 = 0x78;
      lVar7 = 0x7c;
      lVar8 = 0x70;
    }
    *(ERHIAccess *)((longlong)&this->NumMips + lVar6) = param_4;
    *(byte *)((longlong)&this->NumMips + lVar7) = bVar5;
    *(undefined8 *)((longlong)&this->NumMips + lVar8) =
         *(undefined8 *)((longlong)&this->NumMips + lVar6);
    bVar4 = bVar4 & ~(~bVar4 + 1);
  } while (bVar4 != 0);
  if (param_5 != (wchar_t *)0x0) {
    SetDebugName(this,param_5,(wchar_t *)0x0);
  }
  return;
}

// InitTransient @ 145cdf5e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FResource::InitTransient(FResource *this,wchar_t *param_1)

{
  EStatus *pEVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  pEVar1 = &(this->TransientState).Status;
  if ((((this->TransientState).bTransient == false) || (*pEVar1 == Acquired)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransientState.bTransient && TransientState.Status != FTransientState::EStatus::Acquired"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x8f2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *pEVar1 = None;
  ::FString::operator=(&this->DebugName,param_1);
  bVar4 = 3;
  do {
    bVar5 = ~bVar4 + 1 & bVar4;
    if ((bVar5 == 1) || (bVar5 != 2)) {
      lVar6 = 8;
      lVar8 = 0xc;
      lVar7 = 0;
    }
    else {
      lVar6 = 0x30;
      lVar8 = 0x34;
      lVar7 = 0x28;
    }
    *(undefined4 *)(&(this->WholeResourceState).States.field_0x0 + lVar6) = 0x40000;
    (&(this->WholeResourceState).States.field_0x0)[lVar8] = bVar5;
    *(undefined8 *)(&(this->WholeResourceState).States.field_0x0 + lVar7) =
         *(undefined8 *)(&(this->WholeResourceState).States.field_0x0 + lVar6);
    bVar4 = bVar4 & ~(~bVar4 + 1);
  } while (bVar4 != 0);
  (this->SubresourceStates).ArrayNum = 0;
  if ((this->SubresourceStates).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->SubresourceStates).AllocatorInstance,0,
               &(this->SubresourceStates).ArrayMax);
  }
  return;
}

// ReleaseOpRef @ 145cef580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FResource::ReleaseOpRef(FResource *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  pFVar1 = &this->NumOpRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                       ,0x171,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetDebugName @ 145cf16f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FResource::SetDebugName(FResource *this,wchar_t *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  FString local_38;
  FString local_28;
  
  local_res8[0] = 0;
  bVar8 = param_2 == (wchar_t *)0x0;
  if (bVar8) {
    pFVar4 = ::FString::FString(&local_28,param_1);
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    pFVar4 = &local_38;
  }
  pFVar1 = &this->DebugName;
  if (pFVar1 != pFVar4) {
    pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DebugName).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->DebugName).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (bVar8) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (this->LoggingMode != Manual) {
    if (param_1 == (wchar_t *)0x0) {
LAB_145cf184e:
      this->LoggingMode = None;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          `RHIValidation::GetAutoLogResourceNames'::__l2::FInit::FInit(&::Init);
          atexit(`RHIValidation::GetAutoLogResourceNames'::__l2::
                 _dynamic_atexit_destructor_for__Init__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      iVar2 = ::Init.Strings.ArrayNum;
      pFVar7 = ::Init.Strings.AllocatorInstance.Data + (longlong)iVar2 * 0x10;
      FVar6.Data = ::Init.Strings.AllocatorInstance.Data;
      while( true ) {
        if (::Init.Strings.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6.Data == pFVar7) goto LAB_145cf184e;
        if (*(int *)(FVar6.Data + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)FVar6.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp(param_1,pwVar5);
        if (iVar3 == 0) break;
        FVar6.Data = FVar6.Data + 0x10;
      }
      this->LoggingMode = Automatic;
    }
  }
  return;
}

