// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 9

// FSlateFontTextureRHI @ 145fe6050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontTextureRHI * __thiscall
FSlateFontTextureRHI::FSlateFontTextureRHI
          (FSlateFontTextureRHI *this,uint param_1,uint param_2,ESlateFontAtlasContentType param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  FSlateFontTextureRHIResource *pFVar4;
  FSlateFontTextureRHIResource *pFVar5;
  FSlateFontTextureRHI *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  FSlateFontTextureRHIResource *pFVar10;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FSlateFontTextureRHI *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FSlateFontTextureRHI *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this->_padding_ = (longlong)&___7FSlateFontTextureRHI__6B_;
  pFVar10 = (FSlateFontTextureRHIResource *)0x0;
  (this->PendingSourceData).Ptr = (FPendingSourceData *)0x0;
  pFVar4 = ::operator_new(0x98);
  pFVar5 = pFVar10;
  if (pFVar4 != (FSlateFontTextureRHIResource *)0x0) {
    pFVar5 = FSlateFontTextureRHIResource::FSlateFontTextureRHIResource
                       (pFVar4,param_1,param_2,param_3);
  }
  (this->FontTexture).Ptr = pFVar5;
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    pFVar5 = (this->FontTexture).Ptr;
    pcVar2 = *(code **)(pFVar5->_padding_ + 0x18);
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateFontTextureRHI *)(*pcVar2)();
      return pFVar6;
    }
    (*pcVar2)(&pFVar5->_padding_,0x154be5ed0);
    UpdateTextureFromSource(this,param_1,param_2,param_4);
  }
  else {
    pFVar4 = ::operator_new(0x18);
    pFVar5 = pFVar10;
    if (pFVar4 != (FSlateFontTextureRHIResource *)0x0) {
      iVar1 = param_4->ArrayNum;
      _Src = (param_4->AllocatorInstance).Data;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = CONCAT44(local_c0._4_4_,iVar1);
      if (iVar1 == 0) {
        local_c0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,&local_c8,iVar1,(int *)((longlong)&local_c0 + 4));
        memcpy(local_c8.Data,_Src,(longlong)iVar1);
      }
      *(uint *)&pFVar4->_padding_ = param_1;
      *(uint *)((longlong)&pFVar4->_padding_ + 4) = param_2;
      pFVar4->_padding_ = (longlong)local_c8.Data;
      local_c8.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar4->_padding_ = (undefined4)local_c0;
      *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = local_c0._4_4_;
      local_c0 = 0;
      pFVar5 = pFVar4;
    }
    pFVar4 = (FSlateFontTextureRHIResource *)(this->PendingSourceData).Ptr;
    if ((pFVar4 != pFVar5) &&
       ((this->PendingSourceData).Ptr = (FPendingSourceData *)pFVar5,
       pFVar4 != (FSlateFontTextureRHIResource *)0x0)) {
      if ((void *)pFVar4->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar4->_padding_);
      }
      ::operator_delete(pFVar4,0x18);
    }
    pFVar5 = (this->FontTexture).Ptr;
    pFVar4 = (FSlateFontTextureRHIResource *)&pFVar5->_padding_;
    if (pFVar5 == (FSlateFontTextureRHIResource *)0x0) {
      pFVar4 = pFVar10;
    }
    BeginInitResource((FRenderResource *)pFVar4,(FRenderCommandPipe *)0x0);
    local_90 = (undefined ***)0x0;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateFontTextureRHI::FSlateFontTextureRHI'::`7'::<lambda_1>,1,0>
                ::_vftable_;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateFontTextureRHI::FSlateFontTextureRHI'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_a0 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateFontTextureRHI::FSlateFontTextureRHI_::__l7::TSTR_SlateUpdateFontTextureCommand189>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_78 = local_a8;
      pFStack_70 = pFStack_a0;
      local_68 = local_98;
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateFontTextureRHI::FSlateFontTextureRHI'::__l7::TSTR_SlateUpdateFontTextureCommand189>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar9 = (ulonglong)local_58;
      if ((2 < uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FSlateFontTextureRHI *)(*pcVar2)();
        return pFVar6;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_88 + 0x10);
          if (local_60 != (undefined ***)0x0) {
            pppuVar8 = local_60;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar8 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar8 = local_90;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  return this;
}

