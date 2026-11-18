// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 14

// StaticClass @ 14d7cb650

UClass * __cdecl UMediaBundleTimeSynchronizationSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUMediaBundleTimeSynchronizationSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBundleTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaBundleTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton;
}

// UMediaBundleTimeSynchronizationSource @ 14d7d09c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaBundleTimeSynchronizationSource * __thiscall
UMediaBundleTimeSynchronizationSource::UMediaBundleTimeSynchronizationSource
          (UMediaBundleTimeSynchronizationSource *this,FVTableHelper *param_1)

{
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
  (this->MediaBundle).field0_0x0.DebugPtr = (UMediaBundle *)0x0;
  (this->OpenData).bIsSet = false;
  (this->StartData).bIsSet = false;
  return this;
}

// UMediaBundleTimeSynchronizationSource @ 14d7d0a00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaBundleTimeSynchronizationSource * __thiscall
UMediaBundleTimeSynchronizationSource::UMediaBundleTimeSynchronizationSource
          (UMediaBundleTimeSynchronizationSource *this,FObjectInitializer *param_1)

{
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
  (this->MediaBundle).field0_0x0.DebugPtr = (UMediaBundle *)0x0;
  (this->OpenData).bIsSet = false;
  (this->StartData).bIsSet = false;
  return this;
}

// ~UMediaBundleTimeSynchronizationSource @ 14d7d1b60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaBundleTimeSynchronizationSource::~UMediaBundleTimeSynchronizationSource
          (UMediaBundleTimeSynchronizationSource *this)

{
  this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  return;
}

// Close @ 14d7d4630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaBundleTimeSynchronizationSource::Close(UMediaBundleTimeSynchronizationSource *this)

{
  int *piVar1;
  TObjectPtr<UMediaBundle>_u_0 TVar2;
  UMediaPlayer *this_00;
  TArray<UMediaBundle_*,TSizedDefaultAllocator<32>_> *this_01;
  IMediaProfileManager *pIVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  TObjectPtr<UMediaBundle>_u_0 aTStackX_8 [4];
  
  if ((this->StartData).bIsSet != false) {
    (this->StartData).bIsSet = false;
  }
  if ((this->OpenData).bIsSet != false) {
    (this->OpenData).bIsSet = false;
  }
  TVar2 = (TObjectPtr<UMediaBundle>_u_0)(this->MediaBundle).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr == (UMediaBundle *)0x0) {
    return;
  }
  piVar1 = &(TVar2.DebugPtr)->ReferenceCount;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (this_00 = ((TVar2.DebugPtr)->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)
     ) {
    if (GIsGarbageCollecting == false) {
      UMediaPlayer::Close(this_00);
    }
    else {
      aTStackX_8[0] = TVar2;
      this_01 = &MediaBundlePrivate::FMediaBundleDeferredCloser::Get()->BundlesToClose;
      TArray<UMediaBundle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMediaBundle_*_const_&>
                (this_01,&aTStackX_8[0].DebugPtr);
    }
    pIVar3 = IMediaProfileManager::Get();
    this_02 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_02,TVar2.DebugPtr);
    return;
  }
  return;
}

// GetDisplayName @ 14d7d83e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
UMediaBundleTimeSynchronizationSource::GetDisplayName
          (UMediaBundleTimeSynchronizationSource *this,FString *__return_storage_ptr__)

