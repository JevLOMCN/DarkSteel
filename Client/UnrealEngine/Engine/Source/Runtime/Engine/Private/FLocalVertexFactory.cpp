// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// GetColorOverrideStream @ 1479c4b70

void __thiscall
FLocalVertexFactory::GetColorOverrideStream
          (FLocalVertexFactory *this,FVertexBuffer *param_1,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  ForElementType<FVertexInputStream> FVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FVertexInputStream> FVar6;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *local_28 [2];
  void *local_18 [2];
  
  if ((int)param_1->_padding_ == -1) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ColorVertexBuffer->IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LocalVertexFactory.h"
                       ,0x6f,L"Color Vertex buffer was not initialized! Name %s");
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((((int)this->_padding_ == -1) || (((this->Data)._padding_ & 0x200000000000000) == 0)) ||
     (this->ColorStreamIndex < 1)) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,local_18);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized() && EnumHasAnyFlags(EVertexStreamUsage::Overridden, Data.ColorComponent.VertexStreamUsage) && ColorStreamIndex > 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LocalVertexFactory.h"
                       ,0x70,L"Per-mesh colors with bad stream setup! Name %s");
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar1 = (param_2->AllocatorInstance).SecondaryData;
  local_38 = this->ColorStreamIndex & 0xf;
  pFVar2 = (param_1->VertexBufferRHI).Reference;
  uStack_34 = SUB84(pFVar2,0);
  uStack_30 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  FVar6 = (ForElementType<FVertexInputStream>)param_2;
  if (FVar1 != (ForElementType<FVertexInputStream>)0x0) {
    FVar6 = FVar1;
  }
  if ((ulonglong)FVar6 <= &local_38) {
    FVar6 = (ForElementType<FVertexInputStream>)param_2;
    if (FVar1 != (ForElementType<FVertexInputStream>)0x0) {
      FVar6 = FVar1;
    }
    if ((&local_38 < (uint *)((longlong)FVar6 + (longlong)param_2->ArrayMax * 0xc)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                      (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  FVar1 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FVertexInputStream>)0x0) {
    param_2 = (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *
              )FVar1;
  }
  *(ulonglong *)((longlong)param_2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
  *(undefined4 *)((uchar *)((longlong)param_2 + 8) + (longlong)iVar5 * 0xc) = uStack_30;
  return;
}

// FLocalVertexFactory @ 147ea5e50

FLocalVertexFactory * __thiscall
FLocalVertexFactory::FLocalVertexFactory(FLocalVertexFactory *this,Type param_1,char *param_2)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x1ffffff;
  this->_padding_ = (longlong)&___7FLocalVertexFactory__6B_;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  *(undefined4 *)&(this->Data)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Data)._padding_ + 4) = 4;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  *(undefined4 *)&(this->Data)._padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&(this->Data)._padding_ + 4) = 0xff;
  *(undefined1 *)((longlong)&(this->Data)._padding_ + 6) = 0;
  (this->Data).PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  (this->Data).PreSkinPositionComponent.StreamOffset = 0;
  (this->Data).PreSkinPositionComponent.Offset = '\0';
  (this->Data).PreSkinPositionComponent.Stride = '\0';
  (this->Data).PreSkinPositionComponent.Type = '\0';
  (this->Data).PreSkinPositionComponent.VertexStreamUsage = Default;
  (this->Data).PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  this->UniformBuffer = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0;
  this->ColorStreamIndex = -1;
  this->bGPUSkinPassThrough = false;
  (this->DebugName).DebugName = param_2;
  return this;
}

// ~FLocalVertexFactory @ 147ea9160

void __thiscall FLocalVertexFactory::~FLocalVertexFactory(FLocalVertexFactory *this)

