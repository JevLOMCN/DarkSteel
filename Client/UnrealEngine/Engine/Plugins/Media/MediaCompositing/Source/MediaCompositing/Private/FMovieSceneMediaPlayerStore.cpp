// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 10

// FMovieSceneMediaPlayerStore @ 14ea67100

FMovieSceneMediaPlayerStore * __thiscall
FMovieSceneMediaPlayerStore::FMovieSceneMediaPlayerStore(FMovieSceneMediaPlayerStore *this)

{
  FDelegateHandle FVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneMediaPlayerStore__6B_;
  *(undefined8 *)&this->MediaPlayers = 0;
  *(undefined8 *)&(this->MediaPlayers).field_0x8 = 0;
  *(undefined8 *)&(this->MediaPlayers).field_0x20 = 0;
  *(undefined4 *)&(this->MediaPlayers).field_0x28 = 0;
  *(undefined4 *)&(this->MediaPlayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaPlayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaPlayers).field_0x34 = 0;
  *(undefined8 *)&(this->MediaPlayers).field_0x40 = 0;
  *(undefined4 *)&(this->MediaPlayers).field_0x48 = 0;
  *(undefined8 *)&this->MediaPlayerPriorities = 0;
  *(undefined8 *)&(this->MediaPlayerPriorities).field_0x8 = 0;
  *(undefined8 *)&(this->MediaPlayerPriorities).field_0x20 = 0;
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x28 = 0;
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x34 = 0;
  *(undefined8 *)&(this->MediaPlayerPriorities).field_0x40 = 0;
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x48 = 0;
  (this->OnEndFrameDelegateHandle).ID = 0;
  (this->OnPreExitDelegateHandle).ID = 0;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FMovieSceneMediaPlayerStore>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnEndFrame,(FMovieSceneMediaPlayerStore *)&stack0x00000008,
                     (pmf_e3b72090)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnEndFrameDelegateHandle).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FMovieSceneMediaPlayerStore>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnPreExit,(FMovieSceneMediaPlayerStore *)&stack0x00000008,
                     (pmf_e3b72090)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnPreExitDelegateHandle).ID = *FVar1.ID;
  return this;
}

// ~FMovieSceneMediaPlayerStore @ 14ea68070

void __thiscall
FMovieSceneMediaPlayerStore::~FMovieSceneMediaPlayerStore(FMovieSceneMediaPlayerStore *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneMediaPlayerStore__6B_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(FDelegateHandle)(this->OnEndFrameDelegateHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FDelegateHandle)(this->OnPreExitDelegateHandle).ID);
  CloseRemainingPlayers(this);
  *(undefined4 *)&(this->MediaPlayerPriorities).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaPlayerPriorities).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaPlayerPriorities);
  *(undefined4 *)&(this->MediaPlayers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaPlayers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaPlayers);
  return;
}

// CloseMediaPlayer @ 14ea695f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FMovieSceneMediaPlayerStore::CloseMediaPlayer(UMediaPlayer *param_1,bool param_2)

