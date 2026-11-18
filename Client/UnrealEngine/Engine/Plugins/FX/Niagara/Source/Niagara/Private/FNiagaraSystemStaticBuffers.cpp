// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ~FNiagaraSystemStaticBuffers @ 1493d18c0

void __thiscall
FNiagaraSystemStaticBuffers::~FNiagaraSystemStaticBuffers(FNiagaraSystemStaticBuffers *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->GpuFloatBuffer).NumBytes = 0;
  pFVar1 = (this->GpuFloatBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->GpuFloatBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->GpuFloatBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->GpuFloatBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->GpuFloatBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->GpuFloatBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->GpuFloatResource)._padding_);
  (this->GpuFloatResource)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  pFVar3 = (this->CpuFloatBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// operator() @ 1493d3c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(int *)(*(longlong *)this + 0x48) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GpuFloatBuffer.NumBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,0x16,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)this;
  FReadBuffer::Initialize
            ((FReadBuffer *)(lVar1 + 0x38),(FRHICommandListBase *)param_1,
             L"NiagaraSystemStaticBuffers",4,*(uint *)(lVar1 + 0x28),PF_R32_FLOAT,Static,
             (FResourceArrayUploadInterface *)(lVar1 + 0x18));
  return;
}

// AddCpuData @ 1493d6360

uint __thiscall
FNiagaraSystemStaticBuffers::AddCpuData
          (FNiagaraSystemStaticBuffers *this,TArrayView<float_const_,int> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  float *_Buf2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if ((this->bFinalized != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFinalized == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                         ,0x20,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  iVar2 = param_1->ArrayNum;
  pTVar1 = &this->CpuFloatBuffer;
  uVar6 = 0;
  iVar8 = (this->CpuFloatBuffer).ArrayNum - iVar2;
  if (-1 < iVar8) {
    _Buf2 = param_1->DataPtr;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    do {
      iVar7 = memcmp(pFVar3 + (longlong)(int)uVar6 * 4,_Buf2,(longlong)iVar2 * 4);
      if (iVar7 == 0) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 <= iVar8);
  }
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1->ArrayNum,&pTVar1->AllocatorInstance,
                     &(this->CpuFloatBuffer).ArrayNum,&(this->CpuFloatBuffer).ArrayMax);
  memcpy((pTVar1->AllocatorInstance).Data + (ulonglong)uVar6 * 4,param_1->DataPtr,
         (longlong)iVar2 * 4);
  return uVar6;
}

// AddGpuData @ 1493d6460

uint __thiscall
FNiagaraSystemStaticBuffers::AddGpuData
          (FNiagaraSystemStaticBuffers *this,TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  float *_Buf2;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  
  if ((this->bFinalized != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFinalized == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                         ,0x33,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  iVar1 = param_1->ArrayNum;
  uVar4 = 0;
  iVar8 = (int)(this->GpuFloatResource)._padding_ - iVar1;
  if (-1 < iVar8) {
    uVar7 = (this->GpuFloatResource)._padding_;
    _Buf2 = param_1->DataPtr;
    do {
      uVar6 = uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = (longlong)&(this->GpuFloatResource)._padding_ + ((longlong)uVar7 >> 0x18);
      }
      iVar5 = memcmp((void *)(uVar6 + (longlong)(int)uVar4 * 4),_Buf2,(longlong)iVar1 << 2);
      if (iVar5 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 <= iVar8);
  }
  plVar9 = &(this->GpuFloatResource)._padding_;
  iVar1 = param_1->ArrayNum;
  uVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,iVar1,(ForAnyElementType *)plVar9,
                     (int *)&(this->GpuFloatResource)._padding_,
                     (int *)((longlong)&(this->GpuFloatResource)._padding_ + 4));
  uVar7 = *plVar9;
  if ((uVar7 & 1) != 0) {
    uVar7 = (longlong)plVar9 + ((longlong)uVar7 >> 0x18);
  }
  memcpy((void *)(uVar7 + (ulonglong)uVar4 * 4),param_1->DataPtr,(longlong)iVar1 << 2);
  return uVar4;
}

// Finalize @ 1493e1fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNiagaraSystemStaticBuffers::Finalize(FNiagaraSystemStaticBuffers *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraSystemStaticBuffers *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraSystemStaticBuffers *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bFinalized != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinalized == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,0xe,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = (this->GpuFloatResource)._padding_;
  this->bFinalized = true;
  if (0 < (int)lVar2) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::`12'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraSystemStaticBuffers::Finalize_::__l12::TSTR_InitBuffers19>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`FNiagaraSystemStaticBuffers::Finalize'::__l12::TSTR_InitBuffers19>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
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
  }
  return;
}

