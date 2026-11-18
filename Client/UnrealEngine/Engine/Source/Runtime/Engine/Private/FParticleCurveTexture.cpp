// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// InitRHI @ 1480e63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleCurveTexture::InitRHI(FParticleCurveTexture *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *this_00;
  TRefCountPtr<FRHITexture> TVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [24];
  undefined4 local_120;
  FLinearColor_u_0 local_11c;
  int local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
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
  local_138._0_4_ = 0x200;
  local_138._4_4_ = 0x200;
  local_108 = 0;
  local_dc = BulkData;
  local_120 = 1;
  local_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_fc = 0x10001;
  local_d8 = (FResourceBulkDataInterface *)0x151a194e0;
  local_104 = 0x20000000200;
  local_f8 = 0x2000101;
  local_f4 = 0xff00;
  local_e8 = (wchar_t *)0x0;
  local_e0 = None;
  local_d0.ComparisonIndex.Value = 0x70;
  local_d0.Number = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_b8 = 0;
  local_138._16_8_ = 0x4000009;
  local_11c = FLinearColor::Blue.field0_0x0;
  FLazyName::Resolve(&::ClassName);
  local_c0 = CONCAT44(local_138._4_4_,local_138._0_4_);
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
  pTVar1 = &this->CurveTextureRHI;
  if ((FRHITexture *)pTVar1 != TVar2.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
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

// ReleaseRHI @ 1480e6580

void __thiscall FParticleCurveTexture::ReleaseRHI(FParticleCurveTexture *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->CurveTextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->CurveTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// FParticleCurveTexture @ 1480f3a90

FParticleCurveTexture * __thiscall
FParticleCurveTexture::FParticleCurveTexture(FParticleCurveTexture *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FParticleCurveTexture__6B_;
  (this->CurveTextureRHI).Reference = (FRHITexture *)0x0;
  FTexelAllocator::FTexelAllocator(&this->TexelAllocator,0x200,0x200);
  (this->PendingCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCurves).ArrayNum = 0;
  (this->PendingCurves).ArrayMax = 0;
  return this;
}

// AddCurve @ 1480fc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

FTexelAllocation __thiscall
FParticleCurveTexture::AddCurve
          (FParticleCurveTexture *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTexelAllocation FVar5;
  undefined8 uVar6;
  void *_Dst;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *in_R8;
  undefined4 local_res18;
  ushort local_res1c;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                       ,0x21f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return SUB86(uVar6,0);
    }
  }
  if (0x200 < *(int *)(in_R8 + 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurveSamples.Num() <= GParticleCurveTextureSizeX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                       ,0x220,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return SUB86(uVar6,0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar7 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar7,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  FVar5 = SUB86(param_1,0);
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (*(int *)(in_R8 + 1) != 0)) {
    FTexelAllocator::Allocate(&this->TexelAllocator,(int)&local_res18);
    if (local_res1c == 0) {
      if (2 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      *(undefined4 *)&(param_1->AllocatorInstance).Data = local_res18;
      *(undefined2 *)((longlong)&(param_1->AllocatorInstance).Data + 4) = 0;
      return FVar5;
    }
    if ((uint)local_res1c != *(uint *)(in_R8 + 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TexelAllocation.Size == CurveSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x229,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return SUB86(uVar6,0);
      }
    }
    iVar4 = (this->PendingCurves).ArrayNum;
    piVar1 = &(this->PendingCurves).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingCurves).AllocatorInstance,piVar1);
    }
    (this->PendingCurves).ArrayNum = iVar4 + 1;
    pFVar8 = (this->PendingCurves).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    DefaultConstructItems<FCurveSamples,int>(pFVar8,1);
    *(undefined4 *)(pFVar8 + 8) = local_res18;
    *(ushort *)(pFVar8 + 0xc) = local_res1c;
    _Dst = FMemory::Malloc((ulonglong)local_res1c << 2,0);
    *(void **)pFVar8 = _Dst;
    memcpy(_Dst,(void *)*in_R8,(ulonglong)local_res1c << 2);
    *(undefined4 *)&(param_1->AllocatorInstance).Data = local_res18;
    *(ushort *)((longlong)&(param_1->AllocatorInstance).Data + 4) = local_res1c;
    return FVar5;
  }
  *(undefined4 *)&(param_1->AllocatorInstance).Data = 0;
  *(undefined2 *)((longlong)&(param_1->AllocatorInstance).Data + 4) = 0;
  return FVar5;
}

// ComputeCurveScaleBias @ 148103250

TVector4<float> * __thiscall
FParticleCurveTexture::ComputeCurveScaleBias
          (FParticleCurveTexture *this,TVector4<float> *__return_storage_ptr__,
          FTexelAllocation param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  undefined2 in_register_00000086;
  float fVar5;
  
  fVar4 = __real_3b000000;
  uVar1 = *(ushort *)(CONCAT26(in_register_00000086,param_1) + 4);
  fVar5 = __real_3f800000;
  if (uVar1 != 0) {
    fVar5 = 0.0;
  }
  uVar2 = *(ushort *)CONCAT26(in_register_00000086,param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar5;
  uVar3 = *(ushort *)(CONCAT26(in_register_00000086,param_1) + 2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)uVar2 * fVar4 + __real_3a800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)uVar3 * fVar4 + __real_3a800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(int)(uVar1 - 1) * fVar4;
  return __return_storage_ptr__;
}

// RemoveCurve @ 148129940

void __thiscall
FParticleCurveTexture::RemoveCurve(FParticleCurveTexture *this,FTexelAllocation param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined2 in_register_00000016;
  undefined4 *puVar3;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  puVar3 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                       ,0x23f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(short *)(puVar3 + 1) != 0) {
    local_res18 = *puVar3;
    local_res1c = *(undefined2 *)(puVar3 + 1);
    FTexelAllocator::Free(&this->TexelAllocator,SUB86(&local_res18,0));
  }
  return;
}

// SubmitPendingCurves @ 148137da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParticleCurveTexture::SubmitPendingCurves(FParticleCurveTexture *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleCurveTexture.cpp"
                         ,0x25b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8._0_4_ = (this->PendingCurves).ArrayNum;
  lVar6 = (longlong)(int)local_a8;
  if ((int)local_a8 != 0) {
    _Src = (this->PendingCurves).AllocatorInstance.Data;
    local_b0.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_a8,0,&local_b0,(int)local_a8,(int *)((longlong)&local_a8 + 4));
    memcpy(local_b0.Data,_Src,lVar6 << 4);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FParticleCurveTexture::SubmitPendingCurves'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = (code *)this;
    local_70[2] = (code *)0x0;
    local_70[2] = (code *)local_b0.Data;
    local_b0.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_70 + 3) = (int)local_a8;
    *(undefined4 *)((longlong)local_70 + 0x1c) = local_a8._4_4_;
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FParticleCurveTexture::SubmitPendingCurves'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    local_a8 = 0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FParticleCurveTexture::SubmitPendingCurves_::__l12::TSTR_FInjectPendingCurvesCommand608>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`FParticleCurveTexture::SubmitPendingCurves'::__l12::TSTR_FInjectPendingCurvesCommand608>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar3);
      uVar5 = (ulonglong)local_38;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
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
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    (this->PendingCurves).ArrayNum = 0;
    if ((this->PendingCurves).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PendingCurves).AllocatorInstance,0,&(this->PendingCurves).ArrayMax
                );
    }
  }
  return;
}

