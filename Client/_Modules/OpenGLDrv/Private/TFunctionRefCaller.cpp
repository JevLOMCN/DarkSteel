// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 8

// Call @ 145bf4de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStackX_8;
  
  uVar1 = *(undefined8 *)param_1;
  uStackX_8 = uVar1;
  if (((!GRHICommandList.bLatchedBypass) || ((param_2->field_0x29b & 0x20) == 0)) &&
     (param_2->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar2;
    *(undefined8 **)&param_2->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::FOpenGLViewport'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = L"TRHILambdaCommand";
    puVar2[2] = uVar1;
    return;
  }
  ``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (&uStackX_8,param_2);
  return;
}

// Call @ 145bf4df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateWritableTextureInitializer'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145bf4e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenGLViewport::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  FOpenGLTexture *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  ERHIAccess EVar4;
  FRHITextureCreateDesc *pFVar5;
  FOpenGLTexture *pFVar6;
  FOpenGLTexture *pFVar7;
  undefined8 *puVar8;
  undefined1 auStack_3a8 [32];
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 uStack_368;
  undefined1 uStack_367;
  undefined6 uStack_366;
  undefined4 uStack_360;
  FRHITextureDesc FStack_358;
  wchar_t *pwStack_308;
  ERHIAccess EStack_300;
  ERHITextureInitAction EStack_2fc;
  FResourceBulkDataInterface *pFStack_2f8;
  FName FStack_2f0;
  FName FStack_2e8;
  FRHITextureDesc FStack_2d8;
  wchar_t *pwStack_288;
  ERHIAccess EStack_280;
  ERHITextureInitAction EStack_27c;
  FResourceBulkDataInterface *pFStack_278;
  FName FStack_270;
  FName FStack_268;
  undefined1 auStack_258 [80];
  wchar_t *pwStack_208;
  ERHIAccess EStack_200;
  ERHITextureInitAction EStack_1fc;
  FResourceBulkDataInterface *pFStack_1f8;
  FName FStack_1f0;
  FName FStack_1e8;
  FOpenGLTextureDesc FStack_1e0;
  undefined1 auStack_1c8 [80];
  wchar_t *pwStack_178;
  ERHIAccess EStack_170;
  ERHITextureInitAction EStack_16c;
  FResourceBulkDataInterface *pFStack_168;
  FName FStack_160;
  FName FStack_158;
  FOpenGLTextureDesc FStack_150;
  FRHITextureCreateDesc FStack_138;
  FRHITextureCreateDesc FStack_b8;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  uStack_360 = 0;
  if (*(longlong **)(*(longlong *)param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x48) + 0x10))();
  }
  this = *(FRHIResource **)(*(longlong *)param_1 + 0x38);
  if (this != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x38) = 0;
    FRHIResource::Release(this);
  }
  if (FOpenGL3::bAndroidGLESCompatibilityMode == false) {
    pFVar6 = (FOpenGLTexture *)0x0;
  }
  else {
    pFVar5 = FRHITextureCreateDesc::Create2D
                       (&FStack_138,L"PlatformCreateBuiltinBackBuffer",
                        *(int *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0xc),
                        PF_B8G8R8A8);
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
    FRHITextureDesc::FRHITextureDesc(&FStack_358,(FRHITextureDesc *)pFVar5);
    pwStack_308 = pFVar5->DebugName;
    EStack_300 = pFVar5->InitialState;
    EStack_2fc = pFVar5->InitAction;
    pFStack_2f8 = pFVar5->BulkData;
    FStack_2f0 = pFVar5->ClassName;
    FStack_2e8 = pFVar5->OwnerName;
    if ((void *)FStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)FStack_138._padding_);
    }
    pFVar6 = ::operator_new(0x198);
    if (pFVar6 == (FOpenGLTexture *)0x0) {
      pFVar6 = (FOpenGLTexture *)0x0;
    }
    else {
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)auStack_258,&FStack_358);
      pwStack_208 = pwStack_308;
      EStack_200 = EStack_300;
      EStack_1fc = EStack_2fc;
      FStack_1f0 = FStack_2f0;
      pFStack_1f8 = pFStack_2f8;
      FStack_1e8 = FStack_2e8;
      FOpenGLTextureDesc::FOpenGLTextureDesc(&FStack_1e0,&FStack_358);
      pFVar6 = FOpenGLTexture::FOpenGLTexture(pFVar6,(FOpenGLTextureCreateDesc *)auStack_258);
      if ((ForElementType<EPixelFormat>)auStack_258._64_8_ != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)auStack_258._64_8_);
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
    if (FStack_358.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_358.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar7 = *(FOpenGLTexture **)(*(longlong *)param_1 + 0x38);
  if (pFVar7 != pFVar6) {
    *(FOpenGLTexture **)(*(longlong *)param_1 + 0x38) = pFVar6;
    if (pFVar6 != (FOpenGLTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar6);
    }
    if (pFVar7 != (FOpenGLTexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  if (*(longlong *)(*(longlong *)param_1 + 0x38) == 0) {
    pFVar5 = FRHITextureCreateDesc::Create2D
                       (&FStack_b8,L"FOpenGLViewport",*(int *)((longlong)param_1 + 8),
                        *(int *)((longlong)param_1 + 0xc),
                        *(EPixelFormat *)(*(longlong *)param_1 + 0x31));
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
    FRHITextureDesc::FRHITextureDesc(&FStack_2d8,(FRHITextureDesc *)pFVar5);
    pwStack_288 = pFVar5->DebugName;
    EStack_280 = pFVar5->InitialState;
    EStack_27c = pFVar5->InitAction;
    pFStack_278 = pFVar5->BulkData;
    FStack_270 = pFVar5->ClassName;
    FStack_268 = pFVar5->OwnerName;
    if ((void *)FStack_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)FStack_b8._padding_);
    }
    pFVar7 = ::operator_new(0x198);
    pFVar6 = (FOpenGLTexture *)0x0;
    if (pFVar7 != (FOpenGLTexture *)0x0) {
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)auStack_1c8,&FStack_2d8);
      pwStack_178 = pwStack_288;
      EStack_170 = EStack_280;
      EStack_16c = EStack_27c;
      FStack_160 = FStack_270;
      pFStack_168 = pFStack_278;
      FStack_158 = FStack_268;
      FOpenGLTextureDesc::FOpenGLTextureDesc(&FStack_150,&FStack_2d8);
      pFVar6 = FOpenGLTexture::FOpenGLTexture(pFVar7,(FOpenGLTextureCreateDesc *)auStack_1c8);
    }
    this_00 = *(FOpenGLTexture **)(*(longlong *)param_1 + 0x38);
    if (this_00 != pFVar6) {
      *(FOpenGLTexture **)(*(longlong *)param_1 + 0x38) = pFVar6;
      if (pFVar6 != (FOpenGLTexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar6);
      }
      if (this_00 != (FOpenGLTexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((pFVar7 != (FOpenGLTexture *)0x0) &&
       ((ForElementType<EPixelFormat>)auStack_1c8._64_8_ != (ForElementType<EPixelFormat>)0x0)) {
      FMemory::Free((void *)auStack_1c8._64_8_);
    }
    FOpenGLTexture::Initialize
              (*(FOpenGLTexture **)(*(longlong *)param_1 + 0x38),(FRHICommandListBase *)param_2);
    if (FStack_2d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_2d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  uStack_378 = *(undefined8 *)param_1;
  uStack_370 = *(undefined4 *)((longlong)param_1 + 8);
  uStack_36c = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_368 = *(undefined1 *)((longlong)param_1 + 0x10);
  uStack_367 = *(undefined1 *)((longlong)param_1 + 0x11);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
     (param_2->field_0x64 == '\0')) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x30,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar8;
    *(undefined8 **)&param_2->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::Resize'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[2] = uStack_378;
    puVar8[3] = CONCAT44(uStack_36c,uStack_370);
    puVar8[5] = L"TRHILambdaCommand";
    puVar8[4] = CONCAT62(uStack_366,CONCAT11(uStack_367,uStack_368));
  }
  else {
    ``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (&uStack_378,param_2);
  }
  return;
}

// Call @ 145bf4e30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TickProgramLRU'::__l8::<lambda_1>,bool,FOpenGLLinkedProgram_*>::Call
          (void *param_1,FOpenGLLinkedProgram **param_2)

{
  FOpenGLLinkedProgram *pFVar1;
  uint uVar2;
  
  pFVar1 = *param_2;
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + -1;
  if (-1 < **(int **)((longlong)param_1 + 8)) {
    uVar2 = *(int *)param_1 * GUntouchedProgramEvictTimeSeconds;
    if (GFrameNumber < (uint)(*(int *)param_1 * GUntouchedProgramEvictTimeSeconds)) {
      uVar2 = GFrameNumber;
    }
    if ((pFVar1->LRUInfo).LastTouchedFrame < GFrameNumber - uVar2) {
      return true;
    }
  }
  return false;
}

// Call @ 145bf4e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  FRHICommandListBase *in_R8;
  
  FOpenGLTexture::Initialize((FOpenGLTexture *)(param_2->MemManager).Top,in_R8);
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145bf4eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  FRHICommandListBase *in_R8;
  
  FRHICommandListBase::UnlockBuffer(in_R8,(FRHIBuffer *)(param_2->MemManager).Top);
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145bf4ef0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l105::<lambda_2>,bool,unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64>
::Call(void *param_1,uint *param_2,TIntVector3<unsigned_int> *param_3,uint *param_4,uint *param_5,
      void **param_6,ulong64 *param_7)

{
  bool bVar1;
  TIntVector3<unsigned_int>_u_0 local_18 [2];
  
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  bVar1 = `FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l105::<lambda_2>::operator()
                    (param_1,*param_2,(TIntVector3<unsigned_int> *)&local_18[0]._s_0,*param_4,
                     *param_5,*param_6,(uint)*param_7);
  return bVar1;
}

// Call @ 145bf4f60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l109::<lambda_3>,bool,unsigned_int,UE::Math::TIntVector3<unsigned_int>,unsigned_int,unsigned_int,void_const_*,unsigned___int64>
::Call(void *param_1,uint *param_2,TIntVector3<unsigned_int> *param_3,uint *param_4,uint *param_5,
      void **param_6,ulong64 *param_7)

{
  bool bVar1;
  TIntVector3<unsigned_int>_u_0 local_18 [2];
  
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  bVar1 = `FOpenGLDynamicRHI::InitializeGLTextureInternal'::__l109::<lambda_3>::operator()
                    (param_1,*param_2,(TIntVector3<unsigned_int> *)&local_18[0]._s_0,*param_4,
                     *param_5,*param_6,(uint)*param_7);
  return bVar1;
}

