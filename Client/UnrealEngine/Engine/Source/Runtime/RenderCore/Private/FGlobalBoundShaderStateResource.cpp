// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FGlobalBoundShaderStateResource @ 145e80990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGlobalBoundShaderStateResource * __thiscall
FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource
          (FGlobalBoundShaderStateResource *this)

{
  TLinkedList<FGlobalBoundShaderStateResource_*> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  FGlobalBoundShaderStateResource *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FGlobalBoundShaderStateResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FGlobalBoundShaderStateResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FRenderResource::FRenderResource((FRenderResource *)this);
  pTVar1 = &this->GlobalListLink;
  this->BoundVertexDeclaration = (FRHIVertexDeclaration *)0x0;
  this->_padding_ = (longlong)&___7FGlobalBoundShaderStateResource__6B_;
  (this->BoundShaderState).Reference = (FRHIBoundShaderState *)0x0;
  pTVar1->_padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  this->BoundVertexShader = (FRHIVertexShader *)0x0;
  this->BoundPixelShader = (FRHIPixelShader *)0x0;
  this->BoundGeometryShader = (FRHIGeometryShader *)0x0;
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    if (List != (TLinkedList<FGlobalBoundShaderStateResource_*> *)0x0) {
      List->_padding_ = (longlong)pTVar1;
    }
    pTVar1->_padding_ = (longlong)List;
    (this->GlobalListLink)._padding_ = (longlong)&List;
    List = pTVar1;
  }
  else {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::`7'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource_::__l7::TSTR_LinkGlobalBoundShaderStateResource35>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::TSTR_LinkGlobalBoundShaderStateResource35>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar7 = (ulonglong)local_28;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FGlobalBoundShaderStateResource *)(*pcVar2)();
          return pFVar5;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar6 = local_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar6 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar6 = local_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return this;
}

// ~FGlobalBoundShaderStateResource @ 145e84460

void __thiscall
FGlobalBoundShaderStateResource::~FGlobalBoundShaderStateResource
          (FGlobalBoundShaderStateResource *this)

{
  longlong lVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FGlobalBoundShaderStateResource__6B_;
  lVar1 = (this->GlobalListLink)._padding_;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar2 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  this_00 = (FRHIResource *)(this->BoundShaderState).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetGlobalBoundShaderStateList @ 145e9da20

TLinkedList<FGlobalBoundShaderStateResource_*> ** __cdecl
FGlobalBoundShaderStateResource::GetGlobalBoundShaderStateList(void)

{
  return &List;
}

// ReleaseRHI @ 145eae800

void __thiscall FGlobalBoundShaderStateResource::ReleaseRHI(FGlobalBoundShaderStateResource *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->BoundShaderState).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->BoundShaderState).Reference = (FRHIBoundShaderState *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

