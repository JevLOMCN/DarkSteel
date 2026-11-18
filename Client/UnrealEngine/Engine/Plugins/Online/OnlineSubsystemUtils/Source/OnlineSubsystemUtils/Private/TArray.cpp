// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 22

// operator= @ 14ec57930

TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *this,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPlayerReservation *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPlayerReservation,int>
              ((FPlayerReservation *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPlayerReservation *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPlayerReservation,FPlayerReservation,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveAt @ 14ec913b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 14ec91480

void __thiscall
TArray<UIpNetDriver::FAggregatedIP,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UIpNetDriver::FAggregatedIP,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar1 + (longlong)param_1 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + (longlong)param_1 * 0x18 + 8));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 14ec91af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<AOnlineBeaconClient> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(AOnlineBeaconClient **)pFVar7 == (param_1->field0_0x0).DebugPtr) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
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
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// SetNumUninitialized @ 14ec97a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TFixedAllocator<1024>_>::SetNumUninitialized
          (TArray<unsigned_char,TFixedAllocator<1024>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_char> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_> @ 14eca99b0

int __thiscall
TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_>
          (TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FUniqueNetId_const_,1> *param_1)

{
  TSharedPtr<FUniqueNetId_const_,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<FUniqueNetId_const_,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar5 = pTVar1;
    do {
      if (pTVar5->Object == param_1->Object) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
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
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(FUniqueNetId **)pFVar6 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FUniqueNetId *)0x0;
  return iVar4;
}

// FindByKey<FString> @ 14eca9f50

FPartyBeaconCrossplayPlatformMapping * __thiscall
TArray<FPartyBeaconCrossplayPlatformMapping,TSizedDefaultAllocator<32>_>::FindByKey<FString>
          (TArray<FPartyBeaconCrossplayPlatformMapping,TSizedDefaultAllocator<32>_> *this,
          FString *param_1)

{
  int iVar1;
  int iVar2;
  FPartyBeaconCrossplayPlatformMapping *pFVar3;
  FPartyBeaconCrossplayPlatformMapping *pFVar4;
  bool bVar5;
  
  pFVar3 = (FPartyBeaconCrossplayPlatformMapping *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + this->ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return (FPartyBeaconCrossplayPlatformMapping *)0x0;
    }
    iVar2 = (pFVar3->PlatformName).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return pFVar3;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->PlatformName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// IndexOfByPredicate<FUniqueNetIdMatcher> @ 14ecaa450

int __thiscall
TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<FUniqueNetIdMatcher>
          (TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,
          FUniqueNetIdMatcher param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar5 = this->ArrayNum;
  pFVar6 = pFVar1;
  while( true ) {
    if (pFVar6 == pFVar1 + (longlong)iVar5 * 0x10) {
      return -1;
    }
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) break;
    cVar4 = (*(code *)**(undefined8 **)param_1.UniqueIdTarget)
                      (param_1.UniqueIdTarget,*(longlong *)pFVar6);
    if (cVar4 != '\0') {
      return (int)((longlong)pFVar6 - (longlong)pFVar1 >> 4);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// RemoveAt @ 14ecc5f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 14ecc6030

void __thiscall
TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPartyReservation,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x58;
  DestructItems<FPlayerReservation,int>(*(FPlayerReservation **)(_Dst + 0x48),*(int *)(_Dst + 0x50))
  ;
  if (*(void **)(_Dst + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x48));
  }
  DestructItems<FPlayerReservation,int>(*(FPlayerReservation **)(_Dst + 0x38),*(int *)(_Dst + 0x40))
  ;
  if (*(void **)(_Dst + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x38));
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x58,(longlong)iVar2 * 0x58);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ecc60e0

void __thiscall
TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueNetIdRepl *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FUniqueNetIdRepl *)(pFVar1 + (longlong)param_1 * 0x58);
  if ((void *)this_00[1]._padding_ != (void *)0x0) {
    FMemory::Free((void *)this_00[1]._padding_);
  }
  if ((void *)this_00[1]._padding_ != (void *)0x0) {
    FMemory::Free((void *)this_00[1]._padding_);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x58,(longlong)iVar2 * 0x58);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ecc6180

void __thiscall
TArray<FSpectatorReservation,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSpectatorReservation,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueNetIdRepl *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FUniqueNetIdRepl *)(pFVar1 + (longlong)param_1 * 0x88);
  if ((void *)this_00[2]._padding_ != (void *)0x0) {
    FMemory::Free((void *)this_00[2]._padding_);
  }
  if ((void *)this_00[2]._padding_ != (void *)0x0) {
    FMemory::Free((void *)this_00[2]._padding_);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(this_00 + 1);
  FUniqueNetIdRepl::~FUniqueNetIdRepl(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x88,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ecc6240

void __thiscall
TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ecc62c0

void __thiscall
TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedPtr<FUniqueNetId_const_,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TSharedPtr<FUniqueNetId_const_,1> *)(pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// AddUniqueImpl<TSharedRef<FUniqueNetId_const_,1>_const_&> @ 14ecd51f0

int __thiscall
TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedRef<FUniqueNetId_const_,1>_const_&>
          (TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  TSharedRef<FUniqueNetId_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<FUniqueNetId_const_,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
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
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FUniqueNetId **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<FUniqueNetIdWrapper> @ 14ecd5320

int __thiscall
TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FUniqueNetIdWrapper>
          (TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *this,
          FUniqueNetIdWrapper *param_1)

{
  FUniqueNetIdWrapper *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FUniqueNetIdWrapper *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
    *(undefined ***)pFVar5 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)(pFVar5 + 8),&param_1->Variant);
  }
  return iVar4;
}

