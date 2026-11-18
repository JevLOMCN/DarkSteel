// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 12

// AddUniqueImpl<signed_char_const_&> @ 1441c9560

int __thiscall
TArray<signed_char,TSizedDefaultAllocator<32>_>::AddUniqueImpl<signed_char_const_&>
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *this,schar *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if (*pFVar5 == (FScriptContainerElement)*param_1) {
        iVar4 = (int)pFVar5 - (int)pFVar1;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar1[iVar4] = (FScriptContainerElement)*param_1;
  return iVar4;
}

// AddUniqueImpl<int_const_&> @ 1441c9660

int __thiscall
TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int_const_&>
          (TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *this,int *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  ForElementType<int> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(int *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<int>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<int>)this;
    if (FVar2 != (ForElementType<int>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (int *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(int *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FName_const_&> @ 1441c9770

int __thiscall
TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<FName_const_&>
          (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1)

{
  ForElementType<FName> FVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  ForElementType<FName> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FName>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FName *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FName>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FName>)this;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FName *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    this = (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FName *)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister> @ 1441c9880

int __thiscall
TArray<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister,TSizedDefaultAllocator<32>_>
::AddUniqueImpl<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister>
          (TArray<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister,TSizedDefaultAllocator<32>_>
           *this,FPendingCategoryRegister *param_1)

{
  FPendingCategoryRegister *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPendingCategoryRegister *pFVar6;
  
  pFVar1 = (FPendingCategoryRegister *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if ((pFVar6->CategoryIndex == param_1->CategoryIndex) &&
         (pFVar6->CounterIndex == param_1->CounterIndex)) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FPendingCategoryRegister *)(pFVar2 + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// FindByKey<UObject_const_*> @ 1441cd1e0

FEntry * __thiscall
TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_>::FindByKey<UObject_const_*>
          (TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_> *this,
          UObject **param_1)

{
  FEntry *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  FEntry *this_00;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = (FEntry *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (FEntry *)0x0;
    }
    pUVar2 = *param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    if (((this_00->SubObject).ObjectIndex == local_res8.ObjectIndex) &&
       ((this_00->SubObject).ObjectSerialNumber == local_res8.ObjectSerialNumber)) break;
    bVar3 = FWeakObjectPtr::IsValid(&this_00->SubObject);
    if ((!bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_res8), !bVar3)) {
      return this_00;
    }
    this_00 = this_00 + 1;
  }
  return this_00;
}

// IndexOfByKey<UObject_*> @ 1441cd6b0

int __thiscall
TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_>::IndexOfByKey<UObject_*>
          (TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_> *this,
          UObject **param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  UObject *pUVar3;
  bool bVar4;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  pFVar2 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == (FWeakObjectPtr *)((longlong)pFVar2 + (longlong)iVar1 * 0x14)) {
      return -1;
    }
    pUVar3 = *param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    if (((this_00->ObjectIndex == local_res8.ObjectIndex) &&
        (this_00->ObjectSerialNumber == local_res8.ObjectSerialNumber)) ||
       ((bVar4 = FWeakObjectPtr::IsValid(this_00), !bVar4 &&
        (bVar4 = FWeakObjectPtr::IsValid(&local_res8), !bVar4)))) break;
    this_00 = (FWeakObjectPtr *)&this_00[2].ObjectSerialNumber;
  }
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x14);
}

// AddDefaulted @ 1441d5950

int __thiscall
TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
AddDefaulted(TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1)

{
  ForElementType<UE::Net::FEscalationCounter> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
    this = (TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  DefaultConstructItems<UE::Net::FEscalationCounter,int>
            ((void *)((longlong)iVar2 * 0x10 + (longlong)this),param_1);
  return iVar2;
}

// AddZeroed @ 1441d6a10

int __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)param_1 << 2);
  return iVar1;
}

// RemoveAtImpl @ 1441e7960

void __thiscall
TArray<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FPollerStatus *_Dst;
  
  _Dst = (FPollerStatus *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingleSwap @ 1441e7fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
          (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,EAllowShrinking param_2)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FName> FVar7;
  ForElementType<FName> FVar8;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FName>)this;
  if (FVar1 != (ForElementType<FName>)0x0) {
    FVar8 = FVar1;
  }
  FVar1 = (ForElementType<FName>)((longlong)FVar8 + (longlong)this->ArrayNum * 8);
  if (FVar8 != FVar1) {
    FVar7 = FVar8;
    do {
      if (*(FName *)FVar7 == *param_1) {
        uVar6 = (uint)((longlong)FVar7 - (longlong)FVar8 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        FVar1 = (this->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<FName>)this;
        if (FVar1 != (ForElementType<FName>)0x0) {
          FVar8 = FVar1;
        }
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove((void *)((longlong)FVar8 + (longlong)(int)uVar6 * 8),
                  (void *)((longlong)FVar8 + (longlong)(this->ArrayNum - iVar4) * 8),
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      FVar7 = (ForElementType<FName>)((longlong)FVar7 + 8);
    } while (FVar7 != FVar1);
  }
  return 0;
}

// SetNumUninitialized @ 1441ebbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<FNetTracePacketContentEvent> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
              (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)this;
        if (FVar2 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1441ebd40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

