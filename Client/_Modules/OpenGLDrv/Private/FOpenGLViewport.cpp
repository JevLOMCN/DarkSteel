// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 10

// FOpenGLViewport @ 145be5fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FOpenGLViewport * __thiscall
FOpenGLViewport::FOpenGLViewport
          (FOpenGLViewport *this,FOpenGLDynamicRHI *param_1,void *param_2,uint param_3,uint param_4,
          bool param_5,EPixelFormat param_6)

{
  int *piVar1;
  FOpenGLDynamicRHI *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FOpenGLViewport *pFVar7;
  FPlatformOpenGLContext *pFVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  TArray<FOpenGLViewport_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  FOpenGLViewport **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  FOpenGLViewport *local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FOpenGLViewport *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FOpenGLViewport *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Viewport);
  this->OpenGLRHI = param_1;
  this->OpenGLContext = (FPlatformOpenGLContext *)0x0;
  this->_padding_ = (longlong)&___7FOpenGLViewport__6B_;
  this->PixelFormat = param_6;
  this->SizeX = 0;
  this->SizeY = 0;
  this->bIsFullscreen = false;
  this->bIsValid = true;
  (this->BackBuffer).Reference = (FOpenGLTexture *)0x0;
  (this->FrameSyncEvent).Ptr = (FOpenGLEventQuery *)0x0;
  (this->CustomPresent).Reference = (FRHICustomPresent *)0x0;
  if (param_1 == (FOpenGLDynamicRHI *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpenGLRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,0xc3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLViewport *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWindowHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,0xc5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLViewport *)(*pcVar4)();
      return pFVar7;
    }
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,199,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLViewport *)(*pcVar4)();
      return pFVar7;
    }
  }
  (*glGetError)();
  pFVar2 = this->OpenGLRHI;
  pTVar12 = &pFVar2->Viewports;
  pFVar3 = (pTVar12->AllocatorInstance).Data;
  local_a8[0] = this;
  if ((pFVar3 <= (FScriptContainerElement *)local_a8) &&
     (lVar11 = (longlong)(pFVar2->Viewports).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar3 + lVar11 * 8)) {
    local_c0 = (longlong)(pFVar2->Viewports).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar3;
    local_c8 = lVar11;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOpenGLViewport *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->Viewports).ArrayNum;
  piVar1 = &(pFVar2->Viewports).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar12->AllocatorInstance,piVar1);
  }
  (pFVar2->Viewports).ArrayNum = iVar6 + 1;
  *(FOpenGLViewport **)((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_a8[0];
  pFVar8 = PlatformCreateOpenGLContext(this->OpenGLRHI->PlatformDevice,param_2);
  this->OpenGLContext = pFVar8;
  Resize(this,param_3,param_4,param_5);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FOpenGLViewport::FOpenGLViewport_::__l2::TSTR_CreateFrameSyncEvent209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FOpenGLViewport::FOpenGLViewport'::__l2::TSTR_CreateFrameSyncEvent209>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar9);
    uVar13 = (ulonglong)local_38;
    if (2 < uVar13) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FOpenGLViewport *)(*pcVar4)();
        return pFVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar10 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar10 = local_40;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar10 = local_70;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  return this;
}

// ~FOpenGLViewport @ 145bea820

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLViewport::~FOpenGLViewport(FOpenGLViewport *this)

