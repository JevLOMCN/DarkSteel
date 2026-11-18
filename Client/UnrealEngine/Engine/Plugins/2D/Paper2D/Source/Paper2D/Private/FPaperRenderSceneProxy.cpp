// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 19

// FPaperRenderSceneProxy @ 14ace9090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPaperRenderSceneProxy * __thiscall
FPaperRenderSceneProxy::FPaperRenderSceneProxy
          (FPaperRenderSceneProxy *this,UPrimitiveComponent *param_1)

{
  undefined8 uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  UWorld *pUVar4;
  UBodySetup *pUVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this,param_1,(FName)0x0);
  *(undefined ***)this = &___7FPaperRenderSceneProxy__6B_;
  (this->BatchedSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedSections).ArrayNum = 0;
  (this->BatchedSections).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->MaterialTextureOverrideProxiesMutex).State = (atomic<unsigned_char>)0x0;
  (this->MaterialTextureOverrideProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialTextureOverrideProxies).ArrayNum = 0;
  (this->MaterialTextureOverrideProxies).ArrayMax = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->VertexBuffer);
  (this->VertexBuffer)._padding_ = (longlong)&___7FPaperSpriteVertexBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&(this->VertexBuffer).PositionBuffer);
  FVertexBuffer::FVertexBuffer(&(this->VertexBuffer).TangentBuffer);
  FVertexBuffer::FVertexBuffer(&(this->VertexBuffer).TexCoordBuffer);
  FVertexBuffer::FVertexBuffer(&(this->VertexBuffer).ColorBuffer);
  FIndexBuffer::FIndexBuffer(&(this->VertexBuffer).IndexBuffer);
  (this->VertexBuffer).TangentBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffer).TexCoordBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffer).ColorBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffer).PositionBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffer).Vertices.ArrayNum = 0;
  (this->VertexBuffer).Vertices.ArrayMax = 0;
  (this->VertexBuffer).bDynamicUsage = true;
  (this->VertexBuffer).NumAllocatedVertices = 0;
  pUVar4 = *(UWorld **)&param_1->field_0xb0;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)&this->VertexFactory,(uint)(pUVar4->FeatureLevel).Value,
             "FPaperSpriteVertexFactory");
  (this->VertexFactory)._padding_ = (longlong)&___7FPaperSpriteVertexFactory__6B_;
  this->Owner = *(AActor **)&param_1->field_0xa8;
  pUVar5 = (UBodySetup *)(**(code **)(*(longlong *)param_1 + 0x800))(param_1);
  this->MyBodySetup = pUVar5;
  this->field_0x628 = (param_1->field_0x27e * '\x02' ^ this->field_0x628) & 2U ^ this->field_0x628;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5c8))(param_1);
  uVar1 = puVar6[1];
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *puVar6;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar1;
  uVar1 = puVar6[3];
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) = puVar6[2];
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar1;
  *(FLinearColor_u_0 *)&this->field_0x30 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pTVar2 = CVarDrawSpritesAsTwoSided.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14ace9244:
    lVar7 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (bVar3) goto LAB_14ace9244;
  }
  this->bDrawTwoSided = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarDrawSpritesUsingPrebuiltVertexBuffers.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_14ace927a;
  }
  lVar7 = 0;
LAB_14ace927a:
  this->bSpritesUseVertexBufferPath =
       (byte)-(*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) >> 2;
  return this;
}

// ~FPaperRenderSceneProxy @ 14aceb7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FPaperRenderSceneProxy::~FPaperRenderSceneProxy(FPaperRenderSceneProxy *this)

{
  int *piVar1;
  TArray<FSpriteTextureOverrideRenderProxy_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->MaterialTextureOverrideProxies;
  *(undefined ***)this = &___7FPaperRenderSceneProxy__6B_;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->MaterialTextureOverrideProxies).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->MaterialTextureOverrideProxies).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FSpriteTextureOverrideRenderProxy_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3) break;
    if (*(longlong **)pFVar5 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar5 + 8))();
    }
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->MaterialTextureOverrideProxies).ArrayMax;
  (this->MaterialTextureOverrideProxies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))(&this->VertexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)&this->VertexFactory);
  FPaperSpriteVertexBuffer::~FPaperSpriteVertexBuffer(&this->VertexBuffer);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSpriteRenderSection,int>
            ((FSpriteRenderSection *)(this->BatchedSections).AllocatorInstance.Data,
             (this->BatchedSections).ArrayNum);
  pFVar3 = (this->BatchedSections).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CanBeOccluded @ 14acf1200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPaperRenderSceneProxy::CanBeOccluded(FPaperRenderSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// CreateRenderThreadResources @ 14acf4210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::CreateRenderThreadResources
          (FPaperRenderSceneProxy *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  if (this->bSpritesUseVertexBufferPath != '\0') {
    iVar3 = (this->Vertices).ArrayNum;
    if (0 < iVar3) {
      pTVar2 = &(this->VertexBuffer).Vertices;
      if (pTVar2 != &this->Vertices) {
        _Src = (this->Vertices).AllocatorInstance.Data;
        piVar1 = &(this->VertexBuffer).Vertices.ArrayMax;
        iVar4 = *piVar1;
        (this->VertexBuffer).Vertices.ArrayNum = iVar3;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,4,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x58);
      }
      (**(code **)((this->VertexBuffer)._padding_ + 0x18))(&this->VertexBuffer,param_1);
      FPaperSpriteVertexFactory::Init(&this->VertexFactory,param_1,&this->VertexBuffer);
    }
  }
  return;
}

// DebugDrawBodySetup @ 14acf5170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::DebugDrawBodySetup
          (FPaperRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3,UBodySetup *param_4,TMatrix<double> *param_5,
          FLinearColor *param_6,bool param_7)

