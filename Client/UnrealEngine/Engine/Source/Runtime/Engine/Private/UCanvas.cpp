// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 82

// StaticClass @ 1488f0d10

UClass * __cdecl UCanvas::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Canvas",&Z_Registration_Info_UClass_UCanvas.InnerSingleton,
               StaticRegisterNativesUCanvas,0x3a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCanvas>,
               InternalVTableHelperCtorCaller<UCanvas>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvas.InnerSingleton;
}

// UCanvas @ 14890a780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCanvas * __thiscall UCanvas::UCanvas(UCanvas *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCanvas__6B_;
  (this->DefaultTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->GradientTexture0).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->ReporterGraph).field0_0x0.DebugPtr = (UReporterGraph *)0x0;
  FDisplayDebugManager::FDisplayDebugManager(&this->DisplayDebugManager);
  return this;
}

// UCanvas @ 14890a7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCanvas * __thiscall UCanvas::UCanvas(UCanvas *this,FObjectInitializer *param_1)

{
  double dVar1;
  undefined4 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCanvas__6B_;
  (this->DefaultTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->GradientTexture0).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->ReporterGraph).field0_0x0.DebugPtr = (UReporterGraph *)0x0;
  FDisplayDebugManager::FDisplayDebugManager(&this->DisplayDebugManager);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UTexture2D>::FObjectFinder<UTexture2D>
                (&::ConstructorStatics.WhiteSquareTexture,
                 L"/Engine/EngineResources/WhiteSquareTexture",0);
      ConstructorHelpers::FObjectFinder<UPackage>::FObjectFinder<UPackage>
                (&::ConstructorStatics.WhiteSquareTextureP,
                 L"/Engine/EngineResources/WhiteSquareTexture.",0);
      ConstructorHelpers::FObjectFinder<UTexture2D>::FObjectFinder<UTexture2D>
                (&::ConstructorStatics.GradientTexture0,L"/Engine/EngineResources/GradientTexture0",
                 0);
      ConstructorHelpers::FObjectFinder<UPackage>::FObjectFinder<UPackage>
                (&::ConstructorStatics.GradientTexture0P,
                 L"/Engine/EngineResources/GradientTexture0.",0);
      atexit(`UCanvas::UCanvas'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8 = 0xff7f7f7f;
  (this->DrawColor).field0_0x0.Bits = 0xff7f7f7f;
  (this->ColorModulate)._padding_ = 0x3ff0000000000000;
  (this->ColorModulate)._padding_ = 0x3ff0000000000000;
  (this->ColorModulate)._padding_ = 0x3ff0000000000000;
  (this->ColorModulate).W = 1.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0);
  }
  (this->DefaultTexture).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)::ConstructorStatics.WhiteSquareTexture.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.GradientTexture0.Object.field0_0x0 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.GradientTexture0.Object.field0_0x0);
  }
  (this->GradientTexture0).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)::ConstructorStatics.GradientTexture0.Object.field0_0x0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->HmdOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->HmdOrientation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->HmdOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->HmdOrientation).W = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ViewProjectionMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ViewProjectionMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ViewProjectionMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ViewProjectionMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ViewProjectionMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ViewProjectionMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ViewProjectionMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ViewProjectionMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = dVar1;
  this->UnsafeSizeX = 0;
  this->UnsafeSizeY = 0;
  this->SafeZonePadX = 0;
  this->SafeZonePadY = 0;
  this->SafeZonePadEX = 0;
  this->SafeZonePadEY = 0;
  this->CachedDisplayWidth = 0;
  this->CachedDisplayHeight = 0;
  this->SceneView = (FSceneView *)0x0;
  this->Canvas = (FCanvas *)0x0;
  UpdateSafeZoneData(this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddUObject<UCanvas>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnSafeFrameChangedEvent,(UCanvas *)&local_res8,(pmf_5bf4f93f)this);
  return this;
}

// ~UCanvas @ 14890e620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::~UCanvas(UCanvas *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UCanvas__6B_;
  (this->DisplayDebugManager).DebugTextItem._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  pIVar1 = (this->DisplayDebugManager).DebugTextItem.Text.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((char)(this->DisplayDebugManager).DebugTextItem._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->DisplayDebugManager).DebugTextItem._padding_);
  }
  (this->DisplayDebugManager).DebugTextItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  (this->DisplayDebugManager).DebugTextItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplySafeZoneTransform @ 148918e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::ApplySafeZoneTransform(UCanvas *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSceneView *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [80];
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_a8._8_8_ = _UNK_150689518;
  local_a8._0_8_ = ___xmm_00000000000000003ff0000000000000;
  local_a8._40_8_ = _UNK_15061cbc8;
  local_a8._32_8_ = ___xmm_3ff00000000000000000000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar1 = this->SafeZonePadX;
  if ((((iVar1 != 0) || (this->SafeZonePadY != 0)) || (this->SafeZonePadEX != 0)) ||
     (this->SafeZonePadEY != 0)) {
    pFVar4 = this->SceneView;
    iVar6 = 0;
    iVar8 = 0;
    if (pFVar4 != (FSceneView *)0x0) {
      iVar6 = *(int *)&(pFVar4->UnscaledViewRect).field0_0x0;
      iVar8 = *(int *)((longlong)&(pFVar4->UnscaledViewRect).field0_0x0 + 4);
    }
    iVar2 = this->SizeX;
    iVar3 = this->SizeY;
    this->UnsafeSizeX = iVar2;
    this->UnsafeSizeY = iVar3;
    iVar7 = (int)((float)iVar6 + this->OrgX);
    iVar6 = 0;
    if (iVar7 < iVar1) {
      iVar6 = iVar1 - iVar7;
    }
    iVar8 = (int)((float)iVar8 + this->OrgY);
    iVar1 = 0;
    if (iVar8 < this->SafeZonePadY) {
      iVar1 = this->SafeZonePadY - iVar8;
    }
    local_58 = (double)local_a8._0_8_;
    dStack_50 = (double)local_a8._8_8_;
    iVar5 = (this->SafeZonePadEX - this->CachedDisplayWidth) + iVar7 + iVar2;
    if (iVar7 + iVar2 <= this->CachedDisplayWidth - this->SafeZonePadEX) {
      iVar5 = 0;
    }
    iVar7 = (this->SafeZonePadEY - this->CachedDisplayHeight) + iVar3 + iVar8;
    if (iVar3 + iVar8 <= this->CachedDisplayHeight - this->SafeZonePadEY) {
      iVar7 = 0;
    }
    this->SizeX = (iVar2 - iVar6) - iVar5;
    this->SizeY = (iVar3 - iVar1) - iVar7;
    local_a8._64_16_ = ZEXT416(0);
    this->ClipX = (float)(((iVar2 - (int)((float)iVar2 - this->ClipX)) - iVar6) - iVar5);
    this->ClipY = (float)(((iVar3 - (int)((float)iVar3 - this->ClipY)) - iVar1) - iVar7);
    local_a8._16_8_ = 0.0;
    local_a8._24_8_ = 0.0;
    local_a8._48_8_ = 0.0;
    local_a8._56_8_ = 0.0;
    local_48 = (double)iVar6;
    local_40 = (double)iVar1;
    local_38 = (double)local_a8._32_8_;
    dStack_30 = (double)local_a8._40_8_;
    FCanvas::PushRelativeTransform(this->Canvas,(TMatrix<double> *)local_a8);
  }
  return;
}

// BeginDestroy @ 148919210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::BeginDestroy(UCanvas *this)

{
  UObject::BeginDestroy((UObject *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnSafeFrameChangedEvent,this);
  return;
}

// CanvasStringSize @ 14891cb70

void __cdecl UCanvas::CanvasStringSize(FTextSizingParameters *param_1,TStringView<wchar_t> *param_2)

{
  int local_res10 [6];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MeasureStringInternal(param_1,&local_18,0,Unused,local_res10);
  return;
}

// ClippedStrLen @ 14891d240

void __cdecl
UCanvas::ClippedStrLen
          (UFont *param_1,float param_2,float param_3,int *param_4,int *param_5,
          TStringView<wchar_t> *param_6)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  undefined8 uVar3;
  int *piVar4;
  wchar_t *pwVar5;
  schar sVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_res20 [2];
  float local_98 [28];
  
  piVar4 = param_5;
  *param_4 = 0;
  *param_5 = 0;
  if (param_1 != (UFont *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    fVar10 = 0.0;
    pwVar5 = param_6->DataPtr;
    uVar3 = *(undefined8 *)&param_6->Size;
    UFont::GetCharSize(param_1,L'0',local_res20,local_98);
    if (local_res20[0] == 0.0) {
      UFont::GetCharSize(param_1,L'A',local_res20,local_98);
    }
    pwVar1 = pwVar5 + (int)uVar3;
    fVar11 = 0.0;
    pwVar9 = (wchar_t *)0x0;
    while (pwVar5 < pwVar1) {
      while( true ) {
        pwVar8 = pwVar5;
        wVar2 = *pwVar8;
        if (wVar2 == L'\0') goto LAB_14891d464;
        UFont::GetCharSize(param_1,wVar2,local_res8,(float *)&param_5);
        if ((param_5._0_4_ == 0.0) && (wVar2 == L'\n')) {
          param_5._0_4_ = local_98[0];
        }
        fVar12 = 0.0;
        if (pwVar9 != (wchar_t *)0x0) {
          sVar6 = UFont::GetCharKerning(param_1,*pwVar9,wVar2);
          fVar12 = (float)(int)sVar6 * param_2;
        }
        pwVar5 = pwVar8 + 1;
        local_res8[0] = local_res8[0] * param_2;
        param_5._0_4_ = param_5._0_4_ * param_3;
        pwVar9 = pwVar8;
        if ((pwVar1 <= pwVar5) || (*pwVar5 == L'\0')) break;
        iVar7 = iswspace(*pwVar5);
        if (iVar7 != 0) break;
        if (fVar11 <= param_5._0_4_) {
          fVar11 = param_5._0_4_;
        }
        local_res8[0] = local_res8[0] + fVar12;
        fVar10 = fVar10 + local_res8[0];
      }
      fVar12 = param_5._0_4_;
      if (param_5._0_4_ <= fVar11) {
        fVar12 = fVar11;
      }
      fVar10 = fVar10 + local_res8[0];
      fVar11 = fVar12;
    }
LAB_14891d464:
    *param_4 = (int)fVar10;
    *piVar4 = (int)fVar11;
  }
  return;
}

// CreateFontRenderInfo @ 1489245f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FFontRenderInfo * __thiscall
UCanvas::CreateFontRenderInfo
          (UCanvas *this,FFontRenderInfo *__return_storage_ptr__,bool param_1,bool param_2,
          FLinearColor *param_3,TVector2<double> *param_4,TVector2<double> *param_5)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = *(uint *)&__return_storage_ptr__->GlowInfo;
  *(undefined8 *)&(__return_storage_ptr__->GlowInfo).GlowColor.field0_0x0 = 0;
  uVar2 = uVar2 & 0xfffffffe;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->GlowInfo).GlowColor.field0_0x0 + 8) = 0;
  (__return_storage_ptr__->GlowInfo).GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->GlowInfo).GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->GlowInfo).GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->GlowInfo).GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  *(uint *)__return_storage_ptr__ =
       (uint)param_2 * 2 | *(uint *)__return_storage_ptr__ & 0xfffffffc | (uint)param_1;
  if ((param_3->field0_0x0)._s_0.A != 0.0) {
    *(uint *)&__return_storage_ptr__->GlowInfo = uVar2 | 1;
    dVar1 = (param_4->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->GlowInfo).GlowOuterRadius.field0_0x0._s_0.X =
         (param_4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->GlowInfo).GlowOuterRadius.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_5->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->GlowInfo).GlowInnerRadius.field0_0x0._s_0.X =
         (param_5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->GlowInfo).GlowInnerRadius.field0_0x0._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->GlowInfo = uVar2;
  return __return_storage_ptr__;
}

// Deproject @ 148924ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::Deproject(UCanvas *this,TVector2<double> *param_1,TVector<double> *param_2,
                  TVector<double> *param_3)

{
  if (this->SceneView != (FSceneView *)0x0) {
    FSceneView::DeprojectFVector2D(this->SceneView,param_1,param_2,param_3);
  }
  return;
}

// DrawDebugGraph @ 14892d900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::DrawDebugGraph
          (UCanvas *this,FString *param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,TVector2<double> *param_8,TVector2<double> *param_9)

{
  double dVar1;
  FCanvas *pFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  UFont *pUVar8;
  FText *pFVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  FCanvasLineItem local_4a8;
  TVector2<double>_u_0 local_428;
  undefined1 local_418 [64];
  TVector2<double>_u_0 local_3d8;
  float local_3c8;
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  FText local_3a8;
  FText local_398;
  FText local_388;
  undefined1 local_378 [64];
  TVector2<double>_u_0 local_338;
  float local_328;
  TVector2<double>_u_0 local_320;
  TVector2<double>_u_0 TStack_310;
  FTexture *local_300;
  FMaterialRenderProxy *local_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  TVector2<double>_u_0 local_2d8;
  FCanvasTextItemBase local_2c8;
  UFont *local_130;
  TReferenceControllerBase<1> *local_f0;
  char local_c8;
  FText local_c0 [10];
  
  fVar6 = param_5;
  fVar11 = param_4;
  dVar13 = (param_8->field0_0x0)._s_0.X;
  dVar15 = (param_8->field0_0x0)._s_0.Y;
  if (dVar15 != dVar13) {
    dVar13 = ((double)param_2 - dVar13) / (dVar15 - dVar13);
  }
  dVar4 = (double)param_4;
  dVar15 = (param_9->field0_0x0)._s_0.X;
  dVar1 = (param_9->field0_0x0)._s_0.Y;
  dVar12 = (double)param_6;
  if (dVar1 != dVar15) {
    dVar15 = ((double)param_3 - dVar15) / (dVar1 - dVar15);
  }
  pFVar2 = this->Canvas;
  dVar1 = (double)param_5;
  local_418._24_8_ = 0;
  local_418[0x20] = 0;
  local_418._40_8_ = 0;
  local_418._0_8_ = &___7FCanvasBoxItem__6B_;
  local_3c8 = 0.0;
  dVar14 = (double)param_7;
  local_3c0.Data = (FScriptContainerElement *)0x0;
  local_3b8._0_4_ = 0;
  local_3b8._4_4_ = 0;
  local_418._48_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  local_418._8_8_ = dVar4;
  local_418._16_8_ = dVar1;
  local_3d8._s_0.X = dVar12;
  local_3d8._s_0.Y = dVar14;
  FCanvasBoxItem::Draw((FCanvasBoxItem *)local_418,pFVar2);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  local_378._24_8_ = 0;
  local_378[0x20] = 0;
  local_378._40_8_ = 0;
  local_338._s_0.X = ___xmm_40200000000000004020000000000000;
  local_338._s_0.Y = _UNK_151be7c58;
  local_320._s_0.Y = ___xmm_3ff00000000000000000000000000000;
  TStack_310._s_0.X = _UNK_15061cbc8;
  TStack_310._s_0.Y = __real_3ff0000000000000;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  local_328 = 1.0;
  local_320._s_0.X = 0.0;
  local_2f8 = (FMaterialRenderProxy *)0x0;
  local_2f0 = 0.0;
  local_2d8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_378._48_16_ = (undefined1  [16])FLinearColor::Yellow.field0_0x0;
  dVar13 = (double)(int)((dVar12 * dVar13 + dVar4) - __real_4010000000000000);
  dVar15 = (double)(int)((dVar14 * dVar15 + dVar1) - __real_4010000000000000);
  local_378._0_8_ = &___7FCanvasTileItem__6B_;
  local_300 = GWhiteTexture;
  local_378._8_8_ = dVar13;
  local_378._16_8_ = dVar15;
  if (GWhiteTexture == (FTexture *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x152,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this->Canvas;
  if (*(code **)(local_378._0_8_ + 0x18) == FCanvasTileItem::Draw) {
    FCanvasTileItem::Draw((FCanvasTileItem *)local_378,pFVar2);
  }
  else {
    (**(code **)(local_378._0_8_ + 0x18))();
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  fVar11 = fVar11 + param_6;
  pFVar2 = this->Canvas;
  local_4a8.EndPos.field0_0x0._s_0.X = (double)fVar11;
  local_4a8._padding_ = 0;
  local_4a8._padding_._0_1_ = 0;
  local_4a8._padding_ = 0;
  local_4a8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_4a8.LineThickness = 0.0;
  local_4a8._padding_ = ___xmm_3f000000000000003f0000003f000000;
  local_4a8._padding_ = _UNK_1518d02d8;
  local_4a8.Origin.field0_0x0._s_0.Z = 0.0;
  local_4a8.EndPos.field0_0x0._s_0.Z = 0.0;
  local_4a8._padding_ = (longlong)dVar4;
  local_4a8._padding_ = (longlong)dVar15;
  local_4a8.Origin.field0_0x0._s_0.X = dVar4;
  local_4a8.Origin.field0_0x0._s_0.Y = dVar15;
  local_4a8.EndPos.field0_0x0._s_0.Y = dVar15;
  FCanvasLineItem::Draw(&local_4a8,pFVar2);
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  pFVar2 = this->Canvas;
  local_4a8.Origin.field0_0x0._s_0.Z = 0.0;
  fVar10 = fVar6 + param_7;
  local_4a8.EndPos.field0_0x0._s_0.Y = (double)fVar10;
  local_4a8.Origin.field0_0x0._s_0.X = dVar13;
  local_4a8.Origin.field0_0x0._s_0.Y = dVar1;
  local_4a8.EndPos.field0_0x0._s_0.X = dVar13;
  if (*(code **)(local_4a8._padding_ + 0x18) == FCanvasLineItem::Draw) {
    FCanvasLineItem::Draw(&local_4a8,pFVar2);
  }
  else {
    (**(code **)(local_4a8._padding_ + 0x18))();
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_4e8,L"%f");
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  local_4f8.Data.AllocatorInstance.Data = local_4e8.Data.AllocatorInstance.Data;
  local_4f8.Data.ArrayNum = local_4e8.Data.ArrayNum;
  local_4f8.Data.ArrayMax = local_4e8.Data.ArrayMax;
  pUVar8 = UEngine::GetSmallFont();
  pFVar9 = FText::FromString(&local_3a8,&local_4f8);
  fVar5 = __real_41800000;
  local_428._s_0.Y = (double)(fVar10 + __real_41800000);
  local_428._s_0.X = dVar13;
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_2c8,(TVector2<double> *)&local_428._s_0,&FLinearColor::Yellow);
  local_2c8._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  local_c8 = '\0';
  local_2c8._padding_._4_4_ = 2;
  local_c0[0].TextData.Reference = (pFVar9->TextData).Reference;
  local_130 = pUVar8;
  if (local_c0[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0[0].TextData.Reference + 8))
              (local_c0[0].TextData.Reference,&param_4);
  }
  local_c0[0].Flags = pFVar9->Flags;
  if (local_3a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
  }
  pFVar2 = this->Canvas;
  if (*(code **)(local_2c8._padding_ + 0x18) == FCanvasTextItemBase::Draw) {
    FCanvasTextItemBase::Draw(&local_2c8,pFVar2);
  }
  else {
    (**(code **)(local_2c8._padding_ + 0x18))();
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  ::FString::PrintfImpl(&local_4d8,L"%f");
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  local_4f8.Data.AllocatorInstance.Data = local_4d8.Data.AllocatorInstance.Data;
  local_4f8.Data.ArrayNum = local_4d8.Data.ArrayNum;
  local_4f8.Data.ArrayMax = local_4d8.Data.ArrayMax;
  pFVar9 = FText::FromString(&local_398,&local_4f8);
  FText::operator=(local_c0,pFVar9);
  if (local_398.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
  }
  pFVar2 = this->Canvas;
  local_4c8 = (double)(fVar11 + __real_41000000);
  dStack_4c0 = dVar15;
  if (*(code **)(local_2c8._padding_ + 0x10) == FCanvasItem::Draw) {
    local_2c8._padding_ = (longlong)local_4c8;
    local_2c8._padding_ = (longlong)dVar15;
    (**(code **)(local_2c8._padding_ + 0x18))();
  }
  else {
    (**(code **)(local_2c8._padding_ + 0x10))(&local_2c8,pFVar2,&local_4c8);
  }
  if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar2,false);
  }
  if (1 < (param_1->Data).ArrayNum) {
    pFVar9 = FText::FromString(&local_388,param_1);
    FText::operator=(local_c0,pFVar9);
    if (local_388.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
    }
    pFVar2 = this->Canvas;
    dStack_4b0 = (double)(fVar6 - fVar5);
    local_4b8 = dVar4;
    if (*(code **)(local_2c8._padding_ + 0x10) == FCanvasItem::Draw) {
      local_2c8._padding_ = (longlong)dVar4;
      local_2c8._padding_ = (longlong)dStack_4b0;
      (**(code **)(local_2c8._padding_ + 0x18))();
    }
    else {
      (**(code **)(local_2c8._padding_ + 0x10))(&local_2c8,pFVar2,&local_4b8);
    }
    if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(pFVar2,false);
    }
  }
  local_2c8._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  if (local_c0[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0[0].TextData.Reference + 0x10))();
  }
  if (local_c8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  }
  local_2c8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_2c8._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  local_4a8._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_378._0_8_ = &___7FCanvasItem__6B_;
  if (local_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data);
  }
  return;
}

// DrawIcon @ 14892e210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
UCanvas::DrawIcon(UCanvas *this,FCanvasIcon *param_1,float param_2,float param_3,float param_4)

{
  UTexture *pUVar1;
  float fVar2;
  
  pUVar1 = (param_1->Texture).field0_0x0.DebugPtr;
  if (pUVar1 != (UTexture *)0x0) {
    if (param_4 <= 0.0) {
      param_4 = __real_3f800000;
    }
    if (param_1->UL == 0.0) {
      fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x368))();
      param_1->UL = fVar2;
    }
    fVar2 = param_1->VL;
    if (fVar2 == 0.0) {
      fVar2 = (float)(**(code **)(((param_1->Texture).field0_0x0.DebugPtr)->_padding_ + 0x370))();
      param_1->VL = fVar2;
    }
    DrawTile(this,(param_1->Texture).field0_0x0.DebugPtr,param_2,param_3,
             (float)((uint)param_1->UL & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_4,
             (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_4,param_1->U,
             param_1->V,param_1->UL,fVar2,BLEND_Translucent);
  }
  return;
}

// DrawItem @ 14892e3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::DrawItem(UCanvas *this,FCanvasItem *param_1)

{
  FCanvas *this_00;
  
  this_00 = this->Canvas;
  (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
    return;
  }
  return;
}

// DrawItem @ 14892e430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::DrawItem(UCanvas *this,FCanvasItem *param_1,TVector2<double> *param_2)

{
  FCanvas *this_00;
  
  this_00 = this->Canvas;
  (**(code **)(param_1->_padding_ + 0x10))(param_1);
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
    return;
  }
  return;
}

// DrawItem @ 14892e470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::DrawItem(UCanvas *this,FCanvasItem *param_1,float param_2,float param_3)

{
  FCanvas *this_00;
  
  this_00 = this->Canvas;
  (**(code **)(param_1->_padding_ + 8))(param_1);
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
    return;
  }
  return;
}

// DrawScaledIcon @ 14892fa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
UCanvas::DrawScaledIcon
          (UCanvas *this,FCanvasIcon *param_1,float param_2,float param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UTexture *pUVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pUVar4 = (param_1->Texture).field0_0x0.DebugPtr;
  if (pUVar4 != (UTexture *)0x0) {
    dVar1 = (param_4->field0_0x0)._s_0.X;
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = (param_4->field0_0x0)._s_0.Z;
    auVar6._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
    auVar6._8_8_ = 0;
    auVar6 = sqrtpd(auVar6,auVar6);
    uVar9 = SUB84(dVar1,0);
    uVar10 = (int)((ulonglong)dVar1 >> 0x20);
    if (auVar6._0_8_ <= 0.0) {
      uVar7 = (undefined4)__real_3ff0000000000000;
      uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar9 = uVar7;
      uVar10 = uVar8;
    }
    if (param_1->UL == 0.0) {
      fVar5 = (float)(**(code **)(pUVar4->_padding_ + 0x368))();
      param_1->UL = fVar5;
    }
    fVar5 = param_1->VL;
    if (fVar5 == 0.0) {
      fVar5 = (float)(**(code **)(((param_1->Texture).field0_0x0.DebugPtr)->_padding_ + 0x370))();
      param_1->VL = fVar5;
    }
    DrawTile(this,(param_1->Texture).field0_0x0.DebugPtr,param_2,param_3,
             (float)((double)(float)((uint)param_1->UL & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                    (double)CONCAT44(uVar10,uVar9)),
             (float)((double)(float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                    (double)CONCAT44(uVar8,uVar7)),param_1->U,param_1->V,param_1->UL,fVar5,
             BLEND_Translucent);
  }
  return;
}

// DrawText @ 148937400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UCanvas::DrawText(UCanvas *this,UFont *param_1,FText *param_2,float param_3,float param_4,
                 float param_5,float param_6,FFontRenderInfo *param_7)

{
  int iVar1;
  FString *pFVar2;
  float fVar3;
  TStringView<wchar_t> local_28 [2];
  
  pFVar2 = FText::ToString(param_2);
  local_28[0].DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28[0].Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28[0].Size = 0;
  }
  fVar3 = DrawText(this,param_1,local_28,param_3,param_4,param_5,param_6,param_7);
  return fVar3;
}

// DrawText @ 1489374b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UCanvas::DrawText(UCanvas *this,UFont *param_1,TStringView<char> *param_2,float param_3,
                 float param_4,float param_5,float param_6,FFontRenderInfo *param_7)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  float fVar4;
  undefined1 auStackY_1a8 [32];
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pcVar1 = param_2->DataPtr;
  iVar3 = param_2->Size;
  EVar2 = No;
  local_158._padding_ = 0;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,iVar3,EVar2);
  }
  local_168.Size = local_158.StringLength;
  local_168.DataPtr = local_158.Ptr;
  fVar4 = DrawText(this,param_1,&local_168,param_3,param_4,param_5,param_6,param_7);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return fVar4;
}

// DrawText @ 1489375e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UCanvas::DrawText(UCanvas *this,UFont *param_1,TStringView<wchar_t> *param_2,float param_3,
                 float param_4,float param_5,float param_6,FFontRenderInfo *param_7)

{
  FCanvas *this_00;
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int local_res8 [2];
  int local_res10 [2];
  FLinearColor_u_0 local_2a8;
  TVector2<double>_u_0 local_298;
  TStringView<wchar_t> local_288;
  FCanvasTextItemBase local_278;
  UFont *local_e0;
  TReferenceControllerBase<1> *local_a0;
  char local_78;
  wchar_t *local_70;
  undefined8 uStack_68;
  
  if (param_1 == (UFont *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3367566608481384811>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                       ,0x695,"InFont");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  local_288.DataPtr = param_2->DataPtr;
  local_288.Size = param_2->Size;
  local_288._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res8[0] = 0;
  WrappedPrint(this,(bool)(~param_7->bClipText & 1),param_3,param_4,local_res10,local_res8,param_1,
               param_5,param_6,this->bCenterX,this->bCenterY,&local_288,param_7);
  if (param_7->bClipText != 0) {
    local_2a8._s_0.R = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.R];
    local_2a8._s_0.G = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.G];
    local_2a8._s_0.B = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.B];
    auVar4 = ZEXT416((uint)(param_3 + this->OrgX));
    auVar4 = roundps(auVar4,auVar4,3);
    auVar5._0_8_ = (double)auVar4._0_4_;
    auVar5._8_8_ = (double)auVar4._4_4_;
    auVar4 = roundps(auVar5,ZEXT416((uint)(param_4 + this->OrgY)),3);
    local_2a8._s_0.A = (float)(this->DrawColor).field0_0x0._s_0.A * __real_3b808081;
    local_298._s_0.Y = (double)auVar4._0_4_;
    local_298._s_0.X = auVar5._0_8_;
    FCanvasTextItemBase::FCanvasTextItemBase
              (&local_278,(TVector2<double> *)&local_298._s_0,(FLinearColor *)&local_2a8._s_0);
    local_70 = param_2->DataPtr;
    uStack_68 = *(undefined8 *)&param_2->Size;
    local_278.Scale.field0_0x0._s_0.X = (double)param_5;
    local_78 = '\0';
    local_278._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
    local_278._padding_._4_4_ = 2;
    local_278.Scale.field0_0x0._s_0.Y = (double)param_6;
    local_278.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._4_8_ =
         *(undefined8 *)((longlong)&(param_7->GlowInfo).GlowColor.field0_0x0 + 4);
    local_278.FontRenderInfo.GlowInfo._16_8_ =
         *(undefined8 *)((longlong)&(param_7->GlowInfo).GlowColor.field0_0x0 + 0xc);
    local_278.FontRenderInfo._0_8_ = *(undefined8 *)param_7;
    local_278.FontRenderInfo.GlowInfo._0_8_ = *(undefined8 *)&param_7->GlowInfo;
    local_278.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X =
         (param_7->GlowInfo).GlowInnerRadius.field0_0x0._s_0.X;
    local_278.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y =
         (param_7->GlowInfo).GlowInnerRadius.field0_0x0._s_0.Y;
    local_278.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X =
         (param_7->GlowInfo).GlowOuterRadius.field0_0x0._s_0.X;
    local_278.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y =
         (param_7->GlowInfo).GlowOuterRadius.field0_0x0._s_0.Y;
    this_00 = this->Canvas;
    local_e0 = param_1;
    FCanvasTextItemBase::Draw(&local_278,this_00);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    if (local_78 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    }
  }
  return (float)local_res8[0];
}

// DrawTile @ 148937c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
UCanvas::DrawTile(UCanvas *this,UTexture *param_1,float param_2,float param_3,float param_4,
                 float param_5,float param_6,float param_7,float param_8,float param_9,
                 EBlendMode param_10)

{
  float fVar1;
  float fVar2;
  FCanvas *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  FTextureResource *pFVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_158 [52];
  float local_124;
  float local_120;
  float local_11c;
  TVector2<double>_u_0 local_118;
  float local_108;
  TVector2<double>_u_0 local_100;
  TVector2<double>_u_0 local_f0;
  FTextureResource *local_e0;
  FMaterialRenderProxy *local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  TVector2<double>_u_0 local_b8;
  
  if (param_1 != (UTexture *)0x0) {
    fVar14 = this->ClipX + this->OrgX;
    fVar16 = this->ClipY + this->OrgY;
    fVar15 = param_4;
    if (fVar14 < param_2 + param_4) {
      fVar15 = fVar14 - param_2;
    }
    fVar14 = param_5;
    if (fVar16 < param_3 + param_5) {
      fVar14 = fVar16 - param_3;
    }
    if ((0.0 < param_4) && (0.0 < param_5)) {
      fVar11 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
      fVar12 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
      fVar16 = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.R];
      fVar13 = (__real_3f800000 / fVar11) * param_6;
      fVar1 = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.G];
      fVar2 = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.B];
      dVar5 = (double)((__real_3f800000 / fVar11) * param_8 * (fVar15 / param_4) + fVar13);
      fVar17 = (float)(this->DrawColor).field0_0x0._s_0.A * __real_3b808081;
      fVar11 = (__real_3f800000 / fVar12) * param_7;
      dVar4 = (double)fVar11;
      dVar7 = (double)fVar13;
      dVar6 = (double)((__real_3f800000 / fVar12) * param_9 * (fVar14 / param_5) + fVar11);
      pFVar10 = UTexture::GetResource(param_1);
      local_e0 = (FTextureResource *)GWhiteTexture;
      if (pFVar10 != (FTextureResource *)0x0) {
        pFVar10 = UTexture::GetResource(param_1);
        cVar8 = (**(code **)(pFVar10->_padding_ + 0x48))(pFVar10);
        local_e0 = (FTextureResource *)GWhiteTexture;
        if (cVar8 == '\0') {
          local_e0 = UTexture::GetResource(param_1);
        }
      }
      local_158._8_8_ = (undefined8)param_2;
      local_158._0_8_ = &___7FCanvasTileItem__6B_;
      local_158._24_4_ = 0;
      local_158[0x20] = 0;
      local_158._40_8_ = 0;
      local_d0 = 0.0;
      local_108 = 1.0;
      local_d8 = (FMaterialRenderProxy *)0x0;
      local_158._16_8_ = (undefined8)param_3;
      local_b8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_c8 = 0.0;
      dStack_c0 = 0.0;
      local_158._48_4_ = fVar16;
      local_124 = fVar1;
      local_120 = fVar2;
      local_11c = fVar17;
      local_118._s_0.X = (double)fVar15;
      local_118._s_0.Y = (double)fVar14;
      local_100._s_0.X = dVar7;
      local_100._s_0.Y = dVar4;
      local_f0._s_0.X = dVar5;
      local_f0._s_0.Y = dVar6;
      if ((local_e0 == (FTextureResource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InTexture != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                             ,0x182,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_158._28_4_ = FCanvas::BlendToSimpleElementBlend(param_10);
      this_00 = this->Canvas;
      if (*(code **)(local_158._0_8_ + 0x18) == FCanvasTileItem::Draw) {
        FCanvasTileItem::Draw((FCanvasTileItem *)local_158,this_00);
      }
      else {
        (**(code **)(local_158._0_8_ + 0x18))();
      }
      if (this_00->DrawMode == CDM_ImmediateDrawing) {
        FCanvas::Flush_GameThread(this_00,false);
      }
    }
  }
  return;
}

// GetCenter @ 148956450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::GetCenter(UCanvas *this,float *param_1,float *param_2)

{
  *param_1 = this->ClipX * __real_3f000000 + this->OrgX;
  *param_2 = this->ClipY * __real_3f000000 + this->OrgY;
  return;
}

// GetCenter @ 148956490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::GetCenter(UCanvas *this,double *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = this->ClipY * __real_3f000000;
  fVar1 = this->OrgY;
  *param_1 = (double)(this->ClipX * __real_3f000000 + this->OrgX);
  *param_2 = (double)(fVar2 + fVar1);
  return;
}

// GetPrivateStaticClass @ 14895af60

UClass * __cdecl UCanvas::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Canvas",&Z_Registration_Info_UClass_UCanvas.InnerSingleton,
               StaticRegisterNativesUCanvas,0x3a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCanvas>,
               InternalVTableHelperCtorCaller<UCanvas>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvas.InnerSingleton;
}

// GetReporterGraph @ 14895c380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UReporterGraph,FWeakObjectPtr> __thiscall UCanvas::GetReporterGraph(UCanvas *this)

{
  UClass *pUVar1;
  UReporterGraph *pUVar2;
  longlong *plVar3;
  FWeakObjectPtr in_RDX;
  undefined1 auStack_c8 [32];
  UReporterGraph *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = (this->ReporterGraph).field0_0x0.DebugPtr;
  if (pUVar2 == (UReporterGraph *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UReporterGraph_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    pUVar2 = (UReporterGraph *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UReporterGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ReporterGraph).field0_0x0.DebugPtr = pUVar2;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UReporterGraph *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UReporterGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_a8[0] = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UReporterGraph *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_a8);
  return (TWeakObjectPtr<UReporterGraph,FWeakObjectPtr>)in_RDX;
}

// Init @ 148962260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::Init(UCanvas *this,int param_1,int param_2,FSceneView *param_3,FCanvas *param_4)

{
  longlong lVar1;
  FCanvas *pFVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar6 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar5 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uVar4 = UE::Math::TQuat<double>::Identity.X._0_4_;
  *(undefined4 *)&(this->HmdOrientation).X = UE::Math::TQuat<double>::Identity.X._0_4_;
  *(undefined4 *)((longlong)&(this->HmdOrientation).X + 4) = uVar5;
  *(undefined4 *)&(this->HmdOrientation).Y = uVar6;
  *(undefined4 *)((longlong)&(this->HmdOrientation).Y + 4) = uVar7;
  dVar9 = UE::Math::TQuat<double>::Identity.W;
  dVar8 = UE::Math::TQuat<double>::Identity.Z;
  this->Canvas = param_4;
  lVar1 = this->_padding_;
  this->SizeX = param_1;
  this->UnsafeSizeX = param_1;
  (this->HmdOrientation).Z = dVar8;
  (this->HmdOrientation).W = dVar9;
  this->SizeY = param_2;
  this->UnsafeSizeY = param_2;
  this->SceneView = param_3;
  (**(code **)(lVar1 + 0x2b0))(uVar4,0);
  iVar3 = this->SizeY;
  pFVar2 = this->Canvas;
  this->ClipX = (float)this->SizeX;
  this->ClipY = (float)this->SizeY;
  fVar10 = __real_3f800000;
  if (pFVar2 != (FCanvas *)0x0) {
    fVar11 = __real_3f800000;
    if (pFVar2->bStereoRendering == false) {
      fVar11 = pFVar2->DPIScale;
    }
    this->ClipX = (float)this->SizeX / fVar11;
    if (pFVar2->bStereoRendering == false) {
      fVar10 = pFVar2->DPIScale;
    }
    this->ClipY = (float)this->SizeY / fVar10;
    *(int *)&(pFVar2->ParentSize).field0_0x0 = this->SizeX;
    *(int *)((longlong)&(pFVar2->ParentSize).field0_0x0 + 4) = iVar3;
  }
  return;
}

// K2_Deproject @ 148967c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_Deproject
          (UCanvas *this,TVector2<double> *param_1,TVector<double> *param_2,TVector<double> *param_3
          )

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  if (this->SceneView != (FSceneView *)0x0) {
    FSceneView::DeprojectFVector2D
              (this->SceneView,(TVector2<double> *)&local_18._s_0,param_2,param_3);
  }
  return;
}

// K2_DrawBorder @ 148967c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawBorder
          (UCanvas *this,UTexture *param_1,UTexture *param_2,UTexture *param_3,UTexture *param_4,
          UTexture *param_5,UTexture *param_6,TVector2<double> *param_7,TVector2<double> *param_8,
          TVector2<double> *param_9,TVector2<double> *param_10,FLinearColor *param_11,
          TVector2<double> *param_12,TVector2<double> *param_13,float param_14,
          TVector2<double> *param_15,TVector2<double> *param_16)

{
  FCanvas *this_00;
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FTextureResource *pFVar4;
  FTextureResource *pFVar5;
  FTextureResource *pFVar6;
  FTextureResource *pFVar7;
  FCanvasBorderItem local_148;
  
  if ((((((0.0 < (param_8->field0_0x0)._s_0.X) && (0.0 < (param_8->field0_0x0)._s_0.Y)) &&
        (param_1 != (UTexture *)0x0)) &&
       ((param_2 != (UTexture *)0x0 && (param_3 != (UTexture *)0x0)))) &&
      ((param_4 != (UTexture *)0x0 && ((param_5 != (UTexture *)0x0 && (param_6 != (UTexture *)0x0)))
       ))) && (this->Canvas != (FCanvas *)0x0)) {
    pFVar3 = UTexture::GetResource(param_6);
    pFVar4 = UTexture::GetResource(param_5);
    pFVar5 = UTexture::GetResource(param_4);
    pFVar6 = UTexture::GetResource(param_3);
    pFVar7 = UTexture::GetResource(param_2);
    local_148.BorderTexture = (FTexture *)UTexture::GetResource(param_1);
    local_148._padding_ = 0;
    local_148._padding_._0_1_ = 0;
    local_148._padding_ = 0;
    local_148._padding_ = (longlong)&___7FCanvasBorderItem__6B_;
    local_148.BorderScale.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_148.BorderScale.field0_0x0._s_0.Y = _UNK_150689688;
    local_148.BackgroundScale.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_148.BackgroundScale.field0_0x0._s_0.Y = _UNK_150689688;
    local_148.Z = 1.0;
    local_148._padding_ = (longlong)(param_7->field0_0x0)._s_0.X;
    local_148._padding_ = (longlong)(param_7->field0_0x0)._s_0.Y;
    local_148.BorderUV0.field0_0x0._s_0.X = 0.0;
    local_148.BorderUV0.field0_0x0._s_0.Y = 0.0;
    local_148.Size.field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
    local_148.Size.field0_0x0._s_0.Y = (param_8->field0_0x0)._s_0.Y;
    local_148.PivotPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_148._padding_ = *(longlong *)&param_11->field0_0x0;
    local_148._padding_ = *(longlong *)((longlong)&param_11->field0_0x0 + 8);
    local_148.BackgroundTexture = (FTexture *)pFVar7;
    local_148.BorderLeftTexture = (FTexture *)pFVar6;
    local_148.BorderRightTexture = (FTexture *)pFVar5;
    local_148.BorderTopTexture = (FTexture *)pFVar4;
    local_148.BorderBottomTexture = (FTexture *)pFVar3;
    if (((FTextureResource *)local_148.BorderTexture == (FTextureResource *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBorderTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CanvasItem.h"
                           ,0xf1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar7 == (FTextureResource *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBackgroundTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CanvasItem.h"
                           ,0xf2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = this->Canvas;
    local_148.Rotation.Pitch = 0.0;
    local_148.Rotation.Roll = 0.0;
    local_148.BorderScale.field0_0x0._s_0.X = (param_12->field0_0x0)._s_0.X;
    local_148.BorderScale.field0_0x0._s_0.Y = (param_12->field0_0x0)._s_0.Y;
    local_148.BackgroundScale.field0_0x0._s_0.X = (param_13->field0_0x0)._s_0.X;
    local_148.BackgroundScale.field0_0x0._s_0.Y = (param_13->field0_0x0)._s_0.Y;
    local_148.BorderUV0.field0_0x0._s_0.X = (param_9->field0_0x0)._s_0.X;
    local_148.BorderUV0.field0_0x0._s_0.Y = (param_9->field0_0x0)._s_0.Y;
    local_148.BorderUV1.field0_0x0._s_0.X =
         local_148.BorderUV0.field0_0x0._s_0.X + (param_10->field0_0x0)._s_0.X;
    local_148.BorderUV1.field0_0x0._s_0.Y =
         local_148.BorderUV0.field0_0x0._s_0.Y + (param_10->field0_0x0)._s_0.Y;
    local_148.Rotation.Yaw = (double)param_14;
    local_148.PivotPoint.field0_0x0._s_0 = param_15->field0_0x0;
    local_148.CornerSize.field0_0x0._s_0.X = (param_16->field0_0x0)._s_0.X;
    local_148.CornerSize.field0_0x0._s_0.Y = (param_16->field0_0x0)._s_0.Y;
    if (*(code **)(local_148._padding_ + 0x18) == FCanvasBorderItem::Draw) {
      FCanvasBorderItem::Draw(&local_148,this_00);
    }
    else {
      (**(code **)(local_148._padding_ + 0x18))();
    }
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
  }
  return;
}

// K2_DrawBox @ 148967f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawBox(UCanvas *this,TVector2<double> *param_1,TVector2<double> *param_2,float param_3,
                   FLinearColor *param_4)

{
  FCanvas *this_00;
  FCanvasBoxItem local_78;
  
  if (((0.0 < (param_2->field0_0x0)._s_0.X) && (0.0 < (param_2->field0_0x0)._s_0.Y)) &&
     (this_00 = this->Canvas, this_00 != (FCanvas *)0x0)) {
    local_78._padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
    local_78._padding_ = (longlong)(param_1->field0_0x0)._s_0.Y;
    local_78._padding_ = 0;
    local_78.Size.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_78.Size.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_78._padding_._0_1_ = 0;
    local_78._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_78._padding_ = 0;
    local_78.Corners.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78._padding_ = *(longlong *)&param_4->field0_0x0;
    local_78._padding_ = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
    local_78.Corners.ArrayNum = 0;
    local_78.Corners.ArrayMax = 0;
    local_78.LineThickness = param_3;
    FCanvasBoxItem::Draw(&local_78,this_00);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    if (local_78.Corners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Corners.AllocatorInstance.Data);
    }
  }
  return;
}

// K2_DrawLine @ 148968000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawLine
          (UCanvas *this,TVector2<double> *param_1,TVector2<double> *param_2,float param_3,
          FLinearColor *param_4)

{
  FCanvas *this_00;
  FCanvasLineItem local_a8;
  
  local_a8.EndPos.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_a8.Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_a8.Origin.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_a8.EndPos.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  if ((0.0 < (local_a8.EndPos.field0_0x0._s_0.Y - local_a8.Origin.field0_0x0._s_0.Y) *
             (local_a8.EndPos.field0_0x0._s_0.Y - local_a8.Origin.field0_0x0._s_0.Y) +
             (local_a8.EndPos.field0_0x0._s_0.X - local_a8.Origin.field0_0x0._s_0.X) *
             (local_a8.EndPos.field0_0x0._s_0.X - local_a8.Origin.field0_0x0._s_0.X)) &&
     (this_00 = this->Canvas, this_00 != (FCanvas *)0x0)) {
    local_a8._padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
    local_a8._padding_ = (longlong)(param_1->field0_0x0)._s_0.Y;
    local_a8._padding_ = 0;
    local_a8._padding_._0_1_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_a8.Origin.field0_0x0._s_0.Z = 0.0;
    local_a8._padding_ = *(longlong *)&param_4->field0_0x0;
    local_a8._padding_ = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
    local_a8.EndPos.field0_0x0._s_0.Z = 0.0;
    local_a8.LineThickness = param_3;
    FCanvasLineItem::Draw(&local_a8,this_00);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
  }
  return;
}

// K2_DrawMaterial @ 148968110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawMaterial
          (UCanvas *this,UMaterialInterface *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          float param_6,TVector2<double> *param_7)

{
  FRenderTarget *pFVar1;
  FCanvas *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ulonglong uVar10;
  undefined1 auStackY_1a8 [32];
  FPSOPrecacheParams_u_0 local_178;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_170;
  FVertexFactoryType *local_160;
  TVector2<double>_u_0 *local_158;
  TArrayView<FVertexFactoryType_const_*_const,int> local_150;
  undefined1 local_138 [52];
  float local_104;
  float local_100;
  float local_fc;
  TVector2<double>_u_0 local_f8;
  float local_e8;
  TVector2<double>_u_0 local_e0;
  TVector2<double>_u_0 local_d0;
  FTexture *local_c0;
  FMaterialRenderProxy *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  TVector2<double>_u_0 local_98;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = &param_7->field0_0x0;
  if ((((param_1 != (UMaterialInterface *)0x0) && (0.0 < (param_3->field0_0x0)._s_0.X)) &&
      (0.0 < (param_3->field0_0x0)._s_0.Y)) && (this->Canvas != (FCanvas *)0x0)) {
    UMaterialInterface::EnsureIsComplete(param_1);
    uVar10 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bSupportsManualVertexFetch != 0) {
      local_178.Data = (ulonglong)((uint)local_178.Data & 0x8000) | 0x13c80;
      pFVar1 = this->Canvas->RenderTarget;
      if ((pFVar1 == (FRenderTarget *)0x0) ||
         (plVar5 = (longlong *)(**(code **)(pFVar1->_padding_ + 0x10))(), *plVar5 == 0)) {
        bVar8 = 0;
      }
      else {
        puVar6 = (undefined8 *)(**(code **)(this->Canvas->RenderTarget->_padding_ + 0x10))();
        lVar7 = (**(code **)(*(longlong *)*puVar6 + 0x20))();
        bVar8 = *(byte *)(lVar7 + 0x33);
      }
      local_150.ArrayNum = 1;
      local_178.Data = (ulonglong)bVar8 << 0x1e | local_178.Data & 0xffffc0003fffffff;
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160 = &FLocalVertexFactory::StaticType;
      local_150.DataPtr = &local_160;
      local_170.ArrayNum = 0;
      local_170.ArrayMax = 0;
      UMaterialInterface::PrecachePSOs
                (param_1,&local_88,&local_150,(FPSOPrecacheParams *)&local_178._s_0,Medium,
                 &local_170);
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar9 = local_88.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_88.ArrayNum);
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    local_b8 = (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
    local_138._24_8_ = 0;
    local_138[0x20] = 0;
    local_138._40_8_ = 0;
    local_c0 = (FTexture *)0x0;
    local_138._0_8_ = &___7FCanvasTileItem__6B_;
    local_e8 = 1.0;
    local_138._8_8_ = (param_2->field0_0x0)._s_0.X;
    local_138._16_8_ = (param_2->field0_0x0)._s_0.Y;
    local_e0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_e0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_f8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_f8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    dVar3 = (param_5->field0_0x0)._s_0.Y + local_e0._s_0.Y;
    local_98 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_d0._8_4_ = SUB84(dVar3,0);
    local_d0._s_0.X = (param_5->field0_0x0)._s_0.X + local_e0._s_0.X;
    local_d0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    if ((local_b8 == (FMaterialRenderProxy *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InMaterialRenderProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                           ,0x1a0,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_a8 = (double)param_6;
    local_b0 = 0.0;
    local_98 = *local_158;
    local_a0 = 0.0;
    local_138._48_4_ = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.R];
    local_104 = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.G];
    local_100 = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.B];
    this_00 = this->Canvas;
    local_fc = (float)(this->DrawColor).field0_0x0._s_0.A * __real_3b808081;
    if (*(code **)(local_138._0_8_ + 0x18) == FCanvasTileItem::Draw) {
      FCanvasTileItem::Draw((FCanvasTileItem *)local_138,this_00);
    }
    else {
      (**(code **)(local_138._0_8_ + 0x18))();
    }
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
  }
  return;
}

// K2_DrawMaterialTriangle @ 148968480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawMaterialTriangle
          (UCanvas *this,UMaterialInterface *param_1,
          TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_> *param_2)

{
  FCanvas *this_00;
  FScriptContainerElement *pFVar1;
  FCanvasTriangleItem local_78;
  
  if (((param_1 != (UMaterialInterface *)0x0) && (0 < param_2->ArrayNum)) &&
     (this->Canvas != (FCanvas *)0x0)) {
    UMaterialInterface::EnsureIsComplete(param_1);
    FCanvasTriangleItem::FCanvasTriangleItem
              (&local_78,&UE::Math::TVector2<double>::ZeroVector,
               &UE::Math::TVector2<double>::ZeroVector,&UE::Math::TVector2<double>::ZeroVector,
               (FTexture *)0x0);
    local_78.MaterialRenderProxy =
         (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
    if (&local_78.TriangleList != param_2) {
      if (local_78.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TriangleList.AllocatorInstance.Data);
      }
      local_78.TriangleList.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_78.TriangleList.ArrayNum = param_2->ArrayNum;
      local_78.TriangleList.ArrayMax = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    this_00 = this->Canvas;
    (**(code **)(local_78._padding_ + 0x18))(&local_78);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    local_78._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (local_78.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.TriangleList.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// K2_DrawPolygon @ 1489685d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawPolygon
          (UCanvas *this,UTexture *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          int param_4,FLinearColor *param_5)

{
  FCanvas *this_00;
  char cVar1;
  FTextureResource *pFVar2;
  FCanvasNGonItem local_68;
  
  if ((((0.0 < (param_3->field0_0x0)._s_0.X) && (0.0 < (param_3->field0_0x0)._s_0.Y)) &&
      (2 < param_4)) && (this->Canvas != (FCanvas *)0x0)) {
    local_68.Texture = GWhiteTexture;
    if ((param_1 != (UTexture *)0x0) &&
       (pFVar2 = UTexture::GetResource(param_1), local_68.Texture = GWhiteTexture,
       pFVar2 != (FTextureResource *)0x0)) {
      pFVar2 = UTexture::GetResource(param_1);
      cVar1 = (**(code **)(pFVar2->_padding_ + 0x48))();
      local_68.Texture = GWhiteTexture;
      if (cVar1 == '\0') {
        local_68.Texture = (FTexture *)UTexture::GetResource(param_1);
      }
    }
    local_68._padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
    local_68._padding_ = (longlong)(param_2->field0_0x0)._s_0.Y;
    local_68._padding_ = 0;
    local_68._padding_._0_1_ = 0;
    local_68._padding_ = *(longlong *)&param_5->field0_0x0;
    local_68._padding_ = *(longlong *)((longlong)&param_5->field0_0x0 + 8);
    local_68._padding_ = 0;
    local_68.TriangleList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TriangleList.ArrayNum = 0;
    local_68.TriangleList.ArrayMax = 0;
    local_68.TriListItem = (FCanvasTriangleItem *)0x0;
    local_68._padding_ = (longlong)&___7FCanvasNGonItem__6B_;
    TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_>::SetNum(&local_68.TriangleList,param_4,Default)
    ;
    FCanvasNGonItem::SetupPosition(&local_68,param_2,param_3);
    this_00 = this->Canvas;
    if (*(code **)(local_68._padding_ + 0x18) == FCanvasNGonItem::Draw) {
      *(undefined4 *)((longlong)&(local_68.TriListItem)->_padding_ + 4) = local_68._padding_._4_4_;
      (**(code **)((local_68.TriListItem)->_padding_ + 0x18))();
    }
    else {
      (**(code **)(local_68._padding_ + 0x18))(&local_68);
    }
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    local_68._padding_ = (longlong)&___7FCanvasNGonItem__6B_;
    if (local_68.TriListItem != (FCanvasTriangleItem *)0x0) {
      (**(code **)(local_68.TriListItem)->_padding_)(local_68.TriListItem,1);
    }
    if (local_68.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TriangleList.AllocatorInstance.Data);
    }
  }
  return;
}

// K2_DrawText @ 148968780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawText
          (UCanvas *this,UFont *param_1,FString *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,FLinearColor *param_5,float param_6,FLinearColor *param_7,
          TVector2<double> *param_8,bool param_9,bool param_10,bool param_11,FLinearColor *param_12)

{
  FCanvas *this_00;
  FText *pFVar1;
  undefined1 local_res18 [16];
  FText local_248;
  FCanvasTextItemBase local_238;
  UFont *local_a0;
  TReferenceControllerBase<1> *local_60;
  char local_38;
  ITextData *local_30;
  uint local_28;
  
  if ((1 < (param_2->Data).ArrayNum) && (this->Canvas != (FCanvas *)0x0)) {
    pFVar1 = FText::FromString(&local_248,param_2);
    FCanvasTextItemBase::FCanvasTextItemBase(&local_238,param_3,param_5);
    local_238._padding_ = (longlong)&___7FCanvasTextItem__6B_;
    local_38 = '\0';
    local_238._padding_._4_4_ = 2;
    local_30 = (pFVar1->TextData).Reference;
    local_a0 = param_1;
    if (local_30 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30 + 8))(local_30,local_res18);
    }
    local_28 = pFVar1->Flags;
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
    }
    this_00 = this->Canvas;
    local_238.HorizSpacingAdjust = param_6;
    local_238.ShadowColor.field0_0x0._s_0.R = (param_7->field0_0x0)._s_0.R;
    local_238.ShadowColor.field0_0x0._s_0.G = (param_7->field0_0x0)._s_0.G;
    local_238.ShadowColor.field0_0x0._s_0.B = (param_7->field0_0x0)._s_0.B;
    local_238.ShadowColor.field0_0x0._s_0.A = (param_7->field0_0x0)._s_0.A;
    local_238.ShadowOffset.field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
    local_238.ShadowOffset.field0_0x0._s_0.Y = (param_8->field0_0x0)._s_0.Y;
    local_238.bCentreX = param_9;
    local_238.bCentreY = param_10;
    local_238.Scale.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_238.Scale.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_238.bOutlined = param_11;
    local_238.OutlineColor.field0_0x0._s_0.R = (param_12->field0_0x0)._s_0.R;
    local_238.OutlineColor.field0_0x0._s_0.G = (param_12->field0_0x0)._s_0.G;
    local_238.OutlineColor.field0_0x0._s_0.B = (param_12->field0_0x0)._s_0.B;
    local_238.OutlineColor.field0_0x0._s_0.A = (param_12->field0_0x0)._s_0.A;
    if (*(code **)(local_238._padding_ + 0x18) == FCanvasTextItemBase::Draw) {
      FCanvasTextItemBase::Draw(&local_238,this_00);
    }
    else {
      (**(code **)(local_238._padding_ + 0x18))();
    }
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    local_238._padding_ = (longlong)&___7FCanvasTextItem__6B_;
    if (local_30 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30 + 0x10))();
    }
    if (local_38 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
  }
  return;
}

// K2_DrawTexture @ 148968930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawTexture
          (UCanvas *this,UTexture *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,FLinearColor *param_6,
          EBlendMode param_7,float param_8,TVector2<double> *param_9)

{
  FCanvas *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  FTextureResource *pFVar7;
  FCanvasTileItem local_d8;
  
  if (((0.0 < (param_3->field0_0x0)._s_0.X) && (0.0 < (param_3->field0_0x0)._s_0.Y)) &&
     (this->Canvas != (FCanvas *)0x0)) {
    dVar3 = (param_5->field0_0x0)._s_0.X;
    dVar4 = (param_4->field0_0x0)._s_0.X;
    dVar2 = (param_5->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.Y;
    local_d8.Texture = GWhiteTexture;
    if ((param_1 != (UTexture *)0x0) &&
       (pFVar7 = UTexture::GetResource(param_1), local_d8.Texture = GWhiteTexture,
       pFVar7 != (FTextureResource *)0x0)) {
      pFVar7 = UTexture::GetResource(param_1);
      cVar5 = (**(code **)(pFVar7->_padding_ + 0x48))(pFVar7);
      local_d8.Texture = GWhiteTexture;
      if (cVar5 == '\0') {
        local_d8.Texture = (FTexture *)UTexture::GetResource(param_1);
      }
    }
    local_d8._padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
    local_d8._padding_ = (longlong)(param_2->field0_0x0)._s_0.Y;
    local_d8._padding_ = (longlong)&___7FCanvasTileItem__6B_;
    local_d8._padding_._0_4_ = 0;
    local_d8._padding_._0_1_ = 0;
    local_d8._padding_ = 0;
    local_d8.Z = 1.0;
    local_d8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    local_d8.UV0.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_d8.UV0.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_d8.Size.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_d8.Size.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_d8.UV1.field0_0x0._8_4_ = SUB84(dVar2,0);
    local_d8.UV1.field0_0x0._s_0.X = dVar3 + dVar4;
    local_d8.UV1.field0_0x0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_d8.PivotPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_d8._padding_ = *(longlong *)&param_6->field0_0x0;
    local_d8._padding_ = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    if (((FTextureResource *)local_d8.Texture == (FTextureResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                           ,0x182,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_d8.Rotation.Yaw = (double)param_8;
    local_d8.Rotation.Pitch = 0.0;
    local_d8.PivotPoint.field0_0x0._s_0 = param_9->field0_0x0;
    local_d8.Rotation.Roll = 0.0;
    local_d8._padding_._4_4_ = FCanvas::BlendToSimpleElementBlend(param_7);
    this_00 = this->Canvas;
    if (*(code **)(local_d8._padding_ + 0x18) == FCanvasTileItem::Draw) {
      FCanvasTileItem::Draw(&local_d8,this_00);
    }
    else {
      (**(code **)(local_d8._padding_ + 0x18))();
    }
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
  }
  return;
}

// K2_DrawTriangle @ 148968b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::K2_DrawTriangle
          (UCanvas *this,UTexture *param_1,TArray<FCanvasUVTri,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FCanvas *this_00;
  FScriptContainerElement *pFVar1;
  char cVar2;
  FTextureResource *pFVar3;
  FTextureResource *pFVar4;
  FCanvasTriangleItem local_78;
  
  if ((0 < param_2->ArrayNum) && (this->Canvas != (FCanvas *)0x0)) {
    pFVar4 = (FTextureResource *)GWhiteTexture;
    if ((param_1 != (UTexture *)0x0) &&
       (pFVar3 = UTexture::GetResource(param_1), pFVar4 = (FTextureResource *)GWhiteTexture,
       pFVar3 != (FTextureResource *)0x0)) {
      pFVar4 = UTexture::GetResource(param_1);
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
      pFVar4 = (FTextureResource *)GWhiteTexture;
      if (cVar2 == '\0') {
        pFVar4 = UTexture::GetResource(param_1);
      }
    }
    FCanvasTriangleItem::FCanvasTriangleItem
              (&local_78,&UE::Math::TVector2<double>::ZeroVector,
               &UE::Math::TVector2<double>::ZeroVector,&UE::Math::TVector2<double>::ZeroVector,
               (FTexture *)pFVar4);
    if (&local_78.TriangleList != param_2) {
      if (local_78.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TriangleList.AllocatorInstance.Data);
      }
      local_78.TriangleList.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_78.TriangleList.ArrayNum = param_2->ArrayNum;
      local_78.TriangleList.ArrayMax = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
    }
    this_00 = this->Canvas;
    (**(code **)(local_78._padding_ + 0x18))(&local_78);
    if (this_00->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this_00,false);
    }
    local_78._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (local_78.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.TriangleList.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// K2_Project @ 148968c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UCanvas::K2_Project(UCanvas *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  TPlane<double> *pTVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_48;
  TPlane<double> local_28;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  if (this->SceneView != (FSceneView *)0x0) {
    pTVar2 = FSceneView::Project(this->SceneView,&local_28,(TVector<double> *)&local_48._s_0);
    uVar3 = (undefined4)pTVar2->_padding_;
    uVar5 = *(undefined4 *)((longlong)&pTVar2->_padding_ + 4);
    uVar6 = (undefined4)pTVar2->_padding_;
    uVar7 = *(undefined4 *)((longlong)&pTVar2->_padding_ + 4);
    dVar9 = (double)pTVar2->_padding_;
    dVar10 = pTVar2->W;
  }
  dVar1 = __real_3ff0000000000000;
  fVar8 = this->ClipX * __real_3f000000;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  fVar4 = this->ClipY * __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)fVar8 * ((__return_storage_ptr__->field0_0x0)._s_0.X + dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)fVar4 * (dVar1 - (__return_storage_ptr__->field0_0x0)._s_0.Y);
  if (dVar10 <= 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// K2_StrLen @ 148968d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector2<double> * __thiscall
UCanvas::K2_StrLen(UCanvas *this,TVector2<double> *__return_storage_ptr__,UFont *param_1,
                  FString *param_2)

{
  int iVar1;
  float local_res20;
  float local_res24;
  TStringView<wchar_t> local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  if (1 < iVar1) {
    local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    local_18.Size = iVar1 + -1;
    StrLen(param_1,&local_18,&local_res20,&local_res24,false,this->Canvas);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res20;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_res24;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// K2_TextSize @ 148968e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector2<double> * __thiscall
UCanvas::K2_TextSize
          (UCanvas *this,TVector2<double> *__return_storage_ptr__,UFont *param_1,FString *param_2,
          TVector2<double> *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int local_res20;
  undefined4 uStackX_24;
  int local_48 [4];
  TStringView<wchar_t> local_38 [3];
  
  iVar1 = (param_2->Data).ArrayNum;
  if (1 < iVar1) {
    local_38[0].DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    local_38[0].Size = iVar1 + -1;
    fVar2 = (float)(double)CONCAT44(uStackX_24,local_res20);
    fVar3 = (float)(double)CONCAT44(uStackX_24,local_res20);
    if (param_1 == (UFont *)0x0) {
      if (4 < (byte)LogCanvas._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
      }
    }
    else {
      ClippedStrLen(param_1,(float)(param_3->field0_0x0)._s_0.X,(float)(param_3->field0_0x0)._s_0.Y,
                    &local_res20,local_48,local_38);
      fVar2 = (float)local_res20;
      fVar3 = (float)local_48[0];
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// MakeIcon @ 148969250

FCanvasIcon * __cdecl
UCanvas::MakeIcon(FCanvasIcon *__return_storage_ptr__,UTexture *param_1,float param_2,float param_3,
                 float param_4,float param_5)

{
  (__return_storage_ptr__->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  __return_storage_ptr__->U = 0.0;
  __return_storage_ptr__->V = 0.0;
  __return_storage_ptr__->UL = 0.0;
  __return_storage_ptr__->VL = 0.0;
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (__return_storage_ptr__->Texture).field0_0x0.DebugPtr = param_1;
    __return_storage_ptr__->V = param_3;
    __return_storage_ptr__->U = param_2;
    if (param_4 == 0.0) {
      param_4 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
    }
    __return_storage_ptr__->UL = param_4;
    if (param_5 == 0.0) {
      param_5 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
    }
    __return_storage_ptr__->VL = param_5;
  }
  return __return_storage_ptr__;
}

// MeasureStringInternal @ 148969a20

void __cdecl
UCanvas::MeasureStringInternal
          (FTextSizingParameters *param_1,wchar_t *param_2,int param_3,int param_4,
          ELastCharacterIndexFormat param_5,int *param_6)

{
  TStringView<wchar_t> local_18;
  
  local_18.Size = param_3;
  local_18.DataPtr = param_2;
  MeasureStringInternal(param_1,&local_18,param_4,param_5,param_6);
  return;
}

// MeasureStringInternal @ 148969a70

void __cdecl
UCanvas::MeasureStringInternal
          (FTextSizingParameters *param_1,TStringView<wchar_t> *param_2,int param_3,
          ELastCharacterIndexFormat param_4,int *param_5)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  UFont *this;
  wchar_t *pwVar3;
  float fVar4;
  wchar_t *pwVar5;
  schar sVar6;
  short sVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  wchar_t *local_98;
  
  *param_5 = -1;
  this = (param_1->DrawFont).field0_0x0.DebugPtr;
  param_1->DrawXL = 0.0;
  param_1->DrawYL = 0.0;
  if (this != (UFont *)0x0) {
    UFont::GetCharSize(this,L'0',&local_a4,local_a0);
    if (local_a4 == 0.0) {
      UFont::GetCharSize(this,L'A',&local_a4,local_a0);
    }
    fVar4 = __real_3f000000;
    pwVar10 = param_2->DataPtr;
    fVar13 = (float)(param_1->Scaling).field0_0x0._s_0.X;
    pwVar1 = pwVar10 + param_2->Size;
    fVar14 = (float)(param_1->Scaling).field0_0x0._s_0.Y;
    fVar15 = (float)((double)fVar13 * (param_1->SpacingAdjust).field0_0x0._s_0.X);
    pwVar5 = pwVar10;
    local_98 = pwVar10;
    pwVar3 = (wchar_t *)0x0;
    while (pwVar9 = pwVar5, pwVar9 < pwVar1) {
      pwVar10 = pwVar10 + 1;
      wVar2 = *pwVar9;
      if (wVar2 == L'\0') break;
      UFont::GetCharSize((param_1->DrawFont).field0_0x0.DebugPtr,wVar2,local_res8,&local_a8);
      if ((local_a8 == 0.0) && (wVar2 == L'\n')) {
        local_a8 = local_a0[0];
      }
      fVar12 = fVar15;
      if (pwVar3 != (wchar_t *)0x0) {
        sVar6 = UFont::GetCharKerning((param_1->DrawFont).field0_0x0.DebugPtr,*pwVar3,wVar2);
        fVar12 = (float)(int)sVar6 * fVar13 + fVar15;
      }
      local_res8[0] = local_res8[0] * fVar13;
      local_a8 = local_a8 * fVar14;
      if (((pwVar10 < pwVar1) && (*pwVar10 != L'\0')) && (iVar8 = iswspace(*pwVar10), iVar8 == 0)) {
        local_res8[0] = local_res8[0] + fVar12;
      }
      fVar11 = local_res8[0] + param_1->DrawXL;
      param_1->DrawXL = fVar11;
      fVar12 = (float)((double)fVar14 * (param_1->SpacingAdjust).field0_0x0._s_0.Y) + local_a8;
      if (fVar12 <= param_1->DrawYL) {
        fVar12 = param_1->DrawYL;
      }
      param_1->DrawYL = fVar12;
      if (param_3 != -1) {
        if (param_4 == CharacterAtOffset) {
          sVar7 = UFont::GetCharHorizontalOffset((param_1->DrawFont).field0_0x0.DebugPtr,wVar2);
          if ((float)param_3 < param_1->DrawXL - ((float)(int)sVar7 + local_res8[0]) * fVar4) break;
        }
        else if ((param_4 == LastWholeCharacterBeforeOffset) &&
                ((float)param_3 < fVar11 - local_res8[0])) {
          pwVar9 = pwVar9 + -1;
          break;
        }
      }
      pwVar3 = pwVar9;
      pwVar5 = pwVar9 + 1;
    }
    *param_5 = (int)((longlong)pwVar9 - (longlong)local_98 >> 1);
  }
  return;
}

// PopSafeZoneTransform @ 14896f2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::PopSafeZoneTransform(UCanvas *this)

{
  int iVar1;
  int iVar2;
  
  if ((this->SafeZonePadX != 0) || (this->SafeZonePadY != 0)) {
    FCanvas::PopTransform(this->Canvas);
    iVar1 = this->SizeX;
    this->SizeX = this->UnsafeSizeX;
    iVar2 = this->SizeY;
    this->SizeY = this->UnsafeSizeY;
    this->ClipX = (float)(this->UnsafeSizeX - (int)((float)iVar1 - this->ClipX));
    this->ClipY = (float)(this->UnsafeSizeY - (int)((float)iVar2 - this->ClipY));
  }
  return;
}

// Project @ 1489744e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UCanvas::Project(UCanvas *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                bool param_2)

{
  double dVar1;
  TPlane<double> *pTVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  TPlane<double> local_28;
  
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  if (this->SceneView != (FSceneView *)0x0) {
    pTVar2 = FSceneView::Project(this->SceneView,&local_28,param_1);
    uVar3 = (undefined4)pTVar2->_padding_;
    uVar5 = *(undefined4 *)((longlong)&pTVar2->_padding_ + 4);
    uVar6 = (undefined4)pTVar2->_padding_;
    uVar7 = *(undefined4 *)((longlong)&pTVar2->_padding_ + 4);
    dVar9 = (double)pTVar2->_padding_;
    dVar10 = pTVar2->W;
  }
  dVar1 = __real_3ff0000000000000;
  fVar8 = this->ClipX * __real_3f000000;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  fVar4 = this->ClipY * __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)fVar8 * ((__return_storage_ptr__->field0_0x0)._s_0.X + dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)fVar4 * (dVar1 - (__return_storage_ptr__->field0_0x0)._s_0.Y);
  if ((param_2) && (dVar10 <= 0.0)) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// Reset @ 148979aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::Reset(UCanvas *this,bool param_1)

{
  undefined1 *puVar1;
  FColor_u_0 FVar2;
  UCanvas *pUVar3;
  
  if (!param_1) {
    pUVar3 = GetDefault<UCanvas>((UClass *)this->_padding_);
    this->OrgX = pUVar3->OrgX;
    pUVar3 = GetDefault<UCanvas>((UClass *)this->_padding_);
    this->OrgY = pUVar3->OrgY;
  }
  pUVar3 = GetDefault<UCanvas>((UClass *)this->_padding_);
  FVar2 = (pUVar3->DrawColor).field0_0x0;
  this->bCenterX = 0;
  this->bNoSmooth = 0;
  this->bCenterY = 0;
  (this->DrawColor).field0_0x0 = FVar2;
  return;
}

// SetClip @ 14897e6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::SetClip(UCanvas *this,float param_1,float param_2)

{
  this->ClipX = param_1;
  this->ClipY = param_2;
  return;
}

// SetDrawColor @ 14897ec80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::SetDrawColor(UCanvas *this,FColor *param_1)

{
  (this->DrawColor).field0_0x0 = param_1->field0_0x0;
  return;
}

// SetDrawColor @ 14897ec90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::SetDrawColor(UCanvas *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  (this->DrawColor).field0_0x0._s_0.A = param_4;
  (this->DrawColor).field0_0x0._s_0.R = param_1;
  (this->DrawColor).field0_0x0._s_0.G = param_2;
  (this->DrawColor).field0_0x0._s_0.B = param_3;
  return;
}

// SetLinearDrawColor @ 14897f2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::SetLinearDrawColor(UCanvas *this,FLinearColor *param_1,float param_2)

{
  bool bVar1;
  uchar uVar2;
  int iVar3;
  FColor_u_0 local_res18;
  
  FLinearColor::ToFColorSRGB(param_1);
  bVar1 = param_2 != __real_bf800000;
  (this->DrawColor).field0_0x0 = local_res18;
  if (bVar1) {
    iVar3 = 0xff;
    if ((int)(param_2 * __real_437f0000) < 0xff) {
      iVar3 = (int)(param_2 * __real_437f0000);
    }
    uVar2 = '\0';
    if (0 < iVar3) {
      uVar2 = (uchar)iVar3;
    }
    (this->DrawColor).field0_0x0._s_0.A = uVar2;
  }
  return;
}

// SetView @ 14897fe30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::SetView(UCanvas *this,FSceneView *param_1)

{
  IStereoRendering *pIVar1;
  code *pcVar2;
  double dVar3;
  UEngine *pUVar4;
  bool bVar5;
  
  this->SceneView = param_1;
  if (param_1 == (FSceneView *)0x0) {
    (this->ViewProjectionMatrix).M[0][0] = 1.0;
    (this->ViewProjectionMatrix).M[0][1] = 0.0;
    (this->ViewProjectionMatrix).M[0][2] = 0.0;
    (this->ViewProjectionMatrix).M[0][3] = 0.0;
    (this->ViewProjectionMatrix).M[1][0] = 0.0;
    (this->ViewProjectionMatrix).M[1][1] = 1.0;
    (this->ViewProjectionMatrix).M[1][2] = 0.0;
    (this->ViewProjectionMatrix).M[1][3] = 0.0;
    (this->ViewProjectionMatrix).M[2][0] = 0.0;
    (this->ViewProjectionMatrix).M[2][1] = 0.0;
    (this->ViewProjectionMatrix).M[2][2] = 1.0;
    (this->ViewProjectionMatrix).M[2][3] = 0.0;
    (this->ViewProjectionMatrix).M[3][0] = 0.0;
    (this->ViewProjectionMatrix).M[3][1] = 0.0;
    (this->ViewProjectionMatrix).M[3][2] = 0.0;
    (this->ViewProjectionMatrix).M[3][3] = 1.0;
    return;
  }
  if ((GEngine->StereoRenderingDevice).Object != (IStereoRendering *)0x0) {
    bVar5 = IStereoRendering::IsStereoEyeView(param_1);
    pUVar4 = GEngine;
    if (bVar5) {
      if ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar1 = (pUVar4->StereoRenderingDevice).Object;
                    /* WARNING: Could not recover jumptable at 0x00014897fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,param_1,this);
      return;
    }
  }
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][1];
  (this->ViewProjectionMatrix).M[0][0] = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3];
  (this->ViewProjectionMatrix).M[0][2] = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][1];
  (this->ViewProjectionMatrix).M[1][0] = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3];
  (this->ViewProjectionMatrix).M[1][2] = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][1];
  (this->ViewProjectionMatrix).M[2][0] = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3];
  (this->ViewProjectionMatrix).M[2][2] = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[3][1];
  (this->ViewProjectionMatrix).M[3][0] = (param_1->ViewMatrices).ViewProjectionMatrix.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = dVar3;
  dVar3 = (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3];
  (this->ViewProjectionMatrix).M[3][2] = (param_1->ViewMatrices).ViewProjectionMatrix.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = dVar3;
  return;
}

// StaticRegisterNativesUCanvas @ 148982a50

void __cdecl UCanvas::StaticRegisterNativesUCanvas(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UCanvas_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StrLen @ 148982bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::StrLen(UCanvas *this,UFont *param_1,TStringView<char> *param_2,float *param_3,
               float *param_4,bool param_5)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  undefined1 auStackY_198 [32];
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pcVar1 = param_2->DataPtr;
  iVar3 = param_2->Size;
  EVar2 = No;
  local_158._padding_ = 0;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,iVar3,EVar2);
  }
  local_168.Size = local_158.StringLength;
  local_168.DataPtr = local_158.Ptr;
  StrLen(param_1,&local_168,param_3,param_4,param_5,this->Canvas);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// StrLen @ 148982cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::StrLen(UCanvas *this,UFont *param_1,TStringView<char> *param_2,double *param_3,
               double *param_4,bool param_5)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  undefined1 auStackY_1a8 [32];
  float local_178;
  float local_174 [3];
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pcVar1 = param_2->DataPtr;
  iVar3 = param_2->Size;
  EVar2 = No;
  local_158._padding_ = 0;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,iVar3,EVar2);
  }
  local_168.Size = local_158.StringLength;
  local_178 = (float)*param_3;
  local_174[0] = (float)*param_4;
  local_168.DataPtr = local_158.Ptr;
  StrLen(param_1,&local_168,&local_178,local_174,param_5,this->Canvas);
  *param_3 = (double)local_178;
  *param_4 = (double)local_174[0];
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// StrLen @ 148982e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::StrLen(UCanvas *this,UFont *param_1,TStringView<wchar_t> *param_2,float *param_3,
               float *param_4,bool param_5)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  StrLen(param_1,&local_18,param_3,param_4,param_5,this->Canvas);
  return;
}

// StrLen @ 148982e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::StrLen(UCanvas *this,UFont *param_1,TStringView<wchar_t> *param_2,double *param_3,
               double *param_4,bool param_5)

{
  double *pdVar1;
  float local_res8 [2];
  TStringView<wchar_t> local_18;
  
  pdVar1 = param_4;
  local_res8[0] = (float)*param_3;
  param_4._0_4_ = (float)*param_4;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  StrLen(param_1,&local_18,local_res8,(float *)&param_4,param_5,this->Canvas);
  *param_3 = (double)local_res8[0];
  *pdVar1 = (double)param_4._0_4_;
  return;
}

// StrLen @ 148982ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCanvas::StrLen(UFont *param_1,TStringView<char> *param_2,float *param_3,float *param_4,bool param_5
               ,FCanvas *param_6)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  undefined1 auStackY_198 [32];
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pcVar1 = param_2->DataPtr;
  EVar2 = No;
  local_158._padding_ = 0;
  iVar3 = param_2->Size;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,iVar3,EVar2);
  }
  local_168.Size = local_158.StringLength;
  local_168.DataPtr = local_158.Ptr;
  StrLen(param_1,&local_168,param_3,param_4,param_5,param_6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// StrLen @ 148982ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCanvas::StrLen(UFont *param_1,TStringView<char> *param_2,double *param_3,double *param_4,
               bool param_5,FCanvas *param_6)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  undefined1 auStackY_1a8 [32];
  float local_178;
  float local_174 [3];
  TStringView<wchar_t> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pcVar1 = param_2->DataPtr;
  EVar2 = No;
  local_158._padding_ = 0;
  iVar3 = param_2->Size;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,iVar3,EVar2);
  }
  local_168.Size = local_158.StringLength;
  local_178 = (float)*param_3;
  local_174[0] = (float)*param_4;
  local_168.DataPtr = local_158.Ptr;
  StrLen(param_1,&local_168,&local_178,local_174,param_5,param_6);
  *param_3 = (double)local_178;
  *param_4 = (double)local_174[0];
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// StrLen @ 148983130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UCanvas::StrLen(UFont *param_1,TStringView<wchar_t> *param_2,float *param_3,float *param_4,
               bool param_5,FCanvas *param_6)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  schar sVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  FDeprecateSlateVector2D FVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  float in_XMM3_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_118;
  float local_114;
  float local_110 [2];
  TSharedRef<FSlateFontMeasure,1> local_108;
  TStringView<wchar_t> local_f8;
  TObjectPtr<UObject_const_>_u_0 local_e8;
  undefined8 uStack_e0;
  FSlateFontInfo local_d8;
  
  if (param_1 == (UFont *)0x0) {
    if (2 < (byte)LogScript._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
      return;
    }
  }
  else if ((param_1->FontCacheType == Offline) || (!param_5)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pwVar6 = param_2->DataPtr;
    uVar5 = *(undefined8 *)&param_2->Size;
    fVar15 = 0.0;
    UFont::GetCharSize(param_1,L'0',&local_114,local_110);
    if (local_114 == 0.0) {
      UFont::GetCharSize(param_1,L'A',&local_114,local_110);
    }
    pwVar1 = pwVar6 + (int)uVar5;
    fVar14 = 0.0;
    pwVar13 = (wchar_t *)0x0;
    while (pwVar6 < pwVar1) {
      while( true ) {
        pwVar12 = pwVar6;
        wVar2 = *pwVar12;
        if (wVar2 == L'\0') goto LAB_1489833f3;
        UFont::GetCharSize(param_1,wVar2,&local_118,local_res8);
        if ((local_res8[0] == 0.0) && (wVar2 == L'\n')) {
          local_res8[0] = local_110[0];
        }
        fVar16 = 0.0;
        if (pwVar13 != (wchar_t *)0x0) {
          sVar8 = UFont::GetCharKerning(param_1,*pwVar13,wVar2);
          fVar16 = (float)(int)sVar8;
        }
        pwVar6 = pwVar12 + 1;
        pwVar13 = pwVar12;
        if (((pwVar1 <= pwVar6) || (*pwVar6 == L'\0')) || (iVar9 = iswspace(*pwVar6), iVar9 != 0))
        break;
        local_118 = local_118 + fVar16;
        fVar16 = local_res8[0];
        if (local_res8[0] <= fVar14) {
          fVar16 = fVar14;
        }
        fVar15 = fVar15 + local_118;
        fVar14 = fVar16;
      }
      fVar16 = local_res8[0];
      if (local_res8[0] <= fVar14) {
        fVar16 = fVar14;
      }
      fVar15 = fVar15 + local_118;
      fVar14 = fVar16;
    }
LAB_1489833f3:
    *param_3 = fVar15;
    *param_4 = fVar14;
  }
  else {
    UFont::GetLegacySlateFontInfo(param_1,&local_d8);
    pFVar10 = FSlateApplication::Get();
    lVar3 = *(longlong *)&pFVar10->field_0x60;
    if ((*(longlong *)(lVar3 + 8) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_108);
    local_e8.ObjectPtr.field0_0x0 = (FObjectPtr)param_2->DataPtr;
    uStack_e0 = *(undefined8 *)&param_2->Size;
    FVar11 = FSlateFontMeasure::Measure
                       (local_108.Object,&local_f8,(FSlateFontInfo *)&local_e8.ObjectPtr,in_XMM3_Da)
    ;
    fVar15 = *(float *)((longlong)FVar11 + 4);
    *param_3 = *(float *)FVar11;
    *param_4 = fVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StrLen @ 148983450

void __cdecl
UCanvas::StrLen(UFont *param_1,TStringView<wchar_t> *param_2,double *param_3,double *param_4,
               bool param_5,FCanvas *param_6)

{
  float local_res10 [2];
  float local_res18 [4];
  TStringView<wchar_t> local_18;
  
  local_res10[0] = (float)*param_3;
  local_res18[0] = (float)*param_4;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  StrLen(param_1,&local_18,local_res10,local_res18,param_5,param_6);
  *param_3 = (double)local_res10[0];
  *param_4 = (double)local_res18[0];
  return;
}

// TextSize @ 148983bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::TextSize(UCanvas *this,UFont *param_1,TStringView<char> *param_2,float *param_3,
                 float *param_4,float param_5,float param_6)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  undefined1 auStackY_198 [32];
  int local_168;
  int local_164 [3];
  TStringView<wchar_t> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  EVar2 = No;
  local_148._padding_ = 0;
  pcVar1 = param_2->DataPtr;
  iVar3 = param_2->Size;
  if (pcVar1 == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar1,iVar3,EVar2);
  }
  local_158.Size = local_148.StringLength;
  local_158.DataPtr = local_148.Ptr;
  if (param_1 == (UFont *)0x0) {
    if (4 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
  }
  else {
    ClippedStrLen(param_1,param_5,param_6,&local_168,local_164,&local_158);
    *param_3 = (float)local_168;
    *param_4 = (float)local_164[0];
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// TextSize @ 148983d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::TextSize(UCanvas *this,UFont *param_1,TStringView<char> *param_2,double *param_3,
                 double *param_4,double param_5,double param_6)

{
  char *pcVar1;
  ENullTerminatedString EVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStackY_1b8 [32];
  int local_188;
  int local_184 [3];
  TStringView<wchar_t> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  EVar2 = No;
  local_168._padding_ = 0;
  pcVar1 = param_2->DataPtr;
  iVar3 = param_2->Size;
  if (pcVar1 == (char *)0x0) {
    local_168.Ptr = (wchar_t *)0x0;
    local_168.StringLength = 0;
  }
  else {
    if ((0 < iVar3) && (pcVar1[(longlong)iVar3 + -1] == '\0')) {
      EVar2 = Yes;
      iVar3 = iVar3 + -1;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,pcVar1,iVar3,EVar2);
  }
  local_178.Size = local_168.StringLength;
  fVar4 = (float)*param_3;
  fVar5 = (float)*param_4;
  local_178.DataPtr = local_168.Ptr;
  if (param_1 == (UFont *)0x0) {
    if (4 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
  }
  else {
    ClippedStrLen(param_1,(float)param_5,(float)param_6,&local_188,local_184,&local_178);
    fVar4 = (float)local_188;
    fVar5 = (float)local_184[0];
  }
  *param_3 = (double)fVar4;
  *param_4 = (double)fVar5;
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

// TextSize @ 148983e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::TextSize(UCanvas *this,UFont *param_1,TStringView<wchar_t> *param_2,float *param_3,
                 float *param_4,float param_5,float param_6)

{
  int local_res10 [6];
  int local_28 [4];
  TStringView<wchar_t> local_18;
  
  if (param_1 == (UFont *)0x0) {
    if (4 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
      return;
    }
  }
  else {
    local_18.DataPtr = param_2->DataPtr;
    local_18.Size = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    ClippedStrLen(param_1,param_5,param_6,local_res10,local_28,&local_18);
    *param_3 = (float)local_res10[0];
    *param_4 = (float)local_28[0];
  }
  return;
}

// TextSize @ 148983f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::TextSize(UCanvas *this,UFont *param_1,TStringView<wchar_t> *param_2,double *param_3,
                 double *param_4,double param_5,double param_6)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  int local_res10 [6];
  TStringView<wchar_t> local_38 [3];
  
  pdVar1 = param_4;
  fVar3 = (float)*param_4;
  fVar2 = (float)*param_3;
  if (param_1 == (UFont *)0x0) {
    if (4 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
  }
  else {
    local_38[0].DataPtr = param_2->DataPtr;
    local_38[0].Size = param_2->Size;
    local_38[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
    ClippedStrLen(param_1,(float)param_5,(float)param_6,(int *)&param_4,local_res10,local_38);
    fVar2 = (float)(int)param_4;
    fVar3 = (float)local_res10[0];
  }
  *param_3 = (double)fVar2;
  *pdVar1 = (double)fVar3;
  return;
}

// Update @ 1489889d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvas::Update(UCanvas *this)

{
  FCanvas *pFVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
  iVar2 = this->SizeY;
  pFVar1 = this->Canvas;
  this->ClipX = (float)this->SizeX;
  this->ClipY = (float)this->SizeY;
  fVar3 = __real_3f800000;
  if (pFVar1 != (FCanvas *)0x0) {
    fVar4 = __real_3f800000;
    if (pFVar1->bStereoRendering == false) {
      fVar4 = pFVar1->DPIScale;
    }
    this->ClipX = (float)this->SizeX / fVar4;
    if (pFVar1->bStereoRendering == false) {
      fVar3 = pFVar1->DPIScale;
    }
    this->ClipY = (float)this->SizeY / fVar3;
    *(int *)&(pFVar1->ParentSize).field0_0x0 = this->SizeX;
    *(int *)((longlong)&(pFVar1->ParentSize).field0_0x0 + 4) = iVar2;
  }
  return;
}

// UpdateAllCanvasSafeZoneData @ 148988a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UCanvas::UpdateAllCanvasSafeZoneData(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UCanvas> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UCanvas>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
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
    UpdateSafeZoneData(*(UCanvas **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// UpdateSafeZoneData @ 148989c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UCanvas::UpdateSafeZoneData(UCanvas *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  IStereoRendering *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  UEngine *pUVar8;
  bool bVar9;
  atomic<int> aVar10;
  FSlateApplication *pFVar11;
  FDeprecateSlateVector2D FVar12;
  undefined8 *puVar13;
  int iVar14;
  ISlateViewport *pIVar15;
  float fVar16;
  double dVar17;
  float local_res10;
  float local_res14;
  undefined1 local_res20 [8];
  SWindow *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FMargin local_d8;
  double local_c8;
  double local_c0;
  FDisplayMetrics local_b8;
  
  if ((GEngine != (UEngine *)0x0) &&
     (bVar9 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0), pUVar8 = GEngine, bVar9)) {
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar4 = (pUVar8->StereoRenderingDevice).Object;
    (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,&local_c8);
    this->CachedDisplayWidth = this->UnsafeSizeX;
    this->CachedDisplayHeight = this->UnsafeSizeY;
    dVar17 = (double)this->UnsafeSizeX;
    iVar14 = (int)((dVar17 - dVar17 * local_c8) * __real_3fe0000000000000);
    dVar17 = (double)this->UnsafeSizeY;
    this->SafeZonePadX = iVar14;
    this->SafeZonePadEX = iVar14;
    iVar14 = (int)((dVar17 - dVar17 * local_c0) * __real_3fe0000000000000);
    this->SafeZonePadY = iVar14;
    this->SafeZonePadEY = iVar14;
    return;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    local_b8.MonitorInfo.ArrayNum = 0;
    local_b8.MonitorInfo.ArrayMax = 0;
    local_b8.PrimaryDisplayWorkAreaRect.Left = 0;
    local_b8.PrimaryDisplayWorkAreaRect.Top = 0;
    pIVar15 = (ISlateViewport *)0x0;
    local_b8.PrimaryDisplayWorkAreaRect.Right = 0;
    local_b8.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_b8.VirtualDisplayRect.Left = 0;
    local_b8.VirtualDisplayRect.Top = 0;
    local_b8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.VirtualDisplayRect.Right = 0;
    local_b8.VirtualDisplayRect.Bottom = 0;
    local_b8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_b8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_b8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_b8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_b8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_b8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_b8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_b8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    pFVar11 = FSlateApplication::Get();
    FSlateApplicationBase::GetDisplayMetrics((FSlateApplicationBase *)pFVar11,&local_b8);
    this->CachedDisplayWidth = local_b8.PrimaryDisplayWidth;
    this->CachedDisplayHeight = local_b8.PrimaryDisplayHeight;
    pFVar11 = FSlateApplication::Get();
    (**(code **)(*(longlong *)pFVar11 + 0x30))(pFVar11,&local_e8);
    if (local_e8 != (SWindow *)0x0) {
      if ((local_e8 == (SWindow *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar12 = SWindow::GetClientSizeInScreen(local_e8);
      fVar1 = *(float *)FVar12;
      fVar2 = *(float *)((longlong)FVar12 + 4);
      if ((local_e8 == (SWindow *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar5 = (local_e8->Viewport).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar5->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_148989ecf;
          }
          LOCK();
          aVar10 = pTVar5->SharedReferenceCount;
          bVar9 = aVar7 == aVar10;
          if (bVar9) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar9);
        pIVar15 = (local_e8->Viewport).Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (pIVar15 != (ISlateViewport *)0x0) {
        puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar15 + 0x10))(pIVar15,local_res20);
        fVar1 = (float)(int)*puVar13;
        fVar2 = (float)(int)((ulonglong)*puVar13 >> 0x20);
      }
LAB_148989ecf:
      this->CachedDisplayWidth = (int)fVar1;
      this->CachedDisplayHeight = (int)fVar2;
    }
    iVar14 = this->CachedDisplayWidth;
    iVar3 = this->CachedDisplayHeight;
    local_d8.Left = 0.0;
    local_d8.Top = 0.0;
    local_d8.Right = 0.0;
    local_d8.Bottom = 0.0;
    pFVar11 = FSlateApplication::Get();
    local_res10 = (float)iVar14;
    local_res14 = (float)iVar3;
    FSlateApplicationBase::GetSafeZoneSize
              ((FSlateApplicationBase *)pFVar11,&local_d8,
               (FDeprecateVector2DParameter *)&local_res10);
    fVar2 = __real_40000000;
    fVar1 = __real_bf000000;
    fVar16 = local_d8.Top * __real_40000000;
    this->SafeZonePadX = -((int)ROUND(__real_bf000000 - local_d8.Left * __real_40000000) >> 1);
    this->SafeZonePadY = -((int)ROUND(fVar1 - fVar16) >> 1);
    this->SafeZonePadEX = -((int)ROUND(fVar1 - local_d8.Right * fVar2) >> 1);
    this->SafeZonePadEY = -((int)ROUND(fVar1 - local_d8.Bottom * fVar2) >> 1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_b8.MonitorInfo.AllocatorInstance.Data,
               local_b8.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_b8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_b8.MonitorInfo.AllocatorInstance.Data);
    }
  }
  return;
}

// WrapString @ 14898c5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::WrapString(UCanvas *this,FTextSizingParameters *param_1,float param_2,
                   TStringView<wchar_t> *param_3,
                   TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> *param_4,
                   TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_5)

{
  FCanvas *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  FCanvasWordWrapper *pFVar9;
  TSharedRef<IBreakIterator,1> *pTVar10;
  TRawPtrProxy<FCanvasWordWrapper> local_res8;
  TSharedRef<IBreakIterator,1> local_38;
  TSharedRef<IBreakIterator,1> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = this->Canvas;
  if ((pFVar1->WordWrapper).Object == (FCanvasWordWrapper *)0x0) {
    pFVar9 = ::operator_new(0x20);
    if (pFVar9 == (FCanvasWordWrapper *)0x0) {
      pFVar9 = (FCanvasWordWrapper *)0x0;
    }
    else {
      pTVar10 = FBreakIterator::CreateCharacterBoundaryIterator(&local_38);
      (pFVar9->GraphemeBreakIterator).Object = pTVar10->Object;
      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
      (pFVar9->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      pTVar10 = FBreakIterator::CreateLineBreakIterator(&local_28);
      (pFVar9->LineBreakIterator).Object = pTVar10->Object;
      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
      (pFVar9->LineBreakIterator).SharedReferenceCount.ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    local_res8.Object = pFVar9;
    TSharedPtr<FCanvasWordWrapper,1>::operator=<FCanvasWordWrapper>
              (&pFVar1->WordWrapper,&local_res8);
  }
  uVar4 = *(undefined4 *)&param_3->DataPtr;
  uVar5 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iVar6 = param_3->Size;
  uVar7 = *(undefined4 *)&param_3->field_0xc;
  if (((pFVar1->WordWrapper).Object == (FCanvasWordWrapper *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->DrawFont).field0_0x0.DebugPtr == (UFont *)0x0) {
    if (2 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
    return;
  }
  local_18.DataPtr._0_4_ = uVar4;
  local_18.DataPtr._4_4_ = uVar5;
  local_18.Size = iVar6;
  local_18._12_4_ = uVar7;
  FCanvasWordWrapper::Execute((pFVar1->WordWrapper).Object,&local_18,param_1,param_4,param_5);
  return;
}

// WrapString @ 14898c740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCanvas::WrapString(FCanvasWordWrapper *param_1,FTextSizingParameters *param_2,float param_3,
                   TStringView<wchar_t> *param_4,
                   TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> *param_5,
                   TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_6)

{
  TStringView<wchar_t> local_18;
  
  if ((param_2->DrawFont).field0_0x0.DebugPtr != (UFont *)0x0) {
    local_18.DataPtr = param_4->DataPtr;
    local_18.Size = param_4->Size;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FCanvasWordWrapper::Execute(param_1,&local_18,param_2,param_5,param_6);
    return;
  }
  if (2 < (byte)LogCanvas._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    return;
  }
  return;
}

// WrappedPrint @ 14898c7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UCanvas::WrappedPrint
          (UCanvas *this,bool param_1,float param_2,float param_3,int *param_4,int *param_5,
          UFont *param_6,float param_7,float param_8,bool param_9,bool param_10,
          TStringView<wchar_t> *param_11,FFontRenderInfo *param_12)

{
  int iVar1;
  FCanvas *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  TVector2<double> *pTVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  FCanvasWordWrapper *pFVar13;
  TSharedRef<IBreakIterator,1> *pTVar14;
  FText *pFVar15;
  FCanvasWordWrapper *pFVar16;
  ForAnyElementType FVar17;
  FWrappedStringElement *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_3c8 [8];
  TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> local_3c0;
  int local_3b0;
  FLinearColor_u_0 local_3ac;
  undefined1 local_39c [4];
  int local_398 [2];
  TRawPtrProxy<FCanvasWordWrapper> local_390;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FTextSizingParameters local_378;
  TSharedRef<IBreakIterator,1> local_340;
  TSharedRef<IBreakIterator,1> local_330;
  TStringView<wchar_t> local_318;
  FText local_308;
  TStringView<wchar_t> local_2f8;
  FCanvasTextItemBase local_2e8;
  UFont *local_150;
  TReferenceControllerBase<1> *local_110;
  char local_e8;
  FText local_e0 [10];
  
  fVar23 = 0.0;
  if ((0.0 <= this->ClipX) && (0.0 < this->ClipY || this->ClipY == 0.0)) {
    local_res10 = param_1;
    if (param_6 != (UFont *)0x0) {
      local_378.DrawXL = this->ClipX - (param_2 + this->OrgX);
      local_378.DrawX = 0.0;
      local_378.DrawY = 0.0;
      local_378.DrawYL = 0.0;
      local_378.DrawFont.field0_0x0.DebugPtr = (TObjectPtr<UFont_const_>_u_0)param_6;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_6);
      }
      pFVar16 = (FCanvasWordWrapper *)0x0;
      local_378.SpacingAdjust.field0_0x0._0_12_ = ZEXT812(0);
      local_378.SpacingAdjust.field0_0x0._12_4_ = 0;
      pFVar2 = this->Canvas;
      dVar5 = (double)param_7;
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.ArrayNum = 0;
      local_3c0.ArrayMax = 0;
      dVar6 = (double)param_8;
      local_378.Scaling.field0_0x0._s_0.X = dVar5;
      local_378.Scaling.field0_0x0._s_0.Y = dVar6;
      if ((pFVar2->WordWrapper).Object == (FCanvasWordWrapper *)0x0) {
        pFVar13 = ::operator_new(0x20);
        if (pFVar13 != (FCanvasWordWrapper *)0x0) {
          pTVar14 = FBreakIterator::CreateCharacterBoundaryIterator(&local_340);
          (pFVar13->GraphemeBreakIterator).Object = pTVar14->Object;
          pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
          (pFVar13->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_340.SharedReferenceCount.ReferenceController);
          pTVar14 = FBreakIterator::CreateLineBreakIterator(&local_330);
          (pFVar13->LineBreakIterator).Object = pTVar14->Object;
          pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
          (pFVar13->LineBreakIterator).SharedReferenceCount.ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_330.SharedReferenceCount.ReferenceController);
          pFVar16 = pFVar13;
        }
        local_390.Object = pFVar16;
        TSharedPtr<FCanvasWordWrapper,1>::operator=<FCanvasWordWrapper>
                  (&pFVar2->WordWrapper,&local_390);
      }
      pwVar7 = param_11->DataPtr;
      uVar8._0_4_ = param_11->Size;
      uVar8._4_4_ = *(undefined4 *)&param_11->field_0xc;
      if (((pFVar2->WordWrapper).Object == (FCanvasWordWrapper *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        iVar12 = (*pcVar4)();
        return iVar12;
      }
      if (local_378.DrawFont.field0_0x0.DebugPtr == (TObjectPtr<UFont_const_>_u_0)0x0) {
        if (2 < (byte)LogCanvas._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
        }
      }
      else {
        local_318.DataPtr = pwVar7;
        local_318._8_8_ = uVar8;
        FCanvasWordWrapper::Execute
                  ((pFVar2->WordWrapper).Object,&local_318,&local_378,&local_3c0,
                   (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *)0x0);
      }
      fVar22 = param_2 + this->OrgX;
      fVar21 = param_3 + this->OrgY;
      if (param_10) {
        iVar12 = local_3c0.ArrayNum;
        fVar19 = 0.0;
        pFVar18 = (FWrappedStringElement *)
                  (local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayNum * 0x20);
        FVar17.Data = local_3c0.AllocatorInstance.Data;
        while( true ) {
          if (local_3c0.ArrayNum != iVar12) {
            `TCheckedPointerIterator<FWrappedStringElement,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if ((FWrappedStringElement *)FVar17.Data == pFVar18) break;
          pTVar9 = &((FWrappedStringElement *)FVar17.Data)->LineExtent;
          FVar17.Data = FVar17.Data + 0x20;
          fVar19 = (float)((double)fVar19 + (pTVar9->field0_0x0)._s_0.Y);
        }
        fVar21 = fVar21 + fVar19 * __real_bf000000;
      }
      fVar19 = 0.0;
      local_3ac._s_0.R = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.R];
      local_3ac._s_0.G = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.G];
      local_3ac._s_0.B = FLinearColor::sRGBToLinearTable[(this->DrawColor).field0_0x0._s_0.B];
      local_3ac._s_0.A = (float)(this->DrawColor).field0_0x0._s_0.A * __real_3b808081;
      pFVar15 = FText::GetEmpty();
      FCanvasTextItemBase::FCanvasTextItemBase
                (&local_2e8,&UE::Math::TVector2<double>::ZeroVector,(FLinearColor *)&local_3ac._s_0)
      ;
      local_150 = param_6;
      local_2e8._padding_ = (longlong)&___7FCanvasTextItem__6B_;
      local_e8 = '\0';
      local_2e8._padding_._4_4_ = 2;
      local_e0[0].TextData.Reference = (pFVar15->TextData).Reference;
      if (local_e0[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0[0].TextData.Reference + 8))
                  (local_e0[0].TextData.Reference,local_39c);
      }
      dVar10 = __real_3fe0000000000000;
      local_e0[0].Flags = pFVar15->Flags;
      iVar12 = local_3c0.ArrayNum;
      pFVar18 = (FWrappedStringElement *)
                (local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayNum * 0x20);
      local_2e8.FontRenderInfo._0_8_ = *(undefined8 *)param_12;
      local_2e8.FontRenderInfo.GlowInfo._0_8_ = *(undefined8 *)&param_12->GlowInfo;
      local_2e8._padding_._4_4_ = 2;
      local_2e8.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._4_8_ =
           *(undefined8 *)((longlong)&(param_12->GlowInfo).GlowColor.field0_0x0 + 4);
      local_2e8.FontRenderInfo.GlowInfo._16_8_ =
           *(undefined8 *)((longlong)&(param_12->GlowInfo).GlowColor.field0_0x0 + 0xc);
      local_2e8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X =
           (param_12->GlowInfo).GlowOuterRadius.field0_0x0._s_0.X;
      local_2e8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y =
           (param_12->GlowInfo).GlowOuterRadius.field0_0x0._s_0.Y;
      local_2e8.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0 =
           (param_12->GlowInfo).GlowInnerRadius.field0_0x0;
      FVar17.Data = local_3c0.AllocatorInstance.Data;
      local_2e8.Scale.field0_0x0._s_0.X = dVar5;
      local_2e8.Scale.field0_0x0._s_0.Y = dVar6;
      while( true ) {
        if (local_3c0.ArrayNum != iVar12) {
          `TCheckedPointerIterator<FWrappedStringElement,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_3c8);
        }
        if ((FWrappedStringElement *)FVar17.Data == pFVar18) break;
        fVar20 = fVar22;
        if (param_9) {
          fVar20 = (float)((double)fVar22 -
                          (((FWrappedStringElement *)FVar17.Data)->LineExtent).field0_0x0._s_0.X *
                          dVar10);
        }
        if (local_res10 == '\0') {
          local_388 = (((FWrappedStringElement *)FVar17.Data)->Value).Data.AllocatorInstance.Data;
          iVar1 = (((FWrappedStringElement *)FVar17.Data)->Value).Data.ArrayNum;
          iStack_380 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_380 = 0;
          }
          local_2f8._12_4_ = uStack_37c;
          local_2f8.Size = iStack_380;
          local_2f8.DataPtr = (wchar_t *)local_388;
          ClippedStrLen(param_6,param_7,param_8,&local_3b0,local_398,&local_2f8);
          fVar20 = (float)local_3b0;
        }
        else {
          pFVar15 = FText::FromString(&local_308,(FString *)FVar17.Data);
          FText::operator=(local_e0,pFVar15);
          if (local_308.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
          }
          pFVar2 = this->Canvas;
          if (*(code **)(local_2e8._padding_ + 8) == FCanvasItem::Draw) {
            local_2e8._padding_ = (longlong)(double)fVar20;
            local_2e8._padding_ = (longlong)(double)fVar21;
            (**(code **)(local_2e8._padding_ + 0x18))();
          }
          else {
            (**(code **)(local_2e8._padding_ + 8))(&local_2e8,pFVar2,fVar20,fVar21);
          }
          if (pFVar2->DrawMode == CDM_ImmediateDrawing) {
            FCanvas::Flush_GameThread(pFVar2,false);
          }
          fVar20 = (float)local_2e8.DrawnSize.field0_0x0._s_0.X;
        }
        if (fVar20 <= fVar23) {
          fVar20 = fVar23;
        }
        fVar23 = fVar20;
        fVar20 = UFont::GetMaxCharHeight(param_6);
        fVar21 = fVar21 + fVar20 * param_8;
        fVar20 = UFont::GetMaxCharHeight(param_6);
        FVar17.Data = FVar17.Data + 0x20;
        fVar19 = fVar19 + fVar20 * param_8;
      }
      iVar12 = local_3c0.ArrayNum;
      *param_4 = (int)fVar23;
      *param_5 = (int)fVar19;
      local_2e8._padding_ = (longlong)&___7FCanvasTextItem__6B_;
      if (local_e0[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0[0].TextData.Reference + 0x10))();
      }
      if (local_e8 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      local_2e8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
      local_2e8._padding_ = (longlong)&___7FCanvasItem__6B_;
      DestructItems<FWrappedStringElement,int>
                ((FWrappedStringElement *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
      if ((FWrappedStringElement *)local_3c0.AllocatorInstance.Data == (FWrappedStringElement *)0x0)
      {
        return iVar12;
      }
      FMemory::Free(local_3c0.AllocatorInstance.Data);
      return iVar12;
    }
    if (2 < (byte)LogCanvas._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
    }
  }
  return 0;
}

// WrappedStrLenf @ 14898cde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvas::WrappedStrLenf
          (UCanvas *this,UFont *param_1,float param_2,float param_3,int *param_4,int *param_5,
          wchar_t *param_6)

{
  ulong64 *puVar1;
  size_t sVar2;
  undefined1 auStackY_2118 [32];
  TStringView<wchar_t> local_20a8;
  FFontRenderInfo local_2098;
  wchar_t local_2058 [4096];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2118;
  puVar1 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar1,local_2058,0x1000,param_6);
  local_2098.bEnableShadow = 0;
  local_2098.bClipText = 0;
  local_20a8.DataPtr = local_2058;
  local_2098.GlowInfo.bEnableGlow = 0;
  local_2098.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_2098.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_2098.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_2098.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  local_2098.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
  local_2098.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
  sVar2 = wcslen(local_2058);
  local_20a8.Size = (int)sVar2;
  WrappedPrint(this,false,0.0,0.0,param_4,param_5,param_1,param_2,param_3,false,false,&local_20a8,
               &local_2098);
  return;
}

// execK2_Deproject @ 14898ee70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UCanvas::execK2_Deproject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  double local_58;
  double dStack_50;
  TVector2<double>_u_0 local_48;
  TVector<double> local_38;
  TVector<double> local_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_48._s_0.X = local_58;
  local_48._s_0.Y = dStack_50;
  pTVar3 = &local_20;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FSceneView **)&param_1[0x12].field_0x20 != (FSceneView *)0x0) {
    FSceneView::DeprojectFVector2D
              (*(FSceneView **)&param_1[0x12].field_0x20,(TVector2<double> *)&local_48._s_0,pTVar2,
               pTVar3);
  }
  return;
}

// execK2_DrawBorder @ 14898efc0

void __cdecl UCanvas::execK2_DrawBorder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  code *pcVar2;
  float fVar3;
  UTexture *this_00;
  UTexture *this_01;
  UTexture *this_02;
  UTexture *this_03;
  UTexture *this_04;
  bool bVar4;
  FTextureResource *pFVar5;
  FTextureResource *pFVar6;
  FTextureResource *pFVar7;
  FTextureResource *pFVar8;
  FTextureResource *pFVar9;
  float local_res10 [2];
  UTexture *local_2b8;
  UTexture *local_2b0;
  UTexture *local_2a8;
  UTexture *local_2a0;
  UTexture *local_298;
  UTexture *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  longlong local_248;
  longlong lStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  longlong local_208;
  longlong lStack_200;
  FCanvasBorderItem local_1f8;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  
  local_290 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_290,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_290);
  }
  local_298 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  local_2a0 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_2a8 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2b0 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  local_2b8 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  this_04 = local_290;
  this_03 = local_298;
  this_02 = local_2a0;
  this_01 = local_2a8;
  this_00 = local_2b0;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8 = local_248;
  lStack_f0 = lStack_240;
  local_e8 = local_208;
  lStack_e0 = lStack_200;
  if ((((((0.0 < local_218) && (0.0 < dStack_210)) && (local_290 != (UTexture *)0x0)) &&
       ((local_298 != (UTexture *)0x0 && (local_2a0 != (UTexture *)0x0)))) &&
      ((local_2a8 != (UTexture *)0x0 &&
       ((local_2b0 != (UTexture *)0x0 && (local_2b8 != (UTexture *)0x0)))))) &&
     (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    pFVar5 = UTexture::GetResource(local_2b8);
    pFVar6 = UTexture::GetResource(this_00);
    pFVar7 = UTexture::GetResource(this_01);
    pFVar8 = UTexture::GetResource(this_02);
    pFVar9 = UTexture::GetResource(this_03);
    local_1f8.BorderTexture = (FTexture *)UTexture::GetResource(this_04);
    local_1f8.Size.field0_0x0._s_0.X = local_218;
    local_1f8._padding_ = 0;
    local_1f8._padding_._0_1_ = 0;
    local_1f8._padding_ = 0;
    local_1f8._padding_ = (longlong)&___7FCanvasBorderItem__6B_;
    local_1f8.Size.field0_0x0._s_0.Y = dStack_210;
    local_1f8.Z = 1.0;
    local_1f8._padding_ = local_248;
    local_1f8._padding_ = lStack_240;
    local_1f8._padding_ = local_208;
    local_1f8._padding_ = lStack_200;
    local_1f8.BackgroundTexture = (FTexture *)pFVar9;
    local_1f8.BorderLeftTexture = (FTexture *)pFVar8;
    local_1f8.BorderRightTexture = (FTexture *)pFVar7;
    local_1f8.BorderTopTexture = (FTexture *)pFVar6;
    local_1f8.BorderBottomTexture = (FTexture *)pFVar5;
    if ((FTextureResource *)local_1f8.BorderTexture == (FTextureResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBorderTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CanvasItem.h"
                         ,0xf1,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar9 == (FTextureResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBackgroundTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CanvasItem.h"
                         ,0xf2,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1f8.BorderUV1.field0_0x0._s_0.X = local_228 + local_238;
    local_1f8.Rotation.Pitch = 0.0;
    local_1f8.BorderUV0.field0_0x0._s_0.X = local_228;
    local_1f8.BorderUV0.field0_0x0._s_0.Y = dStack_220;
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_1f8.Rotation.Roll = 0.0;
    local_1f8.BorderUV1.field0_0x0._s_0.Y = dStack_220 + dStack_230;
    local_1f8.BorderScale.field0_0x0._s_0.X = local_258;
    local_1f8.BorderScale.field0_0x0._s_0.Y = dStack_250;
    local_1f8.BackgroundScale.field0_0x0._s_0.X = local_268;
    local_1f8.BackgroundScale.field0_0x0._s_0.Y = dStack_260;
    local_1f8.PivotPoint.field0_0x0._s_0.X = local_278;
    local_1f8.PivotPoint.field0_0x0._s_0.Y = dStack_270;
    local_1f8.CornerSize.field0_0x0._s_0.X = local_288;
    local_1f8.CornerSize.field0_0x0._s_0.Y = dStack_280;
    local_1f8.Rotation.Yaw = (double)fVar3;
    if (*(code **)(local_1f8._padding_ + 0x18) == FCanvasBorderItem::Draw) {
      FCanvasBorderItem::Draw(&local_1f8,this);
    }
    else {
      (**(code **)(local_1f8._padding_ + 0x18))();
    }
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
  }
  return;
}

// execK2_DrawBox @ 14898f6d0

void __cdecl UCanvas::execK2_DrawBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  float local_res10 [2];
  double local_a8;
  double local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  FCanvasBoxItem local_78;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((0.0 < local_a8) && (0.0 < local_a0)) &&
     (this = *(FCanvas **)&param_1[0x12].field_0x18, this != (FCanvas *)0x0)) {
    local_78._padding_ = 0;
    local_78.Size.field0_0x0._s_0.Y = local_a0;
    local_78._padding_._0_1_ = 0;
    local_78._padding_ = local_98;
    local_78._padding_ = lStack_90;
    local_78._padding_ = 0;
    local_78.Corners.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Corners.ArrayNum = 0;
    local_78.Corners.ArrayMax = 0;
    local_78.LineThickness = local_res10[0];
    local_78.Size.field0_0x0._s_0.X = local_a8;
    local_78._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_78._padding_ = local_88;
    local_78._padding_ = lStack_80;
    FCanvasBoxItem::Draw(&local_78,this);
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
    if (local_78.Corners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Corners.AllocatorInstance.Data);
    }
  }
  return;
}

// execK2_DrawLine @ 14898f8a0

void __cdecl UCanvas::execK2_DrawLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  float local_res10 [2];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  longlong lStack_a0;
  FCanvasLineItem local_98;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((0.0 < (local_c0 - local_b0) * (local_c0 - local_b0) +
             (local_c8 - local_b8) * (local_c8 - local_b8)) &&
     (this = *(FCanvas **)&param_1[0x12].field_0x18, this != (FCanvas *)0x0)) {
    local_98._padding_ = 0;
    local_98._padding_._0_1_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = local_a8;
    local_98._padding_ = lStack_a0;
    local_98._padding_ = (longlong)local_b8;
    local_98._padding_ = (longlong)local_b0;
    local_98.Origin.field0_0x0._s_0.X = local_b8;
    local_98.Origin.field0_0x0._s_0.Y = local_b0;
    local_98.Origin.field0_0x0._s_0.Z = 0.0;
    local_98.EndPos.field0_0x0._s_0.X = local_c8;
    local_98.EndPos.field0_0x0._s_0.Y = local_c0;
    local_98.EndPos.field0_0x0._s_0.Z = 0.0;
    local_98.LineThickness = local_res10[0];
    local_98._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    FCanvasLineItem::Draw(&local_98,this);
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
  }
  return;
}

// execK2_DrawMaterial @ 14898faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl UCanvas::execK2_DrawMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FCanvas *this;
  code *pcVar3;
  float fVar4;
  UMaterialInterface *this_00;
  bool bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte bVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  ulonglong uVar11;
  undefined1 auStackY_258 [32];
  float local_228 [2];
  FPSOPrecacheParams_u_0 local_220;
  UMaterialInterface *local_218;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_210;
  FVertexFactoryType *local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  TArrayView<FVertexFactoryType_const_*_const,int> local_1a8;
  undefined1 local_198 [52];
  float local_164;
  float local_160;
  float local_15c;
  TVector2<double>_u_0 local_158;
  float local_148;
  TVector2<double>_u_0 local_140;
  TVector2<double>_u_0 local_130;
  FTexture *local_120;
  FMaterialRenderProxy *local_118;
  double local_110;
  double local_108;
  double local_100;
  TVector2<double>_u_0 local_f8;
  longlong local_e8;
  longlong lStack_e0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_218 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_228[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_228);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  this_00 = local_218;
  fVar4 = local_228[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8 = local_1b8;
  lStack_e0 = lStack_1b0;
  if ((((local_218 != (UMaterialInterface *)0x0) && (0.0 < local_1c8)) && (0.0 < dStack_1c0)) &&
     (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    UMaterialInterface::EnsureIsComplete(local_218);
    uVar11 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar11].bContainsValidPlatformInfo == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar11].bSupportsManualVertexFetch != 0) {
      local_220.Data = (ulonglong)((uint)local_220.Data & 0x8000) | 0x13c80;
      plVar6 = *(longlong **)(*(longlong *)&param_1[0x12].field_0x18 + 0x58);
      if ((plVar6 == (longlong *)0x0) ||
         (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(), *plVar6 == 0)) {
        bVar9 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(**(longlong **)(*(longlong *)&param_1[0x12].field_0x18 + 0x58) + 0x10)
                 )();
        lVar8 = (**(code **)(*(longlong *)*puVar7 + 0x20))();
        bVar9 = *(byte *)(lVar8 + 0x33);
      }
      local_1a8.ArrayNum = 1;
      local_220.Data = (ulonglong)bVar9 << 0x1e | local_220.Data & 0xffffc0003fffffff;
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200 = &FLocalVertexFactory::StaticType;
      local_1a8.DataPtr = &local_200;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      UMaterialInterface::PrecachePSOs
                (this_00,&local_d8,&local_1a8,(FPSOPrecacheParams *)&local_220._s_0,Medium,
                 &local_210);
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_d8.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_d8.ArrayNum);
      if (local_d8.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
      }
    }
    local_118 = (FMaterialRenderProxy *)(**(code **)(this_00->_padding_ + 0x310))(this_00);
    local_140._s_0.X = local_1d8;
    local_130._s_0.X = local_1d8 + local_1e8;
    local_140._s_0.Y = dStack_1d0;
    local_130._s_0.Y = dStack_1d0 + dStack_1e0;
    local_158._s_0.X = local_1c8;
    local_158._s_0.Y = dStack_1c0;
    local_198._24_8_ = 0;
    local_198[0x20] = 0;
    local_198._40_8_ = 0;
    local_198._0_8_ = &___7FCanvasTileItem__6B_;
    local_148 = 1.0;
    local_120 = (FTexture *)0x0;
    local_198._8_8_ = local_1b8;
    local_198._16_8_ = lStack_1b0;
    if ((local_118 == (FMaterialRenderProxy *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InMaterialRenderProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                           ,0x1a0,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_108 = (double)fVar4;
    local_110 = 0.0;
    local_198._48_4_ = FLinearColor::sRGBToLinearTable[(byte)param_1[1].field_0x12];
    local_100 = 0.0;
    local_f8._s_0.X = local_1f8;
    local_f8._s_0.Y = dStack_1f0;
    local_164 = FLinearColor::sRGBToLinearTable[(byte)param_1[1].field_0x11];
    local_160 = FLinearColor::sRGBToLinearTable[(byte)param_1[1].field_0x10];
    local_15c = (float)(byte)param_1[1].field_0x13 * __real_3b808081;
    if (*(code **)(local_198._0_8_ + 0x18) == FCanvasTileItem::Draw) {
      FCanvasTileItem::Draw((FCanvasTileItem *)local_198,this);
    }
    else {
      (**(code **)(local_198._0_8_ + 0x18))();
    }
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
  }
  return;
}

// execK2_DrawMaterialTriangle @ 14898ffe0

void __cdecl UCanvas::execK2_DrawMaterialTriangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  UMaterialInterface *pUVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  UMaterialInterface *local_res10;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  FCanvasTriangleItem local_88;
  
  local_res10 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  _Src = local_98;
  local_a8.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_90;
  local_a0 = CONCAT44(local_a0._4_4_,(int)local_90);
  if ((int)local_90 == 0) {
    local_a0 = local_90 & 0xffffffff;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,(int)local_90,0,&local_a8,(int)local_90,(int *)((longlong)&local_a0 + 4));
    memcpy(local_a8.Data,_Src,lVar4 * 0x90);
    iVar3 = (int)local_a0;
  }
  pUVar2 = local_res10;
  if (((local_res10 != (UMaterialInterface *)0x0) && (0 < iVar3)) &&
     (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    UMaterialInterface::EnsureIsComplete(local_res10);
    FCanvasTriangleItem::FCanvasTriangleItem
              (&local_88,&UE::Math::TVector2<double>::ZeroVector,
               &UE::Math::TVector2<double>::ZeroVector,&UE::Math::TVector2<double>::ZeroVector,
               (FTexture *)0x0);
    local_88.MaterialRenderProxy =
         (FMaterialRenderProxy *)(**(code **)(pUVar2->_padding_ + 0x310))(pUVar2);
    if (local_88.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.TriangleList.AllocatorInstance.Data);
    }
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_88.TriangleList.AllocatorInstance.Data = local_a8.Data;
    local_88.TriangleList.ArrayNum = (int)local_a0;
    local_88.TriangleList.ArrayMax = local_a0._4_4_;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    (**(code **)(local_88._padding_ + 0x18))(&local_88);
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
    local_88._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (local_88.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.TriangleList.AllocatorInstance.Data);
    }
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execK2_DrawPolygon @ 1489901f0

void __cdecl UCanvas::execK2_DrawPolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  uint uVar2;
  UTexture *this_00;
  char cVar3;
  int iVar4;
  FTextureResource *pFVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  UTexture *local_res20;
  FCanvasNGonItem local_e8;
  longlong local_88;
  longlong lStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48 [3];
  
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this_00 = local_res20;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = (ulonglong)local_res10[0];
  local_58._s_0.X = local_78;
  local_58._s_0.Y = dStack_70;
  local_48[0]._s_0.X = local_68;
  local_48[0]._s_0.Y = dStack_60;
  if ((((0.0 < local_78) && (0.0 < dStack_70)) && (2 < (int)local_res10[0])) &&
     (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    local_e8.Texture = GWhiteTexture;
    if ((local_res20 != (UTexture *)0x0) &&
       (pFVar5 = UTexture::GetResource(local_res20), local_e8.Texture = GWhiteTexture,
       pFVar5 != (FTextureResource *)0x0)) {
      pFVar5 = UTexture::GetResource(this_00);
      cVar3 = (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5);
      local_e8.Texture = GWhiteTexture;
      if (cVar3 == '\0') {
        local_e8.Texture = (FTexture *)UTexture::GetResource(this_00);
      }
    }
    local_e8._padding_ = 0;
    local_e8._padding_ = (longlong)&___7FCanvasNGonItem__6B_;
    local_e8._padding_._0_1_ = 0;
    local_e8._padding_ = 0;
    local_e8.TriangleList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.TriangleList.ArrayNum = 0;
    local_e8.TriangleList.ArrayMax = 0;
    local_e8.TriListItem = (FCanvasTriangleItem *)0x0;
    local_e8._padding_ = local_88;
    local_e8._padding_ = lStack_80;
    local_e8._padding_ = (longlong)local_68;
    local_e8._padding_ = (longlong)dStack_60;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar6);
      }
    }
    else {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x90,8,uVar2,&local_e8.TriangleList.AllocatorInstance,
                         &local_e8.TriangleList.ArrayNum,&local_e8.TriangleList.ArrayMax);
      memset(local_e8.TriangleList.AllocatorInstance.Data + (longlong)iVar4 * 0x90,0,
             (longlong)(int)uVar2 * 0x90);
    }
    FCanvasNGonItem::SetupPosition
              (&local_e8,(TVector2<double> *)&local_48[0]._s_0,(TVector2<double> *)&local_58._s_0);
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    if (*(code **)(local_e8._padding_ + 0x18) == FCanvasNGonItem::Draw) {
      *(undefined4 *)((longlong)&(local_e8.TriListItem)->_padding_ + 4) = local_e8._padding_._4_4_;
      (**(code **)((local_e8.TriListItem)->_padding_ + 0x18))();
    }
    else {
      (**(code **)(local_e8._padding_ + 0x18))(&local_e8);
    }
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
    local_e8._padding_ = (longlong)&___7FCanvasNGonItem__6B_;
    if (local_e8.TriListItem != (FCanvasTriangleItem *)0x0) {
      (**(code **)(local_e8.TriListItem)->_padding_)(local_e8.TriListItem,1);
    }
    if (local_e8.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.TriangleList.AllocatorInstance.Data);
    }
  }
  return;
}

// execK2_DrawText @ 148990520

void __cdecl UCanvas::execK2_DrawText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  float fVar2;
  undefined8 uVar3;
  FText *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res20 [2];
  int local_358;
  float local_354;
  undefined8 local_350;
  FString local_348;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  FLinearColor_u_0 local_2c8;
  TVector2<double>_u_0 local_2b8;
  FText local_2a8;
  FCanvasTextItemBase local_298;
  undefined8 local_100;
  TReferenceControllerBase<1> *local_c0;
  char local_98;
  ITextData *local_90;
  uint local_88;
  
  local_350 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_350,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_350);
  }
  local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Data.ArrayNum = 0;
  local_348.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_348,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_348);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2f8);
  }
  local_354 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_354,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_354);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_358 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_358,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_358);
  }
  bVar7 = local_358 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  uVar3 = local_350;
  fVar2 = local_354;
  local_2c8._0_8_ = local_2f8;
  local_2c8._8_8_ = uStack_2f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2b8._s_0.X = local_2d8;
  local_2b8._s_0.Y = dStack_2d0;
  if ((1 < local_348.Data.ArrayNum) && (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    pFVar4 = FText::FromString(&local_2a8,&local_348);
    FCanvasTextItemBase::FCanvasTextItemBase
              (&local_298,(TVector2<double> *)&local_2b8._s_0,(FLinearColor *)&local_2c8._s_0);
    local_100 = uVar3;
    local_298._padding_ = (longlong)&___7FCanvasTextItem__6B_;
    local_98 = '\0';
    local_298._padding_._4_4_ = 2;
    local_90 = (pFVar4->TextData).Reference;
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 8))(local_90,local_338);
    }
    local_88 = pFVar4->Flags;
    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
    }
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_298.HorizSpacingAdjust = fVar2;
    local_298.ShadowColor.field0_0x0._0_8_ = local_308;
    local_298.ShadowColor.field0_0x0._8_8_ = uStack_300;
    local_298.Scale.field0_0x0._s_0.X = local_2e8;
    local_298.Scale.field0_0x0._s_0.Y = dStack_2e0;
    local_298.ShadowOffset.field0_0x0._s_0.X = local_318;
    local_298.ShadowOffset.field0_0x0._s_0.Y = dStack_310;
    local_298.OutlineColor.field0_0x0._0_8_ = local_328;
    local_298.OutlineColor.field0_0x0._8_8_ = uStack_320;
    local_298.bCentreX = bVar5;
    local_298.bCentreY = bVar6;
    local_298.bOutlined = bVar7;
    if (*(code **)(local_298._padding_ + 0x18) == FCanvasTextItemBase::Draw) {
      FCanvasTextItemBase::Draw(&local_298,this);
    }
    else {
      (**(code **)(local_298._padding_ + 0x18))();
    }
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
    local_298._padding_ = (longlong)&___7FCanvasTextItem__6B_;
    if (local_90 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90 + 0x10))();
    }
    if (local_98 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    }
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  return;
}

// execK2_DrawTexture @ 148990a20

void __cdecl UCanvas::execK2_DrawTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  code *pcVar2;
  undefined1 uVar3;
  float fVar4;
  UTexture *this_00;
  char cVar5;
  bool bVar6;
  FTextureResource *pFVar7;
  undefined4 uVar8;
  undefined1 local_res10 [8];
  float local_res20 [2];
  UTexture *local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  longlong local_188;
  longlong lStack_180;
  FCanvasTileItem local_178;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  
  uVar8 = 0;
  local_1e8 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  this_00 = local_1e8;
  fVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_1b8;
  lStack_c0 = lStack_1b0;
  local_b8 = local_188;
  lStack_b0 = lStack_180;
  if (((0.0 < local_198) && (0.0 < dStack_190)) && (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    local_178.Texture = GWhiteTexture;
    if ((local_1e8 != (UTexture *)0x0) &&
       (pFVar7 = UTexture::GetResource(local_1e8), local_178.Texture = GWhiteTexture,
       pFVar7 != (FTextureResource *)0x0)) {
      pFVar7 = UTexture::GetResource(this_00);
      cVar5 = (**(code **)(pFVar7->_padding_ + 0x48))(pFVar7);
      local_178.Texture = GWhiteTexture;
      if (cVar5 == '\0') {
        local_178.Texture = (FTexture *)UTexture::GetResource(this_00);
      }
    }
    local_178.Size.field0_0x0._s_0.X = local_198;
    local_178.UV0.field0_0x0._s_0.X = local_1a8;
    local_178.Size.field0_0x0._s_0.Y = dStack_190;
    local_178.UV0.field0_0x0._s_0.Y = dStack_1a0;
    local_178._padding_._0_4_ = 0;
    local_178._padding_._0_1_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = (longlong)&___7FCanvasTileItem__6B_;
    local_178.Z = 1.0;
    local_178.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
    local_178._padding_ = local_1b8;
    local_178._padding_ = lStack_1b0;
    local_178._padding_ = local_188;
    local_178._padding_ = lStack_180;
    local_178.UV1.field0_0x0._s_0.X = local_1e0 + local_1a8;
    local_178.UV1.field0_0x0._s_0.Y = local_1d8 + dStack_1a0;
    if (((FTextureResource *)local_178.Texture == (FTextureResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                           ,0x182,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_178.Rotation.Pitch = 0.0;
    local_178.Rotation.Roll = 0.0;
    local_178.PivotPoint.field0_0x0._s_0.X = local_1c8;
    local_178.PivotPoint.field0_0x0._s_0.Y = dStack_1c0;
    local_178.Rotation.Yaw = (double)fVar4;
    switch(uVar3) {
    case 0:
      break;
    case 1:
      uVar8 = 1;
      break;
    default:
      uVar8 = 0xb;
      break;
    case 3:
      uVar8 = 3;
      break;
    case 4:
      uVar8 = 4;
      break;
    case 5:
      uVar8 = 9;
      break;
    case 6:
      uVar8 = 10;
    }
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_178._padding_._4_4_ = uVar8;
    if (*(code **)(local_178._padding_ + 0x18) == FCanvasTileItem::Draw) {
      FCanvasTileItem::Draw(&local_178,this);
    }
    else {
      (**(code **)(local_178._padding_ + 0x18))();
    }
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
  }
  return;
}

// execK2_DrawTriangle @ 148990f10

void __cdecl UCanvas::execK2_DrawTriangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCanvas *this;
  UTexture *this_00;
  void *_Src;
  char cVar2;
  FTextureResource *pFVar3;
  FTextureResource *pFVar4;
  int iVar5;
  longlong lVar6;
  UTexture *local_res10;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  FCanvasTriangleItem local_88;
  
  local_res10 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  _Src = local_98;
  lVar6 = (longlong)(int)local_90;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,(int)local_90);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_90 == 0) {
    local_a0 = local_90 & 0xffffffff;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,(int)local_90,0,&local_a8,(int)local_90,(int *)((longlong)&local_a0 + 4));
    memcpy(local_a8.Data,_Src,lVar6 * 0x90);
    iVar5 = (int)local_a0;
  }
  this_00 = local_res10;
  if ((0 < iVar5) && (*(longlong *)&param_1[0x12].field_0x18 != 0)) {
    pFVar4 = (FTextureResource *)GWhiteTexture;
    if ((local_res10 != (UTexture *)0x0) &&
       (pFVar3 = UTexture::GetResource(local_res10), pFVar4 = (FTextureResource *)GWhiteTexture,
       pFVar3 != (FTextureResource *)0x0)) {
      pFVar4 = UTexture::GetResource(this_00);
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
      pFVar4 = (FTextureResource *)GWhiteTexture;
      if (cVar2 == '\0') {
        pFVar4 = UTexture::GetResource(this_00);
      }
    }
    FCanvasTriangleItem::FCanvasTriangleItem
              (&local_88,&UE::Math::TVector2<double>::ZeroVector,
               &UE::Math::TVector2<double>::ZeroVector,&UE::Math::TVector2<double>::ZeroVector,
               (FTexture *)pFVar4);
    if (local_88.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.TriangleList.AllocatorInstance.Data);
    }
    this = *(FCanvas **)&param_1[0x12].field_0x18;
    local_88.TriangleList.AllocatorInstance.Data = local_a8.Data;
    local_88.TriangleList.ArrayNum = (int)local_a0;
    local_88.TriangleList.ArrayMax = local_a0._4_4_;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    (**(code **)(local_88._padding_ + 0x18))(&local_88);
    if (this->DrawMode == CDM_ImmediateDrawing) {
      FCanvas::Flush_GameThread(this,false);
    }
    local_88._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (local_88.TriangleList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.TriangleList.AllocatorInstance.Data);
    }
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execK2_Project @ 148991140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UCanvas::execK2_Project(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  double dVar2;
  FProperty *pFVar3;
  double dVar4;
  undefined1 auVar5 [16];
  TPlane<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_58;
  TPlane<double> local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  local_58._s_0.X = local_78;
  local_58._s_0.Y = dStack_70;
  local_58._s_0.Z = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = 0;
  uVar12 = 0;
  dVar2 = 0.0;
  if (*(FSceneView **)&param_1[0x12].field_0x20 != (FSceneView *)0x0) {
    pTVar6 = FSceneView::Project(*(FSceneView **)&param_1[0x12].field_0x20,&local_38,
                                 (TVector<double> *)&local_58._s_0);
    uVar7 = (undefined4)pTVar6->_padding_;
    uVar8 = *(undefined4 *)((longlong)&pTVar6->_padding_ + 4);
    uVar9 = (undefined4)pTVar6->_padding_;
    uVar10 = *(undefined4 *)((longlong)&pTVar6->_padding_ + 4);
    uVar1 = pTVar6->_padding_;
    dVar2 = pTVar6->W;
    uVar11 = (undefined4)uVar1;
    uVar12 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_58._12_4_ = uVar10;
  local_58._8_4_ = uVar9;
  dVar4 = (local_58._s_0.Y * __real_bff0000000000000 + __real_3ff0000000000000) *
          (double)(*(float *)&param_1[1].field_0xc * __real_3f000000);
  if (dVar2 <= 0.0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  auVar5._8_4_ = SUB84(dVar4,0);
  auVar5._0_8_ = (double)(*(float *)&param_1[1].field_0x8 * __real_3f000000) *
                 ((double)CONCAT44(uVar8,uVar7) + __real_3ff0000000000000);
  auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(uVar12,uVar11);
  return;
}

// execK2_StrLen @ 148991280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UCanvas::execK2_StrLen(UObject *param_1,FFrame *param_2,void *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  FProperty *pFVar3;
  undefined1 auVar4 [16];
  UFont *this;
  wchar_t *pwVar5;
  schar sVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_a8 [2];
  UFont *local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  
  local_a0 = (UFont *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pwVar5 = local_98;
  this = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_90 < 2) {
    dVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    iVar7 = (int)local_90 + -1;
    if ((int)local_90 == 0) {
      iVar7 = 0;
    }
    if (local_a0 == (UFont *)0x0) {
      fVar12 = local_res10[0];
      fVar13 = local_res10[0];
      if (2 < (byte)LogScript._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
        fVar12 = local_res10[0];
        fVar13 = local_res10[0];
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_a0);
      }
      fVar13 = 0.0;
      UFont::GetCharSize(this,L'0',local_res20,local_a8);
      if (local_res20[0] == 0.0) {
        UFont::GetCharSize(this,L'A',local_res20,local_a8);
      }
      pwVar1 = pwVar5 + iVar7;
      fVar12 = 0.0;
      pwVar9 = (wchar_t *)0x0;
      while (pwVar5 < pwVar1) {
        while( true ) {
          pwVar8 = pwVar5;
          wVar2 = *pwVar8;
          if (wVar2 == L'\0') goto LAB_1489914fb;
          UFont::GetCharSize(this,wVar2,local_res18,local_res10);
          if ((local_res10[0] == 0.0) && (wVar2 == L'\n')) {
            local_res10[0] = local_a8[0];
          }
          fVar14 = 0.0;
          if (pwVar9 != (wchar_t *)0x0) {
            sVar6 = UFont::GetCharKerning(this,*pwVar9,wVar2);
            fVar14 = (float)(int)sVar6;
          }
          pwVar5 = pwVar8 + 1;
          pwVar9 = pwVar8;
          if (((pwVar1 <= pwVar5) || (*pwVar5 == L'\0')) || (iVar7 = iswspace(*pwVar5), iVar7 != 0))
          break;
          local_res18[0] = local_res18[0] + fVar14;
          fVar14 = local_res10[0];
          if (local_res10[0] <= fVar12) {
            fVar14 = fVar12;
          }
          fVar13 = fVar13 + local_res18[0];
          fVar12 = fVar14;
        }
        fVar14 = local_res10[0];
        if (local_res10[0] <= fVar12) {
          fVar14 = fVar12;
        }
        fVar13 = fVar13 + local_res18[0];
        fVar12 = fVar14;
      }
    }
LAB_1489914fb:
    dVar10 = (double)fVar13;
    dVar11 = (double)fVar12;
  }
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar4;
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execK2_TextSize @ 148991570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UCanvas::execK2_TextSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  FProperty *pFVar4;
  undefined1 auVar5 [16];
  double dVar6;
  UFont *this;
  wchar_t *pwVar7;
  schar sVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res10;
  undefined4 uStackX_14;
  float local_res18 [2];
  float local_res20 [2];
  float local_d8 [2];
  UFont *local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  
  local_d0 = (UFont *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pwVar7 = local_c8;
  this = local_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_c0 < 2) {
    dVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    iVar9 = (int)local_c0 + -1;
    if ((int)local_c0 == 0) {
      iVar9 = 0;
    }
    fVar13 = (float)(double)CONCAT44(uStackX_14,local_res10);
    fVar14 = (float)(double)CONCAT44(uStackX_14,local_res10);
    if (local_d0 == (UFont *)0x0) {
      if (4 < (byte)LogCanvas._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCanvas);
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_d0);
      }
      fVar13 = 0.0;
      UFont::GetCharSize(this,L'0',local_res20,local_d8);
      if (local_res20[0] == 0.0) {
        UFont::GetCharSize(this,L'A',local_res20,local_d8);
      }
      pwVar2 = pwVar7 + iVar9;
      fVar14 = 0.0;
      pwVar11 = (wchar_t *)0x0;
      while (pwVar7 < pwVar2) {
        while( true ) {
          pwVar10 = pwVar7;
          wVar3 = *pwVar10;
          if (wVar3 == L'\0') goto LAB_14899185c;
          UFont::GetCharSize(this,wVar3,local_res18,&local_res10);
          if ((local_res10 == 0.0) && (wVar3 == L'\n')) {
            local_res10 = local_d8[0];
          }
          fVar15 = 0.0;
          if (pwVar11 != (wchar_t *)0x0) {
            sVar8 = UFont::GetCharKerning(this,*pwVar11,wVar3);
            fVar15 = (float)(int)sVar8 * (float)local_b8;
          }
          pwVar7 = pwVar10 + 1;
          local_res18[0] = local_res18[0] * (float)local_b8;
          local_res10 = local_res10 * (float)local_b0;
          pwVar11 = pwVar10;
          if (((pwVar2 <= pwVar7) || (*pwVar7 == L'\0')) || (iVar9 = iswspace(*pwVar7), iVar9 != 0))
          break;
          local_res18[0] = local_res18[0] + fVar15;
          fVar15 = local_res10;
          if (local_res10 <= fVar14) {
            fVar15 = fVar14;
          }
          fVar13 = fVar13 + local_res18[0];
          fVar14 = fVar15;
        }
        fVar15 = local_res10;
        if (local_res10 <= fVar14) {
          fVar15 = fVar14;
        }
        fVar13 = fVar13 + local_res18[0];
        fVar14 = fVar15;
      }
LAB_14899185c:
      fVar13 = (float)(int)fVar13;
      fVar14 = (float)(int)fVar14;
    }
    dVar6 = (double)fVar13;
    dVar12 = (double)fVar14;
  }
  auVar5._8_4_ = SUB84(dVar12,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

