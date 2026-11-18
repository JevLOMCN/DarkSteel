// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 7

// FSlateFontAtlasRHI @ 145fe5fc0

FSlateFontAtlasRHI * __thiscall
FSlateFontAtlasRHI::FSlateFontAtlasRHI
          (FSlateFontAtlasRHI *this,uint param_1,uint param_2,ESlateFontAtlasContentType param_3,
          ESlateTextureAtlasPaddingStyle param_4)

{
  FSlateFontTextureRHIResource *this_00;
  FSlateFontTextureRHIResource *pFVar1;
  
  FSlateFontAtlas::FSlateFontAtlas((FSlateFontAtlas *)this,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)&_vftable__for__ISlateFontTexture__;
  this->_padding_ = (longlong)&_vftable__for__FSlateTextureAtlas__;
  this_00 = ::operator_new(0x98);
  pFVar1 = (FSlateFontTextureRHIResource *)0x0;
  if (this_00 != (FSlateFontTextureRHIResource *)0x0) {
    pFVar1 = FSlateFontTextureRHIResource::FSlateFontTextureRHIResource
                       (this_00,param_1,param_2,param_3);
  }
  (this->FontTexture).Ptr = pFVar1;
  if (param_3 == Msdf) {
    *(undefined1 *)&this->_padding_ = 1;
  }
  return this;
}

// ~FSlateFontAtlasRHI @ 145fea0b0

void __thiscall FSlateFontAtlasRHI::~FSlateFontAtlasRHI(FSlateFontAtlasRHI *this)

{
  FSlateFontTextureRHIResource *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__ISlateFontTexture__;
  this->_padding_ = (longlong)&_vftable__for__FSlateTextureAtlas__;
  pFVar1 = (this->FontTexture).Ptr;
  if (pFVar1 != (FSlateFontTextureRHIResource *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
  }
  FSlateFontAtlas::~FSlateFontAtlas((FSlateFontAtlas *)this);
  return;
}

// operator() @ 145fec6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSlateFontAtlasRHI::ConditionalUpdateTexture'::__l10::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  FSlateFontAtlas *this_00;
  ESlateFontAtlasContentType EVar2;
  uint uVar3;
  void *_Dst;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  
  _Dst = RHILockTexture2D(*(FRHITexture **)(*(longlong *)(*(longlong *)this + 0x58) + 0x10),0,
                          RLM_WriteOnly,(uint *)local_res8,false,true,(ulong64 *)0x0);
  this_00 = *(FSlateFontAtlas **)this;
  iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
  EVar2 = FSlateFontAtlas::GetContentType(this_00);
  uVar3 = GetSlateFontAtlasContentBytesPerPixel(EVar2);
  memcpy(_Dst,*(void **)(*(longlong *)this + 0x10),
         (ulonglong)(uVar3 * iVar1 * (int)this_00->_padding_));
  local_30 = 0;
  local_20 = 3;
  local_28 = 0;
  local_1c = 0x100;
  local_38 = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x58) + 0x10);
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0,&local_38);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ConditionalUpdateTexture @ 145ff7f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSlateFontAtlasRHI::ConditionalUpdateTexture(FSlateFontAtlasRHI *this)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  void *_Dst;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  FRenderResource *pFVar8;
  ulonglong uVar9;
  undefined1 auStackY_e8 [32];
  uint local_a8 [4];
  code *local_98 [2];
  undefined **local_88;
  TUniquePtr<FSlateFontTextureRHIResource,TDefaultDelete<FSlateFontTextureRHIResource>_> *pTStack_80
  ;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  TUniquePtr<FSlateFontTextureRHIResource,TDefaultDelete<FSlateFontTextureRHIResource>_> *pTStack_50
  ;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((char)this->_padding_ != '\0') {
    bVar4 = IsInRenderingThread();
    pFVar8 = (FRenderResource *)(this->_padding_ + 0x18);
    if (bVar4) {
      pcVar2 = *(code **)(pFVar8->_padding_ + 0x18);
      bVar4 = IsInRenderingThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (*pcVar2)(pFVar8);
      _Dst = RHILockTexture2D(*(FRHITexture **)(this->_padding_ + 0x10),0,RLM_WriteOnly,local_a8,
                              false,true,(ulong64 *)0x0);
      lVar3 = this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      uVar5 = GetSlateFontAtlasContentBytesPerPixel((ESlateFontAtlasContentType)this->_padding_);
      memcpy(_Dst,(void *)this->_padding_,(ulonglong)(uVar5 * iVar1 * (int)lVar3));
      RHIUnlockTexture2D(*(FRHITexture **)(this->_padding_ + 0x10),0,false,true);
    }
    else {
      if (this->_padding_ == 0) {
        pFVar8 = (FRenderResource *)0x0;
      }
      BeginInitResource(pFVar8,(FRenderCommandPipe *)0x0);
      local_70 = (undefined ***)0x0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSlateFontAtlasRHI::ConditionalUpdateTexture'::`10'::<lambda_1>,1,0>
                  ::_vftable_;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateFontAtlasRHI::ConditionalUpdateTexture'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pTStack_80 = &this[-1].FontTexture;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSlateFontAtlasRHI::ConditionalUpdateTexture_::__l10::TSTR_SlateUpdateFontAtlasTextureCommand157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_58 = local_88;
        pTStack_50 = pTStack_80;
        local_48 = local_78;
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSlateFontAtlasRHI::ConditionalUpdateTexture'::__l10::TSTR_SlateUpdateFontAtlasTextureCommand157>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar6);
        uVar9 = (ulonglong)local_38;
        if (2 < uVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar7 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar7 = local_40;
            }
            (*(code *)(*pppuVar7)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar7 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar7 = local_70;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// GetEngineTexture @ 14600c7d0

FTextureResource * __thiscall FSlateFontAtlasRHI::GetEngineTexture(FSlateFontAtlasRHI *this)

{
  FSlateFontTextureRHIResource *pFVar1;
  FTextureResource *pFVar2;
  
  pFVar1 = (this->FontTexture).Ptr;
  pFVar2 = (FTextureResource *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateFontTextureRHIResource *)0x0) {
    pFVar2 = (FTextureResource *)0x0;
  }
  return pFVar2;
}

// GetSlateTexture @ 14600ef20

FSlateShaderResource * __thiscall FSlateFontAtlasRHI::GetSlateTexture(FSlateFontAtlasRHI *this)

{
  return (FSlateShaderResource *)(this->FontTexture).Ptr;
}

// ReleaseResources @ 146021e10

void __thiscall FSlateFontAtlasRHI::ReleaseResources(FSlateFontAtlasRHI *this)

{
  FRenderResource *pFVar1;
  
  pFVar1 = (FRenderResource *)(this->_padding_ + 0x18);
  if (this->_padding_ == 0) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
  return;
}

