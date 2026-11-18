// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FElementInfo @ 147fa3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FElementInfo * __thiscall
FModelSceneProxy::FElementInfo::FElementInfo
          (FElementInfo *this,FModelElement *param_1,FLocalVertexFactory *param_2,int param_3)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FMeshMapBuildData *pFVar8;
  UMaterial *pUVar9;
  FElementInfo *pFVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  code **ppcVar12;
  ulonglong uVar13;
  undefined1 auStackY_128 [32];
  undefined4 uStack_c4;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar1 = &this->IrrelevantLights;
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  piVar2 = &(this->IrrelevantLights).ArrayMax;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FElementInfo_FModelSceneProxy__6B_;
  this->VertexFactoryUniformBuffer =
       (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->IrrelevantLights).ArrayNum = 0;
  *piVar2 = 0;
  UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
            (&this->Bounds,&param_1->BoundingBox);
  pFVar8 = FModelElement::GetMeshMapBuildData(param_1);
  if (pFVar8 != (FMeshMapBuildData *)0x0) {
    this->_padding_ = (longlong)(pFVar8->LightMap).Reference;
    this->_padding_ = (longlong)(pFVar8->ShadowMap).Reference;
    this->_padding_ = (longlong)pFVar8->ResourceCluster;
    if (pTVar1 != &pFVar8->IrrelevantLights) {
      iVar3 = (pFVar8->IrrelevantLights).ArrayNum;
      _Src = (pFVar8->IrrelevantLights).AllocatorInstance.Data;
      (this->IrrelevantLights).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
  }
  if ((this->_padding_ == 0) && (this->_padding_ == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pUVar4 = (param_1->Material).field0_0x0.DebugPtr;
  this->Material = pUVar4;
  if ((pUVar4 == (UMaterialInterface *)0x0) ||
     ((bVar7 && (cVar6 = (**(code **)(pUVar4->_padding_ + 0x370))(pUVar4,4), cVar6 == '\0')))) {
    pUVar9 = UMaterial::GetDefaultMaterial(MD_Surface);
    this->Material = (UMaterialInterface *)pUVar9;
  }
  uVar13 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar13].bContainsValidPlatformInfo == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FElementInfo *)(*pcVar5)();
    return pFVar10;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar13].bSupportsManualVertexFetch != 0) ||
     (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x20,8);
    *local_90 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__L____0FElementInfo_FModelSceneProxy__QEAA_AEBVFModelElement__PEBVFLocalVertexFactory__H_Z__00_00_Function_Private_Core_UE__6B_
    ;
    local_90[1] = (code *)&this->VertexFactoryUniformBuffer;
    local_90[2] = (code *)param_2;
    local_90[3] = (code *)CONCAT44(uStack_c4,param_3);
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FModelSceneProxy::FElementInfo::FElementInfo_::__l11::TSTR_FElementInfoCreateLocalVFUniformBuffer702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::TSTR_FElementInfoCreateLocalVFUniformBuffer702>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar11);
      uVar13 = (ulonglong)local_58;
      if ((2 < uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FElementInfo *)(*pcVar5)();
        return pFVar10;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar12 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar12 = local_60;
          }
          (**(code **)(*ppcVar12 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar12 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar12 = local_90;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
  }
  return this;
}

// GetInteraction @ 147fd2f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightInteraction __thiscall
FModelSceneProxy::FElementInfo::GetInteraction(FElementInfo *this,FLightSceneProxy *param_1)

{
  char cVar1;
  ELightInteractionType EVar2;
  FLightInteraction FVar3;
  FLightSceneProxy *in_R8;
  
  EVar2 = FLightCacheInterface::GetStaticInteraction
                    ((FLightCacheInterface *)this,in_R8,&this->IrrelevantLights);
  FVar3.Type = (ELightInteractionType)param_1;
  if (EVar2 != LIT_MAX) {
    *(ELightInteractionType *)&param_1->_padding_ = EVar2;
    return (FLightInteraction)FVar3.Type;
  }
  cVar1 = (**(code **)(in_R8->_padding_ + 8))();
  if (cVar1 != '\0') {
    *(undefined4 *)&param_1->_padding_ = 2;
    return (FLightInteraction)FVar3.Type;
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FLightInteraction)FVar3.Type;
}

