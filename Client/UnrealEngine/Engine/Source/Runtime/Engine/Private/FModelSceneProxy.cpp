// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FModelSceneProxy @ 147fa49e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FModelSceneProxy * __thiscall
FModelSceneProxy::FModelSceneProxy(FModelSceneProxy *this,UModelComponent *param_1)

{
  int *piVar1;
  byte *pbVar2;
  TArray<FModelSceneProxy::FElementInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  UModelComponent *pUVar4;
  FModelElement *pFVar5;
  UMaterialInterface *this_00;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  FNameEntryId FVar11;
  uint uVar12;
  undefined8 *puVar13;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar14;
  FModelSceneProxy *pFVar15;
  undefined4 extraout_var;
  FMaterialRelevance FVar16;
  undefined ***pppuVar17;
  FElementInfo *pFVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auStackY_118 [32];
  longlong local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  code *local_b8 [2];
  undefined **local_a8;
  FModelVertexBuffer *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FModelVertexBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar22 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FModelSceneProxy__6B_;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FModelSceneProxy");
  this->Component = param_1;
  pTVar3 = &this->Elements;
  (this->Elements).ArrayMax = 0;
  piVar1 = &(this->Elements).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  puVar13 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5c8))(param_1);
  local_90 = (undefined ***)0x0;
  uVar7 = puVar13[1];
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *puVar13;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar7;
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 | 1;
  local_a8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0FModelSceneProxy__QEAA_PEAVUModelComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) = uVar7;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar8;
  pFStack_a0 = &((param_1->Model).field0_0x0.DebugPtr)->VertexBuffer;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FModelSceneProxy::FModelSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FModelSceneProxy::FModelSceneProxy_::__l2::TSTR_InitOrUpdateVertexBufferCmd233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pFStack_70 = pFStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`FModelSceneProxy::FModelSceneProxy'::__l2::TSTR_InitOrUpdateVertexBufferCmd233>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar14);
    uVar21 = (ulonglong)local_58;
    if ((2 < uVar21) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FModelSceneProxy *)(*pcVar6)();
      return pFVar15;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar17 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar17 = local_60;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar17 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar17 = local_90;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  FStaticMeshVertexBuffers::InitModelVF
            (&(((param_1->Model).field0_0x0.DebugPtr)->VertexBuffer).Buffers,
             (FRHICommandListBase *)0x0,(FRenderCommandPipe *)0x0,&this->VertexFactory);
  FVar11 = FNameEntryId::FromValidEName((EName)local_d0);
  pUVar4 = this->Component;
  this->_padding_ = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar11.Value);
  uVar12 = (pUVar4->Elements).Array.ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  DestructItems<FModelSceneProxy::FElementInfo,int>
            ((FElementInfo *)(pTVar3->AllocatorInstance).Data,(this->Elements).ArrayNum);
  (this->Elements).ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar12,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar19 = (pUVar4->Elements).Array.ArrayNum;
  if (0 < iVar19) {
    local_d8 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar22 < iVar19) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FModelSceneProxy *)(*pcVar6)();
        return pFVar15;
      }
      pFVar5 = *(FModelElement **)((pUVar4->Elements).Array.AllocatorInstance.Data + local_d8);
      uVar12 = (this->Elements).ArrayNum;
      if (uVar12 == *piVar1) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->Elements).ArrayNum = uVar12 + 1;
      uVar20 = 0;
      if ((int)uVar12 < (int)(uVar12 + 1)) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FModelSceneProxy *)(*pcVar6)();
        return pFVar15;
      }
      pFVar18 = (FElementInfo *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x88);
      if (pFVar18 == (FElementInfo *)0x0) {
        pFVar18 = (FElementInfo *)0x0;
      }
      else {
        pFVar18 = FElementInfo::FElementInfo(pFVar18,pFVar5,&this->VertexFactory,uVar22);
      }
      this_00 = pFVar18->Material;
      FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
      FVar16 = UMaterialInterface::GetRelevance(this_00,(EShaderPlatform)local_c8);
      uVar20 = *(uint *)&(this->MaterialRelevance).field0_0x0 >> 0x12;
      (this->MaterialRelevance).field0_0x0.Raw =
           (this->MaterialRelevance).field0_0x0.Raw | *(ulonglong *)FVar16.field0_0x0;
      uVar12 = *(uint *)FVar16.field0_0x0 >> 0x12;
      if (((byte)(*(uint *)FVar16.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar20 & 0x3f)) {
        uVar12 = uVar20;
      }
      local_d8 = local_d8 + 8;
      uVar22 = uVar22 + 1;
      uVar20 = (uint)(this->MaterialRelevance).field0_0x0.Raw;
      *(uint *)&(this->MaterialRelevance).field0_0x0 = (uVar12 << 0x12 ^ uVar20) & 0xfc0000 ^ uVar20
      ;
      iVar19 = (pUVar4->Elements).Array.ArrayNum;
    } while ((int)uVar22 < iVar19);
  }
  bVar9 = CacheShadowDepthsFromPrimitivesUsingWPO();
  if ((bVar9) ||
     ((bVar10 = *(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5), (bVar10 & 0x40) == 0
      && (-1 < (char)bVar10)))) {
    bVar10 = 0x20;
  }
  else {
    bVar10 = 0;
  }
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 & 0xdf;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 | bVar10;
  return this;
}

// operator() @ 147fada60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FModelSceneProxy::FModelSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FRenderResource *this_00;
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1[0x3a] == -1) {
    (**(code **)(*(longlong *)(piVar1 + 0x34) + 0x18))();
  }
  else if (*piVar1 == 0) {
    FRenderResource::UpdateRHI((FRenderResource *)(piVar1 + 0x34),(FRHICommandListBase *)param_1);
  }
  piVar1 = *(int **)this;
  this_00 = (FRenderResource *)(piVar1 + 6);
  if (piVar1[0xc] == -1) {
                    /* WARNING: Could not recover jumptable at 0x000147fadab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this_00->_padding_ + 0x18))(this_00,param_1);
    return;
  }
  if (*piVar1 == 0) {
    FRenderResource::UpdateRHI(this_00,(FRHICommandListBase *)param_1);
  }
  return;
}

// CanBeOccluded @ 147fb6e90

bool __thiscall FModelSceneProxy::CanBeOccluded(FModelSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// CreateHitProxies @ 147fc0d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

HHitProxy * __thiscall
FModelSceneProxy::CreateHitProxies
          (FModelSceneProxy *this,UPrimitiveComponent *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  UModelComponent *pUVar1;
  UModel *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  HHitProxy *pHVar7;
  HHitProxy *local_18 [2];
  
  pHVar7 = ::operator_new(0x30);
  if (pHVar7 == (HHitProxy *)0x0) {
    local_18[0] = (HHitProxy *)0x0;
  }
  else {
    pUVar1 = this->Component;
    pUVar2 = (pUVar1->Model).field0_0x0.DebugPtr;
    HHitProxy::HHitProxy(pHVar7,HPP_World);
    pHVar7->_padding_ = (longlong)&___7HModel__6B_;
    pHVar7[1]._padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UModelComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pHVar7[1]._padding_ = (longlong)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UModel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(int *)&pHVar7->_padding_ = (int)pHVar7->_padding_ + 1;
    local_18[0] = pHVar7;
  }
  pHVar7 = local_18[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pHVar7 = (HHitProxy *)(*pcVar4)();
      return pHVar7;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = 0;
  *(HHitProxy **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  return pHVar7;
}

// DrawStaticElements @ 147fc5b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FModelSceneProxy::DrawStaticElements(FModelSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  byte bVar1;
  UModelComponent *pUVar2;
  longlong lVar3;
  FIndexBuffer *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FMeshBatchElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_178 [32];
  FMeshBatchElement local_138;
  FMeshBatchElement *local_a0;
  int local_98;
  undefined4 local_94;
  FLocalVertexFactory *local_90;
  undefined8 uStack_88;
  FScriptContainerElement *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->_padding_ & 0x2000) == 0) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    uVar6 = __real_7f7fffff;
    uVar10 = 0;
    uVar13 = uVar10;
    uVar14 = uVar10;
    if (0 < (this->Elements).ArrayNum) {
      do {
        pUVar2 = this->Component;
        uVar11 = (uint)uVar10;
        uVar12 = ~uVar11 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar11 < (pUVar2->Elements).Array.ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)((pUVar2->Elements).Array.AllocatorInstance.Data + uVar14);
        if (*(int *)(lVar3 + 0x4c) != 0) {
          local_a0 = (FMeshBatchElement *)0x0;
          local_64 = local_64 & 0xf081803c | 0x81803c;
          local_80 = (FScriptContainerElement *)0x0;
          local_68 = 0;
          local_94 = 1;
          local_90 = (FLocalVertexFactory *)0x0;
          uStack_88 = 0;
          local_78 = 0xffffffffffffffff;
          local_70 = 0;
          local_6c = 0xffffffff;
          local_66 = 0xff;
          local_60 = 0xffff;
          local_98 = 1;
          DefaultConstructItems<FMeshBatchElement,int>(&local_138,1);
          if ((local_98 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = &local_138;
          if (local_a0 != (FMeshBatchElement *)0x0) {
            pFVar9 = local_a0;
          }
          pFVar9->IndexBuffer = *(FIndexBuffer **)(lVar3 + 0x40);
          local_90 = &this->VertexFactory;
          uVar8 = 0;
          if ((int)uVar11 < (this->Elements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_88 = (**(code **)(**(longlong **)
                                     ((this->Elements).AllocatorInstance.Data + uVar13 + 0x30) +
                                  0x310))();
          uVar8 = 0;
          if ((int)uVar11 < (this->Elements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_80 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x88;
          pFVar9->FirstIndex = *(uint *)(lVar3 + 0x48);
          pFVar9->NumPrimitives = *(uint *)(lVar3 + 0x4c);
          pFVar9->MinVertexIndex = *(uint *)(lVar3 + 0x50);
          pFVar9->MaxVertexIndex = *(uint *)(lVar3 + 0x54);
          uVar8 = 0;
          if ((int)uVar11 < (this->Elements).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9->VertexFactoryUserData =
               *(void **)((this->Elements).AllocatorInstance.Data + uVar13 + 0x38);
          local_66 = 0;
          local_64 = (bVar1 & 7) << 10 | local_64 & 0xffffe07f;
          pFVar4 = pFVar9->IndexBuffer;
          if ((pFVar4 == (FIndexBuffer *)0x0) ||
             (((int)pFVar4->_padding_ != -1 &&
              ((pFVar4->IndexBufferRHI).Reference != (FRHIBuffer *)0x0)))) {
            (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_138,uVar6);
          }
          else {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9015782953040477671>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ModelRender.cpp"
                               ,0x219,"bValidIndexBuffer");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar9 = &local_138;
          if (local_a0 != (FMeshBatchElement *)0x0) {
            pFVar9 = local_a0;
          }
          DestructItems<FMeshBatchElement,int>(pFVar9,local_98);
          if (local_a0 != (FMeshBatchElement *)0x0) {
            FMemory::Free(local_a0);
          }
        }
        uVar10 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 0x88;
        uVar14 = uVar14 + 8;
      } while ((int)(uVar11 + 1) < (this->Elements).ArrayNum);
    }
  }
  return;
}

// GetDynamicMeshElements @ 147fd1df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FModelSceneProxy::GetDynamicMeshElements
          (FModelSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  FSceneView *pFVar1;
  FSceneViewFamily *pFVar2;
  UModelComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ESceneDepthPriorityGroup EVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  ForElementType<FMeshBatchElement> FVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  FName FVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ForElementType<FMeshBatchElement> FVar21;
  uint local_94;
  uint local_90;
  FColor_u_0 local_80 [2];
  FName local_78;
  longlong local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  FName local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FModelSceneProxy_GetMeshElements = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_50,"STAT_FModelSceneProxy_GetMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_FModelSceneProxy_GetMeshElements,*pFVar11,
               L"STAT_FModelSceneProxy_GetMeshElements","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FModelSceneProxy_GetMeshElements;
  if (_StatPtr_STAT_FModelSceneProxy_GetMeshElements == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(local_48,"STAT_FModelSceneProxy_GetMeshElements");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FModelSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_FModelSceneProxy_GetMeshElements,*pFVar11,
                         L"STAT_FModelSceneProxy_GetMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)&pTVar12->Name;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar8 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_80[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_80[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_78.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ModelRender.cpp"
                   ,0x12e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_147fd1f9a;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  local_68 = local_60;
  FVar17 = local_60;
LAB_147fd1f9a:
  iVar15 = param_1->ArrayNum;
  local_94 = 0;
  if (0 < iVar15) {
    local_90 = 1;
    local_70 = 0;
    do {
      lVar16 = local_70;
      if ((param_3 & local_90) != 0) {
        uVar18 = 0;
        if ((int)local_94 < iVar15) {
          uVar18 = ~local_94 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar16);
        pFVar2 = pFVar1->Family;
        bVar8 = IsRichView(pFVar2);
        if (((bVar8) && ((pFVar2->EngineShowFlags).BSPTriangles != 0)) &&
           ((pFVar2->EngineShowFlags).BSP != 0)) {
          EVar9 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,pFVar1);
          uVar18 = 0;
          if (0 < (this->Elements).ArrayNum) {
            lVar20 = 0;
            lVar19 = 0;
            do {
              pUVar3 = this->Component;
              uVar10 = 0;
              if ((int)uVar18 < (pUVar3->Elements).Array.ArrayNum) {
                uVar10 = ~uVar18 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar16 = *(longlong *)((pUVar3->Elements).Array.AllocatorInstance.Data + lVar19);
              if (*(int *)(lVar16 + 0x4c) != 0) {
                FVar13 = (ForElementType<FMeshBatchElement>)
                         FMeshElementCollector::AllocateMesh(param_4);
                if ((*(int *)((longlong)FVar13 + 0xa0) < 1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar21 = FVar13;
                if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar13 + 0x98) !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar21 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar13 + 0x98);
                }
                *(undefined8 *)((longlong)FVar21 + 0x18) = *(undefined8 *)(lVar16 + 0x40);
                *(FLocalVertexFactory **)((longlong)FVar13 + 0xa8) = &this->VertexFactory;
                uVar10 = 0;
                if ((int)uVar18 < (this->Elements).ArrayNum) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar14 = (**(code **)(**(longlong **)
                                        ((this->Elements).AllocatorInstance.Data + lVar20 + 0x30) +
                                     0x310))();
                *(undefined8 *)((longlong)FVar13 + 0xb0) = uVar14;
                uVar10 = 0;
                if ((int)uVar18 < (this->Elements).ArrayNum) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(FScriptContainerElement **)((longlong)FVar13 + 0xb8) =
                     (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x88;
                *(undefined4 *)((longlong)FVar21 + 0x58) = *(undefined4 *)(lVar16 + 0x48);
                *(undefined4 *)((longlong)FVar21 + 0x5c) = *(undefined4 *)(lVar16 + 0x4c);
                *(undefined4 *)((longlong)FVar21 + 0x68) = *(undefined4 *)(lVar16 + 0x50);
                *(undefined4 *)((longlong)FVar21 + 0x6c) = *(undefined4 *)(lVar16 + 0x54);
                uVar10 = 0;
                if ((int)uVar18 < (this->Elements).ArrayNum) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined8 *)((longlong)FVar21 + 0x40) =
                     *(undefined8 *)((this->Elements).AllocatorInstance.Data + lVar20 + 0x38);
                *(undefined1 *)((longlong)FVar13 + 0xd2) = 0;
                *(ESceneDepthPriorityGroup *)((longlong)FVar13 + 0xd4) =
                     ((EVar9 & 7) << 10 ^ *(uint *)((longlong)FVar13 + 0xd4) & 0xffffe07f) &
                     0xffffbfff | 0x2000;
                FMeshElementCollector::AddMesh(param_4,local_94,(FMeshBatch *)FVar13);
              }
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 8;
              lVar20 = lVar20 + 0x88;
              lVar16 = local_70;
            } while ((int)uVar18 < (this->Elements).ArrayNum);
          }
        }
      }
      iVar15 = param_1->ArrayNum;
      local_94 = local_94 + 1;
      local_90 = local_90 << 1 | (uint)((int)local_90 < 0);
      local_70 = lVar16 + 8;
      FVar17 = local_68;
    } while ((int)local_94 < iVar15);
  }
  FPrimitiveSceneProxy::SetSelection_RenderThread((FPrimitiveSceneProxy *)this,false,false);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// GetLCIs @ 147fd2fd0

void __thiscall
FModelSceneProxy::GetLCIs
          (FModelSceneProxy *this,
          TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  ForElementType<FLightCacheInterface_*> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FLightCacheInterface_*> FVar7;
  uint uVar8;
  FScriptContainerElement *local_18 [2];
  
  uVar8 = (this->Elements).ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
              (8,8,uVar8,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar8 = 0;
  if (0 < (this->Elements).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Elements).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      local_18[0] = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x88;
      FVar7 = (ForElementType<FLightCacheInterface_*>)param_1;
      if (FVar2 != (ForElementType<FLightCacheInterface_*>)0x0) {
        FVar7 = FVar2;
      }
      if ((ulonglong)FVar7 <= local_18) {
        FVar7 = (ForElementType<FLightCacheInterface_*>)param_1;
        if (FVar2 != (ForElementType<FLightCacheInterface_*>)0x0) {
          FVar7 = FVar2;
        }
        if ((local_18 < (FScriptContainerElement **)((longlong)FVar7 + (longlong)*piVar1 * 8)) &&
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
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
                          (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar6;
      }
      param_1->ArrayNum = iVar6 + 1;
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<FLightCacheInterface_*>)param_1;
      if (FVar2 != (ForElementType<FLightCacheInterface_*>)0x0) {
        FVar7 = FVar2;
      }
      uVar8 = uVar8 + 1;
      *(FScriptContainerElement **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_18[0];
    } while ((int)uVar8 < (this->Elements).ArrayNum);
  }
  return;
}

// GetLightRelevance @ 147fd3400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FModelSceneProxy::GetLightRelevance
          (FModelSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,
          bool *param_4,bool *param_5)

{
  int iVar1;
  code *pcVar2;
  bool *pbVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  pbVar3 = param_4;
  *param_2 = true;
  *param_3 = false;
  *param_4 = true;
  *param_5 = true;
  if ((this->Elements).ArrayNum < 1) {
    *param_3 = true;
    *param_4 = false;
  }
  else {
    uVar8 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Elements).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->Elements).AllocatorInstance.Data + lVar9;
      piVar6 = (int *)(**(code **)(*(longlong *)pFVar7 + 8))(pFVar7,&param_4,param_1);
      iVar1 = *piVar6;
      if ((iVar1 != 0) && ((*param_3 = true, iVar1 == 1 || (*pbVar3 = false, iVar1 != 2)))) {
        *param_2 = false;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x88;
    } while ((int)uVar8 < (this->Elements).ArrayNum);
  }
  return;
}

// GetMemoryFootprint @ 147fd3800

uint __thiscall FModelSceneProxy::GetMemoryFootprint(FModelSceneProxy *this)

{
  return ((this->Elements).ArrayMax * 0x22 + *(int *)((longlong)&this->_padding_ + 4)) * 4 + 0x4f0;
}

// GetTypeHash @ 147fda3c0

ulong64 __thiscall FModelSceneProxy::GetTypeHash(FModelSceneProxy *this)

{
  return 0x1552272f8;
}

// GetViewRelevance @ 147fdbf60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FModelSceneProxy::GetViewRelevance
          (FModelSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FStaticShaderPlatform FVar8;
  uint uVar9;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar7 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if (((!bVar7) || ((param_1->Family->EngineShowFlags).BSPTriangles == 0)) ||
     (uVar9 = 4, (param_1->Family->EngineShowFlags).BSP == 0)) {
    uVar9 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar9;
  bVar7 = IsRichView(param_1->Family);
  if (((bVar7) || ((this->_padding_ & 0x2000) != 0)) ||
     ((param_1->Family->EngineShowFlags).CollisionVisibility != 0 ||
      (param_1->Family->EngineShowFlags).CollisionPawn != 0)) {
    __return_storage_ptr__->bDynamicRelevance = 1;
  }
  else {
    __return_storage_ptr__->bStaticRelevance = 1;
  }
  bVar7 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar7 << 3;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  FVar8.Platform = FSceneView::GetShaderPlatform(param_1);
  bVar7 = VelocityIncludeStationaryPrimitives(FVar8);
  if ((((bVar7) || (cVar3 = (char)this->_padding_, cVar3 == '\x02')) ||
      ((cVar3 == '\x01' ||
       ((((this->_padding_ & 0x1000000000000) != 0 ||
         (bVar4 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar4 < '\0')) ||
        (uVar9 = 0, (bVar4 & 0x72) != 0)))))) &&
     ((uVar9 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar9 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar9;
  return __return_storage_ptr__;
}

// ShowInBSPSplitViewmode @ 147ff7e40

bool __thiscall FModelSceneProxy::ShowInBSPSplitViewmode(FModelSceneProxy *this)

{
  return true;
}