{
  this->_padding_ = (longlong)&___7FLocalVertexFactory__6B_;
  if (this->UniformBuffer != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// operator() @ 147eab7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FLocalVertexFactory::InitRHI'::__l12::<lambda_1>::operator()
          (void *this,EVertexInputStreamType param_1,bool param_2)

{
  TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FVertexElement FVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_c8 [16];
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0x11;
  FVar4 = FVertexFactory::AccessStreamComponent
                    (*(FVertexFactory **)this,(FVertexStreamComponent *)local_c8,
                     (char)*(FVertexFactory **)this + '@',Default);
  if ((&local_b8 <= (ulonglong)FVar4) &&
     ((ulonglong)FVar4 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  lVar5 = (longlong)local_b8.ArrayNum;
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(undefined8 *)local_b8.AllocatorInstance.InlineData[lVar5].Pad = *(undefined8 *)FVar4;
  if (param_2) {
    pTVar1 = &(*(FVertexFactory **)this)[1].Streams;
    if (*(longlong *)(pTVar1->AllocatorInstance).InlineData != 0) {
      FVar4 = FVertexFactory::AccessStreamComponent
                        (*(FVertexFactory **)this,(FVertexStreamComponent *)(local_c8 + 8),
                         (uchar)pTVar1,PositionAndNormalOnly);
      if ((&local_b8 <= (ulonglong)FVar4) &&
         ((ulonglong)FVar4 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        local_b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      lVar5 = (longlong)local_b8.ArrayNum;
      local_b8.ArrayNum = local_b8.ArrayNum + 1;
      *(undefined8 *)local_b8.AllocatorInstance.InlineData[lVar5].Pad = *(undefined8 *)FVar4;
    }
  }
  FVertexFactory::AddPrimitiveIdStreamElement
            (*(FVertexFactory **)this,param_1,&local_b8,'\x01','\x01');
  FVertexFactory::InitDeclaration(*(FVertexFactory **)this,&local_b8,param_1);
  return;
}

// Copy @ 147eb5ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLocalVertexFactory::Copy(FLocalVertexFactory *this,FLocalVertexFactory *param_1)

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
  FLocalVertexFactory *pFStack_70;
  FDataType *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLocalVertexFactory *pFStack_40;
  FDataType *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLocalVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  local_68 = &param_1->Data;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocalVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLocalVertexFactory::Copy_::__l2::TSTR_FLocalVertexFactoryCopyData413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FLocalVertexFactory::Copy'::__l2::TSTR_FLocalVertexFactoryCopyData413>
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
  BeginUpdateResourceRHI((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// GetPSOPrecacheVertexFetchElements @ 147ec25a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLocalVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  uchar local_28;
  uchar uStack_27;
  uchar uStack_26;
  uchar uStack_25;
  uchar uStack_24;
  uchar uStack_23;
  uchar uStack_22;
  uchar uStack_21;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\x03';
  local_48[3] = '\0';
  local_48[4] = '\f';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
      (local_48 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
  if (param_1 == PositionAndNormalOnly) {
    local_48[8] = '\x01';
    local_48[9] = '\x04';
    builtin_memcpy(auStack_3e,"\x05\x02\b",4);
    auStack_3e[4] = '\0';
    auStack_3e[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
        (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
         CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar3) &&
     (bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar3)) {
    if (param_1 == Default) {
      local_28 = '\x01';
      uStack_27 = '\0';
      uStack_22 = '\x01';
      uStack_21 = '\0';
      uStack_26 = '\x14';
      uStack_25 = '\r';
      uStack_24 = '\x04';
      uStack_23 = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffd8) &&
          (&stack0xffffffffffffffd8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(_uStack_22,CONCAT42(_uStack_26,_local_28));
    }
    else if (param_1 == PositionOnly) {
      local_38[8] = '\x01';
      local_38[9] = '\0';
      auStack_2e[4] = '\x01';
      auStack_2e[5] = '\0';
      builtin_memcpy(auStack_2e,"\x14\x01\x04",4);
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
          (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
    }
    else {
      if (param_1 != PositionAndNormalOnly) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                           ,0x174,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38[0] = '\x02';
      local_38[1] = '\0';
      local_38[6] = '\x01';
      local_38[7] = '\0';
      local_38[2] = '\x14';
      local_38[3] = '\x01';
      local_38[4] = '\x04';
      local_38[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
          (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
    }
    *(undefined8 *)(param_2->AllocatorInstance).InlineData[lVar6].Pad = uVar5;
  }
  return;
}

// GetType @ 147ec6f50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall FLocalVertexFactory::GetType(FLocalVertexFactory *this)

{
  return &StaticType;
}

// GetVertexElements @ 147ec7520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLocalVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,bool param_3,FDataType *param_4,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_5,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_6,int *param_7)

{
  EVertexStreamUsage EVar1;
  uchar uVar2;
  uchar uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  FVertexStreamComponent *pFVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  undefined1 local_138 [9];
  uchar uStack_12f;
  uchar uStack_12e;
  uchar uStack_12d;
  ushort uStack_12c;
  ushort uStack_12a;
  undefined1 local_128 [9];
  uchar auStack_11f [3];
  ushort uStack_11c;
  uchar auStack_11a [2];
  undefined1 local_118 [9];
  uchar uStack_10f;
  uchar uStack_10e;
  uchar uStack_10d;
  ushort uStack_10c;
  ushort uStack_10a;
  undefined1 local_108 [9];
  uchar uStack_ff;
  uchar uStack_fe;
  uchar uStack_fd;
  ushort uStack_fc;
  ushort uStack_fa;
  undefined1 local_f8 [16];
  uchar local_e8 [4];
  ushort local_e4;
  byte local_e2;
  uchar local_e1;
  FVertexStream local_e0;
  FVertexStream local_d0;
  FVertexStream local_c0;
  FVertexStream local_b0;
  FVertexStream local_a0;
  FVertexStreamComponent local_90;
  FVertexStream local_80;
  FVertexStream local_70;
  FVertexStream local_60;
  longlong *local_50;
  longlong *local_48;
  
  if ((param_2 != Default) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputStreamType == EVertexInputStreamType::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                         ,0x1e6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
    EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
    uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
    uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
    local_e0.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
    local_e0.Offset = (uint)param_4->_padding_;
    local_e0.Padding = '\0';
    local_e0.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    local_e0.VertexStreamUsage = EVar1;
    iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_e0);
    local_138[8] = (uchar)iVar7;
    uStack_12c = local_e0.Stride;
    uStack_12a = (ushort)(EVar1 & Instancing);
    uStack_12d = '\0';
    uStack_12f = uVar3;
    uStack_12e = uVar2;
    if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_138 + 8)) &&
        (local_138 + 8 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = param_5->ArrayNum;
    if (iVar7 == param_5->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar7 + 1;
    *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar7].Pad =
         CONCAT26(uStack_12a,
                  CONCAT24(uStack_12c,
                           CONCAT13(uStack_12d,
                                    CONCAT12(uStack_12e,CONCAT11(uStack_12f,local_138[8])))));
  }
  piVar16 = &param_5->ArrayMax;
  if (!param_3) {
    if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
      bVar4 = *(byte *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_e4 = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_e8 = *(uchar (*) [4])&param_4->_padding_;
      local_f8._8_8_ = param_4->_padding_;
      local_e2 = bVar4;
      local_e1 = param_3;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        (param_6,(FVertexStream *)(local_f8 + 8));
      local_138[0] = (uchar)iVar7;
      local_138._4_2_ = local_e4;
      local_138._6_2_ = ZEXT12(bVar4 & 1);
      local_138[3] = '\x01';
      local_138[1] = uVar3;
      local_138[2] = uVar2;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
          (local_138 < (param_5->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_5->ArrayNum;
      if (iVar7 == *piVar16) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,piVar16);
      }
      param_5->ArrayNum = iVar7 + 1;
      *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar7].Pad =
           CONCAT26(local_138._6_2_,
                    CONCAT24(local_138._4_2_,
                             CONCAT13(local_138[3],
                                      CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
    }
    piVar16 = &param_5->ArrayNum;
    piVar17 = &param_5->ArrayMax;
    if ((uchar  [8])param_4->_padding_ != (uchar  [8])0x0) {
      bVar4 = *(byte *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_e4 = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_e8 = *(uchar (*) [4])&param_4->_padding_;
      local_e1 = '\0';
      local_f8._8_8_ = param_4->_padding_;
      local_e2 = bVar4;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        (param_6,(FVertexStream *)(local_f8 + 8));
      local_138[0] = (uchar)iVar7;
      local_138._4_2_ = local_e4;
      local_138._6_2_ = ZEXT12(bVar4 & 1);
      local_138[3] = '\x02';
      local_138[1] = uVar3;
      local_138[2] = uVar2;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_138) &&
          (local_138 < (param_5->AllocatorInstance).InlineData + *piVar17)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *piVar16;
      if (iVar7 == *piVar17) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,piVar17);
      }
      *piVar16 = iVar7 + 1;
      *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar7].Pad =
           CONCAT26(local_138._6_2_,
                    CONCAT24(local_138._4_2_,
                             CONCAT13(local_138[3],
                                      CONCAT12(local_138[2],CONCAT11(local_138[1],local_138[0])))));
    }
    if (param_4->_padding_ == 0) {
      param_4->_padding_ = GNullColorVertexBuffer._40_8_;
      *(undefined4 *)&param_4->_padding_ = 0;
    }
    if ((uchar  [8])param_4->_padding_ == (uchar  [8])0x0) {
      local_c0._12_4_ = 0x40000;
      local_c0.VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
      local_c0.Offset = 0;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_c0);
      local_128[8] = (uchar)iVar7;
      uStack_11c = local_c0.Stride;
      auStack_11f[0] = '\0';
      auStack_11f[1] = '\b';
      auStack_11f[2] = '\x03';
      auStack_11a[0] = '\0';
      auStack_11a[1] = '\0';
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_128 + 8)) &&
          (local_128 + 8 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *piVar16;
      if (iVar7 == param_5->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
        *piVar16 = iVar7;
      }
      *piVar16 = iVar7 + 1;
      uVar9 = CONCAT26(auStack_11a,
                       CONCAT24(uStack_11c,
                                CONCAT13(auStack_11f[2],CONCAT21(auStack_11f._0_2_,local_128[8]))));
    }
    else {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_d0.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_d0.Offset = (uint)param_4->_padding_;
      local_d0.Padding = '\0';
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      local_d0.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      local_d0.VertexStreamUsage = EVar1;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_d0);
      local_128[0] = (uchar)iVar7;
      local_128._4_2_ = local_d0.Stride;
      local_128._6_2_ = ZEXT12(EVar1 & Instancing);
      local_128[3] = '\x03';
      local_128[1] = uVar2;
      local_128[2] = uVar3;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_128) &&
          (local_128 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *piVar16;
      if (iVar7 == param_5->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
        *piVar16 = iVar7;
      }
      *piVar16 = iVar7 + 1;
      uVar9 = CONCAT26(local_128._6_2_,
                       CONCAT24(local_128._4_2_,
                                CONCAT13(local_128[3],
                                         CONCAT12(local_128[2],CONCAT11(local_128[1],local_128[0])))
                               ));
    }
    uVar15 = 0;
    *(undefined8 *)(param_5->AllocatorInstance).InlineData[iVar7].Pad = uVar9;
    uVar12 = *piVar16 - 1;
    uVar10 = 0;
    if ((int)uVar12 < *piVar16) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_50 = &param_4->_padding_;
    *param_7 = (uint)(param_5->AllocatorInstance).InlineData[(longlong)*piVar16 + -1].Pad[0];
    iVar7 = (int)*local_50;
    if (iVar7 != 0) {
      if (0 < iVar7) {
        local_48 = &param_4->_padding_;
        do {
          plVar13 = local_48;
          piVar17 = &param_5->ArrayMax;
          uVar10 = 0;
          if ((int)uVar15 < (int)local_48[8]) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar13 = plVar13 + (longlong)(int)uVar15 * 2;
          local_b0.Padding = '\0';
          local_b0.VertexBuffer = (FVertexBuffer *)*plVar13;
          EVar1 = *(EVertexStreamUsage *)((longlong)plVar13 + 0xf);
          uVar2 = *(uchar *)((longlong)plVar13 + 0xe);
          local_b0.Stride = (ushort)*(byte *)((longlong)plVar13 + 0xd);
          local_b0.Offset = (uint)plVar13[1];
          uVar3 = *(uchar *)((longlong)plVar13 + 0xc);
          local_b0.VertexStreamUsage = EVar1;
          iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_b0);
          local_118[0] = (uchar)iVar7;
          local_118[3] = (char)uVar15 + '\x04';
          local_118._4_2_ = local_b0.Stride;
          local_118._6_2_ = ZEXT12(EVar1 & Instancing);
          local_118[1] = uVar3;
          local_118[2] = uVar2;
          if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_118) &&
              (local_118 < (param_5->AllocatorInstance).InlineData + *piVar17)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = *piVar16;
          if (iVar7 == *piVar17) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                              (0x208,&param_5->AllocatorInstance,piVar17);
            *piVar16 = iVar7;
          }
          *piVar16 = iVar7 + 1;
          uVar15 = uVar15 + 1;
          *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar7].Pad =
               CONCAT26(local_118._6_2_,
                        CONCAT24(local_118._4_2_,
                                 CONCAT13(local_118[3],
                                          CONCAT12(local_118[2],CONCAT11(local_118[1],local_118[0]))
                                         )));
          iVar7 = (int)*local_50;
        } while ((int)uVar15 < iVar7);
      }
      piVar16 = &param_5->ArrayNum;
      for (; iVar7 < 4; iVar7 = iVar7 + 1) {
        iVar8 = (int)param_4->_padding_;
        uVar12 = iVar8 - 1;
        uVar10 = 0;
        if ((int)uVar12 < iVar8) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = (longlong)(int)uVar12;
        local_a0.Padding = '\0';
        EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + lVar11 * 0x10 + 7);
        local_a0.VertexBuffer = (FVertexBuffer *)(&param_4->_padding_)[lVar11 * 2];
        uVar2 = *(uchar *)((longlong)&param_4->_padding_ + lVar11 * 0x10 + 6);
        uVar3 = *(uchar *)((longlong)&param_4->_padding_ + lVar11 * 0x10 + 4);
        local_a0.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + lVar11 * 0x10 + 5);
        local_a0.Offset = (uint)(&param_4->_padding_)[lVar11 * 2];
        local_a0.VertexStreamUsage = EVar1;
        iVar8 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_a0);
        local_118[8] = (uchar)iVar8;
        uStack_10d = (char)iVar7 + '\x04';
        piVar17 = &param_5->ArrayMax;
        uStack_10c = local_a0.Stride;
        uStack_10a = (ushort)(EVar1 & Instancing);
        uStack_10f = uVar3;
        uStack_10e = uVar2;
        if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_118 + 8)) &&
            (local_118 + 8 < (param_5->AllocatorInstance).InlineData + *piVar17)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *piVar16;
        if (iVar8 == *piVar17) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_5->AllocatorInstance,piVar17);
          *piVar16 = iVar8;
        }
        *piVar16 = iVar8 + 1;
        *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar8].Pad =
             CONCAT26(uStack_10a,
                      CONCAT24(uStack_10c,
                               CONCAT13(uStack_10d,
                                        CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_118[8])))));
      }
    }
    bVar6 = IsGPUSkinPassThroughSupported(GMaxRHIShaderPlatform);
    if (bVar6) {
      pFVar14 = &param_4->PreSkinPositionComponent;
      local_90.StreamOffset = 0;
      local_80.VertexBuffer = pFVar14->VertexBuffer;
      local_90.VertexBuffer = (FVertexBuffer *)&GNullVertexBuffer;
      local_90.Offset = '\0';
      local_90.Stride = '\0';
      local_90.Type.Value = '\x03';
      local_90.VertexStreamUsage = '\0';
      if ((uchar  [8])local_80.VertexBuffer == (uchar  [8])0x0) {
        pFVar14 = &local_90;
        local_80.VertexBuffer = (FVertexBuffer *)&GNullVertexBuffer;
      }
      EVar1 = pFVar14->VertexStreamUsage;
      uVar2 = (pFVar14->Type).Value;
      local_80.Stride = (ushort)pFVar14->Stride;
      local_80.Offset = pFVar14->StreamOffset;
      uVar3 = pFVar14->Offset;
      local_80.Padding = '\0';
      local_80.VertexStreamUsage = EVar1;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_80);
      local_108[0] = (uchar)iVar7;
      local_108._4_2_ = local_80.Stride;
      local_108._6_2_ = ZEXT12(EVar1 & Instancing);
      local_108[3] = '\x0e';
      local_108[1] = uVar3;
      local_108[2] = uVar2;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_108) &&
          (local_108 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_5->ArrayNum;
      if (iVar7 == param_5->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar7 + 1;
      *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar7].Pad =
           CONCAT26(local_108._6_2_,
                    CONCAT24(local_108._4_2_,
                             CONCAT13(local_108[3],
                                      CONCAT12(local_108[2],CONCAT11(local_108[1],local_108[0])))));
    }
    piVar16 = &param_5->ArrayMax;
    local_70.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
    if (local_70.VertexBuffer == (FVertexBuffer *)0x0) {
      iVar7 = (int)param_4->_padding_;
      if (iVar7 == 0) {
        return;
      }
      if ((iVar7 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_60.VertexBuffer = (FVertexBuffer *)param_4->_padding_;
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_60.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_60.Offset = (uint)param_4->_padding_;
      local_60.Padding = '\0';
      local_60.VertexStreamUsage = EVar1;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_60);
      local_f8[0] = (uchar)iVar7;
      local_f8._4_2_ = local_60.Stride;
      local_f8._6_2_ = ZEXT12(EVar1 & Instancing);
      local_f8[3] = '\x0f';
      local_f8[1] = uVar3;
      local_f8[2] = uVar2;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) &&
          (local_f8 < (param_5->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_5->ArrayNum;
      if (iVar7 == param_5->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar7 + 1;
      uVar9 = CONCAT26(local_f8._6_2_,
                       CONCAT24(local_f8._4_2_,
                                CONCAT13(local_f8[3],
                                         CONCAT12(local_f8[2],CONCAT11(local_f8[1],local_f8[0])))));
    }
    else {
      EVar1 = *(EVertexStreamUsage *)((longlong)&param_4->_padding_ + 7);
      uVar2 = *(uchar *)((longlong)&param_4->_padding_ + 6);
      uVar3 = *(uchar *)((longlong)&param_4->_padding_ + 4);
      local_70.Stride = (ushort)*(byte *)((longlong)&param_4->_padding_ + 5);
      local_70.Offset = (uint)param_4->_padding_;
      local_70.Padding = '\0';
      local_70.VertexStreamUsage = EVar1;
      iVar7 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_6,&local_70);
      local_108[8] = (uchar)iVar7;
      uStack_fc = local_70.Stride;
      uStack_fa = (ushort)(EVar1 & Instancing);
      uStack_fd = '\x0f';
      uStack_ff = uVar3;
      uStack_fe = uVar2;
      if (((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_108 + 8)) &&
          (local_108 + 8 < (param_5->AllocatorInstance).InlineData + *piVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_5->ArrayNum;
      if (iVar7 == *piVar16) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,piVar16);
      }
      param_5->ArrayNum = iVar7 + 1;
      uVar9 = CONCAT26(uStack_fa,
                       CONCAT24(uStack_fc,
                                CONCAT13(uStack_fd,
                                         CONCAT12(uStack_fe,CONCAT11(uStack_ff,local_108[8])))));
    }
    *(undefined8 *)(param_5->AllocatorInstance).InlineData[iVar7].Pad = uVar9;
  }
  return;
}

