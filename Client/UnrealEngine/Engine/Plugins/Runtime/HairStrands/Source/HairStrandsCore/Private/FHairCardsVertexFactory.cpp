// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 16

// FHairCardsVertexFactory @ 14e07c7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairCardsVertexFactory * __thiscall
FHairCardsVertexFactory::FHairCardsVertexFactory
          (FHairCardsVertexFactory *this,FHairGroupInstance *param_1,uint param_2,
          EHairGeometryType param_3,EShaderPlatform param_4,Type param_5,char *param_6)

{
  FVertexBuffer *this_00;
  longlong lVar1;
  
  FRenderResource::FRenderResource((FRenderResource *)this,param_5);
  this->_padding_ = 0;
  this_00 = (FVertexBuffer *)this->DeformedPositionVertexBuffer;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  lVar1 = 2;
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
  this->_padding_ = (longlong)&___7FHairCardsVertexFactory__6B_;
  (this->Data).Instance = (FHairGroupInstance *)0x0;
  (this->Data).LODIndex = 0;
  (this->Data).GeometryType = NoneGeometry;
  this->bIsInitialized = false;
  do {
    FVertexBuffer::FVertexBuffer(this_00);
    this_00->_padding_ = (longlong)&___7FRDGWrapperVertexBuffer__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00 = (FVertexBuffer *)&this_00[1].VertexBufferRHI;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->DeformedNormalVertexBuffer);
  (this->DeformedNormalVertexBuffer)._padding_ = (longlong)&___7FRDGWrapperVertexBuffer__6B_;
  (this->DeformedNormalVertexBuffer).ExternalBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DeformedNormalVertexBuffer).ExternalBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->DeformedNormalVertexBuffer).ExternalBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->DeformedNormalVertexBuffer).ExternalBuffer.Format = PF_Unknown;
  (this->DebugName).DebugName = param_6;
  (this->Data).GeometryType = param_3;
  (this->Data).Instance = param_1;
  (this->Data).LODIndex = param_2;
  return this;
}

// operator() @ 14e080a80

