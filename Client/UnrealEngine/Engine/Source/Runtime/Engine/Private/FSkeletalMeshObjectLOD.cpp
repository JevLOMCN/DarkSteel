// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// FSkeletalMeshObjectLOD @ 148621fa0

FSkeletalMeshObjectLOD * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::FSkeletalMeshObjectLOD
          (FSkeletalMeshObjectLOD *this,Type param_1,FSkeletalMeshRenderData *param_2,int param_3)

{
  this->RenderData = param_2;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->LocalVertexFactory,param_1,"FInstancedSkeletalMeshObjectGPUSkinLOD");
  this->FeatureLevel = param_1;
  (this->VertexFactories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexFactories).ArrayNum = 0;
  (this->VertexFactories).ArrayMax = 0;
  this->bInitialized = false;
  this->bStaticRayTracingGeometryInitialized = false;
  this->LODIndex = param_3;
  return this;
}

// operator() @ 148627ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>::
operator()(void *this,FRHICommandList *param_1)

{
  FStaticMeshVertexBuffer *this_00;
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  GPUSkinBoneInfluenceType GVar5;
  int iVar6;
  FGPUBaseSkinVertexFactory *this_01;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_2e8 [32];
  FInitializer local_2b8;
  FGPUBaseSkinVertexFactory *local_298;
  FVertexFactoryBuffers local_290;
  FDataType local_258;
  FGPUSkinDataType local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 0x18);
  lVar7 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
  if (((int)uVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar9 = *(longlong *)this;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  DestructItems<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int>
            (*(TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> **)
              (lVar9 + 0x238),*(int *)(lVar9 + 0x240));
  *(undefined4 *)(lVar9 + 0x240) = 0;
  if (*(uint *)(lVar9 + 0x244) != uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,(ForAnyElementType *)(lVar9 + 0x238),0,(int *)(lVar9 + 0x244));
  }
  uVar8 = 0;
  lVar9 = (longlong)(int)uVar1 * 0x118 + lVar7;
  do {
    if (lVar7 == lVar9) {
      if (*(char *)((longlong)this + 0x48) != '\0') {
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_._0_4_ = 0;
        this_00 = (FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x30);
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
        local_258.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_._4_4_ = 4;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_._0_4_ = 0xffffffff;
        local_258._padding_ = 0;
        local_258._padding_ = 0;
        local_258._padding_._4_2_ = 0xff;
        local_258._padding_._6_1_ = 0;
        local_258.PreSkinPositionComponent.StreamOffset = 0;
        local_258.PreSkinPositionComponent.Offset = '\0';
        local_258.PreSkinPositionComponent.Stride = '\0';
        local_258.PreSkinPositionComponent.Type.Value = '\0';
        local_258.PreSkinPositionComponent.VertexStreamUsage = Default;
        FPositionVertexBuffer::BindPositionVertexBuffer
                  ((FPositionVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0xe8),
                   (FVertexFactory *)(*(longlong *)this + 8),(FStaticMeshDataType *)&local_258);
        FStaticMeshVertexBuffer::BindTangentVertexBuffer
                  (this_00,(FVertexFactory *)(*(longlong *)this + 8),
                   (FStaticMeshDataType *)&local_258);
        FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
                  (this_00,(FVertexFactory *)(*(longlong *)this + 8),
                   (FStaticMeshDataType *)&local_258,-1);
        FStaticMeshVertexBuffer::BindLightMapVertexBuffer
                  (this_00,(FVertexFactory *)(*(longlong *)this + 8),
                   (FStaticMeshDataType *)&local_258,0);
        FLocalVertexFactory::SetData
                  ((FLocalVertexFactory *)(*(longlong *)this + 8),(FRHICommandListBase *)param_1,
                   &local_258);
        (**(code **)(*(longlong *)(*(longlong *)this + 8) + 0x18))
                  ((longlong *)(*(longlong *)this + 8),param_1);
      }
      return;
    }
    this_01 = (FGPUBaseSkinVertexFactory *)0x0;
    if ((*(int *)(lVar7 + 8) != 0) && (*(char *)(lVar7 + 0x110) == '\0')) {
      local_2b8.FeatureLevel = *(Type *)(*(longlong *)this + 0x24c);
      local_2b8.NumBones = *(uint *)(lVar7 + 0x40);
      local_2b8.NumVertices = *(uint *)((longlong)this + 0x40);
      local_2b8.BaseVertexIndex = *(uint *)(lVar7 + 0x10);
      local_2b8.bUsedForPassthroughVertexFactory = false;
      local_2b8.BoneOffset = uVar8;
      GVar5 = FSkinWeightVertexBuffer::GetBoneInfluenceType
                        (*(FSkinWeightVertexBuffer **)((longlong)this + 0x18));
      if (GVar5 == DefaultBoneInfluence) {
        this_01 = ::operator_new(0x1d0);
        if (this_01 == (FGPUBaseSkinVertexFactory *)0x0) {
LAB_148627c3e:
          this_01 = (FGPUBaseSkinVertexFactory *)0x0;
        }
        else {
          FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory(this_01,&local_2b8);
          this_01->_padding_ = (longlong)&___7__TGPUSkinVertexFactory__0A___6B_;
        }
      }
      else {
        this_01 = ::operator_new(0x1d0);
        if (this_01 == (FGPUBaseSkinVertexFactory *)0x0) goto LAB_148627c3e;
        FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory(this_01,&local_2b8);
        this_01->_padding_ = (longlong)&___7__TGPUSkinVertexFactory__00__6B_;
      }
      local_290.StaticVertexBuffers = *(FStaticMeshVertexBuffers **)((longlong)this + 0x10);
      local_290.SkinWeightVertexBuffer = *(FSkinWeightVertexBuffer **)((longlong)this + 0x18);
      local_290.ColorVertexBuffer = *(FColorVertexBuffer **)((longlong)this + 0x20);
      local_290.MorphVertexBufferPool = *(FMorphVertexBufferPool **)((longlong)this + 0x28);
      local_290.APEXClothVertexBuffer = *(FSkeletalMeshVertexClothBuffer **)((longlong)this + 0x30);
      local_290.VertexOffsetVertexBuffers = *(FVertexOffsetBuffers **)((longlong)this + 0x38);
      local_290._48_8_ = *(undefined8 *)((longlong)this + 0x40);
      local_298 = this_01;
      FGPUSkinDataType::FGPUSkinDataType(&local_180);
      InitGPUSkinVertexFactoryComponents(&local_180,&local_290,this_01);
      (**(code **)(this_01->_padding_ + 0x58))(this_01,param_1,&local_180);
      (**(code **)(this_01->_padding_ + 0x18))(this_01,param_1);
      FGPUBaseSkinVertexFactory::UpdateUniformBuffer(this_01,(FRHICommandListBase *)param_1);
      uVar8 = uVar8 + *(int *)(lVar7 + 0x40);
    }
    lVar2 = *(longlong *)this;
    iVar6 = *(int *)(lVar2 + 0x240);
    if (iVar6 == *(int *)(lVar2 + 0x244)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar2 + 0x238),(int *)(lVar2 + 0x244));
    }
    lVar7 = lVar7 + 0x118;
    *(int *)(lVar2 + 0x240) = iVar6 + 1;
    *(FGPUBaseSkinVertexFactory **)(*(longlong *)(lVar2 + 0x238) + (longlong)iVar6 * 8) = this_01;
  } while( true );
}

// operator() @ 148627e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x2f8),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x240),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x240),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8,4);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x240),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            (*(FColorVertexBuffer **)(*(longlong *)((longlong)this + 8) + 0x350),
             *(FVertexFactory **)this,(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData(*(FLocalVertexFactory **)this,param_1,&local_e8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// operator() @ 148627fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined8 *)(*(longlong *)this + 0x40) = *(undefined8 *)((longlong)this + 0x18);
  FSkeletalMeshObjectGPUSkin::FVertexFactoryData::InitVertexFactories
            ((FVertexFactoryData *)(*(longlong *)this + 0x18),param_1,
             (FVertexFactoryBuffers *)((longlong)this + 0x10),
             (TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)((longlong)this + 0x48) + 0x10),*(Type *)((longlong)this + 0x50),
             *(EVertexAttributeFlags *)((longlong)this + 0x54),
             *(ESkeletalMeshGPUSkinTechnique *)(*(longlong *)this + 0xa0));
  lVar1 = *(longlong *)this;
  if ((*(int *)(lVar1 + 0xa4) == -1) && (*(char *)(lVar1 + 0xa0) == '\x01')) {
    *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(*(longlong *)((longlong)this + 0x48) + 0x18);
    iVar2 = FGPUSkinCache::AllocateDynamicMeshBoundsSlot
                      (*(FGPUSkinCache **)((longlong)this + 8),*(int *)(*(longlong *)this + 0xa8));
    *(int *)(*(longlong *)this + 0xa4) = iVar2;
  }
  return;
}

// operator() @ 148628050

void __thiscall
`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>::
operator()(void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)(lVar3 + 0x238);
  iVar2 = *(int *)(lVar3 + 0x240);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x240) != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x20))();
    }
    plVar4 = plVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001486280c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)this + 8) + 0x20))();
  return;
}

// operator() @ 1486280e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)(lVar3 + 0x18);
  iVar2 = *(int *)(lVar3 + 0x20);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x20) != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x20))();
    }
    plVar4 = plVar4 + 1;
  }
  if (*(longlong **)(lVar3 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x20))();
  }
  iVar2 = *(int *)(*(longlong *)this + 0xa4);
  if (iVar2 != -1) {
    FGPUSkinCache::ReleaseDynamicMeshBoundsSlot
              (*(FGPUSkinCache **)((longlong)this + 8),iVar2,*(int *)(*(longlong *)this + 0xa8));
    *(undefined4 *)(*(longlong *)this + 0xa4) = 0xffffffff;
  }
  return;
}

// operator() @ 148629540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights'::__l22::<lambda_1>::
operator()(void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code **ppcVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined8 *)(*(longlong *)((longlong)this + 0x40) + 0x40) = *(undefined8 *)this;
  lVar3 = *(longlong *)((longlong)this + 0x40);
  plVar5 = *(longlong **)(lVar3 + 0x18);
  iVar2 = *(int *)(lVar3 + 0x20);
  plVar1 = plVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x20) != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (plVar5 == plVar1) break;
    if ((code *)*plVar5 != (code *)0x0) {
      pcStack_a0 = *(code **)((longlong)this + 8);
      pcStack_98 = *(code **)((longlong)this + 0x10);
      pcStack_90 = *(code **)((longlong)this + 0x18);
      pcStack_88 = *(code **)((longlong)this + 0x20);
      local_68[0] = (code *)0x0;
      local_80 = *(code **)((longlong)this + 0x28);
      uStack_78 = *(undefined8 *)((longlong)this + 0x30);
      local_40 = (code **)0x0;
      local_b0 = *(undefined8 *)((longlong)this + 0x38);
      local_a8 = (code *)*plVar5;
      local_40 = FMemory::Malloc(0x48,8);
      local_40[1] = local_a8;
      local_40[2] = pcStack_a0;
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UpdateVertexFactory'::`9'::<lambda_1>,1,1>::
                           _vftable_;
      local_40[3] = pcStack_98;
      local_40[4] = pcStack_90;
      local_40[5] = pcStack_88;
      local_40[6] = local_80;
      uStack_70 = (undefined4)local_b0;
      uStack_6c = (undefined4)((ulonglong)local_b0 >> 0x20);
      *(undefined4 *)(local_40 + 7) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)local_40 + 0x3c) = uStack_78._4_4_;
      *(undefined4 *)(local_40 + 8) = uStack_70;
      *(undefined4 *)((longlong)local_40 + 0x44) = uStack_6c;
      if (local_40 + 1 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UpdateVertexFactory'::__l9::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
      }
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_UpdateVertexFactory_::__l9::TSTR_UpdateGPUSkinVertexFactory2210>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar4 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar4 = local_40;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    plVar5 = plVar5 + 1;
  }
  return;
}

