// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 14

// StaticClass @ 14d7cb750

UClass * __cdecl UMediaPlayerTimeSynchronizationSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaPlayerTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUMediaPlayerTimeSynchronizationSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlayerTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaPlayerTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton;
}

// UMediaPlayerTimeSynchronizationSource @ 14d7d0a40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayerTimeSynchronizationSource * __thiscall
UMediaPlayerTimeSynchronizationSource::UMediaPlayerTimeSynchronizationSource
          (UMediaPlayerTimeSynchronizationSource *this,FVTableHelper *param_1)

{
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->OpenData).bIsSet = false;
  (this->StartData).bIsSet = false;
  return this;
}

// UMediaPlayerTimeSynchronizationSource @ 14d7d0a80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayerTimeSynchronizationSource * __thiscall
UMediaPlayerTimeSynchronizationSource::UMediaPlayerTimeSynchronizationSource
          (UMediaPlayerTimeSynchronizationSource *this,FObjectInitializer *param_1)

{
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->OpenData).bIsSet = false;
  (this->StartData).bIsSet = false;
  return this;
}

// ~UMediaPlayerTimeSynchronizationSource @ 14d7d1b80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaPlayerTimeSynchronizationSource::~UMediaPlayerTimeSynchronizationSource
          (UMediaPlayerTimeSynchronizationSource *this)

{
  this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  return;
}

// Close @ 14d7d4660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaPlayerTimeSynchronizationSource::Close(UMediaPlayerTimeSynchronizationSource *this)

