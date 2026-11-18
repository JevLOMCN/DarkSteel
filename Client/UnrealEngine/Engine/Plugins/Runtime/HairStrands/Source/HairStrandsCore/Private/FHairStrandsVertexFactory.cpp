// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 11

// Copy @ 14e08e4b0

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
FHairStrandsVertexFactory::Copy(FHairStrandsVertexFactory *this,FHairStrandsVertexFactory *param_1)

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
  FHairStrandsVertexFactory *pFStack_70;
  FDataType *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FHairStrandsVertexFactory *pFStack_40;
  FDataType *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FHairStrandsVertexFactory::Copy'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_68 = &param_1->Data;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FHairStrandsVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FHairStrandsVertexFactory::Copy_::__l2::TSTR_FHairStrandsVertexFactoryCopyData234>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FHairStrandsVertexFactory::Copy'::__l2::TSTR_FHairStrandsVertexFactoryCopyData234>
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

// GetPSOPrecacheVertexFetchElements @ 14e09c9b0

void __cdecl
FHairStrandsVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  local_18 = '\0';
  uStack_17 = '\0';
  uStack_12 = '\x01';
  uStack_11 = '\0';
  uStack_16 = '\x14';
  uStack_15 = '\r';
  uStack_14 = '\x04';
  uStack_13 = '\0';
  if ((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffe8) &&
     (&stack0xffffffffffffffe8 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) {
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
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar3].Pad =
       CONCAT26(_uStack_12,CONCAT42(_uStack_16,_local_18));
  return;
}

// GetPrimitiveIdMode @ 14e09ccf0

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
FHairStrandsVertexFactory::GetPrimitiveIdMode(FHairStrandsVertexFactory *this,Type param_1)

{
  return PrimID_ForceZero;
}

// GetType @ 14e0a3aa0

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

