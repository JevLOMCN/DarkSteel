// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FMaterialSpriteSceneProxy @ 1478a7b90

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialSpriteSceneProxy * __thiscall
FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy
          (FMaterialSpriteSceneProxy *this,UMaterialBillboardComponent *param_1)

{
  int *piVar1;
  TArray<FMaterialSpriteElement,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMaterialSpriteElement *pFVar4;
  longlong lVar5;
  UMaterialInterface *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FMaterialSpriteSceneProxy *pFVar9;
  FMaterialRelevance FVar10;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar11;
  undefined ***pppuVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_108 [32];
  undefined1 local_c0 [8];
  code *local_b8 [2];
  undefined **local_a8;
  FMaterialSpriteSceneProxy *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FMaterialSpriteSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar15 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FMaterialSpriteSceneProxy__6B_;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  pTVar2 = &this->Elements;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Elements).ArrayMax;
  iVar3 = (param_1->Elements).ArrayNum;
  pFVar4 = (FMaterialSpriteElement *)(param_1->Elements).AllocatorInstance.Data;
  (this->Elements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FMaterialSpriteElement,FMaterialSpriteElement,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  lVar5 = *(longlong *)&this->field_0x220;
  (this->BaseColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(lVar5 + 8),"FMaterialSpriteSceneProxy");
  uVar16 = uVar15;
  if (0 < (this->Elements).ArrayNum) {
    do {
      uVar14 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar14 < (this->Elements).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FMaterialSpriteSceneProxy *)(*pcVar6)();
        return pFVar9;
      }
      this_00 = *(UMaterialInterface **)((pTVar2->AllocatorInstance).Data + uVar16);
      if (this_00 != (UMaterialInterface *)0x0) {
        FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
        FVar10 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)local_c0);
        uVar13 = *(uint *)&(this->MaterialRelevance).field0_0x0 >> 0x12;
        (this->MaterialRelevance).field0_0x0.Raw =
             (this->MaterialRelevance).field0_0x0.Raw | *(ulonglong *)FVar10.field0_0x0;
        uVar8 = *(uint *)FVar10.field0_0x0 >> 0x12;
        if (((byte)(*(uint *)FVar10.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar13 & 0x3f)) {
          uVar8 = uVar13;
        }
        uVar13 = (uint)(this->MaterialRelevance).field0_0x0.Raw;
        *(uint *)&(this->MaterialRelevance).field0_0x0 =
             (uVar8 << 0x12 ^ uVar13) & 0xfc0000 ^ uVar13;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x28;
    } while ((int)(uVar14 + 1) < (this->Elements).ArrayNum);
  }
  this->field_0x7c = this->field_0x7c | 1;
  FPositionVertexBuffer::Init(&(this->StaticMeshVertexBuffers).PositionVertexBuffer,1,true);
  FStaticMeshVertexBuffer::Init(&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,1,1,true);
  FColorVertexBuffer::Init(&(this->StaticMeshVertexBuffers).ColorVertexBuffer,1,true);
  local_90 = (undefined ***)0x0;
  local_a8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0FMaterialSpriteSceneProxy__QEAA_PEBVUMaterialBillboardComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_a0 = this;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy_::__l2::TSTR_FMaterialSpriteSceneProxyInit87>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy'::__l2::TSTR_FMaterialSpriteSceneProxyInit87>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar11);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FMaterialSpriteSceneProxy *)(*pcVar6)();
      return pFVar9;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar12 = local_60;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar12 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar12 = local_90;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return this;
}

// operator() @ 1478adbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMaterialSpriteSceneProxy::FMaterialSpriteSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x338) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x280) + 0x18))
            ((longlong *)(*(longlong *)this + 0x280),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x388) + 0x18))
            ((longlong *)(*(longlong *)this + 0x388),param_1);
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
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x338),
             (FVertexFactory *)(*(longlong *)this + 0x3f8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x280),
             (FVertexFactory *)(*(longlong *)this + 0x3f8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x280),
             (FVertexFactory *)(*(longlong *)this + 0x3f8),(FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x280),
             (FVertexFactory *)(*(longlong *)this + 0x3f8),(FStaticMeshDataType *)&local_e8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x388),
             (FVertexFactory *)(*(longlong *)this + 0x3f8),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x3f8),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x3f8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x3f8),param_1);
  return;
}

// CanBeOccluded @ 1478b8810

