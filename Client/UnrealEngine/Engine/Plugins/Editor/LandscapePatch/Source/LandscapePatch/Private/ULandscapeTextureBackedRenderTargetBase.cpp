// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 17

// StaticClass @ 14db09e60

UClass * __cdecl ULandscapeTextureBackedRenderTargetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeTextureBackedRenderTargetBase",
               &Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton,
               StaticRegisterNativesULandscapeTextureBackedRenderTargetBase,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeTextureBackedRenderTargetBase>,
               InternalVTableHelperCtorCaller<ULandscapeTextureBackedRenderTargetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton;
}

// ULandscapeTextureBackedRenderTargetBase @ 14db13030

ULandscapeTextureBackedRenderTargetBase * __thiscall
ULandscapeTextureBackedRenderTargetBase::ULandscapeTextureBackedRenderTargetBase
          (ULandscapeTextureBackedRenderTargetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SizeX = 0x20;
  this->_padding_ = (longlong)&___7ULandscapeTextureBackedRenderTargetBase__6B_;
  (this->InternalTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  this->bUseInternalTextureOnly = false;
  this->SizeY = 0x20;
  return this;
}

// ULandscapeTextureBackedRenderTargetBase @ 14db13080

ULandscapeTextureBackedRenderTargetBase * __thiscall
ULandscapeTextureBackedRenderTargetBase::ULandscapeTextureBackedRenderTargetBase
          (ULandscapeTextureBackedRenderTargetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SizeX = 0x20;
  this->_padding_ = (longlong)&___7ULandscapeTextureBackedRenderTargetBase__6B_;
  (this->InternalTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  this->bUseInternalTextureOnly = false;
  this->SizeY = 0x20;
  return this;
}

// ~ULandscapeTextureBackedRenderTargetBase @ 14db13560

void __thiscall
ULandscapeTextureBackedRenderTargetBase::~ULandscapeTextureBackedRenderTargetBase
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  this->_padding_ = (longlong)&___7ULandscapeTextureBackedRenderTargetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyBackFromInternalTexture @ 14db15d40

void __thiscall
ULandscapeTextureBackedRenderTargetBase::CopyBackFromInternalTexture
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Public\\LandscapeTextureBackedRenderTarget.h"
             ,0x29,L"Pure virtual not implemented (%s)");
  return;
}

// CopyToInternalTexture @ 14db15f00

void __thiscall
ULandscapeTextureBackedRenderTargetBase::CopyToInternalTexture
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Public\\LandscapeTextureBackedRenderTarget.h"
             ,0x28,L"Pure virtual not implemented (%s)");
  return;
}

// GetInternalTexture @ 14db18870

UTexture2D * __thiscall
ULandscapeTextureBackedRenderTargetBase::GetInternalTexture
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  return (this->InternalTexture).field0_0x0.DebugPtr;
}

// GetInternalTextureFormat @ 14db18890

ETextureSourceFormat __thiscall
ULandscapeTextureBackedRenderTargetBase::GetInternalTextureFormat
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Public\\LandscapeTextureBackedRenderTarget.h"
             ,0x3a,L"Pure virtual not implemented (%s)");
  return TSF_G8;
}

// GetPrivateStaticClass @ 14db18fb0

UClass * __cdecl ULandscapeTextureBackedRenderTargetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeTextureBackedRenderTargetBase",
               &Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton,
               StaticRegisterNativesULandscapeTextureBackedRenderTargetBase,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeTextureBackedRenderTargetBase>,
               InternalVTableHelperCtorCaller<ULandscapeTextureBackedRenderTargetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.InnerSingleton;
}

// GetRenderTarget @ 14db192b0

UTextureRenderTarget2D * __thiscall
ULandscapeTextureBackedRenderTargetBase::GetRenderTarget
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  return (this->RenderTarget).field0_0x0.DebugPtr;
}

// GetRenderTargetFormat @ 14db192d0

ETextureRenderTargetFormat __thiscall
ULandscapeTextureBackedRenderTargetBase::GetRenderTargetFormat
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Public\\LandscapeTextureBackedRenderTarget.h"
             ,0x3b,L"Pure virtual not implemented (%s)");
  return RTF_R8;
}

// Initialize @ 14db1b310

void __thiscall
ULandscapeTextureBackedRenderTargetBase::Initialize(ULandscapeTextureBackedRenderTargetBase *this)

{
  return;
}

// IsCopyingBackAndForthAllowed @ 14db1b5a0

bool __thiscall
ULandscapeTextureBackedRenderTargetBase::IsCopyingBackAndForthAllowed
          (ULandscapeTextureBackedRenderTargetBase *this)

{
  bool bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((!bVar1) &&
       ((lVar2 == 0 ||
        (((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0 && (*(char *)(lVar2 + 0x18a) == '\x02')))))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
        if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
            _thread_safe_static_guard_0__ == -1) {
          pwVar3 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar3,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        return true;
      }
    }
  }
  return false;
}

// ReinitializeRenderTarget @ 14db1bbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ULandscapeTextureBackedRenderTargetBase::ReinitializeRenderTarget
          (ULandscapeTextureBackedRenderTargetBase *this,bool param_1)

{
  uchar uVar1;
  UClass *pUVar2;
  UTextureRenderTarget2D *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar3 = (this->RenderTarget).field0_0x0.DebugPtr;
  if ((pUVar3 == (UTextureRenderTarget2D *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = this;
    pUVar3 = (UTextureRenderTarget2D *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RenderTarget).field0_0x0.DebugPtr = pUVar3;
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar3,RF_Transactional);
  }
  uVar1 = (**(code **)(this->_padding_ + 0x2f8))(this);
  (((this->RenderTarget).field0_0x0.DebugPtr)->RenderTargetFormat).Value = uVar1;
  UTextureRenderTarget2D::InitAutoFormat
            ((this->RenderTarget).field0_0x0.DebugPtr,this->SizeX,this->SizeY);
  UTextureRenderTarget2D::UpdateResourceImmediate((this->RenderTarget).field0_0x0.DebugPtr,param_1);
  return;
}

// SetResolution @ 14db1c100

void __thiscall
ULandscapeTextureBackedRenderTargetBase::SetResolution
          (ULandscapeTextureBackedRenderTargetBase *this,int param_1,int param_2)

{
  return;
}

// SetUseInternalTextureOnly @ 14db1c400

void __thiscall
ULandscapeTextureBackedRenderTargetBase::SetUseInternalTextureOnly
          (ULandscapeTextureBackedRenderTargetBase *this,bool param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesULandscapeTextureBackedRenderTargetBase @ 14db1d550

void __cdecl
ULandscapeTextureBackedRenderTargetBase::
StaticRegisterNativesULandscapeTextureBackedRenderTargetBase(void)

{
  return;
}

