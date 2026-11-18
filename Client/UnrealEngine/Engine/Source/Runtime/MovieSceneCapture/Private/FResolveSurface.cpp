// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// FResolveSurface @ 146bd7ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResolveSurface * __thiscall
FFrameGrabber::FResolveSurface::FResolveSurface
          (FResolveSurface *this,EPixelFormat param_1,TIntPoint<int> param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  FResolveSurface *pFVar4;
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
  local_88[1]._0_4_ = param_2.field0_0x0._0_4_;
  (this->Payload).Object = (IFramePayload *)0x0;
  (this->Payload).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78 = &this->Surface;
  local_88[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::`2'::<lambda_1>,1,0>::
                 _vftable_;
  uStackX_1c = param_2.field0_0x0._4_4_;
  (this->Surface).ReadbackTexture.Reference = (FRHITexture *)0x0;
  local_78->bEnabled = (FThreadSafeBool)0x0;
  (this->Surface).CaptureRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Surface).CaptureRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_88[1]._4_4_ = uStackX_1c;
  (this->Surface).PixelFormat = param_1;
  (this->Surface).bQueuedForCapture = false;
  (this->Surface).AvailableEvent = (FEvent *)0x0;
  local_70 = (undefined ***)0x0;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
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
        pFVar4 = (FResolveSurface *)(*pcVar1)();
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