{
  int iVar1;
  FOpenGLTexture *pFVar2;
  FOpenGLEventQuery *pFVar3;
  FPlatformOpenGLContext *pFVar4;
  FOpenGLDynamicRHI *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHIResource *this_00;
  code *pcVar7;
  bool bVar8;
  HGLRC pHVar9;
  FOpenGLViewport *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FOpenGLViewport *local_38 [2];
  
  this->_padding_ = (longlong)&___7FOpenGLViewport__6B_;
  pHVar9 = wglGetCurrentContext();
  if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsFullscreen != false) {
    ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
  }
  pFVar2 = (this->BackBuffer).Reference;
  if (pFVar2 != (FOpenGLTexture *)0x0) {
    (this->BackBuffer).Reference = (FOpenGLTexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if (((this->BackBuffer).Reference != (FOpenGLTexture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValidRef(BackBuffer)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                         ,0xe5,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->FrameSyncEvent).Ptr;
  (this->FrameSyncEvent).Ptr = (FOpenGLEventQuery *)0x0;
  TDefaultDelete<FOpenGLEventQuery>::operator()
            ((TDefaultDelete<FOpenGLEventQuery> *)&this->FrameSyncEvent,pFVar3);
  pFVar4 = this->OpenGLContext;
  PlatformReleaseOpenGLContext(this->OpenGLRHI->PlatformDevice,pFVar4);
  ::operator_delete(pFVar4,0x30);
  pFVar5 = this->OpenGLRHI;
  this->OpenGLContext = (FPlatformOpenGLContext *)0x0;
  pFVar6 = (pFVar5->Viewports).AllocatorInstance.Data;
  local_38[0] = this;
  if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar6 + (longlong)(pFVar5->Viewports).ArrayMax * 8))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar1 = (pFVar5->Viewports).ArrayNum;
  if (iVar1 != 0) {
    pFVar6 = (pFVar5->Viewports).AllocatorInstance.Data;
    iVar14 = 0;
    bVar8 = *(FOpenGLViewport **)pFVar6 != local_38[0];
    lVar11 = 0;
    pFVar10 = local_38[0];
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar11 = lVar11 + 1;
        iVar13 = iVar13 + 1;
        if (iVar1 <= lVar11) break;
      } while (bVar8 == (*(FOpenGLViewport **)(pFVar6 + lVar11 * 8) != pFVar10));
      if (bVar8 != false) {
        if (iVar14 != iVar12) {
          memmove(pFVar6 + (longlong)iVar14 * 8,pFVar6 + (longlong)iVar12 * 8,
                  (longlong)(iVar13 - iVar12) << 3);
          pFVar10 = local_38[0];
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar12 = iVar13;
    } while (lVar11 < iVar1);
    (pFVar5->Viewports).ArrayNum = iVar14;
  }
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  pFVar3 = (this->FrameSyncEvent).Ptr;
  if (pFVar3 != (FOpenGLEventQuery *)0x0) {
    pHVar9 = wglGetCurrentContext();
    if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    (*glDeleteSync)(pFVar3->Sync);
    ::operator_delete(pFVar3,8);
  }
  pFVar2 = (this->BackBuffer).Reference;
  if (pFVar2 != (FOpenGLTexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145beb580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  uVar1 = *(undefined8 *)this;
  local_res8 = uVar1;
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar2;
    *(undefined8 **)&param_1->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::FOpenGLViewport'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = L"TRHILambdaCommand";
    puVar2[2] = uVar1;
    return;
  }
  ``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (&local_res8,param_1);
  return;
}

// operator() @ 145bed690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  FOpenGLTexture *this_01;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  ERHIAccess EVar4;
  FRHITextureCreateDesc *pFVar5;
  FOpenGLTexture *pFVar6;
  FOpenGLTexture *pFVar7;
  undefined8 *puVar8;
  undefined1 auStack_3a8 [32];
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368;
  undefined1 uStack_367;
  undefined6 uStack_366;
  undefined4 local_360;
  FRHITextureDesc local_358;
  wchar_t *local_308;
  ERHIAccess local_300;
  ERHITextureInitAction local_2fc;
  FResourceBulkDataInterface *local_2f8;
  FName local_2f0;
  FName local_2e8;
  FRHITextureDesc local_2d8;
  wchar_t *local_288;
  ERHIAccess local_280;
  ERHITextureInitAction local_27c;
  FResourceBulkDataInterface *local_278;
  FName local_270;
  FName local_268;
  undefined1 local_258 [80];
  wchar_t *local_208;
  ERHIAccess local_200;
  ERHITextureInitAction local_1fc;
  FResourceBulkDataInterface *local_1f8;
  FName local_1f0;
  FName local_1e8;
  FOpenGLTextureDesc local_1e0;
  undefined1 local_1c8 [80];
  wchar_t *local_178;
  ERHIAccess local_170;
  ERHITextureInitAction local_16c;
  FResourceBulkDataInterface *local_168;
  FName local_160;
  FName local_158;
  FOpenGLTextureDesc local_150;
  FRHITextureCreateDesc local_138;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_360 = 0;
  if (*(longlong **)(*(longlong *)this + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*(longlong *)this + 0x48) + 0x10))();
  }
  this_00 = *(FRHIResource **)(*(longlong *)this + 0x38);
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x38) = 0;
    FRHIResource::Release(this_00);
  }
  if (FOpenGL3::bAndroidGLESCompatibilityMode == false) {
    pFVar6 = (FOpenGLTexture *)0x0;
  }
  else {
    pFVar5 = FRHITextureCreateDesc::Create2D
                       (&local_138,L"PlatformCreateBuiltinBackBuffer",*(int *)((longlong)this + 8),
                        *(int *)((longlong)this + 0xc),PF_B8G8R8A8);
    uVar2 = FClearValueBinding::Transparent.Value._4_8_;
    pFVar5->_padding_ = FClearValueBinding::Transparent._0_8_;
    pFVar5->_padding_ = uVar2;
    *(float *)&pFVar5->_padding_ = FClearValueBinding::Transparent.Value.Color[3];
    pFVar5->_padding_ = 0x40003;
    if (pFVar5->InitialState == None) {
      EVar4 = RHIGetDefaultResourceState
                        (Presentable|ResolveTargetable|RenderTargetable,
                         pFVar5->BulkData != (FResourceBulkDataInterface *)0x0);
      pFVar5->InitialState = EVar4;
    }
    FRHITextureDesc::FRHITextureDesc(&local_358,(FRHITextureDesc *)pFVar5);
    local_308 = pFVar5->DebugName;
    local_300 = pFVar5->InitialState;
    local_2fc = pFVar5->InitAction;
    local_2f8 = pFVar5->BulkData;
    local_2f0 = pFVar5->ClassName;
    local_2e8 = pFVar5->OwnerName;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    pFVar6 = ::operator_new(0x198);
    if (pFVar6 == (FOpenGLTexture *)0x0) {
      pFVar6 = (FOpenGLTexture *)0x0;
    }
    else {
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_258,&local_358);
      local_208 = local_308;
      local_200 = local_300;
      local_1fc = local_2fc;
      local_1f0 = local_2f0;
      local_1f8 = local_2f8;
      local_1e8 = local_2e8;
      FOpenGLTextureDesc::FOpenGLTextureDesc(&local_1e0,&local_358);
      pFVar6 = FOpenGLTexture::FOpenGLTexture(pFVar6,(FOpenGLTextureCreateDesc *)local_258);
      if ((ForElementType<EPixelFormat>)local_258._64_8_ != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_258._64_8_);
      }
    }
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FOpenGLTexture::Initialize(pFVar6,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    if (local_358.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_358.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar7 = *(FOpenGLTexture **)(*(longlong *)this + 0x38);
  if (pFVar7 != pFVar6) {
    *(FOpenGLTexture **)(*(longlong *)this + 0x38) = pFVar6;
    if (pFVar6 != (FOpenGLTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar6);
    }
    if (pFVar7 != (FOpenGLTexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  if (*(longlong *)(*(longlong *)this + 0x38) == 0) {
    pFVar5 = FRHITextureCreateDesc::Create2D
                       (&local_b8,L"FOpenGLViewport",*(int *)((longlong)this + 8),
                        *(int *)((longlong)this + 0xc),*(EPixelFormat *)(*(longlong *)this + 0x31));
    uVar2 = FClearValueBinding::Transparent.Value._4_8_;
    pFVar5->_padding_ = FClearValueBinding::Transparent._0_8_;
    pFVar5->_padding_ = uVar2;
    *(float *)&pFVar5->_padding_ = FClearValueBinding::Transparent.Value.Color[3];
    pFVar5->_padding_ = 3;
    if (pFVar5->InitialState == None) {
      EVar4 = RHIGetDefaultResourceState
                        (ResolveTargetable|RenderTargetable,
                         pFVar5->BulkData != (FResourceBulkDataInterface *)0x0);
      pFVar5->InitialState = EVar4;
    }
    FRHITextureDesc::FRHITextureDesc(&local_2d8,(FRHITextureDesc *)pFVar5);
    local_288 = pFVar5->DebugName;
    local_280 = pFVar5->InitialState;
    local_27c = pFVar5->InitAction;
    local_278 = pFVar5->BulkData;
    local_270 = pFVar5->ClassName;
    local_268 = pFVar5->OwnerName;
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
    pFVar7 = ::operator_new(0x198);
    pFVar6 = (FOpenGLTexture *)0x0;
    if (pFVar7 != (FOpenGLTexture *)0x0) {
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_1c8,&local_2d8);
      local_178 = local_288;
      local_170 = local_280;
      local_16c = local_27c;
      local_160 = local_270;
      local_168 = local_278;
      local_158 = local_268;
      FOpenGLTextureDesc::FOpenGLTextureDesc(&local_150,&local_2d8);
      pFVar6 = FOpenGLTexture::FOpenGLTexture(pFVar7,(FOpenGLTextureCreateDesc *)local_1c8);
    }
    this_01 = *(FOpenGLTexture **)(*(longlong *)this + 0x38);
    if (this_01 != pFVar6) {
      *(FOpenGLTexture **)(*(longlong *)this + 0x38) = pFVar6;
      if (pFVar6 != (FOpenGLTexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar6);
      }
      if (this_01 != (FOpenGLTexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if ((pFVar7 != (FOpenGLTexture *)0x0) &&
       ((ForElementType<EPixelFormat>)local_1c8._64_8_ != (ForElementType<EPixelFormat>)0x0)) {
      FMemory::Free((void *)local_1c8._64_8_);
    }
    FOpenGLTexture::Initialize
              (*(FOpenGLTexture **)(*(longlong *)this + 0x38),(FRHICommandListBase *)param_1);
    if (local_2d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_2d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  local_378 = *(undefined8 *)this;
  uStack_370 = *(undefined4 *)((longlong)this + 8);
  uStack_36c = *(undefined4 *)((longlong)this + 0xc);
  local_368 = *(undefined1 *)((longlong)this + 0x10);
  uStack_367 = *(undefined1 *)((longlong)this + 0x11);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::Resize'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[2] = local_378;
    puVar8[3] = CONCAT44(uStack_36c,uStack_370);
    puVar8[5] = L"TRHILambdaCommand";
    puVar8[4] = CONCAT62(uStack_366,CONCAT11(uStack_367,local_368));
  }
  else {
    ``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (&local_378,param_1);
  }
  return;
}

// GetCustomPresent @ 145c01f80

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FRHICustomPresent * __thiscall FOpenGLViewport::GetCustomPresent(FOpenGLViewport *this)

{
  return (this->CustomPresent).Reference;
}

// GetNativeWindow @ 145c02a00

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall FOpenGLViewport::GetNativeWindow(FOpenGLViewport *this,void **param_1)

{
  FPlatformOpenGLContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  pFVar1 = this->OpenGLContext;
  if ((pFVar1 == (FPlatformOpenGLContext *)0x0) || (pFVar1->WindowHandle == (HWND__ *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context && Context->WindowHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x34b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return pFVar1;
}

// IssueFrameEvent @ 145c0b160

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLViewport::IssueFrameEvent(FOpenGLViewport *this)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLEventQuery::IssueEvent((this->FrameSyncEvent).Ptr);
  return;
}

// Resize @ 145c2a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FOpenGLViewport::Resize(FOpenGLViewport *this,uint param_1,uint param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  FOpenGLViewport *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLViewport.cpp"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_1 != this->SizeX) || (param_2 != this->SizeY)) || (param_3 != this->bIsFullscreen)) {
    uStack_a7 = this->bIsFullscreen;
    this->bIsFullscreen = param_3;
    local_98[0] = (code *)0x0;
    this->SizeX = param_1;
    this->SizeY = param_2;
    local_b8 = this;
    uStack_b0 = param_1;
    uStack_ac = param_2;
    local_a8 = param_3;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FOpenGLViewport::Resize'::`2'::<lambda_1>,1,1>::
                         _vftable_;
    local_70[1] = (code *)local_b8;
    local_70[2] = (code *)CONCAT44(uStack_ac,uStack_b0);
    local_70[3] = (code *)CONCAT62(uStack_a6,CONCAT11(uStack_a7,local_a8));
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOpenGLViewport::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FOpenGLViewport::Resize_::__l2::TSTR_ResizeViewport263>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FOpenGLViewport::Resize'::__l2::TSTR_ResizeViewport263>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar3);
      uVar5 = (ulonglong)local_38;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar4 = local_40;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar4 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar4 = local_70;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// SetCustomPresent @ 145c2d0c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FOpenGLViewport::SetCustomPresent(FOpenGLViewport *this,FRHICustomPresent *param_1)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)param_1) {
    (this->CustomPresent).Reference = param_1;
    if (param_1 != (FRHICustomPresent *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      return;
    }
  }
  return;
}

// WaitForFrameEventCompletion @ 145c38a70

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLViewport::WaitForFrameEventCompletion(FOpenGLViewport *this)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FOpenGLEventQuery::WaitForCompletion((this->FrameSyncEvent).Ptr);
  return;
}

