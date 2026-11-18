// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FPersistentSkyAtmosphereData @ 1453fa0d0

FPersistentSkyAtmosphereData * __thiscall
FPersistentSkyAtmosphereData::FPersistentSkyAtmosphereData(FPersistentSkyAtmosphereData *this)

{
  this->bInitialised = false;
  this->CurrentScreenResolution = 0;
  this->CurrentDepthResolution = 0;
  this->CurrentTextureAerialLUTFormat = PF_Unknown;
  this->CameraAerialPerspectiveVolumes[0].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumes[1].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumesMieOnly[0].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumesMieOnly[1].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumesRayOnly[0].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumesRayOnly[1].Reference = (IPooledRenderTarget *)0x0;
  this->CameraAerialPerspectiveVolumeIndex = '\0';
  this->bSeparatedAtmosphereMieRayLeigh = false;
  return this;
}

// ~FPersistentSkyAtmosphereData @ 145405920

void __thiscall
FPersistentSkyAtmosphereData::~FPersistentSkyAtmosphereData(FPersistentSkyAtmosphereData *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  longlong lVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  longlong lVar4;
  
  lVar2 = 2;
  pTVar3 = (TRefCountPtr<IPooledRenderTarget> *)&this->CameraAerialPerspectiveVolumeCount;
  lVar4 = 2;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar4 != 0);
  pTVar3 = this->CameraAerialPerspectiveVolumesRayOnly;
  lVar4 = 2;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar4 != 0);
  pTVar3 = this->CameraAerialPerspectiveVolumesMieOnly;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar2 != 0);
  return;
}

// GetCurrentCameraAerialPerspectiveVolume @ 14543d720

TRefCountPtr<IPooledRenderTarget> __thiscall
FPersistentSkyAtmosphereData::GetCurrentCameraAerialPerspectiveVolume
          (FPersistentSkyAtmosphereData *this)

