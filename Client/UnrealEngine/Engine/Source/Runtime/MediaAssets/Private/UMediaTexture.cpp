// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 49

// StaticClass @ 146c121c0

UClass * __cdecl UMediaTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTexture",
               &Z_Registration_Info_UClass_UMediaTexture.InnerSingleton,
               StaticRegisterNativesUMediaTexture,0x238,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaTexture>,InternalVTableHelperCtorCaller<UMediaTexture>,
               local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTexture.InnerSingleton;
}

// UMediaTexture @ 146c1da60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall UMediaTexture::UMediaTexture(UMediaTexture *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->ClockSink).Object = (FMediaTextureClockSink *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CurrentGuid).A = 0;
  (this->CurrentGuid).B = 0;
  (this->CurrentGuid).C = 0;
  (this->CurrentGuid).D = 0;
  (this->CurrentRenderedGuid).A = 0;
  (this->CurrentRenderedGuid).B = 0;
  (this->CurrentRenderedGuid).C = 0;
  (this->CurrentRenderedGuid).D = 0;
  (this->CurrentPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultGuid).A = 0;
  (this->DefaultGuid).B = 0;
  (this->DefaultGuid).C = 0;
  (this->DefaultGuid).D = 0;
  (this->SampleQueue).Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->CachedNextSampleTime = (TAtomic<FTimespan>)0x0;
  this->RenderMode = Default;
  return this;
}

// UMediaTexture @ 146c1db30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaTexture::UMediaTexture(UMediaTexture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FLinearColor FVar2;
  
  UTexture::UTexture((UTexture *)this,param_1);
  this->AutoClear = false;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->AddressX = '\x01';
  this->AddressY = '\x01';
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  FVar2 = FLinearColor::Black;
  this->EnableGenMips = false;
  this->NewStyleOutput = false;
  this->CurrentAspectRatio = 0.0;
  (this->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->CurrentOrientation).Value = '\0';
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->ClockSink).Object = (FMediaTextureClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CurrentGuid).A = 0;
  (this->CurrentGuid).B = 0;
  (this->CurrentGuid).C = 0;
  (this->CurrentGuid).D = 0;
  (this->CurrentRenderedGuid).A = 0;
  (this->CurrentRenderedGuid).B = 0;
  (this->CurrentRenderedGuid).C = 0;
  (this->CurrentRenderedGuid).D = 0;
  (this->CurrentPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  FGuid::NewGuid(&this->DefaultGuid);
  (this->Dimensions).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SampleQueue).Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsCleared = false;
  this->Size = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->CachedNextSampleTime = (TAtomic<FTimespan>)0x8000000000000000;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  this->TextureNumMips = 1;
  this->MipMapBias = 0.0;
  this->RenderMode = Default;
  this->ColorspaceOverride = None;
  return this;
}

// ~UMediaTexture @ 146c1ed10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::~UMediaTexture(UMediaTexture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleQueue).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockSink).SharedReferenceCount.ReferenceController);
  UTexture::~UTexture((UTexture *)this);
  return;
}

// operator() @ 146c1f0b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`UMediaTexture::TickResource'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMediaTextureResource *this_00;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FAtlasTextureInvalidationScope local_res8 [8];
  
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceParam",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\MediaTexture.cpp"
                       ,0x1f7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  RectLightAtlas::FAtlasTextureInvalidationScope::FAtlasTextureInvalidationScope
            (local_res8,*(UTexture **)((longlong)this + 0x80));
  this_00 = *(FMediaTextureResource **)this;
  if (*(int *)((longlong)this + 0x78) == 1) {
    FMediaTextureResource::SetJustInTimeRenderParams(this_00,(FRenderParams *)((longlong)this + 8));
  }
  else {
    bVar6 = IsInRenderingThread();
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x33f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this_00->JustInTimeRenderParams).Ptr;
    if (pFVar3 != (FRenderParams *)0x0) {
      (this_00->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
      pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      ::operator_delete(pFVar3,0x70);
    }
    FMediaTextureResource::Render
              (*(FMediaTextureResource **)this,(FRenderParams *)((longlong)this + 8));
  }
  RectLightAtlas::FAtlasTextureInvalidationScope::~FAtlasTextureInvalidationScope(local_res8);
  return;
}