// operator() @ 148629c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l21::<lambda_2>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FRHIBuffer *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  ForAnyElementType FVar8;
  TRefCountPtr<FRHIBuffer> this_00;
  bool bVar9;
  FDebugName *pFVar10;
  FRayTracingGeometryInitializer *pFVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  int iStack_164;
  FRayTracingGeometrySegment local_160;
  FDebugName local_138;
  FRayTracingGeometryInitializer local_128;
  FRayTracingGeometryInitializer local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_b8.bFastBuild = false;
  local_b8.bAllowUpdate = false;
  local_b8.bAllowCompaction = true;
  local_b8.bTemplate = false;
  local_b8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_b8.IndexBufferOffset = 0;
  local_b8.GeometryType = RTGT_Triangles;
  local_b8.TotalPrimitiveCount = 0;
  local_b8.Type = Rendering;
  local_b8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Segments.ArrayNum = 0;
  local_b8.Segments.ArrayMax = 0;
  local_b8.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_b8.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_b8.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_b8.DebugName);
  local_b8.OwnerName.ComparisonIndex.Value = 0;
  local_b8.OwnerName.Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::DebugName,"FSkeletalMeshObjectCPUSkin");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar7 = DebugNumber;
  DebugNumber = DebugNumber + 1;
  pFVar10 = FDebugName::FDebugName(&local_138,::DebugName,iVar7);
  this_00.Reference = local_b8.IndexBuffer.Reference;
  pFVar3 = *(FRHIBuffer **)((longlong)this + 0x10);
  local_b8.DebugName.Name = pFVar10->Name;
  local_b8.DebugName.Number = pFVar10->Number;
  if (local_b8.IndexBuffer.Reference != pFVar3) {
    local_b8.IndexBuffer.Reference = pFVar3;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
    if (this_00.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00.Reference);
    }
  }
  local_b8.TotalPrimitiveCount = *(uint *)((longlong)this + 0x20);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff;
  local_b8.bFastBuild = true;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  iStack_164 = 0;
  uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x28) + 8);
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar2,&local_170,0,&iStack_164);
    }
    plVar4 = *(longlong **)((longlong)this + 0x28);
    lVar6 = plVar4[1];
    lVar13 = *plVar4;
    lVar14 = (longlong)(int)lVar6 * 0x118 + lVar13;
    while( true ) {
      if ((int)plVar4[1] != (int)lVar6) {
        local_178[0] = 0;
        `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_178);
      }
      if (lVar13 == lVar14) break;
      pFVar3 = *(FRHIBuffer **)((longlong)this + 8);
      local_160.VertexBuffer.Reference = (FRHIBuffer *)0x0;
      local_160.VertexBufferElementType = VET_Float3;
      local_160.VertexBufferOffset = 0;
      local_160.VertexBufferStride = 0xc;
      local_160.MaxVertices = 0;
      local_160.FirstPrimitive = 0;
      local_160.NumPrimitives = 0;
      local_160.bForceOpaque = false;
      local_160.bAllowDuplicateAnyHitShaderInvocation = true;
      local_160.bEnabled = true;
      if (pFVar3 != (FRHIBuffer *)0x0) {
        local_160.VertexBuffer.Reference = pFVar3;
        FRHIResource::AddRef((FRHIResource *)pFVar3);
      }
      local_160.MaxVertices = *(uint *)((longlong)this + 0x18);
      local_160.VertexBufferStride = *(uint *)((longlong)this + 0x1c);
      local_160.VertexBufferElementType = VET_Float3;
      local_160.VertexBufferOffset = 0;
      local_160.NumPrimitives = *(uint *)(lVar13 + 8);
      local_160.FirstPrimitive = *(uint *)(lVar13 + 4) / 3;
      if ((*(char *)(lVar13 + 0x110) != '\0') ||
         (local_160.bEnabled = true, *(char *)(lVar13 + 0xe) == '\0')) {
        local_160.bEnabled = false;
      }
      if ((local_170.Data <= &local_160) &&
         (&local_160 < (FRayTracingGeometrySegment *)(local_170.Data + (longlong)iStack_164 * 0x28))
         ) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_168 == iStack_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_170,&iStack_164);
      }
      lVar12 = (longlong)local_168;
      local_168 = local_168 + 1;
      *(undefined8 *)&local_170.Data[lVar12 * 0x28].field_0x0 = 0;
      pFVar1 = local_170.Data + lVar12 * 0x28;
      *(FRHIBuffer **)&pFVar1->field_0x0 = local_160.VertexBuffer.Reference;
      if (local_160.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_160.VertexBuffer.Reference);
      }
      *(EVertexElementType *)(pFVar1 + 8) = local_160.VertexBufferElementType;
      *(uint *)(pFVar1 + 0xc) = local_160.VertexBufferOffset;
      *(uint *)(pFVar1 + 0x10) = local_160.VertexBufferStride;
      *(uint *)(pFVar1 + 0x14) = local_160.MaxVertices;
      *(uint *)(pFVar1 + 0x18) = local_160.FirstPrimitive;
      *(uint *)(pFVar1 + 0x1c) = local_160.NumPrimitives;
      pFVar1[0x20] = (FScriptContainerElement)local_160.bForceOpaque;
      pFVar1[0x21] = (FScriptContainerElement)local_160.bAllowDuplicateAnyHitShaderInvocation;
      pFVar1[0x22] = (FScriptContainerElement)local_160.bEnabled;
      if (local_160.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_160.VertexBuffer.Reference);
      }
      lVar13 = lVar13 + 0x118;
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data,
               local_b8.Segments.ArrayNum);
    iVar7 = local_168;
    FVar8.Data = local_170.Data;
    local_b8.Segments.ArrayNum = local_168;
    if ((local_168 == 0) && (local_b8.Segments.ArrayMax == 0)) {
      local_b8.Segments.ArrayNum = 0;
      local_b8.Segments.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_168,local_b8.Segments.ArrayMax,&local_b8.Segments.AllocatorInstance,
                 local_168,&local_b8.Segments.ArrayMax);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                (local_b8.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar8.Data,
                 iVar7);
    }
    lVar13 = *(longlong *)this;
    local_b8.SourceGeometry =
         *(FRHIRayTracingGeometry **)(*(longlong *)((longlong)this + 0x30) + 0xe8);
    pFVar11 = FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&local_128,&local_b8);
    FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar13 + 0x358),pFVar11);
    (**(code **)(*(longlong *)(*(longlong *)this + 0x358) + 0x18))
              ((longlong *)(*(longlong *)this + 0x358),param_1);
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_170.Data,local_168);
    if ((FRayTracingGeometrySegment *)local_170.Data != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_170.Data);
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data,
               local_b8.Segments.ArrayNum);
    if ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data !=
        (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_b8.Segments.AllocatorInstance.Data);
    }
    if (local_b8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8.IndexBuffer.Reference);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetVertexBuffers @ 148650e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::GetVertexBuffers
          (FSkeletalMeshObjectLOD *this,FVertexFactoryBuffers *param_1,
          FSkeletalMeshLODRenderData *param_2)

{
  param_1->StaticVertexBuffers = &param_2->StaticVertexBuffers;
  param_1->ColorVertexBuffer = this->MeshObjectColorBuffer;
  param_1->SkinWeightVertexBuffer = this->MeshObjectWeightBuffer;
  param_1->MorphVertexBufferPool = (this->MorphVertexBufferPool).Reference;
  param_1->APEXClothVertexBuffer = &param_2->ClothVertexBuffer;
  param_1->NumVertices = (param_2->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  return;
}

// InitMorphResources @ 1486550d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitMorphResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshObjectLODInfo *param_1,Type param_2)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  FMorphVertexBufferPool *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  if (this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x9cc,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LODIndex < 0) ||
     ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x9cd,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->SkelMeshRenderData;
  uVar7 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->MorphVertexBufferPool).Reference;
  lVar4 = *(longlong *)
           (*(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
           0x290);
  if (pFVar3->bInitializedResources == false) {
    if (pFVar3->MorphVertexBuffers[0]._padding_ != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MorphVertexBuffers[0].VertexBufferRHI.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0xe8,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pFVar3->MorphVertexBuffers[1]._padding_ != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MorphVertexBuffers[1].VertexBufferRHI.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0xe9,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3->MorphVertexBuffers[0]._padding_ = lVar4;
    BeginInitResource((FRenderResource *)pFVar3->MorphVertexBuffers,
                      &UE::RenderCommandPipe::SkeletalMesh);
    if (pFVar3->bDoubleBuffer != false) {
      pFVar3->MorphVertexBuffers[1]._padding_ = lVar4;
      BeginInitResource((FRenderResource *)(pFVar3->MorphVertexBuffers + 1),
                        &UE::RenderCommandPipe::SkeletalMesh);
    }
    pFVar3->bInitializedResources = true;
  }
  return;
}

// InitResources @ 148656980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  uint uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkinWeightVertexBuffer *pFVar4;
  code *pcVar5;
  code *pcVar6;
  FColorVertexBuffer *pFVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  code **ppcVar14;
  undefined1 uVar15;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  code *local_128;
  FSkinWeightVertexBuffer *pFStack_120;
  FColorVertexBuffer *local_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FSkeletalMeshObjectLOD *local_f0;
  code *pcStack_e8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((this->RenderData == (FSkeletalMeshRenderData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0xabc,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->LODIndex < 0) || ((this->RenderData->LODRenderData).Array.ArrayNum <= this->LODIndex))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("RenderData->LODRenderData.IsValidIndex(LODIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                             ,0xabd,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = this->LODIndex;
  pFVar3 = this->RenderData;
  iVar2 = (pFVar3->LODRenderData).Array.ArrayNum;
  uVar13 = 0;
  if ((int)uVar1 < iVar2) {
    uVar13 = ~uVar1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_138 = (longlong)(int)uVar1, local_130 = (longlong)iVar2,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcStack_100 = (code *)0x0;
  pcStack_110 = (code *)0x0;
  pcStack_108 = (code *)0x0;
  pcVar5 = *(code **)((pFVar3->LODRenderData).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 8);
  local_128 = pcVar5 + 0x30;
  if ((((param_1 != (FSkelMeshComponentLODInfo *)0x0) &&
       (local_118 = param_1->OverrideVertexColors, local_118 != (FColorVertexBuffer *)0x0)) &&
      (local_118->NumVertices == *(uint *)(pcVar5 + 300))) ||
     (local_118 = (FColorVertexBuffer *)(pcVar5 + 0x138),
     param_1 != (FSkelMeshComponentLODInfo *)0x0)) {
    pFVar4 = param_1->OverrideSkinWeights;
    if ((pFVar4 != (FSkinWeightVertexBuffer *)0x0) &&
       ((pFVar4->DataVertexBuffer).NumVertices == *(uint *)(pcVar5 + 300))) {
      if ((*(uint *)(pcVar5 + 0x1bc) != (pFVar4->DataVertexBuffer).MaxBoneInfluences) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideSkinWeights->GetMaxBoneInfluences()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                              ,0x13b,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFStack_120 = param_1->OverrideSkinWeights;
      goto LAB_148656b74;
    }
    pFVar4 = param_1->OverrideProfileSkinWeights;
    if ((pFVar4 != (FSkinWeightVertexBuffer *)0x0) &&
       ((pFVar4->DataVertexBuffer).NumVertices == *(uint *)(pcVar5 + 300))) {
      if ((*(uint *)(pcVar5 + 0x1bc) != (pFVar4->DataVertexBuffer).MaxBoneInfluences) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideProfileSkinWeights->GetMaxBoneInfluences()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                              ,0x141,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFStack_120 = param_1->OverrideProfileSkinWeights;
      goto LAB_148656b74;
    }
  }
  pFStack_120 = *(FSkinWeightVertexBuffer **)(pcVar5 + 0x330);
  if (pFStack_120 == (FSkinWeightVertexBuffer *)0x0) {
    pFStack_120 = (FSkinWeightVertexBuffer *)(pcVar5 + 0x188);
  }
LAB_148656b74:
  local_f8 = *(undefined4 *)(pcVar5 + 300);
  bVar12 = IsRayTracingEnabled();
  if ((bVar12) && (this->RenderData->bSupportRayTracing != false)) {
    uVar15 = 1;
    FSkeletalMeshRenderData::InitStaticRayTracingGeometry(this->RenderData,this->LODIndex);
    this->bStaticRayTracingGeometryInitialized = true;
  }
  else {
    uVar15 = 0;
  }
  uVar11 = local_f8;
  pcVar10 = pcStack_100;
  pcVar9 = pcStack_108;
  pcVar8 = pcStack_110;
  pFVar7 = local_118;
  pFVar4 = pFStack_120;
  pcVar6 = local_128;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,uVar15);
  local_98[0] = (code *)0x0;
  local_f0 = this;
  pcStack_e8 = pcVar5;
  local_70 = FMemory::Malloc(0x58,8);
  local_70[1] = (code *)local_f0;
  local_70[2] = pcStack_e8;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[3] = pcVar6;
  local_70[4] = (code *)pFVar4;
  local_70[5] = (code *)pFVar7;
  local_70[6] = pcVar8;
  local_70[7] = pcVar9;
  local_70[8] = pcVar10;
  *(undefined4 *)(local_70 + 9) = uVar11;
  *(undefined4 *)((longlong)local_70 + 0x4c) = uStack_f4;
  *(undefined4 *)(local_70 + 10) = uStack_a8;
  *(undefined4 *)((longlong)local_70 + 0x54) = uStack_a4;
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_FSkeletalMeshObjectLOD_InitResources2771>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_98);
  if (local_98[0] != (code *)0x0) {
    ppcVar14 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar14 = local_70;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  this->bInitialized = true;
  return;
}

// InitResources @ 148656cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  FStaticMeshVertexBuffer *this_00;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  TVector2<float>_u_0 *pTVar4;
  FVector2DHalf *this_01;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FSkeletalMeshRenderData *pFVar9;
  longlong lVar10;
  uchar *puVar11;
  FRHIResource *this_02;
  FRHIResource *this_03;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  FSkinWeightVertexBuffer *pFVar20;
  longlong lVar21;
  TVector<float> *pTVar22;
  uint uVar23;
  FColorVertexBuffer *pFVar24;
  undefined ***pppuVar25;
  code **ppcVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_198 [32];
  TVector2<float>_u_0 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float> local_108;
  code *local_f8 [2];
  undefined **local_e8;
  FLocalVertexFactory *local_e0;
  FSkeletalMeshObjectLOD *local_d8;
  undefined ***local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkelMeshRenderData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                          ,0x146,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((this->LODIndex < 0) ||
      ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                          ,0x147,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar28 = this->LODIndex;
  pFVar9 = this->SkelMeshRenderData;
  uVar23 = 0;
  if ((int)uVar28 < (pFVar9->LODRenderData).Array.ArrayNum) {
    uVar23 = ~uVar28 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar10 = *(longlong *)
            ((pFVar9->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
  if (param_1 == (FSkelMeshComponentLODInfo *)0x0) {
LAB_148656e45:
    pFVar20 = *(FSkinWeightVertexBuffer **)(lVar10 + 0x330);
    if (pFVar20 == (FSkinWeightVertexBuffer *)0x0) {
      pFVar20 = (FSkinWeightVertexBuffer *)(lVar10 + 0x188);
    }
    this->MeshObjectWeightBuffer = pFVar20;
    if (param_1 != (FSkelMeshComponentLODInfo *)0x0) goto LAB_148656e64;
  }
  else {
    pFVar20 = param_1->OverrideSkinWeights;
    if ((pFVar20 == (FSkinWeightVertexBuffer *)0x0) ||
       ((pFVar20->DataVertexBuffer).NumVertices != *(uint *)(lVar10 + 300))) {
      pFVar20 = param_1->OverrideProfileSkinWeights;
      if ((pFVar20 == (FSkinWeightVertexBuffer *)0x0) ||
         ((pFVar20->DataVertexBuffer).NumVertices != *(uint *)(lVar10 + 300))) goto LAB_148656e45;
      if ((*(uint *)(lVar10 + 0x1bc) != (pFVar20->DataVertexBuffer).MaxBoneInfluences) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideProfileSkinWeights->GetMaxBoneInfluences()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                              ,0x141,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      this->MeshObjectWeightBuffer = param_1->OverrideProfileSkinWeights;
    }
    else {
      if ((*(uint *)(lVar10 + 0x1bc) != (pFVar20->DataVertexBuffer).MaxBoneInfluences) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideSkinWeights->GetMaxBoneInfluences()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                              ,0x13b,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      this->MeshObjectWeightBuffer = param_1->OverrideSkinWeights;
    }
LAB_148656e64:
    pFVar24 = param_1->OverrideVertexColors;
    if ((pFVar24 != (FColorVertexBuffer *)0x0) && (pFVar24->NumVertices == *(uint *)(lVar10 + 300)))
    goto LAB_148656e7f;
  }
  pFVar24 = (FColorVertexBuffer *)(lVar10 + 0x138);
LAB_148656e7f:
  this->MeshObjectColorBuffer = pFVar24;
  this_00 = (FStaticMeshVertexBuffer *)(lVar10 + 0x30);
  FPositionVertexBuffer::Init
            (&this->PositionVertexBuffer,(FPositionVertexBuffer *)(lVar10 + 0xe8),true);
  FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,*(uint *)(lVar10 + 0xdc),4,true);
  fVar18 = _UNK_151040078;
  fVar17 = _UNK_151040074;
  fVar16 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar15 = _UNK_150d565e8;
  fVar14 = _UNK_150d565e4;
  fVar13 = ___xmm_38000100380001003800010038000100;
  uVar30 = 0;
  if (*(int *)(lVar10 + 0xdc) != 0) {
    do {
      lVar27 = *(longlong *)(lVar10 + 0xc0);
      uVar28 = (uint)uVar30;
      pcVar12 = *(code **)(**(longlong **)(lVar10 + 0xa0) + 0x50);
      if (*(char *)(lVar10 + 0xe1) == '\0') {
        uVar1 = lVar27 + uVar30 * 8;
        lVar21 = (*pcVar12)();
        if (((ulonglong)(lVar21 + lVar27) < uVar1 + 8) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x104,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((uVar1 < *(ulonglong *)(lVar10 + 0xc0)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x105,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        auVar31 = pmovsxbd(in_XMM1,*(undefined4 *)(uVar1 + 4));
        fVar32 = (float)auVar31._0_4_ * fVar16;
        fVar33 = (float)auVar31._4_4_ * fVar17;
        fVar34 = (float)auVar31._8_4_ * fVar18;
      }
      else {
        uVar1 = lVar27 + uVar30 * 0x10;
        lVar21 = (*pcVar12)();
        if (((ulonglong)(lVar21 + lVar27) < uVar1 + 0x10) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x104,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((uVar1 < *(ulonglong *)(lVar10 + 0xc0)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x105,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        auVar31 = pmovsxwd(in_XMM1,*(undefined8 *)(uVar1 + 8));
        fVar32 = (float)auVar31._0_4_ * fVar13;
        fVar33 = (float)auVar31._4_4_ * fVar14;
        fVar34 = (float)auVar31._8_4_ * fVar15;
      }
      pTVar22 = FStaticMeshVertexBuffer::VertexTangentY(this_00,&local_108,uVar28);
      lVar27 = *(longlong *)(lVar10 + 0xc0);
      uVar5 = *(undefined8 *)&pTVar22->field0_0x0;
      fVar6 = (pTVar22->field0_0x0)._s_0.Z;
      pcVar12 = *(code **)(**(longlong **)(lVar10 + 0xa0) + 0x50);
      if (*(char *)(lVar10 + 0xe1) == '\0') {
        puVar3 = (undefined4 *)(lVar27 + uVar30 * 8);
        lVar21 = (*pcVar12)();
        if (((undefined4 *)(lVar21 + lVar27) < puVar3 + 2) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0xec,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((puVar3 < *(undefined4 **)(lVar10 + 0xc0)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0xed,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        auVar31 = pmovsxbd(auVar31,*puVar3);
        local_138._s_0.X = (float)auVar31._0_4_ * fVar16;
        local_138._s_0.Y = (float)auVar31._4_4_ * fVar17;
        local_14c = CONCAT44(local_138._s_0.Y,local_138._s_0.X);
        local_138._s_0.Z = (float)auVar31._8_4_ * fVar18;
        local_144 = local_138._s_0.Z;
      }
      else {
        puVar2 = (undefined8 *)(lVar27 + uVar30 * 0x10);
        lVar21 = (*pcVar12)();
        if (((undefined8 *)(lVar21 + lVar27) < puVar2 + 2) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0xec,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((puVar2 < *(undefined8 **)(lVar10 + 0xc0)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0xed,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        auVar31 = pmovsxwd(auVar31,*puVar2);
        local_138._s_0.X = (float)auVar31._0_4_ * fVar13;
        local_138._s_0.Y = (float)auVar31._4_4_ * fVar14;
        local_158 = CONCAT44(local_138._s_0.Y,local_138._s_0.X);
        local_138._s_0.Z = (float)auVar31._8_4_ * fVar15;
        local_150 = local_138._s_0.Z;
      }
      in_XMM1 = ZEXT416((uint)local_138._s_0.X);
      local_128._0_8_ = CONCAT44(fVar33,fVar32);
      local_128._s_0.Z = fVar34;
      local_118._0_8_ = uVar5;
      local_118._s_0.Z = fVar6;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&this->StaticMeshVertexBuffer,uVar28,(TVector<float> *)&local_138._s_0,
                 (TVector<float> *)&local_118._s_0,(TVector<float> *)&local_128._s_0);
      if (*(char *)(lVar10 + 0xe0) == '\0') {
        FStaticMeshVertexBuffer::GetVertexUV_Typed<0>(this_00,(uint)&local_160,uVar28);
      }
      else {
        FStaticMeshVertexBuffer::GetVertexUV_Typed<1>(this_00,(uint)&local_160,uVar28);
      }
      puVar11 = (this->StaticMeshVertexBuffer).TexcoordDataPtr;
      lVar27 = (this->StaticMeshVertexBuffer).NumTexCoords * uVar30;
      pcVar12 = *(code **)((longlong)*(this->StaticMeshVertexBuffer).TexcoordData + 0x50);
      if ((this->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
        this_01 = (FVector2DHalf *)(puVar11 + lVar27 * 4);
        lVar27 = (*pcVar12)();
        if (((FVector2DHalf *)(puVar11 + lVar27) < this_01 + 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((this_01 < (FVector2DHalf *)(this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVector2DHalf::operator=(this_01,(TVector2<float> *)&local_160._s_0);
      }
      else {
        pTVar4 = (TVector2<float>_u_0 *)(puVar11 + lVar27 * 8);
        lVar27 = (*pcVar12)();
        if (((TVector2<float>_u_0 *)(puVar11 + lVar27) < pTVar4 + 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((pTVar4 < (TVector2<float>_u_0 *)(this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *pTVar4 = local_160;
      }
      uVar30 = (ulonglong)(uVar28 + 1);
    } while (uVar28 + 1 < *(uint *)(lVar10 + 0xdc));
  }
  BeginInitResource((FRenderResource *)&this->PositionVertexBuffer,
                    &UE::RenderCommandPipe::SkeletalMesh);
  BeginInitResource((FRenderResource *)&this->StaticMeshVertexBuffer,
                    &UE::RenderCommandPipe::SkeletalMesh);
  local_d0 = (undefined ***)0x0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_e0 = &this->VertexFactory;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_d8 = this;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshCPUSkinVertexFactory350>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_f8);
  if (local_f8[0] != (code *)0x0) {
    pppuVar25 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar25 = local_d0;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  bVar19 = IsRayTracingEnabled();
  if ((bVar19) && (this->SkelMeshRenderData->bSupportRayTracing != false)) {
    if ((this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("SkelMeshRenderData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                            ,0x170,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (((this->LODIndex < 0) ||
        ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                            ,0x171,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar28 = this->LODIndex;
    pFVar9 = this->SkelMeshRenderData;
    uVar23 = 0;
    if ((int)uVar28 < (pFVar9->LODRenderData).Array.ArrayNum) {
      uVar23 = ~uVar28 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar10 = *(longlong *)
              ((pFVar9->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
    this_02 = *(FRHIResource **)(lVar10 + 0x108);
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_02);
    }
    if ((*(longlong *)(lVar10 + 0x28) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IndexBuffer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                            ,0x51,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_03 = *(FRHIResource **)(*(longlong *)(lVar10 + 0x28) + 0x20);
    if (this_03 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_03);
    }
    uVar7 = *(undefined4 *)(lVar10 + 300);
    iVar29 = 0;
    uVar8 = *(undefined4 *)(lVar10 + 0x128);
    uVar28 = 0;
    if (0 < *(int *)(lVar10 + 0x18)) {
      lVar27 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar28 < *(int *)(lVar10 + 0x18)) {
          uVar23 = ~uVar28 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar28 = uVar28 + 1;
        iVar29 = iVar29 + *(int *)(lVar27 + 8 + *(longlong *)(lVar10 + 0x10));
        lVar27 = lVar27 + 0x118;
      } while ((int)uVar28 < *(int *)(lVar10 + 0x18));
    }
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_02);
    }
    if (this_03 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_03);
    }
    local_c8[0] = (code *)0x0;
    local_a0 = FMemory::Malloc(0x40,8);
    local_a0[1] = (code *)this;
    local_a0[2] = (code *)this_02;
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::`21'::<lambda_2>,1,1>
                         ::_vftable_;
    *(undefined4 *)((longlong)local_a0 + 0x24) = uVar8;
    local_a0[3] = (code *)this_03;
    local_a0[7] = (code *)(lVar10 + 0x530);
    *(undefined4 *)(local_a0 + 4) = uVar7;
    *(int *)(local_a0 + 5) = iVar29;
    local_a0[6] = (code *)(lVar10 + 0x10);
    if (local_a0 != (code **)&DAT_fffffffffffffff8) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l21::<lambda_2>,void,FRHICommandList_&>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources_::__l21::TSTR_InitSkeletalRenderCPUSkinRayTracingGeometry384>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_c8);
    if (local_c8[0] != (code *)0x0) {
      ppcVar26 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar26 = local_a0;
      }
      (**(code **)(*ppcVar26 + 0x10))();
    }
    if (this_03 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_03);
    }
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_02);
    }
  }
  this->bResourcesInitialized = true;
  return;
}

