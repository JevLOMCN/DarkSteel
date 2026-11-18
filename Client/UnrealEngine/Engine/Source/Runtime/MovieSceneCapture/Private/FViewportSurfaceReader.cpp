// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 8

// FViewportSurfaceReader @ 146bd8190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FViewportSurfaceReader * __thiscall
FViewportSurfaceReader::FViewportSurfaceReader
          (FViewportSurfaceReader *this,EPixelFormat param_1,TIntPoint<int> param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  FViewportSurfaceReader *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined4 uStackX_1c;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88 [2];
  FViewportSurfaceReader *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58 [2];
  FViewportSurfaceReader *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::`2'::<lambda_1>,1,0>::
                 _vftable_;
  uStackX_1c = param_2.field0_0x0._4_4_;
  this->bEnabled = (FThreadSafeBool)0x0;
  (this->ReadbackTexture).Reference = (FRHITexture *)0x0;
  (this->CaptureRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CaptureRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_88[1]._4_4_ = uStackX_1c;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this->AvailableEvent = (FEvent *)0x0;
  this->PixelFormat = param_1;
  this->bQueuedForCapture = false;
  local_70 = (undefined ***)0x0;
  local_88[1]._0_4_ = param_2.field0_0x0._0_4_;
  local_78 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewportSurfaceReader::Resize_::__l2::TSTR_CreateCaptureFrameTexture58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58[1]._4_4_ = local_88[1]._4_4_;
    local_58[1]._0_4_ = local_88[1]._0_4_;
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58[0] = local_88[0];
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewportSurfaceReader::Resize'::__l2::TSTR_CreateCaptureFrameTexture58>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FViewportSurfaceReader *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return this;
}

// ~FViewportSurfaceReader @ 146bd92f0

void __thiscall FViewportSurfaceReader::~FViewportSurfaceReader(FViewportSurfaceReader *this)

{
  FEvent *pFVar1;
  FRHITexture *pFVar2;
  
  pFVar1 = this->AvailableEvent;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  pFVar2 = (this->ReadbackTexture).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    (this->ReadbackTexture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->ReadbackTexture).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
    return;
  }
  return;
}

// operator() @ 146bd9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FViewportSurfaceReader::Resize'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  TRefCountPtr<FRHITexture> TVar1;
  FRHITexture *pFVar2;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [24];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined1 local_176;
  undefined1 local_175;
  undefined2 local_174;
  wchar_t *local_168;
  ERHIAccess local_160;
  ERHITextureInitAction local_15c;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FResourceBulkDataInterface *local_d8;
  uint local_d0;
  uint local_cc;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_17c = 0x10001;
  local_1b8._16_8_ = 0;
  local_198 = 0;
  local_1a0 = 1;
  local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_15c = BulkData;
  local_190 = 0;
  local_158 = (FResourceBulkDataInterface *)0x1514197d0;
  local_1b8._0_4_ = *(undefined4 *)this;
  local_1b8._4_4_ = *(undefined4 *)((longlong)this + 4);
  local_184 = *(undefined8 *)this;
  local_188 = 0;
  local_178 = 0x101;
  local_176 = 0;
  local_175 = *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x30);
  local_174 = 0xff00;
  local_168 = (wchar_t *)0x0;
  local_160 = None;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_140 = 0;
  local_138 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1b8 + 0x10));
  local_d8 = local_158;
  local_d0 = local_150.ComparisonIndex.Value;
  local_cc = local_150.Number;
  local_c8 = local_148;
  local_c0 = local_140;
  local_b8 = local_138;
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free(local_168);
  }
  local_128.Flags = CPUReadback;
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
  local_58 = local_d8;
  local_50 = local_d0;
  local_4c = local_cc;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar1 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_1b8);
  pFVar2 = (FRHITexture *)(*(longlong *)((longlong)this + 8) + 0x10);
  if (pFVar2 != TVar1.Reference) {
    this_00 = (FRHIResource *)pFVar2->_padding_;
    pFVar2->_padding_ = (TVar1.Reference)->_padding_;
    (TVar1.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)CONCAT44(local_1b8._4_4_,local_1b8._0_4_) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(local_1b8._4_4_,local_1b8._0_4_));
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// BlockUntilAvailable @ 146bdbb90

void __thiscall FViewportSurfaceReader::BlockUntilAvailable(FViewportSurfaceReader *this)

{
  FEvent *pFVar1;
  
  pFVar1 = this->AvailableEvent;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  return;
}

// Initialize @ 146be1840

void __thiscall FViewportSurfaceReader::Initialize(FViewportSurfaceReader *this)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  
  if (this->AvailableEvent != (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AvailableEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->AvailableEvent = pFVar3;
  return;
}

// Reset @ 146be5820

void __thiscall FViewportSurfaceReader::Reset(FViewportSurfaceReader *this)

{
  FEvent *pFVar1;
  
  if (this->AvailableEvent != (FEvent *)0x0) {
    (**(code **)(this->AvailableEvent->_padding_ + 0x10))();
  }
  pFVar1 = this->AvailableEvent;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  this->bQueuedForCapture = false;
  return;
}

// Resize @ 146be5870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FViewportSurfaceReader::Resize(FViewportSurfaceReader *this,uint param_1,uint param_2)

{
  FRHITexture *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  uint uStack_70;
  uint uStack_6c;
  FViewportSurfaceReader *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [2];
  FViewportSurfaceReader *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (this->ReadbackTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->ReadbackTexture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  uStack_70 = param_1;
  uStack_6c = param_2;
  local_68 = this;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FViewportSurfaceReader::Resize_::__l2::TSTR_CreateCaptureFrameTexture58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_48[1]._4_4_ = uStack_6c;
    local_48[1]._0_4_ = uStack_70;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FViewportSurfaceReader::Resize'::__l2::TSTR_CreateCaptureFrameTexture58>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
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
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ResolveRenderTarget @ 146be5e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FViewportSurfaceReader::ResolveRenderTarget
          (FViewportSurfaceReader *this,FViewportSurfaceReader *param_1,
          TRefCountPtr<FRHITexture> *param_2,TFunction<void___cdecl(FColor_*,int,int)> *param_3)

{
  undefined1 *puVar1;
  EPixelFormat EVar2;
  int iVar3;
  int iVar4;
  FRHITexture *pFVar5;
  FShaderMapResource *this_00;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FRHITexture> *pTVar8;
  FViewportSurfaceReader *pFVar9;
  bool bVar10;
  byte bVar11;
  FModuleManager *this_01;
  FRHICommandListBase *this_02;
  longlong lVar12;
  FRHITextureDesc *pFVar13;
  IRHICommandContext *pIVar14;
  FGlobalShaderMap *this_03;
  FShaderType *pFVar15;
  FName FVar16;
  atomic<FRHIShader_*> aVar17;
  FRHIPixelShader *pFVar18;
  FRHICommandBase *pFVar19;
  undefined8 uVar20;
  longlong *plVar21;
  TIntPoint<int>_u_0 TVar22;
  undefined1 auStackY_518 [32];
  FLLMScope local_4a0;
  FLLMScope local_49c;
  TRefCountPtr<FRHITexture> *local_498;
  TRefCountPtr<IPooledRenderTarget> local_490;
  int local_488;
  undefined4 local_480;
  undefined4 local_478;
  FName local_470;
  FRHIResource *local_468;
  FRHISamplerState *local_460;
  undefined8 local_458;
  TIntPoint<int>_u_0 local_450;
  IModuleInterface *local_448;
  FName local_440;
  FRHITexture *local_438;
  FViewportSurfaceReader *local_430;
  FMemScope local_428;
  undefined8 local_420;
  FMemScope local_418 [2];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_408;
  TShaderRefBase<FScreenPS,FShaderMapPointerTable> local_3f8;
  TIntVector3<int>_u_0 local_3e8;
  undefined8 local_3dc;
  int local_3d4;
  undefined8 local_3d0;
  int local_3c8;
  undefined8 local_3c4;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined4 local_3b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a8;
  FShader *local_398;
  FShaderMapBase *local_390;
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  FString local_378;
  FString local_368;
  FString local_358;
  FGraphicsPipelineStateInitializer local_348;
  FRHIRenderPassInfo local_268;
  FPooledRenderTargetDesc local_168;
  undefined1 local_108 [80];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_498 = param_2;
  local_430 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&RendererModuleName,"Renderer");
    _Init_thread_footer(&::_TSS0);
  }
  local_470 = RendererModuleName;
  this_01 = FModuleManager::Get();
  bVar10 = FModuleManager::IsModuleLoaded(this_01,local_470);
  if (!bVar10) {
    ::FName::ToString(&local_470,&local_378);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ModuleManager.IsModuleLoaded(ModuleName)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                        ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_448 = FModuleManager::GetModule(this_01,local_470);
  this->bQueuedForCapture = true;
  this_02 = (FRHICommandListBase *)GetImmediateCommandList_ForRenderCommand();
  lVar12 = (**(code **)(((this->ReadbackTexture).Reference)->_padding_ + 0x20))();
  iVar3 = *(int *)(lVar12 + 0x28);
  local_488 = iVar3;
  lVar12 = (**(code **)(((this->ReadbackTexture).Reference)->_padding_ + 0x20))();
  iVar4 = *(int *)(lVar12 + 0x24);
  lVar12 = (**(code **)(((this->ReadbackTexture).Reference)->_padding_ + 0x20))();
  TVar22._s_0.Y = iVar3;
  TVar22._s_0.X = iVar4;
  EVar2 = *(EPixelFormat *)(lVar12 + 0x33);
  if ((iVar4 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtent.X",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x6b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar3 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtent.Y",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x6c,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_168.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
  local_168.UAVFormat = PF_Unknown;
  local_168.DebugName = L"UnknownTexture2D";
  local_168.NumSamples = '\x01';
  local_168.FastVRAMPercentage = 0xff;
  local_168.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_168.AliasableFormats.ArrayNum = 0;
  local_168.AliasableFormats.ArrayMax = 1;
  local_168.Depth = 0;
  local_168.ArraySize = 1;
  local_168.field13_0x58.PackedBits = '\0';
  local_168.NumMips = '\x01';
  local_168.Flags = RenderTargetable;
  local_168.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
  local_168.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
  local_168.Format = EVar2;
  local_168.Extent.field0_0x0 = TVar22;
  if (((iVar4 == 0) || (iVar3 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewDesc.Is2DTexture()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x7a,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_490.Reference = (IPooledRenderTarget *)0x0;
  pFVar13 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_108,&local_168);
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,this_02,pFVar13,&local_490,L"ResampleTexture");
  if ((void *)local_108._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._64_8_);
  }
  if ((local_490.Reference == (IPooledRenderTarget *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResampleTexturePooledRenderTarget",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                          ,0x77,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = ((local_490.Reference)->RenderTargetItem).TargetableTexture.Reference;
  local_268.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_268.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_268.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_268.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_268.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_268.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_268.ResolveRect.X1 = -1;
  local_268.ResolveRect.Y1 = -1;
  local_268.ResolveRect.X2 = -1;
  local_268.ResolveRect.Y2 = -1;
  local_268.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_268.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_268.NopAccess = None;
  local_268.NumOcclusionQueries = 0;
  local_268.bOcclusionQueries = false;
  local_268.MultiViewCount = '\0';
  local_268.SubpassHint = None;
  local_438 = pFVar5;
  if ((pFVar5 == (FRHITexture *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ColorRT",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x14b0,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_268.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_268.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_268.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_268.ColorRenderTargets.Elements[0].Action = Load_Store;
  local_268.ColorRenderTargets.Elements[0].RenderTarget = pFVar5;
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)this_02,&local_268,L"FrameGrabberResolveRenderTarget");
  if ((GRHICommandList.bLatchedBypass == false) || ((this_02->PersistentState).bImmediate == '\0'))
  {
    pFVar19 = FMemStackBase::Alloc((FMemStackBase *)this_02,0x28,8);
    this_02->NumCommands = this_02->NumCommands + 1;
    *this_02->CommandLink = pFVar19;
    this_02->CommandLink = &pFVar19->Next;
    pFVar19->Next = (FRHICommandBase *)0x0;
    pFVar19->_padding_ = (longlong)&___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)&pFVar19[1].Next + 4) = (float)iVar4;
    *(float *)&pFVar19[2]._padding_ = (float)iVar3;
    pFVar19[1]._padding_ = 0;
    *(undefined4 *)&pFVar19[1].Next = 0;
    *(undefined4 *)((longlong)&pFVar19[2]._padding_ + 4) = 0x3f800000;
  }
  else {
    pIVar14 = FRHICommandListBase::GetContext(this_02);
    pcVar6 = *(code **)(pIVar14->_padding_ + 0x1a0);
    (*pcVar6)(pIVar14,pcVar6,0,0);
  }
  local_348.RenderTargetsEnabled = 0;
  local_348.RenderTargetFormats.Elements[0] = '\0';
  local_348.RenderTargetFormats.Elements[1] = '\0';
  local_348.RenderTargetFormats.Elements[2] = '\0';
  local_348.RenderTargetFormats.Elements[3] = '\0';
  local_348.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_348.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_348.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_348.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_348.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_348.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_348.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_348.BlendState = (FRHIBlendState *)0x0;
  local_348.RasterizerState = (FRHIRasterizerState *)0x0;
  local_348.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_348.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_348.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_348.RenderTargetFlags.Elements[0] = None;
  local_348.RenderTargetFlags.Elements[1] = None;
  local_348.RenderTargetFlags.Elements[2] = None;
  local_348.RenderTargetFlags.Elements[3] = None;
  local_348.RenderTargetFlags.Elements[4] = None;
  local_348.RenderTargetFlags.Elements[5] = None;
  local_348.RenderTargetFlags.Elements[6] = None;
  local_348.RenderTargetFlags.Elements[7] = None;
  local_348.RenderTargetFormats.Elements[4] = '\0';
  local_348.RenderTargetFormats.Elements[5] = '\0';
  local_348.RenderTargetFormats.Elements[6] = '\0';
  local_348.RenderTargetFormats.Elements[7] = '\0';
  local_348.DepthStencilTargetFormat = PF_Unknown;
  local_348.DepthStencilTargetFlag = None;
  local_348.DepthTargetLoadAction = ENoAction;
  local_348.DepthTargetStoreAction = ENoAction;
  local_348.StencilTargetLoadAction = ENoAction;
  local_348.StencilTargetStoreAction = ENoAction;
  local_348.DepthStencilAccess.Value = DepthNop;
  local_348.NumSamples = 0;
  local_348.SubpassHint = None;
  local_348.SubpassIndex = '\0';
  local_348.ConservativeRasterization = Disabled;
  local_348.bDepthBounds = false;
  local_348.MultiViewCount = '\0';
  local_348.bHasFragmentDensityAttachment = false;
  local_348.bAllowVariableRateShading = true;
  local_348.ShadingRate = VRSSR_1x1;
  local_348.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_348.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)this_02,&local_348);
  local_348.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_348.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_348.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  this_03 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar15 = (FShaderType *)FScreenVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_03,&local_408,pFVar15,0);
  if (local_408.ShaderContent == (FShader *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_388);
    ::FName::ToString((FName *)FVar16,&local_368);
    FScreenVS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FScreenVS::GetStaticType();
  pFVar15 = (FShaderType *)FScreenPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_03,&local_3a8,pFVar15,0);
  if ((FScreenPS *)local_3a8.ShaderContent == (FScreenPS *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_380);
    ::FName::ToString((FName *)FVar16,&local_358);
    FScreenPS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FScreenPS::GetStaticType();
  local_348.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  aVar17 = (atomic<FRHIShader_*>)0x0;
  local_3f8.ShaderContent = (FScreenPS *)local_3a8.ShaderContent;
  local_3f8.ShaderMap = local_3a8.ShaderMap;
  if (local_408.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_408.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                            ,0x426,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    aVar17 = (this_00->RHIShaders).Ptr[(local_408.ShaderContent)->ResourceIndex];
    if ((aVar17 == (atomic<FRHIShader_*>)0x0) &&
       (aVar17 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,(local_408.ShaderContent)->ResourceIndex,true),
       aVar17 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_408.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointerTable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x9b4,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FShader::GetType(local_408.ShaderContent,(local_408.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar17 = (atomic<FRHIShader_*>)0x0;
    }
  }
  local_348.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar17;
  local_348.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_3f8,true);
  local_348.PrimitiveType = PT_TriangleList;
  SetGraphicsPipelineState((FRHICommandList *)this_02,&local_348,0,CheckApply,true);
  pTVar8 = local_498;
  lVar12 = (**(code **)(local_498->Reference->_padding_ + 0x20))();
  if ((*(int *)(lVar12 + 0x24) == (this->WindowSize).field0_0x0._s_0.X) &&
     (lVar12 = (**(code **)(pTVar8->Reference->_padding_ + 0x20))(),
     *(int *)(lVar12 + 0x28) == (this->WindowSize).field0_0x0._s_0.Y)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  lVar12 = (**(code **)(local_498->Reference->_padding_ + 0x20))();
  pTVar8 = local_498;
  if ((iVar4 == *(int *)(lVar12 + 0x24)) &&
     (lVar12 = (**(code **)(local_498->Reference->_padding_ + 0x20))(),
     local_488 == *(int *)(lVar12 + 0x28))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((bVar10) ||
     (local_460 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                  ::StaticResource.StateRHI.Reference, bVar7)) {
    local_460 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI.Reference;
  }
  pFVar18 = TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_3f8,true);
  SetShaderParametersLegacy<FRHICommandListImmediate,FScreenPS,FRHIPixelShader,FRHISamplerState_*_&,TRefCountPtr<FRHITexture>_const_&>
            ((FRHICommandListImmediate *)this_02,&local_3f8,pFVar18,&local_460,pTVar8);
  (**(code **)(pTVar8->Reference->_padding_ + 0x20))();
  (**(code **)(pTVar8->Reference->_padding_ + 0x20))();
  (**(code **)(pTVar8->Reference->_padding_ + 0x20))();
  (**(code **)(pTVar8->Reference->_padding_ + 0x20))();
  local_450 = (this->CaptureRect).field0_0x0._s_0.Max.field0_0x0;
  local_398 = local_408.ShaderContent;
  local_390 = local_408.ShaderMap;
  (**(code **)((longlong)*local_448 + 0xe8))(local_448,this_02,0,0);
  if (((this_02->PersistentState).bInsideRenderPass == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInsideRenderPass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x10c5,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this_02->PersistentState).bInsideComputePass != '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsInsideComputePass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x10c6,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar11 = (this_02->PersistentState).field_0xdb;
  if ((this_02->PersistentState).bInsideOcclusionQueryBatch != '\0') {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,this_02,1);
    (this_02->PersistentState).bInsideOcclusionQueryBatch = '\0';
    bVar11 = (this_02->PersistentState).field_0xdb;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar11 & 0x20) == 0)) {
    pFVar19 = FMemStackBase::Alloc((FMemStackBase *)this_02,0x10,8);
    this_02->NumCommands = this_02->NumCommands + 1;
    *this_02->CommandLink = pFVar19;
    this_02->CommandLink = &pFVar19->Next;
    pFVar19->Next = (FRHICommandBase *)0x0;
    pFVar19->_padding_ = (longlong)&___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar14 = FRHICommandListBase::GetContext(this_02);
    (**(code **)(pIVar14->_padding_ + 0x250))(pIVar14);
  }
  (this_02->PersistentState).bInsideRenderPass = '\0';
  (this_02->PersistentState).SubpassHint = None;
  (this_02->PersistentState).SubpassIndex = '\0';
  ::FName::FName(&local_440,L"FrameGrabberReadbackFence");
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_468,&local_440);
  local_3e8._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_3dc = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_3d0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_3e8._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_3d4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_3c8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_3c4 = 0;
  local_3bc = 1;
  local_3b4 = 0;
  local_3b0 = 1;
  TransitionAndCopyTexture
            ((FRHICommandList *)this_02,local_438,(this->ReadbackTexture).Reference,
             (FRHICopyTextureInfo *)&local_3e8._s_0);
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,this_02);
  pFVar9 = local_430;
  if (local_430 != (FViewportSurfaceReader *)0x0) {
    pFVar5 = (local_430->ReadbackTexture).Reference;
    local_458 = 0;
    FLLMScope::FLLMScope(&local_4a0,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_428,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x428))(GDynamicRHI,this_02,pFVar5,0xffffffff);
    FMemScope::~FMemScope(&local_428);
    FLLMScope::~FLLMScope(&local_4a0);
    local_480 = 0;
    local_478 = 0;
    local_420 = local_458;
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar6 = *(code **)param_3;
    plVar21 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar21 = *(longlong **)&param_3->field_0x28;
    }
    uVar20 = (**(code **)(*plVar21 + 8))();
    (*pcVar6)(uVar20,&local_420);
    pFVar5 = (pFVar9->ReadbackTexture).Reference;
    FLLMScope::FLLMScope(&local_49c,Textures,false,None,Default,true);
    FMemScope::FMemScope(local_418,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x430))(GDynamicRHI,this_02,pFVar5,0xffffffff);
    FMemScope::~FMemScope(local_418);
    FLLMScope::~FLLMScope(&local_49c);
    (**(code **)(pFVar9->AvailableEvent->_padding_ + 0x10))();
  }
  if (local_468 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_468);
  }
  if (local_268.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_268.ShadingRateTexture.Reference);
  }
  if (local_490.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_490.Reference)->_padding_ + 0x38))();
  }
  if (local_168.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_168.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (*(longlong *)param_3 != 0) {
    plVar21 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar21 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return;
}