{
  byte bVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<IPooledRenderTarget> TVar5;
  IPooledRenderTarget *in_RDX;
  
  if (this->CameraAerialPerspectiveVolumes[this->CameraAerialPerspectiveVolumeIndex].Reference ==
      (IPooledRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraAerialPerspectiveVolumes[CameraAerialPerspectiveVolumeIndex].IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x11c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (IPooledRenderTarget *)(*pcVar3)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar5.Reference;
    }
  }
  bVar1 = this->CameraAerialPerspectiveVolumeIndex;
  in_RDX->_padding_ = 0;
  pIVar2 = this->CameraAerialPerspectiveVolumes[bVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetCurrentCameraAerialPerspectiveVolumeMieOnly @ 14543d7a0

TRefCountPtr<IPooledRenderTarget> __thiscall
FPersistentSkyAtmosphereData::GetCurrentCameraAerialPerspectiveVolumeMieOnly
          (FPersistentSkyAtmosphereData *this)

{
  byte bVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<IPooledRenderTarget> TVar5;
  IPooledRenderTarget *in_RDX;
  
  if (this->CameraAerialPerspectiveVolumesMieOnly[this->CameraAerialPerspectiveVolumeIndex].
      Reference == (IPooledRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraAerialPerspectiveVolumesMieOnly[CameraAerialPerspectiveVolumeIndex].IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x121,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (IPooledRenderTarget *)(*pcVar3)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar5.Reference;
    }
  }
  bVar1 = this->CameraAerialPerspectiveVolumeIndex;
  in_RDX->_padding_ = 0;
  pIVar2 = this->CameraAerialPerspectiveVolumesMieOnly[bVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetCurrentCameraAerialPerspectiveVolumeRayOnly @ 14543d820

TRefCountPtr<IPooledRenderTarget> __thiscall
FPersistentSkyAtmosphereData::GetCurrentCameraAerialPerspectiveVolumeRayOnly
          (FPersistentSkyAtmosphereData *this)

{
  byte bVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<IPooledRenderTarget> TVar5;
  IPooledRenderTarget *in_RDX;
  
  if (this->CameraAerialPerspectiveVolumesRayOnly[this->CameraAerialPerspectiveVolumeIndex].
      Reference == (IPooledRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraAerialPerspectiveVolumesRayOnly[CameraAerialPerspectiveVolumeIndex].IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x126,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (IPooledRenderTarget *)(*pcVar3)();
      return (TRefCountPtr<IPooledRenderTarget>)TVar5.Reference;
    }
  }
  bVar1 = this->CameraAerialPerspectiveVolumeIndex;
  in_RDX->_padding_ = 0;
  pIVar2 = this->CameraAerialPerspectiveVolumesRayOnly[bVar1].Reference;
  in_RDX->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// InitialiseOrNextFrame @ 145443130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPersistentSkyAtmosphereData::InitialiseOrNextFrame
          (FPersistentSkyAtmosphereData *this,Type param_1,FPooledRenderTargetDesc *param_2,
          FRHICommandListImmediate *param_3,bool param_4)

{
  IPooledRenderTarget *pIVar1;
  FRHITextureDesc *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((((this->bInitialised == false) ||
       ((param_2->Extent).field0_0x0._s_0.X != this->CurrentScreenResolution)) ||
      ((uint)param_2->Depth != this->CurrentDepthResolution)) ||
     ((param_2->Format != this->CurrentTextureAerialLUTFormat ||
      (this->bSeparatedAtmosphereMieRayLeigh != param_4)))) {
    iVar3 = 0;
    this->bSeparatedAtmosphereMieRayLeigh = param_4;
    pTVar5 = this->CameraAerialPerspectiveVolumesRayOnly;
    this->CameraAerialPerspectiveVolumeCount = (param_1 == ES3_1) + '\x01';
    do {
      pwVar4 = L"SkyAtmosphere.CameraAPVolume1";
      if (iVar3 == 0) {
        pwVar4 = L"SkyAtmosphere.CameraAPVolume0";
      }
      pFVar2 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_98,param_2);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_3,pFVar2,
                 pTVar5 + -4,pwVar4);
      if ((void *)local_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._64_8_);
      }
      if (this->bSeparatedAtmosphereMieRayLeigh == false) {
        pIVar1 = pTVar5[-2].Reference;
        if (pIVar1 != (IPooledRenderTarget *)0x0) {
          pTVar5[-2].Reference = (IPooledRenderTarget *)0x0;
          (**(code **)(pIVar1->_padding_ + 0x38))();
        }
        pIVar1 = pTVar5->Reference;
        if (pIVar1 != (IPooledRenderTarget *)0x0) {
          pTVar5->Reference = (IPooledRenderTarget *)0x0;
          (**(code **)(pIVar1->_padding_ + 0x38))();
        }
      }
      else {
        pwVar4 = L"SkyAtmosphere.CameraAPVolumeMieOnly1";
        if (iVar3 == 0) {
          pwVar4 = L"SkyAtmosphere.CameraAPVolumeMieOnly0";
        }
        pFVar2 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_98,param_2);
        FRenderTargetPool::FindFreeElement
                  ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_3,pFVar2,
                   pTVar5 + -2,pwVar4);
        if ((void *)local_98._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._64_8_);
        }
        pwVar4 = L"SkyAtmosphere.CameraAPVolumeRayOnly1";
        if (iVar3 == 0) {
          pwVar4 = L"SkyAtmosphere.CameraAPVolumeRayOnly0";
        }
        pFVar2 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_98,param_2);
        FRenderTargetPool::FindFreeElement
                  ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_3,pFVar2,
                   pTVar5,pwVar4);
        if ((void *)local_98._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._64_8_);
        }
      }
      iVar3 = iVar3 + 1;
      pTVar5 = pTVar5 + 1;
    } while (iVar3 < (int)(uint)this->CameraAerialPerspectiveVolumeCount);
    this->bInitialised = true;
    this->CurrentScreenResolution = (param_2->Extent).field0_0x0._s_0.X;
    this->CurrentDepthResolution = (uint)param_2->Depth;
    this->CurrentTextureAerialLUTFormat = param_2->Format;
  }
  this->CameraAerialPerspectiveVolumeIndex =
       (uchar)((this->CameraAerialPerspectiveVolumeIndex + 1) %
              (uint)this->CameraAerialPerspectiveVolumeCount);
  return;
}

// GetGPUSizeBytes @ 1454f4b00

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FPersistentSkyAtmosphereData::GetGPUSizeBytes(FPersistentSkyAtmosphereData *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TRefCountPtr<IPooledRenderTarget> *pTVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar5 = 0;
  pTVar4 = this->CameraAerialPerspectiveVolumesMieOnly;
  uVar7 = 0;
  do {
    if (pTVar4[-2].Reference == (IPooledRenderTarget *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)((pTVar4[-2].Reference)->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar1 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar4[-2].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    if (pTVar4->Reference == (IPooledRenderTarget *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(pTVar4->Reference->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(pTVar4->Reference->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    if (pTVar4[2].Reference == (IPooledRenderTarget *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar3 = (**(code **)((pTVar4[2].Reference)->_padding_ + 0x18))();
      uVar6 = (ulonglong)uVar3;
    }
    if (((param_1) && ((int)uVar6 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar4[2].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar7 = uVar7 + 1;
    uVar5 = uVar5 + uVar1 + (ulonglong)uVar2 + uVar6;
    pTVar4 = pTVar4 + 1;
  } while (uVar7 < 2);
  return uVar5;
}

