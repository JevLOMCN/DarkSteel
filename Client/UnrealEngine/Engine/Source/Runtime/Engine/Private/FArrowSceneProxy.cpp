// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FArrowSceneProxy @ 1477eb300

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

FArrowSceneProxy * __thiscall
FArrowSceneProxy::FArrowSceneProxy(FArrowSceneProxy *this,UArrowComponent *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [2];
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FArrowSceneProxy__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(*(longlong *)&this->field_0x220 + 8),"FArrowSceneProxy")
  ;
  (this->ArrowColor).field0_0x0 = (param_1->ArrowColor).field0_0x0;
  fVar2 = param_1->ArrowSize;
  this->ArrowSize = fVar2;
  fVar7 = param_1->ArrowLength;
  fVar5 = fVar2 * __real_41000000;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar6 = fVar2 * __real_c1800000;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  this->ArrowLength = fVar7;
  fVar7 = fVar7 * fVar2;
  this->bIsScreenSizeScaled = param_1->bIsScreenSizeScaled;
  fVar3 = param_1->ScreenSize;
  pTVar1 = &(this->IndexBuffer).Indices;
  this->field_0x7d = this->field_0x7d & 0xfe;
  this->ScreenSize = fVar3;
  local_50[0]._s_0.Y = 0.0;
  local_50[0]._s_0.Z = 0.0;
  dVar4 = (double)((fVar7 - fVar5) * __real_3f000000);
  local_50[0]._0_8_ = dVar4;
  BuildConeVerts(__real_3eb2b8c3,__real_3eb2b8c3,fVar6,fVar7,0x20,&local_a8,pTVar1);
  local_98._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_98._s_0.Y = _UNK_150689518;
  local_80._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_80._s_0.Y = _UNK_15061cbc8;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = __real_3ff0000000000000;
  local_98._s_0.Z = 0.0;
  local_80._s_0.Z = 0.0;
  BuildCylinderVerts((TVector<double> *)&local_50[0]._s_0,(TVector<double> *)&local_68._s_0,
                     (TVector<double> *)&local_80._s_0,(TVector<double> *)&local_98._s_0,
                     (double)(fVar2 * ___real_40199999),dVar4,0x10,&local_a8,pTVar1);
  FStaticMeshVertexBuffers::InitFromDynamicVertex
            (&this->VertexBuffers,(FRHICommandListBase *)0x0,(FRenderCommandPipe *)0x0,
             &this->VertexFactory,&local_a8,1,0);
  BeginInitResource((FRenderResource *)&this->IndexBuffer,(FRenderCommandPipe *)0x0);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return this;
}