{
  byte bVar1;
  double dVar2;
  FName FVar3;
  FNameEntryId FVar4;
  FColoredMaterialRenderProxy *pFVar5;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar6;
  FLinearColor *this_00;
  bool bVar7;
  undefined1 auStackY_128 [32];
  bool bVar8;
  bool bVar9;
  FColor_u_0 local_d8;
  uint uStack_d4;
  FLinearColor_u_0 local_d0;
  FLinearColor_u_0 local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  dVar2 = UE::Math::TMatrix<double>::Determinant(param_5);
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    UE::Math::TTransform<double>::SetFromMatrix(&local_a8,param_5);
    if (param_7) {
      pFVar5 = ::operator_new(0xe0);
      if (pFVar5 == (FColoredMaterialRenderProxy *)0x0) {
        pFVar5 = (FColoredMaterialRenderProxy *)0x0;
      }
      else {
        FVar4 = FNameEntryId::FromValidEName((EName)&local_d8);
        local_c0._s_0.R = (float)*(undefined4 *)&this->field_0x30;
        local_c0._s_0.G = (float)*(undefined4 *)&this->field_0x34;
        local_c0._s_0.B = (float)*(undefined4 *)&this->field_0x38;
        local_c0._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
        local_d8 = (FColor_u_0)((FColor_u_0 *)CONCAT44(extraout_var,FVar4.Value))->Bits;
        uStack_d4 = 0;
        pFVar6 = (FMaterialRenderProxy *)
                 (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.DebugPtr)->
                              _padding_ + 0x310))();
        FVar3.Number = uStack_d4;
        FVar3.ComparisonIndex.Value = local_d8.Bits;
        pFVar5 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                           (pFVar5,pFVar6,(FLinearColor *)&local_c0._s_0,FVar3);
      }
      FMeshElementCollector::RegisterOneFrameMaterialProxy(param_3,(FMaterialRenderProxy *)pFVar5);
      bVar1 = this->field_0x82;
      if ((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) ||
         (((bVar1 & 3) == 3 || ((bVar1 & 0x60) != 0)))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      local_d0._0_8_ = *(undefined8 *)&this->field_0x30;
      local_d0._8_8_ = *(undefined8 *)&this->field_0x38;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_d0._s_0);
      bVar9 = true;
      bVar8 = false;
    }
    else {
      bVar1 = this->field_0x82;
      if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
         ((bVar1 & 0x60) != 0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      bVar8 = this->Owner == (AActor *)0x0;
      this_00 = GetSelectionColor((FLinearColor *)&local_d0._s_0,param_6,(this->field_0x79 & 6) != 0
                                  ,(bool)((byte)this->field_0x79 >> 4 & 1),true);
      FLinearColor::ToFColorSRGB(this_00);
      pFVar5 = (FColoredMaterialRenderProxy *)0x0;
      bVar9 = false;
    }
    FKAggregateGeom::GetAggGeom
              (&param_4->AggGeom,&local_a8,(FColor)local_d8._s_0,(FMaterialRenderProxy *)pFVar5,
               bVar8,bVar9,bVar7,param_2,param_3);
  }
  return;
}

// DebugDrawCollision @ 14acf5580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::DebugDrawCollision
          (FPaperRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3,bool param_4)

{
  if (this->MyBodySetup != (UBodySetup *)0x0) {
    (**(code **)(*(longlong *)this + 0x268))(this);
  }
  return;
}

// GetCachedMaterialProxyForSection @ 14acf9540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSpriteTextureOverrideRenderProxy * __thiscall
FPaperRenderSceneProxy::GetCachedMaterialProxyForSection
          (FPaperRenderSceneProxy *this,FMeshElementCollector *param_1,int param_2,
          FMaterialRenderProxy *param_3)