// InitResources @ 1486576c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FGPUSkinCache *param_1,FSkelMeshObjectLODInfo *param_2,
          FSkelMeshComponentLODInfo *param_3,Type param_4,EVertexAttributeFlags param_5)

{
  uint uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  code **ppcVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  FStaticMeshVertexBuffers *local_f8;
  FSkinWeightVertexBuffer *pFStack_f0;
  FColorVertexBuffer *local_e8;
  FMorphVertexBufferPool *pFStack_e0;
  FSkeletalMeshVertexClothBuffer *local_d8;
  code *pcStack_d0;
  uint local_c8;
  undefined4 uStack_c4;
  FSkeletalMeshObjectLOD *local_c0;
  FGPUSkinCache *pFStack_b8;
  undefined8 uStack_78;
  Type local_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x9a1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LODIndex < 0) ||
     ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x9a2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar3 = this->SkelMeshRenderData;
  iVar2 = (pFVar3->LODRenderData).Array.ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_108 = (longlong)(int)uVar1;
    local_100 = (longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FSkeletalMeshLODRenderData **)
            ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pFStack_f0 = FSkeletalMeshObject::GetSkinWeightVertexBuffer(pFVar4,param_3);
  this->MeshObjectWeightBuffer = pFStack_f0;
  if (((param_3 == (FSkelMeshComponentLODInfo *)0x0) ||
      (local_e8 = param_3->OverrideVertexColors, local_e8 == (FColorVertexBuffer *)0x0)) ||
     (local_e8->NumVertices != (pFVar4->StaticVertexBuffers).PositionVertexBuffer.NumVertices)) {
    local_e8 = &(pFVar4->StaticVertexBuffers).ColorVertexBuffer;
  }
  this->MeshObjectColorBuffer = local_e8;
  local_f8 = &pFVar4->StaticVertexBuffers;
  pFStack_e0 = (this->MorphVertexBufferPool).Reference;
  local_d8 = &pFVar4->ClothVertexBuffer;
  local_c8 = (pFVar4->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  local_70 = param_4;
  uStack_6c = CONCAT31(uStack_6c._1_3_,param_5);
  pcStack_d0 = (code *)0x0;
  local_68[0] = (code *)0x0;
  local_c0 = this;
  pFStack_b8 = param_1;
  uStack_78 = pFVar4;
  local_40 = FMemory::Malloc(0x60,8);
  local_40[1] = (code *)local_c0;
  local_40[2] = (code *)pFStack_b8;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_40[3] = (code *)local_f8;
  local_40[4] = (code *)pFStack_f0;
  local_40[5] = (code *)local_e8;
  local_40[6] = (code *)pFStack_e0;
  local_40[7] = (code *)local_d8;
  local_40[8] = pcStack_d0;
  *(uint *)(local_40 + 9) = local_c8;
  *(undefined4 *)((longlong)local_40 + 0x4c) = uStack_c4;
  *(undefined4 *)(local_40 + 10) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)local_40 + 0x54) = uStack_78._4_4_;
  local_40[0xb] = (code *)CONCAT44(uStack_6c,local_70);
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_FSkeletalMeshObjectLOD_InitResources2477>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar8 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar8 = local_40;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  return;
}

