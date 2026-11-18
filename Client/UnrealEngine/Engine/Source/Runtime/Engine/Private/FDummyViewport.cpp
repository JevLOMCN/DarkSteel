// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FDummyViewport @ 148907270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDummyViewport * __thiscall
FDummyViewport::FDummyViewport(FDummyViewport *this,FViewportClient *param_1)

{
  UWorld *pUVar1;
  FCanvas *this_00;
  UWorld *pUVar2;
  Type TVar3;
  
  FViewport::FViewport((FViewport *)this,param_1);
  pUVar2 = (UWorld *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->DebugCanvas = (FCanvas *)0x0;
  this->DisplayColorGamut = sRGB_D65;
  this->DisplayOutputFormat = SDR_sRGB;
  this->bSceneHDREnabled = false;
  *(FName *)((longlong)&this->_padding_ + 4) = NAME_DummyViewport;
  pUVar1 = pUVar2;
  if (param_1 != (FViewportClient *)0x0) {
    pUVar1 = (UWorld *)(**(code **)((longlong)*param_1 + 0x30))(param_1);
  }
  this_00 = ::operator_new(0x120);
  if (this_00 != (FCanvas *)0x0) {
    TVar3 = GMaxRHIFeatureLevel;
    if (pUVar1 != (UWorld *)0x0) {
      TVar3 = (uint)(pUVar1->FeatureLevel).Value;
    }
    pUVar2 = (UWorld *)
             FCanvas::FCanvas(this_00,(FRenderTarget *)this,(FHitProxyConsumer *)0x0,pUVar1,TVar3,
                              CDM_DeferDrawing,__real_3f800000);
  }
  this->DebugCanvas = (FCanvas *)pUVar2;
  (pUVar2->ExtraReferencedObjects).ArrayNum = 0;
  return this;
}

// ~FDummyViewport @ 14890dec0

void __thiscall FDummyViewport::~FDummyViewport(FDummyViewport *this)

{
  FCanvas *this_00;
  
  this_00 = this->DebugCanvas;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  if (this_00 != (FCanvas *)0x0) {
    FCanvas::~FCanvas(this_00);
    ::operator_delete(this_00,0x120);
    this->DebugCanvas = (FCanvas *)0x0;
  }
  FViewport::~FViewport((FViewport *)this);
  return;
}

// BeginRenderFrame @ 1489193d0

void __thiscall
FDummyViewport::BeginRenderFrame(FDummyViewport *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\DummyViewport.h"
                       ,0x15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DeferInvalidateHitProxy @ 148924c80

void __thiscall FDummyViewport::DeferInvalidateHitProxy(FDummyViewport *this)

{
  return;
}

// Destroy @ 148925010

void __thiscall FDummyViewport::Destroy(FDummyViewport *this)

{
  return;
}

// EndRenderFrame @ 148939490

void __thiscall
FDummyViewport::EndRenderFrame
          (FDummyViewport *this,FRHICommandListImmediate *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\DummyViewport.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetDebugCanvas @ 148957b50

FCanvas * __thiscall FDummyViewport::GetDebugCanvas(FDummyViewport *this)

{
  return this->DebugCanvas;
}

// GetDisplayColorGamut @ 148957fd0

EDisplayColorGamut __thiscall FDummyViewport::GetDisplayColorGamut(FDummyViewport *this)

{
  return this->DisplayColorGamut;
}

// GetDisplayOutputFormat @ 148958120

EDisplayOutputFormat __thiscall FDummyViewport::GetDisplayOutputFormat(FDummyViewport *this)

{
  return this->DisplayOutputFormat;
}

// GetFriendlyName @ 148958ce0

FString * __thiscall
FDummyViewport::GetFriendlyName(FDummyViewport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDummyViewport");
  return __return_storage_ptr__;
}

// GetMousePos @ 14895a1e0

void __thiscall
FDummyViewport::GetMousePos(FDummyViewport *this,TIntPoint<int> *param_1,bool param_2)

{
  param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return;
}

// GetMouseX @ 14895a340

int __thiscall FDummyViewport::GetMouseX(FDummyViewport *this)

{
  return 0;
}

// GetMouseY @ 14895a350

int __thiscall FDummyViewport::GetMouseY(FDummyViewport *this)

{
  return 0;
}

// GetSceneHDREnabled @ 14895c5e0

bool __thiscall FDummyViewport::GetSceneHDREnabled(FDummyViewport *this)

{
  return this->bSceneHDREnabled;
}

// GetViewportFrame @ 14895f900

FViewportFrame * __thiscall FDummyViewport::GetViewportFrame(FDummyViewport *this)

{
  return (FViewportFrame *)0x0;
}

// GetWindow @ 14895faf0

void * __thiscall FDummyViewport::GetWindow(FDummyViewport *this)

{
  return (void *)0x0;
}

// InitRHI @ 148962610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FDummyViewport::InitRHI(FDummyViewport *this,FRHICommandListBase *param_1)

{
  bool *pbVar1;
  FRHIResource *this_00;
  TRefCountPtr<FRHITexture> TVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [24];
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  longlong local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  EPixelFormat local_f5;
  undefined2 local_f4;
  wchar_t *local_e8;
  ERHIAccess local_e0;
  ERHITextureInitAction local_dc;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FResourceBulkDataInterface *local_58;
  uint local_50;
  uint local_4c;
  FName local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 1;
  local_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_dc = BulkData;
  local_d8 = (FResourceBulkDataInterface *)0x151bdc2a0;
  local_138._0_4_ = (undefined4)this->_padding_;
  local_138._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_104 = this->_padding_;
  local_f5 = PF_A2B10G10R10;
  if (*(char *)&this->DebugCanvas != '\0') {
    local_f5 = GRHIGlobals.HDRDisplayOutputFormat;
  }
  local_fc = 0x10001;
  local_f8 = 0x101;
  local_f6 = 0;
  local_f4 = 0xff00;
  local_e8 = (wchar_t *)0x0;
  local_e0 = None;
  local_d0.ComparisonIndex.Value = 0x70;
  local_d0.Number = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_138._16_8_ = 9;
  FRHITextureDesc::FRHITextureDesc(&local_a8,(FRHITextureDesc *)(local_138 + 0x10));
  local_58 = local_d8;
  local_50 = local_d0.ComparisonIndex.Value;
  local_4c = local_d0.Number;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free(local_e8);
  }
  TVar2 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_138);
  pbVar1 = &this[-1].bSceneHDREnabled;
  if ((FRHITexture *)pbVar1 != TVar2.Reference) {
    this_00 = *(FRHIResource **)pbVar1;
    *(longlong *)pbVar1 = (TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)CONCAT44(local_138._4_4_,local_138._0_4_) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(local_138._4_4_,local_138._0_4_));
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// InvalidateDisplay @ 148966130

void __thiscall FDummyViewport::InvalidateDisplay(FDummyViewport *this)

{
  return;
}

// KeyState @ 148969010

bool __thiscall FDummyViewport::KeyState(FDummyViewport *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// MoveWindow @ 148969d90

void __thiscall
FDummyViewport::MoveWindow(FDummyViewport *this,int param_1,int param_2,int param_3,int param_4)

{
  return;
}

// ProcessInput @ 148973670

void __thiscall FDummyViewport::ProcessInput(FDummyViewport *this,float param_1)

{
  return;
}

// SetMouse @ 14897f310

void __thiscall FDummyViewport::SetMouse(FDummyViewport *this,int param_1,int param_2)

{
  return;
}

// SetUserFocus @ 14897fe20

bool __thiscall FDummyViewport::SetUserFocus(FDummyViewport *this,bool param_1)

{
  return false;
}

// ViewportToVirtualDesktopPixel @ 14898b280

TIntPoint<int> __thiscall
FDummyViewport::ViewportToVirtualDesktopPixel(FDummyViewport *this,TVector2<double> *param_1)

{
  (param_1->field0_0x0)._s_0.X = (double)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// VirtualDesktopPixelToViewport @ 14898b2a0

TVector2<double> * __thiscall
FDummyViewport::VirtualDesktopPixelToViewport
          (FDummyViewport *this,TVector2<double> *__return_storage_ptr__,TIntPoint<int> param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

