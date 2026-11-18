// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 5

// FSlateUpdatableInstanceBuffer @ 145fe82a0

FSlateUpdatableInstanceBuffer * __thiscall
FSlateUpdatableInstanceBuffer::FSlateUpdatableInstanceBuffer
          (FSlateUpdatableInstanceBuffer *this,int param_1)

{
  FRenderProxy *pFVar1;
  FRenderProxy *pFVar2;
  
  this->_padding_ = (longlong)&___7FSlateUpdatableInstanceBuffer__6B_;
  pFVar2 = (FRenderProxy *)0x0;
  this->NumInstances = 0;
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FRenderProxy *)0x0) {
    pFVar1->_padding_ = (longlong)&___7FRenderProxy_FSlateUpdatableInstanceBuffer__6B_;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)&pFVar1->InstanceBufferResource);
    (pFVar1->InstanceBufferResource)._padding_ =
         (longlong)&___7__TSlateElementVertexBuffer_U__TVector4_N_Math_UE____6B_;
    (pFVar1->InstanceBufferResource).BufferSize = 0;
    (pFVar1->InstanceBufferResource).MinBufferSize = 0;
    (pFVar1->InstanceBufferResource).BufferUsageSize = 0;
    pFVar2 = pFVar1;
  }
  this->Proxy = pFVar2;
  TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::Init
            (&pFVar2->InstanceBufferResource,param_1);
  return this;
}

// ~FSlateUpdatableInstanceBuffer @ 145fea780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer(FSlateUpdatableInstanceBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FRenderProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FRenderProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  this->_padding_ = (longlong)&___7FSlateUpdatableInstanceBuffer__6B_;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  pFStack_70 = this->Proxy;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer_::__l2::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer'::__l2::TSTR_SlateUpdatableInstanceBuffer_DeleteProxy16>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
  this->Proxy = (FRenderProxy *)0x0;
  this->_padding_ = (longlong)&___7ISlateUpdatableInstanceBuffer__6B_;
  return;
}

// GetNumInstances @ 14600d240

uint __thiscall FSlateUpdatableInstanceBuffer::GetNumInstances(FSlateUpdatableInstanceBuffer *this)

{
  return this->NumInstances;
}

// GetRenderProxy @ 14600d920

ISlateUpdatableInstanceBufferRenderProxy * __thiscall
FSlateUpdatableInstanceBuffer::GetRenderProxy(FSlateUpdatableInstanceBuffer *this)

{
  return (ISlateUpdatableInstanceBufferRenderProxy *)this->Proxy;
}

// Update @ 14602de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateUpdatableInstanceBuffer::Update
          (FSlateUpdatableInstanceBuffer *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FRenderProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar7 = IsThreadSafeForSlateRendering();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsThreadSafeForSlateRendering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateUpdatableBuffer.cpp"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar1 = param_1->ArrayNum;
  this->NumInstances = uVar1;
  if (uVar1 != 0) {
    pFVar4 = this->Proxy;
    pFVar5 = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    iVar3 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    local_80[1] = (code *)pFVar4;
    local_80[2] = (code *)pFVar5;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSlateUpdatableInstanceBuffer::Update'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    *(int *)(local_80 + 3) = iVar2;
    *(int *)((longlong)local_80 + 0x1c) = iVar3;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateUpdatableInstanceBuffer::Update'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateUpdatableInstanceBuffer::Update_::__l12::TSTR_SlateUpdatableInstanceBuffer_Update33>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateUpdatableInstanceBuffer::Update'::__l12::TSTR_SlateUpdatableInstanceBuffer_Update33>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar8);
      uVar10 = (ulonglong)local_48;
      if (2 < uVar10) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar9 = local_50;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar9 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar9 = local_80;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
  }
  return;
}

