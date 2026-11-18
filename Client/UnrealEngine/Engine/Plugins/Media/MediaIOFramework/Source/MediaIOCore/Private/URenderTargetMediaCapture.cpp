// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 14

// StaticClass @ 14d77c8f0

UClass * __cdecl URenderTargetMediaCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaCapture",
               &Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton,
               StaticRegisterNativesURenderTargetMediaCapture,0x308,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URenderTargetMediaCapture>,
               InternalVTableHelperCtorCaller<URenderTargetMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton;
}

// URenderTargetMediaCapture @ 14d78b8f0

URenderTargetMediaCapture * __thiscall
URenderTargetMediaCapture::URenderTargetMediaCapture
          (URenderTargetMediaCapture *this,FVTableHelper *param_1)

{
  UMediaCapture::UMediaCapture((UMediaCapture *)this,param_1);
  this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RenderTargetCriticalSection,4000)
  ;
  return this;
}

// URenderTargetMediaCapture @ 14d78b940

URenderTargetMediaCapture * __thiscall
URenderTargetMediaCapture::URenderTargetMediaCapture(URenderTargetMediaCapture *this)

{
  UMediaCapture::UMediaCapture((UMediaCapture *)this);
  this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RenderTargetCriticalSection,4000)
  ;
  return this;
}

// ~URenderTargetMediaCapture @ 14d78d360

void __thiscall
URenderTargetMediaCapture::~URenderTargetMediaCapture(URenderTargetMediaCapture *this)

{
  this->_padding_ = (longlong)&___7URenderTargetMediaCapture__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RenderTargetCriticalSection);
  UMediaCapture::~UMediaCapture((UMediaCapture *)this);
  return;
}

// GetPrivateStaticClass @ 14d7ad2f0

UClass * __cdecl URenderTargetMediaCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaCapture",
               &Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton,
               StaticRegisterNativesURenderTargetMediaCapture,0x308,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URenderTargetMediaCapture>,
               InternalVTableHelperCtorCaller<URenderTargetMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaCapture.InnerSingleton;
}

// InitializeCapture @ 14d7afbd0

bool __thiscall URenderTargetMediaCapture::InitializeCapture(URenderTargetMediaCapture *this)

{
  return true;
}