// ReleaseResources @ 14865fc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources
          (FSkeletalMeshObjectLOD *this)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  code *local_78 [2];
  undefined **local_68;
  FSkeletalMeshObjectLOD *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->RenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0xb17,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->bInitialized = false;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_60 = this;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2843>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar8 = local_50;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (this->bStaticRayTracingGeometryInitialized != false) {
    uVar1 = this->LODIndex;
    pFVar2 = this->RenderData;
    iVar7 = (pFVar2->LODRenderData).Array.ArrayNum;
    uVar6 = 0;
    if ((int)uVar1 < iVar7) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_88 = (longlong)(int)uVar1;
      local_80 = (longlong)iVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if ((0 < *(int *)(lVar3 + 0x65c)) &&
       (iVar7 = *(int *)(lVar3 + 0x65c) + -1, *(int *)(lVar3 + 0x65c) = iVar7, iVar7 == 0)) {
      local_30 = lVar3 + 0x660;
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::__l8::<lambda_1>,void>
                    ::Call;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry_::__l8::TSTR_ResetStaticRayTracingGeometryFlag783>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar8 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar8 = local_20;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      BeginReleaseResource((FRenderResource *)(lVar3 + 0x668),&UE::RenderCommandPipe::SkeletalMesh);
    }
  }
  return;
}

// ReleaseResources @ 14865fe10

void __thiscall
FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::ReleaseResources(FSkeletalMeshObjectLOD *this)