// GetVertexElements @ 147ec82f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLocalVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,bool param_3,FDataType *param_4,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [144];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_1c = 8;
  GetVertexElements(param_1,param_2,param_3,param_4,param_5,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_b8 + 0x10),(int *)(local_b8 + 8));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if (bVar2) {
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      local_b8[0] = (uchar)local_20;
      local_b8[1] = '\0';
      local_b8[2] = '\x14';
      local_b8[3] = '\r';
      local_b8[4] = '\x04';
      local_b8[5] = '\0';
      local_b8[6] = '\x01';
      local_b8[7] = '\0';
      if ((param_5 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
         (local_b8 < (param_5->AllocatorInstance).InlineData + param_5->ArrayMax)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = param_5->ArrayNum;
      if (iVar3 == param_5->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar3 + 1;
      *(ulonglong *)(param_5->AllocatorInstance).InlineData[iVar3].Pad =
           CONCAT44(local_b8._4_4_,CONCAT13(local_b8[3],CONCAT21(local_b8._1_2_,local_b8[0])));
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// InitRHI @ 147ecb990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FLocalVertexFactory::InitRHI(FLocalVertexFactory *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *pTVar1;
  byte bVar2;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar7;
  FGenericStaticFeatureLevel FVar8;
  Type TVar9;
  ulonglong uVar10;
  undefined1 auStackY_108 [32];
  FLocalVertexFactory *local_c8;
  undefined1 local_c0 [144];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId423,"FLocalVertexFactory_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId423);
  }
  if (4 < *(byte *)((longlong)&this->_padding_ + 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidFeatureLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,0x1aa,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  FVar8.FeatureLevel = (uint)bVar2;
  if (bVar2 == 5) {
    FVar8.FeatureLevel = GMaxRHIFeatureLevel;
  }
  UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,FVar8);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar9 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar9 = GMaxRHIFeatureLevel;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x30))(this);
  if ((*(uint *)(lVar6 + 0x38) & 0x4000) != 0) {
    bVar5 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar9);
    if (bVar5) {
      bVar5 = true;
      goto LAB_147ecba86;
    }
  }
  bVar5 = false;
LAB_147ecba86:
  if ((this->Data)._padding_ != (this->Data)._padding_) {
    local_c8 = this;
    `FLocalVertexFactory::InitRHI'::__l12::<lambda_1>::operator()(&local_c8,PositionOnly,false);
    `FLocalVertexFactory::InitRHI'::__l12::<lambda_1>::operator()
              (&local_c8,PositionAndNormalOnly,true);
  }
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  local_2c = 0x11;
  local_30 = 0;
  TVar9 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar9 = GMaxRHIFeatureLevel;
  }
  GetVertexElements(TVar9,Default,bVar5,&this->Data,
                    (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c0 + 8),
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->_padding_,&this->ColorStreamIndex);
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,
             (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c0 + 8),'\r','\r');
  if ((int)this->_padding_ < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,0x1cc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVertexFactory::InitDeclaration
            ((FVertexFactory *)this,(TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c0 + 8),
             Default);
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(GetDeclaration())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,0x1cf,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar10 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bSupportsManualVertexFetch != 0) ||
     (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId470,
                 "FLocalVertexFactory_InitRHI_CreateLocalVFUniformBuffer",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                 ,0x1d6);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId470);
    }
    TVar7 = CreateLocalVFUniformBuffer
                      ((FLocalVertexFactory *)local_c0,(uint)this,
                       (FColorVertexBuffer *)
                       (ulonglong)*(byte *)((longlong)&(this->Data)._padding_ + 6),0,0);
    pTVar1 = &this->UniformBuffer;
    if ((TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)pTVar1 != TVar7) {
      this_00 = *pTVar1;
      *pTVar1 = *(TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *)TVar7;
      *(undefined8 *)TVar7 = 0;
      if (this_00 != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((FRHIResource *)local_c0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c0._0_8_);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(GetDeclaration())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,0x1da,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ModifyCompilationEnvironment @ 147ecf990

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLocalVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FName local_res18 [2];
  
  ::FName::FName(&local_res8,L"VF_SUPPORTS_SPEEDTREE_WIND");
  bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res8);
  if (!bVar3) {
    FShaderCompilerEnvironment::SetDefine(param_2,local_res8,L"1");
  }
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch != 0) {
    ::FName::FName(local_res18,L"MANUAL_VERTEX_FETCH");
    bVar3 = FShaderCompilerEnvironment::ContainsDefinition(param_2,local_res18[0]);
    if (!bVar3) {
      FShaderCompilerEnvironment::SetDefine(param_2,local_res18[0],L"1");
    }
  }
  if ((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) != None) {
    EVar1 = param_1->Platform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                        (FGenericStaticFeatureLevel)
                        FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
    if (bVar3) {
      bVar3 = true;
      goto LAB_147ecfaad;
    }
  }
  bVar3 = false;
