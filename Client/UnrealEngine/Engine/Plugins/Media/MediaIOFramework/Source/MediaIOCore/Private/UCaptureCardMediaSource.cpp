// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// StaticClass @ 14d77bc90

UClass * __cdecl UCaptureCardMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"CaptureCardMediaSource",
               &Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton,
               StaticRegisterNativesUCaptureCardMediaSource,0x158,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCaptureCardMediaSource>,
               InternalVTableHelperCtorCaller<UCaptureCardMediaSource>,local_res8,
               UTimeSynchronizableMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton;
}

// UCaptureCardMediaSource @ 14d78ae30

UCaptureCardMediaSource * __thiscall
UCaptureCardMediaSource::UCaptureCardMediaSource
          (UCaptureCardMediaSource *this,FVTableHelper *param_1)

{
  UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource
            ((UTimeSynchronizableMediaSource *)this,param_1);
  this->bRenderJIT = true;
  this->bFramelock = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->EvaluationType = PlatformTime;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->Deinterlacer).field0_0x0.DebugPtr = (UVideoDeinterlacer *)0x0;
  this->InterlaceFieldOrder = TopFieldFirst;
  this->bOverrideSourceEncoding = true;
  this->OverrideSourceEncoding = Linear;
  this->bOverrideSourceColorSpace = true;
  this->OverrideSourceColorSpace = TCS_sRGB;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
  return this;
}

// UCaptureCardMediaSource @ 14d78aea0

UCaptureCardMediaSource * __thiscall
UCaptureCardMediaSource::UCaptureCardMediaSource(UCaptureCardMediaSource *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource
            ((UTimeSynchronizableMediaSource *)this);
  this->bRenderJIT = true;
  this->bFramelock = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->EvaluationType = PlatformTime;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->Deinterlacer).field0_0x0.DebugPtr = (UVideoDeinterlacer *)0x0;
  this->InterlaceFieldOrder = TopFieldFirst;
  this->bOverrideSourceEncoding = true;
  this->OverrideSourceEncoding = Linear;
  this->bOverrideSourceColorSpace = true;
  this->OverrideSourceColorSpace = TCS_sRGB;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
  pFVar2 = ::FName::FName(&local_res8,"Deinterlacer");
  FVar1 = *pFVar2;
  pUVar3 = UBobDeinterlacer::StaticClass();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (this->Deinterlacer).field0_0x0.DebugPtr = (UVideoDeinterlacer *)pUVar4;
  return this;
}

// ~UCaptureCardMediaSource @ 14d78cfe0

void __thiscall UCaptureCardMediaSource::~UCaptureCardMediaSource(UCaptureCardMediaSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&this->ColorConversionSettings);
  UTimeSynchronizableMediaSource::~UTimeSynchronizableMediaSource
            ((UTimeSynchronizableMediaSource *)this);
  return;
}

// GetMediaOption @ 14d7ab960

/* WARNING: Removing unreachable block (ram,0x00014d7abafd) */
/* WARNING: Removing unreachable block (ram,0x00014d7abb07) */

