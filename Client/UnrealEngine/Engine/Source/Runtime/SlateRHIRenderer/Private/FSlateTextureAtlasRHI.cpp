// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 6

// FSlateTextureAtlasRHI @ 145fe79e0

FSlateTextureAtlasRHI * __thiscall
FSlateTextureAtlasRHI::FSlateTextureAtlasRHI
          (FSlateTextureAtlasRHI *this,uint param_1,uint param_2,
          ESlateTextureAtlasPaddingStyle param_3,bool param_4)

{
  FSlateTexture2DRHIRef *pFVar1;
  TSharedPtr<FSlateTextureData,1> local_18;
  
  FSlateTextureAtlas::FSlateTextureAtlas
            ((FSlateTextureAtlas *)this,param_1,param_2,GPixelFormats[2].BlockBytes,param_3,param_4)
  ;
  this->_padding_ = (longlong)&___7FSlateTextureAtlasRHI__6B_;
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FSlateTexture2DRHIRef *)0x0) {
    local_18.Object = (FSlateTextureData *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                       (pFVar1,param_1,param_2,PF_B8G8R8A8,&local_18,SRGB,true);
    this->AtlasTexture = pFVar1;
    return this;
  }
  this->AtlasTexture = (FSlateTexture2DRHIRef *)0x0;
  return this;
}

// ~FSlateTextureAtlasRHI @ 145fea510

void __thiscall FSlateTextureAtlasRHI::~FSlateTextureAtlasRHI(FSlateTextureAtlasRHI *this)

{
  FSlateTexture2DRHIRef *pFVar1;
  
  this->_padding_ = (longlong)&___7FSlateTextureAtlasRHI__6B_;
  pFVar1 = this->AtlasTexture;
  if (pFVar1 != (FSlateTexture2DRHIRef *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
  }
  FSlateTextureAtlas::~FSlateTextureAtlas((FSlateTextureAtlas *)this);
  return;
}

// ConditionalUpdateTexture @ 145ff81a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSlateTextureAtlasRHI::ConditionalUpdateTexture(FSlateTextureAtlasRHI *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FSlateTextureData *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_b8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSlateTextureAtlasRHI *pFStack_70;
  FSlateTextureData *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSlateTextureAtlasRHI *pFStack_40;
  FSlateTextureData *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((char)this->_padding_ != '\0') {
    this_00 = ::operator_new(0x20);
    local_68 = (FSlateTextureData *)0x0;
    if (this_00 != (FSlateTextureData *)0x0) {
      local_68 = FSlateTextureData::FSlateTextureData
                           (this_00,(uint)this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
                            (uint)this->_padding_,
                            (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    }
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateTextureAtlasRHI::ConditionalUpdateTexture'::__l6::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateTextureAtlasRHI::ConditionalUpdateTexture'::`6'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateTextureAtlasRHI::ConditionalUpdateTexture_::__l6::TSTR_SlateUpdateAtlasTextureCommand88>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateTextureAtlasRHI::ConditionalUpdateTexture'::__l6::TSTR_SlateUpdateAtlasTextureCommand88>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    cVar1 = *(char *)((longlong)&this->_padding_ + 1);
    *(undefined1 *)&this->_padding_ = 0;
    if (cVar1 == '\0') {
      FSlateTextureAtlas::EmptyAtlasData((FSlateTextureAtlas *)this);
    }
  }
  return;
}

// GetAtlasTexture @ 14600c440

FSlateShaderResource * __thiscall
FSlateTextureAtlasRHI::GetAtlasTexture(FSlateTextureAtlasRHI *this)

{
  return (FSlateShaderResource *)this->AtlasTexture;
}

// ReleaseResources @ 146021fc0

void __thiscall FSlateTextureAtlasRHI::ReleaseResources(FSlateTextureAtlasRHI *this)

{
  FRenderResource *pFVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  pFVar1 = (FRenderResource *)&this->AtlasTexture->_padding_;
  if (this->AtlasTexture == (FSlateTexture2DRHIRef *)0x0) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
  return;
}

// UpdateTexture_RenderThread @ 14602ee30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateTextureAtlasRHI::UpdateTexture_RenderThread
          (FSlateTextureAtlasRHI *this,FSlateTextureData *param_1)

{
  FSlateTexture2DRHIRef *pFVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  void *local_68 [3];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHITextureAtlas.cpp"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = this->AtlasTexture;
  if ((int)pFVar1->_padding_ == -1) {
    pcVar3 = *(code **)(pFVar1->_padding_ + 0x18);
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*pcVar3)(&pFVar1->_padding_,0x154be5ed0);
  }
  if ((int)this->AtlasTexture->_padding_ == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasTexture->IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHITextureAtlas.cpp"
                       ,0x35,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Src = (param_1->Bytes).AllocatorInstance.Data;
  if (_Src != (FScriptContainerElement *)0x0) {
    lVar2 = this->AtlasTexture->_padding_;
    FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,Textures,true);
    local_50[1] = 0;
    local_40 = 0;
    local_38 = 1;
    local_34 = 0x100;
    local_50[0] = lVar2;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_68,0x154be5ed0,local_50);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    if (local_68[0] != (void *)0x0) {
      memcpy(local_68[0],_Src,(ulonglong)(param_1->BytesPerPixel * param_1->Height * param_1->Width)
            );
      RHIUnlockTexture2D((FRHITexture *)this->AtlasTexture->_padding_,0,false,true);
    }
  }
  FSlateTextureData::~FSlateTextureData(param_1);
  ::operator_delete(param_1,0x20);
  return;
}