{
  BeginReleaseResource((FRenderResource *)&this->VertexFactory,&UE::RenderCommandPipe::SkeletalMesh)
  ;
  BeginReleaseResource
            ((FRenderResource *)&this->PositionVertexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  BeginReleaseResource
            ((FRenderResource *)&this->StaticMeshVertexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  BeginReleaseResource
            ((FRenderResource *)&this->RayTracingGeometry,&UE::RenderCommandPipe::SkeletalMesh);
  this->bResourcesInitialized = false;
  return;
}

// ReleaseResources @ 14865fe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources
          (FSkeletalMeshObjectLOD *this,FGPUSkinCache *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FSkeletalMeshObjectLOD *local_30;
  FGPUSkinCache *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  local_28 = param_1;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2493>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// UpdateMorphVertexBufferCPU @ 14866e1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferCPU
          (FSkeletalMeshObjectLOD *this,FRHICommandList *param_1,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,bool param_5,FMorphVertexBuffer *param_6)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TStatId TVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Alloc> FVar17;
  void *_Dst;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Init> FVar20;
  ulonglong uVar21;
  FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_RhiLockAndCopy> FVar22;
  void *_Dst_00;
  uint uVar23;
  FNameEntryId FVar24;
  int iVar25;
  FName FVar26;
  longlong lVar27;
  int iVar28;
  undefined1 *puVar29;
  uint *puVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  undefined1 local_298 [8];
  uint local_290;
  uint uStack_28c;
  FCycleCounter local_288;
  FCycleCounter local_278;
  FColor_u_0 local_268;
  FColor_u_0 local_264;
  FColor_u_0 local_260;
  uint local_25c;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_230;
  FName local_220;
  int local_210;
  int local_20c;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  LARGE_INTEGER local_1f0;
  FStatMessage local_1e8;
  FStatMessage local_1d8;
  FStatMessage local_1c8;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FSourceLocation local_158;
  FSourceLocation local_138;
  FMorphTargetDeltaIterator local_118;
  FName local_d8 [2];
  FName local_c8;
  FName local_c0;
  FName local_b8 [4];
  undefined4 local_94;
  
  TVar15 = FThreadSafeStaticStatInner<FStat_STAT_MorphVertexBuffer_Update,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_MorphVertexBuffer_Update,1> *)
                      &StatPtr_STAT_MorphVertexBuffer_Update);
  local_158.Impl._Line = 0x6e1;
  local_158.Impl._Column = 2;
  local_158.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
  ;
  local_278.StatId.ComparisonIndex.Value = 0;
  local_278.StatId.Number = 0;
  local_278.EmittedEvent = 0;
  local_158.Impl._Function =
       "void __cdecl FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferCPU(class FRHICommandList &,const class TMap<class UMorphTarget const *,int,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class UMorphTarget const *,int,0> > &,const class TArray<float,class TSizedDefaultAllocator<32> > &,const class TArray<int,class TSizedDefaultAllocator<32> > &,bool,class FMorphVertexBuffer &)"
  ;
  FCycleCounter::Start
            (&local_278,*(TStatIdData **)&(TVar15.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_158);
  if ((param_6->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(InMorphVertexBuffer.VertexBufferRHI)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0x6e2,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = this->LODIndex;
  pFVar4 = this->SkelMeshRenderData;
  uVar32 = 0;
  if ((int)uVar23 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar32 = ~uVar23 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
  if ((param_5) && (0 < GSkinCacheRecomputeTangents)) {
    bVar12 = true;
    bVar9 = true;
    if ((GSkinCacheRecomputeTangents == 2) && (uVar23 = 0, 0 < *(int *)(lVar5 + 0x18))) {
      lVar27 = 0;
      do {
        uVar32 = 0;
        if ((int)uVar23 < *(int *)(lVar5 + 0x18)) {
          uVar32 = ~uVar23 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar27) != 0) &&
           (*(char *)(*(longlong *)(lVar5 + 0x10) + 0xc + lVar27) == '\0')) goto LAB_14866e39c;
        uVar23 = uVar23 + 1;
        lVar27 = lVar27 + 0x118;
      } while ((int)uVar23 < *(int *)(lVar5 + 0x18));
    }
  }
  else {
LAB_14866e39c:
    bVar12 = false;
    bVar9 = false;
  }
  if ((GUseGPUMorphTargets == 0) || ((int)this->FeatureLevel < 3)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (param_6->bUsesComputeShader != bVar13) {
    FRenderResource::UpdateRHI((FRenderResource *)param_6,(FRHICommandListBase *)param_1);
  }
  uVar23 = *(int *)(lVar5 + 300) * 0x18;
  FVar17 = StatPtr_STAT_MorphVertexBuffer_Alloc;
  local_25c = uVar23;
  if (StatPtr_STAT_MorphVertexBuffer_Alloc ==
      (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Alloc>)0x0) {
    pFVar16 = ::FName::FName(local_d8,"STAT_MorphVertexBuffer_Alloc");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Alloc>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MorphVertexBuffer_Alloc,*pFVar16,
                        L"Morph Vertex Buffer Alloc","STATGROUP_MorphTarget","STATCAT_Advanced",
                        L"Morph",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar17;
  bVar14 = false;
  bVar13 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  FVar24 = FVar26.ComparisonIndex.Value;
  uVar32 = FVar26.Number;
  if ((FVar24.Value == 0) && (uVar32 == 0)) {
LAB_14866e506:
    bVar8 = false;
    FVar26 = local_240;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_268.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_268._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar24.Value;
        local_258.Number = uVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x700);
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14866e506;
    local_290 = FVar24.Value;
    uStack_28c = uVar32;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = false;
    bVar8 = true;
  }
  _Dst = FMemory::Malloc((ulonglong)uVar23,0);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_1e8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_1e8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_208);
      local_1e8.StatData.Pad[4] = '\0';
      local_1e8.StatData.Pad[5] = '\0';
      local_1e8.StatData.Pad[6] = '\0';
      local_1e8.StatData.Pad[7] = '\0';
      local_1e8.StatData.Pad[0] = local_208.s.LowPart._0_1_;
      local_1e8.StatData.Pad[1] = local_208.s.LowPart._1_1_;
      local_1e8.StatData.Pad[2] = local_208.s.LowPart._2_1_;
      local_1e8.StatData.Pad[3] = local_208.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_1e8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  FVar20 = StatPtr_STAT_MorphVertexBuffer_Init;
  if (StatPtr_STAT_MorphVertexBuffer_Init ==
      (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Init>)0x0) {
    pFVar16 = ::FName::FName(local_b8,"STAT_MorphVertexBuffer_Init");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_Init>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MorphVertexBuffer_Init,*pFVar16,
                        L"Morph Vertex Buffer Init","STATGROUP_MorphTarget","STATCAT_Advanced",
                        L"Morph",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar13 = false;
  bVar14 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  FVar24 = FVar26.ComparisonIndex.Value;
  uVar23 = FVar26.Number;
  if ((FVar24.Value == 0) && (uVar23 == 0)) {
LAB_14866e6fe:
    bVar8 = false;
    FVar26 = local_230;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_264.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_264._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_250.ComparisonIndex.Value = FVar24.Value;
        local_250.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_250,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x705);
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14866e6fe;
    local_290 = FVar24.Value;
    uStack_28c = uVar23;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar8 = true;
  }
  if (!bVar12) {
    iVar28 = *(int *)(lVar5 + 300) - MorphAccumulatedWeightArray.ArrayNum;
    if (0 < iVar28) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar28,&MorphAccumulatedWeightArray.AllocatorInstance,
                 &MorphAccumulatedWeightArray.ArrayNum,&MorphAccumulatedWeightArray.ArrayMax);
    }
    memset(MorphAccumulatedWeightArray.AllocatorInstance.Data,0,
           (ulonglong)*(uint *)(lVar5 + 300) << 2);
  }
  memset(_Dst,0,(ulonglong)*(uint *)(lVar5 + 300) * 0x18);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_1d8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_1d8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1d8.StatData.Pad[4] = '\0';
      local_1d8.StatData.Pad[5] = '\0';
      local_1d8.StatData.Pad[6] = '\0';
      local_1d8.StatData.Pad[7] = '\0';
      local_1d8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1d8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1d8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1d8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_1d8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_MorphVertexBuffer_ApplyDelta;
  if (StatPtr_STAT_MorphVertexBuffer_ApplyDelta ==
      (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_ApplyDelta>)0x0) {
    pFVar16 = ::FName::FName(&local_c8,"STAT_MorphVertexBuffer_ApplyDelta");
    TVar15.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MorphVertexBuffer_ApplyDelta,*pFVar16
                    ,L"Morph Vertex Buffer Apply Delta","STATGROUP_MorphTarget","STATCAT_Advanced",
                    L"Morph",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_288.StatId.ComparisonIndex.Value = 0;
  local_288.StatId.Number = 0;
  local_138.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
  ;
  local_288.EmittedEvent = 0;
  local_138.Impl._Function =
       "void __cdecl FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferCPU(class FRHICommandList &,const class TMap<class UMorphTarget const *,int,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class UMorphTarget const *,int,0> > &,const class TArray<float,class TSizedDefaultAllocator<32> > &,const class TArray<int,class TSizedDefaultAllocator<32> > &,bool,class FMorphVertexBuffer &)"
  ;
  local_138.Impl._Line = 0x718;
  local_138.Impl._Column = 3;
  FCycleCounter::Start(&local_288,TVar15,CycleStat|ClearEveryFrame,false,&local_138);
  UE::SkeletalRender::Settings::GetMorphTargetMaxBlendWeight();
  iStack_1b0 = 0;
  iVar28 = *(int *)&param_2->field_0x28;
  pTVar31 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  local_198 = 0;
  uStack_1ac = 1;
  iStack_19c = 0;
  if (iVar28 != 0) {
    puVar30 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar30 = (uint *)pTVar31;
    }
    uVar23 = *puVar30;
    while (uVar23 == 0) {
      lVar27 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar28;
      if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_14866e99d;
      uVar23 = puVar30[lVar27 + 1];
    }
    uStack_1ac = -uVar23 & uVar23;
    uVar21 = (ulonglong)uStack_1ac * 2 + 1;
    lVar27 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_210 = (int)lVar27;
    iStack_19c = local_198 + -1 + local_210;
    if (iVar28 < iStack_19c) {
      iStack_19c = iVar28;
    }
  }
LAB_14866e99d:
  uVar23 = *(uint *)&param_2->field_0x28;
  uStack_194 = local_94;
  iStack_190 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar32 = uVar23 & 0xffffffe0;
  TStack_180._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  uStack_1a0 = 0xffffffff;
  TStack_180.CurrentBitIndex = iStack_19c;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar23 >> 5;
  TStack_180._28_4_ = local_94;
  TStack_180.BaseBitIndex = local_198;
  uStack_160 = CONCAT44(uStack_18c,iStack_190);
  local_290 = uVar23;
  local_1f8 = pTVar31;
  local_1b8 = param_2;
  local_1a8 = (undefined1 *)pTVar31;
  local_188 = param_2;
  TStack_180.Array = pTVar31;
  if ((((int)uVar23 < 0) || (iVar28 < (int)uVar23)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar3 = *(uint *)&param_2->field_0x28;
  if (uVar23 != uVar3) {
    puVar29 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar29 = (undefined1 *)pTVar31;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar25 * 4);
    while (uVar23 == 0) {
      lVar27 = (longlong)iVar25;
      uVar32 = uVar32 + 0x20;
      iVar25 = iVar25 + 1;
      uVar23 = uVar3;
      local_290 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14866ead0;
      uVar23 = *(uint *)(puVar29 + lVar27 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_20c = (int)lVar27;
    uVar23 = local_20c + -1 + uVar32;
    local_290 = uVar23;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
      local_290 = uVar3;
    }
  }
LAB_14866ead0:
  while( true ) {
    pTVar11 = local_188;
    if (*(int *)&local_188->field_0x8 - *(int *)&local_188->field_0x34 != (int)uStack_160) {
      local_298[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_298);
    }
    fVar34 = __real_3f800000;
    if (((TStack_180.CurrentBitIndex == uVar23) && (TStack_180.Array == pTVar31)) &&
       (pTVar11 == param_2)) break;
    lVar27 = *(longlong *)pTVar11;
    iVar28 = *(int *)(lVar27 + 8 + (longlong)TStack_180.CurrentBitIndex * 0x18);
    plVar6 = *(longlong **)(lVar27 + (longlong)TStack_180.CurrentBitIndex * 0x18);
    if ((iVar28 < 0) || (param_3->ArrayNum <= iVar28)) {
      fVar34 = 0.0;
    }
    else {
      if ((iVar28 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar34 = *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar28 * 4);
    }
    (**(code **)(*plVar6 + 0x2c0))(plVar6,&local_118,this->LODIndex);
    while (local_118.Token != 0xffffffffffffffff) {
      if (local_118.CurrentDelta.SourceIdx < *(uint *)(lVar5 + 300)) {
        uVar21 = (ulonglong)local_118.CurrentDelta.SourceIdx;
        fVar33 = *(float *)((longlong)_Dst + uVar21 * 0x18);
        *(float *)((longlong)_Dst + uVar21 * 0x18 + 4) =
             local_118.CurrentDelta.PositionDelta.field0_0x0._s_0.Y * fVar34 +
             *(float *)((longlong)_Dst + uVar21 * 0x18 + 4);
        *(float *)((longlong)_Dst + uVar21 * 0x18 + 8) =
             local_118.CurrentDelta.PositionDelta.field0_0x0._s_0.Z * fVar34 +
             *(float *)((longlong)_Dst + uVar21 * 0x18 + 8);
        *(float *)((longlong)_Dst + uVar21 * 0x18) =
             local_118.CurrentDelta.PositionDelta.field0_0x0._s_0.X * fVar34 + fVar33;
        if (!bVar9) {
          *(float *)((longlong)_Dst + uVar21 * 0x18 + 0xc) =
               local_118.CurrentDelta.TangentZDelta.field0_0x0._s_0.X * fVar34 +
               *(float *)((longlong)_Dst + uVar21 * 0x18 + 0xc);
          *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x10) =
               local_118.CurrentDelta.TangentZDelta.field0_0x0._s_0.Y * fVar34 +
               *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x10);
          *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x14) =
               local_118.CurrentDelta.TangentZDelta.field0_0x0._s_0.Z * fVar34 +
               *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x14);
          lVar27 = (longlong)(int)local_118.CurrentDelta.SourceIdx;
          uVar23 = 0;
          if ((int)local_118.CurrentDelta.SourceIdx < MorphAccumulatedWeightArray.ArrayNum) {
            uVar23 = ~local_118.CurrentDelta.SourceIdx >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)(MorphAccumulatedWeightArray.AllocatorInstance.Data + lVar27 * 4) =
               (float)((uint)fVar34 & uVar10) +
               *(float *)(MorphAccumulatedWeightArray.AllocatorInstance.Data + lVar27 * 4);
        }
      }
      else {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1673415667652491478>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                            ,0x72a,"DeltaIt->SourceIdx < LodData.GetNumVertices()");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FMorphTargetDeltaIterator::Advance(&local_118);
      pTVar31 = local_1f8;
      uVar23 = local_290;
    }
    TStack_180._padding_._4_4_ = (uint)((ulonglong)TStack_180._padding_ >> 0x20);
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  if ((!bVar9) && (uVar23 = 0, *(int *)(lVar5 + 300) != 0)) {
    do {
      uVar21 = (ulonglong)uVar23;
      uVar32 = 0;
      if ((int)uVar23 < MorphAccumulatedWeightArray.ArrayNum) {
        uVar32 = ~uVar23 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (fVar34 < *(float *)(MorphAccumulatedWeightArray.AllocatorInstance.Data +
                             (longlong)(int)uVar23 * 4)) {
        fVar33 = fVar34 / *(float *)(MorphAccumulatedWeightArray.AllocatorInstance.Data +
                                    (longlong)(int)uVar23 * 4);
        *(float *)((longlong)_Dst + uVar21 * 0x18 + 0xc) =
             fVar33 * *(float *)((longlong)_Dst + uVar21 * 0x18 + 0xc);
        *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x10) =
             fVar33 * *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x10);
        *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x14) =
             fVar33 * *(float *)((longlong)_Dst + uVar21 * 0x18 + 0x14);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(uint *)(lVar5 + 300));
  }
  if ((local_288.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_288.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_288.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_288.StatId,CycleScopeEnd);
  }
  local_288.EmittedEvent = '\0';
  FVar22 = StatPtr_STAT_MorphVertexBuffer_RhiLockAndCopy;
  if (StatPtr_STAT_MorphVertexBuffer_RhiLockAndCopy ==
      (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_RhiLockAndCopy>)0x0) {
    pFVar16 = ::FName::FName(&local_c0,"STAT_MorphVertexBuffer_RhiLockAndCopy");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_RhiLockAndCopy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MorphVertexBuffer_RhiLockAndCopy,
                        *pFVar16,L"Morph Vertex Buffer RHI Lock and copy","STATGROUP_MorphTarget",
                        "STATCAT_Advanced",L"Morph",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar22;
  bVar12 = false;
  bVar9 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_260.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_260._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_248.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_248.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_248,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x74f);
        bVar12 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar13 = true;
      goto LAB_14866ef7b;
    }
  }
  bVar13 = false;
  FVar26 = local_220;