bool __thiscall FMaterialSpriteSceneProxy::CanBeOccluded(FMaterialSpriteSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 1478d2d70

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
FMaterialSpriteSceneProxy::GetDynamicMeshElements
          (FMaterialSpriteSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FLocalVertexFactory *this_00;
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_01;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_02;
  uchar *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  uchar *puVar5;
  FRHICommandListBase *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  ESceneDepthPriorityGroup EVar20;
  TStatId TVar21;
  longlong lVar22;
  FMaterialRenderProxy *pFVar23;
  ulonglong uVar24;
  ForElementType<FMeshBatchElement> FVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ForElementType<FMeshBatchElement> FVar29;
  uint uVar30;
  ulonglong uVar31;
  FPositionVertexBuffer *this_03;
  uint uVar32;
  FSceneView *pFVar33;
  FStaticMeshVertexBuffers *this_04;
  longlong lVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  uint uVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  double dVar55;
  undefined1 auVar54 [16];
  float fVar56;
  double dVar57;
  double dVar60;
  undefined1 auVar58 [16];
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auStackY_538 [32];
  ushort local_508;
  ushort local_506;
  ushort local_504;
  ushort local_502;
  ushort local_500;
  ushort local_4fe;
  ushort local_4fc;
  ushort local_4fa;
  uint local_4f8;
  float local_4f4;
  float local_4f0;
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  FCycleCounter local_4d8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  int local_4b8;
  undefined4 local_4b4;
  double local_4b0;
  longlong local_4a8;
  FLinearColor_u_0 local_4a0;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_480;
  double local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  TVector<float>_u_0 local_458;
  TVector<float>_u_0 local_448;
  TVector<float>_u_0 local_438;
  TVector<float>_u_0 local_428;
  TVector<float>_u_0 local_418;
  TVector<float>_u_0 local_408;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  double dStack_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  uint local_3c8;
  uint uStack_3c4;
  double dStack_3c0;
  double local_3b8;
  double local_3a8;
  double local_398;
  FMeshElementCollector *local_390;
  undefined1 local_388 [16];
  FSceneView *local_378;
  FPositionVertexBuffer *local_370;
  wchar_t *local_368;
  wchar_t **local_360;
  double local_358;
  FSourceLocation local_348;
  uint local_328;
  uint uStack_324;
  double dStack_320;
  TVector<double>_u_0 local_318 [2];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  FDataType local_2c8;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_390 = param_4;
  local_4f8 = param_3;
  local_480 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_MaterialSpriteSceneProxy_GetDynamicMeshElements = 0;
    FThreadSafeStaticStatInner<`FMaterialSpriteSceneProxy::GetDynamicMeshElements'::__l2::FStat_STAT_MaterialSpriteSceneProxy_GetDynamicMeshElements,1>
    ::GetStatId(&`public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                 ::__l2::StatPtr_STAT_MaterialSpriteSceneProxy_GetDynamicMeshElements);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar21 = FThreadSafeStaticStatInner<`FMaterialSpriteSceneProxy::GetDynamicMeshElements'::__l2::FStat_STAT_MaterialSpriteSceneProxy_GetDynamicMeshElements,1>
           ::GetStatId(&`public:_virtual_void___cdecl_FMaterialSpriteSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                        ::__l2::StatPtr_STAT_MaterialSpriteSceneProxy_GetDynamicMeshElements);
  local_348.Impl._Line = 0x74;
  local_348.Impl._Column = 3;
  local_348.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MaterialBillboardComponent.cpp"
  ;
  local_348.Impl._Function =
       "void __cdecl FMaterialSpriteSceneProxy::GetDynamicMeshElements(const class TArray<class FSceneView const *,class TSizedDefaultAllocator<32> > &,const class FSceneViewFamily &,unsigned int,class FMeshElementCollector &) const"
  ;
  local_4d8.StatId.ComparisonIndex.Value = 0;
  local_4d8.StatId.Number = 0;
  local_4d8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_4d8,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_348);
  local_4b8 = (this->Elements).ArrayNum * 4;
  uVar28 = local_4b8 * param_1->ArrayNum;
  if (0 < (int)uVar28) {
    this_03 = &(this->StaticMeshVertexBuffers).PositionVertexBuffer;
    local_370 = this_03;
    FPositionVertexBuffer::Init(this_03,uVar28,true);
    FStaticMeshVertexBuffer::Init
              (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,uVar28,1,true);
    FColorVertexBuffer::Init(&(this->StaticMeshVertexBuffers).ColorVertexBuffer,uVar28,true);
    iVar19 = param_1->ArrayNum;
    local_4e4 = 0;
    if (0 < iVar19) {
      auVar40._8_8_ = _UNK_150689518;
      auVar40._0_8_ = ___xmm_00000000000000003ff0000000000000;
      auVar59._8_8_ = _UNK_15061cbc8;
      auVar59._0_8_ = ___xmm_3ff00000000000000000000000000000;
      local_4e0 = 1;
      local_4a8 = 0;
      uVar28 = local_4f8;
      do {
        lVar34 = local_4a8;
        uVar30 = local_4e0;
        uVar32 = local_4e4;
        if ((uVar28 & local_4e0) != 0) {
          uVar28 = 0;
          if ((int)local_4e4 < iVar19) {
            uVar28 = ~local_4e4 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_358 = *(double *)&this->field_0x170;
          local_3b8 = *(double *)&this->field_0x178;
          local_3a8 = *(double *)&this->field_0x180;
          dVar55 = auVar40._8_8_;
          dVar38 = auVar40._0_8_;
          pFVar33 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar34);
          dVar46 = (pFVar33->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y - local_3b8;
          dVar57 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[1][0];
          dVar61 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[1][1];
          dVar43 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[0][0];
          dVar44 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[0][1];
          dVar10 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[2][0];
          dVar11 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[2][1];
          dVar12 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[3][0];
          dVar13 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[3][1];
          dVar14 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[1][2];
          dVar15 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[0][2];
          dVar16 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[2][2];
          dVar17 = (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[3][2];
          dVar42 = (pFVar33->ViewMatrices).ViewOrigin.field0_0x0._s_0.X - local_358;
          dVar37 = (pFVar33->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z - local_3a8;
          auVar54._8_4_ = auVar40._0_4_;
          auVar54._0_8_ = dVar38;
          auVar54._12_4_ = auVar40._4_4_;
          auVar39._0_8_ = dVar37 * dVar37;
          auVar39._8_8_ = 0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = dVar46 * dVar46 + dVar42 * dVar42 + auVar39._0_8_;
          auVar40 = sqrtpd(auVar39,auVar8);
          local_4f4 = (float)auVar40._0_8_;
          dVar37 = dVar38 * dVar43 + dVar57 * dVar55 + dVar10 * 0.0 + dVar12 * 0.0;
          dVar42 = auVar54._8_8_ * dVar44 + dVar61 * dVar55 + dVar11 * 0.0 + dVar13 * 0.0;
          auVar58._0_8_ = auVar59._0_8_;
          dVar60 = auVar59._8_8_;
          auVar58._8_4_ = auVar59._0_4_;
          auVar58._12_4_ = auVar59._4_4_;
          dVar38 = dVar38 * dVar15 + dVar14 * dVar55 + dVar16 * 0.0 + dVar17 * 0.0;
          dVar57 = auVar58._0_8_ * dVar43 + dVar57 * dVar60 + dVar10 * 0.0 + dVar12 * 0.0;
          dVar61 = auVar58._8_8_ * dVar44 + dVar61 * dVar60 + dVar11 * 0.0 + dVar13 * 0.0;
          uVar3 = *(undefined8 *)&this->field_0x110;
          dVar46 = auVar58._0_8_ * (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[0][3] +
                   (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[1][3] * dVar60 +
                   (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[2][3] * 0.0 +
                   (pFVar33->ViewMatrices).InvViewProjectionMatrix.M[3][3] * 0.0;
          local_388._8_4_ = SUB84(dVar46,0);
          local_388._0_8_ = auVar58._0_8_ * dVar15 + dVar14 * dVar60 + dVar16 * 0.0 + dVar17 * 0.0;
          local_388._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          local_378 = pFVar33;
          if ((((double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                __real_3e45798ee0000000) &&
              ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x118 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)*(undefined8 *)&this->field_0x118 &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
               __real_3e45798ee0000000)) &&
             (uVar28 = (uint)*(undefined8 *)&this->field_0x120 &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar45 = (uint)((ulonglong)*(undefined8 *)&this->field_0x120 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             (double)CONCAT44(uVar45,uVar28) < __real_3e45798ee0000000 ||
             (double)CONCAT44(uVar45,uVar28) == __real_3e45798ee0000000)) {
            if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x130 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)*(undefined8 *)&this->field_0x130 &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  __real_3e45798ee0000000) &&
                ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x138 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)*(undefined8 *)&this->field_0x138 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3e45798ee0000000)) &&
               (uVar28 = (uint)*(undefined8 *)&this->field_0x140 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar45 = (uint)((ulonglong)*(undefined8 *)&this->field_0x140 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               (double)CONCAT44(uVar45,uVar28) < __real_3e45798ee0000000 ||
               (double)CONCAT44(uVar45,uVar28) == __real_3e45798ee0000000)) {
              local_318[0]._0_8_ = *(undefined8 *)&this->field_0x150;
              local_318[0]._8_8_ = *(undefined8 *)&this->field_0x158;
              local_318[0]._16_8_ = *(undefined8 *)&this->field_0x160;
              bVar18 = UE::Math::TVector<double>::IsNearlyZero
                                 ((TVector<double> *)&local_318[0]._s_0,__real_3e45798ee0000000);
              if (bVar18) {
                UE::Math::TMatrix<double>::ErrorEnsure
                          (
                          L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
                          );
              }
            }
          }
          bVar18 = FMath::MatrixInverse(&local_168,(TMatrix<double> *)&this->field_0x110);
          if (!bVar18) {
            local_368 = 
            L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
            ;
            if (1 < (byte)LogUnrealMath._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
            }
            local_360 = &local_368;
            `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_360);
          }
          VectorMatrixMultiply(&local_1e8,&(pFVar33->ViewMatrices).InvViewMatrix,&local_168);
          dVar46 = local_1e8.M[1][0] * _UNK_150689518 +
                   local_1e8.M[0][0] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[2][0] * 0.0 + local_1e8.M[3][0] * 0.0;
          dStack_320 = local_1e8.M[1][1] * _UNK_150689518 +
                       local_1e8.M[0][1] * ___xmm_00000000000000003ff0000000000000 +
                       local_1e8.M[2][1] * 0.0 + local_1e8.M[3][1] * 0.0;
          dVar43 = local_1e8.M[1][2] * _UNK_150689518 +
                   local_1e8.M[0][2] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[2][2] * 0.0 + local_1e8.M[3][2] * 0.0;
          dVar44 = local_1e8.M[1][3] * _UNK_150689518 +
                   local_1e8.M[0][3] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[2][3] * 0.0 + local_1e8.M[3][3] * 0.0;
          local_478 = (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar46,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          local_328 = SUB84(dStack_320,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uStack_324 = (uint)((ulonglong)dStack_320 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_;
          local_3d8._0_4_ = SUB84(dVar43,0);
          local_3d8._4_4_ = (uint)((ulonglong)dVar43 >> 0x20);
          local_3d8._4_4_ = local_3d8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
          local_3d8._0_4_ = (uint)local_3d8 ^ (uint)__xmm_80000000000000008000000000000000;
          uStack_3d0 = SUB84(dVar44,0);
          uStack_3cc = (int)((ulonglong)dVar44 >> 0x20);
          dVar43 = local_1e8.M[1][0] * _UNK_15061cbc8 +
                   local_1e8.M[0][0] * ___xmm_3ff00000000000000000000000000000 +
                   local_1e8.M[2][0] * 0.0 + local_1e8.M[3][0] * 0.0;
          dVar44 = local_1e8.M[1][1] * _UNK_15061cbc8 +
                   local_1e8.M[0][1] * ___xmm_3ff00000000000000000000000000000 +
                   local_1e8.M[2][1] * 0.0 + local_1e8.M[3][1] * 0.0;
          uVar24 = 0;
          local_4e8 = 0;
          dVar46 = local_1e8.M[1][2] * _UNK_15061cbc8 +
                   local_1e8.M[0][2] * ___xmm_3ff00000000000000000000000000000 +
                   local_1e8.M[2][2] * 0.0 + local_1e8.M[3][2] * 0.0;
          dStack_3e0 = local_1e8.M[1][3] * _UNK_15061cbc8 +
                       local_1e8.M[0][3] * ___xmm_3ff00000000000000000000000000000 +
                       local_1e8.M[2][3] * 0.0 + local_1e8.M[3][3] * 0.0;
          local_4c8._0_4_ = SUB84(dVar43,0);
          local_4c8._4_4_ = (uint)((ulonglong)dVar43 >> 0x20);
          uStack_4c0._0_4_ = SUB84(dVar44,0);
          uStack_4c0._4_4_ = (uint)((ulonglong)dVar44 >> 0x20);
          local_4b0 = (double)CONCAT44(local_4c8._4_4_ ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       (uint)local_4c8 ^
                                       (uint)__xmm_80000000000000008000000000000000);
          local_4c8 = (double)CONCAT44(uStack_4c0._4_4_ ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       (uint)uStack_4c0 ^
                                       (uint)__xmm_80000000000000008000000000000000);
          local_3e8 = (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar46,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          dVar46 = local_1e8.M[1][0] * 0.0 + local_1e8.M[0][0] * 0.0 +
                   local_1e8.M[2][0] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[3][0] * _UNK_150689518;
          dVar43 = local_1e8.M[1][1] * 0.0 + local_1e8.M[0][1] * 0.0 +
                   local_1e8.M[2][1] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[3][1] * _UNK_150689518;
          local_3f8._8_4_ = SUB84(dVar43,0);
          local_3f8._12_4_ = (uint)((ulonglong)dVar43 >> 0x20);
          local_398 = (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar46,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          local_3f8._0_4_ = local_3f8._8_4_ ^ (uint)__xmm_80000000000000008000000000000000;
          local_3f8._4_4_ = local_3f8._12_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
          dVar46 = local_1e8.M[1][2] * 0.0 + local_1e8.M[0][2] * 0.0 +
                   local_1e8.M[2][2] * ___xmm_00000000000000003ff0000000000000 +
                   local_1e8.M[3][2] * _UNK_150689518;
          dStack_3c0 = local_1e8.M[1][3] * 0.0 + local_1e8.M[0][3] * 0.0 +
                       local_1e8.M[2][3] * ___xmm_00000000000000003ff0000000000000 +
                       local_1e8.M[3][3] * _UNK_150689518;
          uVar28 = SUB84(dVar46,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar45 = (uint)((ulonglong)dVar46 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          _local_3c8 = CONCAT44(uVar45,uVar28);
          uStack_4c0 = dVar44;
          if (0 < (this->Elements).ArrayNum) {
            dVar46 = dVar42 * dVar42 + dVar37 * dVar37 + dVar38 * dVar38;
            dVar38 = dVar61 * dVar61 + dVar57 * dVar57 +
                     (double)local_388._0_8_ * (double)local_388._0_8_;
            local_2e8._8_4_ = SUB84(dVar42,0);
            local_2e8._0_8_ = dVar46;
            local_2e8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
            local_2d8._8_4_ = SUB84(dVar61,0);
            local_2d8._0_8_ = dVar38;
            local_2d8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
            uVar31 = uVar24;
            uVar26 = (uint)__xmm_80000000000000008000000000000000;
            uVar52 = __xmm_80000000000000008000000000000000._4_4_;
            do {
              uVar27 = (uint)uVar24;
              uVar30 = 0;
              if ((int)uVar27 < (this->Elements).ArrayNum) {
                uVar30 = ~uVar27 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar36 = local_4f4;
              pFVar4 = (this->Elements).AllocatorInstance.Data;
              local_388._0_8_ = pFVar4;
              if (*(longlong *)(pFVar4 + uVar31) != 0) {
                fVar47 = *(float *)(pFVar4 + uVar31 + 0x14);
                fVar48 = *(float *)(pFVar4 + uVar31 + 0x18);
                if (*(UCurveFloat **)(pFVar4 + uVar31 + 0x20) != (UCurveFloat *)0x0) {
                  fVar35 = UCurveFloat::GetFloatValue
                                     (*(UCurveFloat **)(pFVar4 + uVar31 + 0x20),local_4f4);
                  fVar47 = fVar47 * fVar35;
                  fVar48 = fVar48 * fVar35;
                }
                dVar57 = (pFVar33->ViewMatrices).ViewProjectionMatrix.M[2][3];
                auVar9._4_8_ = dVar57;
                auVar9._0_4_ = *(undefined4 *)
                                ((longlong)(pFVar33->ViewMatrices).ViewProjectionMatrix.M[3] + 0x14)
                ;
                auVar41._0_8_ = auVar9._0_8_ << 0x20;
                auVar41._8_4_ =
                     *(undefined4 *)((pFVar33->ViewMatrices).ViewProjectionMatrix.M[3] + 3);
                auVar41._12_4_ =
                     *(undefined4 *)
                      ((longlong)(pFVar33->ViewMatrices).ViewProjectionMatrix.M[3] + 0x1c);
                fVar35 = (float)(local_3b8 * (pFVar33->ViewMatrices).ViewProjectionMatrix.M[1][3] +
                                 local_358 * (pFVar33->ViewMatrices).ViewProjectionMatrix.M[0][3] +
                                 local_3a8 * dVar57 + __real_3ff0000000000000 * auVar41._8_8_);
                local_4f0 = fVar47;
                if (((byte)pFVar4[uVar31 + 0x10] & 1) != 0) {
                  fVar48 = (float)((__real_3ff0000000000000 / SQRT(dVar46)) * SQRT(dVar38)) * fVar48
                           * fVar35;
                  local_4f0 = fVar35 * fVar47;
                }
                local_4a0._s_0.R =
                     FLinearColor::sRGBToLinearTable[(this->BaseColor).field0_0x0._s_0.R];
                local_4a0._s_0.G =
                     FLinearColor::sRGBToLinearTable[(this->BaseColor).field0_0x0._s_0.G];
                local_4a0._s_0.B =
                     FLinearColor::sRGBToLinearTable[(this->BaseColor).field0_0x0._s_0.B];
                local_4a0._s_0.A = (float)(this->BaseColor).field0_0x0._s_0.A * __real_3b808081;
                if (*(UCurveFloat **)(pFVar4 + uVar31 + 8) != (UCurveFloat *)0x0) {
                  fVar36 = UCurveFloat::GetFloatValue(*(UCurveFloat **)(pFVar4 + uVar31 + 8),fVar36)
                  ;
                  local_4a0._s_0.A = local_4a0._s_0.A * fVar36;
                }
                lVar34 = 4;
                uVar30 = uVar32 * local_4b8 + uVar27 * 4;
                fVar49 = (float)local_4c8;
                fVar50 = (float)local_3e8;
                fVar51 = (float)(double)CONCAT44((uint)((ulonglong)local_478 >> 0x20) ^ uVar52,
                                                 SUB84(local_478,0) ^ uVar26);
                fVar56 = (float)(double)CONCAT44(local_3d8._4_4_ ^
                                                 __xmm_80000000000000008000000000000000._4_4_,
                                                 (uint)local_3d8 ^
                                                 (uint)__xmm_80000000000000008000000000000000);
                fVar36 = (float)local_398;
                fVar47 = (float)(double)local_3f8._0_8_;
                fVar35 = (float)local_4b0;
                fVar53 = (float)(double)CONCAT44(uStack_324 ^
                                                 __xmm_80000000000000008000000000000000._4_4_,
                                                 local_328 ^
                                                 (uint)__xmm_80000000000000008000000000000000);
                uVar32 = uVar30;
                local_4ec = uVar30;
                do {
                  puVar5 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
                  pcVar7 = *(code **)((longlong)
                                      *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                       TangentsData + 0x50);
                  if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                      bUseHighPrecisionTangentBasis == false) {
                    this_02 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                              (puVar5 + (ulonglong)uVar32 * 8);
                    lVar22 = (*pcVar7)();
                    if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar5 + lVar22) <
                         this_02 + 1) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x145,L""), bVar18)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if ((this_02 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                                   (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                   TangentsDataPtr) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x146,L""), bVar18)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_448._s_0.X = fVar36;
                    local_448._s_0.Y = fVar47;
                    local_448._s_0.Z = (float)(double)CONCAT44(uVar45,uVar28);
                    local_438._s_0.X = fVar35;
                    local_438._s_0.Y = fVar49;
                    local_438._s_0.Z = fVar50;
                    local_428._s_0.X = fVar51;
                    local_428._s_0.Y = fVar53;
                    local_428._s_0.Z = fVar56;
                    TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                              (this_02,(TVector<float> *)&local_428._s_0,
                               (TVector<float> *)&local_438._s_0,(TVector<float> *)&local_448._s_0);
                  }
                  else {
                    this_01 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                              (puVar5 + (ulonglong)uVar32 * 0x10);
                    lVar22 = (*pcVar7)();
                    if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar5 + lVar22) <
                         this_01 + 1) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x13d,L""), bVar18)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                                   (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                   TangentsDataPtr) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x13e,L""), bVar18)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    local_458._s_0.X = fVar51;
                    local_458._s_0.Y = fVar53;
                    local_458._s_0.Z = fVar56;
                    local_418._s_0.X = fVar36;
                    local_418._s_0.Y = fVar47;
                    local_418._s_0.Z = (float)(double)CONCAT44(uVar45,uVar28);
                    local_408._s_0.X = fVar35;
                    local_408._s_0.Y = fVar49;
                    local_408._s_0.Z = fVar50;
                    TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                              (this_01,(TVector<float> *)&local_458._s_0,
                               (TVector<float> *)&local_408._s_0,(TVector<float> *)&local_418._s_0);
                  }
                  FLinearColor::ToFColorSRGB((FLinearColor *)&local_4a0._s_0);
                  uVar26 = uVar32 * (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride;
                  uVar32 = uVar32 + 1;
                  *(undefined4 *)((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data + uVar26) =
                       local_4b4;
                  lVar34 = lVar34 + -1;
                } while (lVar34 != 0);
                puVar5 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
                uVar24 = (ulonglong)
                         (uVar30 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
                dVar57 = (double)(float)((uint)local_4f0 ^ __xmm_80000000800000008000000080000000);
                dVar46 = (double)fVar48;
                dVar61 = (double)CONCAT44(uStack_324,local_328) * dVar46;
                *(float *)(puVar5 + uVar24) = (float)(local_478 * dVar46 + local_4b0 * dVar57);
                *(float *)(puVar5 + uVar24 + 4) = (float)(dVar61 + local_4c8 * dVar57);
                *(float *)(puVar5 + uVar24 + 8) = (float)(local_3d8 * dVar46 + local_3e8 * dVar57);
                uVar24 = (ulonglong)
                         ((uVar30 + 1) * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride
                         );
                puVar5 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
                dVar38 = (double)local_4f0;
                *(float *)(puVar5 + uVar24) = (float)(local_4b0 * dVar38 + local_478 * dVar46);
                *(float *)(puVar5 + uVar24 + 4) = (float)(local_4c8 * dVar38 + dVar61);
                *(float *)(puVar5 + uVar24 + 8) = (float)(local_3e8 * dVar38 + local_3d8 * dVar46);
                uVar24 = (ulonglong)
                         ((uVar30 + 2) * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride
                         );
                puVar5 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
                dVar46 = (double)(float)((uint)fVar48 ^ __xmm_80000000800000008000000080000000);
                dVar61 = (double)CONCAT44(uStack_324,local_328) * dVar46;
                *(float *)(puVar5 + uVar24) = (float)(local_478 * dVar46 + local_4b0 * dVar57);
                local_470 = 0;
                *(float *)(puVar5 + uVar24 + 4) = (float)(dVar61 + local_4c8 * dVar57);
                *(float *)(puVar5 + uVar24 + 8) = (float)(local_3d8 * dVar46 + local_3e8 * dVar57);
                uVar24 = (ulonglong)
                         ((uVar30 + 3) * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride
                         );
                puVar5 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
                *(float *)(puVar5 + uVar24) = (float)(local_478 * dVar46 + local_4b0 * dVar38);
                *(float *)(puVar5 + uVar24 + 4) = (float)(dVar61 + local_4c8 * dVar38);
                *(float *)(puVar5 + uVar24 + 8) = (float)(local_3d8 * dVar46 + local_3e8 * dVar38);
                puVar5 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar34 = (ulonglong)local_4ec *
                         (ulonglong)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
                pcVar7 = *(code **)((longlong)
                                    *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                     TexcoordData + 0x50);
                if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs ==
                    false) {
                  puVar2 = (ushort *)(puVar5 + lVar34 * 4);
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar2 + 2) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_508 = 0;
                  FGenericPlatformMath::StoreHalf(&local_508,0.0);
                  *puVar2 = local_508;
                  local_506 = 0;
                  FGenericPlatformMath::StoreHalf(&local_506,0.0);
                  puVar2[1] = local_506;
                }
                else {
                  puVar1 = puVar5 + lVar34 * 8;
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar1 + 8) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(undefined8 *)puVar1 = local_470;
                }
                puVar5 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar34 = (ulonglong)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                         (ulonglong)(uVar30 + 1);
                local_468 = 0;
                uStack_464 = 0x3f800000;
                pcVar7 = *(code **)((longlong)
                                    *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                     TexcoordData + 0x50);
                if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs ==
                    false) {
                  puVar2 = (ushort *)(puVar5 + lVar34 * 4);
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar2 + 2) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_504 = 0;
                  FGenericPlatformMath::StoreHalf(&local_504,0.0);
                  fVar36 = __real_3f800000;
                  *puVar2 = local_504;
                  local_502 = 0;
                  FGenericPlatformMath::StoreHalf(&local_502,fVar36);
                  puVar2[1] = local_502;
                }
                else {
                  puVar1 = puVar5 + lVar34 * 8;
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar1 + 8) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  fVar36 = __real_3f800000;
                  *(ulonglong *)puVar1 = CONCAT44(uStack_464,local_468);
                }
                puVar5 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar34 = (ulonglong)(uVar30 + 2) *
                         (ulonglong)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
                local_490 = 0x3f800000;
                pcVar7 = *(code **)((longlong)
                                    *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                     TexcoordData + 0x50);
                if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs ==
                    false) {
                  puVar2 = (ushort *)(puVar5 + lVar34 * 4);
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar2 + 2) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_500 = 0;
                  FGenericPlatformMath::StoreHalf(&local_500,fVar36);
                  *puVar2 = local_500;
                  local_4fe = 0;
                  FGenericPlatformMath::StoreHalf(&local_4fe,0.0);
                  puVar2[1] = local_4fe;
                }
                else {
                  puVar1 = puVar5 + lVar34 * 8;
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar1 + 8) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(undefined8 *)puVar1 = local_490;
                }
                puVar5 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
                lVar34 = (ulonglong)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                         (ulonglong)(uVar30 + 3);
                local_488 = 0x3f800000;
                uStack_484 = 0x3f800000;
                pcVar7 = *(code **)((longlong)
                                    *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                     TexcoordData + 0x50);
                if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs ==
                    false) {
                  puVar2 = (ushort *)(puVar5 + lVar34 * 4);
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar2 + 2) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x166,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x167,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_4fc = 0;
                  FGenericPlatformMath::StoreHalf(&local_4fc,fVar36);
                  *puVar2 = local_4fc;
                  local_4fa = 0;
                  FGenericPlatformMath::StoreHalf(&local_4fa,fVar36);
                  puVar2[1] = local_4fa;
                }
                else {
                  puVar1 = puVar5 + lVar34 * 8;
                  lVar34 = (*pcVar7)();
                  if ((puVar5 + lVar34 < puVar1 + 8) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15d,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.
                                TexcoordDataPtr) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                          ,0x15e,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(ulonglong *)puVar1 = CONCAT44(uStack_484,local_488);
                }
                param_4 = local_390;
                iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                         ::Add(&local_390->MeshBatchStorage,1);
                uVar28 = iVar19 / 0x49;
                uVar32 = 0;
                if ((int)uVar28 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                  uVar32 = ~uVar28 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar29 = (ForElementType<FMeshBatchElement>)
                         ((longlong)
                          (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                          [(int)uVar28] + (ulonglong)(uint)(iVar19 % 0x49) * 0xe0);
                *(FLocalVertexFactory **)((longlong)FVar29 + 0xa8) = &this->VertexFactory;
                pFVar23 = (FMaterialRenderProxy *)
                          (**(code **)(**(longlong **)(local_388._0_8_ + uVar31) + 0x310))();
                pFVar33 = local_378;
                *(FMaterialRenderProxy **)((longlong)FVar29 + 0xb0) = pFVar23;
                *(FLightCacheInterface **)((longlong)FVar29 + 0xb8) = (FLightCacheInterface *)0x0;
                *(uint *)((longlong)FVar29 + 0xd4) =
                     (byte)this->field_0x78 & 1 | *(uint *)((longlong)FVar29 + 0xd4) & 0xfffffffa;
                EVar20 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                   ((FPrimitiveSceneProxy *)this,local_378);
                *(ESceneDepthPriorityGroup *)((longlong)FVar29 + 0xd4) =
                     ((EVar20 & 7) << 10 ^ *(uint *)((longlong)FVar29 + 0xd4) & 0xffffe3ff) &
                     0xfffffcff | 0x82;
                if ((*(int *)((longlong)FVar29 + 0xa0) < 1) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar32 = local_4e4;
                FVar25 = FVar29;
                if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar29 + 0x98) !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar25 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar29 + 0x98);
                }
                *(undefined8 *)((longlong)FVar25 + 0x18) = 0;
                *(undefined4 *)((longlong)FVar25 + 0x58) = 0;
                *(undefined4 *)((longlong)FVar25 + 0x68) = 0;
                *(uint *)((longlong)FVar25 + 100) = local_4ec;
                *(undefined4 *)((longlong)FVar25 + 0x6c) = 3;
                *(undefined4 *)((longlong)FVar25 + 0x5c) = 2;
                *(uint *)((longlong)FVar29 + 0xd4) = *(uint *)((longlong)FVar29 + 0xd4) | 0x2000;
                *(uint *)((longlong)FVar29 + 0xd4) =
                     -(uint)((this->field_0x79 & 6) != 0) & 0x4000 |
                     *(uint *)((longlong)FVar29 + 0xd4) & 0xffffbfff;
                FMeshElementCollector::AddMesh(param_4,local_4e4,(FMeshBatch *)FVar29);
                uVar28 = local_3c8;
                uVar45 = uStack_3c4;
                uVar26 = (uint)__xmm_80000000000000008000000000000000;
                uVar52 = __xmm_80000000000000008000000000000000._4_4_;
                uVar27 = local_4e8;
                dVar46 = (double)local_2e8._0_8_;
                dVar38 = (double)local_2d8._0_8_;
              }
              local_4e8 = uVar27 + 1;
              uVar24 = (ulonglong)local_4e8;
              uVar31 = uVar31 + 0x28;
              uVar30 = local_4e0;
            } while ((int)local_4e8 < (this->Elements).ArrayNum);
          }
          local_4e4 = uVar32;
          local_4e0 = uVar30;
          auVar59._8_8_ = _UNK_15061cbc8;
          auVar59._0_8_ = ___xmm_3ff00000000000000000000000000000;
          auVar40._8_8_ = _UNK_150689518;
          auVar40._0_8_ = ___xmm_00000000000000003ff0000000000000;
          param_1 = local_480;
          uVar28 = local_4f8;
        }
        iVar19 = param_1->ArrayNum;
        local_4e4 = local_4e4 + 1;
        local_4e0 = local_4e0 << 1 | (uint)((int)local_4e0 < 0);
        local_4a8 = local_4a8 + 8;
        this_03 = local_370;
      } while ((int)local_4e4 < iVar19);
    }
    this_04 = &this->StaticMeshVertexBuffers;
    this_00 = &this->VertexFactory;
    if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                            ,0x46,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (FRHICommandListBase *)param_4->RHICmdList;
    FRenderResource::UpdateRHI((FRenderResource *)this_03,pFVar6);
    FRenderResource::UpdateRHI((FRenderResource *)this_04,pFVar6);
    FRenderResource::UpdateRHI
              ((FRenderResource *)&(this->StaticMeshVertexBuffers).ColorVertexBuffer,pFVar6);
    local_2c8._padding_._4_4_ = 4;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_._0_4_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_._0_4_ = 0xffffffff;
    local_2c8._padding_._4_2_ = 0xff;
    local_2c8._padding_._6_1_ = 0;
    local_2c8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
    local_2c8.PreSkinPositionComponent.StreamOffset = 0;
    local_2c8.PreSkinPositionComponent.Offset = '\0';
    local_2c8.PreSkinPositionComponent.Stride = '\0';
    local_2c8.PreSkinPositionComponent.Type.Value = '\0';
    local_2c8.PreSkinPositionComponent.VertexStreamUsage = Default;
    local_2c8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
    FPositionVertexBuffer::BindPositionVertexBuffer
              (this_03,(FVertexFactory *)this_00,(FStaticMeshDataType *)&local_2c8);
    FStaticMeshVertexBuffer::BindTangentVertexBuffer
              (&this_04->StaticMeshVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_2c8);
    FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
              (&this_04->StaticMeshVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_2c8,-1);
    FStaticMeshVertexBuffer::BindLightMapVertexBuffer
              (&this_04->StaticMeshVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_2c8,0);
    FColorVertexBuffer::BindColorVertexBuffer
              (&(this->StaticMeshVertexBuffers).ColorVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_2c8);
    FLocalVertexFactory::SetData(this_00,pFVar6,&local_2c8);
  }
  if ((local_4d8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4d8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4d8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_4d8.StatId,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1478d63c0

uint __thiscall FMaterialSpriteSceneProxy::GetMemoryFootprint(FMaterialSpriteSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x630;
}

// GetTypeHash @ 1478ddad0

ulong64 __thiscall FMaterialSpriteSceneProxy::GetTypeHash(FMaterialSpriteSceneProxy *this)

{
  return 0x1551f79c8;
}

// GetViewRelevance @ 1478dec80

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
FMaterialSpriteSceneProxy::GetViewRelevance
          (FMaterialSpriteSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
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
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || ((this->field_0x82 & 0x72) != 0)))) &&
     (((__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar3;
  return __return_storage_ptr__;
}