{
  UMediaTexture *this_00;
  UMediaPlayer *this_01;
  
  if (((this->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0) &&
     (this_00 = (this->MediaTexture).field0_0x0.DebugPtr, this_00 != (UMediaTexture *)0x0)) {
    this_01 = UMediaTexture::GetMediaPlayer(this_00);
    if (this_01 != (UMediaPlayer *)0x0) {
      UMediaPlayer::Close(this_01);
    }
  }
  if ((this->StartData).bIsSet != false) {
    (this->StartData).bIsSet = false;
  }
  if ((this->OpenData).bIsSet != false) {
    (this->OpenData).bIsSet = false;
  }
  return;
}

// GetDisplayName @ 14d7d84d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
UMediaPlayerTimeSynchronizationSource::GetDisplayName
          (UMediaPlayerTimeSynchronizationSource *this,FString *__return_storage_ptr__)

{
  UMediaTexture *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UMediaPlayer *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  if (this_00 != (UMediaTexture *)0x0) {
    pUVar4 = UMediaTexture::GetMediaPlayer(this_00);
    if (pUVar4 != (UMediaPlayer *)0x0) {
      pUVar4 = UMediaTexture::GetMediaPlayer((this->MediaTexture).field0_0x0.DebugPtr);
      local_res8 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      pFVar5 = ::FString::FString(&local_18,(wchar_t *)FVar6.Data);
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
      goto LAB_14d7d8558;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = &local_38;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
LAB_14d7d8558:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFrameRate @ 14d7d86f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameRate __thiscall
UMediaPlayerTimeSynchronizationSource::GetFrameRate(UMediaPlayerTimeSynchronizationSource *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMediaPlayer *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UMediaPlayer *this_00;
  FFrameRate FVar8;
  TSharedRef<FMediaPlayerFacade,1> *pTVar9;
  FFrameRate in_RDX;
  float fVar10;
  TSharedRef<FMediaPlayerFacade,1> local_18;
  
  cVar4 = (**(code **)(this->_padding_ + 0x2c8))();
  if (cVar4 != '\0') {
    this_00 = UMediaTexture::GetMediaPlayer((this->MediaTexture).field0_0x0.DebugPtr);
    if ((this_00 == (UMediaPlayer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MediaPlayer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaPlayerTimeSynchronizationSource.cpp"
                           ,0x96,L""), bVar5)) {
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

// GetNewestSampleTime @ 14d7d9530

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameTime __thiscall
UMediaPlayerTimeSynchronizationSource::GetNewestSampleTime
          (UMediaPlayerTimeSynchronizationSource *this)

{
  UMediaTexture *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UMediaPlayer *pUVar6;
  TSharedRef<FMediaPlayerFacade,1> *pTVar7;
  IMediaPlayer *pIVar8;
  longlong *plVar9;
  FFrameTime FVar10;
  undefined8 *puVar11;
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
  undefined8 local_88;
  longlong lStack_80;
  TSharedPtr<IMediaPlayer,1> local_78;
  TSharedRef<FMediaPlayerFacade,1> local_68;
  longlong local_58;
  
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  uVar13 = 0;
  if ((this_00 != (UMediaTexture *)0x0) &&
     (pUVar6 = UMediaTexture::GetMediaPlayer(this_00), pUVar6 != (UMediaPlayer *)0x0)) {
    UMediaTexture::GetNextSampleTime((this->MediaTexture).field0_0x0.DebugPtr);
    bVar19 = local_res18 != -0x8000000000000000;
    lVar16 = local_58;
    if (bVar19) {
      lVar16 = local_res18;
    }
    pUVar6 = UMediaTexture::GetMediaPlayer((this->MediaTexture).field0_0x0.DebugPtr);
    pTVar7 = UMediaPlayer::GetPlayerFacade(pUVar6,&local_68);
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar7->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar8 = (pTVar7->Object->Player).Object;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    lVar17 = lVar16;
    if (pIVar8 != (IMediaPlayer *)0x0) {
      pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_78);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
      uVar15 = 1;
      iVar4 = (**(code **)(*plVar9 + 8))(plVar9,1);
      if (0 < iVar4) {
        local_98 = (void *)0x0;
        local_90 = 0;
        cVar2 = (**(code **)*plVar9)(plVar9,1,&local_98);
        if (cVar2 != '\0') {
          uVar14 = (ulonglong)(int)local_90;
          local_a8 = CONCAT71(local_a8._1_7_,2);
          lStack_a0 = 0;
          if ((int)local_90 != 0) {
            if ((int)local_90 < 1) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                FVar10 = (FFrameTime)(*pcVar1)();
                return FVar10;
              }
              uVar14 = local_90 & 0xffffffff;
            }
            local_a8 = *(undefined8 *)((longlong)local_98 + 0x10);
            lStack_a0 = *(longlong *)((longlong)local_98 + 0x18);
            if (1 < (int)uVar14) {
              lVar18 = 0x20;
              do {
                uVar5 = 0;
                if ((int)uVar15 < (int)uVar14) {
                  uVar5 = ~uVar15 >> 0x1f;
                }
                if (uVar5 == 0) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    FVar10 = (FFrameTime)(*pcVar1)();
                    return FVar10;
                  }
                  uVar14 = local_90 & 0xffffffff;
                }
                puVar11 = (undefined8 *)((longlong)local_98 + lVar18 + 0x10);
                local_88 = *puVar11;
                lStack_80 = puVar11[1];
                if ((char)local_a8 == '\x02') {
                  puVar11 = &local_a8;
                }
                else if ((char)local_88 == '\x02') {
                  puVar11 = &local_88;
                }
                else if (lStack_80 < lStack_a0) {
                  puVar11 = &local_a8;
                }
                else if (lStack_a0 < lStack_80) {
                  puVar11 = &local_88;
                }
                else {
                  puVar11 = &local_a8;
                  if ((char)local_a8 != '\x01') {
                    puVar11 = &local_88;
                  }
                }
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + 0x20;
                local_a8 = *puVar11;
                lStack_a0 = puVar11[1];
              } while ((int)uVar15 < (int)uVar14);
            }
          }
          if ((char)local_a8 != '\x02') {
            lVar17 = lStack_a0;
            if ((bVar19) && (lVar17 = lVar16, lVar16 < lStack_a0)) {
              lVar17 = lStack_a0;
            }
            bVar19 = true;
          }
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
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

// GetOldestSampleTime @ 14d7d9c50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameTime __thiscall
UMediaPlayerTimeSynchronizationSource::GetOldestSampleTime
          (UMediaPlayerTimeSynchronizationSource *this)

{
  UMediaTexture *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UMediaPlayer *pUVar6;
  TSharedRef<FMediaPlayerFacade,1> *pTVar7;
  IMediaPlayer *pIVar8;
  longlong *plVar9;
  FFrameTime FVar10;
  undefined8 *puVar11;
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
  undefined8 local_88;
  longlong lStack_80;
  TSharedPtr<IMediaPlayer,1> local_78;
  TSharedRef<FMediaPlayerFacade,1> local_68;
  longlong local_58;
  
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  uVar13 = 0;
  if ((this_00 != (UMediaTexture *)0x0) &&
     (pUVar6 = UMediaTexture::GetMediaPlayer(this_00), pUVar6 != (UMediaPlayer *)0x0)) {
    UMediaTexture::GetNextSampleTime((this->MediaTexture).field0_0x0.DebugPtr);
    bVar19 = local_res18 != -0x8000000000000000;
    lVar16 = local_58;
    if (bVar19) {
      lVar16 = local_res18;
    }
    pUVar6 = UMediaTexture::GetMediaPlayer((this->MediaTexture).field0_0x0.DebugPtr);
    pTVar7 = UMediaPlayer::GetPlayerFacade(pUVar6,&local_68);
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar7->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar8 = (pTVar7->Object->Player).Object;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pIVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    lVar17 = lVar16;
    if (pIVar8 != (IMediaPlayer *)0x0) {
      pIVar8 = TSharedPtr<IMediaPlayer,1>::operator->(&local_78);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8);
      uVar15 = 1;
      iVar4 = (**(code **)(*plVar9 + 8))(plVar9,1);
      if (0 < iVar4) {
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        cVar2 = (**(code **)*plVar9)(plVar9,1,&local_98);
        if (cVar2 != '\0') {
          uVar14 = (ulonglong)(int)local_90;
          local_a8 = CONCAT71(local_a8._1_7_,2);
          lStack_a0 = 0;
          if ((int)local_90 != 0) {
            if ((int)local_90 < 1) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                FVar10 = (FFrameTime)(*pcVar1)();
                return FVar10;
              }
              uVar14 = local_90 & 0xffffffff;
            }
            local_a8 = *local_98;
            lStack_a0 = local_98[1];
            if (1 < (int)uVar14) {
              lVar18 = 0x20;
              do {
                uVar5 = 0;
                if ((int)uVar15 < (int)uVar14) {
                  uVar5 = ~uVar15 >> 0x1f;
                }
                if (uVar5 == 0) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    FVar10 = (FFrameTime)(*pcVar1)();
                    return FVar10;
                  }
                  uVar14 = local_90 & 0xffffffff;
                }
                local_88 = *(undefined8 *)((longlong)local_98 + lVar18);
                lStack_80 = ((undefined8 *)((longlong)local_98 + lVar18))[1];
                if ((char)local_a8 == '\x02') {
                  puVar11 = &local_a8;
                }
                else if ((char)local_88 == '\x02') {
                  puVar11 = &local_88;
                }
                else if (lStack_a0 < lStack_80) {
                  puVar11 = &local_a8;
                }
                else if (lStack_80 < lStack_a0) {
                  puVar11 = &local_88;
                }
                else {
                  puVar11 = &local_a8;
                  if ((char)local_a8 != '\x01') {
                    puVar11 = &local_88;
                  }
                }
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + 0x20;
                local_a8 = *puVar11;
                lStack_a0 = puVar11[1];
              } while ((int)uVar15 < (int)uVar14);
            }
          }
          if ((char)local_a8 != '\x02') {
            lVar17 = lStack_a0;
            if ((bVar19) && (lVar17 = lVar16, lStack_a0 < lVar16)) {
              lVar17 = lStack_a0;
            }
            bVar19 = true;
          }
        }
        if (local_98 != (undefined8 *)0x0) {
          FMemory::Free(local_98);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
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

// GetPrivateStaticClass @ 14d7da960

UClass * __cdecl UMediaPlayerTimeSynchronizationSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaPlayerTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUMediaPlayerTimeSynchronizationSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlayerTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaPlayerTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton;
}

// IsReady @ 14d7dc000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
UMediaPlayerTimeSynchronizationSource::IsReady(UMediaPlayerTimeSynchronizationSource *this)

{
  UMediaTexture *this_00;
  bool bVar1;
  UMediaPlayer *pUVar2;
  
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  if (this_00 != (UMediaTexture *)0x0) {
    pUVar2 = UMediaTexture::GetMediaPlayer(this_00);
    if (pUVar2 != (UMediaPlayer *)0x0) {
      pUVar2 = UMediaTexture::GetMediaPlayer((this->MediaTexture).field0_0x0.DebugPtr);
      bVar1 = UMediaPlayer::IsReady(pUVar2);
      if ((bVar1) && ((this->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// Open @ 14d7dd510

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMediaPlayerTimeSynchronizationSource::Open
          (UMediaPlayerTimeSynchronizationSource *this,FTimeSynchronizationOpenData *param_1)

{
  int iVar1;
  UMediaTexture *this_00;
  TReferenceControllerBase<1> *pTVar2;
  IMediaPlayer *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  UMediaPlayer *this_01;
  UClass *pUVar8;
  UProxyMediaSource *this_02;
  TSharedRef<FMediaPlayerFacade,1> *pTVar9;
  UProxyMediaSource *pUVar10;
  FName local_res8;
  FString local_38;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  UProxyMediaSource *pUVar11;
  
  if ((TOptional<FTimeSynchronizationOpenData> *)param_1 != &this->OpenData) {
    (this->OpenData).TypedValue.SynchronizationFrameRate = param_1->SynchronizationFrameRate;
    (this->OpenData).TypedValue.RolloverFrame.bIsSet = false;
    bVar7 = (param_1->RolloverFrame).bIsSet;
    (this->OpenData).TypedValue.RolloverFrame.bIsSet = bVar7;
    if (bVar7 != false) {
      (this->OpenData).TypedValue.RolloverFrame.TypedValue = (param_1->RolloverFrame).TypedValue;
    }
    (this->OpenData).bIsSet = true;
  }
  bVar7 = false;
  if ((this->MediaSource).field0_0x0.DebugPtr == (UMediaSource *)0x0) {
    return false;
  }
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  if (this_00 == (UMediaTexture *)0x0) {
    return false;
  }
  this_01 = UMediaTexture::GetMediaPlayer(this_00);
  if (this_01 == (UMediaPlayer *)0x0) {
    return false;
  }
  this_02 = (UProxyMediaSource *)(this->MediaSource).field0_0x0.DebugPtr;
  if (this_02 == (UProxyMediaSource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMediaSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaPlayerTimeSynchronizationSource.cpp"
                       ,0x17,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
LAB_14d7dd5df:
    pUVar11 = (UProxyMediaSource *)0x0;
    pUVar10 = (UProxyMediaSource *)0x0;
    if (this_02 == (UProxyMediaSource *)0x0) goto LAB_14d7dd63f;
    pUVar8 = UProxyMediaSource::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if (((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar8->_padding_)) ||
       (this_02 = (UProxyMediaSource *)UProxyMediaSource::GetLeafMediaSource(this_02),
       pUVar11 = pUVar10, this_02 == (UProxyMediaSource *)0x0)) goto LAB_14d7dd63f;
    pUVar8 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14d7dd63f;
  }
  else {
    pUVar8 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14d7dd5df;
  }
  pUVar11 = this_02;
LAB_14d7dd63f:
  if (((char)this->_padding_ == '\0') ||
     ((pUVar11 != (UProxyMediaSource *)0x0 && (*(char *)&(pUVar11->Proxy).field0_0x0 != '\0')))) {
    bVar7 = UMediaPlayer::OpenSource(this_01,(this->MediaSource).field0_0x0.DebugPtr);
    if (bVar7) {
      pTVar9 = UMediaPlayer::GetPlayerFacade(this_01,&local_28);
      pTVar2 = (pTVar9->Object->Player).SharedReferenceCount.ReferenceController;
      pIVar3 = (pTVar9->Object->Player).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (pIVar3 == (IMediaPlayer *)0x0) {
        if (1 < (byte)LogMediaFrameworkUtilities._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
        }
        UMediaPlayer::Close(this_01);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    else if (1 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
    }
  }
  else if (1 < (byte)LogMediaFrameworkUtilities._0_1_) {
    local_res8 = (FName)((this->MediaSource).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities)
    ;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return bVar7;
}

// Start @ 14d7e1bd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaPlayerTimeSynchronizationSource::Start
          (UMediaPlayerTimeSynchronizationSource *this,FTimeSynchronizationStartData *param_1)

{
  TOptional<FTimeSynchronizationStartData> *pTVar1;
  UMediaTexture *this_00;
  FFrameRate FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UMediaPlayer *this_01;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
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
  this_00 = (this->MediaTexture).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaTexture *)0x0) &&
     (this_01 = UMediaTexture::GetMediaPlayer(this_00), this_01 != (UMediaPlayer *)0x0)) {
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_res8);
    if (((this->OpenData).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar2 = (this->OpenData).TypedValue.SynchronizationFrameRate;
    if (((this->StartData).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FFrameRate::TransformTime
              ((FFrameTime)&local_res10,(FFrameRate)(pTVar1->TypedValue).StartFrame,FVar2);
    auVar7._0_8_ = (double)iStackX_c;
    auVar7._8_8_ = 0;
    local_res18 = local_res10;
    uVar4 = local_res18;
    local_res18._4_4_ = (float)((ulonglong)local_res10 >> 0x20);
    fVar9 = local_res18._4_4_;
    auVar8._0_8_ = (((double)((longlong)(int)local_res10 * (longlong)iStackX_c) +
                    (double)local_res18._4_4_ * auVar7._0_8_) / (double)local_res8) *
                   __real_416312d000000000 + __real_3fe0000000000000;
    auVar8._8_8_ = 0;
    auVar7 = roundpd(auVar7,auVar8,1);
    local_res20.Ticks = (long64)auVar7._0_8_;
    local_res18 = uVar4;
    if ((char)this->_padding_ == '\0') {
      (**(code **)(this->_padding_ + 0x2b8))(this,&local_38);
      local_res18 = local_38;
      uVar4 = local_res18;
      local_res18._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      auVar7 = roundps(auVar8,ZEXT416((uint)(fVar9 - local_res18._4_4_)),1);
      fVar9 = (fVar9 - local_res18._4_4_) - auVar7._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar9) {
        fVar9 = ::FFrameTime::MaxSubframe;
      }
      iVar6 = (int)auVar7._0_4_ + ((int)local_res10 - (int)local_38);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_res10 = CONCAT44(fVar9,iVar6);
      local_30 = local_res10;
      fVar9 = (fVar9 * (float)iStackX_c + (float)((longlong)iVar6 * (longlong)iStackX_c)) /
              (float)local_res8;
      local_res18 = uVar4;
      if (0.0 < fVar9) {
        UMediaPlayer::SetTimeDelay(this_01,(FTimespan)(longlong)fVar9);
      }
    }
    else {
      bVar5 = UMediaPlayer::SupportsSeeking(this_01);
      if (bVar5) {
        UMediaPlayer::Seek(this_01,&local_res20);
      }
    }
    UMediaPlayer::Play(this_01);
  }
  return;
}

// StaticRegisterNativesUMediaPlayerTimeSynchronizationSource @ 14d7e1ea0

void __cdecl
UMediaPlayerTimeSynchronizationSource::StaticRegisterNativesUMediaPlayerTimeSynchronizationSource
          (void)

{
  return;
}