// BeginDestroy @ 146c20b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::BeginDestroy(UMediaTexture *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMediaTextureClockSink *pFVar1;
  FName FVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [32];
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  FMediaTextureClockSink *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  FName local_b8 [2];
  code *local_a8 [2];
  undefined **local_98 [3];
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68 [3];
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar1 = (this->ClockSink).Object;
  if (pFVar1 != (FMediaTextureClockSink *)0x0) {
    lpCriticalSection = &pFVar1->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (pFVar1->Owner).WeakPtr = (FWeakObjectPtr)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = ::FName::FName(local_b8,"Media");
    FVar2 = *pFVar6;
    this_00 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModule(this_00,FVar2,None);
    if (pIVar7 != (IModuleInterface *)0x0) {
      plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
      pcVar3 = *(code **)(*plVar8 + 0x18);
      if ((this->ClockSink).Object == (FMediaTextureClockSink *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar4 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar1 = (this->ClockSink).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FMediaTextureClockSink *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8 = pFVar1;
      local_d0 = pTVar4;
      (*pcVar3)(plVar8,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    local_c8 = 0;
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ClockSink != (TSharedPtr<FMediaTextureClockSink,1> *)&local_c8) {
      (this->ClockSink).Object = (FMediaTextureClockSink *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockSink).SharedReferenceCount,&FStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
  }
  (**(code **)(this->_padding_ + 0x3a0))(this,&local_e8);
  if (((iStack_e0 != 0 || iStack_dc != 0) || iStack_e4 != 0) || local_e8 != 0) {
    local_98[1]._4_4_ = iStack_e4;
    local_98[1]._0_4_ = local_e8;
    local_98[2]._4_4_ = iStack_dc;
    local_98[2]._0_4_ = iStack_e0;
    local_80 = (undefined ***)0x0;
    local_98[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UMediaTexture::BeginDestroy'::`11'::<lambda_1>,1,0>::
                   _vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaTexture::BeginDestroy'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMediaTexture::BeginDestroy_::__l11::TSTR_MediaTextureUnregisterGuid261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68[0] = local_98[0];
      local_68[1] = local_98[1];
      local_68[2] = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UMediaTexture::BeginDestroy'::__l11::TSTR_MediaTextureUnregisterGuid261>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar9);
      uVar11 = (ulonglong)local_48;
      if (2 < uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar10 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar10 = local_50;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar10 = local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar10 = local_80;
      }
      (*(code *)(*pppuVar10)[2])();
    }
  }
  UTexture::BeginDestroy((UTexture *)this);
  return;
}

// CacheNextAvailableSampleTime @ 146c20eb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::CacheNextAvailableSampleTime(UMediaTexture *this,FTimespan param_1)

{
  LOCK();
  this->CachedNextSampleTime = (TAtomic<FTimespan>)param_1.Ticks;
  UNLOCK();
  return;
}

// CalcTextureMemorySizeEnum @ 146c20f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

uint __thiscall
UMediaTexture::CalcTextureMemorySizeEnum(UMediaTexture *this,ETextureMipCount param_1)

{
  return (uint)this->Size;
}

// CreateResource @ 146c25b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTextureResource * __thiscall UMediaTexture::CreateResource(UMediaTexture *this)

{
  int *piVar1;
  TSharedPtr<FMediaTextureClockSink,1> *pTVar2;
  undefined8 *puVar3;
  EColorSpace EVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  FColorSpace *pFVar16;
  FTextureResource *pFVar17;
  longlong *plVar18;
  FRenderTarget *this_01;
  FColorSpace *pFVar19;
  longlong lVar20;
  undefined1 uVar21;
  FColorSpace *pFVar22;
  FMediaTextureClockSink *pFVar23;
  UMediaTexture *local_res8;
  FName local_res10;
  FMediaTextureClockSink *local_78;
  FSharedReferencer<1> FStack_70;
  FMediaTextureClockSink *local_68;
  TReferenceControllerBase<1> *local_60;
  
  pTVar2 = &this->ClockSink;
  pFVar22 = (FColorSpace *)0x0;
  if (pTVar2->Object == (FMediaTextureClockSink *)0x0) {
    pFVar14 = ::FName::FName(&local_res10,"Media");
    FVar5 = *pFVar14;
    this_00 = FModuleManager::Get();
    pIVar15 = FModuleManager::LoadModule(this_00,FVar5,None);
    if (pIVar15 != (IModuleInterface *)0x0) {
      pFVar16 = ::operator_new(0x48);
      if (pFVar16 == (FColorSpace *)0x0) {
        local_78 = ___xmm_00000000000000000000000000000010;
        pFVar23 = (FMediaTextureClockSink *)&DAT_00000010;
        FStack_70.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
        pFVar16 = pFVar22;
      }
      else {
        *(undefined4 *)((longlong)&(pFVar16->Chromaticities).Elements[0].field0_0x0 + 8) = 1;
        *(undefined4 *)((longlong)&(pFVar16->Chromaticities).Elements[0].field0_0x0 + 0xc) = 1;
        (pFVar16->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (double)&
                     ___7__TIntrusiveReferenceController_VFMediaTextureClockSink___00_SharedPointerInternals__6B_
        ;
        (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.X =
             (double)&___7FMediaTextureClockSink__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.Y = 0.0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)&(pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.Y,
                   (FObjectPtr)&local_res8);
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)((pFVar16->Chromaticities).Elements + 2),4000);
        pFVar23 = (FMediaTextureClockSink *)((pFVar16->Chromaticities).Elements + 1);
        if ((pFVar23 == (FMediaTextureClockSink *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FTextureResource *)(*pcVar7)();
          return pFVar17;
        }
        LOCK();
        piVar1 = (int *)((longlong)&(pFVar16->Chromaticities).Elements[0].field0_0x0 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        FStack_70.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
        local_78 = pFVar23;
      }
      if (pTVar2 != (TSharedPtr<FMediaTextureClockSink,1> *)&local_78) {
        pTVar2->Object = pFVar23;
        local_78 = (FMediaTextureClockSink *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ClockSink).SharedReferenceCount,&FStack_70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_70.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      plVar18 = (longlong *)(**(code **)((longlong)*pIVar15 + 0xa8))(pIVar15);
      pcVar7 = *(code **)(*plVar18 + 0x10);
      if ((pTVar2->Object == (FMediaTextureClockSink *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FTextureResource *)(*pcVar7)();
        return pFVar17;
      }
      pTVar6 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar23 = pTVar2->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar23 == (FMediaTextureClockSink *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FTextureResource *)(*pcVar7)();
        return pFVar17;
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = pFVar23;
      local_60 = pTVar6;
      (*pcVar7)(plVar18,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  if (this->NewStyleOutput == false) {
    *(char *)((longlong)&this->_padding_ + 1) = (1 < this->TextureNumMips) + '\x01';
  }
  uVar13 = (undefined1)GRHIGlobals.MaxTextureMipCount;
  this_01 = ::operator_new(0x150);
  if (this_01 == (FRenderTarget *)0x0) {
    this_01 = (FRenderTarget *)0x0;
  }
  else {
    EVar4 = this->ColorspaceOverride;
    bVar12 = this->EnableGenMips;
    lVar20 = 0x188;
    if ((((this->CurrentGuid).D == 0 && (this->CurrentGuid).C == 0) && (this->CurrentGuid).B == 0)
        && (this->CurrentGuid).A == 0) {
      lVar20 = 0x1b0;
    }
    uVar8 = *(undefined8 *)&(this->ClearColor).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8);
    puVar3 = (undefined8 *)((longlong)&this->_padding_ + lVar20);
    uVar10 = *puVar3;
    uVar11 = puVar3[1];
    FRenderTarget::FRenderTarget(this_01);
    FTexture::FTexture((FTexture *)(this_01 + 1));
    this_01[6].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    this_01->_padding_ = (longlong)&FMediaTextureResource::_vftable__for__FRenderTarget__;
    *(undefined1 *)((longlong)&this_01[7]._padding_ + 1) = 0;
    this_01[1]._padding_ = (longlong)&FMediaTextureResource::_vftable__for__FTextureResource__;
    *(undefined8 *)((longlong)&this_01[7]._padding_ + 4) = uVar8;
    *(undefined8 *)((longlong)&this_01[7].RenderTargetTextureRHI.Reference + 4) = uVar9;
    *(bool *)&this_01[0xc].RenderTargetTextureRHI.Reference = bVar12;
    *(undefined8 *)((longlong)&this_01[8]._padding_ + 4) = uVar10;
    *(undefined8 *)((longlong)&this_01[8].RenderTargetTextureRHI.Reference + 4) = uVar11;
    this_01[9].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    uVar21 = 1;
    if (bVar12 != false) {
      uVar21 = uVar13;
    }
    this_01[10]._padding_ = 0;
    this_01[10].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    this_01[0xb].RenderTargetTextureRHI.Reference = (FRHITexture *)&this->Dimensions;
    this_01[0xc]._padding_ = (longlong)&this->Size;
    this_01[0xb]._padding_ = (longlong)this;
    this_01[0xd].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    this_01[0xe]._padding_ = 0;
    this_01[0xe].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    this_01[0xf]._padding_ = 0;
    *(undefined1 *)((longlong)&this_01[0xc].RenderTargetTextureRHI.Reference + 1) = uVar21;
    *(undefined4 *)((longlong)&this_01[0xc].RenderTargetTextureRHI.Reference + 4) = 5;
    *(undefined4 *)&this_01[0xd]._padding_ = 0xbf800000;
    FPriorSamples::Create((TSharedRef<FPriorSamples,1> *)&this_01[0xf].RenderTargetTextureRHI);
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this_01[0x10].RenderTargetTextureRHI,4000);
    lVar20 = this_01[0xb]._padding_;
    this_01[0x13]._padding_ = 0;
    this_01[0x13].RenderTargetTextureRHI.Reference = (FRHITexture *)0x0;
    this_01[0x14]._padding_ = 0;
    *(undefined1 *)&this_01[0x14].RenderTargetTextureRHI.Reference = 0;
    if ((*(char *)(lVar20 + 0x165) == '\0') && (GRHIGlobals.SupportsImageExternal != false)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined1 *)&this_01[7]._padding_ = uVar13;
    if (EVar4 != None) {
      pFVar19 = ::operator_new(0x150);
      pFVar16 = pFVar22;
      if (pFVar19 != (FColorSpace *)0x0) {
        pFVar16 = UE::Color::FColorSpace::FColorSpace(pFVar19,EVar4);
      }
      pFVar19 = (FColorSpace *)this_01[0x14]._padding_;
      if (pFVar19 != pFVar16) {
        this_01[0x14]._padding_ = (longlong)pFVar16;
        ::operator_delete(pFVar19,0x150);
      }
      if ((this_01[0x14]._padding_ == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("OverrideColorSpace.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                              ,0x187,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        pFVar17 = (FTextureResource *)(*pcVar7)();
        return pFVar17;
      }
    }
  }
  pFVar16 = (FColorSpace *)(this_01 + 1);
  if (this_01 == (FRenderTarget *)0x0) {
    pFVar16 = pFVar22;
  }
  return (FTextureResource *)pFVar16;
}

// GetAspectRatio @ 146c27e20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetAspectRatio(UMediaTexture *this)

{
  int iVar1;
  
  iVar1 = (this->Dimensions).field0_0x0._s_0.Y;
  if (iVar1 == 0) {
    return 0.0;
  }
  return (float)(this->Dimensions).field0_0x0._s_0.X / (float)iVar1;
}

// GetAvailableSampleCount @ 146c28180

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaTexture::GetAvailableSampleCount(UMediaTexture *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->SampleQueue).Object ==
      (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146c281c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(((this->SampleQueue).Object)->_padding_ + 8))();
  return iVar3;
}

// GetCurrentAspectRatio @ 146c28870

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetCurrentAspectRatio(UMediaTexture *this)

{
  return this->CurrentAspectRatio;
}

// GetCurrentOrientation @ 146c28880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

MediaTextureOrientation __thiscall UMediaTexture::GetCurrentOrientation(UMediaTexture *this)

{
  return (MediaTextureOrientation)(this->CurrentOrientation).Value;
}

// GetDesc @ 146c288c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall UMediaTexture::GetDesc(UMediaTexture *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%ix%i [%s]");
  return __return_storage_ptr__;
}

// GetExternalTextureGuid @ 146c28bb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FGuid * __thiscall
UMediaTexture::GetExternalTextureGuid(UMediaTexture *this,FGuid *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (this->EnableGenMips != false) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (this->CurrentRenderedGuid).B;
    uVar2 = (this->CurrentRenderedGuid).C;
    uVar3 = (this->CurrentRenderedGuid).D;
    __return_storage_ptr__->A = (this->CurrentRenderedGuid).A;
    __return_storage_ptr__->B = uVar1;
    __return_storage_ptr__->C = uVar2;
    __return_storage_ptr__->D = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetHeight @ 146c28cc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaTexture::GetHeight(UMediaTexture *this)

{
  return (this->Dimensions).field0_0x0._s_0.Y;
}

// GetMaterialType @ 146c28d70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EMaterialValueType __thiscall UMediaTexture::GetMaterialType(UMediaTexture *this)

{
  EMaterialValueType EVar1;
  
  if (this->NewStyleOutput != false) {
    return MCT_Texture2D;
  }
  EVar1 = MCT_TextureExternal;
  if (this->EnableGenMips != false) {
    EVar1 = MCT_Texture2D;
  }
  return EVar1;
}

// GetMediaPlayer @ 146c2add0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaTexture::GetMediaPlayer(UMediaTexture *this)

{
  UMediaPlayer *pUVar1;
  
  pUVar1 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->CurrentPlayer).WeakPtr);
  return pUVar1;
}

// GetMipMapBias @ 146c2ae10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetMipMapBias(UMediaTexture *this)

{
  float fVar1;
  
  fVar1 = this->MipMapBias;
  if (__real_417fd70a <= this->MipMapBias) {
    fVar1 = __real_417fd70a;
  }
  if (fVar1 <= __real_c1800000) {
    fVar1 = __real_c1800000;
  }
  return fVar1;
}

// GetNextSampleTime @ 146c2aee0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall UMediaTexture::GetNextSampleTime(UMediaTexture *this)

{
  TAtomic<FTimespan> *in_RDX;
  
  *in_RDX = this->CachedNextSampleTime;
  return (FTimespan)(long64)in_RDX;
}

// GetPrivateStaticClass @ 146c2cec0

UClass * __cdecl UMediaTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaTexture",
               &Z_Registration_Info_UClass_UMediaTexture.InnerSingleton,
               StaticRegisterNativesUMediaTexture,0x238,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaTexture>,InternalVTableHelperCtorCaller<UMediaTexture>,
               local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaTexture.InnerSingleton;
}

// GetResourceSizeEx @ 146c2d3d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::GetResourceSizeEx(UMediaTexture *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,this->Size);
  return;
}

// GetSurfaceArraySize @ 146c2dbe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

uint __thiscall UMediaTexture::GetSurfaceArraySize(UMediaTexture *this)

{
  return 0;
}

// GetSurfaceDepth @ 146c2dbf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetSurfaceDepth(UMediaTexture *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 146c2dc00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetSurfaceHeight(UMediaTexture *this)

{
  return (float)(this->Dimensions).field0_0x0._s_0.Y;
}

// GetSurfaceWidth @ 146c2dc20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall UMediaTexture::GetSurfaceWidth(UMediaTexture *this)

{
  return (float)(this->Dimensions).field0_0x0._s_0.X;
}

// GetTextureClass @ 146c2dc70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

ETextureClass __thiscall UMediaTexture::GetTextureClass(UMediaTexture *this)

{
  return Other2DNoSource;
}

// GetTextureNumMips @ 146c2dc80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaTexture::GetTextureNumMips(UMediaTexture *this)

{
  return this->TextureNumMips;
}

// GetWidth @ 146c2e7d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall UMediaTexture::GetWidth(UMediaTexture *this)

{
  return (this->Dimensions).field0_0x0._s_0.X;
}

// IsPostLoadThreadSafe @ 146c2f670

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall UMediaTexture::IsPostLoadThreadSafe(UMediaTexture *this)

{
  return false;
}

// JustInTimeRender @ 146c2f810

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall UMediaTexture::JustInTimeRender(UMediaTexture *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTextureResource *pFVar7;
  FMediaTextureResource *this_00;
  
  pFVar7 = UTexture::GetResource((UTexture *)this);
  this_00 = (FMediaTextureResource *)&pFVar7[-1]._padding_;
  if (pFVar7 == (FTextureResource *)0x0) {
    this_00 = (FMediaTextureResource *)0x0;
  }
  if (this_00 != (FMediaTextureResource *)0x0) {
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                           ,0x346,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this_00->JustInTimeRenderParams).Ptr;
    if (pFVar3 != (FRenderParams *)0x0) {
      FMediaTextureResource::Render(this_00,pFVar3);
      pFVar3 = (this_00->JustInTimeRenderParams).Ptr;
      if (pFVar3 != (FRenderParams *)0x0) {
        (this_00->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
        pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        ::operator_delete(pFVar3,0x70);
      }
    }
  }
  return;
}

// PostInitProperties @ 146c310e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::PostInitProperties(UMediaTexture *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UMediaTexture *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UMediaTexture **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UMediaTexture **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 146c31200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::PostLoad(UMediaTexture *this)

{
  UMediaPlayer *pUVar1;
  FWeakObjectPtr local_res8;
  UMediaPlayer *local_res10;
  
  UTexture::PostLoad((UTexture *)this);
  pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UMediaPlayer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CurrentPlayer).WeakPtr = local_res8;
  return;
}

// SetMediaPlayer @ 146c36ae0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::SetMediaPlayer(UMediaTexture *this,UMediaPlayer *param_1)

{
  UMediaPlayer *local_res8 [4];
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CurrentPlayer).WeakPtr,(FObjectPtr)local_res8);
  local_18.Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdatePlayerAndQueue(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// SetMediaPlayer @ 146c36b40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaTexture::SetMediaPlayer
          (UMediaTexture *this,UMediaPlayer *param_1,
          TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
          *param_2)

{
  UMediaPlayer *local_res8;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CurrentPlayer).WeakPtr,(FObjectPtr)&local_res8);
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  UpdatePlayerAndQueue(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetMipMapBias @ 146c36bc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::SetMipMapBias(UMediaTexture *this,float param_1)

{
  this->MipMapBias = param_1;
  return;
}

// SetRenderedExternalTextureGuid @ 146c37150

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::SetRenderedExternalTextureGuid(UMediaTexture *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\MediaTexture.cpp"
                       ,0xe1,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = param_1->B;
    uVar3 = param_1->C;
    uVar4 = param_1->D;
    (this->CurrentRenderedGuid).A = param_1->A;
    (this->CurrentRenderedGuid).B = uVar2;
    (this->CurrentRenderedGuid).C = uVar3;
    (this->CurrentRenderedGuid).D = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000146c371c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUMediaTexture @ 146c37fe0

void __cdecl UMediaTexture::StaticRegisterNativesUMediaTexture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UMediaTexture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickResource @ 146c38400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::TickResource(UMediaTexture *this,FTimespan param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ERenderMode EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaPlayerFacade *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  IMediaPlayer *pIVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  FTextureResource *pFVar22;
  UMediaPlayer *this_00;
  longlong *plVar23;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar24;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar25;
  code **ppcVar26;
  ulonglong uVar27;
  undefined1 auStack_1c8 [32];
  TSharedPtr<IMediaTextureSample,1> local_1a8;
  TSharedPtr<IMediaTextureSample,1> local_198;
  code *local_188;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  float local_144;
  longlong *local_140;
  TReferenceControllerBase<1> *local_138;
  undefined1 local_130;
  code *local_128;
  code *pcStack_120;
  IMediaTextureSample *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_108;
  IMediaTextureSample *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined1 local_e8 [16];
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar22 = UTexture::GetResource((UTexture *)this);
  if (pFVar22 == (FTextureResource *)0x0) {
    return;
  }
  uVar9 = (this->CurrentGuid).A;
  uVar10 = (this->CurrentGuid).B;
  uVar11 = (this->CurrentGuid).C;
  uVar12 = (this->CurrentGuid).D;
  local_108.Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdatePlayerAndQueue(this,&local_108);
  bVar17 = FWeakObjectPtr::IsValid(&(this->CurrentPlayer).WeakPtr);
  if (((((!bVar17) &&
        ((this->ClearColor).field0_0x0._s_0.R == (this->LastClearColor).field0_0x0._s_0.R)) &&
       ((this->ClearColor).field0_0x0._s_0.G == (this->LastClearColor).field0_0x0._s_0.G)) &&
      (((this->ClearColor).field0_0x0._s_0.B == (this->LastClearColor).field0_0x0._s_0.B &&
       ((this->ClearColor).field0_0x0._s_0.A == (this->LastClearColor).field0_0x0._s_0.A)))) &&
     ((this->LastSrgb == (bool)(*(byte *)((longlong)&this->_padding_ + 6) & 1) &&
      (this->bIsCleared != false)))) {
    return;
  }
  uVar13 = *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8);
  bVar21 = *(byte *)((longlong)&this->_padding_ + 6);
  *(undefined8 *)&(this->LastClearColor).field0_0x0 = *(undefined8 *)&(this->ClearColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LastClearColor).field0_0x0 + 8) = uVar13;
  this->LastSrgb = (bool)(bVar21 & 1);
  local_128 = (code *)0x8000000000000000;
  local_118 = (IMediaTextureSample *)0x0;
  pTStack_110 = (TReferenceControllerBase<1> *)0x0;
  local_140 = (longlong *)0x0;
  local_138 = (TReferenceControllerBase<1> *)0x0;
  pcStack_120 = (code *)0x0;
  this_00 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->CurrentPlayer).WeakPtr);
  bVar17 = false;
  if (this_00 == (UMediaPlayer *)0x0) {
    if (this->AutoClear == false) {
      bVar18 = ((uVar12 == (this->CurrentGuid).D && uVar11 == (this->CurrentGuid).C) &&
               uVar10 == (this->CurrentGuid).B) && uVar9 == (this->CurrentGuid).A;
      goto LAB_146c38aca;
    }
  }
  else {
    if (((this_00->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar4 = (this_00->PlayerFacade).SharedReferenceCount.ReferenceController;
    pFVar5 = (this_00->PlayerFacade).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FMediaPlayerFacade *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar6 = (pFVar5->Player).SharedReferenceCount.ReferenceController;
    pIVar7 = (pFVar5->Player).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pIVar7 == (IMediaPlayer *)0x0) {
      this->CurrentAspectRatio = 0.0;
      bVar18 = this->AutoClear == false;
      (this->CurrentOrientation).Value = '\0';
LAB_146c38aca:
      if (bVar18) goto LAB_146c38cf7;
    }
    else {
      if (((this_00->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar4 = (this_00->PlayerFacade).SharedReferenceCount.ReferenceController;
      pFVar5 = (this_00->PlayerFacade).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar5 == (FMediaPlayerFacade *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pIVar7 = (pFVar5->Player).Object;
      pTVar6 = (pFVar5->Player).SharedReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar7 == (IMediaPlayer *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      cVar19 = (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (cVar19 == '\0') {
        bVar18 = UMediaPlayer::IsPaused(this_00);
        if (((bVar18) || (bVar18 = UMediaPlayer::IsPlaying(this_00), bVar18)) ||
           (bVar18 = UMediaPlayer::IsPreparing(this_00), bVar18)) {
          local_198.Object = (IMediaTextureSample *)0x0;
          local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar24 = TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                    ::operator->(&this->SampleQueue);
          cVar19 = (**(code **)(pTVar24->_padding_ + 8))(&pTVar24->_padding_,&local_198);
          bVar17 = false;
          if (cVar19 != '\0') {
            UpdateSampleInfo(this,&local_198);
            if ((local_198.Object == (IMediaTextureSample *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar20 = (**(code **)((longlong)*local_198.Object + 0x80))();
            bVar21 = *(byte *)((longlong)&this->_padding_ + 6);
            bVar17 = this->EnableGenMips;
            this->LastSrgb = (bool)(bVar20 & 1);
            *(byte *)((longlong)&this->_padding_ + 6) = (bVar21 ^ bVar20) & 1 ^ bVar21;
            if ((local_198.Object == (IMediaTextureSample *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar21 = UE::MediaTexture::Private::CalcTextureNumMips(local_198.Object,bVar17);
            bVar17 = true;
            this->TextureNumMips = (uint)bVar21;
          }
          pTVar24 = (this->SampleQueue).Object;
          pTVar4 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
          plVar23 = &pTVar24->_padding_;
          if (pTVar24 ==
              (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0)
          {
            plVar23 = (longlong *)0x0;
          }
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
            UNLOCK();
            local_138 = pTVar4;
          }
          local_144 = UMediaPlayer::GetRate(this_00);
          if (((this_00->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FMediaPlayerFacade::GetTime((this_00->PlayerFacade).Object);
          local_128 = local_188;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_198.SharedReferenceCount.ReferenceController);
          local_140 = plVar23;
        }
        else {
          this->CurrentAspectRatio = 0.0;
          (this->CurrentOrientation).Value = '\0';
          if (this->AutoClear == false) goto LAB_146c38cf7;
        }
      }
      else {
        local_1a8.Object = (IMediaTextureSample *)0x0;
        local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        do {
          if (((this->SampleQueue).Object ==
               (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0)
             && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar23 = &((this->SampleQueue).Object)->_padding_;
          cVar19 = (**(code **)*plVar23)(plVar23,&local_1a8);
        } while (cVar19 != '\0');
        if (local_1a8.Object == (IMediaTextureSample *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
          goto LAB_146c38cf7;
        }
        UpdateSampleInfo(this,&local_1a8);
        pTVar4 = pTStack_110;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_f8 = local_118;
        pTStack_f0 = pTStack_110;
        local_118 = local_1a8.Object;
        pTStack_110 = local_1a8.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_144 = UMediaPlayer::GetRate(this_00);
        if ((local_1a8.Object == (IMediaTextureSample *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar23 = (longlong *)
                  (**(code **)((longlong)*local_1a8.Object + 0x60))(local_1a8.Object,local_e8);
        local_128 = (code *)*plVar23;
        pcStack_120 = (code *)plVar23[1];
        if ((local_1a8.Object == (IMediaTextureSample *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar20 = (**(code **)((longlong)*local_1a8.Object + 0x80))();
        bVar21 = *(byte *)((longlong)&this->_padding_ + 6);
        bVar17 = this->EnableGenMips;
        this->LastSrgb = (bool)(bVar20 & 1);
        *(byte *)((longlong)&this->_padding_ + 6) = (bVar21 ^ bVar20) & 1 ^ bVar21;
        if ((local_1a8.Object == (IMediaTextureSample *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar21 = UE::MediaTexture::Private::CalcTextureNumMips(local_1a8.Object,bVar17);
        bVar17 = true;
        this->TextureNumMips = (uint)bVar21;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (this->NewStyleOutput == false) {
    *(char *)((longlong)&this->_padding_ + 1) = (1 < this->TextureNumMips) + '\x01';
  }
  uVar13 = *(undefined8 *)&(this->ClearColor).field0_0x0;
  uVar14 = *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8);
  bVar18 = this->AutoClear;
  uVar15._0_4_ = (this->CurrentGuid).A;
  uVar15._4_4_ = (this->CurrentGuid).B;
  uVar16._0_4_ = (this->CurrentGuid).C;
  uVar16._4_4_ = (this->CurrentGuid).D;
  local_174 = uVar13;
  uStack_16c = uVar14;
  local_164 = uVar15;
  uStack_15c = uVar16;
  pFVar22 = UTexture::GetResource((UTexture *)this);
  EVar3 = this->RenderMode;
  plVar23 = &pFVar22[-1]._padding_;
  if (pFVar22 == (FTextureResource *)0x0) {
    plVar23 = (longlong *)0x0;
  }
  if (local_138 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_138->WeakReferenceCount = (atomic<int>)((int)local_138->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8[0] = (code *)0x0;
  local_b0 = FMemory::Malloc(0x90,8);
  local_b0[1] = (code *)plVar23;
  *local_b0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UMediaTexture::TickResource'::`2'::<lambda_1>,1,1>::
                       _vftable_;
  *(undefined8 *)((longlong)local_b0 + 0x14) = uVar13;
  *(undefined8 *)((longlong)local_b0 + 0x1c) = uVar14;
  *(bool *)(local_b0 + 2) = bVar18;
  *(undefined8 *)((longlong)local_b0 + 0x24) = uVar15;
  *(undefined8 *)((longlong)local_b0 + 0x2c) = uVar16;
  *(uint *)((longlong)local_b0 + 0x34) = uVar9;
  *(uint *)(local_b0 + 7) = uVar10;
  *(uint *)((longlong)local_b0 + 0x3c) = uVar11;
  *(uint *)(local_b0 + 8) = uVar12;
  local_b0[9] = (code *)local_140;
  local_b0[10] = (code *)local_138;
  *(undefined1 *)(local_b0 + 0xb) = local_130;
  *(float *)((longlong)local_b0 + 0x44) = local_144;
  local_b0[0xc] = local_128;
  local_b0[0xd] = pcStack_120;
  local_b0[0xe] = (code *)local_118;
  local_b0[0xf] = (code *)pTStack_110;
  *(ERenderMode *)(local_b0 + 0x10) = EVar3;
  local_b0[0x11] = (code *)this;
  if (local_b0 != (code **)&DAT_fffffffffffffff8) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaTexture::TickResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMediaTexture::TickResource_::__l2::TSTR_MediaTextureResourceRender500>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_a8[0] = local_d8[0];
    local_80 = local_b0;
    local_b0 = (code **)0x0;
    local_98[0] = local_c8[0];
    local_98[1] = local_c8[1];
    local_98[2] = local_c8[2];
    local_d8[0] = (code *)0x0;
    local_78 = 2;
    pFVar25 = (FRenderCommandTag *)
              TRenderCommandTag<`UMediaTexture::TickResource'::__l2::TSTR_MediaTextureResourceRender500>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_a8,pFVar25);
    uVar27 = (ulonglong)local_78;
    if ((2 < uVar27) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar27] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_a8[0] != (code *)0x0) {
        ppcVar26 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar26 = local_80;
        }
        (**(code **)(*ppcVar26 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar27])();
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar26 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar26 = local_b0;
    }
    (**(code **)(*ppcVar26 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((this->AutoClear == false) || (bVar17)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  this->bIsCleared = bVar17;
LAB_146c38cf7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  if (local_138 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_138->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_138->_padding_ + 8))(local_138,1);
    }
  }
  return;
}

// UpdatePlayerAndQueue @ 146c3a130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
UMediaTexture::UpdatePlayerAndQueue
          (UMediaTexture *this,
          TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
          *param_1)

{
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMediaPlayerFacade *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  UObject *pUVar12;
  FTextureResource *pFVar13;
  FMediaTextureResource *pFVar14;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> **ppTVar15;
  FMediaTextureResource *pFVar16;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar17;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *local_88;
  FMediaTextureResource *pFStack_80;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<TMediaSampleSink<IMediaTextureSample>,1> local_68;
  undefined8 local_58;
  FSharedReferencer<1> aFStack_50 [3];
  
  pFVar16 = (FMediaTextureResource *)0x0;
  pUVar12 = FWeakObjectPtr::Get(&(this->CurrentPlayer).WeakPtr);
  if (pUVar12 == (UObject *)0x0) {
    if ((((this->DefaultGuid).C != (this->CurrentGuid).C ||
         (this->DefaultGuid).D != (this->CurrentGuid).D) ||
        (this->DefaultGuid).B != (this->CurrentGuid).B) ||
        (this->CurrentGuid).A != (this->DefaultGuid).A) {
      local_58 = 0;
      aFStack_50[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->SampleQueue !=
          (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
           *)&local_58) {
        (this->SampleQueue).Object =
             (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SampleQueue).SharedReferenceCount,aFStack_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_50[0].ReferenceController);
      uVar5 = (this->DefaultGuid).B;
      uVar6 = (this->DefaultGuid).C;
      uVar7 = (this->DefaultGuid).D;
      (this->CurrentGuid).A = (this->DefaultGuid).A;
      (this->CurrentGuid).B = uVar5;
      (this->CurrentGuid).C = uVar6;
      (this->CurrentGuid).D = uVar7;
      pFVar13 = UTexture::GetResource((UTexture *)this);
      pFVar14 = (FMediaTextureResource *)&pFVar13[-1]._padding_;
      if (pFVar13 == (FTextureResource *)0x0) {
        pFVar14 = pFVar16;
      }
      if (pFVar14 != (FMediaTextureResource *)0x0) {
        FMediaTextureResource::FlushPendingData(pFVar14);
      }
    }
  }
  else {
    uVar5 = *(uint *)&pUVar12[0xb].field_0x8;
    uVar6 = *(uint *)&pUVar12[0xb].field_0xc;
    uVar7 = *(uint *)&pUVar12[0xb].field_0x10;
    uVar8 = *(uint *)&pUVar12[0xb].field_0x14;
    if (((uVar6 != (this->CurrentGuid).B ||
         (uint)((ulonglong)*(undefined8 *)&pUVar12[0xb].field_0x10 >> 0x20) != (this->CurrentGuid).D
         ) || uVar5 != (this->CurrentGuid).A) ||
        (uint)*(undefined8 *)&pUVar12[0xb].field_0x10 != (this->CurrentGuid).C) {
      pFVar13 = UTexture::GetResource((UTexture *)this);
      pFVar14 = (FMediaTextureResource *)&pFVar13[-1]._padding_;
      if (pFVar13 == (FTextureResource *)0x0) {
        pFVar14 = pFVar16;
      }
      if (pFVar14 != (FMediaTextureResource *)0x0) {
        FMediaTextureResource::FlushPendingData(pFVar14);
      }
      pTVar17 = param_1->Object;
      bVar11 = false;
      if (pTVar17 ==
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
        pFVar14 = ::operator_new(0x88);
        bVar10 = true;
        if (pFVar14 == (FMediaTextureResource *)0x0) {
          pTVar17 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *
                    )&DAT_00000010;
          local_88 = ___xmm_00000000000000000000000000000010;
          pFStack_80 = _UNK_150651568;
        }
        else {
          pFVar14->_padding_ = 2;
          pFVar14->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TMediaSampleQueue_VIMediaTextureSample__V__TMediaSampleSink_VIMediaTextureSample_______00_SharedPointerInternals__6B_
          ;
          pFVar14->_padding_ =
               (longlong)
               &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
                _vftable__for__TMediaSampleSink<IMediaTextureSample>__;
          pFVar14->_padding_ = 0;
          pFVar14->_padding_ =
               (longlong)
               &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
                _vftable__for__TMediaSampleSource<IMediaTextureSample>__;
          *(undefined4 *)&pFVar14->_padding_ = 1;
          *(undefined4 *)((longlong)&pFVar14->_padding_ + 4) = 1;
          pFVar14->_padding_ = 0;
          pFVar14->_padding_ = 0;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar14->_padding_,4000);
          pTVar17 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *
                    )&pFVar14->_padding_;
          pFVar14->_padding_ = 0;
          *(undefined8 *)&pFVar14->bUsesImageExternal = 0;
          (pFVar14->CurrentClearColor).field0_0x0._s_0.G = -NAN;
          *(undefined8 *)((longlong)&(pFVar14->CurrentClearColor).field0_0x0 + 8) = 0;
          if (pTVar17 ==
              (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0)
          {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L"");
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          LOCK();
          *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
          UNLOCK();
          pFVar16 = pFVar14;
          pFStack_80 = pFVar14;
          local_88 = pTVar17;
        }
        ppTVar15 = &local_88;
        bVar9 = false;
        bVar11 = true;
      }
      else {
        local_70 = (param_1->SharedReferenceCount).ReferenceController;
        ppTVar15 = &local_78;
        bVar9 = true;
        (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        param_1->Object =
             (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
        bVar10 = false;
        pFVar16 = (FMediaTextureResource *)param_1;
        local_78 = pTVar17;
      }
      pTVar1 = &this->SampleQueue;
      if (pTVar1 != (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                     *)ppTVar15) {
        *ppTVar15 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *
                    )0x0;
        pTVar1->Object = pTVar17;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SampleQueue).SharedReferenceCount,(FSharedReferencer<1> *)(ppTVar15 + 1))
        ;
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFStack_80);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
      }
      if (bVar9) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70);
      }
      if (*(longlong *)&pUVar12[10].field_0x20 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar2 = *(TReferenceControllerBase<1> **)(pUVar12 + 0xb);
      this_00 = *(FMediaPlayerFacade **)&pUVar12[10].field_0x20;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 == (FMediaPlayerFacade *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (pTVar1->Object ==
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar3 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
      pTVar17 = pTVar1->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar17 ==
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = (TMediaSampleSink<IMediaTextureSample> *)pTVar17;
      local_68.SharedReferenceCount.ReferenceController = pTVar3;
      FMediaPlayerFacade::AddVideoSampleSink(this_00,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      (this->CurrentGuid).A = uVar5;
      (this->CurrentGuid).B = uVar6;
      (this->CurrentGuid).C = uVar7;
      (this->CurrentGuid).D = uVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateResource @ 146c3a570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall UMediaTexture::UpdateResource(UMediaTexture *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c3a575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,0);
  return;
}

// UpdateSampleInfo @ 146c3a6c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
UMediaTexture::UpdateSampleInfo(UMediaTexture *this,TSharedPtr<IMediaTextureSample,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar4 = (double)(**(code **)((longlong)*param_1->Object + 0x90))();
  this->CurrentAspectRatio = (float)dVar4;
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)((longlong)*param_1->Object + 0x88))();
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      (this->CurrentOrientation).Value = '\x01';
      return;
    }
    if (iVar3 == 2) {
      (this->CurrentOrientation).Value = '\x02';
      return;
    }
    if (iVar3 == 3) {
      (this->CurrentOrientation).Value = '\x03';
      return;
    }
  }
  (this->CurrentOrientation).Value = '\0';
  return;
}

// execGetAspectRatio @ 146c3c4b0

void __cdecl UMediaTexture::execGetAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0xb].field_0xc == 0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  *(float *)param_3 =
       (float)*(int *)&param_1[0xb].field_0x8 / (float)*(int *)&param_1[0xb].field_0xc;
  return;
}

// execGetHeight @ 146c3cb20

void __cdecl UMediaTexture::execGetHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0xc;
  return;
}

// execGetMediaPlayer @ 146c3cd70

void __cdecl UMediaTexture::execGetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[10].field_0x18);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetTextureNumMips @ 146c3d780

void __cdecl UMediaTexture::execGetTextureNumMips(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xd].field_0x20;
  return;
}

// execGetWidth @ 146c3e560

void __cdecl UMediaTexture::execGetWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x8;
  return;
}

// execSetMediaPlayer @ 146c425e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaTexture::execSetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[10].field_0x18,(FObjectPtr)&local_res10);
  local_18.Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdatePlayerAndQueue((UMediaTexture *)param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// execUpdateResource @ 146c43840

void __cdecl UMediaTexture::execUpdateResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c43858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x328))();
  return;
}