{
  FUObjectItem *this;
  
  if ((param_1 != (UMediaPlayer *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    UMediaPlayer::Close(param_1);
    if (param_2) {
      UMediaPlayer::CleanUpBeforeDestroy(param_1);
    }
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this,RootSet);
  }
  return;
}

// CloseRemainingPlayers @ 14ea69650

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieSceneMediaPlayerStore::CloseRemainingPlayers(FMovieSceneMediaPlayerStore *this)

{
  undefined1 *puVar1;
  UMediaPlayer *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUObjectItem *this_01;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar17 = *(int *)&(this->MediaPlayers).field_0x28;
  puVar1 = &(this->MediaPlayers).field_0x10;
  iVar13 = 0;
  iVar16 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar17 != 0) {
    puVar18 = *(uint **)&(this->MediaPlayers).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar12 = *puVar18;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea696ed;
      uVar12 = puVar18[lVar8 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar11 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = local_res10 + -1 + iVar16;
    if (iVar17 < iVar6) {
      iVar6 = iVar17;
    }
  }
LAB_14ea696ed:
  uVar12 = *(uint *)&(this->MediaPlayers).field_0x28;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar5,iVar13);
  TStack_70.CurrentBitIndex = iVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar6;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->MediaPlayers).field_0x8 -
                       *(int *)&(this->MediaPlayers).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar17 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->MediaPlayers).field_0x28;
  if (uVar12 != uVar5) {
    puVar15 = *(undefined1 **)&(this->MediaPlayers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea697f0;
      uVar12 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ea697f0:
  do {
    if (*(int *)&(this->MediaPlayers).field_0x8 - *(int *)&(this->MediaPlayers).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar8 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
               *)&this->MediaPlayers);
      return;
    }
    lVar7 = *(longlong *)&this->MediaPlayers;
    this_00 = *(UMediaPlayer **)(lVar7 + 8 + lVar8 * 0x18);
    if ((this_00 != (UMediaPlayer *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      UMediaPlayer::Close(this_00);
      UMediaPlayer::CleanUpBeforeDestroy(this_00);
      this_01 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_01,RootSet);
    }
    pUVar2 = *(UObject **)(lVar7 + lVar8 * 0x18 + 8);
    uVar11 = 0;
    iVar17 = 0;
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      uVar11 = (ulonglong)local_res18 >> 0x20;
      iVar17 = local_res18.ObjectIndex;
    }
    if (*(int *)&(this->MediaPlayerPriorities).field_0x8 !=
        *(int *)&(this->MediaPlayerPriorities).field_0x34) {
      iVar13 = (int)uVar11;
      uVar10 = iVar17 - iVar13 ^ (uint)(uVar11 >> 0xd);
      uVar5 = (-0x61c88647 - uVar10) - iVar13 ^ uVar10 << 8;
      uVar14 = (iVar13 - uVar5) - uVar10 ^ uVar5 >> 0xd;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 0xc;
      uVar5 = (uVar5 - uVar14) - uVar10 ^ uVar10 << 0x10;
      uVar14 = (uVar14 - uVar5) - uVar10 ^ uVar5 >> 5;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 3;
      uVar5 = (uVar5 - uVar10) - uVar14 ^ uVar10 << 10;
      puVar15 = *(undefined1 **)&(this->MediaPlayerPriorities).field_0x40;
      puVar9 = &(this->MediaPlayerPriorities).field_0x38;
      if (puVar15 != (undefined1 *)0x0) {
        puVar9 = puVar15;
      }
      iVar16 = *(int *)(puVar9 + ((longlong)*(int *)&(this->MediaPlayerPriorities).field_0x48 - 1U &
                                 (longlong)(int)((uVar14 - uVar5) - uVar10 ^ uVar5 >> 0xf)) * 4);
      if (iVar16 != -1) {
        lVar8 = *(longlong *)&this->MediaPlayerPriorities;
        do {
          lVar7 = (longlong)iVar16;
          if ((*(int *)(lVar8 + lVar7 * 0x18) == iVar17) &&
             (*(int *)(lVar8 + 4 + lVar7 * 0x18) == iVar13)) {
            TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                             *)&this->MediaPlayerPriorities,iVar16);
            break;
          }
          iVar16 = *(int *)(lVar8 + 0x10 + lVar7 * 0x18);
        } while (iVar16 != -1);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetMediaPlayerPriority @ 14ea6c2f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TOptional<FMovieSceneMediaPlayerPriority> * __thiscall
FMovieSceneMediaPlayerStore::GetMediaPlayerPriority
          (FMovieSceneMediaPlayerStore *this,
          TOptional<FMovieSceneMediaPlayerPriority> *__return_storage_ptr__,UMediaPlayer *param_1)

{
  FMovieSceneMediaPlayerPriority *pFVar1;
  FWeakObjectPtr local_res18;
  UMediaPlayer *local_res20;
  
  if (param_1 != (UMediaPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pFVar1 = TMapBase<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
             ::Find((TMapBase<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
                     *)&this->MediaPlayerPriorities,(FObjectKey *)&local_res18);
    if (pFVar1 != (FMovieSceneMediaPlayerPriority *)0x0) {
      __return_storage_ptr__->TypedValue = *pFVar1;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// OnEndFrame @ 14ea6e290

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FMovieSceneMediaPlayerStore::OnEndFrame(FMovieSceneMediaPlayerStore *this)

{
  undefined1 *puVar1;
  UMediaPlayer *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUObjectItem *this_01;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar17 = *(int *)&(this->MediaPlayers).field_0x28;
  puVar1 = &(this->MediaPlayers).field_0x10;
  iVar13 = 0;
  iVar16 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar17 != 0) {
    puVar18 = *(uint **)&(this->MediaPlayers).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar12 = *puVar18;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea696ed;
      uVar12 = puVar18[lVar8 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar11 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_10 = (int)lVar8;
    iVar6 = iStackX_10 + -1 + iVar16;
    if (iVar17 < iVar6) {
      iVar6 = iVar17;
    }
  }
LAB_14ea696ed:
  uVar12 = *(uint *)&(this->MediaPlayers).field_0x28;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar5,iVar13);
  TStack_70.CurrentBitIndex = iVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar6;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->MediaPlayers).field_0x8 -
                       *(int *)&(this->MediaPlayers).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar17 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->MediaPlayers).field_0x28;
  if (uVar12 != uVar5) {
    puVar15 = *(undefined1 **)&(this->MediaPlayers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea697f0;
      uVar12 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ea697f0:
  do {
    if (*(int *)&(this->MediaPlayers).field_0x8 - *(int *)&(this->MediaPlayers).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    lVar8 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
               *)&this->MediaPlayers);
      return;
    }
    lVar7 = *(longlong *)&this->MediaPlayers;
    this_00 = *(UMediaPlayer **)(lVar7 + 8 + lVar8 * 0x18);
    if ((this_00 != (UMediaPlayer *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      UMediaPlayer::Close(this_00);
      UMediaPlayer::CleanUpBeforeDestroy(this_00);
      this_01 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_01,RootSet);
    }
    pUVar2 = *(UObject **)(lVar7 + lVar8 * 0x18 + 8);
    uVar11 = 0;
    iVar17 = 0;
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FStackX_18.ObjectIndex = 0;
      FStackX_18.ObjectSerialNumber = 0;
      pUStackX_20 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStackX_20);
      uVar11 = (ulonglong)FStackX_18 >> 0x20;
      iVar17 = FStackX_18.ObjectIndex;
    }
    if (*(int *)&(this->MediaPlayerPriorities).field_0x8 !=
        *(int *)&(this->MediaPlayerPriorities).field_0x34) {
      iVar13 = (int)uVar11;
      uVar10 = iVar17 - iVar13 ^ (uint)(uVar11 >> 0xd);
      uVar5 = (-0x61c88647 - uVar10) - iVar13 ^ uVar10 << 8;
      uVar14 = (iVar13 - uVar5) - uVar10 ^ uVar5 >> 0xd;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 0xc;
      uVar5 = (uVar5 - uVar14) - uVar10 ^ uVar10 << 0x10;
      uVar14 = (uVar14 - uVar5) - uVar10 ^ uVar5 >> 5;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 3;
      uVar5 = (uVar5 - uVar10) - uVar14 ^ uVar10 << 10;
      puVar15 = *(undefined1 **)&(this->MediaPlayerPriorities).field_0x40;
      puVar9 = &(this->MediaPlayerPriorities).field_0x38;
      if (puVar15 != (undefined1 *)0x0) {
        puVar9 = puVar15;
      }
      iVar16 = *(int *)(puVar9 + ((longlong)*(int *)&(this->MediaPlayerPriorities).field_0x48 - 1U &
                                 (longlong)(int)((uVar14 - uVar5) - uVar10 ^ uVar5 >> 0xf)) * 4);
      if (iVar16 != -1) {
        lVar8 = *(longlong *)&this->MediaPlayerPriorities;
        do {
          lVar7 = (longlong)iVar16;
          if ((*(int *)(lVar8 + lVar7 * 0x18) == iVar17) &&
             (*(int *)(lVar8 + 4 + lVar7 * 0x18) == iVar13)) {
            TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                             *)&this->MediaPlayerPriorities,iVar16);
            break;
          }
          iVar16 = *(int *)(lVar8 + 0x10 + lVar7 * 0x18);
        } while (iVar16 != -1);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// OnPreExit @ 14ea6e2a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FMovieSceneMediaPlayerStore::OnPreExit(FMovieSceneMediaPlayerStore *this)

{
  undefined1 *puVar1;
  UMediaPlayer *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUObjectItem *this_01;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar17 = *(int *)&(this->MediaPlayers).field_0x28;
  puVar1 = &(this->MediaPlayers).field_0x10;
  iVar13 = 0;
  iVar16 = 0;
  uVar5 = 1;
  iVar6 = 0;
  if (iVar17 != 0) {
    puVar18 = *(uint **)&(this->MediaPlayers).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar12 = *puVar18;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea696ed;
      uVar12 = puVar18[lVar8 + 1];
    }
    uVar5 = -uVar12 & uVar12;
    uVar11 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_10 = (int)lVar8;
    iVar6 = iStackX_10 + -1 + iVar16;
    if (iVar17 < iVar6) {
      iVar6 = iVar17;
    }
  }
LAB_14ea696ed:
  uVar12 = *(uint *)&(this->MediaPlayers).field_0x28;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar5,iVar13);
  TStack_70.CurrentBitIndex = iVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar6;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->MediaPlayers).field_0x8 -
                       *(int *)&(this->MediaPlayers).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar17 < (int)uVar12)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->MediaPlayers).field_0x28;
  if (uVar12 != uVar5) {
    puVar15 = *(undefined1 **)&(this->MediaPlayers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea697f0;
      uVar12 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ea697f0:
  do {
    if (*(int *)&(this->MediaPlayers).field_0x8 - *(int *)&(this->MediaPlayers).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMediaPlayer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    lVar8 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
               *)&this->MediaPlayers);
      return;
    }
    lVar7 = *(longlong *)&this->MediaPlayers;
    this_00 = *(UMediaPlayer **)(lVar7 + 8 + lVar8 * 0x18);
    if ((this_00 != (UMediaPlayer *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      UMediaPlayer::Close(this_00);
      UMediaPlayer::CleanUpBeforeDestroy(this_00);
      this_01 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_01,RootSet);
    }
    pUVar2 = *(UObject **)(lVar7 + lVar8 * 0x18 + 8);
    uVar11 = 0;
    iVar17 = 0;
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FStackX_18.ObjectIndex = 0;
      FStackX_18.ObjectSerialNumber = 0;
      pUStackX_20 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStackX_20);
      uVar11 = (ulonglong)FStackX_18 >> 0x20;
      iVar17 = FStackX_18.ObjectIndex;
    }
    if (*(int *)&(this->MediaPlayerPriorities).field_0x8 !=
        *(int *)&(this->MediaPlayerPriorities).field_0x34) {
      iVar13 = (int)uVar11;
      uVar10 = iVar17 - iVar13 ^ (uint)(uVar11 >> 0xd);
      uVar5 = (-0x61c88647 - uVar10) - iVar13 ^ uVar10 << 8;
      uVar14 = (iVar13 - uVar5) - uVar10 ^ uVar5 >> 0xd;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 0xc;
      uVar5 = (uVar5 - uVar14) - uVar10 ^ uVar10 << 0x10;
      uVar14 = (uVar14 - uVar5) - uVar10 ^ uVar5 >> 5;
      uVar10 = (uVar10 - uVar14) - uVar5 ^ uVar14 >> 3;
      uVar5 = (uVar5 - uVar10) - uVar14 ^ uVar10 << 10;
      puVar15 = *(undefined1 **)&(this->MediaPlayerPriorities).field_0x40;
      puVar9 = &(this->MediaPlayerPriorities).field_0x38;
      if (puVar15 != (undefined1 *)0x0) {
        puVar9 = puVar15;
      }
      iVar16 = *(int *)(puVar9 + ((longlong)*(int *)&(this->MediaPlayerPriorities).field_0x48 - 1U &
                                 (longlong)(int)((uVar14 - uVar5) - uVar10 ^ uVar5 >> 0xf)) * 4);
      if (iVar16 != -1) {
        lVar8 = *(longlong *)&this->MediaPlayerPriorities;
        do {
          lVar7 = (longlong)iVar16;
          if ((*(int *)(lVar8 + lVar7 * 0x18) == iVar17) &&
             (*(int *)(lVar8 + 4 + lVar7 * 0x18) == iVar13)) {
            TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
                             *)&this->MediaPlayerPriorities,iVar16);
            break;
          }
          iVar16 = *(int *)(lVar8 + 0x10 + lVar7 * 0x18);
        } while (iVar16 != -1);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// ScheduleMediaPlayerForRelease @ 14ea6ee90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieSceneMediaPlayerStore::ScheduleMediaPlayerForRelease
          (FMovieSceneMediaPlayerStore *this,FObjectKey *param_1,UMediaPlayer *param_2)