LAB_14866ef7b:
  lVar5 = param_6->_padding_;
  if ((((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) ||
      (param_1->field_0x64 != '\0')) &&
     (((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)) &&
      (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsTopOfPipe() || Bypass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2ed,
                           L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                          ), bVar14)))) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar2 = param_1->field_0x6a;
  if (((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2a5,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar14 = param_1->field_0x6a == '\0';
  if (bVar14) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
  }
  uVar21 = (ulonglong)local_25c;
  _Dst_00 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                              (GDynamicRHI,param_1,lVar5,0,local_25c,1);
  if (bVar14) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  memcpy(_Dst_00,_Dst,uVar21);
  if (((((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) ||
       (param_1->field_0x64 != '\0')) &&
      ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsTopOfPipe() || Bypass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2f5,
                          L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar2 = param_1->field_0x6a;
  if (((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2a5,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_1->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))();
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1);
  }
  FMemory::Free(_Dst);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_1c8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_1c8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1f0);
      local_1c8.StatData.Pad[4] = '\0';
      local_1c8.StatData.Pad[5] = '\0';
      local_1c8.StatData.Pad[6] = '\0';
      local_1c8.StatData.Pad[7] = '\0';
      local_1c8.StatData.Pad[0] = local_1f0.s.LowPart._0_1_;
      local_1c8.StatData.Pad[1] = local_1f0.s.LowPart._1_1_;
      local_1c8.StatData.Pad[2] = local_1f0.s.LowPart._2_1_;
      local_1c8.StatData.Pad[3] = local_1f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_1c8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if ((local_278.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_278.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_278.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_278.StatId,CycleScopeEnd);
  }
  return;
}

// UpdateMorphVertexBufferGPU @ 14866f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU
          (FSkeletalMeshObjectLOD *this,FRHICommandList *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,FMorphTargetVertexInfoBuffers *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,FName *param_5,
          EGPUSkinCacheEntryMode param_6,FMorphVertexBuffer *param_7,bool param_8,bool param_9,
          TVector4<double> *param_10,TVector4<double> *param_11)

{
  ushort uVar1;
  FSkeletalMeshRenderData *pFVar2;
  FShaderMapResource *this_00;
  code *pcVar3;
  FMorphVertexBuffer *pFVar4;
  FGPUMorphUpdateCS *this_01;
  FShaderMapBase *pFVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  uint uVar9;
  int iVar10;
  TStatId TVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
  *pTVar13;
  FRHIBreadcrumbNode *pFVar14;
  IRHIComputeContext *pIVar15;
  longlong *plVar16;
  FGlobalShaderMap *pFVar17;
  FShaderType *pFVar18;
  FName FVar19;
  atomic<FRHIShader_*> aVar20;
  FRHIComputeShader *pFVar21;
  FRHIBatchedShaderParameters *pFVar22;
  FRHIBatchedShaderUnbinds *pFVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  ulonglong uVar27;
  wchar_t *pwVar28;
  longlong lVar29;
  size_t _Size;
  uint *puVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 auStackY_a58 [32];
  uint local_a08;
  FCycleCounter local_9f8;
  FMorphVertexBuffer *local_9e8;
  TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable> local_9d8;
  FRHITransitionInfo *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  uint local_9b8;
  uint local_9b4;
  undefined4 local_9b0 [2];
  FSkeletalMeshObjectLOD *local_9a8;
  FRHITransitionInfo *local_998;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  FRHIUnorderedAccessView *local_988 [2];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_978;
  TIntVector3<int>_u_0 local_968;
  TIntVector3<int>_u_0 local_958;
  TIntVector4<unsigned_int>_u_0 local_948;
  float local_938;
  float local_934;
  float local_930;
  float local_92c;
  TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable> local_928;
  FSourceLocation local_918;
  FRHITransitionInfo local_8f8;
  FRHITransitionInfo local_8c8;
  FRHITransitionInfo local_898;
  undefined1 local_868 [88];
  FShaderMapBase *pFStack_810;
  undefined8 local_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined8 *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  char *local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  longlong local_7d8;
  wchar_t *pwStack_7d0;
  char *local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  longlong local_7b8;
  wchar_t *pwStack_7b0;
  FRHIBreadcrumbScope local_7a8;
  char local_798;
  FRHIBreadcrumbScope local_790;
  undefined1 local_780;
  FRHIBreadcrumbScope local_778;
  char local_768;
  undefined1 local_758 [8];
  undefined1 local_750 [8];
  TArrayView<FRHITransitionInfo_const_,int> local_748;
  TArrayView<FRHITransitionInfo_const_,int> local_738;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  FString local_718;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  TArrayView<FRHITransitionInfo_const_,int> local_6f8;
  FString local_6e8;
  TArrayView<FRHITransitionInfo_const_,int> local_6d8;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  FMetadataSerializer local_6a8;
  FMetadataSerializer local_688;
  float local_668 [128];
  uint local_468 [128];
  uint local_268 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  local_9e8 = param_7;
  local_998 = (FRHITransitionInfo *)param_10;
  local_9a8 = this;
  if ((param_7->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMorphVertexBuffer.VertexBufferRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0x64a,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar11 = FThreadSafeStaticStatInner<FStat_STAT_MorphVertexBuffer_Update,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_MorphVertexBuffer_Update,1> *)
                      &StatPtr_STAT_MorphVertexBuffer_Update);
  local_918.Impl._Line = 0x64c;
  local_918.Impl._Column = 2;
  local_918.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
  ;
  local_9f8.StatId.ComparisonIndex.Value = 0;
  local_9f8.StatId.Number = 0;
  local_9f8.EmittedEvent = 0;
  local_918.Impl._Function =
       "void __cdecl FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU(class FRHICommandList &,const class TArray<float,class TSizedDefaultAllocator<32> > &,const class FMorphTargetVertexInfoBuffers &,const class TArray<int,class TSizedDefaultAllocator<32> > &,const class FName &,enum EGPUSkinCacheEntryMode,class FMorphVertexBuffer &,bool,bool,const struct UE::Math::TVector4<double> &,const struct UE::Math::TVector4<double> &)"
  ;
  FCycleCounter::Start
            (&local_9f8,*(TStatIdData **)&(TVar11.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_918);
  pFVar2 = this->SkelMeshRenderData;
  uVar7 = this->LODIndex;
  uVar32 = 0;
  if ((int)uVar7 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar32 = ~uVar7 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar29 = *(longlong *)
            ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  if ((GUseGPUMorphTargets == 0) || ((int)local_9a8->FeatureLevel < 3)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (local_9e8->bUsesComputeShader != bVar6) {
    FRenderResource::UpdateRHI((FRenderResource *)local_9e8,(FRHICommandListBase *)param_1);
  }
  local_9b8 = param_3->NumTotalBatches;
  pwVar28 = L"";
  local_9b4 = *(uint *)(lVar29 + 300);
  if (param_6 == RayTracing) {
    pwVar28 = L"[RT]";
  }
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Desc._padding_._0_4_ = 0x65a;
    local_6b8 = 0x54c693c0;
    uStack_6b4 = 1;
    ::Desc._padding_._0_4_ = 0x54c693c0;
    ::Desc._padding_._4_4_ = uStack_6bc;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_ = (longlong)u_MorphUpdate;
    ::Desc._padding_ = (longlong)u_MorphUpdate_s__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU'::__l14
           ::<lambda_1>::
           operator()<wchar_t_const_(&)[1],FName_const_&,int_&,unsigned_int,unsigned_int>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pTVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x70,8);
  pTVar13 = UE::RHI::Breadcrumbs::Private::
            TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
            ::
            TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FName_const_&,int_&,unsigned_int_&,unsigned_int_&>
                      (pTVar13,pFVar12,&::Desc,(wchar_t (*) [1])pwVar28,param_5,&this->LODIndex,
                       &local_9b4,&local_9b8);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            (&local_778,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar13);
  pFVar4 = local_9e8;
  uStack_9c0 = 1;
  local_768 = '\x01';
  local_8f8._padding_._4_2_ = 0xffff;
  local_8f8.field1_0x8 = (FRHITransitionInfo_u_8)(local_9e8->UAVValue).Reference;
  local_9c8 = &local_8f8;
  local_748._12_4_ = uStack_9bc;
  local_748.ArrayNum = 1;
  local_8f8._padding_._0_4_ = 0xffffffff;
  local_8f8.Type = UAV;
  local_8f8.AccessBefore = None;
  local_8f8.AccessAfter = UAVCompute;
  local_8f8.Flags = None;
  local_8f8.CommitInfo.bIsSet = false;
  local_748.DataPtr = local_9c8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_748,None);
  if (param_8) {
    local_948._0_8_ = 0;
    local_948._8_8_ = 0;
    FRHIComputeCommandList::ClearUAVUint
              ((FRHIComputeCommandList *)param_1,(pFVar4->UAVValue).Reference,
               (TIntVector4<unsigned_int> *)&local_948._s_0);
  }
  if ((param_3->bRHIInitialized != false) && ((param_3->BatchesPerMorph).ArrayNum != 0)) {
    if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_7e0 = 0x666;
      local_7e8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
      ;
      local_7d8 = 0;
      pwStack_7d0 = L"MorphUpdateScatter";
      ::Desc._padding_._0_4_ = 0x51b27c40;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x666;
      ::Desc._padding_._4_4_ = uStack_7dc;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51b28310;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_Scatter;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU'::
             __l26::<lambda_3>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar14 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    uVar32 = 0;
    pFVar14->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar14->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar14->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar14->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar14->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar14->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar14->Allocator = pFVar12;
    pFVar14->TraceCpuSpecId = 0;
    pFVar14->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar14->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar14->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar14->ID = uVar7;
    pFVar14->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__07__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar14[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar8 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar8;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_6a8);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)::Desc.TraceCpuSpecId,
                   (wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                   (wchar_t *)::Desc._padding_,&local_6a8.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_6a8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar14->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_7a8,(FRHIComputeCommandList *)param_1,pFVar14);
    uStack_9c0 = 1;
    local_8c8._padding_._4_2_ = 0xffff;
    local_8c8.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar4->UAVValue).Reference;
    local_9c8 = &local_8c8;
    local_798 = '\x01';
    local_738._12_4_ = uStack_9bc;
    local_738.ArrayNum = 1;
    local_8c8._padding_._0_4_ = 0xffffffff;
    local_8c8.Type = UAV;
    local_8c8.AccessBefore = UAVCompute;
    local_8c8.AccessAfter = UAVCompute;
    local_8c8.Flags = None;
    local_8c8.CommitInfo.bIsSet = false;
    local_738.DataPtr = local_9c8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_738,None);
    local_9c8 = (FRHITransitionInfo *)(pFVar4->UAVValue).Reference;
    local_868._48_8_ = &local_9c8;
    local_868._56_4_ = 1;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      plVar16 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
      *plVar16 = (longlong)local_9c8;
      puVar24 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      local_868._72_4_ = 1;
      **(undefined8 **)&param_1->field_0x30 = puVar24;
      *(undefined8 **)&param_1->field_0x30 = puVar24 + 1;
      puVar24[1] = 0;
      *puVar24 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
      puVar24[2] = plVar16;
      puVar24[3] = CONCAT44(local_868._76_4_,1);
      local_868._64_8_ = plVar16;
    }
    else {
      pIVar15 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_728 = local_868._48_4_;
      uStack_724 = local_868._52_4_;
      uStack_720 = local_868._56_4_;
      uStack_71c = local_868._60_4_;
      (**(code **)(pIVar15->_padding_ + 0x80))(pIVar15,&local_728);
    }
    pFVar17 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [(int)local_9a8->FeatureLevel]);
    pFVar18 = (FShaderType *)FGPUMorphUpdateCS::GetStaticType();
    FGlobalShaderMap::GetShader
              (pFVar17,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_868 + 0x50),pFVar18,
               0);
    if ((FGPUMorphUpdateCS *)local_868._80_8_ == (FGPUMorphUpdateCS *)0x0) {
      FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_758);
      ::FName::ToString((FName *)FVar19,&local_718);
      FGPUMorphUpdateCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FGPUMorphUpdateCS::GetStaticType();
    uVar7 = (param_3->BatchesPerMorph).ArrayNum;
    local_9d8.ShaderContent = (FGPUMorphUpdateCS *)local_868._80_8_;
    local_9d8.ShaderMap = pFStack_810;
    if (uVar7 != 0) {
      do {
        uVar31 = 0;
        local_a08 = 0;
        if (uVar32 < uVar7) {
          do {
            if (0x7f < (uint)uVar31) goto LAB_14866fb68;
            if ((-1 < (int)uVar32) && ((int)uVar32 < param_2->ArrayNum)) {
              uVar7 = ~uVar32 >> 0x1f;
              if (((int)uVar32 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar29 = (longlong)(int)uVar32;
              if (*(float *)((param_2->AllocatorInstance).Data + lVar29 * 4) != 0.0) {
                if (((uint)(param_3->BatchStartOffsetPerMorph).ArrayNum <= uVar32) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index < (uint32)BatchStartOffsetPerMorph.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                       ,0x31,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar9 = 0;
                if ((int)uVar32 < (param_3->BatchStartOffsetPerMorph).ArrayNum) {
                  uVar9 = uVar7;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar9 = *(uint *)((param_3->BatchStartOffsetPerMorph).AllocatorInstance.Data +
                                 lVar29 * 4);
                local_468[uVar31] = local_a08;
                local_268[uVar31] = uVar9;
                uVar9 = 0;
                if ((int)uVar32 < param_2->ArrayNum) {
                  uVar9 = uVar7;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_668[uVar31] = *(float *)((param_2->AllocatorInstance).Data + lVar29 * 4);
                uVar31 = (ulonglong)((uint)uVar31 + 1);
                if (uVar32 == 0xffffffff) {
                  uVar7 = param_3->NumTotalBatches;
                }
                else {
                  if (((uint)(param_3->BatchesPerMorph).ArrayNum <= uVar32) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("index == 0xffffffff || index < (uint32)BatchesPerMorph.Num()"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                         ,0x26,L""), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar9 = 0;
                  if ((int)uVar32 < (param_3->BatchesPerMorph).ArrayNum) {
                    uVar9 = uVar7;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar7 = *(uint *)((param_3->BatchesPerMorph).AllocatorInstance.Data + lVar29 * 4);
                }
                local_a08 = local_a08 + uVar7;
              }
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < (uint)(param_3->BatchesPerMorph).ArrayNum);
          if ((uint)uVar31 < 0x80) goto LAB_14866fb04;
        }
        else {
LAB_14866fb04:
          uVar27 = (ulonglong)(0x80 - (int)uVar31);
          _Size = uVar27 << 2;
          memset(local_268 + uVar31,0,_Size);
          puVar30 = local_468 + uVar31;
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            *puVar30 = local_a08;
            puVar30 = puVar30 + 1;
          }
          memset(local_668 + uVar31,0,_Size);
        }
LAB_14866fb68:
        aVar20 = (atomic<FRHIShader_*>)0x0;
        if (local_9d8.ShaderContent != (FGPUMorphUpdateCS *)0x0) {
          this_00 = ((local_9d8.ShaderMap)->Resource).Reference;
          if ((this_00 == (FShaderMapResource *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x426,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_01 = local_9d8.ShaderContent;
          aVar20 = (this_00->RHIShaders).Ptr
                   [*(int *)((FShaderTarget *)&(local_9d8.ShaderContent)->_padding_ + 1)];
          if ((aVar20 == (atomic<FRHIShader_*>)0x0) &&
             (aVar20 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash
                                 (this_00,*(int *)((FShaderTarget *)
                                                   &(local_9d8.ShaderContent)->_padding_ + 1),true),
             pFVar5 = local_9d8.ShaderMap, aVar20 == (atomic<FRHIShader_*>)0x0)) {
            if (4 < (byte)LogShaders._0_1_) {
              if (((local_9d8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("PointerTable",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                     ,0x9b4,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FShader::GetType((FShader *)this_01,pFVar5->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            aVar20 = (atomic<FRHIShader_*>)0x0;
          }
        }
        SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar20);
        pFVar21 = TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable>::GetComputeShader
                            (&local_9d8);
        pFVar22 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        FGPUMorphUpdateCS::SetParameters
                  (local_9d8.ShaderContent,pFVar22,(TVector4<double> *)local_998,param_3,local_9e8,
                   local_a08,local_268,local_468,local_668);
        FRHIComputeCommandList::SetBatchedShaderParameters
                  ((FRHIComputeCommandList *)param_1,pFVar21,pFVar22);
        FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_968._s_0,local_a08);
        FRHIComputeCommandList::DispatchComputeShader
                  ((FRHIComputeCommandList *)param_1,local_968._s_0.X,local_968._s_0.Y,
                   local_968._s_0.Z);
        uVar7 = (param_3->BatchesPerMorph).ArrayNum;
      } while (uVar32 < uVar7);
    }
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar23 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      UnsetUAVParameter(pFVar23,&(local_9d8.ShaderContent)->MorphVertexBufferParameter);
      pFVar21 = TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable>::GetComputeShader
                          (&local_9d8);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,pFVar21,pFVar23);
    }
    pFVar4 = local_9e8;
    uStack_800 = 1;
    local_988[0] = (local_9e8->UAVValue).Reference;
    local_808 = local_988;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar24 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
      *puVar24 = local_988[0];
      puVar25 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      uStack_7f0 = 1;
      **(undefined8 **)&param_1->field_0x30 = puVar25;
      *(undefined8 **)&param_1->field_0x30 = puVar25 + 1;
      puVar25[1] = 0;
      *puVar25 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
      puVar25[2] = puVar24;
      puVar25[3] = CONCAT44(uStack_7ec,1);
      local_7f8 = puVar24;
    }
    else {
      pIVar15 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_708 = (undefined4)local_808;
      uStack_704 = local_808._4_4_;
      uStack_700 = uStack_800;
      uStack_6fc = uStack_7fc;
      (**(code **)(pIVar15->_padding_ + 0x90))(pIVar15,&local_708);
    }
    if (local_798 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_7a8);
    }
    if (param_9) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_7c0 = 0x6a5;
        local_7c8 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
        ;
        local_7b8 = 0;
        pwStack_7b0 = L"MorphUpdateNormalize";
        ::Desc._padding_._0_4_ = 0x51b27c40;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x6a5;
        ::Desc._padding_._4_4_ = uStack_7bc;
        ::Desc._padding_._0_4_ = 0;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_._0_4_ = 0x51b28350;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_Normalize;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU'::
               __l43::<lambda_4>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar14 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
      pFVar14->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar14->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar14->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar14->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar14->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar14->Data = (FRHIBreadcrumbData *)&::Desc;
      pFVar14->Allocator = pFVar12;
      pFVar14->TraceCpuSpecId = 0;
      pFVar14->TraceCpuMetadataId = 0;
      LOCK();
      UNLOCK();
      uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar14->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar14->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar14->ID = uVar7;
      pFVar14->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__09__V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar14[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar8 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)
                             CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar8;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_688);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)::Desc.TraceCpuSpecId,
                     (wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                     (wchar_t *)::Desc._padding_,&local_688.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_688);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar14->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_790,(FRHIComputeCommandList *)param_1,pFVar14)
      ;
      uStack_990 = 1;
      local_898._padding_._4_2_ = 0xffff;
      local_898.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar4->UAVValue).Reference;
      local_998 = &local_898;
      local_780 = 1;
      local_6f8._12_4_ = uStack_98c;
      local_6f8.ArrayNum = 1;
      local_898._padding_._0_4_ = 0xffffffff;
      local_898.Type = UAV;
      local_898.AccessBefore = UAVCompute;
      local_898.AccessAfter = UAVCompute;
      local_898.Flags = None;
      local_898.CommitInfo.bIsSet = false;
      local_6f8.DataPtr = local_998;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_6f8,None);
      pFVar17 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)local_9a8->FeatureLevel]);
      pFVar18 = (FShaderType *)FGPUMorphNormalizeCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar17,&local_978,pFVar18,0);
      if ((FGPUMorphNormalizeCS *)local_978.ShaderContent == (FGPUMorphNormalizeCS *)0x0) {
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_750);
        ::FName::ToString((FName *)FVar19,&local_6e8);
        FGPUMorphNormalizeCS::GetStaticType();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FGPUMorphNormalizeCS::GetStaticType();
      local_928.ShaderContent = (FGPUMorphNormalizeCS *)local_978.ShaderContent;
      pFVar21 = TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable>::GetComputeShader
                          (&local_928);
      SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar21);
      uVar26 = FMorphVertexBuffer::GetNumVerticies(pFVar4);
      pFVar21 = TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable>::GetComputeShader
                          (&local_928);
      pFVar22 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      local_9b0[0] = (undefined4)uVar26;
      SetUAVParameter(pFVar22,(FShaderResourceParameter *)((longlong)local_978.ShaderContent + 0xe0)
                      ,(pFVar4->UAVValue).Reference);
      uVar1 = ((FShaderParameter *)((longlong)local_978.ShaderContent + 0xe4))->NumBytes;
      uVar7 = (uint)uVar1;
      if (0x10 < uVar1) {
        uVar7 = 0x10;
      }
      local_938 = (float)(param_11->field0_0x0)._s_0.X;
      local_934 = (float)(param_11->field0_0x0)._s_0.Y;
      local_930 = (float)(param_11->field0_0x0)._s_0.Z;
      local_92c = (float)(param_11->field0_0x0)._s_0.W;
      if (uVar7 != 0) {
        FRHIBatchedShaderParameters::SetShaderParameter
                  (pFVar22,(uint)((FShaderParameter *)((longlong)local_978.ShaderContent + 0xe4))->
                                 BufferIndex,
                   (uint)((FShaderParameter *)((longlong)local_978.ShaderContent + 0xe4))->BaseIndex
                   ,uVar7,&local_938);
      }
      uVar1 = ((FShaderParameter *)((longlong)local_978.ShaderContent + 0xea))->NumBytes;
      uVar7 = (uint)uVar1;
      if (4 < uVar1) {
        uVar7 = 4;
      }
      if (uVar7 != 0) {
        FRHIBatchedShaderParameters::SetShaderParameter
                  (pFVar22,(uint)((FShaderParameter *)((longlong)local_978.ShaderContent + 0xea))->
                                 BufferIndex,
                   (uint)((FShaderParameter *)((longlong)local_978.ShaderContent + 0xea))->BaseIndex
                   ,uVar7,local_9b0);
      }
      FRHIComputeCommandList::SetBatchedShaderParameters
                ((FRHIComputeCommandList *)param_1,pFVar21,pFVar22);
      uVar26 = FMorphVertexBuffer::GetNumVerticies(pFVar4);
      iVar10 = (int)uVar26 + 0x3f;
      FComputeShaderUtils::GetGroupCountWrapped
                ((TIntVector3<int> *)&local_958._s_0,(int)((iVar10 >> 0x1f & 0x3fU) + iVar10) >> 6);
      FRHIComputeCommandList::DispatchComputeShader
                ((FRHIComputeCommandList *)param_1,local_958._s_0.X,local_958._s_0.Y,
                 local_958._s_0.Z);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar23 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        UnsetUAVParameter(pFVar23,(FShaderResourceParameter *)
                                  ((longlong)local_978.ShaderContent + 0xe0));
        pFVar21 = TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable>::GetComputeShader
                            (&local_928);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,pFVar21,pFVar23);
      }
      local_978.ShaderMap._0_4_ = 1;
      local_868._4_2_ = 0xffff;
      local_868._8_8_ = (pFVar4->UAVValue).Reference;
      local_868._24_4_ = 0x10;
      if (param_1->field_0x6a != '\x02') {
        local_868._24_4_ = 0x78;
      }
      local_868._0_4_ = 0xffffffff;
      local_978.ShaderContent = (FShader *)local_868;
      local_868[0x10] = 3;
      local_6d8._12_4_ = local_978.ShaderMap._4_4_;
      local_6d8.ArrayNum = 1;
      local_868._20_4_ = 0x400;
      local_868[0x1c] = 0;
      local_868[0x28] = 0;
      local_6d8.DataPtr = (FRHITransitionInfo *)local_978.ShaderContent;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_6d8,None);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_790);
    }
    if (local_768 == '\0') goto LAB_1486702ee;
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_778);
LAB_1486702ee:
  if ((local_9f8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_9f8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_9f8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_9f8.StatId,CycleScopeEnd);
  }
  return;
}