void __thiscall
`FHairCardsVertexFactory::InitResources'::__l14::<lambda_1>::operator()
          (void *this,FHairCardsVertexBuffer *param_1,uint param_2,uint param_3)

{
  uchar *puVar1;
  ForElementType<FVertexElement> *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_58 [16];
  uchar local_48 [4];
  ushort local_44;
  uchar local_42 [10];
  
  if (1 < param_2) {
    uVar7 = 8;
    uVar9 = (param_2 + 1 >> 1) << 4;
    uVar8 = (ulonglong)((param_2 - 2 >> 1) + 1);
    do {
      pFVar2 = *(ForElementType<FVertexElement> **)((longlong)this + 8);
      lVar3 = *(longlong *)this;
      if ((0xff < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStride <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((0xff < uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x46,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_42[0] = '\0';
      local_42[1] = '\0';
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_58._8_8_ = param_1;
      local_44 = (ushort)uVar9 & 0xff;
      iVar6 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                        ((TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                          *)(lVar3 + 0x20),(FVertexStream *)(local_58 + 8));
      local_58[0] = (uchar)iVar6;
      local_58._4_2_ = local_44;
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[1] = (uchar)uVar7;
      local_58[2] = '\x02';
      local_58[3] = (uchar)param_3;
      if (((pFVar2 <= (ForElementType<FVertexElement> *)local_58) &&
          (local_58 < pFVar2->InlineData + *(int *)(pFVar2[1].InlineData[0].Pad + 4))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)pFVar2[1].InlineData[0].Pad;
      puVar1 = pFVar2[1].InlineData[0].Pad + 4;
      if (iVar6 == *(int *)puVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,pFVar2,(int *)puVar1);
      }
      uVar7 = uVar7 + 0x10;
      *(int *)pFVar2[1].InlineData[0].Pad = iVar6 + 1;
      *(ulonglong *)pFVar2->InlineData[iVar6].Pad =
           CONCAT26(local_58._6_2_,
                    CONCAT24(local_58._4_2_,
                             CONCAT13(local_58[3],
                                      CONCAT12(local_58[2],CONCAT11(local_58[1],local_58[0])))));
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  return;
}

// operator() @ 14e080c90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FHairCardsVertexFactory::InitResources'::__l17::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x80);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0xf0);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x128);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x160);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  if (*(char *)((longlong)this + 8) != '\0') {
    local_48.ArrayNum = 1;
    local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x198);
    local_48.DataPtr = &local_38;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_._4_2_ = 0xffff;
    local_38.Type = Buffer;
    local_38.AccessBefore = None;
    local_38.AccessAfter = VertexOrIndexBuffer;
    local_38.Flags = None;
    local_38.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  }
  return;
}

// operator() @ 14e080ea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FHairCardsVertexFactory::InitResources'::__l26::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x80);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0xf0);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x128);
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = Buffer;
  local_38.AccessBefore = None;
  local_38.AccessAfter = VertexOrIndexBuffer;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  if (*(char *)((longlong)this + 8) != '\0') {
    local_48.ArrayNum = 1;
    local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x160);
    local_48.DataPtr = &local_38;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_._4_2_ = 0xffff;
    local_38.Type = Buffer;
    local_38.AccessBefore = None;
    local_38.AccessAfter = VertexOrIndexBuffer;
    local_38.Flags = None;
    local_38.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  }
  return;
}

// Copy @ 14e08e330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FHairCardsVertexFactory::Copy(FHairCardsVertexFactory *this,FHairCardsVertexFactory *param_1)

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
  FHairCardsVertexFactory *pFStack_70;
  FDataType *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FHairCardsVertexFactory *pFStack_40;
  FDataType *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FHairCardsVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_68 = &param_1->Data;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FHairCardsVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FHairCardsVertexFactory::Copy_::__l2::TSTR_FHairStrandsVertexFactoryCopyData367>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FHairCardsVertexFactory::Copy'::__l2::TSTR_FHairStrandsVertexFactoryCopyData367>
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

// GetPSOPrecacheVertexFetchElements @ 14e09c360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FHairCardsVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  uchar uVar2;
  uchar uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 local_68 [9];
  uchar auStack_5f [7];
  undefined1 local_58 [9];
  uchar auStack_4f [7];
  undefined1 local_48 [9];
  uchar auStack_3f [7];
  undefined1 local_38 [9];
  uchar auStack_2f [7];
  
  bVar5 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if (!bVar5) {
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[6] = '\x01';
    local_68[7] = '\0';
    local_68[2] = '\x14';
    local_68[3] = '\r';
    local_68[4] = '\0';
    local_68[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
        (local_68 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
  }
  piVar7 = &param_2->ArrayNum;
  uVar8 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bSupportsManualVertexFetch == 0) {
    uVar3 = (uchar)*piVar7;
    auStack_5f[0] = '\0';
    auStack_5f[1] = '\x04';
    auStack_5f[2] = '\0';
    auStack_5f[3] = '\x10';
    auStack_5f[4] = '\0';
    auStack_5f[5] = '\0';
    auStack_5f[6] = '\0';
    local_68[8] = uVar3;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_68 + 8)) &&
        (local_68 + 8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    piVar1 = &param_2->ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
    }
    *piVar7 = iVar6 + 1;
    local_58[1] = '\0';
    local_58[2] = '\x04';
    local_58[3] = '\x01';
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(auStack_5f._3_4_,CONCAT13(auStack_5f[2],CONCAT21(auStack_5f._0_2_,local_68[8])));
    local_58[4] = '\x10';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[0] = uVar3;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
        (local_58 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    auStack_4f[0] = '\0';
    auStack_4f[1] = '\x05';
    *piVar7 = iVar6 + 1;
    uVar2 = uVar3 + '\x01';
    auStack_4f[2] = '\x02';
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(local_58._4_4_,CONCAT13(local_58[3],CONCAT21(local_58._1_2_,local_58[0])));
    auStack_4f[3] = '\b';
    auStack_4f[4] = '\0';
    auStack_4f[5] = '\0';
    auStack_4f[6] = '\0';
    local_58[8] = uVar2;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_58 + 8)) &&
        (local_58 + 8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    *piVar7 = iVar6 + 1;
    local_48[1] = '\x04';
    local_48[2] = '\x05';
    local_48[3] = '\x03';
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(auStack_4f._3_4_,CONCAT13(auStack_4f[2],CONCAT21(auStack_4f._0_2_,local_58[8])));
    local_48[4] = '\b';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[0] = uVar2;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
        (local_48 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    auStack_3f[0] = '\0';
    auStack_3f[1] = '\a';
    *piVar7 = iVar6 + 1;
    uVar2 = uVar3 + '\x02';
    auStack_3f[2] = '\x04';
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(local_48._4_4_,CONCAT13(local_48[3],CONCAT21(local_48._1_2_,local_48[0])));
    auStack_3f[3] = '\x04';
    auStack_3f[4] = '\0';
    auStack_3f[5] = '\0';
    auStack_3f[6] = '\0';
    local_48[8] = uVar2;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
        (local_48 + 8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    *piVar7 = iVar6 + 1;
    local_38[1] = '\0';
    local_38[2] = '\a';
    local_38[3] = '\x05';
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(auStack_3f._3_4_,CONCAT13(auStack_3f[2],CONCAT21(auStack_3f._0_2_,local_48[8])));
    local_38[4] = '\x04';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[0] = uVar2;
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
        (local_38 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    auStack_2f[0] = '\0';
    auStack_2f[1] = '\x04';
    local_38[8] = uVar3 + '\x03';
    *piVar7 = iVar6 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(local_38._4_4_,CONCAT13(local_38[3],CONCAT21(local_38._1_2_,local_38[0])));
    auStack_2f[2] = '\x06';
    auStack_2f[3] = '\x10';
    auStack_2f[4] = '\0';
    auStack_2f[5] = '\0';
    auStack_2f[6] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
        (local_38 + 8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *piVar7;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
      *piVar7 = iVar6;
    }
    *piVar7 = iVar6 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(auStack_2f._3_4_,CONCAT13(auStack_2f[2],CONCAT21(auStack_2f._0_2_,local_38[8])));
  }
  return;
}

// GetPrimitiveIdMode @ 14e09cce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

EPrimitiveIdMode __thiscall
FHairCardsVertexFactory::GetPrimitiveIdMode(FHairCardsVertexFactory *this,Type param_1)

{
  return PrimID_DynamicPrimitiveShaderData;
}

// GetType @ 14e0a3a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FVertexFactoryType * __thiscall FHairCardsVertexFactory::GetType(FHairCardsVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 14e0a4390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardsVertexFactory::InitRHI(FHairCardsVertexFactory *this,FRHICommandListBase *param_1)

{
  return;
}

// InitResources @ 14e0a4430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardsVertexFactory::InitResources(FHairCardsVertexFactory *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRDGWrapperVertexBuffer *pFVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  EHairGeometryType EVar6;
  int iVar7;
  FHairGroupInstance *pFVar8;
  code *pcVar9;
  FVertexStreamComponent *pFVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  FRDGWrapperVertexBuffer *pFVar14;
  FRDGWrapperVertexBuffer *pFVar15;
  FRDGWrapperVertexBuffer *pFVar16;
  FVertexElement FVar17;
  FRenderCommandList *pFVar18;
  FCommandList *pFVar19;
  FRenderCommandTag *pFVar20;
  undefined ***pppuVar21;
  TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> TVar22;
  undefined ***pppuVar23;
  Type TVar24;
  ulonglong uVar25;
  uint uVar26;
  uchar uVar27;
  uint uVar28;
  EHairGeometryType *pEVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStack_5a8 [32];
  FRDGWrapperVertexBuffer *local_550;
  undefined4 local_548;
  undefined4 local_544;
  longlong local_540;
  undefined4 local_538;
  undefined1 local_534;
  undefined1 local_533;
  undefined2 local_532;
  FRDGWrapperVertexBuffer *local_530;
  undefined4 local_528;
  undefined4 local_524;
  FRDGWrapperVertexBuffer *local_520;
  undefined4 local_518;
  undefined4 local_514;
  FRDGWrapperVertexBuffer *local_510;
  undefined4 local_508;
  undefined4 local_504;
  longlong local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  longlong local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  longlong local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  longlong local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  longlong local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  FRDGWrapperVertexBuffer *local_4a0;
  undefined4 local_498;
  undefined4 local_494;
  FRDGWrapperVertexBuffer *local_490;
  undefined4 local_488;
  undefined4 local_484;
  longlong local_480;
  undefined4 local_478;
  undefined4 local_474;
  longlong local_470;
  undefined4 local_468;
  undefined4 local_464;
  longlong local_460;
  undefined4 local_458;
  undefined4 local_454;
  longlong local_450;
  undefined4 local_448;
  undefined4 local_444;
  longlong local_440;
  undefined4 local_438;
  undefined4 local_434;
  longlong local_430;
  undefined4 local_428;
  undefined4 local_424;
  longlong local_420;
  undefined4 local_418;
  undefined1 local_414;
  undefined1 local_413;
  undefined2 local_412;
  FScriptContainerElement *local_410;
  longlong local_408;
  FRHIResource *local_400;
  FRHIResource *local_3f8;
  FHairCardsVertexFactory *local_3f0;
  FHairStrandsRestResource *local_3e8;
  undefined4 local_3d7;
  undefined2 local_3d3;
  undefined1 local_3d1;
  undefined4 local_3c7;
  undefined2 local_3c3;
  undefined1 local_3c1;
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  FVertexStreamComponent local_360;
  FVertexStreamComponent local_350;
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  FRDGWrapperVertexBuffer local_320;
  FRDGWrapperVertexBuffer local_2d8;
  FRDGWrapperVertexBuffer local_290;
  FRDGWrapperVertexBuffer local_248;
  FRDGWrapperVertexBuffer local_200;
  undefined1 local_1b8 [160];
  undefined **local_118;
  double dStack_110;
  char local_108;
  undefined4 uStack_107;
  undefined2 uStack_103;
  undefined1 uStack_101;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  double dStack_e0;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined2 uStack_d3;
  undefined1 uStack_d1;
  undefined ***local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  double dStack_b0;
  double local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  double dStack_70;
  double local_68;
  undefined ***local_60;
  byte local_58;
  double local_48;
  
  local_48 = (double)(__security_cookie.value ^ (ulonglong)auStack_5a8);
  if (this->bIsInitialized != false) {
    return;
  }
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
  this->bIsInitialized = true;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  if ((4 < bVar3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasValidFeatureLevel()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairCardsVertexFactory.cpp"
                          ,0x181,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
  local_1b8._140_4_ = 0x11;
  TVar24 = (uint)bVar3;
  if (bVar3 == 5) {
    TVar24 = GMaxRHIFeatureLevel;
  }
  *(undefined1 *)&this->_padding_ = 0xff;
  local_1b8._136_4_ = 0;
  FVertexFactory::AddPrimitiveIdStreamElement
            ((FVertexFactory *)this,Default,(TArray<FVertexElement,TFixedAllocator<17>_> *)local_1b8
             ,'\r','\r');
  lVar13 = (**(code **)(this->_padding_ + 0x30))(this);
  uVar26 = 0;
  if (((*(uint *)(lVar13 + 0x38) & 0x4000) != 0) &&
     (bVar11 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar24), bVar11))
  goto LAB_14e0a5e0e;
  local_3e8 = (FHairStrandsRestResource *)local_1b8;
  EVar6 = (this->Data).GeometryType;
  local_3f0 = this;
  if (EVar6 == Cards) {
    uVar28 = (this->Data).LODIndex;
    pFVar8 = (this->Data).Instance;
    uVar12 = 0;
    if ((int)uVar28 < (pFVar8->Cards).LODs.ArrayNum) {
      uVar12 = ~uVar28 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar30 = (pFVar8->Cards).LODs.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x68;
    lVar13 = *(longlong *)pFVar30;
    cVar4 = *(char *)(*(longlong *)(lVar13 + 0x1d8) + 0xbc);
    iVar7 = *(int *)(*(longlong *)(lVar13 + 0x1d8) + 0xb8);
    local_408 = 0x178;
    if (cVar4 == '\0') {
      local_408 = 0xd0;
    }
    local_408 = local_408 + lVar13;
    local_410 = pFVar30;
    if (*(longlong *)(pFVar30 + 8) == 0) {
      local_500 = lVar13 + 0x60;
      local_4f8 = 0;
      local_4f4 = 0x41000;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)local_3a0,'\0');
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      local_4e8 = 0;
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_4e4 = 0x41000;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_4f0 = *(longlong *)pFVar30 + 0x60;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)(local_3a0 + 8),
                          (uchar)&local_4f0);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      local_4d8 = 0;
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_4d4 = 0x50800;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_4e0 = *(longlong *)pFVar30 + 0xd0;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)local_390,
                          (uchar)&local_4e0);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      local_4c8 = 0;
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_4c4 = 0x50804;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_4d0 = *(longlong *)pFVar30 + 0xd0;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)local_380,
                          (uchar)&local_4d0);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
    }
    else {
      pFVar2 = this->DeformedPositionVertexBuffer;
      pFVar14 = FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
                          (&local_320,(FRDGExternalBuffer *)(*(longlong *)(pFVar30 + 8) + 0x60));
      FRDGWrapperVertexBuffer::operator=(pFVar2,pFVar14);
      if (local_320.ExternalBuffer.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_320.ExternalBuffer.UAV.Reference);
      }
      if (local_320.ExternalBuffer.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_320.ExternalBuffer.SRV.Reference);
      }
      if (local_320.ExternalBuffer.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_320.ExternalBuffer.Buffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_320.ExternalBuffer.Buffer.Reference)->_padding_)
                    (local_320.ExternalBuffer.Buffer.Reference,1);
        }
      }
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_320);
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,param_1);
      pFVar14 = this->DeformedPositionVertexBuffer + 1;
      pFVar15 = FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
                          (&local_2d8,(FRDGExternalBuffer *)(*(longlong *)(pFVar30 + 8) + 0x80));
      FRDGWrapperVertexBuffer::operator=(pFVar14,pFVar15);
      if (local_2d8.ExternalBuffer.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_2d8.ExternalBuffer.UAV.Reference);
      }
      if (local_2d8.ExternalBuffer.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_2d8.ExternalBuffer.SRV.Reference);
      }
      if (local_2d8.ExternalBuffer.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_2d8.ExternalBuffer.Buffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_2d8.ExternalBuffer.Buffer.Reference)->_padding_)
                    (local_2d8.ExternalBuffer.Buffer.Reference,1);
        }
      }
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_2d8);
      (**(code **)(this->DeformedPositionVertexBuffer[1]._padding_ + 0x18))(pFVar14,param_1);
      pFVar15 = &this->DeformedNormalVertexBuffer;
      pFVar16 = FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
                          (&local_290,(FRDGExternalBuffer *)(*(longlong *)(local_410 + 8) + 0xa0));
      FRDGWrapperVertexBuffer::operator=(pFVar15,pFVar16);
      if (local_290.ExternalBuffer.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_290.ExternalBuffer.UAV.Reference);
      }
      if (local_290.ExternalBuffer.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_290.ExternalBuffer.SRV.Reference);
      }
      if (local_290.ExternalBuffer.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_290.ExternalBuffer.Buffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_290.ExternalBuffer.Buffer.Reference)->_padding_)
                    (local_290.ExternalBuffer.Buffer.Reference,1);
        }
      }
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_290);
      (**(code **)(pFVar15->_padding_ + 0x18))(pFVar15,param_1);
      local_548 = 0;
      local_544 = 0x41000;
      local_550 = pFVar2;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)(local_3c0 + 8),
                          (uchar)&local_550);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_528 = 0;
      local_524 = 0x41000;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_530 = pFVar14;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)local_3c0,
                          (uchar)&local_530);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_518 = 0;
      local_514 = 0x50800;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_520 = pFVar15;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)local_3b0,
                          (uchar)&local_520);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      lVar13 = (longlong)(int)local_1b8._136_4_;
      local_508 = 0;
      local_504 = 0x50804;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_510 = pFVar15;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,(FVertexStreamComponent *)(local_3b0 + 8),
                          (uchar)&local_510);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar30 = local_410;
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
        pFVar30 = local_410;
      }
    }
    local_4b8 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_4b4 = 0x70400;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_4c0 = *(longlong *)pFVar30 + 0x140;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)(local_380 + 8),
                        (uchar)&local_4c0);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    local_4a8 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_4a4 = 0x70400;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_4b0 = local_408;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)local_370,(uchar)&local_4b0
                       );
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    uVar28 = (iVar7 + 1U >> 1) << 4;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_538 = 0;
    local_534 = 0;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_540 = *(longlong *)pFVar30 + 0x108;
    local_533 = (undefined1)uVar28;
    local_532 = 4;
    if ((0xff < uVar28) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InStride <= 0xFF",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                            ,0x45,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)(local_370 + 8),
                        (uchar)&local_540);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    `FHairCardsVertexFactory::InitResources'::__l14::<lambda_1>::operator()
              (&local_3f0,(FHairCardsVertexBuffer *)(*(longlong *)pFVar30 + 0x108),
               *(uint *)(*(longlong *)(*(longlong *)pFVar30 + 0x1d8) + 0xb8),7);
    local_100 = (undefined ***)0x0;
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FHairCardsVertexFactory::InitResources'::`17'::<lambda_2>,1,0>
                 ::_vftable_;
    dStack_110 = *(double *)pFVar30;
    uStack_107 = local_3d7;
    uStack_103 = local_3d3;
    uStack_101 = local_3d1;
    local_1b8._144_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FHairCardsVertexFactory::InitResources'::__l17::<lambda_2>,void,FRHICommandListImmediate_&>
         ::Call;
    local_108 = cVar4;
    pFVar18 = FRenderCommandList::GetInstanceTLS();
    if (pFVar18 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FHairCardsVertexFactory::InitResources_::__l17::TSTR_FHairCardsVertexFactoryTransition459>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)(local_1b8 + 0x90));
    }
    else {
      pFVar19 = FRenderCommandList::GetRenderThread(pFVar18);
      local_68 = (double)CONCAT17(uStack_101,CONCAT25(uStack_103,CONCAT41(uStack_107,local_108)));
      local_88._0_8_ = local_1b8._144_8_;
      local_60 = local_100;
      local_78 = local_118;
      dStack_70 = dStack_110;
      local_1b8._144_8_ = (code *)0x0;
      local_58 = 2;
      pFVar20 = (FRenderCommandTag *)
                TRenderCommandTag<`FHairCardsVertexFactory::InitResources'::__l17::TSTR_FHairCardsVertexFactoryTransition459>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar19,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar20);
      uVar25 = (ulonglong)local_58;
      if ((2 < uVar25) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          pppuVar23 = &local_78;
          if (local_60 != (undefined ***)0x0) {
            pppuVar23 = local_60;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25])(local_88);
      }
    }
    if ((code *)local_1b8._144_8_ != (code *)0x0) {
      pppuVar23 = &local_118;
      pppuVar21 = local_100;
LAB_14e0a5da2:
      if (pppuVar21 != (undefined ***)0x0) {
        pppuVar23 = pppuVar21;
      }
      (*(code *)(*pppuVar23)[2])();
    }
  }
  else if (EVar6 == Meshes) {
    uVar28 = (this->Data).LODIndex;
    pFVar8 = (this->Data).Instance;
    uVar12 = uVar26;
    if ((int)uVar28 < (pFVar8->Meshes).LODs.ArrayNum) {
      uVar12 = ~uVar28 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar30 = (pFVar8->Meshes).LODs.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
    lVar13 = *(longlong *)(*(longlong *)pFVar30 + 0x1a0);
    iVar7 = *(int *)(lVar13 + 0x88);
    uVar5 = *(undefined1 *)(lVar13 + 0x8c);
    lVar13 = *(longlong *)(pFVar30 + 8);
    if (lVar13 == 0) {
      local_480 = *(longlong *)pFVar30 + 0x60;
      local_478 = 0;
      local_474 = 0x41000;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,&local_350,(uchar)&local_480);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      local_468 = 0;
      uVar27 = (uchar)&local_470;
      lVar13 = (longlong)(int)local_1b8._136_4_;
      pFVar10 = &local_350;
      local_464 = 0x41000;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_470 = *(longlong *)pFVar30 + 0x60;
    }
    else {
      pFVar2 = this->DeformedPositionVertexBuffer;
      pFVar14 = FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
                          (&local_248,
                           (FRDGExternalBuffer *)
                           (((ulonglong)*(uint *)(lVar13 + 0xac) + 3) * 0x20 + lVar13));
      FRDGWrapperVertexBuffer::operator=(pFVar2,pFVar14);
      if (local_248.ExternalBuffer.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_248.ExternalBuffer.UAV.Reference);
      }
      if (local_248.ExternalBuffer.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_248.ExternalBuffer.SRV.Reference);
      }
      if (local_248.ExternalBuffer.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_248.ExternalBuffer.Buffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_248.ExternalBuffer.Buffer.Reference)->_padding_)
                    (local_248.ExternalBuffer.Buffer.Reference,1);
        }
      }
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_248);
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,param_1);
      pFVar14 = FRDGWrapperVertexBuffer::FRDGWrapperVertexBuffer
                          (&local_200,
                           (FRDGExternalBuffer *)
                           (((ulonglong)(1 - *(int *)(*(longlong *)(pFVar30 + 8) + 0xac)) + 3) *
                            0x20 + *(longlong *)(pFVar30 + 8)));
      FRDGWrapperVertexBuffer::operator=(this->DeformedPositionVertexBuffer + 1,pFVar14);
      FRDGWrapperVertexBuffer::~FRDGWrapperVertexBuffer(&local_200);
      (**(code **)(this->DeformedPositionVertexBuffer[1]._padding_ + 0x18))
                (this->DeformedPositionVertexBuffer + 1,param_1);
      local_498 = 0;
      local_494 = 0x41000;
      local_4a0 = pFVar2;
      FVar17 = FVertexFactory::AccessStreamComponent
                         ((FVertexFactory *)this,&local_360,(uchar)&local_4a0);
      if (((local_1b8 <= (ulonglong)FVar17) &&
          ((ulonglong)FVar17 <
           (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_1b8._136_4_ == local_1b8._140_4_) {
        local_1b8._136_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c))
        ;
      }
      local_488 = 0;
      uVar27 = (uchar)&local_490;
      lVar13 = (longlong)(int)local_1b8._136_4_;
      pFVar10 = &local_360;
      local_484 = 0x41000;
      local_1b8._136_4_ = local_1b8._136_4_ + 1;
      *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
      local_490 = this->DeformedPositionVertexBuffer + 1;
    }
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)&pFVar10->StreamOffset,
                        uVar27);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    local_458 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_454 = 0x50800;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_460 = *(longlong *)pFVar30 + 0xd0;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)local_340,(uchar)&local_460
                       );
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    local_448 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_444 = 0x50804;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_450 = *(longlong *)pFVar30 + 0xd0;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)(local_390 + 8),
                        (uchar)&local_450);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    local_438 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_434 = 0x70400;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_440 = *(longlong *)pFVar30 + 0xd0;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)(local_340 + 8),
                        (uchar)&local_440);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    local_428 = 0;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_424 = 0x70400;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_430 = *(longlong *)pFVar30 + 0x140;
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)local_330,(uchar)&local_430
                       );
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    uVar28 = (iVar7 + 1U >> 1) << 4;
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_418 = 0;
    local_414 = 0;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    local_420 = *(longlong *)pFVar30 + 0x108;
    local_413 = (undefined1)uVar28;
    local_412 = 4;
    if ((0xff < uVar28) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InStride <= 0xFF",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                            ,0x45,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar17 = FVertexFactory::AccessStreamComponent
                       ((FVertexFactory *)this,(FVertexStreamComponent *)(local_330 + 8),
                        (uchar)&local_420);
    if (((local_1b8 <= (ulonglong)FVar17) &&
        ((ulonglong)FVar17 < (ulonglong)((longlong)local_1b8 + (longlong)(int)local_1b8._140_4_ * 8)
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_1b8._136_4_ == local_1b8._140_4_) {
      local_1b8._136_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,(ForElementType<FVertexElement> *)local_1b8,(int *)(local_1b8 + 0x8c));
    }
    lVar13 = (longlong)(int)local_1b8._136_4_;
    local_1b8._136_4_ = local_1b8._136_4_ + 1;
    *(undefined8 *)(local_1b8 + lVar13 * 8) = *(undefined8 *)FVar17;
    `FHairCardsVertexFactory::InitResources'::__l14::<lambda_1>::operator()
              (&local_3f0,(FHairCardsVertexBuffer *)(*(longlong *)pFVar30 + 0x108),
               *(uint *)(*(longlong *)(*(longlong *)pFVar30 + 0x1a0) + 0x88),7);
    local_d0 = (undefined ***)0x0;
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FHairCardsVertexFactory::InitResources'::`26'::<lambda_3>,1,0>
                ::_vftable_;
    dStack_e0 = *(double *)pFVar30;
    uStack_d7 = local_3c7;
    uStack_d3 = local_3c3;
    uStack_d1 = local_3c1;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FHairCardsVertexFactory::InitResources'::__l26::<lambda_3>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_d8 = uVar5;
    pFVar18 = FRenderCommandList::GetInstanceTLS();
    if (pFVar18 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FHairCardsVertexFactory::InitResources_::__l26::TSTR_FHairCardsVertexFactoryTransition510>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      pFVar19 = FRenderCommandList::GetRenderThread(pFVar18);
      local_a8 = (double)CONCAT17(uStack_d1,CONCAT25(uStack_d3,CONCAT41(uStack_d7,local_d8)));
      local_c8._0_8_ = local_f8[0];
      local_a0 = local_d0;
      local_b8 = local_e8;
      dStack_b0 = dStack_e0;
      local_f8[0] = (code *)0x0;
      local_98 = 2;
      pFVar20 = (FRenderCommandTag *)
                TRenderCommandTag<`FHairCardsVertexFactory::InitResources'::__l26::TSTR_FHairCardsVertexFactoryTransition510>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar19,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_c8,pFVar20);
      uVar25 = (ulonglong)local_98;
      if ((2 < uVar25) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          pppuVar23 = &local_b8;
          if (local_a0 != (undefined ***)0x0) {
            pppuVar23 = local_a0;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25])(local_c8);
      }
    }
    if (local_f8[0] != (code *)0x0) {
      pppuVar23 = &local_e8;
      pppuVar21 = local_d0;
      goto LAB_14e0a5da2;
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  if (((int)this->_padding_ < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Streams.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairCardsVertexFactory.cpp"
                          ,0x20c,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14e0a5e0e:
  pEVar29 = &(this->Data).GeometryType;
  FVertexFactory::InitDeclaration
            ((FVertexFactory *)this,(TArray<FVertexElement,TFixedAllocator<17>_> *)local_1b8,Default
            );
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(GetDeclaration())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairCardsVertexFactory.cpp"
                          ,0x20f,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = (this->Data).Instance;
  if ((pFVar8->HairGroupPublicData == (FHairGroupPublicData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("HairInstance->HairGroupPublicData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairCardsVertexFactory.cpp"
                          ,0x212,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*pEVar29 == Cards) && (bVar11 = IsHairStrandsEnabled(Cards,GMaxRHIShaderPlatform), bVar11)) {
    uVar28 = (this->Data).LODIndex;
    if ((int)uVar28 < 0) {
      return;
    }
    if ((pFVar8->Cards).LODs.ArrayNum <= (int)uVar28) {
      return;
    }
    if (((int)uVar28 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar22 = CreateHairCardsVFUniformBuffer
                       ((FHairGroupInstance *)&local_400,(uint)pFVar8,(this->Data).LODIndex,true);
    uVar28 = (this->Data).LODIndex;
    if ((int)uVar28 < (pFVar8->Cards).LODs.ArrayNum) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>::operator=
              ((TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *)
               ((pFVar8->Cards).LODs.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x68 + 0x58),
               (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *)TVar22);
  }
  else {
    if (*pEVar29 != Meshes) {
      return;
    }
    bVar11 = IsHairStrandsEnabled(Meshes,GMaxRHIShaderPlatform);
    if (!bVar11) {
      return;
    }
    uVar28 = (this->Data).LODIndex;
    if ((int)uVar28 < 0) {
      return;
    }
    if ((pFVar8->Meshes).LODs.ArrayNum <= (int)uVar28) {
      return;
    }
    if (((int)uVar28 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar22 = CreateHairCardsVFUniformBuffer
                       ((FHairGroupInstance *)&local_3f8,(uint)pFVar8,(this->Data).LODIndex,true);
    uVar28 = (this->Data).LODIndex;
    if ((int)uVar28 < (pFVar8->Meshes).LODs.ArrayNum) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>::operator=
              ((TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *)
               ((pFVar8->Meshes).LODs.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30 + 0x20),
               (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *)TVar22);
    local_400 = local_3f8;
  }
  if (local_400 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_400);
  }
  return;
}

// ModifyCompilationEnvironment @ 14e0a9810

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
FHairCardsVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform *pEVar1;
  EShaderPlatform EVar2;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  
  pEVar1 = &param_1->Platform;
  if ((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) != None) {
    EVar2 = *pEVar1;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = UseGPUScene((FStaticShaderPlatform)*pEVar1,
                        (FGenericStaticFeatureLevel)
                        FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].MaxFeatureLevel);
    if (bVar4) {
      bVar4 = true;
      goto LAB_14e0a9888;
    }
  }
  bVar4 = false;
LAB_14e0a9888:
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar4);
  FShaderCompilerEnvironment::SetDefine(param_2,L"HAIR_CARD_MESH_FACTORY",L"1");
  EVar2 = *pEVar1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pwVar5 = L"0";
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bSupportsManualVertexFetch != 0) {
    pwVar5 = L"1";
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"MANUAL_VERTEX_FETCH",pwVar5);
  return;
}

// ReleaseRHI @ 14e0a9bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FHairCardsVertexFactory::ReleaseRHI(FHairCardsVertexFactory *this)

{
  int *piVar1;
  FRHIResource *pFVar2;
  
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar2);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,(ForElementType<FVertexFactory::FVertexStream> *)&this->_padding_,0,piVar1);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,(ForElementType<FVertexFactory::FVertexStream> *)&this->_padding_,0,piVar1);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
              (0x10,8,0,(ForElementType<FVertexFactory::FVertexStream> *)&this->_padding_,0,piVar1);
  }
  return;
}

// ReleaseResource @ 14e0a9c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FHairCardsVertexFactory::ReleaseResource(FHairCardsVertexFactory *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)(this->DeformedPositionVertexBuffer[0]._padding_ + 0x20))();
  (**(code **)(this->DeformedPositionVertexBuffer[1]._padding_ + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00014e0a9c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->DeformedNormalVertexBuffer)._padding_ + 0x20))();
  return;
}

// SetData @ 14e0ad980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FHairCardsVertexFactory::SetData(FHairCardsVertexFactory *this,FDataType *param_1)

{
  code *pcVar1;
  uint uVar2;
  EHairGeometryType EVar3;
  bool bVar4;
  
  uVar2 = param_1->LODIndex;
  EVar3 = param_1->GeometryType;
  (this->Data).Instance = param_1->Instance;
  (this->Data).LODIndex = uVar2;
  (this->Data).GeometryType = EVar3;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// ShouldCompilePermutation @ 14e0ae2f0

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
FHairCardsVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if ((((int)(param_1->MaterialParameters)._padding_ == 0) &&
      (((param_1->MaterialParameters)._padding_ & 0x8000000000U) != 0)) &&
     (bVar1 = IsHairStrandsSupported(Cards,param_1->Platform), bVar1)) {
    return true;
  }
  if (((param_1->MaterialParameters)._padding_ & 2) != 0) {
    return true;
  }
  return false;
}

// ValidateCompiledResult @ 14e0b1920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __cdecl
FHairCardsVertexFactory::ValidateCompiledResult
          (FVertexFactoryType *param_1,EShaderPlatform param_2,FShaderParameterMap *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