// ~FArrowSceneProxy @ 1477f2f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FArrowSceneProxy::~FArrowSceneProxy(FArrowSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  
  *(undefined ***)this = &___7FArrowSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// GetDynamicMeshElements @ 1478375e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FArrowSceneProxy::GetDynamicMeshElements
          (FArrowSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  FName FVar2;
  FSceneView *this_00;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  TStatIdData *pTVar20;
  FColoredMaterialRenderProxy *pFVar21;
  FMaterialRenderProxy *pFVar22;
  TVector4<double> *pTVar23;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar24;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar25;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar26;
  FName FVar27;
  uint uVar28;
  ForElementType<FMeshBatchElement> FVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  undefined1 auStackY_458 [32];
  longlong local_3f0;
  uint local_3e4;
  FColor_u_0 local_3d8 [2];
  FName local_3d0;
  FMeshElementCollector *local_3c8;
  FName local_3c0;
  FName local_3b8;
  FLinearColor_u_0 local_3a8;
  ForElementType<FMeshBatchElement> local_398;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_390;
  FName local_388;
  FName local_380;
  FName local_378 [2];
  TVector4<double> local_368;
  TMatrix<double> local_348;
  undefined1 local_2c8 [80];
  double local_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [128];
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3c8 = param_4;
  local_390 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_ArrowSceneProxy_DrawDynamicElements = (TStatIdData *)0x0;
    pFVar19 = ::FName::FName(&local_388,"STAT_ArrowSceneProxy_DrawDynamicElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_ArrowSceneProxy_DrawDynamicElements,*pFVar19,
               L"STAT_ArrowSceneProxy_DrawDynamicElements","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar20 = _StatPtr_STAT_ArrowSceneProxy_DrawDynamicElements;
  if (_StatPtr_STAT_ArrowSceneProxy_DrawDynamicElements == (TStatIdData *)0x0) {
    pFVar19 = ::FName::FName(&local_380,"STAT_ArrowSceneProxy_DrawDynamicElements");
    pTVar20 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FArrowSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_ArrowSceneProxy_DrawDynamicElements,*pFVar19,
                         L"STAT_ArrowSceneProxy_DrawDynamicElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar20->Name;
  bVar5 = false;
  bVar6 = false;
  local_3b8.ComparisonIndex.Value = 0;
  local_3b8.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3d8[0]._s_0,(pTVar20->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar6 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3d0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_3d0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3d0,(pTVar20->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ArrowComponent.cpp"
                   ,0x5e);
        bVar5 = true;
        bVar6 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_3c0 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar13 = true;
      goto LAB_147837798;
    }
  }
  bVar6 = bVar14;
  bVar5 = bVar13;
  bVar13 = false;
  local_3c0 = local_3b8;
  FVar27 = local_3b8;
LAB_147837798:
  local_248._0_8_ = *(undefined8 *)&this->field_0x110;
  local_248._8_8_ = *(undefined8 *)&this->field_0x118;
  local_248._16_8_ = *(undefined8 *)&this->field_0x120;
  local_248._24_8_ = *(undefined8 *)&this->field_0x128;
  local_248._32_8_ = *(undefined8 *)&this->field_0x130;
  local_248._40_8_ = *(undefined8 *)&this->field_0x138;
  local_248._48_8_ = *(undefined8 *)&this->field_0x140;
  local_248._56_8_ = *(undefined8 *)&this->field_0x148;
  local_248._64_8_ = *(undefined8 *)&this->field_0x150;
  local_248._72_8_ = *(undefined8 *)&this->field_0x158;
  local_248._80_8_ = *(undefined8 *)&this->field_0x160;
  local_248._88_8_ = *(undefined8 *)&this->field_0x168;
  local_248._96_8_ = *(undefined8 *)&this->field_0x170;
  local_248._104_8_ = *(undefined8 *)&this->field_0x178;
  local_248._112_16_ = *(undefined1 (*) [16])&this->field_0x180;
  pFVar21 = ::operator_new(0xe0);
  if (pFVar21 == (FColoredMaterialRenderProxy *)0x0) {
    pFVar21 = (FColoredMaterialRenderProxy *)0x0;
  }
  else {
    pFVar19 = ::FName::FName(local_378,"GizmoColor");
    FVar2 = *pFVar19;
    local_3a8._s_0.R = FLinearColor::sRGBToLinearTable[(this->ArrowColor).field0_0x0._s_0.R];
    local_3a8._s_0.G = FLinearColor::sRGBToLinearTable[(this->ArrowColor).field0_0x0._s_0.G];
    local_3a8._s_0.B = FLinearColor::sRGBToLinearTable[(this->ArrowColor).field0_0x0._s_0.B];
    local_3a8._s_0.A = (float)(this->ArrowColor).field0_0x0._s_0.A * __real_3b808081;
    pFVar22 = (FMaterialRenderProxy *)
              (**(code **)(((GEngine->ArrowMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))();
    pFVar21 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                        (pFVar21,pFVar22,(FLinearColor *)&local_3a8._s_0,FVar2);
  }
  uVar28 = 0;
  FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,(FMaterialRenderProxy *)pFVar21);
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar10 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  fVar8 = __real_3f800000;
  dVar7 = __real_3ff0000000000000;
  iVar17 = param_1->ArrayNum;
  if (0 < iVar17) {
    local_3e4 = 1;
    local_3f0 = 0;
    do {
      if ((param_3 & local_3e4) != 0) {
        uVar16 = 0;
        if ((int)uVar28 < iVar17) {
          uVar16 = ~uVar28 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar33 = fVar8;
        if ((this->bIsScreenSizeScaled != false) &&
           (this_00 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_3f0),
           dVar7 != (this_00->ViewMatrices).ProjectionMatrix.M[3][3])) {
          dVar31 = (double)(float)(this_00->ViewMatrices).ProjectionMatrix.M[0][0];
          dVar32 = (this_00->ViewMatrices).ProjectionMatrix.M[1][1];
          if (dVar32 <= dVar31) {
            dVar31 = dVar32;
          }
          if ((float)dVar31 != 0.0) {
            pTVar23 = FSceneView::WorldToScreen(this_00,&local_368,&this->Origin);
            dVar32 = (double)(this->ScreenSize / (float)dVar31) * (pTVar23->field0_0x0)._s_0.W;
            fVar30 = (float)(double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar12,
                                             SUB84(dVar32,0) & uVar11);
            if (fVar30 < fVar8) {
              fVar33 = fVar30;
            }
          }
        }
        iVar17 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_4->MeshBatchStorage,1);
        uVar16 = iVar17 / 0x49;
        uVar18 = 0;
        if ((int)uVar16 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar29 = (ForElementType<FMeshBatchElement>)
                 ((ulonglong)(uint)(iVar17 % 0x49) * 0xe0 +
                 (longlong)
                 (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar16]);
        if ((*(int *)((longlong)FVar29 + 0xa0) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_398 = FVar29;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar29 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          local_398 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar29 + 0x98);
        }
        *(FDynamicMeshIndexBuffer32 **)((longlong)local_398 + 0x18) = &this->IndexBuffer;
        *(uint *)((longlong)FVar29 + 0xd4) = *(uint *)((longlong)FVar29 + 0xd4) & 0xffffffbf;
        *(FLocalVertexFactory **)((longlong)FVar29 + 0xa8) = &this->VertexFactory;
        *(FColoredMaterialRenderProxy **)((longlong)FVar29 + 0xb0) = pFVar21;
        paVar3 = &param_4->OneFrameResources->Next;
        aVar24 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
        *(undefined8 *)((longlong)aVar24 + 8) = 0;
        *(undefined ***)aVar24 =
             &
             ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
        ;
        TVar25.Next = *paVar3;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar24 + 8) = TVar25.Next;
          LOCK();
          aVar26 = *paVar3;
          bVar14 = TVar25.Next == aVar26;
          if (bVar14) {
            *paVar3 = aVar24;
            aVar26 = TVar25.Next;
          }
          UNLOCK();
          TVar25.Next = aVar26;
        } while (!bVar14);
        FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar24 + 0x10));
        bVar1 = this->field_0x82;
        if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
           ((bVar1 & 0x60) != 0)) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        local_348.M[0][1] = 0.0;
        local_348.M[1][0] = 0.0;
        dVar32 = (double)fVar33;
        local_348.M[2][3] = 0.0;
        local_348.M[0][2] = 0.0;
        local_348.M[0][3] = 0.0;
        local_348.M[1][2] = 0.0;
        local_348.M[1][3] = 0.0;
        local_348.M[2][0] = 0.0;
        local_348.M[2][1] = 0.0;
        local_348.M[3][0] = 0.0;
        local_348.M[3][1] = 0.0;
        local_348.M[3][2] = dVar9;
        local_348.M[3][3] = dVar10;
        local_348.M[0][0] = dVar32;
        local_348.M[1][1] = dVar32;
        local_348.M[2][2] = dVar32;
        VectorMatrixMultiply(&local_1c8,&local_348,(TMatrix<double> *)local_248);
        local_2c8._64_16_ = ZEXT816(0);
        local_2c8._16_8_ = 0.0;
        local_2c8._24_8_ = 0.0;
        local_2c8._48_8_ = 0.0;
        local_2c8._56_8_ = 0.0;
        local_268 = 0.0;
        dStack_260 = 0.0;
        local_2c8._8_8_ = 0.0;
        local_2c8._32_8_ = 0.0;
        local_270 = 0.0;
        local_258 = dVar9;
        dStack_250 = dVar10;
        local_2c8._0_8_ = dVar32;
        local_2c8._40_8_ = dVar32;
        local_278 = dVar32;
        VectorMatrixMultiply(&local_148,(TMatrix<double> *)local_2c8,(TMatrix<double> *)local_248);
        if ((local_3c8->RHICmdList == (FRHICommandList *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("RHICmdList",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                ,0x46,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_4 = local_3c8;
        FDynamicPrimitiveUniformBuffer::Set
                  ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar24 + 0x10),
                   (FRHICommandListBase *)local_3c8->RHICmdList,&local_148,&local_1c8,
                   (TBoxSphereBounds<double,double> *)&this->field_0x190,
                   (TBoxSphereBounds<double,double> *)&this->field_0x1c8,true,false,bVar14);
        *(undefined8 **)((longlong)local_398 + 8) = (undefined8 *)((longlong)aVar24 + 0x18);
        *(undefined4 *)((longlong)local_398 + 0x58) = 0;
        iVar17 = (this->IndexBuffer).Indices.ArrayNum;
        *(undefined4 *)((longlong)local_398 + 0x68) = 0;
        *(int *)((longlong)local_398 + 0x5c) =
             iVar17 / 3 + (iVar17 >> 0x1f) +
             (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(uint *)((longlong)local_398 + 0x6c) =
             (this->VertexBuffers).PositionVertexBuffer.NumVertices - 1;
        *(uint *)((longlong)FVar29 + 0xd4) =
             ((byte)this->field_0x78 & 1 ^ *(uint *)((longlong)FVar29 + 0xd4) & 0xfffffffe) &
             0xffffc07f;
        FMeshElementCollector::AddMesh(param_4,uVar28,(FMeshBatch *)FVar29);
        param_1 = local_390;
      }
      iVar17 = param_1->ArrayNum;
      local_3f0 = local_3f0 + 8;
      local_3e4 = local_3e4 << 1 | (uint)((int)local_3e4 < 0);
      uVar28 = uVar28 + 1;
      FVar27 = local_3c0;
    } while ((int)uVar28 < iVar17);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14783a740

uint __thiscall FArrowSceneProxy::GetMemoryFootprint(FArrowSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x680;
}

// GetTypeHash @ 14783dfb0

ulong64 __thiscall FArrowSceneProxy::GetTypeHash(FArrowSceneProxy *this)

{
  return 0x1551f5eb0;
}

// GetViewRelevance @ 14783e520

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
FArrowSceneProxy::GetViewRelevance
          (FArrowSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if ((!bVar2) || (uVar3 = 4, (param_1->Family->EngineShowFlags).BillboardSprites == 0)) {
    uVar3 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 8;
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar3 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar3 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      ((char)(ZPULL(*(undefined4 *)&__return_storage_ptr__->field_0x8,7,1) << 7) < '\0')))) {
    uVar3 = 0x10;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(undefined4 *)&__return_storage_ptr__->field_0x8 & 0xffffffef | uVar3;
  return __return_storage_ptr__;
}

// OnTransformChanged @ 1478479d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FArrowSceneProxy::OnTransformChanged(FArrowSceneProxy *this,FRHICommandListBase *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&this->field_0x178;
  dVar2 = *(double *)&this->field_0x180;
  (this->Origin).field0_0x0._s_0.X = *(double *)&this->field_0x170;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = dVar2;
  return;
}