// UpdateSkinWeights @ 148673220

void __thiscall
FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSkinWeightVertexBuffer *pFVar6;
  
  if (this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                       ,0x1ab,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->LODIndex < 0) ||
     ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                       ,0x1ac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->SkelMeshRenderData;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = FSkeletalMeshObject::GetSkinWeightVertexBuffer
                     (*(FSkeletalMeshLODRenderData **)
                       ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 8),param_1);
  this->MeshObjectWeightBuffer = pFVar6;
  return;
}

// UpdateSkinWeights @ 148673320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  int *piVar1;
  FSkeletalMeshRenderData *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights(FSkelMeshComponentLODInfo_const_*)_::_2_::FStat_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights>
  FVar11;
  FSkinWeightVertexBuffer *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  code **ppcVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FStaticMeshVertexBuffers *local_110;
  FSkinWeightVertexBuffer *pFStack_108;
  FColorVertexBuffer *local_100;
  FMorphVertexBufferPool *pFStack_f8;
  FSkeletalMeshVertexClothBuffer *local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  FSkinWeightVertexBuffer *local_d8;
  FStaticMeshVertexBuffers *pFStack_d0;
  FSkinWeightVertexBuffer *pFStack_c8;
  FColorVertexBuffer *pFStack_c0;
  FMorphVertexBufferPool *pFStack_b8;
  FSkeletalMeshVertexClothBuffer *local_b0;
  undefined8 uStack_a8;
  FSkeletalMeshObjectLOD *local_98;
  FName local_90;
  FName local_88 [2];
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights(FSkelMeshComponentLODInfo_const_*)_::_2_::FStat_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights>
           )0x0) {
        pFVar10 = ::FName::FName(&local_90,"STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights,*pFVar10,
                   L"STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights;
  if (StatPtr_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights(FSkelMeshComponentLODInfo_const_*)_::_2_::FStat_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights>
       )0x0) {
    pFVar10 = ::FName::FName(local_88,"STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights(FSkelMeshComponentLODInfo_const_*)_::_2_::FStat_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights,*pFVar10,
                          L"STAT_FSkeletalMeshObjectLOD_UpdateSkinWeights","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar15.Value;
        local_138.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x6bd);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar15.Value;
      local_140.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_14867349c;
    }
  }
  bVar6 = false;
  FVar16 = local_130;