// OnRHIResourceCaptured_RenderingThread @ 14d7b3400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
URenderTargetMediaCapture::OnRHIResourceCaptured_RenderingThread
          (URenderTargetMediaCapture *this,FRHICommandListImmediate *param_1,
          FCaptureBaseData *param_2,TSharedPtr<FMediaCaptureUserData,1> *param_3,
          TRefCountPtr<FRHITexture> param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UTextureRenderTarget2D *this_00;
  FRHIResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTextureRenderTargetResource *pFVar4;
  undefined8 *puVar5;
  IRHICommandContext *pIVar6;
  FRHIResource *pFVar7;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  lpCriticalSection = &this->RenderTargetCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (this->RenderTarget).field0_0x0.DebugPtr;
  if ((this_00 == (UTextureRenderTarget2D *)0x0) ||
     (pFVar4 = UTextureRenderTarget::GetRenderTargetResource((UTextureRenderTarget *)this_00),
     pFVar4 == (FTextureRenderTargetResource *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
      return;
    }
  }
  else {
    pFVar4 = UTextureRenderTarget::GetRenderTargetResource
                       ((UTextureRenderTarget *)(this->RenderTarget).field0_0x0.DebugPtr);
    puVar5 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x10))(&pFVar4->_padding_);
    pFVar7 = (FRHIResource *)*puVar5;
    if (pFVar7 == (FRHIResource *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      pFVar7 = (FRHIResource *)(param_4.Reference)->_padding_;
    }
    else {
      FRHIResource::AddRef(pFVar7);
      iStack_60 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      iStack_54 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_48 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      pFVar1 = (FRHIResource *)(param_4.Reference)->_padding_;
      local_68 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      uStack_5c = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      uStack_58 = (undefined4)
                  ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
      uStack_50 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 1;
      uStack_38 = 0;
      uStack_34 = 0;
      local_30 = 1;
      if (pFVar1 == (FRHIResource *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceTextureRHI && DestTextureRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1077,L"");
        if (bVar3) {
code_r0x00014d7b3536:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else if ((pFVar1 == pFVar7) &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourceTextureRHI != DestTextureRHI",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x1078,L""), bVar3)) goto code_r0x00014d7b3536;
      if (((param_1->field_0x29b & 2) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsOutsideRenderPass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1079,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar5;
        *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
        puVar5[1] = 0;
        *puVar5 = &___7FRHICommandCopyTexture__6B_;
        puVar5[2] = local_68;
        puVar5[3] = CONCAT44(uStack_5c,iStack_60);
        puVar5[4] = CONCAT44(iStack_54,uStack_58);
        puVar5[5] = uStack_50;
        puVar5[6] = CONCAT44(uStack_44,local_48);
        puVar5[7] = CONCAT44(uStack_3c,uStack_40);
        puVar5[8] = CONCAT44(uStack_34,uStack_38);
        *(undefined4 *)(puVar5 + 9) = local_30;
        puVar5[10] = pFVar1;
        puVar5[0xb] = pFVar7;
        if ((pFVar1 == (FRHIResource *)0x0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6604847226579585294>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x90e,"SourceTexture"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((puVar5[0xb] == 0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6604847226579585295>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x90f,"DestTexture"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar6->_padding_ + 0x260))(pIVar6,pFVar1,pFVar7,&local_68);
      }
      pFVar4 = UTextureRenderTarget::GetRenderTargetResource
                         ((UTextureRenderTarget *)(this->RenderTarget).field0_0x0.DebugPtr);
      FDeferredUpdateResource::FlushDeferredResourceUpdate
                ((FDeferredUpdateResource *)&pFVar4->_padding_,param_1);
      FRHIResource::Release(pFVar7);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      pFVar7 = (FRHIResource *)(param_4.Reference)->_padding_;
    }
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
    }
  }
  return;
}

// PostInitializeCaptureRHIResource @ 14d7b6130

bool __thiscall
URenderTargetMediaCapture::PostInitializeCaptureRHIResource
          (URenderTargetMediaCapture *this,FRHICaptureResourceDescription *param_1)

{
  bool bVar1;
  
  bVar1 = StartNewCapture(this,&param_1->ResourceSize,param_1->PixelFormat);
  return bVar1;
}

// PostInitializeCaptureRenderTarget @ 14d7b6150

bool __thiscall
URenderTargetMediaCapture::PostInitializeCaptureRenderTarget
          (URenderTargetMediaCapture *this,UTextureRenderTarget2D *param_1)

{
  EPixelFormat EVar1;
  bool bVar2;
  TIntPoint<int> local_res10 [3];
  
  EVar1 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  bVar2 = StartNewCapture(this,local_res10,EVar1);
  return bVar2;
}

// PostInitializeCaptureViewport @ 14d7b61a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
URenderTargetMediaCapture::PostInitializeCaptureViewport
          (URenderTargetMediaCapture *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1->Object == (FSceneViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  plVar4 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x10))();
  if ((longlong *)*plVar4 == (longlong *)0x0) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    return false;
  }
  lVar5 = (**(code **)(*(longlong *)*plVar4 + 0x20))();
  bVar2 = StartNewCapture(this,(TIntPoint<int> *)(lVar5 + 0x24),*(EPixelFormat *)(lVar5 + 0x33));
  return bVar2;
}

// ShouldCaptureRHIResource @ 14d7bd500

bool __thiscall URenderTargetMediaCapture::ShouldCaptureRHIResource(URenderTargetMediaCapture *this)

{
  return true;
}

// StartNewCapture @ 14d7bd640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
URenderTargetMediaCapture::StartNewCapture
          (URenderTargetMediaCapture *this,TIntPoint<int> *param_1,EPixelFormat param_2)

{
  longlong *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  UClass *pUVar4;
  UTextureRenderTarget2D *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStack_1098 [32];
  FString local_1078;
  FString local_1068;
  code *local_1058 [2];
  undefined **local_1048;
  FWeakObjectPtr local_1040;
  undefined8 local_1030;
  uchar local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14d7bd64f;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1098;
  if (-1 < BookmarkChannel->Enabled) {
    if (!__BookmarkPoint84) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint84,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\RenderTargetMediaCapture.cpp"
                 ,0x54,L"RenderTargetMediaCapture::StartNewCapture");
      __BookmarkPoint84 = true;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    local_1028[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint84,uVar3,1,local_1028);
  }
  this_00 = &this->_padding_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  if (*this_00 != 0) {
    pUVar4 = URenderTargetMediaOutput::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if ((bVar2) && (lVar1 = *this_00, lVar1 != 0)) {
      lpCriticalSection = &this->RenderTargetCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pUVar5 = TSoftObjectPtr<UTextureRenderTarget2D>::LoadSynchronous
                         ((TSoftObjectPtr<UTextureRenderTarget2D> *)(lVar1 + 0x38));
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar5 == (UTextureRenderTarget2D *)0x0)) {
        (this->RenderTarget).field0_0x0.DebugPtr = pUVar5;
        if (pUVar5 == (UTextureRenderTarget2D *)0x0) {
          if (1 < (byte)LogMediaIOCore._0_1_) {
            FSoftObjectPath::ToString((FSoftObjectPath *)(lVar1 + 0x40),&local_1078);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
            if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1078.Data.AllocatorInstance.Data);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
            LOCK();
            *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
            UNLOCK();
            bVar2 = IsInGameThread();
            if (bVar2) {
              TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
              ProcessMulticastDelegate<UObject>
                        ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
                         (void *)0x0);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &this->_padding_);
              return false;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            local_1068.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1078.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1068,(FObjectPtr)&local_1078);
            local_1030 = 0;
            local_1048 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::
                          _vftable_;
            local_1040 = (FWeakObjectPtr)local_1068.Data.AllocatorInstance.Data;
            local_1058[0] =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
            AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_1058);
          }
          return false;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
        (this->RenderTarget).field0_0x0.DebugPtr = pUVar5;
      }
      UMediaCapture::SetState((UMediaCapture *)this,Capturing);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    pFVar6 = GetTypeName<URenderTargetMediaOutput>(&local_1078);
    pwVar8 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UMediaOutput>(&local_1068,(UMediaOutput *)*this_00);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar7);
  }
  pFVar6 = GetTypeName<URenderTargetMediaOutput>(&local_1078);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// StaticRegisterNativesURenderTargetMediaCapture @ 14d7be4e0

void __cdecl URenderTargetMediaCapture::StaticRegisterNativesURenderTargetMediaCapture(void)

{
  return;
}

// StopCaptureImpl @ 14d7be580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URenderTargetMediaCapture::StopCaptureImpl(URenderTargetMediaCapture *this,bool param_1)

{
  uint uVar1;
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d7be58a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  if (-1 < BookmarkChannel->Enabled) {
    if (!__BookmarkPoint79) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint79,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\RenderTargetMediaCapture.cpp"
                 ,0x4f,L"RenderTargetMediaCapture::StopCapture");
      __BookmarkPoint79 = true;
    }
    uVar1 = CallstackTrace_GetCurrentId();
    local_1018[0] = '\0';
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint79,uVar1,1,local_1018);
  }
  return;
}