// ~FSlateFontTextureRHI @ 145fea100

void __thiscall FSlateFontTextureRHI::~FSlateFontTextureRHI(FSlateFontTextureRHI *this)

{
  FSlateFontTextureRHIResource *pFVar1;
  FPendingSourceData *pFVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FSlateFontTextureRHI__6B_;
  pFVar1 = (this->FontTexture).Ptr;
  if (pFVar1 != (FSlateFontTextureRHIResource *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
  }
  pFVar2 = (this->PendingSourceData).Ptr;
  if (pFVar2 != (FPendingSourceData *)0x0) {
    pFVar3 = (pFVar2->SourceData).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x18);
  }
  this->_padding_ = (longlong)&___7ISlateFontTexture__6B_;
  return;
}

// GetAtlasDataCopy @ 14600c310

void __thiscall
FSlateFontTextureRHI::GetAtlasDataCopy
          (FSlateFontTextureRHI *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// GetContentType @ 14600c6e0

ESlateFontAtlasContentType __thiscall
FSlateFontTextureRHI::GetContentType(FSlateFontTextureRHI *this)

{
  return ((this->FontTexture).Ptr)->ContentType;
}

// GetEngineTexture @ 14600c7f0

FTextureResource * __thiscall FSlateFontTextureRHI::GetEngineTexture(FSlateFontTextureRHI *this)

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

// GetSlateTexture @ 14600ef30

FSlateShaderResource * __thiscall FSlateFontTextureRHI::GetSlateTexture(FSlateFontTextureRHI *this)

{
  return (FSlateShaderResource *)(this->FontTexture).Ptr;
}

// ReleaseRenderingResources @ 146021b80

void __thiscall FSlateFontTextureRHI::ReleaseRenderingResources(FSlateFontTextureRHI *this)

{
  FSlateFontTextureRHIResource *pFVar1;
  FRenderResource *pFVar2;
  
  pFVar1 = (this->FontTexture).Ptr;
  pFVar2 = (FRenderResource *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateFontTextureRHIResource *)0x0) {
    pFVar2 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar2,(FRenderCommandPipe *)0x0);
  return;
}

// ReleaseResources @ 146021e30

void __thiscall FSlateFontTextureRHI::ReleaseResources(FSlateFontTextureRHI *this)

{
  FSlateFontTextureRHIResource *pFVar1;
  FRenderResource *pFVar2;
  
  pFVar1 = (this->FontTexture).Ptr;
  pFVar2 = (FRenderResource *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateFontTextureRHIResource *)0x0) {
    pFVar2 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar2,(FRenderCommandPipe *)0x0);
  return;
}

// UpdateTextureFromSource @ 14602ecd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateFontTextureRHI::UpdateTextureFromSource
          (FSlateFontTextureRHI *this,uint param_1,uint param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  ESlateFontAtlasContentType EVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  FMemScope local_res8;
  uint local_res10 [2];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  
  EVar1 = (**(code **)(this->_padding_ + 0x18))();
  uVar2 = GetSlateFontAtlasContentBytesPerPixel(EVar1);
  uVar3 = 0;
  _Dst = RHILockTexture2D((FRHITexture *)((this->FontTexture).Ptr)->_padding_,0,RLM_WriteOnly,
                          local_res10,false,true,(ulong64 *)0x0);
  uVar2 = uVar2 * param_1;
  if (uVar2 == local_res10[0]) {
    memcpy(_Dst,(param_3->AllocatorInstance).Data,(ulonglong)(uVar2 * param_2));
  }
  else if (param_2 != 0) {
    do {
      memcpy((void *)((ulonglong)(uVar3 * local_res10[0]) + (longlong)_Dst),
             (param_3->AllocatorInstance).Data + uVar3 * param_1,(ulonglong)uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  local_58[1] = 0;
  local_40 = 3;
  local_58[0] = ((this->FontTexture).Ptr)->_padding_;
  local_48 = 0;
  local_3c = 0x100;
  FLLMScope::FLLMScope((FLLMScope *)local_res10,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0,local_58);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope((FLLMScope *)local_res10);
  return;
}