{
  UMediaPlayer *this_00;
  UMediaPlayer **ppUVar1;
  FUObjectItem *this_01;
  UMediaPlayer *local_res18;
  FObjectKey *local_18;
  UMediaPlayer **local_10;
  
  local_res18 = param_2;
  ppUVar1 = TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
            ::Find((TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
                    *)&this->MediaPlayers,param_1);
  if ((((ppUVar1 != (UMediaPlayer **)0x0) && (*ppUVar1 != (UMediaPlayer *)0x0)) &&
      (((uint)(*ppUVar1)->_padding_ >> 0x1e & 1) == 0)) &&
     (((this_00 = *ppUVar1, this_00 != local_res18 && (this_00 != (UMediaPlayer *)0x0)) &&
      (((uint)this_00->_padding_ >> 0x1e & 1) == 0)))) {
    UMediaPlayer::Close(this_00);
    UMediaPlayer::CleanUpBeforeDestroy(this_00);
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_01,RootSet);
  }
  local_10 = &local_res18;
  local_18 = param_1;
  TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&>_>
            ((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
              *)&this->MediaPlayers,
             (TPairInitializer<FObjectKey_const_&,UMediaPlayer_*_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return;
}

// SetMediaPlayerPriority @ 14ea6f2d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMovieSceneMediaPlayerStore::SetMediaPlayerPriority
          (FMovieSceneMediaPlayerStore *this,UMediaPlayer *param_1,
          FMovieSceneMediaPlayerPriority *param_2)

{
  TMap<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  UObject *pUVar3;
  ulonglong uVar4;
  uint uVar5;
  TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&> local_res8;
  UMediaPlayer *local_res18 [2];
  FMovieSceneMediaPlayerPriority **local_a8;
  FMovieSceneMediaPlayerPriority *local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  this_00 = &this->MediaPlayerPriorities;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
              *)this_00);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar4 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      iVar2 = (int)uVar4;
      local_res8.Key =
           (FObjectKey *)
           CONCAT44(*(undefined4 *)(*local_68 + 4 + (longlong)iVar2 * 0x18),
                    *(undefined4 *)(*local_68 + (longlong)iVar2 * 0x18));
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
      if (pUVar3 == (UObject *)0x0) {
        TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,iVar2);
        local_30 = '\x01';
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar4 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar5 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar2 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_38->HashSize < iVar2)) || (iVar2 < local_38->HashSize)) {
        local_38->HashSize = iVar2;
        TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  local_res8.Value = (FMovieSceneMediaPlayerPriority *)0x0;
  if (param_1 != (UMediaPlayer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.Key = (FObjectKey *)0x0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)local_res18);
    local_res8.Value = (FMovieSceneMediaPlayerPriority *)local_res8.Key;
  }
  local_a8 = &local_res8.Value;
  local_a0 = param_2;
  TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FObjectKey_&&,FMovieSceneMediaPlayerPriority_const_&>_>
            ((TSet<TTuple<FObjectKey,FMovieSceneMediaPlayerPriority>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_a8);
  return;
}

// TryAcquireMediaPlayer @ 14ea70760

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall
FMovieSceneMediaPlayerStore::TryAcquireMediaPlayer
          (FMovieSceneMediaPlayerStore *this,FObjectKey *param_1)

{
  UMediaPlayer *pUVar1;
  UMediaPlayer **ppUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  ppUVar2 = TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
            ::Find((TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
                    *)&this->MediaPlayers,param_1);
  if (ppUVar2 != (UMediaPlayer **)0x0) {
    pUVar1 = *ppUVar2;
    if (*(int *)&(this->MediaPlayers).field_0x8 != *(int *)&(this->MediaPlayers).field_0x34) {
      uVar3 = param_1->ObjectSerialNumber;
      uVar5 = param_1->ObjectIndex - uVar3 ^ uVar3 >> 0xd;
      uVar4 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
      uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xd;
      uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xc;
      uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 0x10;
      uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 5;
      uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 3;
      uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
      TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FObjectKey>
                ((TSet<TTuple<FObjectKey,UMediaPlayer_*>,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>,FDefaultSetAllocator>
                  *)&this->MediaPlayers,(uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf,param_1);
    }
    return pUVar1;
  }
  return (UMediaPlayer *)0x0;
}

