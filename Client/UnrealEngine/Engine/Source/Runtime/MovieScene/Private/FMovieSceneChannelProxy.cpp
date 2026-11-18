// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// FindEntry @ 1460c51c0

FMovieSceneChannelEntry * __thiscall
FMovieSceneChannelProxy::FindEntry(FMovieSceneChannelProxy *this,FName param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FMovieSceneChannelEntry *pFVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  uint uVar9;
  uint uVar10;
  FName local_res10;
  
  pTVar1 = &this->Entries;
  uVar10 = (this->Entries).ArrayNum;
  FVar8 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  uVar9 = 0;
  local_res10 = param_1;
  if (0 < (int)uVar10) {
    do {
      iVar6 = (uVar10 >> 1) + uVar9;
      iVar5 = ::FName::Compare((FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18),&local_res10);
      if (iVar5 < 0) {
        uVar9 = iVar6 + (uVar10 & 1);
      }
      uVar3 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar9 < (this->Entries).ArrayNum) {
    FVar8 = (this->Entries).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
    }
    iVar6 = ::FName::Compare(&local_res10,(FName *)((longlong)FVar8 + (longlong)(int)uVar9 * 0x18));
    if ((-1 < iVar6) && (uVar9 != 0xffffffff)) {
      uVar10 = 0;
      if ((int)uVar9 < (this->Entries).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FMovieSceneChannelEntry *)(*pcVar2)();
          return pFVar7;
        }
      }
      FVar8 = (this->Entries).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
        FVar8 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
      }
      return (FMovieSceneChannelEntry *)((longlong)FVar8 + (longlong)(int)uVar9 * 0x18);
    }
  }
  return (FMovieSceneChannelEntry *)0x0;
}

// FindIndex @ 1460c5380

int __thiscall
FMovieSceneChannelProxy::FindIndex
          (FMovieSceneChannelProxy *this,FName param_1,FMovieSceneChannel *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneChannelEntry *pFVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    return -1;
  }
  iVar4 = (pFVar5->Channels).ArrayNum;
  pFVar1 = (pFVar5->Channels).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar6 = pFVar1;
  while( true ) {
    if (pFVar6 == pFVar1 + (longlong)iVar4 * 8) {
      return -1;
    }
    if (*(FMovieSceneChannel **)pFVar6 == param_2) break;
    pFVar6 = pFVar6 + 8;
  }
  return (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
}

// GetChannel @ 1460c9360

FMovieSceneChannel * __thiscall
FMovieSceneChannelProxy::GetChannel(FMovieSceneChannelProxy *this,FName param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    return (FMovieSceneChannel *)0x0;
  }
  pFVar2 = (pFVar5->Channels).AllocatorInstance.Data;
  iVar1 = (pFVar5->Channels).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMovieSceneChannel *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((-1 < param_2) && (param_2 < iVar1)) {
    if (param_2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar3)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar2 + (longlong)param_2 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// MakeHandle @ 1460d9870

FMovieSceneChannelHandle * __thiscall
FMovieSceneChannelProxy::MakeHandle
          (FMovieSceneChannelProxy *this,FMovieSceneChannelHandle *__return_storage_ptr__,
          FName param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FMovieSceneChannelProxy *pFVar3;
  code *pcVar4;
  int iVar5;
  FMovieSceneChannelHandle *pFVar6;
  FMovieSceneChannelProxy *pFVar7;
  FMovieSceneChannelProxy *pFVar8;
  bool bVar9;
  
  pFVar3 = (FMovieSceneChannelProxy *)this->_padding_;
  pFVar7 = (FMovieSceneChannelProxy *)0x0;
  pFVar8 = pFVar3;
  if (pFVar3 != (FMovieSceneChannelProxy *)0x0) {
    iVar2 = (int)pFVar3->_padding_;
    do {
      pFVar8 = pFVar7;
      if (iVar2 == 0) goto LAB_1460d98db;
      LOCK();
      iVar5 = (int)pFVar3->_padding_;
      bVar9 = iVar2 == iVar5;
      if (bVar9) {
        *(int *)&pFVar3->_padding_ = iVar2 + 1;
        iVar5 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar5;
    } while (!bVar9);
    pFVar7 = (FMovieSceneChannelProxy *)this->_padding_;
    pFVar8 = pFVar3;
  }
LAB_1460d98db:
  if ((pFVar7 != this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FMovieSceneChannelHandle *)(*pcVar4)();
    return pFVar6;
  }
  if (pFVar7 == (FMovieSceneChannelProxy *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneChannelHandle *)(*pcVar4)();
      return pFVar6;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneChannelHandle *)(*pcVar4)();
      return pFVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar8 == (FMovieSceneChannelProxy *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (__return_storage_ptr__->WeakChannelProxy).Object = pFVar7;
    (__return_storage_ptr__->WeakChannelProxy).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->ChannelTypeName = param_1;
    __return_storage_ptr__->ChannelIndex = param_2;
  }
  else {
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar8->_padding_ + 4);
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar8->_padding_ + 4);
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    (__return_storage_ptr__->WeakChannelProxy).Object = pFVar7;
    (__return_storage_ptr__->WeakChannelProxy).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar8;
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar8->_padding_ + 4);
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    __return_storage_ptr__->ChannelTypeName = param_1;
    __return_storage_ptr__->ChannelIndex = param_2;
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar8->_padding_ + 4);
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(pFVar8->_padding_ + 8))(pFVar8,1);
    }
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar8->_padding_ + 4);
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(pFVar8->_padding_ + 8))(pFVar8,1);
    }
  }
  return __return_storage_ptr__;
}

// NumChannels @ 1460da620

int __thiscall FMovieSceneChannelProxy::NumChannels(FMovieSceneChannelProxy *this)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FMovieSceneChannelEntry> FVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->Entries).AllocatorInstance.SecondaryData;
  iVar5 = (this->Entries).ArrayNum;
  iVar7 = 0;
  if (FVar6 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar6 = (ForElementType<FMovieSceneChannelEntry>)&this->Entries;
  }
  FVar1 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar6 + (longlong)iVar5 * 0x18);
  while( true ) {
    if ((this->Entries).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneChannelEntry_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    iVar2 = *(int *)((longlong)FVar6 + 0x10);
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar7 = iVar7 + iVar2;
    FVar6 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar6 + 0x18);
  }
  return iVar7;
}

// FMovieSceneChannelProxy<FMovieSceneBoolChannel> @ 1461ea200

/* WARNING: Removing unreachable block (ram,0x0001461ea34c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneBoolChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneBoolChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneBoolChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneBoolChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneBoolChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneBoolChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneBoolChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// ~FMovieSceneChannelProxy @ 1461ff4b0

void __thiscall FMovieSceneChannelProxy::~FMovieSceneChannelProxy(FMovieSceneChannelProxy *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  ForElementType<FMovieSceneChannelEntry> FVar5;
  
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&this->OnDestroy);
  FVar5 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar5 = (ForElementType<FMovieSceneChannelEntry>)&this->Entries;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar5,(this->Entries).ArrayNum);
  FVar5 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnDestroy).field_0x8,
             *(int *)&(this->OnDestroy).field_0x10);
  pvVar3 = *(void **)&(this->OnDestroy).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroy);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