LAB_14867349c:
  if (this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x6bf,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->LODIndex < 0) ||
     ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0x6c0,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar13 = this->LODIndex;
  pFVar2 = this->SkelMeshRenderData;
  uVar9 = 0;
  if ((int)uVar13 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 != (FSkelMeshComponentLODInfo *)0x0) {
    pFVar3 = *(FSkeletalMeshLODRenderData **)
              ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
    pFVar12 = FSkeletalMeshObject::GetSkinWeightVertexBuffer(pFVar3,param_1);
    if (this->MeshObjectWeightBuffer != pFVar12) {
      local_110 = &pFVar3->StaticVertexBuffers;
      local_100 = this->MeshObjectColorBuffer;
      pFStack_f8 = (this->MorphVertexBufferPool).Reference;
      this->MeshObjectWeightBuffer = pFVar12;
      local_f0 = &pFVar3->ClothVertexBuffer;
      local_e0 = (pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      uStack_e8 = 0;
      uStack_a8 = 0;
      local_78[0] = (code *)0x0;
      pFStack_108 = pFVar12;
      local_d8 = pFVar12;
      pFStack_d0 = local_110;
      pFStack_c8 = pFVar12;
      pFStack_c0 = local_100;
      pFStack_b8 = pFStack_f8;
      local_b0 = local_f0;
      local_98 = this;
      local_50 = FMemory::Malloc(0x50,8);
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights'::`22'::<lambda_1>,1,1>
                           ::_vftable_;
      local_50[1] = (code *)local_d8;
      local_50[2] = (code *)pFStack_d0;
      local_50[3] = (code *)pFStack_c8;
      local_50[4] = (code *)pFStack_c0;
      local_50[5] = (code *)pFStack_b8;
      local_50[6] = (code *)local_b0;
      *(undefined4 *)(local_50 + 7) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_a8._4_4_;
      *(uint *)(local_50 + 8) = local_e0;
      *(undefined4 *)((longlong)local_50 + 0x44) = uStack_dc;
      local_50[9] = (code *)local_98;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights'::__l22::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
      }
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights_::__l22::TSTR_UpdateSkinWeightsGPUSkin1743>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar14 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar14 = local_50;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FSkeletalMeshObjectLOD @ 1486928c0

FSkeletalMeshObjectLOD * __thiscall
FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::FSkeletalMeshObjectLOD
          (FSkeletalMeshObjectLOD *this,Type param_1,FSkeletalMeshRenderData *param_2,int param_3)

{
  this->RenderData = param_2;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,param_1,"FInstancedSkeletalMeshObjectNaniteLOD");
  this->LODIndex = param_3;
  this->bInitialized = false;
  this->bStaticRayTracingGeometryInitialized = false;
  return this;
}

// operator() @ 14869ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))();
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
            (*(longlong **)((longlong)this + 0x10),param_1);
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x18))
            (*(longlong **)((longlong)this + 0x18),param_1);
  FPositionVertexBuffer::BindPositionVertexBuffer
            (*(FPositionVertexBuffer **)((longlong)this + 8),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            (*(FColorVertexBuffer **)((longlong)this + 0x18),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            (*(FLocalVertexFactory **)this,(FRHICommandListBase *)param_1,&local_e8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// operator() @ 14869f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>::
operator()(void *this,FRHICommandList *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))();
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
            (*(longlong **)((longlong)this + 0x10),param_1);
  FPositionVertexBuffer::BindPositionVertexBuffer
            (*(FPositionVertexBuffer **)((longlong)this + 8),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)((longlong)this + 0x10),*(FVertexFactory **)this,
             (FStaticMeshDataType *)&local_e8,0);
  FLocalVertexFactory::SetData
            (*(FLocalVertexFactory **)this,(FRHICommandListBase *)param_1,&local_e8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// operator() @ 14869f350

void __thiscall
`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 0x18);
  if (-1 < (int)uVar1) {
    DestructItems<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int>
              (*(TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> **
                )(lVar3 + 0x10),*(int *)(lVar3 + 0x18));
    uVar5 = 0;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (*(uint *)(lVar3 + 0x1c) != uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,(ForAnyElementType *)(lVar3 + 0x10),0,(int *)(lVar3 + 0x1c));
    }
    lVar3 = *(longlong *)((longlong)this + 8);
    iVar2 = *(int *)(lVar3 + 0x18);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    lVar6 = (longlong)iVar2 * 0x118 + lVar4;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) != iVar2) {
        `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar4 == lVar6) break;
      FSkeletalMeshObjectGPUSkin::CreateVertexFactory
                (param_1,(TArray<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,TSizedDefaultAllocator<32>_>
                          *)(*(longlong *)this + 0x10),
                 (TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
                  *)(*(longlong *)this + 0x20),(FVertexFactoryBuffers *)((longlong)this + 0x10),
                 *(Type *)((longlong)this + 0x48),Tangent|Position,*(uint *)(lVar4 + 0x40),uVar5,
                 *(uint *)(lVar4 + 0x10),true);
      uVar5 = uVar5 + *(int *)(lVar4 + 0x40);
      lVar4 = lVar4 + 0x118;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetResourceSizeEx @ 1486c66c0

void __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::GetResourceSizeEx
          (FSkeletalMeshObjectLOD *this,FResourceSizeEx *param_1)

{
  return;
}

// InitResources @ 1486ceae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  uint uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  code **ppcVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->RenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x3a0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LODIndex < 0) || ((this->RenderData->LODRenderData).Array.ArrayNum <= this->LODIndex))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x3a1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar3 = this->RenderData;
  iVar2 = (pFVar3->LODRenderData).Array.ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_58 = (longlong)(int)uVar1;
    local_50 = (longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)
           ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  bVar6 = IsRayTracingEnabled();
  if ((bVar6) && (this->RenderData->bSupportRayTracing != false)) {
    FSkeletalMeshRenderData::InitStaticRayTracingGeometry(this->RenderData,this->LODIndex);
    this->bStaticRayTracingGeometryInitialized = true;
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
                         ::_vftable_;
    local_20[1] = (code *)&this->VertexFactory;
    local_20[2] = (code *)(lVar4 + 0xe8);
    local_20[3] = (code *)(lVar4 + 0x30);
    if (local_20 + 1 != (code **)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      ppcVar8 = local_48 + 2;
      if (local_20 != (code **)0x0) {
        ppcVar8 = local_20;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
  }
  this->bInitialized = true;
  return;
}

// InitResources @ 1486cecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1,Type param_2)

{
  uint uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSkinWeightVertexBuffer *pFVar8;
  code **ppcVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  FStaticMeshVertexBuffers *local_f8;
  FSkinWeightVertexBuffer *pFStack_f0;
  FColorVertexBuffer *local_e8;
  code *pcStack_e0;
  FSkeletalMeshVertexClothBuffer *local_d8;
  code *pcStack_d0;
  uint local_c8;
  undefined4 uStack_c4;
  FSkeletalMeshObjectLOD *local_c0;
  FSkeletalMeshLODRenderData *pFStack_b8;
  Type TStack_78;
  undefined4 uStack_74;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (this->RenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x2f2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LODIndex < 0) || ((this->RenderData->LODRenderData).Array.ArrayNum <= this->LODIndex))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x2f3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar3 = this->RenderData;
  iVar2 = (pFVar3->LODRenderData).Array.ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_108 = (longlong)(int)uVar1;
    local_100 = (longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FSkeletalMeshLODRenderData **)
            ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  bVar6 = IsRayTracingEnabled();
  if (bVar6) {
    pFVar8 = FSkeletalMeshObject::GetSkinWeightVertexBuffer(pFVar4,param_1);
    this->MeshObjectWeightBuffer = pFVar8;
    local_f8 = &pFVar4->StaticVertexBuffers;
    pcStack_d0 = (code *)0x0;
    local_e8 = FSkeletalMeshObject::GetColorVertexBuffer(pFVar4,param_1);
    pFStack_f0 = this->MeshObjectWeightBuffer;
    local_d8 = &pFVar4->ClothVertexBuffer;
    local_c8 = (pFVar4->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    pcStack_e0 = (code *)0x0;
    local_68[0] = (code *)0x0;
    local_c0 = this;
    pFStack_b8 = pFVar4;
    TStack_78 = param_2;
    local_40 = FMemory::Malloc(0x58,8);
    local_40[1] = (code *)local_c0;
    local_40[2] = (code *)pFStack_b8;
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
                         ::_vftable_;
    local_40[3] = (code *)local_f8;
    local_40[4] = (code *)pFStack_f0;
    local_40[5] = (code *)local_e8;
    local_40[6] = pcStack_e0;
    local_40[7] = (code *)local_d8;
    local_40[8] = pcStack_d0;
    *(uint *)(local_40 + 9) = local_c8;
    *(undefined4 *)((longlong)local_40 + 0x4c) = uStack_c4;
    *(Type *)(local_40 + 10) = TStack_78;
    *(undefined4 *)((longlong)local_40 + 0x54) = uStack_74;
    if (local_40 != (code **)&DAT_fffffffffffffff8) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      ppcVar9 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar9 = local_40;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
  }
  this->bInitialized = true;
  return;
}

// InitResources @ 1486ceed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  uint uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  code **ppcVar8;
  FColorVertexBuffer *pFVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                       ,100,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LODIndex < 0) ||
     ((this->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                       ,0x65,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar3 = this->SkelMeshRenderData;
  iVar2 = (pFVar3->LODRenderData).Array.ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_68 = (longlong)(int)uVar1;
    local_60 = (longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)
           ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  if (((param_1 == (FSkelMeshComponentLODInfo *)0x0) ||
      (pFVar9 = param_1->OverrideVertexColors, pFVar9 == (FColorVertexBuffer *)0x0)) ||
     (pFVar9->NumVertices != *(uint *)(lVar4 + 300))) {
    pFVar9 = (FColorVertexBuffer *)(lVar4 + 0x138);
  }
  this->ColorVertexBuffer = pFVar9;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_30[1] = (code *)&this->VertexFactory;
  local_30[2] = (code *)(lVar4 + 0xe8);
  local_30[3] = (code *)(lVar4 + 0x30);
  local_30[4] = (code *)pFVar9;
  if (local_30 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar8 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar8 = local_30;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  bVar6 = IsRayTracingEnabled();
  if ((bVar6) && (this->SkelMeshRenderData->bSupportRayTracing != false)) {
    FSkeletalMeshRenderData::InitStaticRayTracingGeometry(this->SkelMeshRenderData,this->LODIndex);
    this->bStaticRayTracingGeometryInitialized = true;
    this->bResourcesInitialized = true;
  }
  else {
    this->bResourcesInitialized = true;
  }
  return;
}

// ReleaseResources @ 1486e6820

void __thiscall
FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::ReleaseResources
          (FSkeletalMeshObjectLOD *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->RenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x3c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bInitialized = false;
  BeginReleaseResource((FRenderResource *)&this->VertexFactory,&UE::RenderCommandPipe::SkeletalMesh)
  ;
  if (this->bStaticRayTracingGeometryInitialized != false) {
    FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry(this->RenderData,this->LODIndex);
    return;
  }
  return;
}

// ReleaseResources @ 1486e68a0

void __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::ReleaseResources(FSkeletalMeshObjectLOD *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGPUSkinPassthroughVertexFactory *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->bInitialized = false;
  pFVar4 = (this->VertexFactories).AllocatorInstance.Data;
  iVar2 = (this->VertexFactories).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->VertexFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0x20))();
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->PassthroughVertexFactory).Ptr;
  if (pFVar3 != (FGPUSkinPassthroughVertexFactory *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))();
  }
  return;
}

// ReleaseResources @ 1486e6920

void __thiscall
FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::ReleaseResources(FSkeletalMeshObjectLOD *this)

{
  if (this->bStaticRayTracingGeometryInitialized != false) {
    FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry
              (this->SkelMeshRenderData,this->LODIndex);
    this->bStaticRayTracingGeometryInitialized = false;
  }
  BeginReleaseResource((FRenderResource *)&this->VertexFactory,&UE::RenderCommandPipe::SkeletalMesh)
  ;
  this->bResourcesInitialized = false;
  return;
}

// UpdateSkinWeights @ 1486f6490

void __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::UpdateSkinWeights
          (FSkeletalMeshObjectLOD *this,FSkelMeshComponentLODInfo *param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSkinWeightVertexBuffer *pFVar6;
  
  if (this->RenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x34c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->LODIndex < 0) || ((this->RenderData->LODRenderData).Array.ArrayNum <= this->LODIndex))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x34d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->RenderData;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = FSkeletalMeshObject::GetSkinWeightVertexBuffer
                     (*(FSkeletalMeshLODRenderData **)
                       ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 8),param_1);
  this->MeshObjectWeightBuffer = pFVar6;
  return;
}