{
  FMutex *this_00;
  TArray<FSpriteTextureOverrideRenderProxy_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FSpriteTextureOverrideRenderProxy *pFVar10;
  FSpriteTextureOverrideRenderProxy *this_01;
  ForElementType<UTexture_*> _Dst;
  FMaterialRenderProxy *pFVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *_Src;
  longlong lVar14;
  TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_58;
  
  this_00 = &this->MaterialTextureOverrideProxiesMutex;
  lVar14 = (longlong)param_2;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FSpriteTextureOverrideRenderProxy *)(*pcVar6)();
    return pFVar10;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar13 = (this->BatchedSections).ArrayNum;
  piVar2 = &(this->MaterialTextureOverrideProxies).ArrayNum;
  iVar8 = *piVar2;
  pTVar1 = &this->MaterialTextureOverrideProxies;
  if (iVar8 < iVar13) {
    iVar13 = iVar13 - iVar8;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar13,&pTVar1->AllocatorInstance,piVar2,
                       &(this->MaterialTextureOverrideProxies).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)iVar13 << 3);
  }
  uVar9 = 0;
  if (param_2 < (this->MaterialTextureOverrideProxies).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FSpriteTextureOverrideRenderProxy *)(*pcVar6)();
    return pFVar10;
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar3 = pFVar5 + lVar14 * 8;
  pFVar10 = *(FSpriteTextureOverrideRenderProxy **)(pFVar5 + lVar14 * 8);
  if (pFVar10 == (FSpriteTextureOverrideRenderProxy *)0x0) {
    uVar9 = 0;
    if (param_2 < (this->BatchedSections).ArrayNum) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSpriteTextureOverrideRenderProxy *)(*pcVar6)();
      return pFVar10;
    }
    pFVar5 = (this->BatchedSections).AllocatorInstance.Data;
    this_01 = ::operator_new(0x110);
    pFVar10 = (FSpriteTextureOverrideRenderProxy *)0x0;
    if (this_01 != (FSpriteTextureOverrideRenderProxy *)0x0) {
      local_58.ArrayNum = *(int *)(pFVar5 + lVar14 * 0x48 + 0x38);
      lVar12 = (longlong)local_58.ArrayNum;
      local_58.AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
      _Src = *(FScriptContainerElement **)(pFVar5 + lVar14 * 0x48 + 0x30);
      if (*(FScriptContainerElement **)(pFVar5 + lVar14 * 0x48 + 0x30) ==
          (FScriptContainerElement *)0x0) {
        _Src = pFVar5 + lVar14 * 0x48 + 0x10;
      }
      if (local_58.ArrayNum == 0) {
        local_58.ArrayMax = 4;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                  (8,8,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
                   &local_58.ArrayMax);
        _Dst = (ForElementType<UTexture_*>)&local_58;
        if (local_58.AllocatorInstance.SecondaryData != (ForElementType<UTexture_*>)0x0) {
          _Dst = local_58.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,lVar12 << 3);
      }
      pFVar10 = FSpriteTextureOverrideRenderProxy::FSpriteTextureOverrideRenderProxy
                          (this_01,param_3,*(UTexture **)(pFVar5 + lVar14 * 0x48 + 8),&local_58);
    }
    *(FSpriteTextureOverrideRenderProxy **)pFVar3 = pFVar10;
  }
  piVar2 = &pFVar10->ParentMaterialSerialNumber;
  pFVar11 = pFVar10->Parent;
  if (param_3 != pFVar10->Parent) {
    pFVar10->Parent = param_3;
    *piVar2 = -1;
    pFVar11 = param_3;
  }
  if (*piVar2 != pFVar11->UniformExpressionCacheSerialNumber) {
    *piVar2 = pFVar11->UniformExpressionCacheSerialNumber;
    pFVar11 = (FMaterialRenderProxy *)(*(longlong *)pFVar3 + 8);
    if (*(longlong *)pFVar3 == 0) {
      pFVar11 = (FMaterialRenderProxy *)0x0;
    }
    FMeshElementCollector::CacheUniformExpressions(param_1,pFVar11,true);
  }
  pFVar10 = *(FSpriteTextureOverrideRenderProxy **)pFVar3;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar4 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return pFVar10;
}

// GetDynamicMeshElements @ 14acf9900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::GetDynamicMeshElements
          (FPaperRenderSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PaperRenderSceneProxy_GetDynamicMeshElements> FVar12;
  FPrimitiveDrawInterface *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar14;
  int iVar15;
  FName FVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  char cVar22;
  ulonglong uVar23;
  char *in_stack_ffffffffffffff38;
  FColor_u_0 local_88 [2];
  FName local_80;
  FEngineShowFlags *local_78;
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  uVar21 = 0;
  FVar12 = StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRenderSceneProxy_GetDynamicMeshElements>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_PaperRenderSceneProxy_GetDynamicMeshElements");
    in_stack_ffffffffffffff38 = "STATCAT_Advanced";
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PaperRenderSceneProxy_GetDynamicMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_PaperRenderSceneProxy_GetDynamicMeshElements,*pFVar11,
                        L"SpriteProxy GDME","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_80.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperRenderSceneProxy.cpp"
                   ,0x126);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_14acf9a8b;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_70 = local_58;
  FVar16 = local_58;