TSharedPtr<IMediaOptions::FDataContainer,1> * __thiscall
UCaptureCardMediaSource::GetMediaOption
          (UCaptureCardMediaSource *this,
          TSharedPtr<IMediaOptions::FDataContainer,1> *__return_storage_ptr__,FName *param_1,
          TSharedPtr<IMediaOptions::FDataContainer,1> *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<IMediaOptions::FDataContainer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FDataContainer *pFVar9;
  FOpenColorIOColorConversionSettings local_c0;
  
  if (*param_1 != UE::CaptureCardMediaSource::OpenColorIOSettings) {
    UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings(&local_c0);
  FOpenColorIOColorConversionSettings::operator=
            (&local_c0,(FOpenColorIOColorConversionSettings *)&this->_padding_);
  pTVar6 = ::operator_new(200);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FDataContainer *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOpenColorIODataContainer_UCaptureCardMediaSource___00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FOpenColorIODataContainer_UCaptureCardMediaSource__6B_;
    FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
              ((FOpenColorIOColorConversionSettings *)&pTVar6[2].SharedReferenceCount,&local_c0);
    pFVar9 = (FDataContainer *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 == (FDataContainer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<IMediaOptions::FDataContainer,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d7abaad;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FDataContainer **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d7abaad:
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings(&local_c0);
  return __return_storage_ptr__;
}

// GetMediaOption @ 14d7abb40

FString * __thiscall
UCaptureCardMediaSource::GetMediaOption
          (UCaptureCardMediaSource *this,FString *__return_storage_ptr__,FName *param_1,
          FString *param_2)

{
  if ((*param_1 == UE::CaptureCardMediaSource::Deinterlacer) &&
     ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0)) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this->_padding_,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  UTimeSynchronizableMediaSource::GetMediaOption
            ((UTimeSynchronizableMediaSource *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetMediaOption @ 14d7abb90

long64 __thiscall
UCaptureCardMediaSource::GetMediaOption(UCaptureCardMediaSource *this,FName *param_1,long64 param_2)

{
  FName FVar1;
  long64 lVar2;
  
  FVar1 = *param_1;
  if (FVar1 == UE::CaptureCardMediaSource::InterlaceFieldOrder) {
    return (ulonglong)(byte)this->_padding_;
  }
  if (FVar1 == UE::CaptureCardMediaSource::SourceColorSpace) {
    return (ulonglong)*(byte *)((longlong)&this->_padding_ + 4);
  }
  if (FVar1 == UE::CaptureCardMediaSource::SourceEncoding) {
    return (ulonglong)*(byte *)((longlong)&this->_padding_ + 2);
  }
  if (FVar1 == UE::CaptureCardMediaSource::EvaluationType) {
    return (ulonglong)*(byte *)((longlong)&this->_padding_ + 2);
  }
  lVar2 = UTimeSynchronizableMediaSource::GetMediaOption
                    ((UTimeSynchronizableMediaSource *)this,param_1,param_2);
  return lVar2;
}

// GetMediaOption @ 14d7abbe0

bool __thiscall
UCaptureCardMediaSource::GetMediaOption(UCaptureCardMediaSource *this,FName *param_1,bool param_2)

{
  FName FVar1;
  bool bVar2;
  
  FVar1 = *param_1;
  if (FVar1 == UE::CaptureCardMediaSource::RenderJIT) {
    return (bool)(char)this->_padding_;
  }
  if (FVar1 == UE::CaptureCardMediaSource::Framelock) {
    return (bool)*(undefined1 *)((longlong)&this->_padding_ + 1);
  }
  if (FVar1 == UE::CaptureCardMediaSource::OverrideSourceColorSpace) {
    return (bool)*(undefined1 *)((longlong)&this->_padding_ + 3);
  }
  if (FVar1 == UE::CaptureCardMediaSource::OverrideSourceEncoding) {
    return (bool)*(undefined1 *)((longlong)&this->_padding_ + 1);
  }
  bVar2 = UTimeSynchronizableMediaSource::GetMediaOption
                    ((UTimeSynchronizableMediaSource *)this,param_1,param_2);
  return bVar2;
}

// GetPrivateStaticClass @ 14d7acdd0

UClass * __cdecl UCaptureCardMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"CaptureCardMediaSource",
               &Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton,
               StaticRegisterNativesUCaptureCardMediaSource,0x158,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCaptureCardMediaSource>,
               InternalVTableHelperCtorCaller<UCaptureCardMediaSource>,local_res8,
               UTimeSynchronizableMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCaptureCardMediaSource.InnerSingleton;
}

// HasMediaOption @ 14d7aed80

bool __thiscall
UCaptureCardMediaSource::HasMediaOption(UCaptureCardMediaSource *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  FVar1 = *param_1;
  if (((((FVar1 == UE::CaptureCardMediaSource::Deinterlacer) ||
        (FVar1 == UE::CaptureCardMediaSource::InterlaceFieldOrder)) ||
       (FVar1 == UE::CaptureCardMediaSource::OverrideSourceEncoding)) ||
      (((FVar1 == UE::CaptureCardMediaSource::OverrideSourceColorSpace ||
        (FVar1 == UE::CaptureCardMediaSource::SourceEncoding)) ||
       ((FVar1 == UE::CaptureCardMediaSource::SourceColorSpace ||
        ((FVar1 == UE::CaptureCardMediaSource::RenderJIT ||
         (FVar1 == UE::CaptureCardMediaSource::Framelock)))))))) ||
     ((FVar1 == UE::CaptureCardMediaSource::EvaluationType ||
      (FVar1 == UE::CaptureCardMediaSource::OpenColorIOSettings)))) {
    return true;
  }
  FVar1 = *param_1;
  if ((((FVar1 == TimeSynchronizableMedia::UseTimeSynchronizatioOption) ||
       (FVar1 == TimeSynchronizableMedia::FrameDelay)) ||
      (FVar1 == TimeSynchronizableMedia::TimeDelay)) ||
     (FVar1 == TimeSynchronizableMedia::AutoDetect)) {
    return true;
  }
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x28) == FVar1) goto LAB_146c2ee7c;
        iVar3 = *(int *)(this->_padding_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146c2ee7c:
  return iVar3 != -1;
}

// StaticRegisterNativesUCaptureCardMediaSource @ 14d7be410

void __cdecl UCaptureCardMediaSource::StaticRegisterNativesUCaptureCardMediaSource(void)

{
  return;
}