{
  UMediaBundle *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaBundle *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_38;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FString::FString(&local_18,(wchar_t *)FVar6.Data);
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFrameRate @ 14d7d85d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameRate __thiscall
UMediaBundleTimeSynchronizationSource::GetFrameRate(UMediaBundleTimeSynchronizationSource *this)

{
  UMediaPlayer *this_00;
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FFrameRate FVar8;
  TSharedRef<FMediaPlayerFacade,1> *pTVar9;
  FFrameRate in_RDX;
  float fVar10;
  TSharedRef<FMediaPlayerFacade,1> local_18;
  
  cVar4 = (**(code **)(this->_padding_ + 0x2c8))();
  if (cVar4 != '\0') {
    this_00 = *(UMediaPlayer **)((longlong)(this->MediaBundle).field0_0x0 + 0x38);
    if ((this_00 == (UMediaPlayer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MediaPlayer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaBundleTimeSynchronizationSource.cpp"
                           ,0x91,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar8 = (FFrameRate)(*pcVar3)();
      return FVar8;
    }
    pTVar9 = UMediaPlayer::GetPlayerFacade(this_00,&local_18);
    pTVar1 = (pTVar9->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar2 = (pTVar9->Object->Player).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pIVar2 != (IMediaPlayer *)0x0) {
      iVar6 = UMediaPlayer::GetSelectedTrack(this_00,Video);
      iVar7 = UMediaPlayer::GetTrackFormat(this_00,Video,iVar6);
      fVar10 = UMediaPlayer::GetVideoTrackFrameRate(this_00,iVar6,iVar7);
      fVar10 = fVar10 * ___real_44fa4000;
      *(int *)((longlong)in_RDX + 4) = 0x3e9;
      *(int *)in_RDX = (int)ROUND(fVar10 + __real_3f000000) >> 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return in_RDX;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  *(int *)in_RDX = 60000;
  *(int *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetNewestSampleTime @ 14d7d91d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameTime __thiscall
UMediaBundleTimeSynchronizationSource::GetNewestSampleTime
          (UMediaBundleTimeSynchronizationSource *this)

{
  UMediaBundle *pUVar1;
  UMediaPlayer *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSharedRef<FMediaPlayerFacade,1> *pTVar7;
  IMediaPlayer *pIVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FFrameTime FVar11;
  int *piVar12;
  ulonglong uVar13;
  FFrameTime in_RDX;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_a8;
  longlong lStack_a0;
  void *local_98;
  ulonglong local_90;
  TSharedPtr<IMediaPlayer,1> local_88;
  undefined8 local_78;
  longlong lStack_70;
  TSharedRef<FMediaPlayerFacade,1> local_68;
  longlong local_58;
  
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  bVar19 = false;
  uVar13 = 0;
  if (((pUVar1 != (UMediaBundle *)0x0) &&
      (this_00 = (pUVar1->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) &&
     ((pUVar1->MediaTexture).field0_0x0.DebugPtr != (UMediaTexture *)0x0)) {
    pTVar7 = UMediaPlayer::GetPlayerFacade(this_00,&local_68);
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar7->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar8 = (pTVar7->Object->Player).Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    lVar17 = local_58;
    if (pIVar8 != (IMediaPlayer *)0x0) {
      UMediaTexture::GetNextSampleTime
                ((((this->MediaBundle).field0_0x0.DebugPtr)->MediaTexture).field0_0x0.DebugPtr);
      bVar19 = local_res18 != -0x8000000000000000;
      lVar17 = local_58;
      if (bVar19) {
        lVar17 = local_res18;
      }
      pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_88);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
      uVar15 = 1;
      iVar5 = (**(code **)(*plVar9 + 8))(plVar9,1);
      if (0 < iVar5) {
        local_98 = (void *)0x0;
        local_90 = 0;
        pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_88);
        puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
        cVar3 = (**(code **)*puVar10)(puVar10,1,&local_98);
        lVar16 = lVar17;
        if (cVar3 != '\0') {
          uVar14 = (ulonglong)(int)local_90;
          local_a8 = CONCAT71(local_a8._1_7_,2);
          lStack_a0 = 0;
          if ((int)local_90 != 0) {
            if ((int)local_90 < 1) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                FVar11 = (FFrameTime)(*pcVar2)();
                return FVar11;
              }
              uVar14 = local_90 & 0xffffffff;
            }
            local_a8 = *(undefined8 *)((longlong)local_98 + 0x10);
            lStack_a0 = *(longlong *)((longlong)local_98 + 0x18);
            if (1 < (int)uVar14) {
              lVar18 = 0x20;
              do {
                uVar6 = 0;
                if ((int)uVar15 < (int)uVar14) {
                  uVar6 = ~uVar15 >> 0x1f;
                }
                if (uVar6 == 0) {
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar4) {
                    pcVar2 = (code *)swi(3);
                    FVar11 = (FFrameTime)(*pcVar2)();
                    return FVar11;
                  }
                  uVar14 = local_90 & 0xffffffff;
                }
                puVar10 = (undefined8 *)((longlong)local_98 + lVar18 + 0x10);
                local_78 = *puVar10;
                lStack_70 = puVar10[1];
                if ((char)local_a8 == '\x02') {
                  puVar10 = &local_a8;
                }
                else if ((char)local_78 == '\x02') {
                  puVar10 = &local_78;
                }
                else if (lStack_70 < lStack_a0) {
                  puVar10 = &local_a8;
                }
                else if (lStack_a0 < lStack_70) {
                  puVar10 = &local_78;
                }
                else {
                  puVar10 = &local_a8;
                  if ((char)local_a8 != '\x01') {
                    puVar10 = &local_78;
                  }
                }
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + 0x20;
                local_a8 = *puVar10;
                lStack_a0 = puVar10[1];
              } while ((int)uVar15 < (int)uVar14);
            }
          }
          if ((char)local_a8 != '\x02') {
            lVar16 = lStack_a0;
            if ((bVar19) && (lVar16 = lVar17, lVar17 < lStack_a0)) {
              lVar16 = lStack_a0;
            }
            bVar19 = true;
          }
        }
        lVar17 = lVar16;
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (bVar19) {
      piVar12 = (int *)(**(code **)(this->_padding_ + 0x2c0))(this,local_res20);
      dVar24 = ((double)*piVar12 / (double)piVar12[1]) * (double)lVar17 * __real_3e7ad7f29abcaf48;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar24;
      auVar22 = roundpd(in_XMM2,auVar22,1);
      dVar21 = auVar22._0_8_;
      dVar20 = dVar21;
      if (__real_41dfffffffc00000 <= dVar21) {
        dVar20 = __real_41dfffffffc00000;
      }
      fVar23 = (float)(dVar24 - dVar21);
      if (dVar20 <= __real_c1e0000000000000) {
        dVar20 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fVar23) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar23) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      uVar15 = (int)dVar20;
      if (__real_3f000000 <= fVar23) {
        uVar15 = (int)dVar20 + 1;
      }
      uVar13 = (ulonglong)uVar15;
    }
  }
  *(ulonglong *)in_RDX = uVar13;
  return in_RDX;
}

// GetOldestSampleTime @ 14d7d98f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameTime __thiscall
UMediaBundleTimeSynchronizationSource::GetOldestSampleTime
          (UMediaBundleTimeSynchronizationSource *this)

{
  UMediaBundle *pUVar1;
  UMediaPlayer *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSharedRef<FMediaPlayerFacade,1> *pTVar7;
  IMediaPlayer *pIVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FFrameTime FVar11;
  int *piVar12;
  ulonglong uVar13;
  FFrameTime in_RDX;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 *local_98;
  ulonglong local_90;
  TSharedPtr<IMediaPlayer,1> local_88;
  undefined8 local_78;
  longlong lStack_70;
  TSharedRef<FMediaPlayerFacade,1> local_68;
  longlong local_58;
  
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  bVar19 = false;
  uVar13 = 0;
  if (((pUVar1 != (UMediaBundle *)0x0) &&
      (this_00 = (pUVar1->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) &&
     ((pUVar1->MediaTexture).field0_0x0.DebugPtr != (UMediaTexture *)0x0)) {
    pTVar7 = UMediaPlayer::GetPlayerFacade(this_00,&local_68);
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar7->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar8 = (pTVar7->Object->Player).Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    lVar17 = local_58;
    if (pIVar8 != (IMediaPlayer *)0x0) {
      UMediaTexture::GetNextSampleTime
                ((((this->MediaBundle).field0_0x0.DebugPtr)->MediaTexture).field0_0x0.DebugPtr);
      bVar19 = local_res18 != -0x8000000000000000;
      lVar17 = local_58;
      if (bVar19) {
        lVar17 = local_res18;
      }
      pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_88);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
      uVar15 = 1;
      iVar5 = (**(code **)(*plVar9 + 8))(plVar9,1);
      if (0 < iVar5) {
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_88);
        puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
        cVar3 = (**(code **)*puVar10)(puVar10,1,&local_98);
        lVar16 = lVar17;
        if (cVar3 != '\0') {
          uVar14 = (ulonglong)(int)local_90;
          local_a8 = CONCAT71(local_a8._1_7_,2);
          lStack_a0 = 0;
          if ((int)local_90 != 0) {
            if ((int)local_90 < 1) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                FVar11 = (FFrameTime)(*pcVar2)();
                return FVar11;
              }
              uVar14 = local_90 & 0xffffffff;
            }
            local_a8 = *local_98;
            lStack_a0 = local_98[1];
            if (1 < (int)uVar14) {
              lVar18 = 0x20;
              do {
                uVar6 = 0;
                if ((int)uVar15 < (int)uVar14) {
                  uVar6 = ~uVar15 >> 0x1f;
                }
                if (uVar6 == 0) {
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar4) {
                    pcVar2 = (code *)swi(3);
                    FVar11 = (FFrameTime)(*pcVar2)();
                    return FVar11;
                  }
                  uVar14 = local_90 & 0xffffffff;
                }
                local_78 = *(undefined8 *)((longlong)local_98 + lVar18);
                lStack_70 = ((undefined8 *)((longlong)local_98 + lVar18))[1];
                if ((char)local_a8 == '\x02') {
                  puVar10 = &local_a8;
                }
                else if ((char)local_78 == '\x02') {
                  puVar10 = &local_78;
                }
                else if (lStack_a0 < lStack_70) {
                  puVar10 = &local_a8;
                }
                else if (lStack_70 < lStack_a0) {
                  puVar10 = &local_78;
                }
                else {
                  puVar10 = &local_a8;
                  if ((char)local_a8 != '\x01') {
                    puVar10 = &local_78;
                  }
                }
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + 0x20;
                local_a8 = *puVar10;
                lStack_a0 = puVar10[1];
              } while ((int)uVar15 < (int)uVar14);
            }
          }
          if ((char)local_a8 != '\x02') {
            lVar16 = lStack_a0;
            if ((bVar19) && (lVar16 = lVar17, lStack_a0 < lVar17)) {
              lVar16 = lStack_a0;
            }
            bVar19 = true;
          }
        }
        lVar17 = lVar16;
        if (local_98 != (undefined8 *)0x0) {
          FMemory::Free(local_98);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (bVar19) {
      piVar12 = (int *)(**(code **)(this->_padding_ + 0x2c0))(this,local_res20);
      dVar24 = ((double)*piVar12 / (double)piVar12[1]) * (double)lVar17 * __real_3e7ad7f29abcaf48;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar24;
      auVar22 = roundpd(in_XMM2,auVar22,1);
      dVar21 = auVar22._0_8_;
      dVar20 = dVar21;
      if (__real_41dfffffffc00000 <= dVar21) {
        dVar20 = __real_41dfffffffc00000;
      }
      fVar23 = (float)(dVar24 - dVar21);
      if (dVar20 <= __real_c1e0000000000000) {
        dVar20 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fVar23) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar23) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      uVar15 = (int)dVar20;
      if (__real_3f000000 <= fVar23) {
        uVar15 = (int)dVar20 + 1;
      }
      uVar13 = (ulonglong)uVar15;
    }
  }
  *(ulonglong *)in_RDX = uVar13;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d7da8a0

UClass * __cdecl UMediaBundleTimeSynchronizationSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUMediaBundleTimeSynchronizationSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBundleTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaBundleTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton;
}

// IsReady @ 14d7dbfb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
UMediaBundleTimeSynchronizationSource::IsReady(UMediaBundleTimeSynchronizationSource *this)

{
  UMediaBundle *pUVar1;
  UMediaPlayer *this_00;
  bool bVar2;
  
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaBundle *)0x0) &&
     (this_00 = (pUVar1->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) {
    bVar2 = UMediaPlayer::IsReady(this_00);
    if ((bVar2) &&
       ((pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr,
        (pUVar1->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0 &&
        ((pUVar1->MediaTexture).field0_0x0.DebugPtr != (UMediaTexture *)0x0)))) {
      return true;
    }
  }
  return false;
}

// Open @ 14d7dd2b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaBundleTimeSynchronizationSource::Open
          (UMediaBundleTimeSynchronizationSource *this,FTimeSynchronizationOpenData *param_1)

{
  int iVar1;
  UMediaBundle *pUVar2;
  UMediaPlayer *this_00;
  TReferenceControllerBase<1> *pTVar3;
  IMediaPlayer *pIVar4;
  bool bVar5;
  UClass *pUVar6;
  UProxyMediaSource *this_01;
  TSharedRef<FMediaPlayerFacade,1> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  UProxyMediaSource *pUVar9;
  FName local_res8;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  UProxyMediaSource *pUVar10;
  
  if ((TOptional<FTimeSynchronizationOpenData> *)param_1 != &this->OpenData) {
    (this->OpenData).TypedValue.SynchronizationFrameRate = param_1->SynchronizationFrameRate;
    (this->OpenData).TypedValue.RolloverFrame.bIsSet = false;
    bVar5 = (param_1->RolloverFrame).bIsSet;
    (this->OpenData).TypedValue.RolloverFrame.bIsSet = bVar5;
    if (bVar5 != false) {
      (this->OpenData).TypedValue.RolloverFrame.TypedValue = (param_1->RolloverFrame).TypedValue;
    }
    (this->OpenData).bIsSet = true;
  }
  pUVar2 = (this->MediaBundle).field0_0x0.DebugPtr;
  if (pUVar2 == (UMediaBundle *)0x0) {
    return false;
  }
  this_00 = (pUVar2->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 == (UMediaPlayer *)0x0) {
    return false;
  }
  this_01 = (UProxyMediaSource *)(pUVar2->MediaSource).field0_0x0.DebugPtr;
  pUVar10 = (UProxyMediaSource *)0x0;
  pUVar9 = (UProxyMediaSource *)0x0;
  if (this_01 == (UProxyMediaSource *)0x0) goto LAB_14d7dd396;
  pUVar6 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    pUVar6 = UProxyMediaSource::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar6->_padding_ ||
        (this_01 = (UProxyMediaSource *)UProxyMediaSource::GetLeafMediaSource(this_01),
        pUVar10 = pUVar9, this_01 == (UProxyMediaSource *)0x0)))) goto LAB_14d7dd396;
    pUVar6 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14d7dd396;
  }
  pUVar10 = this_01;
LAB_14d7dd396:
  if (((char)this->_padding_ == '\0') ||
     ((pUVar10 != (UProxyMediaSource *)0x0 && (*(char *)&(pUVar10->Proxy).field0_0x0 != '\0')))) {
    bVar5 = UMediaBundle::OpenMediaSource((this->MediaBundle).field0_0x0.DebugPtr);
    if (bVar5) {
      pTVar7 = UMediaPlayer::GetPlayerFacade(this_00,&local_28);
      pTVar3 = (pTVar7->Object->Player).SharedReferenceCount.ReferenceController;
      pIVar4 = (pTVar7->Object->Player).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                          local_28.SharedReferenceCount.ReferenceController._0_4_));
      if (pIVar4 == (IMediaPlayer *)0x0) {
        if (1 < (byte)LogMediaFrameworkUtilities._0_1_) {
          local_res8 = (FName)((this->MediaBundle).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_res8,(FString *)&local_28);
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
          if (local_28.Object != (FMediaPlayerFacade *)0x0) {
            FMemory::Free(local_28.Object);
          }
        }
        UMediaBundle::CloseMediaSource((this->MediaBundle).field0_0x0.DebugPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return true;
    }
    if ((byte)LogMediaFrameworkUtilities._0_1_ < 2) {
      return false;
    }
    local_res8 = (FName)((this->MediaBundle).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_28);
    pFVar8 = &::LOG_Static;
  }
  else {
    if ((byte)LogMediaFrameworkUtilities._0_1_ < 2) {
      return false;
    }
    local_res8 = (FName)((this->MediaBundle).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_28);
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
  if (local_28.Object != (FMediaPlayerFacade *)0x0) {
    FMemory::Free(local_28.Object);
  }
  return false;
}

// Start @ 14d7e19a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaBundleTimeSynchronizationSource::Start
          (UMediaBundleTimeSynchronizationSource *this,FTimeSynchronizationStartData *param_1)

{
  TOptional<FTimeSynchronizationStartData> *pTVar1;
  UMediaBundle *pUVar2;
  UMediaPlayer *this_00;
  FFrameRate FVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  int local_res8;
  int iStackX_c;
  undefined8 local_res10;
  undefined8 local_res18;
  FTimespan local_res20;
  undefined8 local_38;
  undefined8 local_30;
  
  pTVar1 = &this->StartData;
  if ((TOptional<FTimeSynchronizationStartData> *)param_1 != pTVar1) {
    (pTVar1->TypedValue).StartFrame = param_1->StartFrame;
    (this->StartData).bIsSet = true;
  }
  pUVar2 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar2 != (UMediaBundle *)0x0) &&
     (this_00 = (pUVar2->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) {
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_res8);
    if ((this->OpenData).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = (this->OpenData).TypedValue.SynchronizationFrameRate;
    if ((this->StartData).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FFrameRate::TransformTime
              ((FFrameTime)&local_res10,(FFrameRate)(pTVar1->TypedValue).StartFrame,FVar3);
    auVar8._0_8_ = (double)iStackX_c;
    auVar8._8_8_ = 0;
    local_res18 = local_res10;
    uVar5 = local_res18;
    local_res18._4_4_ = (float)((ulonglong)local_res10 >> 0x20);
    fVar10 = local_res18._4_4_;
    auVar9._0_8_ = (((double)((longlong)(int)local_res10 * (longlong)iStackX_c) +
                    (double)local_res18._4_4_ * auVar8._0_8_) / (double)local_res8) *
                   __real_416312d000000000 + __real_3fe0000000000000;
    auVar9._8_8_ = 0;
    auVar8 = roundpd(auVar8,auVar9,1);
    local_res20.Ticks = (long64)auVar8._0_8_;
    local_res18 = uVar5;
    if ((char)this->_padding_ == '\0') {
      (**(code **)(this->_padding_ + 0x2b8))(this,&local_38);
      local_res18 = local_38;
      uVar5 = local_res18;
      local_res18._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      auVar8 = roundps(auVar9,ZEXT416((uint)(fVar10 - local_res18._4_4_)),1);
      fVar10 = (fVar10 - local_res18._4_4_) - auVar8._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar10) {
        fVar10 = ::FFrameTime::MaxSubframe;
      }
      iVar7 = (int)auVar8._0_4_ + ((int)local_res10 - (int)local_38);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      local_res10 = CONCAT44(fVar10,iVar7);
      local_30 = local_res10;
      fVar10 = (fVar10 * (float)iStackX_c + (float)((longlong)iVar7 * (longlong)iStackX_c)) /
               (float)local_res8;
      local_res18 = uVar5;
      if (0.0 < fVar10) {
        UMediaPlayer::SetTimeDelay(this_00,(FTimespan)(longlong)fVar10);
      }
    }
    else {
      bVar6 = UMediaPlayer::SupportsSeeking(this_00);
      if (bVar6) {
        UMediaPlayer::Seek(this_00,&local_res20);
      }
    }
    UMediaPlayer::Play(this_00);
  }
  return;
}

// StaticRegisterNativesUMediaBundleTimeSynchronizationSource @ 14d7e1e90

void __cdecl
UMediaBundleTimeSynchronizationSource::StaticRegisterNativesUMediaBundleTimeSynchronizationSource
          (void)

{
  return;
}