LAB_147ecfaad:
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar3);
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_LOCAL_SPACE",L"1");
  if ((param_1->VertexFactoryType->Flags & SupportsGPUSkinPassThrough) != None) {
    bVar3 = IsGPUSkinPassThroughSupported(param_1->Platform);
    FShaderCompilerEnvironment::SetDefine(param_2,L"SUPPORT_GPUSKIN_PASSTHROUGH",bVar3);
  }
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"ALWAYS_EVALUATE_WORLD_POSITION_OFFSET",
             (uint)((ulonglong)(param_1->MaterialParameters)._padding_ >> 0x3d) & 1);
  return;
}

// SetData @ 147edc3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLocalVertexFactory::SetData
          (FLocalVertexFactory *this,FRHICommandListBase *param_1,FDataType *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  
  cVar1 = *(char *)((longlong)&param_2->_padding_ + 6);
  if ((cVar1 != '\0') && (cVar1 != '\b')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InData.ColorComponent.Type == VET_None) || (InData.ColorComponent.Type == VET_Color)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,399,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FDataType::operator=(&this->Data,param_2);
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// SetData @ 147edc450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FLocalVertexFactory::SetData(FLocalVertexFactory *this,FDataType *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  if ((cVar1 != '\0') && (cVar1 != '\b')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InData.ColorComponent.Type == VET_None) || (InData.ColorComponent.Type == VET_Color)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,399,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FDataType::operator=(&this->Data,param_1);
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// ShouldCompilePermutation @ 147ede560

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLocalVertexFactory::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  pTVar4 = CVarIgnoreLVFUsageMode.Ref;
  if ((param_1->Flags & HasEditorOnlyData) != None) {
    return true;
  }
  EVar1 = param_1->Platform;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar4->ShadowedValue + lVar7);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0xf4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC != 0) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0xe2,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
          return true;
        }
      }
    }
    else if (iVar2 == 2) {
      return true;
    }
  }
  return (bool)(*(byte *)((longlong)&(param_1->MaterialParameters)._padding_ + 6) & 1);
}