LAB_14acf9a8b:
  local_78 = &param_2->EngineShowFlags;
  bVar18 = 0;
  bVar14 = 0;
  uVar17 = (param_2->EngineShowFlags).CollisionPawn;
  if (((param_2->EngineShowFlags).CollisionVisibility == 0) && (uVar17 == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((this->field_0x7b & 0x20) != 0) {
      bVar4 = true;
      if ((uVar17 == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) {
        bVar4 = false;
      }
      if (((param_2->EngineShowFlags).CollisionVisibility == 0) ||
         ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar4 || bVar5) {
        bVar14 = (param_2->EngineShowFlags).CollisionVisibility;
        bVar18 = (param_2->EngineShowFlags).CollisionPawn;
      }
    }
  }
  if (((param_2->EngineShowFlags).Collision == 0) || ((this->field_0x7b & 0x20) == 0)) {
    cVar22 = '\0';
  }
  else {
    cVar22 = '\x01';
  }
  uVar17 = 1;
  if ((!bVar9) && (iVar15 = param_1->ArrayNum, 0 < iVar15)) {
    uVar19 = 1;
    uVar23 = uVar21;
    do {
      uVar20 = (uint)uVar21;
      if ((param_3 & uVar19) != 0) {
        uVar10 = 0;
        if ((int)uVar20 < iVar15) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if (uVar10 == 0) {
          in_stack_ffffffffffffff38 = (char *)(longlong)(int)uVar20;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (**(code **)(*(longlong *)this + 600))
                  (this,*(undefined8 *)((param_1->AllocatorInstance).Data + uVar23),uVar21,param_4);
      }
      iVar15 = param_1->ArrayNum;
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar23 = uVar23 + 8;
    } while ((int)(uVar20 + 1) < iVar15);
  }
  uVar23 = 0;
  uVar21 = uVar23;
  if (0 < param_1->ArrayNum) {
    do {
      uVar19 = (uint)uVar23;
      if ((param_3 & uVar17) != 0) {
        if (((bVar18 != 0 || bVar14 != 0) || (cVar22 != '\0')) &&
           (bVar9 = AllowDebugViewmodes(), bVar9)) {
          uVar20 = 0;
          if ((int)uVar19 < param_1->ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if (uVar20 == 0) {
            in_stack_ffffffffffffff38 = (char *)(longlong)(int)uVar19;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          in_stack_ffffffffffffff38 =
               (char *)(CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),cVar22) ^ 1);
          (**(code **)(*(longlong *)this + 0x260))
                    (this,*(undefined8 *)((param_1->AllocatorInstance).Data + uVar21),uVar23,param_4
                     ,in_stack_ffffffffffffff38);
        }
        if (local_78->Paper2DSprites != 0) {
          if ((this->Owner == (AActor *)0x0) || ((this->field_0x79 & 6) != 0)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          pFVar13 = FMeshElementCollector::GetPDI(param_4,uVar19);
          in_stack_ffffffffffffff38 =
               (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),bVar9);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar13,local_78,
                     (TBoxSphereBounds<double,double> *)&this->field_0x190,bVar9);
        }
      }
      uVar23 = (ulonglong)(uVar19 + 1);
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      FVar16 = local_70;
      uVar21 = uVar21 + 8;
    } while ((int)(uVar19 + 1) < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetDynamicMeshElementsForView @ 14acfa820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::GetDynamicMeshElementsForView
          (FPaperRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  ESceneDepthPriorityGroup EVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FNameEntryId FVar9;
  FColoredMaterialRenderProxy *pFVar10;
  undefined4 extraout_var;
  FLinearColor *pFVar11;
  FMaterialRenderProxy *pFVar12;
  uint uVar13;
  FMeshBatch *pFVar14;
  longlong lVar15;
  undefined1 auStackX_10 [8];
  int iStackX_18;
  FLinearColor_u_0 FStack_58;
  FLinearColor FStack_48;
  
  if (this->bSpritesUseVertexBufferPath == '\0') {
    GetNewBatchMeshes(this,param_1,param_2,param_3);
    return;
  }
  iStackX_18 = param_2;
  EVar5 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,param_1);
  uVar13 = 0;
  if (0 < (this->BatchedSections).ArrayNum) {
    lVar15 = 0;
    do {
      iVar6 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              ::Add(&param_3->MeshBatchStorage,1);
      uVar8 = iVar6 / 0x49;
      uVar7 = 0;
      if ((int)uVar8 < (param_3->MeshBatchStorage).Chunks.Array.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (FMeshBatch *)
                ((ulonglong)(uint)(iVar6 % 0x49) * 0xe0 +
                (longlong)
                (param_3->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar8]);
      bVar4 = GetMeshElement(this,param_3,uVar13,(uchar)EVar5,(this->field_0x79 & 6) != 0,pFVar14);
      if (bVar4) {
        if ((param_1->Family->EngineShowFlags).Wireframe != 0) {
          uVar8 = 0;
          if ((int)uVar13 < (this->BatchedSections).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar4 = IsOpaqueBlendMode(*(UMaterialInterface **)
                                     ((this->BatchedSections).AllocatorInstance.Data + lVar15));
          if (bVar4) {
            FStack_58._s_0.R = (float)*(undefined4 *)&this->field_0x30;
            FStack_58._s_0.G = (float)*(undefined4 *)&this->field_0x34;
            FStack_58._s_0.B = (float)*(undefined4 *)&this->field_0x38;
            FStack_58._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
          }
          else {
            FStack_58._s_0.R = (float)FLinearColor::Green.field0_0x0._0_4_;
            FStack_58._s_0.G = (float)FLinearColor::Green.field0_0x0._4_4_;
            FStack_58._s_0.B = (float)FLinearColor::Green.field0_0x0._8_4_;
            FStack_58._s_0.A = (float)FLinearColor::Green.field0_0x0._12_4_;
          }
          pFVar10 = ::operator_new(0xe0);
          if (pFVar10 == (FColoredMaterialRenderProxy *)0x0) {
            pFVar10 = (FColoredMaterialRenderProxy *)0x0;
          }
          else {
            FVar9 = FNameEntryId::FromValidEName((EName)auStackX_10);
            uVar8 = *(uint *)CONCAT44(extraout_var,FVar9.Value);
            pFVar11 = GetSelectionColor(&FStack_48,(FLinearColor *)&FStack_58._s_0,
                                        (this->field_0x79 & 6) != 0,
                                        (bool)((byte)this->field_0x79 >> 4 & 1),false);
            pFVar12 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->WireframeMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
            FVar3.Number = 0;
            FVar3.ComparisonIndex.Value = uVar8;
            pFVar10 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                (pFVar10,pFVar12,pFVar11,FVar3);
          }
          FMeshElementCollector::RegisterOneFrameMaterialProxy
                    (param_3,(FMaterialRenderProxy *)pFVar10);
          pFVar14->bCanApplyViewModeOverrides = 0;
          pFVar14->bWireframe = 1;
          pFVar14->MaterialRenderProxy = (FMaterialRenderProxy *)pFVar10;
        }
        FMeshElementCollector::AddMesh(param_3,iStackX_18,pFVar14);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x48;
    } while ((int)uVar13 < (this->BatchedSections).ArrayNum);
  }
  return;
}

// GetMemoryFootprint @ 14acfb730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FPaperRenderSceneProxy::GetMemoryFootprint(FPaperRenderSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x660;
}

// GetMeshElement @ 14acfb750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FPaperRenderSceneProxy::GetMeshElement
          (FPaperRenderSceneProxy *this,FMeshElementCollector *param_1,int param_2,uchar param_3,
          bool param_4,FMeshBatch *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FMeshBatchElement> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FTextureResource *pFVar9;
  FMaterialRenderProxy *pFVar10;
  FSpriteTextureOverrideRenderProxy *pFVar11;
  
  if ((this->bSpritesUseVertexBufferPath == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSpritesUseVertexBufferPath",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperRenderSceneProxy.cpp"
                         ,0x1d3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (((this->BatchedSections).ArrayNum <= param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SectionIndex < BatchedSections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperRenderSceneProxy.cpp"
                         ,0x1d4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = 0;
  if (param_2 < (this->BatchedSections).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar3 = (this->BatchedSections).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_2 * 0x48;
  if ((((*(longlong *)(pFVar3 + (longlong)param_2 * 0x48) == 0) || (*(int *)(pFVar1 + 0x44) < 1)) ||
      (*(UTexture **)(pFVar1 + 8) == (UTexture *)0x0)) ||
     (pFVar9 = UTexture::GetResource(*(UTexture **)(pFVar1 + 8)), pFVar9 == (FTextureResource *)0x0)
     ) {
    return false;
  }
  uVar8 = *(uint *)&param_5->field_0xd4;
  param_5->LODIndex = '\0';
  param_5->LCI = (FLightCacheInterface *)0x0;
  *(uint *)&param_5->field_0xd4 = (uint)param_4 << 0xe | uVar8 & 0xffffbfff | 0x2000;
  param_5->VertexFactory = (FVertexFactory *)&this->VertexFactory;
  uVar8 = (byte)this->field_0x78 & 1 | (uint)param_4 << 0xe | uVar8 & 0xffffbffe | 0x2000;
  *(uint *)&param_5->field_0xd4 = uVar8;
  uVar8 = ((param_3 & 7) << 10 ^
          (((uint)(byte)this->field_0x628 * 2 ^ uVar8) & 4 ^ uVar8) & 0xffffe3ff) & 0xfffffc7f;
  *(uint *)&param_5->field_0xd4 = uVar8;
  *(uint *)&param_5->field_0xd4 = ((uint)(byte)this->field_0x628 * 2 ^ uVar8) & 2 ^ uVar8;
  pFVar10 = (FMaterialRenderProxy *)(**(code **)(**(longlong **)pFVar1 + 0x310))();
  pFVar11 = GetCachedMaterialProxyForSection(this,param_1,param_2,pFVar10);
  pFVar10 = (FMaterialRenderProxy *)&pFVar11->_padding_;
  if (pFVar11 == (FSpriteTextureOverrideRenderProxy *)0x0) {
    pFVar10 = (FMaterialRenderProxy *)0x0;
  }
  param_5->MaterialRenderProxy = pFVar10;
  if (((param_5->Elements).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FVar4 = (param_5->Elements).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
    param_5 = (FMeshBatch *)FVar4;
  }
  *(FIndexBuffer **)((longlong)param_5 + 0x18) = &(this->VertexBuffer).IndexBuffer;
  *(undefined4 *)((longlong)param_5 + 0x58) = *(undefined4 *)(pFVar1 + 0x40);
  *(undefined4 *)((longlong)param_5 + 0x68) = *(undefined4 *)(pFVar1 + 0x40);
  *(int *)((longlong)param_5 + 0x6c) = *(int *)(pFVar1 + 0x40) + *(int *)(pFVar1 + 0x44);
  iVar2 = *(int *)(pFVar1 + 0x44);
  *(int *)((longlong)param_5 + 0x5c) =
       iVar2 / 3 + (iVar2 >> 0x1f) +
       (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  *(longlong *)((longlong)param_5 + 0x40) = (this->VertexFactory)._padding_;
  return true;
}

// GetNewBatchMeshes @ 14acfbe70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::GetNewBatchMeshes
          (FPaperRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3)

{
  int iVar1;
  bool bVar2;
  FNameEntryId FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PaperRender_GetNewBatchMeshes> FVar5;
  FTextureResource *pFVar6;
  FColoredMaterialRenderProxy *pFVar7;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FLinearColor *pFVar8;
  FMaterialRenderProxy *pFVar9;
  FSpriteTextureOverrideRenderProxy *pFVar10;
  uint uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  int iVar14;
  FName FVar15;
  int iVar16;
  undefined1 uVar17;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FDynamicMeshBuilderSettings local_d8;
  undefined1 local_d0 [4];
  uint local_cc;
  ESceneDepthPriorityGroup local_c8;
  FNameEntryId local_c0;
  uint uStack_bc;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FDynamicMeshDrawOffset local_98;
  undefined1 local_88 [8];
  FDynamicMeshBuilder local_80;
  FLinearColor_u_0 local_58;
  FLinearColor local_48;
  
  if ((this->BatchedSections).ArrayNum == 0) {
    return;
  }
  iVar16 = 0;
  FVar5 = StatPtr_STAT_PaperRender_GetNewBatchMeshes;
  if (StatPtr_STAT_PaperRender_GetNewBatchMeshes ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_GetNewBatchMeshes>)0x0) {
    pFVar4 = ::FName::FName(&local_b0,"STAT_PaperRender_GetNewBatchMeshes");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_PaperRender_GetNewBatchMeshes>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_GetNewBatchMeshes,
                       *pFVar4,L"Get New Batch Meshes","STATGROUP_Paper2D","STATCAT_Advanced",
                       L"Paper2D",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar5;
  uVar17 = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8.Bits = local_res8.Bits & 0xffffff00;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar5 + 0x10));
      uVar17 = 1;
      local_res8._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar12.Bits;
        uStackX_c = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperRenderSceneProxy.cpp"
                   ,0x16c);
        uVar17 = 3;
        local_res8._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar12.Bits;
      uStackX_c = uVar11;
      local_b8 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      local_res8.Bits = CONCAT31(local_res8.Bits._1_3_,uVar17) | 4;
      uVar17 = uVar17 | 4;
      goto LAB_14acfbfe4;
    }
  }
  local_b8 = local_a8;
  FVar13 = local_a8;
LAB_14acfbfe4:
  local_c8 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,param_1);
  uVar11 = *(uint *)&(param_1->Family->EngineShowFlags).field_0x10;
  uVar11 = CONCAT31((uint3)(uVar11 >> 9),(char)(uVar11 >> 1)) & 0xffffff01;
  local_cc = uVar11;
  if ((this->Vertices).ArrayNum != 0) {
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_80,param_1->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    FDynamicMeshBuilder::AddVertices(&local_80,&this->Vertices);
    iVar14 = (this->Vertices).ArrayNum;
    FDynamicMeshBuilder::ReserveTriangles
              (&local_80,
               iVar14 / 3 + (iVar14 >> 0x1f) +
               (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f));
    iVar14 = 0;
    if (0 < (this->Vertices).ArrayNum) {
      do {
        FDynamicMeshBuilder::AddTriangle(&local_80,iVar14,iVar14 + 1,iVar14 + 2);
        iVar14 = iVar14 + 3;
      } while (iVar14 < (this->Vertices).ArrayNum);
    }
    iVar14 = (this->BatchedSections).ArrayNum;
    FVar15 = (FName)(this->BatchedSections).AllocatorInstance.Data;
    FVar13 = (FName)((longlong)FVar15 + (longlong)iVar14 * 0x48);
    local_b0 = FVar13;
    while( true ) {
      if ((this->BatchedSections).ArrayNum != iVar14) {
        `TCheckedPointerIterator<FSpriteRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d0);
      }
      if (FVar15 == FVar13) break;
      if ((((*(longlong *)FVar15 != 0) && (0 < *(int *)((longlong)FVar15 + 0x44))) &&
          (*(UTexture **)((longlong)FVar15 + 8) != (UTexture *)0x0)) &&
         (pFVar6 = UTexture::GetResource(*(UTexture **)((longlong)FVar15 + 8)),
         pFVar6 != (FTextureResource *)0x0)) {
        pFVar7 = (FColoredMaterialRenderProxy *)(**(code **)(**(longlong **)FVar15 + 0x310))();
        local_d8.bUseWireframeSelectionColoring = (this->field_0x79 & 6) != 0;
        local_d8.CastShadow = true;
        local_d8.bDisableBackfaceCulling = false;
        local_d8.bWireframe = false;
        local_d8.bReceivesDecals = true;
        local_d8.bUseSelectionOutline = true;
        local_d8.bCanApplyViewModeOverrides = true;
        local_d8.bIsFirstPerson = false;
        if ((char)uVar11 != '\0') {
          bVar2 = IsOpaqueBlendMode(*(UMaterialInterface **)FVar15);
          if (bVar2) {
            local_58._s_0.R = (float)*(undefined4 *)&this->field_0x30;
            local_58._s_0.G = (float)*(undefined4 *)&this->field_0x34;
            local_58._s_0.B = (float)*(undefined4 *)&this->field_0x38;
            local_58._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
          }
          else {
            local_58._s_0.R = (float)FLinearColor::Green.field0_0x0._0_4_;
            local_58._s_0.G = (float)FLinearColor::Green.field0_0x0._4_4_;
            local_58._s_0.B = (float)FLinearColor::Green.field0_0x0._8_4_;
            local_58._s_0.A = (float)FLinearColor::Green.field0_0x0._12_4_;
          }
          this_00 = ::operator_new(0xe0);
          pFVar7 = (FColoredMaterialRenderProxy *)0x0;
          if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
            FVar3 = FNameEntryId::FromValidEName((EName)local_88);
            local_c0.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
            uStack_bc = 0;
            pFVar8 = GetSelectionColor(&local_48,(FLinearColor *)&local_58._s_0,
                                       (this->field_0x79 & 6) != 0,
                                       (bool)((byte)this->field_0x79 >> 4 & 1),false);
            pFVar9 = (FMaterialRenderProxy *)
                     (**(code **)(((GEngine->WireframeMaterial).field0_0x0.DebugPtr)->_padding_ +
                                 0x310))();
            FVar13.Number = uStack_bc;
            FVar13.ComparisonIndex.Value = local_c0.Value;
            pFVar7 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                               (this_00,pFVar9,pFVar8,FVar13);
          }
          FMeshElementCollector::RegisterOneFrameMaterialProxy
                    (param_3,(FMaterialRenderProxy *)pFVar7);
          local_d8.bWireframe = true;
          local_d8._4_2_ = local_d8._4_2_ & 0xff;
          uVar11 = local_cc;
        }
        pFVar10 = GetCachedMaterialProxyForSection
                            (this,param_3,iVar16,(FMaterialRenderProxy *)pFVar7);
        local_98.FirstIndex = *(uint *)((longlong)FVar15 + 0x40);
        iVar1 = *(int *)((longlong)FVar15 + 0x44);
        local_d8._0_4_ =
             CONCAT31(CONCAT21(local_d8._2_2_,this->field_0x628),(byte)this->field_0x628 >> 1) &
             0xffff0101;
        local_d8.bIsFirstPerson = (bool)(this->field_0x85 & 1);
        local_98.NumPrimitives =
             iVar1 / 3 + (iVar1 >> 0x1f) +
             (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
        pFVar9 = (FMaterialRenderProxy *)&pFVar10->_padding_;
        if (pFVar10 == (FSpriteTextureOverrideRenderProxy *)0x0) {
          pFVar9 = (FMaterialRenderProxy *)0x0;
        }
        local_98.MinVertexIndex = 0;
        local_98.MaxVertexIndex = 0;
        FDynamicMeshBuilder::GetMesh
                  (&local_80,(TMatrix<double> *)&this->field_0x110,pFVar9,(undefined1)local_c8,
                   &local_d8,&local_98,param_2,param_3,(FHitProxyId)0xffffffff);
        FVar13 = local_b0;
      }
      iVar16 = iVar16 + 1;
      FVar15 = (FName)((longlong)FVar15 + 0x48);
    }
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_80);
    FVar13 = local_b8;
    uVar17 = local_res8._s_0.B;
  }
  if ((uVar17 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar17 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar17 & 4) != 0) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// GetNewBatchMeshesPrebuilt @ 14acfc320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::GetNewBatchMeshesPrebuilt
          (FPaperRenderSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  ESceneDepthPriorityGroup EVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FNameEntryId FVar9;
  FColoredMaterialRenderProxy *pFVar10;
  undefined4 extraout_var;
  FLinearColor *pFVar11;
  FMaterialRenderProxy *pFVar12;
  uint uVar13;
  FMeshBatch *pFVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FLinearColor_u_0 local_58;
  FLinearColor local_48;
  
  local_res18 = param_2;
  EVar5 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,param_1);
  uVar13 = 0;
  if (0 < (this->BatchedSections).ArrayNum) {
    lVar15 = 0;
    do {
      iVar6 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              ::Add(&param_3->MeshBatchStorage,1);
      uVar8 = iVar6 / 0x49;
      uVar7 = 0;
      if ((int)uVar8 < (param_3->MeshBatchStorage).Chunks.Array.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (FMeshBatch *)
                ((ulonglong)(uint)(iVar6 % 0x49) * 0xe0 +
                (longlong)
                (param_3->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar8]);
      bVar4 = GetMeshElement(this,param_3,uVar13,(uchar)EVar5,(this->field_0x79 & 6) != 0,pFVar14);
      if (bVar4) {
        if ((param_1->Family->EngineShowFlags).Wireframe != 0) {
          uVar8 = 0;
          if ((int)uVar13 < (this->BatchedSections).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar4 = IsOpaqueBlendMode(*(UMaterialInterface **)
                                     ((this->BatchedSections).AllocatorInstance.Data + lVar15));
          if (bVar4) {
            local_58._s_0.R = (float)*(undefined4 *)&this->field_0x30;
            local_58._s_0.G = (float)*(undefined4 *)&this->field_0x34;
            local_58._s_0.B = (float)*(undefined4 *)&this->field_0x38;
            local_58._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
          }
          else {
            local_58._s_0.R = (float)FLinearColor::Green.field0_0x0._0_4_;
            local_58._s_0.G = (float)FLinearColor::Green.field0_0x0._4_4_;
            local_58._s_0.B = (float)FLinearColor::Green.field0_0x0._8_4_;
            local_58._s_0.A = (float)FLinearColor::Green.field0_0x0._12_4_;
          }
          pFVar10 = ::operator_new(0xe0);
          if (pFVar10 == (FColoredMaterialRenderProxy *)0x0) {
            pFVar10 = (FColoredMaterialRenderProxy *)0x0;
          }
          else {
            FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
            uVar8 = *(uint *)CONCAT44(extraout_var,FVar9.Value);
            pFVar11 = GetSelectionColor(&local_48,(FLinearColor *)&local_58._s_0,
                                        (this->field_0x79 & 6) != 0,
                                        (bool)((byte)this->field_0x79 >> 4 & 1),false);
            pFVar12 = (FMaterialRenderProxy *)
                      (**(code **)(((GEngine->WireframeMaterial).field0_0x0.DebugPtr)->_padding_ +
                                  0x310))();
            FVar3.Number = 0;
            FVar3.ComparisonIndex.Value = uVar8;
            pFVar10 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                (pFVar10,pFVar12,pFVar11,FVar3);
          }
          FMeshElementCollector::RegisterOneFrameMaterialProxy
                    (param_3,(FMaterialRenderProxy *)pFVar10);
          pFVar14->bCanApplyViewModeOverrides = 0;
          pFVar14->bWireframe = 1;
          pFVar14->MaterialRenderProxy = (FMaterialRenderProxy *)pFVar10;
        }
        FMeshElementCollector::AddMesh(param_3,local_res18,pFVar14);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x48;
    } while ((int)uVar13 < (this->BatchedSections).ArrayNum);
  }
  return;
}

// GetTypeHash @ 14ad01d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FPaperRenderSceneProxy::GetTypeHash(FPaperRenderSceneProxy *this)

{
  return 0x1552d0e48;
}

// GetViewRelevance @ 14ad023c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FPaperRenderSceneProxy::GetViewRelevance
          (FPaperRenderSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FSceneViewFamily *pFVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  pFVar5 = param_1->Family;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar7 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar8 = 0;
  if ((!bVar7) || (uVar9 = 4, (pFVar5->EngineShowFlags).Paper2DSprites == 0)) {
    uVar9 = uVar8;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar9;
  bVar7 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar7 << 5;
  uVar9 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar9;
  if (this->field_0x89 != '\x01') {
    uVar8 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar8 | uVar9 & 0xffffdfff;
  bVar7 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar7 << 3;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)(byte)this->field_0x7f << 0xe ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  __return_storage_ptr__->bStaticRelevance = 0;
  __return_storage_ptr__->bDynamicRelevance = 1;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x8;
  if (((pFVar5->EngineShowFlags).Materials == 0) ||
     ((pFVar5->EngineShowFlags).CollisionVisibility != 0 ||
      (pFVar5->EngineShowFlags).CollisionPawn != 0)) {
    pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar1 = *pbVar1 | 4;
  }
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar8 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar8 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      ((char)(ZPULL(uVar4,7,1) << 7) < '\0')))) {
    uVar8 = 0x10;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4 & 0xffffffef | uVar8;
  return __return_storage_ptr__;
}

// IsCollisionView @ 14ad03370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPaperRenderSceneProxy::IsCollisionView
          (FPaperRenderSceneProxy *this,FEngineShowFlags *param_1,bool *param_2,bool *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  
  *param_2 = false;
  *param_3 = false;
  if ((param_1->CollisionVisibility == 0) && (param_1->CollisionPawn == 0)) {
    return false;
  }
  if ((this->field_0x7b & 0x20) != 0) {
    if ((param_1->CollisionPawn == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_1->CollisionVisibility == 0) ||
       ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar2 || bVar3) {
      *param_3 = param_1->CollisionVisibility;
      *param_2 = param_1->CollisionPawn;
    }
  }
  return true;
}

// IsUsingDistanceCullFade @ 14ad03550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPaperRenderSceneProxy::IsUsingDistanceCullFade(FPaperRenderSceneProxy *this)

{
  return (bool)(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 1 & 1);
}

// RecreateCachedRenderData @ 14ad08580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::RecreateCachedRenderData
          (FPaperRenderSceneProxy *this,FRHICommandListBase *param_1)

{
  FPaperSpriteVertexBuffer *this_00;
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForElementType<UTexture_*> FVar10;
  ForElementType<UTexture_*> _Buf1;
  void *_Buf2;
  FRHICommandListBase *pFVar11;
  FScriptContainerElement *_Src;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  FRHICommandListBase *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  
  uVar12 = 0;
  pFVar14 = (this->MaterialTextureOverrideProxies).AllocatorInstance.Data;
  lVar13 = 0;
  local_res18 = (this->MaterialTextureOverrideProxies).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  local_res20 = pFVar14 + uVar9 * 8;
  local_res10 = param_1;
  do {
    pFVar3 = local_res20;
    if ((this->MaterialTextureOverrideProxies).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSpriteTextureOverrideRenderProxy_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar3) {
      if ((this->bSpritesUseVertexBufferPath != '\0') && (0 < (this->Vertices).ArrayNum)) {
        this_00 = &this->VertexBuffer;
        TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_>::operator=
                  (&(this->VertexBuffer).Vertices,&this->Vertices);
        pFVar11 = local_res10;
        iVar7 = (this->VertexBuffer).NumAllocatedVertices;
        if (iVar7 < 1) {
          (**(code **)(this_00->_padding_ + 0x18))(this_00,local_res10);
          pFVar11 = local_res10;
        }
        else {
          iVar1 = (this->VertexBuffer).Vertices.ArrayNum;
          FPaperSpriteVertexBuffer::CommitVertexData(this_00,local_res10);
          if (iVar7 == iVar1) {
            return;
          }
        }
        FPaperSpriteVertexFactory::Init(&this->VertexFactory,pFVar11,this_00);
      }
      return;
    }
    lVar2 = *(longlong *)pFVar14;
    if (((lVar2 != 0) && (-1 < (int)uVar12)) && ((int)uVar12 < (this->BatchedSections).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar12 < (this->BatchedSections).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->BatchedSections).AllocatorInstance.Data;
      local_78.AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
      _Src = pFVar3 + lVar13 + 0x10;
      local_78.ArrayNum = *(int *)(_Src + 0x28);
      lVar15 = (longlong)local_78.ArrayNum;
      if (*(FScriptContainerElement **)(_Src + 0x20) != (FScriptContainerElement *)0x0) {
        _Src = *(FScriptContainerElement **)(_Src + 0x20);
      }
      if (local_78.ArrayNum == 0) {
        local_78.ArrayMax = 4;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                  (8,8,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
                   &local_78.ArrayMax);
        FVar10 = (ForElementType<UTexture_*>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<UTexture_*>)0x0) {
          FVar10 = local_78.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar10,_Src,lVar15 << 3);
      }
      lVar15 = *(longlong *)(pFVar3 + lVar13 + 8);
      lVar8 = (**(code **)(**(longlong **)(pFVar3 + lVar13) + 0x310))();
      FVar10 = local_78.AllocatorInstance.SecondaryData;
      if ((lVar8 == *(longlong *)(lVar2 + 200)) && (lVar15 == *(longlong *)(lVar2 + 0xd0))) {
        if (local_78.ArrayNum != *(int *)(lVar2 + 0x100)) goto LAB_14ad0874f;
        _Buf2 = (void *)(lVar2 + 0xd8);
        if (*(void **)(lVar2 + 0xf8) != (void *)0x0) {
          _Buf2 = *(void **)(lVar2 + 0xf8);
        }
        _Buf1 = (ForElementType<UTexture_*>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<UTexture_*>)0x0) {
          _Buf1 = local_78.AllocatorInstance.SecondaryData;
        }
        if ((local_78.ArrayNum != 0) &&
           (iVar7 = memcmp((void *)_Buf1,_Buf2,(longlong)local_78.ArrayNum << 3), iVar7 != 0))
        goto LAB_14ad0874f;
      }
      else {
LAB_14ad0874f:
        *(longlong *)(lVar2 + 200) = lVar8;
        *(longlong *)(lVar2 + 0xd0) = lVar15;
        TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
                  ((TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (lVar2 + 0xd8),&local_78);
        *(undefined4 *)(lVar2 + 0x108) = 0xffffffff;
        FVar10 = local_78.AllocatorInstance.SecondaryData;
      }
      if (FVar10 != (ForElementType<UTexture_*>)0x0) {
        FMemory::Free((void *)FVar10);
      }
    }
    uVar9 = (ulonglong)local_res18;
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + 0x48;
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// SetBodySetup_RenderThread @ 14ad09fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy::SetBodySetup_RenderThread(FPaperRenderSceneProxy *this,UBodySetup *param_1)

{
  this->MyBodySetup = param_1;
  return;
}