// ~TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_> @ 14ecda740

void __thiscall
TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_>::
~TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_>
          (TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOnlineStoreCategory,int>
            ((FOnlineStoreCategory *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Find @ 14ece6570

int __thiscall
TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::Find
          (TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *this,
          FUniqueNetIdWrapper *param_1)

{
  int iVar1;
  FUniqueNetIdWrapper *pFVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar6;
  FUniqueNetId *pFVar7;
  FUniqueNetId *pFVar8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar9;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar10;
  FUniqueNetIdWrapper *this_00;
  
  pFVar2 = (FUniqueNetIdWrapper *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  do {
    if (this_00 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = FUniqueNetIdWrapper::IsValid(this_00);
    bVar4 = FUniqueNetIdWrapper::IsValid(param_1);
    if (bVar3 == bVar4) {
      if (!bVar3) {
LAB_14ece6658:
        return (int)((longlong)this_00 - (longlong)pFVar2 >> 5);
      }
      if ((this_00->Variant).TypeIndex == (param_1->Variant).TypeIndex) {
        bVar3 = FUniqueNetIdWrapper::IsV1(this_00);
        if (bVar3) {
          pTVar6 = FUniqueNetIdWrapper::GetV1Unsafe(param_1);
          pFVar7 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar6);
          pTVar6 = FUniqueNetIdWrapper::GetV1Unsafe(this_00);
          pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar6);
          cVar5 = (*(code *)**(undefined8 **)pFVar8)(pFVar8,pFVar7);
        }
        else {
          pTVar9 = FUniqueNetIdWrapper::GetV2Unsafe(this_00);
          pTVar10 = FUniqueNetIdWrapper::GetV2Unsafe(param_1);
          cVar5 = pTVar9->Value == pTVar10->Value;
        }
        if (cVar5 != '\0') goto LAB_14ece6658;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// RemoveAt @ 14ecf8ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 14ecf8bb0

void __thiscall
TArray<FRemoteTalker,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FRemoteTalker,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x18 + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ecf8c40

void __thiscall
TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueNetIdWrapper *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FUniqueNetIdWrapper *)(pFVar1 + (longlong)param_1 * 0x20);
  DestructItems<FUniqueNetIdWrapper,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x20,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingleSwap @ 14ecf8cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *this,
          FUniqueNetIdWrapper *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = Find(this,param_1);
  uVar4 = 0;
  if (uVar3 != 0xffffffff) {
    if ((int)(uVar3 + 1) <= this->ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    RemoveAtSwapImpl(this,uVar3,1);
    if (param_2 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
    }
    uVar4 = 1;
  }
  return uVar4;
}