// ValidateCompiledResult @ 147ee5f70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLocalVertexFactory::ValidateCompiledResult
          (FVertexFactoryType *param_1,EShaderPlatform param_2,FShaderParameterMap *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  size_t sVar4;
  ForAnyElementType FVar5;
  FString local_58;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Flags & SupportsPrimitiveIdStream) != None) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = UseGPUScene((FStaticShaderPlatform)param_2,
                        (FGenericStaticFeatureLevel)
                        FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel);
    if ((bVar2) && (bVar2 = IsMobilePlatform((FStaticShaderPlatform)param_2), !bVar2)) {
      pFVar3 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      local_48 = pFVar3->ShaderVariableName;
      iStack_40 = 0;
      if (local_48 != (wchar_t *)0x0) {
        sVar4 = wcslen(local_48);
        iStack_40 = (int)sVar4;
      }
      local_28._12_4_ = uStack_3c;
      local_28.Size = iStack_40;
      local_28.DataPtr = local_48;
      bVar2 = FShaderParameterMap::ContainsParameterAllocation(param_3,&local_28);
      if (bVar2) {
        ::FString::PrintfImpl
                  (&local_58,
                   L"Shader attempted to bind the Primitive uniform buffer even though Vertex Factory %s computes a PrimitiveId per-instance.  This will break auto-instancing.  Shaders should use GetPrimitiveData(Parameters).Member instead of Primitive.Member."
                  );
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar5.Data = local_58.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_4,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