FVertexFactoryType * __thiscall FHairStrandsVertexFactory::GetType(FHairStrandsVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 14e0a43a0

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
FHairStrandsVertexFactory::InitRHI(FHairStrandsVertexFactory *this,FRHICommandListBase *param_1)

{
  return;
}

// InitResources @ 14e0a60f0

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
FHairStrandsVertexFactory::InitResources
          (FHairStrandsVertexFactory *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  FHairGroupInstance *pFVar2;
  TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters> this_00;
  TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters> TVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float (*pafVar11) [4];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FHairStrandsInstanceCommonParameters *pFVar19;
  FRHIUniformBufferLayout *pFVar20;
  bool bVar21;
  FHairStrandsInstanceCommonParameters *pFVar22;
  FShaderParametersMetadata *pFVar23;
  TRefCountPtr<FRHIUniformBuffer> TVar24;
  TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters> *pTVar25;
  FRHIUniformBufferLayout *pFVar26;
  longlong lVar27;
  undefined1 auStack_718 [32];
  FRHIResource *local_6e8;
  TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters> local_6e0;
  FRHIUniformBufferLayout local_6d8 [2];
  FRHIShaderResourceView *local_598;
  FRHIShaderResourceView *local_590;
  FRHIShaderResourceView *local_588;
  FRHIShaderResourceView *local_580;
  FRHIShaderResourceView *local_578;
  FRHIShaderResourceView *local_570;
  FRHIShaderResourceView *local_568;
  FRHIShaderResourceView *local_558;
  FRHIShaderResourceView *local_550;
  uint local_548;
  FRHIShaderResourceView *local_540;
  TArray<FVertexElement,TFixedAllocator<17>_> local_538;
  FVertexFactoryInput local_4a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_718;
  if (this->bIsInitialized == false) {
    FRenderResource::InitResource((FRenderResource *)this,param_1);
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    this->bIsInitialized = true;
    *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
    if ((4 < bVar1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasValidFeatureLevel()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsVertexFactory.cpp"
                            ,0xfd,L""), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_538.ArrayNum = 0;
    local_538.ArrayMax = 0x11;
    bVar21 = FVertexFactory::AddPrimitiveIdStreamElement
                       ((FVertexFactory *)this,Default,&local_538,'\r',0xff);
    if (bVar21) {
      *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
    }
    if (((*(char *)((longlong)&this->_padding_ + 3) != '\0') && ((int)this->_padding_ < 1)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Streams.Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsVertexFactory.cpp"
                            ,0x109,L""), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_538,Default);
    if ((this->_padding_ == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidRef(GetDeclaration())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsVertexFactory.cpp"
                            ,0x10c,L""), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Data).Instance;
    InternalComputeHairStrandsVertexInputData(&local_4a8,(FRDGBuilder *)0x0,pFVar2,None);
    lVar27 = 2;
    pFVar19 = &local_4a8.Strands.Common;
    pFVar20 = local_6d8;
    do {
      pFVar26 = pFVar20;
      pFVar22 = pFVar19;
      lVar5 = *(longlong *)&pFVar22->RootScale;
      lVar6 = *(longlong *)&pFVar22->Length;
      pFVar7 = *(FScriptContainerElement **)&pFVar22->RaytracingRadiusScale;
      pFVar19 = (FHairStrandsInstanceCommonParameters *)
                ((pFVar22->LocalToWorldPrimitiveTransform).M + 1);
      pFVar26->_padding_ = *(longlong *)pFVar22;
      pFVar26->_padding_ = lVar5;
      uVar12 = pFVar22->GroupIndex;
      uVar13 = pFVar22->GroupCount;
      pFVar8 = *(FScriptContainerElement **)&pFVar22->PointCount;
      pFVar26->_padding_ = lVar6;
      (pFVar26->Name).Data.AllocatorInstance.Data = pFVar7;
      uVar14 = pFVar22->RaytracingProceduralSplits;
      uVar15 = pFVar22->Flags;
      pFVar7 = *(FScriptContainerElement **)&pFVar22->bSimulation;
      (pFVar26->Name).Data.ArrayNum = uVar12;
      (pFVar26->Name).Data.ArrayMax = uVar13;
      (pFVar26->Resources).AllocatorInstance.Data = pFVar8;
      uVar12 = pFVar22->bPointRemapping;
      uVar13 = pFVar22->bCurveRemapping;
      pFVar8 = *(FScriptContainerElement **)&pFVar22->SourcePointCount;
      (pFVar26->Resources).ArrayNum = uVar14;
      (pFVar26->Resources).ArrayMax = uVar15;
      (pFVar26->GraphResources).AllocatorInstance.Data = pFVar7;
      uVar9 = *(undefined8 *)&(pFVar22->PositionOffset).field0_0x0;
      pFVar7 = *(FScriptContainerElement **)((longlong)&(pFVar22->PositionOffset).field0_0x0 + 8);
      (pFVar26->GraphResources).ArrayNum = uVar12;
      (pFVar26->GraphResources).ArrayMax = uVar13;
      (pFVar26->GraphTextures).AllocatorInstance.Data = pFVar8;
      uVar10 = *(undefined8 *)&(pFVar22->PrevPositionOffset).field0_0x0;
      pFVar8 = *(FScriptContainerElement **)
                ((longlong)&(pFVar22->PrevPositionOffset).field0_0x0 + 8);
      (pFVar26->GraphTextures).ArrayNum = (int)uVar9;
      (pFVar26->GraphTextures).ArrayMax = (int)((ulonglong)uVar9 >> 0x20);
      (pFVar26->GraphBuffers).AllocatorInstance.Data = pFVar7;
      fVar16 = *(float *)((longlong)((pFVar22->LocalToWorldPrimitiveTransform).M + 0) + 0);
      fVar17 = *(float *)((longlong)((pFVar22->LocalToWorldPrimitiveTransform).M + 0) + 4);
      pFVar7 = *(FScriptContainerElement **)((pFVar22->LocalToWorldPrimitiveTransform).M[0] + 2);
      (pFVar26->GraphBuffers).ArrayNum = (int)uVar10;
      (pFVar26->GraphBuffers).ArrayMax = (int)((ulonglong)uVar10 >> 0x20);
      (pFVar26->GraphUniformBuffers).AllocatorInstance.Data = pFVar8;
      (pFVar26->GraphUniformBuffers).ArrayNum = (int)fVar16;
      (pFVar26->GraphUniformBuffers).ArrayMax = (int)fVar17;
      (pFVar26->UniformBuffers).AllocatorInstance.Data = pFVar7;
      lVar27 = lVar27 + -1;
      pFVar20 = (FRHIUniformBufferLayout *)&(pFVar26->UniformBuffers).ArrayNum;
    } while (lVar27 != 0);
    fVar16 = pFVar19->Radius;
    pafVar11 = (pFVar22->LocalToWorldPrimitiveTransform).M;
    fVar17 = *(float *)((longlong)(pafVar11 + 1) + 8);
    fVar18 = *(float *)((longlong)(pafVar11 + 1) + 0xc);
    uVar9 = *(undefined8 *)(pFVar22->LocalToWorldPrimitiveTransform).M[2];
    lVar27 = *(longlong *)((pFVar22->LocalToWorldPrimitiveTransform).M[2] + 2);
    (pFVar26->UniformBuffers).ArrayNum = (int)pFVar19->Density;
    (pFVar26->UniformBuffers).ArrayMax = (int)fVar16;
    pFVar26->Hash = (uint)fVar17;
    pFVar26->ConstantBufferSize = (uint)fVar18;
    lVar5 = *(longlong *)(pFVar22->LocalToWorldPrimitiveTransform).M[3];
    lVar6 = *(longlong *)((pFVar22->LocalToWorldPrimitiveTransform).M[3] + 2);
    pFVar26->RenderTargetsOffset = (short)uVar9;
    pFVar26->StaticSlot = (char)((ulonglong)uVar9 >> 0x10);
    pFVar26->BindingFlags = (char)((ulonglong)uVar9 >> 0x18);
    pFVar26->Flags = (char)((ulonglong)uVar9 >> 0x20);
    *(int3 *)&pFVar26->field_0x95 = (int3)((ulonglong)uVar9 >> 0x28);
    pFVar26[1]._padding_ = lVar27;
    pFVar7 = *(FScriptContainerElement **)(pFVar22->LocalToTranslatedWorldPrimitiveTransform).M[0];
    fVar16 = *(float *)((longlong)((pFVar22->LocalToTranslatedWorldPrimitiveTransform).M + 0) + 8);
    fVar17 = *(float *)((longlong)((pFVar22->LocalToTranslatedWorldPrimitiveTransform).M + 0) + 0xc)
    ;
    pFVar26[1]._padding_ = lVar5;
    pFVar26[1]._padding_ = lVar6;
    pFVar26[1].Name.Data.AllocatorInstance.Data = pFVar7;
    pFVar26[1].Name.Data.ArrayNum = (int)fVar16;
    pFVar26[1].Name.Data.ArrayMax = (int)fVar17;
    if (local_4a8.Strands.PositionBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.PositionBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.PositionOffsetBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.PositionOffsetBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
    }
    if (local_4a8.Strands.CurveAttributeBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.CurveAttributeBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.PointAttributeBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.PointAttributeBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.CurveBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.CurveBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.PointToCurveBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.PointToCurveBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.TangentBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.TangentBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
    }
    if (local_4a8.Strands.PrevPositionBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
      local_4a8.Strands.PrevPositionBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
    }
    if (local_4a8.Strands.PrevPositionOffsetBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0)
    {
      local_4a8.Strands.PrevPositionOffsetBufferRHISRV.Reference =
           (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
    }
    local_548 = (uint)pFVar2->HairGroupPublicData->Culling->bCullingResultAvailable;
    local_540 = (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._40_8_;
    if (local_548 != 0) {
      local_540 = (pFVar2->HairGroupPublicData->Culling->CulledVertexIdBuffer).SRV.Reference;
    }
    local_598 = local_4a8.Strands.PositionBufferRHISRV.Reference;
    local_590 = local_4a8.Strands.PositionOffsetBufferRHISRV.Reference;
    local_588 = local_4a8.Strands.CurveBufferRHISRV.Reference;
    local_580 = local_4a8.Strands.PointToCurveBufferRHISRV.Reference;
    local_578 = local_4a8.Strands.TangentBufferRHISRV.Reference;
    local_570 = local_4a8.Strands.CurveAttributeBufferRHISRV.Reference;
    local_568 = local_4a8.Strands.PointAttributeBufferRHISRV.Reference;
    local_558 = local_4a8.Strands.PrevPositionBufferRHISRV.Reference;
    local_550 = local_4a8.Strands.PrevPositionOffsetBufferRHISRV.Reference;
    FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(&local_4a8.Strands);
    pFVar23 = FHairStrandsVertexFactoryUniformShaderParameters::GetStructMetadata();
    if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar21)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar24 = RHICreateUniformBuffer
                       (&local_6e8,local_6d8,(EUniformBufferUsage)(pFVar23->Layout).Reference,2);
    this_00 = (TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters>)
              (TVar24.Reference)->_padding_;
    if (this_00 != (TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      pFVar23 = FHairStrandsVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((FName)(pFVar23->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
        pFVar23 = FHairStrandsVertexFactoryUniformShaderParameters::GetStructMetadata();
        if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x177,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x96,
                            L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                           );
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (local_6e8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_6e8);
    }
    pTVar25 = &(((this->Data).Instance)->Strands).UniformBuffer;
    if (pTVar25 != &local_6e0) {
      TVar3 = *pTVar25;
      *pTVar25 = this_00;
      this_00 = TVar3;
    }
    if (this_00 != (TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// ModifyCompilationEnvironment @ 14e0a9920

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
FHairStrandsVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) != None) {
    EVar1 = param_1->Platform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar5 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                        (FGenericStaticFeatureLevel)
                        FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
    if (bVar5) {
      bVar5 = IsMobilePlatform((FStaticShaderPlatform)param_1->Platform);
      if (!bVar5) {
        bVar5 = true;
        goto LAB_14e0a99a6;
      }
    }
  }
  bVar5 = false;
LAB_14e0a99a6:
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x18a,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar5);
  FShaderCompilerEnvironment::SetDefine(param_2,L"HAIR_STRAND_MESH_FACTORY",1);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"ENABLE_PROCEDURAL_INTERSECTOR",
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsRayTracing == 1 &&
             FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].
             bSupportsRayTracingProceduralPrimitive == 1);
  return;
}

// ReleaseRHI @ 14e0a9bd0

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

void __thiscall FHairStrandsVertexFactory::ReleaseRHI(FHairStrandsVertexFactory *this)

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

// SetData @ 14e0ad9e0

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
FHairStrandsVertexFactory::SetData(FHairStrandsVertexFactory *this,FDataType *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  (this->Data).Instance = param_1->Instance;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// ShouldCompilePermutation @ 14e0ae340

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
FHairStrandsVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if ((((int)(param_1->MaterialParameters)._padding_ == 0) &&
      (((param_1->MaterialParameters)._padding_ & 0x8000000000U) != 0)) &&
     (bVar1 = IsHairStrandsSupported(Strands,param_1->Platform), bVar1)) {
    return true;
  }
  if (((param_1->MaterialParameters)._padding_ & 2) != 0) {
    return true;
  }
  return false;
}

// ValidateCompiledResult @ 14e0b1930

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
FHairStrandsVertexFactory::ValidateCompiledResult
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
                   L"Shader attempted to bind the Primitive uniform buffer even though Vertex Factory %s computes a PrimitiveId per-instance.  This will break auto-instancing.  Shaders should use GetPrimitiveData(PrimitiveId).Member instead of Primitive.Member."
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

